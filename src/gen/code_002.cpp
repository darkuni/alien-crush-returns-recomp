#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8004E6E8
void f_8004E6E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E6E8
  c->r[0]=c->lr; // 8004E6EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004E6F0
  c->r[0]=0u+0xFFFFFFFFu; // 8004E6F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004E6F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004E6FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004E700
  c->r[29]=c->r[3]|c->r[3]; // 8004E704
  c->r[5]=R32(c->r[4]+0x00000174u); // 8004E708
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8004E70C
  c->r[31]=c->r[3]+c->r[5]; // 8004E710
  W32(c->r[31]+0x00000064u,c->r[0]); // 8004E714
  c->r[12]=R32(c->r[3]+0x00000000u); // 8004E718
  c->r[12]=R32(c->r[12]+0x00000054u); // 8004E71C
  c->ctr=c->r[12]; // 8004E720
  if (true) { c->lr=0x8004E728u; dispatch(c,c->ctr); } // 8004E724
  {uint32_t ea=c->r[2]+0xFFFF8B88u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004E728
  fcmp(c,0,c->f[1],c->f[2]); // 8004E72C
  c->r[3]=c->cr; // 8004E730
  c->r[0]=0u+0x43300000u; // 8004E734
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 8004E738
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004E73C
  c->r[3]=c->r[3]^0x80000000u; // 8004E740
  {uint32_t ea=c->r[2]+0xFFFF8B90u; c->f[1]=RF64(ea);} // 8004E744
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004E748
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8004E74C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8004E750
  fcmp(c,0,c->f[0],c->f[2]); // 8004E754
  if (crb(c,2)) { goto L_8004E798; } // 8004E758
  c->r[30]=R32(c->r[29]+0x0000005Cu); // 8004E75C
  cmps(c,0,(int32_t)c->r[30],0); // 8004E760
  if (crb(c,0)) { goto L_8004E798; } // 8004E764
  c->r[12]=R32(c->r[29]+0x00000000u); // 8004E768
  c->r[3]=c->r[29]|c->r[29]; // 8004E76C
  c->r[12]=R32(c->r[12]+0x00000068u); // 8004E770
  c->ctr=c->r[12]; // 8004E774
  if (true) { c->lr=0x8004E77Cu; dispatch(c,c->ctr); } // 8004E778
  cmps(c,0,(int32_t)c->r[3],0); // 8004E77C
  if (!crb(c,2)) { goto L_8004E790; } // 8004E780
  c->r[3]=c->r[30]|c->r[30]; // 8004E784
  c->lr=0x8004E78Cu; f_800DA0C8(c); // 8004E788
  goto L_8004E794; // 8004E78C
L_8004E790:;
  c->lr=0x8004E794u; f_800DA0D0(c); // 8004E790
L_8004E794:;
  W32(c->r[31]+0x00000064u,c->r[3]); // 8004E794
L_8004E798:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004E798
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004E79C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004E7A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004E7A4
  c->lr=c->r[0]; // 8004E7A8
  c->r[1]=c->r[1]+0x00000020u; // 8004E7AC
  return; // 8004E7B0
}

// fn_8004E7B4
void f_8004E7B4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8004E7B4
  return; // 8004E7B8
}

// fn_8004E7BC
void f_8004E7BC(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 8004E7BC
  c->r[5]=0u+0xFFFFFFFFu; // 8004E7C0
  c->r[12]=R32(c->r[12]+0x00000028u); // 8004E7C4
  c->ctr=c->r[12]; // 8004E7C8
  if (true) { dispatch(c,c->ctr); return; } // 8004E7CC
}

// fn_8004E7D0
void f_8004E7D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E7D0
  c->r[0]=c->lr; // 8004E7D4
  W32(c->r[1]+0x00000064u,c->r[0]); // 8004E7D8
  c->r[11]=c->r[1]+0x00000060u; // 8004E7DC
  c->lr=0x8004E7E4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004E7E0
  c->r[0]=R32(c->r[4]+0x00000174u); // 8004E7E4
  c->r[27]=c->r[4]|c->r[4]; // 8004E7E8
  c->r[25]=c->r[3]|c->r[3]; // 8004E7EC
  c->r[26]=c->r[5]|c->r[5]; // 8004E7F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8004E7F4
  c->r[4]=c->r[3]+c->r[0]; // 8004E7F8
  c->r[31]=R32(c->r[4]+0x00000064u); // 8004E7FC
  cmps(c,0,(int32_t)c->r[31],0); // 8004E800
  if (crb(c,0)) { goto L_8004E98C; } // 8004E804
  c->r[12]=R32(c->r[3]+0x00000000u); // 8004E808
  c->r[30]=0u+0x00000000u; // 8004E80C
  c->r[12]=R32(c->r[12]+0x00000050u); // 8004E810
  c->ctr=c->r[12]; // 8004E814
  if (true) { c->lr=0x8004E81Cu; dispatch(c,c->ctr); } // 8004E818
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8004E81C
  c->r[29]=c->r[3]|c->r[3]; // 8004E820
  if (crb(c,2)) { goto L_8004E82C; } // 8004E824
  c->r[30]=0u+0x00000001u; // 8004E828
L_8004E82C:;
  cmps(c,0,(int32_t)c->r[30],1); // 8004E82C
  if (!crb(c,2)) { goto L_8004E84C; } // 8004E830
  c->r[3]=0u+0x00000001u; // 8004E834
  c->r[4]=0u+0x00000001u; // 8004E838
  c->lr=0x8004E840u; f_800DA79C(c); // 8004E83C
  c->r[4]=c->r[29]|c->r[29]; // 8004E840
  c->r[3]=0u+0x00000001u; // 8004E844
  c->lr=0x8004E84Cu; f_800DA7F8(c); // 8004E848
L_8004E84C:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 8004E84C
  c->r[3]=c->r[25]|c->r[25]; // 8004E850
  c->r[4]=c->r[27]|c->r[27]; // 8004E854
  c->r[29]=0u+0x00000000u; // 8004E858
  c->r[12]=R32(c->r[12]+0x00000054u); // 8004E85C
  c->ctr=c->r[12]; // 8004E860
  if (true) { c->lr=0x8004E868u; dispatch(c,c->ctr); } // 8004E864
  {uint32_t ea=c->r[2]+0xFFFF8B8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004E868
  fcmp(c,0,c->f[1],c->f[0]); // 8004E86C
  if (!crb(c,0)) { goto L_8004E878; } // 8004E870
  c->r[29]=0u+0x00000001u; // 8004E874
L_8004E878:;
  cmps(c,0,(int32_t)c->r[29],1); // 8004E878
  if (!crb(c,2)) { goto L_8004E8AC; } // 8004E87C
  {uint32_t ea=c->r[2]+0xFFFF8B98u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004E880
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8004E884
  c->lr=0x8004E88Cu; f_80252A7C(c); // 8004E888
  c->r[28]=rotl(c->r[3],0)&0x000000FFu; // 8004E88C
  c->r[3]=0u+0x00000000u; // 8004E890
  c->r[4]=0u+0x00000000u; // 8004E894
  c->lr=0x8004E89Cu; f_800DA7C8(c); // 8004E898
  c->r[0]=0u+0xFFFFFF00u; // 8004E89C
  c->r[3]=0u+0x00000000u; // 8004E8A0
  c->r[4]=c->r[28]|c->r[0]; // 8004E8A4
  c->lr=0x8004E8ACu; f_800DA858(c); // 8004E8A8
L_8004E8AC:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 8004E8AC
  c->r[3]=c->r[25]|c->r[25]; // 8004E8B0
  c->r[28]=0u+0x00000000u; // 8004E8B4
  c->r[12]=R32(c->r[12]+0x00000060u); // 8004E8B8
  c->ctr=c->r[12]; // 8004E8BC
  if (true) { c->lr=0x8004E8C4u; dispatch(c,c->ctr); } // 8004E8C0
  c->r[12]=R32(c->r[25]+0x00000000u); // 8004E8C4
  c->r[27]=c->r[3]|c->r[3]; // 8004E8C8
  c->r[3]=c->r[25]|c->r[25]; // 8004E8CC
  c->r[12]=R32(c->r[12]+0x00000064u); // 8004E8D0
  c->ctr=c->r[12]; // 8004E8D4
  if (true) { c->lr=0x8004E8DCu; dispatch(c,c->ctr); } // 8004E8D8
  cmps(c,0,(int32_t)c->r[27],0); // 8004E8DC
  if (!crb(c,1)) { goto L_8004E8E8; } // 8004E8E0
  c->r[28]=0u+0x00000001u; // 8004E8E4
L_8004E8E8:;
  cmps(c,0,(int32_t)c->r[28],1); // 8004E8E8
  if (!crb(c,2)) { goto L_8004E8F8; } // 8004E8EC
  c->r[4]=c->r[27]|c->r[27]; // 8004E8F0
  c->lr=0x8004E8F8u; f_800E41E8(c); // 8004E8F4
L_8004E8F8:;
  c->r[3]=c->r[25]+0x00000004u; // 8004E8F8
  c->r[4]=c->r[1]+0x00000008u; // 8004E8FC
  c->lr=0x8004E904u; f_80163864(c); // 8004E900
  c->r[12]=R32(c->r[25]+0x00000000u); // 8004E904
  c->r[3]=c->r[25]|c->r[25]; // 8004E908
  c->r[12]=R32(c->r[12]+0x00000058u); // 8004E90C
  c->ctr=c->r[12]; // 8004E910
  if (true) { c->lr=0x8004E918u; dispatch(c,c->ctr); } // 8004E914
  c->r[12]=R32(c->r[25]+0x00000000u); // 8004E918
  c->r[27]=c->r[3]|c->r[3]; // 8004E91C
  c->r[3]=c->r[25]|c->r[25]; // 8004E920
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 8004E924
  c->ctr=c->r[12]; // 8004E928
  if (true) { c->lr=0x8004E930u; dispatch(c,c->ctr); } // 8004E92C
  cmps(c,0,(int32_t)c->r[27],0); // 8004E930
  c->r[6]=c->r[3]|c->r[3]; // 8004E934
  c->r[7]=0u+0x00000000u; // 8004E938
  if (crb(c,2)) { goto L_8004E944; } // 8004E93C
  c->r[7]=0u+0x00000001u; // 8004E940
L_8004E944:;
  c->r[3]=c->r[31]|c->r[31]; // 8004E944
  c->r[5]=c->r[27]|c->r[27]; // 8004E948
  c->r[8]=c->r[26]|c->r[26]; // 8004E94C
  c->r[4]=c->r[1]+0x00000008u; // 8004E950
  c->lr=0x8004E958u; f_800DB73C(c); // 8004E954
  cmps(c,0,(int32_t)c->r[28],1); // 8004E958
  if (!crb(c,2)) { goto L_8004E964; } // 8004E95C
  c->lr=0x8004E964u; f_800E4250(c); // 8004E960
L_8004E964:;
  cmps(c,0,(int32_t)c->r[29],1); // 8004E964
  if (!crb(c,2)) { goto L_8004E978; } // 8004E968
  c->r[3]=0u+0x00000000u; // 8004E96C
  c->lr=0x8004E974u; f_800DA890(c); // 8004E970
  c->lr=0x8004E978u; f_800DA7E8(c); // 8004E974
L_8004E978:;
  cmps(c,0,(int32_t)c->r[30],1); // 8004E978
  if (!crb(c,2)) { goto L_8004E98C; } // 8004E97C
  c->r[3]=0u+0x00000001u; // 8004E980
  c->lr=0x8004E988u; f_800DA830(c); // 8004E984
  c->lr=0x8004E98Cu; f_800DA7B8(c); // 8004E988
L_8004E98C:;
  c->r[11]=c->r[1]+0x00000060u; // 8004E98C
  c->lr=0x8004E994u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004E990
  c->r[0]=R32(c->r[1]+0x00000064u); // 8004E994
  c->lr=c->r[0]; // 8004E998
  c->r[1]=c->r[1]+0x00000060u; // 8004E99C
  return; // 8004E9A0
}

// fn_8004E9A4
void f_8004E9A4(Ctx* __restrict c) {
  c->r[3]=0u+0xFFFFFF00u; // 8004E9A4
  return; // 8004E9A8
}

// fn_8004E9AC
void f_8004E9AC(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8004E9AC
  return; // 8004E9B0
}

// fn_8004E9B4
void f_8004E9B4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8004E9B4
  return; // 8004E9B8
}

// fn_8004E9BC
void f_8004E9BC(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8004E9BC
  return; // 8004E9C0
}

// fn_8004E9C4
void f_8004E9C4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8004E9C4
  return; // 8004E9C8
}

// fn_8004E9CC
void f_8004E9CC(Ctx* __restrict c) {
  return; // 8004E9CC
}

// fn_8004E9D0
void f_8004E9D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004E9D0
  return; // 8004E9D4
}

// fn_8004E9D8
void f_8004E9D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E9D8
  c->r[0]=c->lr; // 8004E9DC
  W32(c->r[1]+0x00000054u,c->r[0]); // 8004E9E0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8004E9E4
  W32(c->r[1]+0x00000048u,c->r[30]); // 8004E9E8
  c->r[30]=c->r[4]|c->r[4]; // 8004E9EC
  W32(c->r[1]+0x00000044u,c->r[29]); // 8004E9F0
  c->r[29]=c->r[3]|c->r[3]; // 8004E9F4
  c->r[0]=R32(c->r[3]+0x00000064u); // 8004E9F8
  cmps(c,0,(int32_t)c->r[0],0); // 8004E9FC
  if (crb(c,0)) { goto L_8004EA48; } // 8004EA00
  c->r[3]=c->r[0]|c->r[0]; // 8004EA04
  c->r[4]=c->r[5]|c->r[5]; // 8004EA08
  c->lr=0x8004EA10u; f_800DA404(c); // 8004EA0C
  cmps(c,0,(int32_t)c->r[3],0); // 8004EA10
  c->r[31]=c->r[3]|c->r[3]; // 8004EA14
  if (!crb(c,2)) { goto L_8004EA24; } // 8004EA18
  c->r[3]=0u+0x00000000u; // 8004EA1C
  goto L_8004EA4C; // 8004EA20
L_8004EA24:;
  c->r[3]=c->r[29]+0x00000004u; // 8004EA24
  c->r[4]=c->r[1]+0x00000008u; // 8004EA28
  c->lr=0x8004EA30u; f_80163864(c); // 8004EA2C
  c->r[4]=c->r[31]|c->r[31]; // 8004EA30
  c->r[5]=c->r[30]|c->r[30]; // 8004EA34
  c->r[3]=c->r[1]+0x00000008u; // 8004EA38
  c->lr=0x8004EA40u; f_80163898(c); // 8004EA3C
  c->r[3]=0u+0x00000001u; // 8004EA40
  goto L_8004EA4C; // 8004EA44
L_8004EA48:;
  c->r[3]=0u+0x00000000u; // 8004EA48
L_8004EA4C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8004EA4C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8004EA50
  c->r[30]=R32(c->r[1]+0x00000048u); // 8004EA54
  c->r[29]=R32(c->r[1]+0x00000044u); // 8004EA58
  c->lr=c->r[0]; // 8004EA5C
  c->r[1]=c->r[1]+0x00000050u; // 8004EA60
  return; // 8004EA64
}

// fn_8004EA68
void f_8004EA68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EA68
  c->r[0]=c->lr; // 8004EA6C
  W32(c->r[1]+0x00000094u,c->r[0]); // 8004EA70
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8004EA74
  W32(c->r[1]+0x00000088u,c->r[30]); // 8004EA78
  c->r[30]=c->r[4]|c->r[4]; // 8004EA7C
  W32(c->r[1]+0x00000084u,c->r[29]); // 8004EA80
  c->r[29]=c->r[3]|c->r[3]; // 8004EA84
  c->r[0]=R32(c->r[3]+0x00000064u); // 8004EA88
  cmps(c,0,(int32_t)c->r[0],0); // 8004EA8C
  if (crb(c,0)) { goto L_8004EAD8; } // 8004EA90
  c->r[3]=c->r[0]|c->r[0]; // 8004EA94
  c->r[4]=c->r[5]|c->r[5]; // 8004EA98
  c->lr=0x8004EAA0u; f_800DA404(c); // 8004EA9C
  cmps(c,0,(int32_t)c->r[3],0); // 8004EAA0
  c->r[31]=c->r[3]|c->r[3]; // 8004EAA4
  if (!crb(c,2)) { goto L_8004EAB4; } // 8004EAA8
  c->r[3]=0u+0x00000000u; // 8004EAAC
  goto L_8004EADC; // 8004EAB0
L_8004EAB4:;
  c->r[3]=c->r[29]+0x00000004u; // 8004EAB4
  c->r[4]=c->r[1]+0x00000020u; // 8004EAB8
  c->lr=0x8004EAC0u; f_80163864(c); // 8004EABC
  c->r[4]=c->r[31]|c->r[31]; // 8004EAC0
  c->r[3]=c->r[1]+0x00000020u; // 8004EAC4
  c->r[5]=c->r[1]+0x00000050u; // 8004EAC8
  c->lr=0x8004EAD0u; f_80163898(c); // 8004EACC
  c->r[3]=0u+0x00000001u; // 8004EAD0
  goto L_8004EADC; // 8004EAD4
L_8004EAD8:;
  c->r[3]=0u+0x00000000u; // 8004EAD8
L_8004EADC:;
  cmps(c,0,(int32_t)c->r[3],1); // 8004EADC
  if (!crb(c,2)) { goto L_8004EB2C; } // 8004EAE0
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004EAE4
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004EAE8
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004EAEC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8004EAF0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8004EAF4
  c->r[5]=R32(c->r[1]+0x00000008u); // 8004EAF8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8004EAFC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8004EB00
  c->r[0]=R32(c->r[1]+0x00000010u); // 8004EB04
  W32(c->r[1]+0x00000014u,c->r[5]); // 8004EB08
  W32(c->r[1]+0x00000018u,c->r[4]); // 8004EB0C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004EB10
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8004EB14
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004EB18
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004EB1C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[2]);} // 8004EB20
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 8004EB24
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[0]);} // 8004EB28
L_8004EB2C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8004EB2C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 8004EB30
  c->r[30]=R32(c->r[1]+0x00000088u); // 8004EB34
  c->r[29]=R32(c->r[1]+0x00000084u); // 8004EB38
  c->lr=c->r[0]; // 8004EB3C
  c->r[1]=c->r[1]+0x00000090u; // 8004EB40
  return; // 8004EB44
}

// fn_8004EB48
void f_8004EB48(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000064u); // 8004EB48
  cmps(c,0,(int32_t)c->r[3],0); // 8004EB4C
  if (crb(c,0)) { goto L_8004EB58; } // 8004EB50
  f_800DA404(c); return; // 8004EB54
L_8004EB58:;
  c->r[3]=0u+0x00000000u; // 8004EB58
  return; // 8004EB5C
}

// fn_8004EB60
void f_8004EB60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EB60
  c->r[0]=c->lr; // 8004EB64
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004EB68
  c->r[0]=0u+0x00000000u; // 8004EB6C
  c->r[3]=R32(c->r[3]+0x0000005Cu); // 8004EB70
  cmps(c,0,(int32_t)c->r[3],0); // 8004EB74
  if (crb(c,0)) { goto L_8004EB84; } // 8004EB78
  c->lr=0x8004EB80u; f_800D8B8C(c); // 8004EB7C
  c->r[0]=c->r[3]|c->r[3]; // 8004EB80
L_8004EB84:;
  c->r[3]=c->r[0]|c->r[0]; // 8004EB84
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004EB88
  c->lr=c->r[0]; // 8004EB8C
  c->r[1]=c->r[1]+0x00000010u; // 8004EB90
  return; // 8004EB94
}

// fn_8004EB98
void f_8004EB98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EB98
  c->r[0]=c->lr; // 8004EB9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004EBA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004EBA4
  c->r[31]=c->r[6]|c->r[6]; // 8004EBA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004EBAC
  c->r[30]=c->r[5]|c->r[5]; // 8004EBB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004EBB4
  c->r[29]=c->r[4]|c->r[4]; // 8004EBB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8004EBBC
  c->r[12]=R32(c->r[12]+0x00000068u); // 8004EBC0
  c->ctr=c->r[12]; // 8004EBC4
  if (true) { c->lr=0x8004EBCCu; dispatch(c,c->ctr); } // 8004EBC8
  cmps(c,0,(int32_t)c->r[3],0); // 8004EBCC
  if (!crb(c,2)) { goto L_8004EBDC; } // 8004EBD0
  c->r[3]=0u+0x00000000u; // 8004EBD4
  goto L_8004EBF0; // 8004EBD8
L_8004EBDC:;
  c->r[4]=c->r[29]|c->r[29]; // 8004EBDC
  c->r[5]=c->r[30]|c->r[30]; // 8004EBE0
  c->r[6]=c->r[31]|c->r[31]; // 8004EBE4
  c->lr=0x8004EBECu; f_800E27DC(c); // 8004EBE8
  c->r[3]=0u+0x00000001u; // 8004EBEC
L_8004EBF0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004EBF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004EBF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004EBF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004EBFC
  c->lr=c->r[0]; // 8004EC00
  c->r[1]=c->r[1]+0x00000020u; // 8004EC04
  return; // 8004EC08
}

// fn_8004EC0C
void f_8004EC0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EC0C
  c->r[0]=c->lr; // 8004EC10
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004EC14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004EC18
  c->r[31]=c->r[6]|c->r[6]; // 8004EC1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004EC20
  c->r[30]=c->r[5]|c->r[5]; // 8004EC24
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004EC28
  c->r[29]=c->r[4]|c->r[4]; // 8004EC2C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8004EC30
  c->r[12]=R32(c->r[12]+0x00000068u); // 8004EC34
  c->ctr=c->r[12]; // 8004EC38
  if (true) { c->lr=0x8004EC40u; dispatch(c,c->ctr); } // 8004EC3C
  cmps(c,0,(int32_t)c->r[3],0); // 8004EC40
  if (!crb(c,2)) { goto L_8004EC50; } // 8004EC44
  c->r[3]=0u+0x00000000u; // 8004EC48
  goto L_8004EC64; // 8004EC4C
L_8004EC50:;
  c->r[4]=c->r[29]|c->r[29]; // 8004EC50
  c->r[5]=c->r[30]|c->r[30]; // 8004EC54
  c->r[6]=c->r[31]|c->r[31]; // 8004EC58
  c->lr=0x8004EC60u; f_800E296C(c); // 8004EC5C
  c->r[3]=0u+0x00000001u; // 8004EC60
L_8004EC64:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004EC64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004EC68
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004EC6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004EC70
  c->lr=c->r[0]; // 8004EC74
  c->r[1]=c->r[1]+0x00000020u; // 8004EC78
  return; // 8004EC7C
}

// fn_8004EC80
void f_8004EC80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EC80
  c->r[0]=c->lr; // 8004EC84
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004EC88
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8004EC8C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8004EC90
  c->lr=0x8004EC98u; f_80013AA4(c); // 8004EC94
  c->f[31]=c->f[1]; // 8004EC98
  c->lr=0x8004ECA0u; f_800076EC(c); // 8004EC9C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8004ECA0
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8004ECA4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8004ECA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004ECAC
  c->lr=c->r[0]; // 8004ECB0
  c->r[1]=c->r[1]+0x00000020u; // 8004ECB4
  return; // 8004ECB8
}

// fn_8004ECBC
void f_8004ECBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004ECBC
  c->r[0]=c->lr; // 8004ECC0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8004ECC4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8004ECC8
  c->r[31]=c->r[3]|c->r[3]; // 8004ECCC
  c->r[5]=R32(c->r[3]+0x00000034u); // 8004ECD0
  c->r[0]=R32(c->r[3]+0x00000038u); // 8004ECD4
  W32(c->r[1]+0x00000014u,c->r[5]); // 8004ECD8
  W32(c->r[1]+0x00000018u,c->r[0]); // 8004ECDC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8004ECE0
  c->r[3]=c->r[1]+0x00000014u; // 8004ECE4
  c->r[5]=c->r[3]|c->r[3]; // 8004ECE8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8004ECEC
  c->lr=0x8004ECF4u; f_801647E4(c); // 8004ECF0
  c->r[5]=R32(c->r[1]+0x00000014u); // 8004ECF4
  c->r[3]=0u+0x00000001u; // 8004ECF8
  c->r[4]=R32(c->r[1]+0x00000018u); // 8004ECFC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8004ED00
  W32(c->r[1]+0x00000008u,c->r[5]); // 8004ED04
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8004ED08
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004ED0C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8004ED10
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004ED14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004ED18
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[2]);} // 8004ED1C
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[1]);} // 8004ED20
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 8004ED24
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8004ED28
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004ED2C
  c->lr=c->r[0]; // 8004ED30
  c->r[1]=c->r[1]+0x00000030u; // 8004ED34
  return; // 8004ED38
}

// fn_8004ED3C
void f_8004ED3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004ED3C
  c->r[0]=c->lr; // 8004ED40
  W32(c->r[1]+0x00000044u,c->r[0]); // 8004ED44
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8004ED48
  c->r[31]=c->r[3]|c->r[3]; // 8004ED4C
  c->r[5]=R32(c->r[3]+0x00000040u); // 8004ED50
  c->r[0]=R32(c->r[3]+0x00000044u); // 8004ED54
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 8004ED58
  W32(c->r[1]+0x00000030u,c->r[0]); // 8004ED5C
  c->r[0]=R32(c->r[3]+0x00000048u); // 8004ED60
  c->r[3]=c->r[1]+0x0000002Cu; // 8004ED64
  c->r[5]=c->r[3]|c->r[3]; // 8004ED68
  W32(c->r[1]+0x00000034u,c->r[0]); // 8004ED6C
  c->lr=0x8004ED74u; f_801647E4(c); // 8004ED70
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004ED74
  c->lr=0x8004ED7Cu; f_800E4934(c); // 8004ED78
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8004ED7C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004ED80
  c->lr=0x8004ED88u; f_800E4934(c); // 8004ED84
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8004ED88
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004ED8C
  c->lr=0x8004ED94u; f_800E4934(c); // 8004ED90
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8004ED94
  c->r[3]=0u+0x00000001u; // 8004ED98
  c->r[5]=R32(c->r[1]+0x00000008u); // 8004ED9C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8004EDA0
  c->r[0]=R32(c->r[1]+0x00000010u); // 8004EDA4
  W32(c->r[1]+0x00000020u,c->r[5]); // 8004EDA8
  W32(c->r[1]+0x00000024u,c->r[4]); // 8004EDAC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004EDB0
  W32(c->r[1]+0x00000028u,c->r[0]); // 8004EDB4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004EDB8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004EDBC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 8004EDC0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 8004EDC4
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 8004EDC8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8004EDCC
  c->r[4]=R32(c->r[1]+0x00000030u); // 8004EDD0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004EDD4
  W32(c->r[1]+0x00000014u,c->r[5]); // 8004EDD8
  W32(c->r[1]+0x00000018u,c->r[4]); // 8004EDDC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004EDE0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8004EDE4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004EDE8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004EDEC
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[2]);} // 8004EDF0
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 8004EDF4
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 8004EDF8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8004EDFC
  c->r[0]=R32(c->r[1]+0x00000044u); // 8004EE00
  c->lr=c->r[0]; // 8004EE04
  c->r[1]=c->r[1]+0x00000040u; // 8004EE08
  return; // 8004EE0C
}

// fn_8004EE10
void f_8004EE10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EE10
  c->r[0]=c->lr; // 8004EE14
  W32(c->r[1]+0x00000074u,c->r[0]); // 8004EE18
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 8004EE1C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 8004EE20
  c->f[31]=c->f[1]; // 8004EE24
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8004EE28
  c->r[31]=c->r[4]|c->r[4]; // 8004EE2C
  W32(c->r[1]+0x00000058u,c->r[30]); // 8004EE30
  c->r[30]=c->r[3]|c->r[3]; // 8004EE34
  c->r[5]=R32(c->r[3]+0x00000034u); // 8004EE38
  c->r[0]=R32(c->r[3]+0x00000038u); // 8004EE3C
  W32(c->r[1]+0x0000004Cu,c->r[5]); // 8004EE40
  W32(c->r[1]+0x00000050u,c->r[0]); // 8004EE44
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8004EE48
  W32(c->r[1]+0x00000054u,c->r[0]); // 8004EE4C
  c->r[5]=R32(c->r[4]+0x00000034u); // 8004EE50
  c->r[0]=R32(c->r[4]+0x00000038u); // 8004EE54
  W32(c->r[1]+0x00000040u,c->r[5]); // 8004EE58
  W32(c->r[1]+0x00000044u,c->r[0]); // 8004EE5C
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 8004EE60
  c->r[4]=c->r[1]+0x00000030u; // 8004EE64
  W32(c->r[1]+0x00000048u,c->r[0]); // 8004EE68
  c->lr=0x8004EE70u; f_8004F2C4(c); // 8004EE6C
  cmps(c,0,(int32_t)c->r[3],1); // 8004EE70
  if (!crb(c,2)) { goto L_8004EE90; } // 8004EE74
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004EE78
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004EE7C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004EE80
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[2]);} // 8004EE84
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 8004EE88
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8004EE8C
L_8004EE90:;
  c->r[3]=c->r[31]|c->r[31]; // 8004EE90
  c->r[4]=c->r[1]+0x00000030u; // 8004EE94
  c->lr=0x8004EE9Cu; f_8004F2C4(c); // 8004EE98
  cmps(c,0,(int32_t)c->r[3],1); // 8004EE9C
  if (!crb(c,2)) { goto L_8004EEBC; } // 8004EEA0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004EEA4
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004EEA8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004EEAC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 8004EEB0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 8004EEB4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 8004EEB8
L_8004EEBC:;
  c->r[3]=c->r[1]+0x0000004Cu; // 8004EEBC
  c->r[4]=c->r[1]+0x00000040u; // 8004EEC0
  c->r[5]=c->r[1]+0x00000014u; // 8004EEC4
  c->lr=0x8004EECCu; f_80164808(c); // 8004EEC8
  {uint32_t ea=c->r[2]+0xFFFF8B88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004EECC
  c->r[3]=c->r[1]+0x00000014u; // 8004EED0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8004EED4
  c->lr=0x8004EEDCu; f_801648A4(c); // 8004EED8
  {uint32_t ea=c->r[2]+0xFFFF8B88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004EEDC
  fcmp(c,0,c->f[0],c->f[1]); // 8004EEE0
  if (!crb(c,2)) { goto L_8004EEF0; } // 8004EEE4
  {uint32_t ea=c->r[2]+0xFFFF8B9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004EEE8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8004EEEC
L_8004EEF0:;
  c->r[3]=c->r[1]+0x00000014u; // 8004EEF0
  c->r[4]=c->r[3]|c->r[3]; // 8004EEF4
  c->lr=0x8004EEFCu; f_80164848(c); // 8004EEF8
  c->f[1]=c->f[31]; // 8004EEFC
  c->r[3]=c->r[1]+0x00000014u; // 8004EF00
  c->r[4]=c->r[1]+0x00000020u; // 8004EF04
  c->lr=0x8004EF0Cu; f_8016482C(c); // 8004EF08
  c->r[6]=R32(c->r[1]+0x00000020u); // 8004EF0C
  c->r[3]=c->r[30]|c->r[30]; // 8004EF10
  c->r[5]=R32(c->r[1]+0x00000024u); // 8004EF14
  c->r[4]=c->r[1]+0x00000008u; // 8004EF18
  c->r[0]=R32(c->r[1]+0x00000028u); // 8004EF1C
  W32(c->r[1]+0x00000008u,c->r[6]); // 8004EF20
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8004EF24
  W32(c->r[1]+0x00000010u,c->r[0]); // 8004EF28
  c->r[12]=R32(c->r[30]+0x00000000u); // 8004EF2C
  c->r[12]=R32(c->r[12]+0x00000094u); // 8004EF30
  c->ctr=c->r[12]; // 8004EF34
  if (true) { c->lr=0x8004EF3Cu; dispatch(c,c->ctr); } // 8004EF38
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 8004EF3C
  c->r[0]=R32(c->r[1]+0x00000074u); // 8004EF40
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8004EF44
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8004EF48
  c->r[30]=R32(c->r[1]+0x00000058u); // 8004EF4C
  c->lr=c->r[0]; // 8004EF50
  c->r[1]=c->r[1]+0x00000070u; // 8004EF54
  return; // 8004EF58
}

// fn_8004EF5C
void f_8004EF5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EF5C
  c->r[0]=c->lr; // 8004EF60
  cmps(c,0,(int32_t)c->r[4],0); // 8004EF64
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004EF68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004EF6C
  c->r[31]=0u+0xFFFFFFFFu; // 8004EF70
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004EF74
  c->r[30]=c->r[4]|c->r[4]; // 8004EF78
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004EF7C
  c->r[29]=c->r[3]|c->r[3]; // 8004EF80
  if (!crb(c,2)) { goto L_8004EF90; } // 8004EF84
  c->r[3]=0u+0xFFFFFFFFu; // 8004EF88
  goto L_8004F110; // 8004EF8C
L_8004EF90:;
  cmpu(c,0,c->r[4],c->r[3]); // 8004EF90
  if (!crb(c,2)) { goto L_8004EFA0; } // 8004EF94
  c->r[3]=0u+0xFFFFFFFFu; // 8004EF98
  goto L_8004F110; // 8004EF9C
L_8004EFA0:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8004EFA0
  c->r[3]=c->r[30]|c->r[30]; // 8004EFA4
  c->r[12]=R32(c->r[12]+0x000000A0u); // 8004EFA8
  c->ctr=c->r[12]; // 8004EFAC
  if (true) { c->lr=0x8004EFB4u; dispatch(c,c->ctr); } // 8004EFB0
  cmps(c,0,(int32_t)c->r[3],1); // 8004EFB4
  if (!crb(c,2)) { goto L_8004EFC4; } // 8004EFB8
  c->r[3]=0u+0xFFFFFFFFu; // 8004EFBC
  goto L_8004F110; // 8004EFC0
L_8004EFC4:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8004EFC4
  c->r[3]=c->r[30]|c->r[30]; // 8004EFC8
  c->r[12]=R32(c->r[12]+0x0000009Cu); // 8004EFCC
  c->ctr=c->r[12]; // 8004EFD0
  if (true) { c->lr=0x8004EFD8u; dispatch(c,c->ctr); } // 8004EFD4
  cmps(c,0,(int32_t)c->r[3],1); // 8004EFD8
  if (!crb(c,2)) { goto L_8004F064; } // 8004EFDC
  c->r[12]=R32(c->r[29]+0x00000000u); // 8004EFE0
  c->r[3]=c->r[29]|c->r[29]; // 8004EFE4
  c->r[4]=c->r[30]|c->r[30]; // 8004EFE8
  c->r[5]=c->r[1]+0x00000008u; // 8004EFEC
  c->r[12]=R32(c->r[12]+0x000000B4u); // 8004EFF0
  c->ctr=c->r[12]; // 8004EFF4
  if (true) { c->lr=0x8004EFFCu; dispatch(c,c->ctr); } // 8004EFF8
  cmps(c,0,(int32_t)c->r[3],0); // 8004EFFC
  if (!crb(c,2)) { goto L_8004F00C; } // 8004F000
  c->r[3]=0u+0xFFFFFFFFu; // 8004F004
  goto L_8004F110; // 8004F008
L_8004F00C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8004F00C
  c->r[3]=c->r[30]|c->r[30]; // 8004F010
  c->r[4]=c->r[29]|c->r[29]; // 8004F014
  c->r[12]=R32(c->r[12]+0x000000B8u); // 8004F018
  c->ctr=c->r[12]; // 8004F01C
  if (true) { c->lr=0x8004F024u; dispatch(c,c->ctr); } // 8004F020
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F024
  fcmp(c,0,c->f[1],c->f[0]); // 8004F028
  if (!crb(c,1)) { goto L_8004F034; } // 8004F02C
  c->f[1]=c->f[0]; // 8004F030
L_8004F034:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8004F034
  c->r[3]=c->r[30]|c->r[30]; // 8004F038
  c->r[4]=c->r[29]|c->r[29]; // 8004F03C
  c->r[12]=R32(c->r[12]+0x000000A4u); // 8004F040
  c->ctr=c->r[12]; // 8004F044
  if (true) { c->lr=0x8004F04Cu; dispatch(c,c->ctr); } // 8004F048
  c->r[0]=R32(c->r[29]+0x00000164u); // 8004F04C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8004F050
  c->r[3]=cntlz(c->r[3]); // 8004F054
  c->r[0]=c->r[0]|0x00000001u; // 8004F058
  W32(c->r[29]+0x00000164u,c->r[0]); // 8004F05C
  c->r[31]=rotl(c->r[3],27)&0x07FFFFFFu; // 8004F060
L_8004F064:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004F064
  if (crb(c,1)) { goto L_8004F10C; } // 8004F068
  c->r[12]=R32(c->r[29]+0x00000000u); // 8004F06C
  c->r[3]=c->r[29]|c->r[29]; // 8004F070
  c->r[12]=R32(c->r[12]+0x0000009Cu); // 8004F074
  c->ctr=c->r[12]; // 8004F078
  if (true) { c->lr=0x8004F080u; dispatch(c,c->ctr); } // 8004F07C
  cmps(c,0,(int32_t)c->r[3],1); // 8004F080
  if (!crb(c,2)) { goto L_8004F10C; } // 8004F084
  c->r[12]=R32(c->r[30]+0x00000000u); // 8004F088
  c->r[3]=c->r[30]|c->r[30]; // 8004F08C
  c->r[4]=c->r[29]|c->r[29]; // 8004F090
  c->r[5]=c->r[1]+0x00000008u; // 8004F094
  c->r[12]=R32(c->r[12]+0x000000B4u); // 8004F098
  c->ctr=c->r[12]; // 8004F09C
  if (true) { c->lr=0x8004F0A4u; dispatch(c,c->ctr); } // 8004F0A0
  cmps(c,0,(int32_t)c->r[3],0); // 8004F0A4
  if (!crb(c,2)) { goto L_8004F0B4; } // 8004F0A8
  c->r[3]=c->r[31]|c->r[31]; // 8004F0AC
  goto L_8004F110; // 8004F0B0
L_8004F0B4:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8004F0B4
  c->r[3]=c->r[29]|c->r[29]; // 8004F0B8
  c->r[4]=c->r[30]|c->r[30]; // 8004F0BC
  c->r[12]=R32(c->r[12]+0x000000B8u); // 8004F0C0
  c->ctr=c->r[12]; // 8004F0C4
  if (true) { c->lr=0x8004F0CCu; dispatch(c,c->ctr); } // 8004F0C8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F0CC
  fcmp(c,0,c->f[1],c->f[0]); // 8004F0D0
  if (!crb(c,1)) { goto L_8004F0DC; } // 8004F0D4
  c->f[1]=c->f[0]; // 8004F0D8
L_8004F0DC:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8004F0DC
  c->r[3]=c->r[29]|c->r[29]; // 8004F0E0
  c->r[4]=c->r[30]|c->r[30]; // 8004F0E4
  c->r[12]=R32(c->r[12]+0x000000A4u); // 8004F0E8
  c->ctr=c->r[12]; // 8004F0EC
  if (true) { c->lr=0x8004F0F4u; dispatch(c,c->ctr); } // 8004F0F0
  c->r[0]=R32(c->r[29]+0x00000164u); // 8004F0F4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8004F0F8
  c->r[3]=cntlz(c->r[3]); // 8004F0FC
  c->r[0]=c->r[0]|0x00000002u; // 8004F100
  W32(c->r[29]+0x00000164u,c->r[0]); // 8004F104
  c->r[31]=rotl(c->r[3],27)&0x07FFFFFFu; // 8004F108
L_8004F10C:;
  c->r[3]=c->r[31]|c->r[31]; // 8004F10C
L_8004F110:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004F110
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004F114
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004F118
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004F11C
  c->lr=c->r[0]; // 8004F120
  c->r[1]=c->r[1]+0x00000020u; // 8004F124
  return; // 8004F128
}

// fn_8004F12C
void f_8004F12C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8004F12C
  return; // 8004F130
}

// fn_8004F134
void f_8004F134(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8004F134
  return; // 8004F138
}

// fn_8004F13C
void f_8004F13C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F13C
  c->r[0]=c->lr; // 8004F140
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004F144
  c->r[11]=c->r[1]+0x00000020u; // 8004F148
  c->lr=0x8004F150u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004F14C
  c->r[0]=0u+0x00000000u; // 8004F150
  c->r[27]=c->r[3]|c->r[3]; // 8004F154
  W32(c->r[3]+0x00000164u,c->r[0]); // 8004F158
  c->r[12]=R32(c->r[3]+0x00000000u); // 8004F15C
  c->r[12]=R32(c->r[12]+0x000000A0u); // 8004F160
  c->ctr=c->r[12]; // 8004F164
  if (true) { c->lr=0x8004F16Cu; dispatch(c,c->ctr); } // 8004F168
  cmps(c,0,(int32_t)c->r[3],1); // 8004F16C
  if (crb(c,2)) { goto L_8004F250; } // 8004F170
  c->r[3]=0u+0x00000000u; // 8004F174
  c->lr=0x8004F17Cu; f_80052B8C(c); // 8004F178
  c->r[31]=R32(c->r[27]+0x0000006Cu); // 8004F17C
  c->r[28]=c->r[3]|c->r[3]; // 8004F180
  cmps(c,0,(int32_t)c->r[31],0); // 8004F184
  if (crb(c,0)) { goto L_8004F250; } // 8004F188
  c->r[30]=c->r[31]+0xFFFFFFFFu; // 8004F18C
  goto L_8004F1E4; // 8004F190
L_8004F194:;
  c->r[3]=c->r[28]|c->r[28]; // 8004F194
  c->r[4]=c->r[30]|c->r[30]; // 8004F198
  c->r[5]=0u+0x00000007u; // 8004F19C
  c->lr=0x8004F1A4u; f_800521F4(c); // 8004F1A0
  cmps(c,0,(int32_t)c->r[3],0); // 8004F1A4
  c->r[29]=c->r[3]|c->r[3]; // 8004F1A8
  if (crb(c,2)) { goto L_8004F1E0; } // 8004F1AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8004F1B0
  c->r[12]=R32(c->r[12]+0x00000070u); // 8004F1B4
  c->ctr=c->r[12]; // 8004F1B8
  if (true) { c->lr=0x8004F1C0u; dispatch(c,c->ctr); } // 8004F1BC
  cmps(c,0,(int32_t)c->r[3],0); // 8004F1C0
  if (crb(c,2)) { goto L_8004F1E0; } // 8004F1C4
  c->r[12]=R32(c->r[27]+0x00000000u); // 8004F1C8
  c->r[3]=c->r[27]|c->r[27]; // 8004F1CC
  c->r[4]=c->r[29]|c->r[29]; // 8004F1D0
  c->r[12]=R32(c->r[12]+0x000000A8u); // 8004F1D4
  c->ctr=c->r[12]; // 8004F1D8
  if (true) { c->lr=0x8004F1E0u; dispatch(c,c->ctr); } // 8004F1DC
L_8004F1E0:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 8004F1E0
L_8004F1E4:;
  cmps(c,0,(int32_t)c->r[30],0); // 8004F1E4
  if (!crb(c,0)) { IRQCHK(c); goto L_8004F194; } // 8004F1E8
  c->r[29]=R32(c->r[28]+0x00000368u); // 8004F1EC
  c->r[31]=c->r[31]+0x00000001u; // 8004F1F0
  goto L_8004F248; // 8004F1F4
L_8004F1F8:;
  c->r[3]=c->r[28]|c->r[28]; // 8004F1F8
  c->r[4]=c->r[31]|c->r[31]; // 8004F1FC
  c->r[5]=0u+0x00000007u; // 8004F200
  c->lr=0x8004F208u; f_800521F4(c); // 8004F204
  cmps(c,0,(int32_t)c->r[3],0); // 8004F208
  c->r[30]=c->r[3]|c->r[3]; // 8004F20C
  if (crb(c,2)) { goto L_8004F244; } // 8004F210
  c->r[12]=R32(c->r[3]+0x00000000u); // 8004F214
  c->r[12]=R32(c->r[12]+0x00000070u); // 8004F218
  c->ctr=c->r[12]; // 8004F21C
  if (true) { c->lr=0x8004F224u; dispatch(c,c->ctr); } // 8004F220
  cmps(c,0,(int32_t)c->r[3],0); // 8004F224
  if (crb(c,2)) { goto L_8004F244; } // 8004F228
  c->r[12]=R32(c->r[27]+0x00000000u); // 8004F22C
  c->r[3]=c->r[27]|c->r[27]; // 8004F230
  c->r[4]=c->r[30]|c->r[30]; // 8004F234
  c->r[12]=R32(c->r[12]+0x000000A8u); // 8004F238
  c->ctr=c->r[12]; // 8004F23C
  if (true) { c->lr=0x8004F244u; dispatch(c,c->ctr); } // 8004F240
L_8004F244:;
  c->r[31]=c->r[31]+0x00000001u; // 8004F244
L_8004F248:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[29]); // 8004F248
  if (crb(c,0)) { IRQCHK(c); goto L_8004F1F8; } // 8004F24C
L_8004F250:;
  c->r[11]=c->r[1]+0x00000020u; // 8004F250
  c->lr=0x8004F258u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004F254
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004F258
  c->lr=c->r[0]; // 8004F25C
  c->r[1]=c->r[1]+0x00000020u; // 8004F260
  return; // 8004F264
}

// fn_8004F268
void f_8004F268(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8004F268
  return; // 8004F26C
}

// fn_8004F270
void f_8004F270(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F270
  c->r[0]=R8(c->r[13]+0xFFFFA310u); // 8004F274
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8004F278
  if (!crb(c,2)) { goto L_8004F2B4; } // 8004F27C
  {uint32_t ea=c->r[2]+0xFFFF8B88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F280
  c->r[0]=0u+0x00000001u; // 8004F284
  c->r[6]=0u+0x802B0000u; // 8004F288
  W8(c->r[13]+0xFFFFA310u,c->r[0]); // 8004F28C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8004F290
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8004F294
  c->r[5]=R32(c->r[1]+0x00000008u); // 8004F298
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8004F29C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8004F2A0
  {uint32_t ea=c->r[6]+0xFFFFDAA0u; W32(ea,c->r[5]); c->r[6]=ea;} // 8004F2A4
  c->r[3]=R32(c->r[1]+0x00000010u); // 8004F2A8
  W32(c->r[6]+0x00000004u,c->r[4]); // 8004F2AC
  W32(c->r[6]+0x00000008u,c->r[3]); // 8004F2B0
L_8004F2B4:;
  c->r[3]=0u+0x802B0000u; // 8004F2B4
  c->r[3]=c->r[3]+0xFFFFDAC0u; // 8004F2B8
  c->r[1]=c->r[1]+0x00000020u; // 8004F2BC
  return; // 8004F2C0
}

// fn_8004F2C4
void f_8004F2C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F2C4
  c->r[0]=c->lr; // 8004F2C8
  W32(c->r[1]+0x00000204u,c->r[0]); // 8004F2CC
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[31]);} // 8004F2D0
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,31,ea,0,0);} // 8004F2D4
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[30]);} // 8004F2D8
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,30,ea,0,0);} // 8004F2DC
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[29]);} // 8004F2E0
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,29,ea,0,0);} // 8004F2E4
  c->r[11]=c->r[1]+0x000001D0u; // 8004F2E8
  c->lr=0x8004F2F0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004F2EC
  c->r[27]=c->r[4]|c->r[4]; // 8004F2F0
  c->r[26]=c->r[3]|c->r[3]; // 8004F2F4
  c->r[3]=c->r[27]|c->r[27]; // 8004F2F8
  c->r[4]=0u+0x00000000u; // 8004F2FC
  c->r[5]=0u+0x00000010u; // 8004F300
  c->lr=0x8004F308u; f_8000443C(c); // 8004F304
  c->r[12]=R32(c->r[26]+0x00000000u); // 8004F308
  c->r[3]=c->r[26]|c->r[26]; // 8004F30C
  c->r[12]=R32(c->r[12]+0x000000B0u); // 8004F310
  c->ctr=c->r[12]; // 8004F314
  if (true) { c->lr=0x8004F31Cu; dispatch(c,c->ctr); } // 8004F318
  cmps(c,0,(int32_t)c->r[3],0); // 8004F31C
  c->r[31]=c->r[3]|c->r[3]; // 8004F320
  if (!crb(c,2)) { goto L_8004F330; } // 8004F324
  c->r[3]=0u+0x00000000u; // 8004F328
  goto L_8004F784; // 8004F32C
L_8004F330:;
  {uint32_t ea=c->r[2]+0xFFFF8B88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F330
  c->r[29]=0u+0x00000000u; // 8004F334
  c->r[7]=R32(c->r[26]+0x00000034u); // 8004F338
  c->r[30]=0u+0x00000000u; // 8004F33C
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 8004F340
  c->r[6]=R32(c->r[26]+0x00000038u); // 8004F344
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 8004F348
  c->r[5]=R32(c->r[1]+0x0000008Cu); // 8004F34C
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 8004F350
  c->r[4]=R32(c->r[1]+0x00000090u); // 8004F354
  W32(c->r[1]+0x000000B0u,c->r[5]); // 8004F358
  c->r[0]=R32(c->r[1]+0x00000094u); // 8004F35C
  W32(c->r[1]+0x000000B4u,c->r[4]); // 8004F360
  c->r[5]=R32(c->r[26]+0x0000003Cu); // 8004F364
  W32(c->r[1]+0x000000B8u,c->r[0]); // 8004F368
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F36C
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F370
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F374
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[2]);} // 8004F378
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[1]);} // 8004F37C
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 8004F380
  W32(c->r[1]+0x000000D4u,c->r[7]); // 8004F384
  c->r[28]=R32(c->r[3]+0x00000000u); // 8004F388
  W32(c->r[1]+0x000000D8u,c->r[6]); // 8004F38C
  W32(c->r[1]+0x000000DCu,c->r[5]); // 8004F390
  goto L_8004F530; // 8004F394
L_8004F398:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8004F398
  c->r[5]=c->r[0]+c->r[30]; // 8004F39C
  c->r[0]=R32(c->r[30]+c->r[0]); // 8004F3A0
  cmps(c,0,(int32_t)c->r[0],0); // 8004F3A4
  if (crb(c,2)) { goto L_8004F3B0; } // 8004F3A8
  goto L_8004F500; // 8004F3AC
L_8004F3B0:;
  c->r[4]=R32(c->r[26]+0x00000034u); // 8004F3B0
  c->r[3]=R32(c->r[26]+0x00000038u); // 8004F3B4
  c->r[0]=R32(c->r[26]+0x0000003Cu); // 8004F3B8
  W32(c->r[1]+0x00000050u,c->r[4]); // 8004F3BC
  c->r[24]=R32(c->r[5]+0x00000004u); // 8004F3C0
  W32(c->r[1]+0x00000054u,c->r[3]); // 8004F3C4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F3C8
  W32(c->r[1]+0x00000058u,c->r[0]); // 8004F3CC
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F3D0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F3D4
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 8004F3D8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 8004F3DC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8004F3E0
  c->r[4]=R32(c->r[24]+0x0000000Cu); // 8004F3E4
  cmps(c,0,(int32_t)c->r[4],0); // 8004F3E8
  if (crb(c,0)) { goto L_8004F4AC; } // 8004F3EC
  c->r[3]=R32(c->r[26]+0x00000064u); // 8004F3F0
  cmps(c,0,(int32_t)c->r[3],0); // 8004F3F4
  if (crb(c,0)) { goto L_8004F438; } // 8004F3F8
  c->lr=0x8004F400u; f_800DA404(c); // 8004F3FC
  cmps(c,0,(int32_t)c->r[3],0); // 8004F400
  c->r[25]=c->r[3]|c->r[3]; // 8004F404
  if (!crb(c,2)) { goto L_8004F414; } // 8004F408
  c->r[5]=0u+0x00000000u; // 8004F40C
  goto L_8004F43C; // 8004F410
L_8004F414:;
  c->r[3]=c->r[26]+0x00000004u; // 8004F414
  c->r[4]=c->r[1]+0x00000140u; // 8004F418
  c->lr=0x8004F420u; f_80163864(c); // 8004F41C
  c->r[4]=c->r[25]|c->r[25]; // 8004F420
  c->r[3]=c->r[1]+0x00000140u; // 8004F424
  c->r[5]=c->r[1]+0x00000170u; // 8004F428
  c->lr=0x8004F430u; f_80163898(c); // 8004F42C
  c->r[5]=0u+0x00000001u; // 8004F430
  goto L_8004F43C; // 8004F434
L_8004F438:;
  c->r[5]=0u+0x00000000u; // 8004F438
L_8004F43C:;
  cmps(c,0,(int32_t)c->r[5],1); // 8004F43C
  if (!crb(c,2)) { goto L_8004F48C; } // 8004F440
  {uint32_t ea=c->r[1]+0x0000017Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F444
  {uint32_t ea=c->r[1]+0x0000018Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F448
  {uint32_t ea=c->r[1]+0x0000019Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F44C
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[2]);} // 8004F450
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 8004F454
  c->r[4]=R32(c->r[1]+0x00000074u); // 8004F458
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 8004F45C
  c->r[3]=R32(c->r[1]+0x00000078u); // 8004F460
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 8004F464
  W32(c->r[1]+0x00000080u,c->r[4]); // 8004F468
  W32(c->r[1]+0x00000084u,c->r[3]); // 8004F46C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F470
  W32(c->r[1]+0x00000088u,c->r[0]); // 8004F474
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F478
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F47C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 8004F480
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 8004F484
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8004F488
L_8004F48C:;
  cmps(c,0,(int32_t)c->r[5],1); // 8004F48C
  if (!crb(c,2)) { goto L_8004F4AC; } // 8004F490
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F494
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F498
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F49C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 8004F4A0
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 8004F4A4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8004F4A8
L_8004F4AC:;
  c->r[3]=c->r[1]+0x0000005Cu; // 8004F4AC
  c->r[4]=c->r[24]|c->r[24]; // 8004F4B0
  c->r[5]=c->r[3]|c->r[3]; // 8004F4B4
  c->lr=0x8004F4BCu; f_801647E4(c); // 8004F4B8
  c->r[7]=R32(c->r[1]+0x0000005Cu); // 8004F4BC
  c->r[3]=c->r[1]+0x000000C8u; // 8004F4C0
  c->r[6]=R32(c->r[1]+0x00000060u); // 8004F4C4
  c->r[5]=c->r[3]|c->r[3]; // 8004F4C8
  c->r[0]=R32(c->r[1]+0x00000064u); // 8004F4CC
  c->r[4]=c->r[1]+0x000000BCu; // 8004F4D0
  W32(c->r[1]+0x000000A4u,c->r[7]); // 8004F4D4
  W32(c->r[1]+0x000000A8u,c->r[6]); // 8004F4D8
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F4DC
  W32(c->r[1]+0x000000ACu,c->r[0]); // 8004F4E0
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F4E4
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F4E8
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[2]);} // 8004F4EC
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 8004F4F0
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 8004F4F4
  c->lr=0x8004F4FCu; f_801647E4(c); // 8004F4F8
  goto L_8004F528; // 8004F4FC
L_8004F500:;
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F500
  c->r[3]=c->r[1]+0x000000C8u; // 8004F504
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F508
  c->r[5]=c->r[3]|c->r[3]; // 8004F50C
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F510
  c->r[4]=c->r[1]+0x000000BCu; // 8004F514
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[2]);} // 8004F518
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 8004F51C
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 8004F520
  c->lr=0x8004F528u; f_801647E4(c); // 8004F524
L_8004F528:;
  c->r[30]=c->r[30]+0x0000000Cu; // 8004F528
  c->r[29]=c->r[29]+0x00000001u; // 8004F52C
L_8004F530:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 8004F530
  if (crb(c,0)) { IRQCHK(c); goto L_8004F398; } // 8004F534
  c->r[3]=c->r[28]^0x80000000u; // 8004F538
  c->r[0]=0u+0x43300000u; // 8004F53C
  W32(c->r[1]+0x000001A4u,c->r[3]); // 8004F540
  c->r[3]=c->r[1]+0x000000C8u; // 8004F544
  {uint32_t ea=c->r[2]+0xFFFF8B90u; c->f[2]=RF64(ea);} // 8004F548
  c->r[4]=c->r[3]|c->r[3]; // 8004F54C
  W32(c->r[1]+0x000001A0u,c->r[0]); // 8004F550
  {uint32_t ea=c->r[2]+0xFFFF8B8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F554
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[1]=RF64(ea);} // 8004F558
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8004F55C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 8004F560
  c->lr=0x8004F568u; f_8016482C(c); // 8004F564
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F568
  c->r[29]=0u+0x00000000u; // 8004F56C
  {uint32_t ea=c->r[2]+0xFFFF8B88u; c->f[31]=c->ps1[31]=RF32(ea);} // 8004F570
  c->r[30]=0u+0x00000000u; // 8004F574
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 8004F578
  {uint32_t ea=c->r[2]+0xFFFF8BA0u; c->f[30]=c->ps1[30]=RF32(ea);} // 8004F57C
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F580
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[0]);} // 8004F584
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F588
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[0]);} // 8004F58C
  goto L_8004F774; // 8004F590
L_8004F594:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8004F594
  c->r[5]=c->r[0]+c->r[30]; // 8004F598
  c->r[0]=R32(c->r[30]+c->r[0]); // 8004F59C
  cmps(c,0,(int32_t)c->r[0],0); // 8004F5A0
  if (crb(c,2)) { goto L_8004F5AC; } // 8004F5A4
  goto L_8004F718; // 8004F5A8
L_8004F5AC:;
  c->r[4]=R32(c->r[26]+0x00000034u); // 8004F5AC
  c->r[3]=R32(c->r[26]+0x00000038u); // 8004F5B0
  c->r[0]=R32(c->r[26]+0x0000003Cu); // 8004F5B4
  W32(c->r[1]+0x00000014u,c->r[4]); // 8004F5B8
  c->r[24]=R32(c->r[5]+0x00000004u); // 8004F5BC
  W32(c->r[1]+0x00000018u,c->r[3]); // 8004F5C0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F5C4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8004F5C8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F5CC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F5D0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 8004F5D4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8004F5D8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8004F5DC
  c->r[4]=R32(c->r[24]+0x0000000Cu); // 8004F5E0
  cmps(c,0,(int32_t)c->r[4],0); // 8004F5E4
  if (crb(c,0)) { goto L_8004F6A8; } // 8004F5E8
  c->r[3]=R32(c->r[26]+0x00000064u); // 8004F5EC
  cmps(c,0,(int32_t)c->r[3],0); // 8004F5F0
  if (crb(c,0)) { goto L_8004F634; } // 8004F5F4
  c->lr=0x8004F5FCu; f_800DA404(c); // 8004F5F8
  cmps(c,0,(int32_t)c->r[3],0); // 8004F5FC
  c->r[25]=c->r[3]|c->r[3]; // 8004F600
  if (!crb(c,2)) { goto L_8004F610; } // 8004F604
  c->r[5]=0u+0x00000000u; // 8004F608
  goto L_8004F638; // 8004F60C
L_8004F610:;
  c->r[3]=c->r[26]+0x00000004u; // 8004F610
  c->r[4]=c->r[1]+0x000000E0u; // 8004F614
  c->lr=0x8004F61Cu; f_80163864(c); // 8004F618
  c->r[4]=c->r[25]|c->r[25]; // 8004F61C
  c->r[3]=c->r[1]+0x000000E0u; // 8004F620
  c->r[5]=c->r[1]+0x00000110u; // 8004F624
  c->lr=0x8004F62Cu; f_80163898(c); // 8004F628
  c->r[5]=0u+0x00000001u; // 8004F62C
  goto L_8004F638; // 8004F630
L_8004F634:;
  c->r[5]=0u+0x00000000u; // 8004F634
L_8004F638:;
  cmps(c,0,(int32_t)c->r[5],1); // 8004F638
  if (!crb(c,2)) { goto L_8004F688; } // 8004F63C
  {uint32_t ea=c->r[1]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F640
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F644
  {uint32_t ea=c->r[1]+0x0000013Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F648
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 8004F64C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 8004F650
  c->r[4]=R32(c->r[1]+0x00000038u); // 8004F654
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 8004F658
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 8004F65C
  c->r[0]=R32(c->r[1]+0x00000040u); // 8004F660
  W32(c->r[1]+0x00000044u,c->r[4]); // 8004F664
  W32(c->r[1]+0x00000048u,c->r[3]); // 8004F668
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F66C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8004F670
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F674
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F678
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 8004F67C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 8004F680
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8004F684
L_8004F688:;
  cmps(c,0,(int32_t)c->r[5],1); // 8004F688
  if (!crb(c,2)) { goto L_8004F6A8; } // 8004F68C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F690
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F694
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F698
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 8004F69C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8004F6A0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8004F6A4
L_8004F6A8:;
  c->r[3]=c->r[1]+0x00000020u; // 8004F6A8
  c->r[4]=c->r[24]|c->r[24]; // 8004F6AC
  c->r[5]=c->r[3]|c->r[3]; // 8004F6B0
  c->lr=0x8004F6B8u; f_801647E4(c); // 8004F6B4
  c->r[7]=R32(c->r[1]+0x00000020u); // 8004F6B8
  c->r[3]=c->r[1]+0x000000C8u; // 8004F6BC
  c->r[6]=R32(c->r[1]+0x00000024u); // 8004F6C0
  c->r[4]=c->r[1]+0x000000BCu; // 8004F6C4
  c->r[0]=R32(c->r[1]+0x00000028u); // 8004F6C8
  c->r[5]=c->r[1]+0x00000008u; // 8004F6CC
  W32(c->r[1]+0x00000098u,c->r[7]); // 8004F6D0
  W32(c->r[1]+0x0000009Cu,c->r[6]); // 8004F6D4
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F6D8
  W32(c->r[1]+0x000000A0u,c->r[0]); // 8004F6DC
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F6E0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F6E4
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[2]);} // 8004F6E8
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 8004F6EC
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 8004F6F0
  c->lr=0x8004F6F8u; f_80164808(c); // 8004F6F4
  c->r[3]=c->r[1]+0x00000008u; // 8004F6F8
  c->lr=0x8004F700u; f_801648A4(c); // 8004F6FC
  {uint32_t ea=c->r[24]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F700
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8004F704
  fcmp(c,0,c->f[31],c->f[0]); // 8004F708
  if (!crb(c,0)) { goto L_8004F76C; } // 8004F70C
  c->f[31]=c->f[0]; // 8004F710
  goto L_8004F76C; // 8004F714
L_8004F718:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 8004F718
  c->r[3]=c->r[26]|c->r[26]; // 8004F71C
  {uint32_t ea=c->r[26]+0x0000004Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 8004F720
  c->r[12]=R32(c->r[12]+0x000000C8u); // 8004F724
  c->ctr=c->r[12]; // 8004F728
  if (true) { c->lr=0x8004F730u; dispatch(c,c->ctr); } // 8004F72C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[29]); // 8004F730
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 8004F734
  fcmp(c,0,c->f[31],c->f[0]); // 8004F738
  if (!crb(c,0)) { goto L_8004F744; } // 8004F73C
  c->f[31]=c->f[0]; // 8004F740
L_8004F744:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 8004F744
  c->r[3]=c->r[26]|c->r[26]; // 8004F748
  {uint32_t ea=c->r[26]+0x0000004Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 8004F74C
  c->r[12]=R32(c->r[12]+0x000000C4u); // 8004F750
  c->ctr=c->r[12]; // 8004F754
  if (true) { c->lr=0x8004F75Cu; dispatch(c,c->ctr); } // 8004F758
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[29]); // 8004F75C
  fcmp(c,0,c->f[31],c->f[0]); // 8004F760
  if (!crb(c,0)) { goto L_8004F76C; } // 8004F764
  c->f[31]=c->f[0]; // 8004F768
L_8004F76C:;
  c->r[30]=c->r[30]+0x0000000Cu; // 8004F76C
  c->r[29]=c->r[29]+0x00000001u; // 8004F770
L_8004F774:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 8004F774
  if (crb(c,0)) { IRQCHK(c); goto L_8004F594; } // 8004F778
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[31]);} // 8004F77C
  c->r[3]=0u+0x00000001u; // 8004F780
L_8004F784:;
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,31,ea,0,0);} // 8004F784
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[31]=RF64(ea);} // 8004F788
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,30,ea,0,0);} // 8004F78C
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[30]=RF64(ea);} // 8004F790
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,29,ea,0,0);} // 8004F794
  c->r[11]=c->r[1]+0x000001D0u; // 8004F798
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[29]=RF64(ea);} // 8004F79C
  c->lr=0x8004F7A4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004F7A0
  c->r[0]=R32(c->r[1]+0x00000204u); // 8004F7A4
  c->lr=c->r[0]; // 8004F7A8
  c->r[1]=c->r[1]+0x00000200u; // 8004F7AC
  return; // 8004F7B0
}

// fn_8004F7B4
void f_8004F7B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFF820u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F7B4
  c->r[0]=c->lr; // 8004F7B8
  W32(c->r[1]+0x000007E4u,c->r[0]); // 8004F7BC
  {uint32_t ea=c->r[1]+0x000007D0u; WF64(ea,c->f[31]);} // 8004F7C0
  {uint32_t ea=c->r[1]+0x000007D8u; psq_store(c,31,ea,0,0);} // 8004F7C4
  {uint32_t ea=c->r[1]+0x000007C0u; WF64(ea,c->f[30]);} // 8004F7C8
  {uint32_t ea=c->r[1]+0x000007C8u; psq_store(c,30,ea,0,0);} // 8004F7CC
  {uint32_t ea=c->r[1]+0x000007B0u; WF64(ea,c->f[29]);} // 8004F7D0
  {uint32_t ea=c->r[1]+0x000007B8u; psq_store(c,29,ea,0,0);} // 8004F7D4
  {uint32_t ea=c->r[1]+0x000007A0u; WF64(ea,c->f[28]);} // 8004F7D8
  {uint32_t ea=c->r[1]+0x000007A8u; psq_store(c,28,ea,0,0);} // 8004F7DC
  {uint32_t ea=c->r[1]+0x00000790u; WF64(ea,c->f[27]);} // 8004F7E0
  {uint32_t ea=c->r[1]+0x00000798u; psq_store(c,27,ea,0,0);} // 8004F7E4
  c->r[11]=c->r[1]+0x00000790u; // 8004F7E8
  c->lr=0x8004F7F0u; f_80252B70(c); // 8004F7EC
  c->r[23]=c->r[4]|c->r[4]; // 8004F7F0
  c->r[9]=R32(c->r[3]+0x00000034u); // 8004F7F4
  c->r[12]=R32(c->r[23]+0x00000000u); // 8004F7F8
  c->r[24]=c->r[5]|c->r[5]; // 8004F7FC
  c->r[8]=R32(c->r[3]+0x00000038u); // 8004F800
  c->r[22]=c->r[3]|c->r[3]; // 8004F804
  c->r[7]=R32(c->r[3]+0x0000003Cu); // 8004F808
  c->r[3]=c->r[23]|c->r[23]; // 8004F80C
  c->r[6]=R32(c->r[4]+0x00000034u); // 8004F810
  c->r[14]=0u+0x00000000u; // 8004F814
  c->r[5]=R32(c->r[4]+0x00000038u); // 8004F818
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 8004F81C
  c->r[12]=R32(c->r[12]+0x000000C8u); // 8004F820
  W32(c->r[1]+0x000003D4u,c->r[9]); // 8004F824
  {uint32_t ea=c->r[4]+0x0000004Cu; c->f[27]=c->ps1[27]=RF32(ea);} // 8004F828
  W32(c->r[1]+0x000003D8u,c->r[8]); // 8004F82C
  W32(c->r[1]+0x000003DCu,c->r[7]); // 8004F830
  W32(c->r[1]+0x000003C8u,c->r[6]); // 8004F834
  W32(c->r[1]+0x000003CCu,c->r[5]); // 8004F838
  W32(c->r[1]+0x000003D0u,c->r[0]); // 8004F83C
  c->ctr=c->r[12]; // 8004F840
  if (true) { c->lr=0x8004F848u; dispatch(c,c->ctr); } // 8004F844
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[27]); // 8004F848
  c->r[12]=R32(c->r[23]+0x00000000u); // 8004F84C
  {uint32_t ea=c->r[2]+0xFFFF8BA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F850
  c->r[3]=c->r[23]|c->r[23]; // 8004F854
  c->r[12]=R32(c->r[12]+0x000000C8u); // 8004F858
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 8004F85C
  {uint32_t ea=c->r[23]+0x0000004Cu; c->f[27]=c->ps1[27]=RF32(ea);} // 8004F860
  c->ctr=c->r[12]; // 8004F864
  if (true) { c->lr=0x8004F86Cu; dispatch(c,c->ctr); } // 8004F868
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[27]); // 8004F86C
  {uint32_t ea=c->r[2]+0xFFFF8BA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F870
  c->r[3]=c->r[22]|c->r[22]; // 8004F874
  c->r[4]=c->r[1]+0x000003B8u; // 8004F878
  c->f[27]=c->ps1[27]=S(c->f[0]*c->f[1]); // 8004F87C
  c->lr=0x8004F884u; f_8004F2C4(c); // 8004F880
  c->r[3]=c->r[23]|c->r[23]; // 8004F884
  c->r[4]=c->r[1]+0x000003A8u; // 8004F888
  c->lr=0x8004F890u; f_8004F2C4(c); // 8004F88C
  c->r[10]=R32(c->r[1]+0x000003A8u); // 8004F890
  c->r[3]=c->r[1]+0x0000039Cu; // 8004F894
  c->r[9]=R32(c->r[1]+0x000003ACu); // 8004F898
  c->r[4]=c->r[1]+0x00000360u; // 8004F89C
  c->r[8]=R32(c->r[1]+0x000003B0u); // 8004F8A0
  c->r[5]=c->r[1]+0x00000354u; // 8004F8A4
  c->r[7]=R32(c->r[1]+0x000003B8u); // 8004F8A8
  c->r[6]=R32(c->r[1]+0x000003BCu); // 8004F8AC
  c->r[0]=R32(c->r[1]+0x000003C0u); // 8004F8B0
  W32(c->r[1]+0x00000354u,c->r[10]); // 8004F8B4
  {uint32_t ea=c->r[1]+0x000003C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F8B8
  W32(c->r[1]+0x00000358u,c->r[9]); // 8004F8BC
  {uint32_t ea=c->r[1]+0x000003B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F8C0
  W32(c->r[1]+0x0000035Cu,c->r[8]); // 8004F8C4
  W32(c->r[1]+0x00000360u,c->r[7]); // 8004F8C8
  W32(c->r[1]+0x00000364u,c->r[6]); // 8004F8CC
  W32(c->r[1]+0x00000368u,c->r[0]); // 8004F8D0
  c->lr=0x8004F8D8u; f_80013E00(c); // 8004F8D4
  cmps(c,0,(int32_t)c->r[3],1); // 8004F8D8
  if (crb(c,2)) { goto L_8004F8E8; } // 8004F8DC
  c->r[3]=0u+0x00000000u; // 8004F8E0
  goto L_80050A48; // 8004F8E4
L_8004F8E8:;
  c->r[12]=R32(c->r[22]+0x00000000u); // 8004F8E8
  c->r[3]=c->r[22]|c->r[22]; // 8004F8EC
  c->r[12]=R32(c->r[12]+0x000000B0u); // 8004F8F0
  c->ctr=c->r[12]; // 8004F8F4
  if (true) { c->lr=0x8004F8FCu; dispatch(c,c->ctr); } // 8004F8F8
  cmps(c,0,(int32_t)c->r[3],0); // 8004F8FC
  c->r[30]=c->r[3]|c->r[3]; // 8004F900
  if (!crb(c,2)) { goto L_8004F910; } // 8004F904
  c->r[3]=0u+0x00000000u; // 8004F908
  goto L_80050A48; // 8004F90C
L_8004F910:;
  c->r[12]=R32(c->r[23]+0x00000000u); // 8004F910
  c->r[3]=c->r[23]|c->r[23]; // 8004F914
  c->r[12]=R32(c->r[12]+0x000000B0u); // 8004F918
  c->ctr=c->r[12]; // 8004F91C
  if (true) { c->lr=0x8004F924u; dispatch(c,c->ctr); } // 8004F920
  cmps(c,0,(int32_t)c->r[3],0); // 8004F924
  c->r[31]=c->r[3]|c->r[3]; // 8004F928
  if (!crb(c,2)) { goto L_8004F938; } // 8004F92C
  c->r[3]=0u+0x00000000u; // 8004F930
  goto L_80050A48; // 8004F934
L_8004F938:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 8004F938
  cmps(c,0,(int32_t)c->r[0],0); // 8004F93C
  W32(c->r[1]+0x00000740u,c->r[0]); // 8004F940
  if (crb(c,1)) { goto L_800500E4; } // 8004F944
  c->r[17]=R32(c->r[30]+0x00000000u); // 8004F948
  c->r[20]=0u+0x00000000u; // 8004F94C
  {uint32_t ea=c->r[2]+0xFFFF8B88u; c->f[31]=c->ps1[31]=RF32(ea);} // 8004F950
  c->r[15]=0u+0x00000000u; // 8004F954
  goto L_800500D8; // 8004F958
L_8004F95C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 8004F95C
  c->r[5]=c->r[0]+c->r[15]; // 8004F960
  c->r[0]=R32(c->r[15]+c->r[0]); // 8004F964
  cmps(c,0,(int32_t)c->r[0],0); // 8004F968
  if (crb(c,2)) { goto L_8004F974; } // 8004F96C
  goto L_8004FAB8; // 8004F970
L_8004F974:;
  c->r[4]=R32(c->r[22]+0x00000034u); // 8004F974
  c->r[3]=R32(c->r[22]+0x00000038u); // 8004F978
  c->r[0]=R32(c->r[22]+0x0000003Cu); // 8004F97C
  W32(c->r[1]+0x0000021Cu,c->r[4]); // 8004F980
  c->r[16]=R32(c->r[5]+0x00000004u); // 8004F984
  W32(c->r[1]+0x00000220u,c->r[3]); // 8004F988
  {uint32_t ea=c->r[1]+0x0000021Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F98C
  W32(c->r[1]+0x00000224u,c->r[0]); // 8004F990
  {uint32_t ea=c->r[1]+0x00000220u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F994
  {uint32_t ea=c->r[1]+0x00000224u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F998
  {uint32_t ea=c->r[1]+0x00000228u; WF32(ea,c->f[2]);} // 8004F99C
  {uint32_t ea=c->r[1]+0x0000022Cu; WF32(ea,c->f[1]);} // 8004F9A0
  {uint32_t ea=c->r[1]+0x00000230u; WF32(ea,c->f[0]);} // 8004F9A4
  c->r[4]=R32(c->r[16]+0x0000000Cu); // 8004F9A8
  cmps(c,0,(int32_t)c->r[4],0); // 8004F9AC
  if (crb(c,0)) { goto L_8004FA70; } // 8004F9B0
  c->r[3]=R32(c->r[22]+0x00000064u); // 8004F9B4
  cmps(c,0,(int32_t)c->r[3],0); // 8004F9B8
  if (crb(c,0)) { goto L_8004F9FC; } // 8004F9BC
  c->lr=0x8004F9C4u; f_800DA404(c); // 8004F9C0
  cmps(c,0,(int32_t)c->r[3],0); // 8004F9C4
  c->r[18]=c->r[3]|c->r[3]; // 8004F9C8
  if (!crb(c,2)) { goto L_8004F9D8; } // 8004F9CC
  c->r[5]=0u+0x00000000u; // 8004F9D0
  goto L_8004FA00; // 8004F9D4
L_8004F9D8:;
  c->r[3]=c->r[22]+0x00000004u; // 8004F9D8
  c->r[4]=c->r[1]+0x000006E0u; // 8004F9DC
  c->lr=0x8004F9E4u; f_80163864(c); // 8004F9E0
  c->r[4]=c->r[18]|c->r[18]; // 8004F9E4
  c->r[3]=c->r[1]+0x000006E0u; // 8004F9E8
  c->r[5]=c->r[1]+0x00000710u; // 8004F9EC
  c->lr=0x8004F9F4u; f_80163898(c); // 8004F9F0
  c->r[5]=0u+0x00000001u; // 8004F9F4
  goto L_8004FA00; // 8004F9F8
L_8004F9FC:;
  c->r[5]=0u+0x00000000u; // 8004F9FC
L_8004FA00:;
  cmps(c,0,(int32_t)c->r[5],1); // 8004FA00
  if (!crb(c,2)) { goto L_8004FA50; } // 8004FA04
  {uint32_t ea=c->r[1]+0x0000071Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FA08
  {uint32_t ea=c->r[1]+0x0000072Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FA0C
  {uint32_t ea=c->r[1]+0x0000073Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FA10
  {uint32_t ea=c->r[1]+0x00000240u; WF32(ea,c->f[2]);} // 8004FA14
  {uint32_t ea=c->r[1]+0x00000244u; WF32(ea,c->f[1]);} // 8004FA18
  c->r[4]=R32(c->r[1]+0x00000240u); // 8004FA1C
  {uint32_t ea=c->r[1]+0x00000248u; WF32(ea,c->f[0]);} // 8004FA20
  c->r[3]=R32(c->r[1]+0x00000244u); // 8004FA24
  c->r[0]=R32(c->r[1]+0x00000248u); // 8004FA28
  W32(c->r[1]+0x0000024Cu,c->r[4]); // 8004FA2C
  W32(c->r[1]+0x00000250u,c->r[3]); // 8004FA30
  {uint32_t ea=c->r[1]+0x0000024Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FA34
  W32(c->r[1]+0x00000254u,c->r[0]); // 8004FA38
  {uint32_t ea=c->r[1]+0x00000250u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FA3C
  {uint32_t ea=c->r[1]+0x00000254u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FA40
  {uint32_t ea=c->r[1]+0x00000234u; WF32(ea,c->f[2]);} // 8004FA44
  {uint32_t ea=c->r[1]+0x00000238u; WF32(ea,c->f[1]);} // 8004FA48
  {uint32_t ea=c->r[1]+0x0000023Cu; WF32(ea,c->f[0]);} // 8004FA4C
L_8004FA50:;
  cmps(c,0,(int32_t)c->r[5],1); // 8004FA50
  if (!crb(c,2)) { goto L_8004FA70; } // 8004FA54
  {uint32_t ea=c->r[1]+0x00000234u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FA58
  {uint32_t ea=c->r[1]+0x00000238u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FA5C
  {uint32_t ea=c->r[1]+0x0000023Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FA60
  {uint32_t ea=c->r[1]+0x00000228u; WF32(ea,c->f[2]);} // 8004FA64
  {uint32_t ea=c->r[1]+0x0000022Cu; WF32(ea,c->f[1]);} // 8004FA68
  {uint32_t ea=c->r[1]+0x00000230u; WF32(ea,c->f[0]);} // 8004FA6C
L_8004FA70:;
  c->r[3]=c->r[1]+0x00000228u; // 8004FA70
  c->r[4]=c->r[16]|c->r[16]; // 8004FA74
  c->r[5]=c->r[3]|c->r[3]; // 8004FA78
  c->lr=0x8004FA80u; f_801647E4(c); // 8004FA7C
  c->r[4]=R32(c->r[1]+0x00000228u); // 8004FA80
  c->r[3]=R32(c->r[1]+0x0000022Cu); // 8004FA84
  c->r[0]=R32(c->r[1]+0x00000230u); // 8004FA88
  W32(c->r[1]+0x00000348u,c->r[4]); // 8004FA8C
  W32(c->r[1]+0x0000034Cu,c->r[3]); // 8004FA90
  {uint32_t ea=c->r[1]+0x00000348u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FA94
  W32(c->r[1]+0x00000350u,c->r[0]); // 8004FA98
  {uint32_t ea=c->r[1]+0x0000034Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FA9C
  {uint32_t ea=c->r[1]+0x00000350u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FAA0
  {uint32_t ea=c->r[1]+0x00000390u; WF32(ea,c->f[2]);} // 8004FAA4
  {uint32_t ea=c->r[1]+0x00000394u; WF32(ea,c->f[1]);} // 8004FAA8
  {uint32_t ea=c->r[1]+0x00000398u; WF32(ea,c->f[0]);} // 8004FAAC
  {uint32_t ea=c->r[16]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 8004FAB0
  goto L_8004FAD4; // 8004FAB4
L_8004FAB8:;
  {uint32_t ea=c->r[1]+0x000003D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FAB8
  c->f[30]=c->f[28]; // 8004FABC
  {uint32_t ea=c->r[1]+0x000003D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FAC0
  {uint32_t ea=c->r[1]+0x000003DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FAC4
  {uint32_t ea=c->r[1]+0x00000390u; WF32(ea,c->f[2]);} // 8004FAC8
  {uint32_t ea=c->r[1]+0x00000394u; WF32(ea,c->f[1]);} // 8004FACC
  {uint32_t ea=c->r[1]+0x00000398u; WF32(ea,c->f[0]);} // 8004FAD0
L_8004FAD4:;
  c->r[21]=R32(c->r[31]+0x00000008u); // 8004FAD4
  cmps(c,0,(int32_t)c->r[21],0); // 8004FAD8
  if (crb(c,1)) { goto L_8004FD04; } // 8004FADC
  c->r[18]=R32(c->r[31]+0x00000000u); // 8004FAE0
  c->r[21]=0u+0x00000000u; // 8004FAE4
  c->r[16]=0u+0x00000000u; // 8004FAE8
  goto L_8004FCF8; // 8004FAEC
L_8004FAF0:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8004FAF0
  c->r[5]=c->r[0]+c->r[16]; // 8004FAF4
  c->r[0]=R32(c->r[16]+c->r[0]); // 8004FAF8
  cmps(c,0,(int32_t)c->r[0],0); // 8004FAFC
  if (crb(c,2)) { goto L_8004FB08; } // 8004FB00
  goto L_8004FC4C; // 8004FB04
L_8004FB08:;
  c->r[4]=R32(c->r[23]+0x00000034u); // 8004FB08
  c->r[3]=R32(c->r[23]+0x00000038u); // 8004FB0C
  c->r[0]=R32(c->r[23]+0x0000003Cu); // 8004FB10
  W32(c->r[1]+0x000001E0u,c->r[4]); // 8004FB14
  c->r[19]=R32(c->r[5]+0x00000004u); // 8004FB18
  W32(c->r[1]+0x000001E4u,c->r[3]); // 8004FB1C
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FB20
  W32(c->r[1]+0x000001E8u,c->r[0]); // 8004FB24
  {uint32_t ea=c->r[1]+0x000001E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FB28
  {uint32_t ea=c->r[1]+0x000001E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FB2C
  {uint32_t ea=c->r[1]+0x000001ECu; WF32(ea,c->f[2]);} // 8004FB30
  {uint32_t ea=c->r[1]+0x000001F0u; WF32(ea,c->f[1]);} // 8004FB34
  {uint32_t ea=c->r[1]+0x000001F4u; WF32(ea,c->f[0]);} // 8004FB38
  c->r[4]=R32(c->r[19]+0x0000000Cu); // 8004FB3C
  cmps(c,0,(int32_t)c->r[4],0); // 8004FB40
  if (crb(c,0)) { goto L_8004FC04; } // 8004FB44
  c->r[3]=R32(c->r[23]+0x00000064u); // 8004FB48
  cmps(c,0,(int32_t)c->r[3],0); // 8004FB4C
  if (crb(c,0)) { goto L_8004FB90; } // 8004FB50
  c->lr=0x8004FB58u; f_800DA404(c); // 8004FB54
  cmps(c,0,(int32_t)c->r[3],0); // 8004FB58
  c->r[25]=c->r[3]|c->r[3]; // 8004FB5C
  if (!crb(c,2)) { goto L_8004FB6C; } // 8004FB60
  c->r[5]=0u+0x00000000u; // 8004FB64
  goto L_8004FB94; // 8004FB68
L_8004FB6C:;
  c->r[3]=c->r[23]+0x00000004u; // 8004FB6C
  c->r[4]=c->r[1]+0x00000680u; // 8004FB70
  c->lr=0x8004FB78u; f_80163864(c); // 8004FB74
  c->r[4]=c->r[25]|c->r[25]; // 8004FB78
  c->r[3]=c->r[1]+0x00000680u; // 8004FB7C
  c->r[5]=c->r[1]+0x000006B0u; // 8004FB80
  c->lr=0x8004FB88u; f_80163898(c); // 8004FB84
  c->r[5]=0u+0x00000001u; // 8004FB88
  goto L_8004FB94; // 8004FB8C
L_8004FB90:;
  c->r[5]=0u+0x00000000u; // 8004FB90
L_8004FB94:;
  cmps(c,0,(int32_t)c->r[5],1); // 8004FB94
  if (!crb(c,2)) { goto L_8004FBE4; } // 8004FB98
  {uint32_t ea=c->r[1]+0x000006BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FB9C
  {uint32_t ea=c->r[1]+0x000006CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FBA0
  {uint32_t ea=c->r[1]+0x000006DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FBA4
  {uint32_t ea=c->r[1]+0x00000204u; WF32(ea,c->f[2]);} // 8004FBA8
  {uint32_t ea=c->r[1]+0x00000208u; WF32(ea,c->f[1]);} // 8004FBAC
  c->r[4]=R32(c->r[1]+0x00000204u); // 8004FBB0
  {uint32_t ea=c->r[1]+0x0000020Cu; WF32(ea,c->f[0]);} // 8004FBB4
  c->r[3]=R32(c->r[1]+0x00000208u); // 8004FBB8
  c->r[0]=R32(c->r[1]+0x0000020Cu); // 8004FBBC
  W32(c->r[1]+0x00000210u,c->r[4]); // 8004FBC0
  W32(c->r[1]+0x00000214u,c->r[3]); // 8004FBC4
  {uint32_t ea=c->r[1]+0x00000210u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FBC8
  W32(c->r[1]+0x00000218u,c->r[0]); // 8004FBCC
  {uint32_t ea=c->r[1]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FBD0
  {uint32_t ea=c->r[1]+0x00000218u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FBD4
  {uint32_t ea=c->r[1]+0x000001F8u; WF32(ea,c->f[2]);} // 8004FBD8
  {uint32_t ea=c->r[1]+0x000001FCu; WF32(ea,c->f[1]);} // 8004FBDC
  {uint32_t ea=c->r[1]+0x00000200u; WF32(ea,c->f[0]);} // 8004FBE0
L_8004FBE4:;
  cmps(c,0,(int32_t)c->r[5],1); // 8004FBE4
  if (!crb(c,2)) { goto L_8004FC04; } // 8004FBE8
  {uint32_t ea=c->r[1]+0x000001F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FBEC
  {uint32_t ea=c->r[1]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FBF0
  {uint32_t ea=c->r[1]+0x00000200u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FBF4
  {uint32_t ea=c->r[1]+0x000001ECu; WF32(ea,c->f[2]);} // 8004FBF8
  {uint32_t ea=c->r[1]+0x000001F0u; WF32(ea,c->f[1]);} // 8004FBFC
  {uint32_t ea=c->r[1]+0x000001F4u; WF32(ea,c->f[0]);} // 8004FC00
L_8004FC04:;
  c->r[3]=c->r[1]+0x000001ECu; // 8004FC04
  c->r[4]=c->r[19]|c->r[19]; // 8004FC08
  c->r[5]=c->r[3]|c->r[3]; // 8004FC0C
  c->lr=0x8004FC14u; f_801647E4(c); // 8004FC10
  c->r[4]=R32(c->r[1]+0x000001ECu); // 8004FC14
  c->r[3]=R32(c->r[1]+0x000001F0u); // 8004FC18
  c->r[0]=R32(c->r[1]+0x000001F4u); // 8004FC1C
  W32(c->r[1]+0x0000033Cu,c->r[4]); // 8004FC20
  {uint32_t ea=c->r[19]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FC24
  W32(c->r[1]+0x00000340u,c->r[3]); // 8004FC28
  {uint32_t ea=c->r[1]+0x0000033Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8004FC2C
  W32(c->r[1]+0x00000344u,c->r[0]); // 8004FC30
  {uint32_t ea=c->r[1]+0x00000340u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FC34
  {uint32_t ea=c->r[1]+0x00000344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FC38
  {uint32_t ea=c->r[1]+0x00000378u; WF32(ea,c->f[3]);} // 8004FC3C
  {uint32_t ea=c->r[1]+0x0000037Cu; WF32(ea,c->f[1]);} // 8004FC40
  {uint32_t ea=c->r[1]+0x00000380u; WF32(ea,c->f[0]);} // 8004FC44
  goto L_8004FC68; // 8004FC48
L_8004FC4C:;
  {uint32_t ea=c->r[1]+0x000003C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004FC4C
  c->f[2]=c->f[27]; // 8004FC50
  {uint32_t ea=c->r[1]+0x000003CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FC54
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FC58
  {uint32_t ea=c->r[1]+0x00000378u; WF32(ea,c->f[3]);} // 8004FC5C
  {uint32_t ea=c->r[1]+0x0000037Cu; WF32(ea,c->f[1]);} // 8004FC60
  {uint32_t ea=c->r[1]+0x00000380u; WF32(ea,c->f[0]);} // 8004FC64
L_8004FC68:;
  c->r[10]=R32(c->r[1]+0x00000378u); // 8004FC68
  c->f[1]=c->f[30]; // 8004FC6C
  c->r[9]=R32(c->r[1]+0x0000037Cu); // 8004FC70
  c->r[3]=c->r[1]+0x0000039Cu; // 8004FC74
  c->r[8]=R32(c->r[1]+0x00000380u); // 8004FC78
  c->r[4]=c->r[1]+0x00000330u; // 8004FC7C
  c->r[7]=R32(c->r[1]+0x00000390u); // 8004FC80
  c->r[6]=R32(c->r[1]+0x00000394u); // 8004FC84
  c->r[5]=c->r[1]+0x00000324u; // 8004FC88
  c->r[0]=R32(c->r[1]+0x00000398u); // 8004FC8C
  W32(c->r[1]+0x00000324u,c->r[10]); // 8004FC90
  W32(c->r[1]+0x00000328u,c->r[9]); // 8004FC94
  W32(c->r[1]+0x0000032Cu,c->r[8]); // 8004FC98
  W32(c->r[1]+0x00000330u,c->r[7]); // 8004FC9C
  W32(c->r[1]+0x00000334u,c->r[6]); // 8004FCA0
  W32(c->r[1]+0x00000338u,c->r[0]); // 8004FCA4
  c->lr=0x8004FCACu; f_80013E00(c); // 8004FCA8
  cmps(c,0,(int32_t)c->r[3],1); // 8004FCAC
  if (!crb(c,2)) { goto L_8004FCF0; } // 8004FCB0
  c->r[3]=c->r[1]+0x0000039Cu; // 8004FCB4
  c->r[4]=c->r[1]+0x00000390u; // 8004FCB8
  c->r[5]=c->r[1]+0x000001D4u; // 8004FCBC
  c->lr=0x8004FCC4u; f_80164808(c); // 8004FCC0
  c->r[3]=c->r[1]+0x000001D4u; // 8004FCC4
  c->lr=0x8004FCCCu; f_801648A4(c); // 8004FCC8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8004FCCC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8004FCD0
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[0]); // 8004FCD4
  fcmp(c,0,c->f[0],c->f[31]); // 8004FCD8
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[0]);} // 8004FCDC
  if (!crb(c,0)) { goto L_8004FCE8; } // 8004FCE0
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[31]);} // 8004FCE4
L_8004FCE8:;
  c->r[14]=0u+0x00000001u; // 8004FCE8
  goto L_800500D0; // 8004FCEC
L_8004FCF0:;
  c->r[16]=c->r[16]+0x0000000Cu; // 8004FCF0
  c->r[21]=c->r[21]+0x00000001u; // 8004FCF4
L_8004FCF8:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[18]); // 8004FCF8
  if (crb(c,0)) { IRQCHK(c); goto L_8004FAF0; } // 8004FCFC
  goto L_800500D0; // 8004FD00
L_8004FD04:;
  c->r[18]=0u+0x00000000u; // 8004FD04
  c->r[16]=0u+0x00000000u; // 8004FD08
  goto L_800500C8; // 8004FD0C
L_8004FD10:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8004FD10
  c->r[4]=R32(c->r[31]+0x00000004u); // 8004FD14
  c->r[0]=R32(c->r[3]+c->r[16]); // 8004FD18
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8004FD1C
  c->r[5]=c->r[4]+c->r[0]; // 8004FD20
  c->r[0]=R32(c->r[4]+c->r[0]); // 8004FD24
  cmps(c,0,(int32_t)c->r[0],0); // 8004FD28
  if (crb(c,2)) { goto L_8004FD34; } // 8004FD2C
  goto L_8004FE78; // 8004FD30
L_8004FD34:;
  c->r[4]=R32(c->r[23]+0x00000034u); // 8004FD34
  c->r[3]=R32(c->r[23]+0x00000038u); // 8004FD38
  c->r[0]=R32(c->r[23]+0x0000003Cu); // 8004FD3C
  W32(c->r[1]+0x00000198u,c->r[4]); // 8004FD40
  c->r[19]=R32(c->r[5]+0x00000004u); // 8004FD44
  W32(c->r[1]+0x0000019Cu,c->r[3]); // 8004FD48
  {uint32_t ea=c->r[1]+0x00000198u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FD4C
  W32(c->r[1]+0x000001A0u,c->r[0]); // 8004FD50
  {uint32_t ea=c->r[1]+0x0000019Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FD54
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FD58
  {uint32_t ea=c->r[1]+0x000001A4u; WF32(ea,c->f[2]);} // 8004FD5C
  {uint32_t ea=c->r[1]+0x000001A8u; WF32(ea,c->f[1]);} // 8004FD60
  {uint32_t ea=c->r[1]+0x000001ACu; WF32(ea,c->f[0]);} // 8004FD64
  c->r[4]=R32(c->r[19]+0x0000000Cu); // 8004FD68
  cmps(c,0,(int32_t)c->r[4],0); // 8004FD6C
  if (crb(c,0)) { goto L_8004FE30; } // 8004FD70
  c->r[3]=R32(c->r[23]+0x00000064u); // 8004FD74
  cmps(c,0,(int32_t)c->r[3],0); // 8004FD78
  if (crb(c,0)) { goto L_8004FDBC; } // 8004FD7C
  c->lr=0x8004FD84u; f_800DA404(c); // 8004FD80
  cmps(c,0,(int32_t)c->r[3],0); // 8004FD84
  c->r[25]=c->r[3]|c->r[3]; // 8004FD88
  if (!crb(c,2)) { goto L_8004FD98; } // 8004FD8C
  c->r[5]=0u+0x00000000u; // 8004FD90
  goto L_8004FDC0; // 8004FD94
L_8004FD98:;
  c->r[3]=c->r[23]+0x00000004u; // 8004FD98
  c->r[4]=c->r[1]+0x00000620u; // 8004FD9C
  c->lr=0x8004FDA4u; f_80163864(c); // 8004FDA0
  c->r[4]=c->r[25]|c->r[25]; // 8004FDA4
  c->r[3]=c->r[1]+0x00000620u; // 8004FDA8
  c->r[5]=c->r[1]+0x00000650u; // 8004FDAC
  c->lr=0x8004FDB4u; f_80163898(c); // 8004FDB0
  c->r[5]=0u+0x00000001u; // 8004FDB4
  goto L_8004FDC0; // 8004FDB8
L_8004FDBC:;
  c->r[5]=0u+0x00000000u; // 8004FDBC
L_8004FDC0:;
  cmps(c,0,(int32_t)c->r[5],1); // 8004FDC0
  if (!crb(c,2)) { goto L_8004FE10; } // 8004FDC4
  {uint32_t ea=c->r[1]+0x0000065Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FDC8
  {uint32_t ea=c->r[1]+0x0000066Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FDCC
  {uint32_t ea=c->r[1]+0x0000067Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FDD0
  {uint32_t ea=c->r[1]+0x000001BCu; WF32(ea,c->f[2]);} // 8004FDD4
  {uint32_t ea=c->r[1]+0x000001C0u; WF32(ea,c->f[1]);} // 8004FDD8
  c->r[4]=R32(c->r[1]+0x000001BCu); // 8004FDDC
  {uint32_t ea=c->r[1]+0x000001C4u; WF32(ea,c->f[0]);} // 8004FDE0
  c->r[3]=R32(c->r[1]+0x000001C0u); // 8004FDE4
  c->r[0]=R32(c->r[1]+0x000001C4u); // 8004FDE8
  W32(c->r[1]+0x000001C8u,c->r[4]); // 8004FDEC
  W32(c->r[1]+0x000001CCu,c->r[3]); // 8004FDF0
  {uint32_t ea=c->r[1]+0x000001C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FDF4
  W32(c->r[1]+0x000001D0u,c->r[0]); // 8004FDF8
  {uint32_t ea=c->r[1]+0x000001CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FDFC
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FE00
  {uint32_t ea=c->r[1]+0x000001B0u; WF32(ea,c->f[2]);} // 8004FE04
  {uint32_t ea=c->r[1]+0x000001B4u; WF32(ea,c->f[1]);} // 8004FE08
  {uint32_t ea=c->r[1]+0x000001B8u; WF32(ea,c->f[0]);} // 8004FE0C
L_8004FE10:;
  cmps(c,0,(int32_t)c->r[5],1); // 8004FE10
  if (!crb(c,2)) { goto L_8004FE30; } // 8004FE14
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FE18
  {uint32_t ea=c->r[1]+0x000001B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FE1C
  {uint32_t ea=c->r[1]+0x000001B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FE20
  {uint32_t ea=c->r[1]+0x000001A4u; WF32(ea,c->f[2]);} // 8004FE24
  {uint32_t ea=c->r[1]+0x000001A8u; WF32(ea,c->f[1]);} // 8004FE28
  {uint32_t ea=c->r[1]+0x000001ACu; WF32(ea,c->f[0]);} // 8004FE2C
L_8004FE30:;
  c->r[3]=c->r[1]+0x000001A4u; // 8004FE30
  c->r[4]=c->r[19]|c->r[19]; // 8004FE34
  c->r[5]=c->r[3]|c->r[3]; // 8004FE38
  c->lr=0x8004FE40u; f_801647E4(c); // 8004FE3C
  c->r[4]=R32(c->r[1]+0x000001A4u); // 8004FE40
  c->r[3]=R32(c->r[1]+0x000001A8u); // 8004FE44
  c->r[0]=R32(c->r[1]+0x000001ACu); // 8004FE48
  W32(c->r[1]+0x00000318u,c->r[4]); // 8004FE4C
  {uint32_t ea=c->r[19]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 8004FE50
  W32(c->r[1]+0x0000031Cu,c->r[3]); // 8004FE54
  {uint32_t ea=c->r[1]+0x00000318u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FE58
  W32(c->r[1]+0x00000320u,c->r[0]); // 8004FE5C
  {uint32_t ea=c->r[1]+0x0000031Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FE60
  {uint32_t ea=c->r[1]+0x00000320u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FE64
  {uint32_t ea=c->r[1]+0x00000378u; WF32(ea,c->f[2]);} // 8004FE68
  {uint32_t ea=c->r[1]+0x0000037Cu; WF32(ea,c->f[1]);} // 8004FE6C
  {uint32_t ea=c->r[1]+0x00000380u; WF32(ea,c->f[0]);} // 8004FE70
  goto L_8004FE94; // 8004FE74
L_8004FE78:;
  {uint32_t ea=c->r[1]+0x000003C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FE78
  c->f[29]=c->f[27]; // 8004FE7C
  {uint32_t ea=c->r[1]+0x000003CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FE80
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FE84
  {uint32_t ea=c->r[1]+0x00000378u; WF32(ea,c->f[2]);} // 8004FE88
  {uint32_t ea=c->r[1]+0x0000037Cu; WF32(ea,c->f[1]);} // 8004FE8C
  {uint32_t ea=c->r[1]+0x00000380u; WF32(ea,c->f[0]);} // 8004FE90
L_8004FE94:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8004FE94
  c->r[4]=R32(c->r[31]+0x00000004u); // 8004FE98
  c->r[3]=c->r[0]+c->r[16]; // 8004FE9C
  c->r[0]=R32(c->r[3]+0x00000004u); // 8004FEA0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8004FEA4
  c->r[5]=c->r[4]+c->r[0]; // 8004FEA8
  c->r[0]=R32(c->r[4]+c->r[0]); // 8004FEAC
  cmps(c,0,(int32_t)c->r[0],0); // 8004FEB0
  if (crb(c,2)) { goto L_8004FEBC; } // 8004FEB4
  goto L_8004FFFC; // 8004FEB8
L_8004FEBC:;
  c->r[4]=R32(c->r[23]+0x00000034u); // 8004FEBC
  c->r[3]=R32(c->r[23]+0x00000038u); // 8004FEC0
  c->r[0]=R32(c->r[23]+0x0000003Cu); // 8004FEC4
  W32(c->r[1]+0x0000015Cu,c->r[4]); // 8004FEC8
  c->r[19]=R32(c->r[5]+0x00000004u); // 8004FECC
  W32(c->r[1]+0x00000160u,c->r[3]); // 8004FED0
  {uint32_t ea=c->r[1]+0x0000015Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FED4
  W32(c->r[1]+0x00000164u,c->r[0]); // 8004FED8
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FEDC
  {uint32_t ea=c->r[1]+0x00000164u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FEE0
  {uint32_t ea=c->r[1]+0x00000168u; WF32(ea,c->f[2]);} // 8004FEE4
  {uint32_t ea=c->r[1]+0x0000016Cu; WF32(ea,c->f[1]);} // 8004FEE8
  {uint32_t ea=c->r[1]+0x00000170u; WF32(ea,c->f[0]);} // 8004FEEC
  c->r[4]=R32(c->r[19]+0x0000000Cu); // 8004FEF0
  cmps(c,0,(int32_t)c->r[4],0); // 8004FEF4
  if (crb(c,0)) { goto L_8004FFB8; } // 8004FEF8
  c->r[3]=R32(c->r[23]+0x00000064u); // 8004FEFC
  cmps(c,0,(int32_t)c->r[3],0); // 8004FF00
  if (crb(c,0)) { goto L_8004FF44; } // 8004FF04
  c->lr=0x8004FF0Cu; f_800DA404(c); // 8004FF08
  cmps(c,0,(int32_t)c->r[3],0); // 8004FF0C
  c->r[25]=c->r[3]|c->r[3]; // 8004FF10
  if (!crb(c,2)) { goto L_8004FF20; } // 8004FF14
  c->r[5]=0u+0x00000000u; // 8004FF18
  goto L_8004FF48; // 8004FF1C
L_8004FF20:;
  c->r[3]=c->r[23]+0x00000004u; // 8004FF20
  c->r[4]=c->r[1]+0x000005C0u; // 8004FF24
  c->lr=0x8004FF2Cu; f_80163864(c); // 8004FF28
  c->r[4]=c->r[25]|c->r[25]; // 8004FF2C
  c->r[3]=c->r[1]+0x000005C0u; // 8004FF30
  c->r[5]=c->r[1]+0x000005F0u; // 8004FF34
  c->lr=0x8004FF3Cu; f_80163898(c); // 8004FF38
  c->r[5]=0u+0x00000001u; // 8004FF3C
  goto L_8004FF48; // 8004FF40
L_8004FF44:;
  c->r[5]=0u+0x00000000u; // 8004FF44
L_8004FF48:;
  cmps(c,0,(int32_t)c->r[5],1); // 8004FF48
  if (!crb(c,2)) { goto L_8004FF98; } // 8004FF4C
  {uint32_t ea=c->r[1]+0x000005FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FF50
  {uint32_t ea=c->r[1]+0x0000060Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FF54
  {uint32_t ea=c->r[1]+0x0000061Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FF58
  {uint32_t ea=c->r[1]+0x00000180u; WF32(ea,c->f[2]);} // 8004FF5C
  {uint32_t ea=c->r[1]+0x00000184u; WF32(ea,c->f[1]);} // 8004FF60
  c->r[4]=R32(c->r[1]+0x00000180u); // 8004FF64
  {uint32_t ea=c->r[1]+0x00000188u; WF32(ea,c->f[0]);} // 8004FF68
  c->r[3]=R32(c->r[1]+0x00000184u); // 8004FF6C
  c->r[0]=R32(c->r[1]+0x00000188u); // 8004FF70
  W32(c->r[1]+0x0000018Cu,c->r[4]); // 8004FF74
  W32(c->r[1]+0x00000190u,c->r[3]); // 8004FF78
  {uint32_t ea=c->r[1]+0x0000018Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FF7C
  W32(c->r[1]+0x00000194u,c->r[0]); // 8004FF80
  {uint32_t ea=c->r[1]+0x00000190u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FF84
  {uint32_t ea=c->r[1]+0x00000194u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FF88
  {uint32_t ea=c->r[1]+0x00000174u; WF32(ea,c->f[2]);} // 8004FF8C
  {uint32_t ea=c->r[1]+0x00000178u; WF32(ea,c->f[1]);} // 8004FF90
  {uint32_t ea=c->r[1]+0x0000017Cu; WF32(ea,c->f[0]);} // 8004FF94
L_8004FF98:;
  cmps(c,0,(int32_t)c->r[5],1); // 8004FF98
  if (!crb(c,2)) { goto L_8004FFB8; } // 8004FF9C
  {uint32_t ea=c->r[1]+0x00000174u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FFA0
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FFA4
  {uint32_t ea=c->r[1]+0x0000017Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FFA8
  {uint32_t ea=c->r[1]+0x00000168u; WF32(ea,c->f[2]);} // 8004FFAC
  {uint32_t ea=c->r[1]+0x0000016Cu; WF32(ea,c->f[1]);} // 8004FFB0
  {uint32_t ea=c->r[1]+0x00000170u; WF32(ea,c->f[0]);} // 8004FFB4
L_8004FFB8:;
  c->r[3]=c->r[1]+0x00000168u; // 8004FFB8
  c->r[4]=c->r[19]|c->r[19]; // 8004FFBC
  c->r[5]=c->r[3]|c->r[3]; // 8004FFC0
  c->lr=0x8004FFC8u; f_801647E4(c); // 8004FFC4
  c->r[4]=R32(c->r[1]+0x00000168u); // 8004FFC8
  c->r[3]=R32(c->r[1]+0x0000016Cu); // 8004FFCC
  c->r[0]=R32(c->r[1]+0x00000170u); // 8004FFD0
  W32(c->r[1]+0x0000030Cu,c->r[4]); // 8004FFD4
  W32(c->r[1]+0x00000310u,c->r[3]); // 8004FFD8
  {uint32_t ea=c->r[1]+0x0000030Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FFDC
  W32(c->r[1]+0x00000314u,c->r[0]); // 8004FFE0
  {uint32_t ea=c->r[1]+0x00000310u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004FFE4
  {uint32_t ea=c->r[1]+0x00000314u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FFE8
  {uint32_t ea=c->r[1]+0x0000036Cu; WF32(ea,c->f[2]);} // 8004FFEC
  {uint32_t ea=c->r[1]+0x00000370u; WF32(ea,c->f[1]);} // 8004FFF0
  {uint32_t ea=c->r[1]+0x00000374u; WF32(ea,c->f[0]);} // 8004FFF4
  goto L_80050014; // 8004FFF8
L_8004FFFC:;
  {uint32_t ea=c->r[1]+0x000003C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FFFC
  {uint32_t ea=c->r[1]+0x000003CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80050000
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050004
  {uint32_t ea=c->r[1]+0x0000036Cu; WF32(ea,c->f[2]);} // 80050008
  {uint32_t ea=c->r[1]+0x00000370u; WF32(ea,c->f[1]);} // 8005000C
  {uint32_t ea=c->r[1]+0x00000374u; WF32(ea,c->f[0]);} // 80050010
L_80050014:;
  c->r[26]=R32(c->r[1]+0x00000390u); // 80050014
  c->f[1]=c->f[29]; // 80050018
  c->r[25]=R32(c->r[1]+0x00000394u); // 8005001C
  c->f[2]=c->f[30]; // 80050020
  c->r[19]=R32(c->r[1]+0x00000398u); // 80050024
  c->r[3]=c->r[1]+0x0000039Cu; // 80050028
  c->r[12]=R32(c->r[1]+0x0000036Cu); // 8005002C
  c->r[11]=R32(c->r[1]+0x00000370u); // 80050030
  c->r[4]=c->r[1]+0x00000008u; // 80050034
  c->r[10]=R32(c->r[1]+0x00000374u); // 80050038
  c->r[5]=c->r[1]+0x00000300u; // 8005003C
  c->r[9]=R32(c->r[1]+0x00000378u); // 80050040
  c->r[6]=c->r[1]+0x000002F4u; // 80050044
  c->r[8]=R32(c->r[1]+0x0000037Cu); // 80050048
  c->r[7]=c->r[1]+0x000002E8u; // 8005004C
  c->r[0]=R32(c->r[1]+0x00000380u); // 80050050
  W32(c->r[1]+0x000002E8u,c->r[26]); // 80050054
  W32(c->r[1]+0x000002ECu,c->r[25]); // 80050058
  W32(c->r[1]+0x000002F0u,c->r[19]); // 8005005C
  W32(c->r[1]+0x000002F4u,c->r[12]); // 80050060
  W32(c->r[1]+0x000002F8u,c->r[11]); // 80050064
  W32(c->r[1]+0x000002FCu,c->r[10]); // 80050068
  W32(c->r[1]+0x00000300u,c->r[9]); // 8005006C
  W32(c->r[1]+0x00000304u,c->r[8]); // 80050070
  W32(c->r[1]+0x00000308u,c->r[0]); // 80050074
  c->lr=0x8005007Cu; f_80013F70(c); // 80050078
  cmps(c,0,(int32_t)c->r[3],1); // 8005007C
  if (!crb(c,2)) { goto L_800500C0; } // 80050080
  c->r[3]=c->r[1]+0x0000039Cu; // 80050084
  c->r[4]=c->r[1]+0x00000390u; // 80050088
  c->r[5]=c->r[1]+0x00000150u; // 8005008C
  c->lr=0x80050094u; f_80164808(c); // 80050090
  c->r[3]=c->r[1]+0x00000150u; // 80050094
  c->lr=0x8005009Cu; f_801648A4(c); // 80050098
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8005009C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800500A0
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[0]); // 800500A4
  fcmp(c,0,c->f[0],c->f[31]); // 800500A8
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[0]);} // 800500AC
  if (!crb(c,0)) { goto L_800500B8; } // 800500B0
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[31]);} // 800500B4
L_800500B8:;
  c->r[14]=0u+0x00000001u; // 800500B8
  goto L_800500D0; // 800500BC
L_800500C0:;
  c->r[16]=c->r[16]+0x00000008u; // 800500C0
  c->r[18]=c->r[18]+0x00000001u; // 800500C4
L_800500C8:;
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[21]); // 800500C8
  if (crb(c,0)) { IRQCHK(c); goto L_8004FD10; } // 800500CC
L_800500D0:;
  c->r[15]=c->r[15]+0x0000000Cu; // 800500D0
  c->r[20]=c->r[20]+0x00000001u; // 800500D4
L_800500D8:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[17]); // 800500D8
  if (crb(c,0)) { IRQCHK(c); goto L_8004F95C; } // 800500DC
  goto L_80050A44; // 800500E0
L_800500E4:;
  {uint32_t ea=c->r[2]+0xFFFF8B88u; c->f[31]=c->ps1[31]=RF32(ea);} // 800500E4
  c->r[27]=0u+0x00000000u; // 800500E8
  c->r[29]=0u+0x00000000u; // 800500EC
  goto L_80050A38; // 800500F0
L_800500F4:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800500F4
  c->r[4]=R32(c->r[30]+0x00000004u); // 800500F8
  c->r[0]=R32(c->r[3]+c->r[29]); // 800500FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80050100
  c->r[5]=c->r[4]+c->r[0]; // 80050104
  c->r[0]=R32(c->r[4]+c->r[0]); // 80050108
  cmps(c,0,(int32_t)c->r[0],0); // 8005010C
  if (crb(c,2)) { goto L_80050118; } // 80050110
  goto L_8005025C; // 80050114
L_80050118:;
  c->r[4]=R32(c->r[22]+0x00000034u); // 80050118
  c->r[3]=R32(c->r[22]+0x00000038u); // 8005011C
  c->r[0]=R32(c->r[22]+0x0000003Cu); // 80050120
  W32(c->r[1]+0x00000114u,c->r[4]); // 80050124
  c->r[15]=R32(c->r[5]+0x00000004u); // 80050128
  W32(c->r[1]+0x00000118u,c->r[3]); // 8005012C
  {uint32_t ea=c->r[1]+0x00000114u; c->f[2]=c->ps1[2]=RF32(ea);} // 80050130
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 80050134
  {uint32_t ea=c->r[1]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050138
  {uint32_t ea=c->r[1]+0x0000011Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8005013C
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[2]);} // 80050140
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[1]);} // 80050144
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[0]);} // 80050148
  c->r[4]=R32(c->r[15]+0x0000000Cu); // 8005014C
  cmps(c,0,(int32_t)c->r[4],0); // 80050150
  if (crb(c,0)) { goto L_80050214; } // 80050154
  c->r[3]=R32(c->r[22]+0x00000064u); // 80050158
  cmps(c,0,(int32_t)c->r[3],0); // 8005015C
  if (crb(c,0)) { goto L_800501A0; } // 80050160
  c->lr=0x80050168u; f_800DA404(c); // 80050164
  cmps(c,0,(int32_t)c->r[3],0); // 80050168
  c->r[16]=c->r[3]|c->r[3]; // 8005016C
  if (!crb(c,2)) { goto L_8005017C; } // 80050170
  c->r[5]=0u+0x00000000u; // 80050174
  goto L_800501A4; // 80050178
L_8005017C:;
  c->r[3]=c->r[22]+0x00000004u; // 8005017C
  c->r[4]=c->r[1]+0x00000560u; // 80050180
  c->lr=0x80050188u; f_80163864(c); // 80050184
  c->r[4]=c->r[16]|c->r[16]; // 80050188
  c->r[3]=c->r[1]+0x00000560u; // 8005018C
  c->r[5]=c->r[1]+0x00000590u; // 80050190
  c->lr=0x80050198u; f_80163898(c); // 80050194
  c->r[5]=0u+0x00000001u; // 80050198
  goto L_800501A4; // 8005019C
L_800501A0:;
  c->r[5]=0u+0x00000000u; // 800501A0
L_800501A4:;
  cmps(c,0,(int32_t)c->r[5],1); // 800501A4
  if (!crb(c,2)) { goto L_800501F4; } // 800501A8
  {uint32_t ea=c->r[1]+0x0000059Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800501AC
  {uint32_t ea=c->r[1]+0x000005ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800501B0
  {uint32_t ea=c->r[1]+0x000005BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800501B4
  {uint32_t ea=c->r[1]+0x00000138u; WF32(ea,c->f[2]);} // 800501B8
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[1]);} // 800501BC
  c->r[4]=R32(c->r[1]+0x00000138u); // 800501C0
  {uint32_t ea=c->r[1]+0x00000140u; WF32(ea,c->f[0]);} // 800501C4
  c->r[3]=R32(c->r[1]+0x0000013Cu); // 800501C8
  c->r[0]=R32(c->r[1]+0x00000140u); // 800501CC
  W32(c->r[1]+0x00000144u,c->r[4]); // 800501D0
  W32(c->r[1]+0x00000148u,c->r[3]); // 800501D4
  {uint32_t ea=c->r[1]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 800501D8
  W32(c->r[1]+0x0000014Cu,c->r[0]); // 800501DC
  {uint32_t ea=c->r[1]+0x00000148u; c->f[1]=c->ps1[1]=RF32(ea);} // 800501E0
  {uint32_t ea=c->r[1]+0x0000014Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800501E4
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[2]);} // 800501E8
  {uint32_t ea=c->r[1]+0x00000130u; WF32(ea,c->f[1]);} // 800501EC
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[0]);} // 800501F0
L_800501F4:;
  cmps(c,0,(int32_t)c->r[5],1); // 800501F4
  if (!crb(c,2)) { goto L_80050214; } // 800501F8
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800501FC
  {uint32_t ea=c->r[1]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050200
  {uint32_t ea=c->r[1]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050204
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[2]);} // 80050208
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[1]);} // 8005020C
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[0]);} // 80050210
L_80050214:;
  c->r[3]=c->r[1]+0x00000120u; // 80050214
  c->r[4]=c->r[15]|c->r[15]; // 80050218
  c->r[5]=c->r[3]|c->r[3]; // 8005021C
  c->lr=0x80050224u; f_801647E4(c); // 80050220
  c->r[4]=R32(c->r[1]+0x00000120u); // 80050224
  c->r[3]=R32(c->r[1]+0x00000124u); // 80050228
  c->r[0]=R32(c->r[1]+0x00000128u); // 8005022C
  W32(c->r[1]+0x000002DCu,c->r[4]); // 80050230
  W32(c->r[1]+0x000002E0u,c->r[3]); // 80050234
  {uint32_t ea=c->r[1]+0x000002DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80050238
  W32(c->r[1]+0x000002E4u,c->r[0]); // 8005023C
  {uint32_t ea=c->r[1]+0x000002E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050240
  {uint32_t ea=c->r[1]+0x000002E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050244
  {uint32_t ea=c->r[1]+0x00000390u; WF32(ea,c->f[2]);} // 80050248
  {uint32_t ea=c->r[1]+0x00000394u; WF32(ea,c->f[1]);} // 8005024C
  {uint32_t ea=c->r[1]+0x00000398u; WF32(ea,c->f[0]);} // 80050250
  {uint32_t ea=c->r[15]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 80050254
  goto L_80050278; // 80050258
L_8005025C:;
  {uint32_t ea=c->r[1]+0x000003D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005025C
  c->f[30]=c->f[28]; // 80050260
  {uint32_t ea=c->r[1]+0x000003D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050264
  {uint32_t ea=c->r[1]+0x000003DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80050268
  {uint32_t ea=c->r[1]+0x00000390u; WF32(ea,c->f[2]);} // 8005026C
  {uint32_t ea=c->r[1]+0x00000394u; WF32(ea,c->f[1]);} // 80050270
  {uint32_t ea=c->r[1]+0x00000398u; WF32(ea,c->f[0]);} // 80050274
L_80050278:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80050278
  c->r[4]=R32(c->r[30]+0x00000004u); // 8005027C
  c->r[3]=c->r[0]+c->r[29]; // 80050280
  c->r[0]=R32(c->r[3]+0x00000004u); // 80050284
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80050288
  c->r[5]=c->r[4]+c->r[0]; // 8005028C
  c->r[0]=R32(c->r[4]+c->r[0]); // 80050290
  cmps(c,0,(int32_t)c->r[0],0); // 80050294
  if (crb(c,2)) { goto L_800502A0; } // 80050298
  goto L_800503E0; // 8005029C
L_800502A0:;
  c->r[4]=R32(c->r[22]+0x00000034u); // 800502A0
  c->r[3]=R32(c->r[22]+0x00000038u); // 800502A4
  c->r[0]=R32(c->r[22]+0x0000003Cu); // 800502A8
  W32(c->r[1]+0x000000D8u,c->r[4]); // 800502AC
  c->r[16]=R32(c->r[5]+0x00000004u); // 800502B0
  W32(c->r[1]+0x000000DCu,c->r[3]); // 800502B4
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800502B8
  W32(c->r[1]+0x000000E0u,c->r[0]); // 800502BC
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800502C0
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800502C4
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[2]);} // 800502C8
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[1]);} // 800502CC
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 800502D0
  c->r[4]=R32(c->r[16]+0x0000000Cu); // 800502D4
  cmps(c,0,(int32_t)c->r[4],0); // 800502D8
  if (crb(c,0)) { goto L_8005039C; } // 800502DC
  c->r[3]=R32(c->r[22]+0x00000064u); // 800502E0
  cmps(c,0,(int32_t)c->r[3],0); // 800502E4
  if (crb(c,0)) { goto L_80050328; } // 800502E8
  c->lr=0x800502F0u; f_800DA404(c); // 800502EC
  cmps(c,0,(int32_t)c->r[3],0); // 800502F0
  c->r[15]=c->r[3]|c->r[3]; // 800502F4
  if (!crb(c,2)) { goto L_80050304; } // 800502F8
  c->r[5]=0u+0x00000000u; // 800502FC
  goto L_8005032C; // 80050300
L_80050304:;
  c->r[3]=c->r[22]+0x00000004u; // 80050304
  c->r[4]=c->r[1]+0x00000500u; // 80050308
  c->lr=0x80050310u; f_80163864(c); // 8005030C
  c->r[4]=c->r[15]|c->r[15]; // 80050310
  c->r[3]=c->r[1]+0x00000500u; // 80050314
  c->r[5]=c->r[1]+0x00000530u; // 80050318
  c->lr=0x80050320u; f_80163898(c); // 8005031C
  c->r[5]=0u+0x00000001u; // 80050320
  goto L_8005032C; // 80050324
L_80050328:;
  c->r[5]=0u+0x00000000u; // 80050328
L_8005032C:;
  cmps(c,0,(int32_t)c->r[5],1); // 8005032C
  if (!crb(c,2)) { goto L_8005037C; } // 80050330
  {uint32_t ea=c->r[1]+0x0000053Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80050334
  {uint32_t ea=c->r[1]+0x0000054Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80050338
  {uint32_t ea=c->r[1]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8005033C
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[2]);} // 80050340
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[1]);} // 80050344
  c->r[4]=R32(c->r[1]+0x000000FCu); // 80050348
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 8005034C
  c->r[3]=R32(c->r[1]+0x00000100u); // 80050350
  c->r[0]=R32(c->r[1]+0x00000104u); // 80050354
  W32(c->r[1]+0x00000108u,c->r[4]); // 80050358
  W32(c->r[1]+0x0000010Cu,c->r[3]); // 8005035C
  {uint32_t ea=c->r[1]+0x00000108u; c->f[2]=c->ps1[2]=RF32(ea);} // 80050360
  W32(c->r[1]+0x00000110u,c->r[0]); // 80050364
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80050368
  {uint32_t ea=c->r[1]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005036C
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[2]);} // 80050370
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[1]);} // 80050374
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 80050378
L_8005037C:;
  cmps(c,0,(int32_t)c->r[5],1); // 8005037C
  if (!crb(c,2)) { goto L_8005039C; } // 80050380
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80050384
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050388
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005038C
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[2]);} // 80050390
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[1]);} // 80050394
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 80050398
L_8005039C:;
  c->r[3]=c->r[1]+0x000000E4u; // 8005039C
  c->r[4]=c->r[16]|c->r[16]; // 800503A0
  c->r[5]=c->r[3]|c->r[3]; // 800503A4
  c->lr=0x800503ACu; f_801647E4(c); // 800503A8
  c->r[4]=R32(c->r[1]+0x000000E4u); // 800503AC
  c->r[3]=R32(c->r[1]+0x000000E8u); // 800503B0
  c->r[0]=R32(c->r[1]+0x000000ECu); // 800503B4
  W32(c->r[1]+0x000002D0u,c->r[4]); // 800503B8
  W32(c->r[1]+0x000002D4u,c->r[3]); // 800503BC
  {uint32_t ea=c->r[1]+0x000002D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800503C0
  W32(c->r[1]+0x000002D8u,c->r[0]); // 800503C4
  {uint32_t ea=c->r[1]+0x000002D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800503C8
  {uint32_t ea=c->r[1]+0x000002D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800503CC
  {uint32_t ea=c->r[1]+0x00000384u; WF32(ea,c->f[2]);} // 800503D0
  {uint32_t ea=c->r[1]+0x00000388u; WF32(ea,c->f[1]);} // 800503D4
  {uint32_t ea=c->r[1]+0x0000038Cu; WF32(ea,c->f[0]);} // 800503D8
  goto L_800503F8; // 800503DC
L_800503E0:;
  {uint32_t ea=c->r[1]+0x000003D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800503E0
  {uint32_t ea=c->r[1]+0x000003D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800503E4
  {uint32_t ea=c->r[1]+0x000003DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800503E8
  {uint32_t ea=c->r[1]+0x00000384u; WF32(ea,c->f[2]);} // 800503EC
  {uint32_t ea=c->r[1]+0x00000388u; WF32(ea,c->f[1]);} // 800503F0
  {uint32_t ea=c->r[1]+0x0000038Cu; WF32(ea,c->f[0]);} // 800503F4
L_800503F8:;
  c->r[26]=R32(c->r[31]+0x00000008u); // 800503F8
  cmps(c,0,(int32_t)c->r[26],0); // 800503FC
  if (crb(c,1)) { goto L_80050648; } // 80050400
  c->r[19]=R32(c->r[31]+0x00000000u); // 80050404
  c->r[20]=0u+0x00000000u; // 80050408
  c->r[17]=R32(c->r[1]+0x00000384u); // 8005040C
  c->r[18]=0u+0x00000000u; // 80050410
  c->r[16]=R32(c->r[1]+0x00000388u); // 80050414
  c->r[15]=R32(c->r[1]+0x0000038Cu); // 80050418
  goto L_8005063C; // 8005041C
L_80050420:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 80050420
  c->r[5]=c->r[0]+c->r[18]; // 80050424
  c->r[0]=R32(c->r[18]+c->r[0]); // 80050428
  cmps(c,0,(int32_t)c->r[0],0); // 8005042C
  if (crb(c,2)) { goto L_80050438; } // 80050430
  goto L_8005057C; // 80050434
L_80050438:;
  c->r[4]=R32(c->r[23]+0x00000034u); // 80050438
  c->r[3]=R32(c->r[23]+0x00000038u); // 8005043C
  c->r[0]=R32(c->r[23]+0x0000003Cu); // 80050440
  W32(c->r[1]+0x0000009Cu,c->r[4]); // 80050444
  c->r[21]=R32(c->r[5]+0x00000004u); // 80050448
  W32(c->r[1]+0x000000A0u,c->r[3]); // 8005044C
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80050450
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80050454
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050458
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005045C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[2]);} // 80050460
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[1]);} // 80050464
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 80050468
  c->r[4]=R32(c->r[21]+0x0000000Cu); // 8005046C
  cmps(c,0,(int32_t)c->r[4],0); // 80050470
  if (crb(c,0)) { goto L_80050534; } // 80050474
  c->r[3]=R32(c->r[23]+0x00000064u); // 80050478
  cmps(c,0,(int32_t)c->r[3],0); // 8005047C
  if (crb(c,0)) { goto L_800504C0; } // 80050480
  c->lr=0x80050488u; f_800DA404(c); // 80050484
  cmps(c,0,(int32_t)c->r[3],0); // 80050488
  c->r[25]=c->r[3]|c->r[3]; // 8005048C
  if (!crb(c,2)) { goto L_8005049C; } // 80050490
  c->r[5]=0u+0x00000000u; // 80050494
  goto L_800504C4; // 80050498
L_8005049C:;
  c->r[3]=c->r[23]+0x00000004u; // 8005049C
  c->r[4]=c->r[1]+0x000004A0u; // 800504A0
  c->lr=0x800504A8u; f_80163864(c); // 800504A4
  c->r[4]=c->r[25]|c->r[25]; // 800504A8
  c->r[3]=c->r[1]+0x000004A0u; // 800504AC
  c->r[5]=c->r[1]+0x000004D0u; // 800504B0
  c->lr=0x800504B8u; f_80163898(c); // 800504B4
  c->r[5]=0u+0x00000001u; // 800504B8
  goto L_800504C4; // 800504BC
L_800504C0:;
  c->r[5]=0u+0x00000000u; // 800504C0
L_800504C4:;
  cmps(c,0,(int32_t)c->r[5],1); // 800504C4
  if (!crb(c,2)) { goto L_80050514; } // 800504C8
  {uint32_t ea=c->r[1]+0x000004DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800504CC
  {uint32_t ea=c->r[1]+0x000004ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800504D0
  {uint32_t ea=c->r[1]+0x000004FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800504D4
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[2]);} // 800504D8
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[1]);} // 800504DC
  c->r[4]=R32(c->r[1]+0x000000C0u); // 800504E0
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 800504E4
  c->r[3]=R32(c->r[1]+0x000000C4u); // 800504E8
  c->r[0]=R32(c->r[1]+0x000000C8u); // 800504EC
  W32(c->r[1]+0x000000CCu,c->r[4]); // 800504F0
  W32(c->r[1]+0x000000D0u,c->r[3]); // 800504F4
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800504F8
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800504FC
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050500
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050504
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[2]);} // 80050508
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 8005050C
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 80050510
L_80050514:;
  cmps(c,0,(int32_t)c->r[5],1); // 80050514
  if (!crb(c,2)) { goto L_80050534; } // 80050518
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005051C
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050520
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80050524
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[2]);} // 80050528
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[1]);} // 8005052C
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 80050530
L_80050534:;
  c->r[3]=c->r[1]+0x000000A8u; // 80050534
  c->r[4]=c->r[21]|c->r[21]; // 80050538
  c->r[5]=c->r[3]|c->r[3]; // 8005053C
  c->lr=0x80050544u; f_801647E4(c); // 80050540
  c->r[4]=R32(c->r[1]+0x000000A8u); // 80050544
  c->r[3]=R32(c->r[1]+0x000000ACu); // 80050548
  c->r[0]=R32(c->r[1]+0x000000B0u); // 8005054C
  W32(c->r[1]+0x000002C4u,c->r[4]); // 80050550
  {uint32_t ea=c->r[21]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80050554
  W32(c->r[1]+0x000002C8u,c->r[3]); // 80050558
  {uint32_t ea=c->r[1]+0x000002C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8005055C
  W32(c->r[1]+0x000002CCu,c->r[0]); // 80050560
  {uint32_t ea=c->r[1]+0x000002C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050564
  {uint32_t ea=c->r[1]+0x000002CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80050568
  {uint32_t ea=c->r[1]+0x00000378u; WF32(ea,c->f[3]);} // 8005056C
  {uint32_t ea=c->r[1]+0x0000037Cu; WF32(ea,c->f[1]);} // 80050570
  {uint32_t ea=c->r[1]+0x00000380u; WF32(ea,c->f[0]);} // 80050574
  goto L_80050598; // 80050578
L_8005057C:;
  {uint32_t ea=c->r[1]+0x000003C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8005057C
  c->f[2]=c->f[27]; // 80050580
  {uint32_t ea=c->r[1]+0x000003CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80050584
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050588
  {uint32_t ea=c->r[1]+0x00000378u; WF32(ea,c->f[3]);} // 8005058C
  {uint32_t ea=c->r[1]+0x0000037Cu; WF32(ea,c->f[1]);} // 80050590
  {uint32_t ea=c->r[1]+0x00000380u; WF32(ea,c->f[0]);} // 80050594
L_80050598:;
  c->r[6]=R32(c->r[1]+0x00000378u); // 80050598
  c->f[1]=c->f[30]; // 8005059C
  c->r[11]=R32(c->r[1]+0x0000037Cu); // 800505A0
  c->r[3]=c->r[1]+0x0000039Cu; // 800505A4
  c->r[10]=R32(c->r[1]+0x00000380u); // 800505A8
  c->r[4]=c->r[1]+0x00000008u; // 800505AC
  c->r[9]=R32(c->r[1]+0x00000390u); // 800505B0
  c->r[8]=R32(c->r[1]+0x00000394u); // 800505B4
  c->r[5]=c->r[1]+0x000002B8u; // 800505B8
  c->r[0]=R32(c->r[1]+0x00000398u); // 800505BC
  c->r[7]=c->r[1]+0x000002A0u; // 800505C0
  W32(c->r[1]+0x000002A0u,c->r[6]); // 800505C4
  c->r[6]=c->r[1]+0x000002ACu; // 800505C8
  W32(c->r[1]+0x000002A4u,c->r[11]); // 800505CC
  W32(c->r[1]+0x000002A8u,c->r[10]); // 800505D0
  W32(c->r[1]+0x000002ACu,c->r[17]); // 800505D4
  W32(c->r[1]+0x000002B0u,c->r[16]); // 800505D8
  W32(c->r[1]+0x000002B4u,c->r[15]); // 800505DC
  W32(c->r[1]+0x000002B8u,c->r[9]); // 800505E0
  W32(c->r[1]+0x000002BCu,c->r[8]); // 800505E4
  W32(c->r[1]+0x000002C0u,c->r[0]); // 800505E8
  c->lr=0x800505F0u; f_80013F70(c); // 800505EC
  cmps(c,0,(int32_t)c->r[3],1); // 800505F0
  if (!crb(c,2)) { goto L_80050634; } // 800505F4
  c->r[3]=c->r[1]+0x0000039Cu; // 800505F8
  c->r[4]=c->r[1]+0x00000390u; // 800505FC
  c->r[5]=c->r[1]+0x00000090u; // 80050600
  c->lr=0x80050608u; f_80164808(c); // 80050604
  c->r[3]=c->r[1]+0x00000090u; // 80050608
  c->lr=0x80050610u; f_801648A4(c); // 8005060C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80050610
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80050614
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[0]); // 80050618
  fcmp(c,0,c->f[0],c->f[31]); // 8005061C
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[0]);} // 80050620
  if (!crb(c,0)) { goto L_8005062C; } // 80050624
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[31]);} // 80050628
L_8005062C:;
  c->r[14]=0u+0x00000001u; // 8005062C
  goto L_80050A30; // 80050630
L_80050634:;
  c->r[18]=c->r[18]+0x0000000Cu; // 80050634
  c->r[20]=c->r[20]+0x00000001u; // 80050638
L_8005063C:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[19]); // 8005063C
  if (crb(c,0)) { IRQCHK(c); goto L_80050420; } // 80050640
  goto L_80050A30; // 80050644
L_80050648:;
  c->r[19]=R32(c->r[1]+0x00000384u); // 80050648
  c->r[25]=0u+0x00000000u; // 8005064C
  c->r[20]=R32(c->r[1]+0x00000388u); // 80050650
  c->r[28]=0u+0x00000000u; // 80050654
  c->r[21]=R32(c->r[1]+0x0000038Cu); // 80050658
  goto L_80050A28; // 8005065C
L_80050660:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80050660
  c->r[4]=R32(c->r[31]+0x00000004u); // 80050664
  c->r[0]=R32(c->r[3]+c->r[28]); // 80050668
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8005066C
  c->r[5]=c->r[4]+c->r[0]; // 80050670
  c->r[0]=R32(c->r[4]+c->r[0]); // 80050674
  cmps(c,0,(int32_t)c->r[0],0); // 80050678
  if (crb(c,2)) { goto L_80050684; } // 8005067C
  goto L_800507C8; // 80050680
L_80050684:;
  c->r[4]=R32(c->r[23]+0x00000034u); // 80050684
  c->r[3]=R32(c->r[23]+0x00000038u); // 80050688
  c->r[0]=R32(c->r[23]+0x0000003Cu); // 8005068C
  W32(c->r[1]+0x00000054u,c->r[4]); // 80050690
  c->r[15]=R32(c->r[5]+0x00000004u); // 80050694
  W32(c->r[1]+0x00000058u,c->r[3]); // 80050698
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005069C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800506A0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 800506A4
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800506A8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 800506AC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 800506B0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 800506B4
  c->r[4]=R32(c->r[15]+0x0000000Cu); // 800506B8
  cmps(c,0,(int32_t)c->r[4],0); // 800506BC
  if (crb(c,0)) { goto L_80050780; } // 800506C0
  c->r[3]=R32(c->r[23]+0x00000064u); // 800506C4
  cmps(c,0,(int32_t)c->r[3],0); // 800506C8
  if (crb(c,0)) { goto L_8005070C; } // 800506CC
  c->lr=0x800506D4u; f_800DA404(c); // 800506D0
  cmps(c,0,(int32_t)c->r[3],0); // 800506D4
  c->r[16]=c->r[3]|c->r[3]; // 800506D8
  if (!crb(c,2)) { goto L_800506E8; } // 800506DC
  c->r[5]=0u+0x00000000u; // 800506E0
  goto L_80050710; // 800506E4
L_800506E8:;
  c->r[3]=c->r[23]+0x00000004u; // 800506E8
  c->r[4]=c->r[1]+0x00000440u; // 800506EC
  c->lr=0x800506F4u; f_80163864(c); // 800506F0
  c->r[4]=c->r[16]|c->r[16]; // 800506F4
  c->r[3]=c->r[1]+0x00000440u; // 800506F8
  c->r[5]=c->r[1]+0x00000470u; // 800506FC
  c->lr=0x80050704u; f_80163898(c); // 80050700
  c->r[5]=0u+0x00000001u; // 80050704
  goto L_80050710; // 80050708
L_8005070C:;
  c->r[5]=0u+0x00000000u; // 8005070C
L_80050710:;
  cmps(c,0,(int32_t)c->r[5],1); // 80050710
  if (!crb(c,2)) { goto L_80050760; } // 80050714
  {uint32_t ea=c->r[1]+0x0000047Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80050718
  {uint32_t ea=c->r[1]+0x0000048Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8005071C
  {uint32_t ea=c->r[1]+0x0000049Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80050720
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[2]);} // 80050724
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 80050728
  c->r[4]=R32(c->r[1]+0x00000078u); // 8005072C
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 80050730
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 80050734
  c->r[0]=R32(c->r[1]+0x00000080u); // 80050738
  W32(c->r[1]+0x00000084u,c->r[4]); // 8005073C
  W32(c->r[1]+0x00000088u,c->r[3]); // 80050740
  {uint32_t ea=c->r[1]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 80050744
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 80050748
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005074C
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80050750
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 80050754
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 80050758
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 8005075C
L_80050760:;
  cmps(c,0,(int32_t)c->r[5],1); // 80050760
  if (!crb(c,2)) { goto L_80050780; } // 80050764
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80050768
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005076C
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050770
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 80050774
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80050778
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8005077C
L_80050780:;
  c->r[3]=c->r[1]+0x00000060u; // 80050780
  c->r[4]=c->r[15]|c->r[15]; // 80050784
  c->r[5]=c->r[3]|c->r[3]; // 80050788
  c->lr=0x80050790u; f_801647E4(c); // 8005078C
  c->r[4]=R32(c->r[1]+0x00000060u); // 80050790
  c->r[3]=R32(c->r[1]+0x00000064u); // 80050794
  c->r[0]=R32(c->r[1]+0x00000068u); // 80050798
  W32(c->r[1]+0x00000294u,c->r[4]); // 8005079C
  {uint32_t ea=c->r[15]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 800507A0
  W32(c->r[1]+0x00000298u,c->r[3]); // 800507A4
  {uint32_t ea=c->r[1]+0x00000294u; c->f[2]=c->ps1[2]=RF32(ea);} // 800507A8
  W32(c->r[1]+0x0000029Cu,c->r[0]); // 800507AC
  {uint32_t ea=c->r[1]+0x00000298u; c->f[1]=c->ps1[1]=RF32(ea);} // 800507B0
  {uint32_t ea=c->r[1]+0x0000029Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800507B4
  {uint32_t ea=c->r[1]+0x00000378u; WF32(ea,c->f[2]);} // 800507B8
  {uint32_t ea=c->r[1]+0x0000037Cu; WF32(ea,c->f[1]);} // 800507BC
  {uint32_t ea=c->r[1]+0x00000380u; WF32(ea,c->f[0]);} // 800507C0
  goto L_800507E4; // 800507C4
L_800507C8:;
  {uint32_t ea=c->r[1]+0x000003C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800507C8
  c->f[29]=c->f[27]; // 800507CC
  {uint32_t ea=c->r[1]+0x000003CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800507D0
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800507D4
  {uint32_t ea=c->r[1]+0x00000378u; WF32(ea,c->f[2]);} // 800507D8
  {uint32_t ea=c->r[1]+0x0000037Cu; WF32(ea,c->f[1]);} // 800507DC
  {uint32_t ea=c->r[1]+0x00000380u; WF32(ea,c->f[0]);} // 800507E0
L_800507E4:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800507E4
  c->r[4]=R32(c->r[31]+0x00000004u); // 800507E8
  c->r[3]=c->r[0]+c->r[28]; // 800507EC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800507F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800507F4
  c->r[5]=c->r[4]+c->r[0]; // 800507F8
  c->r[0]=R32(c->r[4]+c->r[0]); // 800507FC
  cmps(c,0,(int32_t)c->r[0],0); // 80050800
  if (crb(c,2)) { goto L_8005080C; } // 80050804
  goto L_8005094C; // 80050808
L_8005080C:;
  c->r[4]=R32(c->r[23]+0x00000034u); // 8005080C
  c->r[3]=R32(c->r[23]+0x00000038u); // 80050810
  c->r[0]=R32(c->r[23]+0x0000003Cu); // 80050814
  W32(c->r[1]+0x00000018u,c->r[4]); // 80050818
  c->r[15]=R32(c->r[5]+0x00000004u); // 8005081C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80050820
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80050824
  W32(c->r[1]+0x00000020u,c->r[0]); // 80050828
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8005082C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050830
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 80050834
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 80050838
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8005083C
  c->r[4]=R32(c->r[15]+0x0000000Cu); // 80050840
  cmps(c,0,(int32_t)c->r[4],0); // 80050844
  if (crb(c,0)) { goto L_80050908; } // 80050848
  c->r[3]=R32(c->r[23]+0x00000064u); // 8005084C
  cmps(c,0,(int32_t)c->r[3],0); // 80050850
  if (crb(c,0)) { goto L_80050894; } // 80050854
  c->lr=0x8005085Cu; f_800DA404(c); // 80050858
  cmps(c,0,(int32_t)c->r[3],0); // 8005085C
  c->r[16]=c->r[3]|c->r[3]; // 80050860
  if (!crb(c,2)) { goto L_80050870; } // 80050864
  c->r[5]=0u+0x00000000u; // 80050868
  goto L_80050898; // 8005086C
L_80050870:;
  c->r[3]=c->r[23]+0x00000004u; // 80050870
  c->r[4]=c->r[1]+0x000003E0u; // 80050874
  c->lr=0x8005087Cu; f_80163864(c); // 80050878
  c->r[4]=c->r[16]|c->r[16]; // 8005087C
  c->r[3]=c->r[1]+0x000003E0u; // 80050880
  c->r[5]=c->r[1]+0x00000410u; // 80050884
  c->lr=0x8005088Cu; f_80163898(c); // 80050888
  c->r[5]=0u+0x00000001u; // 8005088C
  goto L_80050898; // 80050890
L_80050894:;
  c->r[5]=0u+0x00000000u; // 80050894
L_80050898:;
  cmps(c,0,(int32_t)c->r[5],1); // 80050898
  if (!crb(c,2)) { goto L_800508E8; } // 8005089C
  {uint32_t ea=c->r[1]+0x0000041Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800508A0
  {uint32_t ea=c->r[1]+0x0000042Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800508A4
  {uint32_t ea=c->r[1]+0x0000043Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800508A8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 800508AC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800508B0
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 800508B4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800508B8
  c->r[3]=R32(c->r[1]+0x00000040u); // 800508BC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800508C0
  W32(c->r[1]+0x00000048u,c->r[4]); // 800508C4
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800508C8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800508CC
  W32(c->r[1]+0x00000050u,c->r[0]); // 800508D0
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800508D4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800508D8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 800508DC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 800508E0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800508E4
L_800508E8:;
  cmps(c,0,(int32_t)c->r[5],1); // 800508E8
  if (!crb(c,2)) { goto L_80050908; } // 800508EC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800508F0
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800508F4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800508F8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 800508FC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 80050900
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80050904
L_80050908:;
  c->r[3]=c->r[1]+0x00000024u; // 80050908
  c->r[4]=c->r[15]|c->r[15]; // 8005090C
  c->r[5]=c->r[3]|c->r[3]; // 80050910
  c->lr=0x80050918u; f_801647E4(c); // 80050914
  c->r[4]=R32(c->r[1]+0x00000024u); // 80050918
  c->r[3]=R32(c->r[1]+0x00000028u); // 8005091C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80050920
  W32(c->r[1]+0x00000288u,c->r[4]); // 80050924
  W32(c->r[1]+0x0000028Cu,c->r[3]); // 80050928
  {uint32_t ea=c->r[1]+0x00000288u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005092C
  W32(c->r[1]+0x00000290u,c->r[0]); // 80050930
  {uint32_t ea=c->r[1]+0x0000028Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80050934
  {uint32_t ea=c->r[1]+0x00000290u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050938
  {uint32_t ea=c->r[1]+0x0000036Cu; WF32(ea,c->f[2]);} // 8005093C
  {uint32_t ea=c->r[1]+0x00000370u; WF32(ea,c->f[1]);} // 80050940
  {uint32_t ea=c->r[1]+0x00000374u; WF32(ea,c->f[0]);} // 80050944
  goto L_80050964; // 80050948
L_8005094C:;
  {uint32_t ea=c->r[1]+0x000003C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005094C
  {uint32_t ea=c->r[1]+0x000003CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80050950
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050954
  {uint32_t ea=c->r[1]+0x0000036Cu; WF32(ea,c->f[2]);} // 80050958
  {uint32_t ea=c->r[1]+0x00000370u; WF32(ea,c->f[1]);} // 8005095C
  {uint32_t ea=c->r[1]+0x00000374u; WF32(ea,c->f[0]);} // 80050960
L_80050964:;
  c->r[15]=R32(c->r[1]+0x0000036Cu); // 80050964
  c->f[1]=c->f[30]; // 80050968
  c->r[16]=R32(c->r[1]+0x00000370u); // 8005096C
  c->f[2]=c->f[29]; // 80050970
  c->r[17]=R32(c->r[1]+0x00000374u); // 80050974
  c->r[3]=c->r[1]+0x0000039Cu; // 80050978
  c->r[18]=R32(c->r[1]+0x00000378u); // 8005097C
  c->r[12]=R32(c->r[1]+0x0000037Cu); // 80050980
  c->r[4]=c->r[1]+0x00000008u; // 80050984
  c->r[11]=R32(c->r[1]+0x00000380u); // 80050988
  c->r[5]=c->r[1]+0x0000027Cu; // 8005098C
  c->r[10]=R32(c->r[1]+0x00000390u); // 80050990
  c->r[6]=c->r[1]+0x00000270u; // 80050994
  c->r[9]=R32(c->r[1]+0x00000394u); // 80050998
  c->r[7]=c->r[1]+0x00000264u; // 8005099C
  c->r[0]=R32(c->r[1]+0x00000398u); // 800509A0
  c->r[8]=c->r[1]+0x00000258u; // 800509A4
  W32(c->r[1]+0x00000258u,c->r[15]); // 800509A8
  W32(c->r[1]+0x0000025Cu,c->r[16]); // 800509AC
  W32(c->r[1]+0x00000260u,c->r[17]); // 800509B0
  W32(c->r[1]+0x00000264u,c->r[18]); // 800509B4
  W32(c->r[1]+0x00000268u,c->r[12]); // 800509B8
  W32(c->r[1]+0x0000026Cu,c->r[11]); // 800509BC
  W32(c->r[1]+0x00000270u,c->r[19]); // 800509C0
  W32(c->r[1]+0x00000274u,c->r[20]); // 800509C4
  W32(c->r[1]+0x00000278u,c->r[21]); // 800509C8
  W32(c->r[1]+0x0000027Cu,c->r[10]); // 800509CC
  W32(c->r[1]+0x00000280u,c->r[9]); // 800509D0
  W32(c->r[1]+0x00000284u,c->r[0]); // 800509D4
  c->lr=0x800509DCu; f_80014560(c); // 800509D8
  cmps(c,0,(int32_t)c->r[3],1); // 800509DC
  if (!crb(c,2)) { goto L_80050A20; } // 800509E0
  c->r[3]=c->r[1]+0x0000039Cu; // 800509E4
  c->r[4]=c->r[1]+0x00000390u; // 800509E8
  c->r[5]=c->r[1]+0x0000000Cu; // 800509EC
  c->lr=0x800509F4u; f_80164808(c); // 800509F0
  c->r[3]=c->r[1]+0x0000000Cu; // 800509F4
  c->lr=0x800509FCu; f_801648A4(c); // 800509F8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800509FC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80050A00
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[0]); // 80050A04
  fcmp(c,0,c->f[0],c->f[31]); // 80050A08
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[0]);} // 80050A0C
  if (!crb(c,0)) { goto L_80050A18; } // 80050A10
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[31]);} // 80050A14
L_80050A18:;
  c->r[14]=0u+0x00000001u; // 80050A18
  goto L_80050A30; // 80050A1C
L_80050A20:;
  c->r[28]=c->r[28]+0x00000008u; // 80050A20
  c->r[25]=c->r[25]+0x00000001u; // 80050A24
L_80050A28:;
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[26]); // 80050A28
  if (crb(c,0)) { IRQCHK(c); goto L_80050660; } // 80050A2C
L_80050A30:;
  c->r[29]=c->r[29]+0x00000008u; // 80050A30
  c->r[27]=c->r[27]+0x00000001u; // 80050A34
L_80050A38:;
  c->r[0]=R32(c->r[1]+0x00000740u); // 80050A38
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80050A3C
  if (crb(c,0)) { IRQCHK(c); goto L_800500F4; } // 80050A40
L_80050A44:;
  c->r[3]=c->r[14]|c->r[14]; // 80050A44
L_80050A48:;
  {uint32_t ea=c->r[1]+0x000007D8u; psq_load(c,31,ea,0,0);} // 80050A48
  {uint32_t ea=c->r[1]+0x000007D0u; c->f[31]=RF64(ea);} // 80050A4C
  {uint32_t ea=c->r[1]+0x000007C8u; psq_load(c,30,ea,0,0);} // 80050A50
  {uint32_t ea=c->r[1]+0x000007C0u; c->f[30]=RF64(ea);} // 80050A54
  {uint32_t ea=c->r[1]+0x000007B8u; psq_load(c,29,ea,0,0);} // 80050A58
  {uint32_t ea=c->r[1]+0x000007B0u; c->f[29]=RF64(ea);} // 80050A5C
  {uint32_t ea=c->r[1]+0x000007A8u; psq_load(c,28,ea,0,0);} // 80050A60
  {uint32_t ea=c->r[1]+0x000007A0u; c->f[28]=RF64(ea);} // 80050A64
  {uint32_t ea=c->r[1]+0x00000798u; psq_load(c,27,ea,0,0);} // 80050A68
  c->r[11]=c->r[1]+0x00000790u; // 80050A6C
  {uint32_t ea=c->r[1]+0x00000790u; c->f[27]=RF64(ea);} // 80050A70
  c->lr=0x80050A78u; f_80252BBC(c); // 80050A74
  c->r[0]=R32(c->r[1]+0x000007E4u); // 80050A78
  c->lr=c->r[0]; // 80050A7C
  c->r[1]=c->r[1]+0x000007E0u; // 80050A80
  return; // 80050A84
}

// fn_80050A88
void f_80050A88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050A88
  c->r[0]=c->lr; // 80050A8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80050A90
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80050A94
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80050A98
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 80050A9C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 80050AA0
  {uint32_t ea=c->r[2]+0xFFFF8B88u; c->f[30]=c->ps1[30]=RF32(ea);} // 80050AA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050AA8
  c->r[31]=c->r[4]|c->r[4]; // 80050AAC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80050AB0
  c->r[12]=R32(c->r[12]+0x000000C0u); // 80050AB4
  c->ctr=c->r[12]; // 80050AB8
  if (true) { c->lr=0x80050AC0u; dispatch(c,c->ctr); } // 80050ABC
  c->r[12]=R32(c->r[31]+0x00000000u); // 80050AC0
  c->f[31]=c->f[1]; // 80050AC4
  c->r[3]=c->r[31]|c->r[31]; // 80050AC8
  c->r[12]=R32(c->r[12]+0x000000BCu); // 80050ACC
  c->ctr=c->r[12]; // 80050AD0
  if (true) { c->lr=0x80050AD8u; dispatch(c,c->ctr); } // 80050AD4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80050AD8
  {uint32_t ea=c->r[2]+0xFFFF8B88u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050ADC
  fcmp(c,0,c->f[1],c->f[0]); // 80050AE0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80050AE4
  if (!crb(c,2)) { goto L_80050AF4; } // 80050AE8
  c->f[1]=c->f[30]; // 80050AEC
  goto L_80050AFC; // 80050AF0
L_80050AF4:;
  {uint32_t ea=c->r[2]+0xFFFF8B9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80050AF4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80050AF8
L_80050AFC:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80050AFC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80050B00
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 80050B04
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 80050B08
  c->r[0]=R32(c->r[1]+0x00000034u); // 80050B0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050B10
  c->lr=c->r[0]; // 80050B14
  c->r[1]=c->r[1]+0x00000030u; // 80050B18
  return; // 80050B1C
}

// fn_80050B20
void f_80050B20(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8BA4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050B20
  return; // 80050B24
}

// fn_80050B28
void f_80050B28(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8BA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050B28
  return; // 80050B2C
}

// fn_80050B30
void f_80050B30(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8BACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80050B30
  return; // 80050B34
}

// fn_80050B38
void f_80050B38(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8BB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050B38
  return; // 80050B3C
}

// fn_80050B40
void f_80050B40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050B40
  c->r[0]=c->lr; // 80050B44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050B48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050B4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80050B50
  c->r[30]=c->r[3]|c->r[3]; // 80050B54
  c->r[12]=R32(c->r[3]+0x00000000u); // 80050B58
  c->r[12]=R32(c->r[12]+0x000000CCu); // 80050B5C
  c->ctr=c->r[12]; // 80050B60
  if (true) { c->lr=0x80050B68u; dispatch(c,c->ctr); } // 80050B64
  cmps(c,0,(int32_t)c->r[3],0); // 80050B68
  c->r[31]=c->r[3]|c->r[3]; // 80050B6C
  if (crb(c,2)) { goto L_80050B94; } // 80050B70
  c->r[12]=R32(c->r[30]+0x00000000u); // 80050B74
  c->r[3]=c->r[30]|c->r[30]; // 80050B78
  c->r[12]=R32(c->r[12]+0x00000040u); // 80050B7C
  c->ctr=c->r[12]; // 80050B80
  if (true) { c->lr=0x80050B88u; dispatch(c,c->ctr); } // 80050B84
  c->r[4]=c->r[3]|c->r[3]; // 80050B88
  c->r[3]=c->r[31]|c->r[31]; // 80050B8C
  c->lr=0x80050B94u; f_80053B64(c); // 80050B90
L_80050B94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050B94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050B98
  c->r[30]=R32(c->r[1]+0x00000008u); // 80050B9C
  c->lr=c->r[0]; // 80050BA0
  c->r[1]=c->r[1]+0x00000010u; // 80050BA4
  return; // 80050BA8
}

// fn_80050BAC
void f_80050BAC(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80050BAC
  return; // 80050BB0
}

// fn_80050BB4
void f_80050BB4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000054u); // 80050BB4
  return; // 80050BB8
}

// fn_80050BBC
void f_80050BBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050BBC
  c->r[0]=c->lr; // 80050BC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050BC4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80050BC8
  c->r[12]=R32(c->r[12]+0x000000CCu); // 80050BCC
  c->ctr=c->r[12]; // 80050BD0
  if (true) { c->lr=0x80050BD8u; dispatch(c,c->ctr); } // 80050BD4
  cmps(c,0,(int32_t)c->r[3],0); // 80050BD8
  if (crb(c,2)) { goto L_80050BE4; } // 80050BDC
  c->lr=0x80050BE4u; f_80053BA4(c); // 80050BE0
L_80050BE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050BE4
  c->lr=c->r[0]; // 80050BE8
  c->r[1]=c->r[1]+0x00000010u; // 80050BEC
  return; // 80050BF0
}

// fn_80050BF4
void f_80050BF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050BF4
  c->r[0]=c->lr; // 80050BF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050BFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80050C00
  c->r[12]=R32(c->r[12]+0x000000CCu); // 80050C04
  c->ctr=c->r[12]; // 80050C08
  if (true) { c->lr=0x80050C10u; dispatch(c,c->ctr); } // 80050C0C
  cmps(c,0,(int32_t)c->r[3],0); // 80050C10
  if (!crb(c,2)) { goto L_80050C20; } // 80050C14
  c->r[3]=0u+0x00000000u; // 80050C18
  goto L_80050C24; // 80050C1C
L_80050C20:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80050C20
L_80050C24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050C24
  c->lr=c->r[0]; // 80050C28
  c->r[1]=c->r[1]+0x00000010u; // 80050C2C
  return; // 80050C30
}

// fn_80050C34
void f_80050C34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050C34
  c->r[0]=c->lr; // 80050C38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050C3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050C40
  c->r[31]=c->r[4]|c->r[4]; // 80050C44
  c->r[12]=R32(c->r[3]+0x00000000u); // 80050C48
  c->r[12]=R32(c->r[12]+0x000000CCu); // 80050C4C
  c->ctr=c->r[12]; // 80050C50
  if (true) { c->lr=0x80050C58u; dispatch(c,c->ctr); } // 80050C54
  cmps(c,0,(int32_t)c->r[3],0); // 80050C58
  if (!crb(c,2)) { goto L_80050C68; } // 80050C5C
  c->r[3]=0u+0x00000000u; // 80050C60
  goto L_80050C70; // 80050C64
L_80050C68:;
  c->r[4]=c->r[31]|c->r[31]; // 80050C68
  c->lr=0x80050C70u; f_80053CE0(c); // 80050C6C
L_80050C70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050C70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050C74
  c->lr=c->r[0]; // 80050C78
  c->r[1]=c->r[1]+0x00000010u; // 80050C7C
  return; // 80050C80
}

// fn_80050C84
void f_80050C84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFF0C0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050C84
  c->r[0]=c->lr; // 80050C88
  W32(c->r[1]+0x00000F44u,c->r[0]); // 80050C8C
  {uint32_t ea=c->r[1]+0x00000F30u; WF64(ea,c->f[31]);} // 80050C90
  {uint32_t ea=c->r[1]+0xFFFFFF38u; psq_store(c,31,ea,0,0);} // 80050C94
  {uint32_t ea=c->r[1]+0x00000F20u; WF64(ea,c->f[30]);} // 80050C98
  {uint32_t ea=c->r[1]+0xFFFFFF28u; psq_store(c,30,ea,0,0);} // 80050C9C
  {uint32_t ea=c->r[1]+0x00000F10u; WF64(ea,c->f[29]);} // 80050CA0
  {uint32_t ea=c->r[1]+0xFFFFFF18u; psq_store(c,29,ea,0,0);} // 80050CA4
  {uint32_t ea=c->r[1]+0x00000F00u; WF64(ea,c->f[28]);} // 80050CA8
  {uint32_t ea=c->r[1]+0xFFFFFF08u; psq_store(c,28,ea,0,0);} // 80050CAC
  {uint32_t ea=c->r[1]+0x00000EF0u; WF64(ea,c->f[27]);} // 80050CB0
  {uint32_t ea=c->r[1]+0xFFFFFEF8u; psq_store(c,27,ea,0,0);} // 80050CB4
  c->r[11]=c->r[1]+0x00000EF0u; // 80050CB8
  c->lr=0x80050CC0u; f_80252B70(c); // 80050CBC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80050CC0
  c->r[0]=0u+0x00000000u; // 80050CC4
  c->r[22]=c->r[3]|c->r[3]; // 80050CC8
  c->r[23]=c->r[4]|c->r[4]; // 80050CCC
  c->r[12]=R32(c->r[12]+0x000000CCu); // 80050CD0
  W32(c->r[1]+0x00000008u,c->r[5]); // 80050CD4
  c->r[14]=R32(c->r[4]+0x0000003Cu); // 80050CD8
  W32(c->r[1]+0x00000E9Cu,c->r[0]); // 80050CDC
  c->ctr=c->r[12]; // 80050CE0
  if (true) { c->lr=0x80050CE8u; dispatch(c,c->ctr); } // 80050CE4
  cmps(c,0,(int32_t)c->r[3],0); // 80050CE8
  if (!crb(c,2)) { goto L_80050CF8; } // 80050CEC
  c->r[3]=0u+0x00000000u; // 80050CF0
  goto L_80050D00; // 80050CF4
L_80050CF8:;
  c->r[4]=c->r[14]|c->r[14]; // 80050CF8
  c->lr=0x80050D00u; f_80053CE0(c); // 80050CFC
L_80050D00:;
  cmps(c,0,(int32_t)c->r[3],1); // 80050D00
  if (!crb(c,2)) { goto L_80050D10; } // 80050D04
  c->r[3]=0u+0x00000000u; // 80050D08
  goto L_80051844; // 80050D0C
L_80050D10:;
  c->r[17]=R32(c->r[23]+0x00000038u); // 80050D10
  c->r[3]=c->r[22]|c->r[22]; // 80050D14
  c->r[4]=c->r[1]+0x000001D8u; // 80050D18
  c->lr=0x80050D20u; f_8004F2C4(c); // 80050D1C
  {uint32_t ea=c->r[23]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80050D20
  c->r[3]=c->r[1]+0x000001C0u; // 80050D24
  c->r[4]=c->r[23]+0x00000018u; // 80050D28
  c->r[5]=c->r[1]+0x000001B4u; // 80050D2C
  {uint32_t ea=c->r[1]+0x000001C0u; WF32(ea,c->f[2]);} // 80050D30
  {uint32_t ea=c->r[23]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050D34
  {uint32_t ea=c->r[1]+0x000001C4u; WF32(ea,c->f[1]);} // 80050D38
  {uint32_t ea=c->r[23]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050D3C
  {uint32_t ea=c->r[1]+0x000001C8u; WF32(ea,c->f[0]);} // 80050D40
  {uint32_t ea=c->r[1]+0x000001CCu; WF32(ea,c->f[2]);} // 80050D44
  {uint32_t ea=c->r[1]+0x000001D0u; WF32(ea,c->f[1]);} // 80050D48
  {uint32_t ea=c->r[1]+0x000001D4u; WF32(ea,c->f[0]);} // 80050D4C
  c->lr=0x80050D54u; f_801647E4(c); // 80050D50
  {uint32_t ea=c->r[23]+0x00000024u; c->f[30]=c->ps1[30]=RF32(ea);} // 80050D54
  c->r[3]=c->r[1]+0x000001CCu; // 80050D58
  c->r[16]=R32(c->r[1]+0x000001D8u); // 80050D5C
  c->r[4]=c->r[1]+0x0000000Cu; // 80050D60
  c->r[15]=R32(c->r[1]+0x000001DCu); // 80050D64
  c->f[1]=c->f[30]; // 80050D68
  c->r[14]=R32(c->r[1]+0x000001E0u); // 80050D6C
  c->r[5]=c->r[1]+0x0000016Cu; // 80050D70
  c->r[12]=R32(c->r[1]+0x000001B4u); // 80050D74
  c->r[6]=c->r[1]+0x00000160u; // 80050D78
  c->r[11]=R32(c->r[1]+0x000001B8u); // 80050D7C
  c->r[10]=R32(c->r[1]+0x000001BCu); // 80050D80
  c->r[7]=c->r[1]+0x00000154u; // 80050D84
  c->r[9]=R32(c->r[1]+0x000001C0u); // 80050D88
  c->r[8]=R32(c->r[1]+0x000001C4u); // 80050D8C
  c->r[0]=R32(c->r[1]+0x000001C8u); // 80050D90
  W32(c->r[1]+0x00000154u,c->r[16]); // 80050D94
  {uint32_t ea=c->r[1]+0x000001E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80050D98
  W32(c->r[1]+0x00000158u,c->r[15]); // 80050D9C
  W32(c->r[1]+0x0000015Cu,c->r[14]); // 80050DA0
  W32(c->r[1]+0x00000160u,c->r[12]); // 80050DA4
  W32(c->r[1]+0x00000164u,c->r[11]); // 80050DA8
  W32(c->r[1]+0x00000168u,c->r[10]); // 80050DAC
  W32(c->r[1]+0x0000016Cu,c->r[9]); // 80050DB0
  W32(c->r[1]+0x00000170u,c->r[8]); // 80050DB4
  W32(c->r[1]+0x00000174u,c->r[0]); // 80050DB8
  c->lr=0x80050DC0u; f_80013F70(c); // 80050DBC
  cmps(c,0,(int32_t)c->r[3],1); // 80050DC0
  if (crb(c,2)) { goto L_80050DD0; } // 80050DC4
  c->r[3]=0u+0x00000000u; // 80050DC8
  goto L_80051844; // 80050DCC
L_80050DD0:;
  c->r[12]=R32(c->r[17]+0x00000000u); // 80050DD0
  c->r[3]=c->r[17]|c->r[17]; // 80050DD4
  c->r[5]=R32(c->r[22]+0x00000034u); // 80050DD8
  c->r[4]=R32(c->r[22]+0x00000038u); // 80050DDC
  c->r[0]=R32(c->r[22]+0x0000003Cu); // 80050DE0
  c->r[12]=R32(c->r[12]+0x000000C8u); // 80050DE4
  W32(c->r[1]+0x000001A8u,c->r[5]); // 80050DE8
  {uint32_t ea=c->r[17]+0x0000004Cu; c->f[27]=c->ps1[27]=RF32(ea);} // 80050DEC
  W32(c->r[1]+0x000001ACu,c->r[4]); // 80050DF0
  W32(c->r[1]+0x000001B0u,c->r[0]); // 80050DF4
  c->ctr=c->r[12]; // 80050DF8
  if (true) { c->lr=0x80050E00u; dispatch(c,c->ctr); } // 80050DFC
  c->r[12]=R32(c->r[22]+0x00000000u); // 80050E00
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[27]); // 80050E04
  {uint32_t ea=c->r[2]+0xFFFF8BA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050E08
  c->r[0]=0u+0x00000000u; // 80050E0C
  c->r[12]=R32(c->r[12]+0x000000B0u); // 80050E10
  c->r[3]=c->r[22]|c->r[22]; // 80050E14
  W32(c->r[1]+0x00000E94u,c->r[0]); // 80050E18
  c->r[0]=0u+0x00000000u; // 80050E1C
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 80050E20
  {uint32_t ea=c->r[2]+0xFFFF8BB4u; c->f[28]=c->ps1[28]=RF32(ea);} // 80050E24
  c->r[27]=0u+0x00000000u; // 80050E28
  W32(c->r[1]+0x00000E90u,c->r[0]); // 80050E2C
  c->r[21]=0u+0x00000000u; // 80050E30
  c->ctr=c->r[12]; // 80050E34
  if (true) { c->lr=0x80050E3Cu; dispatch(c,c->ctr); } // 80050E38
  cmps(c,0,(int32_t)c->r[3],0); // 80050E3C
  c->r[31]=c->r[3]|c->r[3]; // 80050E40
  if (!crb(c,2)) { goto L_80050E50; } // 80050E44
  c->r[3]=0u+0x00000000u; // 80050E48
  goto L_80051844; // 80050E4C
L_80050E50:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 80050E50
  cmps(c,0,(int32_t)c->r[0],0); // 80050E54
  W32(c->r[1]+0x00000E98u,c->r[0]); // 80050E58
  if (crb(c,1)) { goto L_80051174; } // 80050E5C
  c->r[16]=R32(c->r[3]+0x00000000u); // 80050E60
  c->r[15]=c->r[1]+0x00000308u; // 80050E64
  {uint32_t ea=c->r[2]+0xFFFF8B88u; c->f[27]=c->ps1[27]=RF32(ea);} // 80050E68
  c->r[19]=0u+0x00000000u; // 80050E6C
  c->r[14]=0u+0x00000000u; // 80050E70
  goto L_80051168; // 80050E74
L_80050E78:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 80050E78
  c->r[17]=c->r[0]+c->r[14]; // 80050E7C
  c->r[0]=R32(c->r[14]+c->r[0]); // 80050E80
  cmps(c,0,(int32_t)c->r[0],0); // 80050E84
  if (crb(c,2)) { goto L_80050E90; } // 80050E88
  goto L_80050FD4; // 80050E8C
L_80050E90:;
  c->r[4]=R32(c->r[22]+0x00000034u); // 80050E90
  c->r[3]=R32(c->r[22]+0x00000038u); // 80050E94
  c->r[0]=R32(c->r[22]+0x0000003Cu); // 80050E98
  W32(c->r[1]+0x000000A0u,c->r[4]); // 80050E9C
  c->r[18]=R32(c->r[17]+0x00000004u); // 80050EA0
  W32(c->r[1]+0x000000A4u,c->r[3]); // 80050EA4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80050EA8
  W32(c->r[1]+0x000000A8u,c->r[0]); // 80050EAC
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050EB0
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050EB4
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 80050EB8
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 80050EBC
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 80050EC0
  c->r[4]=R32(c->r[18]+0x0000000Cu); // 80050EC4
  cmps(c,0,(int32_t)c->r[4],0); // 80050EC8
  if (crb(c,0)) { goto L_80050F8C; } // 80050ECC
  c->r[3]=R32(c->r[22]+0x00000064u); // 80050ED0
  cmps(c,0,(int32_t)c->r[3],0); // 80050ED4
  if (crb(c,0)) { goto L_80050F18; } // 80050ED8
  c->lr=0x80050EE0u; f_800DA404(c); // 80050EDC
  cmps(c,0,(int32_t)c->r[3],0); // 80050EE0
  c->r[20]=c->r[3]|c->r[3]; // 80050EE4
  if (!crb(c,2)) { goto L_80050EF4; } // 80050EE8
  c->r[5]=0u+0x00000000u; // 80050EEC
  goto L_80050F1C; // 80050EF0
L_80050EF4:;
  c->r[3]=c->r[22]+0x00000004u; // 80050EF4
  c->r[4]=c->r[1]+0x000002A8u; // 80050EF8
  c->lr=0x80050F00u; f_80163864(c); // 80050EFC
  c->r[4]=c->r[20]|c->r[20]; // 80050F00
  c->r[3]=c->r[1]+0x000002A8u; // 80050F04
  c->r[5]=c->r[1]+0x000002D8u; // 80050F08
  c->lr=0x80050F10u; f_80163898(c); // 80050F0C
  c->r[5]=0u+0x00000001u; // 80050F10
  goto L_80050F1C; // 80050F14
L_80050F18:;
  c->r[5]=0u+0x00000000u; // 80050F18
L_80050F1C:;
  cmps(c,0,(int32_t)c->r[5],1); // 80050F1C
  if (!crb(c,2)) { goto L_80050F6C; } // 80050F20
  {uint32_t ea=c->r[1]+0x000002E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80050F24
  {uint32_t ea=c->r[1]+0x000002F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050F28
  {uint32_t ea=c->r[1]+0x00000304u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050F2C
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[2]);} // 80050F30
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[1]);} // 80050F34
  c->r[4]=R32(c->r[1]+0x000000C4u); // 80050F38
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 80050F3C
  c->r[3]=R32(c->r[1]+0x000000C8u); // 80050F40
  c->r[0]=R32(c->r[1]+0x000000CCu); // 80050F44
  W32(c->r[1]+0x000000D0u,c->r[4]); // 80050F48
  W32(c->r[1]+0x000000D4u,c->r[3]); // 80050F4C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80050F50
  W32(c->r[1]+0x000000D8u,c->r[0]); // 80050F54
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050F58
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050F5C
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[2]);} // 80050F60
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 80050F64
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 80050F68
L_80050F6C:;
  cmps(c,0,(int32_t)c->r[5],1); // 80050F6C
  if (!crb(c,2)) { goto L_80050F8C; } // 80050F70
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80050F74
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80050F78
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050F7C
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 80050F80
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 80050F84
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 80050F88
L_80050F8C:;
  c->r[3]=c->r[1]+0x000000ACu; // 80050F8C
  c->r[4]=c->r[18]|c->r[18]; // 80050F90
  c->r[5]=c->r[3]|c->r[3]; // 80050F94
  c->lr=0x80050F9Cu; f_801647E4(c); // 80050F98
  c->r[4]=R32(c->r[1]+0x000000ACu); // 80050F9C
  c->r[3]=R32(c->r[1]+0x000000B0u); // 80050FA0
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80050FA4
  W32(c->r[1]+0x00000148u,c->r[4]); // 80050FA8
  W32(c->r[1]+0x0000014Cu,c->r[3]); // 80050FAC
  {uint32_t ea=c->r[1]+0x00000148u; c->f[2]=c->ps1[2]=RF32(ea);} // 80050FB0
  W32(c->r[1]+0x00000150u,c->r[0]); // 80050FB4
  {uint32_t ea=c->r[1]+0x0000014Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80050FB8
  {uint32_t ea=c->r[1]+0x00000150u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050FBC
  {uint32_t ea=c->r[1]+0x0000019Cu; WF32(ea,c->f[2]);} // 80050FC0
  {uint32_t ea=c->r[1]+0x000001A0u; WF32(ea,c->f[1]);} // 80050FC4
  {uint32_t ea=c->r[1]+0x000001A4u; WF32(ea,c->f[0]);} // 80050FC8
  {uint32_t ea=c->r[18]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80050FCC
  goto L_80050FF0; // 80050FD0
L_80050FD4:;
  {uint32_t ea=c->r[1]+0x000001A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80050FD4
  c->f[2]=c->f[29]; // 80050FD8
  {uint32_t ea=c->r[1]+0x000001ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80050FDC
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050FE0
  {uint32_t ea=c->r[1]+0x0000019Cu; WF32(ea,c->f[3]);} // 80050FE4
  {uint32_t ea=c->r[1]+0x000001A0u; WF32(ea,c->f[1]);} // 80050FE8
  {uint32_t ea=c->r[1]+0x000001A4u; WF32(ea,c->f[0]);} // 80050FEC
L_80050FF0:;
  c->r[21]=R32(c->r[1]+0x0000019Cu); // 80050FF0
  c->f[1]=c->f[30]; // 80050FF4
  c->r[20]=R32(c->r[1]+0x000001A0u); // 80050FF8
  c->r[3]=c->r[1]+0x000001CCu; // 80050FFC
  c->r[18]=R32(c->r[1]+0x000001A4u); // 80051000
  c->r[4]=c->r[1]+0x0000000Cu; // 80051004
  c->r[12]=R32(c->r[1]+0x000001B4u); // 80051008
  c->r[11]=R32(c->r[1]+0x000001B8u); // 8005100C
  c->r[5]=c->r[1]+0x0000013Cu; // 80051010
  c->r[10]=R32(c->r[1]+0x000001BCu); // 80051014
  c->r[6]=c->r[1]+0x00000130u; // 80051018
  c->r[9]=R32(c->r[1]+0x000001C0u); // 8005101C
  c->r[7]=c->r[1]+0x00000124u; // 80051020
  c->r[8]=R32(c->r[1]+0x000001C4u); // 80051024
  c->r[0]=R32(c->r[1]+0x000001C8u); // 80051028
  W32(c->r[1]+0x00000124u,c->r[21]); // 8005102C
  W32(c->r[1]+0x00000128u,c->r[20]); // 80051030
  W32(c->r[1]+0x0000012Cu,c->r[18]); // 80051034
  W32(c->r[1]+0x00000130u,c->r[12]); // 80051038
  W32(c->r[1]+0x00000134u,c->r[11]); // 8005103C
  W32(c->r[1]+0x00000138u,c->r[10]); // 80051040
  W32(c->r[1]+0x0000013Cu,c->r[9]); // 80051044
  W32(c->r[1]+0x00000140u,c->r[8]); // 80051048
  W32(c->r[1]+0x00000144u,c->r[0]); // 8005104C
  c->lr=0x80051054u; f_80013F70(c); // 80051050
  cmps(c,0,(int32_t)c->r[3],1); // 80051054
  if (!crb(c,2)) { goto L_80051160; } // 80051058
  c->r[0]=R32(c->r[23]+0x00000034u); // 8005105C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80051060
  if (!crb(c,2)) { goto L_800510F4; } // 80051064
  c->lr=0x8005106Cu; f_8007AB30(c); // 80051068
  c->r[20]=c->r[3]|c->r[3]; // 8005106C
  c->r[3]=c->r[1]+0x000001CCu; // 80051070
  c->r[4]=c->r[1]+0x0000019Cu; // 80051074
  c->r[5]=c->r[1]+0x00000190u; // 80051078
  c->lr=0x80051080u; f_80164808(c); // 8005107C
  {uint32_t ea=c->r[2]+0xFFFF8B9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80051080
  c->r[3]=c->r[20]|c->r[20]; // 80051084
  c->r[4]=c->r[1]+0x000008ECu; // 80051088
  c->r[5]=c->r[1]+0x0000019Cu; // 8005108C
  c->r[6]=c->r[1]+0x00000190u; // 80051090
  c->r[7]=0u+0x00000000u; // 80051094
  c->r[8]=0u+0x00000000u; // 80051098
  c->lr=0x800510A0u; f_800795EC(c); // 8005109C
  cmps(c,0,(int32_t)c->r[3],1); // 800510A0
  if (!crb(c,2)) { goto L_800510F4; } // 800510A4
  c->r[24]=R32(c->r[1]+0x000008ECu); // 800510A8
  c->r[18]=c->r[1]+0x000008ECu; // 800510AC
  c->r[25]=0u+0x00000000u; // 800510B0
  c->r[21]=0u+0x00000000u; // 800510B4
  goto L_800510E4; // 800510B8
L_800510BC:;
  c->r[4]=R32(c->r[18]+0x00000544u); // 800510BC
  c->r[3]=c->r[20]|c->r[20]; // 800510C0
  c->lr=0x800510C8u; f_800789D0(c); // 800510C4
  c->lr=0x800510CCu; f_80078264(c); // 800510C8
  cmps(c,0,(int32_t)c->r[3],0); // 800510CC
  if (crb(c,2)) { goto L_800510DC; } // 800510D0
  c->r[25]=0u+0x00000001u; // 800510D4
  goto L_800510EC; // 800510D8
L_800510DC:;
  c->r[18]=c->r[18]+0x00000004u; // 800510DC
  c->r[21]=c->r[21]+0x00000001u; // 800510E0
L_800510E4:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[24]); // 800510E4
  if (crb(c,0)) { IRQCHK(c); goto L_800510BC; } // 800510E8
L_800510EC:;
  cmps(c,0,(int32_t)c->r[25],1); // 800510EC
  if (crb(c,2)) { goto L_80051160; } // 800510F0
L_800510F4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[23]+0x00000030u); // 800510F4
  cmps(c,0,(int32_t)c->r[0],1); // 800510F8
  if (!crb(c,2)) { goto L_80051124; } // 800510FC
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80051100
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051104
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80051108
  fcmp(c,0,c->f[1],c->f[27]); // 8005110C
  if (!crb(c,0)) { goto L_80051118; } // 80051110
  c->f[1]=-c->f[1]; // 80051114
L_80051118:;
  {uint32_t ea=c->r[23]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051118
  fcmp(c,0,c->f[1],c->f[0]); // 8005111C
  if (crb(c,1)) { goto L_80051160; } // 80051120
L_80051124:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80051124
  fcmp(c,0,c->f[28],c->f[0]); // 80051128
  if (!crb(c,1)) { goto L_80051140; } // 8005112C
  c->r[0]=R32(c->r[17]+0x00000008u); // 80051130
  c->f[28]=c->f[0]; // 80051134
  W32(c->r[1]+0x00000E94u,c->r[19]); // 80051138
  W32(c->r[1]+0x00000E90u,c->r[0]); // 8005113C
L_80051140:;
  c->r[3]=R32(c->r[17]+0x00000008u); // 80051140
  c->r[27]=c->r[27]+0x00000001u; // 80051144
  c->r[0]=0u+0x00000001u; // 80051148
  W32(c->r[15]+0x00000000u,c->r[3]); // 8005114C
  cmps(c,0,(int32_t)c->r[27],16); // 80051150
  c->r[15]=c->r[15]+0x00000004u; // 80051154
  W32(c->r[1]+0x00000E9Cu,c->r[0]); // 80051158
  if (!crb(c,0)) { goto L_80051718; } // 8005115C
L_80051160:;
  c->r[14]=c->r[14]+0x0000000Cu; // 80051160
  c->r[19]=c->r[19]+0x00000001u; // 80051164
L_80051168:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[16]); // 80051168
  if (crb(c,0)) { IRQCHK(c); goto L_80050E78; } // 8005116C
  goto L_80051718; // 80051170
L_80051174:;
  {uint32_t ea=c->r[2]+0xFFFF8B88u; c->f[27]=c->ps1[27]=RF32(ea);} // 80051174
  c->r[29]=0u+0x00000000u; // 80051178
  c->r[30]=0u+0x00000000u; // 8005117C
  goto L_8005170C; // 80051180
L_80051184:;
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80051184
  c->r[3]=R32(c->r[31]+0x00000004u); // 80051188
  c->r[24]=R32(c->r[4]+c->r[30]); // 8005118C
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)12); // 80051190
  c->r[28]=c->r[3]+c->r[0]; // 80051194
  c->r[0]=R32(c->r[3]+c->r[0]); // 80051198
  cmps(c,0,(int32_t)c->r[0],0); // 8005119C
  if (crb(c,2)) { goto L_800511A8; } // 800511A0
  goto L_800512EC; // 800511A4
L_800511A8:;
  c->r[4]=R32(c->r[22]+0x00000034u); // 800511A8
  c->r[3]=R32(c->r[22]+0x00000038u); // 800511AC
  c->r[0]=R32(c->r[22]+0x0000003Cu); // 800511B0
  W32(c->r[1]+0x00000064u,c->r[4]); // 800511B4
  c->r[14]=R32(c->r[28]+0x00000004u); // 800511B8
  W32(c->r[1]+0x00000068u,c->r[3]); // 800511BC
  {uint32_t ea=c->r[1]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800511C0
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800511C4
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 800511C8
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800511CC
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[2]);} // 800511D0
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 800511D4
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 800511D8
  c->r[4]=R32(c->r[14]+0x0000000Cu); // 800511DC
  cmps(c,0,(int32_t)c->r[4],0); // 800511E0
  if (crb(c,0)) { goto L_800512A4; } // 800511E4
  c->r[3]=R32(c->r[22]+0x00000064u); // 800511E8
  cmps(c,0,(int32_t)c->r[3],0); // 800511EC
  if (crb(c,0)) { goto L_80051230; } // 800511F0
  c->lr=0x800511F8u; f_800DA404(c); // 800511F4
  cmps(c,0,(int32_t)c->r[3],0); // 800511F8
  c->r[15]=c->r[3]|c->r[3]; // 800511FC
  if (!crb(c,2)) { goto L_8005120C; } // 80051200
  c->r[5]=0u+0x00000000u; // 80051204
  goto L_80051234; // 80051208
L_8005120C:;
  c->r[3]=c->r[22]+0x00000004u; // 8005120C
  c->r[4]=c->r[1]+0x00000248u; // 80051210
  c->lr=0x80051218u; f_80163864(c); // 80051214
  c->r[4]=c->r[15]|c->r[15]; // 80051218
  c->r[3]=c->r[1]+0x00000248u; // 8005121C
  c->r[5]=c->r[1]+0x00000278u; // 80051220
  c->lr=0x80051228u; f_80163898(c); // 80051224
  c->r[5]=0u+0x00000001u; // 80051228
  goto L_80051234; // 8005122C
L_80051230:;
  c->r[5]=0u+0x00000000u; // 80051230
L_80051234:;
  cmps(c,0,(int32_t)c->r[5],1); // 80051234
  if (!crb(c,2)) { goto L_80051284; } // 80051238
  {uint32_t ea=c->r[1]+0x00000284u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005123C
  {uint32_t ea=c->r[1]+0x00000294u; c->f[1]=c->ps1[1]=RF32(ea);} // 80051240
  {uint32_t ea=c->r[1]+0x000002A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051244
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[2]);} // 80051248
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[1]);} // 8005124C
  c->r[4]=R32(c->r[1]+0x00000088u); // 80051250
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 80051254
  c->r[3]=R32(c->r[1]+0x0000008Cu); // 80051258
  c->r[0]=R32(c->r[1]+0x00000090u); // 8005125C
  W32(c->r[1]+0x00000094u,c->r[4]); // 80051260
  W32(c->r[1]+0x00000098u,c->r[3]); // 80051264
  {uint32_t ea=c->r[1]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 80051268
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8005126C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 80051270
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80051274
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 80051278
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 8005127C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 80051280
L_80051284:;
  cmps(c,0,(int32_t)c->r[5],1); // 80051284
  if (!crb(c,2)) { goto L_800512A4; } // 80051288
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8005128C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80051290
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051294
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[2]);} // 80051298
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 8005129C
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 800512A0
L_800512A4:;
  c->r[3]=c->r[1]+0x00000070u; // 800512A4
  c->r[4]=c->r[14]|c->r[14]; // 800512A8
  c->r[5]=c->r[3]|c->r[3]; // 800512AC
  c->lr=0x800512B4u; f_801647E4(c); // 800512B0
  c->r[4]=R32(c->r[1]+0x00000070u); // 800512B4
  c->r[3]=R32(c->r[1]+0x00000074u); // 800512B8
  c->r[0]=R32(c->r[1]+0x00000078u); // 800512BC
  W32(c->r[1]+0x00000118u,c->r[4]); // 800512C0
  W32(c->r[1]+0x0000011Cu,c->r[3]); // 800512C4
  {uint32_t ea=c->r[1]+0x00000118u; c->f[2]=c->ps1[2]=RF32(ea);} // 800512C8
  W32(c->r[1]+0x00000120u,c->r[0]); // 800512CC
  {uint32_t ea=c->r[1]+0x0000011Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800512D0
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 800512D4
  {uint32_t ea=c->r[1]+0x0000019Cu; WF32(ea,c->f[2]);} // 800512D8
  {uint32_t ea=c->r[1]+0x000001A0u; WF32(ea,c->f[1]);} // 800512DC
  {uint32_t ea=c->r[1]+0x000001A4u; WF32(ea,c->f[0]);} // 800512E0
  {uint32_t ea=c->r[14]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 800512E4
  goto L_80051308; // 800512E8
L_800512EC:;
  {uint32_t ea=c->r[1]+0x000001A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800512EC
  c->f[31]=c->f[29]; // 800512F0
  {uint32_t ea=c->r[1]+0x000001ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800512F4
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800512F8
  {uint32_t ea=c->r[1]+0x0000019Cu; WF32(ea,c->f[2]);} // 800512FC
  {uint32_t ea=c->r[1]+0x000001A0u; WF32(ea,c->f[1]);} // 80051300
  {uint32_t ea=c->r[1]+0x000001A4u; WF32(ea,c->f[0]);} // 80051304
L_80051308:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80051308
  c->r[3]=R32(c->r[31]+0x00000004u); // 8005130C
  c->r[4]=c->r[0]+c->r[30]; // 80051310
  c->r[25]=R32(c->r[4]+0x00000004u); // 80051314
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)12); // 80051318
  c->r[26]=c->r[3]+c->r[0]; // 8005131C
  c->r[0]=R32(c->r[3]+c->r[0]); // 80051320
  cmps(c,0,(int32_t)c->r[0],0); // 80051324
  if (crb(c,2)) { goto L_80051330; } // 80051328
  goto L_80051470; // 8005132C
L_80051330:;
  c->r[4]=R32(c->r[22]+0x00000034u); // 80051330
  c->r[3]=R32(c->r[22]+0x00000038u); // 80051334
  c->r[0]=R32(c->r[22]+0x0000003Cu); // 80051338
  W32(c->r[1]+0x00000028u,c->r[4]); // 8005133C
  c->r[14]=R32(c->r[26]+0x00000004u); // 80051340
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80051344
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 80051348
  W32(c->r[1]+0x00000030u,c->r[0]); // 8005134C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80051350
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051354
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 80051358
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 8005135C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80051360
  c->r[4]=R32(c->r[14]+0x0000000Cu); // 80051364
  cmps(c,0,(int32_t)c->r[4],0); // 80051368
  if (crb(c,0)) { goto L_8005142C; } // 8005136C
  c->r[3]=R32(c->r[22]+0x00000064u); // 80051370
  cmps(c,0,(int32_t)c->r[3],0); // 80051374
  if (crb(c,0)) { goto L_800513B8; } // 80051378
  c->lr=0x80051380u; f_800DA404(c); // 8005137C
  cmps(c,0,(int32_t)c->r[3],0); // 80051380
  c->r[15]=c->r[3]|c->r[3]; // 80051384
  if (!crb(c,2)) { goto L_80051394; } // 80051388
  c->r[5]=0u+0x00000000u; // 8005138C
  goto L_800513BC; // 80051390
L_80051394:;
  c->r[3]=c->r[22]+0x00000004u; // 80051394
  c->r[4]=c->r[1]+0x000001E8u; // 80051398
  c->lr=0x800513A0u; f_80163864(c); // 8005139C
  c->r[4]=c->r[15]|c->r[15]; // 800513A0
  c->r[3]=c->r[1]+0x000001E8u; // 800513A4
  c->r[5]=c->r[1]+0x00000218u; // 800513A8
  c->lr=0x800513B0u; f_80163898(c); // 800513AC
  c->r[5]=0u+0x00000001u; // 800513B0
  goto L_800513BC; // 800513B4
L_800513B8:;
  c->r[5]=0u+0x00000000u; // 800513B8
L_800513BC:;
  cmps(c,0,(int32_t)c->r[5],1); // 800513BC
  if (!crb(c,2)) { goto L_8005140C; } // 800513C0
  {uint32_t ea=c->r[1]+0x00000224u; c->f[2]=c->ps1[2]=RF32(ea);} // 800513C4
  {uint32_t ea=c->r[1]+0x00000234u; c->f[1]=c->ps1[1]=RF32(ea);} // 800513C8
  {uint32_t ea=c->r[1]+0x00000244u; c->f[0]=c->ps1[0]=RF32(ea);} // 800513CC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[2]);} // 800513D0
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 800513D4
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 800513D8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800513DC
  c->r[3]=R32(c->r[1]+0x00000050u); // 800513E0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800513E4
  W32(c->r[1]+0x00000058u,c->r[4]); // 800513E8
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 800513EC
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 800513F0
  W32(c->r[1]+0x00000060u,c->r[0]); // 800513F4
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800513F8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800513FC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 80051400
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 80051404
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 80051408
L_8005140C:;
  cmps(c,0,(int32_t)c->r[5],1); // 8005140C
  if (!crb(c,2)) { goto L_8005142C; } // 80051410
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 80051414
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80051418
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005141C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 80051420
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 80051424
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80051428
L_8005142C:;
  c->r[3]=c->r[1]+0x00000034u; // 8005142C
  c->r[4]=c->r[14]|c->r[14]; // 80051430
  c->r[5]=c->r[3]|c->r[3]; // 80051434
  c->lr=0x8005143Cu; f_801647E4(c); // 80051438
  c->r[4]=R32(c->r[1]+0x00000034u); // 8005143C
  c->r[3]=R32(c->r[1]+0x00000038u); // 80051440
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 80051444
  W32(c->r[1]+0x0000010Cu,c->r[4]); // 80051448
  W32(c->r[1]+0x00000110u,c->r[3]); // 8005144C
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80051450
  W32(c->r[1]+0x00000114u,c->r[0]); // 80051454
  {uint32_t ea=c->r[1]+0x00000110u; c->f[1]=c->ps1[1]=RF32(ea);} // 80051458
  {uint32_t ea=c->r[1]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005145C
  {uint32_t ea=c->r[1]+0x00000184u; WF32(ea,c->f[2]);} // 80051460
  {uint32_t ea=c->r[1]+0x00000188u; WF32(ea,c->f[1]);} // 80051464
  {uint32_t ea=c->r[1]+0x0000018Cu; WF32(ea,c->f[0]);} // 80051468
  goto L_80051488; // 8005146C
L_80051470:;
  {uint32_t ea=c->r[1]+0x000001A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80051470
  {uint32_t ea=c->r[1]+0x000001ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80051474
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051478
  {uint32_t ea=c->r[1]+0x00000184u; WF32(ea,c->f[2]);} // 8005147C
  {uint32_t ea=c->r[1]+0x00000188u; WF32(ea,c->f[1]);} // 80051480
  {uint32_t ea=c->r[1]+0x0000018Cu; WF32(ea,c->f[0]);} // 80051484
L_80051488:;
  c->r[15]=R32(c->r[1]+0x000001B4u); // 80051488
  c->f[1]=c->f[31]; // 8005148C
  c->r[16]=R32(c->r[1]+0x000001B8u); // 80051490
  c->f[2]=c->f[30]; // 80051494
  c->r[17]=R32(c->r[1]+0x000001BCu); // 80051498
  c->r[3]=c->r[1]+0x000001CCu; // 8005149C
  c->r[18]=R32(c->r[1]+0x000001C0u); // 800514A0
  c->r[19]=R32(c->r[1]+0x000001C4u); // 800514A4
  c->r[4]=c->r[1]+0x0000000Cu; // 800514A8
  c->r[20]=R32(c->r[1]+0x000001C8u); // 800514AC
  c->r[5]=c->r[1]+0x00000100u; // 800514B0
  c->r[12]=R32(c->r[1]+0x00000184u); // 800514B4
  c->r[6]=c->r[1]+0x000000F4u; // 800514B8
  c->r[11]=R32(c->r[1]+0x00000188u); // 800514BC
  c->r[7]=c->r[1]+0x000000E8u; // 800514C0
  c->r[10]=R32(c->r[1]+0x0000018Cu); // 800514C4
  c->r[8]=c->r[1]+0x000000DCu; // 800514C8
  c->r[9]=R32(c->r[1]+0x0000019Cu); // 800514CC
  c->r[0]=R32(c->r[1]+0x000001A0u); // 800514D0
  c->r[14]=R32(c->r[1]+0x000001A4u); // 800514D4
  W32(c->r[1]+0x000000DCu,c->r[15]); // 800514D8
  W32(c->r[1]+0x000000E0u,c->r[16]); // 800514DC
  W32(c->r[1]+0x000000E4u,c->r[17]); // 800514E0
  W32(c->r[1]+0x000000E8u,c->r[18]); // 800514E4
  W32(c->r[1]+0x000000ECu,c->r[19]); // 800514E8
  W32(c->r[1]+0x000000F0u,c->r[20]); // 800514EC
  W32(c->r[1]+0x000000F4u,c->r[12]); // 800514F0
  W32(c->r[1]+0x000000F8u,c->r[11]); // 800514F4
  W32(c->r[1]+0x000000FCu,c->r[10]); // 800514F8
  W32(c->r[1]+0x00000100u,c->r[9]); // 800514FC
  W32(c->r[1]+0x00000104u,c->r[0]); // 80051500
  W32(c->r[1]+0x00000108u,c->r[14]); // 80051504
  c->lr=0x8005150Cu; f_80014560(c); // 80051508
  cmps(c,0,(int32_t)c->r[3],1); // 8005150C
  if (!crb(c,2)) { goto L_80051704; } // 80051510
  c->r[0]=R32(c->r[23]+0x00000034u); // 80051514
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80051518
  if (!crb(c,2)) { goto L_800515AC; } // 8005151C
  c->lr=0x80051524u; f_8007AB30(c); // 80051520
  c->r[15]=c->r[3]|c->r[3]; // 80051524
  c->r[3]=c->r[1]+0x000001CCu; // 80051528
  c->r[4]=c->r[1]+0x0000019Cu; // 8005152C
  c->r[5]=c->r[1]+0x00000178u; // 80051530
  c->lr=0x80051538u; f_80164808(c); // 80051534
  {uint32_t ea=c->r[2]+0xFFFF8B9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80051538
  c->r[3]=c->r[15]|c->r[15]; // 8005153C
  c->r[4]=c->r[1]+0x00000348u; // 80051540
  c->r[5]=c->r[1]+0x0000019Cu; // 80051544
  c->r[6]=c->r[1]+0x00000178u; // 80051548
  c->r[7]=0u+0x00000000u; // 8005154C
  c->r[8]=0u+0x00000000u; // 80051550
  c->lr=0x80051558u; f_800795EC(c); // 80051554
  cmps(c,0,(int32_t)c->r[3],1); // 80051558
  if (!crb(c,2)) { goto L_800515AC; } // 8005155C
  c->r[17]=R32(c->r[1]+0x00000348u); // 80051560
  c->r[14]=c->r[1]+0x00000348u; // 80051564
  c->r[18]=0u+0x00000000u; // 80051568
  c->r[16]=0u+0x00000000u; // 8005156C
  goto L_8005159C; // 80051570
L_80051574:;
  c->r[4]=R32(c->r[14]+0x00000544u); // 80051574
  c->r[3]=c->r[15]|c->r[15]; // 80051578
  c->lr=0x80051580u; f_800789D0(c); // 8005157C
  c->lr=0x80051584u; f_80078264(c); // 80051580
  cmps(c,0,(int32_t)c->r[3],0); // 80051584
  if (crb(c,2)) { goto L_80051594; } // 80051588
  c->r[18]=0u+0x00000001u; // 8005158C
  goto L_800515A4; // 80051590
L_80051594:;
  c->r[14]=c->r[14]+0x00000004u; // 80051594
  c->r[16]=c->r[16]+0x00000001u; // 80051598
L_8005159C:;
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[17]); // 8005159C
  if (crb(c,0)) { IRQCHK(c); goto L_80051574; } // 800515A0
L_800515A4:;
  cmps(c,0,(int32_t)c->r[18],1); // 800515A4
  if (crb(c,2)) { goto L_80051704; } // 800515A8
L_800515AC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[23]+0x00000030u); // 800515AC
  cmps(c,0,(int32_t)c->r[0],1); // 800515B0
  if (!crb(c,2)) { goto L_800515DC; } // 800515B4
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800515B8
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800515BC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800515C0
  fcmp(c,0,c->f[1],c->f[27]); // 800515C4
  if (!crb(c,0)) { goto L_800515D0; } // 800515C8
  c->f[1]=-c->f[1]; // 800515CC
L_800515D0:;
  {uint32_t ea=c->r[23]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800515D0
  fcmp(c,0,c->f[1],c->f[0]); // 800515D4
  if (crb(c,1)) { goto L_80051704; } // 800515D8
L_800515DC:;
  c->r[3]=c->r[1]+0x000001C0u; // 800515DC
  c->r[4]=c->r[1]+0x0000019Cu; // 800515E0
  c->r[5]=c->r[1]+0x0000001Cu; // 800515E4
  c->lr=0x800515ECu; f_80164808(c); // 800515E8
  c->r[3]=c->r[1]+0x0000001Cu; // 800515EC
  c->lr=0x800515F4u; f_801648A4(c); // 800515F0
  c->f[31]=c->f[1]; // 800515F4
  c->r[3]=c->r[1]+0x000001C0u; // 800515F8
  c->r[4]=c->r[1]+0x00000184u; // 800515FC
  c->r[5]=c->r[1]+0x00000010u; // 80051600
  c->lr=0x80051608u; f_80164808(c); // 80051604
  c->r[3]=c->r[1]+0x00000010u; // 80051608
  c->lr=0x80051610u; f_801648A4(c); // 8005160C
  fcmp(c,0,c->f[31],c->f[1]); // 80051610
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80051614
  if (!crb(c,2)) { goto L_80051624; } // 80051618
  c->r[0]=R32(c->r[28]+0x00000008u); // 8005161C
  goto L_80051630; // 80051620
L_80051624:;
  c->f[31]=c->f[1]; // 80051624
  c->r[0]=R32(c->r[26]+0x00000008u); // 80051628
  c->r[24]=c->r[25]|c->r[25]; // 8005162C
L_80051630:;
  fcmp(c,0,c->f[28],c->f[31]); // 80051630
  if (!crb(c,1)) { goto L_80051644; } // 80051634
  c->f[28]=c->f[31]; // 80051638
  W32(c->r[1]+0x00000E90u,c->r[0]); // 8005163C
  W32(c->r[1]+0x00000E94u,c->r[24]); // 80051640
L_80051644:;
  cmps(c,0,(int32_t)c->r[27],16); // 80051644
  if (!crb(c,0)) { goto L_8005169C; } // 80051648
  c->r[4]=c->r[1]+0x00000308u; // 8005164C
  c->r[5]=0u+0x00000001u; // 80051650
  c->ctr=c->r[27]; // 80051654
  cmps(c,0,(int32_t)c->r[27],0); // 80051658
  if (!crb(c,1)) { goto L_80051680; } // 8005165C
L_80051660:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 80051660
  c->r[0]=R32(c->r[4]+0x00000000u); // 80051664
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80051668
  if (!crb(c,2)) { goto L_80051678; } // 8005166C
  c->r[5]=0u+0x00000000u; // 80051670
  goto L_80051680; // 80051674
L_80051678:;
  c->r[4]=c->r[4]+0x00000004u; // 80051678
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80051660; } // 8005167C
L_80051680:;
  cmps(c,0,(int32_t)c->r[5],1); // 80051680
  if (!crb(c,2)) { goto L_8005169C; } // 80051684
  c->r[0]=R32(c->r[28]+0x00000008u); // 80051688
  c->r[3]=c->r[1]+0x00000308u; // 8005168C
  c->r[27]=c->r[27]+0x00000001u; // 80051690
  W32(c->r[3]+c->r[21],c->r[0]); // 80051694
  c->r[21]=c->r[21]+0x00000004u; // 80051698
L_8005169C:;
  cmps(c,0,(int32_t)c->r[27],16); // 8005169C
  if (!crb(c,0)) { goto L_800516F4; } // 800516A0
  c->r[4]=c->r[1]+0x00000308u; // 800516A4
  c->r[5]=0u+0x00000001u; // 800516A8
  c->ctr=c->r[27]; // 800516AC
  cmps(c,0,(int32_t)c->r[27],0); // 800516B0
  if (!crb(c,1)) { goto L_800516D8; } // 800516B4
L_800516B8:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 800516B8
  c->r[0]=R32(c->r[4]+0x00000000u); // 800516BC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800516C0
  if (!crb(c,2)) { goto L_800516D0; } // 800516C4
  c->r[5]=0u+0x00000000u; // 800516C8
  goto L_800516D8; // 800516CC
L_800516D0:;
  c->r[4]=c->r[4]+0x00000004u; // 800516D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800516B8; } // 800516D4
L_800516D8:;
  cmps(c,0,(int32_t)c->r[5],1); // 800516D8
  if (!crb(c,2)) { goto L_800516F4; } // 800516DC
  c->r[0]=R32(c->r[26]+0x00000008u); // 800516E0
  c->r[3]=c->r[1]+0x00000308u; // 800516E4
  c->r[27]=c->r[27]+0x00000001u; // 800516E8
  W32(c->r[3]+c->r[21],c->r[0]); // 800516EC
  c->r[21]=c->r[21]+0x00000004u; // 800516F0
L_800516F4:;
  c->r[0]=0u+0x00000001u; // 800516F4
  cmps(c,0,(int32_t)c->r[27],16); // 800516F8
  W32(c->r[1]+0x00000E9Cu,c->r[0]); // 800516FC
  if (!crb(c,0)) { goto L_80051718; } // 80051700
L_80051704:;
  c->r[30]=c->r[30]+0x00000008u; // 80051704
  c->r[29]=c->r[29]+0x00000001u; // 80051708
L_8005170C:;
  c->r[0]=R32(c->r[1]+0x00000E98u); // 8005170C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80051710
  if (crb(c,0)) { IRQCHK(c); goto L_80051184; } // 80051714
L_80051718:;
  c->r[0]=R32(c->r[1]+0x00000E9Cu); // 80051718
  cmps(c,0,(int32_t)c->r[0],1); // 8005171C
  if (!crb(c,2)) { goto L_80051840; } // 80051720
  c->r[0]=R32(c->r[1]+0x00000008u); // 80051724
  cmps(c,0,(int32_t)c->r[0],0); // 80051728
  if (crb(c,2)) { goto L_80051840; } // 8005172C
  {uint32_t ea=c->r[1]+0x000001CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80051730
  c->r[4]=c->r[0]|c->r[0]; // 80051734
  c->r[0]=R32(c->r[1]+0x00000E94u); // 80051738
  cmps(c,1,(int32_t)c->r[27],0); // 8005173C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80051740
  c->r[3]=0u+0x00000000u; // 80051744
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051748
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8005174C
  {uint32_t ea=c->r[1]+0x000001D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051750
  W32(c->r[4]+0x00000014u,c->r[0]); // 80051754
  c->r[0]=R32(c->r[1]+0x00000E90u); // 80051758
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8005175C
  W32(c->r[4]+0x00000018u,c->r[0]); // 80051760
  W32(c->r[4]+0x0000001Cu,c->r[27]); // 80051764
  if (!crb(c,5)) { goto L_80051840; } // 80051768
  cmps(c,0,(int32_t)c->r[27],8); // 8005176C
  c->r[5]=c->r[27]+0xFFFFFFF8u; // 80051770
  if (!crb(c,1)) { goto L_80051808; } // 80051774
  c->r[6]=0u+0x00000000u; // 80051778
  if (crb(c,4)) { goto L_80051794; } // 8005177C
  c->r[4]=0u+0x80000000u; // 80051780
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 80051784
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80051788
  if (crb(c,1)) { goto L_80051794; } // 8005178C
  c->r[6]=0u+0x00000001u; // 80051790
L_80051794:;
  cmps(c,0,(int32_t)c->r[6],0); // 80051794
  if (crb(c,2)) { goto L_80051808; } // 80051798
  c->r[0]=c->r[5]+0x00000007u; // 8005179C
  c->r[6]=R32(c->r[1]+0x00000008u); // 800517A0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800517A4
  c->r[4]=c->r[1]+0x00000308u; // 800517A8
  c->ctr=c->r[0]; // 800517AC
  cmps(c,0,(int32_t)c->r[5],0); // 800517B0
  if (!crb(c,1)) { goto L_80051808; } // 800517B4
L_800517B8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800517B8
  c->r[3]=c->r[3]+0x00000008u; // 800517BC
  W32(c->r[6]+0x00000020u,c->r[0]); // 800517C0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800517C4
  W32(c->r[6]+0x00000024u,c->r[0]); // 800517C8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800517CC
  W32(c->r[6]+0x00000028u,c->r[0]); // 800517D0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800517D4
  W32(c->r[6]+0x0000002Cu,c->r[0]); // 800517D8
  c->r[0]=R32(c->r[4]+0x00000010u); // 800517DC
  W32(c->r[6]+0x00000030u,c->r[0]); // 800517E0
  c->r[0]=R32(c->r[4]+0x00000014u); // 800517E4
  W32(c->r[6]+0x00000034u,c->r[0]); // 800517E8
  c->r[0]=R32(c->r[4]+0x00000018u); // 800517EC
  W32(c->r[6]+0x00000038u,c->r[0]); // 800517F0
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800517F4
  c->r[4]=c->r[4]+0x00000020u; // 800517F8
  W32(c->r[6]+0x0000003Cu,c->r[0]); // 800517FC
  c->r[6]=c->r[6]+0x00000020u; // 80051800
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800517B8; } // 80051804
L_80051808:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80051808
  c->r[6]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8005180C
  c->r[5]=c->r[1]+0x00000308u; // 80051810
  c->r[4]=c->r[27]-c->r[3]; // 80051814
  c->r[5]=c->r[5]+c->r[6]; // 80051818
  c->r[6]=c->r[0]+c->r[6]; // 8005181C
  c->ctr=c->r[4]; // 80051820
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[27]); // 80051824
  if (!crb(c,0)) { goto L_80051840; } // 80051828
L_8005182C:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 8005182C
  c->r[5]=c->r[5]+0x00000004u; // 80051830
  W32(c->r[6]+0x00000020u,c->r[0]); // 80051834
  c->r[6]=c->r[6]+0x00000004u; // 80051838
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8005182C; } // 8005183C
L_80051840:;
  c->r[3]=R32(c->r[1]+0x00000E9Cu); // 80051840
L_80051844:;
  {uint32_t ea=c->r[1]+0xFFFFFF38u; psq_load(c,31,ea,0,0);} // 80051844
  {uint32_t ea=c->r[1]+0x00000F30u; c->f[31]=RF64(ea);} // 80051848
  {uint32_t ea=c->r[1]+0xFFFFFF28u; psq_load(c,30,ea,0,0);} // 8005184C
  {uint32_t ea=c->r[1]+0x00000F20u; c->f[30]=RF64(ea);} // 80051850
  {uint32_t ea=c->r[1]+0xFFFFFF18u; psq_load(c,29,ea,0,0);} // 80051854
  {uint32_t ea=c->r[1]+0x00000F10u; c->f[29]=RF64(ea);} // 80051858
  {uint32_t ea=c->r[1]+0xFFFFFF08u; psq_load(c,28,ea,0,0);} // 8005185C
  {uint32_t ea=c->r[1]+0x00000F00u; c->f[28]=RF64(ea);} // 80051860
  {uint32_t ea=c->r[1]+0xFFFFFEF8u; psq_load(c,27,ea,0,0);} // 80051864
  c->r[11]=c->r[1]+0x00000EF0u; // 80051868
  {uint32_t ea=c->r[1]+0x00000EF0u; c->f[27]=RF64(ea);} // 8005186C
  c->lr=0x80051874u; f_80252BBC(c); // 80051870
  c->r[0]=R32(c->r[1]+0x00000F44u); // 80051874
  c->lr=c->r[0]; // 80051878
  c->r[1]=c->r[1]+0x00000F40u; // 8005187C
  return; // 80051880
}

// fn_80051884
void f_80051884(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051884
  c->r[0]=c->lr; // 80051888
  cmps(c,0,(int32_t)c->r[5],0); // 8005188C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051890
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80051894
  if (crb(c,2)) { goto L_800518B8; } // 80051898
  c->r[0]=R32(c->r[5]+0x00000010u); // 8005189C
  {uint32_t ea=c->r[2]+0xFFFF8B8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800518A0
  {uint32_t ea=c->r[2]+0xFFFF8B88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800518A4
  c->r[0]=c->r[0]|0x00000003u; // 800518A8
  {uint32_t ea=c->r[5]+0x00000060u; WF32(ea,c->f[1]);} // 800518AC
  {uint32_t ea=c->r[5]+0x00000064u; WF32(ea,c->f[0]);} // 800518B0
  W32(c->r[5]+0x00000010u,c->r[0]); // 800518B4
L_800518B8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800518B8
  c->r[31]=R32(c->r[4]+0x0000003Cu); // 800518BC
  c->r[12]=R32(c->r[12]+0x000000CCu); // 800518C0
  c->ctr=c->r[12]; // 800518C4
  if (true) { c->lr=0x800518CCu; dispatch(c,c->ctr); } // 800518C8
  cmps(c,0,(int32_t)c->r[3],0); // 800518CC
  if (crb(c,2)) { goto L_800518DC; } // 800518D0
  c->r[4]=c->r[31]|c->r[31]; // 800518D4
  c->lr=0x800518DCu; f_80053BC0(c); // 800518D8
L_800518DC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800518DC
  c->r[3]=0u+0x00000001u; // 800518E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800518E4
  c->lr=c->r[0]; // 800518E8
  c->r[1]=c->r[1]+0x00000010u; // 800518EC
  return; // 800518F0
}

// fn_800518F4
void f_800518F4(Ctx* __restrict c) {
  c->r[3]=c->r[4]|c->r[4]; // 800518F4
  c->r[4]=c->r[5]|c->r[5]; // 800518F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800518FC
  c->r[5]=c->r[6]|c->r[6]; // 80051900
  c->r[12]=R32(c->r[12]+0x000000D4u); // 80051904
  c->ctr=c->r[12]; // 80051908
  if (true) { dispatch(c,c->ctr); return; } // 8005190C
}

// fn_80051910
void f_80051910(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 80051910
  return; // 80051914
}

// fn_80051918
void f_80051918(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80051918
  c->r[3]=c->r[3]+c->r[0]; // 8005191C
  c->r[3]=R32(c->r[3]+0x000000F0u); // 80051920
  return; // 80051924
}

// fn_80051928
void f_80051928(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80051928
  c->r[3]=c->r[3]+c->r[0]; // 8005192C
  W32(c->r[3]+0x000000F0u,c->r[4]); // 80051930
  return; // 80051934
}

// fn_80051938
void f_80051938(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80051938
  c->r[3]=c->r[3]+c->r[0]; // 8005193C
  c->r[3]=R32(c->r[3]+0x000000ECu); // 80051940
  return; // 80051944
}

// fn_80051948
void f_80051948(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80051948
  c->r[3]=c->r[3]+c->r[0]; // 8005194C
  W32(c->r[3]+0x000000ECu,c->r[4]); // 80051950
  return; // 80051954
}

// fn_80051958
void f_80051958(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 80051958
  return; // 8005195C
}

// fn_80051960
void f_80051960(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E4u); // 80051960
  return; // 80051964
}

// fn_80051968
void f_80051968(Ctx* __restrict c) {
  c->r[3]=0u+0xFFFFFFFFu; // 80051968
  return; // 8005196C
}

// fn_80051970
void f_80051970(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000058u); // 80051970
  return; // 80051974
}

// fn_80051978
void f_80051978(Ctx* __restrict c) {
  W32(c->r[3]+0x00000058u,c->r[4]); // 80051978
  return; // 8005197C
}

// fn_80051980
void f_80051980(Ctx* __restrict c) {
  return; // 80051980
}

// fn_80051984
void f_80051984(Ctx* __restrict c) {
  return; // 80051984
}

// fn_80051988
void f_80051988(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 80051988
  c->r[0]=0u+0x00000007u; // 8005198C
  W16(c->r[3]+0x000002E8u,c->r[4]); // 80051990
  c->r[5]=c->r[3]|c->r[3]; // 80051994
  c->r[6]=c->r[3]|c->r[3]; // 80051998
  {uint32_t ea=c->r[2]+0xFFFF8BB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005199C
  c->r[11]=0u+0x00000000u; // 800519A0
  c->ctr=c->r[0]; // 800519A4
L_800519A8:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 800519A8
  c->r[11]=c->r[11]+0x00000008u; // 800519AC
  W32(c->r[5]+0x000001F0u,c->r[4]); // 800519B0
  {uint32_t ea=c->r[5]+0x000000F8u; WF32(ea,c->f[0]);} // 800519B4
  W16(c->r[6]+0x000002EAu,c->r[4]); // 800519B8
  W32(c->r[5]+0x00000004u,c->r[4]); // 800519BC
  W32(c->r[5]+0x000001F4u,c->r[4]); // 800519C0
  {uint32_t ea=c->r[5]+0x000000FCu; WF32(ea,c->f[0]);} // 800519C4
  W16(c->r[6]+0x000002ECu,c->r[4]); // 800519C8
  W32(c->r[5]+0x00000008u,c->r[4]); // 800519CC
  W32(c->r[5]+0x000001F8u,c->r[4]); // 800519D0
  {uint32_t ea=c->r[5]+0x00000100u; WF32(ea,c->f[0]);} // 800519D4
  W16(c->r[6]+0x000002EEu,c->r[4]); // 800519D8
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800519DC
  W32(c->r[5]+0x000001FCu,c->r[4]); // 800519E0
  {uint32_t ea=c->r[5]+0x00000104u; WF32(ea,c->f[0]);} // 800519E4
  W16(c->r[6]+0x000002F0u,c->r[4]); // 800519E8
  W32(c->r[5]+0x00000010u,c->r[4]); // 800519EC
  W32(c->r[5]+0x00000200u,c->r[4]); // 800519F0
  {uint32_t ea=c->r[5]+0x00000108u; WF32(ea,c->f[0]);} // 800519F4
  W16(c->r[6]+0x000002F2u,c->r[4]); // 800519F8
  W32(c->r[5]+0x00000014u,c->r[4]); // 800519FC
  W32(c->r[5]+0x00000204u,c->r[4]); // 80051A00
  {uint32_t ea=c->r[5]+0x0000010Cu; WF32(ea,c->f[0]);} // 80051A04
  W16(c->r[6]+0x000002F4u,c->r[4]); // 80051A08
  W32(c->r[5]+0x00000018u,c->r[4]); // 80051A0C
  W32(c->r[5]+0x00000208u,c->r[4]); // 80051A10
  {uint32_t ea=c->r[5]+0x00000110u; WF32(ea,c->f[0]);} // 80051A14
  W16(c->r[6]+0x000002F6u,c->r[4]); // 80051A18
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 80051A1C
  W32(c->r[5]+0x0000020Cu,c->r[4]); // 80051A20
  {uint32_t ea=c->r[5]+0x00000114u; WF32(ea,c->f[0]);} // 80051A24
  c->r[5]=c->r[5]+0x00000020u; // 80051A28
  W16(c->r[6]+0x000002F8u,c->r[4]); // 80051A2C
  c->r[6]=c->r[6]+0x00000010u; // 80051A30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800519A8; } // 80051A34
  c->r[4]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80051A38
  c->r[10]=0u+0x00000000u; // 80051A3C
  W32(c->r[3]+c->r[4],c->r[10]); // 80051A40
  c->r[12]=c->r[3]+c->r[4]; // 80051A44
  c->r[0]=c->r[11]+0x00000001u; // 80051A48
  c->r[4]=c->r[11]+0x00000002u; // 80051A4C
  W32(c->r[12]+0x000001F0u,c->r[10]); // 80051A50
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80051A54
  {uint32_t ea=c->r[2]+0xFFFF8BB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051A58
  c->r[8]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80051A5C
  c->r[0]=c->r[11]+0x00000003u; // 80051A60
  c->r[4]=c->r[11]+0x00000004u; // 80051A64
  {uint32_t ea=c->r[12]+0x000000F8u; WF32(ea,c->f[0]);} // 80051A68
  c->r[9]=c->r[3]+c->r[5]; // 80051A6C
  c->r[7]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80051A70
  c->r[6]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80051A74
  W16(c->r[9]+0x000002E8u,c->r[10]); // 80051A78
  c->r[9]=c->r[3]+c->r[8]; // 80051A7C
  c->r[8]=c->r[3]+c->r[7]; // 80051A80
  c->r[0]=c->r[11]+0x00000005u; // 80051A84
  W32(c->r[12]+0x00000004u,c->r[10]); // 80051A88
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80051A8C
  c->r[7]=c->r[3]+c->r[6]; // 80051A90
  c->r[0]=c->r[11]+0x00000006u; // 80051A94
  W32(c->r[12]+0x000001F4u,c->r[10]); // 80051A98
  c->r[6]=c->r[3]+c->r[5]; // 80051A9C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80051AA0
  c->r[4]=0u+0x00010000u; // 80051AA4
  {uint32_t ea=c->r[12]+0x000000FCu; WF32(ea,c->f[0]);} // 80051AA8
  c->r[5]=c->r[3]+c->r[0]; // 80051AAC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80051AB0
  W16(c->r[9]+0x000002E8u,c->r[10]); // 80051AB4
  W32(c->r[12]+0x00000008u,c->r[10]); // 80051AB8
  W32(c->r[12]+0x000001F8u,c->r[10]); // 80051ABC
  {uint32_t ea=c->r[12]+0x00000100u; WF32(ea,c->f[0]);} // 80051AC0
  W16(c->r[8]+0x000002E8u,c->r[10]); // 80051AC4
  W32(c->r[12]+0x0000000Cu,c->r[10]); // 80051AC8
  W32(c->r[12]+0x000001FCu,c->r[10]); // 80051ACC
  {uint32_t ea=c->r[12]+0x00000104u; WF32(ea,c->f[0]);} // 80051AD0
  W16(c->r[7]+0x000002E8u,c->r[10]); // 80051AD4
  W32(c->r[12]+0x00000010u,c->r[10]); // 80051AD8
  W32(c->r[12]+0x00000200u,c->r[10]); // 80051ADC
  {uint32_t ea=c->r[12]+0x00000108u; WF32(ea,c->f[0]);} // 80051AE0
  W16(c->r[6]+0x000002E8u,c->r[10]); // 80051AE4
  W32(c->r[12]+0x00000014u,c->r[10]); // 80051AE8
  W32(c->r[12]+0x00000204u,c->r[10]); // 80051AEC
  {uint32_t ea=c->r[12]+0x0000010Cu; WF32(ea,c->f[0]);} // 80051AF0
  W16(c->r[5]+0x000002E8u,c->r[10]); // 80051AF4
  W32(c->r[3]+0x00000368u,c->r[10]); // 80051AF8
  W32(c->r[3]+0x0000036Cu,c->r[10]); // 80051AFC
  W32(c->r[3]+0x00000370u,c->r[0]); // 80051B00
  return; // 80051B04
}

// fn_80051B08
void f_80051B08(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 80051B08
  c->r[0]=0u+0x00000007u; // 80051B0C
  W16(c->r[3]+0x000002E8u,c->r[4]); // 80051B10
  c->r[5]=c->r[3]|c->r[3]; // 80051B14
  c->r[6]=c->r[3]|c->r[3]; // 80051B18
  {uint32_t ea=c->r[2]+0xFFFF8BB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051B1C
  c->r[11]=0u+0x00000000u; // 80051B20
  c->ctr=c->r[0]; // 80051B24
L_80051B28:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 80051B28
  c->r[11]=c->r[11]+0x00000008u; // 80051B2C
  W32(c->r[5]+0x000001F0u,c->r[4]); // 80051B30
  {uint32_t ea=c->r[5]+0x000000F8u; WF32(ea,c->f[0]);} // 80051B34
  W16(c->r[6]+0x000002EAu,c->r[4]); // 80051B38
  W32(c->r[5]+0x00000004u,c->r[4]); // 80051B3C
  W32(c->r[5]+0x000001F4u,c->r[4]); // 80051B40
  {uint32_t ea=c->r[5]+0x000000FCu; WF32(ea,c->f[0]);} // 80051B44
  W16(c->r[6]+0x000002ECu,c->r[4]); // 80051B48
  W32(c->r[5]+0x00000008u,c->r[4]); // 80051B4C
  W32(c->r[5]+0x000001F8u,c->r[4]); // 80051B50
  {uint32_t ea=c->r[5]+0x00000100u; WF32(ea,c->f[0]);} // 80051B54
  W16(c->r[6]+0x000002EEu,c->r[4]); // 80051B58
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 80051B5C
  W32(c->r[5]+0x000001FCu,c->r[4]); // 80051B60
  {uint32_t ea=c->r[5]+0x00000104u; WF32(ea,c->f[0]);} // 80051B64
  W16(c->r[6]+0x000002F0u,c->r[4]); // 80051B68
  W32(c->r[5]+0x00000010u,c->r[4]); // 80051B6C
  W32(c->r[5]+0x00000200u,c->r[4]); // 80051B70
  {uint32_t ea=c->r[5]+0x00000108u; WF32(ea,c->f[0]);} // 80051B74
  W16(c->r[6]+0x000002F2u,c->r[4]); // 80051B78
  W32(c->r[5]+0x00000014u,c->r[4]); // 80051B7C
  W32(c->r[5]+0x00000204u,c->r[4]); // 80051B80
  {uint32_t ea=c->r[5]+0x0000010Cu; WF32(ea,c->f[0]);} // 80051B84
  W16(c->r[6]+0x000002F4u,c->r[4]); // 80051B88
  W32(c->r[5]+0x00000018u,c->r[4]); // 80051B8C
  W32(c->r[5]+0x00000208u,c->r[4]); // 80051B90
  {uint32_t ea=c->r[5]+0x00000110u; WF32(ea,c->f[0]);} // 80051B94
  W16(c->r[6]+0x000002F6u,c->r[4]); // 80051B98
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 80051B9C
  W32(c->r[5]+0x0000020Cu,c->r[4]); // 80051BA0
  {uint32_t ea=c->r[5]+0x00000114u; WF32(ea,c->f[0]);} // 80051BA4
  c->r[5]=c->r[5]+0x00000020u; // 80051BA8
  W16(c->r[6]+0x000002F8u,c->r[4]); // 80051BAC
  c->r[6]=c->r[6]+0x00000010u; // 80051BB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80051B28; } // 80051BB4
  c->r[4]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80051BB8
  c->r[10]=0u+0x00000000u; // 80051BBC
  W32(c->r[3]+c->r[4],c->r[10]); // 80051BC0
  c->r[12]=c->r[3]+c->r[4]; // 80051BC4
  c->r[0]=c->r[11]+0x00000001u; // 80051BC8
  c->r[4]=c->r[11]+0x00000002u; // 80051BCC
  W32(c->r[12]+0x000001F0u,c->r[10]); // 80051BD0
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80051BD4
  {uint32_t ea=c->r[2]+0xFFFF8BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80051BD8
  c->r[8]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80051BDC
  c->r[0]=c->r[11]+0x00000003u; // 80051BE0
  c->r[4]=c->r[11]+0x00000004u; // 80051BE4
  {uint32_t ea=c->r[12]+0x000000F8u; WF32(ea,c->f[1]);} // 80051BE8
  c->r[9]=c->r[3]+c->r[5]; // 80051BEC
  c->r[7]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80051BF0
  c->r[6]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80051BF4
  W16(c->r[9]+0x000002E8u,c->r[10]); // 80051BF8
  c->r[9]=c->r[3]+c->r[8]; // 80051BFC
  c->r[8]=c->r[3]+c->r[7]; // 80051C00
  c->r[0]=c->r[11]+0x00000005u; // 80051C04
  W32(c->r[12]+0x00000004u,c->r[10]); // 80051C08
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80051C0C
  c->r[7]=c->r[3]+c->r[6]; // 80051C10
  c->r[0]=c->r[11]+0x00000006u; // 80051C14
  W32(c->r[12]+0x000001F4u,c->r[10]); // 80051C18
  c->r[4]=0u+0x00010000u; // 80051C1C
  c->r[6]=c->r[3]+c->r[5]; // 80051C20
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80051C24
  {uint32_t ea=c->r[12]+0x000000FCu; WF32(ea,c->f[1]);} // 80051C28
  c->r[5]=c->r[3]+c->r[0]; // 80051C2C
  {uint32_t ea=c->r[2]+0xFFFF8BBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80051C30
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80051C34
  W16(c->r[9]+0x000002E8u,c->r[10]); // 80051C38
  c->r[0]=0u+0x00000001u; // 80051C3C
  W32(c->r[12]+0x00000008u,c->r[10]); // 80051C40
  W32(c->r[12]+0x000001F8u,c->r[10]); // 80051C44
  {uint32_t ea=c->r[12]+0x00000100u; WF32(ea,c->f[1]);} // 80051C48
  W16(c->r[8]+0x000002E8u,c->r[10]); // 80051C4C
  W32(c->r[12]+0x0000000Cu,c->r[10]); // 80051C50
  W32(c->r[12]+0x000001FCu,c->r[10]); // 80051C54
  {uint32_t ea=c->r[12]+0x00000104u; WF32(ea,c->f[1]);} // 80051C58
  W16(c->r[7]+0x000002E8u,c->r[10]); // 80051C5C
  W32(c->r[12]+0x00000010u,c->r[10]); // 80051C60
  W32(c->r[12]+0x00000200u,c->r[10]); // 80051C64
  {uint32_t ea=c->r[12]+0x00000108u; WF32(ea,c->f[1]);} // 80051C68
  W16(c->r[6]+0x000002E8u,c->r[10]); // 80051C6C
  W32(c->r[12]+0x00000014u,c->r[10]); // 80051C70
  W32(c->r[12]+0x00000204u,c->r[10]); // 80051C74
  {uint32_t ea=c->r[12]+0x0000010Cu; WF32(ea,c->f[1]);} // 80051C78
  W16(c->r[5]+0x000002E8u,c->r[10]); // 80051C7C
  W32(c->r[3]+0x00000368u,c->r[10]); // 80051C80
  W32(c->r[3]+0x00000370u,c->r[4]); // 80051C84
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[0]);} // 80051C88
  W32(c->r[3]+0x00000000u,c->r[10]); // 80051C8C
  W32(c->r[3]+0x000001F0u,c->r[10]); // 80051C90
  W32(c->r[3]+0x0000036Cu,c->r[0]); // 80051C94
  return; // 80051C98
}

// fn_80051C9C
void f_80051C9C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 80051C9C
  c->r[0]=0u+0x00000007u; // 80051CA0
  W16(c->r[3]+0x000002E8u,c->r[4]); // 80051CA4
  c->r[5]=c->r[3]|c->r[3]; // 80051CA8
  c->r[6]=c->r[3]|c->r[3]; // 80051CAC
  {uint32_t ea=c->r[2]+0xFFFF8BB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051CB0
  c->r[11]=0u+0x00000000u; // 80051CB4
  c->ctr=c->r[0]; // 80051CB8
L_80051CBC:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 80051CBC
  c->r[11]=c->r[11]+0x00000008u; // 80051CC0
  W32(c->r[5]+0x000001F0u,c->r[4]); // 80051CC4
  {uint32_t ea=c->r[5]+0x000000F8u; WF32(ea,c->f[0]);} // 80051CC8
  W16(c->r[6]+0x000002EAu,c->r[4]); // 80051CCC
  W32(c->r[5]+0x00000004u,c->r[4]); // 80051CD0
  W32(c->r[5]+0x000001F4u,c->r[4]); // 80051CD4
  {uint32_t ea=c->r[5]+0x000000FCu; WF32(ea,c->f[0]);} // 80051CD8
  W16(c->r[6]+0x000002ECu,c->r[4]); // 80051CDC
  W32(c->r[5]+0x00000008u,c->r[4]); // 80051CE0
  W32(c->r[5]+0x000001F8u,c->r[4]); // 80051CE4
  {uint32_t ea=c->r[5]+0x00000100u; WF32(ea,c->f[0]);} // 80051CE8
  W16(c->r[6]+0x000002EEu,c->r[4]); // 80051CEC
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 80051CF0
  W32(c->r[5]+0x000001FCu,c->r[4]); // 80051CF4
  {uint32_t ea=c->r[5]+0x00000104u; WF32(ea,c->f[0]);} // 80051CF8
  W16(c->r[6]+0x000002F0u,c->r[4]); // 80051CFC
  W32(c->r[5]+0x00000010u,c->r[4]); // 80051D00
  W32(c->r[5]+0x00000200u,c->r[4]); // 80051D04
  {uint32_t ea=c->r[5]+0x00000108u; WF32(ea,c->f[0]);} // 80051D08
  W16(c->r[6]+0x000002F2u,c->r[4]); // 80051D0C
  W32(c->r[5]+0x00000014u,c->r[4]); // 80051D10
  W32(c->r[5]+0x00000204u,c->r[4]); // 80051D14
  {uint32_t ea=c->r[5]+0x0000010Cu; WF32(ea,c->f[0]);} // 80051D18
  W16(c->r[6]+0x000002F4u,c->r[4]); // 80051D1C
  W32(c->r[5]+0x00000018u,c->r[4]); // 80051D20
  W32(c->r[5]+0x00000208u,c->r[4]); // 80051D24
  {uint32_t ea=c->r[5]+0x00000110u; WF32(ea,c->f[0]);} // 80051D28
  W16(c->r[6]+0x000002F6u,c->r[4]); // 80051D2C
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 80051D30
  W32(c->r[5]+0x0000020Cu,c->r[4]); // 80051D34
  {uint32_t ea=c->r[5]+0x00000114u; WF32(ea,c->f[0]);} // 80051D38
  c->r[5]=c->r[5]+0x00000020u; // 80051D3C
  W16(c->r[6]+0x000002F8u,c->r[4]); // 80051D40
  c->r[6]=c->r[6]+0x00000010u; // 80051D44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80051CBC; } // 80051D48
  c->r[4]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80051D4C
  c->r[10]=0u+0x00000000u; // 80051D50
  W32(c->r[3]+c->r[4],c->r[10]); // 80051D54
  c->r[12]=c->r[3]+c->r[4]; // 80051D58
  c->r[0]=c->r[11]+0x00000001u; // 80051D5C
  c->r[4]=c->r[11]+0x00000002u; // 80051D60
  W32(c->r[12]+0x000001F0u,c->r[10]); // 80051D64
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80051D68
  {uint32_t ea=c->r[2]+0xFFFF8BB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051D6C
  c->r[8]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80051D70
  c->r[0]=c->r[11]+0x00000003u; // 80051D74
  c->r[4]=c->r[11]+0x00000004u; // 80051D78
  {uint32_t ea=c->r[12]+0x000000F8u; WF32(ea,c->f[0]);} // 80051D7C
  c->r[9]=c->r[3]+c->r[5]; // 80051D80
  c->r[7]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80051D84
  c->r[6]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80051D88
  W16(c->r[9]+0x000002E8u,c->r[10]); // 80051D8C
  c->r[9]=c->r[3]+c->r[8]; // 80051D90
  c->r[8]=c->r[3]+c->r[7]; // 80051D94
  c->r[0]=c->r[11]+0x00000005u; // 80051D98
  W32(c->r[12]+0x00000004u,c->r[10]); // 80051D9C
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80051DA0
  c->r[7]=c->r[3]+c->r[6]; // 80051DA4
  c->r[0]=c->r[11]+0x00000006u; // 80051DA8
  W32(c->r[12]+0x000001F4u,c->r[10]); // 80051DAC
  c->r[6]=c->r[3]+c->r[5]; // 80051DB0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80051DB4
  c->r[4]=0u+0x00010000u; // 80051DB8
  {uint32_t ea=c->r[12]+0x000000FCu; WF32(ea,c->f[0]);} // 80051DBC
  c->r[5]=c->r[3]+c->r[0]; // 80051DC0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80051DC4
  W16(c->r[9]+0x000002E8u,c->r[10]); // 80051DC8
  W32(c->r[12]+0x00000008u,c->r[10]); // 80051DCC
  W32(c->r[12]+0x000001F8u,c->r[10]); // 80051DD0
  {uint32_t ea=c->r[12]+0x00000100u; WF32(ea,c->f[0]);} // 80051DD4
  W16(c->r[8]+0x000002E8u,c->r[10]); // 80051DD8
  W32(c->r[12]+0x0000000Cu,c->r[10]); // 80051DDC
  W32(c->r[12]+0x000001FCu,c->r[10]); // 80051DE0
  {uint32_t ea=c->r[12]+0x00000104u; WF32(ea,c->f[0]);} // 80051DE4
  W16(c->r[7]+0x000002E8u,c->r[10]); // 80051DE8
  W32(c->r[12]+0x00000010u,c->r[10]); // 80051DEC
  W32(c->r[12]+0x00000200u,c->r[10]); // 80051DF0
  {uint32_t ea=c->r[12]+0x00000108u; WF32(ea,c->f[0]);} // 80051DF4
  W16(c->r[6]+0x000002E8u,c->r[10]); // 80051DF8
  W32(c->r[12]+0x00000014u,c->r[10]); // 80051DFC
  W32(c->r[12]+0x00000204u,c->r[10]); // 80051E00
  {uint32_t ea=c->r[12]+0x0000010Cu; WF32(ea,c->f[0]);} // 80051E04
  W16(c->r[5]+0x000002E8u,c->r[10]); // 80051E08
  W32(c->r[3]+0x00000368u,c->r[10]); // 80051E0C
  W32(c->r[3]+0x0000036Cu,c->r[10]); // 80051E10
  W32(c->r[3]+0x00000370u,c->r[0]); // 80051E14
  return; // 80051E18
}

// fn_80051E1C
void f_80051E1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051E1C
  c->r[0]=c->lr; // 80051E20
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80051E24
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 80051E28
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 80051E2C
  c->r[11]=c->r[1]+0x000000D0u; // 80051E30
  c->lr=0x80051E38u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80051E34
  c->r[29]=c->r[4]|c->r[4]; // 80051E38
  c->r[28]=c->r[3]|c->r[3]; // 80051E3C
  c->r[12]=R32(c->r[29]+0x00000160u); // 80051E40
  c->r[3]=c->r[29]|c->r[29]; // 80051E44
  c->r[4]=c->r[1]+0x00000070u; // 80051E48
  c->r[12]=R32(c->r[12]+0x00000048u); // 80051E4C
  c->ctr=c->r[12]; // 80051E50
  if (true) { c->lr=0x80051E58u; dispatch(c,c->ctr); } // 80051E54
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=c->ps1[2]=RF32(ea);} // 80051E58
  c->r[26]=0u+0x00000000u; // 80051E5C
  {uint32_t ea=c->r[1]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 80051E60
  c->r[30]=c->r[28]+0x000000F8u; // 80051E64
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051E68
  c->r[25]=c->r[28]+0x00000004u; // 80051E6C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 80051E70
  c->r[24]=c->r[30]+0x00000004u; // 80051E74
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80051E78
  c->r[23]=c->r[1]+0x0000002Du; // 80051E7C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80051E80
  c->r[31]=0u+0x00000000u; // 80051E84
  c->r[22]=0u+0x00000001u; // 80051E88
  c->r[27]=0u+0x00000001u; // 80051E8C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80051E90
  W8(c->r[1]+0x0000002Cu,c->r[26]); // 80051E94
  goto L_80051F20; // 80051E98
L_80051E9C:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 80051E9C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80051EA0
  c->r[12]=R32(c->r[12]+0x00000070u); // 80051EA4
  c->ctr=c->r[12]; // 80051EA8
  if (true) { c->lr=0x80051EB0u; dispatch(c,c->ctr); } // 80051EAC
  cmps(c,0,(int32_t)c->r[3],0); // 80051EB0
  if (crb(c,2)) { goto L_80051F0C; } // 80051EB4
  c->r[7]=R32(c->r[25]+0x00000000u); // 80051EB8
  c->r[3]=c->r[1]+0x00000020u; // 80051EBC
  c->r[4]=c->r[1]+0x00000014u; // 80051EC0
  c->r[6]=R32(c->r[7]+0x00000034u); // 80051EC4
  c->r[5]=R32(c->r[7]+0x00000038u); // 80051EC8
  c->r[0]=R32(c->r[7]+0x0000003Cu); // 80051ECC
  W32(c->r[1]+0x00000008u,c->r[6]); // 80051ED0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80051ED4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80051ED8
  W32(c->r[1]+0x00000010u,c->r[0]); // 80051EDC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80051EE0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051EE4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 80051EE8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80051EEC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80051EF0
  c->lr=0x80051EF8u; f_801648E8(c); // 80051EF4
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[1]); // 80051EF8
  W8(c->r[23]+0x00000000u,c->r[27]); // 80051EFC
  c->r[31]=c->r[31]+0x00000001u; // 80051F00
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[0]);} // 80051F04
  goto L_80051F10; // 80051F08
L_80051F0C:;
  W8(c->r[23]+0x00000000u,c->r[26]); // 80051F0C
L_80051F10:;
  c->r[25]=c->r[25]+0x00000004u; // 80051F10
  c->r[24]=c->r[24]+0x00000004u; // 80051F14
  c->r[23]=c->r[23]+0x00000001u; // 80051F18
  c->r[22]=c->r[22]+0x00000001u; // 80051F1C
L_80051F20:;
  c->r[0]=R32(c->r[28]+0x0000036Cu); // 80051F20
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 80051F24
  if (crb(c,0)) { IRQCHK(c); goto L_80051E9C; } // 80051F28
  c->r[3]=c->r[28]+0x000002EAu; // 80051F2C
  c->r[5]=c->r[1]+0x0000002Cu; // 80051F30
  c->r[8]=0u+0xFFFFFFFFu; // 80051F34
  c->r[4]=0u+0xFFFFFFFEu; // 80051F38
  c->r[6]=0u+0x00000000u; // 80051F3C
  goto L_80051F48; // 80051F40
L_80051F44:;
  W8(c->r[5]+c->r[10],c->r[6]); // 80051F44
L_80051F48:;
  c->r[4]=c->r[4]+0x00000002u; // 80051F48
  c->r[8]=c->r[8]+0x00000001u; // 80051F4C
  c->r[10]=R16(c->r[3]+c->r[4]); // 80051F50
  c->r[0]=R8(c->r[5]+c->r[10]); // 80051F54
  cmps(c,0,(int32_t)c->r[0],0); // 80051F58
  if (!crb(c,2)) { IRQCHK(c); goto L_80051F44; } // 80051F5C
  c->r[11]=R32(c->r[28]+0x00000368u); // 80051F60
  c->r[9]=c->r[8]+0xFFFFFFFFu; // 80051F64
  {uint32_t ea=c->r[2]+0xFFFF8BB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051F68
  c->r[6]=c->r[1]+0x0000002Cu; // 80051F6C
  c->r[7]=0u+0x00000000u; // 80051F70
  goto L_80051FB4; // 80051F74
L_80051F78:;
  c->r[0]=rotl(c->r[10],2)&0x0003FFFCu; // 80051F78
  c->r[5]=rotl(c->r[8],1)&0xFFFFFFFEu; // 80051F7C
  {uint32_t ea=c->r[30]+c->r[0]; WF32(ea,c->f[0]);} // 80051F80
  c->r[4]=rotl(c->r[9],1)&0xFFFFFFFEu; // 80051F84
  goto L_80051F9C; // 80051F88
L_80051F8C:;
  c->r[4]=c->r[4]+0x00000002u; // 80051F8C
  W8(c->r[6]+c->r[10],c->r[7]); // 80051F90
  c->r[9]=c->r[9]+0x00000001u; // 80051F94
  W16(c->r[3]+c->r[4],c->r[10]); // 80051F98
L_80051F9C:;
  c->r[5]=c->r[5]+0x00000002u; // 80051F9C
  c->r[8]=c->r[8]+0x00000001u; // 80051FA0
  c->r[10]=R16(c->r[3]+c->r[5]); // 80051FA4
  c->r[0]=R8(c->r[6]+c->r[10]); // 80051FA8
  cmps(c,0,(int32_t)c->r[0],0); // 80051FAC
  if (!crb(c,2)) { IRQCHK(c); goto L_80051F8C; } // 80051FB0
L_80051FB4:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[11]); // 80051FB4
  if (crb(c,0)) { IRQCHK(c); goto L_80051F78; } // 80051FB8
  c->r[0]=rotl(c->r[9],1)&0xFFFFFFFEu; // 80051FBC
  c->r[5]=c->r[1]+0x0000002Cu; // 80051FC0
  c->r[6]=c->r[3]+c->r[0]; // 80051FC4
  c->r[7]=0u+0x00000000u; // 80051FC8
  goto L_80051FE8; // 80051FCC
L_80051FD0:;
  c->r[4]=c->r[5]+c->r[7]; // 80051FD0
L_80051FD4:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 80051FD4
  c->r[7]=c->r[7]+0x00000001u; // 80051FD8
  cmps(c,0,(int32_t)c->r[0],0); // 80051FDC
  if (crb(c,2)) { IRQCHK(c); goto L_80051FD4; } // 80051FE0
  W16(c->r[6]+0x00000000u,c->r[7]); // 80051FE4
L_80051FE8:;
  c->r[9]=c->r[9]+0x00000001u; // 80051FE8
  c->r[6]=c->r[6]+0x00000002u; // 80051FEC
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[31]); // 80051FF0
  if (crb(c,0)) { IRQCHK(c); goto L_80051FD0; } // 80051FF4
  c->r[9]=c->r[9]+0xFFFFFFFFu; // 80051FF8
  c->r[0]=0u+0x00000000u; // 80051FFC
  c->r[4]=rotl(c->r[9],1)&0xFFFFFFFEu; // 80052000
  c->r[4]=c->r[3]+c->r[4]; // 80052004
  goto L_80052010; // 80052008
L_8005200C:;
  W16(c->r[4]+0x00000000u,c->r[0]); // 8005200C
L_80052010:;
  c->r[9]=c->r[9]+0x00000001u; // 80052010
  c->r[4]=c->r[4]+0x00000002u; // 80052014
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[11]); // 80052018
  if (crb(c,0)) { IRQCHK(c); goto L_8005200C; } // 8005201C
  c->r[7]=c->r[31]+0xFFFFFFFFu; // 80052020
  W32(c->r[28]+0x00000368u,c->r[31]); // 80052024
  c->r[4]=rotl(c->r[7],1)&0xFFFFFFFEu; // 80052028
  c->r[0]=R16(c->r[3]+c->r[4]); // 8005202C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80052030
  {uint32_t ea=c->r[30]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 80052034
  goto L_80052040; // 80052038
L_8005203C:;
  c->f[2]=c->f[1]; // 8005203C
L_80052040:;
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 80052040
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 80052044
  c->r[0]=R16(c->r[3]+c->r[4]); // 80052048
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8005204C
  {uint32_t ea=c->r[30]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80052050
  fcmp(c,0,c->f[1],c->f[2]); // 80052054
  if (crb(c,1)) { IRQCHK(c); goto L_8005203C; } // 80052058
  c->r[6]=c->r[3]+c->r[4]; // 8005205C
  goto L_800520DC; // 80052060
L_80052064:;
  c->r[9]=c->r[7]+0x00000001u; // 80052064
  c->r[8]=R16(c->r[6]+0x00000000u); // 80052068
  c->r[4]=rotl(c->r[9],1)&0xFFFFFFFEu; // 8005206C
  c->r[0]=R16(c->r[3]+c->r[4]); // 80052070
  c->r[5]=c->r[3]+c->r[4]; // 80052074
  W16(c->r[6]+0x00000000u,c->r[0]); // 80052078
  goto L_80052088; // 8005207C
L_80052080:;
  c->r[0]=R16(c->r[5]+0x00000000u); // 80052080
  W16(c->r[5]+0xFFFFFFFEu,c->r[0]); // 80052084
L_80052088:;
  c->r[4]=c->r[4]+0x00000002u; // 80052088
  c->r[5]=c->r[5]+0x00000002u; // 8005208C
  c->r[0]=R16(c->r[3]+c->r[4]); // 80052090
  c->r[9]=c->r[9]+0x00000001u; // 80052094
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80052098
  {uint32_t ea=c->r[30]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8005209C
  fcmp(c,0,c->f[0],c->f[1]); // 800520A0
  if (crb(c,1)) { IRQCHK(c); goto L_80052080; } // 800520A4
  c->r[5]=c->r[3]+c->r[4]; // 800520A8
  c->r[4]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800520AC
  W16(c->r[5]+0xFFFFFFFEu,c->r[8]); // 800520B0
  goto L_800520BC; // 800520B4
L_800520B8:;
  c->f[2]=c->f[1]; // 800520B8
L_800520BC:;
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 800520BC
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 800520C0
  c->r[0]=R16(c->r[3]+c->r[4]); // 800520C4
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800520C8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800520CC
  {uint32_t ea=c->r[30]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 800520D0
  fcmp(c,0,c->f[1],c->f[2]); // 800520D4
  if (crb(c,1)) { IRQCHK(c); goto L_800520B8; } // 800520D8
L_800520DC:;
  cmps(c,0,(int32_t)c->r[7],0); // 800520DC
  if (!crb(c,0)) { IRQCHK(c); goto L_80052064; } // 800520E0
  c->r[27]=c->r[28]|c->r[28]; // 800520E4
  c->r[23]=0u+0x00000000u; // 800520E8
  goto L_80052138; // 800520EC
L_800520F0:;
  c->r[0]=R16(c->r[27]+0x000002EAu); // 800520F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800520F4
  c->r[26]=R32(c->r[28]+c->r[0]); // 800520F8
  cmps(c,0,(int32_t)c->r[26],0); // 800520FC
  if (crb(c,2)) { goto L_80052130; } // 80052100
  c->r[12]=R32(c->r[26]+0x00000000u); // 80052104
  c->r[3]=c->r[26]|c->r[26]; // 80052108
  c->r[12]=R32(c->r[12]+0x00000070u); // 8005210C
  c->ctr=c->r[12]; // 80052110
  if (true) { c->lr=0x80052118u; dispatch(c,c->ctr); } // 80052114
  cmps(c,0,(int32_t)c->r[3],0); // 80052118
  if (crb(c,2)) { goto L_80052130; } // 8005211C
  c->r[0]=R32(c->r[29]+0x00000174u); // 80052120
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80052124
  c->r[3]=c->r[26]+c->r[0]; // 80052128
  W32(c->r[3]+0x0000006Cu,c->r[23]); // 8005212C
L_80052130:;
  c->r[27]=c->r[27]+0x00000002u; // 80052130
  c->r[23]=c->r[23]+0x00000001u; // 80052134
L_80052138:;
  c->r[0]=R32(c->r[28]+0x0000036Cu); // 80052138
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 8005213C
  if (crb(c,0)) { IRQCHK(c); goto L_800520F0; } // 80052140
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 80052144
  c->r[11]=c->r[1]+0x000000D0u; // 80052148
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 8005214C
  c->lr=0x80052154u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80052150
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80052154
  c->lr=c->r[0]; // 80052158
  c->r[1]=c->r[1]+0x000000E0u; // 8005215C
  return; // 80052160
}

// fn_80052164
void f_80052164(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052164
  c->r[0]=c->lr; // 80052168
  cmps(c,0,(int32_t)c->r[4],0); // 8005216C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052170
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052174
  W32(c->r[1]+0x00000008u,c->r[30]); // 80052178
  c->r[30]=c->r[3]|c->r[3]; // 8005217C
  if (!crb(c,2)) { goto L_8005218C; } // 80052180
  c->r[3]=0u+0xFFFFFFFFu; // 80052184
  goto L_800521DC; // 80052188
L_8005218C:;
  c->r[0]=R32(c->r[3]+0x00000370u); // 8005218C
  c->r[0]=c->r[0]&c->r[5]; cr0(c,c->r[0]); // 80052190
  if (!crb(c,2)) { goto L_800521A0; } // 80052194
  c->r[3]=0u+0xFFFFFFFFu; // 80052198
  goto L_800521DC; // 8005219C
L_800521A0:;
  c->r[31]=R32(c->r[3]+0x0000036Cu); // 800521A0
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800521A4
  W32(c->r[3]+c->r[0],c->r[4]); // 800521A8
  c->r[6]=c->r[3]+c->r[0]; // 800521AC
  c->r[3]=c->r[4]|c->r[4]; // 800521B0
  c->r[4]=0u+0x00000001u; // 800521B4
  W32(c->r[6]+0x000001F0u,c->r[5]); // 800521B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800521BC
  c->r[12]=R32(c->r[12]+0x00000078u); // 800521C0
  c->ctr=c->r[12]; // 800521C4
  if (true) { c->lr=0x800521CCu; dispatch(c,c->ctr); } // 800521C8
  c->r[4]=R32(c->r[30]+0x0000036Cu); // 800521CC
  c->r[3]=c->r[31]|c->r[31]; // 800521D0
  c->r[0]=c->r[4]+0x00000001u; // 800521D4
  W32(c->r[30]+0x0000036Cu,c->r[0]); // 800521D8
L_800521DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800521DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800521E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800521E4
  c->lr=c->r[0]; // 800521E8
  c->r[1]=c->r[1]+0x00000010u; // 800521EC
  return; // 800521F0
}

// fn_800521F4
void f_800521F4(Ctx* __restrict c) {
  c->r[0]=c->r[4]+0x00000001u; // 800521F4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800521F8
  c->r[4]=c->r[3]+c->r[0]; // 800521FC
  c->r[0]=R16(c->r[4]+0x000002E8u); // 80052200
  c->r[6]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80052204
  c->r[4]=c->r[3]+c->r[6]; // 80052208
  c->r[0]=R32(c->r[4]+0x000001F0u); // 8005220C
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 80052210
  if (crb(c,2)) { goto L_80052220; } // 80052214
  c->r[3]=R32(c->r[3]+c->r[6]); // 80052218
  return; // 8005221C
L_80052220:;
  c->r[3]=0u+0x00000000u; // 80052220
  return; // 80052224
}

// fn_80052228
void f_80052228(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052228
  c->r[0]=c->lr; // 8005222C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80052230
  c->r[11]=c->r[1]+0x00000020u; // 80052234
  c->lr=0x8005223Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80052238
  c->r[26]=c->r[3]|c->r[3]; // 8005223C
  c->r[27]=c->r[4]|c->r[4]; // 80052240
  c->r[28]=c->r[5]|c->r[5]; // 80052244
  c->r[29]=0u+0x00000000u; // 80052248
  c->r[30]=c->r[26]|c->r[26]; // 8005224C
  goto L_800522BC; // 80052250
L_80052254:;
  c->r[0]=R16(c->r[30]+0x000002EAu); // 80052254
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80052258
  c->r[3]=c->r[26]+c->r[0]; // 8005225C
  c->r[0]=R32(c->r[3]+0x000001F0u); // 80052260
  c->r[0]=c->r[28]&c->r[0]; cr0(c,c->r[0]); // 80052264
  if (crb(c,2)) { goto L_80052274; } // 80052268
  c->r[31]=R32(c->r[3]+0x00000000u); // 8005226C
  goto L_80052278; // 80052270
L_80052274:;
  c->r[31]=0u+0x00000000u; // 80052274
L_80052278:;
  cmps(c,0,(int32_t)c->r[31],0); // 80052278
  if (crb(c,2)) { goto L_800522B4; } // 8005227C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80052280
  c->r[3]=c->r[31]|c->r[31]; // 80052284
  c->r[12]=R32(c->r[12]+0x00000070u); // 80052288
  c->ctr=c->r[12]; // 8005228C
  if (true) { c->lr=0x80052294u; dispatch(c,c->ctr); } // 80052290
  cmps(c,0,(int32_t)c->r[3],0); // 80052294
  if (crb(c,2)) { goto L_800522B4; } // 80052298
  c->r[12]=R32(c->r[31]+0x00000000u); // 8005229C
  c->r[3]=c->r[31]|c->r[31]; // 800522A0
  c->r[4]=c->r[27]|c->r[27]; // 800522A4
  c->r[12]=R32(c->r[12]+0x00000020u); // 800522A8
  c->ctr=c->r[12]; // 800522AC
  if (true) { c->lr=0x800522B4u; dispatch(c,c->ctr); } // 800522B0
L_800522B4:;
  c->r[30]=c->r[30]+0x00000002u; // 800522B4
  c->r[29]=c->r[29]+0x00000001u; // 800522B8
L_800522BC:;
  c->r[0]=R32(c->r[26]+0x0000036Cu); // 800522BC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800522C0
  if (crb(c,0)) { IRQCHK(c); goto L_80052254; } // 800522C4
  c->r[11]=c->r[1]+0x00000020u; // 800522C8
  c->lr=0x800522D0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800522CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800522D0
  c->lr=c->r[0]; // 800522D4
  c->r[1]=c->r[1]+0x00000020u; // 800522D8
  return; // 800522DC
}

// fn_800522E0
void f_800522E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800522E0
  c->r[0]=c->lr; // 800522E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800522E8
  c->r[11]=c->r[1]+0x00000020u; // 800522EC
  c->lr=0x800522F4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800522F0
  c->r[6]=R32(c->r[3]+0x0000036Cu); // 800522F4
  c->r[26]=c->r[3]|c->r[3]; // 800522F8
  c->r[27]=c->r[4]|c->r[4]; // 800522FC
  c->r[28]=c->r[5]|c->r[5]; // 80052300
  c->r[29]=c->r[6]+0xFFFFFFFFu; // 80052304
  c->r[0]=rotl(c->r[29],1)&0xFFFFFFFEu; // 80052308
  c->r[30]=c->r[3]+c->r[0]; // 8005230C
  goto L_8005237C; // 80052310
L_80052314:;
  c->r[0]=R16(c->r[30]+0x000002EAu); // 80052314
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80052318
  c->r[3]=c->r[26]+c->r[0]; // 8005231C
  c->r[0]=R32(c->r[3]+0x000001F0u); // 80052320
  c->r[0]=c->r[28]&c->r[0]; cr0(c,c->r[0]); // 80052324
  if (crb(c,2)) { goto L_80052334; } // 80052328
  c->r[31]=R32(c->r[3]+0x00000000u); // 8005232C
  goto L_80052338; // 80052330
L_80052334:;
  c->r[31]=0u+0x00000000u; // 80052334
L_80052338:;
  cmps(c,0,(int32_t)c->r[31],0); // 80052338
  if (crb(c,2)) { goto L_80052374; } // 8005233C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80052340
  c->r[3]=c->r[31]|c->r[31]; // 80052344
  c->r[12]=R32(c->r[12]+0x00000070u); // 80052348
  c->ctr=c->r[12]; // 8005234C
  if (true) { c->lr=0x80052354u; dispatch(c,c->ctr); } // 80052350
  cmps(c,0,(int32_t)c->r[3],0); // 80052354
  if (crb(c,2)) { goto L_80052374; } // 80052358
  c->r[12]=R32(c->r[31]+0x00000000u); // 8005235C
  c->r[3]=c->r[31]|c->r[31]; // 80052360
  c->r[4]=c->r[27]|c->r[27]; // 80052364
  c->r[12]=R32(c->r[12]+0x00000024u); // 80052368
  c->ctr=c->r[12]; // 8005236C
  if (true) { c->lr=0x80052374u; dispatch(c,c->ctr); } // 80052370
L_80052374:;
  c->r[30]=c->r[30]+0xFFFFFFFEu; // 80052374
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 80052378
L_8005237C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8005237C
  if (!crb(c,0)) { IRQCHK(c); goto L_80052314; } // 80052380
  c->r[11]=c->r[1]+0x00000020u; // 80052384
  c->lr=0x8005238Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80052388
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005238C
  c->lr=c->r[0]; // 80052390
  c->r[1]=c->r[1]+0x00000020u; // 80052394
  return; // 80052398
}

// fn_8005239C
void f_8005239C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005239C
  c->r[0]=c->lr; // 800523A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800523A4
  c->r[11]=c->r[1]+0x00000020u; // 800523A8
  c->lr=0x800523B0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800523AC
  c->r[6]=R32(c->r[3]+0x0000036Cu); // 800523B0
  c->r[26]=c->r[3]|c->r[3]; // 800523B4
  c->r[27]=c->r[4]|c->r[4]; // 800523B8
  c->r[28]=c->r[5]|c->r[5]; // 800523BC
  c->r[29]=c->r[6]+0xFFFFFFFFu; // 800523C0
  c->r[0]=rotl(c->r[29],1)&0xFFFFFFFEu; // 800523C4
  c->r[30]=c->r[3]+c->r[0]; // 800523C8
  goto L_80052438; // 800523CC
L_800523D0:;
  c->r[0]=R16(c->r[30]+0x000002EAu); // 800523D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800523D4
  c->r[3]=c->r[26]+c->r[0]; // 800523D8
  c->r[0]=R32(c->r[3]+0x000001F0u); // 800523DC
  c->r[0]=c->r[28]&c->r[0]; cr0(c,c->r[0]); // 800523E0
  if (crb(c,2)) { goto L_800523F0; } // 800523E4
  c->r[31]=R32(c->r[3]+0x00000000u); // 800523E8
  goto L_800523F4; // 800523EC
L_800523F0:;
  c->r[31]=0u+0x00000000u; // 800523F0
L_800523F4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800523F4
  if (crb(c,2)) { goto L_80052430; } // 800523F8
  c->r[12]=R32(c->r[31]+0x00000000u); // 800523FC
  c->r[3]=c->r[31]|c->r[31]; // 80052400
  c->r[12]=R32(c->r[12]+0x00000070u); // 80052404
  c->ctr=c->r[12]; // 80052408
  if (true) { c->lr=0x80052410u; dispatch(c,c->ctr); } // 8005240C
  cmps(c,0,(int32_t)c->r[3],0); // 80052410
  if (crb(c,2)) { goto L_80052430; } // 80052414
  c->r[12]=R32(c->r[31]+0x00000000u); // 80052418
  c->r[3]=c->r[31]|c->r[31]; // 8005241C
  c->r[4]=c->r[27]|c->r[27]; // 80052420
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80052424
  c->ctr=c->r[12]; // 80052428
  if (true) { c->lr=0x80052430u; dispatch(c,c->ctr); } // 8005242C
L_80052430:;
  c->r[30]=c->r[30]+0xFFFFFFFEu; // 80052430
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 80052434
L_80052438:;
  cmps(c,0,(int32_t)c->r[29],0); // 80052438
  if (!crb(c,0)) { IRQCHK(c); goto L_800523D0; } // 8005243C
  c->r[11]=c->r[1]+0x00000020u; // 80052440
  c->lr=0x80052448u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80052444
  c->r[0]=R32(c->r[1]+0x00000024u); // 80052448
  c->lr=c->r[0]; // 8005244C
  c->r[1]=c->r[1]+0x00000020u; // 80052450
  return; // 80052454
}

// fn_80052458
void f_80052458(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052458
  c->r[0]=c->lr; // 8005245C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052460
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052464
  c->r[31]=c->r[3]|c->r[3]; // 80052468
  c->lr=0x80052470u; f_80052488(c); // 8005246C
  c->r[3]=c->r[31]|c->r[31]; // 80052470
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052474
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052478
  c->lr=c->r[0]; // 8005247C
  c->r[1]=c->r[1]+0x00000010u; // 80052480
  return; // 80052484
}

// fn_80052488
void f_80052488(Ctx* __restrict c) {
  c->r[5]=0u+0x00000000u; // 80052488
  c->r[0]=0u+0x0000001Fu; // 8005248C
  W16(c->r[3]+0x0000060Eu,c->r[5]); // 80052490
  c->r[6]=c->r[3]|c->r[3]; // 80052494
  c->r[7]=c->r[3]|c->r[3]; // 80052498
  c->r[8]=c->r[3]|c->r[3]; // 8005249C
  {uint32_t ea=c->r[2]+0xFFFF8BB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800524A0
  c->r[9]=0u+0x00000000u; // 800524A4
  c->ctr=c->r[0]; // 800524A8
L_800524AC:;
  W32(c->r[6]+0x00000000u,c->r[5]); // 800524AC
  c->r[4]=c->r[3]+c->r[9]; // 800524B0
  c->r[9]=c->r[9]+0x00000001u; // 800524B4
  W32(c->r[6]+0x000004D8u,c->r[5]); // 800524B8
  {uint32_t ea=c->r[6]+0x000000F8u; WF32(ea,c->f[0]);} // 800524BC
  {uint32_t ea=c->r[6]+0x000003E0u; WF32(ea,c->f[0]);} // 800524C0
  W32(c->r[7]+0x000001F0u,c->r[5]); // 800524C4
  W32(c->r[7]+0x000001F4u,c->r[5]); // 800524C8
  W16(c->r[8]+0x00000610u,c->r[5]); // 800524CC
  W8(c->r[4]+0x000005D0u,c->r[5]); // 800524D0
  c->r[4]=c->r[3]+c->r[9]; // 800524D4
  c->r[9]=c->r[9]+0x00000001u; // 800524D8
  W32(c->r[6]+0x00000004u,c->r[5]); // 800524DC
  W32(c->r[6]+0x000004DCu,c->r[5]); // 800524E0
  {uint32_t ea=c->r[6]+0x000000FCu; WF32(ea,c->f[0]);} // 800524E4
  {uint32_t ea=c->r[6]+0x000003E4u; WF32(ea,c->f[0]);} // 800524E8
  c->r[6]=c->r[6]+0x00000008u; // 800524EC
  W32(c->r[7]+0x000001F8u,c->r[5]); // 800524F0
  W32(c->r[7]+0x000001FCu,c->r[5]); // 800524F4
  c->r[7]=c->r[7]+0x00000010u; // 800524F8
  W16(c->r[8]+0x00000612u,c->r[5]); // 800524FC
  c->r[8]=c->r[8]+0x00000004u; // 80052500
  W8(c->r[4]+0x000005D0u,c->r[5]); // 80052504
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800524AC; } // 80052508
  {uint32_t ea=c->r[2]+0xFFFF8BC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005250C
  c->r[4]=0u+0x00010000u; // 80052510
  c->r[5]=0u+0x00000000u; // 80052514
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80052518
  W32(c->r[3]+0x0000068Cu,c->r[5]); // 8005251C
  W32(c->r[3]+0x00000690u,c->r[5]); // 80052520
  W32(c->r[3]+0x00000694u,c->r[0]); // 80052524
  {uint32_t ea=c->r[3]+0x00000698u; WF32(ea,c->f[0]);} // 80052528
  W32(c->r[3]+0x0000069Cu,c->r[5]); // 8005252C
  W32(c->r[3]+0x000006A0u,c->r[5]); // 80052530
  return; // 80052534
}

// fn_80052538
void f_80052538(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052538
  c->r[0]=c->lr; // 8005253C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80052540
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80052544
  c->r[31]=c->r[5]|c->r[5]; // 80052548
  W32(c->r[1]+0x00000018u,c->r[30]); // 8005254C
  c->r[30]=c->r[4]|c->r[4]; // 80052550
  W32(c->r[1]+0x00000014u,c->r[29]); // 80052554
  c->r[29]=c->r[3]|c->r[3]; // 80052558
  c->lr=0x80052560u; f_80052488(c); // 8005255C
  {uint32_t ea=c->r[2]+0xFFFF8BC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80052560
  c->r[3]=0u+0x00000000u; // 80052564
  c->r[0]=0u+0x00000001u; // 80052568
  W32(c->r[29]+0x0000069Cu,c->r[30]); // 8005256C
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[0]);} // 80052570
  W32(c->r[29]+0x00000694u,c->r[31]); // 80052574
  W32(c->r[29]+0x00000000u,c->r[3]); // 80052578
  W32(c->r[29]+0x000004D8u,c->r[3]); // 8005257C
  W32(c->r[29]+0x00000690u,c->r[0]); // 80052580
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80052584
  c->r[30]=R32(c->r[1]+0x00000018u); // 80052588
  c->r[29]=R32(c->r[1]+0x00000014u); // 8005258C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80052590
  c->lr=c->r[0]; // 80052594
  c->r[1]=c->r[1]+0x00000020u; // 80052598
  return; // 8005259C
}

// fn_800525A0
void f_800525A0(Ctx* __restrict c) {
  f_80052488(c); return; // 800525A0
}

// fn_800525A4
void f_800525A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800525A4
  c->r[0]=c->lr; // 800525A8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800525AC
  c->r[11]=c->r[1]+0x000000B0u; // 800525B0
  c->lr=0x800525B8u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800525B4
  W32(c->r[3]+0x000006A0u,c->r[4]); // 800525B8
  c->r[29]=c->r[3]|c->r[3]; // 800525BC
  c->r[5]=0u+0x0000003Eu; // 800525C0
  c->r[3]=c->r[3]+0x000005D0u; // 800525C4
  c->r[7]=R32(c->r[4]+0x00000034u); // 800525C8
  c->r[6]=R32(c->r[4]+0x00000038u); // 800525CC
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 800525D0
  c->r[4]=0u+0x00000000u; // 800525D4
  W32(c->r[1]+0x00000014u,c->r[7]); // 800525D8
  W32(c->r[1]+0x00000018u,c->r[6]); // 800525DC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800525E0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800525E4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800525E8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800525EC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 800525F0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 800525F4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800525F8
  c->lr=0x80052600u; f_8000443C(c); // 800525FC
  c->r[27]=0u+0x00000000u; // 80052600
  c->r[30]=c->r[29]+0x000000F8u; // 80052604
  W8(c->r[1]+0x00000038u,c->r[27]); // 80052608
  c->r[26]=c->r[29]+0x00000004u; // 8005260C
  c->r[25]=c->r[30]+0x00000004u; // 80052610
  c->r[24]=c->r[29]+0x00000008u; // 80052614
  c->r[23]=c->r[1]+0x00000039u; // 80052618
  c->r[31]=0u+0x00000000u; // 8005261C
  c->r[22]=0u+0x00000001u; // 80052620
  c->r[28]=0u+0x00000001u; // 80052624
  goto L_80052700; // 80052628
L_8005262C:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 8005262C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80052630
  c->r[12]=R32(c->r[12]+0x00000070u); // 80052634
  c->ctr=c->r[12]; // 80052638
  if (true) { c->lr=0x80052640u; dispatch(c,c->ctr); } // 8005263C
  cmps(c,0,(int32_t)c->r[3],0); // 80052640
  if (crb(c,2)) { goto L_800526E8; } // 80052644
  c->r[8]=R32(c->r[26]+0x00000000u); // 80052648
  c->r[3]=c->r[1]+0x0000002Cu; // 8005264C
  c->r[5]=c->r[3]|c->r[3]; // 80052650
  c->r[4]=c->r[1]+0x00000020u; // 80052654
  c->r[7]=R32(c->r[8]+0x00000034u); // 80052658
  c->r[6]=R32(c->r[8]+0x00000038u); // 8005265C
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 80052660
  W32(c->r[1]+0x00000008u,c->r[7]); // 80052664
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80052668
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005266C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80052670
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80052674
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80052678
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 8005267C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80052680
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80052684
  c->lr=0x8005268Cu; f_80164808(c); // 80052688
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8005268C
  c->r[31]=c->r[31]+0x00000001u; // 80052690
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80052694
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80052698
  W8(c->r[23]+0x00000000u,c->r[28]); // 8005269C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800526A0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800526A4
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 800526A8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800526AC
  {uint32_t ea=c->r[29]+0x00000698u; c->f[0]=c->ps1[0]=RF32(ea);} // 800526B0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800526B4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800526B8
  {uint32_t ea=c->r[1]+0x00000078u; WF64(ea,c->f[0]);} // 800526BC
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800526C0
  W32(c->r[24]+0x000001F0u,c->r[0]); // 800526C4
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800526C8
  {uint32_t ea=c->r[29]+0x00000698u; c->f[0]=c->ps1[0]=RF32(ea);} // 800526CC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800526D0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800526D4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[0]);} // 800526D8
  c->r[0]=R32(c->r[1]+0x00000084u); // 800526DC
  W32(c->r[24]+0x000001F4u,c->r[0]); // 800526E0
  goto L_800526EC; // 800526E4
L_800526E8:;
  W8(c->r[23]+0x00000000u,c->r[27]); // 800526E8
L_800526EC:;
  c->r[26]=c->r[26]+0x00000004u; // 800526EC
  c->r[25]=c->r[25]+0x00000004u; // 800526F0
  c->r[24]=c->r[24]+0x00000008u; // 800526F4
  c->r[23]=c->r[23]+0x00000001u; // 800526F8
  c->r[22]=c->r[22]+0x00000001u; // 800526FC
L_80052700:;
  c->r[0]=R32(c->r[29]+0x00000690u); // 80052700
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 80052704
  if (crb(c,0)) { IRQCHK(c); goto L_8005262C; } // 80052708
  c->r[3]=c->r[29]+0x00000610u; // 8005270C
  c->r[5]=c->r[1]+0x00000038u; // 80052710
  c->r[8]=0u+0xFFFFFFFFu; // 80052714
  c->r[4]=0u+0xFFFFFFFEu; // 80052718
  c->r[6]=0u+0x00000000u; // 8005271C
  goto L_80052728; // 80052720
L_80052724:;
  W8(c->r[5]+c->r[10],c->r[6]); // 80052724
L_80052728:;
  c->r[4]=c->r[4]+0x00000002u; // 80052728
  c->r[8]=c->r[8]+0x00000001u; // 8005272C
  c->r[10]=R16(c->r[3]+c->r[4]); // 80052730
  c->r[0]=R8(c->r[5]+c->r[10]); // 80052734
  cmps(c,0,(int32_t)c->r[0],0); // 80052738
  if (!crb(c,2)) { IRQCHK(c); goto L_80052724; } // 8005273C
  c->r[11]=R32(c->r[29]+0x0000068Cu); // 80052740
  c->r[9]=c->r[8]+0xFFFFFFFFu; // 80052744
  {uint32_t ea=c->r[2]+0xFFFF8BB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80052748
  c->r[6]=c->r[1]+0x00000038u; // 8005274C
  c->r[7]=0u+0x00000000u; // 80052750
  goto L_80052794; // 80052754
L_80052758:;
  c->r[0]=rotl(c->r[10],2)&0x0003FFFCu; // 80052758
  c->r[5]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8005275C
  {uint32_t ea=c->r[30]+c->r[0]; WF32(ea,c->f[0]);} // 80052760
  c->r[4]=rotl(c->r[9],1)&0xFFFFFFFEu; // 80052764
  goto L_8005277C; // 80052768
L_8005276C:;
  c->r[4]=c->r[4]+0x00000002u; // 8005276C
  W8(c->r[6]+c->r[10],c->r[7]); // 80052770
  c->r[9]=c->r[9]+0x00000001u; // 80052774
  W16(c->r[3]+c->r[4],c->r[10]); // 80052778
L_8005277C:;
  c->r[5]=c->r[5]+0x00000002u; // 8005277C
  c->r[8]=c->r[8]+0x00000001u; // 80052780
  c->r[10]=R16(c->r[3]+c->r[5]); // 80052784
  c->r[0]=R8(c->r[6]+c->r[10]); // 80052788
  cmps(c,0,(int32_t)c->r[0],0); // 8005278C
  if (!crb(c,2)) { IRQCHK(c); goto L_8005276C; } // 80052790
L_80052794:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[11]); // 80052794
  if (crb(c,0)) { IRQCHK(c); goto L_80052758; } // 80052798
  c->r[0]=rotl(c->r[9],1)&0xFFFFFFFEu; // 8005279C
  c->r[5]=c->r[1]+0x00000038u; // 800527A0
  c->r[6]=c->r[3]+c->r[0]; // 800527A4
  c->r[7]=0u+0x00000000u; // 800527A8
  goto L_800527C8; // 800527AC
L_800527B0:;
  c->r[4]=c->r[5]+c->r[7]; // 800527B0
L_800527B4:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 800527B4
  c->r[7]=c->r[7]+0x00000001u; // 800527B8
  cmps(c,0,(int32_t)c->r[0],0); // 800527BC
  if (crb(c,2)) { IRQCHK(c); goto L_800527B4; } // 800527C0
  W16(c->r[6]+0x00000000u,c->r[7]); // 800527C4
L_800527C8:;
  c->r[9]=c->r[9]+0x00000001u; // 800527C8
  c->r[6]=c->r[6]+0x00000002u; // 800527CC
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[31]); // 800527D0
  if (crb(c,0)) { IRQCHK(c); goto L_800527B0; } // 800527D4
  c->r[9]=c->r[9]+0xFFFFFFFFu; // 800527D8
  c->r[0]=0u+0x00000000u; // 800527DC
  c->r[4]=rotl(c->r[9],1)&0xFFFFFFFEu; // 800527E0
  c->r[4]=c->r[3]+c->r[4]; // 800527E4
  goto L_800527F0; // 800527E8
L_800527EC:;
  W16(c->r[4]+0x00000000u,c->r[0]); // 800527EC
L_800527F0:;
  c->r[9]=c->r[9]+0x00000001u; // 800527F0
  c->r[4]=c->r[4]+0x00000002u; // 800527F4
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[11]); // 800527F8
  if (crb(c,0)) { IRQCHK(c); goto L_800527EC; } // 800527FC
  c->r[7]=c->r[31]+0xFFFFFFFFu; // 80052800
  W32(c->r[29]+0x0000068Cu,c->r[31]); // 80052804
  c->r[4]=rotl(c->r[7],1)&0xFFFFFFFEu; // 80052808
  c->r[0]=R16(c->r[3]+c->r[4]); // 8005280C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80052810
  {uint32_t ea=c->r[30]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 80052814
  goto L_80052820; // 80052818
L_8005281C:;
  c->f[2]=c->f[1]; // 8005281C
L_80052820:;
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 80052820
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 80052824
  c->r[0]=R16(c->r[3]+c->r[4]); // 80052828
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8005282C
  {uint32_t ea=c->r[30]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80052830
  fcmp(c,0,c->f[1],c->f[2]); // 80052834
  if (crb(c,0)) { IRQCHK(c); goto L_8005281C; } // 80052838
  c->r[6]=c->r[3]+c->r[4]; // 8005283C
  goto L_800528BC; // 80052840
L_80052844:;
  c->r[9]=c->r[7]+0x00000001u; // 80052844
  c->r[8]=R16(c->r[6]+0x00000000u); // 80052848
  c->r[4]=rotl(c->r[9],1)&0xFFFFFFFEu; // 8005284C
  c->r[0]=R16(c->r[3]+c->r[4]); // 80052850
  c->r[5]=c->r[3]+c->r[4]; // 80052854
  W16(c->r[6]+0x00000000u,c->r[0]); // 80052858
  goto L_80052868; // 8005285C
L_80052860:;
  c->r[0]=R16(c->r[5]+0x00000000u); // 80052860
  W16(c->r[5]+0xFFFFFFFEu,c->r[0]); // 80052864
L_80052868:;
  c->r[4]=c->r[4]+0x00000002u; // 80052868
  c->r[5]=c->r[5]+0x00000002u; // 8005286C
  c->r[0]=R16(c->r[3]+c->r[4]); // 80052870
  c->r[9]=c->r[9]+0x00000001u; // 80052874
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80052878
  {uint32_t ea=c->r[30]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8005287C
  fcmp(c,0,c->f[0],c->f[1]); // 80052880
  if (crb(c,0)) { IRQCHK(c); goto L_80052860; } // 80052884
  c->r[5]=c->r[3]+c->r[4]; // 80052888
  c->r[4]=rotl(c->r[7],1)&0xFFFFFFFEu; // 8005288C
  W16(c->r[5]+0xFFFFFFFEu,c->r[8]); // 80052890
  goto L_8005289C; // 80052894
L_80052898:;
  c->f[2]=c->f[1]; // 80052898
L_8005289C:;
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 8005289C
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 800528A0
  c->r[0]=R16(c->r[3]+c->r[4]); // 800528A4
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800528A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800528AC
  {uint32_t ea=c->r[30]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 800528B0
  fcmp(c,0,c->f[1],c->f[2]); // 800528B4
  if (crb(c,0)) { IRQCHK(c); goto L_80052898; } // 800528B8
L_800528BC:;
  cmps(c,0,(int32_t)c->r[7],0); // 800528BC
  if (!crb(c,0)) { IRQCHK(c); goto L_80052844; } // 800528C0
  c->r[28]=c->r[29]|c->r[29]; // 800528C4
  c->r[23]=0u+0x00000000u; // 800528C8
  goto L_80052918; // 800528CC
L_800528D0:;
  c->r[0]=R16(c->r[28]+0x00000610u); // 800528D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800528D4
  c->r[27]=R32(c->r[29]+c->r[0]); // 800528D8
  cmps(c,0,(int32_t)c->r[27],0); // 800528DC
  if (crb(c,2)) { goto L_80052910; } // 800528E0
  c->r[12]=R32(c->r[27]+0x00000000u); // 800528E4
  c->r[3]=c->r[27]|c->r[27]; // 800528E8
  c->r[12]=R32(c->r[12]+0x00000070u); // 800528EC
  c->ctr=c->r[12]; // 800528F0
  if (true) { c->lr=0x800528F8u; dispatch(c,c->ctr); } // 800528F4
  cmps(c,0,(int32_t)c->r[3],0); // 800528F8
  if (crb(c,2)) { goto L_80052910; } // 800528FC
  c->r[0]=R32(c->r[29]+0x0000069Cu); // 80052900
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80052904
  c->r[3]=c->r[27]+c->r[0]; // 80052908
  W32(c->r[3]+0x00000070u,c->r[23]); // 8005290C
L_80052910:;
  c->r[28]=c->r[28]+0x00000002u; // 80052910
  c->r[23]=c->r[23]+0x00000001u; // 80052914
L_80052918:;
  c->r[0]=R32(c->r[29]+0x00000690u); // 80052918
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 8005291C
  if (crb(c,0)) { IRQCHK(c); goto L_800528D0; } // 80052920
  c->r[11]=c->r[1]+0x000000B0u; // 80052924
  c->lr=0x8005292Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80052928
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8005292C
  c->lr=c->r[0]; // 80052930
  c->r[1]=c->r[1]+0x000000B0u; // 80052934
  return; // 80052938
}

// fn_8005293C
void f_8005293C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 8005293C
  if (!crb(c,2)) { goto L_8005294C; } // 80052940
  c->r[3]=0u+0xFFFFFFFFu; // 80052944
  return; // 80052948
L_8005294C:;
  c->r[0]=R32(c->r[3]+0x00000694u); // 8005294C
  c->r[0]=c->r[0]&c->r[5]; cr0(c,c->r[0]); // 80052950
  if (!crb(c,2)) { goto L_80052960; } // 80052954
  c->r[3]=0u+0xFFFFFFFFu; // 80052958
  return; // 8005295C
L_80052960:;
  c->r[6]=R32(c->r[3]+0x00000690u); // 80052960
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80052964
  W32(c->r[3]+c->r[0],c->r[4]); // 80052968
  c->r[4]=c->r[3]+c->r[0]; // 8005296C
  W32(c->r[4]+0x000004D8u,c->r[5]); // 80052970
  c->r[4]=R32(c->r[3]+0x00000690u); // 80052974
  c->r[0]=c->r[4]+0x00000001u; // 80052978
  W32(c->r[3]+0x00000690u,c->r[0]); // 8005297C
  c->r[3]=c->r[6]|c->r[6]; // 80052980
  return; // 80052984
}

// fn_80052988
void f_80052988(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052988
  c->r[0]=c->lr; // 8005298C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052990
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052994
  c->r[31]=0u+0x80340000u; // 80052998
  c->r[31]=c->r[31]+0xFFFFD110u; // 8005299C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800529A0
  c->r[3]=c->r[31]|c->r[31]; // 800529A4
  c->lr=0x800529ACu; f_80051B08(c); // 800529A8
  c->r[30]=0u+0x00000000u; // 800529AC
L_800529B0:;
  c->r[3]=0u+0x00000000u; // 800529B0
  c->lr=0x800529B8u; f_80059E48(c); // 800529B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800529B8
  c->r[4]=c->r[30]|c->r[30]; // 800529BC
  c->r[12]=R32(c->r[12]+0x00000034u); // 800529C0
  c->ctr=c->r[12]; // 800529C4
  if (true) { c->lr=0x800529CCu; dispatch(c,c->ctr); } // 800529C8
  c->r[4]=c->r[3]|c->r[3]; // 800529CC
  c->r[3]=c->r[31]|c->r[31]; // 800529D0
  c->r[5]=0u+0x00000001u; // 800529D4
  c->lr=0x800529DCu; f_80052164(c); // 800529D8
  c->r[30]=c->r[30]+0x00000001u; // 800529DC
  cmps(c,0,(int32_t)c->r[30],24); // 800529E0
  if (crb(c,0)) { IRQCHK(c); goto L_800529B0; } // 800529E4
  c->r[30]=0u+0x00000000u; // 800529E8
L_800529EC:;
  c->r[3]=c->r[30]|c->r[30]; // 800529EC
  c->lr=0x800529F4u; f_80059E20(c); // 800529F0
  c->r[4]=c->r[3]|c->r[3]; // 800529F4
  c->r[3]=c->r[31]|c->r[31]; // 800529F8
  c->r[5]=0u+0x00000002u; // 800529FC
  c->lr=0x80052A04u; f_80052164(c); // 80052A00
  c->r[30]=c->r[30]+0x00000001u; // 80052A04
  cmps(c,0,(int32_t)c->r[30],4); // 80052A08
  if (crb(c,0)) { IRQCHK(c); goto L_800529EC; } // 80052A0C
  c->r[30]=0u+0x00000000u; // 80052A10
L_80052A14:;
  c->r[3]=c->r[30]|c->r[30]; // 80052A14
  c->lr=0x80052A1Cu; f_80076064(c); // 80052A18
  c->r[4]=c->r[3]|c->r[3]; // 80052A1C
  c->r[3]=c->r[31]|c->r[31]; // 80052A20
  c->r[5]=0u+0x00000004u; // 80052A24
  c->lr=0x80052A2Cu; f_80052164(c); // 80052A28
  c->r[30]=c->r[30]+0x00000001u; // 80052A2C
  cmps(c,0,(int32_t)c->r[30],32); // 80052A30
  if (crb(c,0)) { IRQCHK(c); goto L_80052A14; } // 80052A34
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052A38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052A3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80052A40
  c->lr=c->r[0]; // 80052A44
  c->r[1]=c->r[1]+0x00000010u; // 80052A48
  return; // 80052A4C
}

// fn_80052A50
void f_80052A50(Ctx* __restrict c) {
  c->r[8]=R32(c->r[13]+0xFFFFA318u); // 80052A50
  cmps(c,0,(int32_t)c->r[8],16); // 80052A54
  if (!crb(c,0)) { goto L_80052A88; } // 80052A58
  c->r[7]=0u+0x80340000u; // 80052A5C
  c->r[6]=0u+0x80340000u; // 80052A60
  c->r[5]=c->r[8]+0x00000001u; // 80052A64
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80052A68
  c->r[7]=c->r[7]+0xFFFFD488u; // 80052A6C
  c->r[6]=c->r[6]+0xFFFFD4C8u; // 80052A70
  W32(c->r[7]+c->r[0],c->r[3]); // 80052A74
  c->r[3]=c->r[5]+0xFFFFFFFFu; // 80052A78
  W32(c->r[6]+c->r[0],c->r[4]); // 80052A7C
  W32(c->r[13]+0xFFFFA318u,c->r[5]); // 80052A80
  return; // 80052A84
L_80052A88:;
  c->r[3]=0u+0xFFFFFFFFu; // 80052A88
  return; // 80052A8C
}

// fn_80052A90
void f_80052A90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052A90
  c->r[0]=c->lr; // 80052A94
  W32(c->r[1]+0x00000024u,c->r[0]); // 80052A98
  c->r[11]=c->r[1]+0x00000020u; // 80052A9C
  c->lr=0x80052AA4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80052AA0
  c->r[3]=0u+0x80340000u; // 80052AA4
  c->r[26]=0u+0x00000000u; // 80052AA8
  c->r[3]=c->r[3]+0xFFFFD110u; // 80052AAC
  c->r[30]=c->r[3]+0x000003B8u; // 80052AB0
  c->r[29]=c->r[3]+0x00000378u; // 80052AB4
  c->r[28]=c->r[3]+0x000003F8u; // 80052AB8
  c->r[27]=c->r[3]+0x00000000u; // 80052ABC
  goto L_80052B08; // 80052AC0
L_80052AC4:;
  c->r[31]=R32(c->r[29]+0x00000000u); // 80052AC4
  c->r[3]=c->r[27]|c->r[27]; // 80052AC8
  c->r[5]=R32(c->r[30]+0x00000000u); // 80052ACC
  c->r[4]=c->r[31]|c->r[31]; // 80052AD0
  c->lr=0x80052AD8u; f_80052164(c); // 80052AD4
  W32(c->r[28]+0x00000000u,c->r[3]); // 80052AD8
  c->r[4]=c->r[3]|c->r[3]; // 80052ADC
  c->r[3]=c->r[31]|c->r[31]; // 80052AE0
  c->r[5]=0u+0x00000000u; // 80052AE4
  c->r[12]=R32(c->r[31]+0x00000000u); // 80052AE8
  c->r[12]=R32(c->r[12]+0x00000084u); // 80052AEC
  c->ctr=c->r[12]; // 80052AF0
  if (true) { c->lr=0x80052AF8u; dispatch(c,c->ctr); } // 80052AF4
  c->r[30]=c->r[30]+0x00000004u; // 80052AF8
  c->r[29]=c->r[29]+0x00000004u; // 80052AFC
  c->r[28]=c->r[28]+0x00000004u; // 80052B00
  c->r[26]=c->r[26]+0x00000001u; // 80052B04
L_80052B08:;
  c->r[0]=R32(c->r[13]+0xFFFFA318u); // 80052B08
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 80052B0C
  if (crb(c,0)) { IRQCHK(c); goto L_80052AC4; } // 80052B10
  c->r[0]=0u+0x00000000u; // 80052B14
  c->r[11]=c->r[1]+0x00000020u; // 80052B18
  W32(c->r[13]+0xFFFFA318u,c->r[0]); // 80052B1C
  c->lr=0x80052B24u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80052B20
  c->r[0]=R32(c->r[1]+0x00000024u); // 80052B24
  c->lr=c->r[0]; // 80052B28
  c->r[1]=c->r[1]+0x00000020u; // 80052B2C
  return; // 80052B30
}

// fn_80052B34
void f_80052B34(Ctx* __restrict c) {
  c->r[3]=0u+0x80340000u; // 80052B34
  c->r[3]=c->r[3]+0xFFFFD110u; // 80052B38
  f_80051C9C(c); return; // 80052B3C
}

// fn_80052B40
void f_80052B40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052B40
  c->r[0]=c->lr; // 80052B44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052B48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052B4C
  c->lr=0x80052B54u; f_8004E0B4(c); // 80052B50
  c->r[31]=0u+0x80340000u; // 80052B54
  c->r[4]=0u+0x00000000u; // 80052B58
  c->r[31]=c->r[31]+0xFFFFD110u; // 80052B5C
  c->lr=0x80052B64u; f_8004E07C(c); // 80052B60
  cmps(c,0,(int32_t)c->r[3],0); // 80052B64
  c->r[4]=c->r[3]|c->r[3]; // 80052B68
  if (crb(c,2)) { goto L_80052B78; } // 80052B6C
  c->r[3]=c->r[31]|c->r[31]; // 80052B70
  c->lr=0x80052B78u; f_80051E1C(c); // 80052B74
L_80052B78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052B78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052B7C
  c->lr=c->r[0]; // 80052B80
  c->r[1]=c->r[1]+0x00000010u; // 80052B84
  return; // 80052B88
}

// fn_80052B8C
void f_80052B8C(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)884); // 80052B8C
  c->r[3]=0u+0x80340000u; // 80052B90
  c->r[3]=c->r[3]+0xFFFFD110u; // 80052B94
  c->r[3]=c->r[3]+c->r[0]; // 80052B98
  return; // 80052B9C
}

// fn_80052BA0
void f_80052BA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052BA0
  c->r[0]=c->lr; // 80052BA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80052BA8
  c->r[11]=c->r[1]+0x00000020u; // 80052BAC
  c->lr=0x80052BB4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80052BB0
  c->r[30]=0u+0x80340000u; // 80052BB4
  c->r[27]=0u+0x00000000u; // 80052BB8
  c->r[30]=c->r[30]+0xFFFFD548u; // 80052BBC
  c->r[29]=0u+0x00000000u; // 80052BC0
  c->r[31]=0u+0x00010000u; // 80052BC4
L_80052BC8:;
  c->r[3]=c->r[30]|c->r[30]; // 80052BC8
  c->r[4]=c->r[27]|c->r[27]; // 80052BCC
  c->r[5]=c->r[31]+0xFFFFFFFFu; // 80052BD0
  c->lr=0x80052BD8u; f_80052538(c); // 80052BD4
  c->r[28]=0u+0x00000000u; // 80052BD8
L_80052BDC:;
  c->r[3]=0u+0x00000000u; // 80052BDC
  c->lr=0x80052BE4u; f_80059E48(c); // 80052BE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80052BE4
  c->r[4]=c->r[28]|c->r[28]; // 80052BE8
  c->r[12]=R32(c->r[12]+0x00000034u); // 80052BEC
  c->ctr=c->r[12]; // 80052BF0
  if (true) { c->lr=0x80052BF8u; dispatch(c,c->ctr); } // 80052BF4
  c->r[4]=c->r[3]|c->r[3]; // 80052BF8
  c->r[3]=c->r[30]|c->r[30]; // 80052BFC
  c->r[5]=0u+0x00000001u; // 80052C00
  c->lr=0x80052C08u; f_8005293C(c); // 80052C04
  c->r[28]=c->r[28]+0x00000001u; // 80052C08
  cmps(c,0,(int32_t)c->r[28],24); // 80052C0C
  if (crb(c,0)) { IRQCHK(c); goto L_80052BDC; } // 80052C10
  c->r[28]=0u+0x00000000u; // 80052C14
L_80052C18:;
  c->r[3]=c->r[28]|c->r[28]; // 80052C18
  c->lr=0x80052C20u; f_80059E20(c); // 80052C1C
  c->r[4]=c->r[3]|c->r[3]; // 80052C20
  c->r[3]=c->r[30]|c->r[30]; // 80052C24
  c->r[5]=0u+0x00000002u; // 80052C28
  c->lr=0x80052C30u; f_8005293C(c); // 80052C2C
  c->r[28]=c->r[28]+0x00000001u; // 80052C30
  cmps(c,0,(int32_t)c->r[28],4); // 80052C34
  if (crb(c,0)) { IRQCHK(c); goto L_80052C18; } // 80052C38
  c->r[28]=0u+0x00000000u; // 80052C3C
L_80052C40:;
  c->r[3]=c->r[28]|c->r[28]; // 80052C40
  c->lr=0x80052C48u; f_80076064(c); // 80052C44
  c->r[4]=c->r[3]|c->r[3]; // 80052C48
  c->r[3]=c->r[30]|c->r[30]; // 80052C4C
  c->r[5]=0u+0x00000004u; // 80052C50
  c->lr=0x80052C58u; f_8005293C(c); // 80052C54
  c->r[28]=c->r[28]+0x00000001u; // 80052C58
  cmps(c,0,(int32_t)c->r[28],32); // 80052C5C
  if (crb(c,0)) { IRQCHK(c); goto L_80052C40; } // 80052C60
  c->r[29]=c->r[29]+0x00000001u; // 80052C64
  c->r[27]=c->r[27]+0x00000001u; // 80052C68
  cmps(c,0,(int32_t)c->r[29],24); // 80052C6C
  c->r[30]=c->r[30]+0x000006A4u; // 80052C70
  if (crb(c,0)) { IRQCHK(c); goto L_80052BC8; } // 80052C74
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)1700); // 80052C78
  c->r[3]=0u+0x80340000u; // 80052C7C
  c->r[29]=0u+0x00000000u; // 80052C80
  c->r[3]=c->r[3]+0xFFFFD548u; // 80052C84
  c->r[30]=c->r[3]+c->r[0]; // 80052C88
  c->r[31]=0u+0x00010000u; // 80052C8C
L_80052C90:;
  c->r[3]=c->r[29]|c->r[29]; // 80052C90
  c->lr=0x80052C98u; f_80059E20(c); // 80052C94
  cmps(c,0,(int32_t)c->r[3],0); // 80052C98
  if (crb(c,2)) { goto L_80052D44; } // 80052C9C
  c->r[3]=c->r[30]|c->r[30]; // 80052CA0
  c->r[4]=c->r[27]|c->r[27]; // 80052CA4
  c->r[5]=c->r[31]+0xFFFFFFFFu; // 80052CA8
  c->lr=0x80052CB0u; f_80052538(c); // 80052CAC
  c->r[28]=0u+0x00000000u; // 80052CB0
L_80052CB4:;
  c->r[3]=0u+0x00000000u; // 80052CB4
  c->lr=0x80052CBCu; f_80059E48(c); // 80052CB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80052CBC
  c->r[4]=c->r[28]|c->r[28]; // 80052CC0
  c->r[12]=R32(c->r[12]+0x00000034u); // 80052CC4
  c->ctr=c->r[12]; // 80052CC8
  if (true) { c->lr=0x80052CD0u; dispatch(c,c->ctr); } // 80052CCC
  c->r[4]=c->r[3]|c->r[3]; // 80052CD0
  c->r[3]=c->r[30]|c->r[30]; // 80052CD4
  c->r[5]=0u+0x00000001u; // 80052CD8
  c->lr=0x80052CE0u; f_8005293C(c); // 80052CDC
  c->r[28]=c->r[28]+0x00000001u; // 80052CE0
  cmps(c,0,(int32_t)c->r[28],24); // 80052CE4
  if (crb(c,0)) { IRQCHK(c); goto L_80052CB4; } // 80052CE8
  c->r[28]=0u+0x00000000u; // 80052CEC
L_80052CF0:;
  c->r[3]=c->r[28]|c->r[28]; // 80052CF0
  c->lr=0x80052CF8u; f_80059E20(c); // 80052CF4
  c->r[4]=c->r[3]|c->r[3]; // 80052CF8
  c->r[3]=c->r[30]|c->r[30]; // 80052CFC
  c->r[5]=0u+0x00000002u; // 80052D00
  c->lr=0x80052D08u; f_8005293C(c); // 80052D04
  c->r[28]=c->r[28]+0x00000001u; // 80052D08
  cmps(c,0,(int32_t)c->r[28],4); // 80052D0C
  if (crb(c,0)) { IRQCHK(c); goto L_80052CF0; } // 80052D10
  c->r[28]=0u+0x00000000u; // 80052D14
L_80052D18:;
  c->r[3]=c->r[28]|c->r[28]; // 80052D18
  c->lr=0x80052D20u; f_80076064(c); // 80052D1C
  c->r[4]=c->r[3]|c->r[3]; // 80052D20
  c->r[3]=c->r[30]|c->r[30]; // 80052D24
  c->r[5]=0u+0x00000004u; // 80052D28
  c->lr=0x80052D30u; f_8005293C(c); // 80052D2C
  c->r[28]=c->r[28]+0x00000001u; // 80052D30
  cmps(c,0,(int32_t)c->r[28],32); // 80052D34
  if (crb(c,0)) { IRQCHK(c); goto L_80052D18; } // 80052D38
  c->r[30]=c->r[30]+0x000006A4u; // 80052D3C
  c->r[27]=c->r[27]+0x00000001u; // 80052D40
L_80052D44:;
  c->r[29]=c->r[29]+0x00000001u; // 80052D44
  cmps(c,0,(int32_t)c->r[29],4); // 80052D48
  if (crb(c,0)) { IRQCHK(c); goto L_80052C90; } // 80052D4C
  c->r[11]=c->r[1]+0x00000020u; // 80052D50
  c->lr=0x80052D58u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80052D54
  c->r[0]=R32(c->r[1]+0x00000024u); // 80052D58
  c->lr=c->r[0]; // 80052D5C
  c->r[1]=c->r[1]+0x00000020u; // 80052D60
  return; // 80052D64
}

// fn_80052D68
void f_80052D68(Ctx* __restrict c) {
  c->r[8]=R32(c->r[13]+0xFFFFA31Cu); // 80052D68
  cmps(c,0,(int32_t)c->r[8],16); // 80052D6C
  if (!crb(c,0)) { goto L_80052DA0; } // 80052D70
  c->r[7]=0u+0x80350000u; // 80052D74
  c->r[6]=0u+0x80350000u; // 80052D78
  c->r[5]=c->r[8]+0x00000001u; // 80052D7C
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80052D80
  c->r[7]=c->r[7]+0xFFFF95E0u; // 80052D84
  c->r[6]=c->r[6]+0xFFFF9620u; // 80052D88
  W32(c->r[7]+c->r[0],c->r[3]); // 80052D8C
  c->r[3]=c->r[5]+0xFFFFFFFFu; // 80052D90
  W32(c->r[6]+c->r[0],c->r[4]); // 80052D94
  W32(c->r[13]+0xFFFFA31Cu,c->r[5]); // 80052D98
  return; // 80052D9C
L_80052DA0:;
  c->r[3]=0u+0xFFFFFFFFu; // 80052DA0
  return; // 80052DA4
}

// fn_80052DA8
void f_80052DA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052DA8
  c->r[0]=c->lr; // 80052DAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80052DB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80052DB4
  c->r[31]=0u+0x80350000u; // 80052DB8
  c->r[31]=c->r[31]+0xFFFF9620u; // 80052DBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80052DC0
  c->r[30]=0u+0x80350000u; // 80052DC4
  c->r[30]=c->r[30]+0xFFFF95E0u; // 80052DC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80052DCC
  c->r[29]=0u+0x80350000u; // 80052DD0
  c->r[29]=c->r[29]+0xFFFF9660u; // 80052DD4
  W32(c->r[1]+0x00000010u,c->r[28]); // 80052DD8
  c->r[28]=0u+0x00000000u; // 80052DDC
  goto L_80052E04; // 80052DE0
L_80052DE4:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 80052DE4
  c->r[3]=c->r[29]|c->r[29]; // 80052DE8
  c->r[5]=R32(c->r[31]+0x00000000u); // 80052DEC
  c->lr=0x80052DF4u; f_80052E38(c); // 80052DF0
  c->r[31]=c->r[31]+0x00000004u; // 80052DF4
  c->r[30]=c->r[30]+0x00000004u; // 80052DF8
  c->r[29]=c->r[29]+0x00000074u; // 80052DFC
  c->r[28]=c->r[28]+0x00000001u; // 80052E00
L_80052E04:;
  c->r[0]=R32(c->r[13]+0xFFFFA31Cu); // 80052E04
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80052E08
  if (crb(c,0)) { IRQCHK(c); goto L_80052DE4; } // 80052E0C
  c->r[0]=0u+0x00000000u; // 80052E10
  W32(c->r[13]+0xFFFFA31Cu,c->r[0]); // 80052E14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80052E18
  c->r[30]=R32(c->r[1]+0x00000018u); // 80052E1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80052E20
  c->r[28]=R32(c->r[1]+0x00000010u); // 80052E24
  c->r[0]=R32(c->r[1]+0x00000024u); // 80052E28
  c->lr=c->r[0]; // 80052E2C
  c->r[1]=c->r[1]+0x00000020u; // 80052E30
  return; // 80052E34
}

// fn_80052E38
void f_80052E38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052E38
  c->r[0]=c->lr; // 80052E3C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80052E40
  c->r[11]=c->r[1]+0x00000030u; // 80052E44
  c->lr=0x80052E4Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80052E48
  c->r[25]=c->r[3]|c->r[3]; // 80052E4C
  c->r[30]=0u+0x80340000u; // 80052E50
  c->r[26]=c->r[4]|c->r[4]; // 80052E54
  c->r[27]=c->r[5]|c->r[5]; // 80052E58
  c->r[31]=c->r[25]|c->r[25]; // 80052E5C
  c->r[30]=c->r[30]+0xFFFFD548u; // 80052E60
  c->r[28]=0u+0x00000000u; // 80052E64
  c->r[29]=0u+0x00000000u; // 80052E68
L_80052E6C:;
  c->r[3]=0u+0x00000000u; // 80052E6C
  c->lr=0x80052E74u; f_80059E48(c); // 80052E70
  c->r[12]=R32(c->r[3]+0x00000000u); // 80052E74
  c->r[4]=c->r[29]|c->r[29]; // 80052E78
  c->r[12]=R32(c->r[12]+0x00000034u); // 80052E7C
  c->ctr=c->r[12]; // 80052E80
  if (true) { c->lr=0x80052E88u; dispatch(c,c->ctr); } // 80052E84
  cmps(c,0,(int32_t)c->r[3],0); // 80052E88
  if (crb(c,2)) { goto L_80052ECC; } // 80052E8C
  c->r[3]=c->r[30]|c->r[30]; // 80052E90
  c->r[4]=c->r[26]|c->r[26]; // 80052E94
  c->r[5]=c->r[27]|c->r[27]; // 80052E98
  c->lr=0x80052EA0u; f_8005293C(c); // 80052E9C
  W32(c->r[31]+0x00000000u,c->r[3]); // 80052EA0
  c->r[4]=c->r[3]|c->r[3]; // 80052EA4
  c->r[3]=c->r[26]|c->r[26]; // 80052EA8
  c->r[5]=c->r[28]|c->r[28]; // 80052EAC
  c->r[12]=R32(c->r[26]+0x00000000u); // 80052EB0
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 80052EB4
  c->ctr=c->r[12]; // 80052EB8
  if (true) { c->lr=0x80052EC0u; dispatch(c,c->ctr); } // 80052EBC
  c->r[30]=c->r[30]+0x000006A4u; // 80052EC0
  c->r[31]=c->r[31]+0x00000004u; // 80052EC4
  c->r[28]=c->r[28]+0x00000001u; // 80052EC8
L_80052ECC:;
  c->r[29]=c->r[29]+0x00000001u; // 80052ECC
  cmps(c,0,(int32_t)c->r[29],24); // 80052ED0
  if (crb(c,0)) { IRQCHK(c); goto L_80052E6C; } // 80052ED4
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)1700); // 80052ED8
  c->r[3]=0u+0x80340000u; // 80052EDC
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80052EE0
  c->r[3]=c->r[3]+0xFFFFD548u; // 80052EE4
  c->r[31]=c->r[3]+c->r[4]; // 80052EE8
  c->r[30]=c->r[25]+c->r[0]; // 80052EEC
  c->r[29]=0u+0x00000000u; // 80052EF0
L_80052EF4:;
  c->r[3]=c->r[29]|c->r[29]; // 80052EF4
  c->lr=0x80052EFCu; f_80059E20(c); // 80052EF8
  cmps(c,0,(int32_t)c->r[3],0); // 80052EFC
  if (crb(c,2)) { goto L_80052F40; } // 80052F00
  c->r[3]=c->r[31]|c->r[31]; // 80052F04
  c->r[4]=c->r[26]|c->r[26]; // 80052F08
  c->r[5]=c->r[27]|c->r[27]; // 80052F0C
  c->lr=0x80052F14u; f_8005293C(c); // 80052F10
  W32(c->r[30]+0x00000000u,c->r[3]); // 80052F14
  c->r[4]=c->r[3]|c->r[3]; // 80052F18
  c->r[3]=c->r[26]|c->r[26]; // 80052F1C
  c->r[5]=c->r[28]|c->r[28]; // 80052F20
  c->r[12]=R32(c->r[26]+0x00000000u); // 80052F24
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 80052F28
  c->ctr=c->r[12]; // 80052F2C
  if (true) { c->lr=0x80052F34u; dispatch(c,c->ctr); } // 80052F30
  c->r[31]=c->r[31]+0x000006A4u; // 80052F34
  c->r[30]=c->r[30]+0x00000004u; // 80052F38
  c->r[28]=c->r[28]+0x00000001u; // 80052F3C
L_80052F40:;
  c->r[29]=c->r[29]+0x00000001u; // 80052F40
  cmps(c,0,(int32_t)c->r[29],4); // 80052F44
  if (crb(c,0)) { IRQCHK(c); goto L_80052EF4; } // 80052F48
  c->r[11]=c->r[1]+0x00000030u; // 80052F4C
  c->lr=0x80052F54u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80052F50
  c->r[0]=R32(c->r[1]+0x00000034u); // 80052F54
  c->lr=c->r[0]; // 80052F58
  c->r[1]=c->r[1]+0x00000030u; // 80052F5C
  return; // 80052F60
}

// fn_80052F64
void f_80052F64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052F64
  c->r[0]=c->lr; // 80052F68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052F6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052F70
  c->r[31]=0u+0x80340000u; // 80052F74
  c->r[31]=c->r[31]+0xFFFFD548u; // 80052F78
  W32(c->r[1]+0x00000008u,c->r[30]); // 80052F7C
  c->r[30]=0u+0x00000000u; // 80052F80
L_80052F84:;
  c->r[3]=c->r[31]|c->r[31]; // 80052F84
  c->lr=0x80052F8Cu; f_800525A0(c); // 80052F88
  c->r[30]=c->r[30]+0x00000001u; // 80052F8C
  c->r[31]=c->r[31]+0x000006A4u; // 80052F90
  cmps(c,0,(int32_t)c->r[30],29); // 80052F94
  if (crb(c,0)) { IRQCHK(c); goto L_80052F84; } // 80052F98
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052F9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052FA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80052FA4
  c->lr=c->r[0]; // 80052FA8
  c->r[1]=c->r[1]+0x00000010u; // 80052FAC
  return; // 80052FB0
}

// fn_80052FB4
void f_80052FB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052FB4
  c->r[0]=c->lr; // 80052FB8
  c->r[3]=0u+0x00000000u; // 80052FBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80052FC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80052FC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80052FC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80052FCC
  c->lr=0x80052FD4u; f_80059E48(c); // 80052FD0
  c->r[31]=0u+0x80340000u; // 80052FD4
  c->r[29]=c->r[3]|c->r[3]; // 80052FD8
  c->r[31]=c->r[31]+0xFFFFD548u; // 80052FDC
  c->r[30]=0u+0x00000000u; // 80052FE0
L_80052FE4:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 80052FE4
  c->r[3]=c->r[29]|c->r[29]; // 80052FE8
  c->r[4]=c->r[30]|c->r[30]; // 80052FEC
  c->r[12]=R32(c->r[12]+0x00000034u); // 80052FF0
  c->ctr=c->r[12]; // 80052FF4
  if (true) { c->lr=0x80052FFCu; dispatch(c,c->ctr); } // 80052FF8
  cmps(c,0,(int32_t)c->r[3],0); // 80052FFC
  c->r[4]=c->r[3]|c->r[3]; // 80053000
  if (crb(c,2)) { goto L_80053010; } // 80053004
  c->r[3]=c->r[31]|c->r[31]; // 80053008
  c->lr=0x80053010u; f_800525A4(c); // 8005300C
L_80053010:;
  c->r[30]=c->r[30]+0x00000001u; // 80053010
  c->r[31]=c->r[31]+0x000006A4u; // 80053014
  cmps(c,0,(int32_t)c->r[30],24); // 80053018
  if (crb(c,0)) { IRQCHK(c); goto L_80052FE4; } // 8005301C
  c->r[3]=0u+0x00000000u; // 80053020
  c->lr=0x80053028u; f_80059E5C(c); // 80053024
  c->r[4]=0u+0x80340000u; // 80053028
  c->r[29]=c->r[3]|c->r[3]; // 8005302C
  c->r[4]=c->r[4]+0xFFFFD548u; // 80053030
  c->r[30]=0u+0x00000000u; // 80053034
  c->r[31]=c->r[4]+0x00010000u; // 80053038
  c->r[31]=c->r[31]+0xFFFF9F60u; // 8005303C
L_80053040:;
  c->r[3]=c->r[29]|c->r[29]; // 80053040
  c->r[4]=c->r[30]|c->r[30]; // 80053044
  c->lr=0x8005304Cu; f_800597F4(c); // 80053048
  cmps(c,0,(int32_t)c->r[3],0); // 8005304C
  c->r[4]=c->r[3]|c->r[3]; // 80053050
  if (crb(c,2)) { goto L_80053064; } // 80053054
  c->r[3]=c->r[31]|c->r[31]; // 80053058
  c->lr=0x80053060u; f_800525A4(c); // 8005305C
  c->r[31]=c->r[31]+0x000006A4u; // 80053060
L_80053064:;
  c->r[30]=c->r[30]+0x00000001u; // 80053064
  cmps(c,0,(int32_t)c->r[30],4); // 80053068
  if (crb(c,0)) { IRQCHK(c); goto L_80053040; } // 8005306C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80053070
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80053074
  c->r[30]=R32(c->r[1]+0x00000018u); // 80053078
  c->r[29]=R32(c->r[1]+0x00000014u); // 8005307C
  c->lr=c->r[0]; // 80053080
  c->r[1]=c->r[1]+0x00000020u; // 80053084
  return; // 80053088
}

// fn_8005308C
void f_8005308C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005308C
  c->r[0]=c->lr; // 80053090
  c->r[3]=0u+0x80340000u; // 80053094
  W32(c->r[1]+0x00000014u,c->r[0]); // 80053098
  c->r[3]=c->r[3]+0xFFFFD110u; // 8005309C
  c->lr=0x800530A4u; f_80051988(c); // 800530A0
  c->r[3]=0u+0x80340000u; // 800530A4
  c->r[4]=0u+0x80050000u; // 800530A8
  c->r[3]=c->r[3]+0xFFFFD548u; // 800530AC
  c->r[5]=0u+0x00000000u; // 800530B0
  c->r[4]=c->r[4]+0x00002458u; // 800530B4
  c->r[6]=0u+0x000006A4u; // 800530B8
  c->r[7]=0u+0x0000001Du; // 800530BC
  c->lr=0x800530C4u; f_802528E4(c); // 800530C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800530C4
  c->lr=c->r[0]; // 800530C8
  c->r[1]=c->r[1]+0x00000010u; // 800530CC
  return; // 800530D0
}

// fn_800530D4
void f_800530D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800530D4
  c->r[0]=c->lr; // 800530D8
  c->r[12]=0u+0x802B0000u; // 800530DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800530E0
  c->r[12]=c->r[12]+0xFFFFDBB0u; // 800530E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800530E8
  c->r[31]=c->r[3]|c->r[3]; // 800530EC
  W32(c->r[3]+0x00000000u,c->r[12]); // 800530F0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800530F4
  c->ctr=c->r[12]; // 800530F8
  if (true) { c->lr=0x80053100u; dispatch(c,c->ctr); } // 800530FC
  c->r[3]=c->r[31]|c->r[31]; // 80053100
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80053104
  c->r[0]=R32(c->r[1]+0x00000014u); // 80053108
  c->lr=c->r[0]; // 8005310C
  c->r[1]=c->r[1]+0x00000010u; // 80053110
  return; // 80053114
}

// fn_80053118
void f_80053118(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053118
  c->r[0]=c->lr; // 8005311C
  c->r[4]=0u+0x00000000u; // 80053120
  c->r[5]=0u+0x0000002Cu; // 80053124
  W32(c->r[1]+0x00000014u,c->r[0]); // 80053128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005312C
  c->r[31]=c->r[3]|c->r[3]; // 80053130
  c->r[3]=c->r[3]+0x00000004u; // 80053134
  c->lr=0x8005313Cu; f_8000443C(c); // 80053138
  c->r[0]=0u+0xFFFFFFFFu; // 8005313C
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 80053140
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80053144
  c->r[0]=R32(c->r[1]+0x00000014u); // 80053148
  c->lr=c->r[0]; // 8005314C
  c->r[1]=c->r[1]+0x00000010u; // 80053150
  return; // 80053154
}

// fn_80053158
void f_80053158(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053158
  c->r[0]=c->lr; // 8005315C
  cmps(c,0,(int32_t)c->r[4],1); // 80053160
  W32(c->r[1]+0x00000024u,c->r[0]); // 80053164
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80053168
  c->r[31]=c->r[4]|c->r[4]; // 8005316C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80053170
  c->r[30]=c->r[3]|c->r[3]; // 80053174
  W32(c->r[1]+0x00000014u,c->r[29]); // 80053178
  W32(c->r[1]+0x00000010u,c->r[28]); // 8005317C
  if (crb(c,0)) { goto L_80053768; } // 80053180
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)36); // 80053184
  c->lr=0x8005318Cu; f_800D4420(c); // 80053188
  W32(c->r[30]+0x00000004u,c->r[3]); // 8005318C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80053190
  c->lr=0x80053198u; f_800D4420(c); // 80053194
  c->r[0]=R32(c->r[30]+0x00000004u); // 80053198
  c->r[4]=0u+0x00000000u; // 8005319C
  cmps(c,1,(int32_t)c->r[31],0); // 800531A0
  W32(c->r[30]+0x00000024u,c->r[3]); // 800531A4
  c->r[6]=0u+0x00000000u; // 800531A8
  W32(c->r[30]+0x00000010u,c->r[31]); // 800531AC
  W32(c->r[30]+0x00000008u,c->r[31]); // 800531B0
  W32(c->r[30]+0x00000020u,c->r[4]); // 800531B4
  W32(c->r[30]+0x00000014u,c->r[4]); // 800531B8
  W32(c->r[30]+0x00000018u,c->r[4]); // 800531BC
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800531C0
  W32(c->r[30]+0x00000028u,c->r[4]); // 800531C4
  if (!crb(c,5)) { goto L_80053488; } // 800531C8
  cmps(c,0,(int32_t)c->r[31],8); // 800531CC
  c->r[8]=c->r[31]+0xFFFFFFF8u; // 800531D0
  if (!crb(c,1)) { goto L_80053424; } // 800531D4
  c->r[4]=0u+0x00000000u; // 800531D8
  if (crb(c,4)) { goto L_800531F4; } // 800531DC
  c->r[3]=0u+0x80000000u; // 800531E0
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800531E4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800531E8
  if (crb(c,1)) { goto L_800531F4; } // 800531EC
  c->r[4]=0u+0x00000001u; // 800531F0
L_800531F4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800531F4
  if (crb(c,2)) { goto L_80053424; } // 800531F8
  c->r[7]=c->r[8]+0x00000007u; // 800531FC
  c->r[4]=0u+0x00000000u; // 80053200
  c->r[7]=rotl(c->r[7],29)&0x1FFFFFFFu; // 80053204
  c->r[5]=0u+0x00000000u; // 80053208
  c->r[3]=0u+0x00000000u; // 8005320C
  c->r[0]=0u+0xFFFFFFFFu; // 80053210
  c->ctr=c->r[7]; // 80053214
  cmps(c,0,(int32_t)c->r[8],0); // 80053218
  if (!crb(c,1)) { goto L_80053424; } // 8005321C
L_80053220:;
  c->r[7]=R32(c->r[30]+0x00000004u); // 80053220
  c->r[12]=c->r[6]+0x00000001u; // 80053224
  c->r[11]=c->r[6]+0x00000002u; // 80053228
  c->r[10]=c->r[6]+0x00000003u; // 8005322C
  c->r[7]=c->r[7]+c->r[4]; // 80053230
  c->r[9]=c->r[6]+0x00000004u; // 80053234
  W32(c->r[7]+0x00000010u,c->r[6]); // 80053238
  c->r[8]=c->r[6]+0x00000005u; // 8005323C
  c->r[7]=R32(c->r[30]+0x00000004u); // 80053240
  c->r[7]=c->r[7]+c->r[4]; // 80053244
  W32(c->r[7]+0x0000000Cu,c->r[3]); // 80053248
  c->r[7]=R32(c->r[30]+0x00000004u); // 8005324C
  c->r[7]=c->r[7]+c->r[4]; // 80053250
  W32(c->r[7]+0x00000018u,c->r[3]); // 80053254
  c->r[7]=R32(c->r[30]+0x00000004u); // 80053258
  W32(c->r[7]+c->r[4],c->r[3]); // 8005325C
  c->r[7]=R32(c->r[30]+0x00000024u); // 80053260
  W32(c->r[7]+c->r[5],c->r[0]); // 80053264
  c->r[7]=R32(c->r[30]+0x00000004u); // 80053268
  c->r[7]=c->r[7]+c->r[4]; // 8005326C
  W32(c->r[7]+0x00000034u,c->r[12]); // 80053270
  c->r[7]=R32(c->r[30]+0x00000004u); // 80053274
  c->r[7]=c->r[7]+c->r[4]; // 80053278
  W32(c->r[7]+0x00000030u,c->r[3]); // 8005327C
  c->r[7]=R32(c->r[30]+0x00000004u); // 80053280
  c->r[7]=c->r[7]+c->r[4]; // 80053284
  W32(c->r[7]+0x0000003Cu,c->r[3]); // 80053288
  c->r[7]=R32(c->r[30]+0x00000004u); // 8005328C
  c->r[7]=c->r[7]+c->r[4]; // 80053290
  W32(c->r[7]+0x00000024u,c->r[3]); // 80053294
  c->r[7]=R32(c->r[30]+0x00000024u); // 80053298
  c->r[7]=c->r[7]+c->r[5]; // 8005329C
  W32(c->r[7]+0x00000004u,c->r[0]); // 800532A0
  c->r[7]=R32(c->r[30]+0x00000004u); // 800532A4
  c->r[7]=c->r[7]+c->r[4]; // 800532A8
  W32(c->r[7]+0x00000058u,c->r[11]); // 800532AC
  c->r[7]=R32(c->r[30]+0x00000004u); // 800532B0
  c->r[7]=c->r[7]+c->r[4]; // 800532B4
  W32(c->r[7]+0x00000054u,c->r[3]); // 800532B8
  c->r[7]=R32(c->r[30]+0x00000004u); // 800532BC
  c->r[7]=c->r[7]+c->r[4]; // 800532C0
  W32(c->r[7]+0x00000060u,c->r[3]); // 800532C4
  c->r[7]=R32(c->r[30]+0x00000004u); // 800532C8
  c->r[7]=c->r[7]+c->r[4]; // 800532CC
  W32(c->r[7]+0x00000048u,c->r[3]); // 800532D0
  c->r[7]=R32(c->r[30]+0x00000024u); // 800532D4
  c->r[7]=c->r[7]+c->r[5]; // 800532D8
  W32(c->r[7]+0x00000008u,c->r[0]); // 800532DC
  c->r[7]=R32(c->r[30]+0x00000004u); // 800532E0
  c->r[7]=c->r[7]+c->r[4]; // 800532E4
  W32(c->r[7]+0x0000007Cu,c->r[10]); // 800532E8
  c->r[7]=R32(c->r[30]+0x00000004u); // 800532EC
  c->r[7]=c->r[7]+c->r[4]; // 800532F0
  W32(c->r[7]+0x00000078u,c->r[3]); // 800532F4
  c->r[7]=R32(c->r[30]+0x00000004u); // 800532F8
  c->r[7]=c->r[7]+c->r[4]; // 800532FC
  W32(c->r[7]+0x00000084u,c->r[3]); // 80053300
  c->r[7]=R32(c->r[30]+0x00000004u); // 80053304
  c->r[7]=c->r[7]+c->r[4]; // 80053308
  W32(c->r[7]+0x0000006Cu,c->r[3]); // 8005330C
  c->r[7]=R32(c->r[30]+0x00000024u); // 80053310
  c->r[7]=c->r[7]+c->r[5]; // 80053314
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 80053318
  c->r[7]=R32(c->r[30]+0x00000004u); // 8005331C
  c->r[7]=c->r[7]+c->r[4]; // 80053320
  W32(c->r[7]+0x000000A0u,c->r[9]); // 80053324
  c->r[7]=R32(c->r[30]+0x00000004u); // 80053328
  c->r[7]=c->r[7]+c->r[4]; // 8005332C
  W32(c->r[7]+0x0000009Cu,c->r[3]); // 80053330
  c->r[7]=R32(c->r[30]+0x00000004u); // 80053334
  c->r[7]=c->r[7]+c->r[4]; // 80053338
  W32(c->r[7]+0x000000A8u,c->r[3]); // 8005333C
  c->r[7]=R32(c->r[30]+0x00000004u); // 80053340
  c->r[7]=c->r[7]+c->r[4]; // 80053344
  W32(c->r[7]+0x00000090u,c->r[3]); // 80053348
  c->r[7]=R32(c->r[30]+0x00000024u); // 8005334C
  c->r[7]=c->r[7]+c->r[5]; // 80053350
  W32(c->r[7]+0x00000010u,c->r[0]); // 80053354
  c->r[7]=R32(c->r[30]+0x00000004u); // 80053358
  c->r[7]=c->r[7]+c->r[4]; // 8005335C
  W32(c->r[7]+0x000000C4u,c->r[8]); // 80053360
  c->r[7]=R32(c->r[30]+0x00000004u); // 80053364
  c->r[9]=c->r[6]+0x00000006u; // 80053368
  c->r[8]=c->r[6]+0x00000007u; // 8005336C
  c->r[6]=c->r[6]+0x00000008u; // 80053370
  c->r[7]=c->r[7]+c->r[4]; // 80053374
  W32(c->r[7]+0x000000C0u,c->r[3]); // 80053378
  c->r[7]=R32(c->r[30]+0x00000004u); // 8005337C
  c->r[7]=c->r[7]+c->r[4]; // 80053380
  W32(c->r[7]+0x000000CCu,c->r[3]); // 80053384
  c->r[7]=R32(c->r[30]+0x00000004u); // 80053388
  c->r[7]=c->r[7]+c->r[4]; // 8005338C
  W32(c->r[7]+0x000000B4u,c->r[3]); // 80053390
  c->r[7]=R32(c->r[30]+0x00000024u); // 80053394
  c->r[7]=c->r[7]+c->r[5]; // 80053398
  W32(c->r[7]+0x00000014u,c->r[0]); // 8005339C
  c->r[7]=R32(c->r[30]+0x00000004u); // 800533A0
  c->r[7]=c->r[7]+c->r[4]; // 800533A4
  W32(c->r[7]+0x000000E8u,c->r[9]); // 800533A8
  c->r[7]=R32(c->r[30]+0x00000004u); // 800533AC
  c->r[7]=c->r[7]+c->r[4]; // 800533B0
  W32(c->r[7]+0x000000E4u,c->r[3]); // 800533B4
  c->r[7]=R32(c->r[30]+0x00000004u); // 800533B8
  c->r[7]=c->r[7]+c->r[4]; // 800533BC
  W32(c->r[7]+0x000000F0u,c->r[3]); // 800533C0
  c->r[7]=R32(c->r[30]+0x00000004u); // 800533C4
  c->r[7]=c->r[7]+c->r[4]; // 800533C8
  W32(c->r[7]+0x000000D8u,c->r[3]); // 800533CC
  c->r[7]=R32(c->r[30]+0x00000024u); // 800533D0
  c->r[7]=c->r[7]+c->r[5]; // 800533D4
  W32(c->r[7]+0x00000018u,c->r[0]); // 800533D8
  c->r[7]=R32(c->r[30]+0x00000004u); // 800533DC
  c->r[7]=c->r[7]+c->r[4]; // 800533E0
  W32(c->r[7]+0x0000010Cu,c->r[8]); // 800533E4
  c->r[7]=R32(c->r[30]+0x00000004u); // 800533E8
  c->r[7]=c->r[7]+c->r[4]; // 800533EC
  W32(c->r[7]+0x00000108u,c->r[3]); // 800533F0
  c->r[7]=R32(c->r[30]+0x00000004u); // 800533F4
  c->r[7]=c->r[7]+c->r[4]; // 800533F8
  W32(c->r[7]+0x00000114u,c->r[3]); // 800533FC
  c->r[7]=R32(c->r[30]+0x00000004u); // 80053400
  c->r[7]=c->r[7]+c->r[4]; // 80053404
  c->r[4]=c->r[4]+0x00000120u; // 80053408
  W32(c->r[7]+0x000000FCu,c->r[3]); // 8005340C
  c->r[7]=R32(c->r[30]+0x00000024u); // 80053410
  c->r[7]=c->r[7]+c->r[5]; // 80053414
  c->r[5]=c->r[5]+0x00000020u; // 80053418
  W32(c->r[7]+0x0000001Cu,c->r[0]); // 8005341C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80053220; } // 80053420
L_80053424:;
  c->r[0]=c->r[31]-c->r[6]; // 80053424
  c->r[8]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80053428
  c->r[7]=(uint32_t)((int32_t)c->r[6]*(int32_t)36); // 8005342C
  c->r[5]=0u+0x00000000u; // 80053430
  c->r[4]=0u+0xFFFFFFFFu; // 80053434
  c->ctr=c->r[0]; // 80053438
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[31]); // 8005343C
  if (!crb(c,0)) { goto L_80053488; } // 80053440
L_80053444:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80053444
  c->r[3]=c->r[0]+c->r[7]; // 80053448
  W32(c->r[3]+0x00000010u,c->r[6]); // 8005344C
  c->r[6]=c->r[6]+0x00000001u; // 80053450
  c->r[0]=R32(c->r[30]+0x00000004u); // 80053454
  c->r[3]=c->r[0]+c->r[7]; // 80053458
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 8005345C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80053460
  c->r[3]=c->r[0]+c->r[7]; // 80053464
  W32(c->r[3]+0x00000018u,c->r[5]); // 80053468
  c->r[3]=R32(c->r[30]+0x00000004u); // 8005346C
  W32(c->r[3]+c->r[7],c->r[5]); // 80053470
  c->r[7]=c->r[7]+0x00000024u; // 80053474
  c->r[3]=R32(c->r[30]+0x00000024u); // 80053478
  W32(c->r[3]+c->r[8],c->r[4]); // 8005347C
  c->r[8]=c->r[8]+0x00000004u; // 80053480
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80053444; } // 80053484
L_80053488:;
  cmps(c,0,(int32_t)c->r[31],1); // 80053488
  if (!crb(c,1)) { goto L_800534A4; } // 8005348C
  c->r[4]=R32(c->r[30]+0x00000004u); // 80053490
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 80053494
  c->r[0]=c->r[4]+0x00000024u; // 80053498
  W32(c->r[3]+0x00000004u,c->r[0]); // 8005349C
  goto L_800534B0; // 800534A0
L_800534A4:;
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 800534A4
  c->r[0]=0u+0x00000000u; // 800534A8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800534AC
L_800534B0:;
  c->r[4]=c->r[31]+0xFFFFFFFFu; // 800534B0
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 800534B4
  c->r[0]=0u+0x00000000u; // 800534B8
  c->r[9]=0u+0x00000001u; // 800534BC
  cmps(c,1,(int32_t)c->r[4],1); // 800534C0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800534C4
  c->r[10]=0u+0x00000024u; // 800534C8
  if (!crb(c,5)) { goto L_80053708; } // 800534CC
  c->r[8]=c->r[31]+0xFFFFFFFEu; // 800534D0
  c->r[5]=c->r[31]+0xFFFFFFF7u; // 800534D4
  cmps(c,0,(int32_t)c->r[8],8); // 800534D8
  if (!crb(c,1)) { goto L_800536B4; } // 800534DC
  c->r[6]=0u+0x00000000u; // 800534E0
  c->r[7]=0u+0x00000000u; // 800534E4
  if (crb(c,4)) { goto L_80053500; } // 800534E8
  c->r[3]=0u+0x80000000u; // 800534EC
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800534F0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800534F4
  if (crb(c,1)) { goto L_80053500; } // 800534F8
  c->r[7]=0u+0x00000001u; // 800534FC
L_80053500:;
  cmps(c,0,(int32_t)c->r[7],0); // 80053500
  if (crb(c,2)) { goto L_8005353C; } // 80053504
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 80053508
  c->r[3]=0u+0x00000001u; // 8005350C
  c->r[4]=rotl(c->r[0],0)&0x80000000u; // 80053510
  c->r[0]=c->r[4]+0x80000000u; // 80053514
  cmpu(c,0,c->r[0],0x00000000u); // 80053518
  if (!crb(c,2)) { goto L_80053530; } // 8005351C
  c->r[0]=rotl(c->r[8],0)&0x80000000u; // 80053520
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80053524
  if (crb(c,2)) { goto L_80053530; } // 80053528
  c->r[3]=0u+0x00000000u; // 8005352C
L_80053530:;
  cmps(c,0,(int32_t)c->r[3],0); // 80053530
  if (crb(c,2)) { goto L_8005353C; } // 80053534
  c->r[6]=0u+0x00000001u; // 80053538
L_8005353C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8005353C
  if (crb(c,2)) { goto L_800536B4; } // 80053540
  c->r[0]=c->r[5]+0x00000006u; // 80053544
  c->r[3]=0u+0x00000024u; // 80053548
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8005354C
  c->ctr=c->r[0]; // 80053550
  cmps(c,0,(int32_t)c->r[5],1); // 80053554
  if (!crb(c,1)) { goto L_800536B4; } // 80053558
L_8005355C:;
  c->r[0]=c->r[9]+0x00000001u; // 8005355C
  c->r[7]=c->r[9]+0xFFFFFFFFu; // 80053560
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 80053564
  c->r[6]=R32(c->r[30]+0x00000004u); // 80053568
  c->r[4]=c->r[9]+0x00000002u; // 8005356C
  c->r[5]=c->r[9]+0x00000003u; // 80053570
  c->r[8]=c->r[6]+c->r[0]; // 80053574
  c->r[6]=c->r[6]+c->r[3]; // 80053578
  W32(c->r[6]+0x00000004u,c->r[8]); // 8005357C
  c->r[11]=(uint32_t)((int32_t)c->r[7]*(int32_t)36); // 80053580
  c->r[6]=c->r[9]+0x00000004u; // 80053584
  c->r[28]=R32(c->r[30]+0x00000004u); // 80053588
  c->r[7]=c->r[9]+0x00000005u; // 8005358C
  c->r[8]=c->r[9]+0x00000006u; // 80053590
  c->r[12]=c->r[9]+0x00000007u; // 80053594
  c->r[29]=c->r[28]+c->r[11]; // 80053598
  c->r[28]=c->r[28]+c->r[3]; // 8005359C
  W32(c->r[28]+0x00000008u,c->r[29]); // 800535A0
  c->r[11]=c->r[9]+0x00000008u; // 800535A4
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)36); // 800535A8
  c->r[9]=c->r[9]+0x00000008u; // 800535AC
  c->r[28]=R32(c->r[30]+0x00000004u); // 800535B0
  c->r[29]=c->r[28]+c->r[4]; // 800535B4
  c->r[28]=c->r[28]+c->r[3]; // 800535B8
  W32(c->r[28]+0x00000028u,c->r[29]); // 800535BC
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)36); // 800535C0
  c->r[28]=R32(c->r[30]+0x00000004u); // 800535C4
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)36); // 800535C8
  c->r[29]=c->r[28]+c->r[10]; // 800535CC
  c->r[28]=c->r[28]+c->r[3]; // 800535D0
  W32(c->r[28]+0x0000002Cu,c->r[29]); // 800535D4
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)36); // 800535D8
  c->r[10]=c->r[10]+0x00000120u; // 800535DC
  c->r[29]=R32(c->r[30]+0x00000004u); // 800535E0
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)36); // 800535E4
  c->r[28]=c->r[29]+c->r[5]; // 800535E8
  c->r[29]=c->r[29]+c->r[3]; // 800535EC
  W32(c->r[29]+0x0000004Cu,c->r[28]); // 800535F0
  c->r[12]=(uint32_t)((int32_t)c->r[12]*(int32_t)36); // 800535F4
  c->r[28]=R32(c->r[30]+0x00000004u); // 800535F8
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)36); // 800535FC
  c->r[0]=c->r[28]+c->r[0]; // 80053600
  c->r[29]=c->r[28]+c->r[3]; // 80053604
  W32(c->r[29]+0x00000050u,c->r[0]); // 80053608
  c->r[28]=R32(c->r[30]+0x00000004u); // 8005360C
  c->r[0]=c->r[28]+c->r[6]; // 80053610
  c->r[29]=c->r[28]+c->r[3]; // 80053614
  W32(c->r[29]+0x00000070u,c->r[0]); // 80053618
  c->r[28]=R32(c->r[30]+0x00000004u); // 8005361C
  c->r[0]=c->r[28]+c->r[4]; // 80053620
  c->r[4]=c->r[28]+c->r[3]; // 80053624
  W32(c->r[4]+0x00000074u,c->r[0]); // 80053628
  c->r[4]=R32(c->r[30]+0x00000004u); // 8005362C
  c->r[0]=c->r[4]+c->r[7]; // 80053630
  c->r[4]=c->r[4]+c->r[3]; // 80053634
  W32(c->r[4]+0x00000094u,c->r[0]); // 80053638
  c->r[4]=R32(c->r[30]+0x00000004u); // 8005363C
  c->r[0]=c->r[4]+c->r[5]; // 80053640
  c->r[4]=c->r[4]+c->r[3]; // 80053644
  W32(c->r[4]+0x00000098u,c->r[0]); // 80053648
  c->r[4]=R32(c->r[30]+0x00000004u); // 8005364C
  c->r[0]=c->r[4]+c->r[8]; // 80053650
  c->r[4]=c->r[4]+c->r[3]; // 80053654
  W32(c->r[4]+0x000000B8u,c->r[0]); // 80053658
  c->r[4]=R32(c->r[30]+0x00000004u); // 8005365C
  c->r[0]=c->r[4]+c->r[6]; // 80053660
  c->r[4]=c->r[4]+c->r[3]; // 80053664
  W32(c->r[4]+0x000000BCu,c->r[0]); // 80053668
  c->r[4]=R32(c->r[30]+0x00000004u); // 8005366C
  c->r[0]=c->r[4]+c->r[12]; // 80053670
  c->r[4]=c->r[4]+c->r[3]; // 80053674
  W32(c->r[4]+0x000000DCu,c->r[0]); // 80053678
  c->r[4]=R32(c->r[30]+0x00000004u); // 8005367C
  c->r[0]=c->r[4]+c->r[7]; // 80053680
  c->r[4]=c->r[4]+c->r[3]; // 80053684
  W32(c->r[4]+0x000000E0u,c->r[0]); // 80053688
  c->r[4]=R32(c->r[30]+0x00000004u); // 8005368C
  c->r[0]=c->r[4]+c->r[11]; // 80053690
  c->r[4]=c->r[4]+c->r[3]; // 80053694
  W32(c->r[4]+0x00000100u,c->r[0]); // 80053698
  c->r[0]=R32(c->r[30]+0x00000004u); // 8005369C
  c->r[4]=c->r[0]+c->r[3]; // 800536A0
  c->r[0]=c->r[0]+c->r[8]; // 800536A4
  W32(c->r[4]+0x00000104u,c->r[0]); // 800536A8
  c->r[3]=c->r[3]+0x00000120u; // 800536AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8005355C; } // 800536B0
L_800536B4:;
  c->r[3]=c->r[31]+0xFFFFFFFFu; // 800536B4
  c->r[0]=c->r[3]-c->r[9]; // 800536B8
  c->r[5]=(uint32_t)((int32_t)c->r[9]*(int32_t)36); // 800536BC
  c->ctr=c->r[0]; // 800536C0
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[3]); // 800536C4
  if (!crb(c,0)) { goto L_80053708; } // 800536C8
L_800536CC:;
  c->r[3]=c->r[9]+0x00000001u; // 800536CC
  c->r[0]=c->r[9]+0xFFFFFFFFu; // 800536D0
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)36); // 800536D4
  c->r[6]=R32(c->r[30]+0x00000004u); // 800536D8
  c->r[9]=c->r[9]+0x00000001u; // 800536DC
  c->r[3]=c->r[6]+c->r[5]; // 800536E0
  c->r[4]=c->r[6]+c->r[4]; // 800536E4
  W32(c->r[3]+0x00000004u,c->r[4]); // 800536E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 800536EC
  c->r[4]=R32(c->r[30]+0x00000004u); // 800536F0
  c->r[3]=c->r[4]+c->r[5]; // 800536F4
  c->r[0]=c->r[4]+c->r[0]; // 800536F8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800536FC
  c->r[5]=c->r[5]+0x00000024u; // 80053700
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800536CC; } // 80053704
L_80053708:;
  cmps(c,0,(int32_t)c->r[9],0); // 80053708
  if (!crb(c,1)) { goto L_80053748; } // 8005370C
  cmps(c,0,(int32_t)c->r[31],1); // 80053710
  if (!crb(c,1)) { goto L_80053748; } // 80053714
  c->r[5]=(uint32_t)((int32_t)c->r[9]*(int32_t)36); // 80053718
  c->r[3]=R32(c->r[30]+0x00000004u); // 8005371C
  c->r[0]=c->r[9]+0xFFFFFFFFu; // 80053720
  c->r[4]=0u+0x00000000u; // 80053724
  c->r[3]=c->r[3]+c->r[5]; // 80053728
  W32(c->r[3]+0x00000004u,c->r[4]); // 8005372C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 80053730
  c->r[3]=R32(c->r[30]+0x00000004u); // 80053734
  c->r[0]=c->r[3]+c->r[0]; // 80053738
  c->r[3]=c->r[3]+c->r[5]; // 8005373C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80053740
  goto L_80053768; // 80053744
L_80053748:;
  c->r[5]=(uint32_t)((int32_t)c->r[9]*(int32_t)36); // 80053748
  c->r[0]=R32(c->r[30]+0x00000004u); // 8005374C
  c->r[4]=0u+0x00000000u; // 80053750
  c->r[3]=c->r[0]+c->r[5]; // 80053754
  W32(c->r[3]+0x00000004u,c->r[4]); // 80053758
  c->r[0]=R32(c->r[30]+0x00000004u); // 8005375C
  c->r[3]=c->r[0]+c->r[5]; // 80053760
  W32(c->r[3]+0x00000008u,c->r[4]); // 80053764
L_80053768:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80053768
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8005376C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80053770
  c->r[29]=R32(c->r[1]+0x00000014u); // 80053774
  c->r[28]=R32(c->r[1]+0x00000010u); // 80053778
  c->lr=c->r[0]; // 8005377C
  c->r[1]=c->r[1]+0x00000020u; // 80053780
  return; // 80053784
}

// fn_80053788
void f_80053788(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 80053788
  return; // 8005378C
}

// fn_80053790
void f_80053790(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 80053790
  cmps(c,0,(int32_t)c->r[3],0); // 80053794
  if (crb(c,2)) return; // 80053798
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)36); // 8005379C
  W32(c->r[3]+c->r[0],c->r[4]); // 800537A0
  return; // 800537A4
}

// fn_800537A8
void f_800537A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800537A8
  c->r[0]=c->lr; // 800537AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800537B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800537B4
  c->r[31]=c->r[3]|c->r[3]; // 800537B8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800537BC
  cmps(c,0,(int32_t)c->r[0],0); // 800537C0
  if (crb(c,2)) { goto L_800537D8; } // 800537C4
  c->r[3]=c->r[0]|c->r[0]; // 800537C8
  c->lr=0x800537D0u; f_800D4444(c); // 800537CC
  c->r[0]=0u+0x00000000u; // 800537D0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800537D4
L_800537D8:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 800537D8
  cmps(c,0,(int32_t)c->r[3],0); // 800537DC
  if (crb(c,2)) { goto L_800537F0; } // 800537E0
  c->lr=0x800537E8u; f_800D4444(c); // 800537E4
  c->r[0]=0u+0x00000000u; // 800537E8
  W32(c->r[31]+0x00000024u,c->r[0]); // 800537EC
L_800537F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800537F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800537F4
  c->lr=c->r[0]; // 800537F8
  c->r[1]=c->r[1]+0x00000010u; // 800537FC
  return; // 80053800
}

// fn_80053804
void f_80053804(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 80053804
  c->r[0]=0u-c->r[3]; // 80053808
  c->r[0]=c->r[0]&~c->r[3]; // 8005380C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80053810
  return; // 80053814
}

// fn_80053818
void f_80053818(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053818
  c->r[0]=c->lr; // 8005381C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80053820
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80053824
  c->r[31]=c->r[3]|c->r[3]; // 80053828
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005382C
  c->r[12]=R32(c->r[12]+0x00000028u); // 80053830
  c->ctr=c->r[12]; // 80053834
  if (true) { c->lr=0x8005383Cu; dispatch(c,c->ctr); } // 80053838
  cmps(c,0,(int32_t)c->r[3],0); // 8005383C
  if (!crb(c,2)) { goto L_8005384C; } // 80053840
  c->r[3]=0u+0x00000000u; // 80053844
  goto L_800538AC; // 80053848
L_8005384C:;
  c->r[4]=0u+0x00000001u; // 8005384C
  c->r[0]=0u+0x00000000u; // 80053850
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80053854
  c->r[4]=R32(c->r[31]+0x00000018u); // 80053858
  W32(c->r[3]+0x00000004u,c->r[4]); // 8005385C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80053860
  c->r[4]=R32(c->r[31]+0x00000018u); // 80053864
  cmps(c,0,(int32_t)c->r[4],0); // 80053868
  W32(c->r[31]+0x00000018u,c->r[3]); // 8005386C
  if (crb(c,2)) { goto L_80053878; } // 80053870
  W32(c->r[4]+0x00000008u,c->r[3]); // 80053874
L_80053878:;
  c->r[5]=R32(c->r[31]+0x00000014u); // 80053878
  c->r[0]=0u+0xFFFFFFFFu; // 8005387C
  c->r[4]=R32(c->r[31]+0x00000028u); // 80053880
  c->r[5]=c->r[5]+0x00000001u; // 80053884
  c->r[4]=c->r[4]+0x00000001u; // 80053888
  W32(c->r[31]+0x00000014u,c->r[5]); // 8005388C
  cmpu(c,0,c->r[4],c->r[0]); // 80053890
  W32(c->r[31]+0x00000028u,c->r[4]); // 80053894
  c->r[0]=R32(c->r[3]+0x00000010u); // 80053898
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 8005389C
  if (crb(c,0)) { goto L_800538AC; } // 800538A0
  c->r[0]=0u+0x00000001u; // 800538A4
  W32(c->r[31]+0x00000028u,c->r[0]); // 800538A8
L_800538AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800538AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800538B0
  c->lr=c->r[0]; // 800538B4
  c->r[1]=c->r[1]+0x00000010u; // 800538B8
  return; // 800538BC
}

// fn_800538C0
void f_800538C0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 800538C0
  return; // 800538C4
}

// fn_800538C8
void f_800538C8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000008u); // 800538C8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800538CC
  if (!crb(c,0)) return; // 800538D0
  cmps(c,0,(int32_t)c->r[4],0); // 800538D4
  if (!crb(c,0)) { goto L_800538E0; } // 800538D8
  return; // 800538DC
L_800538E0:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)36); // 800538E0
  c->r[4]=R32(c->r[3]+0x00000004u); // 800538E4
  c->r[5]=c->r[4]+c->r[0]; // 800538E8
  c->r[4]=R32(c->r[5]+0x00000008u); // 800538EC
  cmps(c,0,(int32_t)c->r[4],0); // 800538F0
  if (crb(c,2)) { goto L_80053900; } // 800538F4
  c->r[0]=R32(c->r[5]+0x00000004u); // 800538F8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800538FC
L_80053900:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80053900
  cmps(c,0,(int32_t)c->r[4],0); // 80053904
  if (crb(c,2)) { goto L_80053914; } // 80053908
  c->r[0]=R32(c->r[5]+0x00000008u); // 8005390C
  W32(c->r[4]+0x00000008u,c->r[0]); // 80053910
L_80053914:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 80053914
  cmpu(c,0,c->r[5],c->r[0]); // 80053918
  if (!crb(c,2)) { goto L_80053938; } // 8005391C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80053920
  cmps(c,0,(int32_t)c->r[4],0); // 80053924
  W32(c->r[3]+0x00000018u,c->r[4]); // 80053928
  if (crb(c,2)) { goto L_80053938; } // 8005392C
  c->r[0]=0u+0x00000000u; // 80053930
  W32(c->r[4]+0x00000008u,c->r[0]); // 80053934
L_80053938:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 80053938
  c->r[0]=0u+0x00000000u; // 8005393C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80053940
  W32(c->r[5]+0x00000008u,c->r[0]); // 80053944
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 80053948
  cmps(c,0,(int32_t)c->r[4],0); // 8005394C
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 80053950
  if (crb(c,2)) { goto L_8005395C; } // 80053954
  W32(c->r[4]+0x00000008u,c->r[5]); // 80053958
L_8005395C:;
  c->r[0]=0u+0x00000000u; // 8005395C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80053960
  c->r[5]=R32(c->r[3]+0x00000014u); // 80053964
  c->r[4]=R32(c->r[3]+0x00000010u); // 80053968
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8005396C
  c->r[0]=c->r[4]+0x00000001u; // 80053970
  W32(c->r[3]+0x00000014u,c->r[5]); // 80053974
  W32(c->r[3]+0x00000010u,c->r[0]); // 80053978
  return; // 8005397C
}

// fn_80053980
void f_80053980(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000020u); // 80053980
  c->r[6]=R32(c->r[3]+0x00000024u); // 80053984
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80053988
  c->r[5]=c->r[5]+0x00000001u; // 8005398C
  W32(c->r[6]+c->r[0],c->r[4]); // 80053990
  W32(c->r[3]+0x00000020u,c->r[5]); // 80053994
  return; // 80053998
}

// fn_8005399C
void f_8005399C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005399C
  c->r[0]=c->lr; // 800539A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800539A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800539A8
  c->r[31]=0u+0x00000000u; // 800539AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800539B0
  c->r[30]=0u+0x00000000u; // 800539B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800539B8
  c->r[29]=c->r[3]|c->r[3]; // 800539BC
  goto L_800539E8; // 800539C0
L_800539C4:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 800539C4
  c->r[3]=c->r[29]|c->r[29]; // 800539C8
  c->r[4]=R32(c->r[29]+0x00000024u); // 800539CC
  c->r[12]=R32(c->r[12]+0x00000018u); // 800539D0
  c->r[4]=R32(c->r[4]+c->r[31]); // 800539D4
  c->ctr=c->r[12]; // 800539D8
  if (true) { c->lr=0x800539E0u; dispatch(c,c->ctr); } // 800539DC
  c->r[31]=c->r[31]+0x00000004u; // 800539E0
  c->r[30]=c->r[30]+0x00000001u; // 800539E4
L_800539E8:;
  c->r[0]=R32(c->r[29]+0x00000020u); // 800539E8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800539EC
  if (crb(c,0)) { IRQCHK(c); goto L_800539C4; } // 800539F0
  c->r[0]=0u+0x00000000u; // 800539F4
  W32(c->r[29]+0x00000020u,c->r[0]); // 800539F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800539FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80053A00
  c->r[29]=R32(c->r[1]+0x00000014u); // 80053A04
  c->r[0]=R32(c->r[1]+0x00000024u); // 80053A08
  c->lr=c->r[0]; // 80053A0C
  c->r[1]=c->r[1]+0x00000020u; // 80053A10
  return; // 80053A14
}

// fn_80053A18
void f_80053A18(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 80053A18
  cmps(c,0,(int32_t)c->r[6],0); // 80053A1C
  if (!crb(c,2)) { goto L_80053A2C; } // 80053A20
  c->r[3]=c->r[6]|c->r[6]; // 80053A24
  return; // 80053A28
L_80053A2C:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 80053A2C
  c->r[5]=R32(c->r[6]+0x00000004u); // 80053A30
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80053A34
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 80053A38
  W32(c->r[3]+0x00000010u,c->r[0]); // 80053A3C
  c->r[3]=c->r[6]|c->r[6]; // 80053A40
  return; // 80053A44
}

// fn_80053A48
void f_80053A48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053A48
  c->r[0]=c->lr; // 80053A4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80053A50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80053A54
  c->r[31]=c->r[4]|c->r[4]; // 80053A58
  c->r[12]=R32(c->r[3]+0x00000000u); // 80053A5C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80053A60
  c->ctr=c->r[12]; // 80053A64
  if (true) { c->lr=0x80053A6Cu; dispatch(c,c->ctr); } // 80053A68
  cmps(c,0,(int32_t)c->r[3],0); // 80053A6C
  if (!crb(c,2)) { goto L_80053A84; } // 80053A70
  c->r[0]=0u+0x00000000u; // 80053A74
  c->r[3]=0u+0xFFFFFFFFu; // 80053A78
  W32(c->r[31]+0x00000000u,c->r[0]); // 80053A7C
  goto L_80053A90; // 80053A80
L_80053A84:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80053A84
  W32(c->r[31]+0x00000000u,c->r[0]); // 80053A88
  c->r[3]=R32(c->r[3]+0x00000010u); // 80053A8C
L_80053A90:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80053A90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80053A94
  c->lr=c->r[0]; // 80053A98
  c->r[1]=c->r[1]+0x00000010u; // 80053A9C
  return; // 80053AA0
}

// fn_80053AA4
void f_80053AA4(Ctx* __restrict c) {
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)36); // 80053AA4
  c->r[5]=R32(c->r[3]+0x00000004u); // 80053AA8
  c->r[3]=c->r[5]+c->r[4]; // 80053AAC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80053AB0
  cmps(c,0,(int32_t)c->r[0],0); // 80053AB4
  if (!crb(c,2)) { goto L_80053AC4; } // 80053AB8
  c->r[3]=0u+0x00000000u; // 80053ABC
  return; // 80053AC0
L_80053AC4:;
  c->r[3]=R32(c->r[5]+c->r[4]); // 80053AC4
  return; // 80053AC8
}

// fn_80053ACC
void f_80053ACC(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)36); // 80053ACC
  c->r[3]=R32(c->r[3]+0x00000004u); // 80053AD0
  c->r[3]=R32(c->r[3]+c->r[0]); // 80053AD4
  return; // 80053AD8
}

// fn_80053ADC
void f_80053ADC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000014u); // 80053ADC
  return; // 80053AE0
}

// fn_80053AE4
void f_80053AE4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000018u); // 80053AE4
  return; // 80053AE8
}

// fn_80053AEC
void f_80053AEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053AEC
  c->r[0]=c->lr; // 80053AF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80053AF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80053AF8
  c->r[31]=c->r[3]|c->r[3]; // 80053AFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80053B00
  c->r[12]=R32(c->r[12]+0x00000030u); // 80053B04
  c->ctr=c->r[12]; // 80053B08
  if (true) { c->lr=0x80053B10u; dispatch(c,c->ctr); } // 80053B0C
  c->r[4]=R32(c->r[31]+0x00000018u); // 80053B10
  c->r[0]=0u+0x00000000u; // 80053B14
  c->ctr=c->r[3]; // 80053B18
  cmps(c,0,(int32_t)c->r[3],0); // 80053B1C
  if (!crb(c,1)) { goto L_80053B44; } // 80053B20
L_80053B24:;
  cmps(c,0,(int32_t)c->r[4],0); // 80053B24
  if (crb(c,2)) { goto L_80053B44; } // 80053B28
  c->r[3]=R32(c->r[4]+0x00000018u); // 80053B2C
  cmps(c,0,(int32_t)c->r[3],0); // 80053B30
  if (crb(c,2)) { goto L_80053B3C; } // 80053B34
  W32(c->r[4]+0x00000018u,c->r[0]); // 80053B38
L_80053B3C:;
  c->r[4]=R32(c->r[4]+0x00000004u); // 80053B3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80053B24; } // 80053B40
L_80053B44:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80053B44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80053B48
  c->lr=c->r[0]; // 80053B4C
  c->r[1]=c->r[1]+0x00000010u; // 80053B50
  return; // 80053B54
}

// fn_80053B58
void f_80053B58(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80053B58
  W32(c->r[13]+0xFFFFA320u,c->r[0]); // 80053B5C
  return; // 80053B60
}

// fn_80053B64
void f_80053B64(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80053B64
  W32(c->r[3]+0x00000004u,c->r[0]); // 80053B68
  W32(c->r[3]+0x00000008u,c->r[0]); // 80053B6C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80053B70
  W32(c->r[3]+0x00000010u,c->r[0]); // 80053B74
  W32(c->r[3]+0x00000014u,c->r[0]); // 80053B78
  W32(c->r[3]+0x00000018u,c->r[0]); // 80053B7C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80053B80
  W32(c->r[3]+0x00000020u,c->r[0]); // 80053B84
  c->r[6]=R32(c->r[13]+0xFFFFA320u); // 80053B88
  c->r[5]=c->r[6]+0x00000001u; // 80053B8C
  c->r[0]=rotl(c->r[6],8)&0x000FFF00u; // 80053B90
  W32(c->r[13]+0xFFFFA320u,c->r[5]); // 80053B94
  c->r[0]=(rotl(c->r[4],20)&0xFFF00000u)|(c->r[0]&~0xFFF00000u); // 80053B98
  W32(c->r[3]+0x00000000u,c->r[0]); // 80053B9C
  return; // 80053BA0
}

// fn_80053BA4
void f_80053BA4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80053BA4
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 80053BA8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF00u; // 80053BAC
  c->r[4]=c->r[4]+0x00000001u; // 80053BB0
  c->r[0]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 80053BB4
  W32(c->r[3]+0x00000000u,c->r[0]); // 80053BB8
  return; // 80053BBC
}

// fn_80053BC0
void f_80053BC0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000002u; // 80053BC0
  c->r[5]=c->r[3]|c->r[3]; // 80053BC4
  c->r[7]=rotl(c->r[4],0)&0xFFF00000u; // 80053BC8
  c->r[8]=rotl(c->r[4],0)&0x000FFF00u; // 80053BCC
  c->r[9]=0u+0x00000000u; // 80053BD0
  c->ctr=c->r[0]; // 80053BD4
L_80053BD8:;
  c->r[6]=R32(c->r[5]+0x00000004u); // 80053BD8
  c->r[0]=rotl(c->r[6],0)&0xFFF00000u; // 80053BDC
  cmpu(c,0,c->r[7],c->r[0]); // 80053BE0
  if (!crb(c,2)) { goto L_80053C04; } // 80053BE4
  c->r[0]=rotl(c->r[6],0)&0x000FFF00u; // 80053BE8
  cmpu(c,0,c->r[8],c->r[0]); // 80053BEC
  if (!crb(c,2)) { goto L_80053C04; } // 80053BF0
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80053BF4
  c->r[3]=c->r[3]+c->r[0]; // 80053BF8
  W32(c->r[3]+0x00000004u,c->r[4]); // 80053BFC
  return; // 80053C00
L_80053C04:;
  c->r[6]=R32(c->r[5]+0x00000008u); // 80053C04
  c->r[9]=c->r[9]+0x00000001u; // 80053C08
  c->r[0]=rotl(c->r[6],0)&0xFFF00000u; // 80053C0C
  cmpu(c,0,c->r[7],c->r[0]); // 80053C10
  if (!crb(c,2)) { goto L_80053C34; } // 80053C14
  c->r[0]=rotl(c->r[6],0)&0x000FFF00u; // 80053C18
  cmpu(c,0,c->r[8],c->r[0]); // 80053C1C
  if (!crb(c,2)) { goto L_80053C34; } // 80053C20
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80053C24
  c->r[3]=c->r[3]+c->r[0]; // 80053C28
  W32(c->r[3]+0x00000004u,c->r[4]); // 80053C2C
  return; // 80053C30
L_80053C34:;
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 80053C34
  c->r[9]=c->r[9]+0x00000001u; // 80053C38
  c->r[0]=rotl(c->r[6],0)&0xFFF00000u; // 80053C3C
  cmpu(c,0,c->r[7],c->r[0]); // 80053C40
  if (!crb(c,2)) { goto L_80053C64; } // 80053C44
  c->r[0]=rotl(c->r[6],0)&0x000FFF00u; // 80053C48
  cmpu(c,0,c->r[8],c->r[0]); // 80053C4C
  if (!crb(c,2)) { goto L_80053C64; } // 80053C50
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80053C54
  c->r[3]=c->r[3]+c->r[0]; // 80053C58
  W32(c->r[3]+0x00000004u,c->r[4]); // 80053C5C
  return; // 80053C60
L_80053C64:;
  c->r[6]=R32(c->r[5]+0x00000010u); // 80053C64
  c->r[9]=c->r[9]+0x00000001u; // 80053C68
  c->r[0]=rotl(c->r[6],0)&0xFFF00000u; // 80053C6C
  cmpu(c,0,c->r[7],c->r[0]); // 80053C70
  if (!crb(c,2)) { goto L_80053C94; } // 80053C74
  c->r[0]=rotl(c->r[6],0)&0x000FFF00u; // 80053C78
  cmpu(c,0,c->r[8],c->r[0]); // 80053C7C
  if (!crb(c,2)) { goto L_80053C94; } // 80053C80
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80053C84
  c->r[3]=c->r[3]+c->r[0]; // 80053C88
  W32(c->r[3]+0x00000004u,c->r[4]); // 80053C8C
  return; // 80053C90
L_80053C94:;
  c->r[5]=c->r[5]+0x00000010u; // 80053C94
  c->r[9]=c->r[9]+0x00000001u; // 80053C98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80053BD8; } // 80053C9C
  c->r[10]=R32(c->r[3]+0x00000008u); // 80053CA0
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 80053CA4
  c->r[8]=R32(c->r[3]+0x00000010u); // 80053CA8
  c->r[7]=R32(c->r[3]+0x00000014u); // 80053CAC
  c->r[6]=R32(c->r[3]+0x00000018u); // 80053CB0
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 80053CB4
  c->r[0]=R32(c->r[3]+0x00000020u); // 80053CB8
  W32(c->r[3]+0x00000004u,c->r[10]); // 80053CBC
  W32(c->r[3]+0x00000008u,c->r[9]); // 80053CC0
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 80053CC4
  W32(c->r[3]+0x00000010u,c->r[7]); // 80053CC8
  W32(c->r[3]+0x00000014u,c->r[6]); // 80053CCC
  W32(c->r[3]+0x00000018u,c->r[5]); // 80053CD0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80053CD4
  W32(c->r[3]+0x00000020u,c->r[4]); // 80053CD8
  return; // 80053CDC
}

// fn_80053CE0
void f_80053CE0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000004u); // 80053CE0
  cmpu(c,0,c->r[4],c->r[0]); // 80053CE4
  if (!crb(c,2)) { goto L_80053CF4; } // 80053CE8
  c->r[3]=0u+0x00000001u; // 80053CEC
  return; // 80053CF0
L_80053CF4:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 80053CF4
  cmpu(c,0,c->r[4],c->r[0]); // 80053CF8
  if (!crb(c,2)) { goto L_80053D08; } // 80053CFC
  c->r[3]=0u+0x00000001u; // 80053D00
  return; // 80053D04
L_80053D08:;
  c->r[3]=c->r[3]+0x00000008u; // 80053D08
  c->r[0]=R32(c->r[3]+0x00000004u); // 80053D0C
  cmpu(c,0,c->r[4],c->r[0]); // 80053D10
  if (!crb(c,2)) { goto L_80053D20; } // 80053D14
  c->r[3]=0u+0x00000001u; // 80053D18
  return; // 80053D1C
L_80053D20:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 80053D20
  cmpu(c,0,c->r[4],c->r[0]); // 80053D24
  if (!crb(c,2)) { goto L_80053D34; } // 80053D28
  c->r[3]=0u+0x00000001u; // 80053D2C
  return; // 80053D30
L_80053D34:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80053D34
  cmpu(c,0,c->r[4],c->r[0]); // 80053D38
  if (!crb(c,2)) { goto L_80053D48; } // 80053D3C
  c->r[3]=0u+0x00000001u; // 80053D40
  return; // 80053D44
L_80053D48:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80053D48
  cmpu(c,0,c->r[4],c->r[0]); // 80053D4C
  if (!crb(c,2)) { goto L_80053D5C; } // 80053D50
  c->r[3]=0u+0x00000001u; // 80053D54
  return; // 80053D58
L_80053D5C:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 80053D5C
  cmpu(c,0,c->r[4],c->r[0]); // 80053D60
  if (!crb(c,2)) { goto L_80053D70; } // 80053D64
  c->r[3]=0u+0x00000001u; // 80053D68
  return; // 80053D6C
L_80053D70:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 80053D70
  cmpu(c,0,c->r[4],c->r[0]); // 80053D74
  if (!crb(c,2)) { goto L_80053D84; } // 80053D78
  c->r[3]=0u+0x00000001u; // 80053D7C
  return; // 80053D80
L_80053D84:;
  c->r[3]=0u+0x00000000u; // 80053D84
  return; // 80053D88
}

// fn_80053D8C
void f_80053D8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053D8C
  c->r[0]=c->lr; // 80053D90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80053D94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80053D98
  c->r[31]=c->r[3]|c->r[3]; // 80053D9C
  c->lr=0x80053DA4u; f_8004E0EC(c); // 80053DA0
  c->r[4]=0u+0x802B0000u; // 80053DA4
  c->r[3]=c->r[31]|c->r[31]; // 80053DA8
  c->r[4]=c->r[4]+0xFFFFDE88u; // 80053DAC
  W32(c->r[31]+0x00000000u,c->r[4]); // 80053DB0
  c->r[12]=R32(c->r[31]+0x00000000u); // 80053DB4
  c->r[12]=R32(c->r[12]+0x00000008u); // 80053DB8
  c->ctr=c->r[12]; // 80053DBC
  if (true) { c->lr=0x80053DC4u; dispatch(c,c->ctr); } // 80053DC0
  c->r[3]=c->r[31]|c->r[31]; // 80053DC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80053DC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80053DCC
  c->lr=c->r[0]; // 80053DD0
  c->r[1]=c->r[1]+0x00000010u; // 80053DD4
  return; // 80053DD8
}

// fn_80053DDC
void f_80053DDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053DDC
  c->r[0]=c->lr; // 80053DE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80053DE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80053DE8
  c->r[31]=c->r[3]|c->r[3]; // 80053DEC
  c->lr=0x80053DF4u; f_8004E190(c); // 80053DF0
  c->r[3]=c->r[31]+0x00000168u; // 80053DF4
  c->r[4]=0u+0x00000000u; // 80053DF8
  c->r[5]=0u+0x000000C0u; // 80053DFC
  c->lr=0x80053E04u; f_8000443C(c); // 80053E00
  c->r[0]=R32(c->r[1]+0x00000014u); // 80053E04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80053E08
  c->lr=c->r[0]; // 80053E0C
  c->r[1]=c->r[1]+0x00000010u; // 80053E10
  return; // 80053E14
}

// fn_80053E18
void f_80053E18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053E18
  c->r[0]=c->lr; // 80053E1C
  c->r[5]=c->r[3]+0x00000178u; // 80053E20
  c->r[6]=c->r[3]+0x00000184u; // 80053E24
  W32(c->r[1]+0x00000044u,c->r[0]); // 80053E28
  c->r[4]=c->r[1]+0x00000014u; // 80053E2C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80053E30
  c->r[31]=c->r[3]|c->r[3]; // 80053E34
  c->r[7]=R32(c->r[3]+0x00000034u); // 80053E38
  c->r[0]=R32(c->r[3]+0x00000038u); // 80053E3C
  W32(c->r[1]+0x00000014u,c->r[7]); // 80053E40
  c->r[7]=c->r[3]+0x000001CCu; // 80053E44
  W32(c->r[1]+0x00000018u,c->r[0]); // 80053E48
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80053E4C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80053E50
  {uint32_t ea=c->r[3]+0x00000174u; c->f[4]=c->ps1[4]=RF32(ea);} // 80053E54
  {uint32_t ea=c->r[3]+0x0000020Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80053E58
  {uint32_t ea=c->r[3]+0x00000204u; c->f[2]=c->ps1[2]=RF32(ea);} // 80053E5C
  {uint32_t ea=c->r[3]+0x0000016Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80053E60
  c->lr=0x80053E68u; f_80054074(c); // 80053E64
  c->r[3]=R32(c->r[31]+0x00000220u); // 80053E68
  c->r[0]=0u-c->r[3]; // 80053E6C
  c->r[0]=c->r[0]|c->r[3]; // 80053E70
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80053E74
  cmps(c,0,(int32_t)c->r[0],1); // 80053E78
  if (!crb(c,2)) { goto L_80053ED4; } // 80053E7C
  c->r[7]=R32(c->r[31]+0x00000034u); // 80053E80
  c->r[3]=c->r[1]+0x00000020u; // 80053E84
  c->r[6]=R32(c->r[31]+0x00000038u); // 80053E88
  c->r[4]=c->r[31]+0x00000178u; // 80053E8C
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 80053E90
  c->r[5]=c->r[1]+0x0000002Cu; // 80053E94
  W32(c->r[1]+0x00000008u,c->r[7]); // 80053E98
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80053E9C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80053EA0
  W32(c->r[1]+0x00000010u,c->r[0]); // 80053EA4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80053EA8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80053EAC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 80053EB0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80053EB4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80053EB8
  c->lr=0x80053EC0u; f_801647E4(c); // 80053EBC
  c->r[3]=0u+0x80370000u; // 80053EC0
  c->r[4]=R32(c->r[31]+0x00000168u); // 80053EC4
  c->r[3]=c->r[3]+0x00005C48u; // 80053EC8
  c->r[5]=c->r[1]+0x00000020u; // 80053ECC
  c->lr=0x80053ED4u; f_800C3848(c); // 80053ED0
L_80053ED4:;
  c->r[3]=c->r[31]|c->r[31]; // 80053ED4
  c->lr=0x80053EDCu; f_8004E428(c); // 80053ED8
  c->r[0]=R32(c->r[1]+0x00000044u); // 80053EDC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80053EE0
  c->lr=c->r[0]; // 80053EE4
  c->r[1]=c->r[1]+0x00000040u; // 80053EE8
  return; // 80053EEC
}

// fn_80053EF0
void f_80053EF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80053EF0
  return; // 80053EF4
}

// fn_80053EF8
void f_80053EF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000001F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80053EF8
  return; // 80053EFC
}

// fn_80053F00
void f_80053F00(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000170u; WF32(ea,c->f[1]);} // 80053F00
  return; // 80053F04
}

// fn_80053F08
void f_80053F08(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000170u; c->f[1]=c->ps1[1]=RF32(ea);} // 80053F08
  return; // 80053F0C
}

// fn_80053F10
void f_80053F10(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000016Cu; WF32(ea,c->f[1]);} // 80053F10
  return; // 80053F14
}

// fn_80053F18
void f_80053F18(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000016Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80053F18
  return; // 80053F1C
}

// fn_80053F20
void f_80053F20(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000200u); // 80053F20
  return; // 80053F24
}

// fn_80053F28
void f_80053F28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053F28
  c->r[0]=c->lr; // 80053F2C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80053F30
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80053F34
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80053F38
  c->r[5]=0u+0x00000001u; // 80053F3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80053F40
  c->r[31]=c->r[3]|c->r[3]; // 80053F44
  c->r[7]=R32(c->r[4]+0x00000000u); // 80053F48
  c->r[6]=R32(c->r[4]+0x00000004u); // 80053F4C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80053F50
  W32(c->r[1]+0x00000008u,c->r[7]); // 80053F54
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80053F58
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80053F5C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80053F60
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80053F64
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80053F68
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[2]);} // 80053F6C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 80053F70
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 80053F74
  c->r[6]=R32(c->r[4]+0x00000014u); // 80053F78
  W32(c->r[3]+0x00000168u,c->r[6]); // 80053F7C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80053F80
  {uint32_t ea=c->r[3]+0x00000174u; WF32(ea,c->f[0]);} // 80053F84
  c->r[0]=R32(c->r[4]+0x00000018u); // 80053F88
  W32(c->r[3]+0x00000200u,c->r[0]); // 80053F8C
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80053F90
  {uint32_t ea=c->r[3]+0x00000208u; WF32(ea,c->f[0]);} // 80053F94
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80053F98
  {uint32_t ea=c->r[3]+0x0000020Cu; WF32(ea,c->f[0]);} // 80053F9C
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80053FA0
  {uint32_t ea=c->r[3]+0x00000204u; WF32(ea,c->f[0]);} // 80053FA4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80053FA8
  c->r[4]=c->r[0]|c->r[0]; // 80053FAC
  {uint32_t ea=c->r[3]+0x00000210u; WF32(ea,c->f[0]);} // 80053FB0
  c->r[3]=c->r[6]|c->r[6]; // 80053FB4
  c->lr=0x80053FBCu; f_8005A70C(c); // 80053FB8
  c->f[31]=c->f[1]; // 80053FBC
  c->r[3]=R32(c->r[31]+0x00000168u); // 80053FC0
  c->r[4]=R32(c->r[31]+0x00000200u); // 80053FC4
  c->r[5]=0u+0x00000000u; // 80053FC8
  c->lr=0x80053FD0u; f_8005A70C(c); // 80053FCC
  c->r[0]=R32(c->r[31]+0x00000200u); // 80053FD0
  c->r[4]=0u+0x00000001u; // 80053FD4
  c->r[3]=0u+0xFFFFFFFFu; // 80053FD8
  W32(c->r[31]+0x00000218u,c->r[4]); // 80053FDC
  cmps(c,0,(int32_t)c->r[0],1); // 80053FE0
  W32(c->r[31]+0x0000021Cu,c->r[3]); // 80053FE4
  {uint32_t ea=c->r[31]+0x000001FCu; WF32(ea,c->f[31]);} // 80053FE8
  {uint32_t ea=c->r[31]+0x000001F8u; WF32(ea,c->f[1]);} // 80053FEC
  if (!crb(c,2)) { goto L_80053FFC; } // 80053FF0
  {uint32_t ea=c->r[31]+0x0000016Cu; WF32(ea,c->f[1]);} // 80053FF4
  goto L_80054000; // 80053FF8
L_80053FFC:;
  {uint32_t ea=c->r[31]+0x0000016Cu; WF32(ea,c->f[31]);} // 80053FFC
L_80054000:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80054000
  c->r[0]=R32(c->r[1]+0x00000034u); // 80054004
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80054008
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8005400C
  c->lr=c->r[0]; // 80054010
  c->r[1]=c->r[1]+0x00000030u; // 80054014
  return; // 80054018
}

// fn_8005401C
void f_8005401C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005401C
  c->r[0]=c->lr; // 80054020
  W32(c->r[1]+0x00000014u,c->r[0]); // 80054024
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80054028
  c->r[31]=c->r[3]|c->r[3]; // 8005402C
  c->lr=0x80054034u; f_8004E130(c); // 80054030
  c->r[0]=R32(c->r[31]+0x00000050u); // 80054034
  c->r[3]=c->r[31]|c->r[31]; // 80054038
  c->r[4]=0u+0x00000001u; // 8005403C
  c->r[0]=c->r[0]|0x00000020u; // 80054040
  W32(c->r[31]+0x00000050u,c->r[0]); // 80054044
  c->r[12]=R32(c->r[31]+0x00000000u); // 80054048
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8005404C
  c->ctr=c->r[12]; // 80054050
  if (true) { c->lr=0x80054058u; dispatch(c,c->ctr); } // 80054054
  c->r[0]=R32(c->r[1]+0x00000014u); // 80054058
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005405C
  c->lr=c->r[0]; // 80054060
  c->r[1]=c->r[1]+0x00000010u; // 80054064
  return; // 80054068
}

// fn_8005406C
void f_8005406C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000005u; // 8005406C
  return; // 80054070
}

// fn_80054074
void f_80054074(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054074
  c->r[0]=c->lr; // 80054078
  W32(c->r[1]+0x00000104u,c->r[0]); // 8005407C
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 80054080
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 80054084
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[30]);} // 80054088
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,30,ea,0,0);} // 8005408C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[29]);} // 80054090
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,29,ea,0,0);} // 80054094
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[28]);} // 80054098
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,28,ea,0,0);} // 8005409C
  c->f[28]=c->f[1]; // 800540A0
  {uint32_t ea=c->r[2]+0xFFFF8BC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800540A4
  c->f[29]=c->f[2]; // 800540A8
  W32(c->r[1]+0x000000BCu,c->r[31]); // 800540AC
  c->f[30]=c->f[3]; // 800540B0
  c->f[31]=c->f[4]; // 800540B4
  W32(c->r[1]+0x000000B8u,c->r[30]); // 800540B8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800540BC
  c->r[30]=c->r[6]|c->r[6]; // 800540C0
  c->r[31]=c->r[7]|c->r[7]; // 800540C4
  W32(c->r[1]+0x000000B4u,c->r[29]); // 800540C8
  c->r[29]=c->r[5]|c->r[5]; // 800540CC
  W32(c->r[1]+0x000000B0u,c->r[28]); // 800540D0
  c->r[28]=c->r[4]|c->r[4]; // 800540D4
  c->lr=0x800540DCu; f_800FDAFC(c); // 800540D8
  {uint32_t ea=c->r[2]+0xFFFF8BC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800540DC
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800540E0
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 800540E4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[28]); // 800540E8
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[2]);} // 800540EC
  c->lr=0x800540F4u; f_800FDB64(c); // 800540F0
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[1]);} // 800540F4
  c->f[1]=c->f[31]; // 800540F8
  c->r[4]=c->r[29]|c->r[29]; // 800540FC
  c->r[3]=c->r[1]+0x000000A4u; // 80054100
  c->lr=0x80054108u; f_8016482C(c); // 80054104
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80054108
  c->f[1]=c->f[31]; // 8005410C
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80054110
  c->r[3]=c->r[1]+0x000000A4u; // 80054114
  c->f[2]=-c->f[0]; // 80054118
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8005411C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[3]);} // 80054120
  c->r[4]=c->r[1]+0x0000008Cu; // 80054124
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 80054128
  c->r[0]=R32(c->r[1]+0x00000034u); // 8005412C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80054130
  c->r[6]=R32(c->r[1]+0x0000002Cu); // 80054134
  c->r[5]=R32(c->r[1]+0x00000030u); // 80054138
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 8005413C
  W32(c->r[1]+0x00000060u,c->r[5]); // 80054140
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80054144
  W32(c->r[1]+0x00000064u,c->r[0]); // 80054148
  {uint32_t ea=c->r[1]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005414C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054150
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[3]);} // 80054154
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[2]);} // 80054158
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 8005415C
  c->lr=0x80054164u; f_8016482C(c); // 80054160
  c->f[1]=c->f[29]; // 80054164
  c->r[3]=c->r[1]+0x00000098u; // 80054168
  c->r[4]=c->r[1]+0x00000080u; // 8005416C
  c->lr=0x80054174u; f_8016482C(c); // 80054170
  c->r[3]=c->r[28]|c->r[28]; // 80054174
  c->r[4]=c->r[1]+0x00000080u; // 80054178
  c->r[5]=c->r[1]+0x00000068u; // 8005417C
  c->lr=0x80054184u; f_801647E4(c); // 80054180
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054184
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[30]); // 80054188
  c->r[3]=c->r[1]+0x00000098u; // 8005418C
  c->r[4]=c->r[1]+0x00000080u; // 80054190
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 80054194
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80054198
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 8005419C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 800541A0
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[0]);} // 800541A4
  c->lr=0x800541ACu; f_8016482C(c); // 800541A8
  c->r[3]=c->r[28]|c->r[28]; // 800541AC
  c->r[4]=c->r[1]+0x00000080u; // 800541B0
  c->r[5]=c->r[1]+0x00000068u; // 800541B4
  c->lr=0x800541BCu; f_801647E4(c); // 800541B8
  c->r[3]=c->r[1]+0x00000068u; // 800541BC
  c->r[4]=c->r[1]+0x0000008Cu; // 800541C0
  c->r[5]=c->r[3]|c->r[3]; // 800541C4
  c->lr=0x800541CCu; f_801647E4(c); // 800541C8
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800541CC
  c->r[4]=c->r[30]|c->r[30]; // 800541D0
  c->r[3]=c->r[30]+0x0000000Cu; // 800541D4
  c->r[5]=c->r[1]+0x00000074u; // 800541D8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 800541DC
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800541E0
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 800541E4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 800541E8
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[0]);} // 800541EC
  c->lr=0x800541F4u; f_80164808(c); // 800541F0
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800541F4
  c->r[3]=c->r[1]+0x00000074u; // 800541F8
  {uint32_t ea=c->r[1]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800541FC
  c->r[4]=c->r[3]|c->r[3]; // 80054200
  c->f[0]=-c->f[0]; // 80054204
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054208
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 8005420C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80054210
  c->r[0]=R32(c->r[1]+0x00000028u); // 80054214
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80054218
  c->r[6]=R32(c->r[1]+0x00000020u); // 8005421C
  c->r[5]=R32(c->r[1]+0x00000024u); // 80054220
  W32(c->r[1]+0x00000050u,c->r[6]); // 80054224
  W32(c->r[1]+0x00000054u,c->r[5]); // 80054228
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005422C
  W32(c->r[1]+0x00000058u,c->r[0]); // 80054230
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054234
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054238
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[2]);} // 8005423C
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 80054240
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 80054244
  c->lr=0x8005424Cu; f_80164848(c); // 80054248
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005424C
  c->f[1]=c->f[31]; // 80054250
  c->r[3]=c->r[1]+0x000000A4u; // 80054254
  c->r[4]=c->r[1]+0x0000008Cu; // 80054258
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 8005425C
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054260
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 80054264
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80054268
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 8005426C
  c->lr=0x80054274u; f_8016482C(c); // 80054270
  c->f[1]=-c->f[29]; // 80054274
  c->r[3]=c->r[1]+0x00000098u; // 80054278
  c->r[4]=c->r[1]+0x00000080u; // 8005427C
  c->lr=0x80054284u; f_8016482C(c); // 80054280
  c->r[3]=c->r[28]|c->r[28]; // 80054284
  c->r[4]=c->r[1]+0x00000080u; // 80054288
  c->r[5]=c->r[1]+0x00000068u; // 8005428C
  c->lr=0x80054294u; f_801647E4(c); // 80054290
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054294
  c->f[0]=-c->f[29]; // 80054298
  c->r[3]=c->r[1]+0x00000098u; // 8005429C
  c->r[4]=c->r[1]+0x00000080u; // 800542A0
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 800542A4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[30]); // 800542A8
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800542AC
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 800542B0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 800542B4
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 800542B8
  c->lr=0x800542C0u; f_8016482C(c); // 800542BC
  c->r[3]=c->r[28]|c->r[28]; // 800542C0
  c->r[4]=c->r[1]+0x00000080u; // 800542C4
  c->r[5]=c->r[1]+0x00000068u; // 800542C8
  c->lr=0x800542D0u; f_801647E4(c); // 800542CC
  c->r[3]=c->r[1]+0x00000068u; // 800542D0
  c->r[4]=c->r[1]+0x0000008Cu; // 800542D4
  c->r[5]=c->r[3]|c->r[3]; // 800542D8
  c->lr=0x800542E0u; f_801647E4(c); // 800542DC
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800542E0
  c->r[3]=c->r[30]+0x00000018u; // 800542E4
  c->r[4]=c->r[30]+0x00000024u; // 800542E8
  c->r[5]=c->r[1]+0x00000074u; // 800542EC
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[0]);} // 800542F0
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800542F4
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 800542F8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 800542FC
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 80054300
  c->lr=0x80054308u; f_80164808(c); // 80054304
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80054308
  c->r[3]=c->r[1]+0x00000074u; // 8005430C
  {uint32_t ea=c->r[1]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 80054310
  c->r[4]=c->r[3]|c->r[3]; // 80054314
  c->f[0]=-c->f[0]; // 80054318
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005431C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 80054320
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80054324
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80054328
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8005432C
  c->r[6]=R32(c->r[1]+0x00000014u); // 80054330
  c->r[5]=R32(c->r[1]+0x00000018u); // 80054334
  W32(c->r[1]+0x00000044u,c->r[6]); // 80054338
  W32(c->r[1]+0x00000048u,c->r[5]); // 8005433C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80054340
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80054344
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054348
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8005434C
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[2]);} // 80054350
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 80054354
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 80054358
  c->lr=0x80054360u; f_80164848(c); // 8005435C
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054360
  c->r[3]=c->r[30]+0x0000003Cu; // 80054364
  c->r[4]=c->r[30]+0x00000030u; // 80054368
  c->r[5]=c->r[1]+0x00000074u; // 8005436C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 80054370
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054374
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 80054378
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8005437C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 80054380
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80054384
  {uint32_t ea=c->r[30]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 80054388
  {uint32_t ea=c->r[30]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 8005438C
  {uint32_t ea=c->r[30]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80054390
  {uint32_t ea=c->r[30]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054394
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80054398
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[5]);} // 8005439C
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[4]);} // 800543A0
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[3]);} // 800543A4
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[2]);} // 800543A8
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800543AC
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 800543B0
  c->lr=0x800543B8u; f_80164808(c); // 800543B4
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800543B8
  c->r[3]=c->r[1]+0x00000074u; // 800543BC
  {uint32_t ea=c->r[1]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800543C0
  c->r[4]=c->r[3]|c->r[3]; // 800543C4
  c->f[0]=-c->f[0]; // 800543C8
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800543CC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 800543D0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800543D4
  c->r[0]=R32(c->r[1]+0x00000010u); // 800543D8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800543DC
  c->r[6]=R32(c->r[1]+0x00000008u); // 800543E0
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800543E4
  W32(c->r[1]+0x00000038u,c->r[6]); // 800543E8
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 800543EC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800543F0
  W32(c->r[1]+0x00000040u,c->r[0]); // 800543F4
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800543F8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800543FC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[2]);} // 80054400
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 80054404
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 80054408
  c->lr=0x80054410u; f_80164848(c); // 8005440C
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054410
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 80054414
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054418
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8005441C
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80054420
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 80054424
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 80054428
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 8005442C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,30,ea,0,0);} // 80054430
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[30]=RF64(ea);} // 80054434
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,29,ea,0,0);} // 80054438
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[29]=RF64(ea);} // 8005443C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,28,ea,0,0);} // 80054440
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[28]=RF64(ea);} // 80054444
  c->r[31]=R32(c->r[1]+0x000000BCu); // 80054448
  c->r[30]=R32(c->r[1]+0x000000B8u); // 8005444C
  c->r[29]=R32(c->r[1]+0x000000B4u); // 80054450
  c->r[28]=R32(c->r[1]+0x000000B0u); // 80054454
  c->r[0]=R32(c->r[1]+0x00000104u); // 80054458
  c->lr=c->r[0]; // 8005445C
  c->r[1]=c->r[1]+0x00000100u; // 80054460
  return; // 80054464
}

// fn_80054468
void f_80054468(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054468
  c->r[0]=c->lr; // 8005446C
  W32(c->r[1]+0x00000104u,c->r[0]); // 80054470
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 80054474
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 80054478
  W32(c->r[1]+0x000000ECu,c->r[31]); // 8005447C
  c->r[31]=c->r[4]|c->r[4]; // 80054480
  W32(c->r[1]+0x000000E8u,c->r[30]); // 80054484
  c->r[30]=c->r[3]|c->r[3]; // 80054488
  c->r[3]=c->r[31]|c->r[31]; // 8005448C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80054490
  c->r[12]=R32(c->r[12]+0x00000194u); // 80054494
  c->ctr=c->r[12]; // 80054498
  if (true) { c->lr=0x800544A0u; dispatch(c,c->ctr); } // 8005449C
  cmps(c,0,(int32_t)c->r[3],0); // 800544A0
  if (!crb(c,2)) { goto L_800544B0; } // 800544A4
  c->r[3]=0u+0x00000000u; // 800544A8
  goto L_8005460C; // 800544AC
L_800544B0:;
  c->r[5]=R32(c->r[31]+0x00000034u); // 800544B0
  c->r[4]=c->r[31]|c->r[31]; // 800544B4
  c->r[0]=R32(c->r[31]+0x00000038u); // 800544B8
  c->r[3]=c->r[1]+0x0000002Cu; // 800544BC
  W32(c->r[1]+0x0000005Cu,c->r[5]); // 800544C0
  W32(c->r[1]+0x00000060u,c->r[0]); // 800544C4
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 800544C8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800544CC
  c->r[5]=R32(c->r[30]+0x00000034u); // 800544D0
  c->r[0]=R32(c->r[30]+0x00000038u); // 800544D4
  W32(c->r[1]+0x00000050u,c->r[5]); // 800544D8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800544DC
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800544E0
  W32(c->r[1]+0x00000058u,c->r[0]); // 800544E4
  c->r[12]=R32(c->r[31]+0x00000000u); // 800544E8
  c->r[12]=R32(c->r[12]+0x000000F8u); // 800544EC
  c->ctr=c->r[12]; // 800544F0
  if (true) { c->lr=0x800544F8u; dispatch(c,c->ctr); } // 800544F4
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800544F8
  c->r[3]=c->r[31]|c->r[31]; // 800544FC
  c->r[8]=R32(c->r[1]+0x0000002Cu); // 80054500
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80054504
  c->r[7]=R32(c->r[1]+0x00000030u); // 80054508
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8005450C
  c->r[6]=R32(c->r[1]+0x00000034u); // 80054510
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80054514
  c->r[5]=R32(c->r[1]+0x00000008u); // 80054518
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8005451C
  c->r[0]=R32(c->r[1]+0x00000010u); // 80054520
  W32(c->r[1]+0x00000044u,c->r[8]); // 80054524
  W32(c->r[1]+0x00000048u,c->r[7]); // 80054528
  W32(c->r[1]+0x0000004Cu,c->r[6]); // 8005452C
  W32(c->r[1]+0x00000038u,c->r[5]); // 80054530
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 80054534
  W32(c->r[1]+0x00000040u,c->r[0]); // 80054538
  c->r[12]=R32(c->r[31]+0x00000000u); // 8005453C
  {uint32_t ea=c->r[30]+0x00000204u; c->f[31]=c->ps1[31]=RF32(ea);} // 80054540
  c->r[12]=R32(c->r[12]+0x000000F0u); // 80054544
  c->ctr=c->r[12]; // 80054548
  if (true) { c->lr=0x80054550u; dispatch(c,c->ctr); } // 8005454C
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80054550
  c->r[3]=c->r[1]+0x00000098u; // 80054554
  {uint32_t ea=c->r[2]+0xFFFF8BD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054558
  c->r[4]=c->r[1]+0x00000068u; // 8005455C
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[5]=c->ps1[5]=RF32(ea);} // 80054560
  c->f[4]=c->f[3]; // 80054564
  c->f[7]=c->f[3]; // 80054568
  c->r[5]=c->r[1]+0x0000005Cu; // 8005456C
  c->f[6]=c->f[5]; // 80054570
  c->r[6]=c->r[1]+0x00000050u; // 80054574
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[31]); // 80054578
  c->r[7]=c->r[1]+0x00000044u; // 8005457C
  c->r[8]=c->r[1]+0x00000038u; // 80054580
  c->lr=0x80054588u; f_80095128(c); // 80054584
  cmps(c,0,(int32_t)c->r[3],1); // 80054588
  if (!crb(c,2)) { goto L_800545C8; } // 8005458C
  c->r[6]=R32(c->r[1]+0x00000080u); // 80054590
  c->r[3]=c->r[31]|c->r[31]; // 80054594
  c->r[5]=R32(c->r[1]+0x00000084u); // 80054598
  c->r[4]=c->r[1]+0x00000020u; // 8005459C
  c->r[0]=R32(c->r[1]+0x00000088u); // 800545A0
  W32(c->r[1]+0x00000020u,c->r[6]); // 800545A4
  W32(c->r[1]+0x00000024u,c->r[5]); // 800545A8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800545AC
  c->r[12]=R32(c->r[31]+0x00000000u); // 800545B0
  c->r[12]=R32(c->r[12]+0x000000FCu); // 800545B4
  c->ctr=c->r[12]; // 800545B8
  if (true) { c->lr=0x800545C0u; dispatch(c,c->ctr); } // 800545BC
  c->r[3]=0u+0x00000001u; // 800545C0
  goto L_8005460C; // 800545C4
L_800545C8:;
  cmps(c,0,(int32_t)c->r[3],2); // 800545C8
  if (!crb(c,2)) { goto L_80054608; } // 800545CC
  c->r[6]=R32(c->r[1]+0x00000080u); // 800545D0
  c->r[3]=c->r[31]|c->r[31]; // 800545D4
  c->r[5]=R32(c->r[1]+0x00000084u); // 800545D8
  c->r[4]=c->r[1]+0x00000014u; // 800545DC
  c->r[0]=R32(c->r[1]+0x00000088u); // 800545E0
  W32(c->r[1]+0x00000014u,c->r[6]); // 800545E4
  W32(c->r[1]+0x00000018u,c->r[5]); // 800545E8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800545EC
  c->r[12]=R32(c->r[31]+0x00000000u); // 800545F0
  c->r[12]=R32(c->r[12]+0x000000FCu); // 800545F4
  c->ctr=c->r[12]; // 800545F8
  if (true) { c->lr=0x80054600u; dispatch(c,c->ctr); } // 800545FC
  c->r[3]=0u+0x00000001u; // 80054600
  goto L_8005460C; // 80054604
L_80054608:;
  c->r[3]=0u+0x00000000u; // 80054608
L_8005460C:;
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 8005460C
  c->r[0]=R32(c->r[1]+0x00000104u); // 80054610
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 80054614
  c->r[31]=R32(c->r[1]+0x000000ECu); // 80054618
  c->r[30]=R32(c->r[1]+0x000000E8u); // 8005461C
  c->lr=c->r[0]; // 80054620
  c->r[1]=c->r[1]+0x00000100u; // 80054624
  return; // 80054628
}

// fn_8005462C
void f_8005462C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFAF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005462C
  c->r[0]=c->lr; // 80054630
  W32(c->r[1]+0x00000514u,c->r[0]); // 80054634
  {uint32_t ea=c->r[1]+0x00000500u; WF64(ea,c->f[31]);} // 80054638
  {uint32_t ea=c->r[1]+0x00000508u; psq_store(c,31,ea,0,0);} // 8005463C
  {uint32_t ea=c->r[1]+0x000004F0u; WF64(ea,c->f[30]);} // 80054640
  {uint32_t ea=c->r[1]+0x000004F8u; psq_store(c,30,ea,0,0);} // 80054644
  {uint32_t ea=c->r[1]+0x000004E0u; WF64(ea,c->f[29]);} // 80054648
  {uint32_t ea=c->r[1]+0x000004E8u; psq_store(c,29,ea,0,0);} // 8005464C
  {uint32_t ea=c->r[1]+0x000004D0u; WF64(ea,c->f[28]);} // 80054650
  {uint32_t ea=c->r[1]+0x000004D8u; psq_store(c,28,ea,0,0);} // 80054654
  {uint32_t ea=c->r[1]+0x000004C0u; WF64(ea,c->f[27]);} // 80054658
  {uint32_t ea=c->r[1]+0x000004C8u; psq_store(c,27,ea,0,0);} // 8005465C
  {uint32_t ea=c->r[1]+0x000004B0u; WF64(ea,c->f[26]);} // 80054660
  {uint32_t ea=c->r[1]+0x000004B8u; psq_store(c,26,ea,0,0);} // 80054664
  c->r[11]=c->r[1]+0x000004B0u; // 80054668
  c->lr=0x80054670u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8005466C
  {uint32_t ea=c->r[4]+0x0000016Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 80054670
  c->r[25]=c->r[3]|c->r[3]; // 80054674
  {uint32_t ea=c->r[4]+0x00000170u; c->f[30]=c->ps1[30]=RF32(ea);} // 80054678
  c->r[27]=c->r[5]|c->r[5]; // 8005467C
  c->r[6]=R32(c->r[5]+0x00000034u); // 80054680
  c->r[26]=c->r[4]|c->r[4]; // 80054684
  c->r[0]=R32(c->r[5]+0x00000038u); // 80054688
  c->r[4]=c->r[27]|c->r[27]; // 8005468C
  c->r[3]=c->r[1]+0x00000074u; // 80054690
  W32(c->r[1]+0x000000F8u,c->r[6]); // 80054694
  W32(c->r[1]+0x000000FCu,c->r[0]); // 80054698
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 8005469C
  W32(c->r[1]+0x00000100u,c->r[0]); // 800546A0
  c->r[12]=R32(c->r[27]+0x00000000u); // 800546A4
  c->r[12]=R32(c->r[12]+0x000000F8u); // 800546A8
  c->ctr=c->r[12]; // 800546AC
  if (true) { c->lr=0x800546B4u; dispatch(c,c->ctr); } // 800546B0
  c->r[4]=R32(c->r[1]+0x00000074u); // 800546B4
  c->r[0]=0u+0x00000000u; // 800546B8
  c->r[5]=R32(c->r[1]+0x00000078u); // 800546BC
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 800546C0
  W32(c->r[1]+0x000000ECu,c->r[4]); // 800546C4
  c->r[4]=R32(c->r[1]+0x000000FCu); // 800546C8
  W32(c->r[1]+0x000000F0u,c->r[5]); // 800546CC
  {uint32_t ea=c->r[2]+0xFFFF8BDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800546D0
  W32(c->r[1]+0x000000F4u,c->r[3]); // 800546D4
  c->r[5]=R32(c->r[1]+0x000000F8u); // 800546D8
  c->r[8]=R32(c->r[26]+0x00000034u); // 800546DC
  c->r[7]=R32(c->r[26]+0x00000038u); // 800546E0
  c->r[6]=R32(c->r[26]+0x0000003Cu); // 800546E4
  c->r[3]=R32(c->r[1]+0x00000100u); // 800546E8
  W32(c->r[1]+0x000000E0u,c->r[8]); // 800546EC
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800546F0
  W32(c->r[1]+0x000000E4u,c->r[7]); // 800546F4
  W32(c->r[1]+0x000000E8u,c->r[6]); // 800546F8
  {uint32_t ea=c->r[26]+0x00000174u; c->f[2]=c->ps1[2]=RF32(ea);} // 800546FC
  W32(c->r[1]+0x00000068u,c->r[8]); // 80054700
  c->f[26]=c->ps1[26]=S(c->f[1]*c->f[2]); // 80054704
  W32(c->r[1]+0x000000D8u,c->r[4]); // 80054708
  W32(c->r[1]+0x000000CCu,c->r[7]); // 8005470C
  W32(c->r[1]+0x0000006Cu,c->r[7]); // 80054710
  W32(c->r[1]+0x00000070u,c->r[6]); // 80054714
  W32(c->r[1]+0x000000D4u,c->r[5]); // 80054718
  W32(c->r[1]+0x000000DCu,c->r[3]); // 8005471C
  W32(c->r[1]+0x000000C8u,c->r[8]); // 80054720
  W32(c->r[1]+0x000000D0u,c->r[6]); // 80054724
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 80054728
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 8005472C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80054730
  W32(c->r[1]+0x000000A8u,c->r[0]); // 80054734
  W32(c->r[1]+0x000000ACu,c->r[0]); // 80054738
  W32(c->r[1]+0x000000B0u,c->r[0]); // 8005473C
  W32(c->r[1]+0x000000B8u,c->r[0]); // 80054740
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80054744
  c->lr=0x8005474Cu; f_80013AA4(c); // 80054748
  c->f[27]=c->f[1]; // 8005474C
  c->lr=0x80054754u; f_800076EC(c); // 80054750
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[1]); // 80054754
  c->r[3]=c->r[1]+0x000000ECu; // 80054758
  c->r[4]=c->r[3]|c->r[3]; // 8005475C
  c->lr=0x80054764u; f_8016482C(c); // 80054760
  c->lr=0x80054768u; f_80013AA4(c); // 80054764
  c->f[27]=c->f[1]; // 80054768
  c->lr=0x80054770u; f_800076EC(c); // 8005476C
  c->r[12]=R32(c->r[27]+0x00000000u); // 80054770
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[1]); // 80054774
  c->r[3]=c->r[27]|c->r[27]; // 80054778
  c->r[12]=R32(c->r[12]+0x00000130u); // 8005477C
  c->ctr=c->r[12]; // 80054780
  if (true) { c->lr=0x80054788u; dispatch(c,c->ctr); } // 80054784
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[27]); // 80054788
  {uint32_t ea=c->r[2]+0xFFFF8BE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005478C
  c->r[3]=c->r[1]+0x000000ECu; // 80054790
  c->r[4]=c->r[1]+0x0000008Cu; // 80054794
  c->lr=0x8005479Cu; f_8016482C(c); // 80054798
  c->r[3]=c->r[1]+0x000000F8u; // 8005479C
  c->r[4]=c->r[1]+0x0000008Cu; // 800547A0
  c->r[5]=c->r[1]+0x00000098u; // 800547A4
  c->lr=0x800547ACu; f_801647E4(c); // 800547A8
  c->r[12]=R32(c->r[27]+0x00000000u); // 800547AC
  c->r[3]=c->r[27]|c->r[27]; // 800547B0
  c->r[12]=R32(c->r[12]+0x000000F0u); // 800547B4
  c->ctr=c->r[12]; // 800547B8
  if (true) { c->lr=0x800547C0u; dispatch(c,c->ctr); } // 800547BC
  {uint32_t ea=c->r[2]+0xFFFF8BE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800547C0
  c->r[3]=c->r[1]+0x000000F8u; // 800547C4
  c->r[4]=c->r[1]+0x000000E0u; // 800547C8
  c->r[5]=c->r[1]+0x00000014u; // 800547CC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[27]); // 800547D0
  c->f[29]=c->ps1[29]=S(c->f[0]+c->f[1]); // 800547D4
  c->lr=0x800547DCu; f_80164808(c); // 800547D8
  c->r[3]=c->r[1]+0x00000014u; // 800547DC
  c->lr=0x800547E4u; f_801648A4(c); // 800547E0
  c->f[27]=c->f[1]; // 800547E4
  c->r[3]=c->r[1]+0x000000D4u; // 800547E8
  c->r[4]=c->r[1]+0x000000C8u; // 800547EC
  c->r[5]=c->r[1]+0x00000008u; // 800547F0
  c->lr=0x800547F8u; f_80164808(c); // 800547F4
  c->r[3]=c->r[1]+0x00000008u; // 800547F8
  c->lr=0x80054800u; f_801648A4(c); // 800547FC
  c->f[0]=c->ps1[0]=S(c->f[29]+c->f[26]); // 80054800
  c->f[31]=c->f[1]; // 80054804
  fcmp(c,0,c->f[27],c->f[0]); // 80054808
  if (!crb(c,1)) { goto L_8005482C; } // 8005480C
  c->r[4]=R32(c->r[1]+0x000000B0u); // 80054810
  c->r[3]=R32(c->r[1]+0x000000B4u); // 80054814
  c->r[0]=R32(c->r[1]+0x000000B8u); // 80054818
  W32(c->r[25]+0x00000000u,c->r[4]); // 8005481C
  W32(c->r[25]+0x00000004u,c->r[3]); // 80054820
  W32(c->r[25]+0x00000008u,c->r[0]); // 80054824
  goto L_80054B7C; // 80054828
L_8005482C:;
  c->lr=0x80054830u; f_80013AA4(c); // 8005482C
  c->f[27]=c->f[1]; // 80054830
  c->lr=0x80054838u; f_800076EC(c); // 80054834
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[1]); // 80054838
  {uint32_t ea=c->r[2]+0xFFFF8BE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005483C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80054840
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80054844
  {uint32_t ea=c->r[1]+0x00000478u; WF64(ea,c->f[0]);} // 80054848
  c->r[30]=R32(c->r[1]+0x0000047Cu); // 8005484C
  cmps(c,0,(int32_t)c->r[30],256); // 80054850
  if (!crb(c,1)) { goto L_8005485C; } // 80054854
  c->r[30]=0u+0x00000100u; // 80054858
L_8005485C:;
  c->r[3]=c->r[30]^0x80000000u; // 8005485C
  c->r[0]=0u+0x43300000u; // 80054860
  W32(c->r[1]+0x00000484u,c->r[3]); // 80054864
  c->f[29]=c->ps1[29]=S(c->f[28]-c->f[30]); // 80054868
  {uint32_t ea=c->r[2]+0xFFFF8BF8u; c->f[2]=RF64(ea);} // 8005486C
  c->r[3]=c->r[26]|c->r[26]; // 80054870
  W32(c->r[1]+0x00000480u,c->r[0]); // 80054874
  c->r[4]=c->r[27]|c->r[27]; // 80054878
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005487C
  {uint32_t ea=c->r[1]+0x00000480u; c->f[1]=RF64(ea);} // 80054880
  c->r[29]=0u+0x00000000u; // 80054884
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80054888
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8005488C
  c->f[28]=c->ps1[28]=S(c->f[30]*c->f[0]); // 80054890
  c->lr=0x80054898u; f_80054468(c); // 80054894
  c->r[28]=0u+0x00000000u; // 80054898
  c->r[3]=0u+0x00000000u; // 8005489C
  c->lr=0x800548A4u; f_80059E68(c); // 800548A0
  c->r[0]=R32(c->r[26]+0x00000200u); // 800548A4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800548A8
  cmps(c,0,(int32_t)c->r[0],0); // 800548AC
  if (!crb(c,2)) { goto L_800548E4; } // 800548B0
  {uint32_t ea=c->r[26]+0x000001F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800548B4
  {uint32_t ea=c->r[2]+0xFFFF8BECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800548B8
  c->r[0]=R32(c->r[3]+0x0000025Cu); // 800548BC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 800548C0
  {uint32_t ea=c->r[2]+0xFFFF8BE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800548C4
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800548C8
  cmps(c,0,(int32_t)c->r[0],0); // 800548CC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800548D0
  c->f[26]=c->ps1[26]=S(c->f[0]+c->f[1]); // 800548D4
  if (crb(c,2)) { goto L_80054910; } // 800548D8
  c->r[28]=0u+0x00000001u; // 800548DC
  goto L_80054910; // 800548E0
L_800548E4:;
  {uint32_t ea=c->r[26]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800548E4
  {uint32_t ea=c->r[2]+0xFFFF8BF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800548E8
  c->r[0]=R32(c->r[3]+0x00000260u); // 800548EC
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 800548F0
  {uint32_t ea=c->r[2]+0xFFFF8BE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800548F4
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800548F8
  cmps(c,0,(int32_t)c->r[0],0); // 800548FC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80054900
  c->f[26]=c->ps1[26]=S(c->f[0]+c->f[1]); // 80054904
  if (crb(c,2)) { goto L_80054910; } // 80054908
  c->r[28]=0u+0x00000001u; // 8005490C
L_80054910:;
  c->r[3]=R32(c->r[26]+0x00000168u); // 80054910
  c->lr=0x80054918u; f_8005AC00(c); // 80054914
  c->r[12]=R32(c->r[27]+0x00000000u); // 80054918
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[1]); // 8005491C
  c->r[3]=c->r[27]|c->r[27]; // 80054920
  {uint32_t ea=c->r[26]+0x00000204u; c->f[27]=c->ps1[27]=RF32(ea);} // 80054924
  c->r[12]=R32(c->r[12]+0x000000F0u); // 80054928
  c->ctr=c->r[12]; // 8005492C
  if (true) { c->lr=0x80054934u; dispatch(c,c->ctr); } // 80054930
  c->f[0]=c->ps1[0]=S(c->f[26]*c->f[27]); // 80054934
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[27]=c->ps1[27]=RF32(ea);} // 80054938
  c->r[31]=0u+0x00000000u; // 8005493C
  c->f[26]=c->ps1[26]=S(c->f[1]+c->f[0]); // 80054940
  goto L_80054B5C; // 80054944
L_80054948:;
  c->r[6]=R32(c->r[26]+0x00000034u); // 80054948
  c->f[1]=c->f[29]; // 8005494C
  c->r[0]=R32(c->r[26]+0x00000038u); // 80054950
  c->r[3]=c->r[26]|c->r[26]; // 80054954
  c->r[4]=c->r[1]+0x0000005Cu; // 80054958
  c->r[5]=c->r[1]+0x000000BCu; // 8005495C
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 80054960
  c->r[6]=c->r[1]+0x00000128u; // 80054964
  c->r[7]=c->r[1]+0x00000104u; // 80054968
  W32(c->r[1]+0x00000060u,c->r[0]); // 8005496C
  c->r[0]=R32(c->r[26]+0x0000003Cu); // 80054970
  W32(c->r[1]+0x00000064u,c->r[0]); // 80054974
  {uint32_t ea=c->r[26]+0x00000174u; c->f[4]=c->ps1[4]=RF32(ea);} // 80054978
  {uint32_t ea=c->r[26]+0x0000020Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8005497C
  {uint32_t ea=c->r[26]+0x00000204u; c->f[2]=c->ps1[2]=RF32(ea);} // 80054980
  c->lr=0x80054988u; f_80054074(c); // 80054984
  c->r[3]=c->r[26]|c->r[26]; // 80054988
  c->r[8]=c->r[27]|c->r[27]; // 8005498C
  c->r[4]=c->r[1]+0x00000170u; // 80054990
  c->r[5]=c->r[1]+0x00000080u; // 80054994
  c->r[6]=c->r[1]+0x00000128u; // 80054998
  c->r[7]=c->r[1]+0x00000104u; // 8005499C
  c->lr=0x800549A4u; f_80054BC4(c); // 800549A0
  cmps(c,0,(int32_t)c->r[3],0); // 800549A4
  if (!crb(c,1)) { goto L_80054B54; } // 800549A8
  c->r[12]=R32(c->r[27]+0x00000000u); // 800549AC
  c->r[3]=c->r[27]|c->r[27]; // 800549B0
  c->r[4]=R32(c->r[26]+0x00000168u); // 800549B4
  c->r[5]=0u+0x00000001u; // 800549B8
  c->r[12]=R32(c->r[12]+0x000001F4u); // 800549BC
  c->ctr=c->r[12]; // 800549C0
  if (true) { c->lr=0x800549C8u; dispatch(c,c->ctr); } // 800549C4
  fcmp(c,0,c->f[31],c->f[26]); // 800549C8
  if (!crb(c,0)) { goto L_800549F4; } // 800549CC
  cmps(c,0,(int32_t)c->r[28],1); // 800549D0
  if (!crb(c,2)) { goto L_800549F4; } // 800549D4
  c->r[12]=R32(c->r[27]+0x00000000u); // 800549D8
  c->r[3]=c->r[27]|c->r[27]; // 800549DC
  c->r[4]=R32(c->r[26]+0x00000168u); // 800549E0
  c->r[5]=0u+0x00000001u; // 800549E4
  c->r[12]=R32(c->r[12]+0x000001FCu); // 800549E8
  c->ctr=c->r[12]; // 800549EC
  if (true) { c->lr=0x800549F4u; dispatch(c,c->ctr); } // 800549F0
L_800549F4:;
  c->f[1]=c->f[29]; // 800549F4
  c->r[3]=c->r[26]|c->r[26]; // 800549F8
  c->f[2]=c->f[28]; // 800549FC
  c->r[5]=c->r[27]|c->r[27]; // 80054A00
  c->r[4]=c->r[1]+0x00000170u; // 80054A04
  c->lr=0x80054A0Cu; f_80055574(c); // 80054A08
  c->r[0]=R32(c->r[1]+0x00000170u); // 80054A0C
  c->r[3]=c->r[1]+0x00000170u; // 80054A10
  c->r[24]=0u+0x00000000u; // 80054A14
  c->ctr=c->r[0]; // 80054A18
  cmps(c,0,(int32_t)c->r[0],0); // 80054A1C
  if (!crb(c,1)) { goto L_80054A50; } // 80054A20
  c->r[24]=0u+0x00000001u; // 80054A24
L_80054A28:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80054A28
  cmps(c,0,(int32_t)c->r[0],2); // 80054A2C
  if (crb(c,2)) { goto L_80054A48; } // 80054A30
  cmps(c,0,(int32_t)c->r[0],4); // 80054A34
  if (!crb(c,2)) { goto L_80054A40; } // 80054A38
  goto L_80054A48; // 80054A3C
L_80054A40:;
  c->r[24]=0u+0x00000000u; // 80054A40
  goto L_80054A50; // 80054A44
L_80054A48:;
  c->r[3]=c->r[3]+0x00000004u; // 80054A48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80054A28; } // 80054A4C
L_80054A50:;
  c->r[4]=c->r[26]|c->r[26]; // 80054A50
  c->r[6]=c->r[27]|c->r[27]; // 80054A54
  c->r[7]=c->r[24]|c->r[24]; // 80054A58
  c->r[3]=c->r[1]+0x00000050u; // 80054A5C
  c->r[5]=c->r[1]+0x00000170u; // 80054A60
  c->lr=0x80054A68u; f_80054D84(c); // 80054A64
  c->r[4]=R32(c->r[1]+0x00000050u); // 80054A68
  cmps(c,0,(int32_t)c->r[29],0); // 80054A6C
  c->r[3]=R32(c->r[1]+0x00000054u); // 80054A70
  c->r[0]=R32(c->r[1]+0x00000058u); // 80054A74
  W32(c->r[1]+0x000000B0u,c->r[4]); // 80054A78
  W32(c->r[1]+0x000000B4u,c->r[3]); // 80054A7C
  W32(c->r[1]+0x000000B8u,c->r[0]); // 80054A80
  if (!crb(c,2)) { goto L_80054B54; } // 80054A84
  c->r[0]=R32(c->r[26]+0x00000200u); // 80054A88
  {uint32_t ea=c->r[26]+0x0000016Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80054A8C
  cmps(c,0,(int32_t)c->r[0],0); // 80054A90
  if (!crb(c,2)) { goto L_80054AB0; } // 80054A94
  {uint32_t ea=c->r[26]+0x000001F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054A98
  fcmp(c,0,c->f[1],c->f[0]); // 80054A9C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80054AA0
  if (!crb(c,2)) { goto L_80054AC8; } // 80054AA4
  c->r[0]=0u+0x00000001u; // 80054AA8
  goto L_80054ACC; // 80054AAC
L_80054AB0:;
  {uint32_t ea=c->r[26]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80054AB0
  fcmp(c,0,c->f[1],c->f[0]); // 80054AB4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80054AB8
  if (!crb(c,2)) { goto L_80054AC8; } // 80054ABC
  c->r[0]=0u+0x00000001u; // 80054AC0
  goto L_80054ACC; // 80054AC4
L_80054AC8:;
  c->r[0]=0u+0x00000000u; // 80054AC8
L_80054ACC:;
  cmps(c,0,(int32_t)c->r[0],1); // 80054ACC
  if (!crb(c,2)) { goto L_80054B14; } // 80054AD0
  fcmp(c,0,c->f[30],c->f[27]); // 80054AD4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80054AD8
  if (!crb(c,2)) { goto L_80054B14; } // 80054ADC
  c->r[12]=R32(c->r[27]+0x00000000u); // 80054AE0
  c->r[4]=c->r[27]|c->r[27]; // 80054AE4
  c->r[3]=c->r[1]+0x00000044u; // 80054AE8
  c->r[12]=R32(c->r[12]+0x000000F8u); // 80054AEC
  c->ctr=c->r[12]; // 80054AF0
  if (true) { c->lr=0x80054AF8u; dispatch(c,c->ctr); } // 80054AF4
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80054AF8
  fcmp(c,0,c->f[0],c->f[27]); // 80054AFC
  if (!crb(c,0)) { goto L_80054B14; } // 80054B00
  {uint32_t ea=c->r[2]+0xFFFF8BF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054B04
  c->r[4]=c->r[27]|c->r[27]; // 80054B08
  c->r[3]=c->r[1]+0x00000038u; // 80054B0C
  c->lr=0x80054B14u; f_8005F838(c); // 80054B10
L_80054B14:;
  c->r[5]=R32(c->r[1]+0x000000BCu); // 80054B14
  c->f[1]=c->f[29]; // 80054B18
  c->r[3]=R32(c->r[1]+0x000000C0u); // 80054B1C
  c->f[2]=c->f[28]; // 80054B20
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80054B24
  c->r[4]=c->r[26]|c->r[26]; // 80054B28
  W32(c->r[1]+0x00000020u,c->r[5]); // 80054B2C
  c->r[6]=c->r[27]|c->r[27]; // 80054B30
  c->r[8]=c->r[24]|c->r[24]; // 80054B34
  W32(c->r[1]+0x00000024u,c->r[3]); // 80054B38
  c->r[3]=c->r[1]+0x0000002Cu; // 80054B3C
  c->r[5]=c->r[1]+0x00000170u; // 80054B40
  c->r[7]=c->r[1]+0x00000020u; // 80054B44
  W32(c->r[1]+0x00000028u,c->r[0]); // 80054B48
  c->lr=0x80054B50u; f_80054FAC(c); // 80054B4C
  c->r[29]=0u+0x00000001u; // 80054B50
L_80054B54:;
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[28]); // 80054B54
  c->r[31]=c->r[31]+0x00000001u; // 80054B58
L_80054B5C:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 80054B5C
  if (crb(c,0)) { IRQCHK(c); goto L_80054948; } // 80054B60
  c->r[4]=R32(c->r[1]+0x000000B0u); // 80054B64
  c->r[3]=R32(c->r[1]+0x000000B4u); // 80054B68
  c->r[0]=R32(c->r[1]+0x000000B8u); // 80054B6C
  W32(c->r[25]+0x00000000u,c->r[4]); // 80054B70
  W32(c->r[25]+0x00000004u,c->r[3]); // 80054B74
  W32(c->r[25]+0x00000008u,c->r[0]); // 80054B78
L_80054B7C:;
  {uint32_t ea=c->r[1]+0x00000508u; psq_load(c,31,ea,0,0);} // 80054B7C
  {uint32_t ea=c->r[1]+0x00000500u; c->f[31]=RF64(ea);} // 80054B80
  {uint32_t ea=c->r[1]+0x000004F8u; psq_load(c,30,ea,0,0);} // 80054B84
  {uint32_t ea=c->r[1]+0x000004F0u; c->f[30]=RF64(ea);} // 80054B88
  {uint32_t ea=c->r[1]+0x000004E8u; psq_load(c,29,ea,0,0);} // 80054B8C
  {uint32_t ea=c->r[1]+0x000004E0u; c->f[29]=RF64(ea);} // 80054B90
  {uint32_t ea=c->r[1]+0x000004D8u; psq_load(c,28,ea,0,0);} // 80054B94
  {uint32_t ea=c->r[1]+0x000004D0u; c->f[28]=RF64(ea);} // 80054B98
  {uint32_t ea=c->r[1]+0x000004C8u; psq_load(c,27,ea,0,0);} // 80054B9C
  {uint32_t ea=c->r[1]+0x000004C0u; c->f[27]=RF64(ea);} // 80054BA0
  {uint32_t ea=c->r[1]+0x000004B8u; psq_load(c,26,ea,0,0);} // 80054BA4
  c->r[11]=c->r[1]+0x000004B0u; // 80054BA8
  {uint32_t ea=c->r[1]+0x000004B0u; c->f[26]=RF64(ea);} // 80054BAC
  c->lr=0x80054BB4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80054BB0
  c->r[0]=R32(c->r[1]+0x00000514u); // 80054BB4
  c->lr=c->r[0]; // 80054BB8
  c->r[1]=c->r[1]+0x00000510u; // 80054BBC
  return; // 80054BC0
}

// fn_80054BC4
void f_80054BC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054BC4
  c->r[0]=c->lr; // 80054BC8
  W32(c->r[1]+0x00000094u,c->r[0]); // 80054BCC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 80054BD0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 80054BD4
  c->r[11]=c->r[1]+0x00000080u; // 80054BD8
  c->lr=0x80054BE0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80054BDC
  c->r[24]=c->r[4]|c->r[4]; // 80054BE0
  c->r[25]=c->r[5]|c->r[5]; // 80054BE4
  c->r[26]=c->r[6]|c->r[6]; // 80054BE8
  c->r[27]=c->r[7]|c->r[7]; // 80054BEC
  c->r[28]=c->r[8]|c->r[8]; // 80054BF0
  c->r[3]=c->r[24]|c->r[24]; // 80054BF4
  c->r[29]=0u+0x00000000u; // 80054BF8
  c->r[31]=0u+0x00000000u; // 80054BFC
  c->r[4]=0u+0x00000000u; // 80054C00
  c->r[5]=0u+0x00000304u; // 80054C04
  c->lr=0x80054C0Cu; f_8000443C(c); // 80054C08
  c->r[0]=0u+0xFFFFFFFFu; // 80054C0C
  c->r[30]=0u+0x00000000u; // 80054C10
  W32(c->r[25]+0x00000000u,c->r[0]); // 80054C14
  W32(c->r[25]+0x00000004u,c->r[0]); // 80054C18
  W32(c->r[25]+0x00000008u,c->r[0]); // 80054C1C
L_80054C20:;
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054C20
  c->r[4]=c->r[28]|c->r[28]; // 80054C24
  c->r[3]=c->r[1]+0x00000044u; // 80054C28
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 80054C2C
  {uint32_t ea=c->r[26]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054C30
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 80054C34
  {uint32_t ea=c->r[26]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80054C38
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80054C3C
  {uint32_t ea=c->r[26]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054C40
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 80054C44
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054C48
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80054C4C
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054C50
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80054C54
  c->r[12]=R32(c->r[28]+0x00000000u); // 80054C58
  c->r[12]=R32(c->r[12]+0x000000F8u); // 80054C5C
  c->ctr=c->r[12]; // 80054C60
  if (true) { c->lr=0x80054C68u; dispatch(c,c->ctr); } // 80054C64
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054C68
  c->r[4]=c->r[28]|c->r[28]; // 80054C6C
  c->r[3]=c->r[1]+0x00000038u; // 80054C70
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80054C74
  c->r[12]=R32(c->r[28]+0x00000000u); // 80054C78
  c->r[12]=R32(c->r[12]+0x000000F8u); // 80054C7C
  c->ctr=c->r[12]; // 80054C80
  if (true) { c->lr=0x80054C88u; dispatch(c,c->ctr); } // 80054C84
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054C88
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80054C8C
  c->r[3]=R32(c->r[28]+0x00000034u); // 80054C90
  c->r[0]=R32(c->r[28]+0x00000038u); // 80054C94
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80054C98
  c->r[4]=R32(c->r[28]+0x0000003Cu); // 80054C9C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80054CA0
  W32(c->r[1]+0x00000030u,c->r[0]); // 80054CA4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80054CA8
  c->r[0]=R32(c->r[28]+0x0000003Cu); // 80054CAC
  c->r[3]=R32(c->r[28]+0x00000034u); // 80054CB0
  W32(c->r[1]+0x00000028u,c->r[0]); // 80054CB4
  c->r[0]=R32(c->r[28]+0x00000038u); // 80054CB8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054CBC
  W32(c->r[1]+0x00000034u,c->r[4]); // 80054CC0
  W32(c->r[1]+0x00000020u,c->r[3]); // 80054CC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80054CC8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80054CCC
  c->lr=0x80054CD4u; f_80013AA4(c); // 80054CD0
  c->f[31]=c->f[1]; // 80054CD4
  c->lr=0x80054CDCu; f_800076EC(c); // 80054CD8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80054CDC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054CE0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80054CE4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80054CE8
  c->lr=0x80054CF0u; f_80013AA4(c); // 80054CEC
  c->f[31]=c->f[1]; // 80054CF0
  c->lr=0x80054CF8u; f_800076EC(c); // 80054CF4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80054CF8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054CFC
  c->r[3]=c->r[28]|c->r[28]; // 80054D00
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80054D04
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80054D08
  c->r[12]=R32(c->r[28]+0x00000000u); // 80054D0C
  c->r[12]=R32(c->r[12]+0x000000F0u); // 80054D10
  c->ctr=c->r[12]; // 80054D14
  if (true) { c->lr=0x80054D1Cu; dispatch(c,c->ctr); } // 80054D18
  c->r[3]=c->r[24]|c->r[24]; // 80054D1C
  c->r[4]=c->r[1]+0x00000018u; // 80054D20
  c->r[5]=c->r[1]+0x00000010u; // 80054D24
  c->r[6]=c->r[1]+0x00000050u; // 80054D28
  c->r[7]=c->r[1]+0x00000058u; // 80054D2C
  c->r[8]=c->r[1]+0x00000008u; // 80054D30
  c->lr=0x80054D38u; f_80092978(c); // 80054D34
  cmps(c,0,(int32_t)c->r[3],1); // 80054D38
  if (!crb(c,2)) { goto L_80054D4C; } // 80054D3C
  W32(c->r[25]+c->r[31],c->r[30]); // 80054D40
  c->r[29]=c->r[29]+0x00000001u; // 80054D44
  c->r[31]=c->r[31]+0x00000004u; // 80054D48
L_80054D4C:;
  c->r[30]=c->r[30]+0x00000001u; // 80054D4C
  c->r[27]=c->r[27]+0x0000000Cu; // 80054D50
  cmps(c,0,(int32_t)c->r[30],3); // 80054D54
  c->r[26]=c->r[26]+0x00000018u; // 80054D58
  if (crb(c,0)) { IRQCHK(c); goto L_80054C20; } // 80054D5C
  c->r[3]=c->r[29]|c->r[29]; // 80054D60
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 80054D64
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 80054D68
  c->r[11]=c->r[1]+0x00000080u; // 80054D6C
  c->lr=0x80054D74u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80054D70
  c->r[0]=R32(c->r[1]+0x00000094u); // 80054D74
  c->lr=c->r[0]; // 80054D78
  c->r[1]=c->r[1]+0x00000090u; // 80054D7C
  return; // 80054D80
}

// fn_80054D84
void f_80054D84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054D84
  c->r[0]=c->lr; // 80054D88
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80054D8C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 80054D90
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 80054D94
  c->r[11]=c->r[1]+0x000000D0u; // 80054D98
  c->lr=0x80054DA0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80054D9C
  c->r[27]=c->r[6]|c->r[6]; // 80054DA0
  c->r[0]=0u+0x00000000u; // 80054DA4
  c->r[12]=R32(c->r[27]+0x00000000u); // 80054DA8
  c->r[24]=c->r[3]|c->r[3]; // 80054DAC
  c->r[25]=c->r[4]|c->r[4]; // 80054DB0
  c->r[3]=c->r[27]|c->r[27]; // 80054DB4
  c->r[12]=R32(c->r[12]+0x000001C4u); // 80054DB8
  c->r[26]=c->r[5]|c->r[5]; // 80054DBC
  c->r[28]=c->r[7]|c->r[7]; // 80054DC0
  W32(c->r[1]+0x00000098u,c->r[0]); // 80054DC4
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80054DC8
  W32(c->r[1]+0x000000A0u,c->r[0]); // 80054DCC
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 80054DD0
  W32(c->r[1]+0x00000090u,c->r[0]); // 80054DD4
  W32(c->r[1]+0x00000094u,c->r[0]); // 80054DD8
  c->ctr=c->r[12]; // 80054DDC
  if (true) { c->lr=0x80054DE4u; dispatch(c,c->ctr); } // 80054DE0
  cmps(c,0,(int32_t)c->r[3],0); // 80054DE4
  if (!crb(c,2)) { goto L_80054E08; } // 80054DE8
  c->r[4]=R32(c->r[1]+0x00000098u); // 80054DEC
  c->r[3]=R32(c->r[1]+0x0000009Cu); // 80054DF0
  c->r[0]=R32(c->r[1]+0x000000A0u); // 80054DF4
  W32(c->r[24]+0x00000000u,c->r[4]); // 80054DF8
  W32(c->r[24]+0x00000004u,c->r[3]); // 80054DFC
  W32(c->r[24]+0x00000008u,c->r[0]); // 80054E00
  goto L_80054F8C; // 80054E04
L_80054E08:;
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[31]=c->ps1[31]=RF32(ea);} // 80054E08
  c->r[31]=c->r[26]|c->r[26]; // 80054E0C
  c->r[30]=c->r[26]|c->r[26]; // 80054E10
  c->r[29]=0u+0x00000000u; // 80054E14
  goto L_80054F68; // 80054E18
L_80054E1C:;
  c->r[4]=R32(c->r[25]+0x00000034u); // 80054E1C
  cmps(c,0,(int32_t)c->r[28],1); // 80054E20
  c->r[3]=R32(c->r[25]+0x00000038u); // 80054E24
  c->r[0]=R32(c->r[25]+0x0000003Cu); // 80054E28
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 80054E2C
  W32(c->r[1]+0x00000030u,c->r[3]); // 80054E30
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80054E34
  W32(c->r[1]+0x00000034u,c->r[0]); // 80054E38
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054E3C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054E40
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 80054E44
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 80054E48
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80054E4C
  {uint32_t ea=c->r[31]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054E50
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[31]);} // 80054E54
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 80054E58
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 80054E5C
  {uint32_t ea=c->r[31]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054E60
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 80054E64
  {uint32_t ea=c->r[31]+0x00000244u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054E68
  {uint32_t ea=c->r[31]+0x00000248u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054E6C
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 80054E70
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 80054E74
  if (!crb(c,2)) { goto L_80054E9C; } // 80054E78
  c->r[3]=c->r[1]+0x00000080u; // 80054E7C
  c->r[4]=c->r[1]+0x00000068u; // 80054E80
  c->r[5]=c->r[1]+0x00000050u; // 80054E84
  c->lr=0x80054E8Cu; f_80164808(c); // 80054E88
  c->r[3]=c->r[1]+0x00000050u; // 80054E8C
  c->r[4]=c->r[1]+0x0000005Cu; // 80054E90
  c->lr=0x80054E98u; f_80164848(c); // 80054E94
  goto L_80054EA8; // 80054E98
L_80054E9C:;
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 80054E9C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[31]);} // 80054EA0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80054EA4
L_80054EA8:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 80054EA8
  c->r[4]=c->r[27]|c->r[27]; // 80054EAC
  c->r[3]=c->r[1]+0x00000020u; // 80054EB0
  c->r[12]=R32(c->r[12]+0x000000F8u); // 80054EB4
  c->ctr=c->r[12]; // 80054EB8
  if (true) { c->lr=0x80054EC0u; dispatch(c,c->ctr); } // 80054EBC
  c->r[6]=R32(c->r[1]+0x00000020u); // 80054EC0
  c->r[4]=c->r[27]|c->r[27]; // 80054EC4
  c->r[8]=R32(c->r[1]+0x00000024u); // 80054EC8
  c->r[3]=c->r[1]+0x00000014u; // 80054ECC
  c->r[0]=R32(c->r[1]+0x00000028u); // 80054ED0
  c->r[5]=c->r[1]+0x00000044u; // 80054ED4
  W32(c->r[1]+0x00000044u,c->r[6]); // 80054ED8
  c->r[6]=c->r[1]+0x00000038u; // 80054EDC
  c->r[7]=c->r[1]+0x0000005Cu; // 80054EE0
  W32(c->r[1]+0x00000048u,c->r[8]); // 80054EE4
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80054EE8
  c->r[12]=R32(c->r[27]+0x00000000u); // 80054EEC
  {uint32_t ea=c->r[30]+0x000001E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054EF0
  c->r[12]=R32(c->r[12]+0x00000238u); // 80054EF4
  {uint32_t ea=c->r[25]+0x00000208u; c->f[2]=c->ps1[2]=RF32(ea);} // 80054EF8
  c->ctr=c->r[12]; // 80054EFC
  if (true) { c->lr=0x80054F04u; dispatch(c,c->ctr); } // 80054F00
  c->r[6]=R32(c->r[1]+0x00000038u); // 80054F04
  c->r[3]=c->r[27]|c->r[27]; // 80054F08
  c->r[5]=R32(c->r[1]+0x0000003Cu); // 80054F0C
  c->r[4]=c->r[1]+0x00000008u; // 80054F10
  c->r[0]=R32(c->r[1]+0x00000040u); // 80054F14
  W32(c->r[1]+0x00000008u,c->r[6]); // 80054F18
  c->r[6]=R32(c->r[1]+0x00000014u); // 80054F1C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80054F20
  c->r[5]=R32(c->r[1]+0x00000018u); // 80054F24
  W32(c->r[1]+0x00000010u,c->r[0]); // 80054F28
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80054F2C
  c->r[12]=R32(c->r[27]+0x00000000u); // 80054F30
  W32(c->r[1]+0x00000098u,c->r[6]); // 80054F34
  c->r[12]=R32(c->r[12]+0x000000FCu); // 80054F38
  W32(c->r[1]+0x0000009Cu,c->r[5]); // 80054F3C
  W32(c->r[1]+0x000000A0u,c->r[0]); // 80054F40
  c->ctr=c->r[12]; // 80054F44
  if (true) { c->lr=0x80054F4Cu; dispatch(c,c->ctr); } // 80054F48
  c->r[3]=R32(c->r[1]+0x00000090u); // 80054F4C
  c->r[31]=c->r[31]+0x00000008u; // 80054F50
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 80054F54
  c->r[30]=c->r[30]+0x00000004u; // 80054F58
  c->r[29]=c->r[29]+0x00000001u; // 80054F5C
  c->r[0]=c->r[3]|c->r[0]; // 80054F60
  W32(c->r[1]+0x00000090u,c->r[0]); // 80054F64
L_80054F68:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 80054F68
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80054F6C
  if (crb(c,0)) { IRQCHK(c); goto L_80054E1C; } // 80054F70
  c->r[4]=R32(c->r[1]+0x0000008Cu); // 80054F74
  c->r[3]=R32(c->r[1]+0x00000090u); // 80054F78
  c->r[0]=R32(c->r[1]+0x00000094u); // 80054F7C
  W32(c->r[24]+0x00000000u,c->r[4]); // 80054F80
  W32(c->r[24]+0x00000004u,c->r[3]); // 80054F84
  W32(c->r[24]+0x00000008u,c->r[0]); // 80054F88
L_80054F8C:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 80054F8C
  c->r[11]=c->r[1]+0x000000D0u; // 80054F90
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 80054F94
  c->lr=0x80054F9Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80054F98
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80054F9C
  c->lr=c->r[0]; // 80054FA0
  c->r[1]=c->r[1]+0x000000E0u; // 80054FA4
  return; // 80054FA8
}

// fn_80054FAC
void f_80054FAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFCE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054FAC
  c->r[0]=c->lr; // 80054FB0
  W32(c->r[1]+0x00000324u,c->r[0]); // 80054FB4
  {uint32_t ea=c->r[1]+0x00000310u; WF64(ea,c->f[31]);} // 80054FB8
  {uint32_t ea=c->r[1]+0x00000318u; psq_store(c,31,ea,0,0);} // 80054FBC
  {uint32_t ea=c->r[1]+0x00000300u; WF64(ea,c->f[30]);} // 80054FC0
  {uint32_t ea=c->r[1]+0x00000308u; psq_store(c,30,ea,0,0);} // 80054FC4
  c->r[11]=c->r[1]+0x00000300u; // 80054FC8
  c->lr=0x80054FD0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80054FCC
  c->r[28]=c->r[6]|c->r[6]; // 80054FD0
  c->r[31]=0u+0x00000000u; // 80054FD4
  c->r[12]=R32(c->r[28]+0x00000000u); // 80054FD8
  c->r[26]=c->r[4]|c->r[4]; // 80054FDC
  c->r[25]=c->r[3]|c->r[3]; // 80054FE0
  c->f[30]=c->f[1]; // 80054FE4
  c->r[12]=R32(c->r[12]+0x000000F8u); // 80054FE8
  c->f[31]=c->f[2]; // 80054FEC
  c->r[4]=c->r[28]|c->r[28]; // 80054FF0
  c->r[27]=c->r[5]|c->r[5]; // 80054FF4
  c->r[23]=c->r[7]|c->r[7]; // 80054FF8
  c->r[29]=c->r[8]|c->r[8]; // 80054FFC
  W32(c->r[1]+0x00000158u,c->r[31]); // 80055000
  c->r[3]=c->r[1]+0x0000008Cu; // 80055004
  W32(c->r[1]+0x0000015Cu,c->r[31]); // 80055008
  W32(c->r[1]+0x00000160u,c->r[31]); // 8005500C
  W32(c->r[1]+0x0000014Cu,c->r[31]); // 80055010
  W32(c->r[1]+0x00000150u,c->r[31]); // 80055014
  W32(c->r[1]+0x00000154u,c->r[31]); // 80055018
  c->ctr=c->r[12]; // 8005501C
  if (true) { c->lr=0x80055024u; dispatch(c,c->ctr); } // 80055020
  c->r[12]=R32(c->r[28]+0x00000000u); // 80055024
  c->r[3]=c->r[28]|c->r[28]; // 80055028
  c->r[12]=R32(c->r[12]+0x000001C4u); // 8005502C
  c->ctr=c->r[12]; // 80055030
  if (true) { c->lr=0x80055038u; dispatch(c,c->ctr); } // 80055034
  cmps(c,0,(int32_t)c->r[3],0); // 80055038
  if (!crb(c,2)) { goto L_8005505C; } // 8005503C
  c->r[4]=c->r[31]|c->r[31]; // 80055040
  c->r[3]=c->r[31]|c->r[31]; // 80055044
  c->r[0]=c->r[31]|c->r[31]; // 80055048
  W32(c->r[25]+0x00000000u,c->r[4]); // 8005504C
  W32(c->r[25]+0x00000004u,c->r[3]); // 80055050
  W32(c->r[25]+0x00000008u,c->r[0]); // 80055054
  goto L_8005554C; // 80055058
L_8005505C:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 8005505C
  cmps(c,0,(int32_t)c->r[0],0); // 80055060
  if (crb(c,1)) { goto L_80055084; } // 80055064
  c->r[4]=c->r[31]|c->r[31]; // 80055068
  c->r[3]=c->r[31]|c->r[31]; // 8005506C
  c->r[0]=c->r[31]|c->r[31]; // 80055070
  W32(c->r[25]+0x00000000u,c->r[4]); // 80055074
  W32(c->r[25]+0x00000004u,c->r[3]); // 80055078
  W32(c->r[25]+0x00000008u,c->r[0]); // 8005507C
  goto L_8005554C; // 80055080
L_80055084:;
  c->f[1]=c->f[30]; // 80055084
  c->r[3]=c->r[26]|c->r[26]; // 80055088
  c->f[2]=c->f[31]; // 8005508C
  c->r[4]=c->r[1]+0x00000140u; // 80055090
  c->lr=0x80055098u; f_800559B4(c); // 80055094
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055098
  fcmp(c,0,c->f[1],c->f[0]); // 8005509C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800550A0
  if (!crb(c,2)) { goto L_800550C4; } // 800550A4
  c->r[4]=c->r[31]|c->r[31]; // 800550A8
  c->r[3]=c->r[31]|c->r[31]; // 800550AC
  c->r[0]=c->r[31]|c->r[31]; // 800550B0
  W32(c->r[25]+0x00000000u,c->r[4]); // 800550B4
  W32(c->r[25]+0x00000004u,c->r[3]); // 800550B8
  W32(c->r[25]+0x00000008u,c->r[0]); // 800550BC
  goto L_8005554C; // 800550C0
L_800550C4:;
  c->r[7]=R32(c->r[26]+0x00000034u); // 800550C4
  c->r[4]=c->r[23]|c->r[23]; // 800550C8
  c->r[6]=R32(c->r[26]+0x00000038u); // 800550CC
  c->r[3]=c->r[1]+0x00000168u; // 800550D0
  c->r[0]=R32(c->r[26]+0x0000003Cu); // 800550D4
  c->r[5]=c->r[1]+0x00000174u; // 800550D8
  W32(c->r[1]+0x00000080u,c->r[7]); // 800550DC
  W32(c->r[1]+0x00000084u,c->r[6]); // 800550E0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800550E4
  W32(c->r[1]+0x00000088u,c->r[0]); // 800550E8
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800550EC
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800550F0
  {uint32_t ea=c->r[1]+0x00000168u; WF32(ea,c->f[2]);} // 800550F4
  {uint32_t ea=c->r[1]+0x0000016Cu; WF32(ea,c->f[1]);} // 800550F8
  {uint32_t ea=c->r[1]+0x00000170u; WF32(ea,c->f[0]);} // 800550FC
  c->lr=0x80055104u; f_801647E4(c); // 80055100
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[31]=c->ps1[31]=RF32(ea);} // 80055104
  c->r[24]=c->r[27]|c->r[27]; // 80055108
  c->r[30]=0u+0x00000000u; // 8005510C
  c->r[23]=0u+0x00000000u; // 80055110
  goto L_800552A8; // 80055114
L_80055118:;
  c->r[4]=R32(c->r[26]+0x00000034u); // 80055118
  cmps(c,0,(int32_t)c->r[29],1); // 8005511C
  c->r[3]=R32(c->r[26]+0x00000038u); // 80055120
  c->r[0]=R32(c->r[26]+0x0000003Cu); // 80055124
  W32(c->r[1]+0x00000074u,c->r[4]); // 80055128
  W32(c->r[1]+0x00000078u,c->r[3]); // 8005512C
  {uint32_t ea=c->r[1]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 80055130
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 80055134
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80055138
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8005513C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 80055140
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[1]);} // 80055144
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 80055148
  {uint32_t ea=c->r[24]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005514C
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[31]);} // 80055150
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[0]);} // 80055154
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[1]);} // 80055158
  {uint32_t ea=c->r[24]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005515C
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[0]);} // 80055160
  {uint32_t ea=c->r[24]+0x00000244u; c->f[1]=c->ps1[1]=RF32(ea);} // 80055164
  {uint32_t ea=c->r[24]+0x00000248u; c->f[0]=c->ps1[0]=RF32(ea);} // 80055168
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[1]);} // 8005516C
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[0]);} // 80055170
  if (!crb(c,2)) { goto L_80055198; } // 80055174
  c->r[3]=c->r[1]+0x0000011Cu; // 80055178
  c->r[4]=c->r[1]+0x00000104u; // 8005517C
  c->r[5]=c->r[1]+0x000000ECu; // 80055180
  c->lr=0x80055188u; f_80164808(c); // 80055184
  c->r[3]=c->r[1]+0x000000ECu; // 80055188
  c->r[4]=c->r[1]+0x000000F8u; // 8005518C
  c->lr=0x80055194u; f_80164848(c); // 80055190
  goto L_800551A4; // 80055194
L_80055198:;
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[1]);} // 80055198
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[31]);} // 8005519C
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 800551A0
L_800551A4:;
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 800551A4
  c->r[3]=c->r[1]+0x00000168u; // 800551A8
  {uint32_t ea=c->r[1]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800551AC
  c->r[4]=c->r[1]+0x00000174u; // 800551B0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 800551B4
  c->r[5]=c->r[1]+0x000000C8u; // 800551B8
  c->r[8]=R32(c->r[1]+0x00000014u); // 800551BC
  c->r[6]=c->r[1]+0x00000128u; // 800551C0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 800551C4
  c->r[7]=R32(c->r[1]+0x00000018u); // 800551C8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800551CC
  W32(c->r[1]+0x000000D4u,c->r[8]); // 800551D0
  W32(c->r[1]+0x000000D8u,c->r[7]); // 800551D4
  W32(c->r[1]+0x000000DCu,c->r[0]); // 800551D8
  {uint32_t ea=c->r[24]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800551DC
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[0]);} // 800551E0
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[1]);} // 800551E4
  {uint32_t ea=c->r[24]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800551E8
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 800551EC
  {uint32_t ea=c->r[24]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 800551F0
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 800551F4
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[1]);} // 800551F8
  {uint32_t ea=c->r[24]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 800551FC
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 80055200
  c->lr=0x80055208u; f_800938C4(c); // 80055204
  c->r[3]=c->r[1]+0x00000140u; // 80055208
  c->r[4]=c->r[1]+0x00000134u; // 8005520C
  c->lr=0x80055214u; f_8016482C(c); // 80055210
  {uint32_t ea=c->r[1]+0x00000134u; c->f[2]=c->ps1[2]=RF32(ea);} // 80055214
  c->r[3]=c->r[1]+0x000000E0u; // 80055218
  {uint32_t ea=c->r[1]+0x00000138u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005521C
  c->r[4]=c->r[1]+0x000000C8u; // 80055220
  {uint32_t ea=c->r[1]+0x0000013Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055224
  c->r[5]=c->r[1]+0x000000B0u; // 80055228
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[2]);} // 8005522C
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 80055230
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 80055234
  c->lr=0x8005523Cu; f_80164808(c); // 80055238
  c->r[3]=c->r[1]+0x000000B0u; // 8005523C
  c->r[4]=c->r[1]+0x00000140u; // 80055240
  c->lr=0x80055248u; f_801648E8(c); // 80055244
  fcmp(c,0,c->f[1],c->f[31]); // 80055248
  if (!crb(c,1)) { goto L_800552A0; } // 8005524C
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80055250
  c->r[3]=c->r[1]+0x000000E0u; // 80055254
  c->r[4]=c->r[1]+0x000000D4u; // 80055258
  c->r[5]=c->r[1]+0x000000C8u; // 8005525C
  c->f[2]=c->f[1]; // 80055260
  c->r[6]=c->r[1]+0x000000BCu; // 80055264
  c->f[3]=c->f[1]; // 80055268
  c->r[7]=c->r[1]+0x00000180u; // 8005526C
  c->f[4]=c->f[1]; // 80055270
  c->f[5]=c->f[1]; // 80055274
  c->lr=0x8005527Cu; f_8008F9A8(c); // 80055278
  {uint32_t ea=c->r[1]+0x00000198u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005527C
  c->r[3]=c->r[1]+0x000001B0u; // 80055280
  {uint32_t ea=c->r[1]+0x0000019Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80055284
  c->r[30]=c->r[30]+0x00000001u; // 80055288
  {uint32_t ea=c->r[3]+c->r[31]; WF32(ea,c->f[0]); c->r[3]=ea;} // 8005528C
  c->r[31]=c->r[31]+0x0000000Cu; // 80055290
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80055294
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80055298
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8005529C
L_800552A0:;
  c->r[24]=c->r[24]+0x00000008u; // 800552A0
  c->r[23]=c->r[23]+0x00000001u; // 800552A4
L_800552A8:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 800552A8
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 800552AC
  if (crb(c,0)) { IRQCHK(c); goto L_80055118; } // 800552B0
  cmps(c,0,(int32_t)c->r[30],0); // 800552B4
  if (!crb(c,1)) { goto L_8005551C; } // 800552B8
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800552BC
  c->r[27]=c->r[1]+0x000001B0u; // 800552C0
  c->r[24]=0u+0x00000000u; // 800552C4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800552C8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800552CC
  c->r[4]=R32(c->r[1]+0x00000008u); // 800552D0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800552D4
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800552D8
  c->r[0]=R32(c->r[1]+0x00000010u); // 800552DC
  W32(c->r[1]+0x000000A4u,c->r[4]); // 800552E0
  W32(c->r[1]+0x000000A8u,c->r[3]); // 800552E4
  W32(c->r[1]+0x000000ACu,c->r[0]); // 800552E8
  goto L_80055308; // 800552EC
L_800552F0:;
  c->r[3]=c->r[1]+0x000000A4u; // 800552F0
  c->r[4]=c->r[27]|c->r[27]; // 800552F4
  c->r[5]=c->r[3]|c->r[3]; // 800552F8
  c->lr=0x80055300u; f_801647E4(c); // 800552FC
  c->r[27]=c->r[27]+0x0000000Cu; // 80055300
  c->r[24]=c->r[24]+0x00000001u; // 80055304
L_80055308:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[30]); // 80055308
  if (crb(c,0)) { IRQCHK(c); goto L_800552F0; } // 8005530C
  c->r[3]=c->r[30]^0x80000000u; // 80055310
  c->r[0]=0u+0x43300000u; // 80055314
  W32(c->r[1]+0x000002D4u,c->r[3]); // 80055318
  c->r[3]=c->r[1]+0x000000A4u; // 8005531C
  {uint32_t ea=c->r[2]+0xFFFF8BF8u; c->f[2]=RF64(ea);} // 80055320
  c->r[4]=c->r[3]|c->r[3]; // 80055324
  W32(c->r[1]+0x000002D0u,c->r[0]); // 80055328
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005532C
  {uint32_t ea=c->r[1]+0x000002D0u; c->f[1]=RF64(ea);} // 80055330
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80055334
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 80055338
  c->lr=0x80055340u; f_8016482C(c); // 8005533C
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80055340
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055344
  fcmp(c,0,c->f[1],c->f[0]); // 80055348
  if (!crb(c,1)) { goto L_80055380; } // 8005534C
  c->r[3]=c->r[1]+0x000000A4u; // 80055350
  c->lr=0x80055358u; f_801648A4(c); // 80055354
  {uint32_t ea=c->r[2]+0xFFFF8C04u; c->f[0]=c->ps1[0]=RF32(ea);} // 80055358
  fcmp(c,0,c->f[1],c->f[0]); // 8005535C
  if (!crb(c,1)) { goto L_80055380; } // 80055360
  c->r[3]=c->r[1]+0x000000A4u; // 80055364
  c->r[4]=c->r[3]|c->r[3]; // 80055368
  c->lr=0x80055370u; f_80164848(c); // 8005536C
  c->r[3]=c->r[1]+0x000000A4u; // 80055370
  {uint32_t ea=c->r[2]+0xFFFF8C04u; c->f[1]=c->ps1[1]=RF32(ea);} // 80055374
  c->r[4]=c->r[3]|c->r[3]; // 80055378
  c->lr=0x80055380u; f_8016482C(c); // 8005537C
L_80055380:;
  c->r[3]=R32(c->r[26]+0x00000220u); // 80055380
  c->r[0]=0u-c->r[3]; // 80055384
  c->r[0]=c->r[0]|c->r[3]; // 80055388
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8005538C
  cmps(c,0,(int32_t)c->r[0],1); // 80055390
  if (!crb(c,2)) { goto L_800553A8; } // 80055394
  c->r[3]=c->r[1]+0x000000A4u; // 80055398
  {uint32_t ea=c->r[2]+0xFFFF8C08u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005539C
  c->r[4]=c->r[3]|c->r[3]; // 800553A0
  c->lr=0x800553A8u; f_8016482C(c); // 800553A4
L_800553A8:;
  c->r[3]=c->r[1]+0x000000A4u; // 800553A8
  c->lr=0x800553B0u; f_801648A4(c); // 800553AC
  c->lr=0x800553B4u; f_8007AB30(c); // 800553B0
  c->lr=0x800553B8u; f_800782B8(c); // 800553B4
  cmps(c,0,(int32_t)c->r[3],3); // 800553B8
  if (!crb(c,2)) { goto L_800554E8; } // 800553BC
  c->r[0]=R32(c->r[26]+0x00000168u); // 800553C0
  cmps(c,0,(int32_t)c->r[0],2); // 800553C4
  if (!crb(c,2)) { goto L_800554C8; } // 800553C8
  c->r[12]=R32(c->r[26]+0x00000000u); // 800553CC
  c->r[3]=c->r[26]|c->r[26]; // 800553D0
  c->r[12]=R32(c->r[12]+0x000000C8u); // 800553D4
  c->ctr=c->r[12]; // 800553D8
  if (true) { c->lr=0x800553E0u; dispatch(c,c->ctr); } // 800553DC
  c->r[0]=R32(c->r[26]+0x0000003Cu); // 800553E0
  {uint32_t ea=c->r[2]+0xFFFF8BE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800553E4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800553E8
  c->r[0]=R32(c->r[28]+0x0000003Cu); // 800553EC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800553F0
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800553F4
  W32(c->r[1]+0x00000070u,c->r[0]); // 800553F8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800553FC
  c->r[5]=R32(c->r[26]+0x00000034u); // 80055400
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 80055404
  c->r[4]=R32(c->r[26]+0x00000038u); // 80055408
  c->r[3]=R32(c->r[28]+0x00000034u); // 8005540C
  fcmp(c,0,c->f[1],c->f[0]); // 80055410
  c->r[0]=R32(c->r[28]+0x00000038u); // 80055414
  W32(c->r[1]+0x0000005Cu,c->r[5]); // 80055418
  W32(c->r[1]+0x00000060u,c->r[4]); // 8005541C
  W32(c->r[1]+0x00000068u,c->r[3]); // 80055420
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 80055424
  if (!crb(c,1)) { goto L_80055440; } // 80055428
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005542C
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055430
  fcmp(c,0,c->f[1],c->f[0]); // 80055434
  if (!crb(c,1)) { goto L_80055440; } // 80055438
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 8005543C
L_80055440:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 80055440
  c->r[4]=c->r[28]|c->r[28]; // 80055444
  c->r[3]=c->r[1]+0x00000050u; // 80055448
  c->r[12]=R32(c->r[12]+0x000000F8u); // 8005544C
  c->ctr=c->r[12]; // 80055450
  if (true) { c->lr=0x80055458u; dispatch(c,c->ctr); } // 80055454
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 80055458
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8005545C
  fcmp(c,0,c->f[1],c->f[0]); // 80055460
  if (!crb(c,0)) { goto L_800554C8; } // 80055464
  c->r[12]=R32(c->r[28]+0x00000000u); // 80055468
  c->r[4]=c->r[28]|c->r[28]; // 8005546C
  c->r[3]=c->r[1]+0x00000044u; // 80055470
  c->r[12]=R32(c->r[12]+0x000000F8u); // 80055474
  c->ctr=c->r[12]; // 80055478
  if (true) { c->lr=0x80055480u; dispatch(c,c->ctr); } // 8005547C
  c->r[0]=R32(c->r[1]+0x00000048u); // 80055480
  c->r[3]=c->r[28]|c->r[28]; // 80055484
  c->r[6]=R32(c->r[1]+0x00000044u); // 80055488
  c->r[4]=c->r[1]+0x00000038u; // 8005548C
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80055490
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055494
  c->r[5]=R32(c->r[1]+0x0000004Cu); // 80055498
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 8005549C
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 800554A0
  W32(c->r[1]+0x00000038u,c->r[6]); // 800554A4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800554A8
  W32(c->r[1]+0x00000040u,c->r[5]); // 800554AC
  c->r[12]=R32(c->r[28]+0x00000000u); // 800554B0
  W32(c->r[1]+0x00000098u,c->r[6]); // 800554B4
  c->r[12]=R32(c->r[12]+0x000000FCu); // 800554B8
  W32(c->r[1]+0x000000A0u,c->r[5]); // 800554BC
  c->ctr=c->r[12]; // 800554C0
  if (true) { c->lr=0x800554C8u; dispatch(c,c->ctr); } // 800554C4
L_800554C8:;
  c->r[0]=R32(c->r[26]+0x00000168u); // 800554C8
  cmps(c,0,(int32_t)c->r[0],3); // 800554CC
  if (!crb(c,2)) { goto L_800554E8; } // 800554D0
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800554D4
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800554D8
  fcmp(c,0,c->f[1],c->f[0]); // 800554DC
  if (!crb(c,1)) { goto L_800554E8; } // 800554E0
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 800554E4
L_800554E8:;
  c->r[7]=R32(c->r[1]+0x000000A4u); // 800554E8
  c->r[4]=c->r[28]|c->r[28]; // 800554EC
  c->r[6]=R32(c->r[1]+0x000000A8u); // 800554F0
  c->r[3]=c->r[1]+0x0000002Cu; // 800554F4
  c->r[0]=R32(c->r[1]+0x000000ACu); // 800554F8
  c->r[5]=c->r[1]+0x00000020u; // 800554FC
  W32(c->r[1]+0x00000020u,c->r[7]); // 80055500
  W32(c->r[1]+0x00000024u,c->r[6]); // 80055504
  W32(c->r[1]+0x00000028u,c->r[0]); // 80055508
  c->r[12]=R32(c->r[28]+0x00000000u); // 8005550C
  c->r[12]=R32(c->r[12]+0x00000120u); // 80055510
  c->ctr=c->r[12]; // 80055514
  if (true) { c->lr=0x8005551Cu; dispatch(c,c->ctr); } // 80055518
L_8005551C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8005551C
  c->r[3]=c->r[28]|c->r[28]; // 80055520
  {uint32_t ea=c->r[2]+0xFFFF8C0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80055524
  c->r[12]=R32(c->r[12]+0x00000280u); // 80055528
  c->ctr=c->r[12]; // 8005552C
  if (true) { c->lr=0x80055534u; dispatch(c,c->ctr); } // 80055530
  c->r[4]=R32(c->r[1]+0x0000014Cu); // 80055534
  c->r[3]=R32(c->r[1]+0x00000150u); // 80055538
  c->r[0]=R32(c->r[1]+0x00000154u); // 8005553C
  W32(c->r[25]+0x00000000u,c->r[4]); // 80055540
  W32(c->r[25]+0x00000004u,c->r[3]); // 80055544
  W32(c->r[25]+0x00000008u,c->r[0]); // 80055548
L_8005554C:;
  {uint32_t ea=c->r[1]+0x00000318u; psq_load(c,31,ea,0,0);} // 8005554C
  {uint32_t ea=c->r[1]+0x00000310u; c->f[31]=RF64(ea);} // 80055550
  {uint32_t ea=c->r[1]+0x00000308u; psq_load(c,30,ea,0,0);} // 80055554
  c->r[11]=c->r[1]+0x00000300u; // 80055558
  {uint32_t ea=c->r[1]+0x00000300u; c->f[30]=RF64(ea);} // 8005555C
  c->lr=0x80055564u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80055560
  c->r[0]=R32(c->r[1]+0x00000324u); // 80055564
  c->lr=c->r[0]; // 80055568
  c->r[1]=c->r[1]+0x00000320u; // 8005556C
  return; // 80055570
}

// fn_80055574
void f_80055574(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055574
  c->r[0]=c->lr; // 80055578
  W32(c->r[1]+0x000000F4u,c->r[0]); // 8005557C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 80055580
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 80055584
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[30]);} // 80055588
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,30,ea,0,0);} // 8005558C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[29]);} // 80055590
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,29,ea,0,0);} // 80055594
  c->r[11]=c->r[1]+0x000000C0u; // 80055598
  c->lr=0x800555A0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8005559C
  c->r[29]=c->r[5]|c->r[5]; // 800555A0
  c->r[27]=c->r[3]|c->r[3]; // 800555A4
  c->r[12]=R32(c->r[29]+0x00000000u); // 800555A8
  c->f[30]=c->f[1]; // 800555AC
  c->f[29]=c->f[2]; // 800555B0
  c->r[3]=c->r[29]|c->r[29]; // 800555B4
  c->r[12]=R32(c->r[12]+0x000001C4u); // 800555B8
  c->r[28]=c->r[4]|c->r[4]; // 800555BC
  c->ctr=c->r[12]; // 800555C0
  if (true) { c->lr=0x800555C8u; dispatch(c,c->ctr); } // 800555C4
  cmps(c,0,(int32_t)c->r[3],0); // 800555C8
  if (crb(c,2)) { goto L_800557A4; } // 800555CC
  c->f[1]=c->f[30]; // 800555D0
  c->r[3]=c->r[27]|c->r[27]; // 800555D4
  c->f[2]=c->f[29]; // 800555D8
  c->r[4]=c->r[1]+0x00000098u; // 800555DC
  c->lr=0x800555E4u; f_800559B4(c); // 800555E0
  {uint32_t ea=c->r[2]+0xFFFF8C10u; c->f[31]=c->ps1[31]=RF32(ea);} // 800555E4
  c->r[31]=c->r[28]|c->r[28]; // 800555E8
  {uint32_t ea=c->r[2]+0xFFFF8C14u; c->f[30]=c->ps1[30]=RF32(ea);} // 800555EC
  c->r[30]=0u+0x00000000u; // 800555F0
  {uint32_t ea=c->r[2]+0xFFFF8BE0u; c->f[29]=c->ps1[29]=RF32(ea);} // 800555F4
  goto L_80055798; // 800555F8
L_800555FC:;
  c->r[6]=R32(c->r[29]+0x00000034u); // 800555FC
  c->r[3]=c->r[1]+0x0000008Cu; // 80055600
  c->r[0]=R32(c->r[29]+0x00000038u); // 80055604
  c->r[5]=c->r[3]|c->r[3]; // 80055608
  c->r[4]=c->r[1]+0x00000098u; // 8005560C
  W32(c->r[1]+0x0000008Cu,c->r[6]); // 80055610
  W32(c->r[1]+0x00000090u,c->r[0]); // 80055614
  c->r[0]=R32(c->r[29]+0x0000003Cu); // 80055618
  W32(c->r[1]+0x00000094u,c->r[0]); // 8005561C
  c->lr=0x80055624u; f_801647E4(c); // 80055620
  {uint32_t ea=c->r[31]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 80055624
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 80055628
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 8005562C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 80055630
  {uint32_t ea=c->r[31]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80055634
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 80055638
  c->lr=0x80055640u; f_8007AB30(c); // 8005563C
  c->lr=0x80055644u; f_800782B8(c); // 80055640
  cmps(c,0,(int32_t)c->r[3],3); // 80055644
  if (!crb(c,2)) { goto L_8005573C; } // 80055648
  c->r[0]=R32(c->r[27]+0x00000168u); // 8005564C
  cmps(c,0,(int32_t)c->r[0],2); // 80055650
  if (!crb(c,2)) { goto L_800556C8; } // 80055654
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80055658
  c->r[4]=R32(c->r[27]+0x00000034u); // 8005565C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 80055660
  c->r[3]=R32(c->r[27]+0x00000038u); // 80055664
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 80055668
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8005566C
  W32(c->r[1]+0x00000014u,c->r[4]); // 80055670
  fcmp(c,0,c->f[1],c->f[0]); // 80055674
  W32(c->r[1]+0x00000018u,c->r[3]); // 80055678
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8005567C
  W32(c->r[1]+0x00000074u,c->r[4]); // 80055680
  W32(c->r[1]+0x00000078u,c->r[3]); // 80055684
  if (!crb(c,1)) { goto L_8005573C; } // 80055688
  W32(c->r[1]+0x00000068u,c->r[4]); // 8005568C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80055690
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80055694
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 80055698
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 8005569C
  W32(c->r[1]+0x00000070u,c->r[0]); // 800556A0
  fcmp(c,0,c->f[1],c->f[0]); // 800556A4
  if (!crb(c,1)) { goto L_8005573C; } // 800556A8
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 800556AC
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800556B0
  W32(c->r[1]+0x00000060u,c->r[3]); // 800556B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 800556B8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800556BC
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 800556C0
  goto L_8005573C; // 800556C4
L_800556C8:;
  cmps(c,0,(int32_t)c->r[0],3); // 800556C8
  if (!crb(c,2)) { goto L_8005573C; } // 800556CC
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 800556D0
  c->r[4]=R32(c->r[27]+0x00000034u); // 800556D4
  W32(c->r[1]+0x00000058u,c->r[0]); // 800556D8
  c->r[3]=R32(c->r[27]+0x00000038u); // 800556DC
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800556E0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800556E4
  W32(c->r[1]+0x00000008u,c->r[4]); // 800556E8
  fcmp(c,0,c->f[1],c->f[0]); // 800556EC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800556F0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800556F4
  W32(c->r[1]+0x00000050u,c->r[4]); // 800556F8
  W32(c->r[1]+0x00000054u,c->r[3]); // 800556FC
  if (!crb(c,1)) { goto L_8005573C; } // 80055700
  W32(c->r[1]+0x00000044u,c->r[4]); // 80055704
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80055708
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005570C
  W32(c->r[1]+0x00000048u,c->r[3]); // 80055710
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80055714
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80055718
  fcmp(c,0,c->f[1],c->f[0]); // 8005571C
  if (!crb(c,1)) { goto L_8005573C; } // 80055720
  W32(c->r[1]+0x00000038u,c->r[4]); // 80055724
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80055728
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8005572C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80055730
  W32(c->r[1]+0x00000040u,c->r[0]); // 80055734
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 80055738
L_8005573C:;
  c->r[3]=c->r[1]+0x0000008Cu; // 8005573C
  c->r[4]=c->r[1]+0x00000080u; // 80055740
  c->r[5]=c->r[1]+0x00000020u; // 80055744
  c->lr=0x8005574Cu; f_80164808(c); // 80055748
  c->r[3]=c->r[1]+0x00000020u; // 8005574C
  c->lr=0x80055754u; f_801648A4(c); // 80055750
  fcmp(c,0,c->f[1],c->f[31]); // 80055754
  if (!crb(c,0)) { goto L_80055790; } // 80055758
  c->r[4]=R32(c->r[1]+0x00000080u); // 8005575C
  c->f[31]=c->f[1]; // 80055760
  c->r[3]=R32(c->r[1]+0x00000084u); // 80055764
  c->r[0]=R32(c->r[1]+0x00000088u); // 80055768
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8005576C
  W32(c->r[1]+0x00000030u,c->r[3]); // 80055770
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80055774
  W32(c->r[1]+0x00000034u,c->r[0]); // 80055778
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005577C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80055780
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[2]);} // 80055784
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[1]);} // 80055788
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 8005578C
L_80055790:;
  c->r[31]=c->r[31]+0x00000008u; // 80055790
  c->r[30]=c->r[30]+0x00000001u; // 80055794
L_80055798:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 80055798
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8005579C
  if (crb(c,0)) { IRQCHK(c); goto L_800555FC; } // 800557A0
L_800557A4:;
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 800557A4
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 800557A8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,30,ea,0,0);} // 800557AC
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[30]=RF64(ea);} // 800557B0
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,29,ea,0,0);} // 800557B4
  c->r[11]=c->r[1]+0x000000C0u; // 800557B8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[29]=RF64(ea);} // 800557BC
  c->lr=0x800557C4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800557C0
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800557C4
  c->lr=c->r[0]; // 800557C8
  c->r[1]=c->r[1]+0x000000F0u; // 800557CC
  return; // 800557D0
}

// fn_800557D4
void f_800557D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 800557D4
  c->r[0]=c->lr; // 800557D8
  W32(c->r[1]+0x00000104u,c->r[0]); // 800557DC
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 800557E0
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 800557E4
  W32(c->r[1]+0x000000ECu,c->r[31]); // 800557E8
  c->r[31]=c->r[3]|c->r[3]; // 800557EC
  W32(c->r[1]+0x000000E8u,c->r[30]); // 800557F0
  c->r[0]=R32(c->r[3]+0x00000224u); // 800557F4
  cmps(c,0,(int32_t)c->r[0],0); // 800557F8
  if (!crb(c,1)) { goto L_80055808; } // 800557FC
  c->r[3]=0u+0x00000000u; // 80055800
  goto L_80055994; // 80055804
L_80055808:;
  c->r[3]=c->r[1]+0x00000038u; // 80055808
  c->r[4]=0u+0x00000000u; // 8005580C
  c->r[5]=0u+0x00000040u; // 80055810
  c->lr=0x80055818u; f_8000443C(c); // 80055814
  c->r[3]=c->r[1]+0x00000078u; // 80055818
  c->r[4]=0u+0x00000000u; // 8005581C
  c->r[5]=0u+0x00000068u; // 80055820
  c->lr=0x80055828u; f_8000443C(c); // 80055824
  c->r[5]=R32(c->r[31]+0x00000034u); // 80055828
  c->r[3]=c->r[31]|c->r[31]; // 8005582C
  c->r[4]=R32(c->r[31]+0x00000038u); // 80055830
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80055834
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 80055838
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 8005583C
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80055840
  W32(c->r[1]+0x00000030u,c->r[4]); // 80055844
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80055848
  W32(c->r[1]+0x00000034u,c->r[0]); // 8005584C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[4]=c->ps1[4]=RF32(ea);} // 80055850
  {uint32_t ea=c->r[1]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 80055854
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80055858
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8005585C
  c->r[5]=R32(c->r[1]+0x00000008u); // 80055860
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80055864
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80055868
  c->r[0]=R32(c->r[1]+0x00000010u); // 8005586C
  W32(c->r[1]+0x00000014u,c->r[5]); // 80055870
  W32(c->r[1]+0x00000018u,c->r[4]); // 80055874
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80055878
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8005587C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80055880
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[5]);} // 80055884
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055888
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[4]);} // 8005588C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[3]);} // 80055890
  c->r[5]=R32(c->r[31]+0x00000040u); // 80055894
  c->r[4]=R32(c->r[31]+0x00000044u); // 80055898
  c->r[0]=R32(c->r[31]+0x00000048u); // 8005589C
  W32(c->r[1]+0x00000020u,c->r[5]); // 800558A0
  W32(c->r[1]+0x00000024u,c->r[4]); // 800558A4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 800558A8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800558AC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 800558B0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800558B4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[5]);} // 800558B8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[4]);} // 800558BC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[3]);} // 800558C0
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 800558C4
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 800558C8
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800558CC
  c->r[12]=R32(c->r[31]+0x00000000u); // 800558D0
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800558D4
  c->r[12]=R32(c->r[12]+0x000000C8u); // 800558D8
  c->ctr=c->r[12]; // 800558DC
  if (true) { c->lr=0x800558E4u; dispatch(c,c->ctr); } // 800558E0
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[31]); // 800558E4
  c->r[30]=0u+0x00000000u; // 800558E8
  {uint32_t ea=c->r[2]+0xFFFF8BE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800558EC
  c->r[3]=c->r[31]|c->r[31]; // 800558F0
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800558F4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800558F8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 800558FC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 80055900
  W16(c->r[1]+0x00000068u,c->r[30]); // 80055904
  W16(c->r[1]+0x0000006Au,c->r[30]); // 80055908
  W32(c->r[1]+0x00000070u,c->r[31]); // 8005590C
  c->lr=0x80055914u; f_80050BF4(c); // 80055910
  c->r[0]=0u+0x00000001u; // 80055914
  W32(c->r[1]+0x00000074u,c->r[3]); // 80055918
  W32(c->r[1]+0x00000090u,c->r[30]); // 8005591C
  W32(c->r[1]+0x00000094u,c->r[0]); // 80055920
  W32(c->r[1]+0x00000098u,c->r[30]); // 80055924
  c->r[3]=R32(c->r[31]+0x00000220u); // 80055928
  c->r[0]=0u-c->r[3]; // 8005592C
  c->r[0]=c->r[0]|c->r[3]; // 80055930
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80055934
  cmps(c,0,(int32_t)c->r[0],1); // 80055938
  if (!crb(c,2)) { goto L_80055990; } // 8005593C
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 80055940
  c->r[4]=c->r[1]+0x00000038u; // 80055944
  c->r[5]=c->r[1]+0x00000078u; // 80055948
  c->r[0]=c->r[0]|0x00000004u; // 8005594C
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 80055950
  c->r[12]=R32(c->r[3]+0x00000000u); // 80055954
  c->r[12]=R32(c->r[12]+0x000000D4u); // 80055958
  c->ctr=c->r[12]; // 8005595C
  if (true) { c->lr=0x80055964u; dispatch(c,c->ctr); } // 80055960
  c->r[0]=R32(c->r[1]+0x00000088u); // 80055964
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80055968
  if (crb(c,2)) { goto L_80055990; } // 8005596C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80055970
  c->r[3]=c->r[31]|c->r[31]; // 80055974
  c->r[12]=R32(c->r[12]+0x000000DCu); // 80055978
  c->ctr=c->r[12]; // 8005597C
  if (true) { c->lr=0x80055984u; dispatch(c,c->ctr); } // 80055980
  W32(c->r[31]+0x00000220u,c->r[30]); // 80055984
  c->r[3]=0u+0x00000001u; // 80055988
  goto L_80055994; // 8005598C
L_80055990:;
  c->r[3]=0u+0x00000000u; // 80055990
L_80055994:;
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 80055994
  c->r[0]=R32(c->r[1]+0x00000104u); // 80055998
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 8005599C
  c->r[31]=R32(c->r[1]+0x000000ECu); // 800559A0
  c->r[30]=R32(c->r[1]+0x000000E8u); // 800559A4
  c->lr=c->r[0]; // 800559A8
  c->r[1]=c->r[1]+0x00000100u; // 800559AC
  return; // 800559B0
}

// fn_800559B4
void f_800559B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800559B4
  c->r[0]=c->lr; // 800559B8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800559BC
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800559C0
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800559C4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 800559C8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 800559CC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 800559D0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 800559D4
  c->f[30]=c->f[2]; // 800559D8
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800559DC
  c->f[29]=c->f[1]; // 800559E0
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800559E4
  c->r[31]=c->r[4]|c->r[4]; // 800559E8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800559EC
  {uint32_t ea=c->r[3]+0x00000210u; c->f[31]=c->ps1[31]=RF32(ea);} // 800559F0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800559F4
  c->r[6]=R32(c->r[1]+0x00000008u); // 800559F8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800559FC
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80055A00
  c->r[0]=R32(c->r[1]+0x00000010u); // 80055A04
  W32(c->r[1]+0x00000020u,c->r[6]); // 80055A08
  W32(c->r[1]+0x00000024u,c->r[5]); // 80055A0C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 80055A10
  W32(c->r[1]+0x00000028u,c->r[0]); // 80055A14
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80055A18
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80055A1C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[3]);} // 80055A20
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[2]);} // 80055A24
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 80055A28
  c->r[5]=R32(c->r[3]+0x00000034u); // 80055A2C
  c->r[4]=R32(c->r[3]+0x00000038u); // 80055A30
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80055A34
  W32(c->r[1]+0x00000014u,c->r[5]); // 80055A38
  W32(c->r[1]+0x00000018u,c->r[4]); // 80055A3C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 80055A40
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80055A44
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80055A48
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055A4C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[3]);} // 80055A50
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[2]);} // 80055A54
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80055A58
  c->lr=0x80055A60u; f_80262A48(c); // 80055A5C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80055A60
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055A64
  c->f[1]=c->f[29]; // 80055A68
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80055A6C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 80055A70
  c->lr=0x80055A78u; f_80262540(c); // 80055A74
  c->f[5]=c->ps1[5]=S(c->f[1]); // 80055A78
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 80055A7C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[4]=c->ps1[4]=RF32(ea);} // 80055A80
  c->f[1]=c->ps1[1]=S(c->f[29]+c->f[30]); // 80055A84
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80055A88
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[5]); // 80055A8C
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 80055A90
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[5]);} // 80055A94
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[4]);} // 80055A98
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 80055A9C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 80055AA0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80055AA4
  c->lr=0x80055AACu; f_80262A48(c); // 80055AA8
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80055AAC
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055AB0
  c->f[1]=c->ps1[1]=S(c->f[29]+c->f[30]); // 80055AB4
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80055AB8
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 80055ABC
  c->lr=0x80055AC4u; f_80262540(c); // 80055AC0
  c->f[7]=c->ps1[7]=S(c->f[1]); // 80055AC4
  {uint32_t ea=c->r[1]+0x00000058u; c->f[5]=c->ps1[5]=RF32(ea);} // 80055AC8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[6]=c->ps1[6]=RF32(ea);} // 80055ACC
  c->r[3]=c->r[31]|c->r[31]; // 80055AD0
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055AD4
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[7]); // 80055AD8
  c->f[4]=c->ps1[4]=S(c->f[6]+c->f[0]); // 80055ADC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 80055AE0
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055AE4
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80055AE8
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[2]); // 80055AEC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[7]);} // 80055AF0
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 80055AF4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[6]);} // 80055AF8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[5]);} // 80055AFC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[4]);} // 80055B00
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[3]);} // 80055B04
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[2]);} // 80055B08
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[1]);} // 80055B0C
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 80055B10
  c->lr=0x80055B18u; f_801648A4(c); // 80055B14
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055B18
  fcmp(c,0,c->f[1],c->f[0]); // 80055B1C
  if (!crb(c,1)) { goto L_80055B48; } // 80055B20
  c->r[3]=c->r[31]|c->r[31]; // 80055B24
  c->r[4]=c->r[31]|c->r[31]; // 80055B28
  c->lr=0x80055B30u; f_80164848(c); // 80055B2C
  c->f[1]=c->f[31]; // 80055B30
  c->r[3]=c->r[31]|c->r[31]; // 80055B34
  c->r[4]=c->r[31]|c->r[31]; // 80055B38
  c->lr=0x80055B40u; f_8016482C(c); // 80055B3C
  c->r[3]=c->r[31]|c->r[31]; // 80055B40
  c->lr=0x80055B48u; f_801648A4(c); // 80055B44
L_80055B48:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 80055B48
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 80055B4C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 80055B50
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 80055B54
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 80055B58
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 80055B5C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80055B60
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 80055B64
  c->lr=c->r[0]; // 80055B68
  c->r[1]=c->r[1]+0x000000A0u; // 80055B6C
  return; // 80055B70
}

// fn_80055B74
void f_80055B74(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80055B74
  return; // 80055B78
}

// fn_80055B7C
void f_80055B7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055B7C
  c->r[0]=c->lr; // 80055B80
  c->r[3]=0u+0x00000000u; // 80055B84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80055B88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80055B8C
  c->r[31]=c->r[4]|c->r[4]; // 80055B90
  c->lr=0x80055B98u; f_80059E5C(c); // 80055B94
  c->r[4]=0u+0x00000004u; // 80055B98
  c->lr=0x80055BA0u; f_800597F4(c); // 80055B9C
  c->r[4]=c->r[31]|c->r[31]; // 80055BA0
  c->r[3]=c->r[3]+0x00000004u; // 80055BA4
  c->lr=0x80055BACu; f_80163864(c); // 80055BA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80055BAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80055BB0
  c->lr=c->r[0]; // 80055BB4
  c->r[1]=c->r[1]+0x00000010u; // 80055BB8
  return; // 80055BBC
}

// fn_80055BC0
void f_80055BC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055BC0
  c->r[0]=c->lr; // 80055BC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80055BC8
  c->lr=0x80055BD0u; f_80059E7C(c); // 80055BCC
  c->r[4]=0u+0x00000000u; // 80055BD0
  c->lr=0x80055BD8u; f_800E2E18(c); // 80055BD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80055BD8
  c->lr=c->r[0]; // 80055BDC
  c->r[1]=c->r[1]+0x00000010u; // 80055BE0
  return; // 80055BE4
}

// fn_80055BE8
void f_80055BE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055BE8
  c->r[4]=0u+0x802B0000u; // 80055BEC
  c->r[4]=c->r[4]+0xFFFFDC10u; // 80055BF0
  c->r[0]=R8(c->r[13]+0xFFFFA328u); // 80055BF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80055BF8
  if (!crb(c,2)) { goto L_80055C58; } // 80055BFC
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055C00
  c->r[0]=0u+0x00000001u; // 80055C04
  W8(c->r[13]+0xFFFFA328u,c->r[0]); // 80055C08
  c->r[8]=c->r[4]+0x00000000u; // 80055C0C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 80055C10
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80055C14
  c->r[10]=R32(c->r[1]+0x0000005Cu); // 80055C18
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80055C1C
  c->r[9]=R32(c->r[1]+0x00000060u); // 80055C20
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 80055C24
  c->r[7]=R32(c->r[1]+0x00000064u); // 80055C28
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 80055C2C
  c->r[6]=R32(c->r[1]+0x00000050u); // 80055C30
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80055C34
  c->r[5]=R32(c->r[1]+0x00000054u); // 80055C38
  c->r[0]=R32(c->r[1]+0x00000058u); // 80055C3C
  W32(c->r[4]+0x00000000u,c->r[10]); // 80055C40
  W32(c->r[8]+0x00000004u,c->r[9]); // 80055C44
  W32(c->r[8]+0x00000008u,c->r[7]); // 80055C48
  W32(c->r[8]+0x00000014u,c->r[6]); // 80055C4C
  W32(c->r[8]+0x00000018u,c->r[5]); // 80055C50
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 80055C54
L_80055C58:;
  c->r[0]=R8(c->r[13]+0xFFFFA329u); // 80055C58
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80055C5C
  if (!crb(c,2)) { goto L_80055CBC; } // 80055C60
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055C64
  c->r[0]=0u+0x00000001u; // 80055C68
  W8(c->r[13]+0xFFFFA329u,c->r[0]); // 80055C6C
  c->r[8]=c->r[4]+0x00000028u; // 80055C70
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80055C74
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 80055C78
  c->r[10]=R32(c->r[1]+0x00000044u); // 80055C7C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80055C80
  c->r[9]=R32(c->r[1]+0x00000048u); // 80055C84
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80055C88
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 80055C8C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80055C90
  c->r[6]=R32(c->r[1]+0x00000038u); // 80055C94
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80055C98
  c->r[5]=R32(c->r[1]+0x0000003Cu); // 80055C9C
  c->r[0]=R32(c->r[1]+0x00000040u); // 80055CA0
  W32(c->r[4]+0x00000028u,c->r[10]); // 80055CA4
  W32(c->r[8]+0x00000004u,c->r[9]); // 80055CA8
  W32(c->r[8]+0x00000008u,c->r[7]); // 80055CAC
  W32(c->r[8]+0x00000014u,c->r[6]); // 80055CB0
  W32(c->r[8]+0x00000018u,c->r[5]); // 80055CB4
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 80055CB8
L_80055CBC:;
  c->r[0]=R8(c->r[13]+0xFFFFA32Au); // 80055CBC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80055CC0
  if (!crb(c,2)) { goto L_80055D20; } // 80055CC4
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055CC8
  c->r[0]=0u+0x00000001u; // 80055CCC
  W8(c->r[13]+0xFFFFA32Au,c->r[0]); // 80055CD0
  c->r[8]=c->r[4]+0x00000050u; // 80055CD4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80055CD8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80055CDC
  c->r[10]=R32(c->r[1]+0x0000002Cu); // 80055CE0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80055CE4
  c->r[9]=R32(c->r[1]+0x00000030u); // 80055CE8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80055CEC
  c->r[7]=R32(c->r[1]+0x00000034u); // 80055CF0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80055CF4
  c->r[6]=R32(c->r[1]+0x00000020u); // 80055CF8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80055CFC
  c->r[5]=R32(c->r[1]+0x00000024u); // 80055D00
  c->r[0]=R32(c->r[1]+0x00000028u); // 80055D04
  W32(c->r[4]+0x00000050u,c->r[10]); // 80055D08
  W32(c->r[8]+0x00000004u,c->r[9]); // 80055D0C
  W32(c->r[8]+0x00000008u,c->r[7]); // 80055D10
  W32(c->r[8]+0x00000014u,c->r[6]); // 80055D14
  W32(c->r[8]+0x00000018u,c->r[5]); // 80055D18
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 80055D1C
L_80055D20:;
  c->r[0]=R8(c->r[13]+0xFFFFA32Bu); // 80055D20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80055D24
  if (!crb(c,2)) { goto L_80055D84; } // 80055D28
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80055D2C
  c->r[0]=0u+0x00000001u; // 80055D30
  W8(c->r[13]+0xFFFFA32Bu,c->r[0]); // 80055D34
  c->r[8]=c->r[4]+0x00000078u; // 80055D38
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80055D3C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80055D40
  c->r[10]=R32(c->r[1]+0x00000014u); // 80055D44
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80055D48
  c->r[9]=R32(c->r[1]+0x00000018u); // 80055D4C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80055D50
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 80055D54
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80055D58
  c->r[6]=R32(c->r[1]+0x00000008u); // 80055D5C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80055D60
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80055D64
  c->r[0]=R32(c->r[1]+0x00000010u); // 80055D68
  W32(c->r[4]+0x00000078u,c->r[10]); // 80055D6C
  W32(c->r[8]+0x00000004u,c->r[9]); // 80055D70
  W32(c->r[8]+0x00000008u,c->r[7]); // 80055D74
  W32(c->r[8]+0x00000014u,c->r[6]); // 80055D78
  W32(c->r[8]+0x00000018u,c->r[5]); // 80055D7C
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 80055D80
L_80055D84:;
  c->r[3]=R32(c->r[3]+0x00000168u); // 80055D84
  c->r[0]=c->r[4]+0x00000100u; // 80055D88
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 80055D8C
  c->r[3]=c->r[0]+c->r[3]; // 80055D90
  c->r[1]=c->r[1]+0x00000070u; // 80055D94
  return; // 80055D98
}

// fn_80055D9C
void f_80055D9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055D9C
  c->r[0]=c->lr; // 80055DA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80055DA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80055DA8
  c->r[31]=c->r[5]|c->r[5]; // 80055DAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80055DB0
  c->r[30]=c->r[4]|c->r[4]; // 80055DB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80055DB8
  c->r[29]=c->r[3]|c->r[3]; // 80055DBC
  c->lr=0x80055DC4u; f_80050C84(c); // 80055DC0
  cmps(c,0,(int32_t)c->r[3],1); // 80055DC4
  if (!crb(c,2)) { goto L_80055E00; } // 80055DC8
  c->r[0]=R32(c->r[30]+0x00000034u); // 80055DCC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80055DD0
  if (crb(c,2)) { goto L_80055E00; } // 80055DD4
  c->r[0]=R32(c->r[29]+0x00000220u); // 80055DD8
  cmps(c,0,(int32_t)c->r[0],0); // 80055DDC
  if (!crb(c,2)) { goto L_80055DFC; } // 80055DE0
  cmps(c,0,(int32_t)c->r[31],0); // 80055DE4
  if (crb(c,2)) { goto L_80055E00; } // 80055DE8
  c->r[0]=R32(c->r[31]+0x00000010u); // 80055DEC
  c->r[0]=c->r[0]|0x00000008u; // 80055DF0
  W32(c->r[31]+0x00000010u,c->r[0]); // 80055DF4
  goto L_80055E00; // 80055DF8
L_80055DFC:;
  c->r[3]=0u+0x00000000u; // 80055DFC
L_80055E00:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80055E00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80055E04
  c->r[30]=R32(c->r[1]+0x00000018u); // 80055E08
  c->r[29]=R32(c->r[1]+0x00000014u); // 80055E0C
  c->lr=c->r[0]; // 80055E10
  c->r[1]=c->r[1]+0x00000020u; // 80055E14
  return; // 80055E18
}

// fn_80055E1C
void f_80055E1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055E1C
  c->r[0]=c->lr; // 80055E20
  W32(c->r[1]+0x00000034u,c->r[0]); // 80055E24
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80055E28
  W32(c->r[1]+0x00000028u,c->r[30]); // 80055E2C
  c->r[30]=c->r[5]|c->r[5]; // 80055E30
  W32(c->r[1]+0x00000024u,c->r[29]); // 80055E34
  c->r[29]=c->r[4]|c->r[4]; // 80055E38
  W32(c->r[1]+0x00000020u,c->r[28]); // 80055E3C
  c->r[28]=c->r[3]|c->r[3]; // 80055E40
  c->lr=0x80055E48u; f_80051884(c); // 80055E44
  c->r[0]=R32(c->r[29]+0x00000034u); // 80055E48
  c->r[31]=c->r[3]|c->r[3]; // 80055E4C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80055E50
  if (crb(c,2)) { goto L_80055EB8; } // 80055E54
  c->r[0]=R32(c->r[28]+0x00000220u); // 80055E58
  cmps(c,0,(int32_t)c->r[0],0); // 80055E5C
  if (!crb(c,2)) { goto L_80055EB8; } // 80055E60
  cmps(c,0,(int32_t)c->r[30],0); // 80055E64
  if (crb(c,2)) { goto L_80055E78; } // 80055E68
  c->r[0]=R32(c->r[30]+0x00000010u); // 80055E6C
  c->r[0]=c->r[0]|0x00000008u; // 80055E70
  W32(c->r[30]+0x00000010u,c->r[0]); // 80055E74
L_80055E78:;
  {uint32_t ea=c->r[28]+0x00000174u; c->f[1]=c->ps1[1]=RF32(ea);} // 80055E78
  c->r[3]=0u+0x80370000u; // 80055E7C
  c->r[5]=R32(c->r[28]+0x00000034u); // 80055E80
  c->r[3]=c->r[3]+0x00005C48u; // 80055E84
  c->r[0]=R32(c->r[28]+0x00000038u); // 80055E88
  c->r[4]=c->r[1]+0x00000008u; // 80055E8C
  W32(c->r[1]+0x00000008u,c->r[5]); // 80055E90
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80055E94
  c->r[0]=R32(c->r[28]+0x0000003Cu); // 80055E98
  W32(c->r[1]+0x00000010u,c->r[0]); // 80055E9C
  c->lr=0x80055EA4u; f_800C4818(c); // 80055EA0
  W32(c->r[28]+0x0000021Cu,c->r[3]); // 80055EA4
  c->r[0]=0u+0x0000000Au; // 80055EA8
  c->r[3]=R32(c->r[29]+0x00000038u); // 80055EAC
  W32(c->r[28]+0x00000220u,c->r[3]); // 80055EB0
  W32(c->r[28]+0x00000224u,c->r[0]); // 80055EB4
L_80055EB8:;
  c->r[3]=c->r[31]|c->r[31]; // 80055EB8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80055EBC
  c->r[30]=R32(c->r[1]+0x00000028u); // 80055EC0
  c->r[29]=R32(c->r[1]+0x00000024u); // 80055EC4
  c->r[28]=R32(c->r[1]+0x00000020u); // 80055EC8
  c->r[0]=R32(c->r[1]+0x00000034u); // 80055ECC
  c->lr=c->r[0]; // 80055ED0
  c->r[1]=c->r[1]+0x00000030u; // 80055ED4
  return; // 80055ED8
}

// fn_80055EDC
void f_80055EDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055EDC
  c->r[0]=c->lr; // 80055EE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80055EE4
  c->r[0]=0u+0x00000000u; // 80055EE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80055EEC
  c->r[31]=c->r[3]|c->r[3]; // 80055EF0
  c->r[4]=R32(c->r[3]+0x0000021Cu); // 80055EF4
  W32(c->r[3]+0x00000220u,c->r[0]); // 80055EF8
  cmps(c,0,(int32_t)c->r[4],0); // 80055EFC
  if (crb(c,0)) { goto L_80055F20; } // 80055F00
  c->r[3]=0u+0x80370000u; // 80055F04
  c->r[3]=c->r[3]+0x00005C48u; // 80055F08
  c->lr=0x80055F10u; f_800C48EC(c); // 80055F0C
  c->r[0]=0u+0xFFFFFFFFu; // 80055F10
  c->r[3]=0u+0x00000001u; // 80055F14
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 80055F18
  goto L_80055F24; // 80055F1C
L_80055F20:;
  c->r[3]=0u+0x00000000u; // 80055F20
L_80055F24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80055F24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80055F28
  c->lr=c->r[0]; // 80055F2C
  c->r[1]=c->r[1]+0x00000010u; // 80055F30
  return; // 80055F34
}

// fn_80055F38
void f_80055F38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055F38
  c->r[0]=c->lr; // 80055F3C
  c->r[3]=0u+0x7F7F0000u; // 80055F40
  W32(c->r[1]+0x00000014u,c->r[0]); // 80055F44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80055F48
  c->r[31]=c->r[3]+0x00007F00u; // 80055F4C
  c->lr=0x80055F54u; f_800076B4(c); // 80055F50
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80055F54
  cmps(c,0,(int32_t)c->r[0],4); // 80055F58
  if (!crb(c,2)) { goto L_80055FA0; } // 80055F5C
  c->lr=0x80055F64u; f_800076CC(c); // 80055F60
  cmps(c,0,(int32_t)c->r[3],2); // 80055F64
  if (crb(c,2)) { goto L_80055F84; } // 80055F68
  c->lr=0x80055F70u; f_800076CC(c); // 80055F6C
  cmps(c,0,(int32_t)c->r[3],3); // 80055F70
  if (crb(c,2)) { goto L_80055F84; } // 80055F74
  c->lr=0x80055F7Cu; f_800076CC(c); // 80055F78
  cmps(c,0,(int32_t)c->r[3],4); // 80055F7C
  if (!crb(c,2)) { goto L_80055FA0; } // 80055F80
L_80055F84:;
  c->r[3]=0u+0x00000000u; // 80055F84
  c->lr=0x80055F8Cu; f_8007AB08(c); // 80055F88
  c->r[12]=R32(c->r[3]+0x00000000u); // 80055F8C
  c->r[12]=R32(c->r[12]+0x00000050u); // 80055F90
  c->ctr=c->r[12]; // 80055F94
  if (true) { c->lr=0x80055F9Cu; dispatch(c,c->ctr); } // 80055F98
  c->r[31]=c->r[3]|c->r[3]; // 80055F9C
L_80055FA0:;
  c->r[3]=c->r[31]|c->r[31]; // 80055FA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80055FA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80055FA8
  c->lr=c->r[0]; // 80055FAC
  c->r[1]=c->r[1]+0x00000010u; // 80055FB0
  return; // 80055FB4
}

// fn_80055FB8
void f_80055FB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055FB8
  c->r[0]=c->lr; // 80055FBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80055FC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80055FC4
  c->r[31]=c->r[3]|c->r[3]; // 80055FC8
  c->lr=0x80055FD0u; f_8004E0EC(c); // 80055FCC
  c->r[4]=0u+0x802B0000u; // 80055FD0
  c->r[3]=c->r[31]|c->r[31]; // 80055FD4
  c->r[4]=c->r[4]+0xFFFFDD90u; // 80055FD8
  W32(c->r[31]+0x00000000u,c->r[4]); // 80055FDC
  c->r[12]=R32(c->r[31]+0x00000000u); // 80055FE0
  c->r[12]=R32(c->r[12]+0x00000008u); // 80055FE4
  c->ctr=c->r[12]; // 80055FE8
  if (true) { c->lr=0x80055FF0u; dispatch(c,c->ctr); } // 80055FEC
  c->r[3]=c->r[31]|c->r[31]; // 80055FF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80055FF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80055FF8
  c->lr=c->r[0]; // 80055FFC
  c->r[1]=c->r[1]+0x00000010u; // 80056000
  return; // 80056004
}

// fn_80056008
void f_80056008(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056008
  c->r[0]=c->lr; // 8005600C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80056010
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80056014
  c->r[31]=c->r[3]|c->r[3]; // 80056018
  c->lr=0x80056020u; f_8004E130(c); // 8005601C
  c->r[0]=R32(c->r[31]+0x00000050u); // 80056020
  c->r[3]=c->r[31]+0x00000168u; // 80056024
  c->r[4]=0u+0x00000000u; // 80056028
  c->r[5]=0u+0x00000318u; // 8005602C
  c->r[0]=c->r[0]|0x00000040u; // 80056030
  W32(c->r[31]+0x00000050u,c->r[0]); // 80056034
  c->lr=0x8005603Cu; f_8000443C(c); // 80056038
  c->r[12]=R32(c->r[31]+0x00000000u); // 8005603C
  c->r[3]=c->r[31]|c->r[31]; // 80056040
  c->r[4]=0u+0x00000002u; // 80056044
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80056048
  c->ctr=c->r[12]; // 8005604C
  if (true) { c->lr=0x80056054u; dispatch(c,c->ctr); } // 80056050
  c->r[0]=0u+0xFFFFFFFFu; // 80056054
  W32(c->r[31]+0x00000198u,c->r[0]); // 80056058
  W32(c->r[31]+0x000001B4u,c->r[0]); // 8005605C
  W32(c->r[31]+0x0000019Cu,c->r[0]); // 80056060
  W32(c->r[31]+0x000001B8u,c->r[0]); // 80056064
  W32(c->r[31]+0x000001A0u,c->r[0]); // 80056068
  W32(c->r[31]+0x000001BCu,c->r[0]); // 8005606C
  W32(c->r[31]+0x000001A4u,c->r[0]); // 80056070
  W32(c->r[31]+0x000001C0u,c->r[0]); // 80056074
  W32(c->r[31]+0x000001A8u,c->r[0]); // 80056078
  W32(c->r[31]+0x000001C4u,c->r[0]); // 8005607C
  W32(c->r[31]+0x000001ACu,c->r[0]); // 80056080
  W32(c->r[31]+0x000001C8u,c->r[0]); // 80056084
  W32(c->r[31]+0x000001B0u,c->r[0]); // 80056088
  W32(c->r[31]+0x000001CCu,c->r[0]); // 8005608C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80056090
  c->r[0]=R32(c->r[1]+0x00000014u); // 80056094
  c->lr=c->r[0]; // 80056098
  c->r[1]=c->r[1]+0x00000010u; // 8005609C
  return; // 800560A0
}

// fn_800560A4
void f_800560A4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000006u; // 800560A4
  return; // 800560A8
}

// fn_800560AC
void f_800560AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800560AC
  c->r[0]=c->lr; // 800560B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800560B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800560B8
  c->r[31]=c->r[3]|c->r[3]; // 800560BC
  c->lr=0x800560C4u; f_8004E190(c); // 800560C0
  c->r[3]=c->r[31]+0x00000168u; // 800560C4
  c->r[4]=0u+0x00000000u; // 800560C8
  c->r[5]=0u+0x00000318u; // 800560CC
  c->lr=0x800560D4u; f_8000443C(c); // 800560D0
  c->r[12]=R32(c->r[31]+0x00000000u); // 800560D4
  c->r[3]=c->r[31]|c->r[31]; // 800560D8
  c->r[4]=0u+0x00000002u; // 800560DC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800560E0
  c->ctr=c->r[12]; // 800560E4
  if (true) { c->lr=0x800560ECu; dispatch(c,c->ctr); } // 800560E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800560EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800560F0
  c->lr=c->r[0]; // 800560F4
  c->r[1]=c->r[1]+0x00000010u; // 800560F8
  return; // 800560FC
}

// fn_80056100
void f_80056100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056100
  c->r[0]=c->lr; // 80056104
  W32(c->r[1]+0x00000054u,c->r[0]); // 80056108
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8005610C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80056110
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 80056114
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 80056118
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 8005611C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 80056120
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[31]=c->ps1[31]=RF32(ea);} // 80056124
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80056128
  c->r[31]=c->r[3]|c->r[3]; // 8005612C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80056130
  c->r[30]=0u+0x00000000u; // 80056134
  W32(c->r[1]+0x00000014u,c->r[29]); // 80056138
  c->r[29]=c->r[31]|c->r[31]; // 8005613C
L_80056140:;
  {uint32_t ea=c->r[29]+0x000001D0u; c->f[29]=c->ps1[29]=RF32(ea);} // 80056140
  c->lr=0x80056148u; f_80013AA4(c); // 80056144
  c->f[30]=c->f[1]; // 80056148
  c->lr=0x80056150u; f_800076EC(c); // 8005614C
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 80056150
  c->f[0]=c->ps1[0]=S(c->f[29]-c->f[0]); // 80056154
  fcmp(c,0,c->f[0],c->f[31]); // 80056158
  if (!crb(c,0)) { goto L_80056164; } // 8005615C
  c->f[0]=c->f[31]; // 80056160
L_80056164:;
  c->r[30]=c->r[30]+0x00000001u; // 80056164
  {uint32_t ea=c->r[29]+0x000001D0u; WF32(ea,c->f[0]);} // 80056168
  cmps(c,0,(int32_t)c->r[30],7); // 8005616C
  c->r[29]=c->r[29]+0x00000004u; // 80056170
  if (crb(c,0)) { IRQCHK(c); goto L_80056140; } // 80056174
  c->r[3]=c->r[31]|c->r[31]; // 80056178
  c->lr=0x80056180u; f_80057514(c); // 8005617C
  c->r[3]=c->r[31]|c->r[31]; // 80056180
  c->lr=0x80056188u; f_80056EE4(c); // 80056184
  c->r[3]=c->r[31]|c->r[31]; // 80056188
  c->lr=0x80056190u; f_8005786C(c); // 8005618C
  c->r[30]=0u+0x802F0000u; // 80056190
  c->r[3]=c->r[30]+0x00002E50u; // 80056194
  c->lr=0x8005619Cu; f_80013644(c); // 80056198
  c->r[0]=R32(c->r[30]+0x00002E50u); // 8005619C
  c->r[5]=0u+0x802B0000u; // 800561A0
  c->r[4]=c->r[30]+0x00002E50u; // 800561A4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800561A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)17280); // 800561AC
  c->r[5]=c->r[5]+0xFFFFDD60u; // 800561B0
  c->r[5]=R32(c->r[5]+c->r[3]); // 800561B4
  c->r[3]=c->r[4]+c->r[0]; // 800561B8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800561BC
  cmps(c,0,(int32_t)c->r[0],2); // 800561C0
  if (crb(c,2)) { goto L_8005621C; } // 800561C4
  c->r[3]=R32(c->r[31]+0x000002BCu); // 800561C8
  cmps(c,0,(int32_t)c->r[3],1); // 800561CC
  if (!crb(c,0)) { goto L_8005621C; } // 800561D0
  c->r[3]=c->r[3]+0x00000001u; // 800561D4
  c->r[0]=R32(c->r[31]+0x00000190u); // 800561D8
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[3]); // 800561DC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800561E0
  if (crb(c,0)) { goto L_8005621C; } // 800561E4
  c->r[3]=R32(c->r[31]+0x000001ECu); // 800561E8
  cmps(c,0,(int32_t)c->r[3],9); // 800561EC
  if (!crb(c,0)) { goto L_80056210; } // 800561F0
  c->r[0]=c->r[3]+0x00000001u; // 800561F4
  c->r[3]=0u+0x00000002u; // 800561F8
  W32(c->r[31]+0x000001ECu,c->r[0]); // 800561FC
  c->lr=0x80056204u; f_80011338(c); // 80056200
  c->r[3]=0u+0x00010000u; // 80056204
  c->r[3]=c->r[3]+0x0000005Du; // 80056208
  c->lr=0x80056210u; f_800EFD50(c); // 8005620C
L_80056210:;
  c->r[3]=R32(c->r[31]+0x000002BCu); // 80056210
  c->r[0]=c->r[3]+0x00000001u; // 80056214
  W32(c->r[31]+0x000002BCu,c->r[0]); // 80056218
L_8005621C:;
  c->r[3]=c->r[31]|c->r[31]; // 8005621C
  c->lr=0x80056224u; f_8004E428(c); // 80056220
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80056224
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80056228
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 8005622C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80056230
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 80056234
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 80056238
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8005623C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80056240
  c->r[0]=R32(c->r[1]+0x00000054u); // 80056244
  c->r[29]=R32(c->r[1]+0x00000014u); // 80056248
  c->lr=c->r[0]; // 8005624C
  c->r[1]=c->r[1]+0x00000050u; // 80056250
  return; // 80056254
}

// fn_80056258
void f_80056258(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056258
  c->r[0]=c->lr; // 8005625C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80056260
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80056264
  c->r[31]=c->r[4]|c->r[4]; // 80056268
  c->r[5]=R32(c->r[3]+0x000001ECu); // 8005626C
  cmps(c,0,(int32_t)c->r[5],9); // 80056270
  if (!crb(c,0)) { goto L_80056290; } // 80056274
  c->r[0]=c->r[5]+0x00000001u; // 80056278
  W32(c->r[3]+0x000001ECu,c->r[0]); // 8005627C
  c->r[3]=0u+0x00000002u; // 80056280
  c->lr=0x80056288u; f_80011338(c); // 80056284
  c->r[3]=c->r[31]|c->r[31]; // 80056288
  c->lr=0x80056290u; f_800EFD50(c); // 8005628C
L_80056290:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80056290
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80056294
  c->lr=c->r[0]; // 80056298
  c->r[1]=c->r[1]+0x00000010u; // 8005629C
  return; // 800562A0
}

// fn_800562A4
void f_800562A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800562A4
  c->r[0]=c->lr; // 800562A8
  c->r[4]=0u+0x802F0000u; // 800562AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800562B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800562B4
  c->r[31]=c->r[3]|c->r[3]; // 800562B8
  c->r[3]=c->r[4]+0x00002E50u; // 800562BC
  c->lr=0x800562C4u; f_80013644(c); // 800562C0
  c->r[4]=0u+0x802B0000u; // 800562C4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800562C8
  c->r[4]=c->r[4]+0xFFFFDD60u; // 800562CC
  c->r[0]=R32(c->r[31]+0x00000190u); // 800562D0
  c->r[3]=R32(c->r[4]+c->r[3]); // 800562D4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800562D8
  if (!crb(c,1)) { goto L_800562EC; } // 800562DC
  c->r[3]=R32(c->r[31]+0x000002BCu); // 800562E0
  c->r[0]=c->r[3]+0x00000001u; // 800562E4
  W32(c->r[31]+0x000002BCu,c->r[0]); // 800562E8
L_800562EC:;
  c->r[3]=R32(c->r[31]+0x000002BCu); // 800562EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800562F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800562F4
  c->lr=c->r[0]; // 800562F8
  c->r[1]=c->r[1]+0x00000010u; // 800562FC
  return; // 80056300
}

// fn_80056304
void f_80056304(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056304
  c->r[0]=c->lr; // 80056308
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005630C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80056310
  c->r[31]=c->r[4]|c->r[4]; // 80056314
  W32(c->r[1]+0x00000008u,c->r[30]); // 80056318
  c->r[30]=c->r[3]|c->r[3]; // 8005631C
  c->r[3]=c->r[31]|c->r[31]; // 80056320
  c->lr=0x80056328u; f_80252384(c); // 80056324
  cmps(c,0,(int32_t)c->r[3],8); // 80056328
  if (!crb(c,1)) { goto L_80056334; } // 8005632C
  c->r[3]=0u+0x00000008u; // 80056330
L_80056334:;
  cmps(c,1,(int32_t)c->r[3],0); // 80056334
  c->r[7]=0u+0x00000000u; // 80056338
  if (!crb(c,5)) { goto L_80056400; } // 8005633C
  cmps(c,0,(int32_t)c->r[3],8); // 80056340
  c->r[5]=c->r[3]+0xFFFFFFF8u; // 80056344
  if (!crb(c,1)) { goto L_800563D4; } // 80056348
  c->r[6]=0u+0x00000000u; // 8005634C
  if (crb(c,4)) { goto L_80056368; } // 80056350
  c->r[4]=0u+0x80000000u; // 80056354
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 80056358
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8005635C
  if (crb(c,1)) { goto L_80056368; } // 80056360
  c->r[6]=0u+0x00000001u; // 80056364
L_80056368:;
  cmps(c,0,(int32_t)c->r[6],0); // 80056368
  if (crb(c,2)) { goto L_800563D4; } // 8005636C
  c->r[0]=c->r[5]+0x00000007u; // 80056370
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80056374
  c->ctr=c->r[0]; // 80056378
  cmps(c,0,(int32_t)c->r[5],0); // 8005637C
  if (!crb(c,1)) { goto L_800563D4; } // 80056380
L_80056384:;
  c->r[0]=R8(c->r[31]+c->r[7]); // 80056384
  c->r[5]=c->r[30]+c->r[7]; // 80056388
  c->r[4]=c->r[31]+c->r[7]; // 8005638C
  c->r[7]=c->r[7]+0x00000008u; // 80056390
  W8(c->r[5]+0x0000016Cu,c->r[0]); // 80056394
  c->r[0]=R8(c->r[4]+0x00000001u); // 80056398
  W8(c->r[5]+0x0000016Du,c->r[0]); // 8005639C
  c->r[0]=R8(c->r[4]+0x00000002u); // 800563A0
  W8(c->r[5]+0x0000016Eu,c->r[0]); // 800563A4
  c->r[0]=R8(c->r[4]+0x00000003u); // 800563A8
  W8(c->r[5]+0x0000016Fu,c->r[0]); // 800563AC
  c->r[0]=R8(c->r[4]+0x00000004u); // 800563B0
  W8(c->r[5]+0x00000170u,c->r[0]); // 800563B4
  c->r[0]=R8(c->r[4]+0x00000005u); // 800563B8
  W8(c->r[5]+0x00000171u,c->r[0]); // 800563BC
  c->r[0]=R8(c->r[4]+0x00000006u); // 800563C0
  W8(c->r[5]+0x00000172u,c->r[0]); // 800563C4
  c->r[0]=R8(c->r[4]+0x00000007u); // 800563C8
  W8(c->r[5]+0x00000173u,c->r[0]); // 800563CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80056384; } // 800563D0
L_800563D4:;
  c->r[0]=c->r[3]-c->r[7]; // 800563D4
  c->r[4]=c->r[31]+c->r[7]; // 800563D8
  c->ctr=c->r[0]; // 800563DC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[3]); // 800563E0
  if (!crb(c,0)) { goto L_80056400; } // 800563E4
L_800563E8:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800563E8
  c->r[5]=c->r[30]+c->r[7]; // 800563EC
  c->r[7]=c->r[7]+0x00000001u; // 800563F0
  c->r[4]=c->r[4]+0x00000001u; // 800563F4
  W8(c->r[5]+0x0000016Cu,c->r[0]); // 800563F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800563E8; } // 800563FC
L_80056400:;
  c->r[3]=c->r[30]+c->r[3]; // 80056400
  c->r[0]=0u+0x00000000u; // 80056404
  W8(c->r[3]+0x0000016Cu,c->r[0]); // 80056408
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005640C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80056410
  c->r[0]=R32(c->r[1]+0x00000014u); // 80056414
  c->lr=c->r[0]; // 80056418
  c->r[1]=c->r[1]+0x00000010u; // 8005641C
  return; // 80056420
}

// fn_80056424
void f_80056424(Ctx* __restrict c) {
  c->r[0]=0u+0x00000002u; // 80056424
  c->r[7]=0u+0x00000000u; // 80056428
  c->ctr=c->r[0]; // 8005642C
L_80056430:;
  c->r[5]=c->r[3]+c->r[7]; // 80056430
  c->r[6]=c->r[4]+c->r[7]; // 80056434
  c->r[0]=R8(c->r[5]+0x0000016Cu); // 80056438
  W8(c->r[4]+c->r[7],c->r[0]); // 8005643C
  c->r[7]=c->r[7]+0x00000008u; // 80056440
  c->r[0]=R8(c->r[5]+0x0000016Du); // 80056444
  W8(c->r[6]+0x00000001u,c->r[0]); // 80056448
  c->r[0]=R8(c->r[5]+0x0000016Eu); // 8005644C
  W8(c->r[6]+0x00000002u,c->r[0]); // 80056450
  c->r[0]=R8(c->r[5]+0x0000016Fu); // 80056454
  W8(c->r[6]+0x00000003u,c->r[0]); // 80056458
  c->r[0]=R8(c->r[5]+0x00000170u); // 8005645C
  W8(c->r[6]+0x00000004u,c->r[0]); // 80056460
  c->r[0]=R8(c->r[5]+0x00000171u); // 80056464
  W8(c->r[6]+0x00000005u,c->r[0]); // 80056468
  c->r[0]=R8(c->r[5]+0x00000172u); // 8005646C
  W8(c->r[6]+0x00000006u,c->r[0]); // 80056470
  c->r[0]=R8(c->r[5]+0x00000173u); // 80056474
  c->r[5]=c->r[3]+c->r[7]; // 80056478
  W8(c->r[6]+0x00000007u,c->r[0]); // 8005647C
  c->r[6]=c->r[4]+c->r[7]; // 80056480
  c->r[0]=R8(c->r[5]+0x0000016Cu); // 80056484
  W8(c->r[4]+c->r[7],c->r[0]); // 80056488
  c->r[7]=c->r[7]+0x00000008u; // 8005648C
  c->r[0]=R8(c->r[5]+0x0000016Du); // 80056490
  W8(c->r[6]+0x00000001u,c->r[0]); // 80056494
  c->r[0]=R8(c->r[5]+0x0000016Eu); // 80056498
  W8(c->r[6]+0x00000002u,c->r[0]); // 8005649C
  c->r[0]=R8(c->r[5]+0x0000016Fu); // 800564A0
  W8(c->r[6]+0x00000003u,c->r[0]); // 800564A4
  c->r[0]=R8(c->r[5]+0x00000170u); // 800564A8
  W8(c->r[6]+0x00000004u,c->r[0]); // 800564AC
  c->r[0]=R8(c->r[5]+0x00000171u); // 800564B0
  W8(c->r[6]+0x00000005u,c->r[0]); // 800564B4
  c->r[0]=R8(c->r[5]+0x00000172u); // 800564B8
  W8(c->r[6]+0x00000006u,c->r[0]); // 800564BC
  c->r[0]=R8(c->r[5]+0x00000173u); // 800564C0
  W8(c->r[6]+0x00000007u,c->r[0]); // 800564C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80056430; } // 800564C8
  return; // 800564CC
}

// fn_800564D0
void f_800564D0(Ctx* __restrict c) {
  c->r[5]=0u+0x802F0000u; // 800564D0
  c->r[6]=0u+0x3B9B0000u; // 800564D4
  c->r[0]=R32(c->r[5]+0x00002E50u); // 800564D8
  c->r[5]=c->r[5]+0x00002E50u; // 800564DC
  c->r[7]=R32(c->r[3]+0x0000018Cu); // 800564E0
  c->r[6]=c->r[6]+0xFFFFCA00u; // 800564E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)17280); // 800564E8
  c->r[5]=c->r[5]+c->r[0]; // 800564EC
  c->r[0]=R32(c->r[5]+0x00000004u); // 800564F0
  cmps(c,0,(int32_t)c->r[0],2); // 800564F4
  if (!crb(c,2)) { goto L_80056504; } // 800564F8
  c->r[5]=0u+0x00990000u; // 800564FC
  c->r[6]=c->r[5]+0xFFFF9680u; // 80056500
L_80056504:;
  c->r[7]=c->r[7]+c->r[4]; // 80056504
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 80056508
  if (!crb(c,1)) { goto L_80056514; } // 8005650C
  c->r[7]=c->r[6]|c->r[6]; // 80056510
L_80056514:;
  W32(c->r[3]+0x0000018Cu,c->r[7]); // 80056514
  return; // 80056518
}

// fn_8005651C
void f_8005651C(Ctx* __restrict c) {
  c->r[5]=0u+0x802F0000u; // 8005651C
  c->r[6]=0u+0x3B9B0000u; // 80056520
  c->r[0]=R32(c->r[5]+0x00002E50u); // 80056524
  c->r[5]=c->r[5]+0x00002E50u; // 80056528
  c->r[7]=R32(c->r[3]+0x00000190u); // 8005652C
  c->r[6]=c->r[6]+0xFFFFCA00u; // 80056530
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)17280); // 80056534
  c->r[5]=c->r[5]+c->r[0]; // 80056538
  c->r[0]=R32(c->r[5]+0x00000004u); // 8005653C
  cmps(c,0,(int32_t)c->r[0],2); // 80056540
  if (!crb(c,2)) { goto L_80056550; } // 80056544
  c->r[5]=0u+0x00990000u; // 80056548
  c->r[6]=c->r[5]+0xFFFF9680u; // 8005654C
L_80056550:;
  c->r[7]=c->r[7]+c->r[4]; // 80056550
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 80056554
  if (!crb(c,1)) { goto L_80056560; } // 80056558
  c->r[7]=c->r[6]|c->r[6]; // 8005655C
L_80056560:;
  W32(c->r[3]+0x00000190u,c->r[7]); // 80056560
  return; // 80056564
}

// fn_80056568
void f_80056568(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056568
  c->r[0]=c->lr; // 8005656C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80056570
  c->r[11]=c->r[1]+0x00000040u; // 80056574
  c->lr=0x8005657Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80056578
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8005657C
  c->r[27]=c->r[3]|c->r[3]; // 80056580
  {uint32_t ea=c->r[3]+0x0000046Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80056584
  c->r[28]=c->r[4]|c->r[4]; // 80056588
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005658C
  c->r[29]=c->r[5]|c->r[5]; // 80056590
  fcmp(c,0,c->f[1],c->f[0]); // 80056594
  c->r[30]=c->r[6]|c->r[6]; // 80056598
  if (crb(c,0)) { goto L_800565A4; } // 8005659C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 800565A0
L_800565A4:;
  {uint32_t ea=c->r[3]+0x00000470u; c->f[1]=c->ps1[1]=RF32(ea);} // 800565A4
  fcmp(c,0,c->f[1],c->f[0]); // 800565A8
  if (crb(c,0)) { goto L_800565B4; } // 800565AC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 800565B0
L_800565B4:;
  c->r[3]=c->r[3]+0x00000008u; // 800565B4
  {uint32_t ea=c->r[3]+0x0000046Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800565B8
  fcmp(c,0,c->f[1],c->f[0]); // 800565BC
  if (crb(c,0)) { goto L_800565C8; } // 800565C0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 800565C4
L_800565C8:;
  {uint32_t ea=c->r[3]+0x00000470u; c->f[1]=c->ps1[1]=RF32(ea);} // 800565C8
  fcmp(c,0,c->f[1],c->f[0]); // 800565CC
  if (crb(c,0)) { goto L_800565D8; } // 800565D0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 800565D4
L_800565D8:;
  c->r[3]=c->r[4]^0x80000000u; // 800565D8
  c->r[0]=0u+0x43300000u; // 800565DC
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800565E0
  {uint32_t ea=c->r[2]+0xFFFF8BF8u; c->f[1]=RF64(ea);} // 800565E4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800565E8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800565EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800565F0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800565F4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800565F8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 800565FC
  c->r[31]=R32(c->r[1]+0x00000024u); // 80056600
  c->lr=0x80056608u; f_8007AB30(c); // 80056604
  c->lr=0x8005660Cu; f_8007A1E8(c); // 80056608
  cmps(c,0,(int32_t)c->r[3],1); // 8005660C
  if (!crb(c,2)) { goto L_80056618; } // 80056610
  c->r[31]=0u+0x00000000u; // 80056614
L_80056618:;
  c->lr=0x8005661Cu; f_800076B4(c); // 80056618
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8005661C
  cmps(c,0,(int32_t)c->r[0],6); // 80056620
  if (crb(c,2)) { goto L_8005662C; } // 80056624
  c->r[31]=0u+0x00000000u; // 80056628
L_8005662C:;
  c->r[3]=0u+0x802F0000u; // 8005662C
  c->r[4]=0u+0x3B9B0000u; // 80056630
  c->r[0]=R32(c->r[3]+0x00002E50u); // 80056634
  c->r[3]=c->r[3]+0x00002E50u; // 80056638
  c->r[5]=R32(c->r[27]+0x0000018Cu); // 8005663C
  c->r[4]=c->r[4]+0xFFFFCA00u; // 80056640
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)17280); // 80056644
  c->r[3]=c->r[3]+c->r[0]; // 80056648
  c->r[0]=R32(c->r[3]+0x00000004u); // 8005664C
  cmps(c,0,(int32_t)c->r[0],2); // 80056650
  if (!crb(c,2)) { goto L_80056660; } // 80056654
  c->r[3]=0u+0x00990000u; // 80056658
  c->r[4]=c->r[3]+0xFFFF9680u; // 8005665C
L_80056660:;
  c->r[5]=c->r[5]+c->r[31]; // 80056660
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 80056664
  if (!crb(c,1)) { goto L_80056670; } // 80056668
  c->r[5]=c->r[4]|c->r[4]; // 8005666C
L_80056670:;
  W32(c->r[27]+0x0000018Cu,c->r[5]); // 80056670
  c->r[3]=0u+0x802F0000u; // 80056674
  c->r[4]=0u+0x3B9B0000u; // 80056678
  c->r[5]=R32(c->r[27]+0x00000190u); // 8005667C
  c->r[0]=R32(c->r[3]+0x00002E50u); // 80056680
  c->r[3]=c->r[3]+0x00002E50u; // 80056684
  c->r[4]=c->r[4]+0xFFFFCA00u; // 80056688
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)17280); // 8005668C
  c->r[3]=c->r[3]+c->r[0]; // 80056690
  c->r[0]=R32(c->r[3]+0x00000004u); // 80056694
  cmps(c,0,(int32_t)c->r[0],2); // 80056698
  if (!crb(c,2)) { goto L_800566A8; } // 8005669C
  c->r[3]=0u+0x00990000u; // 800566A0
  c->r[4]=c->r[3]+0xFFFF9680u; // 800566A4
L_800566A8:;
  c->r[5]=c->r[5]+c->r[31]; // 800566A8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 800566AC
  if (!crb(c,1)) { goto L_800566B8; } // 800566B0
  c->r[5]=c->r[4]|c->r[4]; // 800566B4
L_800566B8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800566B8
  W32(c->r[27]+0x00000190u,c->r[5]); // 800566BC
  if (!crb(c,1)) { goto L_80056760; } // 800566C0
  cmps(c,0,(int32_t)c->r[30],0); // 800566C4
  if (!crb(c,0)) { goto L_80056730; } // 800566C8
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800566CC
  {uint32_t ea=c->r[27]+0x0000046Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800566D0
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800566D4
  fcmp(c,0,c->f[2],c->f[0]); // 800566D8
  if (crb(c,0)) { goto L_800566E4; } // 800566DC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800566E0
L_800566E4:;
  {uint32_t ea=c->r[27]+0x00000470u; c->f[2]=c->ps1[2]=RF32(ea);} // 800566E4
  fcmp(c,0,c->f[2],c->f[0]); // 800566E8
  if (crb(c,0)) { goto L_800566F4; } // 800566EC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800566F0
L_800566F4:;
  {uint32_t ea=c->r[27]+0x00000474u; c->f[2]=c->ps1[2]=RF32(ea);} // 800566F4
  c->r[3]=c->r[27]+0x00000008u; // 800566F8
  fcmp(c,0,c->f[2],c->f[0]); // 800566FC
  if (crb(c,0)) { goto L_80056708; } // 80056700
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80056704
L_80056708:;
  {uint32_t ea=c->r[3]+0x00000470u; c->f[2]=c->ps1[2]=RF32(ea);} // 80056708
  fcmp(c,0,c->f[2],c->f[0]); // 8005670C
  if (crb(c,0)) { goto L_80056718; } // 80056710
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80056714
L_80056718:;
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80056718
  fcmp(c,0,c->f[1],c->f[0]); // 8005671C
  if (!crb(c,1)) { goto L_8005672C; } // 80056720
  c->r[30]=0u+0x00000001u; // 80056724
  goto L_80056730; // 80056728
L_8005672C:;
  c->r[30]=0u+0x00000000u; // 8005672C
L_80056730:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 80056730
  c->r[3]=0u+0x80340000u; // 80056734
  c->r[7]=R32(c->r[29]+0x00000004u); // 80056738
  c->r[5]=c->r[31]|c->r[31]; // 8005673C
  c->r[0]=R32(c->r[29]+0x00000008u); // 80056740
  c->r[6]=c->r[30]|c->r[30]; // 80056744
  W32(c->r[1]+0x00000008u,c->r[4]); // 80056748
  c->r[3]=c->r[3]+0xFFFFBD20u; // 8005674C
  c->r[4]=c->r[1]+0x00000008u; // 80056750
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 80056754
  W32(c->r[1]+0x00000010u,c->r[0]); // 80056758
  c->lr=0x80056760u; f_8004C0D4(c); // 8005675C
L_80056760:;
  c->r[11]=c->r[1]+0x00000040u; // 80056760
  c->r[3]=c->r[28]|c->r[28]; // 80056764
  c->lr=0x8005676Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80056768
  c->r[0]=R32(c->r[1]+0x00000044u); // 8005676C
  c->lr=c->r[0]; // 80056770
  c->r[1]=c->r[1]+0x00000040u; // 80056774
  return; // 80056778
}

// fn_8005677C
void f_8005677C(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005677C
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80056780
  {uint32_t ea=c->r[3]+0x00000470u; WF32(ea,c->f[0]);} // 80056784
  {uint32_t ea=c->r[3]+0x0000046Cu; WF32(ea,c->f[1]);} // 80056788
  {uint32_t ea=c->r[3]+0x00000474u; WF32(ea,c->f[0]);} // 8005678C
  {uint32_t ea=c->r[3]+0x00000478u; WF32(ea,c->f[0]);} // 80056790
  return; // 80056794
}

// fn_80056798
void f_80056798(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80056798
  c->r[3]=c->r[3]+c->r[0]; // 8005679C
  {uint32_t ea=c->r[3]+0x0000046Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800567A0
  return; // 800567A4
}

// fn_800567A8
void f_800567A8(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800567A8
  c->r[3]=c->r[3]+c->r[0]; // 800567AC
  {uint32_t ea=c->r[3]+0x0000046Cu; WF32(ea,c->f[1]);} // 800567B0
  return; // 800567B4
}

// fn_800567B8
void f_800567B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800567B8
  c->r[0]=c->lr; // 800567BC
  c->r[3]=0u+0x802F0000u; // 800567C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800567C4
  c->r[3]=c->r[3]+0x00002E50u; // 800567C8
  c->lr=0x800567D0u; f_80013644(c); // 800567CC
  cmps(c,0,(int32_t)c->r[3],1); // 800567D0
  if (crb(c,2)) { goto L_800567F0; } // 800567D4
  if (!crb(c,0)) { goto L_800567F8; } // 800567D8
  cmps(c,0,(int32_t)c->r[3],0); // 800567DC
  if (!crb(c,0)) { goto L_800567E8; } // 800567E0
  goto L_800567F8; // 800567E4
L_800567E8:;
  c->r[3]=0u+0x00000005u; // 800567E8
  goto L_800567FC; // 800567EC
L_800567F0:;
  c->r[3]=0u+0x00000004u; // 800567F0
  goto L_800567FC; // 800567F4
L_800567F8:;
  c->r[3]=0u+0x00000003u; // 800567F8
L_800567FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800567FC
  c->lr=c->r[0]; // 80056800
  c->r[1]=c->r[1]+0x00000010u; // 80056804
  return; // 80056808
}

// fn_8005680C
void f_8005680C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005680C
  c->r[0]=c->lr; // 80056810
  W32(c->r[1]+0x00000014u,c->r[0]); // 80056814
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80056818
  c->r[31]=c->r[3]|c->r[3]; // 8005681C
  c->r[0]=R32(c->r[3]+0x000002B8u); // 80056820
  cmps(c,0,(int32_t)c->r[0],0); // 80056824
  if (!crb(c,2)) { goto L_80056834; } // 80056828
  c->r[3]=0u+0x00000000u; // 8005682C
  goto L_80056854; // 80056830
L_80056834:;
  c->lr=0x80056838u; f_8007AB30(c); // 80056834
  c->lr=0x8005683Cu; f_8007A948(c); // 80056838
  cmps(c,0,(int32_t)c->r[3],1); // 8005683C
  if (!crb(c,2)) { goto L_8005684C; } // 80056840
  c->r[3]=0u+0x00000000u; // 80056844
  goto L_80056854; // 80056848
L_8005684C:;
  c->r[3]=c->r[31]|c->r[31]; // 8005684C
  c->lr=0x80056854u; f_80056868(c); // 80056850
L_80056854:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80056854
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80056858
  c->lr=c->r[0]; // 8005685C
  c->r[1]=c->r[1]+0x00000010u; // 80056860
  return; // 80056864
}

// fn_80056868
void f_80056868(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056868
  c->r[0]=c->lr; // 8005686C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80056870
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80056874
  W32(c->r[1]+0x00000018u,c->r[30]); // 80056878
  W32(c->r[1]+0x00000014u,c->r[29]); // 8005687C
  c->r[29]=c->r[3]|c->r[3]; // 80056880
  c->r[3]=0u+0x00000000u; // 80056884
  c->lr=0x8005688Cu; f_80059E48(c); // 80056888
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005688C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80056890
  c->ctr=c->r[12]; // 80056894
  if (true) { c->lr=0x8005689Cu; dispatch(c,c->ctr); } // 80056898
  c->r[30]=c->r[3]|c->r[3]; // 8005689C
  c->r[31]=0u+0x00000000u; // 800568A0
L_800568A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800568A4
  if (crb(c,2)) { goto L_800568F8; } // 800568A8
  c->r[3]=R32(c->r[30]+0x00000000u); // 800568AC
  cmps(c,0,(int32_t)c->r[3],0); // 800568B0
  if (crb(c,2)) { goto L_800568EC; } // 800568B4
  c->r[4]=R32(c->r[3]+0x0000026Cu); // 800568B8
  c->r[0]=R32(c->r[29]+0x00000168u); // 800568BC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800568C0
  if (!crb(c,2)) { goto L_800568E8; } // 800568C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800568C8
  c->r[12]=R32(c->r[12]+0x00000038u); // 800568CC
  c->ctr=c->r[12]; // 800568D0
  if (true) { c->lr=0x800568D8u; dispatch(c,c->ctr); } // 800568D4
  cmps(c,0,(int32_t)c->r[3],1); // 800568D8
  if (!crb(c,2)) { goto L_800568E8; } // 800568DC
  c->r[3]=0u+0x00000000u; // 800568E0
  goto L_800568FC; // 800568E4
L_800568E8:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 800568E8
L_800568EC:;
  c->r[31]=c->r[31]+0x00000001u; // 800568EC
  cmps(c,0,(int32_t)c->r[31],24); // 800568F0
  if (crb(c,0)) { IRQCHK(c); goto L_800568A4; } // 800568F4
L_800568F8:;
  c->r[3]=0u+0x00000001u; // 800568F8
L_800568FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800568FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80056900
  c->r[30]=R32(c->r[1]+0x00000018u); // 80056904
  c->r[29]=R32(c->r[1]+0x00000014u); // 80056908
  c->lr=c->r[0]; // 8005690C
  c->r[1]=c->r[1]+0x00000020u; // 80056910
  return; // 80056914
}

// fn_80056918
void f_80056918(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056918
  c->r[0]=c->lr; // 8005691C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80056920
  c->r[11]=c->r[1]+0x00000040u; // 80056924
  c->lr=0x8005692Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80056928
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)22840); // 8005692C
  c->r[4]=0u+0x803E0000u; // 80056930
  c->r[30]=0u+0x802F0000u; // 80056934
  c->r[25]=R32(c->r[3]+0x00000168u); // 80056938
  c->r[4]=c->r[4]+0x00001900u; // 8005693C
  c->r[31]=c->r[4]+c->r[0]; // 80056940
  c->r[0]=addc(c,c->r[31],0x00000890u,0); cr0(c,c->r[0]); // 80056944
  c->r[28]=R32(c->r[31]+0x00000034u); // 80056948
  c->r[27]=R32(c->r[31]+0x00000030u); // 8005694C
  c->r[26]=c->r[5]|c->r[5]; // 80056950
  c->r[30]=c->r[30]+0x00002E50u; // 80056954
  c->r[29]=0u+0x00000000u; // 80056958
  if (crb(c,2)) { goto L_80056964; } // 8005695C
  c->r[29]=c->r[0]|c->r[0]; // 80056960
L_80056964:;
  c->r[3]=c->r[31]|c->r[31]; // 80056964
  c->r[4]=0u+0x00000000u; // 80056968
  c->lr=0x80056970u; f_800D571C(c); // 8005696C
  c->r[4]=R32(c->r[30]+0x00000000u); // 80056970
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 80056974
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)17280); // 80056978
  c->r[4]=c->r[30]+c->r[4]; // 8005697C
  c->r[4]=c->r[4]+c->r[0]; // 80056980
  c->r[4]=R32(c->r[4]+0x00004360u); // 80056984
  cmps(c,0,(int32_t)c->r[4],1); // 80056988
  if (!crb(c,2)) { goto L_800569B4; } // 8005698C
  c->r[7]=rotl(c->r[27],0)&0x00002000u; // 80056990
  c->r[6]=rotl(c->r[27],0)&0x00000400u; // 80056994
  c->r[5]=rotl(c->r[28],0)&0x00002000u; // 80056998
  c->r[4]=rotl(c->r[28],0)&0x00000400u; // 8005699C
  W32(c->r[26]+0x00000000u,c->r[7]); // 800569A0
  W32(c->r[26]+0x00000004u,c->r[6]); // 800569A4
  W32(c->r[26]+0x00000008u,c->r[5]); // 800569A8
  W32(c->r[26]+0x0000000Cu,c->r[4]); // 800569AC
  goto L_800569D4; // 800569B0
L_800569B4:;
  c->r[7]=rotl(c->r[27],0)&0x00000400u; // 800569B4
  c->r[6]=rotl(c->r[27],0)&0x00002000u; // 800569B8
  c->r[5]=rotl(c->r[28],0)&0x00000400u; // 800569BC
  c->r[4]=rotl(c->r[28],0)&0x00002000u; // 800569C0
  W32(c->r[26]+0x00000000u,c->r[7]); // 800569C4
  W32(c->r[26]+0x00000004u,c->r[6]); // 800569C8
  W32(c->r[26]+0x00000008u,c->r[5]); // 800569CC
  W32(c->r[26]+0x0000000Cu,c->r[4]); // 800569D0
L_800569D4:;
  c->r[4]=rotl(c->r[28],0)&0x00000800u; // 800569D4
  c->r[5]=rotl(c->r[28],0)&0x00000002u; // 800569D8
  W32(c->r[26]+0x00000018u,c->r[4]); // 800569DC
  W32(c->r[26]+0x0000001Cu,c->r[5]); // 800569E0
  c->r[4]=R32(c->r[30]+0x00000000u); // 800569E4
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)17280); // 800569E8
  c->r[4]=c->r[30]+c->r[4]; // 800569EC
  c->r[4]=c->r[4]+c->r[0]; // 800569F0
  c->r[4]=R32(c->r[4]+0x00004360u); // 800569F4
  cmps(c,0,(int32_t)c->r[4],0); // 800569F8
  if (!crb(c,2)) { goto L_80056A0C; } // 800569FC
  c->r[4]=rotl(c->r[28],0)&0x00004000u; // 80056A00
  c->r[4]=c->r[5]|c->r[4]; // 80056A04
  W32(c->r[26]+0x0000001Cu,c->r[4]); // 80056A08
L_80056A0C:;
  c->r[5]=rotl(c->r[28],0)&0x00000001u; // 80056A0C
  W32(c->r[26]+0x00000020u,c->r[5]); // 80056A10
  c->r[4]=R32(c->r[30]+0x00000000u); // 80056A14
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)17280); // 80056A18
  c->r[4]=c->r[30]+c->r[4]; // 80056A1C
  c->r[4]=c->r[4]+c->r[0]; // 80056A20
  c->r[0]=R32(c->r[4]+0x00004360u); // 80056A24
  cmps(c,0,(int32_t)c->r[0],1); // 80056A28
  if (!crb(c,2)) { goto L_80056A3C; } // 80056A2C
  c->r[0]=rotl(c->r[28],0)&0x00004000u; // 80056A30
  c->r[0]=c->r[5]|c->r[0]; // 80056A34
  W32(c->r[26]+0x00000020u,c->r[0]); // 80056A38
L_80056A3C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80056A3C
  c->r[0]=0u+0x00000000u; // 80056A40
  if (crb(c,2)) { goto L_80056A6C; } // 80056A44
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80056A48
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80056A4C
  fcmp(c,0,c->f[1],c->f[0]); // 80056A50
  if (!crb(c,0)) { goto L_80056A5C; } // 80056A54
  c->f[1]=-c->f[1]; // 80056A58
L_80056A5C:;
  {uint32_t ea=c->r[2]+0xFFFF8BD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80056A5C
  fcmp(c,0,c->f[1],c->f[0]); // 80056A60
  if (!crb(c,1)) { goto L_80056A6C; } // 80056A64
  c->r[0]=0u+0x00000001u; // 80056A68
L_80056A6C:;
  cmps(c,0,(int32_t)c->r[0],1); // 80056A6C
  if (!crb(c,2)) { goto L_80056ADC; } // 80056A70
  c->r[0]=R32(c->r[26]+0x00000058u); // 80056A74
  cmps(c,0,(int32_t)c->r[0],0); // 80056A78
  if (!crb(c,2)) { goto L_80056AB8; } // 80056A7C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80056A80
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80056A84
  fcmp(c,0,c->f[1],c->f[0]); // 80056A88
  if (!crb(c,1)) { goto L_80056A9C; } // 80056A8C
  c->r[0]=R32(c->r[26]+0x0000001Cu); // 80056A90
  c->r[0]=c->r[0]|0x00000001u; // 80056A94
  W32(c->r[26]+0x0000001Cu,c->r[0]); // 80056A98
L_80056A9C:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80056A9C
  {uint32_t ea=c->r[2]+0xFFFF8C1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80056AA0
  fcmp(c,0,c->f[1],c->f[0]); // 80056AA4
  if (!crb(c,0)) { goto L_80056AB8; } // 80056AA8
  c->r[0]=R32(c->r[26]+0x00000020u); // 80056AAC
  c->r[0]=c->r[0]|0x00000001u; // 80056AB0
  W32(c->r[26]+0x00000020u,c->r[0]); // 80056AB4
L_80056AB8:;
  c->r[4]=R32(c->r[26]+0x00000058u); // 80056AB8
  c->r[0]=0u+0xFFFFFFFFu; // 80056ABC
  c->r[4]=c->r[4]+0x00000001u; // 80056AC0
  cmpu(c,0,c->r[4],c->r[0]); // 80056AC4
  W32(c->r[26]+0x00000058u,c->r[4]); // 80056AC8
  if (crb(c,0)) { goto L_80056AE4; } // 80056ACC
  c->r[0]=0u+0xFFFFFFFEu; // 80056AD0
  W32(c->r[26]+0x00000058u,c->r[0]); // 80056AD4
  goto L_80056AE4; // 80056AD8
L_80056ADC:;
  c->r[0]=0u+0x00000000u; // 80056ADC
  W32(c->r[26]+0x00000058u,c->r[0]); // 80056AE0
L_80056AE4:;
  c->r[0]=0u+0x00000000u; // 80056AE4
  cmps(c,0,(int32_t)c->r[3],0); // 80056AE8
  W32(c->r[26]+0x00000010u,c->r[0]); // 80056AEC
  if (crb(c,2)) { goto L_80056B0C; } // 80056AF0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80056AF4
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[0]=c->ps1[0]=RF32(ea);} // 80056AF8
  fcmp(c,0,c->f[1],c->f[0]); // 80056AFC
  if (!crb(c,0)) { goto L_80056B0C; } // 80056B00
  c->r[0]=0u+0x00000001u; // 80056B04
  W32(c->r[26]+0x00000010u,c->r[0]); // 80056B08
L_80056B0C:;
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80056B0C
  c->r[5]=rotl(c->r[27],0)&0x00000004u; // 80056B10
  {uint32_t ea=c->r[26]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80056B14
  cmps(c,0,(int32_t)c->r[29],0); // 80056B18
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 80056B1C
  {uint32_t ea=c->r[26]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 80056B20
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 80056B24
  c->r[4]=R32(c->r[1]+0x00000008u); // 80056B28
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 80056B2C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80056B30
  c->r[0]=R32(c->r[1]+0x00000010u); // 80056B34
  W32(c->r[1]+0x00000014u,c->r[4]); // 80056B38
  W32(c->r[1]+0x00000018u,c->r[3]); // 80056B3C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80056B40
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80056B44
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80056B48
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80056B4C
  W32(c->r[26]+0x00000014u,c->r[5]); // 80056B50
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[5]);} // 80056B54
  {uint32_t ea=c->r[26]+0x00000030u; WF32(ea,c->f[4]);} // 80056B58
  {uint32_t ea=c->r[26]+0x00000034u; WF32(ea,c->f[2]);} // 80056B5C
  {uint32_t ea=c->r[26]+0x00000038u; WF32(ea,c->f[1]);} // 80056B60
  {uint32_t ea=c->r[26]+0x0000003Cu; WF32(ea,c->f[0]);} // 80056B64
  {uint32_t ea=c->r[26]+0x0000002Cu; WF32(ea,c->f[3]);} // 80056B68
  if (crb(c,2)) { goto L_80056BC0; } // 80056B6C
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80056B70
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80056B74
  {uint32_t ea=c->r[26]+0x00000034u; WF32(ea,c->f[5]);} // 80056B78
  {uint32_t ea=c->r[29]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 80056B7C
  {uint32_t ea=c->r[26]+0x00000038u; WF32(ea,c->f[4]);} // 80056B80
  {uint32_t ea=c->r[29]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 80056B84
  {uint32_t ea=c->r[26]+0x0000003Cu; WF32(ea,c->f[3]);} // 80056B88
  {uint32_t ea=c->r[29]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80056B8C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80056B90
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[0]); // 80056B94
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[0]); // 80056B98
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80056B9C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[2]); // 80056BA0
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[1]); // 80056BA4
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 80056BA8
  {uint32_t ea=c->r[26]+0x00000034u; WF32(ea,c->f[2]);} // 80056BAC
  {uint32_t ea=c->r[26]+0x00000038u; WF32(ea,c->f[1]);} // 80056BB0
  {uint32_t ea=c->r[26]+0x0000003Cu; WF32(ea,c->f[0]);} // 80056BB4
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80056BB8
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[0]);} // 80056BBC
L_80056BC0:;
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80056BC0
  c->r[11]=c->r[1]+0x00000040u; // 80056BC4
  c->r[3]=0u+0x00000001u; // 80056BC8
  {uint32_t ea=c->r[26]+0x00000054u; WF32(ea,c->f[0]);} // 80056BCC
  {uint32_t ea=c->r[31]+0x00005898u; c->f[0]=c->ps1[0]=RF32(ea);} // 80056BD0
  {uint32_t ea=c->r[26]+0x0000004Cu; WF32(ea,c->f[0]);} // 80056BD4
  {uint32_t ea=c->r[31]+0x0000589Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80056BD8
  {uint32_t ea=c->r[26]+0x00000050u; WF32(ea,c->f[0]);} // 80056BDC
  c->lr=0x80056BE4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80056BE0
  c->r[0]=R32(c->r[1]+0x00000044u); // 80056BE4
  c->lr=c->r[0]; // 80056BE8
  c->r[1]=c->r[1]+0x00000040u; // 80056BEC
  return; // 80056BF0
}

// fn_80056BF4
void f_80056BF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056BF4
  c->r[3]=0u+0x803E0000u; // 80056BF8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)22840); // 80056BFC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80056C00
  c->r[3]=c->r[3]+0x00001900u; // 80056C04
  W32(c->r[1]+0x00000028u,c->r[30]); // 80056C08
  c->r[3]=c->r[3]+c->r[0]; // 80056C0C
  c->r[0]=addc(c,c->r[3],0x00000890u,0); cr0(c,c->r[0]); // 80056C10
  c->r[30]=0u+0x00000000u; // 80056C14
  c->r[4]=R32(c->r[3]+0x00000034u); // 80056C18
  c->r[6]=R32(c->r[3]+0x00000030u); // 80056C1C
  c->r[3]=R32(c->r[3]+0x00000038u); // 80056C20
  if (crb(c,2)) { goto L_80056C2C; } // 80056C24
  c->r[30]=c->r[0]|c->r[0]; // 80056C28
L_80056C2C:;
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80056C2C
  c->r[31]=rotl(c->r[6],0)&0x00000100u; // 80056C30
  {uint32_t ea=c->r[5]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 80056C34
  c->r[12]=rotl(c->r[6],0)&0x00000008u; // 80056C38
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 80056C3C
  c->r[11]=rotl(c->r[4],0)&0x00000100u; // 80056C40
  c->r[10]=rotl(c->r[4],0)&0x00000008u; // 80056C44
  c->r[9]=rotl(c->r[4],0)&0x00000800u; // 80056C48
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 80056C4C
  c->r[8]=rotl(c->r[3],0)&0x00000200u; // 80056C50
  c->r[7]=rotl(c->r[3],0)&0x00000004u; // 80056C54
  c->r[0]=R32(c->r[1]+0x00000010u); // 80056C58
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 80056C5C
  c->r[6]=rotl(c->r[6],0)&0x00000001u; // 80056C60
  c->r[4]=R32(c->r[1]+0x00000008u); // 80056C64
  cmps(c,0,(int32_t)c->r[30],0); // 80056C68
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80056C6C
  W32(c->r[1]+0x00000014u,c->r[4]); // 80056C70
  W32(c->r[1]+0x00000018u,c->r[3]); // 80056C74
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80056C78
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80056C7C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80056C80
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80056C84
  W32(c->r[5]+0x00000000u,c->r[31]); // 80056C88
  W32(c->r[5]+0x00000004u,c->r[12]); // 80056C8C
  W32(c->r[5]+0x00000008u,c->r[11]); // 80056C90
  W32(c->r[5]+0x0000000Cu,c->r[10]); // 80056C94
  W32(c->r[5]+0x00000018u,c->r[9]); // 80056C98
  W32(c->r[5]+0x0000001Cu,c->r[8]); // 80056C9C
  W32(c->r[5]+0x00000020u,c->r[7]); // 80056CA0
  W32(c->r[5]+0x00000010u,c->r[6]); // 80056CA4
  W32(c->r[5]+0x00000014u,c->r[31]); // 80056CA8
  {uint32_t ea=c->r[5]+0x00000028u; WF32(ea,c->f[4]);} // 80056CAC
  {uint32_t ea=c->r[5]+0x00000034u; WF32(ea,c->f[2]);} // 80056CB0
  {uint32_t ea=c->r[5]+0x00000038u; WF32(ea,c->f[1]);} // 80056CB4
  {uint32_t ea=c->r[5]+0x0000003Cu; WF32(ea,c->f[0]);} // 80056CB8
  {uint32_t ea=c->r[5]+0x00000024u; WF32(ea,c->f[3]);} // 80056CBC
  if (crb(c,2)) { goto L_80056CE4; } // 80056CC0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80056CC4
  {uint32_t ea=c->r[5]+0x00000034u; WF32(ea,c->f[0]);} // 80056CC8
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80056CCC
  {uint32_t ea=c->r[5]+0x00000038u; WF32(ea,c->f[0]);} // 80056CD0
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80056CD4
  {uint32_t ea=c->r[5]+0x0000003Cu; WF32(ea,c->f[0]);} // 80056CD8
  {uint32_t ea=c->r[30]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80056CDC
  {uint32_t ea=c->r[5]+0x00000024u; WF32(ea,c->f[0]);} // 80056CE0
L_80056CE4:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80056CE4
  c->r[3]=0u+0x00000001u; // 80056CE8
  c->r[30]=R32(c->r[1]+0x00000028u); // 80056CEC
  c->r[1]=c->r[1]+0x00000030u; // 80056CF0
  return; // 80056CF4
}

// fn_80056CF8
void f_80056CF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80056CF8
  {uint32_t ea=c->r[3]+0x000001D0u; WF32(ea,c->f[0]);} // 80056CFC
  {uint32_t ea=c->r[3]+0x000001D4u; WF32(ea,c->f[0]);} // 80056D00
  {uint32_t ea=c->r[3]+0x000001D8u; WF32(ea,c->f[0]);} // 80056D04
  {uint32_t ea=c->r[3]+0x000001DCu; WF32(ea,c->f[0]);} // 80056D08
  {uint32_t ea=c->r[3]+0x000001E0u; WF32(ea,c->f[0]);} // 80056D0C
  {uint32_t ea=c->r[3]+0x000001E4u; WF32(ea,c->f[0]);} // 80056D10
  {uint32_t ea=c->r[3]+0x000001E8u; WF32(ea,c->f[0]);} // 80056D14
  return; // 80056D18
}

// fn_80056D1C
void f_80056D1C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000194u); // 80056D1C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80056D20
  c->r[4]=c->r[3]+c->r[0]; // 80056D24
  c->r[0]=R32(c->r[4]+0x000001B4u); // 80056D28
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80056D2C
  c->r[4]=c->r[3]+c->r[5]; // 80056D30
  c->r[0]=R32(c->r[4]+0x00000198u); // 80056D34
  cmps(c,0,(int32_t)c->r[0],-1); // 80056D38
  if (!crb(c,2)) { goto L_80056D48; } // 80056D3C
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80056D40
  return; // 80056D44
L_80056D48:;
  c->r[3]=0u+0x802B0000u; // 80056D48
  {uint32_t ea=c->r[4]+0x000001D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80056D4C
  c->r[3]=c->r[3]+0xFFFFDD70u; // 80056D50
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80056D54
  {uint32_t ea=c->r[3]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 80056D58
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80056D5C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80056D60
  return; // 80056D64
}

// fn_80056D68
void f_80056D68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056D68
  c->r[0]=c->lr; // 80056D6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80056D70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80056D74
  W32(c->r[1]+0x00000018u,c->r[30]); // 80056D78
  W32(c->r[1]+0x00000014u,c->r[29]); // 80056D7C
  c->r[29]=c->r[3]|c->r[3]; // 80056D80
  c->lr=0x80056D88u; f_8007AB30(c); // 80056D84
  c->r[31]=c->r[3]|c->r[3]; // 80056D88
  c->r[3]=0u+0x00000000u; // 80056D8C
  c->lr=0x80056D94u; f_80059E48(c); // 80056D90
  c->r[0]=R32(c->r[29]+0x00000194u); // 80056D94
  c->r[30]=c->r[3]|c->r[3]; // 80056D98
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80056D9C
  c->r[4]=c->r[29]+c->r[0]; // 80056DA0
  c->r[0]=R32(c->r[4]+0x000001B4u); // 80056DA4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80056DA8
  c->r[4]=c->r[29]+c->r[0]; // 80056DAC
  c->r[0]=R32(c->r[4]+0x00000198u); // 80056DB0
  cmps(c,0,(int32_t)c->r[0],-1); // 80056DB4
  if (!crb(c,2)) { goto L_80056DC4; } // 80056DB8
  c->r[3]=0u+0x00000000u; // 80056DBC
  goto L_80056EC8; // 80056DC0
L_80056DC4:;
  c->lr=0x80056DC8u; f_800586DC(c); // 80056DC4
  cmps(c,0,(int32_t)c->r[3],0); // 80056DC8
  if (!crb(c,2)) { goto L_80056DD8; } // 80056DCC
  c->r[3]=0u+0x00000000u; // 80056DD0
  goto L_80056EC8; // 80056DD4
L_80056DD8:;
  c->r[3]=c->r[31]|c->r[31]; // 80056DD8
  c->lr=0x80056DE0u; f_8007A1E8(c); // 80056DDC
  cmps(c,0,(int32_t)c->r[3],1); // 80056DE0
  if (!crb(c,2)) { goto L_80056DF0; } // 80056DE4
  c->r[3]=0u+0x00000000u; // 80056DE8
  goto L_80056EC8; // 80056DEC
L_80056DF0:;
  c->r[0]=R32(c->r[29]+0x00000194u); // 80056DF0
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80056DF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80056DF8
  c->r[3]=c->r[29]+c->r[0]; // 80056DFC
  c->r[4]=R32(c->r[3]+0x000001B4u); // 80056E00
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80056E04
  c->r[3]=c->r[29]+c->r[0]; // 80056E08
  {uint32_t ea=c->r[3]+0x000001D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80056E0C
  fcmp(c,0,c->f[1],c->f[0]); // 80056E10
  if (!crb(c,1)) { goto L_80056E20; } // 80056E14
  c->r[3]=0u+0x00000000u; // 80056E18
  goto L_80056EC8; // 80056E1C
L_80056E20:;
  c->r[0]=R32(c->r[29]+0x00000454u); // 80056E20
  cmps(c,0,(int32_t)c->r[0],0); // 80056E24
  if (crb(c,2)) { goto L_80056E34; } // 80056E28
  c->r[3]=0u+0x00000000u; // 80056E2C
  goto L_80056EC8; // 80056E30
L_80056E34:;
  cmps(c,0,(int32_t)c->r[4],4); // 80056E34
  if (crb(c,2)) { goto L_80056E5C; } // 80056E38
  if (!crb(c,0)) { goto L_80056E50; } // 80056E3C
  cmps(c,0,(int32_t)c->r[4],2); // 80056E40
  if (crb(c,2)) { goto L_80056E88; } // 80056E44
  if (!crb(c,0)) { goto L_80056EC4; } // 80056E48
  goto L_80056EC4; // 80056E4C
L_80056E50:;
  cmps(c,0,(int32_t)c->r[4],6); // 80056E50
  if (crb(c,2)) { goto L_80056E88; } // 80056E54
  goto L_80056EC4; // 80056E58
L_80056E5C:;
  c->r[0]=R32(c->r[29]+0x000001ECu); // 80056E5C
  cmps(c,0,(int32_t)c->r[0],0); // 80056E60
  if (crb(c,1)) { goto L_80056E70; } // 80056E64
  c->r[3]=0u+0x00000000u; // 80056E68
  goto L_80056EC8; // 80056E6C
L_80056E70:;
  c->lr=0x80056E74u; f_8007AB30(c); // 80056E70
  c->lr=0x80056E78u; f_8007A948(c); // 80056E74
  cmps(c,0,(int32_t)c->r[3],1); // 80056E78
  if (!crb(c,2)) { goto L_80056E88; } // 80056E7C
  c->r[3]=0u+0x00000000u; // 80056E80
  goto L_80056EC8; // 80056E84
L_80056E88:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80056E88
  c->r[3]=c->r[30]|c->r[30]; // 80056E8C
  c->r[12]=R32(c->r[12]+0x00000030u); // 80056E90
  c->ctr=c->r[12]; // 80056E94
  if (true) { c->lr=0x80056E9Cu; dispatch(c,c->ctr); } // 80056E98
  cmps(c,0,(int32_t)c->r[3],1); // 80056E9C
  if (!crb(c,1)) { goto L_80056EAC; } // 80056EA0
  c->r[3]=0u+0x00000000u; // 80056EA4
  goto L_80056EC8; // 80056EA8
L_80056EAC:;
  c->lr=0x80056EB0u; f_8007AB30(c); // 80056EAC
  c->lr=0x80056EB4u; f_8007A948(c); // 80056EB0
  cmps(c,0,(int32_t)c->r[3],1); // 80056EB4
  if (!crb(c,2)) { goto L_80056EC4; } // 80056EB8
  c->r[3]=0u+0x00000000u; // 80056EBC
  goto L_80056EC8; // 80056EC0
L_80056EC4:;
  c->r[3]=0u+0x00000001u; // 80056EC4
L_80056EC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80056EC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80056ECC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80056ED0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80056ED4
  c->lr=c->r[0]; // 80056ED8
  c->r[1]=c->r[1]+0x00000020u; // 80056EDC
  return; // 80056EE0
}

// fn_80056EE4
void f_80056EE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80056EE4
  c->r[0]=c->lr; // 80056EE8
  W32(c->r[1]+0x000002E4u,c->r[0]); // 80056EEC
  W32(c->r[1]+0x000002DCu,c->r[31]); // 80056EF0
  c->r[31]=c->r[3]|c->r[3]; // 80056EF4
  c->r[3]=0u+0x00000000u; // 80056EF8
  W32(c->r[1]+0x000002D8u,c->r[30]); // 80056EFC
  W32(c->r[1]+0x000002D4u,c->r[29]); // 80056F00
  W32(c->r[1]+0x000002D0u,c->r[28]); // 80056F04
  c->lr=0x80056F0Cu; f_80059E48(c); // 80056F08
  c->r[29]=c->r[3]|c->r[3]; // 80056F0C
  c->lr=0x80056F14u; f_8007AB30(c); // 80056F10
  c->r[0]=R32(c->r[31]+0x00000454u); // 80056F14
  c->r[30]=c->r[3]|c->r[3]; // 80056F18
  cmps(c,0,(int32_t)c->r[0],0); // 80056F1C
  if (!crb(c,1)) { goto L_80056F84; } // 80056F20
  c->r[3]=c->r[29]|c->r[29]; // 80056F24
  c->lr=0x80056F2Cu; f_8005863C(c); // 80056F28
  cmps(c,0,(int32_t)c->r[3],0); // 80056F2C
  if (crb(c,1)) { goto L_80056F3C; } // 80056F30
  c->r[0]=0u+0x00000007u; // 80056F34
  W32(c->r[31]+0x00000454u,c->r[0]); // 80056F38
L_80056F3C:;
  c->r[3]=c->r[29]|c->r[29]; // 80056F3C
  c->lr=0x80056F44u; f_800584E4(c); // 80056F40
  cmps(c,0,(int32_t)c->r[3],1); // 80056F44
  if (!crb(c,2)) { goto L_80056F54; } // 80056F48
  c->r[0]=0u+0x00000007u; // 80056F4C
  W32(c->r[31]+0x00000454u,c->r[0]); // 80056F50
L_80056F54:;
  c->r[3]=c->r[30]|c->r[30]; // 80056F54
  c->lr=0x80056F5Cu; f_8007A1E8(c); // 80056F58
  cmps(c,0,(int32_t)c->r[3],1); // 80056F5C
  if (!crb(c,2)) { goto L_80056F6C; } // 80056F60
  c->r[0]=0u+0x00000007u; // 80056F64
  W32(c->r[31]+0x00000454u,c->r[0]); // 80056F68
L_80056F6C:;
  c->lr=0x80056F70u; f_800076B4(c); // 80056F6C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80056F70
  cmps(c,0,(int32_t)c->r[0],16); // 80056F74
  if (!crb(c,2)) { goto L_80056F84; } // 80056F78
  c->r[0]=0u+0x00000007u; // 80056F7C
  W32(c->r[31]+0x00000454u,c->r[0]); // 80056F80
L_80056F84:;
  c->r[0]=R32(c->r[31]+0x00000454u); // 80056F84
  cmps(c,0,(int32_t)c->r[0],4); // 80056F88
  if (crb(c,2)) { goto L_800571B0; } // 80056F8C
  if (!crb(c,0)) { goto L_80056FAC; } // 80056F90
  cmps(c,0,(int32_t)c->r[0],0); // 80056F94
  if (crb(c,2)) { goto L_80057208; } // 80056F98
  if (crb(c,0)) { goto L_80057208; } // 80056F9C
  cmps(c,0,(int32_t)c->r[0],3); // 80056FA0
  if (!crb(c,0)) { goto L_80056FD8; } // 80056FA4
  goto L_80056FB8; // 80056FA8
L_80056FAC:;
  cmps(c,0,(int32_t)c->r[0],7); // 80056FAC
  if (crb(c,2)) { goto L_800571EC; } // 80056FB0
  goto L_80057208; // 80056FB4
L_80056FB8:;
  c->r[3]=0u+0x00000001u; // 80056FB8
  c->r[4]=0u+0x00000000u; // 80056FBC
  c->lr=0x80056FC4u; f_800078AC(c); // 80056FC0
  {uint32_t ea=c->r[2]+0xFFFF8C24u; c->f[0]=c->ps1[0]=RF32(ea);} // 80056FC4
  c->r[0]=0u+0x00000003u; // 80056FC8
  W32(c->r[31]+0x00000454u,c->r[0]); // 80056FCC
  {uint32_t ea=c->r[31]+0x00000458u; WF32(ea,c->f[0]);} // 80056FD0
  goto L_80057208; // 80056FD4
L_80056FD8:;
  c->lr=0x80056FDCu; f_8004E0B4(c); // 80056FD8
  c->r[4]=0u+0x00000000u; // 80056FDC
  c->lr=0x80056FE4u; f_8004E07C(c); // 80056FE0
  c->r[4]=R32(c->r[3]+0x00000030u); // 80056FE4
  c->r[0]=R32(c->r[3]+0x00000034u); // 80056FE8
  W32(c->r[1]+0x00000020u,c->r[4]); // 80056FEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80056FF0
  c->r[0]=R32(c->r[3]+0x00000038u); // 80056FF4
  c->r[3]=0u+0x00000000u; // 80056FF8
  W32(c->r[1]+0x00000028u,c->r[0]); // 80056FFC
  c->lr=0x80057004u; f_80059E68(c); // 80057000
  c->r[30]=R32(c->r[3]+0x00000000u); // 80057004
  c->r[3]=0u+0x00000001u; // 80057008
  c->r[4]=0u+0x00000000u; // 8005700C
  c->lr=0x80057014u; f_800078AC(c); // 80057010
  c->r[3]=0u+0x80370000u; // 80057014
  c->r[4]=0u+0x00000001u; // 80057018
  c->r[3]=c->r[3]+0x00005C48u; // 8005701C
  c->lr=0x80057024u; f_800C39A8(c); // 80057020
  c->r[3]=0u+0x00010000u; // 80057024
  c->r[3]=c->r[3]+0x00000055u; // 80057028
  c->lr=0x80057030u; f_800EFEF4(c); // 8005702C
  c->lr=0x80057034u; f_80013AA4(c); // 80057030
  {uint32_t ea=c->r[31]+0x00000458u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057034
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80057038
  {uint32_t ea=c->r[31]+0x00000458u; WF32(ea,c->f[0]);} // 8005703C
  c->lr=0x80057044u; f_800076EC(c); // 80057040
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[2]=c->ps1[2]=RF32(ea);} // 80057044
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057048
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8005704C
  fcmp(c,0,c->f[1],c->f[0]); // 80057050
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80057054
  if (!crb(c,2)) { goto L_80057060; } // 80057058
  c->f[1]=c->f[0]; // 8005705C
L_80057060:;
  c->lr=0x80057064u; f_800076F4(c); // 80057060
  {uint32_t ea=c->r[31]+0x00000458u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057064
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057068
  fcmp(c,0,c->f[1],c->f[0]); // 8005706C
  if (!crb(c,0)) { goto L_80057094; } // 80057070
  c->r[3]=0u+0x00000000u; // 80057074
  c->r[0]=0u+0x00000004u; // 80057078
  W32(c->r[31]+0x00000468u,c->r[3]); // 8005707C
  c->r[3]=0u+0x00000000u; // 80057080
  c->r[4]=0u+0x00000000u; // 80057084
  W32(c->r[31]+0x00000454u,c->r[0]); // 80057088
  c->lr=0x80057090u; f_800078AC(c); // 8005708C
  goto L_80057208; // 80057090
L_80057094:;
  c->r[0]=R32(c->r[30]+0x00000274u); // 80057094
  cmps(c,0,(int32_t)c->r[0],0); // 80057098
  if (crb(c,2)) { goto L_80057208; } // 8005709C
  {uint32_t ea=c->r[2]+0xFFFF8C30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800570A0
  c->r[3]=c->r[31]|c->r[31]; // 800570A4
  c->r[4]=c->r[1]+0x00000014u; // 800570A8
  c->r[5]=c->r[1]+0x00000008u; // 800570AC
  c->lr=0x800570B4u; f_80057228(c); // 800570B0
  c->r[3]=c->r[29]|c->r[29]; // 800570B4
  c->r[29]=0u+0x00000000u; // 800570B8
  c->lr=0x800570C0u; f_80058870(c); // 800570BC
  cmps(c,0,(int32_t)c->r[3],0); // 800570C0
  if (crb(c,2)) { goto L_800570E4; } // 800570C4
  c->lr=0x800570CCu; f_8007AB30(c); // 800570C8
  c->r[4]=c->r[1]+0x0000002Cu; // 800570CC
  c->r[5]=c->r[1]+0x00000020u; // 800570D0
  c->r[6]=c->r[1]+0x00000008u; // 800570D4
  c->lr=0x800570DCu; f_80079F3C(c); // 800570D8
  cmps(c,0,(int32_t)c->r[3],0); // 800570DC
  if (!crb(c,2)) { goto L_800570F4; } // 800570E0
L_800570E4:;
  c->r[3]=0u+0x00030000u; // 800570E4
  c->r[3]=c->r[3]+0x00000013u; // 800570E8
  c->lr=0x800570F0u; f_800EFD50(c); // 800570EC
  goto L_80057208; // 800570F0
L_800570F4:;
  c->r[30]=c->r[1]+0x0000002Cu; // 800570F4
  c->r[28]=0u+0x00000000u; // 800570F8
  goto L_80057150; // 800570FC
L_80057100:;
  c->lr=0x80057104u; f_8007AB30(c); // 80057100
  c->r[4]=R32(c->r[30]+0x00000244u); // 80057104
  c->lr=0x8005710Cu; f_800789D0(c); // 80057108
  c->lr=0x80057110u; f_80078280(c); // 8005710C
  cmps(c,0,(int32_t)c->r[3],0); // 80057110
  if (!crb(c,2)) { goto L_80057148; } // 80057114
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)12); // 80057118
  c->r[5]=c->r[1]+0x00000030u; // 8005711C
  c->r[4]=c->r[1]+0x00000034u; // 80057120
  c->r[3]=c->r[1]+0x00000038u; // 80057124
  {uint32_t ea=c->r[5]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80057128
  c->r[29]=0u+0x00000001u; // 8005712C
  {uint32_t ea=c->r[31]+0x0000045Cu; WF32(ea,c->f[0]);} // 80057130
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80057134
  {uint32_t ea=c->r[31]+0x00000460u; WF32(ea,c->f[0]);} // 80057138
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8005713C
  {uint32_t ea=c->r[31]+0x00000464u; WF32(ea,c->f[0]);} // 80057140
  goto L_8005715C; // 80057144
L_80057148:;
  c->r[30]=c->r[30]+0x00000004u; // 80057148
  c->r[28]=c->r[28]+0x00000001u; // 8005714C
L_80057150:;
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80057150
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80057154
  if (crb(c,0)) { IRQCHK(c); goto L_80057100; } // 80057158
L_8005715C:;
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8005715C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80057160
  if (!crb(c,2)) { goto L_80057174; } // 80057164
  c->r[3]=0u+0x00030000u; // 80057168
  c->r[3]=c->r[3]+0x00000013u; // 8005716C
  c->lr=0x80057174u; f_800EFD50(c); // 80057170
L_80057174:;
  cmps(c,0,(int32_t)c->r[29],1); // 80057174
  if (!crb(c,2)) { goto L_80057208; } // 80057178
  {uint32_t ea=c->r[2]+0xFFFF8C34u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005717C
  c->r[3]=0u+0x00000001u; // 80057180
  c->r[0]=0u+0x00000004u; // 80057184
  W32(c->r[31]+0x00000468u,c->r[3]); // 80057188
  c->r[3]=0u+0x00000000u; // 8005718C
  c->r[4]=0u+0x00000000u; // 80057190
  {uint32_t ea=c->r[31]+0x00000458u; WF32(ea,c->f[0]);} // 80057194
  W32(c->r[31]+0x00000454u,c->r[0]); // 80057198
  c->lr=0x800571A0u; f_800078AC(c); // 8005719C
  c->r[3]=0u+0x00010000u; // 800571A0
  c->r[3]=c->r[3]+0x0000005Au; // 800571A4
  c->lr=0x800571ACu; f_800EFD50(c); // 800571A8
  goto L_80057208; // 800571AC
L_800571B0:;
  c->lr=0x800571B4u; f_80013AA4(c); // 800571B0
  {uint32_t ea=c->r[31]+0x00000458u; c->f[0]=c->ps1[0]=RF32(ea);} // 800571B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800571B8
  {uint32_t ea=c->r[31]+0x00000458u; WF32(ea,c->f[0]);} // 800571BC
  c->lr=0x800571C4u; f_800076EC(c); // 800571C0
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[2]=c->ps1[2]=RF32(ea);} // 800571C4
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800571C8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800571CC
  fcmp(c,0,c->f[1],c->f[0]); // 800571D0
  if (!crb(c,1)) { goto L_800571E4; } // 800571D4
  c->r[0]=0u+0x00000007u; // 800571D8
  c->f[1]=c->f[0]; // 800571DC
  W32(c->r[31]+0x00000454u,c->r[0]); // 800571E0
L_800571E4:;
  c->lr=0x800571E8u; f_800076F4(c); // 800571E4
  goto L_80057208; // 800571E8
L_800571EC:;
  c->r[3]=0u+0x00000000u; // 800571EC
  c->r[4]=0u+0x00000000u; // 800571F0
  c->lr=0x800571F8u; f_800078AC(c); // 800571F4
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800571F8
  c->lr=0x80057200u; f_800076F4(c); // 800571FC
  c->r[0]=0u+0x00000000u; // 80057200
  W32(c->r[31]+0x00000454u,c->r[0]); // 80057204
L_80057208:;
  c->r[0]=R32(c->r[1]+0x000002E4u); // 80057208
  c->r[31]=R32(c->r[1]+0x000002DCu); // 8005720C
  c->r[30]=R32(c->r[1]+0x000002D8u); // 80057210
  c->r[29]=R32(c->r[1]+0x000002D4u); // 80057214
  c->r[28]=R32(c->r[1]+0x000002D0u); // 80057218
  c->lr=c->r[0]; // 8005721C
  c->r[1]=c->r[1]+0x000002E0u; // 80057220
  return; // 80057224
}

// fn_80057228
void f_80057228(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFDB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80057228
  c->r[0]=c->lr; // 8005722C
  W32(c->r[1]+0x00000254u,c->r[0]); // 80057230
  {uint32_t ea=c->r[1]+0x00000240u; WF64(ea,c->f[31]);} // 80057234
  {uint32_t ea=c->r[1]+0x00000248u; psq_store(c,31,ea,0,0);} // 80057238
  {uint32_t ea=c->r[1]+0x00000230u; WF64(ea,c->f[30]);} // 8005723C
  {uint32_t ea=c->r[1]+0x00000238u; psq_store(c,30,ea,0,0);} // 80057240
  {uint32_t ea=c->r[1]+0x00000220u; WF64(ea,c->f[29]);} // 80057244
  {uint32_t ea=c->r[1]+0x00000228u; psq_store(c,29,ea,0,0);} // 80057248
  c->f[31]=c->f[1]; // 8005724C
  W32(c->r[1]+0x0000021Cu,c->r[31]); // 80057250
  c->r[31]=c->r[3]|c->r[3]; // 80057254
  W32(c->r[1]+0x00000218u,c->r[30]); // 80057258
  W32(c->r[1]+0x00000214u,c->r[29]); // 8005725C
  c->r[29]=c->r[5]|c->r[5]; // 80057260
  W32(c->r[1]+0x00000210u,c->r[28]); // 80057264
  c->r[28]=c->r[4]|c->r[4]; // 80057268
  c->lr=0x80057270u; f_8004E0B4(c); // 8005726C
  c->r[30]=c->r[3]|c->r[3]; // 80057270
  c->r[3]=0u+0x00000000u; // 80057274
  c->lr=0x8005727Cu; f_80059E68(c); // 80057278
  c->r[0]=R32(c->r[31]+0x00000168u); // 8005727C
  c->r[4]=0u+0x00000000u; // 80057280
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80057284
  c->r[31]=R32(c->r[3]+c->r[0]); // 80057288
  c->r[3]=c->r[30]|c->r[30]; // 8005728C
  c->lr=0x80057294u; f_8004E07C(c); // 80057290
  {uint32_t ea=c->r[2]+0xFFFF8C38u; c->f[30]=c->ps1[30]=RF32(ea);} // 80057294
  c->r[30]=c->r[3]|c->r[3]; // 80057298
  {uint32_t ea=c->r[2]+0xFFFF8C3Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 8005729C
  c->r[3]=c->r[1]+0x00000148u; // 800572A0
  c->lr=0x800572A8u; f_80163838(c); // 800572A4
  c->r[6]=R32(c->r[30]+0x00000030u); // 800572A8
  c->r[4]=c->r[30]|c->r[30]; // 800572AC
  c->r[5]=R32(c->r[30]+0x00000034u); // 800572B0
  c->r[3]=c->r[1]+0x00000058u; // 800572B4
  c->r[0]=R32(c->r[30]+0x00000038u); // 800572B8
  W32(c->r[1]+0x00000064u,c->r[6]); // 800572BC
  W32(c->r[1]+0x00000068u,c->r[5]); // 800572C0
  {uint32_t ea=c->r[1]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800572C4
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800572C8
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 800572CC
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800572D0
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 800572D4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 800572D8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800572DC
  c->lr=0x800572E4u; f_800EB040(c); // 800572E0
  c->f[0]=c->ps1[0]=S(c->f[30]/c->f[29]); // 800572E4
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[5]=c->ps1[5]=RF32(ea);} // 800572E8
  {uint32_t ea=c->r[31]+0x000002A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800572EC
  c->r[3]=c->r[30]|c->r[30]; // 800572F0
  {uint32_t ea=c->r[31]+0x000002ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 800572F4
  c->r[4]=c->r[1]+0x000001D8u; // 800572F8
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[30]); // 800572FC
  c->r[12]=R32(c->r[30]+0x00000160u); // 80057300
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[5]); // 80057304
  {uint32_t ea=c->r[1]+0x00000058u; c->f[7]=c->ps1[7]=RF32(ea);} // 80057308
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[5]); // 8005730C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80057310
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80057314
  {uint32_t ea=c->r[1]+0x00000060u; c->f[5]=c->ps1[5]=RF32(ea);} // 80057318
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[29]); // 8005731C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 80057320
  c->f[1]=c->ps1[1]=S(c->f[4]/c->f[2]); // 80057324
  c->r[12]=R32(c->r[12]+0x00000058u); // 80057328
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[7]);} // 8005732C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 80057330
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[5]);} // 80057334
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[0]); // 80057338
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8005733C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80057340
  c->ctr=c->r[12]; // 80057344
  if (true) { c->lr=0x8005734Cu; dispatch(c,c->ctr); } // 80057348
  c->r[12]=R32(c->r[30]+0x00000160u); // 8005734C
  c->r[3]=c->r[30]|c->r[30]; // 80057350
  c->r[4]=c->r[1]+0x000000E8u; // 80057354
  c->r[12]=R32(c->r[12]+0x00000048u); // 80057358
  c->ctr=c->r[12]; // 8005735C
  if (true) { c->lr=0x80057364u; dispatch(c,c->ctr); } // 80057360
  {uint32_t ea=c->r[1]+0x000001E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80057364
  c->r[3]=c->r[1]+0x00000148u; // 80057368
  {uint32_t ea=c->r[1]+0x000001F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005736C
  c->r[4]=c->r[1]+0x000000B8u; // 80057370
  {uint32_t ea=c->r[1]+0x00000204u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057374
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[2]);} // 80057378
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 8005737C
  c->r[6]=R32(c->r[1]+0x000000A0u); // 80057380
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 80057384
  c->r[5]=R32(c->r[1]+0x000000A4u); // 80057388
  c->r[0]=R32(c->r[1]+0x000000A8u); // 8005738C
  W32(c->r[1]+0x0000004Cu,c->r[6]); // 80057390
  W32(c->r[1]+0x00000050u,c->r[5]); // 80057394
  W32(c->r[1]+0x00000054u,c->r[0]); // 80057398
  c->lr=0x800573A0u; f_80163864(c); // 8005739C
  {uint32_t ea=c->r[1]+0x00000108u; c->f[2]=c->ps1[2]=RF32(ea);} // 800573A0
  c->r[3]=c->r[1]+0x00000118u; // 800573A4
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800573A8
  {uint32_t ea=c->r[1]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 800573AC
  c->f[2]=-c->f[2]; // 800573B0
  c->f[1]=-c->f[1]; // 800573B4
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 800573B8
  c->f[0]=-c->f[0]; // 800573BC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[10]=c->ps1[10]=RF32(ea);} // 800573C0
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[31]); // 800573C4
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[31]); // 800573C8
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[31]); // 800573CC
  {uint32_t ea=c->r[1]+0x00000054u; c->f[9]=c->ps1[9]=RF32(ea);} // 800573D0
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[5]=c->ps1[5]=RF32(ea);} // 800573D4
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[4]=c->ps1[4]=RF32(ea);} // 800573D8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 800573DC
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800573E0
  {uint32_t ea=c->r[1]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800573E4
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800573E8
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[11]);} // 800573EC
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[10]);} // 800573F0
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[9]);} // 800573F4
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[8]);} // 800573F8
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[7]);} // 800573FC
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[6]);} // 80057400
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[5]);} // 80057404
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[4]);} // 80057408
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[3]);} // 8005740C
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 80057410
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 80057414
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 80057418
  c->lr=0x80057420u; f_80163838(c); // 8005741C
  c->r[6]=R32(c->r[1]+0x00000094u); // 80057420
  c->r[3]=c->r[1]+0x00000118u; // 80057424
  c->r[5]=R32(c->r[1]+0x00000098u); // 80057428
  c->r[4]=c->r[3]|c->r[3]; // 8005742C
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 80057430
  W32(c->r[1]+0x00000040u,c->r[6]); // 80057434
  W32(c->r[1]+0x00000044u,c->r[5]); // 80057438
  W32(c->r[1]+0x00000048u,c->r[0]); // 8005743C
  c->lr=0x80057444u; f_80163864(c); // 80057440
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057444
  c->r[3]=c->r[1]+0x000001A8u; // 80057448
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 8005744C
  c->r[4]=c->r[1]+0x00000088u; // 80057450
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80057454
  c->f[1]=-c->f[0]; // 80057458
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005745C
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[3]);} // 80057460
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[2]);} // 80057464
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 80057468
  c->lr=0x80057470u; f_80163E20(c); // 8005746C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057470
  c->r[3]=c->r[1]+0x00000178u; // 80057474
  c->r[4]=c->r[1]+0x000000ACu; // 80057478
  c->f[1]=-c->f[0]; // 8005747C
  c->lr=0x80057484u; f_80163E20(c); // 80057480
  c->r[4]=c->r[1]+0x00000118u; // 80057484
  c->r[3]=c->r[1]+0x000001A8u; // 80057488
  c->r[5]=c->r[4]|c->r[4]; // 8005748C
  c->lr=0x80057494u; f_80163898(c); // 80057490
  c->r[4]=c->r[1]+0x00000118u; // 80057494
  c->r[3]=c->r[1]+0x00000178u; // 80057498
  c->r[5]=c->r[4]|c->r[4]; // 8005749C
  c->lr=0x800574A4u; f_80163898(c); // 800574A0
  c->r[4]=c->r[1]+0x00000118u; // 800574A4
  c->r[3]=c->r[1]+0x000000B8u; // 800574A8
  c->r[5]=c->r[4]|c->r[4]; // 800574AC
  c->lr=0x800574B4u; f_80163898(c); // 800574B0
  {uint32_t ea=c->r[1]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 800574B4
  c->r[3]=c->r[28]|c->r[28]; // 800574B8
  c->r[5]=c->r[29]|c->r[29]; // 800574BC
  c->r[4]=c->r[1]+0x000000A0u; // 800574C0
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 800574C4
  {uint32_t ea=c->r[1]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 800574C8
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[0]);} // 800574CC
  {uint32_t ea=c->r[1]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 800574D0
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 800574D4
  c->lr=0x800574DCu; f_80164808(c); // 800574D8
  {uint32_t ea=c->r[1]+0x00000248u; psq_load(c,31,ea,0,0);} // 800574DC
  {uint32_t ea=c->r[1]+0x00000240u; c->f[31]=RF64(ea);} // 800574E0
  {uint32_t ea=c->r[1]+0x00000238u; psq_load(c,30,ea,0,0);} // 800574E4
  {uint32_t ea=c->r[1]+0x00000230u; c->f[30]=RF64(ea);} // 800574E8
  {uint32_t ea=c->r[1]+0x00000228u; psq_load(c,29,ea,0,0);} // 800574EC
  {uint32_t ea=c->r[1]+0x00000220u; c->f[29]=RF64(ea);} // 800574F0
  c->r[31]=R32(c->r[1]+0x0000021Cu); // 800574F4
  c->r[30]=R32(c->r[1]+0x00000218u); // 800574F8
  c->r[29]=R32(c->r[1]+0x00000214u); // 800574FC
  c->r[0]=R32(c->r[1]+0x00000254u); // 80057500
  c->r[28]=R32(c->r[1]+0x00000210u); // 80057504
  c->lr=c->r[0]; // 80057508
  c->r[1]=c->r[1]+0x00000250u; // 8005750C
  return; // 80057510
}

// fn_80057514
void f_80057514(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80057514
  c->r[0]=c->lr; // 80057518
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005751C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80057520
  c->r[31]=0u+0x802F0000u; // 80057524
  c->r[31]=c->r[31]+0x00002E50u; // 80057528
  W32(c->r[1]+0x00000018u,c->r[30]); // 8005752C
  c->r[30]=c->r[3]|c->r[3]; // 80057530
  W32(c->r[1]+0x00000014u,c->r[29]); // 80057534
  W32(c->r[1]+0x00000010u,c->r[28]); // 80057538
  c->r[29]=R32(c->r[3]+0x00000168u); // 8005753C
  c->r[3]=0u+0x00000000u; // 80057540
  c->lr=0x80057548u; f_80059E48(c); // 80057544
  c->r[28]=c->r[3]|c->r[3]; // 80057548
  c->lr=0x80057550u; f_800076B4(c); // 8005754C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80057550
  cmps(c,0,(int32_t)c->r[0],6); // 80057554
  if (crb(c,2)) { goto L_80057574; } // 80057558
  c->r[3]=c->r[30]+0x0000025Cu; // 8005755C
  c->r[4]=0u+0x00000000u; // 80057560
  c->r[5]=0u+0x0000005Cu; // 80057564
  c->lr=0x8005756Cu; f_8000443C(c); // 80057568
  c->r[3]=0u+0x00000000u; // 8005756C
  goto L_80057844; // 80057570
L_80057574:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 80057574
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80057578
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)17280); // 8005757C
  c->r[3]=c->r[31]+c->r[3]; // 80057580
  c->r[3]=c->r[3]+c->r[0]; // 80057584
  c->r[0]=R32(c->r[3]+0x00004360u); // 80057588
  cmps(c,0,(int32_t)c->r[0],2); // 8005758C
  if (!crb(c,0)) { goto L_800575B8; } // 80057590
  cmps(c,0,(int32_t)c->r[0],0); // 80057594
  if (!crb(c,0)) { goto L_800575A0; } // 80057598
  goto L_800575B8; // 8005759C
L_800575A0:;
  c->r[4]=R32(c->r[30]+0x00000168u); // 800575A0
  c->r[3]=c->r[30]|c->r[30]; // 800575A4
  c->r[5]=c->r[30]+0x0000025Cu; // 800575A8
  c->lr=0x800575B0u; f_80056918(c); // 800575AC
  c->r[31]=c->r[3]|c->r[3]; // 800575B0
  goto L_800575CC; // 800575B4
L_800575B8:;
  c->r[4]=R32(c->r[30]+0x00000168u); // 800575B8
  c->r[3]=c->r[30]|c->r[30]; // 800575BC
  c->r[5]=c->r[30]+0x0000025Cu; // 800575C0
  c->lr=0x800575C8u; f_80056BF4(c); // 800575C4
  c->r[31]=c->r[3]|c->r[3]; // 800575C8
L_800575CC:;
  c->r[0]=R32(c->r[30]+0x00000454u); // 800575CC
  c->r[29]=R32(c->r[30]+0x00000194u); // 800575D0
  cmps(c,0,(int32_t)c->r[0],3); // 800575D4
  if (crb(c,2)) { goto L_80057754; } // 800575D8
  c->r[3]=c->r[28]|c->r[28]; // 800575DC
  c->lr=0x800575E4u; f_800584E4(c); // 800575E0
  cmps(c,0,(int32_t)c->r[3],0); // 800575E4
  if (!crb(c,2)) { goto L_80057730; } // 800575E8
  c->r[0]=R32(c->r[30]+0x00000278u); // 800575EC
  cmps(c,0,(int32_t)c->r[0],0); // 800575F0
  if (crb(c,2)) { goto L_80057690; } // 800575F4
  c->r[0]=R32(c->r[30]+0x000001B4u); // 800575F8
  c->r[3]=0u+0x00000000u; // 800575FC
  cmps(c,0,(int32_t)c->r[0],0); // 80057600
  if (crb(c,0)) { goto L_8005760C; } // 80057604
  c->r[3]=0u+0x00000001u; // 80057608
L_8005760C:;
  c->r[0]=R32(c->r[30]+0x000001B8u); // 8005760C
  cmps(c,0,(int32_t)c->r[0],0); // 80057610
  if (crb(c,0)) { goto L_8005761C; } // 80057614
  c->r[3]=c->r[3]+0x00000001u; // 80057618
L_8005761C:;
  c->r[0]=R32(c->r[30]+0x000001BCu); // 8005761C
  cmps(c,0,(int32_t)c->r[0],0); // 80057620
  if (crb(c,0)) { goto L_8005762C; } // 80057624
  c->r[3]=c->r[3]+0x00000001u; // 80057628
L_8005762C:;
  c->r[0]=R32(c->r[30]+0x000001C0u); // 8005762C
  cmps(c,0,(int32_t)c->r[0],0); // 80057630
  if (crb(c,0)) { goto L_8005763C; } // 80057634
  c->r[3]=c->r[3]+0x00000001u; // 80057638
L_8005763C:;
  c->r[0]=R32(c->r[30]+0x000001C4u); // 8005763C
  cmps(c,0,(int32_t)c->r[0],0); // 80057640
  if (crb(c,0)) { goto L_8005764C; } // 80057644
  c->r[3]=c->r[3]+0x00000001u; // 80057648
L_8005764C:;
  c->r[0]=R32(c->r[30]+0x000001C8u); // 8005764C
  cmps(c,0,(int32_t)c->r[0],0); // 80057650
  if (crb(c,0)) { goto L_8005765C; } // 80057654
  c->r[3]=c->r[3]+0x00000001u; // 80057658
L_8005765C:;
  c->r[0]=R32(c->r[30]+0x000001CCu); // 8005765C
  cmps(c,0,(int32_t)c->r[0],0); // 80057660
  if (crb(c,0)) { goto L_8005766C; } // 80057664
  c->r[3]=c->r[3]+0x00000001u; // 80057668
L_8005766C:;
  c->r[29]=c->r[29]+0x00000001u; // 8005766C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 80057670
  if (crb(c,0)) { goto L_8005767C; } // 80057674
  c->r[29]=c->r[29]-c->r[3]; // 80057678
L_8005767C:;
  c->r[3]=0u+0x00030000u; // 8005767C
  W32(c->r[30]+0x00000194u,c->r[29]); // 80057680
  c->r[3]=c->r[3]+0x00000012u; // 80057684
  c->lr=0x8005768Cu; f_800EFD50(c); // 80057688
  goto L_80057754; // 8005768C
L_80057690:;
  c->r[0]=R32(c->r[30]+0x0000027Cu); // 80057690
  cmps(c,0,(int32_t)c->r[0],0); // 80057694
  if (crb(c,2)) { goto L_80057754; } // 80057698
  c->r[0]=R32(c->r[30]+0x000001B4u); // 8005769C
  c->r[3]=0u+0x00000000u; // 800576A0
  cmps(c,0,(int32_t)c->r[0],0); // 800576A4
  if (crb(c,0)) { goto L_800576B0; } // 800576A8
  c->r[3]=0u+0x00000001u; // 800576AC
L_800576B0:;
  c->r[0]=R32(c->r[30]+0x000001B8u); // 800576B0
  cmps(c,0,(int32_t)c->r[0],0); // 800576B4
  if (crb(c,0)) { goto L_800576C0; } // 800576B8
  c->r[3]=c->r[3]+0x00000001u; // 800576BC
L_800576C0:;
  c->r[0]=R32(c->r[30]+0x000001BCu); // 800576C0
  cmps(c,0,(int32_t)c->r[0],0); // 800576C4
  if (crb(c,0)) { goto L_800576D0; } // 800576C8
  c->r[3]=c->r[3]+0x00000001u; // 800576CC
L_800576D0:;
  c->r[0]=R32(c->r[30]+0x000001C0u); // 800576D0
  cmps(c,0,(int32_t)c->r[0],0); // 800576D4
  if (crb(c,0)) { goto L_800576E0; } // 800576D8
  c->r[3]=c->r[3]+0x00000001u; // 800576DC
L_800576E0:;
  c->r[0]=R32(c->r[30]+0x000001C4u); // 800576E0
  cmps(c,0,(int32_t)c->r[0],0); // 800576E4
  if (crb(c,0)) { goto L_800576F0; } // 800576E8
  c->r[3]=c->r[3]+0x00000001u; // 800576EC
L_800576F0:;
  c->r[0]=R32(c->r[30]+0x000001C8u); // 800576F0
  cmps(c,0,(int32_t)c->r[0],0); // 800576F4
  if (crb(c,0)) { goto L_80057700; } // 800576F8
  c->r[3]=c->r[3]+0x00000001u; // 800576FC
L_80057700:;
  c->r[0]=R32(c->r[30]+0x000001CCu); // 80057700
  cmps(c,0,(int32_t)c->r[0],0); // 80057704
  if (crb(c,0)) { goto L_80057710; } // 80057708
  c->r[3]=c->r[3]+0x00000001u; // 8005770C
L_80057710:;
  c->r[29]=addc(c,c->r[29],0xFFFFFFFFu,0); cr0(c,c->r[29]); // 80057710
  if (!crb(c,0)) { goto L_8005771C; } // 80057714
  c->r[29]=c->r[29]+c->r[3]; // 80057718
L_8005771C:;
  c->r[3]=0u+0x00030000u; // 8005771C
  W32(c->r[30]+0x00000194u,c->r[29]); // 80057720
  c->r[3]=c->r[3]+0x00000012u; // 80057724
  c->lr=0x8005772Cu; f_800EFD50(c); // 80057728
  goto L_80057754; // 8005772C
L_80057730:;
  c->r[0]=R32(c->r[30]+0x00000278u); // 80057730
  cmps(c,0,(int32_t)c->r[0],0); // 80057734
  if (!crb(c,2)) { goto L_80057748; } // 80057738
  c->r[0]=R32(c->r[30]+0x0000027Cu); // 8005773C
  cmps(c,0,(int32_t)c->r[0],0); // 80057740
  if (crb(c,2)) { goto L_80057754; } // 80057744
L_80057748:;
  c->r[3]=0u+0x00030000u; // 80057748
  c->r[3]=c->r[3]+0x00000013u; // 8005774C
  c->lr=0x80057754u; f_800EFD50(c); // 80057750
L_80057754:;
  c->r[0]=R32(c->r[30]+0x00000274u); // 80057754
  cmps(c,0,(int32_t)c->r[0],0); // 80057758
  if (crb(c,2)) { goto L_80057840; } // 8005775C
  c->r[3]=c->r[30]|c->r[30]; // 80057760
  c->lr=0x80057768u; f_80056D68(c); // 80057764
  cmps(c,0,(int32_t)c->r[3],1); // 80057768
  if (!crb(c,2)) { goto L_80057828; } // 8005776C
  c->r[0]=R32(c->r[30]+0x00000194u); // 80057770
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80057774
  c->r[3]=c->r[30]+c->r[0]; // 80057778
  c->r[0]=R32(c->r[3]+0x000001B4u); // 8005777C
  cmps(c,0,(int32_t)c->r[0],3); // 80057780
  if (!crb(c,2)) { goto L_80057790; } // 80057784
  c->r[0]=0u+0x00000001u; // 80057788
  W32(c->r[30]+0x00000454u,c->r[0]); // 8005778C
L_80057790:;
  c->r[28]=0u+0x00000000u; // 80057790
L_80057794:;
  c->r[3]=0u+0x00000000u; // 80057794
  c->lr=0x8005779Cu; f_80059E48(c); // 80057798
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005779C
  c->r[4]=c->r[28]|c->r[28]; // 800577A0
  c->r[12]=R32(c->r[12]+0x00000034u); // 800577A4
  c->ctr=c->r[12]; // 800577A8
  if (true) { c->lr=0x800577B0u; dispatch(c,c->ctr); } // 800577AC
  cmps(c,0,(int32_t)c->r[3],0); // 800577B0
  if (crb(c,2)) { goto L_800577E8; } // 800577B4
  c->r[4]=R32(c->r[3]+0x0000026Cu); // 800577B8
  c->r[0]=R32(c->r[30]+0x00000168u); // 800577BC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800577C0
  if (!crb(c,2)) { goto L_800577E8; } // 800577C4
  c->r[0]=R32(c->r[30]+0x00000194u); // 800577C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800577CC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800577D0
  c->r[4]=c->r[30]+c->r[0]; // 800577D4
  c->r[12]=R32(c->r[12]+0x0000024Cu); // 800577D8
  c->r[4]=R32(c->r[4]+0x000001B4u); // 800577DC
  c->ctr=c->r[12]; // 800577E0
  if (true) { c->lr=0x800577E8u; dispatch(c,c->ctr); } // 800577E4
L_800577E8:;
  c->r[28]=c->r[28]+0x00000001u; // 800577E8
  cmps(c,0,(int32_t)c->r[28],24); // 800577EC
  if (crb(c,0)) { IRQCHK(c); goto L_80057794; } // 800577F0
  c->r[0]=R32(c->r[30]+0x00000194u); // 800577F4
  c->r[4]=0u+0x802B0000u; // 800577F8
  c->r[4]=c->r[4]+0xFFFFDD70u; // 800577FC
  c->r[3]=0u+0x00000003u; // 80057800
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80057804
  c->r[5]=c->r[30]+c->r[0]; // 80057808
  c->r[0]=R32(c->r[5]+0x000001B4u); // 8005780C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80057810
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80057814
  c->r[4]=c->r[30]+c->r[0]; // 80057818
  {uint32_t ea=c->r[4]+0x000001D0u; WF32(ea,c->f[0]);} // 8005781C
  c->lr=0x80057824u; f_80011338(c); // 80057820
  goto L_80057840; // 80057824
L_80057828:;
  c->r[0]=R32(c->r[30]+0x00000454u); // 80057828
  cmps(c,0,(int32_t)c->r[0],3); // 8005782C
  if (crb(c,2)) { goto L_80057840; } // 80057830
  c->r[3]=0u+0x00030000u; // 80057834
  c->r[3]=c->r[3]+0x00000013u; // 80057838
  c->lr=0x80057840u; f_800EFD50(c); // 8005783C
L_80057840:;
  c->r[3]=c->r[31]|c->r[31]; // 80057840
L_80057844:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80057844
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80057848
  c->r[30]=R32(c->r[1]+0x00000018u); // 8005784C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80057850
  c->r[28]=R32(c->r[1]+0x00000010u); // 80057854
  c->lr=c->r[0]; // 80057858
  c->r[1]=c->r[1]+0x00000020u; // 8005785C
  return; // 80057860
}

// fn_80057864
void f_80057864(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000025Cu; // 80057864
  return; // 80057868
}

// fn_8005786C
void f_8005786C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005786C
  c->r[0]=c->lr; // 80057870
  W32(c->r[1]+0x00000224u,c->r[0]); // 80057874
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[31]);} // 80057878
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,31,ea,0,0);} // 8005787C
  {uint32_t ea=c->r[1]+0x00000200u; WF64(ea,c->f[30]);} // 80057880
  {uint32_t ea=c->r[1]+0x00000208u; psq_store(c,30,ea,0,0);} // 80057884
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[29]);} // 80057888
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,29,ea,0,0);} // 8005788C
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[28]);} // 80057890
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,28,ea,0,0);} // 80057894
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[27]);} // 80057898
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,27,ea,0,0);} // 8005789C
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[26]);} // 800578A0
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,26,ea,0,0);} // 800578A4
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[25]);} // 800578A8
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,25,ea,0,0);} // 800578AC
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[24]);} // 800578B0
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,24,ea,0,0);} // 800578B4
  c->r[11]=c->r[1]+0x000001A0u; // 800578B8
  c->lr=0x800578C0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800578BC
  c->r[29]=c->r[3]|c->r[3]; // 800578C0
  c->r[3]=0u+0x00000000u; // 800578C4
  c->lr=0x800578CCu; f_80059E48(c); // 800578C8
  c->r[25]=c->r[3]|c->r[3]; // 800578CC
  c->lr=0x800578D4u; f_8007AB30(c); // 800578D0
  c->r[31]=c->r[3]|c->r[3]; // 800578D4
  c->r[28]=c->r[29]+0x0000025Cu; // 800578D8
  c->lr=0x800578E0u; f_80013AA4(c); // 800578DC
  c->f[24]=c->f[1]; // 800578E0
  c->lr=0x800578E8u; f_800076EC(c); // 800578E4
  c->f[1]=c->ps1[1]=S(c->f[24]*c->f[1]); // 800578E8
  {uint32_t ea=c->r[29]+0x00000450u; c->f[0]=c->ps1[0]=RF32(ea);} // 800578EC
  c->r[3]=c->r[25]|c->r[25]; // 800578F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800578F4
  {uint32_t ea=c->r[29]+0x00000450u; WF32(ea,c->f[0]);} // 800578F8
  c->r[12]=R32(c->r[25]+0x00000000u); // 800578FC
  c->r[12]=R32(c->r[12]+0x00000030u); // 80057900
  c->ctr=c->r[12]; // 80057904
  if (true) { c->lr=0x8005790Cu; dispatch(c,c->ctr); } // 80057908
  cmps(c,0,(int32_t)c->r[3],0); // 8005790C
  if (crb(c,2)) { goto L_80057934; } // 80057910
  c->r[3]=c->r[25]|c->r[25]; // 80057914
  c->lr=0x8005791Cu; f_800584E4(c); // 80057918
  cmps(c,0,(int32_t)c->r[3],0); // 8005791C
  if (!crb(c,2)) { goto L_80057934; } // 80057920
  {uint32_t ea=c->r[29]+0x00000450u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057924
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057928
  fcmp(c,0,c->f[1],c->f[0]); // 8005792C
  if (!crb(c,1)) { goto L_80057944; } // 80057930
L_80057934:;
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057934
  {uint32_t ea=c->r[29]+0x000002C0u; WF32(ea,c->f[0]);} // 80057938
  {uint32_t ea=c->r[29]+0x000002C4u; WF32(ea,c->f[0]);} // 8005793C
  goto L_800580C4; // 80057940
L_80057944:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 80057944
  c->r[3]=c->r[25]|c->r[25]; // 80057948
  c->r[12]=R32(c->r[12]+0x00000030u); // 8005794C
  c->ctr=c->r[12]; // 80057950
  if (true) { c->lr=0x80057958u; dispatch(c,c->ctr); } // 80057954
  cmps(c,0,(int32_t)c->r[3],1); // 80057958
  if (!crb(c,2)) { goto L_800579BC; } // 8005795C
  c->r[12]=R32(c->r[25]+0x00000000u); // 80057960
  c->r[3]=c->r[25]|c->r[25]; // 80057964
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80057968
  c->ctr=c->r[12]; // 8005796C
  if (true) { c->lr=0x80057974u; dispatch(c,c->ctr); } // 80057970
  cmps(c,0,(int32_t)c->r[3],0); // 80057974
  if (crb(c,2)) { goto L_800579BC; } // 80057978
  c->r[3]=R32(c->r[3]+0x00000000u); // 8005797C
  cmps(c,0,(int32_t)c->r[3],0); // 80057980
  if (crb(c,2)) { goto L_800579BC; } // 80057984
  c->r[12]=R32(c->r[3]+0x00000000u); // 80057988
  c->r[12]=R32(c->r[12]+0x00000244u); // 8005798C
  c->ctr=c->r[12]; // 80057990
  if (true) { c->lr=0x80057998u; dispatch(c,c->ctr); } // 80057994
  cmps(c,0,(int32_t)c->r[3],20); // 80057998
  if (crb(c,2)) { goto L_800579AC; } // 8005799C
  c->r[0]=c->r[3]+0xFFFFFFEFu; // 800579A0
  cmpu(c,0,c->r[0],0x00000001u); // 800579A4
  if (crb(c,1)) { goto L_800579BC; } // 800579A8
L_800579AC:;
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800579AC
  {uint32_t ea=c->r[29]+0x000002C0u; WF32(ea,c->f[0]);} // 800579B0
  {uint32_t ea=c->r[29]+0x000002C4u; WF32(ea,c->f[0]);} // 800579B4
  goto L_800580C4; // 800579B8
L_800579BC:;
  c->r[0]=0u+0x00000000u; // 800579BC
  {uint32_t ea=c->r[2]+0xFFFF8BE0u; c->f[29]=c->ps1[29]=RF32(ea);} // 800579C0
  W32(c->r[1]+0x00000158u,c->r[0]); // 800579C4
  c->r[27]=c->r[29]|c->r[29]; // 800579C8
  {uint32_t ea=c->r[2]+0xFFFF8C00u; c->f[28]=c->ps1[28]=RF32(ea);} // 800579CC
  c->r[26]=c->r[29]|c->r[29]; // 800579D0
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 800579D4
  c->r[25]=c->r[28]|c->r[28]; // 800579D8
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[27]=c->ps1[27]=RF32(ea);} // 800579DC
  c->r[30]=0u+0x00000000u; // 800579E0
  W32(c->r[1]+0x00000160u,c->r[0]); // 800579E4
  c->r[24]=0u+0x00000000u; // 800579E8
  {uint32_t ea=c->r[2]+0xFFFF8BD4u; c->f[26]=c->ps1[26]=RF32(ea);} // 800579EC
  {uint32_t ea=c->r[2]+0xFFFF8C44u; c->f[25]=c->ps1[25]=RF32(ea);} // 800579F0
  {uint32_t ea=c->r[2]+0xFFFF8C08u; c->f[24]=c->ps1[24]=RF32(ea);} // 800579F4
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[30]=c->ps1[30]=RF32(ea);} // 800579F8
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[31]=c->ps1[31]=RF32(ea);} // 800579FC
L_80057A00:;
  {uint32_t ea=c->r[28]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057A00
  fcmp(c,0,c->f[0],c->f[28]); // 80057A04
  if (!crb(c,1)) { goto L_80057A60; } // 80057A08
  {uint32_t ea=c->r[27]+0x00000448u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057A0C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[26]); // 80057A10
  {uint32_t ea=c->r[27]+0x00000448u; WF32(ea,c->f[0]);} // 80057A14
  {uint32_t ea=c->r[26]+0x000002C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057A18
  {uint32_t ea=c->r[26]+0x000002D4u; WF32(ea,c->f[0]);} // 80057A1C
  {uint32_t ea=c->r[26]+0x000002CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057A20
  {uint32_t ea=c->r[26]+0x000002D8u; WF32(ea,c->f[0]);} // 80057A24
  {uint32_t ea=c->r[26]+0x000002D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057A28
  {uint32_t ea=c->r[26]+0x000002DCu; WF32(ea,c->f[0]);} // 80057A2C
  {uint32_t ea=c->r[25]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057A30
  {uint32_t ea=c->r[26]+0x000002C8u; WF32(ea,c->f[0]);} // 80057A34
  {uint32_t ea=c->r[25]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057A38
  {uint32_t ea=c->r[26]+0x000002CCu; WF32(ea,c->f[0]);} // 80057A3C
  {uint32_t ea=c->r[25]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057A40
  {uint32_t ea=c->r[26]+0x000002D0u; WF32(ea,c->f[0]);} // 80057A44
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057A48
  {uint32_t ea=c->r[27]+0x000002C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057A4C
  fcmp(c,0,c->f[1],c->f[0]); // 80057A50
  if (!crb(c,1)) { goto L_80057A64; } // 80057A54
  {uint32_t ea=c->r[27]+0x000002C0u; WF32(ea,c->f[1]);} // 80057A58
  goto L_80057A64; // 80057A5C
L_80057A60:;
  {uint32_t ea=c->r[27]+0x00000448u; WF32(ea,c->f[30]);} // 80057A60
L_80057A64:;
  {uint32_t ea=c->r[27]+0x000002C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057A64
  fcmp(c,0,c->f[0],c->f[28]); // 80057A68
  if (!crb(c,1)) { goto L_80057C74; } // 80057A6C
  {uint32_t ea=c->r[28]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057A70
  fcmp(c,0,c->f[0],c->f[28]); // 80057A74
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80057A78
  if (crb(c,2)) { goto L_80057AC8; } // 80057A7C
  {uint32_t ea=c->r[26]+0x000002C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057A80
  {uint32_t ea=c->r[26]+0x000002D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057A84
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80057A88
  fcmp(c,0,c->f[0],c->f[30]); // 80057A8C
  if (crb(c,0)) { goto L_80057AC8; } // 80057A90
  {uint32_t ea=c->r[26]+0x000002CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80057A94
  {uint32_t ea=c->r[26]+0x000002D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057A98
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80057A9C
  fcmp(c,0,c->f[0],c->f[30]); // 80057AA0
  if (crb(c,0)) { goto L_80057AC8; } // 80057AA4
  {uint32_t ea=c->r[26]+0x000002D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057AA8
  {uint32_t ea=c->r[26]+0x000002DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057AAC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80057AB0
  fcmp(c,0,c->f[0],c->f[30]); // 80057AB4
  if (crb(c,0)) { goto L_80057AC8; } // 80057AB8
  {uint32_t ea=c->r[27]+0x00000448u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057ABC
  fcmp(c,0,c->f[0],c->f[31]); // 80057AC0
  if (!crb(c,1)) { goto L_80057C74; } // 80057AC4
L_80057AC8:;
  {uint32_t ea=c->r[26]+0x000002D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057AC8
  c->r[3]=c->r[1]+0x00000158u; // 80057ACC
  c->r[30]=0u+0x00000001u; // 80057AD0
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[0]);} // 80057AD4
  {uint32_t ea=c->r[26]+0x000002D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057AD8
  {uint32_t ea=c->r[1]+0x0000015Cu; WF32(ea,c->f[0]);} // 80057ADC
  {uint32_t ea=c->r[26]+0x000002DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057AE0
  {uint32_t ea=c->r[1]+0x00000160u; WF32(ea,c->f[0]);} // 80057AE4
  c->lr=0x80057AECu; f_801648A4(c); // 80057AE8
  fcmp(c,0,c->f[1],c->f[30]); // 80057AEC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80057AF0
  if (!crb(c,2)) { goto L_80057BA4; } // 80057AF4
  {uint32_t ea=c->r[26]+0x000002C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057AF8
  c->r[3]=c->r[1]+0x00000158u; // 80057AFC
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[0]);} // 80057B00
  {uint32_t ea=c->r[26]+0x000002CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057B04
  {uint32_t ea=c->r[1]+0x0000015Cu; WF32(ea,c->f[0]);} // 80057B08
  {uint32_t ea=c->r[26]+0x000002D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057B0C
  {uint32_t ea=c->r[1]+0x00000160u; WF32(ea,c->f[0]);} // 80057B10
  c->lr=0x80057B18u; f_801648A4(c); // 80057B14
  fcmp(c,0,c->f[1],c->f[30]); // 80057B18
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80057B1C
  if (!crb(c,2)) { goto L_80057BA4; } // 80057B20
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[30]);} // 80057B24
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[30]);} // 80057B28
  c->r[0]=R32(c->r[1]+0x00000098u); // 80057B2C
  c->r[3]=R32(c->r[1]+0x0000009Cu); // 80057B30
  W32(c->r[1]+0x00000134u,c->r[0]); // 80057B34
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[30]);} // 80057B38
  {uint32_t ea=c->r[1]+0x00000134u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057B3C
  c->r[0]=R32(c->r[1]+0x000000A0u); // 80057B40
  W32(c->r[1]+0x00000138u,c->r[3]); // 80057B44
  {uint32_t ea=c->r[27]+0x000002C0u; WF32(ea,c->f[30]);} // 80057B48
  {uint32_t ea=c->r[1]+0x00000138u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057B4C
  {uint32_t ea=c->r[26]+0x000002C8u; WF32(ea,c->f[1]);} // 80057B50
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 80057B54
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[30]);} // 80057B58
  {uint32_t ea=c->r[1]+0x0000013Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80057B5C
  c->r[0]=R32(c->r[1]+0x0000008Cu); // 80057B60
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[30]);} // 80057B64
  {uint32_t ea=c->r[26]+0x000002CCu; WF32(ea,c->f[0]);} // 80057B68
  c->r[3]=R32(c->r[1]+0x00000090u); // 80057B6C
  W32(c->r[1]+0x00000128u,c->r[0]); // 80057B70
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[30]);} // 80057B74
  {uint32_t ea=c->r[1]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057B78
  c->r[0]=R32(c->r[1]+0x00000094u); // 80057B7C
  {uint32_t ea=c->r[26]+0x000002D0u; WF32(ea,c->f[1]);} // 80057B80
  W32(c->r[1]+0x0000012Cu,c->r[3]); // 80057B84
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80057B88
  {uint32_t ea=c->r[26]+0x000002D4u; WF32(ea,c->f[0]);} // 80057B8C
  W32(c->r[1]+0x00000130u,c->r[0]); // 80057B90
  {uint32_t ea=c->r[1]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057B94
  {uint32_t ea=c->r[26]+0x000002D8u; WF32(ea,c->f[1]);} // 80057B98
  {uint32_t ea=c->r[26]+0x000002DCu; WF32(ea,c->f[0]);} // 80057B9C
  goto L_80057C74; // 80057BA0
L_80057BA4:;
  c->r[3]=c->r[1]+0x00000158u; // 80057BA4
  c->r[4]=c->r[3]|c->r[3]; // 80057BA8
  c->lr=0x80057BB0u; f_80164848(c); // 80057BAC
  c->r[0]=rotl(c->r[24],2)&0xFFFFFFFCu; // 80057BB0
  c->r[6]=c->r[29]+c->r[0]; // 80057BB4
  {uint32_t ea=c->r[6]+0x000002C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80057BB8
  fcmp(c,0,c->f[3],c->f[27]); // 80057BBC
  if (!crb(c,1)) { goto L_80057BC8; } // 80057BC0
  c->f[3]=c->f[27]; // 80057BC4
L_80057BC8:;
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[28]); // 80057BC8
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057BCC
  c->f[2]=c->ps1[2]=S(c->f[25]-c->f[26]); // 80057BD0
  c->r[3]=(uint32_t)((int32_t)c->r[24]*(int32_t)192); // 80057BD4
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 80057BD8
  c->f[1]=c->ps1[1]=S(c->f[27]-c->f[28]); // 80057BDC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80057BE0
  c->r[0]=R32(c->r[1]+0x00000080u); // 80057BE4
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 80057BE8
  c->r[5]=c->r[29]+c->r[3]; // 80057BEC
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80057BF0
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 80057BF4
  c->r[4]=R32(c->r[1]+0x00000074u); // 80057BF8
  c->r[3]=R32(c->r[1]+0x00000084u); // 80057BFC
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 80057C00
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 80057C04
  c->f[1]=c->ps1[1]=S(c->f[26]+c->f[1]); // 80057C08
  c->r[0]=R32(c->r[1]+0x00000088u); // 80057C0C
  W32(c->r[1]+0x00000120u,c->r[3]); // 80057C10
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[24]); // 80057C14
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 80057C18
  {uint32_t ea=c->r[1]+0x0000011Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80057C1C
  c->r[3]=R32(c->r[1]+0x00000078u); // 80057C20
  {uint32_t ea=c->r[1]+0x00000164u; WF32(ea,c->f[2]);} // 80057C24
  {uint32_t ea=c->r[6]+0x000002C0u; WF32(ea,c->f[0]);} // 80057C28
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 80057C2C
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057C30
  W32(c->r[1]+0x00000124u,c->r[0]); // 80057C34
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 80057C38
  {uint32_t ea=c->r[5]+0x000002C8u; WF32(ea,c->f[1]);} // 80057C3C
  {uint32_t ea=c->r[1]+0x00000124u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057C40
  {uint32_t ea=c->r[5]+0x000002CCu; WF32(ea,c->f[0]);} // 80057C44
  W32(c->r[1]+0x00000110u,c->r[4]); // 80057C48
  W32(c->r[1]+0x00000114u,c->r[3]); // 80057C4C
  {uint32_t ea=c->r[1]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057C50
  {uint32_t ea=c->r[5]+0x000002D0u; WF32(ea,c->f[1]);} // 80057C54
  {uint32_t ea=c->r[1]+0x00000114u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057C58
  {uint32_t ea=c->r[5]+0x000002D4u; WF32(ea,c->f[0]);} // 80057C5C
  W32(c->r[1]+0x00000118u,c->r[0]); // 80057C60
  {uint32_t ea=c->r[1]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057C64
  {uint32_t ea=c->r[5]+0x000002D8u; WF32(ea,c->f[1]);} // 80057C68
  {uint32_t ea=c->r[5]+0x000002DCu; WF32(ea,c->f[0]);} // 80057C6C
  goto L_80057C90; // 80057C70
L_80057C74:;
  c->r[24]=c->r[24]+0x00000001u; // 80057C74
  c->r[27]=c->r[27]+0x00000004u; // 80057C78
  cmps(c,0,(int32_t)c->r[24],2); // 80057C7C
  c->r[26]=c->r[26]+0x000000C0u; // 80057C80
  c->r[25]=c->r[25]+0x0000000Cu; // 80057C84
  c->r[28]=c->r[28]+0x00000008u; // 80057C88
  if (crb(c,0)) { IRQCHK(c); goto L_80057A00; } // 80057C8C
L_80057C90:;
  cmps(c,0,(int32_t)c->r[30],1); // 80057C90
  if (!crb(c,2)) { goto L_800580C4; } // 80057C94
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057C98
  c->r[5]=0u+0x00000000u; // 80057C9C
  {uint32_t ea=c->r[1]+0x00000158u; c->f[3]=c->ps1[3]=RF32(ea);} // 80057CA0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80057CA4
  fcmp(c,0,c->f[3],c->f[0]); // 80057CA8
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80057CAC
  c->r[4]=R32(c->r[1]+0x00000068u); // 80057CB0
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80057CB4
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 80057CB8
  c->r[0]=R32(c->r[1]+0x00000070u); // 80057CBC
  W32(c->r[1]+0x00000104u,c->r[4]); // 80057CC0
  W32(c->r[1]+0x00000108u,c->r[3]); // 80057CC4
  {uint32_t ea=c->r[1]+0x00000104u; c->f[2]=c->ps1[2]=RF32(ea);} // 80057CC8
  W32(c->r[1]+0x0000010Cu,c->r[0]); // 80057CCC
  {uint32_t ea=c->r[1]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057CD0
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057CD4
  {uint32_t ea=c->r[1]+0x00000168u; WF32(ea,c->f[2]);} // 80057CD8
  {uint32_t ea=c->r[1]+0x0000016Cu; WF32(ea,c->f[1]);} // 80057CDC
  {uint32_t ea=c->r[1]+0x00000170u; WF32(ea,c->f[0]);} // 80057CE0
  if (!crb(c,1)) { goto L_80057CEC; } // 80057CE4
  goto L_80057CF0; // 80057CE8
L_80057CEC:;
  c->f[3]=-c->f[3]; // 80057CEC
L_80057CF0:;
  {uint32_t ea=c->r[1]+0x0000015Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80057CF0
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057CF4
  {uint32_t ea=c->r[1]+0x00000140u; WF32(ea,c->f[3]);} // 80057CF8
  fcmp(c,0,c->f[1],c->f[0]); // 80057CFC
  if (!crb(c,1)) { goto L_80057D08; } // 80057D00
  goto L_80057D0C; // 80057D04
L_80057D08:;
  c->f[1]=-c->f[1]; // 80057D08
L_80057D0C:;
  {uint32_t ea=c->r[1]+0x00000160u; c->f[2]=c->ps1[2]=RF32(ea);} // 80057D0C
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057D10
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[1]);} // 80057D14
  fcmp(c,0,c->f[2],c->f[0]); // 80057D18
  if (!crb(c,1)) { goto L_80057D24; } // 80057D1C
  goto L_80057D28; // 80057D20
L_80057D24:;
  c->f[2]=-c->f[2]; // 80057D24
L_80057D28:;
  {uint32_t ea=c->r[1]+0x00000140u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057D28
  {uint32_t ea=c->r[2]+0xFFFF8C4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057D2C
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[2]);} // 80057D30
  fcmp(c,0,c->f[1],c->f[0]); // 80057D34
  if (!crb(c,1)) { goto L_80057E1C; } // 80057D38
  c->f[1]=c->ps1[1]=S(c->f[2]); // 80057D3C
  {uint32_t ea=c->r[2]+0xFFFF8BE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057D40
  fcmp(c,0,c->f[1],c->f[0]); // 80057D44
  if (!crb(c,1)) { goto L_80057E1C; } // 80057D48
  {uint32_t ea=c->r[1]+0x00000158u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057D4C
  fcmp(c,0,c->f[1],c->f[0]); // 80057D50
  if (!crb(c,1)) { goto L_80057DB4; } // 80057D54
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057D58
  c->r[3]=c->r[1]+0x00000168u; // 80057D5C
  {uint32_t ea=c->r[2]+0xFFFF8C0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80057D60
  c->r[5]=c->r[3]|c->r[3]; // 80057D64
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80057D68
  c->r[4]=c->r[1]+0x0000014Cu; // 80057D6C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 80057D70
  c->r[6]=R32(c->r[1]+0x00000060u); // 80057D74
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80057D78
  c->r[7]=R32(c->r[1]+0x0000005Cu); // 80057D7C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80057D80
  W32(c->r[1]+0x000000F8u,c->r[7]); // 80057D84
  W32(c->r[1]+0x000000FCu,c->r[6]); // 80057D88
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80057D8C
  W32(c->r[1]+0x00000100u,c->r[0]); // 80057D90
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80057D94
  {uint32_t ea=c->r[1]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057D98
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[2]);} // 80057D9C
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[1]);} // 80057DA0
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 80057DA4
  c->lr=0x80057DACu; f_801647E4(c); // 80057DA8
  c->r[5]=0u+0x00000001u; // 80057DAC
  goto L_800580A0; // 80057DB0
L_80057DB4:;
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057DB4
  fcmp(c,0,c->f[1],c->f[0]); // 80057DB8
  if (!crb(c,0)) { goto L_800580A0; } // 80057DBC
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057DC0
  c->r[3]=c->r[1]+0x00000168u; // 80057DC4
  {uint32_t ea=c->r[2]+0xFFFF8C50u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057DC8
  c->r[5]=c->r[3]|c->r[3]; // 80057DCC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 80057DD0
  c->r[4]=c->r[1]+0x0000014Cu; // 80057DD4
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 80057DD8
  c->r[6]=R32(c->r[1]+0x00000054u); // 80057DDC
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80057DE0
  c->r[7]=R32(c->r[1]+0x00000050u); // 80057DE4
  c->r[0]=R32(c->r[1]+0x00000058u); // 80057DE8
  W32(c->r[1]+0x000000ECu,c->r[7]); // 80057DEC
  W32(c->r[1]+0x000000F0u,c->r[6]); // 80057DF0
  {uint32_t ea=c->r[1]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 80057DF4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80057DF8
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057DFC
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057E00
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[2]);} // 80057E04
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[1]);} // 80057E08
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 80057E0C
  c->lr=0x80057E14u; f_801647E4(c); // 80057E10
  c->r[5]=0u+0x00000001u; // 80057E14
  goto L_800580A0; // 80057E18
L_80057E1C:;
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057E1C
  {uint32_t ea=c->r[2]+0xFFFF8C0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80057E20
  fcmp(c,0,c->f[0],c->f[1]); // 80057E24
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80057E28
  if (!crb(c,2)) { goto L_80057F08; } // 80057E2C
  {uint32_t ea=c->r[1]+0x00000148u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057E30
  fcmp(c,0,c->f[0],c->f[1]); // 80057E34
  if (!crb(c,1)) { goto L_80057F08; } // 80057E38
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057E3C
  fcmp(c,0,c->f[0],c->f[1]); // 80057E40
  if (!crb(c,1)) { goto L_80057EA4; } // 80057E44
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80057E48
  c->r[3]=c->r[1]+0x00000168u; // 80057E4C
  {uint32_t ea=c->r[2]+0xFFFF8C50u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057E50
  c->r[5]=c->r[3]|c->r[3]; // 80057E54
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 80057E58
  c->r[4]=c->r[1]+0x0000014Cu; // 80057E5C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 80057E60
  c->r[7]=R32(c->r[1]+0x00000044u); // 80057E64
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80057E68
  c->r[6]=R32(c->r[1]+0x00000048u); // 80057E6C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 80057E70
  W32(c->r[1]+0x000000E0u,c->r[7]); // 80057E74
  W32(c->r[1]+0x000000E4u,c->r[6]); // 80057E78
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80057E7C
  W32(c->r[1]+0x000000E8u,c->r[0]); // 80057E80
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057E84
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057E88
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[2]);} // 80057E8C
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[1]);} // 80057E90
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 80057E94
  c->lr=0x80057E9Cu; f_801647E4(c); // 80057E98
  c->r[5]=0u+0x00000001u; // 80057E9C
  goto L_800580A0; // 80057EA0
L_80057EA4:;
  {uint32_t ea=c->r[2]+0xFFFF8C50u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057EA4
  fcmp(c,0,c->f[0],c->f[1]); // 80057EA8
  if (!crb(c,0)) { goto L_800580A0; } // 80057EAC
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057EB0
  c->r[3]=c->r[1]+0x00000168u; // 80057EB4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 80057EB8
  c->r[5]=c->r[3]|c->r[3]; // 80057EBC
  c->r[4]=c->r[1]+0x0000014Cu; // 80057EC0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80057EC4
  c->r[0]=R32(c->r[1]+0x00000040u); // 80057EC8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80057ECC
  c->r[7]=R32(c->r[1]+0x00000038u); // 80057ED0
  c->r[6]=R32(c->r[1]+0x0000003Cu); // 80057ED4
  W32(c->r[1]+0x000000D4u,c->r[7]); // 80057ED8
  W32(c->r[1]+0x000000D8u,c->r[6]); // 80057EDC
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80057EE0
  W32(c->r[1]+0x000000DCu,c->r[0]); // 80057EE4
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057EE8
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057EEC
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[2]);} // 80057EF0
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[1]);} // 80057EF4
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 80057EF8
  c->lr=0x80057F00u; f_801647E4(c); // 80057EFC
  c->r[5]=0u+0x00000001u; // 80057F00
  goto L_800580A0; // 80057F04
L_80057F08:;
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057F08
  fcmp(c,0,c->f[1],c->f[29]); // 80057F0C
  if (!crb(c,1)) { goto L_80057F70; } // 80057F10
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80057F14
  c->r[3]=c->r[1]+0x00000168u; // 80057F18
  {uint32_t ea=c->r[2]+0xFFFF8C50u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057F1C
  c->r[5]=c->r[3]|c->r[3]; // 80057F20
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80057F24
  c->r[4]=c->r[1]+0x0000014Cu; // 80057F28
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80057F2C
  c->r[7]=R32(c->r[1]+0x0000002Cu); // 80057F30
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80057F34
  c->r[6]=R32(c->r[1]+0x00000030u); // 80057F38
  c->r[0]=R32(c->r[1]+0x00000034u); // 80057F3C
  W32(c->r[1]+0x000000C8u,c->r[7]); // 80057F40
  W32(c->r[1]+0x000000CCu,c->r[6]); // 80057F44
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80057F48
  W32(c->r[1]+0x000000D0u,c->r[0]); // 80057F4C
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80057F50
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057F54
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[2]);} // 80057F58
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[1]);} // 80057F5C
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 80057F60
  c->lr=0x80057F68u; f_801647E4(c); // 80057F64
  c->r[5]=0u+0x00000001u; // 80057F68
  goto L_80057FD4; // 80057F6C
L_80057F70:;
  c->f[0]=-c->f[29]; // 80057F70
  fcmp(c,0,c->f[1],c->f[0]); // 80057F74
  if (!crb(c,0)) { goto L_80057FD4; } // 80057F78
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80057F7C
  c->r[3]=c->r[1]+0x00000168u; // 80057F80
  {uint32_t ea=c->r[2]+0xFFFF8C50u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057F84
  c->r[5]=c->r[3]|c->r[3]; // 80057F88
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80057F8C
  c->r[4]=c->r[1]+0x0000014Cu; // 80057F90
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80057F94
  c->r[7]=R32(c->r[1]+0x00000020u); // 80057F98
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80057F9C
  c->r[6]=R32(c->r[1]+0x00000024u); // 80057FA0
  c->r[0]=R32(c->r[1]+0x00000028u); // 80057FA4
  W32(c->r[1]+0x000000BCu,c->r[7]); // 80057FA8
  W32(c->r[1]+0x000000C0u,c->r[6]); // 80057FAC
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80057FB0
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80057FB4
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057FB8
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80057FBC
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[2]);} // 80057FC0
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[1]);} // 80057FC4
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 80057FC8
  c->lr=0x80057FD0u; f_801647E4(c); // 80057FCC
  c->r[5]=0u+0x00000001u; // 80057FD0
L_80057FD4:;
  {uint32_t ea=c->r[1]+0x00000158u; c->f[1]=c->ps1[1]=RF32(ea);} // 80057FD4
  fcmp(c,0,c->f[1],c->f[29]); // 80057FD8
  if (!crb(c,1)) { goto L_8005803C; } // 80057FDC
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80057FE0
  c->r[3]=c->r[1]+0x00000168u; // 80057FE4
  {uint32_t ea=c->r[2]+0xFFFF8C0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80057FE8
  c->r[5]=c->r[3]|c->r[3]; // 80057FEC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80057FF0
  c->r[4]=c->r[1]+0x0000014Cu; // 80057FF4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80057FF8
  c->r[6]=R32(c->r[1]+0x00000018u); // 80057FFC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80058000
  c->r[7]=R32(c->r[1]+0x00000014u); // 80058004
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80058008
  W32(c->r[1]+0x000000B0u,c->r[7]); // 8005800C
  W32(c->r[1]+0x000000B4u,c->r[6]); // 80058010
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80058014
  W32(c->r[1]+0x000000B8u,c->r[0]); // 80058018
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005801C
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80058020
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[2]);} // 80058024
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[1]);} // 80058028
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 8005802C
  c->lr=0x80058034u; f_801647E4(c); // 80058030
  c->r[5]=0u+0x00000001u; // 80058034
  goto L_800580A0; // 80058038
L_8005803C:;
  c->f[0]=-c->f[29]; // 8005803C
  fcmp(c,0,c->f[1],c->f[0]); // 80058040
  if (!crb(c,0)) { goto L_800580A0; } // 80058044
  {uint32_t ea=c->r[2]+0xFFFF8BCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80058048
  c->r[3]=c->r[1]+0x00000168u; // 8005804C
  {uint32_t ea=c->r[2]+0xFFFF8C50u; c->f[1]=c->ps1[1]=RF32(ea);} // 80058050
  c->r[5]=c->r[3]|c->r[3]; // 80058054
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80058058
  c->r[4]=c->r[1]+0x0000014Cu; // 8005805C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80058060
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 80058064
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80058068
  c->r[7]=R32(c->r[1]+0x00000008u); // 8005806C
  c->r[0]=R32(c->r[1]+0x00000010u); // 80058070
  W32(c->r[1]+0x000000A4u,c->r[7]); // 80058074
  W32(c->r[1]+0x000000A8u,c->r[6]); // 80058078
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005807C
  W32(c->r[1]+0x000000ACu,c->r[0]); // 80058080
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80058084
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80058088
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[2]);} // 8005808C
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[1]);} // 80058090
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 80058094
  c->lr=0x8005809Cu; f_801647E4(c); // 80058098
  c->r[5]=0u+0x00000001u; // 8005809C
L_800580A0:;
  cmps(c,0,(int32_t)c->r[5],1); // 800580A0
  if (!crb(c,2)) { goto L_800580C4; } // 800580A4
  {uint32_t ea=c->r[2]+0xFFFF8C54u; c->f[0]=c->ps1[0]=RF32(ea);} // 800580A8
  c->r[0]=0u+0x00000001u; // 800580AC
  c->r[3]=c->r[31]|c->r[31]; // 800580B0
  c->r[4]=c->r[1]+0x00000164u; // 800580B4
  {uint32_t ea=c->r[29]+0x00000450u; WF32(ea,c->f[0]);} // 800580B8
  W32(c->r[1]+0x00000174u,c->r[0]); // 800580BC
  c->lr=0x800580C4u; f_8007A2BC(c); // 800580C0
L_800580C4:;
  {uint32_t ea=c->r[1]+0x00000218u; psq_load(c,31,ea,0,0);} // 800580C4
  {uint32_t ea=c->r[1]+0x00000210u; c->f[31]=RF64(ea);} // 800580C8
  {uint32_t ea=c->r[1]+0x00000208u; psq_load(c,30,ea,0,0);} // 800580CC
  {uint32_t ea=c->r[1]+0x00000200u; c->f[30]=RF64(ea);} // 800580D0
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,29,ea,0,0);} // 800580D4
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[29]=RF64(ea);} // 800580D8
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,28,ea,0,0);} // 800580DC
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[28]=RF64(ea);} // 800580E0
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,27,ea,0,0);} // 800580E4
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[27]=RF64(ea);} // 800580E8
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,26,ea,0,0);} // 800580EC
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[26]=RF64(ea);} // 800580F0
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,25,ea,0,0);} // 800580F4
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[25]=RF64(ea);} // 800580F8
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,24,ea,0,0);} // 800580FC
  c->r[11]=c->r[1]+0x000001A0u; // 80058100
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[24]=RF64(ea);} // 80058104
  c->lr=0x8005810Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80058108
  c->r[0]=R32(c->r[1]+0x00000224u); // 8005810C
  c->lr=c->r[0]; // 80058110
  c->r[1]=c->r[1]+0x00000220u; // 80058114
  return; // 80058118
}

// fn_8005811C
void f_8005811C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000168u); // 8005811C
  return; // 80058120
}

// fn_80058124
void f_80058124(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000001F4u; // 80058124
  return; // 80058128
}

// fn_8005812C
void f_8005812C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000001F0u); // 8005812C
  return; // 80058130
}

// fn_80058134
void f_80058134(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000218u); // 80058134
  return; // 80058138
}

// fn_8005813C
void f_8005813C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000228u; // 8005813C
  return; // 80058140
}

// fn_80058144
void f_80058144(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80058144
  return; // 80058148
}

// fn_8005814C
void f_8005814C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000168u); // 8005814C
  return; // 80058150
}

// fn_80058154
void f_80058154(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80058154
  c->r[0]=c->lr; // 80058158
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005815C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80058160
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80058164
  c->lr=0x8005816Cu; f_80013AA4(c); // 80058168
  c->f[31]=c->f[1]; // 8005816C
  c->lr=0x80058174u; f_800076EC(c); // 80058170
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80058174
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80058178
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8005817C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80058180
  c->lr=c->r[0]; // 80058184
  c->r[1]=c->r[1]+0x00000020u; // 80058188
  return; // 8005818C
}

// fn_80058190
void f_80058190(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80058190
  return; // 80058194
}

// fn_80058198
void f_80058198(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000030u); // 80058198
  return; // 8005819C
}

// fn_800581A0
void f_800581A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800581A0
  c->r[0]=c->lr; // 800581A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800581A8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800581AC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800581B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800581B4
  c->r[31]=c->r[3]|c->r[3]; // 800581B8
  c->lr=0x800581C0u; f_80013AA4(c); // 800581BC
  c->f[31]=c->f[1]; // 800581C0
  c->lr=0x800581C8u; f_800076EC(c); // 800581C4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 800581C8
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800581CC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800581D0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800581D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800581D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800581DC
  c->lr=c->r[0]; // 800581E0
  c->r[1]=c->r[1]+0x00000020u; // 800581E4
  return; // 800581E8
}

// fn_800581EC
void f_800581EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800581EC
  c->r[0]=c->lr; // 800581F0
  W32(c->r[1]+0x00000094u,c->r[0]); // 800581F4
  c->r[11]=c->r[1]+0x00000090u; // 800581F8
  c->lr=0x80058200u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800581FC
  c->r[0]=0u+0x0000000Cu; // 80058200
  c->r[26]=c->r[3]|c->r[3]; // 80058204
  c->r[4]=c->r[1]+0x0000000Cu; // 80058208
  c->r[3]=0u+0x00000000u; // 8005820C
  c->ctr=c->r[0]; // 80058210
L_80058214:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 80058214
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[3]); c->r[4]=ea;} // 80058218
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80058214; } // 8005821C
  c->r[12]=R32(c->r[26]+0x00000000u); // 80058220
  c->r[3]=c->r[26]|c->r[26]; // 80058224
  c->r[12]=R32(c->r[12]+0x00000020u); // 80058228
  c->ctr=c->r[12]; // 8005822C
  if (true) { c->lr=0x80058234u; dispatch(c,c->ctr); } // 80058230
  c->r[29]=c->r[26]|c->r[26]; // 80058234
  c->r[28]=c->r[26]|c->r[26]; // 80058238
  c->r[30]=c->r[26]+0x00000040u; // 8005823C
  c->r[31]=0u+0x00000000u; // 80058240
  goto L_800582A4; // 80058244
L_80058248:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 80058248
  c->r[3]=c->r[26]|c->r[26]; // 8005824C
  c->r[4]=c->r[1]+0x00000008u; // 80058250
  c->r[5]=R32(c->r[29]+0x0000007Cu); // 80058254
  c->r[12]=R32(c->r[12]+0x00000058u); // 80058258
  c->ctr=c->r[12]; // 8005825C
  if (true) { c->lr=0x80058264u; dispatch(c,c->ctr); } // 80058260
  c->r[0]=R32(c->r[1]+0x00000008u); // 80058264
  cmps(c,0,(int32_t)c->r[0],0); // 80058268
  if (crb(c,2)) { goto L_8005828C; } // 8005826C
  W32(c->r[29]+0x00000070u,c->r[3]); // 80058270
  c->r[4]=c->r[30]|c->r[30]; // 80058274
  c->r[3]=R32(c->r[1]+0x00000008u); // 80058278
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005827C
  c->r[12]=R32(c->r[12]+0x000000ECu); // 80058280
  c->ctr=c->r[12]; // 80058284
  if (true) { c->lr=0x8005828Cu; dispatch(c,c->ctr); } // 80058288
L_8005828C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 8005828C
  c->r[29]=c->r[29]+0x00000048u; // 80058290
  c->r[30]=c->r[30]+0x00000048u; // 80058294
  c->r[31]=c->r[31]+0x00000001u; // 80058298
  W32(c->r[28]+0x00000700u,c->r[0]); // 8005829C
  c->r[28]=c->r[28]+0x00000004u; // 800582A0
L_800582A4:;
  c->r[0]=R32(c->r[26]+0x00000760u); // 800582A4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800582A8
  if (crb(c,0)) { IRQCHK(c); goto L_80058248; } // 800582AC
  c->r[0]=0u+0x00000000u; // 800582B0
  c->r[3]=c->r[26]|c->r[26]; // 800582B4
  W32(c->r[26]+0x00000760u,c->r[0]); // 800582B8
  c->r[12]=R32(c->r[26]+0x00000000u); // 800582BC
  c->r[12]=R32(c->r[12]+0x00000030u); // 800582C0
  c->ctr=c->r[12]; // 800582C4
  if (true) { c->lr=0x800582CCu; dispatch(c,c->ctr); } // 800582C8
  c->r[0]=0u+0x00000003u; // 800582CC
  c->r[31]=c->r[3]|c->r[3]; // 800582D0
  c->r[3]=c->r[1]+0x00000010u; // 800582D4
  c->r[5]=R32(c->r[26]+0x00000018u); // 800582D8
  c->r[4]=0u+0x00000000u; // 800582DC
  c->ctr=c->r[0]; // 800582E0
L_800582E4:;
  cmps(c,0,(int32_t)c->r[5],0); // 800582E4
  W32(c->r[3]+0x00000000u,c->r[5]); // 800582E8
  if (crb(c,2)) { goto L_80058370; } // 800582EC
  c->r[5]=R32(c->r[5]+0x00000004u); // 800582F0
  cmps(c,0,(int32_t)c->r[5],0); // 800582F4
  W32(c->r[3]+0x00000004u,c->r[5]); // 800582F8
  if (crb(c,2)) { goto L_80058370; } // 800582FC
  c->r[5]=R32(c->r[5]+0x00000004u); // 80058300
  cmps(c,0,(int32_t)c->r[5],0); // 80058304
  W32(c->r[3]+0x00000008u,c->r[5]); // 80058308
  if (crb(c,2)) { goto L_80058370; } // 8005830C
  c->r[5]=R32(c->r[5]+0x00000004u); // 80058310
  cmps(c,0,(int32_t)c->r[5],0); // 80058314
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 80058318
  if (crb(c,2)) { goto L_80058370; } // 8005831C
  c->r[5]=R32(c->r[5]+0x00000004u); // 80058320
  cmps(c,0,(int32_t)c->r[5],0); // 80058324
  W32(c->r[3]+0x00000010u,c->r[5]); // 80058328
  if (crb(c,2)) { goto L_80058370; } // 8005832C
  c->r[5]=R32(c->r[5]+0x00000004u); // 80058330
  cmps(c,0,(int32_t)c->r[5],0); // 80058334
  W32(c->r[3]+0x00000014u,c->r[5]); // 80058338
  if (crb(c,2)) { goto L_80058370; } // 8005833C
  c->r[5]=R32(c->r[5]+0x00000004u); // 80058340
  cmps(c,0,(int32_t)c->r[5],0); // 80058344
  W32(c->r[3]+0x00000018u,c->r[5]); // 80058348
  if (crb(c,2)) { goto L_80058370; } // 8005834C
  c->r[5]=R32(c->r[5]+0x00000004u); // 80058350
  cmps(c,0,(int32_t)c->r[5],0); // 80058354
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 80058358
  if (crb(c,2)) { goto L_80058370; } // 8005835C
  c->r[5]=R32(c->r[5]+0x00000004u); // 80058360
  c->r[3]=c->r[3]+0x00000020u; // 80058364
  c->r[4]=c->r[4]+0x00000007u; // 80058368
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800582E4; } // 8005836C
L_80058370:;
  c->r[30]=c->r[1]+0x00000010u; // 80058370
  c->r[28]=0u+0x00000000u; // 80058374
  goto L_80058468; // 80058378
L_8005837C:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8005837C
  c->r[26]=R32(c->r[3]+0x00000000u); // 80058380
  cmps(c,0,(int32_t)c->r[26],0); // 80058384
  if (crb(c,2)) { goto L_80058460; } // 80058388
  c->r[12]=R32(c->r[26]+0x00000000u); // 8005838C
  c->r[3]=c->r[26]|c->r[26]; // 80058390
  c->r[12]=R32(c->r[12]+0x00000170u); // 80058394
  c->ctr=c->r[12]; // 80058398
  if (true) { c->lr=0x800583A0u; dispatch(c,c->ctr); } // 8005839C
  c->r[27]=c->r[28]+0x00000001u; // 800583A0
  c->r[29]=c->r[1]+0x00000010u; // 800583A4
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800583A8
  c->r[29]=c->r[29]+c->r[0]; // 800583AC
  goto L_800583CC; // 800583B0
L_800583B4:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 800583B4
  c->r[3]=c->r[26]|c->r[26]; // 800583B8
  c->r[4]=R32(c->r[4]+0x00000000u); // 800583BC
  c->lr=0x800583C4u; f_8005E8F0(c); // 800583C0
  c->r[29]=c->r[29]+0x00000004u; // 800583C4
  c->r[27]=c->r[27]+0x00000001u; // 800583C8
L_800583CC:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[31]); // 800583CC
  if (crb(c,0)) { IRQCHK(c); goto L_800583B4; } // 800583D0
  c->r[12]=R32(c->r[26]+0x00000000u); // 800583D4
  c->r[3]=c->r[26]|c->r[26]; // 800583D8
  c->r[12]=R32(c->r[12]+0x00000230u); // 800583DC
  c->ctr=c->r[12]; // 800583E0
  if (true) { c->lr=0x800583E8u; dispatch(c,c->ctr); } // 800583E4
  c->r[12]=R32(c->r[26]+0x00000000u); // 800583E8
  c->r[3]=c->r[26]|c->r[26]; // 800583EC
  c->r[12]=R32(c->r[12]+0x00000208u); // 800583F0
  c->ctr=c->r[12]; // 800583F4
  if (true) { c->lr=0x800583FCu; dispatch(c,c->ctr); } // 800583F8
  c->r[12]=R32(c->r[26]+0x00000000u); // 800583FC
  c->r[3]=c->r[26]|c->r[26]; // 80058400
  c->r[12]=R32(c->r[12]+0x00000254u); // 80058404
  c->ctr=c->r[12]; // 80058408
  if (true) { c->lr=0x80058410u; dispatch(c,c->ctr); } // 8005840C
  c->r[12]=R32(c->r[26]+0x00000000u); // 80058410
  c->r[3]=c->r[26]|c->r[26]; // 80058414
  c->r[12]=R32(c->r[12]+0x0000020Cu); // 80058418
  c->ctr=c->r[12]; // 8005841C
  if (true) { c->lr=0x80058424u; dispatch(c,c->ctr); } // 80058420
  c->r[12]=R32(c->r[26]+0x00000000u); // 80058424
  c->r[3]=c->r[26]|c->r[26]; // 80058428
  c->r[12]=R32(c->r[12]+0x00000224u); // 8005842C
  c->ctr=c->r[12]; // 80058430
  if (true) { c->lr=0x80058438u; dispatch(c,c->ctr); } // 80058434
  c->r[12]=R32(c->r[26]+0x00000000u); // 80058438
  c->r[3]=c->r[26]|c->r[26]; // 8005843C
  c->r[12]=R32(c->r[12]+0x0000022Cu); // 80058440
  c->ctr=c->r[12]; // 80058444
  if (true) { c->lr=0x8005844Cu; dispatch(c,c->ctr); } // 80058448
  c->r[12]=R32(c->r[26]+0x00000000u); // 8005844C
  c->r[3]=c->r[26]|c->r[26]; // 80058450
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80058454
  c->ctr=c->r[12]; // 80058458
  if (true) { c->lr=0x80058460u; dispatch(c,c->ctr); } // 8005845C
L_80058460:;
  c->r[30]=c->r[30]+0x00000004u; // 80058460
  c->r[28]=c->r[28]+0x00000001u; // 80058464
L_80058468:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[31]); // 80058468
  if (crb(c,0)) { IRQCHK(c); goto L_8005837C; } // 8005846C
  c->r[11]=c->r[1]+0x00000090u; // 80058470
  c->lr=0x80058478u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80058474
  c->r[0]=R32(c->r[1]+0x00000094u); // 80058478
  c->lr=c->r[0]; // 8005847C
  c->r[1]=c->r[1]+0x00000090u; // 80058480
  return; // 80058484
}

// fn_80058488
void f_80058488(Ctx* __restrict c) {
  return; // 80058488
}

// fn_8005848C
void f_8005848C(Ctx* __restrict c) {
  f_80053158(c); return; // 8005848C
}

// fn_80058490
void f_80058490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80058490
  c->r[0]=c->lr; // 80058494
  c->r[4]=0u+0x00000018u; // 80058498
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005849C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800584A0
  c->r[31]=c->r[3]|c->r[3]; // 800584A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800584A8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800584AC
  c->ctr=c->r[12]; // 800584B0
  if (true) { c->lr=0x800584B8u; dispatch(c,c->ctr); } // 800584B4
  c->r[0]=0u+0x00000001u; // 800584B8
  W32(c->r[31]+0x00000030u,c->r[0]); // 800584BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800584C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800584C4
  c->lr=c->r[0]; // 800584C8
  c->r[1]=c->r[1]+0x00000010u; // 800584CC
  return; // 800584D0
}

// fn_800584D4
void f_800584D4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000038u); // 800584D4
  return; // 800584D8
}

// fn_800584DC
void f_800584DC(Ctx* __restrict c) {
  W32(c->r[3]+0x00000038u,c->r[4]); // 800584DC
  return; // 800584E0
}

// fn_800584E4
void f_800584E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800584E4
  c->r[0]=c->lr; // 800584E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800584EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800584F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800584F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800584F8
  c->r[29]=c->r[3]|c->r[3]; // 800584FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80058500
  c->r[12]=R32(c->r[12]+0x00000030u); // 80058504
  c->ctr=c->r[12]; // 80058508
  if (true) { c->lr=0x80058510u; dispatch(c,c->ctr); } // 8005850C
  c->r[29]=R32(c->r[29]+0x00000018u); // 80058510
  c->r[31]=c->r[3]|c->r[3]; // 80058514
  c->r[30]=0u+0x00000000u; // 80058518
  goto L_80058574; // 8005851C
L_80058520:;
  cmps(c,0,(int32_t)c->r[29],0); // 80058520
  if (crb(c,2)) { goto L_8005857C; } // 80058524
  c->r[3]=R32(c->r[29]+0x00000000u); // 80058528
  cmps(c,0,(int32_t)c->r[3],0); // 8005852C
  if (crb(c,2)) { goto L_8005857C; } // 80058530
  c->r[12]=R32(c->r[3]+0x00000000u); // 80058534
  c->r[12]=R32(c->r[12]+0x00000244u); // 80058538
  c->ctr=c->r[12]; // 8005853C
  if (true) { c->lr=0x80058544u; dispatch(c,c->ctr); } // 80058540
  cmps(c,0,(int32_t)c->r[3],1); // 80058544
  if (crb(c,2)) { goto L_8005856C; } // 80058548
  if (!crb(c,0)) { goto L_8005855C; } // 8005854C
  cmps(c,0,(int32_t)c->r[3],0); // 80058550
  if (!crb(c,0)) { goto L_80058564; } // 80058554
  goto L_8005856C; // 80058558
L_8005855C:;
  cmps(c,0,(int32_t)c->r[3],9); // 8005855C
  if (!crb(c,0)) { goto L_8005856C; } // 80058560
L_80058564:;
  c->r[3]=0u+0x00000001u; // 80058564
  goto L_80058580; // 80058568
L_8005856C:;
  c->r[29]=R32(c->r[29]+0x00000004u); // 8005856C
  c->r[30]=c->r[30]+0x00000001u; // 80058570
L_80058574:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 80058574
  if (crb(c,0)) { IRQCHK(c); goto L_80058520; } // 80058578
L_8005857C:;
  c->r[3]=0u+0x00000000u; // 8005857C
L_80058580:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80058580
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80058584
  c->r[30]=R32(c->r[1]+0x00000018u); // 80058588
  c->r[29]=R32(c->r[1]+0x00000014u); // 8005858C
  c->lr=c->r[0]; // 80058590
  c->r[1]=c->r[1]+0x00000020u; // 80058594
  return; // 80058598
}

// fn_8005859C
void f_8005859C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005859C
  c->r[0]=c->lr; // 800585A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800585A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800585A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800585AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800585B0
  c->r[29]=c->r[3]|c->r[3]; // 800585B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800585B8
  c->r[12]=R32(c->r[12]+0x00000030u); // 800585BC
  c->ctr=c->r[12]; // 800585C0
  if (true) { c->lr=0x800585C8u; dispatch(c,c->ctr); } // 800585C4
  c->r[29]=R32(c->r[29]+0x00000018u); // 800585C8
  c->r[31]=c->r[3]|c->r[3]; // 800585CC
  c->r[30]=0u+0x00000000u; // 800585D0
  goto L_80058614; // 800585D4
L_800585D8:;
  cmps(c,0,(int32_t)c->r[29],0); // 800585D8
  if (crb(c,2)) { goto L_8005861C; } // 800585DC
  c->r[3]=R32(c->r[29]+0x00000000u); // 800585E0
  cmps(c,0,(int32_t)c->r[3],0); // 800585E4
  if (crb(c,2)) { goto L_8005861C; } // 800585E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800585EC
  c->r[12]=R32(c->r[12]+0x00000178u); // 800585F0
  c->ctr=c->r[12]; // 800585F4
  if (true) { c->lr=0x800585FCu; dispatch(c,c->ctr); } // 800585F8
  cmps(c,0,(int32_t)c->r[3],0); // 800585FC
  if (crb(c,2)) { goto L_8005860C; } // 80058600
  c->r[3]=0u+0x00000001u; // 80058604
  goto L_80058620; // 80058608
L_8005860C:;
  c->r[29]=R32(c->r[29]+0x00000004u); // 8005860C
  c->r[30]=c->r[30]+0x00000001u; // 80058610
L_80058614:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 80058614
  if (crb(c,0)) { IRQCHK(c); goto L_800585D8; } // 80058618
L_8005861C:;
  c->r[3]=0u+0x00000000u; // 8005861C
L_80058620:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80058620
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80058624
  c->r[30]=R32(c->r[1]+0x00000018u); // 80058628
  c->r[29]=R32(c->r[1]+0x00000014u); // 8005862C
  c->lr=c->r[0]; // 80058630
  c->r[1]=c->r[1]+0x00000020u; // 80058634
  return; // 80058638
}

// fn_8005863C
void f_8005863C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005863C
  c->r[0]=c->lr; // 80058640
  W32(c->r[1]+0x00000024u,c->r[0]); // 80058644
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80058648
  W32(c->r[1]+0x00000018u,c->r[30]); // 8005864C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80058650
  W32(c->r[1]+0x00000010u,c->r[28]); // 80058654
  c->r[28]=c->r[3]|c->r[3]; // 80058658
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005865C
  c->r[12]=R32(c->r[12]+0x00000030u); // 80058660
  c->ctr=c->r[12]; // 80058664
  if (true) { c->lr=0x8005866Cu; dispatch(c,c->ctr); } // 80058668
  c->r[29]=R32(c->r[28]+0x00000018u); // 8005866C
  c->r[31]=c->r[3]|c->r[3]; // 80058670
  c->r[28]=0u+0x00000000u; // 80058674
  c->r[30]=0u+0x00000000u; // 80058678
  goto L_800586B0; // 8005867C
L_80058680:;
  cmps(c,0,(int32_t)c->r[29],0); // 80058680
  if (crb(c,2)) { goto L_800586B8; } // 80058684
  c->r[3]=R32(c->r[29]+0x00000000u); // 80058688
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005868C
  c->r[12]=R32(c->r[12]+0x00000038u); // 80058690
  c->ctr=c->r[12]; // 80058694
  if (true) { c->lr=0x8005869Cu; dispatch(c,c->ctr); } // 80058698
  cmps(c,0,(int32_t)c->r[3],1); // 8005869C
  if (!crb(c,2)) { goto L_800586A8; } // 800586A0
  c->r[28]=c->r[28]+0x00000001u; // 800586A4
L_800586A8:;
  c->r[29]=R32(c->r[29]+0x00000004u); // 800586A8
  c->r[30]=c->r[30]+0x00000001u; // 800586AC
L_800586B0:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 800586B0
  if (crb(c,0)) { IRQCHK(c); goto L_80058680; } // 800586B4
L_800586B8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800586B8
  c->r[3]=c->r[28]|c->r[28]; // 800586BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800586C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800586C4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800586C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800586CC
  c->lr=c->r[0]; // 800586D0
  c->r[1]=c->r[1]+0x00000020u; // 800586D4
  return; // 800586D8
}

// fn_800586DC
void f_800586DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800586DC
  c->r[0]=c->lr; // 800586E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800586E4
  c->r[11]=c->r[1]+0x00000030u; // 800586E8
  c->lr=0x800586F0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800586EC
  c->r[24]=c->r[3]|c->r[3]; // 800586F0
  c->lr=0x800586F8u; f_8005863C(c); // 800586F4
  cmps(c,0,(int32_t)c->r[3],0); // 800586F8
  if (crb(c,1)) { goto L_80058708; } // 800586FC
  c->r[3]=0u+0x00000000u; // 80058700
  goto L_80058848; // 80058704
L_80058708:;
  c->r[3]=c->r[24]|c->r[24]; // 80058708
  c->lr=0x80058710u; f_800584E4(c); // 8005870C
  cmps(c,0,(int32_t)c->r[3],1); // 80058710
  if (!crb(c,2)) { goto L_80058720; } // 80058714
  c->r[3]=0u+0x00000000u; // 80058718
  goto L_80058848; // 8005871C
L_80058720:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 80058720
  c->r[3]=c->r[24]|c->r[24]; // 80058724
  c->r[12]=R32(c->r[12]+0x00000030u); // 80058728
  c->ctr=c->r[12]; // 8005872C
  if (true) { c->lr=0x80058734u; dispatch(c,c->ctr); } // 80058730
  c->r[26]=R32(c->r[24]+0x00000018u); // 80058734
  c->r[30]=c->r[3]|c->r[3]; // 80058738
  c->r[3]=c->r[24]|c->r[24]; // 8005873C
  c->lr=0x80058744u; f_8005863C(c); // 80058740
  c->r[31]=c->r[3]|c->r[3]; // 80058744
  c->r[25]=0u+0x00000000u; // 80058748
  c->r[24]=0u+0x00000000u; // 8005874C
  c->r[29]=0u+0x00000000u; // 80058750
  goto L_80058820; // 80058754
L_80058758:;
  cmps(c,0,(int32_t)c->r[26],0); // 80058758
  if (crb(c,2)) { goto L_80058828; } // 8005875C
  c->r[27]=R32(c->r[26]+0x00000000u); // 80058760
  c->r[12]=R32(c->r[27]+0x00000000u); // 80058764
  c->r[3]=c->r[27]|c->r[27]; // 80058768
  c->r[12]=R32(c->r[12]+0x00000038u); // 8005876C
  c->ctr=c->r[12]; // 80058770
  if (true) { c->lr=0x80058778u; dispatch(c,c->ctr); } // 80058774
  cmps(c,0,(int32_t)c->r[3],3); // 80058778
  if (crb(c,2)) { goto L_8005879C; } // 8005877C
  c->r[12]=R32(c->r[27]+0x00000000u); // 80058780
  c->r[3]=c->r[27]|c->r[27]; // 80058784
  c->r[12]=R32(c->r[12]+0x00000038u); // 80058788
  c->ctr=c->r[12]; // 8005878C
  if (true) { c->lr=0x80058794u; dispatch(c,c->ctr); } // 80058790
  cmps(c,0,(int32_t)c->r[3],4); // 80058794
  if (!crb(c,2)) { goto L_800587A4; } // 80058798
L_8005879C:;
  c->r[3]=0u+0x00000000u; // 8005879C
  goto L_80058848; // 800587A0
L_800587A4:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 800587A4
  c->r[3]=c->r[27]|c->r[27]; // 800587A8
  c->r[12]=R32(c->r[12]+0x00000038u); // 800587AC
  c->ctr=c->r[12]; // 800587B0
  if (true) { c->lr=0x800587B8u; dispatch(c,c->ctr); } // 800587B4
  cmps(c,0,(int32_t)c->r[3],1); // 800587B8
  if (!crb(c,2)) { goto L_80058818; } // 800587BC
  c->r[28]=0u+0x00000000u; // 800587C0
L_800587C4:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 800587C4
  c->r[3]=c->r[27]|c->r[27]; // 800587C8
  c->r[4]=c->r[28]|c->r[28]; // 800587CC
  c->r[12]=R32(c->r[12]+0x00000248u); // 800587D0
  c->ctr=c->r[12]; // 800587D4
  if (true) { c->lr=0x800587DCu; dispatch(c,c->ctr); } // 800587D8
  cmps(c,0,(int32_t)c->r[3],0); // 800587DC
  if (crb(c,2)) { goto L_800587EC; } // 800587E0
  c->r[25]=c->r[25]+0x00000001u; // 800587E4
  goto L_800587F8; // 800587E8
L_800587EC:;
  c->r[28]=c->r[28]+0x00000001u; // 800587EC
  cmps(c,0,(int32_t)c->r[28],7); // 800587F0
  if (crb(c,0)) { IRQCHK(c); goto L_800587C4; } // 800587F4
L_800587F8:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 800587F8
  c->r[3]=c->r[27]|c->r[27]; // 800587FC
  c->r[12]=R32(c->r[12]+0x00000250u); // 80058800
  c->ctr=c->r[12]; // 80058804
  if (true) { c->lr=0x8005880Cu; dispatch(c,c->ctr); } // 80058808
  cmps(c,0,(int32_t)c->r[3],0); // 8005880C
  if (!crb(c,2)) { goto L_80058818; } // 80058810
  c->r[24]=c->r[24]+0x00000001u; // 80058814
L_80058818:;
  c->r[26]=R32(c->r[26]+0x00000004u); // 80058818
  c->r[29]=c->r[29]+0x00000001u; // 8005881C
L_80058820:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[30]); // 80058820
  if (crb(c,0)) { IRQCHK(c); goto L_80058758; } // 80058824
L_80058828:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[25]); // 80058828
  if (!crb(c,2)) { goto L_80058838; } // 8005882C
  c->r[3]=0u+0x00000000u; // 80058830
  goto L_80058848; // 80058834
L_80058838:;
  c->r[3]=c->r[24]-c->r[31]; // 80058838
  c->r[0]=c->r[31]-c->r[24]; // 8005883C
  c->r[0]=c->r[3]|c->r[0]; // 80058840
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80058844
L_80058848:;
  c->r[11]=c->r[1]+0x00000030u; // 80058848
  c->lr=0x80058850u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8005884C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80058850
  c->lr=c->r[0]; // 80058854
  c->r[1]=c->r[1]+0x00000030u; // 80058858
  return; // 8005885C
}

// fn_80058860
void f_80058860(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80058860
  c->r[3]=c->r[3]+c->r[0]; // 80058864
  c->r[3]=R32(c->r[3]+0x00000298u); // 80058868
  return; // 8005886C
}

// fn_80058870
void f_80058870(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80058870
  c->r[0]=c->lr; // 80058874
  W32(c->r[1]+0x00000024u,c->r[0]); // 80058878
  c->r[11]=c->r[1]+0x00000020u; // 8005887C
  c->lr=0x80058884u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80058880
  c->r[26]=c->r[3]|c->r[3]; // 80058884
  c->lr=0x8005888Cu; f_8005863C(c); // 80058888
  cmps(c,0,(int32_t)c->r[3],0); // 8005888C
  if (crb(c,1)) { goto L_8005889C; } // 80058890
  c->r[3]=0u+0x00000000u; // 80058894
  goto L_80058994; // 80058898
L_8005889C:;
  c->r[3]=c->r[26]|c->r[26]; // 8005889C
  c->lr=0x800588A4u; f_800584E4(c); // 800588A0
  cmps(c,0,(int32_t)c->r[3],1); // 800588A4
  if (!crb(c,2)) { goto L_800588B4; } // 800588A8
  c->r[3]=0u+0x00000000u; // 800588AC
  goto L_80058994; // 800588B0
L_800588B4:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 800588B4
  c->r[3]=c->r[26]|c->r[26]; // 800588B8
  c->r[12]=R32(c->r[12]+0x00000030u); // 800588BC
  c->ctr=c->r[12]; // 800588C0
  if (true) { c->lr=0x800588C8u; dispatch(c,c->ctr); } // 800588C4
  c->r[27]=R32(c->r[26]+0x00000018u); // 800588C8
  c->r[30]=c->r[3]|c->r[3]; // 800588CC
  c->r[3]=c->r[26]|c->r[26]; // 800588D0
  c->lr=0x800588D8u; f_8005863C(c); // 800588D4
  c->r[31]=c->r[3]|c->r[3]; // 800588D8
  c->r[26]=0u+0x00000000u; // 800588DC
  c->r[29]=0u+0x00000000u; // 800588E0
  goto L_80058978; // 800588E4
L_800588E8:;
  cmps(c,0,(int32_t)c->r[27],0); // 800588E8
  if (crb(c,2)) { goto L_80058980; } // 800588EC
  c->r[28]=R32(c->r[27]+0x00000000u); // 800588F0
  c->r[12]=R32(c->r[28]+0x00000000u); // 800588F4
  c->r[3]=c->r[28]|c->r[28]; // 800588F8
  c->r[12]=R32(c->r[12]+0x00000038u); // 800588FC
  c->ctr=c->r[12]; // 80058900
  if (true) { c->lr=0x80058908u; dispatch(c,c->ctr); } // 80058904
  cmps(c,0,(int32_t)c->r[3],3); // 80058908
  if (crb(c,2)) { goto L_8005892C; } // 8005890C
  c->r[12]=R32(c->r[28]+0x00000000u); // 80058910
  c->r[3]=c->r[28]|c->r[28]; // 80058914
  c->r[12]=R32(c->r[12]+0x00000038u); // 80058918
  c->ctr=c->r[12]; // 8005891C
  if (true) { c->lr=0x80058924u; dispatch(c,c->ctr); } // 80058920
  cmps(c,0,(int32_t)c->r[3],4); // 80058924
  if (!crb(c,2)) { goto L_80058934; } // 80058928
L_8005892C:;
  c->r[3]=0u+0x00000000u; // 8005892C
  goto L_80058994; // 80058930
L_80058934:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 80058934
  c->r[3]=c->r[28]|c->r[28]; // 80058938
  c->r[12]=R32(c->r[12]+0x00000038u); // 8005893C
  c->ctr=c->r[12]; // 80058940
  if (true) { c->lr=0x80058948u; dispatch(c,c->ctr); } // 80058944
  cmps(c,0,(int32_t)c->r[3],1); // 80058948
  if (!crb(c,2)) { goto L_80058970; } // 8005894C
  c->r[12]=R32(c->r[28]+0x00000000u); // 80058950
  c->r[3]=c->r[28]|c->r[28]; // 80058954
  c->r[12]=R32(c->r[12]+0x00000250u); // 80058958
  c->ctr=c->r[12]; // 8005895C
  if (true) { c->lr=0x80058964u; dispatch(c,c->ctr); } // 80058960
  cmps(c,0,(int32_t)c->r[3],0); // 80058964
  if (!crb(c,2)) { goto L_80058970; } // 80058968
  c->r[26]=c->r[26]+0x00000001u; // 8005896C
L_80058970:;
  c->r[27]=R32(c->r[27]+0x00000004u); // 80058970
  c->r[29]=c->r[29]+0x00000001u; // 80058974
L_80058978:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[30]); // 80058978
  if (crb(c,0)) { IRQCHK(c); goto L_800588E8; } // 8005897C
L_80058980:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[26]); // 80058980
  if (!crb(c,2)) { goto L_80058990; } // 80058984
  c->r[3]=0u+0x00000000u; // 80058988
  goto L_80058994; // 8005898C
L_80058990:;
  c->r[3]=0u+0x00000001u; // 80058990
L_80058994:;
  c->r[11]=c->r[1]+0x00000020u; // 80058994
  c->lr=0x8005899Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80058998
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005899C
  c->lr=c->r[0]; // 800589A0
  c->r[1]=c->r[1]+0x00000020u; // 800589A4
  return; // 800589A8
}

// fn_800589AC
void f_800589AC(Ctx* __restrict c) {
  c->r[4]=0u+0x802B0000u; // 800589AC
  c->r[0]=0u+0x00000009u; // 800589B0
  c->r[4]=c->r[4]+0xFFFFDF80u; // 800589B4
  c->r[5]=c->r[3]+0xFFFFFFFCu; // 800589B8
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 800589BC
  c->ctr=c->r[0]; // 800589C0
L_800589C4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800589C4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800589C8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800589CC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800589D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800589C4; } // 800589D4
  return; // 800589D8
}

// fn_800589DC
void f_800589DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800589DC
  c->r[0]=c->lr; // 800589E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800589E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800589E8
  c->r[31]=c->r[4]|c->r[4]; // 800589EC
  c->r[4]=c->r[1]+0x00000008u; // 800589F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800589F4
  c->r[5]=R32(c->r[31]+0x0000003Cu); // 800589F8
  c->r[12]=R32(c->r[12]+0x00000058u); // 800589FC
  c->ctr=c->r[12]; // 80058A00
  if (true) { c->lr=0x80058A08u; dispatch(c,c->ctr); } // 80058A04
  c->r[0]=R32(c->r[1]+0x00000008u); // 80058A08
  cmps(c,0,(int32_t)c->r[0],0); // 80058A0C
  if (crb(c,2)) { goto L_80058A30; } // 80058A10
  W32(c->r[31]+0x00000030u,c->r[3]); // 80058A14
  c->r[4]=c->r[31]|c->r[31]; // 80058A18
  c->r[3]=R32(c->r[1]+0x00000008u); // 80058A1C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80058A20
  c->r[12]=R32(c->r[12]+0x000000ECu); // 80058A24
  c->ctr=c->r[12]; // 80058A28
  if (true) { c->lr=0x80058A30u; dispatch(c,c->ctr); } // 80058A2C
L_80058A30:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80058A30
  c->r[0]=R32(c->r[1]+0x00000024u); // 80058A34
  c->r[3]=R32(c->r[1]+0x00000008u); // 80058A38
  c->lr=c->r[0]; // 80058A3C
  c->r[1]=c->r[1]+0x00000020u; // 80058A40
  return; // 80058A44
}

// fn_80058A48
void f_80058A48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80058A48
  c->r[0]=c->lr; // 80058A4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80058A50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80058A54
  c->r[31]=c->r[4]|c->r[4]; // 80058A58
  W32(c->r[1]+0x00000008u,c->r[30]); // 80058A5C
  c->r[30]=c->r[3]|c->r[3]; // 80058A60
  c->r[12]=R32(c->r[3]+0x00000000u); // 80058A64
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80058A68
  c->ctr=c->r[12]; // 80058A6C
  if (true) { c->lr=0x80058A74u; dispatch(c,c->ctr); } // 80058A70
  c->r[4]=R32(c->r[30]+0x00000760u); // 80058A74
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 80058A78
  if (crb(c,0)) { goto L_80058A88; } // 80058A7C
  c->r[3]=0u+0xFFFFFFFFu; // 80058A80
  goto L_80058B30; // 80058A84
L_80058A88:;
  c->r[0]=c->r[4]+0x00000001u; // 80058A88
  W32(c->r[30]+0x00000760u,c->r[0]); // 80058A8C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)72); // 80058A90
  c->r[3]=R32(c->r[31]+0x00000000u); // 80058A94
  c->r[0]=R32(c->r[31]+0x00000004u); // 80058A98
  c->r[4]=c->r[30]+c->r[4]; // 80058A9C
  W32(c->r[4]+0x00000040u,c->r[3]); // 80058AA0
  W32(c->r[4]+0x00000044u,c->r[0]); // 80058AA4
  c->r[0]=R32(c->r[31]+0x00000008u); // 80058AA8
  W32(c->r[4]+0x00000048u,c->r[0]); // 80058AAC
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80058AB0
  c->r[0]=R32(c->r[31]+0x00000010u); // 80058AB4
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 80058AB8
  W32(c->r[4]+0x00000050u,c->r[0]); // 80058ABC
  c->r[0]=R32(c->r[31]+0x00000014u); // 80058AC0
  W32(c->r[4]+0x00000054u,c->r[0]); // 80058AC4
  c->r[3]=R32(c->r[31]+0x00000018u); // 80058AC8
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80058ACC
  W32(c->r[4]+0x00000058u,c->r[3]); // 80058AD0
  W32(c->r[4]+0x0000005Cu,c->r[0]); // 80058AD4
  c->r[0]=R32(c->r[31]+0x00000020u); // 80058AD8
  W32(c->r[4]+0x00000060u,c->r[0]); // 80058ADC
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80058AE0
  {uint32_t ea=c->r[4]+0x00000064u; WF32(ea,c->f[0]);} // 80058AE4
  c->r[0]=R32(c->r[31]+0x00000028u); // 80058AE8
  W32(c->r[4]+0x00000068u,c->r[0]); // 80058AEC
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 80058AF0
  W32(c->r[4]+0x0000006Cu,c->r[0]); // 80058AF4
  c->r[0]=R32(c->r[31]+0x00000030u); // 80058AF8
  W32(c->r[4]+0x00000070u,c->r[0]); // 80058AFC
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80058B00
  {uint32_t ea=c->r[4]+0x00000074u; WF32(ea,c->f[0]);} // 80058B04
  c->r[0]=R32(c->r[31]+0x00000038u); // 80058B08
  W32(c->r[4]+0x00000078u,c->r[0]); // 80058B0C
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 80058B10
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 80058B14
  c->r[0]=R32(c->r[31]+0x00000040u); // 80058B18
  W32(c->r[4]+0x00000080u,c->r[0]); // 80058B1C
  c->r[0]=R32(c->r[31]+0x00000044u); // 80058B20
  W32(c->r[4]+0x00000084u,c->r[0]); // 80058B24
  c->r[3]=R32(c->r[30]+0x00000760u); // 80058B28
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80058B2C
L_80058B30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80058B30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80058B34
  c->r[30]=R32(c->r[1]+0x00000008u); // 80058B38
  c->lr=c->r[0]; // 80058B3C
  c->r[1]=c->r[1]+0x00000010u; // 80058B40
  return; // 80058B44
}

// fn_80058B48
void f_80058B48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80058B48
  c->r[0]=c->lr; // 80058B4C
  cmps(c,0,(int32_t)c->r[4],3); // 80058B50
  W32(c->r[1]+0x00000014u,c->r[0]); // 80058B54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80058B58
  c->r[31]=0u+0x00000000u; // 80058B5C
  if (crb(c,2)) { goto L_80058BD8; } // 80058B60
  if (!crb(c,0)) { goto L_80058B78; } // 80058B64
  cmps(c,0,(int32_t)c->r[4],1); // 80058B68
  if (crb(c,2)) { goto L_80058B84; } // 80058B6C
  if (!crb(c,0)) { goto L_80058BA0; } // 80058B70
  goto L_80058BF0; // 80058B74
L_80058B78:;
  cmps(c,0,(int32_t)c->r[4],5); // 80058B78
  if (!crb(c,0)) { goto L_80058BF0; } // 80058B7C
  goto L_80058BBC; // 80058B80
L_80058B84:;
  c->lr=0x80058B88u; f_80059D14(c); // 80058B84
  cmps(c,0,(int32_t)c->r[3],0); // 80058B88
  c->r[31]=c->r[3]|c->r[3]; // 80058B8C
  if (crb(c,2)) { goto L_80058BF0; } // 80058B90
  c->lr=0x80058B98u; f_80059EE4(c); // 80058B94
  W32(c->r[31]+0x00000058u,c->r[3]); // 80058B98
  goto L_80058BF0; // 80058B9C
L_80058BA0:;
  c->lr=0x80058BA4u; f_80059D54(c); // 80058BA0
  cmps(c,0,(int32_t)c->r[3],0); // 80058BA4
  c->r[31]=c->r[3]|c->r[3]; // 80058BA8
  if (crb(c,2)) { goto L_80058BF0; } // 80058BAC
  c->lr=0x80058BB4u; f_80059EF0(c); // 80058BB0
  W32(c->r[31]+0x00000058u,c->r[3]); // 80058BB4
  goto L_80058BF0; // 80058BB8
L_80058BBC:;
  c->lr=0x80058BC0u; f_80059D98(c); // 80058BBC
  cmps(c,0,(int32_t)c->r[3],0); // 80058BC0
  c->r[31]=c->r[3]|c->r[3]; // 80058BC4
  if (crb(c,2)) { goto L_80058BF0; } // 80058BC8
  c->lr=0x80058BD0u; f_80059F00(c); // 80058BCC
  W32(c->r[31]+0x00000058u,c->r[3]); // 80058BD0
  goto L_80058BF0; // 80058BD4
L_80058BD8:;
  c->lr=0x80058BDCu; f_80059DDC(c); // 80058BD8
  cmps(c,0,(int32_t)c->r[3],0); // 80058BDC
  c->r[31]=c->r[3]|c->r[3]; // 80058BE0
  if (crb(c,2)) { goto L_80058BF0; } // 80058BE4
  c->lr=0x80058BECu; f_80059F10(c); // 80058BE8
  W32(c->r[31]+0x00000058u,c->r[3]); // 80058BEC
L_80058BF0:;
  c->r[3]=c->r[31]|c->r[31]; // 80058BF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80058BF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80058BF8
  c->lr=c->r[0]; // 80058BFC
  c->r[1]=c->r[1]+0x00000010u; // 80058C00
  return; // 80058C04
}

// fn_80058C08
void f_80058C08(Ctx* __restrict c) {
  f_80053818(c); return; // 80058C08
}

// fn_80058C0C
void f_80058C0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80058C0C
  c->r[0]=c->lr; // 80058C10
  W32(c->r[1]+0x00000024u,c->r[0]); // 80058C14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80058C18
  W32(c->r[1]+0x00000018u,c->r[30]); // 80058C1C
  c->r[30]=c->r[4]|c->r[4]; // 80058C20
  W32(c->r[1]+0x00000014u,c->r[29]); // 80058C24
  c->r[29]=c->r[3]|c->r[3]; // 80058C28
  c->r[12]=R32(c->r[3]+0x00000000u); // 80058C2C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80058C30
  c->ctr=c->r[12]; // 80058C34
  if (true) { c->lr=0x80058C3Cu; dispatch(c,c->ctr); } // 80058C38
  cmps(c,0,(int32_t)c->r[3],0); // 80058C3C
  if (crb(c,2)) { goto L_80058C98; } // 80058C40
  cmps(c,0,(int32_t)c->r[30],3); // 80058C44
  if (crb(c,2)) { goto L_80058C84; } // 80058C48
  if (!crb(c,0)) { goto L_80058C60; } // 80058C4C
  cmps(c,0,(int32_t)c->r[30],1); // 80058C50
  if (crb(c,2)) { goto L_80058C6C; } // 80058C54
  if (!crb(c,0)) { goto L_80058C74; } // 80058C58
  goto L_80058C8C; // 80058C5C
L_80058C60:;
  cmps(c,0,(int32_t)c->r[30],5); // 80058C60
  if (!crb(c,0)) { goto L_80058C8C; } // 80058C64
  goto L_80058C7C; // 80058C68
L_80058C6C:;
  c->lr=0x80058C70u; f_80059F20(c); // 80058C6C
  goto L_80058C90; // 80058C70
L_80058C74:;
  c->lr=0x80058C78u; f_80059F2C(c); // 80058C74
  goto L_80058C90; // 80058C78
L_80058C7C:;
  c->lr=0x80058C80u; f_80059F3C(c); // 80058C7C
  goto L_80058C90; // 80058C80
L_80058C84:;
  c->lr=0x80058C88u; f_80059F4C(c); // 80058C84
  goto L_80058C90; // 80058C88
L_80058C8C:;
  c->r[3]=0u+0x00000000u; // 80058C8C
L_80058C90:;
  cmps(c,0,(int32_t)c->r[3],0); // 80058C90
  if (!crb(c,2)) { goto L_80058CA0; } // 80058C94
L_80058C98:;
  c->r[3]=0u+0x00000000u; // 80058C98
  goto L_80058D58; // 80058C9C
L_80058CA0:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 80058CA0
  c->r[3]=c->r[29]|c->r[29]; // 80058CA4
  c->r[12]=R32(c->r[12]+0x00000014u); // 80058CA8
  c->ctr=c->r[12]; // 80058CAC
  if (true) { c->lr=0x80058CB4u; dispatch(c,c->ctr); } // 80058CB0
  cmps(c,0,(int32_t)c->r[3],0); // 80058CB4
  c->r[31]=c->r[3]|c->r[3]; // 80058CB8
  if (!crb(c,2)) { goto L_80058CC8; } // 80058CBC
  c->r[3]=0u+0x00000000u; // 80058CC0
  goto L_80058D58; // 80058CC4
L_80058CC8:;
  c->r[3]=c->r[29]|c->r[29]; // 80058CC8
  c->r[4]=c->r[30]|c->r[30]; // 80058CCC
  c->lr=0x80058CD4u; f_80058B48(c); // 80058CD0
  W32(c->r[31]+0x00000000u,c->r[3]); // 80058CD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80058CD8
  c->r[12]=R32(c->r[12]+0x00000074u); // 80058CDC
  c->ctr=c->r[12]; // 80058CE0
  if (true) { c->lr=0x80058CE8u; dispatch(c,c->ctr); } // 80058CE4
  cmps(c,0,(int32_t)c->r[3],0); // 80058CE8
  if (!crb(c,2)) { goto L_80058D24; } // 80058CEC
  c->r[3]=R32(c->r[31]+0x00000000u); // 80058CF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80058CF4
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 80058CF8
  c->ctr=c->r[12]; // 80058CFC
  if (true) { c->lr=0x80058D04u; dispatch(c,c->ctr); } // 80058D00
  cmps(c,0,(int32_t)c->r[3],0); // 80058D04
  if (!crb(c,2)) { goto L_80058D24; } // 80058D08
  c->r[3]=R32(c->r[31]+0x00000000u); // 80058D0C
  c->r[4]=0u+0x00000001u; // 80058D10
  c->lr=0x80058D18u; f_80052A50(c); // 80058D14
  c->r[3]=R32(c->r[31]+0x00000000u); // 80058D18
  c->r[4]=0u+0x00000001u; // 80058D1C
  c->lr=0x80058D24u; f_80052D68(c); // 80058D20
L_80058D24:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 80058D24
  c->r[4]=0u+0x00000001u; // 80058D28
  c->r[12]=R32(c->r[3]+0x00000000u); // 80058D2C
  c->r[12]=R32(c->r[12]+0x000002B4u); // 80058D30
  c->ctr=c->r[12]; // 80058D34
  if (true) { c->lr=0x80058D3Cu; dispatch(c,c->ctr); } // 80058D38
  c->r[3]=R32(c->r[31]+0x00000000u); // 80058D3C
  c->r[4]=R32(c->r[29]+0x00000028u); // 80058D40
  c->r[12]=R32(c->r[3]+0x00000000u); // 80058D44
  c->r[12]=R32(c->r[12]+0x000002C0u); // 80058D48
  c->ctr=c->r[12]; // 80058D4C
  if (true) { c->lr=0x80058D54u; dispatch(c,c->ctr); } // 80058D50
  c->r[3]=c->r[31]|c->r[31]; // 80058D54
L_80058D58:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80058D58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80058D5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80058D60
  c->r[29]=R32(c->r[1]+0x00000014u); // 80058D64
  c->lr=c->r[0]; // 80058D68
  c->r[1]=c->r[1]+0x00000020u; // 80058D6C
  return; // 80058D70
}

// fn_80058D74
void f_80058D74(Ctx* __restrict c) {
  W32(c->r[3]+0x00000418u,c->r[4]); // 80058D74
  return; // 80058D78
}

// fn_80058D7C
void f_80058D7C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000290u,c->r[4]); // 80058D7C
  return; // 80058D80
}

// fn_80058D84
void f_80058D84(Ctx* __restrict c) {
  f_800538C8(c); return; // 80058D84
}

// fn_80058D88
void f_80058D88(Ctx* __restrict c) {
  f_80053980(c); return; // 80058D88
}

// fn_80058D8C
void f_80058D8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80058D8C
  c->r[0]=c->lr; // 80058D90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80058D94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80058D98
  c->r[31]=c->r[4]|c->r[4]; // 80058D9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80058DA0
  c->r[30]=c->r[3]|c->r[3]; // 80058DA4
  c->r[3]=c->r[31]|c->r[31]; // 80058DA8
  c->r[12]=R32(c->r[31]+0x00000000u); // 80058DAC
  c->r[12]=R32(c->r[12]+0x00000048u); // 80058DB0
  c->ctr=c->r[12]; // 80058DB4
  if (true) { c->lr=0x80058DBCu; dispatch(c,c->ctr); } // 80058DB8
  c->r[4]=c->r[3]|c->r[3]; // 80058DBC
  c->r[3]=c->r[30]|c->r[30]; // 80058DC0
  c->lr=0x80058DC8u; f_80053980(c); // 80058DC4
  c->r[12]=R32(c->r[31]+0x00000000u); // 80058DC8
  c->r[3]=c->r[31]|c->r[31]; // 80058DCC
  c->r[4]=0u+0x00000000u; // 80058DD0
  c->r[12]=R32(c->r[12]+0x000002B4u); // 80058DD4
  c->ctr=c->r[12]; // 80058DD8
  if (true) { c->lr=0x80058DE0u; dispatch(c,c->ctr); } // 80058DDC
  c->r[12]=R32(c->r[31]+0x00000000u); // 80058DE0
  c->r[3]=c->r[31]|c->r[31]; // 80058DE4
  c->r[12]=R32(c->r[12]+0x00000018u); // 80058DE8
  c->ctr=c->r[12]; // 80058DEC
  if (true) { c->lr=0x80058DF4u; dispatch(c,c->ctr); } // 80058DF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80058DF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80058DF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80058DFC
  c->lr=c->r[0]; // 80058E00
  c->r[1]=c->r[1]+0x00000010u; // 80058E04
  return; // 80058E08
}

// fn_80058E0C
void f_80058E0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80058E0C
  c->r[0]=c->lr; // 80058E10
  W32(c->r[1]+0x00000024u,c->r[0]); // 80058E14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80058E18
  c->r[31]=0u+0x00000000u; // 80058E1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80058E20
  c->r[30]=0u+0x00000000u; // 80058E24
  W32(c->r[1]+0x00000014u,c->r[29]); // 80058E28
  c->r[29]=c->r[3]|c->r[3]; // 80058E2C
  goto L_80058E58; // 80058E30
L_80058E34:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 80058E34
  c->r[3]=c->r[29]|c->r[29]; // 80058E38
  c->r[4]=R32(c->r[29]+0x00000024u); // 80058E3C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80058E40
  c->r[4]=R32(c->r[4]+c->r[31]); // 80058E44
  c->ctr=c->r[12]; // 80058E48
  if (true) { c->lr=0x80058E50u; dispatch(c,c->ctr); } // 80058E4C
  c->r[31]=c->r[31]+0x00000004u; // 80058E50
  c->r[30]=c->r[30]+0x00000001u; // 80058E54
L_80058E58:;
  c->r[0]=R32(c->r[29]+0x00000020u); // 80058E58
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80058E5C
  if (crb(c,0)) { IRQCHK(c); goto L_80058E34; } // 80058E60
  c->r[0]=0u+0x00000000u; // 80058E64
  W32(c->r[29]+0x00000020u,c->r[0]); // 80058E68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80058E6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80058E70
  c->r[29]=R32(c->r[1]+0x00000014u); // 80058E74
  c->r[0]=R32(c->r[1]+0x00000024u); // 80058E78
  c->lr=c->r[0]; // 80058E7C
  c->r[1]=c->r[1]+0x00000020u; // 80058E80
  return; // 80058E84
}

// fn_80058E88
void f_80058E88(Ctx* __restrict c) {
  f_80053A48(c); return; // 80058E88
}

// fn_80058E8C
void f_80058E8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80058E8C
  c->r[0]=c->lr; // 80058E90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80058E94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80058E98
  c->r[31]=c->r[4]|c->r[4]; // 80058E9C
  c->r[4]=c->r[5]|c->r[5]; // 80058EA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80058EA4
  c->r[12]=R32(c->r[12]+0x00000054u); // 80058EA8
  c->ctr=c->r[12]; // 80058EAC
  if (true) { c->lr=0x80058EB4u; dispatch(c,c->ctr); } // 80058EB0
  cmps(c,0,(int32_t)c->r[3],0); // 80058EB4
  if (!crb(c,2)) { goto L_80058ECC; } // 80058EB8
  c->r[0]=0u+0x00000000u; // 80058EBC
  c->r[3]=0u+0xFFFFFFFFu; // 80058EC0
  W32(c->r[31]+0x00000000u,c->r[0]); // 80058EC4
  goto L_80058ED8; // 80058EC8
L_80058ECC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80058ECC
  W32(c->r[31]+0x00000000u,c->r[0]); // 80058ED0
  c->r[3]=R32(c->r[3]+0x00000010u); // 80058ED4
L_80058ED8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80058ED8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80058EDC
  c->lr=c->r[0]; // 80058EE0
  c->r[1]=c->r[1]+0x00000010u; // 80058EE4
  return; // 80058EE8
}

// fn_80058EEC
void f_80058EEC(Ctx* __restrict c) {
  f_80053AA4(c); return; // 80058EEC
}

// fn_80058EF0
void f_80058EF0(Ctx* __restrict c) {
  f_80053ACC(c); return; // 80058EF0
}

// fn_80058EF4
void f_80058EF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80058EF4
  c->r[0]=c->lr; // 80058EF8
  c->r[4]=0u+0x00000000u; // 80058EFC
  c->r[5]=0u+0x00000001u; // 80058F00
  W32(c->r[1]+0x00000014u,c->r[0]); // 80058F04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80058F08
  c->r[31]=c->r[3]|c->r[3]; // 80058F0C
  c->lr=0x80058F14u; f_8000443C(c); // 80058F10
  c->r[3]=c->r[31]|c->r[31]; // 80058F14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80058F18
  c->r[0]=R32(c->r[1]+0x00000014u); // 80058F1C
  c->lr=c->r[0]; // 80058F20
  c->r[1]=c->r[1]+0x00000010u; // 80058F24
  return; // 80058F28
}

// fn_80058F2C
void f_80058F2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80058F2C
  c->r[0]=c->lr; // 80058F30
  W32(c->r[1]+0x00000034u,c->r[0]); // 80058F34
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80058F38
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80058F3C
  c->r[3]=0u+0x00000000u; // 80058F40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80058F44
  W32(c->r[1]+0x00000018u,c->r[30]); // 80058F48
  W32(c->r[1]+0x00000014u,c->r[29]); // 80058F4C
  c->lr=0x80058F54u; f_80059E20(c); // 80058F50
  {uint32_t ea=c->r[2]+0xFFFF8C58u; c->f[31]=c->ps1[31]=RF32(ea);} // 80058F54
  c->r[30]=c->r[3]|c->r[3]; // 80058F58
  c->r[29]=0u+0x00000000u; // 80058F5C
  c->r[31]=0u+0xFFFFFFFFu; // 80058F60
L_80058F64:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80058F64
  c->r[3]=c->r[30]|c->r[30]; // 80058F68
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80058F6C
  c->ctr=c->r[12]; // 80058F70
  if (true) { c->lr=0x80058F78u; dispatch(c,c->ctr); } // 80058F74
  W32(c->r[30]+0x0000005Cu,c->r[31]); // 80058F78
  c->r[29]=c->r[29]+0x00000001u; // 80058F7C
  cmps(c,0,(int32_t)c->r[29],5); // 80058F80
  W32(c->r[30]+0x00000060u,c->r[31]); // 80058F84
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[31]);} // 80058F88
  c->r[30]=c->r[30]+0x0000024Cu; // 80058F8C
  if (crb(c,0)) { IRQCHK(c); goto L_80058F64; } // 80058F90
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80058F94
  c->r[0]=R32(c->r[1]+0x00000034u); // 80058F98
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80058F9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80058FA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80058FA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80058FA8
  c->lr=c->r[0]; // 80058FAC
  c->r[1]=c->r[1]+0x00000030u; // 80058FB0
  return; // 80058FB4
}

// fn_80058FB8
void f_80058FB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80058FB8
  c->r[0]=c->lr; // 80058FBC
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80058FC0
  c->r[11]=c->r[1]+0x000000B0u; // 80058FC4
  c->lr=0x80058FCCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80058FC8
  c->r[3]=0u+0x00000000u; // 80058FCC
  c->lr=0x80058FD4u; f_80059E20(c); // 80058FD0
  c->r[28]=c->r[3]|c->r[3]; // 80058FD4
  c->r[3]=0u+0x00000004u; // 80058FD8
  c->lr=0x80058FE0u; f_80059E20(c); // 80058FDC
  c->r[27]=c->r[3]|c->r[3]; // 80058FE0
  c->lr=0x80058FE8u; f_8005A528(c); // 80058FE4
  c->r[30]=c->r[3]|c->r[3]; // 80058FE8
  c->lr=0x80058FF0u; f_8007AB30(c); // 80058FEC
  c->lr=0x80058FF4u; f_800782B8(c); // 80058FF0
  c->r[6]=0u+0x80270000u; // 80058FF4
  {uint32_t ea=c->r[6]+0x00002230u; c->r[5]=R32(ea); c->r[6]=ea;} // 80058FF8
  cmps(c,0,(int32_t)c->r[3],6); // 80058FFC
  c->r[4]=R32(c->r[6]+0x00000004u); // 80059000
  c->r[0]=R32(c->r[6]+0x00000008u); // 80059004
  W32(c->r[1]+0x00000020u,c->r[5]); // 80059008
  W32(c->r[1]+0x00000024u,c->r[4]); // 8005900C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80059010
  if (crb(c,0)) { goto L_8005901C; } // 80059014
  c->r[3]=0u+0x00000006u; // 80059018
L_8005901C:;
  c->r[0]=c->r[3]+0x00000001u; // 8005901C
  {uint32_t ea=c->r[2]+0xFFFF8C5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80059020
  W32(c->r[27]+0x00000060u,c->r[0]); // 80059024
  W32(c->r[27]+0x0000005Cu,c->r[0]); // 80059028
  {uint32_t ea=c->r[27]+0x00000068u; WF32(ea,c->f[0]);} // 8005902C
  c->lr=0x80059034u; f_8005A4F4(c); // 80059030
  c->lr=0x80059038u; f_800E3B98(c); // 80059034
  W16(c->r[27]+0x000001F6u,c->r[3]); // 80059038
  c->r[0]=0u+0x00000001u; // 8005903C
  W32(c->r[27]+0x000001F0u,c->r[0]); // 80059040
  c->lr=0x80059048u; f_8005A77C(c); // 80059044
  c->r[29]=c->r[3]|c->r[3]; // 80059048
  c->r[26]=0u+0x00000000u; // 8005904C
  c->r[31]=0u+0x00000000u; // 80059050
  goto L_80059134; // 80059054
L_80059058:;
  c->r[6]=R32(c->r[29]+0x00000000u); // 80059058
  c->r[3]=c->r[27]|c->r[27]; // 8005905C
  c->r[4]=c->r[1]+0x00000038u; // 80059060
  c->r[5]=c->r[1]+0x00000020u; // 80059064
  c->lr=0x8005906Cu; f_8004EB98(c); // 80059068
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005906C
  c->r[3]=c->r[26]|c->r[26]; // 80059070
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 80059074
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80059078
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8005907C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80059080
  c->r[5]=R32(c->r[1]+0x00000008u); // 80059084
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80059088
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8005908C
  c->r[0]=R32(c->r[1]+0x00000010u); // 80059090
  W32(c->r[1]+0x00000014u,c->r[5]); // 80059094
  W32(c->r[1]+0x00000018u,c->r[4]); // 80059098
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005909C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800590A0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800590A4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800590A8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 800590AC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800590B0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800590B4
  c->lr=0x800590BCu; f_8005A5A4(c); // 800590B8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800590BC
  c->r[3]=c->r[26]|c->r[26]; // 800590C0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800590C4
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800590C8
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 800590CC
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[3]);} // 800590D0
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 800590D4
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 800590D8
  W32(c->r[1]+0x00000078u,c->r[31]); // 800590DC
  c->lr=0x800590E4u; f_8005A6C4(c); // 800590E0
  W32(c->r[1]+0x00000080u,c->r[3]); // 800590E4
  c->r[3]=c->r[26]|c->r[26]; // 800590E8
  W32(c->r[1]+0x0000007Cu,c->r[26]); // 800590EC
  c->lr=0x800590F4u; f_8005A55C(c); // 800590F0
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 800590F4
  c->r[3]=c->r[26]|c->r[26]; // 800590F8
  c->lr=0x80059100u; f_8005A67C(c); // 800590FC
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[1]);} // 80059100
  c->r[3]=c->r[26]|c->r[26]; // 80059104
  c->lr=0x8005910Cu; f_8005A5EC(c); // 80059108
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[1]);} // 8005910C
  c->r[3]=c->r[26]|c->r[26]; // 80059110
  c->lr=0x80059118u; f_8005A634(c); // 80059114
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 80059118
  c->r[3]=c->r[28]|c->r[28]; // 8005911C
  c->r[4]=c->r[1]+0x00000068u; // 80059120
  c->lr=0x80059128u; f_80053F28(c); // 80059124
  c->r[29]=c->r[29]+0x00000004u; // 80059128
  c->r[28]=c->r[28]+0x0000024Cu; // 8005912C
  c->r[26]=c->r[26]+0x00000001u; // 80059130
L_80059134:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[30]); // 80059134
  if (crb(c,0)) { IRQCHK(c); goto L_80059058; } // 80059138
  c->r[11]=c->r[1]+0x000000B0u; // 8005913C
  c->lr=0x80059144u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80059140
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80059144
  c->lr=c->r[0]; // 80059148
  c->r[1]=c->r[1]+0x000000B0u; // 8005914C
  return; // 80059150
}

// fn_80059154
void f_80059154(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80059154
  c->r[0]=c->lr; // 80059158
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005915C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80059160
  c->r[31]=c->r[4]|c->r[4]; // 80059164
  W32(c->r[1]+0x00000018u,c->r[30]); // 80059168
  W32(c->r[1]+0x00000014u,c->r[29]); // 8005916C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80059170
  c->lr=0x80059178u; f_80059E7C(c); // 80059174
  c->r[30]=c->r[3]|c->r[3]; // 80059178
  c->r[3]=0u+0x00000000u; // 8005917C
  c->lr=0x80059184u; f_80059E84(c); // 80059180
  c->r[29]=c->r[3]|c->r[3]; // 80059184
  c->lr=0x8005918Cu; f_8007AB30(c); // 80059188
  c->lr=0x80059190u; f_800782B8(c); // 8005918C
  cmps(c,0,(int32_t)c->r[3],6); // 80059190
  c->r[28]=c->r[3]|c->r[3]; // 80059194
  if (crb(c,0)) { goto L_800591A0; } // 80059198
  c->r[28]=0u+0x00000006u; // 8005919C
L_800591A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800591A0
  c->lr=0x800591A8u; f_800E2B28(c); // 800591A4
  c->r[3]=c->r[30]|c->r[30]; // 800591A8
  c->r[4]=c->r[31]|c->r[31]; // 800591AC
  c->r[5]=0u+0x00000001u; // 800591B0
  c->lr=0x800591B8u; f_800E2B38(c); // 800591B4
  c->r[31]=c->r[3]|c->r[3]; // 800591B8
  c->r[3]=c->r[29]|c->r[29]; // 800591BC
  c->lr=0x800591C4u; f_800DE394(c); // 800591C0
  c->r[0]=c->r[28]+0x00000001u; // 800591C4
  c->r[3]=c->r[29]|c->r[29]; // 800591C8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800591CC
  c->r[4]=c->r[31]|c->r[31]; // 800591D0
  c->r[5]=c->r[1]+0x00000008u; // 800591D4
  c->r[6]=0u+0x00000001u; // 800591D8
  c->r[7]=0u+0x00000010u; // 800591DC
  c->r[8]=0u+0x00000008u; // 800591E0
  c->r[9]=0u+0x00000001u; // 800591E4
  c->lr=0x800591ECu; f_800DE3CC(c); // 800591E8
  c->r[31]=c->r[3]|c->r[3]; // 800591EC
  c->r[3]=c->r[30]|c->r[30]; // 800591F0
  c->r[5]=c->r[29]|c->r[29]; // 800591F4
  c->r[7]=c->r[28]+0x00000001u; // 800591F8
  c->r[4]=0u+0x00000000u; // 800591FC
  c->r[6]=0u+0x00000000u; // 80059200
  c->lr=0x80059208u; f_800E2BB8(c); // 80059204
  c->r[3]=c->r[30]|c->r[30]; // 80059208
  c->r[4]=0u+0x00000000u; // 8005920C
  c->lr=0x80059214u; f_800E2E18(c); // 80059210
  c->r[4]=0u+0x00000000u; // 80059214
  c->lr=0x8005921Cu; f_800E240C(c); // 80059218
  c->r[3]=c->r[31]|c->r[31]; // 8005921C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80059220
  c->r[30]=R32(c->r[1]+0x00000018u); // 80059224
  c->r[29]=R32(c->r[1]+0x00000014u); // 80059228
  c->r[28]=R32(c->r[1]+0x00000010u); // 8005922C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80059230
  c->lr=c->r[0]; // 80059234
  c->r[1]=c->r[1]+0x00000020u; // 80059238
  return; // 8005923C
}

// fn_80059240
void f_80059240(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80059240
  c->r[0]=c->lr; // 80059244
  W32(c->r[1]+0x00000064u,c->r[0]); // 80059248
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8005924C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80059250
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80059254
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80059258
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 8005925C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 80059260
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[28]);} // 80059264
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,28,ea,0,0);} // 80059268
  c->r[11]=c->r[1]+0x00000020u; // 8005926C
  c->lr=0x80059274u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80059270
  c->r[29]=c->r[4]|c->r[4]; // 80059274
  c->r[3]=0u+0x00000000u; // 80059278
  c->lr=0x80059280u; f_80059E48(c); // 8005927C
  c->lr=0x80059284u; f_8007AB30(c); // 80059280
  c->r[30]=c->r[3]|c->r[3]; // 80059284
  c->r[3]=0u+0x00000000u; // 80059288
  c->lr=0x80059290u; f_80059E20(c); // 8005928C
  c->r[31]=c->r[3]|c->r[3]; // 80059290
  c->lr=0x80059298u; f_8005A528(c); // 80059294
  c->r[28]=c->r[3]|c->r[3]; // 80059298
  c->r[3]=c->r[30]|c->r[30]; // 8005929C
  c->r[27]=0u+0x00000000u; // 800592A0
  c->r[30]=0u+0x00000000u; // 800592A4
  c->lr=0x800592ACu; f_8007A1E8(c); // 800592A8
  cmps(c,0,(int32_t)c->r[3],0); // 800592AC
  if (!crb(c,2)) { goto L_800592E8; } // 800592B0
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800592B4
  c->r[30]=R32(c->r[29]+0x00000004u); // 800592B8
  cmps(c,0,(int32_t)c->r[0],0); // 800592BC
  c->r[27]=R32(c->r[29]+0x00000000u); // 800592C0
  if (crb(c,2)) { goto L_800592D0; } // 800592C4
  c->r[3]=0u+0x00010000u; // 800592C8
  c->lr=0x800592D0u; f_800EFD50(c); // 800592CC
L_800592D0:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800592D0
  cmps(c,0,(int32_t)c->r[0],0); // 800592D4
  if (crb(c,2)) { goto L_800592E8; } // 800592D8
  c->r[3]=0u+0x00010000u; // 800592DC
  c->r[3]=c->r[3]+0x00000001u; // 800592E0
  c->lr=0x800592E8u; f_800EFD50(c); // 800592E4
L_800592E8:;
  {uint32_t ea=c->r[2]+0xFFFF8C58u; c->f[28]=c->ps1[28]=RF32(ea);} // 800592E8
  c->r[26]=0u+0x00000000u; // 800592EC
  {uint32_t ea=c->r[2]+0xFFFF8C60u; c->f[29]=c->ps1[29]=RF32(ea);} // 800592F0
  goto L_80059518; // 800592F4
L_800592F8:;
  c->r[3]=c->r[31]|c->r[31]; // 800592F8
  c->lr=0x80059300u; f_80053F18(c); // 800592FC
  c->r[3]=c->r[31]|c->r[31]; // 80059300
  c->lr=0x80059308u; f_80053EF0(c); // 80059304
  c->f[30]=c->f[1]; // 80059308
  c->r[3]=c->r[31]|c->r[31]; // 8005930C
  c->lr=0x80059314u; f_80053EF8(c); // 80059310
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[1]); // 80059314
  fcmp(c,0,c->f[0],c->f[28]); // 80059318
  if (!crb(c,0)) { goto L_80059324; } // 8005931C
  c->f[0]=-c->f[0]; // 80059320
L_80059324:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80059324
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[29]); // 80059328
  c->r[3]=c->r[31]|c->r[31]; // 8005932C
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 80059330
  c->ctr=c->r[12]; // 80059334
  if (true) { c->lr=0x8005933Cu; dispatch(c,c->ctr); } // 80059338
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[1]); // 8005933C
  c->r[3]=c->r[31]|c->r[31]; // 80059340
  c->lr=0x80059348u; f_80053F20(c); // 80059344
  cmps(c,0,(int32_t)c->r[3],1); // 80059348
  if (!crb(c,2)) { goto L_800593C0; } // 8005934C
  cmps(c,0,(int32_t)c->r[30],0); // 80059350
  if (crb(c,2)) { goto L_800593B0; } // 80059354
  c->r[3]=R32(c->r[31]+0x00000220u); // 80059358
  c->r[0]=0u-c->r[3]; // 8005935C
  c->r[0]=c->r[0]|c->r[3]; // 80059360
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80059364
  cmps(c,0,(int32_t)c->r[0],1); // 80059368
  if (!crb(c,2)) { goto L_800593A0; } // 8005936C
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80059370
  cmps(c,0,(int32_t)c->r[0],0); // 80059374
  if (crb(c,2)) { goto L_8005939C; } // 80059378
  c->r[3]=R32(c->r[31]+0x00000224u); // 8005937C
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 80059380
  if (!crb(c,0)) { goto L_8005938C; } // 80059384
  c->r[3]=0u+0x00000000u; // 80059388
L_8005938C:;
  W32(c->r[31]+0x00000224u,c->r[3]); // 8005938C
  c->r[3]=c->r[31]|c->r[31]; // 80059390
  c->lr=0x80059398u; f_800557D4(c); // 80059394
  goto L_800593A0; // 80059398
L_8005939C:;
  {uint32_t ea=c->r[2]+0xFFFF8C58u; c->f[30]=c->ps1[30]=RF32(ea);} // 8005939C
L_800593A0:;
  c->f[1]=c->f[30]; // 800593A0
  c->r[3]=c->r[31]|c->r[31]; // 800593A4
  c->lr=0x800593ACu; f_80053F00(c); // 800593A8
  goto L_80059440; // 800593AC
L_800593B0:;
  c->f[1]=-c->f[30]; // 800593B0
  c->r[3]=c->r[31]|c->r[31]; // 800593B4
  c->lr=0x800593BCu; f_80053F00(c); // 800593B8
  goto L_80059440; // 800593BC
L_800593C0:;
  c->r[3]=c->r[31]|c->r[31]; // 800593C0
  c->lr=0x800593C8u; f_80053F20(c); // 800593C4
  cmps(c,0,(int32_t)c->r[3],0); // 800593C8
  if (!crb(c,2)) { goto L_80059440; } // 800593CC
  cmps(c,0,(int32_t)c->r[27],0); // 800593D0
  if (crb(c,2)) { goto L_80059434; } // 800593D4
  c->r[3]=R32(c->r[31]+0x00000220u); // 800593D8
  c->f[30]=-c->f[30]; // 800593DC
  c->r[0]=0u-c->r[3]; // 800593E0
  c->r[0]=c->r[0]|c->r[3]; // 800593E4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800593E8
  cmps(c,0,(int32_t)c->r[0],1); // 800593EC
  if (!crb(c,2)) { goto L_80059424; } // 800593F0
  c->r[0]=R32(c->r[29]+0x00000008u); // 800593F4
  cmps(c,0,(int32_t)c->r[0],0); // 800593F8
  if (crb(c,2)) { goto L_80059420; } // 800593FC
  c->r[3]=R32(c->r[31]+0x00000224u); // 80059400
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 80059404
  if (!crb(c,0)) { goto L_80059410; } // 80059408
  c->r[3]=0u+0x00000000u; // 8005940C
L_80059410:;
  W32(c->r[31]+0x00000224u,c->r[3]); // 80059410
  c->r[3]=c->r[31]|c->r[31]; // 80059414
  c->lr=0x8005941Cu; f_800557D4(c); // 80059418
  goto L_80059424; // 8005941C
L_80059420:;
  {uint32_t ea=c->r[2]+0xFFFF8C58u; c->f[30]=c->ps1[30]=RF32(ea);} // 80059420
L_80059424:;
  c->f[1]=c->f[30]; // 80059424
  c->r[3]=c->r[31]|c->r[31]; // 80059428
  c->lr=0x80059430u; f_80053F00(c); // 8005942C
  goto L_80059440; // 80059430
L_80059434:;
  c->f[1]=c->f[30]; // 80059434
  c->r[3]=c->r[31]|c->r[31]; // 80059438
  c->lr=0x80059440u; f_80053F00(c); // 8005943C
L_80059440:;
  c->r[3]=c->r[31]|c->r[31]; // 80059440
  c->lr=0x80059448u; f_80053F18(c); // 80059444
  c->f[31]=c->f[1]; // 80059448
  c->r[3]=c->r[31]|c->r[31]; // 8005944C
  c->lr=0x80059454u; f_80053F08(c); // 80059450
  c->f[30]=c->f[1]; // 80059454
  c->r[3]=c->r[31]|c->r[31]; // 80059458
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[1]); // 8005945C
  c->lr=0x80059464u; f_80053F10(c); // 80059460
  c->r[3]=c->r[31]|c->r[31]; // 80059464
  c->lr=0x8005946Cu; f_80053EF0(c); // 80059468
  c->f[31]=c->f[1]; // 8005946C
  c->r[3]=c->r[31]|c->r[31]; // 80059470
  c->lr=0x80059478u; f_80053F18(c); // 80059474
  fcmp(c,0,c->f[1],c->f[31]); // 80059478
  if (!crb(c,1)) { goto L_800594BC; } // 8005947C
  c->r[3]=c->r[31]|c->r[31]; // 80059480
  c->lr=0x80059488u; f_80053EF0(c); // 80059484
  c->f[31]=c->f[1]; // 80059488
  c->r[3]=c->r[31]|c->r[31]; // 8005948C
  c->lr=0x80059494u; f_80053F18(c); // 80059490
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[31]); // 80059494
  c->r[3]=c->r[31]|c->r[31]; // 80059498
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[0]); // 8005949C
  c->lr=0x800594A4u; f_80053EF0(c); // 800594A0
  c->r[3]=c->r[31]|c->r[31]; // 800594A4
  c->lr=0x800594ACu; f_80053F10(c); // 800594A8
  c->f[1]=c->f[30]; // 800594AC
  c->r[3]=c->r[31]|c->r[31]; // 800594B0
  c->lr=0x800594B8u; f_80053F00(c); // 800594B4
  goto L_80059510; // 800594B8
L_800594BC:;
  c->r[3]=c->r[31]|c->r[31]; // 800594BC
  c->lr=0x800594C4u; f_80053EF8(c); // 800594C0
  c->f[31]=c->f[1]; // 800594C4
  c->r[3]=c->r[31]|c->r[31]; // 800594C8
  c->lr=0x800594D0u; f_80053F18(c); // 800594CC
  fcmp(c,0,c->f[1],c->f[31]); // 800594D0
  if (!crb(c,0)) { goto L_80059510; } // 800594D4
  c->r[3]=c->r[31]|c->r[31]; // 800594D8
  c->lr=0x800594E0u; f_80053F18(c); // 800594DC
  c->f[31]=c->f[1]; // 800594E0
  c->r[3]=c->r[31]|c->r[31]; // 800594E4
  c->lr=0x800594ECu; f_80053EF8(c); // 800594E8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[31]); // 800594EC
  c->r[3]=c->r[31]|c->r[31]; // 800594F0
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[0]); // 800594F4
  c->lr=0x800594FCu; f_80053EF8(c); // 800594F8
  c->r[3]=c->r[31]|c->r[31]; // 800594FC
  c->lr=0x80059504u; f_80053F10(c); // 80059500
  c->f[1]=c->f[30]; // 80059504
  c->r[3]=c->r[31]|c->r[31]; // 80059508
  c->lr=0x80059510u; f_80053F00(c); // 8005950C
L_80059510:;
  c->r[31]=c->r[31]+0x0000024Cu; // 80059510
  c->r[26]=c->r[26]+0x00000001u; // 80059514
L_80059518:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[28]); // 80059518
  if (crb(c,0)) { IRQCHK(c); goto L_800592F8; } // 8005951C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80059520
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80059524
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80059528
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8005952C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 80059530
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 80059534
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,28,ea,0,0);} // 80059538
  c->r[11]=c->r[1]+0x00000020u; // 8005953C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[28]=RF64(ea);} // 80059540
  c->lr=0x80059548u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80059544
  c->r[0]=R32(c->r[1]+0x00000064u); // 80059548
  c->lr=c->r[0]; // 8005954C
  c->r[1]=c->r[1]+0x00000060u; // 80059550
  return; // 80059554
}

// fn_80059558
void f_80059558(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80059558
  c->r[0]=c->lr; // 8005955C
  W32(c->r[1]+0x00000114u,c->r[0]); // 80059560
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 80059564
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 80059568
  c->r[11]=c->r[1]+0x00000100u; // 8005956C
  c->lr=0x80059574u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80059570
  c->r[23]=c->r[3]|c->r[3]; // 80059574
  c->r[3]=0u+0x00000000u; // 80059578
  c->lr=0x80059580u; f_80059E48(c); // 8005957C
  c->r[3]=0u+0x00000000u; // 80059580
  c->lr=0x80059588u; f_80059E20(c); // 80059584
  c->r[5]=0u+0x80270000u; // 80059588
  {uint32_t ea=c->r[5]+0x0000223Cu; c->r[4]=R32(ea); c->r[5]=ea;} // 8005958C
  c->r[26]=c->r[3]|c->r[3]; // 80059590
  c->r[3]=R32(c->r[5]+0x00000004u); // 80059594
  c->r[0]=R32(c->r[5]+0x00000008u); // 80059598
  W32(c->r[1]+0x00000030u,c->r[4]); // 8005959C
  W32(c->r[1]+0x00000034u,c->r[3]); // 800595A0
  W32(c->r[1]+0x00000038u,c->r[0]); // 800595A4
  c->lr=0x800595ACu; f_8005A77C(c); // 800595A8
  c->r[0]=0u+0x00000000u; // 800595AC
  c->r[25]=c->r[3]|c->r[3]; // 800595B0
  W32(c->r[1]+0x00000020u,c->r[0]); // 800595B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800595B8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800595BC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800595C0
  c->lr=0x800595C8u; f_8005A528(c); // 800595C4
  c->r[30]=c->r[3]|c->r[3]; // 800595C8
  c->r[3]=0u+0x00000004u; // 800595CC
  c->lr=0x800595D4u; f_80059E20(c); // 800595D0
  c->r[24]=c->r[3]|c->r[3]; // 800595D4
  c->r[3]=0u+0x00000000u; // 800595D8
  c->lr=0x800595E0u; f_80059E68(c); // 800595DC
  {uint32_t ea=c->r[2]+0xFFFF8C64u; c->f[31]=c->ps1[31]=RF32(ea);} // 800595E0
  c->r[31]=c->r[3]|c->r[3]; // 800595E4
  c->r[29]=c->r[26]|c->r[26]; // 800595E8
  c->r[28]=c->r[1]+0x00000020u; // 800595EC
  c->r[27]=0u+0x00000000u; // 800595F0
  goto L_800596B0; // 800595F4
L_800595F8:;
  c->r[6]=R32(c->r[25]+0x00000000u); // 800595F8
  c->r[3]=c->r[24]|c->r[24]; // 800595FC
  c->r[4]=c->r[1]+0x000000A8u; // 80059600
  c->r[5]=c->r[1]+0x00000030u; // 80059604
  c->lr=0x8005960Cu; f_8004EB98(c); // 80059608
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005960C
  c->r[3]=c->r[1]+0x00000078u; // 80059610
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80059614
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80059618
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8005961C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80059620
  c->r[5]=R32(c->r[1]+0x00000008u); // 80059624
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80059628
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8005962C
  c->r[0]=R32(c->r[1]+0x00000010u); // 80059630
  W32(c->r[1]+0x00000014u,c->r[5]); // 80059634
  W32(c->r[1]+0x00000018u,c->r[4]); // 80059638
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005963C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80059640
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80059644
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80059648
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 8005964C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 80059650
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 80059654
  c->lr=0x8005965Cu; f_80163E9C(c); // 80059658
  c->r[3]=c->r[29]|c->r[29]; // 8005965C
  c->lr=0x80059664u; f_80053F18(c); // 80059660
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80059664
  c->r[3]=c->r[1]+0x00000048u; // 80059668
  c->r[4]=0u+0x00000079u; // 8005966C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80059670
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 80059674
  c->lr=0x8005967Cu; f_80163C44(c); // 80059678
  c->r[3]=c->r[1]+0x00000078u; // 8005967C
  c->r[4]=c->r[1]+0x00000048u; // 80059680
  c->r[5]=c->r[1]+0x000000A8u; // 80059684
  c->lr=0x8005968Cu; f_80163898(c); // 80059688
  c->r[6]=R32(c->r[25]+0x00000000u); // 8005968C
  c->r[3]=c->r[24]|c->r[24]; // 80059690
  c->r[4]=c->r[1]+0x000000A8u; // 80059694
  c->r[5]=c->r[1]+0x00000030u; // 80059698
  c->lr=0x800596A0u; f_8004EC0C(c); // 8005969C
  c->r[25]=c->r[25]+0x00000004u; // 800596A0
  c->r[29]=c->r[29]+0x0000024Cu; // 800596A4
  c->r[28]=c->r[28]+0x00000004u; // 800596A8
  c->r[27]=c->r[27]+0x00000001u; // 800596AC
L_800596B0:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[30]); // 800596B0
  if (crb(c,0)) { IRQCHK(c); goto L_800595F8; } // 800596B4
  c->r[3]=R32(c->r[31]+0x00000000u); // 800596B8
  c->lr=0x800596C0u; f_80057864(c); // 800596BC
  c->r[4]=c->r[3]|c->r[3]; // 800596C0
  c->r[3]=c->r[23]|c->r[23]; // 800596C4
  c->lr=0x800596CCu; f_80059240(c); // 800596C8
  c->r[28]=0u+0x00000000u; // 800596CC
  goto L_800596F0; // 800596D0
L_800596D4:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 800596D4
  c->r[3]=c->r[26]|c->r[26]; // 800596D8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800596DC
  c->ctr=c->r[12]; // 800596E0
  if (true) { c->lr=0x800596E8u; dispatch(c,c->ctr); } // 800596E4
  c->r[26]=c->r[26]+0x0000024Cu; // 800596E8
  c->r[28]=c->r[28]+0x00000001u; // 800596EC
L_800596F0:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[30]); // 800596F0
  if (crb(c,0)) { IRQCHK(c); goto L_800596D4; } // 800596F4
  c->r[12]=R32(c->r[24]+0x00000000u); // 800596F8
  c->r[3]=c->r[24]|c->r[24]; // 800596FC
  c->r[12]=R32(c->r[12]+0x00000034u); // 80059700
  c->ctr=c->r[12]; // 80059704
  if (true) { c->lr=0x8005970Cu; dispatch(c,c->ctr); } // 80059708
  c->lr=0x80059710u; f_80059E7C(c); // 8005970C
  c->r[24]=c->r[3]|c->r[3]; // 80059710
  c->r[3]=0u+0x00000000u; // 80059714
  c->lr=0x8005971Cu; f_80059E84(c); // 80059718
  c->r[25]=c->r[3]|c->r[3]; // 8005971C
  c->lr=0x80059724u; f_80013AA4(c); // 80059720
  c->f[31]=c->f[1]; // 80059724
  c->lr=0x8005972Cu; f_800076EC(c); // 80059728
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[1]); // 8005972C
  c->r[3]=c->r[24]|c->r[24]; // 80059730
  c->lr=0x80059738u; f_800E2E44(c); // 80059734
  c->f[1]=c->f[31]; // 80059738
  c->r[3]=c->r[25]|c->r[25]; // 8005973C
  c->lr=0x80059744u; f_800DF65C(c); // 80059740
  c->r[3]=c->r[24]|c->r[24]; // 80059744
  c->lr=0x8005974Cu; f_800E3600(c); // 80059748
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 8005974C
  c->r[11]=c->r[1]+0x00000100u; // 80059750
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 80059754
  c->lr=0x8005975Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80059758
  c->r[0]=R32(c->r[1]+0x00000114u); // 8005975C
  c->lr=c->r[0]; // 80059760
  c->r[1]=c->r[1]+0x00000110u; // 80059764
  return; // 80059768
}

// fn_8005976C
void f_8005976C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005976C
  c->r[0]=c->lr; // 80059770
  c->r[3]=0u+0x00000004u; // 80059774
  W32(c->r[1]+0x00000014u,c->r[0]); // 80059778
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005977C
  c->r[31]=c->r[4]|c->r[4]; // 80059780
  c->lr=0x80059788u; f_80059E20(c); // 80059784
  c->r[12]=R32(c->r[3]+0x00000000u); // 80059788
  c->r[4]=c->r[31]|c->r[31]; // 8005978C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80059790
  c->ctr=c->r[12]; // 80059794
  if (true) { c->lr=0x8005979Cu; dispatch(c,c->ctr); } // 80059798
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005979C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800597A0
  c->lr=c->r[0]; // 800597A4
  c->r[1]=c->r[1]+0x00000010u; // 800597A8
  return; // 800597AC
}

// fn_800597B0
void f_800597B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800597B0
  c->r[0]=c->lr; // 800597B4
  c->r[3]=0u+0x00000004u; // 800597B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800597BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800597C0
  c->r[31]=c->r[4]|c->r[4]; // 800597C4
  c->lr=0x800597CCu; f_80059E20(c); // 800597C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800597CC
  c->r[4]=c->r[31]|c->r[31]; // 800597D0
  c->r[12]=R32(c->r[12]+0x00000024u); // 800597D4
  c->ctr=c->r[12]; // 800597D8
  if (true) { c->lr=0x800597E0u; dispatch(c,c->ctr); } // 800597DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800597E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800597E4
  c->lr=c->r[0]; // 800597E8
  c->r[1]=c->r[1]+0x00000010u; // 800597EC
  return; // 800597F0
}

// fn_800597F4
void f_800597F4(Ctx* __restrict c) {
  c->r[3]=c->r[4]|c->r[4]; // 800597F4
  f_80059E20(c); return; // 800597F8
}

// fn_800597FC
void f_800597FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800597FC
  c->r[0]=c->lr; // 80059800
  c->r[4]=0u+0x00000000u; // 80059804
  c->r[5]=0u+0x00000010u; // 80059808
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005980C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80059810
  c->r[31]=c->r[3]|c->r[3]; // 80059814
  c->lr=0x8005981Cu; f_8000443C(c); // 80059818
  c->r[3]=c->r[31]|c->r[31]; // 8005981C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80059820
  c->r[0]=R32(c->r[1]+0x00000014u); // 80059824
  c->lr=c->r[0]; // 80059828
  c->r[1]=c->r[1]+0x00000010u; // 8005982C
  return; // 80059830
}

// fn_80059834
void f_80059834(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80059834
  c->r[0]=c->lr; // 80059838
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005983C
  c->r[11]=c->r[1]+0x00000020u; // 80059840
  c->lr=0x80059848u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80059844
  c->r[29]=c->r[3]|c->r[3]; // 80059848
  c->r[4]=0u+0x00000000u; // 8005984C
  c->r[5]=0u+0x00000010u; // 80059850
  c->lr=0x80059858u; f_8000443C(c); // 80059854
  c->r[30]=0u+0x802F0000u; // 80059858
  c->r[30]=c->r[30]+0x00002E50u; // 8005985C
  c->r[3]=c->r[30]|c->r[30]; // 80059860
  c->lr=0x80059868u; f_8001394C(c); // 80059864
  c->r[28]=0u+0x00000001u; // 80059868
  c->r[27]=0u+0xFFFFFFFFu; // 8005986C
  c->r[3]=0u+0x00000000u; // 80059870
  c->lr=0x80059878u; f_80059E34(c); // 80059874
  W32(c->r[29]+0x00000000u,c->r[3]); // 80059878
  c->r[31]=c->r[3]|c->r[3]; // 8005987C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80059880
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80059884
  c->ctr=c->r[12]; // 80059888
  if (true) { c->lr=0x80059890u; dispatch(c,c->ctr); } // 8005988C
  c->r[0]=R32(c->r[30]+0x00000000u); // 80059890
  c->r[3]=c->r[31]|c->r[31]; // 80059894
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)17280); // 80059898
  c->r[4]=c->r[30]+c->r[0]; // 8005989C
  c->r[4]=c->r[4]+0x00000018u; // 800598A0
  c->lr=0x800598A8u; f_80056304(c); // 800598A4
  c->r[3]=c->r[31]|c->r[31]; // 800598A8
  c->lr=0x800598B0u; f_8005677C(c); // 800598AC
  W32(c->r[31]+0x00000198u,c->r[27]); // 800598B0
  c->r[6]=0u+0x00000007u; // 800598B4
  c->r[8]=c->r[31]|c->r[31]; // 800598B8
  c->r[9]=c->r[31]|c->r[31]; // 800598BC
  W32(c->r[31]+0x000001B4u,c->r[27]); // 800598C0
  c->r[3]=0u+0x00000000u; // 800598C4
  c->r[7]=0u+0x0000000Eu; // 800598C8
  W32(c->r[31]+0x0000019Cu,c->r[27]); // 800598CC
  W32(c->r[31]+0x000001B8u,c->r[27]); // 800598D0
  W32(c->r[31]+0x000001A0u,c->r[27]); // 800598D4
  W32(c->r[31]+0x000001BCu,c->r[27]); // 800598D8
  W32(c->r[31]+0x000001A4u,c->r[27]); // 800598DC
  W32(c->r[31]+0x000001C0u,c->r[27]); // 800598E0
  W32(c->r[31]+0x000001A8u,c->r[27]); // 800598E4
  W32(c->r[31]+0x000001C4u,c->r[27]); // 800598E8
  W32(c->r[31]+0x000001ACu,c->r[27]); // 800598EC
  W32(c->r[31]+0x000001C8u,c->r[27]); // 800598F0
  W32(c->r[31]+0x000001B0u,c->r[27]); // 800598F4
  W32(c->r[31]+0x000001CCu,c->r[27]); // 800598F8
  c->ctr=c->r[6]; // 800598FC
L_80059900:;
  c->r[5]=R32(c->r[30]+0x00000000u); // 80059900
  c->r[4]=rotl(c->r[6],0)&0x0000001Fu; // 80059904
  c->r[0]=rotl(c->r[6],29)&0x1FFFFFFCu; // 80059908
  c->r[10]=(uint32_t)((int32_t)c->r[5]*(int32_t)17280); // 8005990C
  c->r[5]=((c->r[4])&0x20)?0u:(c->r[28]<<((c->r[4])&31)); // 80059910
  c->r[10]=c->r[30]+c->r[10]; // 80059914
  c->r[4]=c->r[10]+c->r[0]; // 80059918
  c->r[0]=R32(c->r[4]+0x00004364u); // 8005991C
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 80059920
  if (crb(c,2)) { goto L_80059960; } // 80059924
  c->r[0]=rotl(c->r[7],29)&0x1FFFFFFCu; // 80059928
  c->r[5]=rotl(c->r[7],0)&0x0000001Fu; // 8005992C
  c->r[4]=c->r[10]+c->r[0]; // 80059930
  c->r[0]=R32(c->r[4]+0x00004364u); // 80059934
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[28]<<((c->r[5])&31)); // 80059938
  c->r[4]=c->r[4]&c->r[0]; // 8005993C
  c->r[0]=0u-c->r[4]; // 80059940
  c->r[0]=c->r[0]|c->r[4]; // 80059944
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80059948
  cmps(c,0,(int32_t)c->r[0],1); // 8005994C
  if (!crb(c,2)) { goto L_80059958; } // 80059950
  W32(c->r[8]+0x00000198u,c->r[28]); // 80059954
L_80059958:;
  W32(c->r[9]+0x000001B4u,c->r[3]); // 80059958
  c->r[9]=c->r[9]+0x00000004u; // 8005995C
L_80059960:;
  c->r[6]=c->r[6]+0x00000001u; // 80059960
  c->r[7]=c->r[7]+0x00000001u; // 80059964
  c->r[8]=c->r[8]+0x00000004u; // 80059968
  c->r[3]=c->r[3]+0x00000001u; // 8005996C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80059900; } // 80059970
  c->r[0]=R32(c->r[30]+0x00000000u); // 80059974
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)17280); // 80059978
  c->r[3]=c->r[0]+c->r[30]; // 8005997C
  c->r[0]=R32(c->r[3]+0x00000038u); // 80059980
  W32(c->r[31]+0x00000194u,c->r[0]); // 80059984
  c->lr=0x8005998Cu; f_800567B8(c); // 80059988
  W32(c->r[31]+0x000001ECu,c->r[3]); // 8005998C
  c->r[0]=R16(c->r[13]+0xFFFFA568u); // 80059990
  c->r[0]=rotl(c->r[0],17)&0x00000001u; cr0(c,c->r[0]); // 80059994
  if (crb(c,2)) { goto L_80059A14; } // 80059998
  c->r[0]=R32(c->r[13]+0xFFFFA558u); // 8005999C
  cmps(c,0,(int32_t)c->r[0],0); // 800599A0
  if (!crb(c,2)) { goto L_80059A14; } // 800599A4
  c->r[3]=0u+0x00000000u; // 800599A8
  c->lr=0x800599B0u; f_80059E34(c); // 800599AC
  c->r[0]=R8(c->r[13]+0xFFFFA598u); // 800599B0
  c->r[27]=c->r[29]+0x00000004u; // 800599B4
  c->r[31]=0u+0x00000001u; // 800599B8
  c->r[28]=0u+0x00000000u; // 800599BC
  W32(c->r[3]+0x0000047Cu,c->r[0]); // 800599C0
  c->r[26]=c->r[13]+0xFFFF8468u; // 800599C4
  c->r[30]=R32(c->r[13]+0xFFFFA594u); // 800599C8
  goto L_80059A0C; // 800599CC
L_800599D0:;
  c->r[0]=R8(c->r[13]+0xFFFFA598u); // 800599D0
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 800599D4
  if (crb(c,2)) { goto L_80059A08; } // 800599D8
  c->r[3]=c->r[31]|c->r[31]; // 800599DC
  c->lr=0x800599E4u; f_80059E34(c); // 800599E0
  W32(c->r[27]+0x00000000u,c->r[3]); // 800599E4
  c->r[29]=c->r[3]|c->r[3]; // 800599E8
  c->lr=0x800599F0u; f_8005677C(c); // 800599EC
  c->r[3]=c->r[29]|c->r[29]; // 800599F0
  c->r[4]=c->r[26]|c->r[26]; // 800599F4
  c->lr=0x800599FCu; f_80056304(c); // 800599F8
  W32(c->r[29]+0x0000047Cu,c->r[28]); // 800599FC
  c->r[27]=c->r[27]+0x00000004u; // 80059A00
  c->r[31]=c->r[31]+0x00000001u; // 80059A04
L_80059A08:;
  c->r[28]=c->r[28]+0x00000001u; // 80059A08
L_80059A0C:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[30]); // 80059A0C
  if (crb(c,0)) { IRQCHK(c); goto L_800599D0; } // 80059A10
L_80059A14:;
  c->r[11]=c->r[1]+0x00000020u; // 80059A14
  c->lr=0x80059A1Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80059A18
  c->r[0]=R32(c->r[1]+0x00000024u); // 80059A1C
  c->lr=c->r[0]; // 80059A20
  c->r[1]=c->r[1]+0x00000020u; // 80059A24
  return; // 80059A28
}

// fn_80059A2C
void f_80059A2C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 80059A2C
  cmps(c,0,(int32_t)c->r[3],0); // 80059A30
  if (crb(c,2)) return; // 80059A34
  c->r[12]=R32(c->r[3]+0x00000000u); // 80059A38
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80059A3C
  c->ctr=c->r[12]; // 80059A40
  if (true) { dispatch(c,c->ctr); return; } // 80059A44
  return; // 80059A48
}

// fn_80059A4C
void f_80059A4C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80059A4C
  c->r[4]=0u+0x00000000u; // 80059A50
  cmps(c,0,(int32_t)c->r[0],0); // 80059A54
  if (crb(c,2)) { goto L_80059A60; } // 80059A58
  c->r[4]=0u+0x00000001u; // 80059A5C
L_80059A60:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80059A60
  cmps(c,0,(int32_t)c->r[0],0); // 80059A64
  if (crb(c,2)) { goto L_80059A70; } // 80059A68
  c->r[4]=c->r[4]+0x00000001u; // 80059A6C
L_80059A70:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 80059A70
  cmps(c,0,(int32_t)c->r[0],0); // 80059A74
  if (crb(c,2)) { goto L_80059A80; } // 80059A78
  c->r[4]=c->r[4]+0x00000001u; // 80059A7C
L_80059A80:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80059A80
  cmps(c,0,(int32_t)c->r[0],0); // 80059A84
  if (crb(c,2)) { goto L_80059A90; } // 80059A88
  c->r[4]=c->r[4]+0x00000001u; // 80059A8C
L_80059A90:;
  c->r[3]=c->r[4]|c->r[4]; // 80059A90
  return; // 80059A94
}

// fn_80059A98
void f_80059A98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80059A98
  c->r[0]=c->lr; // 80059A9C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80059AA0
  c->r[11]=c->r[1]+0x000000E0u; // 80059AA4
  c->lr=0x80059AACu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80059AA8
  c->r[30]=c->r[4]|c->r[4]; // 80059AAC
  c->r[3]=0u+0x00000000u; // 80059AB0
  c->lr=0x80059AB8u; f_80059E48(c); // 80059AB4
  {uint32_t ea=c->r[2]+0xFFFF8C58u; c->f[0]=c->ps1[0]=RF32(ea);} // 80059AB8
  c->r[4]=0u+0x802B0000u; // 80059ABC
  c->r[4]=c->r[4]+0xFFFFDF80u; // 80059AC0
  c->r[31]=c->r[3]|c->r[3]; // 80059AC4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80059AC8
  c->r[0]=0u+0x00000009u; // 80059ACC
  c->r[5]=c->r[1]+0x00000024u; // 80059AD0
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 80059AD4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80059AD8
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 80059ADC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80059AE0
  c->r[6]=R32(c->r[1]+0x00000010u); // 80059AE4
  c->r[3]=R32(c->r[1]+0x00000014u); // 80059AE8
  W32(c->r[1]+0x00000018u,c->r[7]); // 80059AEC
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 80059AF0
  W32(c->r[1]+0x00000020u,c->r[3]); // 80059AF4
  c->ctr=c->r[0]; // 80059AF8
L_80059AFC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80059AFC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80059B00
  W32(c->r[5]+0x00000004u,c->r[3]); // 80059B04
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80059B08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80059AFC; } // 80059B0C
  c->r[27]=R32(c->r[1]+0x00000034u); // 80059B10
  c->r[0]=0u+0x00000000u; // 80059B14
  c->r[28]=R32(c->r[1]+0x00000038u); // 80059B18
  cmps(c,0,(int32_t)c->r[30],0); // 80059B1C
  c->r[29]=R32(c->r[1]+0x0000003Cu); // 80059B20
  c->r[4]=0u+0x00000000u; // 80059B24
  c->r[12]=R32(c->r[1]+0x00000040u); // 80059B28
  c->r[11]=R32(c->r[1]+0x00000044u); // 80059B2C
  c->r[10]=R32(c->r[1]+0x00000048u); // 80059B30
  c->r[24]=R32(c->r[1]+0x00000028u); // 80059B34
  c->r[25]=R32(c->r[1]+0x0000002Cu); // 80059B38
  c->r[26]=R32(c->r[1]+0x00000030u); // 80059B3C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80059B40
  c->r[9]=R32(c->r[1]+0x00000054u); // 80059B44
  c->r[8]=R32(c->r[1]+0x00000058u); // 80059B48
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80059B4C
  c->r[7]=R32(c->r[1]+0x00000060u); // 80059B50
  c->r[6]=R32(c->r[1]+0x00000064u); // 80059B54
  c->r[5]=R32(c->r[1]+0x00000068u); // 80059B58
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 80059B5C
  W32(c->r[1]+0x0000007Cu,c->r[27]); // 80059B60
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80059B64
  W32(c->r[1]+0x00000088u,c->r[12]); // 80059B68
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80059B6C
  W32(c->r[1]+0x00000080u,c->r[28]); // 80059B70
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80059B74
  W32(c->r[1]+0x00000084u,c->r[29]); // 80059B78
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 80059B7C
  W32(c->r[1]+0x00000090u,c->r[10]); // 80059B80
  W32(c->r[1]+0x00000070u,c->r[24]); // 80059B84
  W32(c->r[1]+0x00000074u,c->r[25]); // 80059B88
  W32(c->r[1]+0x00000078u,c->r[26]); // 80059B8C
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[4]);} // 80059B90
  W32(c->r[1]+0x0000009Cu,c->r[9]); // 80059B94
  W32(c->r[1]+0x000000A0u,c->r[8]); // 80059B98
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[3]);} // 80059B9C
  W32(c->r[1]+0x000000A8u,c->r[7]); // 80059BA0
  W32(c->r[1]+0x000000ACu,c->r[6]); // 80059BA4
  W32(c->r[1]+0x000000B0u,c->r[5]); // 80059BA8
  W32(c->r[1]+0x000000B4u,c->r[3]); // 80059BAC
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[2]);} // 80059BB0
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[1]);} // 80059BB4
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 80059BB8
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 80059BBC
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 80059BC0
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 80059BC4
  W32(c->r[1]+0x00000098u,c->r[0]); // 80059BC8
  if (crb(c,2)) { goto L_80059C08; } // 80059BCC
  c->r[0]=R32(c->r[30]+0x00000008u); // 80059BD0
  cmps(c,0,(int32_t)c->r[0],4); // 80059BD4
  if (crb(c,2)) { goto L_80059BF0; } // 80059BD8
  if (!crb(c,0)) { goto L_80059BE4; } // 80059BDC
  goto L_80059C08; // 80059BE0
L_80059BE4:;
  cmps(c,0,(int32_t)c->r[0],6); // 80059BE4
  if (!crb(c,0)) { goto L_80059C08; } // 80059BE8
  goto L_80059BFC; // 80059BEC
L_80059BF0:;
  c->r[0]=0u+0x00000005u; // 80059BF0
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80059BF4
  goto L_80059C08; // 80059BF8
L_80059BFC:;
  c->r[0]=0u+0x00000009u; // 80059BFC
  c->r[4]=0u+0x00000001u; // 80059C00
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80059C04
L_80059C08:;
  c->r[3]=c->r[1]+0x00000070u; // 80059C08
  c->lr=0x80059C10u; f_8005A7B0(c); // 80059C0C
  W32(c->r[1]+0x000000B0u,c->r[3]); // 80059C10
  c->r[3]=c->r[31]|c->r[31]; // 80059C14
  c->r[4]=c->r[1]+0x00000008u; // 80059C18
  c->r[5]=R32(c->r[1]+0x000000ACu); // 80059C1C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80059C20
  c->r[12]=R32(c->r[12]+0x00000058u); // 80059C24
  c->ctr=c->r[12]; // 80059C28
  if (true) { c->lr=0x80059C30u; dispatch(c,c->ctr); } // 80059C2C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80059C30
  cmps(c,0,(int32_t)c->r[0],0); // 80059C34
  if (crb(c,2)) { goto L_80059C58; } // 80059C38
  W32(c->r[1]+0x000000A0u,c->r[3]); // 80059C3C
  c->r[3]=c->r[0]|c->r[0]; // 80059C40
  c->r[4]=c->r[1]+0x00000070u; // 80059C44
  c->r[12]=R32(c->r[3]+0x00000000u); // 80059C48
  c->r[12]=R32(c->r[12]+0x000000ECu); // 80059C4C
  c->ctr=c->r[12]; // 80059C50
  if (true) { c->lr=0x80059C58u; dispatch(c,c->ctr); } // 80059C54
L_80059C58:;
  c->r[11]=c->r[1]+0x000000E0u; // 80059C58
  c->r[3]=R32(c->r[1]+0x00000008u); // 80059C5C
  c->lr=0x80059C64u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80059C60
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80059C64
  c->lr=c->r[0]; // 80059C68
  c->r[1]=c->r[1]+0x000000E0u; // 80059C6C
  return; // 80059C70
}

// fn_80059C74
void f_80059C74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80059C74
  c->r[0]=c->lr; // 80059C78
  W32(c->r[1]+0x00000024u,c->r[0]); // 80059C7C
  c->r[11]=c->r[1]+0x00000020u; // 80059C80
  c->lr=0x80059C88u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80059C84
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80059C88
  c->r[26]=c->r[4]|c->r[4]; // 80059C8C
  c->r[5]=R32(c->r[3]+c->r[0]); // 80059C90
  cmps(c,0,(int32_t)c->r[5],0); // 80059C94
  if (!crb(c,2)) { goto L_80059CA4; } // 80059C98
  c->r[3]=0u+0xFFFFFFFFu; // 80059C9C
  goto L_80059CFC; // 80059CA0
L_80059CA4:;
  c->r[28]=R32(c->r[5]+0x0000018Cu); // 80059CA4
  c->r[30]=c->r[3]|c->r[3]; // 80059CA8
  c->r[29]=0u+0x00000000u; // 80059CAC
  c->r[27]=0u+0x00000000u; // 80059CB0
L_80059CB4:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[26]); // 80059CB4
  if (crb(c,2)) { goto L_80059CE8; } // 80059CB8
  c->r[31]=R32(c->r[30]+0x00000000u); // 80059CBC
  cmps(c,0,(int32_t)c->r[31],0); // 80059CC0
  if (crb(c,2)) { goto L_80059CE8; } // 80059CC4
  c->r[3]=c->r[31]+0x0000016Cu; // 80059CC8
  c->lr=0x80059CD0u; f_80252384(c); // 80059CCC
  cmps(c,0,(int32_t)c->r[3],0); // 80059CD0
  if (crb(c,2)) { goto L_80059CE8; } // 80059CD4
  c->r[0]=R32(c->r[31]+0x0000018Cu); // 80059CD8
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80059CDC
  if (!crb(c,0)) { goto L_80059CE8; } // 80059CE0
  c->r[29]=c->r[29]+0x00000001u; // 80059CE4
L_80059CE8:;
  c->r[27]=c->r[27]+0x00000001u; // 80059CE8
  c->r[30]=c->r[30]+0x00000004u; // 80059CEC
  cmps(c,0,(int32_t)c->r[27],4); // 80059CF0
  if (crb(c,0)) { IRQCHK(c); goto L_80059CB4; } // 80059CF4
  c->r[3]=c->r[29]|c->r[29]; // 80059CF8
L_80059CFC:;
  c->r[11]=c->r[1]+0x00000020u; // 80059CFC
  c->lr=0x80059D04u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80059D00
  c->r[0]=R32(c->r[1]+0x00000024u); // 80059D04
  c->lr=c->r[0]; // 80059D08
  c->r[1]=c->r[1]+0x00000020u; // 80059D0C
  return; // 80059D10
}

// fn_80059D14
void f_80059D14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80059D14
  c->r[0]=c->lr; // 80059D18
  c->r[3]=0u+0x80350000u; // 80059D1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80059D20
  c->r[4]=c->r[1]+0x00000008u; // 80059D24
  c->r[3]=c->r[3]+0x00002900u; // 80059D28
  c->lr=0x80059D30u; f_80053A48(c); // 80059D2C
  c->r[4]=R32(c->r[1]+0x00000008u); // 80059D30
  cmps(c,0,(int32_t)c->r[4],0); // 80059D34
  if (crb(c,2)) { goto L_80059D40; } // 80059D38
  W32(c->r[4]+0x00000058u,c->r[3]); // 80059D3C
L_80059D40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80059D40
  c->r[3]=R32(c->r[1]+0x00000008u); // 80059D44
  c->lr=c->r[0]; // 80059D48
  c->r[1]=c->r[1]+0x00000010u; // 80059D4C
  return; // 80059D50
}

// fn_80059D54
void f_80059D54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80059D54
  c->r[0]=c->lr; // 80059D58
  c->r[3]=0u+0x80350000u; // 80059D5C
  c->r[3]=c->r[3]+0x00002900u; // 80059D60
  W32(c->r[1]+0x00000014u,c->r[0]); // 80059D64
  c->r[4]=c->r[1]+0x00000008u; // 80059D68
  c->r[3]=c->r[3]+0x00000030u; // 80059D6C
  c->lr=0x80059D74u; f_80053A48(c); // 80059D70
  c->r[4]=R32(c->r[1]+0x00000008u); // 80059D74
  cmps(c,0,(int32_t)c->r[4],0); // 80059D78
  if (crb(c,2)) { goto L_80059D84; } // 80059D7C
  W32(c->r[4]+0x00000058u,c->r[3]); // 80059D80
L_80059D84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80059D84
  c->r[3]=R32(c->r[1]+0x00000008u); // 80059D88
  c->lr=c->r[0]; // 80059D8C
  c->r[1]=c->r[1]+0x00000010u; // 80059D90
  return; // 80059D94
}

// fn_80059D98
void f_80059D98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80059D98
  c->r[0]=c->lr; // 80059D9C
  c->r[3]=0u+0x80350000u; // 80059DA0
  c->r[3]=c->r[3]+0x00002900u; // 80059DA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80059DA8
  c->r[4]=c->r[1]+0x00000008u; // 80059DAC
  c->r[3]=c->r[3]+0x00000060u; // 80059DB0
  c->lr=0x80059DB8u; f_80053A48(c); // 80059DB4
  c->r[4]=R32(c->r[1]+0x00000008u); // 80059DB8
  cmps(c,0,(int32_t)c->r[4],0); // 80059DBC
  if (crb(c,2)) { goto L_80059DC8; } // 80059DC0
  W32(c->r[4]+0x00000058u,c->r[3]); // 80059DC4
L_80059DC8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80059DC8
  c->r[3]=R32(c->r[1]+0x00000008u); // 80059DCC
  c->lr=c->r[0]; // 80059DD0
  c->r[1]=c->r[1]+0x00000010u; // 80059DD4
  return; // 80059DD8
}

// fn_80059DDC
void f_80059DDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80059DDC
  c->r[0]=c->lr; // 80059DE0
  c->r[3]=0u+0x80350000u; // 80059DE4
  c->r[3]=c->r[3]+0x00002900u; // 80059DE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80059DEC
  c->r[4]=c->r[1]+0x00000008u; // 80059DF0
  c->r[3]=c->r[3]+0x00000090u; // 80059DF4
  c->lr=0x80059DFCu; f_80053A48(c); // 80059DF8
  c->r[4]=R32(c->r[1]+0x00000008u); // 80059DFC
  cmps(c,0,(int32_t)c->r[4],0); // 80059E00
  if (crb(c,2)) { goto L_80059E0C; } // 80059E04
  W32(c->r[4]+0x00000058u,c->r[3]); // 80059E08
L_80059E0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80059E0C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80059E10
  c->lr=c->r[0]; // 80059E14
  c->r[1]=c->r[1]+0x00000010u; // 80059E18
  return; // 80059E1C
}

// fn_80059E20
void f_80059E20(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)588); // 80059E20
  c->r[3]=0u+0x80350000u; // 80059E24
  c->r[3]=c->r[3]+0xFFFF9E20u; // 80059E28
  c->r[3]=c->r[3]+c->r[0]; // 80059E2C
  return; // 80059E30
}

// fn_80059E34
void f_80059E34(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1152); // 80059E34
  c->r[3]=0u+0x80350000u; // 80059E38
  c->r[3]=c->r[3]+0xFFFFA9A0u; // 80059E3C
  c->r[3]=c->r[3]+c->r[0]; // 80059E40
  return; // 80059E44
}

// fn_80059E48
void f_80059E48(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1892); // 80059E48
  c->r[3]=0u+0x80350000u; // 80059E4C
  c->r[3]=c->r[3]+0x000029C0u; // 80059E50
  c->r[3]=c->r[3]+c->r[0]; // 80059E54
  return; // 80059E58
}

// fn_80059E5C
void f_80059E5C(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFFA338u; // 80059E5C
  c->r[3]=c->r[0]+c->r[3]; // 80059E60
  return; // 80059E64
}

// fn_80059E68
void f_80059E68(Ctx* __restrict c) {
  c->r[4]=0u+0x80350000u; // 80059E68
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 80059E6C
  c->r[4]=c->r[4]+0x00003128u; // 80059E70
  c->r[3]=c->r[4]+c->r[0]; // 80059E74
  return; // 80059E78
}

// fn_80059E7C
void f_80059E7C(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFA330u; // 80059E7C
  return; // 80059E80
}

// fn_80059E84
void f_80059E84(Ctx* __restrict c) {
  c->r[4]=0u+0x80350000u; // 80059E84
  c->r[0]=rotl(c->r[3],7)&0xFFFFFF80u; // 80059E88
  c->r[4]=c->r[4]+0xFFFF9DA0u; // 80059E8C
  c->r[3]=c->r[4]+c->r[0]; // 80059E90
  return; // 80059E94
}

// fn_80059E98
void f_80059E98(Ctx* __restrict c) {
  c->r[5]=0u+0x80350000u; // 80059E98
  c->r[4]=c->r[3]|c->r[3]; // 80059E9C
  c->r[3]=c->r[5]+0x00002900u; // 80059EA0
  f_80053980(c); return; // 80059EA4
}

// fn_80059EA8
void f_80059EA8(Ctx* __restrict c) {
  c->r[5]=0u+0x80350000u; // 80059EA8
  c->r[4]=c->r[3]|c->r[3]; // 80059EAC
  c->r[5]=c->r[5]+0x00002900u; // 80059EB0
  c->r[3]=c->r[5]+0x00000030u; // 80059EB4
  f_80053980(c); return; // 80059EB8
}

// fn_80059EBC
void f_80059EBC(Ctx* __restrict c) {
  c->r[5]=0u+0x80350000u; // 80059EBC
  c->r[4]=c->r[3]|c->r[3]; // 80059EC0
  c->r[5]=c->r[5]+0x00002900u; // 80059EC4
  c->r[3]=c->r[5]+0x00000060u; // 80059EC8
  f_80053980(c); return; // 80059ECC
}

// fn_80059ED0
void f_80059ED0(Ctx* __restrict c) {
  c->r[5]=0u+0x80350000u; // 80059ED0
  c->r[4]=c->r[3]|c->r[3]; // 80059ED4
  c->r[5]=c->r[5]+0x00002900u; // 80059ED8
  c->r[3]=c->r[5]+0x00000090u; // 80059EDC
  f_80053980(c); return; // 80059EE0
}

// fn_80059EE4
void f_80059EE4(Ctx* __restrict c) {
  c->r[3]=0u+0x80350000u; // 80059EE4
  c->r[3]=c->r[3]+0x00002900u; // 80059EE8
  f_800538C0(c); return; // 80059EEC
}

// fn_80059EF0
void f_80059EF0(Ctx* __restrict c) {
  c->r[3]=0u+0x80350000u; // 80059EF0
  c->r[3]=c->r[3]+0x00002900u; // 80059EF4
  c->r[3]=c->r[3]+0x00000030u; // 80059EF8
  f_800538C0(c); return; // 80059EFC
}

// fn_80059F00
void f_80059F00(Ctx* __restrict c) {
  c->r[3]=0u+0x80350000u; // 80059F00
  c->r[3]=c->r[3]+0x00002900u; // 80059F04
  c->r[3]=c->r[3]+0x00000060u; // 80059F08
  f_800538C0(c); return; // 80059F0C
}

// fn_80059F10
void f_80059F10(Ctx* __restrict c) {
  c->r[3]=0u+0x80350000u; // 80059F10
  c->r[3]=c->r[3]+0x00002900u; // 80059F14
  c->r[3]=c->r[3]+0x00000090u; // 80059F18
  f_800538C0(c); return; // 80059F1C
}

// fn_80059F20
void f_80059F20(Ctx* __restrict c) {
  c->r[3]=0u+0x80350000u; // 80059F20
  c->r[3]=c->r[3]+0x00002900u; // 80059F24
  f_80053804(c); return; // 80059F28
}

// fn_80059F2C
void f_80059F2C(Ctx* __restrict c) {
  c->r[3]=0u+0x80350000u; // 80059F2C
  c->r[3]=c->r[3]+0x00002900u; // 80059F30
  c->r[3]=c->r[3]+0x00000030u; // 80059F34
  f_80053804(c); return; // 80059F38
}

// fn_80059F3C
void f_80059F3C(Ctx* __restrict c) {
  c->r[3]=0u+0x80350000u; // 80059F3C
  c->r[3]=c->r[3]+0x00002900u; // 80059F40
  c->r[3]=c->r[3]+0x00000060u; // 80059F44
  f_80053804(c); return; // 80059F48
}

// fn_80059F4C
void f_80059F4C(Ctx* __restrict c) {
  c->r[3]=0u+0x80350000u; // 80059F4C
  c->r[3]=c->r[3]+0x00002900u; // 80059F50
  c->r[3]=c->r[3]+0x00000090u; // 80059F54
  f_80053804(c); return; // 80059F58
}

// fn_80059F5C
void f_80059F5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80059F5C
  c->r[0]=c->lr; // 80059F60
  W32(c->r[1]+0x00000034u,c->r[0]); // 80059F64
  c->r[11]=c->r[1]+0x00000030u; // 80059F68
  c->lr=0x80059F70u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80059F6C
  c->r[25]=0u+0x80350000u; // 80059F70
  c->r[31]=0u+0x802F0000u; // 80059F74
  c->r[25]=c->r[25]+0xFFFF9DA0u; // 80059F78
  c->r[26]=c->r[25]+0x00010000u; // 80059F7C
  c->r[31]=c->r[31]+0x00002E50u; // 80059F80
  c->lr=0x80059F88u; f_800076D4(c); // 80059F84
  c->r[24]=0u+0x802B0000u; // 80059F88
  c->r[27]=c->r[3]|c->r[3]; // 80059F8C
  c->r[30]=c->r[26]+0xFFFF9388u; // 80059F90
  c->r[28]=c->r[26]+0xFFFF8B60u; // 80059F94
  c->r[24]=c->r[24]+0xFFFFE040u; // 80059F98
  c->r[23]=0u+0x00000000u; // 80059F9C
L_80059FA0:;
  c->r[4]=R32(c->r[24]+0x00000000u); // 80059FA0
  c->r[3]=c->r[28]|c->r[28]; // 80059FA4
  c->lr=0x80059FACu; f_80053158(c); // 80059FA8
  c->r[23]=c->r[23]+0x00000001u; // 80059FAC
  c->r[28]=c->r[28]+0x00000030u; // 80059FB0
  cmps(c,0,(int32_t)c->r[23],4); // 80059FB4
  c->r[24]=c->r[24]+0x00000004u; // 80059FB8
  if (crb(c,0)) { IRQCHK(c); goto L_80059FA0; } // 80059FBC
  c->r[24]=c->r[25]+0x00001E00u; // 80059FC0
  c->r[23]=0u+0x00000000u; // 80059FC4
  c->r[28]=0u+0x802B0000u; // 80059FC8
  goto L_80059FF0; // 80059FCC
L_80059FD0:;
  c->r[4]=c->r[24]|c->r[24]; // 80059FD0
  c->r[5]=c->r[23]|c->r[23]; // 80059FD4
  c->r[3]=c->r[26]+0xFFFF8B60u; // 80059FD8
  c->lr=0x80059FE0u; f_80053790(c); // 80059FDC
  c->r[3]=c->r[24]|c->r[24]; // 80059FE0
  c->lr=0x80059FE8u; f_8005AD40(c); // 80059FE4
  c->r[24]=c->r[24]+0x0000048Cu; // 80059FE8
  c->r[23]=c->r[23]+0x00000001u; // 80059FEC
L_80059FF0:;
  c->r[0]=R32(c->r[28]+0xFFFFE040u); // 80059FF0
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 80059FF4
  if (crb(c,0)) { IRQCHK(c); goto L_80059FD0; } // 80059FF8
  c->r[28]=0u+0x802B0000u; // 80059FFC
  c->r[24]=c->r[25]+0x00004260u; // 8005A000
  c->r[29]=c->r[26]+0xFFFF8B60u; // 8005A004
  c->r[23]=0u+0x00000000u; // 8005A008
  c->r[28]=c->r[28]+0xFFFFE040u; // 8005A00C
  goto L_8005A040; // 8005A010
L_8005A014:;
  c->r[4]=c->r[24]|c->r[24]; // 8005A014
  c->r[5]=c->r[23]|c->r[23]; // 8005A018
  c->r[3]=c->r[29]+0x00000030u; // 8005A01C
  c->lr=0x8005A024u; f_80053790(c); // 8005A020
  c->r[12]=R32(c->r[24]+0x00000000u); // 8005A024
  c->r[3]=c->r[24]|c->r[24]; // 8005A028
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8005A02C
  c->ctr=c->r[12]; // 8005A030
  if (true) { c->lr=0x8005A038u; dispatch(c,c->ctr); } // 8005A034
  c->r[24]=c->r[24]+0x0000048Cu; // 8005A038
  c->r[23]=c->r[23]+0x00000001u; // 8005A03C
L_8005A040:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8005A040
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 8005A044
  if (crb(c,0)) { IRQCHK(c); goto L_8005A014; } // 8005A048
  c->r[28]=0u+0x802B0000u; // 8005A04C
  c->r[24]=c->r[25]+0x000066C0u; // 8005A050
  c->r[29]=c->r[26]+0xFFFF8B60u; // 8005A054
  c->r[23]=0u+0x00000000u; // 8005A058
  c->r[28]=c->r[28]+0xFFFFE040u; // 8005A05C
  goto L_8005A090; // 8005A060
L_8005A064:;
  c->r[4]=c->r[24]|c->r[24]; // 8005A064
  c->r[5]=c->r[23]|c->r[23]; // 8005A068
  c->r[3]=c->r[29]+0x00000060u; // 8005A06C
  c->lr=0x8005A074u; f_80053790(c); // 8005A070
  c->r[12]=R32(c->r[24]+0x00000000u); // 8005A074
  c->r[3]=c->r[24]|c->r[24]; // 8005A078
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8005A07C
  c->ctr=c->r[12]; // 8005A080
  if (true) { c->lr=0x8005A088u; dispatch(c,c->ctr); } // 8005A084
  c->r[24]=c->r[24]+0x00000494u; // 8005A088
  c->r[23]=c->r[23]+0x00000001u; // 8005A08C
L_8005A090:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 8005A090
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 8005A094
  if (crb(c,0)) { IRQCHK(c); goto L_8005A064; } // 8005A098
  c->r[29]=0u+0x802B0000u; // 8005A09C
  c->r[25]=c->r[25]+0x00007910u; // 8005A0A0
  c->r[28]=c->r[26]+0xFFFF8B60u; // 8005A0A4
  c->r[24]=0u+0x00000000u; // 8005A0A8
  c->r[29]=c->r[29]+0xFFFFE040u; // 8005A0AC
  goto L_8005A0E0; // 8005A0B0
L_8005A0B4:;
  c->r[4]=c->r[25]|c->r[25]; // 8005A0B4
  c->r[5]=c->r[24]|c->r[24]; // 8005A0B8
  c->r[3]=c->r[28]+0x00000090u; // 8005A0BC
  c->lr=0x8005A0C4u; f_80053790(c); // 8005A0C0
  c->r[12]=R32(c->r[25]+0x00000000u); // 8005A0C4
  c->r[3]=c->r[25]|c->r[25]; // 8005A0C8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8005A0CC
  c->ctr=c->r[12]; // 8005A0D0
  if (true) { c->lr=0x8005A0D8u; dispatch(c,c->ctr); } // 8005A0D4
  c->r[25]=c->r[25]+0x00000494u; // 8005A0D8
  c->r[24]=c->r[24]+0x00000001u; // 8005A0DC
L_8005A0E0:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8005A0E0
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 8005A0E4
  if (crb(c,0)) { IRQCHK(c); goto L_8005A0B4; } // 8005A0E8
  c->r[3]=c->r[26]+0xFFFF8C20u; // 8005A0EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005A0F0
  c->r[12]=R32(c->r[12]+0x00000050u); // 8005A0F4
  c->ctr=c->r[12]; // 8005A0F8
  if (true) { c->lr=0x8005A100u; dispatch(c,c->ctr); } // 8005A0FC
  c->r[3]=c->r[13]+0xFFFFA338u; // 8005A100
  c->lr=0x8005A108u; f_80058F2C(c); // 8005A104
  c->r[3]=c->r[26]+0xFFFF9388u; // 8005A108
  c->lr=0x8005A110u; f_80059834(c); // 8005A10C
  cmps(c,0,(int32_t)c->r[27],1); // 8005A110
  if (!crb(c,2)) { goto L_8005A144; } // 8005A114
  c->r[0]=R32(c->r[31]+0x00000000u); // 8005A118
  c->r[3]=R32(c->r[30]+0x00000000u); // 8005A11C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)17280); // 8005A120
  c->r[5]=c->r[31]+c->r[0]; // 8005A124
  c->r[4]=R32(c->r[5]+0x0000003Cu); // 8005A128
  c->r[5]=R32(c->r[5]+0x00000040u); // 8005A12C
  c->r[0]=c->r[4]+0x00000001u; // 8005A130
  W32(c->r[3]+0x000001ECu,c->r[0]); // 8005A134
  W32(c->r[3]+0x00000190u,c->r[5]); // 8005A138
  c->lr=0x8005A140u; f_800562A4(c); // 8005A13C
  goto L_8005A1A0; // 8005A140
L_8005A144:;
  cmps(c,0,(int32_t)c->r[27],3); // 8005A144
  if (!crb(c,2)) { goto L_8005A170; } // 8005A148
  c->r[5]=c->r[26]+0xFFFF9398u; // 8005A14C
  c->r[3]=R32(c->r[30]+0x00000000u); // 8005A150
  c->r[4]=R32(c->r[5]+0x00000000u); // 8005A154
  c->r[5]=R32(c->r[5]+0x00000008u); // 8005A158
  c->r[0]=c->r[4]+0x00000001u; // 8005A15C
  W32(c->r[3]+0x000001ECu,c->r[0]); // 8005A160
  W32(c->r[3]+0x00000190u,c->r[5]); // 8005A164
  c->lr=0x8005A16Cu; f_800562A4(c); // 8005A168
  goto L_8005A1A0; // 8005A16C
L_8005A170:;
  c->r[0]=c->r[27]+0xFFFFFFFCu; // 8005A170
  cmpu(c,0,c->r[0],0x00000001u); // 8005A174
  if (crb(c,1)) { goto L_8005A1A0; } // 8005A178
  c->r[4]=c->r[26]+0xFFFF9398u; // 8005A17C
  c->r[3]=R32(c->r[30]+0x00000000u); // 8005A180
  c->r[6]=R32(c->r[4]+0x00000004u); // 8005A184
  c->r[5]=R32(c->r[4]+0x00000008u); // 8005A188
  c->r[0]=R32(c->r[4]+0x00000000u); // 8005A18C
  W32(c->r[3]+0x000001ECu,c->r[0]); // 8005A190
  W32(c->r[3]+0x0000018Cu,c->r[6]); // 8005A194
  W32(c->r[3]+0x00000190u,c->r[5]); // 8005A198
  c->lr=0x8005A1A0u; f_800562A4(c); // 8005A19C
L_8005A1A0:;
  c->r[11]=c->r[1]+0x00000030u; // 8005A1A0
  c->lr=0x8005A1A8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8005A1A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8005A1A8
  c->lr=c->r[0]; // 8005A1AC
  c->r[1]=c->r[1]+0x00000030u; // 8005A1B0
  return; // 8005A1B4
}

// fn_8005A1B8
void f_8005A1B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A1B8
  c->r[0]=c->lr; // 8005A1BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A1C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005A1C4
  c->r[31]=0u+0x80350000u; // 8005A1C8
  c->r[31]=c->r[31]+0x00002900u; // 8005A1CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8005A1D0
  c->r[30]=0u+0x00000000u; // 8005A1D4
L_8005A1D8:;
  c->r[3]=c->r[31]|c->r[31]; // 8005A1D8
  c->lr=0x8005A1E0u; f_8005399C(c); // 8005A1DC
  c->r[30]=c->r[30]+0x00000001u; // 8005A1E0
  c->r[31]=c->r[31]+0x00000030u; // 8005A1E4
  cmps(c,0,(int32_t)c->r[30],4); // 8005A1E8
  if (crb(c,0)) { IRQCHK(c); goto L_8005A1D8; } // 8005A1EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A1F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005A1F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8005A1F8
  c->lr=c->r[0]; // 8005A1FC
  c->r[1]=c->r[1]+0x00000010u; // 8005A200
  return; // 8005A204
}

// fn_8005A208
void f_8005A208(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A208
  c->r[0]=c->lr; // 8005A20C
  c->r[3]=0u+0x80350000u; // 8005A210
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005A214
  c->r[3]=c->r[3]+0xFFFF9DA0u; // 8005A218
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8005A21C
  c->r[31]=0u+0x802F0000u; // 8005A220
  c->r[31]=c->r[31]+0x00002E50u; // 8005A224
  W32(c->r[1]+0x00000018u,c->r[30]); // 8005A228
  W32(c->r[1]+0x00000014u,c->r[29]); // 8005A22C
  c->r[29]=c->r[3]+0x00010000u; // 8005A230
  c->lr=0x8005A238u; f_8000769C(c); // 8005A234
  c->r[30]=c->r[3]|c->r[3]; // 8005A238
  c->lr=0x8005A240u; f_800076AC(c); // 8005A23C
  c->r[7]=c->r[29]+0xFFFF9388u; // 8005A240
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8005A244
  c->r[3]=R32(c->r[7]+0x00000000u); // 8005A248
  c->r[5]=c->r[29]+0xFFFF9398u; // 8005A24C
  c->r[0]=R32(c->r[3]+0x00000258u); // 8005A250
  c->r[8]=R32(c->r[3]+0x000001ECu); // 8005A254
  cmps(c,0,(int32_t)c->r[0],1); // 8005A258
  c->r[4]=R32(c->r[3]+0x0000018Cu); // 8005A25C
  c->r[3]=R32(c->r[3]+0x00000190u); // 8005A260
  if (!crb(c,2)) { goto L_8005A26C; } // 8005A264
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 8005A268
L_8005A26C:;
  W32(c->r[5]+0x00000000u,c->r[8]); // 8005A26C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8005A270
  cmps(c,0,(int32_t)c->r[0],13); // 8005A274
  W32(c->r[5]+0x00000004u,c->r[4]); // 8005A278
  W32(c->r[5]+0x00000008u,c->r[3]); // 8005A27C
  if (!crb(c,2)) { goto L_8005A2B8; } // 8005A280
  cmps(c,0,(int32_t)c->r[6],3); // 8005A284
  if (!crb(c,2)) { goto L_8005A2B8; } // 8005A288
  c->r[0]=R32(c->r[31]+0x00000000u); // 8005A28C
  c->r[3]=R32(c->r[7]+0x00000000u); // 8005A290
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)17280); // 8005A294
  c->r[5]=R32(c->r[3]+0x00000190u); // 8005A298
  c->r[4]=R32(c->r[3]+0x000001ECu); // 8005A29C
  c->r[3]=c->r[31]+c->r[0]; // 8005A2A0
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 8005A2A4
  c->r[0]=R32(c->r[31]+0x00000000u); // 8005A2A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)17280); // 8005A2AC
  c->r[3]=c->r[31]+c->r[0]; // 8005A2B0
  W32(c->r[3]+0x00000040u,c->r[5]); // 8005A2B4
L_8005A2B8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8005A2B8
  c->r[3]=c->r[29]+0xFFFF8C20u; // 8005A2BC
  c->r[4]=R32(c->r[7]+0x00000000u); // 8005A2C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)17280); // 8005A2C4
  c->r[5]=R32(c->r[4]+0x00000194u); // 8005A2C8
  c->r[4]=c->r[31]+c->r[0]; // 8005A2CC
  W32(c->r[4]+0x00000038u,c->r[5]); // 8005A2D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005A2D4
  c->r[12]=R32(c->r[12]+0x00000044u); // 8005A2D8
  c->ctr=c->r[12]; // 8005A2DC
  if (true) { c->lr=0x8005A2E4u; dispatch(c,c->ctr); } // 8005A2E0
  c->r[29]=c->r[29]+0xFFFF8B60u; // 8005A2E4
  c->r[30]=0u+0x00000000u; // 8005A2E8
L_8005A2EC:;
  c->r[3]=c->r[29]|c->r[29]; // 8005A2EC
  c->lr=0x8005A2F4u; f_800537A8(c); // 8005A2F0
  c->r[30]=c->r[30]+0x00000001u; // 8005A2F4
  c->r[29]=c->r[29]+0x00000030u; // 8005A2F8
  cmps(c,0,(int32_t)c->r[30],4); // 8005A2FC
  if (crb(c,0)) { IRQCHK(c); goto L_8005A2EC; } // 8005A300
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005A304
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8005A308
  c->r[30]=R32(c->r[1]+0x00000018u); // 8005A30C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8005A310
  c->lr=c->r[0]; // 8005A314
  c->r[1]=c->r[1]+0x00000020u; // 8005A318
  return; // 8005A31C
}

// fn_8005A320
void f_8005A320(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A320
  c->r[0]=c->lr; // 8005A324
  c->r[4]=0u+0x80050000u; // 8005A328
  c->r[5]=0u+0x00000000u; // 8005A32C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A330
  c->r[4]=c->r[4]+0x00003D8Cu; // 8005A334
  c->r[6]=0u+0x0000024Cu; // 8005A338
  c->r[7]=0u+0x00000005u; // 8005A33C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005A340
  c->r[31]=0u+0x80350000u; // 8005A344
  c->r[31]=c->r[31]+0xFFFF9DA0u; // 8005A348
  c->r[3]=c->r[31]+0x00000080u; // 8005A34C
  c->lr=0x8005A354u; f_802528E4(c); // 8005A350
  c->r[4]=0u+0x80050000u; // 8005A354
  c->r[3]=c->r[31]+0x00000C00u; // 8005A358
  c->r[4]=c->r[4]+0x00005FB8u; // 8005A35C
  c->r[5]=0u+0x00000000u; // 8005A360
  c->r[6]=0u+0x00000480u; // 8005A364
  c->r[7]=0u+0x00000004u; // 8005A368
  c->lr=0x8005A370u; f_802528E4(c); // 8005A36C
  c->r[4]=0u+0x80060000u; // 8005A370
  c->r[3]=c->r[31]+0x00001E00u; // 8005A374
  c->r[4]=c->r[4]+0xFFFFAC48u; // 8005A378
  c->r[5]=0u+0x00000000u; // 8005A37C
  c->r[6]=0u+0x0000048Cu; // 8005A380
  c->r[7]=0u+0x00000008u; // 8005A384
  c->lr=0x8005A38Cu; f_802528E4(c); // 8005A388
  c->r[4]=0u+0x80060000u; // 8005A38C
  c->r[3]=c->r[31]+0x00004260u; // 8005A390
  c->r[4]=c->r[4]+0xFFFFA440u; // 8005A394
  c->r[5]=0u+0x00000000u; // 8005A398
  c->r[6]=0u+0x0000048Cu; // 8005A39C
  c->r[7]=0u+0x00000008u; // 8005A3A0
  c->lr=0x8005A3A8u; f_802528E4(c); // 8005A3A4
  c->r[4]=0u+0x80060000u; // 8005A3A8
  c->r[3]=c->r[31]+0x000066C0u; // 8005A3AC
  c->r[4]=c->r[4]+0xFFFFA47Cu; // 8005A3B0
  c->r[5]=0u+0x00000000u; // 8005A3B4
  c->r[6]=0u+0x00000494u; // 8005A3B8
  c->r[7]=0u+0x00000004u; // 8005A3BC
  c->lr=0x8005A3C4u; f_802528E4(c); // 8005A3C0
  c->r[4]=0u+0x80060000u; // 8005A3C4
  c->r[3]=c->r[31]+0x00007910u; // 8005A3C8
  c->r[4]=c->r[4]+0xFFFFA4B8u; // 8005A3CC
  c->r[5]=0u+0x00000000u; // 8005A3D0
  c->r[6]=0u+0x00000494u; // 8005A3D4
  c->r[7]=0u+0x00000004u; // 8005A3D8
  c->lr=0x8005A3E0u; f_802528E4(c); // 8005A3DC
  c->r[3]=0u+0x80350000u; // 8005A3E0
  c->r[4]=0u+0x80050000u; // 8005A3E4
  c->r[3]=c->r[3]+0x00002900u; // 8005A3E8
  c->r[5]=0u+0x00000000u; // 8005A3EC
  c->r[4]=c->r[4]+0x000030D4u; // 8005A3F0
  c->r[6]=0u+0x00000030u; // 8005A3F4
  c->r[7]=0u+0x00000004u; // 8005A3F8
  c->lr=0x8005A400u; f_802528E4(c); // 8005A3FC
  c->r[31]=0u+0x80350000u; // 8005A400
  c->r[3]=c->r[31]+0x000029C0u; // 8005A404
  c->lr=0x8005A40Cu; f_800530D4(c); // 8005A408
  c->r[4]=0u+0x802B0000u; // 8005A40C
  c->r[3]=c->r[13]+0xFFFFA338u; // 8005A410
  c->r[4]=c->r[4]+0xFFFFDFC8u; // 8005A414
  W32(c->r[31]+0x000029C0u,c->r[4]); // 8005A418
  c->lr=0x8005A420u; f_80058EF4(c); // 8005A41C
  c->r[3]=0u+0x80350000u; // 8005A420
  c->r[3]=c->r[3]+0x00003128u; // 8005A424
  c->lr=0x8005A42Cu; f_800597FC(c); // 8005A428
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A42C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005A430
  c->lr=c->r[0]; // 8005A434
  c->r[1]=c->r[1]+0x00000010u; // 8005A438
  return; // 8005A43C
}

// fn_8005A440
void f_8005A440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A440
  c->r[0]=c->lr; // 8005A444
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005A44C
  c->r[31]=c->r[3]|c->r[3]; // 8005A450
  c->lr=0x8005A458u; f_8005AC48(c); // 8005A454
  c->r[4]=0u+0x802B0000u; // 8005A458
  c->r[3]=c->r[31]|c->r[31]; // 8005A45C
  c->r[4]=c->r[4]+0xFFFFEBC0u; // 8005A460
  W32(c->r[31]+0x00000000u,c->r[4]); // 8005A464
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005A468
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A46C
  c->lr=c->r[0]; // 8005A470
  c->r[1]=c->r[1]+0x00000010u; // 8005A474
  return; // 8005A478
}

// fn_8005A47C
void f_8005A47C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A47C
  c->r[0]=c->lr; // 8005A480
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A484
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005A488
  c->r[31]=c->r[3]|c->r[3]; // 8005A48C
  c->lr=0x8005A494u; f_8005AC48(c); // 8005A490
  c->r[4]=0u+0x802B0000u; // 8005A494
  c->r[3]=c->r[31]|c->r[31]; // 8005A498
  c->r[4]=c->r[4]+0xFFFFEEC0u; // 8005A49C
  W32(c->r[31]+0x00000000u,c->r[4]); // 8005A4A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005A4A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A4A8
  c->lr=c->r[0]; // 8005A4AC
  c->r[1]=c->r[1]+0x00000010u; // 8005A4B0
  return; // 8005A4B4
}

// fn_8005A4B8
void f_8005A4B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A4B8
  c->r[0]=c->lr; // 8005A4BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A4C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005A4C4
  c->r[31]=c->r[3]|c->r[3]; // 8005A4C8
  c->lr=0x8005A4D0u; f_8005AC48(c); // 8005A4CC
  c->r[4]=0u+0x802B0000u; // 8005A4D0
  c->r[3]=c->r[31]|c->r[31]; // 8005A4D4
  c->r[4]=c->r[4]+0xFFFFF1C0u; // 8005A4D8
  W32(c->r[31]+0x00000000u,c->r[4]); // 8005A4DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005A4E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A4E4
  c->lr=c->r[0]; // 8005A4E8
  c->r[1]=c->r[1]+0x00000010u; // 8005A4EC
  return; // 8005A4F0
}

// fn_8005A4F4
void f_8005A4F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A4F4
  c->r[0]=c->lr; // 8005A4F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A4FC
  c->lr=0x8005A504u; f_8007AB30(c); // 8005A500
  c->lr=0x8005A508u; f_800782B8(c); // 8005A504
  cmps(c,0,(int32_t)c->r[3],6); // 8005A508
  if (!crb(c,1)) { goto L_8005A514; } // 8005A50C
  c->r[3]=0u+0x00000006u; // 8005A510
L_8005A514:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A514
  c->r[3]=c->r[3]+0x00000076u; // 8005A518
  c->lr=c->r[0]; // 8005A51C
  c->r[1]=c->r[1]+0x00000010u; // 8005A520
  return; // 8005A524
}

// fn_8005A528
void f_8005A528(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A528
  c->r[0]=c->lr; // 8005A52C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A530
  c->lr=0x8005A538u; f_8007AB30(c); // 8005A534
  c->lr=0x8005A53Cu; f_800782B8(c); // 8005A538
  c->r[4]=0u+0x802B0000u; // 8005A53C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8005A540
  c->r[4]=c->r[4]+0xFFFFE050u; // 8005A544
  c->r[3]=R32(c->r[4]+c->r[0]); // 8005A548
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A54C
  c->lr=c->r[0]; // 8005A550
  c->r[1]=c->r[1]+0x00000010u; // 8005A554
  return; // 8005A558
}

// fn_8005A55C
void f_8005A55C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A55C
  c->r[0]=c->lr; // 8005A560
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A564
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005A568
  c->r[31]=c->r[3]|c->r[3]; // 8005A56C
  c->lr=0x8005A574u; f_8007AB30(c); // 8005A570
  c->lr=0x8005A578u; f_800782B8(c); // 8005A574
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8005A578
  c->r[4]=0u+0x802B0000u; // 8005A57C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8005A580
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005A584
  c->r[4]=c->r[4]+0xFFFFE078u; // 8005A588
  c->r[0]=c->r[4]+c->r[0]; // 8005A58C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 8005A590
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A594
  c->lr=c->r[0]; // 8005A598
  c->r[1]=c->r[1]+0x00000010u; // 8005A59C
  return; // 8005A5A0
}

// fn_8005A5A4
void f_8005A5A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A5A4
  c->r[0]=c->lr; // 8005A5A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A5AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005A5B0
  c->r[31]=c->r[3]|c->r[3]; // 8005A5B4
  c->lr=0x8005A5BCu; f_8007AB30(c); // 8005A5B8
  c->lr=0x8005A5C0u; f_800782B8(c); // 8005A5BC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8005A5C0
  c->r[4]=0u+0x802B0000u; // 8005A5C4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8005A5C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005A5CC
  c->r[4]=c->r[4]+0xFFFFE140u; // 8005A5D0
  c->r[0]=c->r[4]+c->r[0]; // 8005A5D4
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 8005A5D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A5DC
  c->lr=c->r[0]; // 8005A5E0
  c->r[1]=c->r[1]+0x00000010u; // 8005A5E4
  return; // 8005A5E8
}

// fn_8005A5EC
void f_8005A5EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A5EC
  c->r[0]=c->lr; // 8005A5F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A5F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005A5F8
  c->r[31]=c->r[3]|c->r[3]; // 8005A5FC
  c->lr=0x8005A604u; f_8007AB30(c); // 8005A600
  c->lr=0x8005A608u; f_800782B8(c); // 8005A604
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8005A608
  c->r[4]=0u+0x802B0000u; // 8005A60C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8005A610
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005A614
  c->r[4]=c->r[4]+0xFFFFE208u; // 8005A618
  c->r[0]=c->r[4]+c->r[0]; // 8005A61C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 8005A620
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A624
  c->lr=c->r[0]; // 8005A628
  c->r[1]=c->r[1]+0x00000010u; // 8005A62C
  return; // 8005A630
}

// fn_8005A634
void f_8005A634(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A634
  c->r[0]=c->lr; // 8005A638
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A63C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005A640
  c->r[31]=c->r[3]|c->r[3]; // 8005A644
  c->lr=0x8005A64Cu; f_8007AB30(c); // 8005A648
  c->lr=0x8005A650u; f_800782B8(c); // 8005A64C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8005A650
  c->r[4]=0u+0x802B0000u; // 8005A654
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8005A658
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005A65C
  c->r[4]=c->r[4]+0xFFFFE2D0u; // 8005A660
  c->r[0]=c->r[4]+c->r[0]; // 8005A664
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 8005A668
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A66C
  c->lr=c->r[0]; // 8005A670
  c->r[1]=c->r[1]+0x00000010u; // 8005A674
  return; // 8005A678
}

// fn_8005A67C
void f_8005A67C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A67C
  c->r[0]=c->lr; // 8005A680
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A684
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005A688
  c->r[31]=c->r[3]|c->r[3]; // 8005A68C
  c->lr=0x8005A694u; f_8007AB30(c); // 8005A690
  c->lr=0x8005A698u; f_800782B8(c); // 8005A694
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8005A698
  c->r[4]=0u+0x802B0000u; // 8005A69C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8005A6A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005A6A4
  c->r[4]=c->r[4]+0xFFFFE398u; // 8005A6A8
  c->r[0]=c->r[4]+c->r[0]; // 8005A6AC
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 8005A6B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A6B4
  c->lr=c->r[0]; // 8005A6B8
  c->r[1]=c->r[1]+0x00000010u; // 8005A6BC
  return; // 8005A6C0
}

// fn_8005A6C4
void f_8005A6C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A6C4
  c->r[0]=c->lr; // 8005A6C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A6CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005A6D0
  c->r[31]=c->r[3]|c->r[3]; // 8005A6D4
  c->lr=0x8005A6DCu; f_8007AB30(c); // 8005A6D8
  c->lr=0x8005A6E0u; f_800782B8(c); // 8005A6DC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8005A6E0
  c->r[4]=0u+0x802B0000u; // 8005A6E4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8005A6E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005A6EC
  c->r[4]=c->r[4]+0xFFFFE460u; // 8005A6F0
  c->r[0]=c->r[4]+c->r[0]; // 8005A6F4
  c->r[3]=R32(c->r[3]+c->r[0]); // 8005A6F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A6FC
  c->lr=c->r[0]; // 8005A700
  c->r[1]=c->r[1]+0x00000010u; // 8005A704
  return; // 8005A708
}

// fn_8005A70C
void f_8005A70C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A70C
  c->r[0]=c->lr; // 8005A710
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A714
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005A718
  c->r[31]=c->r[5]|c->r[5]; // 8005A71C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8005A720
  c->r[30]=c->r[3]|c->r[3]; // 8005A724
  c->lr=0x8005A72Cu; f_8007AB30(c); // 8005A728
  c->lr=0x8005A730u; f_800782B8(c); // 8005A72C
  cmps(c,0,(int32_t)c->r[3],6); // 8005A730
  if (!crb(c,1)) { goto L_8005A73C; } // 8005A734
  c->r[3]=0u+0x00000006u; // 8005A738
L_8005A73C:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)40); // 8005A73C
  c->r[3]=0u+0x802B0000u; // 8005A740
  c->r[4]=rotl(c->r[30],3)&0xFFFFFFF8u; // 8005A744
  {uint32_t ea=c->r[2]+0xFFFF8C68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005A748
  c->r[3]=c->r[3]+0xFFFFE528u; // 8005A74C
  c->r[0]=c->r[3]+c->r[0]; // 8005A750
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8005A754
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005A758
  c->r[0]=c->r[4]+c->r[0]; // 8005A75C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8005A760
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 8005A764
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A768
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8005A76C
  c->lr=c->r[0]; // 8005A770
  c->r[1]=c->r[1]+0x00000010u; // 8005A774
  return; // 8005A778
}

// fn_8005A77C
void f_8005A77C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A77C
  c->r[0]=c->lr; // 8005A780
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A784
  c->lr=0x8005A78Cu; f_8007AB30(c); // 8005A788
  c->lr=0x8005A790u; f_800782B8(c); // 8005A78C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8005A790
  c->r[3]=0u+0x802B0000u; // 8005A794
  c->r[3]=c->r[3]+0xFFFFE640u; // 8005A798
  c->r[3]=c->r[3]+c->r[0]; // 8005A79C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A7A0
  c->lr=c->r[0]; // 8005A7A4
  c->r[1]=c->r[1]+0x00000010u; // 8005A7A8
  return; // 8005A7AC
}

// fn_8005A7B0
void f_8005A7B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A7B0
  c->r[0]=c->lr; // 8005A7B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005A7B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005A7BC
  c->r[31]=c->r[4]|c->r[4]; // 8005A7C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8005A7C4
  c->r[30]=c->r[3]|c->r[3]; // 8005A7C8
  c->lr=0x8005A7D0u; f_8007AB30(c); // 8005A7CC
  c->lr=0x8005A7D4u; f_800782B8(c); // 8005A7D0
  c->r[4]=c->r[3]|c->r[3]; // 8005A7D4
  c->r[3]=c->r[30]|c->r[30]; // 8005A7D8
  c->r[5]=c->r[31]|c->r[31]; // 8005A7DC
  c->lr=0x8005A7E4u; f_8005A7FC(c); // 8005A7E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005A7E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005A7E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8005A7EC
  c->lr=c->r[0]; // 8005A7F0
  c->r[1]=c->r[1]+0x00000010u; // 8005A7F4
  return; // 8005A7F8
}

// fn_8005A7FC
void f_8005A7FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005A7FC
  c->r[0]=c->lr; // 8005A800
  c->r[8]=0u+0x802B0000u; // 8005A804
  {uint32_t ea=c->r[8]+0xFFFFE708u; c->r[7]=R32(ea); c->r[8]=ea;} // 8005A808
  W32(c->r[1]+0x00000064u,c->r[0]); // 8005A80C
  cmps(c,0,(int32_t)c->r[4],9); // 8005A810
  c->r[6]=R32(c->r[8]+0x00000004u); // 8005A814
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8005A818
  c->r[0]=R32(c->r[8]+0x00000008u); // 8005A81C
  W32(c->r[1]+0x00000058u,c->r[30]); // 8005A820
  c->r[30]=c->r[3]|c->r[3]; // 8005A824
  c->r[3]=0u+0x00000001u; // 8005A828
  W32(c->r[1]+0x00000044u,c->r[7]); // 8005A82C
  W32(c->r[1]+0x00000048u,c->r[6]); // 8005A830
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8005A834
  if (!crb(c,0)) { goto L_8005A844; } // 8005A838
  cmps(c,0,(int32_t)c->r[4],6); // 8005A83C
  if (!crb(c,0)) { goto L_8005AB00; } // 8005A840
L_8005A844:;
  cmps(c,0,(int32_t)c->r[5],1); // 8005A844
  if (!crb(c,2)) { goto L_8005AADC; } // 8005A848
  cmps(c,0,(int32_t)c->r[4],2); // 8005A84C
  if (crb(c,2)) { goto L_8005A874; } // 8005A850
  if (!crb(c,0)) { goto L_8005A868; } // 8005A854
  cmps(c,0,(int32_t)c->r[4],0); // 8005A858
  if (crb(c,2)) { goto L_8005A898; } // 8005A85C
  if (!crb(c,0)) { goto L_8005A908; } // 8005A860
  goto L_8005A874; // 8005A864
L_8005A868:;
  cmps(c,0,(int32_t)c->r[4],4); // 8005A868
  if (!crb(c,0)) { goto L_8005A874; } // 8005A86C
  goto L_8005AA6C; // 8005A870
L_8005A874:;
  c->r[5]=0u+0x802B0000u; // 8005A874
  c->r[4]=c->r[5]+0xFFFFE708u; // 8005A878
  {uint32_t ea=c->r[5]+0xFFFFE708u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005A87C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005A880
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005A884
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 8005A888
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 8005A88C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8005A890
  goto L_8005AB8C; // 8005A894
L_8005A898:;
  c->r[3]=0u+0x00000000u; // 8005A898
  c->lr=0x8005A8A0u; f_8007AB90(c); // 8005A89C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005A8A0
  c->r[12]=R32(c->r[12]+0x0000013Cu); // 8005A8A4
  c->ctr=c->r[12]; // 8005A8A8
  if (true) { c->lr=0x8005A8B0u; dispatch(c,c->ctr); } // 8005A8AC
  c->r[3]=0u+0x00000000u; // 8005A8B0
  c->lr=0x8005A8B8u; f_8007AB90(c); // 8005A8B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005A8B8
  c->r[12]=R32(c->r[12]+0x00000148u); // 8005A8BC
  c->ctr=c->r[12]; // 8005A8C0
  if (true) { c->lr=0x8005A8C8u; dispatch(c,c->ctr); } // 8005A8C4
  c->r[3]=0u+0x00000000u; // 8005A8C8
  c->lr=0x8005A8D0u; f_8007AB90(c); // 8005A8CC
  c->r[4]=c->r[3]|c->r[3]; // 8005A8D0
  c->r[3]=c->r[1]+0x00000038u; // 8005A8D4
  c->r[12]=R32(c->r[4]+0x00000000u); // 8005A8D8
  c->r[12]=R32(c->r[12]+0x000000B0u); // 8005A8DC
  c->ctr=c->r[12]; // 8005A8E0
  if (true) { c->lr=0x8005A8E8u; dispatch(c,c->ctr); } // 8005A8E4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005A8E8
  c->r[3]=0u+0x00000000u; // 8005A8EC
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8005A8F0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005A8F4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 8005A8F8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 8005A8FC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8005A900
  goto L_8005AB8C; // 8005A904
L_8005A908:;
  c->lr=0x8005A90Cu; f_8007AB30(c); // 8005A908
  c->lr=0x8005A910u; f_8007A85C(c); // 8005A90C
  c->r[4]=0u+0x00000024u; // 8005A910
  c->lr=0x8005A918u; f_8007DAD0(c); // 8005A914
  cmps(c,0,(int32_t)c->r[3],0); // 8005A918
  if (crb(c,2)) { goto L_8005A9C4; } // 8005A91C
  c->r[3]=0u+0x00000007u; // 8005A920
  c->lr=0x8005A928u; f_8007AB90(c); // 8005A924
  c->r[4]=c->r[3]|c->r[3]; // 8005A928
  c->r[3]=c->r[1]+0x0000002Cu; // 8005A92C
  c->r[12]=R32(c->r[4]+0x00000000u); // 8005A930
  c->r[12]=R32(c->r[12]+0x000000B0u); // 8005A934
  c->ctr=c->r[12]; // 8005A938
  if (true) { c->lr=0x8005A940u; dispatch(c,c->ctr); } // 8005A93C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8005A940
  c->r[3]=0u+0x00000007u; // 8005A944
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005A948
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005A94C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 8005A950
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 8005A954
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8005A958
  c->lr=0x8005A960u; f_8007AB90(c); // 8005A95C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005A960
  c->r[12]=R32(c->r[12]+0x0000013Cu); // 8005A964
  c->ctr=c->r[12]; // 8005A968
  if (true) { c->lr=0x8005A970u; dispatch(c,c->ctr); } // 8005A96C
  c->r[3]=0u+0x00000007u; // 8005A970
  c->lr=0x8005A978u; f_8007AB90(c); // 8005A974
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005A978
  c->r[12]=R32(c->r[12]+0x00000148u); // 8005A97C
  c->ctr=c->r[12]; // 8005A980
  if (true) { c->lr=0x8005A988u; dispatch(c,c->ctr); } // 8005A984
  c->r[3]=0u+0x00000007u; // 8005A988
  c->lr=0x8005A990u; f_8007AB90(c); // 8005A98C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005A990
  c->r[4]=0u+0x00000003u; // 8005A994
  c->r[12]=R32(c->r[12]+0x00000094u); // 8005A998
  c->ctr=c->r[12]; // 8005A99C
  if (true) { c->lr=0x8005A9A4u; dispatch(c,c->ctr); } // 8005A9A0
  c->r[3]=0u+0x00000007u; // 8005A9A4
  c->lr=0x8005A9ACu; f_8007AB90(c); // 8005A9A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005A9AC
  c->r[4]=0u+0x00000000u; // 8005A9B0
  c->r[12]=R32(c->r[12]+0x0000010Cu); // 8005A9B4
  c->ctr=c->r[12]; // 8005A9B8
  if (true) { c->lr=0x8005A9C0u; dispatch(c,c->ctr); } // 8005A9BC
  goto L_8005AA64; // 8005A9C0
L_8005A9C4:;
  c->r[3]=0u+0x00000006u; // 8005A9C4
  c->lr=0x8005A9CCu; f_8007AB90(c); // 8005A9C8
  c->r[4]=c->r[3]|c->r[3]; // 8005A9CC
  c->r[3]=c->r[1]+0x00000020u; // 8005A9D0
  c->r[12]=R32(c->r[4]+0x00000000u); // 8005A9D4
  c->r[12]=R32(c->r[12]+0x000000B0u); // 8005A9D8
  c->ctr=c->r[12]; // 8005A9DC
  if (true) { c->lr=0x8005A9E4u; dispatch(c,c->ctr); } // 8005A9E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005A9E4
  c->r[3]=0u+0x00000006u; // 8005A9E8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005A9EC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005A9F0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 8005A9F4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 8005A9F8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8005A9FC
  c->lr=0x8005AA04u; f_8007AB90(c); // 8005AA00
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005AA04
  c->r[12]=R32(c->r[12]+0x0000013Cu); // 8005AA08
  c->ctr=c->r[12]; // 8005AA0C
  if (true) { c->lr=0x8005AA14u; dispatch(c,c->ctr); } // 8005AA10
  c->r[3]=0u+0x00000006u; // 8005AA14
  c->lr=0x8005AA1Cu; f_8007AB90(c); // 8005AA18
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005AA1C
  c->r[12]=R32(c->r[12]+0x00000148u); // 8005AA20
  c->ctr=c->r[12]; // 8005AA24
  if (true) { c->lr=0x8005AA2Cu; dispatch(c,c->ctr); } // 8005AA28
  c->r[3]=0u+0x00000006u; // 8005AA2C
  c->lr=0x8005AA34u; f_8007AB90(c); // 8005AA30
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005AA34
  c->r[4]=0u+0x00000003u; // 8005AA38
  c->r[12]=R32(c->r[12]+0x00000094u); // 8005AA3C
  c->ctr=c->r[12]; // 8005AA40
  if (true) { c->lr=0x8005AA48u; dispatch(c,c->ctr); } // 8005AA44
  c->r[3]=0u+0x00000006u; // 8005AA48
  c->lr=0x8005AA50u; f_8007AB90(c); // 8005AA4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005AA50
  c->r[4]=0u+0x00000000u; // 8005AA54
  c->r[12]=R32(c->r[12]+0x0000010Cu); // 8005AA58
  c->ctr=c->r[12]; // 8005AA5C
  if (true) { c->lr=0x8005AA64u; dispatch(c,c->ctr); } // 8005AA60
L_8005AA64:;
  c->r[3]=0u+0x00000000u; // 8005AA64
  goto L_8005AB8C; // 8005AA68
L_8005AA6C:;
  c->r[3]=0u+0x00000000u; // 8005AA6C
  c->lr=0x8005AA74u; f_8007AB90(c); // 8005AA70
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005AA74
  c->r[12]=R32(c->r[12]+0x0000013Cu); // 8005AA78
  c->ctr=c->r[12]; // 8005AA7C
  if (true) { c->lr=0x8005AA84u; dispatch(c,c->ctr); } // 8005AA80
  c->r[3]=0u+0x00000000u; // 8005AA84
  c->lr=0x8005AA8Cu; f_8007AB90(c); // 8005AA88
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005AA8C
  c->r[12]=R32(c->r[12]+0x00000148u); // 8005AA90
  c->ctr=c->r[12]; // 8005AA94
  if (true) { c->lr=0x8005AA9Cu; dispatch(c,c->ctr); } // 8005AA98
  c->r[3]=0u+0x00000000u; // 8005AA9C
  c->lr=0x8005AAA4u; f_8007AB90(c); // 8005AAA0
  c->r[4]=c->r[3]|c->r[3]; // 8005AAA4
  c->r[3]=c->r[1]+0x00000014u; // 8005AAA8
  c->r[12]=R32(c->r[4]+0x00000000u); // 8005AAAC
  c->r[12]=R32(c->r[12]+0x000000B0u); // 8005AAB0
  c->ctr=c->r[12]; // 8005AAB4
  if (true) { c->lr=0x8005AABCu; dispatch(c,c->ctr); } // 8005AAB8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005AABC
  c->r[3]=0u+0x00000000u; // 8005AAC0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005AAC4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8005AAC8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 8005AACC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 8005AAD0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8005AAD4
  goto L_8005AB8C; // 8005AAD8
L_8005AADC:;
  c->r[5]=0u+0x802B0000u; // 8005AADC
  c->r[4]=c->r[5]+0xFFFFE708u; // 8005AAE0
  {uint32_t ea=c->r[5]+0xFFFFE708u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005AAE4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005AAE8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005AAEC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 8005AAF0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 8005AAF4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8005AAF8
  goto L_8005AB8C; // 8005AAFC
L_8005AB00:;
  c->r[3]=c->r[13]+0xFFFFA098u; // 8005AB00
  c->lr=0x8005AB08u; f_800E49EC(c); // 8005AB04
  c->r[4]=0u+0xAAAB0000u; // 8005AB08
  c->r[0]=c->r[4]+0xFFFFAAABu; // 8005AB0C
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 8005AB10
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 8005AB14
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 8005AB18
  c->r[31]=c->r[3]-c->r[0]; // 8005AB1C
  c->r[3]=c->r[31]|c->r[31]; // 8005AB20
  c->lr=0x8005AB28u; f_8007AB90(c); // 8005AB24
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005AB28
  c->r[12]=R32(c->r[12]+0x0000013Cu); // 8005AB2C
  c->ctr=c->r[12]; // 8005AB30
  if (true) { c->lr=0x8005AB38u; dispatch(c,c->ctr); } // 8005AB34
  c->r[3]=c->r[31]|c->r[31]; // 8005AB38
  c->lr=0x8005AB40u; f_8007AB90(c); // 8005AB3C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005AB40
  c->r[12]=R32(c->r[12]+0x00000148u); // 8005AB44
  c->ctr=c->r[12]; // 8005AB48
  if (true) { c->lr=0x8005AB50u; dispatch(c,c->ctr); } // 8005AB4C
  c->r[3]=c->r[31]|c->r[31]; // 8005AB50
  c->lr=0x8005AB58u; f_8007AB90(c); // 8005AB54
  c->r[4]=c->r[3]|c->r[3]; // 8005AB58
  c->r[3]=c->r[1]+0x00000008u; // 8005AB5C
  c->r[12]=R32(c->r[4]+0x00000000u); // 8005AB60
  c->r[12]=R32(c->r[12]+0x000000B0u); // 8005AB64
  c->ctr=c->r[12]; // 8005AB68
  if (true) { c->lr=0x8005AB70u; dispatch(c,c->ctr); } // 8005AB6C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005AB70
  c->r[3]=0u+0x00000000u; // 8005AB74
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8005AB78
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005AB7C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 8005AB80
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 8005AB84
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8005AB88
L_8005AB8C:;
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005AB8C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005AB90
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8005AB94
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[2]);} // 8005AB98
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 8005AB9C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[0]);} // 8005ABA0
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8005ABA4
  c->r[30]=R32(c->r[1]+0x00000058u); // 8005ABA8
  c->r[0]=R32(c->r[1]+0x00000064u); // 8005ABAC
  c->lr=c->r[0]; // 8005ABB0
  c->r[1]=c->r[1]+0x00000060u; // 8005ABB4
  return; // 8005ABB8
}

// fn_8005ABBC
void f_8005ABBC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 8005ABBC
  W32(c->r[3]+0x00000088u,c->r[0]); // 8005ABC0
  return; // 8005ABC4
}

// fn_8005ABC8
void f_8005ABC8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 8005ABC8
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 8005ABCC
  return; // 8005ABD0
}

// fn_8005ABD4
void f_8005ABD4(Ctx* __restrict c) {
  c->r[5]=R32(c->r[4]+0x00000028u); // 8005ABD4
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 8005ABD8
  W32(c->r[3]+0x00000000u,c->r[5]); // 8005ABDC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8005ABE0
  c->r[0]=R32(c->r[4]+0x00000030u); // 8005ABE4
  W32(c->r[3]+0x00000008u,c->r[0]); // 8005ABE8
  return; // 8005ABEC
}

// fn_8005ABF0
void f_8005ABF0(Ctx* __restrict c) {
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8005ABF0
  return; // 8005ABF4
}

// fn_8005ABF8
void f_8005ABF8(Ctx* __restrict c) {
  W32(c->r[3]+0x00000074u,c->r[4]); // 8005ABF8
  return; // 8005ABFC
}

// fn_8005AC00
void f_8005AC00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005AC00
  c->r[0]=c->lr; // 8005AC04
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005AC08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005AC0C
  c->r[31]=c->r[3]|c->r[3]; // 8005AC10
  c->lr=0x8005AC18u; f_8007AB30(c); // 8005AC14
  c->lr=0x8005AC1Cu; f_800782B8(c); // 8005AC18
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8005AC1C
  c->r[4]=0u+0x802B0000u; // 8005AC20
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8005AC24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005AC28
  c->r[4]=c->r[4]+0xFFFFE720u; // 8005AC2C
  c->r[0]=c->r[4]+c->r[0]; // 8005AC30
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 8005AC34
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005AC38
  c->lr=c->r[0]; // 8005AC3C
  c->r[1]=c->r[1]+0x00000010u; // 8005AC40
  return; // 8005AC44
}

// fn_8005AC48
void f_8005AC48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005AC48
  c->r[0]=c->lr; // 8005AC4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005AC50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005AC54
  c->r[31]=c->r[3]|c->r[3]; // 8005AC58
  c->lr=0x8005AC60u; f_8004E0EC(c); // 8005AC5C
  c->r[4]=0u+0x802B0000u; // 8005AC60
  c->r[3]=c->r[31]|c->r[31]; // 8005AC64
  c->r[4]=c->r[4]+0xFFFFE8D0u; // 8005AC68
  W32(c->r[31]+0x00000000u,c->r[4]); // 8005AC6C
  c->r[12]=R32(c->r[31]+0x00000000u); // 8005AC70
  c->r[12]=R32(c->r[12]+0x00000008u); // 8005AC74
  c->ctr=c->r[12]; // 8005AC78
  if (true) { c->lr=0x8005AC80u; dispatch(c,c->ctr); } // 8005AC7C
  c->r[3]=c->r[31]|c->r[31]; // 8005AC80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005AC84
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005AC88
  c->lr=c->r[0]; // 8005AC8C
  c->r[1]=c->r[1]+0x00000010u; // 8005AC90
  return; // 8005AC94
}

// fn_8005AC98
void f_8005AC98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005AC98
  c->r[0]=c->lr; // 8005AC9C
  c->r[3]=0u+0x00000000u; // 8005ACA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005ACA4
  c->lr=0x8005ACACu; f_80059E48(c); // 8005ACA8
  c->lr=0x8005ACB0u; f_80058154(c); // 8005ACAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005ACB0
  c->lr=c->r[0]; // 8005ACB4
  c->r[1]=c->r[1]+0x00000010u; // 8005ACB8
  return; // 8005ACBC
}

// fn_8005ACC0
void f_8005ACC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005ACC0
  c->r[0]=c->lr; // 8005ACC4
  c->r[3]=0u+0x00000000u; // 8005ACC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005ACCC
  c->lr=0x8005ACD4u; f_80059E48(c); // 8005ACD0
  c->lr=0x8005ACD8u; f_80058190(c); // 8005ACD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005ACD8
  c->lr=c->r[0]; // 8005ACDC
  c->r[1]=c->r[1]+0x00000010u; // 8005ACE0
  return; // 8005ACE4
}

// fn_8005ACE8
void f_8005ACE8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000058u); // 8005ACE8
  f_80059E98(c); return; // 8005ACEC
}

// fn_8005ACF0
void f_8005ACF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005ACF0
  c->r[0]=c->lr; // 8005ACF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005ACF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005ACFC
  c->r[31]=c->r[3]|c->r[3]; // 8005AD00
  c->lr=0x8005AD08u; f_8004E130(c); // 8005AD04
  c->r[0]=R32(c->r[31]+0x00000050u); // 8005AD08
  c->r[3]=c->r[31]|c->r[31]; // 8005AD0C
  c->r[4]=0u+0x00000000u; // 8005AD10
  c->r[0]=c->r[0]|0x00000002u; // 8005AD14
  W32(c->r[31]+0x00000050u,c->r[0]); // 8005AD18
  c->r[12]=R32(c->r[31]+0x00000000u); // 8005AD1C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8005AD20
  c->ctr=c->r[12]; // 8005AD24
  if (true) { c->lr=0x8005AD2Cu; dispatch(c,c->ctr); } // 8005AD28
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005AD2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005AD30
  c->lr=c->r[0]; // 8005AD34
  c->r[1]=c->r[1]+0x00000010u; // 8005AD38
  return; // 8005AD3C
}

// fn_8005AD40
void f_8005AD40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005AD40
  c->r[0]=c->lr; // 8005AD44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005AD48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005AD4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8005AD50
  c->r[30]=c->r[3]|c->r[3]; // 8005AD54
  c->r[31]=R32(c->r[3]+0x00000058u); // 8005AD58
  c->lr=0x8005AD60u; f_8004E190(c); // 8005AD5C
  W32(c->r[30]+0x00000058u,c->r[31]); // 8005AD60
  c->r[3]=c->r[30]+0x000001A0u; // 8005AD64
  c->r[4]=0u+0x00000000u; // 8005AD68
  c->r[5]=0u+0x000002C8u; // 8005AD6C
  c->lr=0x8005AD74u; f_8000443C(c); // 8005AD70
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005AD74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005AD78
  c->r[30]=R32(c->r[1]+0x00000008u); // 8005AD7C
  c->lr=c->r[0]; // 8005AD80
  c->r[1]=c->r[1]+0x00000010u; // 8005AD84
  return; // 8005AD88
}

// fn_8005AD8C
void f_8005AD8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005AD8C
  c->r[0]=c->lr; // 8005AD90
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005AD94
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8005AD98
  W32(c->r[1]+0x000000BCu,c->r[31]); // 8005AD9C
  c->r[31]=c->r[4]|c->r[4]; // 8005ADA0
  W32(c->r[1]+0x000000B8u,c->r[30]); // 8005ADA4
  c->r[30]=c->r[3]|c->r[3]; // 8005ADA8
  W32(c->r[1]+0x000000B4u,c->r[29]); // 8005ADAC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8005ADB0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 8005ADB4
  c->r[29]=R32(c->r[1]+0x0000003Cu); // 8005ADB8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8005ADBC
  c->r[12]=R32(c->r[1]+0x00000040u); // 8005ADC0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8005ADC4
  c->r[11]=R32(c->r[1]+0x0000002Cu); // 8005ADC8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8005ADCC
  c->r[10]=R32(c->r[1]+0x00000030u); // 8005ADD0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8005ADD4
  c->r[9]=R32(c->r[1]+0x00000034u); // 8005ADD8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8005ADDC
  c->r[8]=R32(c->r[1]+0x00000020u); // 8005ADE0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8005ADE4
  c->r[7]=R32(c->r[1]+0x00000024u); // 8005ADE8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8005ADEC
  c->r[6]=R32(c->r[1]+0x00000028u); // 8005ADF0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8005ADF4
  c->r[5]=R32(c->r[1]+0x00000014u); // 8005ADF8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8005ADFC
  c->r[4]=R32(c->r[1]+0x00000018u); // 8005AE00
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8005AE04
  W32(c->r[1]+0x0000009Cu,c->r[29]); // 8005AE08
  W32(c->r[1]+0x000000A0u,c->r[12]); // 8005AE0C
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 8005AE10
  W32(c->r[1]+0x000000B0u,c->r[28]); // 8005AE14
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[9]=c->ps1[9]=RF32(ea);} // 8005AE18
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8005AE1C
  c->r[28]=R32(c->r[1]+0x00000038u); // 8005AE20
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 8005AE24
  W32(c->r[1]+0x00000098u,c->r[28]); // 8005AE28
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 8005AE2C
  W32(c->r[1]+0x00000090u,c->r[10]); // 8005AE30
  {uint32_t ea=c->r[1]+0x00000098u; c->f[11]=c->ps1[11]=RF32(ea);} // 8005AE34
  W32(c->r[1]+0x00000094u,c->r[9]); // 8005AE38
  {uint32_t ea=c->r[1]+0x00000090u; c->f[7]=c->ps1[7]=RF32(ea);} // 8005AE3C
  W32(c->r[1]+0x00000080u,c->r[8]); // 8005AE40
  {uint32_t ea=c->r[1]+0x00000094u; c->f[6]=c->ps1[6]=RF32(ea);} // 8005AE44
  W32(c->r[1]+0x00000084u,c->r[7]); // 8005AE48
  {uint32_t ea=c->r[1]+0x00000080u; c->f[5]=c->ps1[5]=RF32(ea);} // 8005AE4C
  W32(c->r[1]+0x00000088u,c->r[6]); // 8005AE50
  {uint32_t ea=c->r[1]+0x00000084u; c->f[4]=c->ps1[4]=RF32(ea);} // 8005AE54
  W32(c->r[1]+0x00000074u,c->r[5]); // 8005AE58
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=c->ps1[3]=RF32(ea);} // 8005AE5C
  W32(c->r[1]+0x00000078u,c->r[4]); // 8005AE60
  {uint32_t ea=c->r[1]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005AE64
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8005AE68
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005AE6C
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8005AE70
  {uint32_t ea=c->r[3]+0x000001ACu; WF32(ea,c->f[11]);} // 8005AE74
  {uint32_t ea=c->r[3]+0x000001B0u; WF32(ea,c->f[10]);} // 8005AE78
  {uint32_t ea=c->r[3]+0x000001B4u; WF32(ea,c->f[9]);} // 8005AE7C
  {uint32_t ea=c->r[3]+0x000001B8u; WF32(ea,c->f[8]);} // 8005AE80
  {uint32_t ea=c->r[3]+0x000001BCu; WF32(ea,c->f[7]);} // 8005AE84
  {uint32_t ea=c->r[3]+0x000001C0u; WF32(ea,c->f[6]);} // 8005AE88
  {uint32_t ea=c->r[3]+0x000001C4u; WF32(ea,c->f[5]);} // 8005AE8C
  {uint32_t ea=c->r[3]+0x000001C8u; WF32(ea,c->f[4]);} // 8005AE90
  {uint32_t ea=c->r[3]+0x000001CCu; WF32(ea,c->f[3]);} // 8005AE94
  {uint32_t ea=c->r[3]+0x000001D0u; WF32(ea,c->f[2]);} // 8005AE98
  {uint32_t ea=c->r[3]+0x000001D4u; WF32(ea,c->f[1]);} // 8005AE9C
  {uint32_t ea=c->r[3]+0x000001D8u; WF32(ea,c->f[0]);} // 8005AEA0
  c->lr=0x8005AEA8u; f_80050B40(c); // 8005AEA4
  c->r[5]=R32(c->r[31]+0x00000018u); // 8005AEA8
  c->r[3]=c->r[30]|c->r[30]; // 8005AEAC
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8005AEB0
  c->r[4]=c->r[1]+0x00000068u; // 8005AEB4
  W32(c->r[1]+0x00000068u,c->r[5]); // 8005AEB8
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 8005AEBC
  c->r[0]=R32(c->r[31]+0x00000020u); // 8005AEC0
  W32(c->r[1]+0x00000070u,c->r[0]); // 8005AEC4
  c->r[12]=R32(c->r[30]+0x00000000u); // 8005AEC8
  c->r[12]=R32(c->r[12]+0x000000FCu); // 8005AECC
  c->ctr=c->r[12]; // 8005AED0
  if (true) { c->lr=0x8005AED8u; dispatch(c,c->ctr); } // 8005AED4
  c->r[12]=R32(c->r[30]+0x00000000u); // 8005AED8
  c->r[3]=c->r[30]|c->r[30]; // 8005AEDC
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005AEE0
  c->r[12]=R32(c->r[12]+0x000000F4u); // 8005AEE4
  c->ctr=c->r[12]; // 8005AEE8
  if (true) { c->lr=0x8005AEF0u; dispatch(c,c->ctr); } // 8005AEEC
  c->r[5]=R32(c->r[31]+0x00000000u); // 8005AEF0
  c->r[3]=c->r[30]|c->r[30]; // 8005AEF4
  c->r[4]=R32(c->r[31]+0x00000004u); // 8005AEF8
  c->r[0]=R32(c->r[31]+0x00000008u); // 8005AEFC
  W32(c->r[1]+0x0000005Cu,c->r[5]); // 8005AF00
  W32(c->r[1]+0x00000060u,c->r[4]); // 8005AF04
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8005AF08
  W32(c->r[1]+0x00000064u,c->r[0]); // 8005AF0C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005AF10
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005AF14
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[2]);} // 8005AF18
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 8005AF1C
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 8005AF20
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 8005AF24
  c->r[4]=R32(c->r[31]+0x00000010u); // 8005AF28
  c->r[0]=R32(c->r[31]+0x00000014u); // 8005AF2C
  W32(c->r[1]+0x00000050u,c->r[5]); // 8005AF30
  W32(c->r[1]+0x00000054u,c->r[4]); // 8005AF34
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 8005AF38
  W32(c->r[1]+0x00000058u,c->r[0]); // 8005AF3C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005AF40
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005AF44
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[2]);} // 8005AF48
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 8005AF4C
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 8005AF50
  c->r[0]=R32(c->r[31]+0x00000028u); // 8005AF54
  W32(c->r[30]+0x0000026Cu,c->r[0]); // 8005AF58
  c->r[12]=R32(c->r[30]+0x00000000u); // 8005AF5C
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 8005AF60
  c->r[12]=R32(c->r[12]+0x00000240u); // 8005AF64
  c->ctr=c->r[12]; // 8005AF68
  if (true) { c->lr=0x8005AF70u; dispatch(c,c->ctr); } // 8005AF6C
  c->r[12]=R32(c->r[30]+0x00000000u); // 8005AF70
  c->r[3]=c->r[30]|c->r[30]; // 8005AF74
  c->r[4]=R32(c->r[31]+0x00000030u); // 8005AF78
  c->r[12]=R32(c->r[12]+0x00000044u); // 8005AF7C
  c->ctr=c->r[12]; // 8005AF80
  if (true) { c->lr=0x8005AF88u; dispatch(c,c->ctr); } // 8005AF84
  c->r[12]=R32(c->r[30]+0x00000000u); // 8005AF88
  c->r[3]=c->r[30]|c->r[30]; // 8005AF8C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005AF90
  c->r[12]=R32(c->r[12]+0x0000014Cu); // 8005AF94
  c->ctr=c->r[12]; // 8005AF98
  if (true) { c->lr=0x8005AFA0u; dispatch(c,c->ctr); } // 8005AF9C
  c->r[12]=R32(c->r[30]+0x00000000u); // 8005AFA0
  c->r[3]=c->r[30]|c->r[30]; // 8005AFA4
  {uint32_t ea=c->r[2]+0xFFFF8C74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005AFA8
  c->r[12]=R32(c->r[12]+0x0000015Cu); // 8005AFAC
  c->ctr=c->r[12]; // 8005AFB0
  if (true) { c->lr=0x8005AFB8u; dispatch(c,c->ctr); } // 8005AFB4
  c->r[12]=R32(c->r[30]+0x00000000u); // 8005AFB8
  c->r[3]=c->r[30]|c->r[30]; // 8005AFBC
  c->r[4]=0u+0x00000001u; // 8005AFC0
  c->r[12]=R32(c->r[12]+0x00000164u); // 8005AFC4
  c->ctr=c->r[12]; // 8005AFC8
  if (true) { c->lr=0x8005AFD0u; dispatch(c,c->ctr); } // 8005AFCC
  c->r[12]=R32(c->r[30]+0x00000000u); // 8005AFD0
  c->r[3]=c->r[30]|c->r[30]; // 8005AFD4
  c->r[4]=0u+0xFFFFFFFFu; // 8005AFD8
  c->r[12]=R32(c->r[12]+0x000002BCu); // 8005AFDC
  c->ctr=c->r[12]; // 8005AFE0
  if (true) { c->lr=0x8005AFE8u; dispatch(c,c->ctr); } // 8005AFE4
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005AFE8
  c->r[3]=c->r[30]|c->r[30]; // 8005AFEC
  c->r[4]=c->r[1]+0x00000044u; // 8005AFF0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8005AFF4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8005AFF8
  c->r[6]=R32(c->r[1]+0x00000008u); // 8005AFFC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8005B000
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8005B004
  c->r[0]=R32(c->r[1]+0x00000010u); // 8005B008
  W32(c->r[1]+0x00000044u,c->r[6]); // 8005B00C
  W32(c->r[1]+0x00000048u,c->r[5]); // 8005B010
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8005B014
  c->r[12]=R32(c->r[30]+0x00000000u); // 8005B018
  c->r[12]=R32(c->r[12]+0x00000118u); // 8005B01C
  c->ctr=c->r[12]; // 8005B020
  if (true) { c->lr=0x8005B028u; dispatch(c,c->ctr); } // 8005B024
  c->r[0]=R32(c->r[31]+0x00000040u); // 8005B028
  cmps(c,0,(int32_t)c->r[0],0); // 8005B02C
  if (crb(c,2)) { goto L_8005B03C; } // 8005B030
  {uint32_t ea=c->r[2]+0xFFFF8C74u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005B034
  goto L_8005B040; // 8005B038
L_8005B03C:;
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005B03C
L_8005B040:;
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[0]);} // 8005B040
  c->r[3]=c->r[30]|c->r[30]; // 8005B044
  c->r[4]=0u+0x00000001u; // 8005B048
  c->r[12]=R32(c->r[30]+0x00000000u); // 8005B04C
  c->r[12]=R32(c->r[12]+0x00000144u); // 8005B050
  c->ctr=c->r[12]; // 8005B054
  if (true) { c->lr=0x8005B05Cu; dispatch(c,c->ctr); } // 8005B058
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005B05C
  c->r[0]=0u+0x00000000u; // 8005B060
  {uint32_t ea=c->r[2]+0xFFFF8C74u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005B064
  c->r[3]=c->r[30]|c->r[30]; // 8005B068
  {uint32_t ea=c->r[30]+0x000002ECu; WF32(ea,c->f[1]);} // 8005B06C
  {uint32_t ea=c->r[30]+0x000002F0u; WF32(ea,c->f[1]);} // 8005B070
  {uint32_t ea=c->r[30]+0x000002F8u; WF32(ea,c->f[0]);} // 8005B074
  W32(c->r[30]+0x00000460u,c->r[0]); // 8005B078
  W32(c->r[30]+0x00000298u,c->r[0]); // 8005B07C
  {uint32_t ea=c->r[30]+0x000002B4u; WF32(ea,c->f[1]);} // 8005B080
  W32(c->r[30]+0x0000029Cu,c->r[0]); // 8005B084
  {uint32_t ea=c->r[30]+0x000002B8u; WF32(ea,c->f[1]);} // 8005B088
  W32(c->r[30]+0x000002A0u,c->r[0]); // 8005B08C
  {uint32_t ea=c->r[30]+0x000002BCu; WF32(ea,c->f[1]);} // 8005B090
  W32(c->r[30]+0x000002A4u,c->r[0]); // 8005B094
  {uint32_t ea=c->r[30]+0x000002C0u; WF32(ea,c->f[1]);} // 8005B098
  W32(c->r[30]+0x000002A8u,c->r[0]); // 8005B09C
  {uint32_t ea=c->r[30]+0x000002C4u; WF32(ea,c->f[1]);} // 8005B0A0
  W32(c->r[30]+0x000002ACu,c->r[0]); // 8005B0A4
  {uint32_t ea=c->r[30]+0x000002C8u; WF32(ea,c->f[1]);} // 8005B0A8
  W32(c->r[30]+0x000002B0u,c->r[0]); // 8005B0AC
  {uint32_t ea=c->r[30]+0x000002CCu; WF32(ea,c->f[1]);} // 8005B0B0
  c->r[12]=R32(c->r[30]+0x00000000u); // 8005B0B4
  c->r[12]=R32(c->r[12]+0x000001ECu); // 8005B0B8
  c->ctr=c->r[12]; // 8005B0BC
  if (true) { c->lr=0x8005B0C4u; dispatch(c,c->ctr); } // 8005B0C0
  c->r[12]=R32(c->r[30]+0x00000000u); // 8005B0C4
  c->r[3]=c->r[30]|c->r[30]; // 8005B0C8
  c->r[4]=0u+0x00000000u; // 8005B0CC
  c->r[12]=R32(c->r[12]+0x000002D0u); // 8005B0D0
  c->ctr=c->r[12]; // 8005B0D4
  if (true) { c->lr=0x8005B0DCu; dispatch(c,c->ctr); } // 8005B0D8
  c->r[0]=R32(c->r[1]+0x000000C4u); // 8005B0DC
  c->r[31]=R32(c->r[1]+0x000000BCu); // 8005B0E0
  c->r[30]=R32(c->r[1]+0x000000B8u); // 8005B0E4
  c->r[29]=R32(c->r[1]+0x000000B4u); // 8005B0E8
  c->r[28]=R32(c->r[1]+0x000000B0u); // 8005B0EC
  c->lr=c->r[0]; // 8005B0F0
  c->r[1]=c->r[1]+0x000000C0u; // 8005B0F4
  return; // 8005B0F8
}

// fn_8005B0FC
void f_8005B0FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005B0FC
  c->r[0]=c->lr; // 8005B100
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005B104
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005B108
  c->r[31]=c->r[3]|c->r[3]; // 8005B10C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005B110
  c->r[12]=R32(c->r[12]+0x000000E8u); // 8005B114
  c->ctr=c->r[12]; // 8005B118
  if (true) { c->lr=0x8005B120u; dispatch(c,c->ctr); } // 8005B11C
  c->r[12]=R32(c->r[31]+0x00000000u); // 8005B120
  c->r[3]=c->r[31]|c->r[31]; // 8005B124
  c->r[4]=0u+0x00000000u; // 8005B128
  c->r[12]=R32(c->r[12]+0x00000154u); // 8005B12C
  c->ctr=c->r[12]; // 8005B130
  if (true) { c->lr=0x8005B138u; dispatch(c,c->ctr); } // 8005B134
  {uint32_t ea=c->r[2]+0xFFFF8C78u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005B138
  c->r[0]=0u+0x00000000u; // 8005B13C
  W32(c->r[31]+0x0000028Cu,c->r[0]); // 8005B140
  {uint32_t ea=c->r[31]+0x00000274u; WF32(ea,c->f[0]);} // 8005B144
  W32(c->r[31]+0x00000288u,c->r[0]); // 8005B148
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8005B14C
  W32(c->r[31]+0x00000060u,c->r[0]); // 8005B150
  c->lr=0x8005B158u; f_8007AB30(c); // 8005B154
  c->lr=0x8005B15Cu; f_800782B8(c); // 8005B158
  c->lr=0x8005B160u; f_8007C358(c); // 8005B15C
  c->lr=0x8005B164u; f_800E3B98(c); // 8005B160
  c->r[0]=0u+0x00000001u; // 8005B164
  W16(c->r[31]+0x0000026Au,c->r[3]); // 8005B168
  W32(c->r[31]+0x00000264u,c->r[0]); // 8005B16C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005B170
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005B174
  c->lr=c->r[0]; // 8005B178
  c->r[1]=c->r[1]+0x00000010u; // 8005B17C
  return; // 8005B180
}

// fn_8005B184
void f_8005B184(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000410u); // 8005B184
  return; // 8005B188
}

// fn_8005B18C
void f_8005B18C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000410u,c->r[4]); // 8005B18C
  return; // 8005B190
}

// fn_8005B194
void f_8005B194(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000414u); // 8005B194
  return; // 8005B198
}

// fn_8005B19C
void f_8005B19C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000414u,c->r[4]); // 8005B19C
  return; // 8005B1A0
}

// fn_8005B1A4
void f_8005B1A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005B1A4
  c->r[0]=c->lr; // 8005B1A8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8005B1AC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8005B1B0
  c->r[31]=c->r[3]|c->r[3]; // 8005B1B4
  c->lr=0x8005B1BCu; f_8007AB30(c); // 8005B1B8
  {uint32_t ea=c->r[31]+0x00000274u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005B1BC
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005B1C0
  fcmp(c,0,c->f[1],c->f[0]); // 8005B1C4
  if (!crb(c,1)) { goto L_8005B1D4; } // 8005B1C8
  c->r[3]=0u+0x00000000u; // 8005B1CC
  goto L_8005B27C; // 8005B1D0
L_8005B1D4:;
  c->r[4]=c->r[3]|c->r[3]; // 8005B1D4
  c->r[3]=c->r[1]+0x0000002Cu; // 8005B1D8
  c->lr=0x8005B1E0u; f_800783A4(c); // 8005B1DC
  c->r[3]=R32(c->r[31]+0x00000038u); // 8005B1E0
  c->r[0]=R32(c->r[1]+0x00000030u); // 8005B1E4
  W32(c->r[1]+0x00000024u,c->r[3]); // 8005B1E8
  c->r[4]=R32(c->r[31]+0x00000034u); // 8005B1EC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8005B1F0
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8005B1F4
  c->r[6]=R32(c->r[1]+0x0000002Cu); // 8005B1F8
  c->r[5]=R32(c->r[1]+0x00000034u); // 8005B1FC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005B200
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8005B204
  W32(c->r[1]+0x00000038u,c->r[6]); // 8005B208
  fcmp(c,0,c->f[1],c->f[0]); // 8005B20C
  W32(c->r[1]+0x00000040u,c->r[5]); // 8005B210
  W32(c->r[1]+0x00000008u,c->r[4]); // 8005B214
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8005B218
  W32(c->r[1]+0x00000010u,c->r[0]); // 8005B21C
  W32(c->r[1]+0x00000020u,c->r[4]); // 8005B220
  W32(c->r[1]+0x00000028u,c->r[0]); // 8005B224
  if (!crb(c,0)) { goto L_8005B25C; } // 8005B228
  c->r[12]=R32(c->r[31]+0x00000000u); // 8005B22C
  c->r[3]=c->r[31]|c->r[31]; // 8005B230
  c->r[4]=0u+0x00000004u; // 8005B234
  c->r[12]=R32(c->r[12]+0x00000248u); // 8005B238
  c->ctr=c->r[12]; // 8005B23C
  if (true) { c->lr=0x8005B244u; dispatch(c,c->ctr); } // 8005B240
  c->r[4]=0u-c->r[3]; // 8005B244
  c->r[0]=0u+0x00000002u; // 8005B248
  c->r[3]=c->r[4]|c->r[3]; // 8005B24C
  c->r[3]=sraw(c,c->r[3],31); // 8005B250
  c->r[3]=c->r[0]&~c->r[3]; // 8005B254
  goto L_8005B27C; // 8005B258
L_8005B25C:;
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8005B25C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8005B260
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8005B264
  W32(c->r[1]+0x00000014u,c->r[4]); // 8005B268
  fcmp(c,0,c->f[1],c->f[0]); // 8005B26C
  W32(c->r[1]+0x00000018u,c->r[3]); // 8005B270
  c->r[3]=c->cr; // 8005B274
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 8005B278
L_8005B27C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8005B27C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8005B280
  c->lr=c->r[0]; // 8005B284
  c->r[1]=c->r[1]+0x00000050u; // 8005B288
  return; // 8005B28C
}

// fn_8005B290
void f_8005B290(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005B290
  c->r[0]=c->lr; // 8005B294
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005B298
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005B29C
  c->r[31]=c->r[3]|c->r[3]; // 8005B2A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8005B2A4
  c->r[12]=R32(c->r[12]+0x00000244u); // 8005B2A8
  c->ctr=c->r[12]; // 8005B2AC
  if (true) { c->lr=0x8005B2B4u; dispatch(c,c->ctr); } // 8005B2B0
  cmps(c,0,(int32_t)c->r[3],10); // 8005B2B4
  if (crb(c,2)) { goto L_8005B2FC; } // 8005B2B8
  c->r[12]=R32(c->r[31]+0x00000000u); // 8005B2BC
  c->r[3]=c->r[31]|c->r[31]; // 8005B2C0
  c->r[12]=R32(c->r[12]+0x00000244u); // 8005B2C4
  c->ctr=c->r[12]; // 8005B2C8
  if (true) { c->lr=0x8005B2D0u; dispatch(c,c->ctr); } // 8005B2CC
  cmps(c,0,(int32_t)c->r[3],11); // 8005B2D0
  if (crb(c,2)) { goto L_8005B2FC; } // 8005B2D4
  c->r[12]=R32(c->r[31]+0x00000000u); // 8005B2D8
  c->r[3]=c->r[31]|c->r[31]; // 8005B2DC
  c->r[12]=R32(c->r[12]+0x00000244u); // 8005B2E0
  c->ctr=c->r[12]; // 8005B2E4
  if (true) { c->lr=0x8005B2ECu; dispatch(c,c->ctr); } // 8005B2E8
  cmps(c,0,(int32_t)c->r[3],8); // 8005B2EC
  if (crb(c,2)) { goto L_8005B2FC; } // 8005B2F0
  c->r[3]=0u+0x00000001u; // 8005B2F4
  goto L_8005B300; // 8005B2F8
L_8005B2FC:;
  c->r[3]=0u+0x00000000u; // 8005B2FC
L_8005B300:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005B300
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005B304
  c->lr=c->r[0]; // 8005B308
  c->r[1]=c->r[1]+0x00000010u; // 8005B30C
  return; // 8005B310
}

// fn_8005B314
void f_8005B314(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B314
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 8005B318
  return; // 8005B31C
}

// fn_8005B320
void f_8005B320(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],1); // 8005B320
  if (!crb(c,2)) { goto L_8005B338; } // 8005B324
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B328
  c->r[0]=c->r[0]|0x00000001u; // 8005B32C
  W32(c->r[3]+0x00000424u,c->r[0]); // 8005B330
  return; // 8005B334
L_8005B338:;
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B338
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8005B33C
  W32(c->r[3]+0x00000424u,c->r[0]); // 8005B340
  return; // 8005B344
}

// fn_8005B348
void f_8005B348(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B348
  c->r[3]=rotl(c->r[0],31)&0x00000001u; // 8005B34C
  return; // 8005B350
}

// fn_8005B354
void f_8005B354(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],1); // 8005B354
  if (!crb(c,2)) { goto L_8005B36C; } // 8005B358
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B35C
  c->r[0]=c->r[0]|0x00000002u; // 8005B360
  W32(c->r[3]+0x00000424u,c->r[0]); // 8005B364
  return; // 8005B368
L_8005B36C:;
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B36C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 8005B370
  W32(c->r[3]+0x00000424u,c->r[0]); // 8005B374
  return; // 8005B378
}

// fn_8005B37C
void f_8005B37C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B37C
  c->r[3]=rotl(c->r[0],30)&0x00000001u; // 8005B380
  return; // 8005B384
}

// fn_8005B388
void f_8005B388(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],1); // 8005B388
  if (!crb(c,2)) { goto L_8005B3A0; } // 8005B38C
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B390
  c->r[0]=c->r[0]|0x00000004u; // 8005B394
  W32(c->r[3]+0x00000424u,c->r[0]); // 8005B398
  return; // 8005B39C
L_8005B3A0:;
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B3A0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8005B3A4
  W32(c->r[3]+0x00000424u,c->r[0]); // 8005B3A8
  return; // 8005B3AC
}

// fn_8005B3B0
void f_8005B3B0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B3B0
  c->r[3]=rotl(c->r[0],29)&0x00000001u; // 8005B3B4
  return; // 8005B3B8
}

// fn_8005B3BC
void f_8005B3BC(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],1); // 8005B3BC
  if (!crb(c,2)) { goto L_8005B3D4; } // 8005B3C0
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B3C4
  c->r[0]=c->r[0]|0x00000008u; // 8005B3C8
  W32(c->r[3]+0x00000424u,c->r[0]); // 8005B3CC
  return; // 8005B3D0
L_8005B3D4:;
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B3D4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 8005B3D8
  W32(c->r[3]+0x00000424u,c->r[0]); // 8005B3DC
  return; // 8005B3E0
}

// fn_8005B3E4
void f_8005B3E4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B3E4
  c->r[3]=rotl(c->r[0],28)&0x00000001u; // 8005B3E8
  return; // 8005B3EC
}

// fn_8005B3F0
void f_8005B3F0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],1); // 8005B3F0
  if (!crb(c,2)) { goto L_8005B408; } // 8005B3F4
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B3F8
  c->r[0]=c->r[0]|0x00000010u; // 8005B3FC
  W32(c->r[3]+0x00000424u,c->r[0]); // 8005B400
  return; // 8005B404
L_8005B408:;
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B408
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 8005B40C
  W32(c->r[3]+0x00000424u,c->r[0]); // 8005B410
  return; // 8005B414
}

// fn_8005B418
void f_8005B418(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B418
  c->r[3]=rotl(c->r[0],27)&0x00000001u; // 8005B41C
  return; // 8005B420
}

// fn_8005B424
void f_8005B424(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],1); // 8005B424
  if (!crb(c,2)) { goto L_8005B43C; } // 8005B428
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B42C
  c->r[0]=c->r[0]|0x00000020u; // 8005B430
  W32(c->r[3]+0x00000424u,c->r[0]); // 8005B434
  return; // 8005B438
L_8005B43C:;
  c->r[0]=R32(c->r[3]+0x00000424u); // 8005B43C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 8005B440
  W32(c->r[3]+0x00000424u,c->r[0]); // 8005B444
  return; // 8005B448
}

// fn_8005B44C
void f_8005B44C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000042Cu); // 8005B44C
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 8005B450
  return; // 8005B454
}

// fn_8005B458
void f_8005B458(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],1); // 8005B458
  if (!crb(c,2)) { goto L_8005B470; } // 8005B45C
  c->r[0]=R32(c->r[3]+0x0000042Cu); // 8005B460
  c->r[0]=c->r[0]|0x00000001u; // 8005B464
  W32(c->r[3]+0x0000042Cu,c->r[0]); // 8005B468
  return; // 8005B46C
L_8005B470:;
  c->r[0]=R32(c->r[3]+0x0000042Cu); // 8005B470
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8005B474
  W32(c->r[3]+0x0000042Cu,c->r[0]); // 8005B478
  return; // 8005B47C
}

// fn_8005B480
void f_8005B480(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000042Cu); // 8005B480
  c->r[3]=rotl(c->r[0],31)&0x00000001u; // 8005B484
  return; // 8005B488
}

// fn_8005B48C
void f_8005B48C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],1); // 8005B48C
  if (!crb(c,2)) { goto L_8005B4A4; } // 8005B490
  c->r[0]=R32(c->r[3]+0x0000042Cu); // 8005B494
  c->r[0]=c->r[0]|0x00000002u; // 8005B498
  W32(c->r[3]+0x0000042Cu,c->r[0]); // 8005B49C
  return; // 8005B4A0
L_8005B4A4:;
  c->r[0]=R32(c->r[3]+0x0000042Cu); // 8005B4A4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 8005B4A8
  W32(c->r[3]+0x0000042Cu,c->r[0]); // 8005B4AC
  return; // 8005B4B0
}

// fn_8005B4B4
void f_8005B4B4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000042Cu); // 8005B4B4
  c->r[3]=rotl(c->r[0],30)&0x00000001u; // 8005B4B8
  return; // 8005B4BC
}

// fn_8005B4C0
void f_8005B4C0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],1); // 8005B4C0
  if (!crb(c,2)) { goto L_8005B4D8; } // 8005B4C4
  c->r[0]=R32(c->r[3]+0x0000042Cu); // 8005B4C8
  c->r[0]=c->r[0]|0x00000004u; // 8005B4CC
  W32(c->r[3]+0x0000042Cu,c->r[0]); // 8005B4D0
  return; // 8005B4D4
L_8005B4D8:;
  c->r[0]=R32(c->r[3]+0x0000042Cu); // 8005B4D8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8005B4DC
  W32(c->r[3]+0x0000042Cu,c->r[0]); // 8005B4E0
  return; // 8005B4E4
}

// fn_8005B4E8
void f_8005B4E8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000042Cu); // 8005B4E8
  c->r[3]=rotl(c->r[0],29)&0x00000001u; // 8005B4EC
  return; // 8005B4F0
}

