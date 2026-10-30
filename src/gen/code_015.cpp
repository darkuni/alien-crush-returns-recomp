#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// CalcVolumeRatio__Q44nw4r3snd6detail4UtilFf
void f_8013F69C(Ctx* __restrict c) {
  trace_call(0x8013F69Cu);
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[2]=c->ps1[2]=RF32(ea);} // 8013F69C
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8013F6A0
  fcmp(c,0,c->f[1],c->f[2]); // 8013F6A4
  if (!crb(c,1)) { goto L_8013F6B0; } // 8013F6A8
  goto L_8013F6C4; // 8013F6AC
L_8013F6B0:;
  {uint32_t ea=c->r[2]+0xFFFFA808u; c->f[2]=c->ps1[2]=RF32(ea);} // 8013F6B0
  fcmp(c,0,c->f[1],c->f[2]); // 8013F6B4
  if (!crb(c,0)) { goto L_8013F6C0; } // 8013F6B8
  goto L_8013F6C4; // 8013F6BC
L_8013F6C0:;
  c->f[2]=c->f[1]; // 8013F6C0
L_8013F6C4:;
  {uint32_t ea=c->r[2]+0xFFFFA80Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8013F6C4
  c->r[3]=0u+0x80270000u; // 8013F6C8
  c->r[3]=c->r[3]+0x000045B0u; // 8013F6CC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8013F6D0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8013F6D4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8013F6D8
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8013F6DC
  c->r[0]=c->r[4]+0x00000388u; // 8013F6E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8013F6E4
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 8013F6E8
  c->r[1]=c->r[1]+0x00000010u; // 8013F6EC
  return; // 8013F6F0
}

// CalcPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo
void f_8013F6F4(Ctx* __restrict c) {
  trace_call(0x8013F6F4u);
  {uint32_t ea=c->r[2]+0xFFFFA7F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8013F6F4
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8013F6F8
  fcmp(c,0,c->f[1],c->f[2]); // 8013F6FC
  if (!crb(c,1)) { goto L_8013F708; } // 8013F700
  goto L_8013F71C; // 8013F704
L_8013F708:;
  {uint32_t ea=c->r[2]+0xFFFFA810u; c->f[2]=c->ps1[2]=RF32(ea);} // 8013F708
  fcmp(c,0,c->f[1],c->f[2]); // 8013F70C
  if (!crb(c,0)) { goto L_8013F718; } // 8013F710
  goto L_8013F71C; // 8013F714
L_8013F718:;
  c->f[2]=c->f[1]; // 8013F718
L_8013F71C:;
  {uint32_t ea=c->r[2]+0xFFFFA7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8013F71C
  c->r[4]=0u+0x802C0000u; // 8013F720
  c->r[0]=R32(c->r[3]+0x00000000u); // 8013F724
  c->r[4]=c->r[4]+0x00006348u; // 8013F728
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[2]); // 8013F72C
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[2]=c->ps1[2]=RF32(ea);} // 8013F730
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8013F734
  c->r[0]=R8(c->r[3]+0x00000004u); // 8013F738
  {uint32_t ea=c->r[2]+0xFFFFA814u; c->f[0]=c->ps1[0]=RF32(ea);} // 8013F73C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8013F740
  cmps(c,0,(int32_t)c->r[0],0); // 8013F744
  c->r[4]=R32(c->r[4]+c->r[5]); // 8013F748
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8013F74C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8013F750
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8013F754
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8013F758
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8013F75C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8013F760
  {uint32_t ea=c->r[4]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 8013F764
  if (crb(c,2)) { goto L_8013F774; } // 8013F768
  {uint32_t ea=c->r[4]+0x00000200u; c->f[0]=c->ps1[0]=RF32(ea);} // 8013F76C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 8013F770
L_8013F774:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 8013F774
  cmps(c,0,(int32_t)c->r[0],0); // 8013F778
  if (crb(c,2)) { goto L_8013F7A8; } // 8013F77C
  {uint32_t ea=c->r[2]+0xFFFFA7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8013F780
  fcmp(c,0,c->f[2],c->f[1]); // 8013F784
  if (!crb(c,1)) { goto L_8013F790; } // 8013F788
  goto L_8013F7CC; // 8013F78C
L_8013F790:;
  {uint32_t ea=c->r[2]+0xFFFFA818u; c->f[1]=c->ps1[1]=RF32(ea);} // 8013F790
  fcmp(c,0,c->f[2],c->f[1]); // 8013F794
  if (!crb(c,0)) { goto L_8013F7A0; } // 8013F798
  goto L_8013F7CC; // 8013F79C
L_8013F7A0:;
  c->f[1]=c->f[2]; // 8013F7A0
  goto L_8013F7CC; // 8013F7A4
L_8013F7A8:;
  {uint32_t ea=c->r[2]+0xFFFFA7FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8013F7A8
  fcmp(c,0,c->f[2],c->f[1]); // 8013F7AC
  if (!crb(c,1)) { goto L_8013F7B8; } // 8013F7B0
  goto L_8013F7CC; // 8013F7B4
L_8013F7B8:;
  {uint32_t ea=c->r[2]+0xFFFFA818u; c->f[1]=c->ps1[1]=RF32(ea);} // 8013F7B8
  fcmp(c,0,c->f[2],c->f[1]); // 8013F7BC
  if (!crb(c,0)) { goto L_8013F7C8; } // 8013F7C0
  goto L_8013F7CC; // 8013F7C4
L_8013F7C8:;
  c->f[1]=c->f[2]; // 8013F7C8
L_8013F7CC:;
  c->r[1]=c->r[1]+0x00000010u; // 8013F7CC
  return; // 8013F7D0
}

// CalcSurroundPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo
void f_8013F7D4(Ctx* __restrict c) {
  trace_call(0x8013F7D4u);
  {uint32_t ea=c->r[2]+0xFFFFA7FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8013F7D4
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8013F7D8
  fcmp(c,0,c->f[1],c->f[0]); // 8013F7DC
  if (!crb(c,1)) { goto L_8013F7E8; } // 8013F7E0
  goto L_8013F7FC; // 8013F7E4
L_8013F7E8:;
  {uint32_t ea=c->r[2]+0xFFFFA818u; c->f[0]=c->ps1[0]=RF32(ea);} // 8013F7E8
  fcmp(c,0,c->f[1],c->f[0]); // 8013F7EC
  if (!crb(c,0)) { goto L_8013F7F8; } // 8013F7F0
  goto L_8013F7FC; // 8013F7F4
L_8013F7F8:;
  c->f[0]=c->f[1]; // 8013F7F8
L_8013F7FC:;
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[2]=c->ps1[2]=RF32(ea);} // 8013F7FC
  c->r[4]=0u+0x802C0000u; // 8013F800
  c->r[0]=R32(c->r[3]+0x00000000u); // 8013F804
  c->r[4]=c->r[4]+0x00006348u; // 8013F808
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 8013F80C
  {uint32_t ea=c->r[2]+0xFFFFA814u; c->f[0]=c->ps1[0]=RF32(ea);} // 8013F810
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8013F814
  {uint32_t ea=c->r[2]+0xFFFFA7FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8013F818
  c->r[3]=R32(c->r[4]+c->r[0]); // 8013F81C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8013F820
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8013F824
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8013F828
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8013F82C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8013F830
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8013F834
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8013F838
  fcmp(c,0,c->f[0],c->f[3]); // 8013F83C
  if (!crb(c,1)) { goto L_8013F848; } // 8013F840
  goto L_8013F85C; // 8013F844
L_8013F848:;
  {uint32_t ea=c->r[2]+0xFFFFA818u; c->f[3]=c->ps1[3]=RF32(ea);} // 8013F848
  fcmp(c,0,c->f[0],c->f[3]); // 8013F84C
  if (!crb(c,0)) { goto L_8013F858; } // 8013F850
  goto L_8013F85C; // 8013F854
L_8013F858:;
  c->f[3]=c->f[0]; // 8013F858
L_8013F85C:;
  c->f[1]=c->f[3]; // 8013F85C
  c->r[1]=c->r[1]+0x00000010u; // 8013F860
  return; // 8013F864
}

// CalcLpfFreq__Q44nw4r3snd6detail4UtilFf
void f_8013F868(Ctx* __restrict c) {
  trace_call(0x8013F868u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8013F868
  c->r[0]=c->lr; // 8013F86C
  {uint32_t ea=c->r[2]+0xFFFFA7F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8013F870
  W32(c->r[1]+0x00000014u,c->r[0]); // 8013F874
  fcmp(c,0,c->f[1],c->f[2]); // 8013F878
  if (!crb(c,1)) { goto L_8013F884; } // 8013F87C
  goto L_8013F898; // 8013F880
L_8013F884:;
  {uint32_t ea=c->r[2]+0xFFFFA818u; c->f[2]=c->ps1[2]=RF32(ea);} // 8013F884
  fcmp(c,0,c->f[1],c->f[2]); // 8013F888
  if (!crb(c,0)) { goto L_8013F894; } // 8013F88C
  goto L_8013F898; // 8013F890
L_8013F894:;
  c->f[2]=c->f[1]; // 8013F894
L_8013F898:;
  {uint32_t ea=c->r[2]+0xFFFFA838u; c->f[1]=RF64(ea);} // 8013F898
  {uint32_t ea=c->r[2]+0xFFFFA830u; c->f[0]=RF64(ea);} // 8013F89C
  c->f[2]=c->f[2]-c->f[1]; // 8013F8A0
  {uint32_t ea=c->r[2]+0xFFFFA828u; c->f[1]=RF64(ea);} // 8013F8A4
  c->f[2]=c->f[0]*c->f[2]; // 8013F8A8
  c->lr=0x8013F8B0u; f_80262BAC(c); // 8013F8AC
  {uint32_t ea=c->r[2]+0xFFFFA820u; c->f[0]=RF64(ea);} // 8013F8B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8013F8B4
  c->f[0]=c->f[0]*c->f[1]; // 8013F8B8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8013F8BC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8013F8C0
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8013F8C4
  c->lr=c->r[0]; // 8013F8C8
  c->r[1]=c->r[1]+0x00000010u; // 8013F8CC
  return; // 8013F8D0
}

// GetRemoteFilterCoefs__Q44nw4r3snd6detail4UtilFiPUsPUsPUsPUsPUs
void f_8013F8D4(Ctx* __restrict c) {
  trace_call(0x8013F8D4u);
  cmps(c,0,(int32_t)c->r[3],127); // 8013F8D4
  if (!crb(c,1)) { goto L_8013F8E4; } // 8013F8D8
  c->r[0]=0u+0x0000007Fu; // 8013F8DC
  goto L_8013F8EC; // 8013F8E0
L_8013F8E4:;
  c->r[0]=sraw(c,c->r[3],31); // 8013F8E4
  c->r[0]=c->r[3]&~c->r[0]; // 8013F8E8
L_8013F8EC:;
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8013F8EC
  c->r[3]=0u+0x80270000u; // 8013F8F0
  c->r[3]=c->r[3]+0x000060D0u; // 8013F8F4
  c->r[0]=R16(c->r[3]+c->r[9]); // 8013F8F8
  c->r[9]=c->r[3]+c->r[9]; // 8013F8FC
  c->r[3]=R16(c->r[9]+0x00000002u); // 8013F900
  W16(c->r[4]+0x00000000u,c->r[0]); // 8013F904
  c->r[0]=R16(c->r[9]+0x00000004u); // 8013F908
  W16(c->r[5]+0x00000000u,c->r[3]); // 8013F90C
  c->r[3]=R16(c->r[9]+0x00000006u); // 8013F910
  W16(c->r[6]+0x00000000u,c->r[0]); // 8013F914
  c->r[0]=R16(c->r[9]+0x00000008u); // 8013F918
  W16(c->r[7]+0x00000000u,c->r[3]); // 8013F91C
  W16(c->r[8]+0x00000000u,c->r[0]); // 8013F920
  return; // 8013F924
}

// CalcRandom__Q44nw4r3snd6detail4UtilFv
void f_8013F928(Ctx* __restrict c) {
  trace_call(0x8013F928u);
  c->r[3]=0u+0x00190000u; // 8013F928
  c->r[4]=R32(c->r[13]+0xFFFF8F58u); // 8013F92C
  c->r[0]=c->r[3]+0x0000660Du; // 8013F930
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 8013F934
  c->r[3]=c->r[3]+0x3C6F0000u; // 8013F938
  c->r[0]=c->r[3]+0xFFFFF35Fu; // 8013F93C
  W32(c->r[13]+0xFFFF8F58u,c->r[0]); // 8013F940
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 8013F944
  return; // 8013F948
}

// GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
void f_8013F94C(Ctx* __restrict c) {
  trace_call(0x8013F94Cu);
  cmps(c,0,(int32_t)c->r[3],1); // 8013F94C
  if (!crb(c,2)) { goto L_8013F95C; } // 8013F950
  c->r[3]=c->r[4]+c->r[5]; // 8013F954
  return; // 8013F958
L_8013F95C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8013F95C
  c->r[3]=0u+0x00000000u; // 8013F960
  if (!crb(c,2)) return; // 8013F964
  c->r[3]=c->r[4]|c->r[4]; // 8013F968
  return; // 8013F96C
}

// __ct__Q44nw4r3snd6detail17WaveArchiveReaderFPCv
void f_8013F970(Ctx* __restrict c) {
  trace_call(0x8013F970u);
  c->r[5]=R32(c->r[4]+0x00000000u); // 8013F970
  c->r[6]=0u+0x00000000u; // 8013F974
  W32(c->r[3]+0x00000000u,c->r[6]); // 8013F978
  c->r[0]=c->r[5]+0xADA90000u; // 8013F97C
  cmpu(c,0,c->r[0],0x00004152u); // 8013F980
  W32(c->r[3]+0x00000004u,c->r[6]); // 8013F984
  if (crb(c,2)) { goto L_8013F994; } // 8013F988
  c->r[0]=0u+0x00000000u; // 8013F98C
  goto L_8013F9C0; // 8013F990
L_8013F994:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 8013F994
  cmpu(c,0,c->r[6],0x00000100u); // 8013F998
  if (!crb(c,0)) { goto L_8013F9A8; } // 8013F99C
  c->r[0]=0u+0x00000000u; // 8013F9A0
  goto L_8013F9C0; // 8013F9A4
L_8013F9A8:;
  c->r[0]=addc(c,~c->r[6],0x00000100u,1); // 8013F9A8
  c->r[5]=0u+0x00000100u; // 8013F9AC
  c->r[5]=c->r[5]|~c->r[6]; // 8013F9B0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 8013F9B4
  c->r[0]=c->r[5]-c->r[0]; // 8013F9B8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8013F9BC
L_8013F9C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8013F9C0
  if (crb(c,2)) return; // 8013F9C4
  c->r[5]=R32(c->r[4]+0x00000018u); // 8013F9C8
  c->r[0]=R32(c->r[4]+0x00000010u); // 8013F9CC
  c->r[5]=c->r[5]+c->r[4]; // 8013F9D0
  c->r[0]=c->r[0]+c->r[4]; // 8013F9D4
  W32(c->r[3]+0x00000004u,c->r[5]); // 8013F9D8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8013F9DC
  return; // 8013F9E0
}

// GetWaveFile__Q44nw4r3snd6detail17WaveArchiveReaderCFi
void f_8013F9E4(Ctx* __restrict c) {
  trace_call(0x8013F9E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8013F9E4
  c->r[0]=c->lr; // 8013F9E8
  c->r[6]=R32(c->r[3]+0x00000000u); // 8013F9EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8013F9F0
  cmps(c,0,(int32_t)c->r[6],0); // 8013F9F4
  if (!crb(c,2)) { goto L_8013FA04; } // 8013F9F8
  c->r[3]=0u+0x00000000u; // 8013F9FC
  goto L_8013FA5C; // 8013FA00
L_8013FA04:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 8013FA04
  cmps(c,0,(int32_t)c->r[5],0); // 8013FA08
  if (!crb(c,2)) { goto L_8013FA18; } // 8013FA0C
  c->r[3]=0u+0x00000000u; // 8013FA10
  goto L_8013FA5C; // 8013FA14
L_8013FA18:;
  cmps(c,0,(int32_t)c->r[4],0); // 8013FA18
  if (!crb(c,0)) { goto L_8013FA28; } // 8013FA1C
  c->r[3]=0u+0x00000000u; // 8013FA20
  goto L_8013FA5C; // 8013FA24
L_8013FA28:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 8013FA28
  cmpu(c,0,c->r[4],c->r[0]); // 8013FA2C
  if (crb(c,0)) { goto L_8013FA3C; } // 8013FA30
  c->r[3]=0u+0x00000000u; // 8013FA34
  goto L_8013FA5C; // 8013FA38
L_8013FA3C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8013FA3C
  c->r[3]=c->r[6]+c->r[0]; // 8013FA40
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8013FA44
  c->r[4]=R32(c->r[3]+0x00000010u); // 8013FA48
  W32(c->r[1]+0x00000008u,c->r[0]); // 8013FA4C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8013FA50
  c->r[3]=R8(c->r[1]+0x00000008u); // 8013FA54
  c->lr=0x8013FA5Cu; f_8013F94C(c); // 8013FA58
L_8013FA5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8013FA5C
  c->lr=c->r[0]; // 8013FA60
  c->r[1]=c->r[1]+0x00000010u; // 8013FA64
  return; // 8013FA68
}

// __ct__Q44nw4r3snd6detail14WaveFileReaderFPCQ54nw4r3snd6detail8WaveFile10FileHeader
void f_8013FA6C(Ctx* __restrict c) {
  trace_call(0x8013FA6Cu);
  c->r[0]=0u+0x00000000u; // 8013FA6C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8013FA70
  c->r[0]=R32(c->r[4]+0x00000010u); // 8013FA74
  c->r[4]=c->r[0]+c->r[4]; cr0(c,c->r[4]); // 8013FA78
  if (crb(c,2)) return; // 8013FA7C
  c->r[0]=c->r[4]+0x00000008u; // 8013FA80
  W32(c->r[3]+0x00000000u,c->r[0]); // 8013FA84
  return; // 8013FA88
}

// __ct__Q44nw4r3snd6detail14WaveFileReaderFPCQ54nw4r3snd6detail8WaveFile8WaveInfo
void f_8013FA8C(Ctx* __restrict c) {
  trace_call(0x8013FA8Cu);
  W32(c->r[3]+0x00000000u,c->r[4]); // 8013FA8C
  return; // 8013FA90
}

// ReadWaveInfo__Q44nw4r3snd6detail14WaveFileReaderCFPQ44nw4r3snd6detail8WaveInfoPCv
void f_8013FA94(Ctx* __restrict c) {
  trace_call(0x8013FA94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8013FA94
  c->r[0]=c->lr; // 8013FA98
  W32(c->r[1]+0x00000024u,c->r[0]); // 8013FA9C
  c->r[11]=c->r[1]+0x00000020u; // 8013FAA0
  c->lr=0x8013FAA8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8013FAA4
  c->r[6]=R32(c->r[3]+0x00000000u); // 8013FAA8
  c->r[27]=c->r[3]|c->r[3]; // 8013FAAC
  c->r[29]=c->r[4]|c->r[4]; // 8013FAB0
  c->r[28]=c->r[5]|c->r[5]; // 8013FAB4
  c->r[0]=R8(c->r[6]+0x00000000u); // 8013FAB8
  cmps(c,0,(int32_t)c->r[0],1); // 8013FABC
  if (crb(c,2)) { goto L_8013FAE4; } // 8013FAC0
  if (!crb(c,0)) { goto L_8013FAD4; } // 8013FAC4
  cmps(c,0,(int32_t)c->r[0],0); // 8013FAC8
  if (!crb(c,0)) { goto L_8013FAEC; } // 8013FACC
  goto L_8013FAF4; // 8013FAD0
L_8013FAD4:;
  cmps(c,0,(int32_t)c->r[0],3); // 8013FAD4
  if (!crb(c,0)) { goto L_8013FAF4; } // 8013FAD8
  c->r[30]=0u+0x00000003u; // 8013FADC
  goto L_8013FAF8; // 8013FAE0
L_8013FAE4:;
  c->r[30]=0u+0x00000001u; // 8013FAE4
  goto L_8013FAF8; // 8013FAE8
L_8013FAEC:;
  c->r[30]=0u+0x00000002u; // 8013FAEC
  goto L_8013FAF8; // 8013FAF0
L_8013FAF4:;
  c->r[30]=0u+0x00000003u; // 8013FAF4
L_8013FAF8:;
  c->r[7]=R32(c->r[3]+0x00000000u); // 8013FAF8
  c->r[5]=c->r[30]|c->r[30]; // 8013FAFC
  W32(c->r[4]+0x00000000u,c->r[30]); // 8013FB00
  c->r[3]=0u+0x00000000u; // 8013FB04
  c->r[0]=R8(c->r[7]+0x00000002u); // 8013FB08
  W32(c->r[4]+0x00000008u,c->r[0]); // 8013FB0C
  c->r[6]=R8(c->r[7]+0x00000003u); // 8013FB10
  c->r[0]=R16(c->r[7]+0x00000004u); // 8013FB14
  c->r[6]=rotl(c->r[6],16)&0xFFFF0000u; // 8013FB18
  c->r[0]=c->r[6]+c->r[0]; // 8013FB1C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8013FB20
  c->r[6]=R8(c->r[7]+0x00000001u); // 8013FB24
  c->r[0]=0u-c->r[6]; // 8013FB28
  c->r[0]=c->r[0]|c->r[6]; // 8013FB2C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8013FB30
  W8(c->r[4]+0x00000004u,c->r[0]); // 8013FB34
  c->r[4]=R32(c->r[7]+0x00000008u); // 8013FB38
  c->lr=0x8013FB40u; f_80122D04(c); // 8013FB3C
  W32(c->r[29]+0x00000010u,c->r[3]); // 8013FB40
  c->r[5]=c->r[30]|c->r[30]; // 8013FB44
  c->r[4]=R32(c->r[27]+0x00000000u); // 8013FB48
  c->r[3]=0u+0x00000000u; // 8013FB4C
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 8013FB50
  c->lr=0x8013FB58u; f_80122D04(c); // 8013FB54
  c->r[0]=c->r[3]+0x00000001u; // 8013FB58
  c->r[3]=R32(c->r[27]+0x00000000u); // 8013FB5C
  W32(c->r[29]+0x00000014u,c->r[0]); // 8013FB60
  c->r[31]=c->r[29]+0x00000018u; // 8013FB64
  c->r[29]=0u+0x00000000u; // 8013FB68
  c->r[0]=R32(c->r[3]+0x00000010u); // 8013FB6C
  c->r[30]=c->r[0]+c->r[3]; // 8013FB70
  goto L_8013FC68; // 8013FB74
L_8013FB78:;
  cmps(c,0,(int32_t)c->r[29],2); // 8013FB78
  if (!crb(c,0)) { goto L_8013FC5C; } // 8013FB7C
  c->r[0]=R32(c->r[30]+0x00000000u); // 8013FB80
  c->r[4]=c->r[0]+c->r[3]; // 8013FB84
  c->r[0]=R32(c->r[4]+0x00000004u); // 8013FB88
  cmps(c,0,(int32_t)c->r[0],0); // 8013FB8C
  if (crb(c,2)) { goto L_8013FC4C; } // 8013FB90
  {uint32_t ea=c->r[3]+c->r[0]; c->r[5]=R16(ea); c->r[3]=ea;} // 8013FB94
  c->r[0]=R16(c->r[3]+0x00000002u); // 8013FB98
  W16(c->r[31]+0x00000004u,c->r[5]); // 8013FB9C
  W16(c->r[31]+0x00000006u,c->r[0]); // 8013FBA0
  c->r[5]=R16(c->r[3]+0x00000004u); // 8013FBA4
  c->r[0]=R16(c->r[3]+0x00000006u); // 8013FBA8
  W16(c->r[31]+0x00000008u,c->r[5]); // 8013FBAC
  W16(c->r[31]+0x0000000Au,c->r[0]); // 8013FBB0
  c->r[5]=R16(c->r[3]+0x00000008u); // 8013FBB4
  c->r[0]=R16(c->r[3]+0x0000000Au); // 8013FBB8
  W16(c->r[31]+0x0000000Cu,c->r[5]); // 8013FBBC
  W16(c->r[31]+0x0000000Eu,c->r[0]); // 8013FBC0
  c->r[5]=R16(c->r[3]+0x0000000Cu); // 8013FBC4
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 8013FBC8
  W16(c->r[31]+0x00000010u,c->r[5]); // 8013FBCC
  W16(c->r[31]+0x00000012u,c->r[0]); // 8013FBD0
  c->r[5]=R16(c->r[3]+0x00000010u); // 8013FBD4
  c->r[0]=R16(c->r[3]+0x00000012u); // 8013FBD8
  W16(c->r[31]+0x00000014u,c->r[5]); // 8013FBDC
  W16(c->r[31]+0x00000016u,c->r[0]); // 8013FBE0
  c->r[5]=R16(c->r[3]+0x00000014u); // 8013FBE4
  c->r[0]=R16(c->r[3]+0x00000016u); // 8013FBE8
  W16(c->r[31]+0x00000018u,c->r[5]); // 8013FBEC
  W16(c->r[31]+0x0000001Au,c->r[0]); // 8013FBF0
  c->r[5]=R16(c->r[3]+0x00000018u); // 8013FBF4
  c->r[0]=R16(c->r[3]+0x0000001Au); // 8013FBF8
  W16(c->r[31]+0x0000001Cu,c->r[5]); // 8013FBFC
  W16(c->r[31]+0x0000001Eu,c->r[0]); // 8013FC00
  c->r[5]=R16(c->r[3]+0x0000001Cu); // 8013FC04
  c->r[0]=R16(c->r[3]+0x0000001Eu); // 8013FC08
  W16(c->r[31]+0x00000020u,c->r[5]); // 8013FC0C
  W16(c->r[31]+0x00000022u,c->r[0]); // 8013FC10
  c->r[0]=R16(c->r[3]+0x00000020u); // 8013FC14
  W16(c->r[31]+0x00000024u,c->r[0]); // 8013FC18
  c->r[0]=R16(c->r[3]+0x00000022u); // 8013FC1C
  W16(c->r[31]+0x00000026u,c->r[0]); // 8013FC20
  c->r[0]=R16(c->r[3]+0x00000024u); // 8013FC24
  W16(c->r[31]+0x00000028u,c->r[0]); // 8013FC28
  c->r[0]=R16(c->r[3]+0x00000026u); // 8013FC2C
  W16(c->r[31]+0x0000002Au,c->r[0]); // 8013FC30
  c->r[0]=R16(c->r[3]+0x00000028u); // 8013FC34
  W16(c->r[31]+0x0000002Cu,c->r[0]); // 8013FC38
  c->r[0]=R16(c->r[3]+0x0000002Au); // 8013FC3C
  W16(c->r[31]+0x0000002Eu,c->r[0]); // 8013FC40
  c->r[0]=R16(c->r[3]+0x0000002Cu); // 8013FC44
  W16(c->r[31]+0x00000030u,c->r[0]); // 8013FC48
L_8013FC4C:;
  c->r[3]=c->r[27]|c->r[27]; // 8013FC4C
  c->r[5]=c->r[28]|c->r[28]; // 8013FC50
  c->lr=0x8013FC58u; f_8013FC94(c); // 8013FC54
  W32(c->r[31]+0x00000000u,c->r[3]); // 8013FC58
L_8013FC5C:;
  c->r[31]=c->r[31]+0x00000034u; // 8013FC5C
  c->r[30]=c->r[30]+0x00000004u; // 8013FC60
  c->r[29]=c->r[29]+0x00000001u; // 8013FC64
L_8013FC68:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 8013FC68
  c->r[0]=R8(c->r[3]+0x00000002u); // 8013FC6C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8013FC70
  if (crb(c,0)) { IRQCHK(c); goto L_8013FB78; } // 8013FC74
  c->r[11]=c->r[1]+0x00000020u; // 8013FC78
  c->r[3]=0u+0x00000001u; // 8013FC7C
  c->lr=0x8013FC84u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8013FC80
  c->r[0]=R32(c->r[1]+0x00000024u); // 8013FC84
  c->lr=c->r[0]; // 8013FC88
  c->r[1]=c->r[1]+0x00000020u; // 8013FC8C
  return; // 8013FC90
}

// GetWaveDataAddress__Q44nw4r3snd6detail14WaveFileReaderCFPCQ54nw4r3snd6detail8WaveFile15WaveChannelInfoPCv
void f_8013FC94(Ctx* __restrict c) {
  trace_call(0x8013FC94u);
  cmps(c,0,(int32_t)c->r[5],0); // 8013FC94
  c->r[0]=cntlz(c->r[5]); // 8013FC98
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 8013FC9C
  if (!crb(c,2)) { goto L_8013FCA8; } // 8013FCA0
  c->r[5]=R32(c->r[3]+0x00000000u); // 8013FCA4
L_8013FCA8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8013FCA8
  c->r[0]=R8(c->r[3]+0x00000006u); // 8013FCAC
  cmps(c,0,(int32_t)c->r[0],1); // 8013FCB0
  if (crb(c,2)) { goto L_8013FCE0; } // 8013FCB4
  if (!crb(c,0)) { goto L_8013FCE8; } // 8013FCB8
  cmps(c,0,(int32_t)c->r[0],0); // 8013FCBC
  if (!crb(c,0)) { goto L_8013FCC8; } // 8013FCC0
  goto L_8013FCE8; // 8013FCC4
L_8013FCC8:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 8013FCC8
  cmps(c,0,(int32_t)c->r[6],0); // 8013FCCC
  c->r[3]=c->r[0]+c->r[5]; // 8013FCD0
  if (crb(c,2)) { goto L_8013FCF0; } // 8013FCD4
  c->r[3]=c->r[3]+0x00000008u; // 8013FCD8
  goto L_8013FCF0; // 8013FCDC
L_8013FCE0:;
  c->r[3]=R32(c->r[3]+0x00000014u); // 8013FCE0
  goto L_8013FCF0; // 8013FCE4
L_8013FCE8:;
  c->r[3]=0u+0x00000000u; // 8013FCE8
  return; // 8013FCEC
L_8013FCF0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8013FCF0
  c->r[3]=c->r[0]+c->r[3]; // 8013FCF4
  return; // 8013FCF8
}

// __ct__Q44nw4r3snd6detail9WaveSoundFPQ44nw4r3snd6detail50SoundInstanceManager<Q44nw4r3snd6detail9WaveSound>ii
void f_8013FCFC(Ctx* __restrict c) {
  trace_call(0x8013FCFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8013FCFC
  c->r[0]=c->lr; // 8013FD00
  W32(c->r[1]+0x00000014u,c->r[0]); // 8013FD04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8013FD08
  c->r[31]=c->r[4]|c->r[4]; // 8013FD0C
  c->r[4]=c->r[5]|c->r[5]; // 8013FD10
  c->r[5]=c->r[6]|c->r[6]; // 8013FD14
  W32(c->r[1]+0x00000008u,c->r[30]); // 8013FD18
  c->r[30]=c->r[3]|c->r[3]; // 8013FD1C
  c->lr=0x8013FD24u; f_80126758(c); // 8013FD20
  c->r[4]=0u+0x802C0000u; // 8013FD24
  c->r[3]=c->r[30]+0x00000100u; // 8013FD28
  c->r[4]=c->r[4]+0x00006358u; // 8013FD2C
  W32(c->r[30]+0x00000000u,c->r[4]); // 8013FD30
  c->lr=0x8013FD38u; f_80140450(c); // 8013FD34
  c->r[0]=0u+0x00000000u; // 8013FD38
  W32(c->r[30]+0x00000238u,c->r[31]); // 8013FD3C
  c->r[3]=c->r[30]|c->r[30]; // 8013FD40
  W32(c->r[30]+0x00000234u,c->r[0]); // 8013FD44
  W8(c->r[30]+0x0000023Cu,c->r[0]); // 8013FD48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8013FD4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8013FD50
  c->r[0]=R32(c->r[1]+0x00000014u); // 8013FD54
  c->lr=c->r[0]; // 8013FD58
  c->r[1]=c->r[1]+0x00000010u; // 8013FD5C
  return; // 8013FD60
}

// __dt__Q44nw4r3snd6detail9WsdPlayerFv
void f_8013FD64(Ctx* __restrict c) {
  trace_call(0x8013FD64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8013FD64
  c->r[0]=c->lr; // 8013FD68
  cmps(c,0,(int32_t)c->r[3],0); // 8013FD6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8013FD70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8013FD74
  c->r[31]=c->r[3]|c->r[3]; // 8013FD78
  if (crb(c,2)) { goto L_8013FD8C; } // 8013FD7C
  cmps(c,0,(int32_t)c->r[4],0); // 8013FD80
  if (!crb(c,1)) { goto L_8013FD8C; } // 8013FD84
  c->lr=0x8013FD8Cu; f_802525B0(c); // 8013FD88
L_8013FD8C:;
  c->r[3]=c->r[31]|c->r[31]; // 8013FD8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8013FD90
  c->r[0]=R32(c->r[1]+0x00000014u); // 8013FD94
  c->lr=c->r[0]; // 8013FD98
  c->r[1]=c->r[1]+0x00000010u; // 8013FD9C
  return; // 8013FDA0
}

// Prepare__Q44nw4r3snd6detail9WaveSoundFPCvlQ54nw4r3snd6detail9WsdPlayer15StartOffsetTypelPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
void f_8013FDA4(Ctx* __restrict c) {
  trace_call(0x8013FDA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8013FDA4
  c->r[0]=c->lr; // 8013FDA8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8013FDAC
  c->r[11]=c->r[1]+0x00000030u; // 8013FDB0
  c->lr=0x8013FDB8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8013FDB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8013FDB8
  c->r[25]=c->r[3]|c->r[3]; // 8013FDBC
  c->r[26]=c->r[4]|c->r[4]; // 8013FDC0
  c->r[27]=c->r[5]|c->r[5]; // 8013FDC4
  c->r[12]=R32(c->r[12]+0x00000020u); // 8013FDC8
  c->r[28]=c->r[6]|c->r[6]; // 8013FDCC
  c->r[29]=c->r[7]|c->r[7]; // 8013FDD0
  c->r[30]=c->r[8]|c->r[8]; // 8013FDD4
  c->r[31]=c->r[9]|c->r[9]; // 8013FDD8
  c->ctr=c->r[12]; // 8013FDDC
  if (true) { c->lr=0x8013FDE4u; dispatch(c,c->ctr); } // 8013FDE0
  c->r[3]=c->r[25]|c->r[25]; // 8013FDE4
  c->lr=0x8013FDECu; f_801279A4(c); // 8013FDE8
  c->r[8]=c->r[3]|c->r[3]; // 8013FDEC
  c->r[4]=c->r[26]|c->r[26]; // 8013FDF0
  c->r[5]=c->r[27]|c->r[27]; // 8013FDF4
  c->r[6]=c->r[28]|c->r[28]; // 8013FDF8
  c->r[7]=c->r[29]|c->r[29]; // 8013FDFC
  c->r[9]=c->r[30]|c->r[30]; // 8013FE00
  c->r[10]=c->r[31]|c->r[31]; // 8013FE04
  c->r[3]=c->r[25]+0x00000100u; // 8013FE08
  c->lr=0x8013FE10u; f_80140564(c); // 8013FE0C
  cmps(c,0,(int32_t)c->r[3],0); // 8013FE10
  if (!crb(c,2)) { goto L_8013FE20; } // 8013FE14
  c->r[3]=0u+0x00000000u; // 8013FE18
  goto L_8013FE2C; // 8013FE1C
L_8013FE20:;
  c->r[0]=0u+0x00000001u; // 8013FE20
  c->r[3]=0u+0x00000001u; // 8013FE24
  W8(c->r[25]+0x0000023Cu,c->r[0]); // 8013FE28
L_8013FE2C:;
  c->r[11]=c->r[1]+0x00000030u; // 8013FE2C
  c->lr=0x8013FE34u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8013FE30
  c->r[0]=R32(c->r[1]+0x00000034u); // 8013FE34
  c->lr=c->r[0]; // 8013FE38
  c->r[1]=c->r[1]+0x00000030u; // 8013FE3C
  return; // 8013FE40
}

// Shutdown__Q44nw4r3snd6detail9WaveSoundFv
void f_8013FE44(Ctx* __restrict c) {
  trace_call(0x8013FE44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8013FE44
  c->r[0]=c->lr; // 8013FE48
  W32(c->r[1]+0x00000024u,c->r[0]); // 8013FE4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8013FE50
  W32(c->r[1]+0x00000018u,c->r[30]); // 8013FE54
  W32(c->r[1]+0x00000014u,c->r[29]); // 8013FE58
  c->r[29]=c->r[3]|c->r[3]; // 8013FE5C
  c->lr=0x8013FE64u; f_801277C4(c); // 8013FE60
  c->r[30]=R32(c->r[29]+0x00000238u); // 8013FE64
  c->r[31]=c->r[30]+0x00000010u; // 8013FE68
  c->r[3]=c->r[31]|c->r[31]; // 8013FE6C
  c->lr=0x8013FE74u; f_801556CC(c); // 8013FE70
  c->r[0]=R32(c->r[30]+0x00000004u); // 8013FE74
  cmps(c,0,(int32_t)c->r[0],0); // 8013FE78
  if (!crb(c,2)) { goto L_8013FE8C; } // 8013FE7C
  c->r[3]=c->r[31]|c->r[31]; // 8013FE80
  c->lr=0x8013FE88u; f_801557A8(c); // 8013FE84
  goto L_8013FEC4; // 8013FE88
L_8013FE8C:;
  c->r[3]=c->r[30]+0x00000004u; // 8013FE8C
  c->r[4]=c->r[29]+0x000000E0u; // 8013FE90
  c->lr=0x8013FE98u; f_800F645C(c); // 8013FE94
  c->r[12]=R32(c->r[29]+0x00000000u); // 8013FE98
  c->r[3]=c->r[29]|c->r[29]; // 8013FE9C
  c->r[4]=0u+0xFFFFFFFFu; // 8013FEA0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8013FEA4
  c->ctr=c->r[12]; // 8013FEA8
  if (true) { c->lr=0x8013FEB0u; dispatch(c,c->ctr); } // 8013FEAC
  c->r[3]=c->r[30]|c->r[30]; // 8013FEB0
  c->r[4]=c->r[29]|c->r[29]; // 8013FEB4
  c->lr=0x8013FEBCu; f_8012B714(c); // 8013FEB8
  c->r[3]=c->r[31]|c->r[31]; // 8013FEBC
  c->lr=0x8013FEC4u; f_801557A8(c); // 8013FEC0
L_8013FEC4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8013FEC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8013FEC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8013FECC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8013FED0
  c->lr=c->r[0]; // 8013FED4
  c->r[1]=c->r[1]+0x00000020u; // 8013FED8
  return; // 8013FEDC
}

// __dt__Q44nw4r3snd6detail9WaveSoundFv
void f_8013FEE0(Ctx* __restrict c) {
  trace_call(0x8013FEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8013FEE0
  c->r[0]=c->lr; // 8013FEE4
  cmps(c,0,(int32_t)c->r[3],0); // 8013FEE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8013FEEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8013FEF0
  c->r[31]=c->r[3]|c->r[3]; // 8013FEF4
  if (crb(c,2)) { goto L_8013FF08; } // 8013FEF8
  cmps(c,0,(int32_t)c->r[4],0); // 8013FEFC
  if (!crb(c,1)) { goto L_8013FF08; } // 8013FF00
  c->lr=0x8013FF08u; f_802525B0(c); // 8013FF04
L_8013FF08:;
  c->r[3]=c->r[31]|c->r[31]; // 8013FF08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8013FF0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8013FF10
  c->lr=c->r[0]; // 8013FF14
  c->r[1]=c->r[1]+0x00000010u; // 8013FF18
  return; // 8013FF1C
}

// SetChannelPriority__Q44nw4r3snd6detail9WaveSoundFi
void f_8013FF20(Ctx* __restrict c) {
  trace_call(0x8013FF20u);
  c->r[3]=c->r[3]+0x00000100u; // 8013FF20
  f_8014094C(c); return; // 8013FF24
}

// SetReleasePriorityFix__Q44nw4r3snd6detail9WaveSoundFb
void f_8013FF28(Ctx* __restrict c) {
  trace_call(0x8013FF28u);
  c->r[3]=c->r[3]+0x00000100u; // 8013FF28
  f_80140954(c); return; // 8013FF2C
}

// OnUpdatePlayerPriority__Q44nw4r3snd6detail9WaveSoundFv
void f_8013FF30(Ctx* __restrict c) {
  trace_call(0x8013FF30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8013FF30
  c->r[0]=c->lr; // 8013FF34
  W32(c->r[1]+0x00000024u,c->r[0]); // 8013FF38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8013FF3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8013FF40
  W32(c->r[1]+0x00000014u,c->r[29]); // 8013FF44
  W32(c->r[1]+0x00000010u,c->r[28]); // 8013FF48
  c->r[28]=c->r[3]|c->r[3]; // 8013FF4C
  c->r[4]=R8(c->r[3]+0x0000008Cu); // 8013FF50
  c->r[0]=R32(c->r[3]+0x00000048u); // 8013FF54
  c->r[4]=c->r[4]+c->r[0]; // 8013FF58
  cmps(c,0,(int32_t)c->r[4],127); // 8013FF5C
  if (!crb(c,1)) { goto L_8013FF6C; } // 8013FF60
  c->r[29]=0u+0x0000007Fu; // 8013FF64
  goto L_8013FF74; // 8013FF68
L_8013FF6C:;
  c->r[0]=sraw(c,c->r[4],31); // 8013FF6C
  c->r[29]=c->r[4]&~c->r[0]; // 8013FF70
L_8013FF74:;
  c->r[30]=R32(c->r[3]+0x00000238u); // 8013FF74
  c->r[31]=c->r[30]+0x00000010u; // 8013FF78
  c->r[3]=c->r[31]|c->r[31]; // 8013FF7C
  c->lr=0x8013FF84u; f_801556CC(c); // 8013FF80
  c->r[28]=c->r[28]+0x000000E0u; // 8013FF84
  c->r[3]=c->r[30]+0x00000004u; // 8013FF88
  c->r[4]=c->r[28]|c->r[28]; // 8013FF8C
  c->lr=0x8013FF94u; f_800F645C(c); // 8013FF90
  c->r[3]=R32(c->r[30]+0x00000008u); // 8013FF94
  c->r[0]=c->r[30]+0x00000008u; // 8013FF98
  goto L_8013FFD0; // 8013FF9C
L_8013FFA0:;
  c->r[5]=R8(c->r[3]+0xFFFFFFACu); // 8013FFA0
  c->r[4]=R32(c->r[3]+0xFFFFFF68u); // 8013FFA4
  c->r[5]=c->r[5]+c->r[4]; // 8013FFA8
  cmps(c,0,(int32_t)c->r[5],127); // 8013FFAC
  if (!crb(c,1)) { goto L_8013FFBC; } // 8013FFB0
  c->r[4]=0u+0x0000007Fu; // 8013FFB4
  goto L_8013FFC4; // 8013FFB8
L_8013FFBC:;
  c->r[4]=sraw(c,c->r[5],31); // 8013FFBC
  c->r[4]=c->r[5]&~c->r[4]; // 8013FFC0
L_8013FFC4:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[4]); // 8013FFC4
  if (crb(c,0)) { goto L_8013FFD8; } // 8013FFC8
  c->r[3]=R32(c->r[3]+0x00000000u); // 8013FFCC
L_8013FFD0:;
  cmpu(c,0,c->r[3],c->r[0]); // 8013FFD0
  if (!crb(c,2)) { IRQCHK(c); goto L_8013FFA0; } // 8013FFD4
L_8013FFD8:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 8013FFD8
  c->r[5]=c->r[28]|c->r[28]; // 8013FFDC
  c->r[3]=c->r[30]+0x00000004u; // 8013FFE0
  c->r[4]=c->r[1]+0x00000008u; // 8013FFE4
  c->lr=0x8013FFECu; f_800F6430(c); // 8013FFE8
  c->r[3]=c->r[31]|c->r[31]; // 8013FFEC
  c->lr=0x8013FFF4u; f_801557A8(c); // 8013FFF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8013FFF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8013FFF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8013FFFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80140000
  c->r[28]=R32(c->r[1]+0x00000010u); // 80140004
  c->lr=c->r[0]; // 80140008
  c->r[1]=c->r[1]+0x00000020u; // 8014000C
  return; // 80140010
}

// IsAttachedTempSpecialHandle__Q44nw4r3snd6detail9WaveSoundFv
void f_80140014(Ctx* __restrict c) {
  trace_call(0x80140014u);
  c->r[3]=R32(c->r[3]+0x00000234u); // 80140014
  c->r[0]=0u-c->r[3]; // 80140018
  c->r[0]=c->r[0]|c->r[3]; // 8014001C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80140020
  return; // 80140024
}

// DetachTempSpecialHandle__Q44nw4r3snd6detail9WaveSoundFv
void f_80140028(Ctx* __restrict c) {
  trace_call(0x80140028u);
  c->r[3]=R32(c->r[3]+0x00000234u); // 80140028
  f_8014005C(c); return; // 8014002C
}

// GetBasicPlayer__Q44nw4r3snd6detail9WaveSoundFv
void f_80140030(Ctx* __restrict c) {
  trace_call(0x80140030u);
  c->r[3]=c->r[3]+0x00000100u; // 80140030
  return; // 80140034
}

// GetBasicPlayer__Q44nw4r3snd6detail9WaveSoundCFv
void f_80140038(Ctx* __restrict c) {
  trace_call(0x80140038u);
  c->r[3]=c->r[3]+0x00000100u; // 80140038
  return; // 8014003C
}

// IsPrepared__Q44nw4r3snd6detail9WaveSoundCFv
void f_80140040(Ctx* __restrict c) {
  trace_call(0x80140040u);
  c->r[3]=R8(c->r[3]+0x0000023Cu); // 80140040
  return; // 80140044
}

// GetRuntimeTypeInfo__Q44nw4r3snd6detail9WaveSoundCFv
void f_80140048(Ctx* __restrict c) {
  trace_call(0x80140048u);
  c->r[3]=c->r[13]+0xFFFFA950u; // 80140048
  return; // 8014004C
}

// fn_80140050
void f_80140050(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFFA8E8u; // 80140050
  W32(c->r[13]+0xFFFFA950u,c->r[0]); // 80140054
  return; // 80140058
}

// DetachSound__Q34nw4r3snd15WaveSoundHandleFv
void f_8014005C(Ctx* __restrict c) {
  trace_call(0x8014005Cu);
  c->r[4]=R32(c->r[3]+0x00000000u); // 8014005C
  cmps(c,0,(int32_t)c->r[4],0); // 80140060
  if (crb(c,2)) { goto L_8014007C; } // 80140064
  c->r[0]=R32(c->r[4]+0x00000234u); // 80140068
  cmpu(c,0,c->r[0],c->r[3]); // 8014006C
  if (!crb(c,2)) { goto L_8014007C; } // 80140070
  c->r[0]=0u+0x00000000u; // 80140074
  W32(c->r[4]+0x00000234u,c->r[0]); // 80140078
L_8014007C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8014007C
  cmps(c,0,(int32_t)c->r[0],0); // 80140080
  if (crb(c,2)) return; // 80140084
  c->r[0]=0u+0x00000000u; // 80140088
  W32(c->r[3]+0x00000000u,c->r[0]); // 8014008C
  return; // 80140090
}

// __ct__Q44nw4r3snd6detail13WsdFileReaderFPCv
void f_80140094(Ctx* __restrict c) {
  trace_call(0x80140094u);
  c->r[5]=R32(c->r[4]+0x00000000u); // 80140094
  c->r[6]=0u+0x00000000u; // 80140098
  W32(c->r[3]+0x00000000u,c->r[6]); // 8014009C
  c->r[0]=c->r[5]+0xADA90000u; // 801400A0
  cmpu(c,0,c->r[0],0x00005344u); // 801400A4
  W32(c->r[3]+0x00000004u,c->r[6]); // 801400A8
  W32(c->r[3]+0x00000008u,c->r[6]); // 801400AC
  if (crb(c,2)) { goto L_801400BC; } // 801400B0
  c->r[0]=0u+0x00000000u; // 801400B4
  goto L_801400E8; // 801400B8
L_801400BC:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 801400BC
  cmpu(c,0,c->r[6],0x00000100u); // 801400C0
  if (!crb(c,0)) { goto L_801400D0; } // 801400C4
  c->r[0]=0u+0x00000000u; // 801400C8
  goto L_801400E8; // 801400CC
L_801400D0:;
  c->r[0]=addc(c,~c->r[6],0x00000103u,1); // 801400D0
  c->r[5]=0u+0x00000103u; // 801400D4
  c->r[5]=c->r[5]|~c->r[6]; // 801400D8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801400DC
  c->r[0]=c->r[5]-c->r[0]; // 801400E0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801400E4
L_801400E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801400E8
  if (crb(c,2)) return; // 801400EC
  c->r[0]=R32(c->r[4]+0x00000010u); // 801400F0
  W32(c->r[3]+0x00000000u,c->r[4]); // 801400F4
  cmps(c,0,(int32_t)c->r[0],0); // 801400F8
  if (crb(c,2)) { goto L_80140108; } // 801400FC
  c->r[0]=c->r[0]+c->r[4]; // 80140100
  W32(c->r[3]+0x00000004u,c->r[0]); // 80140104
L_80140108:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 80140108
  c->r[0]=R32(c->r[4]+0x00000018u); // 8014010C
  cmps(c,0,(int32_t)c->r[0],0); // 80140110
  if (crb(c,2)) return; // 80140114
  c->r[0]=c->r[0]+c->r[4]; // 80140118
  W32(c->r[3]+0x00000008u,c->r[0]); // 8014011C
  return; // 80140120
}

// ReadWaveSoundInfo__Q44nw4r3snd6detail13WsdFileReaderCFPQ44nw4r3snd6detail13WaveSoundInfoi
void f_80140124(Ctx* __restrict c) {
  trace_call(0x80140124u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80140124
  c->r[0]=c->lr; // 80140128
  c->r[6]=R32(c->r[3]+0x00000004u); // 8014012C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80140130
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80140134
  c->r[5]=c->r[6]+0x00000008u; // 80140138
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014013C
  c->r[31]=c->r[4]|c->r[4]; // 80140140
  c->r[4]=c->r[6]+c->r[0]; // 80140144
  W32(c->r[1]+0x00000008u,c->r[30]); // 80140148
  c->r[30]=c->r[3]|c->r[3]; // 8014014C
  c->r[3]=R8(c->r[4]+0x0000000Cu); // 80140150
  c->r[4]=R32(c->r[4]+0x00000010u); // 80140154
  c->lr=0x8014015Cu; f_8013F94C(c); // 80140158
  c->r[4]=c->r[3]|c->r[3]; // 8014015C
  c->r[5]=R32(c->r[30]+0x00000004u); // 80140160
  c->r[3]=R8(c->r[3]+0x00000000u); // 80140164
  c->r[4]=R32(c->r[4]+0x00000004u); // 80140168
  c->r[5]=c->r[5]+0x00000008u; // 8014016C
  c->lr=0x80140174u; f_8013F94C(c); // 80140170
  c->r[4]=R32(c->r[30]+0x00000000u); // 80140174
  c->r[0]=R16(c->r[4]+0x00000006u); // 80140178
  cmpu(c,0,c->r[0],0x00000102u); // 8014017C
  if (crb(c,0)) { goto L_801401C0; } // 80140180
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80140184
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 80140188
  c->r[0]=R8(c->r[3]+0x00000004u); // 8014018C
  W8(c->r[31]+0x00000004u,c->r[0]); // 80140190
  c->r[0]=R8(c->r[3]+0x00000005u); // 80140194
  W8(c->r[31]+0x00000005u,c->r[0]); // 80140198
  c->r[0]=R8(c->r[3]+0x00000006u); // 8014019C
  W8(c->r[31]+0x00000006u,c->r[0]); // 801401A0
  c->r[0]=R8(c->r[3]+0x00000007u); // 801401A4
  W8(c->r[31]+0x00000007u,c->r[0]); // 801401A8
  c->r[0]=R8(c->r[3]+0x00000008u); // 801401AC
  W8(c->r[31]+0x00000008u,c->r[0]); // 801401B0
  c->r[0]=R8(c->r[3]+0x00000009u); // 801401B4
  W8(c->r[31]+0x00000009u,c->r[0]); // 801401B8
  goto L_80140228; // 801401BC
L_801401C0:;
  cmpu(c,0,c->r[0],0x00000101u); // 801401C0
  if (crb(c,0)) { goto L_801401FC; } // 801401C4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801401C8
  c->r[4]=0u+0x00000000u; // 801401CC
  c->r[0]=0u+0x0000007Fu; // 801401D0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801401D4
  c->r[5]=R8(c->r[3]+0x00000004u); // 801401D8
  W8(c->r[31]+0x00000004u,c->r[5]); // 801401DC
  c->r[3]=R8(c->r[3]+0x00000005u); // 801401E0
  W8(c->r[31]+0x00000005u,c->r[3]); // 801401E4
  W8(c->r[31]+0x00000006u,c->r[4]); // 801401E8
  W8(c->r[31]+0x00000007u,c->r[4]); // 801401EC
  W8(c->r[31]+0x00000008u,c->r[4]); // 801401F0
  W8(c->r[31]+0x00000009u,c->r[0]); // 801401F4
  goto L_80140228; // 801401F8
L_801401FC:;
  {uint32_t ea=c->r[2]+0xFFFFA840u; c->f[0]=c->ps1[0]=RF32(ea);} // 801401FC
  c->r[3]=0u+0x00000000u; // 80140200
  c->r[4]=0u+0x00000040u; // 80140204
  c->r[0]=0u+0x0000007Fu; // 80140208
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 8014020C
  W8(c->r[31]+0x00000004u,c->r[4]); // 80140210
  W8(c->r[31]+0x00000005u,c->r[3]); // 80140214
  W8(c->r[31]+0x00000006u,c->r[3]); // 80140218
  W8(c->r[31]+0x00000007u,c->r[3]); // 8014021C
  W8(c->r[31]+0x00000008u,c->r[3]); // 80140220
  W8(c->r[31]+0x00000009u,c->r[0]); // 80140224
L_80140228:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80140228
  c->r[3]=0u+0x00000001u; // 8014022C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80140230
  c->r[0]=R32(c->r[1]+0x00000014u); // 80140234
  c->lr=c->r[0]; // 80140238
  c->r[1]=c->r[1]+0x00000010u; // 8014023C
  return; // 80140240
}

// ReadWaveSoundNoteInfo__Q44nw4r3snd6detail13WsdFileReaderCFPQ44nw4r3snd6detail17WaveSoundNoteInfoii
void f_80140244(Ctx* __restrict c) {
  trace_call(0x80140244u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80140244
  c->r[0]=c->lr; // 80140248
  c->r[7]=R32(c->r[3]+0x00000004u); // 8014024C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80140250
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80140254
  c->r[5]=c->r[7]+0x00000008u; // 80140258
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014025C
  c->r[31]=c->r[4]|c->r[4]; // 80140260
  c->r[4]=c->r[7]+c->r[0]; // 80140264
  W32(c->r[1]+0x00000018u,c->r[30]); // 80140268
  c->r[30]=c->r[6]|c->r[6]; // 8014026C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80140270
  c->r[29]=c->r[3]|c->r[3]; // 80140274
  c->r[3]=R8(c->r[4]+0x0000000Cu); // 80140278
  c->r[4]=R32(c->r[4]+0x00000010u); // 8014027C
  c->lr=0x80140284u; f_8013F94C(c); // 80140280
  c->r[4]=c->r[3]|c->r[3]; // 80140284
  c->r[5]=R32(c->r[29]+0x00000004u); // 80140288
  c->r[3]=R8(c->r[3]+0x00000010u); // 8014028C
  c->r[4]=R32(c->r[4]+0x00000014u); // 80140290
  c->r[5]=c->r[5]+0x00000008u; // 80140294
  c->lr=0x8014029Cu; f_8013F94C(c); // 80140298
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 8014029C
  c->r[4]=R32(c->r[29]+0x00000004u); // 801402A0
  c->r[6]=c->r[3]+c->r[0]; // 801402A4
  c->r[5]=c->r[4]+0x00000008u; // 801402A8
  c->r[3]=R8(c->r[6]+0x00000004u); // 801402AC
  c->r[4]=R32(c->r[6]+0x00000008u); // 801402B0
  c->lr=0x801402B8u; f_8013F94C(c); // 801402B4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801402B8
  c->r[4]=R32(c->r[29]+0x00000000u); // 801402BC
  W32(c->r[31]+0x00000000u,c->r[0]); // 801402C0
  c->r[0]=R8(c->r[3]+0x00000004u); // 801402C4
  W8(c->r[31]+0x00000004u,c->r[0]); // 801402C8
  c->r[0]=R8(c->r[3]+0x00000008u); // 801402CC
  W8(c->r[31]+0x00000005u,c->r[0]); // 801402D0
  c->r[0]=R8(c->r[3]+0x00000005u); // 801402D4
  W8(c->r[31]+0x00000006u,c->r[0]); // 801402D8
  c->r[0]=R8(c->r[3]+0x00000006u); // 801402DC
  W8(c->r[31]+0x00000007u,c->r[0]); // 801402E0
  c->r[0]=R8(c->r[3]+0x00000007u); // 801402E4
  W8(c->r[31]+0x00000008u,c->r[0]); // 801402E8
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801402EC
  W8(c->r[31]+0x00000009u,c->r[0]); // 801402F0
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801402F4
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 801402F8
  c->r[0]=R16(c->r[4]+0x00000006u); // 801402FC
  cmpu(c,0,c->r[0],0x00000101u); // 80140300
  if (crb(c,0)) { goto L_80140324; } // 80140304
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 80140308
  W8(c->r[31]+0x0000000Au,c->r[0]); // 8014030C
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 80140310
  W8(c->r[31]+0x0000000Bu,c->r[0]); // 80140314
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80140318
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 8014031C
  goto L_8014033C; // 80140320
L_80140324:;
  {uint32_t ea=c->r[2]+0xFFFFA840u; c->f[0]=c->ps1[0]=RF32(ea);} // 80140324
  c->r[3]=0u+0x00000040u; // 80140328
  c->r[0]=0u+0x00000000u; // 8014032C
  W8(c->r[31]+0x0000000Au,c->r[3]); // 80140330
  W8(c->r[31]+0x0000000Bu,c->r[0]); // 80140334
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 80140338
L_8014033C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014033C
  c->r[3]=0u+0x00000001u; // 80140340
  c->r[30]=R32(c->r[1]+0x00000018u); // 80140344
  c->r[29]=R32(c->r[1]+0x00000014u); // 80140348
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014034C
  c->lr=c->r[0]; // 80140350
  c->r[1]=c->r[1]+0x00000020u; // 80140354
  return; // 80140358
}

// ReadWaveInfo__Q44nw4r3snd6detail13WsdFileReaderCFiPQ44nw4r3snd6detail8WaveInfoPCv
void f_8014035C(Ctx* __restrict c) {
  trace_call(0x8014035Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014035C
  c->r[0]=c->lr; // 80140360
  c->r[7]=R32(c->r[3]+0x00000008u); // 80140364
  W32(c->r[1]+0x00000034u,c->r[0]); // 80140368
  cmps(c,0,(int32_t)c->r[7],0); // 8014036C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80140370
  c->r[31]=c->r[6]|c->r[6]; // 80140374
  W32(c->r[1]+0x00000028u,c->r[30]); // 80140378
  c->r[30]=c->r[5]|c->r[5]; // 8014037C
  W32(c->r[1]+0x00000024u,c->r[29]); // 80140380
  c->r[29]=c->r[4]|c->r[4]; // 80140384
  if (!crb(c,2)) { goto L_801403D4; } // 80140388
  c->r[4]=c->r[31]|c->r[31]; // 8014038C
  c->r[3]=c->r[1]+0x00000010u; // 80140390
  c->lr=0x80140398u; f_8013F970(c); // 80140394
  c->r[4]=c->r[29]|c->r[29]; // 80140398
  c->r[3]=c->r[1]+0x00000010u; // 8014039C
  c->lr=0x801403A4u; f_8013F9E4(c); // 801403A0
  cmps(c,0,(int32_t)c->r[3],0); // 801403A4
  if (!crb(c,2)) { goto L_801403B4; } // 801403A8
  c->r[3]=0u+0x00000000u; // 801403AC
  goto L_80140434; // 801403B0
L_801403B4:;
  c->r[4]=c->r[3]|c->r[3]; // 801403B4
  c->r[3]=c->r[1]+0x0000000Cu; // 801403B8
  c->lr=0x801403C0u; f_8013FA6C(c); // 801403BC
  c->r[4]=c->r[30]|c->r[30]; // 801403C0
  c->r[3]=c->r[1]+0x0000000Cu; // 801403C4
  c->r[5]=0u+0x00000000u; // 801403C8
  c->lr=0x801403D0u; f_8013FA94(c); // 801403CC
  goto L_80140434; // 801403D0
L_801403D4:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801403D4
  c->r[0]=R16(c->r[3]+0x00000006u); // 801403D8
  cmpu(c,0,c->r[0],0x00000101u); // 801403DC
  if (crb(c,0)) { goto L_8014040C; } // 801403E0
  c->r[0]=R32(c->r[7]+0x00000008u); // 801403E4
  cmpu(c,0,c->r[4],c->r[0]); // 801403E8
  if (crb(c,0)) { goto L_801403F8; } // 801403EC
  c->r[3]=0u+0x00000000u; // 801403F0
  goto L_80140434; // 801403F4
L_801403F8:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801403F8
  c->r[3]=c->r[7]+c->r[0]; // 801403FC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80140400
  c->r[4]=c->r[0]+c->r[7]; // 80140404
  goto L_8014041C; // 80140408
L_8014040C:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8014040C
  c->r[3]=c->r[7]+c->r[0]; // 80140410
  c->r[0]=R32(c->r[3]+0x00000008u); // 80140414
  c->r[4]=c->r[0]+c->r[7]; // 80140418
L_8014041C:;
  c->r[3]=c->r[1]+0x00000008u; // 8014041C
  c->lr=0x80140424u; f_8013FA8C(c); // 80140420
  c->r[4]=c->r[30]|c->r[30]; // 80140424
  c->r[5]=c->r[31]|c->r[31]; // 80140428
  c->r[3]=c->r[1]+0x00000008u; // 8014042C
  c->lr=0x80140434u; f_8013FA94(c); // 80140430
L_80140434:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80140434
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80140438
  c->r[30]=R32(c->r[1]+0x00000028u); // 8014043C
  c->r[29]=R32(c->r[1]+0x00000024u); // 80140440
  c->lr=c->r[0]; // 80140444
  c->r[1]=c->r[1]+0x00000030u; // 80140448
  return; // 8014044C
}

// __ct__Q44nw4r3snd6detail9WsdPlayerFv
void f_80140450(Ctx* __restrict c) {
  trace_call(0x80140450u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80140450
  c->r[0]=c->lr; // 80140454
  W32(c->r[1]+0x00000014u,c->r[0]); // 80140458
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014045C
  c->r[31]=c->r[3]|c->r[3]; // 80140460
  c->lr=0x80140468u; f_801262E8(c); // 80140464
  c->r[5]=0u+0x802C0000u; // 80140468
  c->r[6]=0u+0x00000000u; // 8014046C
  c->r[5]=c->r[5]+0x00006390u; // 80140470
  W32(c->r[31]+0x000000D0u,c->r[6]); // 80140474
  c->r[4]=c->r[5]+0x00000024u; // 80140478
  c->r[3]=c->r[31]+0x00000114u; // 8014047C
  c->r[0]=c->r[5]+0x00000038u; // 80140480
  W32(c->r[31]+0x000000D4u,c->r[6]); // 80140484
  W32(c->r[31]+0x000000DCu,c->r[6]); // 80140488
  W32(c->r[31]+0x000000E0u,c->r[6]); // 8014048C
  W32(c->r[31]+0x00000000u,c->r[5]); // 80140490
  W32(c->r[31]+0x000000D8u,c->r[4]); // 80140494
  W32(c->r[31]+0x000000E4u,c->r[0]); // 80140498
  W8(c->r[31]+0x000000E8u,c->r[6]); // 8014049C
  c->lr=0x801404A4u; f_8012B75C(c); // 801404A0
  c->r[3]=c->r[31]|c->r[31]; // 801404A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801404A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801404AC
  c->lr=c->r[0]; // 801404B0
  c->r[1]=c->r[1]+0x00000010u; // 801404B4
  return; // 801404B8
}

// InitParam__Q44nw4r3snd6detail9WsdPlayerFiPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
void f_801404BC(Ctx* __restrict c) {
  trace_call(0x801404BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801404BC
  c->r[0]=c->lr; // 801404C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801404C4
  c->r[11]=c->r[1]+0x00000020u; // 801404C8
  c->lr=0x801404D0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801404CC
  c->r[27]=c->r[3]|c->r[3]; // 801404D0
  c->r[28]=c->r[4]|c->r[4]; // 801404D4
  c->r[29]=c->r[5]|c->r[5]; // 801404D8
  c->r[30]=c->r[6]|c->r[6]; // 801404DC
  c->lr=0x801404E4u; f_801265DC(c); // 801404E0
  {uint32_t ea=c->r[2]+0xFFFFA848u; c->f[0]=c->ps1[0]=RF32(ea);} // 801404E4
  c->r[31]=0u+0x00000000u; // 801404E8
  c->r[5]=0u+0x00000040u; // 801404EC
  c->r[4]=0u+0xFFFFFFFFu; // 801404F0
  c->r[0]=0u+0x0000007Fu; // 801404F4
  W8(c->r[27]+0x000000E9u,c->r[31]); // 801404F8
  c->r[3]=c->r[27]+0x00000114u; // 801404FC
  W8(c->r[27]+0x000000EAu,c->r[31]); // 80140500
  W8(c->r[27]+0x000000ECu,c->r[31]); // 80140504
  {uint32_t ea=c->r[27]+0x000000F0u; WF32(ea,c->f[0]);} // 80140508
  W32(c->r[27]+0x000000F4u,c->r[28]); // 8014050C
  W8(c->r[27]+0x000000F8u,c->r[5]); // 80140510
  W32(c->r[27]+0x000000FCu,c->r[29]); // 80140514
  W32(c->r[27]+0x00000100u,c->r[30]); // 80140518
  W32(c->r[27]+0x00000104u,c->r[31]); // 8014051C
  W32(c->r[27]+0x00000108u,c->r[4]); // 80140520
  {uint32_t ea=c->r[27]+0x00000124u; WF32(ea,c->f[0]);} // 80140524
  W8(c->r[27]+0x00000128u,c->r[5]); // 80140528
  W8(c->r[27]+0x00000129u,c->r[31]); // 8014052C
  W8(c->r[27]+0x0000012Au,c->r[31]); // 80140530
  W8(c->r[27]+0x0000012Bu,c->r[31]); // 80140534
  W8(c->r[27]+0x0000012Cu,c->r[31]); // 80140538
  W8(c->r[27]+0x0000012Du,c->r[0]); // 8014053C
  c->lr=0x80140544u; f_8012B75C(c); // 80140540
  W8(c->r[27]+0x000000EBu,c->r[31]); // 80140544
  c->r[11]=c->r[1]+0x00000020u; // 80140548
  W32(c->r[27]+0x00000130u,c->r[31]); // 8014054C
  c->lr=0x80140554u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80140550
  c->r[0]=R32(c->r[1]+0x00000024u); // 80140554
  c->lr=c->r[0]; // 80140558
  c->r[1]=c->r[1]+0x00000020u; // 8014055C
  return; // 80140560
}

// Prepare__Q44nw4r3snd6detail9WsdPlayerFPCviQ54nw4r3snd6detail9WsdPlayer15StartOffsetTypeiiPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
void f_80140564(Ctx* __restrict c) {
  trace_call(0x80140564u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80140564
  c->r[0]=c->lr; // 80140568
  W32(c->r[1]+0x00000034u,c->r[0]); // 8014056C
  c->r[11]=c->r[1]+0x00000030u; // 80140570
  c->lr=0x80140578u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80140574
  c->r[24]=c->r[3]|c->r[3]; // 80140578
  c->r[25]=c->r[4]|c->r[4]; // 8014057C
  c->r[26]=c->r[5]|c->r[5]; // 80140580
  c->r[27]=c->r[6]|c->r[6]; // 80140584
  c->r[28]=c->r[7]|c->r[7]; // 80140588
  c->r[29]=c->r[8]|c->r[8]; // 8014058C
  c->r[30]=c->r[9]|c->r[9]; // 80140590
  c->r[31]=c->r[10]|c->r[10]; // 80140594
  c->lr=0x8014059Cu; f_80137510(c); // 80140598
  c->r[3]=c->r[3]+0x00000354u; // 8014059C
  c->lr=0x801405A4u; f_801556CC(c); // 801405A0
  c->r[0]=R8(c->r[24]+0x000000E8u); // 801405A4
  cmps(c,0,(int32_t)c->r[0],0); // 801405A8
  if (crb(c,2)) { goto L_80140690; } // 801405AC
  c->lr=0x801405B4u; f_80137510(c); // 801405B0
  c->r[3]=c->r[3]+0x00000354u; // 801405B4
  c->lr=0x801405BCu; f_801556CC(c); // 801405B8
  c->r[0]=R8(c->r[24]+0x000000E9u); // 801405BC
  cmps(c,0,(int32_t)c->r[0],0); // 801405C0
  if (crb(c,2)) { goto L_801405EC; } // 801405C4
  cmps(c,0,(int32_t)c->r[24],0); // 801405C8
  c->r[23]=c->r[24]|c->r[24]; // 801405CC
  if (crb(c,2)) { goto L_801405D8; } // 801405D0
  c->r[23]=c->r[24]+0x000000DCu; // 801405D4
L_801405D8:;
  c->lr=0x801405DCu; f_80137510(c); // 801405D8
  c->r[4]=c->r[23]|c->r[23]; // 801405DC
  c->lr=0x801405E4u; f_80137A44(c); // 801405E0
  c->r[0]=0u+0x00000000u; // 801405E4
  W8(c->r[24]+0x000000E9u,c->r[0]); // 801405E8
L_801405EC:;
  c->r[0]=R8(c->r[24]+0x000000E8u); // 801405EC
  cmps(c,0,(int32_t)c->r[0],0); // 801405F0
  if (crb(c,2)) { goto L_8014061C; } // 801405F4
  cmps(c,0,(int32_t)c->r[24],0); // 801405F8
  c->r[23]=c->r[24]|c->r[24]; // 801405FC
  if (crb(c,2)) { goto L_80140608; } // 80140600
  c->r[23]=c->r[24]+0x000000D0u; // 80140604
L_80140608:;
  c->lr=0x8014060Cu; f_80129004(c); // 80140608
  c->r[4]=c->r[23]|c->r[23]; // 8014060C
  c->lr=0x80140614u; f_80129118(c); // 80140610
  c->r[0]=0u+0x00000000u; // 80140614
  W8(c->r[24]+0x000000E8u,c->r[0]); // 80140618
L_8014061C:;
  c->lr=0x80140620u; f_80137510(c); // 8014061C
  c->r[3]=c->r[3]+0x00000354u; // 80140620
  c->lr=0x80140628u; f_801556CC(c); // 80140624
  c->r[4]=R32(c->r[24]+0x00000130u); // 80140628
  c->r[3]=0u+0x00000000u; // 8014062C
  cmps(c,0,(int32_t)c->r[4],0); // 80140630
  if (crb(c,2)) { goto L_80140648; } // 80140634
  c->r[0]=R8(c->r[4]+0x00000036u); // 80140638
  cmps(c,0,(int32_t)c->r[0],0); // 8014063C
  if (crb(c,2)) { goto L_80140648; } // 80140640
  c->r[3]=0u+0x00000001u; // 80140644
L_80140648:;
  cmps(c,0,(int32_t)c->r[3],0); // 80140648
  if (crb(c,2)) { goto L_80140660; } // 8014064C
  c->r[3]=c->r[24]|c->r[24]; // 80140650
  c->lr=0x80140658u; f_80140F18(c); // 80140654
  c->r[3]=R32(c->r[24]+0x00000130u); // 80140658
  c->lr=0x80140660u; f_80128A64(c); // 8014065C
L_80140660:;
  c->r[3]=R32(c->r[24]+0x00000130u); // 80140660
  cmps(c,0,(int32_t)c->r[3],0); // 80140664
  if (crb(c,2)) { goto L_80140670; } // 80140668
  c->lr=0x80140670u; f_80128FEC(c); // 8014066C
L_80140670:;
  c->r[0]=0u+0x00000000u; // 80140670
  W32(c->r[24]+0x00000130u,c->r[0]); // 80140674
  c->lr=0x8014067Cu; f_80137510(c); // 80140678
  c->r[3]=c->r[3]+0x00000354u; // 8014067C
  c->lr=0x80140684u; f_801557A8(c); // 80140680
  c->lr=0x80140688u; f_80137510(c); // 80140684
  c->r[3]=c->r[3]+0x00000354u; // 80140688
  c->lr=0x80140690u; f_801557A8(c); // 8014068C
L_80140690:;
  c->r[3]=c->r[24]|c->r[24]; // 80140690
  c->r[4]=c->r[29]|c->r[29]; // 80140694
  c->r[5]=c->r[30]|c->r[30]; // 80140698
  c->r[6]=c->r[31]|c->r[31]; // 8014069C
  c->lr=0x801406A4u; f_801404BC(c); // 801406A0
  cmps(c,0,(int32_t)c->r[24],0); // 801406A4
  W32(c->r[24]+0x00000104u,c->r[25]); // 801406A8
  c->r[23]=c->r[24]|c->r[24]; // 801406AC
  W32(c->r[24]+0x00000108u,c->r[26]); // 801406B0
  W32(c->r[24]+0x0000010Cu,c->r[27]); // 801406B4
  W32(c->r[24]+0x00000110u,c->r[28]); // 801406B8
  if (crb(c,2)) { goto L_801406C4; } // 801406BC
  c->r[23]=c->r[24]+0x000000D0u; // 801406C0
L_801406C4:;
  c->lr=0x801406C8u; f_80129004(c); // 801406C4
  c->r[4]=c->r[23]|c->r[23]; // 801406C8
  c->lr=0x801406D0u; f_801290E8(c); // 801406CC
  c->r[0]=0u+0x00000001u; // 801406D0
  W8(c->r[24]+0x000000E8u,c->r[0]); // 801406D4
  c->lr=0x801406DCu; f_80137510(c); // 801406D8
  c->r[3]=c->r[3]+0x00000354u; // 801406DC
  c->lr=0x801406E4u; f_801557A8(c); // 801406E0
  c->r[11]=c->r[1]+0x00000030u; // 801406E4
  c->r[3]=0u+0x00000001u; // 801406E8
  c->lr=0x801406F0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801406EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801406F0
  c->lr=c->r[0]; // 801406F4
  c->r[1]=c->r[1]+0x00000030u; // 801406F8
  return; // 801406FC
}

// Start__Q44nw4r3snd6detail9WsdPlayerFv
void f_80140700(Ctx* __restrict c) {
  trace_call(0x80140700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80140700
  c->r[0]=c->lr; // 80140704
  W32(c->r[1]+0x00000014u,c->r[0]); // 80140708
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014070C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80140710
  c->r[30]=c->r[3]|c->r[3]; // 80140714
  c->lr=0x8014071Cu; f_80137510(c); // 80140718
  c->r[3]=c->r[3]+0x00000354u; // 8014071C
  c->lr=0x80140724u; f_801556CC(c); // 80140720
  cmps(c,0,(int32_t)c->r[30],0); // 80140724
  c->r[31]=c->r[30]|c->r[30]; // 80140728
  if (crb(c,2)) { goto L_80140734; } // 8014072C
  c->r[31]=c->r[30]+0x000000DCu; // 80140730
L_80140734:;
  c->lr=0x80140738u; f_80137510(c); // 80140734
  c->r[4]=c->r[31]|c->r[31]; // 80140738
  c->lr=0x80140740u; f_801379DC(c); // 8014073C
  c->r[0]=0u+0x00000001u; // 80140740
  W8(c->r[30]+0x000000E9u,c->r[0]); // 80140744
  c->lr=0x8014074Cu; f_80137510(c); // 80140748
  c->r[3]=c->r[3]+0x00000354u; // 8014074C
  c->lr=0x80140754u; f_801557A8(c); // 80140750
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80140754
  c->r[3]=0u+0x00000001u; // 80140758
  c->r[30]=R32(c->r[1]+0x00000008u); // 8014075C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80140760
  c->lr=c->r[0]; // 80140764
  c->r[1]=c->r[1]+0x00000010u; // 80140768
  return; // 8014076C
}

// Stop__Q44nw4r3snd6detail9WsdPlayerFv
void f_80140770(Ctx* __restrict c) {
  trace_call(0x80140770u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80140770
  c->r[0]=c->lr; // 80140774
  W32(c->r[1]+0x00000014u,c->r[0]); // 80140778
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014077C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80140780
  c->r[30]=c->r[3]|c->r[3]; // 80140784
  c->lr=0x8014078Cu; f_80137510(c); // 80140788
  c->r[3]=c->r[3]+0x00000354u; // 8014078C
  c->lr=0x80140794u; f_801556CC(c); // 80140790
  c->lr=0x80140798u; f_80137510(c); // 80140794
  c->r[3]=c->r[3]+0x00000354u; // 80140798
  c->lr=0x801407A0u; f_801556CC(c); // 8014079C
  c->r[0]=R8(c->r[30]+0x000000E9u); // 801407A0
  cmps(c,0,(int32_t)c->r[0],0); // 801407A4
  if (crb(c,2)) { goto L_801407D0; } // 801407A8
  cmps(c,0,(int32_t)c->r[30],0); // 801407AC
  c->r[31]=c->r[30]|c->r[30]; // 801407B0
  if (crb(c,2)) { goto L_801407BC; } // 801407B4
  c->r[31]=c->r[30]+0x000000DCu; // 801407B8
L_801407BC:;
  c->lr=0x801407C0u; f_80137510(c); // 801407BC
  c->r[4]=c->r[31]|c->r[31]; // 801407C0
  c->lr=0x801407C8u; f_80137A44(c); // 801407C4
  c->r[0]=0u+0x00000000u; // 801407C8
  W8(c->r[30]+0x000000E9u,c->r[0]); // 801407CC
L_801407D0:;
  c->r[0]=R8(c->r[30]+0x000000E8u); // 801407D0
  cmps(c,0,(int32_t)c->r[0],0); // 801407D4
  if (crb(c,2)) { goto L_80140800; } // 801407D8
  cmps(c,0,(int32_t)c->r[30],0); // 801407DC
  c->r[31]=c->r[30]|c->r[30]; // 801407E0
  if (crb(c,2)) { goto L_801407EC; } // 801407E4
  c->r[31]=c->r[30]+0x000000D0u; // 801407E8
L_801407EC:;
  c->lr=0x801407F0u; f_80129004(c); // 801407EC
  c->r[4]=c->r[31]|c->r[31]; // 801407F0
  c->lr=0x801407F8u; f_80129118(c); // 801407F4
  c->r[0]=0u+0x00000000u; // 801407F8
  W8(c->r[30]+0x000000E8u,c->r[0]); // 801407FC
L_80140800:;
  c->lr=0x80140804u; f_80137510(c); // 80140800
  c->r[3]=c->r[3]+0x00000354u; // 80140804
  c->lr=0x8014080Cu; f_801556CC(c); // 80140808
  c->r[4]=R32(c->r[30]+0x00000130u); // 8014080C
  c->r[3]=0u+0x00000000u; // 80140810
  cmps(c,0,(int32_t)c->r[4],0); // 80140814
  if (crb(c,2)) { goto L_8014082C; } // 80140818
  c->r[0]=R8(c->r[4]+0x00000036u); // 8014081C
  cmps(c,0,(int32_t)c->r[0],0); // 80140820
  if (crb(c,2)) { goto L_8014082C; } // 80140824
  c->r[3]=0u+0x00000001u; // 80140828
L_8014082C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8014082C
  if (crb(c,2)) { goto L_80140844; } // 80140830
  c->r[3]=c->r[30]|c->r[30]; // 80140834
  c->lr=0x8014083Cu; f_80140F18(c); // 80140838
  c->r[3]=R32(c->r[30]+0x00000130u); // 8014083C
  c->lr=0x80140844u; f_80128A64(c); // 80140840
L_80140844:;
  c->r[3]=R32(c->r[30]+0x00000130u); // 80140844
  cmps(c,0,(int32_t)c->r[3],0); // 80140848
  if (crb(c,2)) { goto L_80140854; } // 8014084C
  c->lr=0x80140854u; f_80128FEC(c); // 80140850
L_80140854:;
  c->r[0]=0u+0x00000000u; // 80140854
  W32(c->r[30]+0x00000130u,c->r[0]); // 80140858
  c->lr=0x80140860u; f_80137510(c); // 8014085C
  c->r[3]=c->r[3]+0x00000354u; // 80140860
  c->lr=0x80140868u; f_801557A8(c); // 80140864
  c->lr=0x8014086Cu; f_80137510(c); // 80140868
  c->r[3]=c->r[3]+0x00000354u; // 8014086C
  c->lr=0x80140874u; f_801557A8(c); // 80140870
  c->lr=0x80140878u; f_80137510(c); // 80140874
  c->r[3]=c->r[3]+0x00000354u; // 80140878
  c->lr=0x80140880u; f_801557A8(c); // 8014087C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80140880
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80140884
  c->r[30]=R32(c->r[1]+0x00000008u); // 80140888
  c->lr=c->r[0]; // 8014088C
  c->r[1]=c->r[1]+0x00000010u; // 80140890
  return; // 80140894
}

// Pause__Q44nw4r3snd6detail9WsdPlayerFb
void f_80140898(Ctx* __restrict c) {
  trace_call(0x80140898u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80140898
  c->r[0]=c->lr; // 8014089C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801408A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801408A4
  c->r[31]=c->r[4]|c->r[4]; // 801408A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801408AC
  c->r[30]=c->r[3]|c->r[3]; // 801408B0
  c->lr=0x801408B8u; f_80137510(c); // 801408B4
  c->r[3]=c->r[3]+0x00000354u; // 801408B8
  c->lr=0x801408C0u; f_801556CC(c); // 801408BC
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801408C0
  c->r[5]=R32(c->r[30]+0x00000130u); // 801408C4
  c->r[0]=0u-c->r[3]; // 801408C8
  c->r[4]=0u+0x00000000u; // 801408CC
  c->r[0]=c->r[0]|c->r[3]; // 801408D0
  cmps(c,0,(int32_t)c->r[5],0); // 801408D4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801408D8
  W8(c->r[30]+0x000000EAu,c->r[0]); // 801408DC
  if (crb(c,2)) { goto L_801408F4; } // 801408E0
  c->r[0]=R8(c->r[5]+0x00000036u); // 801408E4
  cmps(c,0,(int32_t)c->r[0],0); // 801408E8
  if (crb(c,2)) { goto L_801408F4; } // 801408EC
  c->r[4]=0u+0x00000001u; // 801408F0
L_801408F4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801408F4
  if (crb(c,2)) { goto L_80140928; } // 801408F8
  c->r[5]=R32(c->r[30]+0x00000130u); // 801408FC
  c->r[3]=R8(c->r[5]+0x00000035u); // 80140900
  c->r[0]=0u-c->r[3]; // 80140904
  c->r[0]=c->r[0]|c->r[3]; // 80140908
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8014090C
  cmpu(c,0,c->r[31],c->r[0]); // 80140910
  if (crb(c,2)) { goto L_80140928; } // 80140914
  W8(c->r[5]+0x00000035u,c->r[31]); // 80140918
  c->r[4]=c->r[31]|c->r[31]; // 8014091C
  c->r[3]=R32(c->r[5]+0x000000ECu); // 80140920
  c->lr=0x80140928u; f_8013D2E4(c); // 80140924
L_80140928:;
  c->lr=0x8014092Cu; f_80137510(c); // 80140928
  c->r[3]=c->r[3]+0x00000354u; // 8014092C
  c->lr=0x80140934u; f_801557A8(c); // 80140930
  c->r[0]=R32(c->r[1]+0x00000014u); // 80140934
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80140938
  c->r[30]=R32(c->r[1]+0x00000008u); // 8014093C
  c->lr=c->r[0]; // 80140940
  c->r[1]=c->r[1]+0x00000010u; // 80140944
  return; // 80140948
}

// SetChannelPriority__Q44nw4r3snd6detail9WsdPlayerFi
void f_8014094C(Ctx* __restrict c) {
  trace_call(0x8014094Cu);
  W8(c->r[3]+0x000000F8u,c->r[4]); // 8014094C
  return; // 80140950
}

// SetReleasePriorityFix__Q44nw4r3snd6detail9WsdPlayerFb
void f_80140954(Ctx* __restrict c) {
  trace_call(0x80140954u);
  W8(c->r[3]+0x000000ECu,c->r[4]); // 80140954
  return; // 80140958
}

// InvalidateData__Q44nw4r3snd6detail9WsdPlayerFPCvPCv
void f_8014095C(Ctx* __restrict c) {
  trace_call(0x8014095Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014095C
  c->r[0]=c->lr; // 80140960
  W32(c->r[1]+0x00000024u,c->r[0]); // 80140964
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80140968
  c->r[31]=c->r[5]|c->r[5]; // 8014096C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80140970
  c->r[30]=c->r[4]|c->r[4]; // 80140974
  W32(c->r[1]+0x00000014u,c->r[29]); // 80140978
  c->r[29]=c->r[3]|c->r[3]; // 8014097C
  c->lr=0x80140984u; f_80137510(c); // 80140980
  c->r[3]=c->r[3]+0x00000354u; // 80140984
  c->lr=0x8014098Cu; f_801556CC(c); // 80140988
  c->r[0]=R8(c->r[29]+0x000000E8u); // 8014098C
  cmps(c,0,(int32_t)c->r[0],0); // 80140990
  if (crb(c,2)) { goto L_80140A8C; } // 80140994
  c->r[0]=R32(c->r[29]+0x00000104u); // 80140998
  cmpu(c,0,c->r[30],c->r[0]); // 8014099C
  if (crb(c,1)) { goto L_80140A8C; } // 801409A0
  cmpu(c,0,c->r[0],c->r[31]); // 801409A4
  if (crb(c,1)) { goto L_80140A8C; } // 801409A8
  c->lr=0x801409B0u; f_80137510(c); // 801409AC
  c->r[3]=c->r[3]+0x00000354u; // 801409B0
  c->lr=0x801409B8u; f_801556CC(c); // 801409B4
  c->r[0]=R8(c->r[29]+0x000000E9u); // 801409B8
  cmps(c,0,(int32_t)c->r[0],0); // 801409BC
  if (crb(c,2)) { goto L_801409E8; } // 801409C0
  cmps(c,0,(int32_t)c->r[29],0); // 801409C4
  c->r[31]=c->r[29]|c->r[29]; // 801409C8
  if (crb(c,2)) { goto L_801409D4; } // 801409CC
  c->r[31]=c->r[29]+0x000000DCu; // 801409D0
L_801409D4:;
  c->lr=0x801409D8u; f_80137510(c); // 801409D4
  c->r[4]=c->r[31]|c->r[31]; // 801409D8
  c->lr=0x801409E0u; f_80137A44(c); // 801409DC
  c->r[0]=0u+0x00000000u; // 801409E0
  W8(c->r[29]+0x000000E9u,c->r[0]); // 801409E4
L_801409E8:;
  c->r[0]=R8(c->r[29]+0x000000E8u); // 801409E8
  cmps(c,0,(int32_t)c->r[0],0); // 801409EC
  if (crb(c,2)) { goto L_80140A18; } // 801409F0
  cmps(c,0,(int32_t)c->r[29],0); // 801409F4
  c->r[31]=c->r[29]|c->r[29]; // 801409F8
  if (crb(c,2)) { goto L_80140A04; } // 801409FC
  c->r[31]=c->r[29]+0x000000D0u; // 80140A00
L_80140A04:;
  c->lr=0x80140A08u; f_80129004(c); // 80140A04
  c->r[4]=c->r[31]|c->r[31]; // 80140A08
  c->lr=0x80140A10u; f_80129118(c); // 80140A0C
  c->r[0]=0u+0x00000000u; // 80140A10
  W8(c->r[29]+0x000000E8u,c->r[0]); // 80140A14
L_80140A18:;
  c->lr=0x80140A1Cu; f_80137510(c); // 80140A18
  c->r[3]=c->r[3]+0x00000354u; // 80140A1C
  c->lr=0x80140A24u; f_801556CC(c); // 80140A20
  c->r[4]=R32(c->r[29]+0x00000130u); // 80140A24
  c->r[3]=0u+0x00000000u; // 80140A28
  cmps(c,0,(int32_t)c->r[4],0); // 80140A2C
  if (crb(c,2)) { goto L_80140A44; } // 80140A30
  c->r[0]=R8(c->r[4]+0x00000036u); // 80140A34
  cmps(c,0,(int32_t)c->r[0],0); // 80140A38
  if (crb(c,2)) { goto L_80140A44; } // 80140A3C
  c->r[3]=0u+0x00000001u; // 80140A40
L_80140A44:;
  cmps(c,0,(int32_t)c->r[3],0); // 80140A44
  if (crb(c,2)) { goto L_80140A5C; } // 80140A48
  c->r[3]=c->r[29]|c->r[29]; // 80140A4C
  c->lr=0x80140A54u; f_80140F18(c); // 80140A50
  c->r[3]=R32(c->r[29]+0x00000130u); // 80140A54
  c->lr=0x80140A5Cu; f_80128A64(c); // 80140A58
L_80140A5C:;
  c->r[3]=R32(c->r[29]+0x00000130u); // 80140A5C
  cmps(c,0,(int32_t)c->r[3],0); // 80140A60
  if (crb(c,2)) { goto L_80140A6C; } // 80140A64
  c->lr=0x80140A6Cu; f_80128FEC(c); // 80140A68
L_80140A6C:;
  c->r[0]=0u+0x00000000u; // 80140A6C
  W32(c->r[29]+0x00000130u,c->r[0]); // 80140A70
  c->lr=0x80140A78u; f_80137510(c); // 80140A74
  c->r[3]=c->r[3]+0x00000354u; // 80140A78
  c->lr=0x80140A80u; f_801557A8(c); // 80140A7C
  c->lr=0x80140A84u; f_80137510(c); // 80140A80
  c->r[3]=c->r[3]+0x00000354u; // 80140A84
  c->lr=0x80140A8Cu; f_801557A8(c); // 80140A88
L_80140A8C:;
  c->lr=0x80140A90u; f_80137510(c); // 80140A8C
  c->r[3]=c->r[3]+0x00000354u; // 80140A90
  c->lr=0x80140A98u; f_801557A8(c); // 80140A94
  c->r[0]=R32(c->r[1]+0x00000024u); // 80140A98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80140A9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80140AA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80140AA4
  c->lr=c->r[0]; // 80140AA8
  c->r[1]=c->r[1]+0x00000020u; // 80140AAC
  return; // 80140AB0
}

// Update__Q44nw4r3snd6detail9WsdPlayerFv
void f_80140AB4(Ctx* __restrict c) {
  trace_call(0x80140AB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80140AB4
  c->r[0]=c->lr; // 80140AB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80140ABC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80140AC0
  c->r[31]=c->r[3]|c->r[3]; // 80140AC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80140AC8
  c->lr=0x80140AD0u; f_80137510(c); // 80140ACC
  c->r[3]=c->r[3]+0x00000354u; // 80140AD0
  c->lr=0x80140AD8u; f_801556CC(c); // 80140AD4
  c->r[0]=R8(c->r[31]+0x000000E8u); // 80140AD8
  cmps(c,0,(int32_t)c->r[0],0); // 80140ADC
  if (!crb(c,2)) { goto L_80140AF4; } // 80140AE0
  c->lr=0x80140AE8u; f_80137510(c); // 80140AE4
  c->r[3]=c->r[3]+0x00000354u; // 80140AE8
  c->lr=0x80140AF0u; f_801557A8(c); // 80140AEC
  goto L_80140D48; // 80140AF0
L_80140AF4:;
  c->r[0]=R8(c->r[31]+0x000000E9u); // 80140AF4
  cmps(c,0,(int32_t)c->r[0],0); // 80140AF8
  if (!crb(c,2)) { goto L_80140B10; } // 80140AFC
  c->lr=0x80140B04u; f_80137510(c); // 80140B00
  c->r[3]=c->r[3]+0x00000354u; // 80140B04
  c->lr=0x80140B0Cu; f_801557A8(c); // 80140B08
  goto L_80140D48; // 80140B0C
L_80140B10:;
  c->r[0]=R8(c->r[31]+0x000000EAu); // 80140B10
  cmps(c,0,(int32_t)c->r[0],0); // 80140B14
  if (!crb(c,2)) { goto L_80140D34; } // 80140B18
  c->r[3]=R8(c->r[31]+0x000000EBu); // 80140B1C
  cmps(c,0,(int32_t)c->r[3],0); // 80140B20
  if (crb(c,2)) { goto L_80140C24; } // 80140B24
  c->r[0]=R32(c->r[31]+0x00000130u); // 80140B28
  cmps(c,0,(int32_t)c->r[0],0); // 80140B2C
  if (!crb(c,2)) { goto L_80140C24; } // 80140B30
  c->lr=0x80140B38u; f_80137510(c); // 80140B34
  c->r[3]=c->r[3]+0x00000354u; // 80140B38
  c->lr=0x80140B40u; f_801556CC(c); // 80140B3C
  c->r[0]=R8(c->r[31]+0x000000E9u); // 80140B40
  cmps(c,0,(int32_t)c->r[0],0); // 80140B44
  if (crb(c,2)) { goto L_80140B70; } // 80140B48
  cmps(c,0,(int32_t)c->r[31],0); // 80140B4C
  c->r[30]=c->r[31]|c->r[31]; // 80140B50
  if (crb(c,2)) { goto L_80140B5C; } // 80140B54
  c->r[30]=c->r[31]+0x000000DCu; // 80140B58
L_80140B5C:;
  c->lr=0x80140B60u; f_80137510(c); // 80140B5C
  c->r[4]=c->r[30]|c->r[30]; // 80140B60
  c->lr=0x80140B68u; f_80137A44(c); // 80140B64
  c->r[0]=0u+0x00000000u; // 80140B68
  W8(c->r[31]+0x000000E9u,c->r[0]); // 80140B6C
L_80140B70:;
  c->r[0]=R8(c->r[31]+0x000000E8u); // 80140B70
  cmps(c,0,(int32_t)c->r[0],0); // 80140B74
  if (crb(c,2)) { goto L_80140BA0; } // 80140B78
  cmps(c,0,(int32_t)c->r[31],0); // 80140B7C
  c->r[30]=c->r[31]|c->r[31]; // 80140B80
  if (crb(c,2)) { goto L_80140B8C; } // 80140B84
  c->r[30]=c->r[31]+0x000000D0u; // 80140B88
L_80140B8C:;
  c->lr=0x80140B90u; f_80129004(c); // 80140B8C
  c->r[4]=c->r[30]|c->r[30]; // 80140B90
  c->lr=0x80140B98u; f_80129118(c); // 80140B94
  c->r[0]=0u+0x00000000u; // 80140B98
  W8(c->r[31]+0x000000E8u,c->r[0]); // 80140B9C
L_80140BA0:;
  c->lr=0x80140BA4u; f_80137510(c); // 80140BA0
  c->r[3]=c->r[3]+0x00000354u; // 80140BA4
  c->lr=0x80140BACu; f_801556CC(c); // 80140BA8
  c->r[4]=R32(c->r[31]+0x00000130u); // 80140BAC
  c->r[3]=0u+0x00000000u; // 80140BB0
  cmps(c,0,(int32_t)c->r[4],0); // 80140BB4
  if (crb(c,2)) { goto L_80140BCC; } // 80140BB8
  c->r[0]=R8(c->r[4]+0x00000036u); // 80140BBC
  cmps(c,0,(int32_t)c->r[0],0); // 80140BC0
  if (crb(c,2)) { goto L_80140BCC; } // 80140BC4
  c->r[3]=0u+0x00000001u; // 80140BC8
L_80140BCC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80140BCC
  if (crb(c,2)) { goto L_80140BE4; } // 80140BD0
  c->r[3]=c->r[31]|c->r[31]; // 80140BD4
  c->lr=0x80140BDCu; f_80140F18(c); // 80140BD8
  c->r[3]=R32(c->r[31]+0x00000130u); // 80140BDC
  c->lr=0x80140BE4u; f_80128A64(c); // 80140BE0
L_80140BE4:;
  c->r[3]=R32(c->r[31]+0x00000130u); // 80140BE4
  cmps(c,0,(int32_t)c->r[3],0); // 80140BE8
  if (crb(c,2)) { goto L_80140BF4; } // 80140BEC
  c->lr=0x80140BF4u; f_80128FEC(c); // 80140BF0
L_80140BF4:;
  c->r[0]=0u+0x00000000u; // 80140BF4
  W32(c->r[31]+0x00000130u,c->r[0]); // 80140BF8
  c->lr=0x80140C00u; f_80137510(c); // 80140BFC
  c->r[3]=c->r[3]+0x00000354u; // 80140C00
  c->lr=0x80140C08u; f_801557A8(c); // 80140C04
  c->lr=0x80140C0Cu; f_80137510(c); // 80140C08
  c->r[3]=c->r[3]+0x00000354u; // 80140C0C
  c->lr=0x80140C14u; f_801557A8(c); // 80140C10
  c->lr=0x80140C18u; f_80137510(c); // 80140C14
  c->r[3]=c->r[3]+0x00000354u; // 80140C18
  c->lr=0x80140C20u; f_801557A8(c); // 80140C1C
  goto L_80140D48; // 80140C20
L_80140C24:;
  cmps(c,0,(int32_t)c->r[3],0); // 80140C24
  if (!crb(c,2)) { goto L_80140D34; } // 80140C28
  c->r[4]=R32(c->r[31]+0x000000FCu); // 80140C2C
  c->r[3]=c->r[31]|c->r[31]; // 80140C30
  c->r[5]=R32(c->r[31]+0x00000100u); // 80140C34
  c->lr=0x80140C3Cu; f_80140D60(c); // 80140C38
  cmps(c,0,(int32_t)c->r[3],0); // 80140C3C
  if (!crb(c,2)) { goto L_80140D34; } // 80140C40
  c->lr=0x80140C48u; f_80137510(c); // 80140C44
  c->r[3]=c->r[3]+0x00000354u; // 80140C48
  c->lr=0x80140C50u; f_801556CC(c); // 80140C4C
  c->r[0]=R8(c->r[31]+0x000000E9u); // 80140C50
  cmps(c,0,(int32_t)c->r[0],0); // 80140C54
  if (crb(c,2)) { goto L_80140C80; } // 80140C58
  cmps(c,0,(int32_t)c->r[31],0); // 80140C5C
  c->r[30]=c->r[31]|c->r[31]; // 80140C60
  if (crb(c,2)) { goto L_80140C6C; } // 80140C64
  c->r[30]=c->r[31]+0x000000DCu; // 80140C68
L_80140C6C:;
  c->lr=0x80140C70u; f_80137510(c); // 80140C6C
  c->r[4]=c->r[30]|c->r[30]; // 80140C70
  c->lr=0x80140C78u; f_80137A44(c); // 80140C74
  c->r[0]=0u+0x00000000u; // 80140C78
  W8(c->r[31]+0x000000E9u,c->r[0]); // 80140C7C
L_80140C80:;
  c->r[0]=R8(c->r[31]+0x000000E8u); // 80140C80
  cmps(c,0,(int32_t)c->r[0],0); // 80140C84
  if (crb(c,2)) { goto L_80140CB0; } // 80140C88
  cmps(c,0,(int32_t)c->r[31],0); // 80140C8C
  c->r[30]=c->r[31]|c->r[31]; // 80140C90
  if (crb(c,2)) { goto L_80140C9C; } // 80140C94
  c->r[30]=c->r[31]+0x000000D0u; // 80140C98
L_80140C9C:;
  c->lr=0x80140CA0u; f_80129004(c); // 80140C9C
  c->r[4]=c->r[30]|c->r[30]; // 80140CA0
  c->lr=0x80140CA8u; f_80129118(c); // 80140CA4
  c->r[0]=0u+0x00000000u; // 80140CA8
  W8(c->r[31]+0x000000E8u,c->r[0]); // 80140CAC
L_80140CB0:;
  c->lr=0x80140CB4u; f_80137510(c); // 80140CB0
  c->r[3]=c->r[3]+0x00000354u; // 80140CB4
  c->lr=0x80140CBCu; f_801556CC(c); // 80140CB8
  c->r[4]=R32(c->r[31]+0x00000130u); // 80140CBC
  c->r[3]=0u+0x00000000u; // 80140CC0
  cmps(c,0,(int32_t)c->r[4],0); // 80140CC4
  if (crb(c,2)) { goto L_80140CDC; } // 80140CC8
  c->r[0]=R8(c->r[4]+0x00000036u); // 80140CCC
  cmps(c,0,(int32_t)c->r[0],0); // 80140CD0
  if (crb(c,2)) { goto L_80140CDC; } // 80140CD4
  c->r[3]=0u+0x00000001u; // 80140CD8
L_80140CDC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80140CDC
  if (crb(c,2)) { goto L_80140CF4; } // 80140CE0
  c->r[3]=c->r[31]|c->r[31]; // 80140CE4
  c->lr=0x80140CECu; f_80140F18(c); // 80140CE8
  c->r[3]=R32(c->r[31]+0x00000130u); // 80140CEC
  c->lr=0x80140CF4u; f_80128A64(c); // 80140CF0
L_80140CF4:;
  c->r[3]=R32(c->r[31]+0x00000130u); // 80140CF4
  cmps(c,0,(int32_t)c->r[3],0); // 80140CF8
  if (crb(c,2)) { goto L_80140D04; } // 80140CFC
  c->lr=0x80140D04u; f_80128FEC(c); // 80140D00
L_80140D04:;
  c->r[0]=0u+0x00000000u; // 80140D04
  W32(c->r[31]+0x00000130u,c->r[0]); // 80140D08
  c->lr=0x80140D10u; f_80137510(c); // 80140D0C
  c->r[3]=c->r[3]+0x00000354u; // 80140D10
  c->lr=0x80140D18u; f_801557A8(c); // 80140D14
  c->lr=0x80140D1Cu; f_80137510(c); // 80140D18
  c->r[3]=c->r[3]+0x00000354u; // 80140D1C
  c->lr=0x80140D24u; f_801557A8(c); // 80140D20
  c->lr=0x80140D28u; f_80137510(c); // 80140D24
  c->r[3]=c->r[3]+0x00000354u; // 80140D28
  c->lr=0x80140D30u; f_801557A8(c); // 80140D2C
  goto L_80140D48; // 80140D30
L_80140D34:;
  c->r[3]=c->r[31]|c->r[31]; // 80140D34
  c->lr=0x80140D3Cu; f_80140F18(c); // 80140D38
  c->lr=0x80140D40u; f_80137510(c); // 80140D3C
  c->r[3]=c->r[3]+0x00000354u; // 80140D40
  c->lr=0x80140D48u; f_801557A8(c); // 80140D44
L_80140D48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80140D48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80140D4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80140D50
  c->lr=c->r[0]; // 80140D54
  c->r[1]=c->r[1]+0x00000010u; // 80140D58
  return; // 80140D5C
}

// StartChannel__Q44nw4r3snd6detail9WsdPlayerFPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
void f_80140D60(Ctx* __restrict c) {
  trace_call(0x80140D60u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80140D60
  c->r[0]=c->lr; // 80140D64
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80140D68
  W32(c->r[1]+0x000000ACu,c->r[31]); // 80140D6C
  c->r[31]=c->r[4]|c->r[4]; // 80140D70
  W32(c->r[1]+0x000000A8u,c->r[30]); // 80140D74
  c->r[30]=c->r[5]|c->r[5]; // 80140D78
  W32(c->r[1]+0x000000A4u,c->r[29]); // 80140D7C
  c->r[29]=c->r[3]|c->r[3]; // 80140D80
  c->lr=0x80140D88u; f_80137510(c); // 80140D84
  c->r[3]=c->r[3]+0x00000354u; // 80140D88
  c->lr=0x80140D90u; f_801556CC(c); // 80140D8C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80140D90
  c->r[3]=c->r[31]|c->r[31]; // 80140D94
  c->r[4]=R8(c->r[29]+0x000000F8u); // 80140D98
  c->r[10]=c->r[30]|c->r[30]; // 80140D9C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80140DA0
  c->r[5]=c->r[1]+0x00000008u; // 80140DA4
  c->r[31]=c->r[4]+0x00000040u; // 80140DA8
  c->r[4]=c->r[29]+0x00000124u; // 80140DAC
  c->r[6]=c->r[1]+0x00000020u; // 80140DB0
  c->r[7]=R32(c->r[29]+0x00000104u); // 80140DB4
  c->r[8]=R32(c->r[29]+0x00000108u); // 80140DB8
  c->r[9]=0u+0x00000000u; // 80140DBC
  c->ctr=c->r[12]; // 80140DC0
  if (true) { c->lr=0x80140DC8u; dispatch(c,c->ctr); } // 80140DC4
  cmps(c,0,(int32_t)c->r[3],0); // 80140DC8
  if (!crb(c,2)) { goto L_80140DE4; } // 80140DCC
  c->lr=0x80140DD4u; f_80137510(c); // 80140DD0
  c->r[3]=c->r[3]+0x00000354u; // 80140DD4
  c->lr=0x80140DDCu; f_801557A8(c); // 80140DD8
  c->r[3]=0u+0x00000000u; // 80140DDC
  goto L_80140EFC; // 80140DE0
L_80140DE4:;
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 80140DE4
  cmps(c,0,(int32_t)c->r[0],0); // 80140DE8
  if (!crb(c,2)) { goto L_80140DF8; } // 80140DEC
  c->r[30]=R32(c->r[29]+0x00000110u); // 80140DF0
  goto L_80140E20; // 80140DF4
L_80140DF8:;
  cmps(c,0,(int32_t)c->r[0],1); // 80140DF8
  if (!crb(c,2)) { goto L_80140E20; } // 80140DFC
  c->r[3]=R32(c->r[29]+0x00000110u); // 80140E00
  c->r[6]=0u+0x000003E8u; // 80140E04
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80140E08
  c->r[5]=0u+0x00000000u; // 80140E0C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 80140E10
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 80140E14
  c->lr=0x80140E1Cu; f_80252CF4(c); // 80140E18
  c->r[30]=c->r[4]|c->r[4]; // 80140E1C
L_80140E20:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80140E20
  cmpu(c,0,c->r[30],c->r[0]); // 80140E24
  if (!crb(c,1)) { goto L_80140E40; } // 80140E28
  c->lr=0x80140E30u; f_80137510(c); // 80140E2C
  c->r[3]=c->r[3]+0x00000354u; // 80140E30
  c->lr=0x80140E38u; f_801557A8(c); // 80140E34
  c->r[3]=0u+0x00000000u; // 80140E38
  goto L_80140EFC; // 80140E3C
L_80140E40:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 80140E40
  c->r[3]=0u+0x00000002u; // 80140E44
  c->r[4]=R32(c->r[29]+0x000000F4u); // 80140E48
  cmps(c,0,(int32_t)c->r[0],2); // 80140E4C
  if (crb(c,1)) { goto L_80140E58; } // 80140E50
  c->r[3]=c->r[0]|c->r[0]; // 80140E54
L_80140E58:;
  c->r[6]=0u+0x80140000u; // 80140E58
  c->r[5]=c->r[31]|c->r[31]; // 80140E5C
  c->r[7]=c->r[29]|c->r[29]; // 80140E60
  c->r[6]=c->r[6]+0x0000138Cu; // 80140E64
  c->lr=0x80140E6Cu; f_80128DF0(c); // 80140E68
  cmps(c,0,(int32_t)c->r[3],0); // 80140E6C
  c->r[31]=c->r[3]|c->r[3]; // 80140E70
  if (!crb(c,2)) { goto L_80140E8C; } // 80140E74
  c->lr=0x80140E7Cu; f_80137510(c); // 80140E78
  c->r[3]=c->r[3]+0x00000354u; // 80140E7C
  c->lr=0x80140E84u; f_801557A8(c); // 80140E80
  c->r[3]=0u+0x00000000u; // 80140E84
  goto L_80140EFC; // 80140E88
L_80140E8C:;
  c->r[4]=R8(c->r[1]+0x0000000Cu); // 80140E8C
  c->lr=0x80140E94u; f_801295B8(c); // 80140E90
  c->r[4]=R8(c->r[1]+0x0000000Du); // 80140E94
  c->r[3]=c->r[31]|c->r[31]; // 80140E98
  c->lr=0x80140EA0u; f_801295D0(c); // 80140E9C
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 80140EA0
  c->r[3]=c->r[31]|c->r[31]; // 80140EA4
  c->lr=0x80140EACu; f_801295E8(c); // 80140EA8
  c->r[4]=R8(c->r[1]+0x0000000Fu); // 80140EAC
  c->r[3]=c->r[31]|c->r[31]; // 80140EB0
  c->lr=0x80140EB8u; f_80129688(c); // 80140EB4
  c->r[4]=R8(c->r[1]+0x00000010u); // 80140EB8
  c->r[3]=c->r[31]|c->r[31]; // 80140EBC
  c->lr=0x80140EC4u; f_80129690(c); // 80140EC0
  c->r[0]=R8(c->r[29]+0x000000ECu); // 80140EC4
  c->r[3]=c->r[31]|c->r[31]; // 80140EC8
  c->r[6]=c->r[30]|c->r[30]; // 80140ECC
  c->r[4]=c->r[1]+0x00000020u; // 80140ED0
  W8(c->r[31]+0x00000039u,c->r[0]); // 80140ED4
  c->r[5]=0u+0xFFFFFFFFu; // 80140ED8
  c->lr=0x80140EE0u; f_801289E4(c); // 80140EDC
  c->r[0]=0u+0x00000001u; // 80140EE0
  W32(c->r[29]+0x00000130u,c->r[31]); // 80140EE4
  W8(c->r[29]+0x000000EBu,c->r[0]); // 80140EE8
  c->lr=0x80140EF0u; f_80137510(c); // 80140EEC
  c->r[3]=c->r[3]+0x00000354u; // 80140EF0
  c->lr=0x80140EF8u; f_801557A8(c); // 80140EF4
  c->r[3]=0u+0x00000001u; // 80140EF8
L_80140EFC:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80140EFC
  c->r[31]=R32(c->r[1]+0x000000ACu); // 80140F00
  c->r[30]=R32(c->r[1]+0x000000A8u); // 80140F04
  c->r[29]=R32(c->r[1]+0x000000A4u); // 80140F08
  c->lr=c->r[0]; // 80140F0C
  c->r[1]=c->r[1]+0x000000B0u; // 80140F10
  return; // 80140F14
}

// fn_80140F18
void f_80140F18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 80140F18
  c->r[0]=c->lr; // 80140F1C
  W32(c->r[1]+0x00000104u,c->r[0]); // 80140F20
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 80140F24
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 80140F28
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[30]);} // 80140F2C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,30,ea,0,0);} // 80140F30
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[29]);} // 80140F34
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,29,ea,0,0);} // 80140F38
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[28]);} // 80140F3C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,28,ea,0,0);} // 80140F40
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[27]);} // 80140F44
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,27,ea,0,0);} // 80140F48
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[26]);} // 80140F4C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,26,ea,0,0);} // 80140F50
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[25]);} // 80140F54
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,25,ea,0,0);} // 80140F58
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[24]);} // 80140F5C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,24,ea,0,0);} // 80140F60
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[23]);} // 80140F64
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,23,ea,0,0);} // 80140F68
  c->r[11]=c->r[1]+0x00000070u; // 80140F6C
  c->lr=0x80140F74u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80140F70
  c->r[0]=0u+0x43300000u; // 80140F74
  c->r[26]=c->r[3]|c->r[3]; // 80140F78
  W32(c->r[1]+0x00000040u,c->r[0]); // 80140F7C
  W32(c->r[1]+0x00000048u,c->r[0]); // 80140F80
  c->lr=0x80140F88u; f_80137510(c); // 80140F84
  c->r[3]=c->r[3]+0x00000354u; // 80140F88
  c->lr=0x80140F90u; f_801556CC(c); // 80140F8C
  c->r[0]=R32(c->r[26]+0x00000130u); // 80140F90
  cmps(c,0,(int32_t)c->r[0],0); // 80140F94
  if (!crb(c,2)) { goto L_80140FAC; } // 80140F98
  c->lr=0x80140FA0u; f_80137510(c); // 80140F9C
  c->r[3]=c->r[3]+0x00000354u; // 80140FA0
  c->lr=0x80140FA8u; f_801557A8(c); // 80140FA4
  goto L_8014132C; // 80140FA8
L_80140FAC:;
  {uint32_t ea=c->r[2]+0xFFFFA848u; c->f[28]=c->ps1[28]=RF32(ea);} // 80140FAC
  {uint32_t ea=c->r[26]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80140FB0
  c->r[3]=R8(c->r[26]+0x00000128u); // 80140FB4
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[0]); // 80140FB8
  {uint32_t ea=c->r[26]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 80140FBC
  {uint32_t ea=c->r[2]+0xFFFFA848u; c->f[29]=c->ps1[29]=RF32(ea);} // 80140FC0
  cmpu(c,0,c->r[3],0x00000001u); // 80140FC4
  {uint32_t ea=c->r[26]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80140FC8
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[0]); // 80140FCC
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 80140FD0
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[27]=c->ps1[27]=RF32(ea);} // 80140FD4
  if (crb(c,1)) { goto L_80141004; } // 80140FD8
  c->r[0]=c->r[3]+0xFFFFFFC1u; // 80140FDC
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=RF64(ea);} // 80140FE0
  c->r[0]=c->r[0]^0x80000000u; // 80140FE4
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 80140FE8
  W32(c->r[1]+0x00000044u,c->r[0]); // 80140FEC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 80140FF0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80140FF4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80140FF8
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 80140FFC
  goto L_80141028; // 80141000
L_80141004:;
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 80141004
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=RF64(ea);} // 80141008
  c->r[0]=c->r[0]^0x80000000u; // 8014100C
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 80141010
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80141014
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 80141018
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014101C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80141020
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 80141024
L_80141028:;
  {uint32_t ea=c->r[26]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80141028
  c->r[3]=R8(c->r[26]+0x00000129u); // 8014102C
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[0]); // 80141030
  {uint32_t ea=c->r[26]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80141034
  cmpu(c,0,c->r[3],0x00000001u); // 80141038
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 8014103C
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 80141040
  if (crb(c,1)) { goto L_80141070; } // 80141044
  c->r[0]=c->r[3]+0x00000001u; // 80141048
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=RF64(ea);} // 8014104C
  c->r[0]=c->r[0]^0x80000000u; // 80141050
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 80141054
  W32(c->r[1]+0x00000044u,c->r[0]); // 80141058
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 8014105C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80141060
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80141064
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[0]); // 80141068
  goto L_8014108C; // 8014106C
L_80141070:;
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 80141070
  {uint32_t ea=c->r[2]+0xFFFFA868u; c->f[2]=RF64(ea);} // 80141074
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 80141078
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014107C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80141080
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80141084
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[0]); // 80141088
L_8014108C:;
  c->r[0]=R8(c->r[26]+0x0000012Du); // 8014108C
  c->r[27]=c->r[1]+0x00000030u; // 80141090
  W32(c->r[1]+0x00000044u,c->r[3]); // 80141094
  c->r[28]=c->r[1]+0x00000008u; // 80141098
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[24]=c->ps1[24]=RF32(ea);} // 8014109C
  c->r[29]=0u+0x00000000u; // 801410A0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801410A4
  {uint32_t ea=c->r[2]+0xFFFFA868u; c->f[30]=RF64(ea);} // 801410A8
  c->f[25]=c->f[24]; // 801410AC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 801410B0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 801410B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 801410B8
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[31]=c->ps1[31]=RF32(ea);} // 801410BC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[30]); // 801410C0
  {uint32_t ea=c->r[2]+0xFFFFA854u; c->f[2]=c->ps1[2]=RF32(ea);} // 801410C4
  c->r[4]=R8(c->r[26]+0x0000012Au); // 801410C8
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[31]); // 801410CC
  {uint32_t ea=c->r[2]+0xFFFFA848u; c->f[0]=c->ps1[0]=RF32(ea);} // 801410D0
  c->r[3]=R8(c->r[26]+0x0000012Bu); // 801410D4
  c->r[0]=R8(c->r[26]+0x0000012Cu); // 801410D8
  {uint32_t ea=c->r[26]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 801410DC
  W8(c->r[1]+0x00000008u,c->r[4]); // 801410E0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801410E4
  {uint32_t ea=c->r[26]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 801410E8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801410EC
  {uint32_t ea=c->r[26]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801410F0
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[3]); // 801410F4
  W8(c->r[1]+0x00000009u,c->r[3]); // 801410F8
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[2]); // 801410FC
  c->r[31]=R32(c->r[26]+0x00000018u); // 80141100
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 80141104
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80141108
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[23]=c->ps1[23]=RF32(ea);} // 8014110C
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[4]); // 80141110
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[1]); // 80141114
L_80141118:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 80141118
  c->r[3]=c->r[26]|c->r[26]; // 8014111C
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[23]);} // 80141120
  c->r[4]=c->r[29]|c->r[29]; // 80141124
  W32(c->r[1]+0x00000044u,c->r[0]); // 80141128
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014112C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 80141130
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 80141134
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 80141138
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8014113C
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 80141140
  c->lr=0x80141148u; f_801266C8(c); // 80141144
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80141148
  c->r[29]=c->r[29]+0x00000001u; // 8014114C
  cmps(c,0,(int32_t)c->r[29],3); // 80141150
  c->r[28]=c->r[28]+0x00000001u; // 80141154
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80141158
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 8014115C
  c->r[27]=c->r[27]+0x00000004u; // 80141160
  if (crb(c,0)) { IRQCHK(c); goto L_80141118; } // 80141164
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80141168
  c->r[27]=c->r[1]+0x00000020u; // 8014116C
  c->r[28]=c->r[1]+0x00000010u; // 80141170
  c->r[29]=0u+0x00000000u; // 80141174
L_80141178:;
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[30]);} // 80141178
  c->r[3]=c->r[26]|c->r[26]; // 8014117C
  c->r[4]=c->r[29]|c->r[29]; // 80141180
  c->lr=0x80141188u; f_801266F8(c); // 80141184
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80141188
  c->r[3]=c->r[26]|c->r[26]; // 8014118C
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[30]);} // 80141190
  c->r[4]=c->r[29]|c->r[29]; // 80141194
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80141198
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 8014119C
  c->lr=0x801411A4u; f_80126708(c); // 801411A0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801411A4
  c->r[29]=c->r[29]+0x00000001u; // 801411A8
  cmps(c,0,(int32_t)c->r[29],4); // 801411AC
  c->r[27]=c->r[27]+0x00000004u; // 801411B0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801411B4
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 801411B8
  c->r[28]=c->r[28]+0x00000004u; // 801411BC
  if (crb(c,0)) { IRQCHK(c); goto L_80141178; } // 801411C0
  c->r[0]=R32(c->r[26]+0x00000028u); // 801411C4
  c->r[29]=c->r[1]+0x00000020u; // 801411C8
  c->r[3]=R32(c->r[26]+0x00000130u); // 801411CC
  c->r[28]=c->r[1]+0x00000010u; // 801411D0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801411D4
  c->r[27]=0u+0x00000000u; // 801411D8
  W32(c->r[3]+0x000000D0u,c->r[0]); // 801411DC
  c->r[30]=0u+0x00000000u; // 801411E0
  {uint32_t ea=c->r[1]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 801411E4
  c->r[0]=R32(c->r[26]+0x0000002Cu); // 801411E8
  c->r[3]=R32(c->r[26]+0x00000130u); // 801411EC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 801411F0
  W32(c->r[3]+0x000000D4u,c->r[0]); // 801411F4
  c->r[3]=R32(c->r[26]+0x00000130u); // 801411F8
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[29]);} // 801411FC
  c->r[3]=R32(c->r[26]+0x00000130u); // 80141200
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[28]);} // 80141204
  c->r[3]=R32(c->r[26]+0x00000130u); // 80141208
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[27]);} // 8014120C
  c->r[3]=R32(c->r[26]+0x00000130u); // 80141210
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[26]);} // 80141214
  c->r[3]=R32(c->r[26]+0x00000130u); // 80141218
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[25]);} // 8014121C
  c->r[3]=R32(c->r[26]+0x00000130u); // 80141220
  W32(c->r[3]+0x00000050u,c->r[31]); // 80141224
  c->r[0]=R32(c->r[26]+0x0000001Cu); // 80141228
  c->r[3]=R32(c->r[26]+0x00000130u); // 8014122C
  W32(c->r[3]+0x00000054u,c->r[0]); // 80141230
  {uint32_t ea=c->r[26]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80141234
  c->r[3]=R32(c->r[26]+0x00000130u); // 80141238
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[1]);} // 8014123C
  c->r[3]=R32(c->r[26]+0x00000130u); // 80141240
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[24]);} // 80141244
  c->r[3]=R32(c->r[26]+0x00000130u); // 80141248
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 8014124C
  c->r[3]=R32(c->r[26]+0x00000130u); // 80141250
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[3]);} // 80141254
  c->r[3]=R32(c->r[26]+0x00000130u); // 80141258
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[2]);} // 8014125C
L_80141260:;
  c->r[3]=c->r[26]|c->r[26]; // 80141260
  c->r[4]=c->r[27]|c->r[27]; // 80141264
  c->lr=0x8014126Cu; f_801266E8(c); // 80141268
  c->r[0]=R32(c->r[26]+0x00000130u); // 8014126C
  c->r[27]=c->r[27]+0x00000001u; // 80141270
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80141274
  cmps(c,0,(int32_t)c->r[27],4); // 80141278
  c->r[3]=c->r[0]+c->r[30]; // 8014127C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80141280
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[1]);} // 80141284
  c->r[29]=c->r[29]+0x00000004u; // 80141288
  c->r[28]=c->r[28]+0x00000004u; // 8014128C
  c->r[0]=R32(c->r[26]+0x00000130u); // 80141290
  c->r[3]=c->r[0]+c->r[30]; // 80141294
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 80141298
  c->r[0]=R32(c->r[26]+0x00000130u); // 8014129C
  c->r[3]=c->r[0]+c->r[30]; // 801412A0
  c->r[30]=c->r[30]+0x00000004u; // 801412A4
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[2]);} // 801412A8
  if (crb(c,0)) { IRQCHK(c); goto L_80141260; } // 801412AC
  c->r[27]=c->r[26]+0x0000006Cu; // 801412B0
  c->r[28]=0u+0x00000000u; // 801412B4
  goto L_801412D8; // 801412B8
L_801412BC:;
  c->r[3]=R32(c->r[26]+0x00000130u); // 801412BC
  c->r[4]=c->r[28]|c->r[28]; // 801412C0
  c->r[5]=c->r[27]|c->r[27]; // 801412C4
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801412C8
  c->lr=0x801412D0u; f_8013D704(c); // 801412CC
  c->r[27]=c->r[27]+0x00000018u; // 801412D0
  c->r[28]=c->r[28]+0x00000001u; // 801412D4
L_801412D8:;
  c->r[0]=R32(c->r[26]+0x000000F4u); // 801412D8
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801412DC
  if (crb(c,0)) { IRQCHK(c); goto L_801412BC; } // 801412E0
  c->r[3]=R32(c->r[26]+0x00000130u); // 801412E4
  {uint32_t ea=c->r[26]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 801412E8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801412EC
  {uint32_t ea=c->r[26]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 801412F0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 801412F4
  c->r[0]=R32(c->r[26]+0x0000011Cu); // 801412F8
  W32(c->r[3]+0x00000024u,c->r[0]); // 801412FC
  c->r[0]=R8(c->r[26]+0x00000120u); // 80141300
  W8(c->r[3]+0x00000028u,c->r[0]); // 80141304
  c->r[0]=R8(c->r[26]+0x00000121u); // 80141308
  W8(c->r[3]+0x00000029u,c->r[0]); // 8014130C
  c->r[0]=R8(c->r[26]+0x00000122u); // 80141310
  W8(c->r[3]+0x0000002Au,c->r[0]); // 80141314
  c->r[0]=R8(c->r[26]+0x00000123u); // 80141318
  W8(c->r[3]+0x0000002Bu,c->r[0]); // 8014131C
  c->lr=0x80141324u; f_80137510(c); // 80141320
  c->r[3]=c->r[3]+0x00000354u; // 80141324
  c->lr=0x8014132Cu; f_801557A8(c); // 80141328
L_8014132C:;
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 8014132C
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 80141330
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,30,ea,0,0);} // 80141334
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[30]=RF64(ea);} // 80141338
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,29,ea,0,0);} // 8014133C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[29]=RF64(ea);} // 80141340
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,28,ea,0,0);} // 80141344
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[28]=RF64(ea);} // 80141348
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,27,ea,0,0);} // 8014134C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[27]=RF64(ea);} // 80141350
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,26,ea,0,0);} // 80141354
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[26]=RF64(ea);} // 80141358
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,25,ea,0,0);} // 8014135C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[25]=RF64(ea);} // 80141360
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,24,ea,0,0);} // 80141364
  {uint32_t ea=c->r[1]+0x00000080u; c->f[24]=RF64(ea);} // 80141368
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,23,ea,0,0);} // 8014136C
  c->r[11]=c->r[1]+0x00000070u; // 80141370
  {uint32_t ea=c->r[1]+0x00000070u; c->f[23]=RF64(ea);} // 80141374
  c->lr=0x8014137Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80141378
  c->r[0]=R32(c->r[1]+0x00000104u); // 8014137C
  c->lr=c->r[0]; // 80141380
  c->r[1]=c->r[1]+0x00000100u; // 80141384
  return; // 80141388
}

// fn_8014138C
void f_8014138C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014138C
  c->r[0]=c->lr; // 80141390
  W32(c->r[1]+0x00000024u,c->r[0]); // 80141394
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80141398
  c->r[31]=c->r[5]|c->r[5]; // 8014139C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801413A0
  c->r[30]=c->r[4]|c->r[4]; // 801413A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801413A8
  c->r[29]=c->r[3]|c->r[3]; // 801413AC
  c->lr=0x801413B4u; f_80137510(c); // 801413B0
  c->r[3]=c->r[3]+0x00000354u; // 801413B4
  c->lr=0x801413BCu; f_801556CC(c); // 801413B8
  cmps(c,0,(int32_t)c->r[30],2); // 801413BC
  if (!crb(c,2)) { goto L_801413CC; } // 801413C0
  c->r[3]=c->r[29]|c->r[29]; // 801413C4
  c->lr=0x801413CCu; f_80128FEC(c); // 801413C8
L_801413CC:;
  c->r[0]=0u+0x00000000u; // 801413CC
  W32(c->r[31]+0x00000130u,c->r[0]); // 801413D0
  c->lr=0x801413D8u; f_80137510(c); // 801413D4
  c->r[3]=c->r[3]+0x00000354u; // 801413D8
  c->lr=0x801413E0u; f_801557A8(c); // 801413DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801413E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801413E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801413E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801413EC
  c->lr=c->r[0]; // 801413F0
  c->r[1]=c->r[1]+0x00000020u; // 801413F4
  return; // 801413F8
}

// fn_801413FC
void f_801413FC(Ctx* __restrict c) {
  f_80140AB4(c); return; // 801413FC
}

// fn_80141400
void f_80141400(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 80141400
  c->r[12]=R32(c->r[12]+0x00000010u); // 80141404
  c->ctr=c->r[12]; // 80141408
  if (true) { dispatch(c,c->ctr); return; } // 8014140C
}

// fn_80141410
void f_80141410(Ctx* __restrict c) {
  return; // 80141410
}

// fn_80141414
void f_80141414(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000EAu); // 80141414
  c->r[0]=0u-c->r[3]; // 80141418
  c->r[0]=c->r[0]|c->r[3]; // 8014141C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80141420
  return; // 80141424
}

// fn_80141428
void f_80141428(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000E9u); // 80141428
  c->r[0]=0u-c->r[3]; // 8014142C
  c->r[0]=c->r[0]|c->r[3]; // 80141430
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80141434
  return; // 80141438
}

// fn_8014143C
void f_8014143C(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000E8u); // 8014143C
  c->r[0]=0u-c->r[3]; // 80141440
  c->r[0]=c->r[0]|c->r[3]; // 80141444
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80141448
  return; // 8014144C
}

// fn_80141450
void f_80141450(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF30u; // 80141450
  f_80141410(c); return; // 80141454
}

// fn_80141458
void f_80141458(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF30u; // 80141458
  f_8014095C(c); return; // 8014145C
}

// fn_80141460
void f_80141460(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF30u; // 80141460
  f_8013FD64(c); return; // 80141464
}

// fn_80141468
void f_80141468(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF24u; // 80141468
  f_80141400(c); return; // 8014146C
}

// fn_80141470
void f_80141470(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF24u; // 80141470
  f_801413FC(c); return; // 80141474
}

// fn_80141478
void f_80141478(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF24u; // 80141478
  f_8013FD64(c); return; // 8014147C
}

// fn_80141480
void f_80141480(Ctx* __restrict c) {
  c->r[7]=R16(c->r[3]+0x00000022u); // 80141480
  c->r[0]=rotl(c->r[4],12)&0x000FF000u; // 80141484
  c->r[9]=R16(c->r[3]+0x00000024u); // 80141488
  c->r[5]=0u+0x00000001u; // 8014148C
  c->r[6]=sraw(c,c->r[7],4); // 80141490
  c->r[4]=rotl(c->r[7],0)&0x0000000Fu; // 80141494
  c->r[7]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80141498
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8014149C
  c->r[6]=c->r[3]+c->r[7]; // 801414A0
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 801414A4
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+c->r[7]); // 801414A8
  c->r[7]=(uint32_t)(int32_t)(int16_t)c->r[9]; // 801414AC
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000002u); // 801414B0
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 801414B4
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000026u); // 801414B8
  c->r[0]=sraw(c,c->r[0],1); // 801414BC
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[8]); // 801414C0
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 801414C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801414C8
  c->r[7]=c->r[7]+c->r[5]; // 801414CC
  c->r[7]=c->r[7]+c->r[0]; // 801414D0
  c->r[7]=sraw(c,c->r[7],10); // 801414D4
  c->r[7]=c->r[7]+0x00000001u; // 801414D8
  c->r[7]=sraw(c,c->r[7],1); // 801414DC
  cmps(c,0,(int32_t)c->r[7],32767); // 801414E0
  if (!crb(c,1)) { goto L_801414F0; } // 801414E4
  c->r[7]=0u+0x00007FFFu; // 801414E8
  goto L_801414FC; // 801414EC
L_801414F0:;
  cmps(c,0,(int32_t)c->r[7],-32768); // 801414F0
  if (!crb(c,0)) { goto L_801414FC; } // 801414F4
  c->r[7]=0u+0xFFFF8000u; // 801414F8
L_801414FC:;
  W16(c->r[3]+0x00000026u,c->r[9]); // 801414FC
  W16(c->r[3]+0x00000024u,c->r[7]); // 80141500
  c->r[3]=c->r[7]|c->r[7]; // 80141504
  return; // 80141508
}

// fn_8014150C
void f_8014150C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014150C
  c->r[0]=c->lr; // 80141510
  W32(c->r[1]+0x00000014u,c->r[0]); // 80141514
  c->r[3]=R32(c->r[13]+0xFFFF8F60u); // 80141518
  c->lr=0x80141520u; f_8014E714(c); // 8014151C
  c->r[3]=0u+0x00000004u; // 80141520
  c->r[3]=c->r[3]|0x00040000u; // 80141524
  mtspr(c,914,c->r[3]); // 80141528
  c->r[3]=0u+0x00000005u; // 8014152C
  c->r[3]=c->r[3]|0x00050000u; // 80141530
  mtspr(c,915,c->r[3]); // 80141534
  c->r[3]=0u+0x00000006u; // 80141538
  c->r[3]=c->r[3]|0x00060000u; // 8014153C
  mtspr(c,916,c->r[3]); // 80141540
  c->r[3]=0u+0x00000007u; // 80141544
  c->r[3]=c->r[3]|0x00070000u; // 80141548
  mtspr(c,917,c->r[3]); // 8014154C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80141550
  c->lr=c->r[0]; // 80141554
  c->r[1]=c->r[1]+0x00000010u; // 80141558
  return; // 8014155C
}

// fn_80141560
void f_80141560(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80141560
  c->r[0]=c->lr; // 80141564
  c->r[6]=0u+0x802C0000u; // 80141568
  {uint32_t ea=c->r[2]+0xFFFFA870u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014156C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80141570
  c->r[7]=c->r[3]+0x00000014u; // 80141574
  c->r[8]=c->r[3]+0x00000020u; // 80141578
  c->r[6]=c->r[6]+0x00006438u; // 8014157C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80141580
  c->r[31]=0u+0x00000000u; // 80141584
  c->r[0]=0u+0x00000004u; // 80141588
  c->r[4]=0u+0x00000000u; // 8014158C
  W32(c->r[1]+0x00000038u,c->r[30]); // 80141590
  c->r[30]=c->r[3]|c->r[3]; // 80141594
  c->r[5]=0u+0x00000011u; // 80141598
  W32(c->r[3]+0x00000014u,c->r[31]); // 8014159C
  W32(c->r[3]+0x00000018u,c->r[31]); // 801415A0
  W32(c->r[3]+0x00000020u,c->r[31]); // 801415A4
  W32(c->r[3]+0x00000024u,c->r[31]); // 801415A8
  W32(c->r[3]+0x00000004u,c->r[31]); // 801415AC
  W32(c->r[3]+0x00000008u,c->r[31]); // 801415B0
  W32(c->r[3]+0x00000000u,c->r[6]); // 801415B4
  W32(c->r[3]+0x00000010u,c->r[31]); // 801415B8
  W32(c->r[3]+0x00000014u,c->r[7]); // 801415BC
  W32(c->r[3]+0x00000018u,c->r[7]); // 801415C0
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 801415C4
  W32(c->r[3]+0x00000020u,c->r[8]); // 801415C8
  W32(c->r[3]+0x00000024u,c->r[8]); // 801415CC
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 801415D0
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 801415D4
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 801415D8
  W32(c->r[3]+0x00000028u,c->r[31]); // 801415DC
  W8(c->r[3]+0x000000D6u,c->r[31]); // 801415E0
  W32(c->r[3]+0x000000B4u,c->r[31]); // 801415E4
  W8(c->r[3]+0x000000BAu,c->r[0]); // 801415E8
  c->r[3]=c->r[3]+0x000000BCu; // 801415EC
  c->lr=0x801415F4u; f_8000443C(c); // 801415F0
  c->r[3]=c->r[30]+0x000000CDu; // 801415F4
  c->r[4]=0u+0x00000000u; // 801415F8
  c->r[5]=0u+0x00000009u; // 801415FC
  c->lr=0x80141604u; f_8000443C(c); // 80141600
  {uint32_t ea=c->r[2]+0xFFFFA870u; c->f[1]=c->ps1[1]=RF32(ea);} // 80141604
  c->r[4]=0u+0x000000FFu; // 80141608
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014160C
  c->r[0]=c->r[31]|0x00000001u; // 80141610
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[1]);} // 80141614
  c->r[3]=c->r[30]|c->r[30]; // 80141618
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 8014161C
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 80141620
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 80141624
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 80141628
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 8014162C
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 80141630
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 80141634
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 80141638
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 8014163C
  W8(c->r[30]+0x000000B8u,c->r[4]); // 80141640
  W8(c->r[30]+0x000000B9u,c->r[4]); // 80141644
  W8(c->r[30]+0x000000BBu,c->r[0]); // 80141648
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8014164C
  c->r[30]=R32(c->r[1]+0x00000038u); // 80141650
  c->r[0]=R32(c->r[1]+0x00000044u); // 80141654
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80141658
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 8014165C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80141660
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80141664
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80141668
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 8014166C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80141670
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80141674
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80141678
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8014167C
  c->lr=c->r[0]; // 80141680
  c->r[1]=c->r[1]+0x00000040u; // 80141684
  return; // 80141688
}

// fn_8014168C
void f_8014168C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014168C
  c->r[0]=c->lr; // 80141690
  c->r[6]=0u+0x802C0000u; // 80141694
  {uint32_t ea=c->r[2]+0xFFFFA870u; c->f[0]=c->ps1[0]=RF32(ea);} // 80141698
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014169C
  c->r[7]=c->r[3]+0x00000014u; // 801416A0
  c->r[0]=R8(c->r[4]+0x00000009u); // 801416A4
  c->r[8]=c->r[3]+0x00000020u; // 801416A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801416AC
  c->r[31]=0u+0x00000000u; // 801416B0
  c->r[6]=c->r[6]+0x00006438u; // 801416B4
  c->r[5]=0u+0x00000010u; // 801416B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801416BC
  c->r[30]=c->r[4]|c->r[4]; // 801416C0
  c->r[4]=c->r[4]+0x0000000Cu; // 801416C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801416C8
  c->r[29]=c->r[3]|c->r[3]; // 801416CC
  W32(c->r[3]+0x00000014u,c->r[31]); // 801416D0
  W32(c->r[3]+0x00000018u,c->r[31]); // 801416D4
  W32(c->r[3]+0x00000020u,c->r[31]); // 801416D8
  W32(c->r[3]+0x00000024u,c->r[31]); // 801416DC
  W32(c->r[3]+0x00000004u,c->r[31]); // 801416E0
  W32(c->r[3]+0x00000008u,c->r[31]); // 801416E4
  W32(c->r[3]+0x00000000u,c->r[6]); // 801416E8
  W32(c->r[3]+0x00000010u,c->r[31]); // 801416EC
  W32(c->r[3]+0x00000014u,c->r[7]); // 801416F0
  W32(c->r[3]+0x00000018u,c->r[7]); // 801416F4
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 801416F8
  W32(c->r[3]+0x00000020u,c->r[8]); // 801416FC
  W32(c->r[3]+0x00000024u,c->r[8]); // 80141700
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 80141704
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80141708
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 8014170C
  W32(c->r[3]+0x00000028u,c->r[31]); // 80141710
  W8(c->r[3]+0x000000D6u,c->r[31]); // 80141714
  W32(c->r[3]+0x000000B4u,c->r[31]); // 80141718
  W8(c->r[3]+0x000000BAu,c->r[0]); // 8014171C
  c->r[3]=c->r[3]+0x000000BCu; // 80141720
  c->lr=0x80141728u; f_8025C504(c); // 80141724
  W8(c->r[29]+0x000000CCu,c->r[31]); // 80141728
  c->r[3]=c->r[29]+0x000000CDu; // 8014172C
  c->r[4]=c->r[30]+0x0000001Cu; // 80141730
  c->r[5]=0u+0x00000008u; // 80141734
  c->lr=0x8014173Cu; f_8025C504(c); // 80141738
  c->r[4]=R8(c->r[30]+0x0000000Au); // 8014173C
  c->r[3]=c->r[29]|c->r[29]; // 80141740
  {uint32_t ea=c->r[30]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 80141744
  {uint32_t ea=c->r[30]+0x00000028u; c->f[8]=c->ps1[8]=RF32(ea);} // 80141748
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 8014174C
  {uint32_t ea=c->r[30]+0x00000030u; c->f[6]=c->ps1[6]=RF32(ea);} // 80141750
  {uint32_t ea=c->r[30]+0x00000034u; c->f[5]=c->ps1[5]=RF32(ea);} // 80141754
  {uint32_t ea=c->r[30]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 80141758
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8014175C
  {uint32_t ea=c->r[30]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 80141760
  {uint32_t ea=c->r[30]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80141764
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80141768
  c->r[0]=R8(c->r[30]+0x00000008u); // 8014176C
  W8(c->r[29]+0x000000D5u,c->r[31]); // 80141770
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[9]);} // 80141774
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[8]);} // 80141778
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[7]);} // 8014177C
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[6]);} // 80141780
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[5]);} // 80141784
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[4]);} // 80141788
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[3]);} // 8014178C
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[2]);} // 80141790
  {uint32_t ea=c->r[29]+0x0000004Cu; WF32(ea,c->f[1]);} // 80141794
  {uint32_t ea=c->r[29]+0x00000050u; WF32(ea,c->f[0]);} // 80141798
  W8(c->r[29]+0x000000B8u,c->r[4]); // 8014179C
  W8(c->r[29]+0x000000B9u,c->r[4]); // 801417A0
  W8(c->r[29]+0x000000BBu,c->r[0]); // 801417A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801417A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801417AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801417B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801417B4
  c->lr=c->r[0]; // 801417B8
  c->r[1]=c->r[1]+0x00000020u; // 801417BC
  return; // 801417C0
}

// fn_801417C4
void f_801417C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801417C4
  c->r[0]=c->lr; // 801417C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801417CC
  c->r[11]=c->r[1]+0x00000030u; // 801417D0
  c->lr=0x801417D8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801417D4
  cmps(c,0,(int32_t)c->r[3],0); // 801417D8
  c->r[27]=c->r[3]|c->r[3]; // 801417DC
  c->r[28]=c->r[4]|c->r[4]; // 801417E0
  if (crb(c,2)) { goto L_801418E0; } // 801417E4
  c->r[4]=0u+0x802C0000u; // 801417E8
  c->r[31]=R32(c->r[3]+0x00000014u); // 801417EC
  c->r[4]=c->r[4]+0x00006438u; // 801417F0
  c->r[30]=c->r[3]+0x00000014u; // 801417F4
  W32(c->r[3]+0x00000000u,c->r[4]); // 801417F8
  goto L_80141850; // 801417FC
L_80141800:;
  c->r[29]=c->r[31]|c->r[31]; // 80141800
  c->r[31]=R32(c->r[31]+0x00000000u); // 80141804
  c->r[3]=c->r[27]+0x00000010u; // 80141808
  c->r[4]=c->r[1]+0x00000008u; // 8014180C
  W32(c->r[1]+0x00000008u,c->r[29]); // 80141810
  c->lr=0x80141818u; f_800F63A4(c); // 80141814
  c->r[0]=R8(c->r[29]+0x000000D2u); // 80141818
  cmps(c,0,(int32_t)c->r[0],0); // 8014181C
  if (!crb(c,2)) { goto L_80141850; } // 80141820
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 80141824
  if (crb(c,2)) { goto L_80141850; } // 80141828
  c->r[12]=R32(c->r[29]+0x00000000u); // 8014182C
  c->r[3]=c->r[29]|c->r[29]; // 80141830
  c->r[4]=0u+0xFFFFFFFFu; // 80141834
  c->r[12]=R32(c->r[12]+0x00000008u); // 80141838
  c->ctr=c->r[12]; // 8014183C
  if (true) { c->lr=0x80141844u; dispatch(c,c->ctr); } // 80141840
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80141844
  c->r[4]=c->r[29]|c->r[29]; // 80141848
  c->lr=0x80141850u; f_8017C1B4(c); // 8014184C
L_80141850:;
  cmpu(c,0,c->r[31],c->r[30]); // 80141850
  if (!crb(c,2)) { IRQCHK(c); goto L_80141800; } // 80141854
  c->r[12]=R32(c->r[27]+0x00000000u); // 80141858
  c->r[3]=c->r[27]|c->r[27]; // 8014185C
  c->r[4]=0u+0x00000000u; // 80141860
  c->r[12]=R32(c->r[12]+0x00000050u); // 80141864
  c->ctr=c->r[12]; // 80141868
  if (true) { c->lr=0x80141870u; dispatch(c,c->ctr); } // 8014186C
  c->r[29]=R32(c->r[27]+0x00000028u); // 80141870
  cmps(c,1,(int32_t)c->r[29],0); // 80141874
  if (crb(c,6)) { goto L_801418B0; } // 80141878
  c->r[0]=R8(c->r[29]+0x00000059u); // 8014187C
  cmps(c,0,(int32_t)c->r[0],0); // 80141880
  if (!crb(c,2)) { goto L_801418B0; } // 80141884
  if (crb(c,6)) { goto L_801418B0; } // 80141888
  c->r[12]=R32(c->r[29]+0x00000000u); // 8014188C
  c->r[3]=c->r[29]|c->r[29]; // 80141890
  c->r[4]=0u+0xFFFFFFFFu; // 80141894
  c->r[12]=R32(c->r[12]+0x00000008u); // 80141898
  c->ctr=c->r[12]; // 8014189C
  if (true) { c->lr=0x801418A4u; dispatch(c,c->ctr); } // 801418A0
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 801418A4
  c->r[4]=c->r[29]|c->r[29]; // 801418A8
  c->lr=0x801418B0u; f_8017C1B4(c); // 801418AC
L_801418B0:;
  c->r[3]=addc(c,c->r[27],0x0000001Cu,0); cr0(c,c->r[3]); // 801418B0
  if (crb(c,2)) { goto L_801418C0; } // 801418B4
  c->r[4]=0u+0x00000000u; // 801418B8
  c->lr=0x801418C0u; f_800F6320(c); // 801418BC
L_801418C0:;
  c->r[3]=addc(c,c->r[27],0x00000010u,0); cr0(c,c->r[3]); // 801418C0
  if (crb(c,2)) { goto L_801418D0; } // 801418C4
  c->r[4]=0u+0x00000000u; // 801418C8
  c->lr=0x801418D0u; f_800F6320(c); // 801418CC
L_801418D0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801418D0
  if (!crb(c,1)) { goto L_801418E0; } // 801418D4
  c->r[3]=c->r[27]|c->r[27]; // 801418D8
  c->lr=0x801418E0u; f_802525B0(c); // 801418DC
L_801418E0:;
  c->r[11]=c->r[1]+0x00000030u; // 801418E0
  c->r[3]=c->r[27]|c->r[27]; // 801418E4
  c->lr=0x801418ECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801418E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801418EC
  c->lr=c->r[0]; // 801418F0
  c->r[1]=c->r[1]+0x00000030u; // 801418F4
  return; // 801418F8
}

// fn_801418FC
void f_801418FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801418FC
  c->r[0]=c->lr; // 80141900
  W32(c->r[1]+0x00000024u,c->r[0]); // 80141904
  c->r[0]=c->r[3]+0x00000014u; // 80141908
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014190C
  c->r[31]=c->r[4]|c->r[4]; // 80141910
  c->r[4]=c->r[1]+0x00000008u; // 80141914
  W32(c->r[1]+0x00000018u,c->r[30]); // 80141918
  c->r[30]=c->r[3]|c->r[3]; // 8014191C
  c->r[3]=c->r[3]+0x00000010u; // 80141920
  c->r[5]=c->r[31]+0x00000004u; // 80141924
  W32(c->r[1]+0x00000008u,c->r[0]); // 80141928
  c->lr=0x80141930u; f_800F6430(c); // 8014192C
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 80141930
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80141934
  c->r[30]=R32(c->r[1]+0x00000018u); // 80141938
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014193C
  c->lr=c->r[0]; // 80141940
  c->r[1]=c->r[1]+0x00000020u; // 80141944
  return; // 80141948
}

// fn_8014194C
void f_8014194C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014194C
  c->r[0]=c->lr; // 80141950
  c->r[3]=c->r[3]+0x00000010u; // 80141954
  W32(c->r[1]+0x00000014u,c->r[0]); // 80141958
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014195C
  c->r[31]=c->r[4]|c->r[4]; // 80141960
  c->r[4]=c->r[4]+0x00000004u; // 80141964
  c->lr=0x8014196Cu; f_800F645C(c); // 80141968
  c->r[0]=0u+0x00000000u; // 8014196C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80141970
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80141974
  c->r[0]=R32(c->r[1]+0x00000014u); // 80141978
  c->lr=c->r[0]; // 8014197C
  c->r[1]=c->r[1]+0x00000010u; // 80141980
  return; // 80141984
}

// fn_80141988
void f_80141988(Ctx* __restrict c) {
  c->r[0]=0u+0xFFFFFFFFu; // 80141988
  W32(c->r[3]+0x00000000u,c->r[0]); // 8014198C
  return; // 80141990
}

// fn_80141994
void f_80141994(Ctx* __restrict c) {
  return; // 80141994
}

// fn_80141998
void f_80141998(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],16); // 80141998
  if (crb(c,2)) { goto L_801419A4; } // 8014199C
  goto L_801419AC; // 801419A0
L_801419A4:;
  c->r[3]=R8(c->r[3]+0x000000B8u); // 801419A4
  return; // 801419A8
L_801419AC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801419AC
  c->r[12]=R32(c->r[12]+0x00000034u); // 801419B0
  c->ctr=c->r[12]; // 801419B4
  if (true) { dispatch(c,c->ctr); return; } // 801419B8
}

// fn_801419BC
void f_801419BC(Ctx* __restrict c) {
  return; // 801419BC
}

// fn_801419C0
void f_801419C0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],16); // 801419C0
  if (crb(c,2)) { goto L_801419CC; } // 801419C4
  goto L_801419D4; // 801419C8
L_801419CC:;
  W8(c->r[3]+0x000000B8u,c->r[5]); // 801419CC
  return; // 801419D0
L_801419D4:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801419D4
  c->r[12]=R32(c->r[12]+0x00000038u); // 801419D8
  c->ctr=c->r[12]; // 801419DC
  if (true) { dispatch(c,c->ctr); return; } // 801419E0
}

// fn_801419E4
void f_801419E4(Ctx* __restrict c) {
  return; // 801419E4
}

// GetVtxColorElement__Q34nw4r3lyt4PaneCFUl
void f_801419E8(Ctx* __restrict c) {
  trace_call(0x801419E8u);
  c->r[3]=0u+0x000000FFu; // 801419E8
  return; // 801419EC
}

// SetVtxColorElement__Q34nw4r3lyt4PaneFUlUc
void f_801419F0(Ctx* __restrict c) {
  trace_call(0x801419F0u);
  return; // 801419F0
}

// FindPaneByName__Q34nw4r3lyt4PaneFPCcb
void f_801419F4(Ctx* __restrict c) {
  trace_call(0x801419F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801419F4
  c->r[0]=c->lr; // 801419F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801419FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80141A00
  W32(c->r[1]+0x00000018u,c->r[30]); // 80141A04
  c->r[30]=c->r[3]|c->r[3]; // 80141A08
  c->r[3]=c->r[3]+0x000000BCu; // 80141A0C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80141A10
  c->r[29]=c->r[5]|c->r[5]; // 80141A14
  W32(c->r[1]+0x00000010u,c->r[28]); // 80141A18
  c->r[28]=c->r[4]|c->r[4]; // 80141A1C
  c->lr=0x80141A24u; f_8014C6F4(c); // 80141A20
  cmps(c,0,(int32_t)c->r[3],0); // 80141A24
  if (crb(c,2)) { goto L_80141A34; } // 80141A28
  c->r[3]=c->r[30]|c->r[30]; // 80141A2C
  goto L_80141A7C; // 80141A30
L_80141A34:;
  cmps(c,0,(int32_t)c->r[29],0); // 80141A34
  if (crb(c,2)) { goto L_80141A78; } // 80141A38
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 80141A3C
  goto L_80141A70; // 80141A40
L_80141A44:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80141A44
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80141A48
  c->r[4]=c->r[28]|c->r[28]; // 80141A4C
  c->r[5]=c->r[29]|c->r[29]; // 80141A50
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80141A54
  c->ctr=c->r[12]; // 80141A58
  if (true) { c->lr=0x80141A60u; dispatch(c,c->ctr); } // 80141A5C
  cmps(c,0,(int32_t)c->r[3],0); // 80141A60
  if (crb(c,2)) { goto L_80141A6C; } // 80141A64
  goto L_80141A7C; // 80141A68
L_80141A6C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 80141A6C
L_80141A70:;
  cmpu(c,0,c->r[31],c->r[30]); // 80141A70
  if (!crb(c,2)) { IRQCHK(c); goto L_80141A44; } // 80141A74
L_80141A78:;
  c->r[3]=0u+0x00000000u; // 80141A78
L_80141A7C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80141A7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80141A80
  c->r[30]=R32(c->r[1]+0x00000018u); // 80141A84
  c->r[29]=R32(c->r[1]+0x00000014u); // 80141A88
  c->r[28]=R32(c->r[1]+0x00000010u); // 80141A8C
  c->lr=c->r[0]; // 80141A90
  c->r[1]=c->r[1]+0x00000020u; // 80141A94
  return; // 80141A98
}

// FindMaterialByName__Q34nw4r3lyt4PaneFPCcb
void f_80141A9C(Ctx* __restrict c) {
  trace_call(0x80141A9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80141A9C
  c->r[0]=c->lr; // 80141AA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80141AA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80141AA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80141AAC
  c->r[30]=c->r[3]|c->r[3]; // 80141AB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80141AB4
  c->r[29]=c->r[5]|c->r[5]; // 80141AB8
  W32(c->r[1]+0x00000010u,c->r[28]); // 80141ABC
  c->r[28]=c->r[4]|c->r[4]; // 80141AC0
  c->r[6]=R32(c->r[3]+0x00000028u); // 80141AC4
  cmps(c,0,(int32_t)c->r[6],0); // 80141AC8
  if (crb(c,2)) { goto L_80141AE8; } // 80141ACC
  c->r[3]=c->r[6]+0x00000044u; // 80141AD0
  c->lr=0x80141AD8u; f_8014C720(c); // 80141AD4
  cmps(c,0,(int32_t)c->r[3],0); // 80141AD8
  if (crb(c,2)) { goto L_80141AE8; } // 80141ADC
  c->r[3]=R32(c->r[30]+0x00000028u); // 80141AE0
  goto L_80141B30; // 80141AE4
L_80141AE8:;
  cmps(c,0,(int32_t)c->r[29],0); // 80141AE8
  if (crb(c,2)) { goto L_80141B2C; } // 80141AEC
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 80141AF0
  goto L_80141B24; // 80141AF4
L_80141AF8:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80141AF8
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80141AFC
  c->r[4]=c->r[28]|c->r[28]; // 80141B00
  c->r[5]=c->r[29]|c->r[29]; // 80141B04
  c->r[12]=R32(c->r[12]+0x00000040u); // 80141B08
  c->ctr=c->r[12]; // 80141B0C
  if (true) { c->lr=0x80141B14u; dispatch(c,c->ctr); } // 80141B10
  cmps(c,0,(int32_t)c->r[3],0); // 80141B14
  if (crb(c,2)) { goto L_80141B20; } // 80141B18
  goto L_80141B30; // 80141B1C
L_80141B20:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 80141B20
L_80141B24:;
  cmpu(c,0,c->r[31],c->r[30]); // 80141B24
  if (!crb(c,2)) { IRQCHK(c); goto L_80141AF8; } // 80141B28
L_80141B2C:;
  c->r[3]=0u+0x00000000u; // 80141B2C
L_80141B30:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80141B30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80141B34
  c->r[30]=R32(c->r[1]+0x00000018u); // 80141B38
  c->r[29]=R32(c->r[1]+0x00000014u); // 80141B3C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80141B40
  c->lr=c->r[0]; // 80141B44
  c->r[1]=c->r[1]+0x00000020u; // 80141B48
  return; // 80141B4C
}

// CalculateMtx__Q34nw4r3lyt4PaneFRCQ34nw4r3lyt8DrawInfo
void f_80141B50(Ctx* __restrict c) {
  trace_call(0x80141B50u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80141B50
  c->r[0]=c->lr; // 80141B54
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80141B58
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 80141B5C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 80141B60
  c->r[11]=c->r[1]+0x000000D0u; // 80141B64
  c->lr=0x80141B6Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80141B68
  c->r[6]=R8(c->r[3]+0x000000BBu); // 80141B6C
  c->r[30]=c->r[3]|c->r[3]; // 80141B70
  c->r[31]=c->r[4]|c->r[4]; // 80141B74
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 80141B78
  if (!crb(c,2)) { goto L_80141B8C; } // 80141B7C
  c->r[0]=R8(c->r[4]+0x00000050u); // 80141B80
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 80141B84
  if (crb(c,2)) { goto L_80141E28; } // 80141B88
L_80141B8C:;
  c->r[0]=R8(c->r[4]+0x00000050u); // 80141B8C
  c->r[5]=R32(c->r[3]+0x00000044u); // 80141B90
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 80141B94
  c->r[0]=R32(c->r[3]+0x00000048u); // 80141B98
  W32(c->r[1]+0x00000008u,c->r[5]); // 80141B9C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80141BA0
  if (crb(c,2)) { goto L_80141BD0; } // 80141BA4
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 80141BA8
  if (crb(c,2)) { goto L_80141BD0; } // 80141BAC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80141BB0
  {uint32_t ea=c->r[4]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80141BB4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80141BB8
  {uint32_t ea=c->r[4]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80141BBC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80141BC0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80141BC4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80141BC8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80141BCC
L_80141BD0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80141BD0
  c->r[3]=c->r[1]+0x00000040u; // 80141BD4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80141BD8
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[3]=c->ps1[3]=RF32(ea);} // 80141BDC
  c->lr=0x80141BE4u; f_80163F1C(c); // 80141BE0
  {uint32_t ea=c->r[2]+0xFFFFA878u; c->f[1]=c->ps1[1]=RF32(ea);} // 80141BE4
  c->r[3]=c->r[1]+0x00000010u; // 80141BE8
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80141BEC
  c->r[4]=0u+0x00000078u; // 80141BF0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80141BF4
  c->lr=0x80141BFCu; f_80163C44(c); // 80141BF8
  c->r[3]=c->r[1]+0x00000010u; // 80141BFC
  c->r[4]=c->r[1]+0x00000040u; // 80141C00
  c->r[5]=c->r[1]+0x00000070u; // 80141C04
  c->lr=0x80141C0Cu; f_80163898(c); // 80141C08
  {uint32_t ea=c->r[2]+0xFFFFA878u; c->f[1]=c->ps1[1]=RF32(ea);} // 80141C0C
  c->r[3]=c->r[1]+0x00000010u; // 80141C10
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80141C14
  c->r[4]=0u+0x00000079u; // 80141C18
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80141C1C
  c->lr=0x80141C24u; f_80163C44(c); // 80141C20
  c->r[3]=c->r[1]+0x00000010u; // 80141C24
  c->r[4]=c->r[1]+0x00000070u; // 80141C28
  c->r[5]=c->r[1]+0x00000040u; // 80141C2C
  c->lr=0x80141C34u; f_80163898(c); // 80141C30
  {uint32_t ea=c->r[2]+0xFFFFA878u; c->f[1]=c->ps1[1]=RF32(ea);} // 80141C34
  c->r[3]=c->r[1]+0x00000010u; // 80141C38
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80141C3C
  c->r[4]=0u+0x0000007Au; // 80141C40
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80141C44
  c->lr=0x80141C4Cu; f_80163C44(c); // 80141C48
  c->r[3]=c->r[1]+0x00000010u; // 80141C4C
  c->r[4]=c->r[1]+0x00000040u; // 80141C50
  c->r[5]=c->r[1]+0x00000070u; // 80141C54
  c->lr=0x80141C5Cu; f_80163898(c); // 80141C58
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80141C5C
  c->r[3]=c->r[1]+0x00000070u; // 80141C60
  {uint32_t ea=c->r[30]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80141C64
  c->r[4]=c->r[30]+0x00000054u; // 80141C68
  {uint32_t ea=c->r[30]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 80141C6C
  c->lr=0x80141C74u; f_80163ED0(c); // 80141C70
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80141C74
  cmps(c,0,(int32_t)c->r[3],0); // 80141C78
  if (crb(c,2)) { goto L_80141C94; } // 80141C7C
  c->r[3]=c->r[3]+0x00000084u; // 80141C80
  c->r[4]=c->r[30]+0x00000054u; // 80141C84
  c->r[5]=c->r[30]+0x00000084u; // 80141C88
  c->lr=0x80141C90u; f_80163898(c); // 80141C8C
  goto L_80141D14; // 80141C90
L_80141C94:;
  c->r[0]=R8(c->r[31]+0x00000050u); // 80141C94
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80141C98
  if (crb(c,2)) { goto L_80141D04; } // 80141C9C
  c->r[27]=R32(c->r[30]+0x00000054u); // 80141CA0
  c->r[12]=R32(c->r[30]+0x00000058u); // 80141CA4
  c->r[11]=R32(c->r[30]+0x0000005Cu); // 80141CA8
  c->r[10]=R32(c->r[30]+0x00000060u); // 80141CAC
  c->r[9]=R32(c->r[30]+0x00000064u); // 80141CB0
  c->r[8]=R32(c->r[30]+0x00000068u); // 80141CB4
  c->r[7]=R32(c->r[30]+0x0000006Cu); // 80141CB8
  c->r[6]=R32(c->r[30]+0x00000070u); // 80141CBC
  c->r[5]=R32(c->r[30]+0x00000074u); // 80141CC0
  c->r[4]=R32(c->r[30]+0x00000078u); // 80141CC4
  c->r[3]=R32(c->r[30]+0x0000007Cu); // 80141CC8
  c->r[0]=R32(c->r[30]+0x00000080u); // 80141CCC
  W32(c->r[30]+0x00000084u,c->r[27]); // 80141CD0
  W32(c->r[30]+0x00000088u,c->r[12]); // 80141CD4
  W32(c->r[30]+0x0000008Cu,c->r[11]); // 80141CD8
  W32(c->r[30]+0x00000090u,c->r[10]); // 80141CDC
  W32(c->r[30]+0x00000094u,c->r[9]); // 80141CE0
  W32(c->r[30]+0x00000098u,c->r[8]); // 80141CE4
  W32(c->r[30]+0x0000009Cu,c->r[7]); // 80141CE8
  W32(c->r[30]+0x000000A0u,c->r[6]); // 80141CEC
  W32(c->r[30]+0x000000A4u,c->r[5]); // 80141CF0
  W32(c->r[30]+0x000000A8u,c->r[4]); // 80141CF4
  W32(c->r[30]+0x000000ACu,c->r[3]); // 80141CF8
  W32(c->r[30]+0x000000B0u,c->r[0]); // 80141CFC
  goto L_80141D14; // 80141D00
L_80141D04:;
  c->r[3]=c->r[31]+0x00000004u; // 80141D04
  c->r[4]=c->r[30]+0x00000054u; // 80141D08
  c->r[5]=c->r[30]+0x00000084u; // 80141D0C
  c->lr=0x80141D14u; f_80163898(c); // 80141D10
L_80141D14:;
  c->r[0]=R8(c->r[31]+0x00000050u); // 80141D14
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 80141D18
  if (crb(c,2)) { goto L_80141D64; } // 80141D1C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80141D20
  cmps(c,0,(int32_t)c->r[0],0); // 80141D24
  if (crb(c,2)) { goto L_80141D64; } // 80141D28
  c->r[3]=R8(c->r[30]+0x000000B8u); // 80141D2C
  c->r[0]=0u+0x43300000u; // 80141D30
  W32(c->r[1]+0x000000A0u,c->r[0]); // 80141D34
  {uint32_t ea=c->r[2]+0xFFFFA880u; c->f[1]=RF64(ea);} // 80141D38
  W32(c->r[1]+0x000000A4u,c->r[3]); // 80141D3C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80141D40
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 80141D44
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80141D48
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80141D4C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80141D50
  {uint32_t ea=c->r[1]+0x000000A8u; WF64(ea,c->f[0]);} // 80141D54
  c->r[0]=R32(c->r[1]+0x000000ACu); // 80141D58
  W8(c->r[30]+0x000000B9u,c->r[0]); // 80141D5C
  goto L_80141D6C; // 80141D60
L_80141D64:;
  c->r[0]=R8(c->r[30]+0x000000B8u); // 80141D64
  W8(c->r[30]+0x000000B9u,c->r[0]); // 80141D68
L_80141D6C:;
  c->r[0]=R8(c->r[30]+0x000000BBu); // 80141D6C
  c->r[28]=0u+0x00000000u; // 80141D70
  c->r[3]=R8(c->r[31]+0x00000050u); // 80141D74
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80141D78
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80141D7C
  c->r[3]=rotl(c->r[3],26)&0x00000001u; // 80141D80
  c->r[0]=0u-c->r[3]; // 80141D84
  c->r[0]=c->r[0]|c->r[3]; // 80141D88
  c->r[27]=rotl(c->r[0],1)&0x00000001u; // 80141D8C
  if (crb(c,2)) { goto L_80141DA4; } // 80141D90
  c->r[0]=R8(c->r[30]+0x000000B8u); // 80141D94
  cmpu(c,0,c->r[0],0x000000FFu); // 80141D98
  if (crb(c,2)) { goto L_80141DA4; } // 80141D9C
  c->r[28]=0u+0x00000001u; // 80141DA0
L_80141DA4:;
  cmps(c,0,(int32_t)c->r[28],0); // 80141DA4
  if (crb(c,2)) { goto L_80141DE4; } // 80141DA8
  c->r[4]=R8(c->r[30]+0x000000B8u); // 80141DAC
  c->r[3]=0u+0x43300000u; // 80141DB0
  c->r[0]=R8(c->r[31]+0x00000050u); // 80141DB4
  W32(c->r[1]+0x000000ACu,c->r[4]); // 80141DB8
  c->r[0]=c->r[0]|0x00000040u; // 80141DBC
  {uint32_t ea=c->r[2]+0xFFFFA880u; c->f[2]=RF64(ea);} // 80141DC0
  W32(c->r[1]+0x000000A8u,c->r[3]); // 80141DC4
  {uint32_t ea=c->r[2]+0xFFFFA87Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80141DC8
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=RF64(ea);} // 80141DCC
  W8(c->r[31]+0x00000050u,c->r[0]); // 80141DD0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80141DD4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80141DD8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80141DDC
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 80141DE0
L_80141DE4:;
  {uint32_t ea=c->r[30]+0x00000014u; c->r[29]=R32(ea); c->r[30]=ea;} // 80141DE4
  goto L_80141E08; // 80141DE8
L_80141DEC:;
  c->r[12]=R32(c->r[29]+0xFFFFFFFCu); // 80141DEC
  c->r[3]=c->r[29]+0xFFFFFFFCu; // 80141DF0
  c->r[4]=c->r[31]|c->r[31]; // 80141DF4
  c->r[12]=R32(c->r[12]+0x00000010u); // 80141DF8
  c->ctr=c->r[12]; // 80141DFC
  if (true) { c->lr=0x80141E04u; dispatch(c,c->ctr); } // 80141E00
  c->r[29]=R32(c->r[29]+0x00000000u); // 80141E04
L_80141E08:;
  cmpu(c,0,c->r[29],c->r[30]); // 80141E08
  if (!crb(c,2)) { IRQCHK(c); goto L_80141DEC; } // 80141E0C
  cmps(c,0,(int32_t)c->r[28],0); // 80141E10
  if (crb(c,2)) { goto L_80141E28; } // 80141E14
  c->r[0]=R8(c->r[31]+0x00000050u); // 80141E18
  c->r[0]=(rotl(c->r[27],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 80141E1C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[31]);} // 80141E20
  W8(c->r[31]+0x00000050u,c->r[0]); // 80141E24
L_80141E28:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 80141E28
  c->r[11]=c->r[1]+0x000000D0u; // 80141E2C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 80141E30
  c->lr=0x80141E38u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80141E34
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80141E38
  c->lr=c->r[0]; // 80141E3C
  c->r[1]=c->r[1]+0x000000E0u; // 80141E40
  return; // 80141E44
}

// Draw__Q34nw4r3lyt4PaneFRCQ34nw4r3lyt8DrawInfo
void f_80141E48(Ctx* __restrict c) {
  trace_call(0x80141E48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80141E48
  c->r[0]=c->lr; // 80141E4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80141E50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80141E54
  W32(c->r[1]+0x00000018u,c->r[30]); // 80141E58
  c->r[30]=c->r[3]|c->r[3]; // 80141E5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80141E60
  c->r[29]=c->r[4]|c->r[4]; // 80141E64
  c->r[0]=R8(c->r[3]+0x000000BBu); // 80141E68
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80141E6C
  if (crb(c,2)) { goto L_80141EB0; } // 80141E70
  c->r[12]=R32(c->r[3]+0x00000000u); // 80141E74
  c->r[12]=R32(c->r[12]+0x00000018u); // 80141E78
  c->ctr=c->r[12]; // 80141E7C
  if (true) { c->lr=0x80141E84u; dispatch(c,c->ctr); } // 80141E80
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 80141E84
  goto L_80141EA8; // 80141E88
L_80141E8C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80141E8C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80141E90
  c->r[4]=c->r[29]|c->r[29]; // 80141E94
  c->r[12]=R32(c->r[12]+0x00000014u); // 80141E98
  c->ctr=c->r[12]; // 80141E9C
  if (true) { c->lr=0x80141EA4u; dispatch(c,c->ctr); } // 80141EA0
  c->r[31]=R32(c->r[31]+0x00000000u); // 80141EA4
L_80141EA8:;
  cmpu(c,0,c->r[31],c->r[30]); // 80141EA8
  if (!crb(c,2)) { IRQCHK(c); goto L_80141E8C; } // 80141EAC
L_80141EB0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80141EB0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80141EB4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80141EB8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80141EBC
  c->lr=c->r[0]; // 80141EC0
  c->r[1]=c->r[1]+0x00000020u; // 80141EC4
  return; // 80141EC8
}

// DrawSelf__Q34nw4r3lyt4PaneFRCQ34nw4r3lyt8DrawInfo
void f_80141ECC(Ctx* __restrict c) {
  trace_call(0x80141ECCu);
  return; // 80141ECC
}

// Animate__Q34nw4r3lyt4PaneFUl
void f_80141ED0(Ctx* __restrict c) {
  trace_call(0x80141ED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80141ED0
  c->r[0]=c->lr; // 80141ED4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80141ED8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80141EDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80141EE0
  c->r[30]=c->r[3]|c->r[3]; // 80141EE4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80141EE8
  c->r[29]=c->r[4]|c->r[4]; // 80141EEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80141EF0
  c->r[12]=R32(c->r[12]+0x00000020u); // 80141EF4
  c->ctr=c->r[12]; // 80141EF8
  if (true) { c->lr=0x80141F00u; dispatch(c,c->ctr); } // 80141EFC
  c->r[0]=R8(c->r[30]+0x000000BBu); // 80141F00
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80141F04
  if (!crb(c,2)) { goto L_80141F14; } // 80141F08
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 80141F0C
  if (!crb(c,2)) { goto L_80141F40; } // 80141F10
L_80141F14:;
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 80141F14
  goto L_80141F38; // 80141F18
L_80141F1C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80141F1C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80141F20
  c->r[4]=c->r[29]|c->r[29]; // 80141F24
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80141F28
  c->ctr=c->r[12]; // 80141F2C
  if (true) { c->lr=0x80141F34u; dispatch(c,c->ctr); } // 80141F30
  c->r[31]=R32(c->r[31]+0x00000000u); // 80141F34
L_80141F38:;
  cmpu(c,0,c->r[31],c->r[30]); // 80141F38
  if (!crb(c,2)) { IRQCHK(c); goto L_80141F1C; } // 80141F3C
L_80141F40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80141F40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80141F44
  c->r[30]=R32(c->r[1]+0x00000018u); // 80141F48
  c->r[29]=R32(c->r[1]+0x00000014u); // 80141F4C
  c->lr=c->r[0]; // 80141F50
  c->r[1]=c->r[1]+0x00000020u; // 80141F54
  return; // 80141F58
}

// AnimateSelf__Q34nw4r3lyt4PaneFUl
void f_80141F5C(Ctx* __restrict c) {
  trace_call(0x80141F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80141F5C
  c->r[0]=c->lr; // 80141F60
  W32(c->r[1]+0x00000024u,c->r[0]); // 80141F64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80141F68
  W32(c->r[1]+0x00000018u,c->r[30]); // 80141F6C
  c->r[30]=c->r[3]+0x00000020u; // 80141F70
  W32(c->r[1]+0x00000014u,c->r[29]); // 80141F74
  c->r[29]=c->r[4]|c->r[4]; // 80141F78
  W32(c->r[1]+0x00000010u,c->r[28]); // 80141F7C
  c->r[28]=c->r[3]|c->r[3]; // 80141F80
  c->r[31]=R32(c->r[3]+0x00000020u); // 80141F84
  goto L_80141FB8; // 80141F88
L_80141F8C:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 80141F8C
  cmps(c,0,(int32_t)c->r[0],0); // 80141F90
  if (!crb(c,2)) { goto L_80141FB4; } // 80141F94
  c->r[3]=R32(c->r[31]+0x00000008u); // 80141F98
  c->r[5]=c->r[28]|c->r[28]; // 80141F9C
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 80141FA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80141FA4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80141FA8
  c->ctr=c->r[12]; // 80141FAC
  if (true) { c->lr=0x80141FB4u; dispatch(c,c->ctr); } // 80141FB0
L_80141FB4:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 80141FB4
L_80141FB8:;
  cmpu(c,0,c->r[31],c->r[30]); // 80141FB8
  if (!crb(c,2)) { IRQCHK(c); goto L_80141F8C; } // 80141FBC
  c->r[0]=R8(c->r[28]+0x000000BBu); // 80141FC0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80141FC4
  if (!crb(c,2)) { goto L_80141FD4; } // 80141FC8
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 80141FCC
  if (!crb(c,2)) { goto L_80141FF0; } // 80141FD0
L_80141FD4:;
  c->r[3]=R32(c->r[28]+0x00000028u); // 80141FD4
  cmps(c,0,(int32_t)c->r[3],0); // 80141FD8
  if (crb(c,2)) { goto L_80141FF0; } // 80141FDC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80141FE0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80141FE4
  c->ctr=c->r[12]; // 80141FE8
  if (true) { c->lr=0x80141FF0u; dispatch(c,c->ctr); } // 80141FEC
L_80141FF0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80141FF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80141FF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80141FF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80141FFC
  c->r[28]=R32(c->r[1]+0x00000010u); // 80142000
  c->lr=c->r[0]; // 80142004
  c->r[1]=c->r[1]+0x00000020u; // 80142008
  return; // 8014200C
}

// BindAnimation__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimTransformbb
void f_80142010(Ctx* __restrict c) {
  trace_call(0x80142010u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 80142010
  c->r[0]=c->r[3]|c->r[3]; // 80142014
  c->r[3]=c->r[4]|c->r[4]; // 80142018
  c->r[12]=R32(c->r[12]+0x00000014u); // 8014201C
  c->r[4]=c->r[0]|c->r[0]; // 80142020
  c->ctr=c->r[12]; // 80142024
  if (true) { dispatch(c,c->ctr); return; } // 80142028
}

// UnbindAnimation__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimTransformb
void f_8014202C(Ctx* __restrict c) {
  trace_call(0x8014202Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014202C
  c->r[0]=c->lr; // 80142030
  W32(c->r[1]+0x00000024u,c->r[0]); // 80142034
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80142038
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014203C
  c->r[30]=c->r[3]|c->r[3]; // 80142040
  W32(c->r[1]+0x00000014u,c->r[29]); // 80142044
  c->r[29]=c->r[5]|c->r[5]; // 80142048
  W32(c->r[1]+0x00000010u,c->r[28]); // 8014204C
  c->r[28]=c->r[4]|c->r[4]; // 80142050
  c->r[12]=R32(c->r[3]+0x00000000u); // 80142054
  c->r[12]=R32(c->r[12]+0x00000050u); // 80142058
  c->ctr=c->r[12]; // 8014205C
  if (true) { c->lr=0x80142064u; dispatch(c,c->ctr); } // 80142060
  cmps(c,0,(int32_t)c->r[29],0); // 80142064
  if (crb(c,2)) { goto L_8014209C; } // 80142068
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 8014206C
  goto L_80142094; // 80142070
L_80142074:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80142074
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80142078
  c->r[4]=c->r[28]|c->r[28]; // 8014207C
  c->r[5]=c->r[29]|c->r[29]; // 80142080
  c->r[12]=R32(c->r[12]+0x00000048u); // 80142084
  c->ctr=c->r[12]; // 80142088
  if (true) { c->lr=0x80142090u; dispatch(c,c->ctr); } // 8014208C
  c->r[31]=R32(c->r[31]+0x00000000u); // 80142090
L_80142094:;
  cmpu(c,0,c->r[31],c->r[30]); // 80142094
  if (!crb(c,2)) { IRQCHK(c); goto L_80142074; } // 80142098
L_8014209C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014209C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801420A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801420A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801420A8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801420AC
  c->lr=c->r[0]; // 801420B0
  c->r[1]=c->r[1]+0x00000020u; // 801420B4
  return; // 801420B8
}

// UnbindAllAnimation__Q34nw4r3lyt4PaneFb
void f_801420BC(Ctx* __restrict c) {
  trace_call(0x801420BCu);
  c->r[12]=R32(c->r[3]+0x00000000u); // 801420BC
  c->r[5]=c->r[4]|c->r[4]; // 801420C0
  c->r[4]=0u+0x00000000u; // 801420C4
  c->r[12]=R32(c->r[12]+0x00000048u); // 801420C8
  c->ctr=c->r[12]; // 801420CC
  if (true) { dispatch(c,c->ctr); return; } // 801420D0
}

// UnbindAnimationSelf__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimTransform
void f_801420D4(Ctx* __restrict c) {
  trace_call(0x801420D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801420D4
  c->r[0]=c->lr; // 801420D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801420DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801420E0
  c->r[31]=c->r[4]|c->r[4]; // 801420E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801420E8
  c->r[30]=c->r[3]|c->r[3]; // 801420EC
  c->r[0]=R32(c->r[3]+0x00000028u); // 801420F0
  cmps(c,0,(int32_t)c->r[0],0); // 801420F4
  if (crb(c,2)) { goto L_80142110; } // 801420F8
  c->r[3]=c->r[0]|c->r[0]; // 801420FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80142100
  c->r[12]=R32(c->r[12]+0x00000014u); // 80142104
  c->ctr=c->r[12]; // 80142108
  if (true) { c->lr=0x80142110u; dispatch(c,c->ctr); } // 8014210C
L_80142110:;
  c->r[4]=c->r[31]|c->r[31]; // 80142110
  c->r[3]=c->r[30]+0x0000001Cu; // 80142114
  c->lr=0x8014211Cu; f_8014C0EC(c); // 80142118
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014211C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80142120
  c->r[30]=R32(c->r[1]+0x00000008u); // 80142124
  c->lr=c->r[0]; // 80142128
  c->r[1]=c->r[1]+0x00000010u; // 8014212C
  return; // 80142130
}

// AddAnimationLink__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimationLink
void f_80142134(Ctx* __restrict c) {
  trace_call(0x80142134u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80142134
  c->r[0]=c->lr; // 80142138
  c->r[5]=c->r[4]|c->r[4]; // 8014213C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80142140
  c->r[0]=c->r[3]+0x00000020u; // 80142144
  c->r[3]=c->r[3]+0x0000001Cu; // 80142148
  c->r[4]=c->r[1]+0x00000008u; // 8014214C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80142150
  c->lr=0x80142158u; f_800F6430(c); // 80142154
  c->r[0]=R32(c->r[1]+0x00000014u); // 80142158
  c->lr=c->r[0]; // 8014215C
  c->r[1]=c->r[1]+0x00000010u; // 80142160
  return; // 80142164
}

// FindAnimationLinkSelf__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimTransform
void f_80142168(Ctx* __restrict c) {
  trace_call(0x80142168u);
  c->r[3]=c->r[3]+0x0000001Cu; // 80142168
  f_8014C07C(c); return; // 8014216C
}

// FindAnimationLinkSelf__Q34nw4r3lyt4PaneFRCQ34nw4r3lyt12AnimResource
void f_80142170(Ctx* __restrict c) {
  trace_call(0x80142170u);
  c->r[3]=c->r[3]+0x0000001Cu; // 80142170
  f_8014C0B0(c); return; // 80142174
}

// SetAnimationEnable__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimTransformbb
void f_80142178(Ctx* __restrict c) {
  trace_call(0x80142178u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80142178
  c->r[0]=c->lr; // 8014217C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80142180
  c->r[11]=c->r[1]+0x00000020u; // 80142184
  c->lr=0x8014218Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80142188
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014218C
  c->r[26]=c->r[3]|c->r[3]; // 80142190
  c->r[27]=c->r[4]|c->r[4]; // 80142194
  c->r[28]=c->r[5]|c->r[5]; // 80142198
  c->r[12]=R32(c->r[12]+0x00000054u); // 8014219C
  c->r[29]=c->r[6]|c->r[6]; // 801421A0
  c->ctr=c->r[12]; // 801421A4
  if (true) { c->lr=0x801421ACu; dispatch(c,c->ctr); } // 801421A8
  cmps(c,0,(int32_t)c->r[3],0); // 801421AC
  if (crb(c,2)) { goto L_801421C0; } // 801421B0
  c->r[0]=cntlz(c->r[28]); // 801421B4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801421B8
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801421BC
L_801421C0:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801421C0
  c->r[3]=c->r[26]|c->r[26]; // 801421C4
  c->r[12]=R32(c->r[12]+0x00000064u); // 801421C8
  c->ctr=c->r[12]; // 801421CC
  if (true) { c->lr=0x801421D4u; dispatch(c,c->ctr); } // 801421D0
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 801421D4
  c->r[31]=0u+0x00000000u; // 801421D8
  goto L_80142214; // 801421DC
L_801421E0:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801421E0
  c->r[3]=c->r[26]|c->r[26]; // 801421E4
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 801421E8
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 801421EC
  c->ctr=c->r[12]; // 801421F0
  if (true) { c->lr=0x801421F8u; dispatch(c,c->ctr); } // 801421F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801421F8
  c->r[4]=c->r[27]|c->r[27]; // 801421FC
  c->r[5]=c->r[28]|c->r[28]; // 80142200
  c->r[12]=R32(c->r[12]+0x00000028u); // 80142204
  c->ctr=c->r[12]; // 80142208
  if (true) { c->lr=0x80142210u; dispatch(c,c->ctr); } // 8014220C
  c->r[31]=c->r[31]+0x00000001u; // 80142210
L_80142214:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80142214
  cmpu(c,0,c->r[0],c->r[30]); // 80142218
  if (crb(c,0)) { IRQCHK(c); goto L_801421E0; } // 8014221C
  cmps(c,0,(int32_t)c->r[29],0); // 80142220
  if (crb(c,2)) { goto L_80142260; } // 80142224
  c->r[31]=R32(c->r[26]+0x00000014u); // 80142228
  c->r[30]=c->r[26]+0x00000014u; // 8014222C
  goto L_80142258; // 80142230
L_80142234:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80142234
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80142238
  c->r[4]=c->r[27]|c->r[27]; // 8014223C
  c->r[5]=c->r[28]|c->r[28]; // 80142240
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80142244
  c->r[6]=c->r[29]|c->r[29]; // 80142248
  c->ctr=c->r[12]; // 8014224C
  if (true) { c->lr=0x80142254u; dispatch(c,c->ctr); } // 80142250
  c->r[31]=R32(c->r[31]+0x00000000u); // 80142254
L_80142258:;
  cmpu(c,0,c->r[31],c->r[30]); // 80142258
  if (!crb(c,2)) { IRQCHK(c); goto L_80142234; } // 8014225C
L_80142260:;
  c->r[11]=c->r[1]+0x00000020u; // 80142260
  c->lr=0x80142268u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80142264
  c->r[0]=R32(c->r[1]+0x00000024u); // 80142268
  c->lr=c->r[0]; // 8014226C
  c->r[1]=c->r[1]+0x00000020u; // 80142270
  return; // 80142274
}

// SetAnimationEnable__Q34nw4r3lyt4PaneFRCQ34nw4r3lyt12AnimResourcebb
void f_80142278(Ctx* __restrict c) {
  trace_call(0x80142278u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80142278
  c->r[0]=c->lr; // 8014227C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80142280
  c->r[11]=c->r[1]+0x00000020u; // 80142284
  c->lr=0x8014228Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80142288
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014228C
  c->r[26]=c->r[3]|c->r[3]; // 80142290
  c->r[27]=c->r[4]|c->r[4]; // 80142294
  c->r[28]=c->r[5]|c->r[5]; // 80142298
  c->r[12]=R32(c->r[12]+0x00000058u); // 8014229C
  c->r[29]=c->r[6]|c->r[6]; // 801422A0
  c->ctr=c->r[12]; // 801422A4
  if (true) { c->lr=0x801422ACu; dispatch(c,c->ctr); } // 801422A8
  cmps(c,0,(int32_t)c->r[3],0); // 801422AC
  if (crb(c,2)) { goto L_801422C0; } // 801422B0
  c->r[0]=cntlz(c->r[28]); // 801422B4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801422B8
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801422BC
L_801422C0:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801422C0
  c->r[3]=c->r[26]|c->r[26]; // 801422C4
  c->r[12]=R32(c->r[12]+0x00000064u); // 801422C8
  c->ctr=c->r[12]; // 801422CC
  if (true) { c->lr=0x801422D4u; dispatch(c,c->ctr); } // 801422D0
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 801422D4
  c->r[31]=0u+0x00000000u; // 801422D8
  goto L_80142314; // 801422DC
L_801422E0:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801422E0
  c->r[3]=c->r[26]|c->r[26]; // 801422E4
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 801422E8
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 801422EC
  c->ctr=c->r[12]; // 801422F0
  if (true) { c->lr=0x801422F8u; dispatch(c,c->ctr); } // 801422F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801422F8
  c->r[4]=c->r[27]|c->r[27]; // 801422FC
  c->r[5]=c->r[28]|c->r[28]; // 80142300
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80142304
  c->ctr=c->r[12]; // 80142308
  if (true) { c->lr=0x80142310u; dispatch(c,c->ctr); } // 8014230C
  c->r[31]=c->r[31]+0x00000001u; // 80142310
L_80142314:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80142314
  cmpu(c,0,c->r[0],c->r[30]); // 80142318
  if (crb(c,0)) { IRQCHK(c); goto L_801422E0; } // 8014231C
  cmps(c,0,(int32_t)c->r[29],0); // 80142320
  if (crb(c,2)) { goto L_80142360; } // 80142324
  c->r[31]=R32(c->r[26]+0x00000014u); // 80142328
  c->r[30]=c->r[26]+0x00000014u; // 8014232C
  goto L_80142358; // 80142330
L_80142334:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80142334
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80142338
  c->r[4]=c->r[27]|c->r[27]; // 8014233C
  c->r[5]=c->r[28]|c->r[28]; // 80142340
  c->r[12]=R32(c->r[12]+0x00000060u); // 80142344
  c->r[6]=c->r[29]|c->r[29]; // 80142348
  c->ctr=c->r[12]; // 8014234C
  if (true) { c->lr=0x80142354u; dispatch(c,c->ctr); } // 80142350
  c->r[31]=R32(c->r[31]+0x00000000u); // 80142354
L_80142358:;
  cmpu(c,0,c->r[31],c->r[30]); // 80142358
  if (!crb(c,2)) { IRQCHK(c); goto L_80142334; } // 8014235C
L_80142360:;
  c->r[11]=c->r[1]+0x00000020u; // 80142360
  c->lr=0x80142368u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80142364
  c->r[0]=R32(c->r[1]+0x00000024u); // 80142368
  c->lr=c->r[0]; // 8014236C
  c->r[1]=c->r[1]+0x00000020u; // 80142370
  return; // 80142374
}

// LoadMtx__Q34nw4r3lyt4PaneFRCQ34nw4r3lyt8DrawInfo
void f_80142378(Ctx* __restrict c) {
  trace_call(0x80142378u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80142378
  c->r[0]=c->lr; // 8014237C
  c->r[5]=c->r[3]|c->r[3]; // 80142380
  W32(c->r[1]+0x00000044u,c->r[0]); // 80142384
  c->r[0]=R8(c->r[4]+0x00000050u); // 80142388
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 8014238C
  if (crb(c,2)) { goto L_801423AC; } // 80142390
  c->r[3]=c->r[4]+0x00000004u; // 80142394
  c->r[4]=c->r[5]+0x00000084u; // 80142398
  c->r[5]=c->r[1]+0x00000008u; // 8014239C
  c->lr=0x801423A4u; f_80163898(c); // 801423A0
  c->r[3]=c->r[1]+0x00000008u; // 801423A4
  goto L_801423B0; // 801423A8
L_801423AC:;
  c->r[3]=c->r[3]+0x00000084u; // 801423AC
L_801423B0:;
  c->r[4]=0u+0x00000000u; // 801423B0
  c->lr=0x801423B8u; f_8016B714(c); // 801423B4
  c->r[3]=0u+0x00000000u; // 801423B8
  c->lr=0x801423C0u; f_8016B81C(c); // 801423BC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801423C0
  c->lr=c->r[0]; // 801423C4
  c->r[1]=c->r[1]+0x00000040u; // 801423C8
  return; // 801423CC
}

// GetVtxPos__Q34nw4r3lyt4PaneCFv
void f_801423D0(Ctx* __restrict c) {
  trace_call(0x801423D0u);
  c->r[4]=0u+0x55550000u; // 801423D0
  c->r[5]=R8(c->r[3]+0x000000BAu); // 801423D4
  c->r[0]=c->r[4]+0x00005556u; // 801423D8
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801423DC
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 801423E0
  {uint32_t ea=c->r[2]+0xFFFFA870u; c->f[0]=c->ps1[0]=RF32(ea);} // 801423E4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801423E8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801423EC
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 801423F0
  c->r[0]=c->r[4]+c->r[0]; // 801423F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801423F8
  c->r[0]=c->r[5]-c->r[0]; // 801423FC
  cmps(c,0,(int32_t)c->r[0],1); // 80142400
  if (crb(c,2)) { goto L_80142428; } // 80142404
  if (!crb(c,0)) { goto L_80142410; } // 80142408
  goto L_8014241C; // 8014240C
L_80142410:;
  cmps(c,0,(int32_t)c->r[0],3); // 80142410
  if (!crb(c,0)) { goto L_8014241C; } // 80142414
  goto L_80142440; // 80142418
L_8014241C:;
  {uint32_t ea=c->r[2]+0xFFFFA870u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014241C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80142420
  goto L_8014244C; // 80142424
L_80142428:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80142428
  {uint32_t ea=c->r[2]+0xFFFFA888u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014242C
  c->f[1]=-c->f[1]; // 80142430
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80142434
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80142438
  goto L_8014244C; // 8014243C
L_80142440:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80142440
  c->f[0]=-c->f[0]; // 80142444
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80142448
L_8014244C:;
  c->r[4]=0u+0x55550000u; // 8014244C
  c->r[0]=c->r[4]+0x00005556u; // 80142450
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 80142454
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 80142458
  c->r[0]=c->r[4]+c->r[0]; // 8014245C
  cmps(c,0,(int32_t)c->r[0],1); // 80142460
  if (crb(c,2)) { goto L_80142488; } // 80142464
  if (!crb(c,0)) { goto L_80142470; } // 80142468
  goto L_8014247C; // 8014246C
L_80142470:;
  cmps(c,0,(int32_t)c->r[0],3); // 80142470
  if (!crb(c,0)) { goto L_8014247C; } // 80142474
  goto L_8014249C; // 80142478
L_8014247C:;
  {uint32_t ea=c->r[2]+0xFFFFA870u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014247C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80142480
  goto L_801424A4; // 80142484
L_80142488:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80142488
  {uint32_t ea=c->r[2]+0xFFFFA888u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014248C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80142490
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80142494
  goto L_801424A4; // 80142498
L_8014249C:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014249C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801424A0
L_801424A4:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801424A4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801424A8
  c->r[1]=c->r[1]+0x00000010u; // 801424AC
  return; // 801424B0
}

// GetMaterialNum__Q34nw4r3lyt4PaneCFv
void f_801424B4(Ctx* __restrict c) {
  trace_call(0x801424B4u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 801424B4
  c->r[0]=0u-c->r[3]; // 801424B8
  c->r[0]=c->r[0]|c->r[3]; // 801424BC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801424C0
  return; // 801424C4
}

// GetMaterial__Q34nw4r3lyt4PaneCFv
void f_801424C8(Ctx* __restrict c) {
  trace_call(0x801424C8u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 801424C8
  return; // 801424CC
}

// GetMaterial__Q34nw4r3lyt4PaneCFUl
void f_801424D0(Ctx* __restrict c) {
  trace_call(0x801424D0u);
  cmps(c,0,(int32_t)c->r[4],0); // 801424D0
  if (!crb(c,2)) { goto L_801424E8; } // 801424D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801424D8
  c->r[12]=R32(c->r[12]+0x00000068u); // 801424DC
  c->ctr=c->r[12]; // 801424E0
  if (true) { dispatch(c,c->ctr); return; } // 801424E4
L_801424E8:;
  c->r[3]=0u+0x00000000u; // 801424E8
  return; // 801424EC
}

// fn_801424F0
void f_801424F0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801424F0
  W32(c->r[13]+0xFFFFA958u,c->r[0]); // 801424F4
  return; // 801424F8
}

// __ct__Q34nw4r3lyt5GroupFPCQ44nw4r3lyt3res5GroupPQ34nw4r3lyt4Pane
void f_801424FC(Ctx* __restrict c) {
  trace_call(0x801424FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801424FC
  c->r[0]=c->lr; // 80142500
  W32(c->r[1]+0x00000034u,c->r[0]); // 80142504
  c->r[11]=c->r[1]+0x00000030u; // 80142508
  c->lr=0x80142510u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014250C
  c->r[30]=0u+0x00000000u; // 80142510
  c->r[6]=0u+0x802C0000u; // 80142514
  W32(c->r[3]+0x00000010u,c->r[30]); // 80142518
  c->r[7]=c->r[3]+0x00000010u; // 8014251C
  c->r[6]=c->r[6]+0x000064B0u; // 80142520
  c->r[25]=c->r[4]|c->r[4]; // 80142524
  W32(c->r[3]+0x00000014u,c->r[30]); // 80142528
  c->r[26]=c->r[5]|c->r[5]; // 8014252C
  c->r[24]=c->r[3]|c->r[3]; // 80142530
  c->r[5]=0u+0x00000010u; // 80142534
  W32(c->r[3]+0x00000000u,c->r[6]); // 80142538
  c->r[4]=c->r[4]+0x00000008u; // 8014253C
  W32(c->r[3]+0x00000004u,c->r[30]); // 80142540
  W32(c->r[3]+0x00000008u,c->r[30]); // 80142544
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 80142548
  W32(c->r[3]+0x00000010u,c->r[7]); // 8014254C
  W32(c->r[3]+0x00000014u,c->r[7]); // 80142550
  W8(c->r[3]+0x00000029u,c->r[30]); // 80142554
  c->r[3]=c->r[3]+0x00000018u; // 80142558
  c->lr=0x80142560u; f_8025C504(c); // 8014255C
  W8(c->r[24]+0x00000028u,c->r[30]); // 80142560
  c->r[28]=c->r[25]+0x0000001Cu; // 80142564
  c->r[27]=0u+0x00000000u; // 80142568
  c->r[29]=0u+0x00000000u; // 8014256C
  goto L_801425F0; // 80142570
L_80142574:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 80142574
  c->r[3]=c->r[26]|c->r[26]; // 80142578
  c->r[4]=c->r[28]+c->r[29]; // 8014257C
  c->r[5]=0u+0x00000001u; // 80142580
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80142584
  c->ctr=c->r[12]; // 80142588
  if (true) { c->lr=0x80142590u; dispatch(c,c->ctr); } // 8014258C
  cmps(c,0,(int32_t)c->r[3],0); // 80142590
  c->r[31]=c->r[3]|c->r[3]; // 80142594
  if (crb(c,2)) { goto L_801425E8; } // 80142598
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 8014259C
  c->r[4]=0u+0x0000000Cu; // 801425A0
  c->lr=0x801425A8u; f_8017C1A4(c); // 801425A4
  cmps(c,0,(int32_t)c->r[3],0); // 801425A8
  if (crb(c,2)) { goto L_801425C4; } // 801425AC
  c->r[5]=c->r[3]|c->r[3]; // 801425B0
  if (crb(c,2)) { goto L_801425C8; } // 801425B4
  W32(c->r[3]+0x00000000u,c->r[30]); // 801425B8
  W32(c->r[3]+0x00000004u,c->r[30]); // 801425BC
  goto L_801425C8; // 801425C0
L_801425C4:;
  c->r[5]=0u+0x00000000u; // 801425C4
L_801425C8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801425C8
  if (crb(c,2)) { goto L_801425E8; } // 801425CC
  W32(c->r[5]+0x00000008u,c->r[31]); // 801425D0
  c->r[0]=c->r[24]+0x00000010u; // 801425D4
  c->r[3]=c->r[24]+0x0000000Cu; // 801425D8
  c->r[4]=c->r[1]+0x00000008u; // 801425DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801425E0
  c->lr=0x801425E8u; f_800F6430(c); // 801425E4
L_801425E8:;
  c->r[29]=c->r[29]+0x00000010u; // 801425E8
  c->r[27]=c->r[27]+0x00000001u; // 801425EC
L_801425F0:;
  c->r[0]=R16(c->r[25]+0x00000018u); // 801425F0
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801425F4
  if (crb(c,0)) { IRQCHK(c); goto L_80142574; } // 801425F8
  c->r[11]=c->r[1]+0x00000030u; // 801425FC
  c->r[3]=c->r[24]|c->r[24]; // 80142600
  c->lr=0x80142608u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80142604
  c->r[0]=R32(c->r[1]+0x00000034u); // 80142608
  c->lr=c->r[0]; // 8014260C
  c->r[1]=c->r[1]+0x00000030u; // 80142610
  return; // 80142614
}

// __dt__Q34nw4r3lyt5GroupFv
void f_80142618(Ctx* __restrict c) {
  trace_call(0x80142618u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80142618
  c->r[0]=c->lr; // 8014261C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80142620
  c->r[11]=c->r[1]+0x00000030u; // 80142624
  c->lr=0x8014262Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80142628
  cmps(c,0,(int32_t)c->r[3],0); // 8014262C
  c->r[27]=c->r[3]|c->r[3]; // 80142630
  c->r[28]=c->r[4]|c->r[4]; // 80142634
  if (crb(c,2)) { goto L_801426A8; } // 80142638
  c->r[4]=0u+0x802C0000u; // 8014263C
  c->r[31]=R32(c->r[3]+0x00000010u); // 80142640
  c->r[4]=c->r[4]+0x000064B0u; // 80142644
  c->r[30]=c->r[3]+0x00000010u; // 80142648
  W32(c->r[3]+0x00000000u,c->r[4]); // 8014264C
  goto L_80142680; // 80142650
L_80142654:;
  c->r[29]=c->r[31]|c->r[31]; // 80142654
  c->r[31]=R32(c->r[31]+0x00000000u); // 80142658
  c->r[3]=c->r[27]+0x0000000Cu; // 8014265C
  c->r[4]=c->r[1]+0x00000008u; // 80142660
  W32(c->r[1]+0x00000008u,c->r[29]); // 80142664
  c->lr=0x8014266Cu; f_800F63A4(c); // 80142668
  cmps(c,0,(int32_t)c->r[29],0); // 8014266C
  if (crb(c,2)) { goto L_80142680; } // 80142670
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80142674
  c->r[4]=c->r[29]|c->r[29]; // 80142678
  c->lr=0x80142680u; f_8017C1B4(c); // 8014267C
L_80142680:;
  cmpu(c,0,c->r[31],c->r[30]); // 80142680
  if (!crb(c,2)) { IRQCHK(c); goto L_80142654; } // 80142684
  c->r[3]=addc(c,c->r[27],0x0000000Cu,0); cr0(c,c->r[3]); // 80142688
  if (crb(c,2)) { goto L_80142698; } // 8014268C
  c->r[4]=0u+0x00000000u; // 80142690
  c->lr=0x80142698u; f_800F6320(c); // 80142694
L_80142698:;
  cmps(c,0,(int32_t)c->r[28],0); // 80142698
  if (!crb(c,1)) { goto L_801426A8; } // 8014269C
  c->r[3]=c->r[27]|c->r[27]; // 801426A0
  c->lr=0x801426A8u; f_802525B0(c); // 801426A4
L_801426A8:;
  c->r[11]=c->r[1]+0x00000030u; // 801426A8
  c->r[3]=c->r[27]|c->r[27]; // 801426AC
  c->lr=0x801426B4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801426B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801426B4
  c->lr=c->r[0]; // 801426B8
  c->r[1]=c->r[1]+0x00000030u; // 801426BC
  return; // 801426C0
}

// __dt__Q34nw4r3lyt14GroupContainerFv
void f_801426C4(Ctx* __restrict c) {
  trace_call(0x801426C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801426C4
  c->r[0]=c->lr; // 801426C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801426CC
  c->r[11]=c->r[1]+0x00000030u; // 801426D0
  c->lr=0x801426D8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801426D4
  cmps(c,0,(int32_t)c->r[3],0); // 801426D8
  c->r[27]=c->r[3]|c->r[3]; // 801426DC
  c->r[28]=c->r[4]|c->r[4]; // 801426E0
  if (crb(c,2)) { goto L_80142770; } // 801426E4
  c->r[31]=R32(c->r[3]+0x00000004u); // 801426E8
  c->r[30]=c->r[3]+0x00000004u; // 801426EC
  goto L_80142744; // 801426F0
L_801426F4:;
  c->r[29]=c->r[31]|c->r[31]; // 801426F4
  c->r[31]=R32(c->r[31]+0x00000000u); // 801426F8
  c->r[3]=c->r[27]|c->r[27]; // 801426FC
  c->r[4]=c->r[1]+0x00000008u; // 80142700
  W32(c->r[1]+0x00000008u,c->r[29]); // 80142704
  c->lr=0x8014270Cu; f_800F63A4(c); // 80142708
  c->r[0]=R8(c->r[29]+0x00000025u); // 8014270C
  cmps(c,0,(int32_t)c->r[0],0); // 80142710
  if (!crb(c,2)) { goto L_80142744; } // 80142714
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 80142718
  if (crb(c,2)) { goto L_80142744; } // 8014271C
  c->r[12]=R32(c->r[29]+0x00000000u); // 80142720
  c->r[3]=c->r[29]|c->r[29]; // 80142724
  c->r[4]=0u+0xFFFFFFFFu; // 80142728
  c->r[12]=R32(c->r[12]+0x00000008u); // 8014272C
  c->ctr=c->r[12]; // 80142730
  if (true) { c->lr=0x80142738u; dispatch(c,c->ctr); } // 80142734
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80142738
  c->r[4]=c->r[29]|c->r[29]; // 8014273C
  c->lr=0x80142744u; f_8017C1B4(c); // 80142740
L_80142744:;
  cmpu(c,0,c->r[31],c->r[30]); // 80142744
  if (!crb(c,2)) { IRQCHK(c); goto L_801426F4; } // 80142748
  cmps(c,0,(int32_t)c->r[27],0); // 8014274C
  if (crb(c,2)) { goto L_80142760; } // 80142750
  c->r[3]=c->r[27]|c->r[27]; // 80142754
  c->r[4]=0u+0x00000000u; // 80142758
  c->lr=0x80142760u; f_800F6320(c); // 8014275C
L_80142760:;
  cmps(c,0,(int32_t)c->r[28],0); // 80142760
  if (!crb(c,1)) { goto L_80142770; } // 80142764
  c->r[3]=c->r[27]|c->r[27]; // 80142768
  c->lr=0x80142770u; f_802525B0(c); // 8014276C
L_80142770:;
  c->r[11]=c->r[1]+0x00000030u; // 80142770
  c->r[3]=c->r[27]|c->r[27]; // 80142774
  c->lr=0x8014277Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80142778
  c->r[0]=R32(c->r[1]+0x00000034u); // 8014277C
  c->lr=c->r[0]; // 80142780
  c->r[1]=c->r[1]+0x00000030u; // 80142784
  return; // 80142788
}

// AppendGroup__Q34nw4r3lyt14GroupContainerFPQ34nw4r3lyt5Group
void f_8014278C(Ctx* __restrict c) {
  trace_call(0x8014278Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014278C
  c->r[0]=c->lr; // 80142790
  c->r[5]=c->r[4]|c->r[4]; // 80142794
  W32(c->r[1]+0x00000014u,c->r[0]); // 80142798
  c->r[0]=c->r[3]+0x00000004u; // 8014279C
  c->r[4]=c->r[1]+0x00000008u; // 801427A0
  c->r[5]=c->r[5]+0x00000004u; // 801427A4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801427A8
  c->lr=0x801427B0u; f_800F6430(c); // 801427AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801427B0
  c->lr=c->r[0]; // 801427B4
  c->r[1]=c->r[1]+0x00000010u; // 801427B8
  return; // 801427BC
}

// FindGroupByName__Q34nw4r3lyt14GroupContainerFPCc
void f_801427C0(Ctx* __restrict c) {
  trace_call(0x801427C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801427C0
  c->r[0]=c->lr; // 801427C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801427C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801427CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801427D0
  c->r[30]=c->r[3]+0x00000004u; // 801427D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801427D8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801427DC
  c->r[28]=c->r[4]|c->r[4]; // 801427E0
  c->r[31]=R32(c->r[3]+0x00000004u); // 801427E4
  goto L_80142810; // 801427E8
L_801427EC:;
  c->r[29]=c->r[31]+0xFFFFFFFCu; // 801427EC
  c->r[4]=c->r[28]|c->r[28]; // 801427F0
  c->r[3]=c->r[29]+0x00000018u; // 801427F4
  c->lr=0x801427FCu; f_8014C6F4(c); // 801427F8
  cmps(c,0,(int32_t)c->r[3],0); // 801427FC
  if (crb(c,2)) { goto L_8014280C; } // 80142800
  c->r[3]=c->r[29]|c->r[29]; // 80142804
  goto L_8014281C; // 80142808
L_8014280C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8014280C
L_80142810:;
  cmpu(c,0,c->r[31],c->r[30]); // 80142810
  if (!crb(c,2)) { IRQCHK(c); goto L_801427EC; } // 80142814
  c->r[3]=0u+0x00000000u; // 80142818
L_8014281C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014281C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80142820
  c->r[30]=R32(c->r[1]+0x00000018u); // 80142824
  c->r[29]=R32(c->r[1]+0x00000014u); // 80142828
  c->r[28]=R32(c->r[1]+0x00000010u); // 8014282C
  c->lr=c->r[0]; // 80142830
  c->r[1]=c->r[1]+0x00000020u; // 80142834
  return; // 80142838
}

// SetTagProcessorImpl__Q34nw4r3lyt24@unnamed@lyt_layout_cpp@FPQ34nw4r3lyt4PanePQ34nw4r2ut19TagProcessorBase<w>
void f_8014283C(Ctx* __restrict c) {
  trace_call(0x8014283Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014283C
  c->r[0]=c->lr; // 80142840
  W32(c->r[1]+0x00000034u,c->r[0]); // 80142844
  c->r[11]=c->r[1]+0x00000030u; // 80142848
  c->lr=0x80142850u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014284C
  cmps(c,0,(int32_t)c->r[3],0); // 80142850
  c->r[23]=c->r[3]|c->r[3]; // 80142854
  c->r[31]=c->r[4]|c->r[4]; // 80142858
  c->r[25]=c->r[13]+0xFFFFA970u; // 8014285C
  if (crb(c,2)) { goto L_801428A8; } // 80142860
  c->r[12]=R32(c->r[3]+0x00000000u); // 80142864
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80142868
  c->ctr=c->r[12]; // 8014286C
  if (true) { c->lr=0x80142874u; dispatch(c,c->ctr); } // 80142870
  goto L_8014288C; // 80142874
L_80142878:;
  cmpu(c,0,c->r[3],c->r[25]); // 80142878
  if (!crb(c,2)) { goto L_80142888; } // 8014287C
  c->r[0]=0u+0x00000001u; // 80142880
  goto L_80142898; // 80142884
L_80142888:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80142888
L_8014288C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8014288C
  if (!crb(c,2)) { IRQCHK(c); goto L_80142878; } // 80142890
  c->r[0]=0u+0x00000000u; // 80142894
L_80142898:;
  cmps(c,0,(int32_t)c->r[0],0); // 80142898
  if (crb(c,2)) { goto L_801428A8; } // 8014289C
  c->r[3]=c->r[23]|c->r[23]; // 801428A0
  goto L_801428AC; // 801428A4
L_801428A8:;
  c->r[3]=0u+0x00000000u; // 801428A8
L_801428AC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801428AC
  if (crb(c,2)) { goto L_801428B8; } // 801428B0
  W32(c->r[3]+0x000000F8u,c->r[31]); // 801428B4
L_801428B8:;
  c->r[30]=R32(c->r[23]+0x00000014u); // 801428B8
  c->r[27]=c->r[23]+0x00000014u; // 801428BC
  c->r[23]=c->r[13]+0xFFFFA970u; // 801428C0
  c->r[24]=c->r[13]+0xFFFFA970u; // 801428C4
  goto L_801429C8; // 801428C8
L_801428CC:;
  c->r[25]=addc(c,c->r[30],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 801428CC
  if (crb(c,2)) { goto L_8014291C; } // 801428D0
  c->r[12]=R32(c->r[25]+0x00000000u); // 801428D4
  c->r[3]=c->r[25]|c->r[25]; // 801428D8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801428DC
  c->ctr=c->r[12]; // 801428E0
  if (true) { c->lr=0x801428E8u; dispatch(c,c->ctr); } // 801428E4
  goto L_80142900; // 801428E8
L_801428EC:;
  cmpu(c,0,c->r[3],c->r[24]); // 801428EC
  if (!crb(c,2)) { goto L_801428FC; } // 801428F0
  c->r[0]=0u+0x00000001u; // 801428F4
  goto L_8014290C; // 801428F8
L_801428FC:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801428FC
L_80142900:;
  cmps(c,0,(int32_t)c->r[3],0); // 80142900
  if (!crb(c,2)) { IRQCHK(c); goto L_801428EC; } // 80142904
  c->r[0]=0u+0x00000000u; // 80142908
L_8014290C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014290C
  if (crb(c,2)) { goto L_8014291C; } // 80142910
  c->r[3]=c->r[25]|c->r[25]; // 80142914
  goto L_80142920; // 80142918
L_8014291C:;
  c->r[3]=0u+0x00000000u; // 8014291C
L_80142920:;
  cmps(c,0,(int32_t)c->r[3],0); // 80142920
  if (crb(c,2)) { goto L_8014292C; } // 80142924
  W32(c->r[3]+0x000000F8u,c->r[31]); // 80142928
L_8014292C:;
  c->r[29]=R32(c->r[25]+0x00000014u); // 8014292C
  c->r[26]=c->r[25]+0x00000014u; // 80142930
  goto L_801429BC; // 80142934
L_80142938:;
  c->r[25]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 80142938
  if (crb(c,2)) { goto L_80142988; } // 8014293C
  c->r[12]=R32(c->r[25]+0x00000000u); // 80142940
  c->r[3]=c->r[25]|c->r[25]; // 80142944
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80142948
  c->ctr=c->r[12]; // 8014294C
  if (true) { c->lr=0x80142954u; dispatch(c,c->ctr); } // 80142950
  goto L_8014296C; // 80142954
L_80142958:;
  cmpu(c,0,c->r[3],c->r[23]); // 80142958
  if (!crb(c,2)) { goto L_80142968; } // 8014295C
  c->r[0]=0u+0x00000001u; // 80142960
  goto L_80142978; // 80142964
L_80142968:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80142968
L_8014296C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8014296C
  if (!crb(c,2)) { IRQCHK(c); goto L_80142958; } // 80142970
  c->r[0]=0u+0x00000000u; // 80142974
L_80142978:;
  cmps(c,0,(int32_t)c->r[0],0); // 80142978
  if (crb(c,2)) { goto L_80142988; } // 8014297C
  c->r[3]=c->r[25]|c->r[25]; // 80142980
  goto L_8014298C; // 80142984
L_80142988:;
  c->r[3]=0u+0x00000000u; // 80142988
L_8014298C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8014298C
  if (crb(c,2)) { goto L_80142998; } // 80142990
  W32(c->r[3]+0x000000F8u,c->r[31]); // 80142994
L_80142998:;
  {uint32_t ea=c->r[25]+0x00000014u; c->r[28]=R32(ea); c->r[25]=ea;} // 80142998
  goto L_801429B0; // 8014299C
L_801429A0:;
  c->r[4]=c->r[31]|c->r[31]; // 801429A0
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 801429A4
  c->lr=0x801429ACu; f_8014283C(c); // 801429A8
  c->r[28]=R32(c->r[28]+0x00000000u); // 801429AC
L_801429B0:;
  cmpu(c,0,c->r[28],c->r[25]); // 801429B0
  if (!crb(c,2)) { IRQCHK(c); goto L_801429A0; } // 801429B4
  c->r[29]=R32(c->r[29]+0x00000000u); // 801429B8
L_801429BC:;
  cmpu(c,0,c->r[29],c->r[26]); // 801429BC
  if (!crb(c,2)) { IRQCHK(c); goto L_80142938; } // 801429C0
  c->r[30]=R32(c->r[30]+0x00000000u); // 801429C4
L_801429C8:;
  cmpu(c,0,c->r[30],c->r[27]); // 801429C8
  if (!crb(c,2)) { IRQCHK(c); goto L_801428CC; } // 801429CC
  c->r[11]=c->r[1]+0x00000030u; // 801429D0
  c->lr=0x801429D8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801429D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801429D8
  c->lr=c->r[0]; // 801429DC
  c->r[1]=c->r[1]+0x00000030u; // 801429E0
  return; // 801429E4
}

// IsIncludeAnimationGroupRef__Q34nw4r3lyt24@unnamed@lyt_layout_cpp@FPQ34nw4r3lyt14GroupContainerPCQ34nw4r3lyt17AnimationGroupRefUsbPQ34nw4r3lyt4Pane
void f_801429E8(Ctx* __restrict c) {
  trace_call(0x801429E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801429E8
  c->r[0]=c->lr; // 801429EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801429F0
  c->r[11]=c->r[1]+0x00000020u; // 801429F4
  c->lr=0x801429FCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801429F8
  c->r[26]=c->r[3]|c->r[3]; // 801429FC
  c->r[27]=c->r[4]|c->r[4]; // 80142A00
  c->r[28]=c->r[5]|c->r[5]; // 80142A04
  c->r[29]=c->r[6]|c->r[6]; // 80142A08
  c->r[30]=c->r[7]|c->r[7]; // 80142A0C
  c->r[31]=0u+0x00000000u; // 80142A10
  goto L_80142A88; // 80142A14
L_80142A18:;
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 80142A18
  c->r[3]=c->r[26]|c->r[26]; // 80142A1C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80142A20
  c->r[4]=c->r[27]+c->r[0]; // 80142A24
  c->lr=0x80142A2Cu; f_801427C0(c); // 80142A28
  c->r[4]=R32(c->r[3]+0x00000010u); // 80142A2C
  c->r[0]=c->r[3]+0x00000010u; // 80142A30
  goto L_80142A7C; // 80142A34
L_80142A38:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 80142A38
  cmpu(c,0,c->r[3],c->r[30]); // 80142A3C
  if (!crb(c,2)) { goto L_80142A4C; } // 80142A40
  c->r[3]=0u+0x00000001u; // 80142A44
  goto L_80142A98; // 80142A48
L_80142A4C:;
  cmps(c,0,(int32_t)c->r[29],0); // 80142A4C
  if (crb(c,2)) { goto L_80142A78; } // 80142A50
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 80142A54
  goto L_80142A70; // 80142A58
L_80142A5C:;
  cmpu(c,0,c->r[3],c->r[5]); // 80142A5C
  if (!crb(c,2)) { goto L_80142A6C; } // 80142A60
  c->r[3]=0u+0x00000001u; // 80142A64
  goto L_80142A98; // 80142A68
L_80142A6C:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80142A6C
L_80142A70:;
  cmps(c,0,(int32_t)c->r[5],0); // 80142A70
  if (!crb(c,2)) { IRQCHK(c); goto L_80142A5C; } // 80142A74
L_80142A78:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 80142A78
L_80142A7C:;
  cmpu(c,0,c->r[4],c->r[0]); // 80142A7C
  if (!crb(c,2)) { IRQCHK(c); goto L_80142A38; } // 80142A80
  c->r[31]=c->r[31]+0x00000001u; // 80142A84
L_80142A88:;
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 80142A88
  cmpu(c,0,c->r[0],c->r[28]); // 80142A8C
  if (crb(c,0)) { IRQCHK(c); goto L_80142A18; } // 80142A90
  c->r[3]=0u+0x00000000u; // 80142A94
L_80142A98:;
  c->r[11]=c->r[1]+0x00000020u; // 80142A98
  c->lr=0x80142AA0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80142A9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80142AA0
  c->lr=c->r[0]; // 80142AA4
  c->r[1]=c->r[1]+0x00000020u; // 80142AA8
  return; // 80142AAC
}

// __ct__Q34nw4r3lyt6LayoutFv
void f_80142AB0(Ctx* __restrict c) {
  trace_call(0x80142AB0u);
  c->r[0]=0u+0x00000000u; // 80142AB0
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[0]=c->ps1[0]=RF32(ea);} // 80142AB4
  c->r[4]=0u+0x802C0000u; // 80142AB8
  W32(c->r[3]+0x00000008u,c->r[0]); // 80142ABC
  c->r[5]=c->r[3]+0x00000008u; // 80142AC0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80142AC4
  c->r[4]=c->r[4]+0x000064C0u; // 80142AC8
  W32(c->r[3]+0x00000000u,c->r[4]); // 80142ACC
  W32(c->r[3]+0x00000004u,c->r[0]); // 80142AD0
  W32(c->r[3]+0x00000008u,c->r[5]); // 80142AD4
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 80142AD8
  W32(c->r[3]+0x00000010u,c->r[0]); // 80142ADC
  W32(c->r[3]+0x00000014u,c->r[0]); // 80142AE0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80142AE4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80142AE8
  return; // 80142AEC
}

// __dt__Q34nw4r3lyt6LayoutFv
void f_80142AF0(Ctx* __restrict c) {
  trace_call(0x80142AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80142AF0
  c->r[0]=c->lr; // 80142AF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80142AF8
  c->r[11]=c->r[1]+0x00000030u; // 80142AFC
  c->lr=0x80142B04u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80142B00
  cmps(c,0,(int32_t)c->r[3],0); // 80142B04
  c->r[27]=c->r[3]|c->r[3]; // 80142B08
  c->r[28]=c->r[4]|c->r[4]; // 80142B0C
  if (crb(c,2)) { goto L_80142BFC; } // 80142B10
  c->r[29]=R32(c->r[3]+0x00000014u); // 80142B14
  c->r[4]=0u+0x802C0000u; // 80142B18
  c->r[4]=c->r[4]+0x000064C0u; // 80142B1C
  cmps(c,0,(int32_t)c->r[29],0); // 80142B20
  W32(c->r[3]+0x00000000u,c->r[4]); // 80142B24
  if (crb(c,2)) { goto L_80142B44; } // 80142B28
  c->r[3]=c->r[29]|c->r[29]; // 80142B2C
  c->r[4]=0u+0xFFFFFFFFu; // 80142B30
  c->lr=0x80142B38u; f_801426C4(c); // 80142B34
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80142B38
  c->r[4]=c->r[29]|c->r[29]; // 80142B3C
  c->lr=0x80142B44u; f_8017C1B4(c); // 80142B40
L_80142B44:;
  c->r[29]=R32(c->r[27]+0x00000010u); // 80142B44
  cmps(c,1,(int32_t)c->r[29],0); // 80142B48
  if (crb(c,6)) { goto L_80142B84; } // 80142B4C
  c->r[0]=R8(c->r[29]+0x000000D6u); // 80142B50
  cmps(c,0,(int32_t)c->r[0],0); // 80142B54
  if (!crb(c,2)) { goto L_80142B84; } // 80142B58
  if (crb(c,6)) { goto L_80142B84; } // 80142B5C
  c->r[12]=R32(c->r[29]+0x00000000u); // 80142B60
  c->r[3]=c->r[29]|c->r[29]; // 80142B64
  c->r[4]=0u+0xFFFFFFFFu; // 80142B68
  c->r[12]=R32(c->r[12]+0x00000008u); // 80142B6C
  c->ctr=c->r[12]; // 80142B70
  if (true) { c->lr=0x80142B78u; dispatch(c,c->ctr); } // 80142B74
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80142B78
  c->r[4]=c->r[29]|c->r[29]; // 80142B7C
  c->lr=0x80142B84u; f_8017C1B4(c); // 80142B80
L_80142B84:;
  c->r[31]=R32(c->r[27]+0x00000008u); // 80142B84
  c->r[30]=c->r[27]+0x00000008u; // 80142B88
  goto L_80142BD4; // 80142B8C
L_80142B90:;
  c->r[29]=c->r[31]|c->r[31]; // 80142B90
  c->r[31]=R32(c->r[31]+0x00000000u); // 80142B94
  c->r[3]=c->r[27]+0x00000004u; // 80142B98
  c->r[4]=c->r[1]+0x00000008u; // 80142B9C
  W32(c->r[1]+0x00000008u,c->r[29]); // 80142BA0
  c->lr=0x80142BA8u; f_800F63A4(c); // 80142BA4
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 80142BA8
  if (crb(c,2)) { goto L_80142BD4; } // 80142BAC
  c->r[12]=R32(c->r[29]+0x00000000u); // 80142BB0
  c->r[3]=c->r[29]|c->r[29]; // 80142BB4
  c->r[4]=0u+0xFFFFFFFFu; // 80142BB8
  c->r[12]=R32(c->r[12]+0x00000008u); // 80142BBC
  c->ctr=c->r[12]; // 80142BC0
  if (true) { c->lr=0x80142BC8u; dispatch(c,c->ctr); } // 80142BC4
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80142BC8
  c->r[4]=c->r[29]|c->r[29]; // 80142BCC
  c->lr=0x80142BD4u; f_8017C1B4(c); // 80142BD0
L_80142BD4:;
  cmpu(c,0,c->r[31],c->r[30]); // 80142BD4
  if (!crb(c,2)) { IRQCHK(c); goto L_80142B90; } // 80142BD8
  c->r[3]=addc(c,c->r[27],0x00000004u,0); cr0(c,c->r[3]); // 80142BDC
  if (crb(c,2)) { goto L_80142BEC; } // 80142BE0
  c->r[4]=0u+0x00000000u; // 80142BE4
  c->lr=0x80142BECu; f_800F6320(c); // 80142BE8
L_80142BEC:;
  cmps(c,0,(int32_t)c->r[28],0); // 80142BEC
  if (!crb(c,1)) { goto L_80142BFC; } // 80142BF0
  c->r[3]=c->r[27]|c->r[27]; // 80142BF4
  c->lr=0x80142BFCu; f_802525B0(c); // 80142BF8
L_80142BFC:;
  c->r[11]=c->r[1]+0x00000030u; // 80142BFC
  c->r[3]=c->r[27]|c->r[27]; // 80142C00
  c->lr=0x80142C08u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80142C04
  c->r[0]=R32(c->r[1]+0x00000034u); // 80142C08
  c->lr=c->r[0]; // 80142C0C
  c->r[1]=c->r[1]+0x00000030u; // 80142C10
  return; // 80142C14
}

// Build__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor
void f_80142C18(Ctx* __restrict c) {
  trace_call(0x80142C18u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80142C18
  c->r[0]=c->lr; // 80142C1C
  W32(c->r[1]+0x00000064u,c->r[0]); // 80142C20
  c->r[11]=c->r[1]+0x00000060u; // 80142C24
  c->lr=0x80142C2Cu; f_80252B70(c); // 80142C28
  c->r[31]=c->r[4]|c->r[4]; // 80142C2C
  c->r[4]=0u+0x524C0000u; // 80142C30
  c->r[30]=c->r[3]|c->r[3]; // 80142C34
  c->r[14]=c->r[5]|c->r[5]; // 80142C38
  c->r[4]=c->r[4]+0x00005954u; // 80142C3C
  c->r[3]=c->r[31]|c->r[31]; // 80142C40
  c->lr=0x80142C48u; f_8014C74C(c); // 80142C44
  cmps(c,0,(int32_t)c->r[3],0); // 80142C48
  if (!crb(c,2)) { goto L_80142C58; } // 80142C4C
  c->r[3]=0u+0x00000000u; // 80142C50
  goto L_80142F40; // 80142C54
L_80142C58:;
  c->r[4]=R16(c->r[31]+0x00000006u); // 80142C58
  c->r[3]=0u+0x00000000u; // 80142C5C
  c->r[0]=rotl(c->r[4],24)&0x000000FFu; cr0(c,c->r[0]); // 80142C60
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 80142C64
  if (!crb(c,2)) { goto L_80142C80; } // 80142C68
  cmpu(c,0,c->r[0],0x00000008u); // 80142C6C
  if (crb(c,0)) { goto L_80142C80; } // 80142C70
  cmpu(c,0,c->r[0],0x0000000Au); // 80142C74
  if (crb(c,1)) { goto L_80142C80; } // 80142C78
  c->r[3]=0u+0x00000001u; // 80142C7C
L_80142C80:;
  cmps(c,0,(int32_t)c->r[3],0); // 80142C80
  if (!crb(c,2)) { goto L_80142C90; } // 80142C84
  c->r[3]=0u+0x00000000u; // 80142C88
  goto L_80142F40; // 80142C8C
L_80142C90:;
  c->r[22]=0u+0x00000000u; // 80142C90
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 80142C94
  c->r[28]=0u+0x70610000u; // 80142C98
  W32(c->r[1]+0x00000014u,c->r[14]); // 80142C9C
  c->r[16]=c->r[31]+c->r[0]; // 80142CA0
  c->r[20]=0u+0x00000000u; // 80142CA4
  W32(c->r[1]+0x00000008u,c->r[22]); // 80142CA8
  c->r[23]=c->r[28]+0x00006531u; // 80142CAC
  c->r[19]=0u+0x00000000u; // 80142CB0
  c->r[18]=0u+0x00000000u; // 80142CB4
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 80142CB8
  c->r[17]=0u+0x00000000u; // 80142CBC
  c->r[15]=0u+0x00000000u; // 80142CC0
  c->r[14]=0u+0x6D610000u; // 80142CC4
  W32(c->r[1]+0x00000010u,c->r[22]); // 80142CC8
  c->r[29]=0u+0x74780000u; // 80142CCC
  c->r[25]=0u+0x626E0000u; // 80142CD0
  c->r[26]=0u+0x6C790000u; // 80142CD4
  c->r[27]=0u+0x67720000u; // 80142CD8
  c->r[24]=0u+0x666E0000u; // 80142CDC
  goto L_80142F30; // 80142CE0
L_80142CE4:;
  c->r[3]=R32(c->r[16]+0x00000000u); // 80142CE4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[23]); // 80142CE8
  if (crb(c,2)) { goto L_80142E60; } // 80142CEC
  if (!crb(c,0)) { goto L_80142D64; } // 80142CF0
  c->r[0]=c->r[27]+0x00007031u; // 80142CF4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80142CF8
  if (crb(c,2)) { goto L_80142E6C; } // 80142CFC
  if (!crb(c,0)) { goto L_80142D34; } // 80142D00
  c->r[0]=c->r[24]+0x00006C31u; // 80142D04
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80142D08
  if (crb(c,2)) { goto L_80142DFC; } // 80142D0C
  if (!crb(c,0)) { goto L_80142D24; } // 80142D10
  c->r[0]=c->r[25]+0x00006431u; // 80142D14
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80142D18
  if (crb(c,2)) { goto L_80142E0C; } // 80142D1C
  goto L_80142F24; // 80142D20
L_80142D24:;
  c->r[0]=c->r[27]+0x00006531u; // 80142D24
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80142D28
  if (crb(c,2)) { goto L_80142F20; } // 80142D2C
  goto L_80142F24; // 80142D30
L_80142D34:;
  c->r[0]=c->r[26]+0x00007431u; // 80142D34
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80142D38
  if (crb(c,2)) { goto L_80142DE0; } // 80142D3C
  if (!crb(c,0)) { goto L_80142D54; } // 80142D40
  c->r[0]=c->r[27]+0x00007331u; // 80142D44
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80142D48
  if (crb(c,2)) { goto L_80142F18; } // 80142D4C
  goto L_80142F24; // 80142D50
L_80142D54:;
  c->r[0]=c->r[14]+0x00007431u; // 80142D54
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80142D58
  if (crb(c,2)) { goto L_80142E04; } // 80142D5C
  goto L_80142F24; // 80142D60
L_80142D64:;
  c->r[0]=c->r[29]+0x00006C31u; // 80142D64
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80142D68
  if (crb(c,2)) { goto L_80142DF4; } // 80142D6C
  if (!crb(c,0)) { goto L_80142DA8; } // 80142D70
  c->r[0]=c->r[28]+0x00007331u; // 80142D74
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80142D78
  if (crb(c,2)) { goto L_80142E58; } // 80142D7C
  if (!crb(c,0)) { goto L_80142D94; } // 80142D80
  c->r[0]=c->r[28]+0x00006E31u; // 80142D84
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80142D88
  if (crb(c,2)) { goto L_80142E0C; } // 80142D8C
  goto L_80142F24; // 80142D90
L_80142D94:;
  c->r[4]=0u+0x70690000u; // 80142D94
  c->r[0]=c->r[4]+0x00006331u; // 80142D98
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80142D9C
  if (crb(c,2)) { goto L_80142E0C; } // 80142DA0
  goto L_80142F24; // 80142DA4
L_80142DA8:;
  c->r[4]=0u+0x75730000u; // 80142DA8
  c->r[0]=c->r[4]+0x00006431u; // 80142DAC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80142DB0
  if (crb(c,2)) { goto L_80142E50; } // 80142DB4
  if (!crb(c,0)) { goto L_80142DCC; } // 80142DB8
  c->r[0]=c->r[29]+0x00007431u; // 80142DBC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80142DC0
  if (crb(c,2)) { goto L_80142E0C; } // 80142DC4
  goto L_80142F24; // 80142DC8
L_80142DCC:;
  c->r[4]=0u+0x776E0000u; // 80142DCC
  c->r[0]=c->r[4]+0x00006431u; // 80142DD0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80142DD4
  if (crb(c,2)) { goto L_80142E0C; } // 80142DD8
  goto L_80142F24; // 80142DDC
L_80142DE0:;
  {uint32_t ea=c->r[16]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80142DE0
  {uint32_t ea=c->r[16]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80142DE4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 80142DE8
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 80142DEC
  goto L_80142F24; // 80142DF0
L_80142DF4:;
  W32(c->r[1]+0x00000008u,c->r[16]); // 80142DF4
  goto L_80142F24; // 80142DF8
L_80142DFC:;
  W32(c->r[1]+0x0000000Cu,c->r[16]); // 80142DFC
  goto L_80142F24; // 80142E00
L_80142E04:;
  W32(c->r[1]+0x00000010u,c->r[16]); // 80142E04
  goto L_80142F24; // 80142E08
L_80142E0C:;
  c->r[4]=c->r[16]|c->r[16]; // 80142E0C
  c->r[5]=c->r[1]+0x00000008u; // 80142E10
  c->lr=0x80142E18u; f_8014361C(c); // 80142E14
  cmps(c,0,(int32_t)c->r[3],0); // 80142E18
  c->r[21]=c->r[3]|c->r[3]; // 80142E1C
  if (crb(c,2)) { goto L_80142F24; } // 80142E20
  c->r[0]=R32(c->r[30]+0x00000010u); // 80142E24
  cmps(c,0,(int32_t)c->r[0],0); // 80142E28
  if (!crb(c,2)) { goto L_80142E34; } // 80142E2C
  W32(c->r[30]+0x00000010u,c->r[3]); // 80142E30
L_80142E34:;
  cmps(c,0,(int32_t)c->r[20],0); // 80142E34
  if (crb(c,2)) { goto L_80142E48; } // 80142E38
  c->r[3]=c->r[20]|c->r[20]; // 80142E3C
  c->r[4]=c->r[21]|c->r[21]; // 80142E40
  c->lr=0x80142E48u; f_801418FC(c); // 80142E44
L_80142E48:;
  c->r[19]=c->r[21]|c->r[21]; // 80142E48
  goto L_80142F24; // 80142E4C
L_80142E50:;
  W32(c->r[19]+0x000000B4u,c->r[16]); // 80142E50
  goto L_80142F24; // 80142E54
L_80142E58:;
  c->r[20]=c->r[19]|c->r[19]; // 80142E58
  goto L_80142F24; // 80142E5C
L_80142E60:;
  c->r[19]=c->r[20]|c->r[20]; // 80142E60
  c->r[20]=R32(c->r[20]+0x0000000Cu); // 80142E64
  goto L_80142F24; // 80142E68
L_80142E6C:;
  cmps(c,0,(int32_t)c->r[18],0); // 80142E6C
  if (!crb(c,2)) { goto L_80142EB8; } // 80142E70
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80142E74
  c->r[18]=0u+0x00000001u; // 80142E78
  c->r[4]=0u+0x0000000Cu; // 80142E7C
  c->lr=0x80142E84u; f_8017C1A4(c); // 80142E80
  cmps(c,0,(int32_t)c->r[3],0); // 80142E84
  if (crb(c,2)) { goto L_80142EAC; } // 80142E88
  if (crb(c,2)) { goto L_80142EB0; } // 80142E8C
  W32(c->r[3]+0x00000004u,c->r[22]); // 80142E90
  c->r[4]=c->r[3]+0x00000004u; // 80142E94
  W32(c->r[3]+0x00000008u,c->r[22]); // 80142E98
  W32(c->r[3]+0x00000000u,c->r[22]); // 80142E9C
  W32(c->r[3]+0x00000004u,c->r[4]); // 80142EA0
  W32(c->r[3]+0x00000008u,c->r[4]); // 80142EA4
  goto L_80142EB0; // 80142EA8
L_80142EAC:;
  c->r[3]=0u+0x00000000u; // 80142EAC
L_80142EB0:;
  W32(c->r[30]+0x00000014u,c->r[3]); // 80142EB0
  goto L_80142F24; // 80142EB4
L_80142EB8:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 80142EB8
  cmps(c,0,(int32_t)c->r[0],0); // 80142EBC
  if (crb(c,2)) { goto L_80142F24; } // 80142EC0
  cmps(c,0,(int32_t)c->r[17],1); // 80142EC4
  if (!crb(c,2)) { goto L_80142F24; } // 80142EC8
  c->r[21]=R32(c->r[30]+0x00000010u); // 80142ECC
  c->r[4]=0u+0x0000002Cu; // 80142ED0
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80142ED4
  c->lr=0x80142EDCu; f_8017C1A4(c); // 80142ED8
  cmps(c,0,(int32_t)c->r[3],0); // 80142EDC
  if (crb(c,2)) { goto L_80142F00; } // 80142EE0
  c->r[4]=c->r[3]|c->r[3]; // 80142EE4
  if (crb(c,2)) { goto L_80142F04; } // 80142EE8
  c->r[4]=c->r[16]|c->r[16]; // 80142EEC
  c->r[5]=c->r[21]|c->r[21]; // 80142EF0
  c->lr=0x80142EF8u; f_801424FC(c); // 80142EF4
  c->r[4]=c->r[3]|c->r[3]; // 80142EF8
  goto L_80142F04; // 80142EFC
L_80142F00:;
  c->r[4]=0u+0x00000000u; // 80142F00
L_80142F04:;
  cmps(c,0,(int32_t)c->r[4],0); // 80142F04
  if (crb(c,2)) { goto L_80142F24; } // 80142F08
  c->r[3]=R32(c->r[30]+0x00000014u); // 80142F0C
  c->lr=0x80142F14u; f_8014278C(c); // 80142F10
  goto L_80142F24; // 80142F14
L_80142F18:;
  c->r[17]=c->r[17]+0x00000001u; // 80142F18
  goto L_80142F24; // 80142F1C
L_80142F20:;
  c->r[17]=c->r[17]+0xFFFFFFFFu; // 80142F20
L_80142F24:;
  c->r[0]=R32(c->r[16]+0x00000004u); // 80142F24
  c->r[15]=c->r[15]+0x00000001u; // 80142F28
  c->r[16]=c->r[16]+c->r[0]; // 80142F2C
L_80142F30:;
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 80142F30
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[0]); // 80142F34
  if (crb(c,0)) { IRQCHK(c); goto L_80142CE4; } // 80142F38
  c->r[3]=0u+0x00000001u; // 80142F3C
L_80142F40:;
  c->r[11]=c->r[1]+0x00000060u; // 80142F40
  c->lr=0x80142F48u; f_80252BBC(c); // 80142F44
  c->r[0]=R32(c->r[1]+0x00000064u); // 80142F48
  c->lr=c->r[0]; // 80142F4C
  c->r[1]=c->r[1]+0x00000060u; // 80142F50
  return; // 80142F54
}

// CreateAnimTransform__Q34nw4r3lyt6LayoutFv
void f_80142F58(Ctx* __restrict c) {
  trace_call(0x80142F58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80142F58
  c->r[0]=c->lr; // 80142F5C
  c->r[4]=0u+0x00000020u; // 80142F60
  W32(c->r[1]+0x00000024u,c->r[0]); // 80142F64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80142F68
  W32(c->r[1]+0x00000018u,c->r[30]); // 80142F6C
  c->r[30]=c->r[3]|c->r[3]; // 80142F70
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80142F74
  c->lr=0x80142F7Cu; f_8017C1A4(c); // 80142F78
  cmps(c,0,(int32_t)c->r[3],0); // 80142F7C
  if (crb(c,2)) { goto L_80142F98; } // 80142F80
  c->r[31]=c->r[3]|c->r[3]; // 80142F84
  if (crb(c,2)) { goto L_80142F9C; } // 80142F88
  c->lr=0x80142F90u; f_8014AF0C(c); // 80142F8C
  c->r[31]=c->r[3]|c->r[3]; // 80142F90
  goto L_80142F9C; // 80142F94
L_80142F98:;
  c->r[31]=0u+0x00000000u; // 80142F98
L_80142F9C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80142F9C
  if (crb(c,2)) { goto L_80142FBC; } // 80142FA0
  c->r[0]=c->r[30]+0x00000008u; // 80142FA4
  c->r[3]=c->r[30]+0x00000004u; // 80142FA8
  W32(c->r[1]+0x00000008u,c->r[0]); // 80142FAC
  c->r[4]=c->r[1]+0x00000008u; // 80142FB0
  c->r[5]=c->r[31]+0x00000004u; // 80142FB4
  c->lr=0x80142FBCu; f_800F6430(c); // 80142FB8
L_80142FBC:;
  c->r[3]=c->r[31]|c->r[31]; // 80142FBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80142FC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80142FC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80142FC8
  c->lr=c->r[0]; // 80142FCC
  c->r[1]=c->r[1]+0x00000020u; // 80142FD0
  return; // 80142FD4
}

// CreateAnimTransform__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor
void f_80142FD8(Ctx* __restrict c) {
  trace_call(0x80142FD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80142FD8
  c->r[0]=c->lr; // 80142FDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80142FE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80142FE4
  c->r[31]=c->r[5]|c->r[5]; // 80142FE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80142FEC
  c->r[30]=c->r[3]|c->r[3]; // 80142FF0
  c->r[3]=c->r[1]+0x00000008u; // 80142FF4
  c->lr=0x80142FFCu; f_8014B918(c); // 80142FF8
  c->r[12]=R32(c->r[30]+0x00000000u); // 80142FFC
  c->r[3]=c->r[30]|c->r[30]; // 80143000
  c->r[5]=c->r[31]|c->r[31]; // 80143004
  c->r[4]=c->r[1]+0x00000008u; // 80143008
  c->r[12]=R32(c->r[12]+0x00000018u); // 8014300C
  c->ctr=c->r[12]; // 80143010
  if (true) { c->lr=0x80143018u; dispatch(c,c->ctr); } // 80143014
  c->r[0]=R32(c->r[1]+0x00000024u); // 80143018
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014301C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80143020
  c->lr=c->r[0]; // 80143024
  c->r[1]=c->r[1]+0x00000020u; // 80143028
  return; // 8014302C
}

// CreateAnimTransform__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt12AnimResourcePQ34nw4r3lyt16ResourceAccessor
void f_80143030(Ctx* __restrict c) {
  trace_call(0x80143030u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80143030
  c->r[0]=c->lr; // 80143034
  W32(c->r[1]+0x00000024u,c->r[0]); // 80143038
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014303C
  c->r[31]=R32(c->r[4]+0x00000004u); // 80143040
  W32(c->r[1]+0x00000018u,c->r[30]); // 80143044
  cmps(c,0,(int32_t)c->r[31],0); // 80143048
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014304C
  c->r[29]=c->r[5]|c->r[5]; // 80143050
  if (!crb(c,2)) { goto L_80143060; } // 80143054
  c->r[3]=0u+0x00000000u; // 80143058
  goto L_80143098; // 8014305C
L_80143060:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80143060
  c->r[12]=R32(c->r[12]+0x00000010u); // 80143064
  c->ctr=c->r[12]; // 80143068
  if (true) { c->lr=0x80143070u; dispatch(c,c->ctr); } // 8014306C
  cmps(c,0,(int32_t)c->r[3],0); // 80143070
  c->r[30]=c->r[3]|c->r[3]; // 80143074
  if (crb(c,2)) { goto L_80143094; } // 80143078
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014307C
  c->r[4]=c->r[31]|c->r[31]; // 80143080
  c->r[5]=c->r[29]|c->r[29]; // 80143084
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80143088
  c->ctr=c->r[12]; // 8014308C
  if (true) { c->lr=0x80143094u; dispatch(c,c->ctr); } // 80143090
L_80143094:;
  c->r[3]=c->r[30]|c->r[30]; // 80143094
L_80143098:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80143098
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014309C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801430A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801430A4
  c->lr=c->r[0]; // 801430A8
  c->r[1]=c->r[1]+0x00000020u; // 801430AC
  return; // 801430B0
}

// BindAnimation__Q34nw4r3lyt6LayoutFPQ34nw4r3lyt13AnimTransform
void f_801430B4(Ctx* __restrict c) {
  trace_call(0x801430B4u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 801430B4
  cmps(c,0,(int32_t)c->r[3],0); // 801430B8
  if (crb(c,2)) return; // 801430BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801430C0
  c->r[5]=0u+0x00000001u; // 801430C4
  c->r[6]=0u+0x00000000u; // 801430C8
  c->r[12]=R32(c->r[12]+0x00000044u); // 801430CC
  c->ctr=c->r[12]; // 801430D0
  if (true) { dispatch(c,c->ctr); return; } // 801430D4
  return; // 801430D8
}

// UnbindAnimation__Q34nw4r3lyt6LayoutFPQ34nw4r3lyt13AnimTransform
void f_801430DC(Ctx* __restrict c) {
  trace_call(0x801430DCu);
  c->r[3]=R32(c->r[3]+0x00000010u); // 801430DC
  cmps(c,0,(int32_t)c->r[3],0); // 801430E0
  if (crb(c,2)) return; // 801430E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801430E8
  c->r[5]=0u+0x00000001u; // 801430EC
  c->r[12]=R32(c->r[12]+0x00000048u); // 801430F0
  c->ctr=c->r[12]; // 801430F4
  if (true) { dispatch(c,c->ctr); return; } // 801430F8
  return; // 801430FC
}

// UnbindAllAnimation__Q34nw4r3lyt6LayoutFv
void f_80143100(Ctx* __restrict c) {
  trace_call(0x80143100u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 80143100
  c->r[4]=0u+0x00000000u; // 80143104
  c->r[12]=R32(c->r[12]+0x00000020u); // 80143108
  c->ctr=c->r[12]; // 8014310C
  if (true) { dispatch(c,c->ctr); return; } // 80143110
}

// BindAnimationAuto__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt12AnimResourcePQ34nw4r3lyt16ResourceAccessor
void f_80143114(Ctx* __restrict c) {
  trace_call(0x80143114u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80143114
  c->r[0]=c->lr; // 80143118
  W32(c->r[1]+0x00000064u,c->r[0]); // 8014311C
  c->r[11]=c->r[1]+0x00000060u; // 80143120
  c->lr=0x80143128u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80143124
  c->r[0]=R32(c->r[3]+0x00000010u); // 80143128
  c->r[29]=c->r[3]|c->r[3]; // 8014312C
  c->r[30]=c->r[4]|c->r[4]; // 80143130
  c->r[31]=c->r[5]|c->r[5]; // 80143134
  cmps(c,0,(int32_t)c->r[0],0); // 80143138
  if (!crb(c,2)) { goto L_80143148; } // 8014313C
  c->r[3]=0u+0x00000000u; // 80143140
  goto L_80143398; // 80143144
L_80143148:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 80143148
  cmps(c,0,(int32_t)c->r[0],0); // 8014314C
  if (!crb(c,2)) { goto L_8014315C; } // 80143150
  c->r[3]=0u+0x00000000u; // 80143154
  goto L_80143398; // 80143158
L_8014315C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014315C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80143160
  c->ctr=c->r[12]; // 80143164
  if (true) { c->lr=0x8014316Cu; dispatch(c,c->ctr); } // 80143168
  c->r[22]=c->r[3]|c->r[3]; // 8014316C
  c->r[3]=c->r[30]|c->r[30]; // 80143170
  c->lr=0x80143178u; f_8014BA28(c); // 80143174
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80143178
  c->r[24]=c->r[3]|c->r[3]; // 8014317C
  c->r[26]=0u+0x00000000u; // 80143180
  if (!crb(c,2)) { goto L_801431CC; } // 80143184
  c->r[12]=R32(c->r[22]+0x00000000u); // 80143188
  c->r[3]=c->r[22]|c->r[22]; // 8014318C
  c->r[4]=R32(c->r[30]+0x00000004u); // 80143190
  c->r[5]=c->r[31]|c->r[31]; // 80143194
  c->r[12]=R32(c->r[12]+0x00000010u); // 80143198
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 8014319C
  c->ctr=c->r[12]; // 801431A0
  if (true) { c->lr=0x801431A8u; dispatch(c,c->ctr); } // 801431A4
  c->r[3]=R32(c->r[29]+0x00000010u); // 801431A8
  c->r[4]=c->r[22]|c->r[22]; // 801431AC
  c->r[5]=0u+0x00000001u; // 801431B0
  c->r[6]=0u+0x00000001u; // 801431B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801431B8
  c->r[12]=R32(c->r[12]+0x00000044u); // 801431BC
  c->ctr=c->r[12]; // 801431C0
  if (true) { c->lr=0x801431C8u; dispatch(c,c->ctr); } // 801431C4
  goto L_8014328C; // 801431C8
L_801431CC:;
  c->r[3]=c->r[30]|c->r[30]; // 801431CC
  c->lr=0x801431D4u; f_8014BA44(c); // 801431D0
  c->r[27]=c->r[3]|c->r[3]; // 801431D4
  c->r[25]=rotl(c->r[24],0)&0x0000FFFFu; // 801431D8
  c->r[23]=c->r[27]|c->r[27]; // 801431DC
  c->r[28]=0u+0x00000000u; // 801431E0
  goto L_8014321C; // 801431E4
L_801431E8:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801431E8
  c->r[4]=c->r[23]|c->r[23]; // 801431EC
  c->lr=0x801431F4u; f_801427C0(c); // 801431F0
  c->r[21]=c->r[3]|c->r[3]; // 801431F4
  c->r[3]=c->r[30]|c->r[30]; // 801431F8
  c->lr=0x80143200u; f_8014BA64(c); // 801431FC
  c->r[5]=c->r[3]|c->r[3]; // 80143200
  c->r[3]=c->r[30]|c->r[30]; // 80143204
  c->r[4]=c->r[21]|c->r[21]; // 80143208
  c->lr=0x80143210u; f_8014BB98(c); // 8014320C
  c->r[26]=c->r[26]+c->r[3]; // 80143210
  c->r[23]=c->r[23]+0x00000014u; // 80143214
  c->r[28]=c->r[28]+0x00000001u; // 80143218
L_8014321C:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[25]); // 8014321C
  if (crb(c,0)) { IRQCHK(c); goto L_801431E8; } // 80143220
  c->r[12]=R32(c->r[22]+0x00000000u); // 80143224
  c->r[3]=c->r[22]|c->r[22]; // 80143228
  c->r[5]=c->r[31]|c->r[31]; // 8014322C
  c->r[6]=rotl(c->r[26],0)&0x0000FFFFu; // 80143230
  c->r[12]=R32(c->r[12]+0x00000010u); // 80143234
  c->r[4]=R32(c->r[30]+0x00000004u); // 80143238
  c->ctr=c->r[12]; // 8014323C
  if (true) { c->lr=0x80143244u; dispatch(c,c->ctr); } // 80143240
  c->r[25]=rotl(c->r[24],0)&0x0000FFFFu; // 80143244
  c->r[21]=0u+0x00000000u; // 80143248
  goto L_80143284; // 8014324C
L_80143250:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80143250
  c->r[4]=c->r[27]|c->r[27]; // 80143254
  c->lr=0x8014325Cu; f_801427C0(c); // 80143258
  c->r[23]=c->r[3]|c->r[3]; // 8014325C
  c->r[3]=c->r[30]|c->r[30]; // 80143260
  c->lr=0x80143268u; f_8014BA64(c); // 80143264
  c->r[5]=c->r[3]|c->r[3]; // 80143268
  c->r[3]=c->r[23]|c->r[23]; // 8014326C
  c->r[4]=c->r[22]|c->r[22]; // 80143270
  c->r[6]=0u+0x00000001u; // 80143274
  c->lr=0x8014327Cu; f_8014D1E4(c); // 80143278
  c->r[27]=c->r[27]+0x00000014u; // 8014327C
  c->r[21]=c->r[21]+0x00000001u; // 80143280
L_80143284:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[25]); // 80143284
  if (crb(c,0)) { IRQCHK(c); goto L_80143250; } // 80143288
L_8014328C:;
  c->r[3]=c->r[30]|c->r[30]; // 8014328C
  c->lr=0x80143294u; f_8014BA84(c); // 80143290
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80143294
  c->r[25]=c->r[3]|c->r[3]; // 80143298
  if (crb(c,2)) { goto L_80143394; } // 8014329C
  c->r[3]=c->r[30]|c->r[30]; // 801432A0
  c->lr=0x801432A8u; f_8014BAA0(c); // 801432A4
  c->r[23]=c->r[3]|c->r[3]; // 801432A8
  c->r[26]=rotl(c->r[25],0)&0x0000FFFFu; // 801432AC
  c->r[21]=0u+0x00000000u; // 801432B0
  goto L_8014338C; // 801432B4
L_801432B8:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 801432B8
  c->r[4]=c->r[23]|c->r[23]; // 801432BC
  c->r[5]=0u+0x00000001u; // 801432C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801432C4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801432C8
  c->ctr=c->r[12]; // 801432CC
  if (true) { c->lr=0x801432D4u; dispatch(c,c->ctr); } // 801432D0
  c->r[20]=c->r[3]|c->r[3]; // 801432D4
  c->r[3]=c->r[1]+0x00000008u; // 801432D8
  c->lr=0x801432E0u; f_8014B900(c); // 801432DC
  c->r[3]=c->r[1]+0x00000008u; // 801432E0
  c->lr=0x801432E8u; f_8014BC00(c); // 801432E4
  c->r[4]=c->r[20]|c->r[20]; // 801432E8
  c->r[5]=c->r[30]|c->r[30]; // 801432EC
  c->r[3]=c->r[1]+0x00000008u; // 801432F0
  c->lr=0x801432F8u; f_8014BC38(c); // 801432F4
  c->r[0]=R16(c->r[1]+0x0000001Au); // 801432F8
  cmps(c,0,(int32_t)c->r[0],0); // 801432FC
  if (crb(c,2)) { goto L_80143384; } // 80143300
  c->r[3]=R32(c->r[29]+0x00000014u); // 80143304
  c->r[4]=c->r[23]+0x00000011u; // 80143308
  c->lr=0x80143310u; f_801427C0(c); // 8014330C
  c->r[28]=R32(c->r[3]+0x00000010u); // 80143310
  c->r[27]=c->r[3]+0x00000010u; // 80143314
  goto L_8014337C; // 80143318
L_8014331C:;
  c->r[22]=R32(c->r[28]+0x00000008u); // 8014331C
  cmpu(c,0,c->r[22],c->r[20]); // 80143320
  if (crb(c,2)) { goto L_80143378; } // 80143324
  c->r[0]=rotl(c->r[24],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80143328
  if (crb(c,2)) { goto L_80143364; } // 8014332C
  c->r[3]=c->r[30]|c->r[30]; // 80143330
  c->lr=0x80143338u; f_8014BA64(c); // 80143334
  c->r[25]=c->r[3]|c->r[3]; // 80143338
  c->r[3]=c->r[30]|c->r[30]; // 8014333C
  c->lr=0x80143344u; f_8014BA44(c); // 80143340
  c->r[4]=c->r[3]|c->r[3]; // 80143344
  c->r[3]=R32(c->r[29]+0x00000014u); // 80143348
  c->r[6]=c->r[25]|c->r[25]; // 8014334C
  c->r[7]=c->r[22]|c->r[22]; // 80143350
  c->r[5]=rotl(c->r[24],0)&0x0000FFFFu; // 80143354
  c->lr=0x8014335Cu; f_801429E8(c); // 80143358
  cmps(c,0,(int32_t)c->r[3],0); // 8014335C
  if (crb(c,2)) { goto L_80143378; } // 80143360
L_80143364:;
  c->r[5]=R32(c->r[28]+0x00000008u); // 80143364
  c->r[4]=c->r[29]|c->r[29]; // 80143368
  c->r[6]=c->r[31]|c->r[31]; // 8014336C
  c->r[3]=c->r[1]+0x00000008u; // 80143370
  c->lr=0x80143378u; f_8014BE98(c); // 80143374
L_80143378:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 80143378
L_8014337C:;
  cmpu(c,0,c->r[28],c->r[27]); // 8014337C
  if (!crb(c,2)) { IRQCHK(c); goto L_8014331C; } // 80143380
L_80143384:;
  c->r[23]=c->r[23]+0x00000024u; // 80143384
  c->r[21]=c->r[21]+0x00000001u; // 80143388
L_8014338C:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[26]); // 8014338C
  if (crb(c,0)) { IRQCHK(c); goto L_801432B8; } // 80143390
L_80143394:;
  c->r[3]=0u+0x00000001u; // 80143394
L_80143398:;
  c->r[11]=c->r[1]+0x00000060u; // 80143398
  c->lr=0x801433A0u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014339C
  c->r[0]=R32(c->r[1]+0x00000064u); // 801433A0
  c->lr=c->r[0]; // 801433A4
  c->r[1]=c->r[1]+0x00000060u; // 801433A8
  return; // 801433AC
}

// SetAnimationEnable__Q34nw4r3lyt6LayoutFPQ34nw4r3lyt13AnimTransformb
void f_801433B0(Ctx* __restrict c) {
  trace_call(0x801433B0u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 801433B0
  cmps(c,0,(int32_t)c->r[3],0); // 801433B4
  if (crb(c,2)) return; // 801433B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801433BC
  c->r[6]=0u+0x00000001u; // 801433C0
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801433C4
  c->ctr=c->r[12]; // 801433C8
  if (true) { dispatch(c,c->ctr); return; } // 801433CC
  return; // 801433D0
}

// CalculateMtx__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt8DrawInfo
void f_801433D4(Ctx* __restrict c) {
  trace_call(0x801433D4u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 801433D4
  cmps(c,0,(int32_t)c->r[3],0); // 801433D8
  if (crb(c,2)) return; // 801433DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801433E0
  c->r[12]=R32(c->r[12]+0x00000010u); // 801433E4
  c->ctr=c->r[12]; // 801433E8
  if (true) { dispatch(c,c->ctr); return; } // 801433EC
  return; // 801433F0
}

// Draw__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt8DrawInfo
void f_801433F4(Ctx* __restrict c) {
  trace_call(0x801433F4u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 801433F4
  cmps(c,0,(int32_t)c->r[3],0); // 801433F8
  if (crb(c,2)) return; // 801433FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80143400
  c->r[12]=R32(c->r[12]+0x00000014u); // 80143404
  c->ctr=c->r[12]; // 80143408
  if (true) { dispatch(c,c->ctr); return; } // 8014340C
  return; // 80143410
}

// Animate__Q34nw4r3lyt6LayoutFUl
void f_80143414(Ctx* __restrict c) {
  trace_call(0x80143414u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80143414
  cmps(c,0,(int32_t)c->r[3],0); // 80143418
  if (crb(c,2)) return; // 8014341C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80143420
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80143424
  c->ctr=c->r[12]; // 80143428
  if (true) { dispatch(c,c->ctr); return; } // 8014342C
  return; // 80143430
}

// GetLayoutRect__Q34nw4r3lyt6LayoutCFv
void f_80143434(Ctx* __restrict c) {
  trace_call(0x80143434u);
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80143434
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80143438
  c->f[3]=-c->f[4]; // 8014343C
  {uint32_t ea=c->r[2]+0xFFFFA894u; c->f[2]=c->ps1[2]=RF32(ea);} // 80143440
  c->f[0]=-c->f[1]; // 80143444
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[2]); // 80143448
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 8014344C
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[2]); // 80143450
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80143454
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 80143458
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8014345C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80143460
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 80143464
  return; // 80143468
}

// SetTagProcessor__Q34nw4r3lyt6LayoutFPQ34nw4r2ut19TagProcessorBase<w>
void f_8014346C(Ctx* __restrict c) {
  trace_call(0x8014346Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014346C
  c->r[0]=c->lr; // 80143470
  W32(c->r[1]+0x00000034u,c->r[0]); // 80143474
  c->r[11]=c->r[1]+0x00000030u; // 80143478
  c->lr=0x80143480u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014347C
  c->r[25]=R32(c->r[3]+0x00000010u); // 80143480
  c->r[31]=c->r[4]|c->r[4]; // 80143484
  c->r[23]=c->r[13]+0xFFFFA970u; // 80143488
  cmps(c,0,(int32_t)c->r[25],0); // 8014348C
  if (crb(c,2)) { goto L_801434DC; } // 80143490
  c->r[12]=R32(c->r[25]+0x00000000u); // 80143494
  c->r[3]=c->r[25]|c->r[25]; // 80143498
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8014349C
  c->ctr=c->r[12]; // 801434A0
  if (true) { c->lr=0x801434A8u; dispatch(c,c->ctr); } // 801434A4
  goto L_801434C0; // 801434A8
L_801434AC:;
  cmpu(c,0,c->r[3],c->r[23]); // 801434AC
  if (!crb(c,2)) { goto L_801434BC; } // 801434B0
  c->r[0]=0u+0x00000001u; // 801434B4
  goto L_801434CC; // 801434B8
L_801434BC:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801434BC
L_801434C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801434C0
  if (!crb(c,2)) { IRQCHK(c); goto L_801434AC; } // 801434C4
  c->r[0]=0u+0x00000000u; // 801434C8
L_801434CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801434CC
  if (crb(c,2)) { goto L_801434DC; } // 801434D0
  c->r[3]=c->r[25]|c->r[25]; // 801434D4
  goto L_801434E0; // 801434D8
L_801434DC:;
  c->r[3]=0u+0x00000000u; // 801434DC
L_801434E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801434E0
  if (crb(c,2)) { goto L_801434EC; } // 801434E4
  W32(c->r[3]+0x000000F8u,c->r[31]); // 801434E8
L_801434EC:;
  c->r[30]=R32(c->r[25]+0x00000014u); // 801434EC
  c->r[27]=c->r[25]+0x00000014u; // 801434F0
  c->r[24]=c->r[13]+0xFFFFA970u; // 801434F4
  c->r[23]=c->r[13]+0xFFFFA970u; // 801434F8
  goto L_801435FC; // 801434FC
L_80143500:;
  c->r[25]=addc(c,c->r[30],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 80143500
  if (crb(c,2)) { goto L_80143550; } // 80143504
  c->r[12]=R32(c->r[25]+0x00000000u); // 80143508
  c->r[3]=c->r[25]|c->r[25]; // 8014350C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80143510
  c->ctr=c->r[12]; // 80143514
  if (true) { c->lr=0x8014351Cu; dispatch(c,c->ctr); } // 80143518
  goto L_80143534; // 8014351C
L_80143520:;
  cmpu(c,0,c->r[3],c->r[23]); // 80143520
  if (!crb(c,2)) { goto L_80143530; } // 80143524
  c->r[0]=0u+0x00000001u; // 80143528
  goto L_80143540; // 8014352C
L_80143530:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80143530
L_80143534:;
  cmps(c,0,(int32_t)c->r[3],0); // 80143534
  if (!crb(c,2)) { IRQCHK(c); goto L_80143520; } // 80143538
  c->r[0]=0u+0x00000000u; // 8014353C
L_80143540:;
  cmps(c,0,(int32_t)c->r[0],0); // 80143540
  if (crb(c,2)) { goto L_80143550; } // 80143544
  c->r[3]=c->r[25]|c->r[25]; // 80143548
  goto L_80143554; // 8014354C
L_80143550:;
  c->r[3]=0u+0x00000000u; // 80143550
L_80143554:;
  cmps(c,0,(int32_t)c->r[3],0); // 80143554
  if (crb(c,2)) { goto L_80143560; } // 80143558
  W32(c->r[3]+0x000000F8u,c->r[31]); // 8014355C
L_80143560:;
  c->r[29]=R32(c->r[25]+0x00000014u); // 80143560
  c->r[26]=c->r[25]+0x00000014u; // 80143564
  goto L_801435F0; // 80143568
L_8014356C:;
  c->r[25]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 8014356C
  if (crb(c,2)) { goto L_801435BC; } // 80143570
  c->r[12]=R32(c->r[25]+0x00000000u); // 80143574
  c->r[3]=c->r[25]|c->r[25]; // 80143578
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8014357C
  c->ctr=c->r[12]; // 80143580
  if (true) { c->lr=0x80143588u; dispatch(c,c->ctr); } // 80143584
  goto L_801435A0; // 80143588
L_8014358C:;
  cmpu(c,0,c->r[3],c->r[24]); // 8014358C
  if (!crb(c,2)) { goto L_8014359C; } // 80143590
  c->r[0]=0u+0x00000001u; // 80143594
  goto L_801435AC; // 80143598
L_8014359C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8014359C
L_801435A0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801435A0
  if (!crb(c,2)) { IRQCHK(c); goto L_8014358C; } // 801435A4
  c->r[0]=0u+0x00000000u; // 801435A8
L_801435AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801435AC
  if (crb(c,2)) { goto L_801435BC; } // 801435B0
  c->r[3]=c->r[25]|c->r[25]; // 801435B4
  goto L_801435C0; // 801435B8
L_801435BC:;
  c->r[3]=0u+0x00000000u; // 801435BC
L_801435C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801435C0
  if (crb(c,2)) { goto L_801435CC; } // 801435C4
  W32(c->r[3]+0x000000F8u,c->r[31]); // 801435C8
L_801435CC:;
  {uint32_t ea=c->r[25]+0x00000014u; c->r[28]=R32(ea); c->r[25]=ea;} // 801435CC
  goto L_801435E4; // 801435D0
L_801435D4:;
  c->r[4]=c->r[31]|c->r[31]; // 801435D4
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 801435D8
  c->lr=0x801435E0u; f_8014283C(c); // 801435DC
  c->r[28]=R32(c->r[28]+0x00000000u); // 801435E0
L_801435E4:;
  cmpu(c,0,c->r[28],c->r[25]); // 801435E4
  if (!crb(c,2)) { IRQCHK(c); goto L_801435D4; } // 801435E8
  c->r[29]=R32(c->r[29]+0x00000000u); // 801435EC
L_801435F0:;
  cmpu(c,0,c->r[29],c->r[26]); // 801435F0
  if (!crb(c,2)) { IRQCHK(c); goto L_8014356C; } // 801435F4
  c->r[30]=R32(c->r[30]+0x00000000u); // 801435F8
L_801435FC:;
  cmpu(c,0,c->r[30],c->r[27]); // 801435FC
  if (!crb(c,2)) { IRQCHK(c); goto L_80143500; } // 80143600
  c->r[11]=c->r[1]+0x00000030u; // 80143604
  c->lr=0x8014360Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80143608
  c->r[0]=R32(c->r[1]+0x00000034u); // 8014360C
  c->lr=c->r[0]; // 80143610
  c->r[1]=c->r[1]+0x00000030u; // 80143614
  return; // 80143618
}

// BuildPaneObj__Q34nw4r3lyt6LayoutFlPCvRCQ34nw4r3lyt11ResBlockSet
void f_8014361C(Ctx* __restrict c) {
  trace_call(0x8014361Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014361C
  c->r[0]=c->lr; // 80143620
  c->r[6]=0u+0x70690000u; // 80143624
  W32(c->r[1]+0x00000054u,c->r[0]); // 80143628
  c->r[0]=c->r[6]+0x00006331u; // 8014362C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80143630
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80143634
  if (crb(c,2)) { goto L_801436C0; } // 80143638
  if (!crb(c,0)) { goto L_80143668; } // 8014363C
  c->r[6]=0u+0x70610000u; // 80143640
  c->r[0]=c->r[6]+0x00006E31u; // 80143644
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80143648
  if (crb(c,2)) { goto L_80143690; } // 8014364C
  if (!crb(c,0)) { goto L_80143810; } // 80143650
  c->r[6]=0u+0x626E0000u; // 80143654
  c->r[0]=c->r[6]+0x00006431u; // 80143658
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8014365C
  if (crb(c,2)) { goto L_801437BC; } // 80143660
  goto L_80143810; // 80143664
L_80143668:;
  c->r[6]=0u+0x776E0000u; // 80143668
  c->r[0]=c->r[6]+0x00006431u; // 8014366C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80143670
  if (crb(c,2)) { goto L_80143768; } // 80143674
  if (!crb(c,0)) { goto L_80143810; } // 80143678
  c->r[6]=0u+0x74780000u; // 8014367C
  c->r[0]=c->r[6]+0x00007431u; // 80143680
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80143684
  if (crb(c,2)) { goto L_80143714; } // 80143688
  goto L_80143810; // 8014368C
L_80143690:;
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80143690
  c->r[31]=c->r[4]|c->r[4]; // 80143694
  c->r[4]=0u+0x000000D8u; // 80143698
  c->lr=0x801436A0u; f_8017C1A4(c); // 8014369C
  cmps(c,0,(int32_t)c->r[3],0); // 801436A0
  if (crb(c,2)) { goto L_801436B8; } // 801436A4
  if (crb(c,2)) { goto L_80143814; } // 801436A8
  c->r[4]=c->r[31]|c->r[31]; // 801436AC
  c->lr=0x801436B4u; f_8014168C(c); // 801436B0
  goto L_80143814; // 801436B4
L_801436B8:;
  c->r[3]=0u+0x00000000u; // 801436B8
  goto L_80143814; // 801436BC
L_801436C0:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 801436C0
  c->r[31]=c->r[4]|c->r[4]; // 801436C4
  c->r[7]=R32(c->r[5]+0x00000004u); // 801436C8
  c->r[4]=0u+0x000000F0u; // 801436CC
  c->r[6]=R32(c->r[5]+0x00000008u); // 801436D0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801436D4
  W32(c->r[1]+0x00000038u,c->r[3]); // 801436D8
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 801436DC
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 801436E0
  W32(c->r[1]+0x00000040u,c->r[6]); // 801436E4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801436E8
  c->lr=0x801436F0u; f_8017C1A4(c); // 801436EC
  cmps(c,0,(int32_t)c->r[3],0); // 801436F0
  if (crb(c,2)) { goto L_8014370C; } // 801436F4
  if (crb(c,2)) { goto L_80143814; } // 801436F8
  c->r[4]=c->r[31]|c->r[31]; // 801436FC
  c->r[5]=c->r[1]+0x00000038u; // 80143700
  c->lr=0x80143708u; f_80143834(c); // 80143704
  goto L_80143814; // 80143708
L_8014370C:;
  c->r[3]=0u+0x00000000u; // 8014370C
  goto L_80143814; // 80143710
L_80143714:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80143714
  c->r[31]=c->r[4]|c->r[4]; // 80143718
  c->r[7]=R32(c->r[5]+0x00000004u); // 8014371C
  c->r[4]=0u+0x00000104u; // 80143720
  c->r[6]=R32(c->r[5]+0x00000008u); // 80143724
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80143728
  W32(c->r[1]+0x00000028u,c->r[3]); // 8014372C
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80143730
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 80143734
  W32(c->r[1]+0x00000030u,c->r[6]); // 80143738
  W32(c->r[1]+0x00000034u,c->r[0]); // 8014373C
  c->lr=0x80143744u; f_8017C1A4(c); // 80143740
  cmps(c,0,(int32_t)c->r[3],0); // 80143744
  if (crb(c,2)) { goto L_80143760; } // 80143748
  if (crb(c,2)) { goto L_80143814; } // 8014374C
  c->r[4]=c->r[31]|c->r[31]; // 80143750
  c->r[5]=c->r[1]+0x00000028u; // 80143754
  c->lr=0x8014375Cu; f_80143E38(c); // 80143758
  goto L_80143814; // 8014375C
L_80143760:;
  c->r[3]=0u+0x00000000u; // 80143760
  goto L_80143814; // 80143764
L_80143768:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80143768
  c->r[31]=c->r[4]|c->r[4]; // 8014376C
  c->r[7]=R32(c->r[5]+0x00000004u); // 80143770
  c->r[4]=0u+0x00000108u; // 80143774
  c->r[6]=R32(c->r[5]+0x00000008u); // 80143778
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8014377C
  W32(c->r[1]+0x00000018u,c->r[3]); // 80143780
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80143784
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 80143788
  W32(c->r[1]+0x00000020u,c->r[6]); // 8014378C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80143790
  c->lr=0x80143798u; f_8017C1A4(c); // 80143794
  cmps(c,0,(int32_t)c->r[3],0); // 80143798
  if (crb(c,2)) { goto L_801437B4; } // 8014379C
  if (crb(c,2)) { goto L_80143814; } // 801437A0
  c->r[4]=c->r[31]|c->r[31]; // 801437A4
  c->r[5]=c->r[1]+0x00000018u; // 801437A8
  c->lr=0x801437B0u; f_801455C8(c); // 801437AC
  goto L_80143814; // 801437B0
L_801437B4:;
  c->r[3]=0u+0x00000000u; // 801437B4
  goto L_80143814; // 801437B8
L_801437BC:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 801437BC
  c->r[31]=c->r[4]|c->r[4]; // 801437C0
  c->r[7]=R32(c->r[5]+0x00000004u); // 801437C4
  c->r[4]=0u+0x000000D8u; // 801437C8
  c->r[6]=R32(c->r[5]+0x00000008u); // 801437CC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801437D0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801437D4
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 801437D8
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 801437DC
  W32(c->r[1]+0x00000010u,c->r[6]); // 801437E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801437E4
  c->lr=0x801437ECu; f_8017C1A4(c); // 801437E8
  cmps(c,0,(int32_t)c->r[3],0); // 801437EC
  if (crb(c,2)) { goto L_80143808; } // 801437F0
  if (crb(c,2)) { goto L_80143814; } // 801437F4
  c->r[4]=c->r[31]|c->r[31]; // 801437F8
  c->r[5]=c->r[1]+0x00000008u; // 801437FC
  c->lr=0x80143804u; f_80147B7C(c); // 80143800
  goto L_80143814; // 80143804
L_80143808:;
  c->r[3]=0u+0x00000000u; // 80143808
  goto L_80143814; // 8014380C
L_80143810:;
  c->r[3]=0u+0x00000000u; // 80143810
L_80143814:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 80143814
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80143818
  c->lr=c->r[0]; // 8014381C
  c->r[1]=c->r[1]+0x00000050u; // 80143820
  return; // 80143824
}

// __ct__Q34nw4r2ut5ColorFv
void f_80143828(Ctx* __restrict c) {
  trace_call(0x80143828u);
  c->r[0]=0u+0xFFFFFFFFu; // 80143828
  W32(c->r[3]+0x00000000u,c->r[0]); // 8014382C
  return; // 80143830
}

// fn_80143834
void f_80143834(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80143834
  c->r[0]=c->lr; // 80143838
  W32(c->r[1]+0x00000034u,c->r[0]); // 8014383C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80143840
  c->r[31]=c->r[3]|c->r[3]; // 80143844
  W32(c->r[1]+0x00000028u,c->r[30]); // 80143848
  W32(c->r[1]+0x00000024u,c->r[29]); // 8014384C
  c->r[29]=c->r[5]|c->r[5]; // 80143850
  W32(c->r[1]+0x00000020u,c->r[28]); // 80143854
  c->r[28]=c->r[4]|c->r[4]; // 80143858
  c->lr=0x80143860u; f_8014168C(c); // 8014385C
  c->r[3]=0u+0x802C0000u; // 80143860
  c->r[4]=0u+0x80140000u; // 80143864
  c->r[3]=c->r[3]+0x00006500u; // 80143868
  c->r[5]=0u+0x800D0000u; // 8014386C
  W32(c->r[31]+0x00000000u,c->r[3]); // 80143870
  c->r[3]=c->r[31]+0x000000D8u; // 80143874
  c->r[4]=c->r[4]+0x00003828u; // 80143878
  c->r[5]=c->r[5]+0x00002D0Cu; // 8014387C
  c->r[6]=0u+0x00000004u; // 80143880
  c->r[7]=0u+0x00000004u; // 80143884
  c->lr=0x8014388Cu; f_802528E4(c); // 80143888
  c->r[3]=c->r[31]+0x000000E8u; // 8014388C
  c->lr=0x80143894u; f_8014C774(c); // 80143890
  c->r[0]=R8(c->r[28]+0x0000005Eu); // 80143894
  c->r[30]=0u+0x00000008u; // 80143898
  cmpu(c,0,c->r[0],0x00000008u); // 8014389C
  if (crb(c,1)) { goto L_801438A8; } // 801438A0
  c->r[30]=c->r[0]|c->r[0]; // 801438A4
L_801438A8:;
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[4]); // 801438A8
  if (crb(c,2)) { goto L_801438B8; } // 801438AC
  c->r[3]=c->r[31]+0x000000E8u; // 801438B0
  c->lr=0x801438B8u; f_8014C7D8(c); // 801438B4
L_801438B8:;
  c->r[6]=R32(c->r[28]+0x0000004Cu); // 801438B8
  c->r[5]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[5]); // 801438BC
  c->r[4]=R32(c->r[28]+0x00000050u); // 801438C0
  c->r[3]=R32(c->r[28]+0x00000054u); // 801438C4
  c->r[0]=R32(c->r[28]+0x00000058u); // 801438C8
  W32(c->r[31]+0x000000D8u,c->r[6]); // 801438CC
  W32(c->r[31]+0x000000DCu,c->r[4]); // 801438D0
  W32(c->r[31]+0x000000E0u,c->r[3]); // 801438D4
  W32(c->r[31]+0x000000E4u,c->r[0]); // 801438D8
  if (crb(c,2)) { goto L_801438F8; } // 801438DC
  c->r[0]=R8(c->r[31]+0x000000E8u); // 801438E0
  cmps(c,0,(int32_t)c->r[0],0); // 801438E4
  if (crb(c,2)) { goto L_801438F8; } // 801438E8
  c->r[3]=c->r[31]+0x000000E8u; // 801438EC
  c->r[4]=c->r[28]+0x00000060u; // 801438F0
  c->lr=0x801438F8u; f_8014C958(c); // 801438F4
L_801438F8:;
  c->r[0]=R16(c->r[28]+0x0000005Cu); // 801438F8
  c->r[4]=0u+0x0000005Cu; // 801438FC
  c->r[7]=R32(c->r[29]+0x00000008u); // 80143900
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80143904
  c->r[3]=R32(c->r[29]+0x00000000u); // 80143908
  c->r[6]=c->r[7]+c->r[0]; // 8014390C
  c->r[5]=R32(c->r[29]+0x00000004u); // 80143910
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 80143914
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80143918
  W32(c->r[1]+0x00000008u,c->r[3]); // 8014391C
  c->r[30]=c->r[7]+c->r[6]; // 80143920
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80143924
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80143928
  W32(c->r[1]+0x00000010u,c->r[7]); // 8014392C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80143930
  c->lr=0x80143938u; f_8017C1A4(c); // 80143934
  cmps(c,0,(int32_t)c->r[3],0); // 80143938
  if (crb(c,2)) { goto L_80143954; } // 8014393C
  if (crb(c,2)) { goto L_80143958; } // 80143940
  c->r[4]=c->r[30]|c->r[30]; // 80143944
  c->r[5]=c->r[1]+0x00000008u; // 80143948
  c->lr=0x80143950u; f_80147F60(c); // 8014394C
  goto L_80143958; // 80143950
L_80143954:;
  c->r[3]=0u+0x00000000u; // 80143954
L_80143958:;
  W32(c->r[31]+0x00000028u,c->r[3]); // 80143958
  c->r[3]=c->r[31]|c->r[31]; // 8014395C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80143960
  c->r[30]=R32(c->r[1]+0x00000028u); // 80143964
  c->r[29]=R32(c->r[1]+0x00000024u); // 80143968
  c->r[28]=R32(c->r[1]+0x00000020u); // 8014396C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80143970
  c->lr=c->r[0]; // 80143974
  c->r[1]=c->r[1]+0x00000030u; // 80143978
  return; // 8014397C
}

// fn_80143980
void f_80143980(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80143980
  c->r[0]=c->lr; // 80143984
  cmps(c,0,(int32_t)c->r[3],0); // 80143988
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014398C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80143990
  W32(c->r[1]+0x00000018u,c->r[30]); // 80143994
  c->r[30]=c->r[4]|c->r[4]; // 80143998
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014399C
  c->r[29]=c->r[3]|c->r[3]; // 801439A0
  if (crb(c,2)) { goto L_80143A38; } // 801439A4
  c->r[31]=R32(c->r[3]+0x00000028u); // 801439A8
  c->r[4]=0u+0x802C0000u; // 801439AC
  c->r[4]=c->r[4]+0x00006500u; // 801439B0
  cmps(c,1,(int32_t)c->r[31],0); // 801439B4
  W32(c->r[3]+0x00000000u,c->r[4]); // 801439B8
  if (crb(c,6)) { goto L_801439FC; } // 801439BC
  c->r[0]=R8(c->r[31]+0x00000059u); // 801439C0
  cmps(c,0,(int32_t)c->r[0],0); // 801439C4
  if (!crb(c,2)) { goto L_801439FC; } // 801439C8
  if (crb(c,6)) { goto L_801439F4; } // 801439CC
  c->r[12]=R32(c->r[31]+0x00000000u); // 801439D0
  c->r[3]=c->r[31]|c->r[31]; // 801439D4
  c->r[4]=0u+0xFFFFFFFFu; // 801439D8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801439DC
  c->ctr=c->r[12]; // 801439E0
  if (true) { c->lr=0x801439E8u; dispatch(c,c->ctr); } // 801439E4
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 801439E8
  c->r[4]=c->r[31]|c->r[31]; // 801439EC
  c->lr=0x801439F4u; f_8017C1B4(c); // 801439F0
L_801439F4:;
  c->r[0]=0u+0x00000000u; // 801439F4
  W32(c->r[29]+0x00000028u,c->r[0]); // 801439F8
L_801439FC:;
  c->r[3]=c->r[29]+0x000000E8u; // 801439FC
  c->lr=0x80143A04u; f_8014C788(c); // 80143A00
  c->r[4]=0u+0x800D0000u; // 80143A04
  c->r[3]=c->r[29]+0x000000D8u; // 80143A08
  c->r[4]=c->r[4]+0x00002D0Cu; // 80143A0C
  c->r[5]=0u+0x00000004u; // 80143A10
  c->r[6]=0u+0x00000004u; // 80143A14
  c->lr=0x80143A1Cu; f_802529DC(c); // 80143A18
  c->r[3]=c->r[29]|c->r[29]; // 80143A1C
  c->r[4]=0u+0x00000000u; // 80143A20
  c->lr=0x80143A28u; f_801417C4(c); // 80143A24
  cmps(c,0,(int32_t)c->r[30],0); // 80143A28
  if (!crb(c,1)) { goto L_80143A38; } // 80143A2C
  c->r[3]=c->r[29]|c->r[29]; // 80143A30
  c->lr=0x80143A38u; f_802525B0(c); // 80143A34
L_80143A38:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80143A38
  c->r[3]=c->r[29]|c->r[29]; // 80143A3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80143A40
  c->r[29]=R32(c->r[1]+0x00000014u); // 80143A44
  c->r[0]=R32(c->r[1]+0x00000024u); // 80143A48
  c->lr=c->r[0]; // 80143A4C
  c->r[1]=c->r[1]+0x00000020u; // 80143A50
  return; // 80143A54
}

// fn_80143A58
void f_80143A58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80143A58
  c->r[0]=c->lr; // 80143A5C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80143A60
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80143A64
  W32(c->r[1]+0x00000028u,c->r[30]); // 80143A68
  c->r[30]=c->r[3]|c->r[3]; // 80143A6C
  W32(c->r[1]+0x00000024u,c->r[29]); // 80143A70
  W32(c->r[1]+0x00000020u,c->r[28]); // 80143A74
  c->r[28]=c->r[4]|c->r[4]; // 80143A78
  c->r[5]=R32(c->r[3]+0x00000028u); // 80143A7C
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 80143A80
  c->r[3]=R32(c->r[5]+0x00000038u); // 80143A84
  c->r[31]=rotl(c->r[0],4)&0x0000000Fu; // 80143A88
  c->r[0]=rotl(c->r[3],4)&0x0000000Fu; // 80143A8C
  cmpu(c,0,c->r[31],c->r[0]); // 80143A90
  if (!crb(c,0)) { goto L_80143BEC; } // 80143A94
  c->r[0]=rotl(c->r[3],12)&0x0000000Fu; // 80143A98
  cmpu(c,0,c->r[31],c->r[0]); // 80143A9C
  if (crb(c,0)) { goto L_80143AA8; } // 80143AA0
  goto L_80143BEC; // 80143AA4
L_80143AA8:;
  c->r[0]=c->r[31]+0x00000001u; // 80143AA8
  c->r[3]=c->r[5]|c->r[5]; // 80143AAC
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 80143AB0
  c->lr=0x80143AB8u; f_80149454(c); // 80143AB4
  c->r[3]=R32(c->r[30]+0x00000028u); // 80143AB8
  c->lr=0x80143AC0u; f_80149194(c); // 80143ABC
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)28); // 80143AC0
  c->r[6]=R32(c->r[28]+0x00000000u); // 80143AC4
  c->r[5]=R32(c->r[28]+0x00000004u); // 80143AC8
  c->r[4]=R16(c->r[28]+0x00000008u); // 80143ACC
  c->r[7]=c->r[3]+c->r[0]; // 80143AD0
  c->r[0]=R16(c->r[28]+0x0000000Au); // 80143AD4
  W32(c->r[7]+0x00000000u,c->r[6]); // 80143AD8
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80143ADC
  W32(c->r[7]+0x00000004u,c->r[5]); // 80143AE0
  {uint32_t ea=c->r[28]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80143AE4
  W16(c->r[7]+0x00000008u,c->r[4]); // 80143AE8
  c->r[4]=R16(c->r[28]+0x00000014u); // 80143AEC
  W16(c->r[7]+0x0000000Au,c->r[0]); // 80143AF0
  c->r[3]=R16(c->r[28]+0x00000016u); // 80143AF4
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[1]);} // 80143AF8
  c->r[0]=R32(c->r[28]+0x00000018u); // 80143AFC
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 80143B00
  W16(c->r[7]+0x00000014u,c->r[4]); // 80143B04
  W16(c->r[7]+0x00000016u,c->r[3]); // 80143B08
  W32(c->r[7]+0x00000018u,c->r[0]); // 80143B0C
  c->r[3]=R32(c->r[30]+0x00000028u); // 80143B10
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80143B14
  c->r[4]=rotl(c->r[0],4)&0x0000000Fu; // 80143B18
  c->lr=0x80143B20u; f_801494E4(c); // 80143B1C
  c->r[28]=0u+0x00000000u; // 80143B20
  c->r[29]=0u+0x00000001u; // 80143B24
  c->r[4]=0u+0x00000004u; // 80143B28
  c->r[0]=0u+0x0000003Cu; // 80143B2C
  W8(c->r[1]+0x0000000Bu,c->r[28]); // 80143B30
  c->r[3]=R32(c->r[30]+0x00000028u); // 80143B34
  W8(c->r[1]+0x00000008u,c->r[29]); // 80143B38
  W8(c->r[1]+0x00000009u,c->r[4]); // 80143B3C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80143B40
  c->r[0]=R32(c->r[1]+0x00000008u); // 80143B44
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80143B48
  c->lr=0x80143B50u; f_801491B4(c); // 80143B4C
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 80143B50
  c->r[4]=R8(c->r[1]+0x0000000Cu); // 80143B54
  c->r[5]=c->r[3]+c->r[0]; // 80143B58
  c->r[0]=R8(c->r[1]+0x0000000Du); // 80143B5C
  W8(c->r[5]+0x00000000u,c->r[4]); // 80143B60
  c->r[3]=c->r[30]+0x000000E8u; // 80143B64
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 80143B68
  W8(c->r[5]+0x00000001u,c->r[0]); // 80143B6C
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 80143B70
  W8(c->r[5]+0x00000002u,c->r[4]); // 80143B74
  W8(c->r[5]+0x00000003u,c->r[0]); // 80143B78
  c->r[4]=R32(c->r[30]+0x00000028u); // 80143B7C
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 80143B80
  c->r[4]=rotl(c->r[0],4)&0x0000000Fu; // 80143B84
  c->lr=0x80143B8Cu; f_8014C86C(c); // 80143B88
  {uint32_t ea=c->r[2]+0xFFFFA898u; c->f[1]=c->ps1[1]=RF32(ea);} // 80143B8C
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80143B90
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80143B94
  fcmp(c,0,c->f[0],c->f[1]); // 80143B98
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80143B9C
  if (!crb(c,2)) { goto L_80143BB4; } // 80143BA0
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80143BA4
  fcmp(c,0,c->f[0],c->f[1]); // 80143BA8
  if (!crb(c,2)) { goto L_80143BB4; } // 80143BAC
  c->r[28]=c->r[29]|c->r[29]; // 80143BB0
L_80143BB4:;
  cmps(c,0,(int32_t)c->r[28],0); // 80143BB4
  if (crb(c,2)) { goto L_80143BEC; } // 80143BB8
  c->r[4]=R32(c->r[30]+0x00000028u); // 80143BBC
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 80143BC0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80143BC4
  cmpu(c,0,c->r[0],0x00000001u); // 80143BC8
  if (!crb(c,2)) { goto L_80143BEC; } // 80143BCC
  c->r[3]=c->r[1]+0x00000010u; // 80143BD0
  c->r[5]=0u+0x00000000u; // 80143BD4
  c->lr=0x80143BDCu; f_8014A960(c); // 80143BD8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80143BDC
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 80143BE0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80143BE4
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 80143BE8
L_80143BEC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80143BEC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80143BF0
  c->r[30]=R32(c->r[1]+0x00000028u); // 80143BF4
  c->r[29]=R32(c->r[1]+0x00000024u); // 80143BF8
  c->r[28]=R32(c->r[1]+0x00000020u); // 80143BFC
  c->lr=c->r[0]; // 80143C00
  c->r[1]=c->r[1]+0x00000030u; // 80143C04
  return; // 80143C08
}

// fn_80143C0C
void f_80143C0C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80143C0C
  c->r[7]=c->r[4]+c->r[0]; // 80143C10
  c->r[6]=R8(c->r[7]+0x000000D8u); // 80143C14
  c->r[5]=R8(c->r[7]+0x000000D9u); // 80143C18
  c->r[4]=R8(c->r[7]+0x000000DAu); // 80143C1C
  c->r[0]=R8(c->r[7]+0x000000DBu); // 80143C20
  W8(c->r[3]+0x00000000u,c->r[6]); // 80143C24
  W8(c->r[3]+0x00000001u,c->r[5]); // 80143C28
  W8(c->r[3]+0x00000002u,c->r[4]); // 80143C2C
  W8(c->r[3]+0x00000003u,c->r[0]); // 80143C30
  return; // 80143C34
}

// fn_80143C38
void f_80143C38(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80143C38
  c->r[6]=R8(c->r[5]+0x00000000u); // 80143C3C
  c->r[4]=c->r[3]+c->r[0]; // 80143C40
  c->r[0]=R8(c->r[5]+0x00000001u); // 80143C44
  W8(c->r[4]+0x000000D8u,c->r[6]); // 80143C48
  c->r[3]=R8(c->r[5]+0x00000002u); // 80143C4C
  W8(c->r[4]+0x000000D9u,c->r[0]); // 80143C50
  c->r[0]=R8(c->r[5]+0x00000003u); // 80143C54
  W8(c->r[4]+0x000000DAu,c->r[3]); // 80143C58
  W8(c->r[4]+0x000000DBu,c->r[0]); // 80143C5C
  return; // 80143C60
}

// fn_80143C64
void f_80143C64(Ctx* __restrict c) {
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFCu; // 80143C64
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80143C68
  c->r[3]=c->r[3]+c->r[5]; // 80143C6C
  c->r[3]=c->r[3]+c->r[0]; // 80143C70
  c->r[3]=R8(c->r[3]+0x000000D8u); // 80143C74
  return; // 80143C78
}

// fn_80143C7C
void f_80143C7C(Ctx* __restrict c) {
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 80143C7C
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80143C80
  c->r[3]=c->r[3]+c->r[6]; // 80143C84
  c->r[3]=c->r[3]+c->r[0]; // 80143C88
  W8(c->r[3]+0x000000D8u,c->r[5]); // 80143C8C
  return; // 80143C90
}

// fn_80143C94
void f_80143C94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80143C94
  c->r[0]=c->lr; // 80143C98
  W32(c->r[1]+0x00000024u,c->r[0]); // 80143C9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80143CA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80143CA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80143CA8
  W32(c->r[1]+0x00000010u,c->r[28]); // 80143CAC
  c->r[28]=c->r[3]|c->r[3]; // 80143CB0
  c->r[0]=R32(c->r[3]+0x00000028u); // 80143CB4
  cmps(c,0,(int32_t)c->r[0],0); // 80143CB8
  if (crb(c,2)) { goto L_80143D50; } // 80143CBC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80143CC0
  c->r[12]=R32(c->r[12]+0x00000070u); // 80143CC4
  c->ctr=c->r[12]; // 80143CC8
  if (true) { c->lr=0x80143CD0u; dispatch(c,c->ctr); } // 80143CCC
  c->r[29]=R8(c->r[28]+0x000000B9u); // 80143CD0
  c->r[3]=c->r[28]+0x000000D8u; // 80143CD4
  c->r[4]=c->r[29]|c->r[29]; // 80143CD8
  c->lr=0x80143CE0u; f_8014C9EC(c); // 80143CDC
  c->r[4]=c->r[3]|c->r[3]; // 80143CE0
  c->r[3]=R32(c->r[28]+0x00000028u); // 80143CE4
  c->r[5]=c->r[29]|c->r[29]; // 80143CE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80143CEC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80143CF0
  c->ctr=c->r[12]; // 80143CF4
  if (true) { c->lr=0x80143CFCu; dispatch(c,c->ctr); } // 80143CF8
  c->r[4]=R8(c->r[28]+0x000000E9u); // 80143CFC
  c->r[29]=c->r[3]|c->r[3]; // 80143D00
  c->lr=0x80143D08u; f_8014CAA8(c); // 80143D04
  cmps(c,0,(int32_t)c->r[29],0); // 80143D08
  if (crb(c,2)) { goto L_80143D18; } // 80143D0C
  c->r[30]=c->r[28]+0x000000D8u; // 80143D10
  goto L_80143D1C; // 80143D14
L_80143D18:;
  c->r[30]=0u+0x00000000u; // 80143D18
L_80143D1C:;
  c->r[29]=R32(c->r[28]+0x000000ECu); // 80143D1C
  c->r[3]=c->r[28]|c->r[28]; // 80143D20
  c->r[31]=R8(c->r[28]+0x000000E9u); // 80143D24
  c->lr=0x80143D2Cu; f_801423D0(c); // 80143D28
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80143D2C
  c->r[5]=c->r[31]|c->r[31]; // 80143D30
  c->r[6]=c->r[29]|c->r[29]; // 80143D34
  c->r[7]=c->r[30]|c->r[30]; // 80143D38
  W32(c->r[1]+0x00000008u,c->r[3]); // 80143D3C
  c->r[3]=c->r[1]+0x00000008u; // 80143D40
  c->r[4]=c->r[28]+0x0000004Cu; // 80143D44
  c->r[8]=R8(c->r[28]+0x000000B9u); // 80143D48
  c->lr=0x80143D50u; f_8014D0EC(c); // 80143D4C
L_80143D50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80143D50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80143D54
  c->r[30]=R32(c->r[1]+0x00000018u); // 80143D58
  c->r[29]=R32(c->r[1]+0x00000014u); // 80143D5C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80143D60
  c->lr=c->r[0]; // 80143D64
  c->r[1]=c->r[1]+0x00000020u; // 80143D68
  return; // 80143D6C
}

// fn_80143D70
void f_80143D70(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFA968u; // 80143D70
  return; // 80143D74
}

// fn_80143D78
void f_80143D78(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFFA958u; // 80143D78
  W32(c->r[13]+0xFFFFA968u,c->r[0]); // 80143D7C
  return; // 80143D80
}

// fn_80143D84
void f_80143D84(Ctx* __restrict c) {
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000000u); // 80143D84
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80143D88
  cmps(c,0,(int32_t)c->r[5],0); // 80143D8C
  if (!crb(c,0)) { goto L_80143D9C; } // 80143D90
  c->r[0]=0u+0x00000000u; // 80143D94
  goto L_80143DAC; // 80143D98
L_80143D9C:;
  cmps(c,0,(int32_t)c->r[5],255); // 80143D9C
  c->r[0]=0u+0x000000FFu; // 80143DA0
  if (crb(c,1)) { goto L_80143DAC; } // 80143DA4
  c->r[0]=c->r[5]|c->r[5]; // 80143DA8
L_80143DAC:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 80143DAC
  W8(c->r[1]+0x00000008u,c->r[0]); // 80143DB0
  cmps(c,0,(int32_t)c->r[5],0); // 80143DB4
  if (!crb(c,0)) { goto L_80143DC4; } // 80143DB8
  c->r[0]=0u+0x00000000u; // 80143DBC
  goto L_80143DD4; // 80143DC0
L_80143DC4:;
  cmps(c,0,(int32_t)c->r[5],255); // 80143DC4
  c->r[0]=0u+0x000000FFu; // 80143DC8
  if (crb(c,1)) { goto L_80143DD4; } // 80143DCC
  c->r[0]=c->r[5]|c->r[5]; // 80143DD0
L_80143DD4:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 80143DD4
  W8(c->r[1]+0x00000009u,c->r[0]); // 80143DD8
  cmps(c,0,(int32_t)c->r[5],0); // 80143DDC
  if (!crb(c,0)) { goto L_80143DEC; } // 80143DE0
  c->r[0]=0u+0x00000000u; // 80143DE4
  goto L_80143DFC; // 80143DE8
L_80143DEC:;
  cmps(c,0,(int32_t)c->r[5],255); // 80143DEC
  c->r[0]=0u+0x000000FFu; // 80143DF0
  if (crb(c,1)) { goto L_80143DFC; } // 80143DF4
  c->r[0]=c->r[5]|c->r[5]; // 80143DF8
L_80143DFC:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80143DFC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80143E00
  cmps(c,0,(int32_t)c->r[4],0); // 80143E04
  if (!crb(c,0)) { goto L_80143E14; } // 80143E08
  c->r[0]=0u+0x00000000u; // 80143E0C
  goto L_80143E24; // 80143E10
L_80143E14:;
  cmps(c,0,(int32_t)c->r[4],255); // 80143E14
  c->r[0]=0u+0x000000FFu; // 80143E18
  if (crb(c,1)) { goto L_80143E24; } // 80143E1C
  c->r[0]=c->r[4]|c->r[4]; // 80143E20
L_80143E24:;
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80143E24
  c->r[0]=R32(c->r[1]+0x00000008u); // 80143E28
  W32(c->r[3]+0x00000000u,c->r[0]); // 80143E2C
  c->r[1]=c->r[1]+0x00000010u; // 80143E30
  return; // 80143E34
}

// __ct__Q34nw4r3lyt7TextBoxFPCQ44nw4r3lyt3res7TextBoxRCQ34nw4r3lyt11ResBlockSet
void f_80143E38(Ctx* __restrict c) {
  trace_call(0x80143E38u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80143E38
  c->r[0]=c->lr; // 80143E3C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80143E40
  c->r[11]=c->r[1]+0x00000040u; // 80143E44
  c->lr=0x80143E4Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80143E48
  c->r[28]=c->r[3]|c->r[3]; // 80143E4C
  c->r[29]=c->r[4]|c->r[4]; // 80143E50
  c->r[30]=c->r[5]|c->r[5]; // 80143E54
  c->lr=0x80143E5Cu; f_8014168C(c); // 80143E58
  c->r[3]=0u+0x802C0000u; // 80143E5C
  c->r[4]=0u+0x80140000u; // 80143E60
  c->r[3]=c->r[3]+0x00006578u; // 80143E64
  c->r[5]=0u+0x800D0000u; // 80143E68
  W32(c->r[28]+0x00000000u,c->r[3]); // 80143E6C
  c->r[3]=c->r[28]+0x000000DCu; // 80143E70
  c->r[4]=c->r[4]+0x00003828u; // 80143E74
  c->r[5]=c->r[5]+0x00002D0Cu; // 80143E78
  c->r[6]=0u+0x00000004u; // 80143E7C
  c->r[7]=0u+0x00000002u; // 80143E80
  c->lr=0x80143E88u; f_802528E4(c); // 80143E84
  c->r[0]=R16(c->r[29]+0x0000004Cu); // 80143E88
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80143E8C
  c->r[31]=rotl(c->r[0],31)&0x0000FFFFu; cr0(c,c->r[31]); // 80143E90
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[0]);} // 80143E94
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 80143E98
  if (crb(c,2)) { goto L_80143EA8; } // 80143E9C
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 80143EA0
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 80143EA4
L_80143EA8:;
  c->r[3]=0u+0x55550000u; // 80143EA8
  c->r[0]=R8(c->r[28]+0x00000100u); // 80143EAC
  c->r[8]=c->r[3]+0x00005556u; // 80143EB0
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80143EB4
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 80143EB8
  c->r[9]=0u+0x00000000u; // 80143EBC
  W32(c->r[28]+0x000000D8u,c->r[9]); // 80143EC0
  c->r[3]=c->r[28]+0x00000101u; // 80143EC4
  c->r[4]=0u+0x00000000u; // 80143EC8
  W16(c->r[28]+0x000000FCu,c->r[9]); // 80143ECC
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 80143ED0
  W16(c->r[28]+0x000000FEu,c->r[9]); // 80143ED4
  c->r[0]=c->r[5]+c->r[0]; // 80143ED8
  c->r[5]=0u+0x00000001u; // 80143EDC
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 80143EE0
  W32(c->r[28]+0x000000E4u,c->r[9]); // 80143EE4
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 80143EE8
  c->r[6]=c->r[0]-c->r[6]; // 80143EEC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80143EF0
  c->r[0]=c->r[6]+0x00000001u; // 80143EF4
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 80143EF8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80143EFC
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[7])>>32); // 80143F00
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[0]);} // 80143F04
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 80143F08
  c->r[0]=rotl(c->r[6],1)&0x00000001u; // 80143F0C
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[0]);} // 80143F10
  c->r[0]=c->r[6]+c->r[0]; // 80143F14
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 80143F18
  {uint32_t ea=c->r[28]+0x000000F4u; WF32(ea,c->f[0]);} // 80143F1C
  W32(c->r[28]+0x000000F8u,c->r[9]); // 80143F20
  c->r[0]=c->r[7]-c->r[0]; // 80143F24
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 80143F28
  c->r[0]=c->r[6]+0x00000003u; // 80143F2C
  W8(c->r[28]+0x00000100u,c->r[0]); // 80143F30
  c->lr=0x80143F38u; f_8000443C(c); // 80143F34
  cmps(c,0,(int32_t)c->r[31],0); // 80143F38
  if (crb(c,2)) { goto L_80143F58; } // 80143F3C
  c->r[12]=R32(c->r[28]+0x00000000u); // 80143F40
  c->r[3]=c->r[28]|c->r[28]; // 80143F44
  c->r[4]=c->r[31]|c->r[31]; // 80143F48
  c->r[12]=R32(c->r[12]+0x00000074u); // 80143F4C
  c->ctr=c->r[12]; // 80143F50
  if (true) { c->lr=0x80143F58u; dispatch(c,c->ctr); } // 80143F54
L_80143F58:;
  c->r[4]=R16(c->r[29]+0x0000004Eu); // 80143F58
  cmpu(c,0,c->r[4],0x00000002u); // 80143F5C
  if (crb(c,0)) { goto L_80143F9C; } // 80143F60
  c->r[0]=R32(c->r[28]+0x000000D8u); // 80143F64
  cmps(c,0,(int32_t)c->r[0],0); // 80143F68
  if (crb(c,2)) { goto L_80143F9C; } // 80143F6C
  c->r[12]=R32(c->r[28]+0x00000000u); // 80143F70
  c->r[4]=rotl(c->r[4],31)&0x00007FFFu; // 80143F74
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80143F78
  c->r[4]=R32(c->r[29]+0x00000058u); // 80143F7C
  c->r[12]=R32(c->r[12]+0x00000080u); // 80143F80
  c->r[3]=c->r[28]|c->r[28]; // 80143F84
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 80143F88
  c->r[5]=0u+0x00000000u; // 80143F8C
  c->r[4]=c->r[29]+c->r[4]; // 80143F90
  c->ctr=c->r[12]; // 80143F94
  if (true) { c->lr=0x80143F9Cu; dispatch(c,c->ctr); } // 80143F98
L_80143F9C:;
  c->r[0]=R8(c->r[29]+0x00000055u); // 80143F9C
  c->r[7]=R32(c->r[29]+0x0000005Cu); // 80143FA0
  c->r[6]=R32(c->r[29]+0x00000060u); // 80143FA4
  {uint32_t ea=c->r[29]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 80143FA8
  {uint32_t ea=c->r[29]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 80143FAC
  c->r[5]=R8(c->r[29]+0x00000054u); // 80143FB0
  c->r[4]=R8(c->r[28]+0x00000101u); // 80143FB4
  c->r[4]=(rotl(c->r[0],5)&0x00000060u)|(c->r[4]&~0x00000060u); // 80143FB8
  {uint32_t ea=c->r[29]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80143FBC
  {uint32_t ea=c->r[29]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 80143FC0
  c->r[0]=R16(c->r[29]+0x00000052u); // 80143FC4
  c->r[3]=R32(c->r[30]+0x00000004u); // 80143FC8
  W32(c->r[28]+0x000000DCu,c->r[7]); // 80143FCC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80143FD0
  c->r[7]=c->r[3]+0x0000000Cu; // 80143FD4
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80143FD8
  W32(c->r[28]+0x000000E0u,c->r[6]); // 80143FDC
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[3]);} // 80143FE0
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[2]);} // 80143FE4
  W8(c->r[28]+0x00000100u,c->r[5]); // 80143FE8
  W8(c->r[28]+0x00000101u,c->r[4]); // 80143FEC
  {uint32_t ea=c->r[28]+0x000000F4u; WF32(ea,c->f[1]);} // 80143FF0
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[0]);} // 80143FF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80143FF8
  c->r[0]=R32(c->r[7]+c->r[0]); // 80143FFC
  c->r[12]=R32(c->r[12]+0x00000010u); // 80144000
  c->r[31]=c->r[7]+c->r[0]; // 80144004
  c->r[4]=c->r[31]|c->r[31]; // 80144008
  c->ctr=c->r[12]; // 8014400C
  if (true) { c->lr=0x80144014u; dispatch(c,c->ctr); } // 80144010
  cmps(c,0,(int32_t)c->r[3],0); // 80144014
  if (crb(c,2)) { goto L_80144024; } // 80144018
  W32(c->r[28]+0x000000E4u,c->r[3]); // 8014401C
  goto L_801440A4; // 80144020
L_80144024:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80144024
  c->r[4]=0u+0x666F0000u; // 80144028
  c->r[5]=c->r[31]|c->r[31]; // 8014402C
  c->r[6]=0u+0x00000000u; // 80144030
  c->r[12]=R32(c->r[3]+0x00000000u); // 80144034
  c->r[4]=c->r[4]+0x00006E74u; // 80144038
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8014403C
  c->ctr=c->r[12]; // 80144040
  if (true) { c->lr=0x80144048u; dispatch(c,c->ctr); } // 80144044
  cmps(c,0,(int32_t)c->r[3],0); // 80144048
  c->r[27]=c->r[3]|c->r[3]; // 8014404C
  if (crb(c,2)) { goto L_801440A4; } // 80144050
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80144054
  c->r[4]=0u+0x0000001Cu; // 80144058
  c->lr=0x80144060u; f_8017C1A4(c); // 8014405C
  cmps(c,0,(int32_t)c->r[3],0); // 80144060
  if (crb(c,2)) { goto L_8014407C; } // 80144064
  c->r[31]=c->r[3]|c->r[3]; // 80144068
  if (crb(c,2)) { goto L_80144080; } // 8014406C
  c->lr=0x80144074u; f_800F7CD8(c); // 80144070
  c->r[31]=c->r[3]|c->r[3]; // 80144074
  goto L_80144080; // 80144078
L_8014407C:;
  c->r[31]=0u+0x00000000u; // 8014407C
L_80144080:;
  cmps(c,0,(int32_t)c->r[31],0); // 80144080
  if (crb(c,2)) { goto L_801440A4; } // 80144084
  c->r[3]=c->r[31]|c->r[31]; // 80144088
  c->r[4]=c->r[27]|c->r[27]; // 8014408C
  c->lr=0x80144094u; f_800F7D6C(c); // 80144090
  c->r[0]=R8(c->r[28]+0x00000101u); // 80144094
  W32(c->r[28]+0x000000E4u,c->r[31]); // 80144098
  c->r[0]=c->r[0]|0x00000080u; // 8014409C
  W8(c->r[28]+0x00000101u,c->r[0]); // 801440A0
L_801440A4:;
  c->r[0]=R16(c->r[29]+0x00000050u); // 801440A4
  c->r[4]=0u+0x0000005Cu; // 801440A8
  c->r[7]=R32(c->r[30]+0x00000008u); // 801440AC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801440B0
  c->r[3]=R32(c->r[30]+0x00000000u); // 801440B4
  c->r[6]=c->r[7]+c->r[0]; // 801440B8
  c->r[5]=R32(c->r[30]+0x00000004u); // 801440BC
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 801440C0
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801440C4
  W32(c->r[1]+0x00000010u,c->r[3]); // 801440C8
  c->r[27]=c->r[7]+c->r[6]; // 801440CC
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 801440D0
  W32(c->r[1]+0x00000014u,c->r[5]); // 801440D4
  W32(c->r[1]+0x00000018u,c->r[7]); // 801440D8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801440DC
  c->lr=0x801440E4u; f_8017C1A4(c); // 801440E0
  cmps(c,0,(int32_t)c->r[3],0); // 801440E4
  if (crb(c,2)) { goto L_80144100; } // 801440E8
  if (crb(c,2)) { goto L_80144104; } // 801440EC
  c->r[4]=c->r[27]|c->r[27]; // 801440F0
  c->r[5]=c->r[1]+0x00000010u; // 801440F4
  c->lr=0x801440FCu; f_80147F60(c); // 801440F8
  goto L_80144104; // 801440FC
L_80144100:;
  c->r[3]=0u+0x00000000u; // 80144100
L_80144104:;
  W32(c->r[28]+0x00000028u,c->r[3]); // 80144104
  c->r[11]=c->r[1]+0x00000040u; // 80144108
  c->r[3]=c->r[28]|c->r[28]; // 8014410C
  c->lr=0x80144114u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80144110
  c->r[0]=R32(c->r[1]+0x00000044u); // 80144114
  c->lr=c->r[0]; // 80144118
  c->r[1]=c->r[1]+0x00000040u; // 8014411C
  return; // 80144120
}

// __dt__Q34nw4r3lyt7TextBoxFv
void f_80144124(Ctx* __restrict c) {
  trace_call(0x80144124u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80144124
  c->r[0]=c->lr; // 80144128
  cmps(c,0,(int32_t)c->r[3],0); // 8014412C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80144130
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80144134
  W32(c->r[1]+0x00000038u,c->r[30]); // 80144138
  c->r[30]=c->r[4]|c->r[4]; // 8014413C
  W32(c->r[1]+0x00000034u,c->r[29]); // 80144140
  c->r[29]=c->r[3]|c->r[3]; // 80144144
  if (crb(c,2)) { goto L_801442A4; } // 80144148
  c->r[0]=R8(c->r[3]+0x00000101u); // 8014414C
  c->r[4]=0u+0x802C0000u; // 80144150
  c->r[4]=c->r[4]+0x00006578u; // 80144154
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80144158
  W32(c->r[3]+0x00000000u,c->r[4]); // 8014415C
  if (crb(c,2)) { goto L_801441A0; } // 80144160
  c->r[31]=R32(c->r[3]+0x000000E4u); // 80144164
  cmps(c,0,(int32_t)c->r[31],0); // 80144168
  if (crb(c,2)) { goto L_80144194; } // 8014416C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80144170
  c->r[3]=c->r[31]|c->r[31]; // 80144174
  c->r[4]=0u+0xFFFFFFFFu; // 80144178
  c->r[12]=R32(c->r[12]+0x00000008u); // 8014417C
  c->ctr=c->r[12]; // 80144180
  if (true) { c->lr=0x80144188u; dispatch(c,c->ctr); } // 80144184
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80144188
  c->r[4]=c->r[31]|c->r[31]; // 8014418C
  c->lr=0x80144194u; f_8017C1B4(c); // 80144190
L_80144194:;
  c->r[0]=R8(c->r[29]+0x00000101u); // 80144194
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 80144198
  W8(c->r[29]+0x00000101u,c->r[0]); // 8014419C
L_801441A0:;
  c->r[0]=0u+0x00000000u; // 801441A0
  W32(c->r[29]+0x000000E4u,c->r[0]); // 801441A4
  goto L_80144200; // 801441A8
  if (true) { c->lr=0x801441B0u; dispatch(c,c->ctr); } // 801441AC
  c->r[0]=c->r[3]^0x80000000u; // 801441B0
  c->r[3]=R32(c->r[29]+0x000000E4u); // 801441B4
  c->r[4]=0u+0x43300000u; // 801441B8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801441BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801441C0
  W32(c->r[1]+0x00000018u,c->r[4]); // 801441C4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801441C8
  c->ctr=c->r[12]; // 801441CC
  if (true) { c->lr=0x801441D4u; dispatch(c,c->ctr); } // 801441D0
  c->r[0]=c->r[3]^0x80000000u; // 801441D4
  W32(c->r[1]+0x00000020u,c->r[4]); // 801441D8
  {uint32_t ea=c->r[2]+0xFFFFA8A8u; c->f[1]=RF64(ea);} // 801441DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801441E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 801441E4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801441E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801441EC
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[2]);} // 801441F0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801441F4
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 801441F8
  goto L_80144214; // 801441FC
L_80144200:;
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80144200
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80144204
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80144208
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 8014420C
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[0]);} // 80144210
L_80144214:;
  c->r[31]=R32(c->r[29]+0x00000028u); // 80144214
  cmps(c,1,(int32_t)c->r[31],0); // 80144218
  if (crb(c,6)) { goto L_8014425C; } // 8014421C
  c->r[0]=R8(c->r[31]+0x00000059u); // 80144220
  cmps(c,0,(int32_t)c->r[0],0); // 80144224
  if (!crb(c,2)) { goto L_8014425C; } // 80144228
  if (crb(c,6)) { goto L_80144254; } // 8014422C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80144230
  c->r[3]=c->r[31]|c->r[31]; // 80144234
  c->r[4]=0u+0xFFFFFFFFu; // 80144238
  c->r[12]=R32(c->r[12]+0x00000008u); // 8014423C
  c->ctr=c->r[12]; // 80144240
  if (true) { c->lr=0x80144248u; dispatch(c,c->ctr); } // 80144244
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80144248
  c->r[4]=c->r[31]|c->r[31]; // 8014424C
  c->lr=0x80144254u; f_8017C1B4(c); // 80144250
L_80144254:;
  c->r[0]=0u+0x00000000u; // 80144254
  W32(c->r[29]+0x00000028u,c->r[0]); // 80144258
L_8014425C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8014425C
  c->r[3]=c->r[29]|c->r[29]; // 80144260
  c->r[12]=R32(c->r[12]+0x00000078u); // 80144264
  c->ctr=c->r[12]; // 80144268
  if (true) { c->lr=0x80144270u; dispatch(c,c->ctr); } // 8014426C
  c->r[4]=0u+0x800D0000u; // 80144270
  c->r[3]=c->r[29]+0x000000DCu; // 80144274
  c->r[4]=c->r[4]+0x00002D0Cu; // 80144278
  c->r[5]=0u+0x00000004u; // 8014427C
  c->r[6]=0u+0x00000002u; // 80144280
  c->lr=0x80144288u; f_802529DC(c); // 80144284
  c->r[3]=c->r[29]|c->r[29]; // 80144288
  c->r[4]=0u+0x00000000u; // 8014428C
  c->lr=0x80144294u; f_801417C4(c); // 80144290
  cmps(c,0,(int32_t)c->r[30],0); // 80144294
  if (!crb(c,1)) { goto L_801442A4; } // 80144298
  c->r[3]=c->r[29]|c->r[29]; // 8014429C
  c->lr=0x801442A4u; f_802525B0(c); // 801442A0
L_801442A4:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801442A4
  c->r[3]=c->r[29]|c->r[29]; // 801442A8
  c->r[30]=R32(c->r[1]+0x00000038u); // 801442AC
  c->r[29]=R32(c->r[1]+0x00000034u); // 801442B0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801442B4
  c->lr=c->r[0]; // 801442B8
  c->r[1]=c->r[1]+0x00000040u; // 801442BC
  return; // 801442C0
}

// GetTextColor__Q34nw4r3lyt7TextBoxCFUl
void f_801442C4(Ctx* __restrict c) {
  trace_call(0x801442C4u);
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 801442C4
  goto L_801442CC; // 801442C8
L_801442CC:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801442CC
  c->r[7]=c->r[4]+c->r[0]; // 801442D0
  c->r[6]=R8(c->r[7]+0x000000DCu); // 801442D4
  c->r[5]=R8(c->r[7]+0x000000DDu); // 801442D8
  c->r[4]=R8(c->r[7]+0x000000DEu); // 801442DC
  c->r[0]=R8(c->r[7]+0x000000DFu); // 801442E0
  W8(c->r[3]+0x00000000u,c->r[6]); // 801442E4
  W8(c->r[3]+0x00000001u,c->r[5]); // 801442E8
  W8(c->r[3]+0x00000002u,c->r[4]); // 801442EC
  W8(c->r[3]+0x00000003u,c->r[0]); // 801442F0
  return; // 801442F4
}

// SetVtxColor__Q34nw4r3lyt7TextBoxFUlQ34nw4r2ut5Color
void f_801442F8(Ctx* __restrict c) {
  trace_call(0x801442F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801442F8
  c->r[0]=c->lr; // 801442FC
  c->r[8]=R8(c->r[5]+0x00000000u); // 80144300
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 80144304
  W32(c->r[1]+0x00000014u,c->r[0]); // 80144308
  c->r[7]=R8(c->r[5]+0x00000001u); // 8014430C
  c->r[6]=R8(c->r[5]+0x00000002u); // 80144310
  c->r[0]=R8(c->r[5]+0x00000003u); // 80144314
  c->r[5]=c->r[1]+0x00000008u; // 80144318
  W8(c->r[1]+0x00000008u,c->r[8]); // 8014431C
  W8(c->r[1]+0x00000009u,c->r[7]); // 80144320
  W8(c->r[1]+0x0000000Au,c->r[6]); // 80144324
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80144328
  c->lr=0x80144330u; f_80144340(c); // 8014432C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80144330
  c->lr=c->r[0]; // 80144334
  c->r[1]=c->r[1]+0x00000010u; // 80144338
  return; // 8014433C
}

// SetTextColor__Q34nw4r3lyt7TextBoxFUlQ34nw4r2ut5Color
void f_80144340(Ctx* __restrict c) {
  trace_call(0x80144340u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80144340
  c->r[6]=R8(c->r[5]+0x00000000u); // 80144344
  c->r[4]=c->r[3]+c->r[0]; // 80144348
  c->r[0]=R8(c->r[5]+0x00000001u); // 8014434C
  W8(c->r[4]+0x000000DCu,c->r[6]); // 80144350
  c->r[3]=R8(c->r[5]+0x00000002u); // 80144354
  W8(c->r[4]+0x000000DDu,c->r[0]); // 80144358
  c->r[0]=R8(c->r[5]+0x00000003u); // 8014435C
  W8(c->r[4]+0x000000DEu,c->r[3]); // 80144360
  W8(c->r[4]+0x000000DFu,c->r[0]); // 80144364
  return; // 80144368
}

// GetVtxColorElement__Q34nw4r3lyt7TextBoxCFUl
void f_8014436C(Ctx* __restrict c) {
  trace_call(0x8014436Cu);
  c->r[5]=rotl(c->r[4],31)&0x7FFFFFFCu; // 8014436C
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80144370
  c->r[3]=c->r[3]+c->r[5]; // 80144374
  c->r[3]=c->r[3]+c->r[0]; // 80144378
  c->r[3]=R8(c->r[3]+0x000000DCu); // 8014437C
  return; // 80144380
}

// SetVtxColorElement__Q34nw4r3lyt7TextBoxFUlUc
void f_80144384(Ctx* __restrict c) {
  trace_call(0x80144384u);
  c->r[6]=rotl(c->r[4],31)&0x7FFFFFFCu; // 80144384
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80144388
  c->r[3]=c->r[3]+c->r[6]; // 8014438C
  c->r[3]=c->r[3]+c->r[0]; // 80144390
  W8(c->r[3]+0x000000DCu,c->r[5]); // 80144394
  return; // 80144398
}

// DrawSelf__Q34nw4r3lyt7TextBoxFRCQ34nw4r3lyt8DrawInfo
void f_8014439C(Ctx* __restrict c) {
  trace_call(0x8014439Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014439C
  c->r[0]=c->lr; // 801443A0
  W32(c->r[1]+0x00000204u,c->r[0]); // 801443A4
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[31]);} // 801443A8
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,31,ea,0,0);} // 801443AC
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[30]);} // 801443B0
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,30,ea,0,0);} // 801443B4
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[29]);} // 801443B8
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,29,ea,0,0);} // 801443BC
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[28]);} // 801443C0
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,28,ea,0,0);} // 801443C4
  c->r[11]=c->r[1]+0x000001C0u; // 801443C8
  c->lr=0x801443D0u; f_80252B70(c); // 801443CC
  c->r[0]=R32(c->r[3]+0x000000D8u); // 801443D0
  c->r[29]=c->r[3]|c->r[3]; // 801443D4
  cmps(c,0,(int32_t)c->r[0],0); // 801443D8
  if (crb(c,2)) { goto L_801448CC; } // 801443DC
  c->r[0]=R32(c->r[3]+0x000000E4u); // 801443E0
  cmps(c,0,(int32_t)c->r[0],0); // 801443E4
  if (crb(c,2)) { goto L_801448CC; } // 801443E8
  c->r[0]=R32(c->r[3]+0x00000028u); // 801443EC
  cmps(c,0,(int32_t)c->r[0],0); // 801443F0
  if (!crb(c,2)) { goto L_801443FC; } // 801443F4
  goto L_801448CC; // 801443F8
L_801443FC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801443FC
  c->r[12]=R32(c->r[12]+0x00000070u); // 80144400
  c->ctr=c->r[12]; // 80144404
  if (true) { c->lr=0x8014440Cu; dispatch(c,c->ctr); } // 80144408
  c->r[3]=c->r[1]+0x000000CCu; // 8014440C
  c->lr=0x80144414u; f_800FB8FC(c); // 80144410
  c->r[4]=c->r[29]|c->r[29]; // 80144414
  c->r[3]=c->r[1]+0x00000058u; // 80144418
  c->r[5]=c->r[1]+0x000000CCu; // 8014441C
  c->lr=0x80144424u; f_8014505C(c); // 80144420
  c->r[0]=R8(c->r[29]+0x000000DCu); // 80144424
  c->r[3]=c->r[1]+0x00000030u; // 80144428
  c->r[4]=c->r[1]+0x00000020u; // 8014442C
  W8(c->r[1]+0x00000020u,c->r[0]); // 80144430
  c->r[0]=R8(c->r[29]+0x000000DDu); // 80144434
  W8(c->r[1]+0x00000021u,c->r[0]); // 80144438
  c->r[0]=R8(c->r[29]+0x000000DEu); // 8014443C
  W8(c->r[1]+0x00000022u,c->r[0]); // 80144440
  c->r[0]=R8(c->r[29]+0x000000DFu); // 80144444
  W8(c->r[1]+0x00000023u,c->r[0]); // 80144448
  c->r[5]=R8(c->r[29]+0x000000B9u); // 8014444C
  c->lr=0x80144454u; f_8014CA54(c); // 80144450
  c->r[0]=R8(c->r[29]+0x000000E0u); // 80144454
  c->r[3]=c->r[1]+0x0000002Cu; // 80144458
  c->r[4]=c->r[1]+0x0000001Cu; // 8014445C
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 80144460
  c->r[0]=R8(c->r[29]+0x000000E1u); // 80144464
  W8(c->r[1]+0x0000001Du,c->r[0]); // 80144468
  c->r[0]=R8(c->r[29]+0x000000E2u); // 8014446C
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 80144470
  c->r[0]=R8(c->r[29]+0x000000E3u); // 80144474
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 80144478
  c->r[5]=R8(c->r[29]+0x000000B9u); // 8014447C
  c->lr=0x80144484u; f_8014CA54(c); // 80144480
  c->r[3]=R32(c->r[1]+0x00000030u); // 80144484
  c->r[4]=0u+0x00000000u; // 80144488
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8014448C
  cmpu(c,0,c->r[3],c->r[0]); // 80144490
  if (crb(c,2)) { goto L_8014449C; } // 80144494
  c->r[4]=0u+0x00000002u; // 80144498
L_8014449C:;
  W32(c->r[1]+0x000000ECu,c->r[4]); // 8014449C
  c->r[3]=c->r[1]+0x000000CCu; // 801444A0
  c->lr=0x801444A8u; f_800F926C(c); // 801444A4
  c->r[5]=R32(c->r[1]+0x00000030u); // 801444A8
  c->r[3]=c->r[1]+0x000000CCu; // 801444AC
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801444B0
  c->r[4]=c->r[1]+0x00000018u; // 801444B4
  W32(c->r[1]+0x00000018u,c->r[5]); // 801444B8
  c->r[5]=c->r[1]+0x00000014u; // 801444BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801444C0
  c->lr=0x801444C8u; f_80144904(c); // 801444C4
  c->r[6]=R32(c->r[29]+0x00000028u); // 801444C8
  c->r[3]=c->r[1]+0x00000028u; // 801444CC
  c->r[4]=c->r[1]+0x00000040u; // 801444D0
  c->r[5]=R16(c->r[6]+0x00000010u); // 801444D4
  c->r[0]=R16(c->r[6]+0x00000012u); // 801444D8
  W16(c->r[1]+0x00000040u,c->r[5]); // 801444DC
  W16(c->r[1]+0x00000042u,c->r[0]); // 801444E0
  c->r[5]=R16(c->r[6]+0x00000014u); // 801444E4
  c->r[0]=R16(c->r[6]+0x00000016u); // 801444E8
  W16(c->r[1]+0x00000044u,c->r[5]); // 801444EC
  W16(c->r[1]+0x00000046u,c->r[0]); // 801444F0
  c->lr=0x801444F8u; f_80143D84(c); // 801444F4
  c->r[6]=R32(c->r[29]+0x00000028u); // 801444F8
  c->r[3]=c->r[1]+0x00000024u; // 801444FC
  c->r[4]=c->r[1]+0x00000038u; // 80144500
  c->r[5]=R16(c->r[6]+0x00000018u); // 80144504
  c->r[0]=R16(c->r[6]+0x0000001Au); // 80144508
  W16(c->r[1]+0x00000038u,c->r[5]); // 8014450C
  W16(c->r[1]+0x0000003Au,c->r[0]); // 80144510
  c->r[5]=R16(c->r[6]+0x0000001Cu); // 80144514
  c->r[0]=R16(c->r[6]+0x0000001Eu); // 80144518
  W16(c->r[1]+0x0000003Cu,c->r[5]); // 8014451C
  W16(c->r[1]+0x0000003Eu,c->r[0]); // 80144520
  c->lr=0x80144528u; f_80143D84(c); // 80144524
  c->r[5]=R32(c->r[1]+0x00000028u); // 80144528
  c->r[3]=c->r[1]+0x000000CCu; // 8014452C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80144530
  c->r[4]=c->r[1]+0x00000010u; // 80144534
  W32(c->r[1]+0x00000010u,c->r[5]); // 80144538
  c->r[5]=c->r[1]+0x0000000Cu; // 8014453C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80144540
  c->lr=0x80144548u; f_800F8200(c); // 80144544
  c->r[3]=c->r[1]+0x000000CCu; // 80144548
  c->lr=0x80144550u; f_800F8284(c); // 8014454C
  c->r[3]=0u+0x00000007u; // 80144550
  c->r[4]=0u+0x00000000u; // 80144554
  c->r[5]=0u+0x00000000u; // 80144558
  c->r[6]=0u+0x00000007u; // 8014455C
  c->r[7]=0u+0x00000000u; // 80144560
  c->lr=0x80144568u; f_8016AA3C(c); // 80144564
  c->r[0]=R8(c->r[29]+0x00000101u); // 80144568
  c->r[0]=rotl(c->r[0],27)&0x00000003u; // 8014456C
  cmps(c,0,(int32_t)c->r[0],2); // 80144570
  if (crb(c,2)) { goto L_801445F8; } // 80144574
  if (!crb(c,0)) { goto L_8014458C; } // 80144578
  cmps(c,0,(int32_t)c->r[0],0); // 8014457C
  if (crb(c,2)) { goto L_80144598; } // 80144580
  if (!crb(c,0)) { goto L_801445F0; } // 80144584
  goto L_80144598; // 80144588
L_8014458C:;
  cmps(c,0,(int32_t)c->r[0],4); // 8014458C
  if (!crb(c,0)) { goto L_80144598; } // 80144590
  goto L_80144600; // 80144594
L_80144598:;
  c->r[3]=0u+0x55550000u; // 80144598
  c->r[4]=R8(c->r[29]+0x00000100u); // 8014459C
  c->r[0]=c->r[3]+0x00005556u; // 801445A0
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 801445A4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801445A8
  c->r[0]=c->r[3]+c->r[0]; // 801445AC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801445B0
  c->r[0]=c->r[4]-c->r[0]; // 801445B4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801445B8
  cmps(c,0,(int32_t)c->r[0],1); // 801445BC
  if (crb(c,2)) { goto L_801445E0; } // 801445C0
  if (!crb(c,0)) { goto L_801445CC; } // 801445C4
  goto L_801445D8; // 801445C8
L_801445CC:;
  cmps(c,0,(int32_t)c->r[0],3); // 801445CC
  if (!crb(c,0)) { goto L_801445D8; } // 801445D0
  goto L_801445E8; // 801445D4
L_801445D8:;
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[30]=c->ps1[30]=RF32(ea);} // 801445D8
  goto L_80144604; // 801445DC
L_801445E0:;
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[30]=c->ps1[30]=RF32(ea);} // 801445E0
  goto L_80144604; // 801445E4
L_801445E8:;
  {uint32_t ea=c->r[2]+0xFFFFA8B4u; c->f[30]=c->ps1[30]=RF32(ea);} // 801445E8
  goto L_80144604; // 801445EC
L_801445F0:;
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[30]=c->ps1[30]=RF32(ea);} // 801445F0
  goto L_80144604; // 801445F4
L_801445F8:;
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[30]=c->ps1[30]=RF32(ea);} // 801445F8
  goto L_80144604; // 801445FC
L_80144600:;
  {uint32_t ea=c->r[2]+0xFFFFA8B4u; c->f[30]=c->ps1[30]=RF32(ea);} // 80144600
L_80144604:;
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80144604
  c->r[31]=R32(c->r[29]+0x000000D8u); // 80144608
  c->f[3]=-c->f[0]; // 8014460C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 80144610
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80144614
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80144618
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[2]);} // 8014461C
  c->f[29]=c->ps1[29]=S(c->f[1]-c->f[0]); // 80144620
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[3]);} // 80144624
  c->r[30]=R16(c->r[29]+0x000000FEu); // 80144628
  cmps(c,0,(int32_t)c->r[30],0); // 8014462C
  if (!crb(c,1)) { goto L_801448C0; } // 80144630
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[31]=c->ps1[31]=RF32(ea);} // 80144634
  goto L_801448B8; // 80144638
L_8014463C:;
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8014463C
  c->r[0]=R32(c->r[1]+0x000000F8u); // 80144640
  c->r[15]=R8(c->r[1]+0x000000EBu); // 80144644
  W32(c->r[1]+0x00000094u,c->r[0]); // 80144648
  c->r[0]=R8(c->r[1]+0x000000E9u); // 8014464C
  W32(c->r[1]+0x00000168u,c->r[15]); // 80144650
  c->r[15]=R32(c->r[1]+0x000000ECu); // 80144654
  W8(c->r[1]+0x00000085u,c->r[0]); // 80144658
  c->r[0]=R32(c->r[1]+0x00000168u); // 8014465C
  W32(c->r[1]+0x00000130u,c->r[15]); // 80144660
  c->r[15]=R32(c->r[1]+0x000000F0u); // 80144664
  W8(c->r[1]+0x00000087u,c->r[0]); // 80144668
  c->r[0]=R32(c->r[1]+0x00000130u); // 8014466C
  W32(c->r[1]+0x00000134u,c->r[15]); // 80144670
  c->r[15]=R32(c->r[1]+0x000000F4u); // 80144674
  W32(c->r[1]+0x00000088u,c->r[0]); // 80144678
  c->r[0]=R32(c->r[1]+0x00000134u); // 8014467C
  W32(c->r[1]+0x00000138u,c->r[15]); // 80144680
  c->r[15]=R32(c->r[1]+0x000000FCu); // 80144684
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 80144688
  c->r[0]=R32(c->r[1]+0x00000138u); // 8014468C
  W32(c->r[1]+0x0000013Cu,c->r[15]); // 80144690
  c->r[15]=R32(c->r[1]+0x00000100u); // 80144694
  W32(c->r[1]+0x00000090u,c->r[0]); // 80144698
  c->r[0]=R32(c->r[1]+0x0000013Cu); // 8014469C
  W32(c->r[1]+0x00000140u,c->r[15]); // 801446A0
  c->r[15]=R32(c->r[1]+0x00000104u); // 801446A4
  W32(c->r[1]+0x00000098u,c->r[0]); // 801446A8
  c->r[0]=R32(c->r[1]+0x00000140u); // 801446AC
  W32(c->r[1]+0x00000144u,c->r[15]); // 801446B0
  c->r[15]=R32(c->r[1]+0x00000108u); // 801446B4
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 801446B8
  c->r[0]=R32(c->r[1]+0x00000144u); // 801446BC
  W32(c->r[1]+0x00000148u,c->r[15]); // 801446C0
  c->r[15]=R16(c->r[1]+0x0000010Cu); // 801446C4
  W32(c->r[1]+0x000000A0u,c->r[0]); // 801446C8
  c->r[0]=R32(c->r[1]+0x00000148u); // 801446CC
  W32(c->r[1]+0x0000014Cu,c->r[15]); // 801446D0
  c->r[15]=R8(c->r[1]+0x0000010Eu); // 801446D4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801446D8
  c->r[0]=R32(c->r[1]+0x0000014Cu); // 801446DC
  W32(c->r[1]+0x00000150u,c->r[15]); // 801446E0
  c->r[15]=R8(c->r[1]+0x0000010Fu); // 801446E4
  W16(c->r[1]+0x000000A8u,c->r[0]); // 801446E8
  c->r[0]=R32(c->r[1]+0x00000150u); // 801446EC
  W32(c->r[1]+0x00000154u,c->r[15]); // 801446F0
  c->r[15]=R32(c->r[1]+0x00000114u); // 801446F4
  W8(c->r[1]+0x000000AAu,c->r[0]); // 801446F8
  c->r[0]=R32(c->r[1]+0x00000154u); // 801446FC
  W32(c->r[1]+0x00000158u,c->r[15]); // 80144700
  c->r[15]=R32(c->r[1]+0x00000124u); // 80144704
  W8(c->r[1]+0x000000ABu,c->r[0]); // 80144708
  c->r[0]=R32(c->r[1]+0x00000158u); // 8014470C
  W32(c->r[1]+0x0000015Cu,c->r[15]); // 80144710
  c->r[15]=R32(c->r[1]+0x00000128u); // 80144714
  W32(c->r[1]+0x000000B0u,c->r[0]); // 80144718
  c->r[0]=R32(c->r[1]+0x0000015Cu); // 8014471C
  W32(c->r[1]+0x00000160u,c->r[15]); // 80144720
  c->r[15]=R32(c->r[1]+0x0000012Cu); // 80144724
  W32(c->r[1]+0x000000C0u,c->r[0]); // 80144728
  c->r[0]=R32(c->r[1]+0x00000160u); // 8014472C
  c->r[16]=R32(c->r[1]+0x000000CCu); // 80144730
  c->r[17]=R32(c->r[1]+0x000000D0u); // 80144734
  c->r[18]=R8(c->r[1]+0x000000D4u); // 80144738
  c->r[19]=R8(c->r[1]+0x000000D5u); // 8014473C
  c->r[20]=R8(c->r[1]+0x000000D6u); // 80144740
  c->r[21]=R8(c->r[1]+0x000000D7u); // 80144744
  c->r[22]=R8(c->r[1]+0x000000D8u); // 80144748
  c->r[23]=R8(c->r[1]+0x000000D9u); // 8014474C
  c->r[24]=R8(c->r[1]+0x000000DAu); // 80144750
  c->r[25]=R8(c->r[1]+0x000000DBu); // 80144754
  c->r[26]=R8(c->r[1]+0x000000DCu); // 80144758
  c->r[27]=R8(c->r[1]+0x000000DDu); // 8014475C
  c->r[28]=R8(c->r[1]+0x000000DEu); // 80144760
  c->r[12]=R8(c->r[1]+0x000000DFu); // 80144764
  c->r[11]=R8(c->r[1]+0x000000E0u); // 80144768
  c->r[10]=R8(c->r[1]+0x000000E1u); // 8014476C
  c->r[9]=R8(c->r[1]+0x000000E2u); // 80144770
  c->r[8]=R8(c->r[1]+0x000000E3u); // 80144774
  c->r[7]=R8(c->r[1]+0x000000E4u); // 80144778
  c->r[6]=R8(c->r[1]+0x000000E5u); // 8014477C
  c->r[5]=R8(c->r[1]+0x000000E6u); // 80144780
  c->r[4]=R8(c->r[1]+0x000000E7u); // 80144784
  c->r[3]=R8(c->r[1]+0x000000E8u); // 80144788
  c->r[14]=R8(c->r[1]+0x000000EAu); // 8014478C
  {uint32_t ea=c->r[1]+0x00000110u; c->f[4]=c->ps1[4]=RF32(ea);} // 80144790
  {uint32_t ea=c->r[1]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 80144794
  {uint32_t ea=c->r[1]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80144798
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014479C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801447A0
  c->r[0]=c->r[15]|c->r[15]; // 801447A4
  W32(c->r[1]+0x00000164u,c->r[15]); // 801447A8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[31]);} // 801447AC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[31]);} // 801447B0
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[31]);} // 801447B4
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[31]);} // 801447B8
  W32(c->r[1]+0x00000068u,c->r[16]); // 801447BC
  W32(c->r[1]+0x0000006Cu,c->r[17]); // 801447C0
  W8(c->r[1]+0x00000070u,c->r[18]); // 801447C4
  W8(c->r[1]+0x00000071u,c->r[19]); // 801447C8
  W8(c->r[1]+0x00000072u,c->r[20]); // 801447CC
  W8(c->r[1]+0x00000073u,c->r[21]); // 801447D0
  W8(c->r[1]+0x00000074u,c->r[22]); // 801447D4
  W8(c->r[1]+0x00000075u,c->r[23]); // 801447D8
  W8(c->r[1]+0x00000076u,c->r[24]); // 801447DC
  W8(c->r[1]+0x00000077u,c->r[25]); // 801447E0
  W8(c->r[1]+0x00000078u,c->r[26]); // 801447E4
  W8(c->r[1]+0x00000079u,c->r[27]); // 801447E8
  W8(c->r[1]+0x0000007Au,c->r[28]); // 801447EC
  W8(c->r[1]+0x0000007Bu,c->r[12]); // 801447F0
  W8(c->r[1]+0x0000007Cu,c->r[11]); // 801447F4
  W8(c->r[1]+0x0000007Du,c->r[10]); // 801447F8
  W8(c->r[1]+0x0000007Eu,c->r[9]); // 801447FC
  W8(c->r[1]+0x0000007Fu,c->r[8]); // 80144800
  W8(c->r[1]+0x00000080u,c->r[7]); // 80144804
  W8(c->r[1]+0x00000081u,c->r[6]); // 80144808
  W8(c->r[1]+0x00000082u,c->r[5]); // 8014480C
  W8(c->r[1]+0x00000083u,c->r[4]); // 80144810
  W8(c->r[1]+0x00000084u,c->r[3]); // 80144814
  W8(c->r[1]+0x00000086u,c->r[14]); // 80144818
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[4]);} // 8014481C
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[3]);} // 80144820
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[2]);} // 80144824
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 80144828
  W32(c->r[1]+0x000000C8u,c->r[0]); // 8014482C
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[31]);} // 80144830
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[31]);} // 80144834
  c->r[5]=c->r[31]|c->r[31]; // 80144838
  c->r[6]=c->r[30]|c->r[30]; // 8014483C
  c->r[3]=c->r[1]+0x00000048u; // 80144840
  c->r[4]=c->r[1]+0x00000068u; // 80144844
  c->r[7]=c->r[1]+0x00000008u; // 80144848
  c->lr=0x80144850u; f_80144948(c); // 8014484C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80144850
  c->r[14]=c->r[3]|c->r[3]; // 80144854
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80144858
  c->r[3]=c->r[1]+0x00000068u; // 8014485C
  c->r[4]=0u+0xFFFFFFFFu; // 80144860
  c->f[28]=c->ps1[28]=S(c->f[1]-c->f[0]); // 80144864
  c->lr=0x8014486Cu; f_800FB958(c); // 80144868
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[28]); // 8014486C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80144870
  c->r[4]=c->r[31]|c->r[31]; // 80144874
  c->r[5]=c->r[14]|c->r[14]; // 80144878
  c->r[3]=c->r[1]+0x000000CCu; // 8014487C
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 80144880
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80144884
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 80144888
  c->lr=0x80144890u; f_800FBA2C(c); // 8014488C
  c->r[0]=R8(c->r[1]+0x00000008u); // 80144890
  cmps(c,0,(int32_t)c->r[0],0); // 80144894
  if (crb(c,2)) { goto L_801448AC; } // 80144898
  c->r[3]=c->r[1]+0x000000CCu; // 8014489C
  c->r[4]=c->r[13]+0xFFFF8F68u; // 801448A0
  c->r[5]=0u+0x00000001u; // 801448A4
  c->lr=0x801448ACu; f_800FBA2C(c); // 801448A8
L_801448AC:;
  c->r[0]=rotl(c->r[14],1)&0xFFFFFFFEu; // 801448AC
  c->r[30]=c->r[30]-c->r[14]; // 801448B0
  c->r[31]=c->r[31]+c->r[0]; // 801448B4
L_801448B8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801448B8
  if (crb(c,1)) { IRQCHK(c); goto L_8014463C; } // 801448BC
L_801448C0:;
  c->r[3]=c->r[1]+0x000000CCu; // 801448C0
  c->r[4]=0u+0xFFFFFFFFu; // 801448C4
  c->lr=0x801448CCu; f_800FB958(c); // 801448C8
L_801448CC:;
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,31,ea,0,0);} // 801448CC
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[31]=RF64(ea);} // 801448D0
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,30,ea,0,0);} // 801448D4
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[30]=RF64(ea);} // 801448D8
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,29,ea,0,0);} // 801448DC
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[29]=RF64(ea);} // 801448E0
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,28,ea,0,0);} // 801448E4
  c->r[11]=c->r[1]+0x000001C0u; // 801448E8
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[28]=RF64(ea);} // 801448EC
  c->lr=0x801448F4u; f_80252BBC(c); // 801448F0
  c->r[0]=R32(c->r[1]+0x00000204u); // 801448F4
  c->lr=c->r[0]; // 801448F8
  c->r[1]=c->r[1]+0x00000200u; // 801448FC
  return; // 80144900
}

// SetColorMapping__Q34nw4r2ut10CharWriterFQ34nw4r2ut5ColorQ34nw4r2ut5Color
void f_80144904(Ctx* __restrict c) {
  trace_call(0x80144904u);
  c->r[11]=R8(c->r[4]+0x00000000u); // 80144904
  c->r[10]=R8(c->r[4]+0x00000001u); // 80144908
  c->r[9]=R8(c->r[4]+0x00000002u); // 8014490C
  c->r[8]=R8(c->r[4]+0x00000003u); // 80144910
  c->r[7]=R8(c->r[5]+0x00000000u); // 80144914
  c->r[6]=R8(c->r[5]+0x00000001u); // 80144918
  c->r[4]=R8(c->r[5]+0x00000002u); // 8014491C
  c->r[0]=R8(c->r[5]+0x00000003u); // 80144920
  W8(c->r[3]+0x00000018u,c->r[11]); // 80144924
  W8(c->r[3]+0x00000019u,c->r[10]); // 80144928
  W8(c->r[3]+0x0000001Au,c->r[9]); // 8014492C
  W8(c->r[3]+0x0000001Bu,c->r[8]); // 80144930
  W8(c->r[3]+0x0000001Cu,c->r[7]); // 80144934
  W8(c->r[3]+0x0000001Du,c->r[6]); // 80144938
  W8(c->r[3]+0x0000001Eu,c->r[4]); // 8014493C
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 80144940
  f_800F926C(c); return; // 80144944
}

// CalcLineRectImpl<w>__Q34nw4r3lyt25@unnamed@lyt_textBox_cpp@FPQ34nw4r2ut4RectPQ34nw4r2ut17TextWriterBase<w>PCwifPb_i
void f_80144948(Ctx* __restrict c) {
  trace_call(0x80144948u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80144948
  c->r[0]=c->lr; // 8014494C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80144950
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 80144954
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 80144958
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 8014495C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 80144960
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 80144964
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 80144968
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 8014496C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 80144970
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[27]);} // 80144974
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,27,ea,0,0);} // 80144978
  c->r[11]=c->r[1]+0x00000080u; // 8014497C
  c->lr=0x80144984u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80144980
  c->r[0]=0u+0x00000000u; // 80144984
  c->r[25]=c->r[3]|c->r[3]; // 80144988
  W32(c->r[1]+0x00000040u,c->r[0]); // 8014498C
  c->f[30]=c->f[1]; // 80144990
  c->r[26]=c->r[4]|c->r[4]; // 80144994
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[31]=c->ps1[31]=RF32(ea);} // 80144998
  W32(c->r[1]+0x00000044u,c->r[0]); // 8014499C
  c->r[27]=c->r[5]|c->r[5]; // 801449A0
  c->r[28]=c->r[6]|c->r[6]; // 801449A4
  W32(c->r[1]+0x00000048u,c->r[0]); // 801449A8
  c->r[29]=c->r[7]|c->r[7]; // 801449AC
  c->r[3]=c->r[1]+0x00000028u; // 801449B0
  c->r[31]=0u+0x00000000u; // 801449B4
  W32(c->r[1]+0x00000038u,c->r[4]); // 801449B8
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 801449BC
  c->r[4]=R32(c->r[4]+0x00000048u); // 801449C0
  c->lr=0x801449C8u; f_800FA610(c); // 801449C4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801449C8
  c->r[3]=c->r[26]|c->r[26]; // 801449CC
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801449D0
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 801449D4
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[0]);} // 801449D8
  c->lr=0x801449E0u; f_800FB9B0(c); // 801449DC
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801449E0
  fcmp(c,0,c->f[0],c->f[1]); // 801449E4
  if (!crb(c,1)) { goto L_801449F0; } // 801449E8
  goto L_801449F4; // 801449EC
L_801449F0:;
  c->f[1]=c->f[0]; // 801449F0
L_801449F4:;
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[1]);} // 801449F4
  c->r[3]=c->r[26]|c->r[26]; // 801449F8
  c->lr=0x80144A00u; f_800FB9B0(c); // 801449FC
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80144A00
  fcmp(c,0,c->f[0],c->f[1]); // 80144A04
  if (!crb(c,0)) { goto L_80144A10; } // 80144A08
  goto L_80144A14; // 80144A0C
L_80144A10:;
  c->f[1]=c->f[0]; // 80144A10
L_80144A14:;
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[1]);} // 80144A14
  c->r[0]=0u+0x00000000u; // 80144A18
  c->r[3]=c->r[1]+0x00000028u; // 80144A1C
  c->r[12]=c->r[1]+0x0000002Cu; // 80144A20
  W8(c->r[29]+0x00000000u,c->r[0]); // 80144A24
  W32(c->r[1]+0x00000028u,c->r[27]); // 80144A28
  {uint32_t ea=c->r[25]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80144A2C
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80144A30
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80144A34
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80144A38
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 80144A3C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 80144A40
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80144A44
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80144A48
  c->lr=0x80144A50u; f_80252A54(c); // 80144A4C
  c->r[0]=c->r[0]|0x00000000u; // 80144A50
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[28]=c->ps1[28]=RF32(ea);} // 80144A54
  c->r[4]=c->r[3]|c->r[3]; // 80144A58
  {uint32_t ea=c->r[2]+0xFFFFA8A8u; c->f[29]=RF64(ea);} // 80144A5C
  c->r[24]=0u+0x43300000u; // 80144A60
  goto L_80144C70; // 80144A64
L_80144A68:;
  c->r[5]=rotl(c->r[4],0)&0x0000FFFFu; // 80144A68
  cmps(c,0,(int32_t)c->r[5],32); // 80144A6C
  if (!crb(c,0)) { goto L_80144B8C; } // 80144A70
  c->r[0]=cntlz(c->r[31]); // 80144A74
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 80144A78
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80144A7C
  c->r[4]=c->r[1]+0x00000008u; // 80144A80
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[28]);} // 80144A84
  c->r[6]=c->r[1]+0x00000038u; // 80144A88
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[28]);} // 80144A8C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[28]);} // 80144A90
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 80144A94
  W32(c->r[1]+0x00000048u,c->r[0]); // 80144A98
  {uint32_t ea=c->r[26]+0x0000002Cu; WF32(ea,c->f[31]);} // 80144A9C
  c->r[3]=R32(c->r[26]+0x00000060u); // 80144AA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80144AA4
  c->r[12]=R32(c->r[12]+0x00000010u); // 80144AA8
  c->ctr=c->r[12]; // 80144AAC
  if (true) { c->lr=0x80144AB4u; dispatch(c,c->ctr); } // 80144AB0
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 80144AB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80144AB8
  W32(c->r[1]+0x00000028u,c->r[0]); // 80144ABC
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80144AC0
  fcmp(c,0,c->f[0],c->f[1]); // 80144AC4
  if (!crb(c,1)) { goto L_80144AD0; } // 80144AC8
  goto L_80144AD4; // 80144ACC
L_80144AD0:;
  c->f[1]=c->f[0]; // 80144AD0
L_80144AD4:;
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[1]);} // 80144AD4
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80144AD8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80144ADC
  fcmp(c,0,c->f[0],c->f[1]); // 80144AE0
  if (!crb(c,1)) { goto L_80144AEC; } // 80144AE4
  goto L_80144AF0; // 80144AE8
L_80144AEC:;
  c->f[1]=c->f[0]; // 80144AEC
L_80144AF0:;
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[1]);} // 80144AF0
  {uint32_t ea=c->r[25]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80144AF4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80144AF8
  fcmp(c,0,c->f[0],c->f[1]); // 80144AFC
  if (!crb(c,0)) { goto L_80144B08; } // 80144B00
  goto L_80144B0C; // 80144B04
L_80144B08:;
  c->f[1]=c->f[0]; // 80144B08
L_80144B0C:;
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 80144B0C
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80144B10
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80144B14
  fcmp(c,0,c->f[0],c->f[2]); // 80144B18
  if (!crb(c,0)) { goto L_80144B24; } // 80144B1C
  goto L_80144B28; // 80144B20
L_80144B24:;
  c->f[2]=c->f[0]; // 80144B24
L_80144B28:;
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80144B28
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80144B2C
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[2]);} // 80144B30
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80144B34
  {uint32_t ea=c->r[26]+0x0000002Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80144B38
  fcmp(c,0,c->f[0],c->f[30]); // 80144B3C
  if (!crb(c,1)) { goto L_80144B50; } // 80144B40
  c->r[0]=0u+0x00000001u; // 80144B44
  W8(c->r[29]+0x00000000u,c->r[0]); // 80144B48
  goto L_80144C8C; // 80144B4C
L_80144B50:;
  cmps(c,0,(int32_t)c->r[3],4); // 80144B50
  if (!crb(c,2)) { goto L_80144B60; } // 80144B54
  c->r[3]=c->r[28]|c->r[28]; // 80144B58
  goto L_80144CE8; // 80144B5C
L_80144B60:;
  cmps(c,0,(int32_t)c->r[3],1); // 80144B60
  if (!crb(c,2)) { goto L_80144B70; } // 80144B64
  c->r[31]=0u+0x00000000u; // 80144B68
  goto L_80144C38; // 80144B6C
L_80144B70:;
  cmps(c,0,(int32_t)c->r[3],2); // 80144B70
  if (!crb(c,2)) { goto L_80144B80; } // 80144B74
  c->r[31]=0u+0x00000001u; // 80144B78
  goto L_80144C38; // 80144B7C
L_80144B80:;
  cmps(c,0,(int32_t)c->r[3],3); // 80144B80
  if (crb(c,2)) { goto L_80144C8C; } // 80144B84
  goto L_80144C38; // 80144B88
L_80144B8C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80144B8C
  if (crb(c,2)) { goto L_80144B9C; } // 80144B90
  {uint32_t ea=c->r[26]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80144B94
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 80144B98
L_80144B9C:;
  c->r[0]=R8(c->r[26]+0x00000043u); // 80144B9C
  c->r[31]=0u+0x00000001u; // 80144BA0
  cmps(c,0,(int32_t)c->r[0],0); // 80144BA4
  if (crb(c,2)) { goto L_80144BB8; } // 80144BA8
  {uint32_t ea=c->r[26]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80144BAC
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 80144BB0
  goto L_80144BF0; // 80144BB4
L_80144BB8:;
  c->r[3]=R32(c->r[26]+0x00000048u); // 80144BB8
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 80144BBC
  {uint32_t ea=c->r[26]+0x00000024u; c->f[27]=c->ps1[27]=RF32(ea);} // 80144BC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80144BC4
  c->r[12]=R32(c->r[12]+0x00000048u); // 80144BC8
  c->ctr=c->r[12]; // 80144BCC
  if (true) { c->lr=0x80144BD4u; dispatch(c,c->ctr); } // 80144BD0
  c->r[0]=c->r[3]^0x80000000u; // 80144BD4
  W32(c->r[1]+0x00000050u,c->r[24]); // 80144BD8
  W32(c->r[1]+0x00000054u,c->r[0]); // 80144BDC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 80144BE0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 80144BE4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[27]); // 80144BE8
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 80144BEC
L_80144BF0:;
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80144BF0
  fcmp(c,0,c->f[0],c->f[31]); // 80144BF4
  if (!crb(c,1)) { goto L_80144C00; } // 80144BF8
  c->f[0]=c->f[31]; // 80144BFC
L_80144C00:;
  {uint32_t ea=c->r[25]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80144C00
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 80144C04
  fcmp(c,0,c->f[2],c->f[31]); // 80144C08
  if (!crb(c,0)) { goto L_80144C14; } // 80144C0C
  c->f[2]=c->f[31]; // 80144C10
L_80144C14:;
  c->f[1]=c->ps1[1]=S(c->f[2]); // 80144C14
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80144C18
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[2]);} // 80144C1C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80144C20
  fcmp(c,0,c->f[0],c->f[30]); // 80144C24
  if (!crb(c,1)) { goto L_80144C38; } // 80144C28
  c->r[0]=0u+0x00000001u; // 80144C2C
  W8(c->r[29]+0x00000000u,c->r[0]); // 80144C30
  goto L_80144C8C; // 80144C34
L_80144C38:;
  c->r[30]=R32(c->r[1]+0x00000028u); // 80144C38
  c->r[3]=c->r[1]+0x00000028u; // 80144C3C
  c->r[12]=c->r[1]+0x0000002Cu; // 80144C40
  c->lr=0x80144C48u; f_80252A54(c); // 80144C44
  c->r[0]=c->r[0]|0x00000000u; // 80144C48
  {uint32_t ea=c->r[25]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80144C4C
  c->r[4]=c->r[3]|c->r[3]; // 80144C50
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80144C54
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80144C58
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80144C5C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 80144C60
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 80144C64
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80144C68
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80144C6C
L_80144C70:;
  c->r[7]=R32(c->r[1]+0x00000028u); // 80144C70
  c->r[3]=c->r[7]-c->r[27]; // 80144C74
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80144C78
  c->r[0]=c->r[0]+c->r[3]; // 80144C7C
  c->r[0]=sraw(c,c->r[0],1); // 80144C80
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 80144C84
  if (!crb(c,1)) { IRQCHK(c); goto L_80144A68; } // 80144C88
L_80144C8C:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 80144C8C
  cmps(c,0,(int32_t)c->r[0],0); // 80144C90
  if (crb(c,2)) { goto L_80144CD4; } // 80144C94
  cmps(c,0,(int32_t)c->r[30],0); // 80144C98
  if (crb(c,2)) { goto L_80144CD4; } // 80144C9C
  c->r[3]=c->r[30]-c->r[27]; // 80144CA0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80144CA4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80144CA8
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80144CAC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80144CB0
  c->r[0]=c->r[0]+c->r[3]; // 80144CB4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80144CB8
  c->r[3]=sraw(c,c->r[0],1); // 80144CBC
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[3]);} // 80144CC0
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[2]);} // 80144CC4
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 80144CC8
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[0]);} // 80144CCC
  goto L_80144CE8; // 80144CD0
L_80144CD4:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 80144CD4
  c->r[3]=c->r[0]-c->r[27]; // 80144CD8
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80144CDC
  c->r[0]=c->r[0]+c->r[3]; // 80144CE0
  c->r[3]=sraw(c,c->r[0],1); // 80144CE4
L_80144CE8:;
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 80144CE8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 80144CEC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 80144CF0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 80144CF4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 80144CF8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 80144CFC
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 80144D00
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 80144D04
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,27,ea,0,0);} // 80144D08
  c->r[11]=c->r[1]+0x00000080u; // 80144D0C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[27]=RF64(ea);} // 80144D10
  c->lr=0x80144D18u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80144D14
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80144D18
  c->lr=c->r[0]; // 80144D1C
  c->r[1]=c->r[1]+0x000000D0u; // 80144D20
  return; // 80144D24
}

// fn_80144D28
void f_80144D28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80144D28
  c->r[0]=c->lr; // 80144D2C
  cmps(c,0,(int32_t)c->r[4],0); // 80144D30
  W32(c->r[1]+0x00000024u,c->r[0]); // 80144D34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80144D38
  W32(c->r[1]+0x00000018u,c->r[30]); // 80144D3C
  c->r[30]=c->r[4]|c->r[4]; // 80144D40
  W32(c->r[1]+0x00000014u,c->r[29]); // 80144D44
  c->r[29]=c->r[3]|c->r[3]; // 80144D48
  if (crb(c,2)) { goto L_80144DD0; } // 80144D4C
  c->r[4]=c->r[4]+0x00000001u; // 80144D50
  c->r[0]=R16(c->r[3]+0x000000FCu); // 80144D54
  c->r[31]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80144D58
  cmpu(c,0,c->r[31],c->r[0]); // 80144D5C
  if (!crb(c,1)) { goto L_80144DD0; } // 80144D60
  c->r[12]=R32(c->r[3]+0x00000000u); // 80144D64
  c->r[12]=R32(c->r[12]+0x00000078u); // 80144D68
  c->ctr=c->r[12]; // 80144D6C
  if (true) { c->lr=0x80144D74u; dispatch(c,c->ctr); } // 80144D70
  c->r[0]=c->r[30]+0x00000001u; // 80144D74
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80144D78
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80144D7C
  c->lr=0x80144D84u; f_8017C1A4(c); // 80144D80
  cmps(c,0,(int32_t)c->r[3],0); // 80144D84
  if (!crb(c,2)) { goto L_80144D94; } // 80144D88
  c->r[3]=0u+0x00000000u; // 80144D8C
  goto L_80144DC0; // 80144D90
L_80144D94:;
  c->r[0]=c->r[30]+0x00000001u; // 80144D94
  c->r[5]=c->r[3]|c->r[3]; // 80144D98
  c->r[4]=0u+0x00000000u; // 80144D9C
  c->ctr=c->r[0]; // 80144DA0
  cmpu(c,0,c->r[0],0x00000000u); // 80144DA4
  if (!crb(c,1)) { goto L_80144DC0; } // 80144DA8
L_80144DAC:;
  cmps(c,0,(int32_t)c->r[5],0); // 80144DAC
  if (crb(c,2)) { goto L_80144DB8; } // 80144DB0
  W16(c->r[5]+0x00000000u,c->r[4]); // 80144DB4
L_80144DB8:;
  c->r[5]=c->r[5]+0x00000002u; // 80144DB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80144DAC; } // 80144DBC
L_80144DC0:;
  cmps(c,0,(int32_t)c->r[3],0); // 80144DC0
  W32(c->r[29]+0x000000D8u,c->r[3]); // 80144DC4
  if (crb(c,2)) { goto L_80144DD0; } // 80144DC8
  W16(c->r[29]+0x000000FCu,c->r[31]); // 80144DCC
L_80144DD0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80144DD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80144DD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80144DD8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80144DDC
  c->lr=c->r[0]; // 80144DE0
  c->r[1]=c->r[1]+0x00000020u; // 80144DE4
  return; // 80144DE8
}

// fn_80144DEC
void f_80144DEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80144DEC
  c->r[0]=c->lr; // 80144DF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80144DF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80144DF8
  c->r[31]=c->r[3]|c->r[3]; // 80144DFC
  c->r[4]=R32(c->r[3]+0x000000D8u); // 80144E00
  cmps(c,0,(int32_t)c->r[4],0); // 80144E04
  if (crb(c,2)) { goto L_80144E24; } // 80144E08
  if (crb(c,2)) { goto L_80144E18; } // 80144E0C
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80144E10
  c->lr=0x80144E18u; f_8017C1B4(c); // 80144E14
L_80144E18:;
  c->r[0]=0u+0x00000000u; // 80144E18
  W32(c->r[31]+0x000000D8u,c->r[0]); // 80144E1C
  W16(c->r[31]+0x000000FCu,c->r[0]); // 80144E20
L_80144E24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80144E24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80144E28
  c->lr=c->r[0]; // 80144E2C
  c->r[1]=c->r[1]+0x00000010u; // 80144E30
  return; // 80144E34
}

// fn_80144E38
void f_80144E38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80144E38
  c->r[0]=c->lr; // 80144E3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80144E40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80144E44
  c->r[31]=c->r[3]|c->r[3]; // 80144E48
  W32(c->r[1]+0x00000018u,c->r[30]); // 80144E4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80144E50
  c->r[29]=c->r[5]|c->r[5]; // 80144E54
  W32(c->r[1]+0x00000010u,c->r[28]); // 80144E58
  c->r[28]=c->r[4]|c->r[4]; // 80144E5C
  c->r[3]=c->r[28]|c->r[28]; // 80144E60
  c->lr=0x80144E68u; f_8025E944(c); // 80144E64
  c->r[6]=R32(c->r[31]+0x000000D8u); // 80144E68
  cmps(c,0,(int32_t)c->r[6],0); // 80144E6C
  if (!crb(c,2)) { goto L_80144E7C; } // 80144E70
  c->r[3]=0u+0x00000000u; // 80144E74
  goto L_80144EF4; // 80144E78
L_80144E7C:;
  c->r[4]=R16(c->r[31]+0x000000FCu); // 80144E7C
  c->r[0]=cntlz(c->r[4]); // 80144E80
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 80144E84
  c->r[5]=rotl(c->r[0],27)&0x00000001u; // 80144E88
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80144E8C
  c->r[4]=0u-c->r[5]; // 80144E90
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80144E94
  c->r[0]=c->r[0]&~c->r[4]; // 80144E98
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80144E9C
  cmpu(c,0,c->r[29],c->r[0]); // 80144EA0
  if (crb(c,0)) { goto L_80144EB0; } // 80144EA4
  c->r[3]=0u+0x00000000u; // 80144EA8
  goto L_80144EF4; // 80144EAC
L_80144EB0:;
  c->r[0]=c->r[0]-c->r[29]; // 80144EB0
  c->r[30]=c->r[3]|c->r[3]; // 80144EB4
  cmpu(c,0,c->r[3],c->r[0]); // 80144EB8
  if (!crb(c,1)) { goto L_80144EC4; } // 80144EBC
  c->r[30]=c->r[0]|c->r[0]; // 80144EC0
L_80144EC4:;
  c->r[0]=rotl(c->r[29],1)&0x0001FFFEu; // 80144EC4
  c->r[4]=c->r[28]|c->r[28]; // 80144EC8
  c->r[3]=c->r[6]+c->r[0]; // 80144ECC
  c->r[5]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80144ED0
  c->lr=0x80144ED8u; f_80004338(c); // 80144ED4
  c->r[0]=c->r[29]+c->r[30]; // 80144ED8
  c->r[4]=R32(c->r[31]+0x000000D8u); // 80144EDC
  W16(c->r[31]+0x000000FEu,c->r[0]); // 80144EE0
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 80144EE4
  c->r[5]=0u+0x00000000u; // 80144EE8
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 80144EEC
  W16(c->r[4]+c->r[0],c->r[5]); // 80144EF0
L_80144EF4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80144EF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80144EF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80144EFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80144F00
  c->r[28]=R32(c->r[1]+0x00000010u); // 80144F04
  c->lr=c->r[0]; // 80144F08
  c->r[1]=c->r[1]+0x00000020u; // 80144F0C
  return; // 80144F10
}

// fn_80144F14
void f_80144F14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80144F14
  c->r[0]=c->lr; // 80144F18
  W32(c->r[1]+0x00000024u,c->r[0]); // 80144F1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80144F20
  W32(c->r[1]+0x00000018u,c->r[30]); // 80144F24
  c->r[30]=c->r[5]|c->r[5]; // 80144F28
  W32(c->r[1]+0x00000014u,c->r[29]); // 80144F2C
  c->r[29]=c->r[3]|c->r[3]; // 80144F30
  c->r[8]=R32(c->r[3]+0x000000D8u); // 80144F34
  cmps(c,0,(int32_t)c->r[8],0); // 80144F38
  if (!crb(c,2)) { goto L_80144F48; } // 80144F3C
  c->r[3]=0u+0x00000000u; // 80144F40
  goto L_80144FBC; // 80144F44
L_80144F48:;
  c->r[3]=R16(c->r[3]+0x000000FCu); // 80144F48
  c->r[0]=cntlz(c->r[3]); // 80144F4C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 80144F50
  c->r[7]=rotl(c->r[0],27)&0x00000001u; // 80144F54
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80144F58
  c->r[3]=0u-c->r[7]; // 80144F5C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80144F60
  c->r[0]=c->r[0]&~c->r[3]; // 80144F64
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80144F68
  cmpu(c,0,c->r[5],c->r[0]); // 80144F6C
  if (crb(c,0)) { goto L_80144F7C; } // 80144F70
  c->r[3]=0u+0x00000000u; // 80144F74
  goto L_80144FBC; // 80144F78
L_80144F7C:;
  c->r[0]=c->r[0]-c->r[5]; // 80144F7C
  c->r[31]=c->r[6]|c->r[6]; // 80144F80
  cmpu(c,0,c->r[6],c->r[0]); // 80144F84
  if (!crb(c,1)) { goto L_80144F90; } // 80144F88
  c->r[31]=c->r[0]|c->r[0]; // 80144F8C
L_80144F90:;
  c->r[0]=rotl(c->r[5],1)&0x0001FFFEu; // 80144F90
  c->r[5]=rotl(c->r[31],1)&0xFFFFFFFEu; // 80144F94
  c->r[3]=c->r[8]+c->r[0]; // 80144F98
  c->lr=0x80144FA0u; f_80004338(c); // 80144F9C
  c->r[0]=c->r[30]+c->r[31]; // 80144FA0
  c->r[4]=R32(c->r[29]+0x000000D8u); // 80144FA4
  W16(c->r[29]+0x000000FEu,c->r[0]); // 80144FA8
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 80144FAC
  c->r[5]=0u+0x00000000u; // 80144FB0
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 80144FB4
  W16(c->r[4]+c->r[0],c->r[5]); // 80144FB8
L_80144FBC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80144FBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80144FC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80144FC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80144FC8
  c->lr=c->r[0]; // 80144FCC
  c->r[1]=c->r[1]+0x00000020u; // 80144FD0
  return; // 80144FD4
}

// LoadMtx__Q34nw4r3lyt7TextBoxFRCQ34nw4r3lyt8DrawInfo
void f_80144FD8(Ctx* __restrict c) {
  trace_call(0x80144FD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80144FD8
  c->r[0]=c->lr; // 80144FDC
  c->r[5]=c->r[3]|c->r[3]; // 80144FE0
  W32(c->r[1]+0x00000044u,c->r[0]); // 80144FE4
  c->r[0]=R8(c->r[4]+0x00000050u); // 80144FE8
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80144FEC
  if (crb(c,2)) { goto L_80145008; } // 80144FF0
  c->r[3]=c->r[4]+0x00000004u; // 80144FF4
  c->r[4]=c->r[5]+0x00000084u; // 80144FF8
  c->r[5]=c->r[1]+0x00000008u; // 80144FFC
  c->lr=0x80145004u; f_80163898(c); // 80145000
  goto L_80145014; // 80145004
L_80145008:;
  c->r[3]=c->r[3]+0x00000084u; // 80145008
  c->r[4]=c->r[1]+0x00000008u; // 8014500C
  c->lr=0x80145014u; f_80163864(c); // 80145010
L_80145014:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80145014
  c->r[3]=c->r[1]+0x00000008u; // 80145018
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8014501C
  c->r[4]=0u+0x00000000u; // 80145020
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80145024
  c->f[2]=-c->f[2]; // 80145028
  c->f[1]=-c->f[1]; // 8014502C
  c->f[0]=-c->f[0]; // 80145030
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 80145034
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80145038
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8014503C
  c->lr=0x80145044u; f_8016B714(c); // 80145040
  c->r[3]=0u+0x00000000u; // 80145044
  c->lr=0x8014504Cu; f_8016B81C(c); // 80145048
  c->r[0]=R32(c->r[1]+0x00000044u); // 8014504C
  c->lr=c->r[0]; // 80145050
  c->r[1]=c->r[1]+0x00000040u; // 80145054
  return; // 80145058
}

// GetTextDrawRect__Q34nw4r3lyt7TextBoxCFPQ34nw4r2ut17TextWriterBase<w>
void f_8014505C(Ctx* __restrict c) {
  trace_call(0x8014505Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014505C
  c->r[0]=c->lr; // 80145060
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145064
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80145068
  c->r[0]=R32(c->r[4]+0x000000E4u); // 8014506C
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80145070
  c->r[31]=c->r[5]|c->r[5]; // 80145074
  {uint32_t ea=c->r[4]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80145078
  W32(c->r[1]+0x00000098u,c->r[30]); // 8014507C
  c->r[30]=c->r[4]|c->r[4]; // 80145080
  {uint32_t ea=c->r[4]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 80145084
  W32(c->r[1]+0x00000094u,c->r[29]); // 80145088
  c->r[29]=c->r[3]|c->r[3]; // 8014508C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80145090
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80145094
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80145098
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8014509C
  c->r[3]=c->r[31]|c->r[31]; // 801450A0
  {uint32_t ea=c->r[5]+0x0000002Cu; WF32(ea,c->f[0]);} // 801450A4
  {uint32_t ea=c->r[5]+0x00000030u; WF32(ea,c->f[0]);} // 801450A8
  W32(c->r[5]+0x00000048u,c->r[0]); // 801450AC
  c->lr=0x801450B4u; f_800F8CDC(c); // 801450B0
  c->r[0]=R32(c->r[30]+0x000000F8u); // 801450B4
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801450B8
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801450BC
  cmps(c,0,(int32_t)c->r[0],0); // 801450C0
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 801450C4
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[1]);} // 801450C8
  if (crb(c,2)) { goto L_801450D4; } // 801450CC
  W32(c->r[31]+0x00000060u,c->r[0]); // 801450D0
L_801450D4:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801450D4
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801450D8
  W8(c->r[1]+0x00000020u,c->r[0]); // 801450DC
  c->r[6]=R16(c->r[30]+0x000000FEu); // 801450E0
  c->r[0]=R8(c->r[31]+0x00000001u); // 801450E4
  c->r[5]=R32(c->r[30]+0x000000D8u); // 801450E8
  W8(c->r[1]+0x00000021u,c->r[0]); // 801450EC
  c->r[0]=R8(c->r[31]+0x00000002u); // 801450F0
  W8(c->r[1]+0x00000022u,c->r[0]); // 801450F4
  c->r[0]=R8(c->r[31]+0x00000003u); // 801450F8
  W8(c->r[1]+0x00000023u,c->r[0]); // 801450FC
  c->r[0]=R8(c->r[31]+0x00000004u); // 80145100
  W8(c->r[1]+0x00000024u,c->r[0]); // 80145104
  c->r[0]=R8(c->r[31]+0x00000005u); // 80145108
  W8(c->r[1]+0x00000025u,c->r[0]); // 8014510C
  c->r[0]=R8(c->r[31]+0x00000006u); // 80145110
  W8(c->r[1]+0x00000026u,c->r[0]); // 80145114
  c->r[0]=R8(c->r[31]+0x00000007u); // 80145118
  W8(c->r[1]+0x00000027u,c->r[0]); // 8014511C
  c->r[0]=R8(c->r[31]+0x00000008u); // 80145120
  W8(c->r[1]+0x00000028u,c->r[0]); // 80145124
  c->r[0]=R8(c->r[31]+0x00000009u); // 80145128
  W8(c->r[1]+0x00000029u,c->r[0]); // 8014512C
  c->r[0]=R8(c->r[31]+0x0000000Au); // 80145130
  W8(c->r[1]+0x0000002Au,c->r[0]); // 80145134
  c->r[0]=R8(c->r[31]+0x0000000Bu); // 80145138
  W8(c->r[1]+0x0000002Bu,c->r[0]); // 8014513C
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 80145140
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 80145144
  c->r[0]=R8(c->r[31]+0x0000000Du); // 80145148
  W8(c->r[1]+0x0000002Du,c->r[0]); // 8014514C
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 80145150
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 80145154
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 80145158
  W8(c->r[1]+0x0000002Fu,c->r[0]); // 8014515C
  c->r[0]=R8(c->r[31]+0x00000010u); // 80145160
  W8(c->r[1]+0x00000030u,c->r[0]); // 80145164
  c->r[0]=R8(c->r[31]+0x00000011u); // 80145168
  W8(c->r[1]+0x00000031u,c->r[0]); // 8014516C
  c->r[0]=R8(c->r[31]+0x00000012u); // 80145170
  W8(c->r[1]+0x00000032u,c->r[0]); // 80145174
  c->r[0]=R8(c->r[31]+0x00000013u); // 80145178
  W8(c->r[1]+0x00000033u,c->r[0]); // 8014517C
  c->r[0]=R8(c->r[31]+0x00000014u); // 80145180
  W8(c->r[1]+0x00000034u,c->r[0]); // 80145184
  c->r[0]=R8(c->r[31]+0x00000015u); // 80145188
  W8(c->r[1]+0x00000035u,c->r[0]); // 8014518C
  c->r[0]=R8(c->r[31]+0x00000016u); // 80145190
  W8(c->r[1]+0x00000036u,c->r[0]); // 80145194
  c->r[0]=R8(c->r[31]+0x00000017u); // 80145198
  W8(c->r[1]+0x00000037u,c->r[0]); // 8014519C
  c->r[0]=R8(c->r[31]+0x00000018u); // 801451A0
  W8(c->r[1]+0x00000038u,c->r[0]); // 801451A4
  c->r[0]=R8(c->r[31]+0x00000019u); // 801451A8
  W8(c->r[1]+0x00000039u,c->r[0]); // 801451AC
  c->r[0]=R8(c->r[31]+0x0000001Au); // 801451B0
  W8(c->r[1]+0x0000003Au,c->r[0]); // 801451B4
  c->r[0]=R8(c->r[31]+0x0000001Bu); // 801451B8
  W8(c->r[1]+0x0000003Bu,c->r[0]); // 801451BC
  c->r[0]=R8(c->r[31]+0x0000001Cu); // 801451C0
  W8(c->r[1]+0x0000003Cu,c->r[0]); // 801451C4
  c->r[0]=R8(c->r[31]+0x0000001Du); // 801451C8
  W8(c->r[1]+0x0000003Du,c->r[0]); // 801451CC
  c->r[0]=R8(c->r[31]+0x0000001Eu); // 801451D0
  W8(c->r[1]+0x0000003Eu,c->r[0]); // 801451D4
  c->r[0]=R8(c->r[31]+0x0000001Fu); // 801451D8
  W8(c->r[1]+0x0000003Fu,c->r[0]); // 801451DC
  c->r[0]=R32(c->r[31]+0x00000020u); // 801451E0
  W32(c->r[1]+0x00000040u,c->r[0]); // 801451E4
  c->r[3]=R32(c->r[31]+0x00000024u); // 801451E8
  c->r[0]=R32(c->r[31]+0x00000028u); // 801451EC
  W32(c->r[1]+0x00000044u,c->r[3]); // 801451F0
  W32(c->r[1]+0x00000048u,c->r[0]); // 801451F4
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 801451F8
  c->r[0]=R32(c->r[31]+0x00000030u); // 801451FC
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 80145200
  W32(c->r[1]+0x00000050u,c->r[0]); // 80145204
  c->r[0]=R32(c->r[31]+0x00000034u); // 80145208
  W32(c->r[1]+0x00000054u,c->r[0]); // 8014520C
  c->r[3]=R32(c->r[31]+0x00000038u); // 80145210
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 80145214
  W32(c->r[1]+0x00000058u,c->r[3]); // 80145218
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8014521C
  c->r[0]=R8(c->r[31]+0x00000040u); // 80145220
  W8(c->r[1]+0x00000060u,c->r[0]); // 80145224
  c->r[0]=R8(c->r[31]+0x00000041u); // 80145228
  W8(c->r[1]+0x00000061u,c->r[0]); // 8014522C
  c->r[0]=R8(c->r[31]+0x00000042u); // 80145230
  W8(c->r[1]+0x00000062u,c->r[0]); // 80145234
  c->r[0]=R8(c->r[31]+0x00000043u); // 80145238
  W8(c->r[1]+0x00000063u,c->r[0]); // 8014523C
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145240
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80145244
  c->r[0]=R32(c->r[31]+0x00000048u); // 80145248
  W32(c->r[1]+0x00000068u,c->r[0]); // 8014524C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80145250
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80145254
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145258
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8014525C
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145260
  c->r[3]=c->r[29]|c->r[29]; // 80145264
  c->r[4]=c->r[1]+0x00000020u; // 80145268
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 8014526C
  c->r[0]=R32(c->r[31]+0x00000058u); // 80145270
  W32(c->r[1]+0x00000078u,c->r[0]); // 80145274
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 80145278
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8014527C
  c->r[0]=R32(c->r[31]+0x00000060u); // 80145280
  W32(c->r[1]+0x00000080u,c->r[0]); // 80145284
  c->lr=0x8014528Cu; f_801453E0(c); // 80145288
  c->r[3]=c->r[1]+0x00000020u; // 8014528C
  c->r[4]=0u+0xFFFFFFFFu; // 80145290
  c->lr=0x80145298u; f_800FB958(c); // 80145294
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80145298
  c->r[3]=c->r[30]|c->r[30]; // 8014529C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801452A0
  {uint32_t ea=c->r[29]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801452A4
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801452A8
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 801452AC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801452B0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 801452B4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801452B8
  c->lr=0x801452C0u; f_801423D0(c); // 801452BC
  c->r[5]=0u+0x55550000u; // 801452C0
  c->r[6]=R8(c->r[30]+0x00000100u); // 801452C4
  c->r[0]=c->r[5]+0x00005556u; // 801452C8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801452CC
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 801452D0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801452D4
  W32(c->r[1]+0x00000010u,c->r[3]); // 801452D8
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 801452DC
  W32(c->r[1]+0x00000014u,c->r[4]); // 801452E0
  c->r[0]=c->r[5]+c->r[0]; // 801452E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801452E8
  c->r[0]=c->r[6]-c->r[0]; // 801452EC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801452F0
  cmps(c,0,(int32_t)c->r[0],1); // 801452F4
  if (crb(c,2)) { goto L_80145318; } // 801452F8
  if (!crb(c,0)) { goto L_80145304; } // 801452FC
  goto L_80145310; // 80145300
L_80145304:;
  cmps(c,0,(int32_t)c->r[0],3); // 80145304
  if (!crb(c,0)) { goto L_80145310; } // 80145308
  goto L_80145320; // 8014530C
L_80145310:;
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80145310
  goto L_80145324; // 80145314
L_80145318:;
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80145318
  goto L_80145324; // 8014531C
L_80145320:;
  {uint32_t ea=c->r[2]+0xFFFFA8B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80145320
L_80145324:;
  c->r[3]=0u+0x55550000u; // 80145324
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80145328
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014532C
  c->r[0]=c->r[3]+0x00005556u; // 80145330
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 80145334
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145338
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014533C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 80145340
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80145344
  c->r[0]=c->r[3]+c->r[0]; // 80145348
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8014534C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80145350
  cmps(c,0,(int32_t)c->r[0],1); // 80145354
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80145358
  if (crb(c,2)) { goto L_8014537C; } // 8014535C
  if (!crb(c,0)) { goto L_80145368; } // 80145360
  goto L_80145374; // 80145364
L_80145368:;
  cmps(c,0,(int32_t)c->r[0],3); // 80145368
  if (!crb(c,0)) { goto L_80145374; } // 8014536C
  goto L_80145384; // 80145370
L_80145374:;
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[5]=c->ps1[5]=RF32(ea);} // 80145374
  goto L_80145388; // 80145378
L_8014537C:;
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[5]=c->ps1[5]=RF32(ea);} // 8014537C
  goto L_80145388; // 80145380
L_80145384:;
  {uint32_t ea=c->r[2]+0xFFFFA8B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 80145384
L_80145388:;
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145388
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8014538C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80145390
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 80145394
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145398
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[1]);} // 8014539C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801453A0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801453A4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[5]); // 801453A8
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 801453AC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801453B0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[4]); // 801453B4
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 801453B8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801453BC
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 801453C0
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801453C4
  c->r[30]=R32(c->r[1]+0x00000098u); // 801453C8
  c->r[29]=R32(c->r[1]+0x00000094u); // 801453CC
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801453D0
  c->lr=c->r[0]; // 801453D4
  c->r[1]=c->r[1]+0x000000A0u; // 801453D8
  return; // 801453DC
}

// CalcStringRectImpl<w>__Q34nw4r3lyt25@unnamed@lyt_textBox_cpp@FPQ34nw4r2ut4RectPQ34nw4r2ut17TextWriterBase<w>PCwif_v
void f_801453E0(Ctx* __restrict c) {
  trace_call(0x801453E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801453E0
  c->r[0]=c->lr; // 801453E4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801453E8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801453EC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801453F0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 801453F4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 801453F8
  c->f[30]=c->f[1]; // 801453FC
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[31]=c->ps1[31]=RF32(ea);} // 80145400
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80145404
  c->r[31]=c->r[6]|c->r[6]; // 80145408
  W32(c->r[1]+0x00000028u,c->r[30]); // 8014540C
  c->r[30]=c->r[5]|c->r[5]; // 80145410
  W32(c->r[1]+0x00000024u,c->r[29]); // 80145414
  c->r[29]=c->r[4]|c->r[4]; // 80145418
  W32(c->r[1]+0x00000020u,c->r[28]); // 8014541C
  c->r[28]=c->r[3]|c->r[3]; // 80145420
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 80145424
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[31]);} // 80145428
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[31]);} // 8014542C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[31]);} // 80145430
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[31]);} // 80145434
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[31]);} // 80145438
L_8014543C:;
  c->f[1]=c->f[30]; // 8014543C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 80145440
  c->r[4]=c->r[29]|c->r[29]; // 80145444
  c->r[5]=c->r[30]|c->r[30]; // 80145448
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 8014544C
  c->r[6]=c->r[31]|c->r[31]; // 80145450
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 80145454
  c->r[3]=c->r[1]+0x00000010u; // 80145458
  c->r[7]=c->r[1]+0x00000008u; // 8014545C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 80145460
  c->lr=0x80145468u; f_80144948(c); // 80145464
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80145468
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8014546C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145470
  c->r[30]=c->r[30]+c->r[0]; // 80145474
  c->r[31]=c->r[31]-c->r[3]; // 80145478
  fcmp(c,0,c->f[0],c->f[1]); // 8014547C
  if (!crb(c,1)) { goto L_80145488; } // 80145480
  goto L_8014548C; // 80145484
L_80145488:;
  c->f[1]=c->f[0]; // 80145488
L_8014548C:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 8014548C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145490
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80145494
  fcmp(c,0,c->f[0],c->f[1]); // 80145498
  if (!crb(c,1)) { goto L_801454A4; } // 8014549C
  goto L_801454A8; // 801454A0
L_801454A4:;
  c->f[1]=c->f[0]; // 801454A4
L_801454A8:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 801454A8
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801454AC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801454B0
  fcmp(c,0,c->f[0],c->f[1]); // 801454B4
  if (!crb(c,0)) { goto L_801454C0; } // 801454B8
  goto L_801454C4; // 801454BC
L_801454C0:;
  c->f[1]=c->f[0]; // 801454C0
L_801454C4:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 801454C4
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801454C8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801454CC
  fcmp(c,0,c->f[0],c->f[1]); // 801454D0
  if (!crb(c,0)) { goto L_801454DC; } // 801454D4
  goto L_801454E0; // 801454D8
L_801454DC:;
  c->f[1]=c->f[0]; // 801454DC
L_801454E0:;
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 801454E0
  c->r[0]=R8(c->r[1]+0x00000008u); // 801454E4
  cmps(c,0,(int32_t)c->r[0],0); // 801454E8
  if (crb(c,2)) { goto L_8014557C; } // 801454EC
  c->f[1]=c->f[30]; // 801454F0
  c->r[4]=c->r[29]|c->r[29]; // 801454F4
  c->r[3]=c->r[1]+0x00000010u; // 801454F8
  c->r[7]=c->r[1]+0x00000008u; // 801454FC
  c->r[5]=c->r[13]+0xFFFF8F68u; // 80145500
  c->r[6]=0u+0x00000001u; // 80145504
  c->lr=0x8014550Cu; f_80144948(c); // 80145508
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014550C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145510
  fcmp(c,0,c->f[0],c->f[1]); // 80145514
  if (!crb(c,1)) { goto L_80145520; } // 80145518
  goto L_80145524; // 8014551C
L_80145520:;
  c->f[1]=c->f[0]; // 80145520
L_80145524:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 80145524
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145528
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014552C
  fcmp(c,0,c->f[0],c->f[1]); // 80145530
  if (!crb(c,1)) { goto L_8014553C; } // 80145534
  goto L_80145540; // 80145538
L_8014553C:;
  c->f[1]=c->f[0]; // 8014553C
L_80145540:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 80145540
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145544
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80145548
  fcmp(c,0,c->f[0],c->f[1]); // 8014554C
  if (!crb(c,0)) { goto L_80145558; } // 80145550
  goto L_8014555C; // 80145554
L_80145558:;
  c->f[1]=c->f[0]; // 80145558
L_8014555C:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 8014555C
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80145560
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80145564
  fcmp(c,0,c->f[0],c->f[1]); // 80145568
  if (!crb(c,0)) { goto L_80145574; } // 8014556C
  goto L_80145578; // 80145570
L_80145574:;
  c->f[1]=c->f[0]; // 80145574
L_80145578:;
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 80145578
L_8014557C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8014557C
  if (crb(c,1)) { IRQCHK(c); goto L_8014543C; } // 80145580
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80145584
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80145588
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 8014558C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80145590
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80145594
  c->r[30]=R32(c->r[1]+0x00000028u); // 80145598
  c->r[29]=R32(c->r[1]+0x00000024u); // 8014559C
  c->r[0]=R32(c->r[1]+0x00000054u); // 801455A0
  c->r[28]=R32(c->r[1]+0x00000020u); // 801455A4
  c->lr=c->r[0]; // 801455A8
  c->r[1]=c->r[1]+0x00000050u; // 801455AC
  return; // 801455B0
}

// GetRuntimeTypeInfo__Q34nw4r3lyt7TextBoxCFv
void f_801455B4(Ctx* __restrict c) {
  trace_call(0x801455B4u);
  c->r[3]=c->r[13]+0xFFFFA970u; // 801455B4
  return; // 801455B8
}

// fn_801455BC
void f_801455BC(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFFA958u; // 801455BC
  W32(c->r[13]+0xFFFFA970u,c->r[0]); // 801455C0
  return; // 801455C4
}

// __ct__Q34nw4r3lyt6WindowFPCQ44nw4r3lyt3res6WindowRCQ34nw4r3lyt11ResBlockSet
void f_801455C8(Ctx* __restrict c) {
  trace_call(0x801455C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801455C8
  c->r[0]=c->lr; // 801455CC
  W32(c->r[1]+0x00000054u,c->r[0]); // 801455D0
  c->r[11]=c->r[1]+0x00000050u; // 801455D4
  c->lr=0x801455DCu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801455D8
  c->r[25]=c->r[3]|c->r[3]; // 801455DC
  c->r[26]=c->r[4]|c->r[4]; // 801455E0
  c->r[27]=c->r[5]|c->r[5]; // 801455E4
  c->lr=0x801455ECu; f_8014168C(c); // 801455E8
  c->r[3]=0u+0x802C0000u; // 801455EC
  c->r[4]=0u+0x80140000u; // 801455F0
  c->r[3]=c->r[3]+0x0000663Cu; // 801455F4
  c->r[5]=0u+0x800D0000u; // 801455F8
  c->r[28]=c->r[25]+0x000000E8u; // 801455FC
  W32(c->r[25]+0x00000000u,c->r[3]); // 80145600
  c->r[3]=c->r[28]|c->r[28]; // 80145604
  c->r[4]=c->r[4]+0x00003828u; // 80145608
  c->r[5]=c->r[5]+0x00002D0Cu; // 8014560C
  c->r[6]=0u+0x00000004u; // 80145610
  c->r[7]=0u+0x00000004u; // 80145614
  c->lr=0x8014561Cu; f_802528E4(c); // 80145618
  c->r[3]=c->r[28]+0x00000010u; // 8014561C
  c->lr=0x80145624u; f_8014C774(c); // 80145620
  c->r[0]=R32(c->r[26]+0x00000060u); // 80145624
  c->r[28]=0u+0x00000008u; // 80145628
  c->r[30]=c->r[26]+c->r[0]; // 8014562C
  c->r[0]=R8(c->r[30]+0x00000012u); // 80145630
  cmpu(c,0,c->r[0],0x00000008u); // 80145634
  if (crb(c,1)) { goto L_80145640; } // 80145638
  c->r[28]=c->r[0]|c->r[0]; // 8014563C
L_80145640:;
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; cr0(c,c->r[4]); // 80145640
  if (crb(c,2)) { goto L_80145650; } // 80145644
  c->r[3]=c->r[25]+0x000000F8u; // 80145648
  c->lr=0x80145650u; f_8014C7D8(c); // 8014564C
L_80145650:;
  {uint32_t ea=c->r[26]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80145650
  c->r[5]=rotl(c->r[28],0)&0x000000FFu; cr0(c,c->r[5]); // 80145654
  {uint32_t ea=c->r[26]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 80145658
  {uint32_t ea=c->r[26]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014565C
  {uint32_t ea=c->r[26]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145660
  c->r[6]=R32(c->r[30]+0x00000000u); // 80145664
  c->r[4]=R32(c->r[30]+0x00000004u); // 80145668
  c->r[3]=R32(c->r[30]+0x00000008u); // 8014566C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80145670
  c->r[7]=R32(c->r[27]+0x00000008u); // 80145674
  {uint32_t ea=c->r[25]+0x000000D8u; WF32(ea,c->f[3]);} // 80145678
  c->r[29]=c->r[7]+0x0000000Cu; // 8014567C
  {uint32_t ea=c->r[25]+0x000000DCu; WF32(ea,c->f[2]);} // 80145680
  {uint32_t ea=c->r[25]+0x000000E0u; WF32(ea,c->f[1]);} // 80145684
  {uint32_t ea=c->r[25]+0x000000E4u; WF32(ea,c->f[0]);} // 80145688
  W32(c->r[25]+0x000000E8u,c->r[6]); // 8014568C
  W32(c->r[25]+0x000000ECu,c->r[4]); // 80145690
  W32(c->r[25]+0x000000F0u,c->r[3]); // 80145694
  W32(c->r[25]+0x000000F4u,c->r[0]); // 80145698
  if (crb(c,2)) { goto L_801456B8; } // 8014569C
  c->r[0]=R8(c->r[25]+0x000000F8u); // 801456A0
  cmps(c,0,(int32_t)c->r[0],0); // 801456A4
  if (crb(c,2)) { goto L_801456B8; } // 801456A8
  c->r[3]=c->r[25]+0x000000F8u; // 801456AC
  c->r[4]=c->r[30]+0x00000014u; // 801456B0
  c->lr=0x801456B8u; f_8014C958(c); // 801456B4
L_801456B8:;
  c->r[0]=R16(c->r[30]+0x00000010u); // 801456B8
  c->r[4]=0u+0x0000005Cu; // 801456BC
  c->r[7]=R32(c->r[27]+0x00000008u); // 801456C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801456C4
  c->r[3]=R32(c->r[27]+0x00000000u); // 801456C8
  c->r[6]=R32(c->r[29]+c->r[0]); // 801456CC
  c->r[5]=R32(c->r[27]+0x00000004u); // 801456D0
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801456D4
  c->r[28]=c->r[7]+c->r[6]; // 801456D8
  W32(c->r[1]+0x00000018u,c->r[3]); // 801456DC
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 801456E0
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 801456E4
  W32(c->r[1]+0x00000020u,c->r[7]); // 801456E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801456EC
  c->lr=0x801456F4u; f_8017C1A4(c); // 801456F0
  cmps(c,0,(int32_t)c->r[3],0); // 801456F4
  if (crb(c,2)) { goto L_80145710; } // 801456F8
  if (crb(c,2)) { goto L_80145714; } // 801456FC
  c->r[4]=c->r[28]|c->r[28]; // 80145700
  c->r[5]=c->r[1]+0x00000018u; // 80145704
  c->lr=0x8014570Cu; f_80147F60(c); // 80145708
  goto L_80145714; // 8014570C
L_80145710:;
  c->r[3]=0u+0x00000000u; // 80145710
L_80145714:;
  c->r[30]=R8(c->r[26]+0x0000005Cu); // 80145714
  c->r[28]=0u+0x00000000u; // 80145718
  W32(c->r[25]+0x00000028u,c->r[3]); // 8014571C
  cmps(c,0,(int32_t)c->r[30],0); // 80145720
  W8(c->r[25]+0x00000104u,c->r[28]); // 80145724
  W32(c->r[25]+0x00000100u,c->r[28]); // 80145728
  if (crb(c,2)) { goto L_80145830; } // 8014572C
  W8(c->r[25]+0x00000104u,c->r[28]); // 80145730
  c->r[4]=rotl(c->r[30],3)&0x000007F8u; // 80145734
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80145738
  c->lr=0x80145740u; f_8017C1A4(c); // 8014573C
  cmps(c,0,(int32_t)c->r[3],0); // 80145740
  if (!crb(c,2)) { goto L_80145750; } // 80145744
  c->r[3]=0u+0x00000000u; // 80145748
  goto L_80145778; // 8014574C
L_80145750:;
  c->r[4]=c->r[3]|c->r[3]; // 80145750
  c->ctr=c->r[30]; // 80145754
  cmpu(c,0,c->r[30],0x00000000u); // 80145758
  if (!crb(c,1)) { goto L_80145778; } // 8014575C
L_80145760:;
  cmps(c,0,(int32_t)c->r[4],0); // 80145760
  if (crb(c,2)) { goto L_80145770; } // 80145764
  W8(c->r[4]+0x00000000u,c->r[28]); // 80145768
  W32(c->r[4]+0x00000004u,c->r[28]); // 8014576C
L_80145770:;
  c->r[4]=c->r[4]+0x00000008u; // 80145770
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80145760; } // 80145774
L_80145778:;
  cmps(c,0,(int32_t)c->r[3],0); // 80145778
  W32(c->r[25]+0x00000100u,c->r[3]); // 8014577C
  if (crb(c,2)) { goto L_80145788; } // 80145780
  W8(c->r[25]+0x00000104u,c->r[30]); // 80145784
L_80145788:;
  c->r[0]=R32(c->r[26]+0x00000064u); // 80145788
  c->r[28]=0u+0x00000000u; // 8014578C
  c->r[30]=0u+0x00000000u; // 80145790
  c->r[31]=c->r[26]+c->r[0]; // 80145794
  goto L_80145824; // 80145798
L_8014579C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8014579C
  c->r[4]=0u+0x0000005Cu; // 801457A0
  c->r[3]=R32(c->r[25]+0x00000100u); // 801457A4
  c->r[6]=c->r[26]+c->r[0]; // 801457A8
  c->r[0]=R16(c->r[26]+c->r[0]); // 801457AC
  c->r[5]=R8(c->r[6]+0x00000002u); // 801457B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801457B4
  c->r[7]=R32(c->r[27]+0x00000008u); // 801457B8
  W8(c->r[3]+c->r[30],c->r[5]); // 801457BC
  c->r[3]=R32(c->r[27]+0x00000000u); // 801457C0
  c->r[6]=R32(c->r[29]+c->r[0]); // 801457C4
  c->r[5]=R32(c->r[27]+0x00000004u); // 801457C8
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801457CC
  c->r[24]=c->r[7]+c->r[6]; // 801457D0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801457D4
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 801457D8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801457DC
  W32(c->r[1]+0x00000010u,c->r[7]); // 801457E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801457E4
  c->lr=0x801457ECu; f_8017C1A4(c); // 801457E8
  cmps(c,0,(int32_t)c->r[3],0); // 801457EC
  if (crb(c,2)) { goto L_80145808; } // 801457F0
  if (crb(c,2)) { goto L_8014580C; } // 801457F4
  c->r[4]=c->r[24]|c->r[24]; // 801457F8
  c->r[5]=c->r[1]+0x00000008u; // 801457FC
  c->lr=0x80145804u; f_80147F60(c); // 80145800
  goto L_8014580C; // 80145804
L_80145808:;
  c->r[3]=0u+0x00000000u; // 80145808
L_8014580C:;
  c->r[0]=R32(c->r[25]+0x00000100u); // 8014580C
  c->r[31]=c->r[31]+0x00000004u; // 80145810
  c->r[28]=c->r[28]+0x00000001u; // 80145814
  c->r[4]=c->r[0]+c->r[30]; // 80145818
  c->r[30]=c->r[30]+0x00000008u; // 8014581C
  W32(c->r[4]+0x00000004u,c->r[3]); // 80145820
L_80145824:;
  c->r[0]=R8(c->r[25]+0x00000104u); // 80145824
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80145828
  if (crb(c,0)) { IRQCHK(c); goto L_8014579C; } // 8014582C
L_80145830:;
  c->r[11]=c->r[1]+0x00000050u; // 80145830
  c->r[3]=c->r[25]|c->r[25]; // 80145834
  c->lr=0x8014583Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80145838
  c->r[0]=R32(c->r[1]+0x00000054u); // 8014583C
  c->lr=c->r[0]; // 80145840
  c->r[1]=c->r[1]+0x00000050u; // 80145844
  return; // 80145848
}

// __dt__Q34nw4r3lyt6WindowFv
void f_8014584C(Ctx* __restrict c) {
  trace_call(0x8014584Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014584C
  c->r[0]=c->lr; // 80145850
  W32(c->r[1]+0x00000034u,c->r[0]); // 80145854
  c->r[11]=c->r[1]+0x00000030u; // 80145858
  c->lr=0x80145860u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014585C
  cmps(c,0,(int32_t)c->r[3],0); // 80145860
  c->r[25]=c->r[3]|c->r[3]; // 80145864
  c->r[26]=c->r[4]|c->r[4]; // 80145868
  if (crb(c,2)) { goto L_80145974; } // 8014586C
  c->r[31]=R32(c->r[3]+0x00000100u); // 80145870
  c->r[4]=0u+0x802C0000u; // 80145874
  c->r[4]=c->r[4]+0x0000663Cu; // 80145878
  c->r[30]=R8(c->r[3]+0x00000104u); // 8014587C
  cmps(c,0,(int32_t)c->r[31],0); // 80145880
  W32(c->r[3]+0x00000000u,c->r[4]); // 80145884
  if (crb(c,2)) { goto L_801458EC; } // 80145888
  c->r[27]=c->r[31]|c->r[31]; // 8014588C
  c->r[28]=0u+0x00000000u; // 80145890
  goto L_801458D8; // 80145894
L_80145898:;
  cmps(c,0,(int32_t)c->r[27],0); // 80145898
  if (crb(c,2)) { goto L_801458D0; } // 8014589C
  c->r[29]=R32(c->r[27]+0x00000004u); // 801458A0
  cmps(c,0,(int32_t)c->r[29],0); // 801458A4
  if (crb(c,2)) { goto L_801458D0; } // 801458A8
  c->r[12]=R32(c->r[29]+0x00000000u); // 801458AC
  c->r[3]=c->r[29]|c->r[29]; // 801458B0
  c->r[4]=0u+0xFFFFFFFFu; // 801458B4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801458B8
  c->ctr=c->r[12]; // 801458BC
  if (true) { c->lr=0x801458C4u; dispatch(c,c->ctr); } // 801458C0
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 801458C4
  c->r[4]=c->r[29]|c->r[29]; // 801458C8
  c->lr=0x801458D0u; f_8017C1B4(c); // 801458CC
L_801458D0:;
  c->r[27]=c->r[27]+0x00000008u; // 801458D0
  c->r[28]=c->r[28]+0x00000001u; // 801458D4
L_801458D8:;
  cmpu(c,0,c->r[28],c->r[30]); // 801458D8
  if (crb(c,0)) { IRQCHK(c); goto L_80145898; } // 801458DC
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 801458E0
  c->r[4]=c->r[31]|c->r[31]; // 801458E4
  c->lr=0x801458ECu; f_8017C1B4(c); // 801458E8
L_801458EC:;
  c->r[27]=R32(c->r[25]+0x00000028u); // 801458EC
  cmps(c,1,(int32_t)c->r[27],0); // 801458F0
  if (crb(c,6)) { goto L_80145934; } // 801458F4
  c->r[0]=R8(c->r[27]+0x00000059u); // 801458F8
  cmps(c,0,(int32_t)c->r[0],0); // 801458FC
  if (!crb(c,2)) { goto L_80145934; } // 80145900
  if (crb(c,6)) { goto L_8014592C; } // 80145904
  c->r[12]=R32(c->r[27]+0x00000000u); // 80145908
  c->r[3]=c->r[27]|c->r[27]; // 8014590C
  c->r[4]=0u+0xFFFFFFFFu; // 80145910
  c->r[12]=R32(c->r[12]+0x00000008u); // 80145914
  c->ctr=c->r[12]; // 80145918
  if (true) { c->lr=0x80145920u; dispatch(c,c->ctr); } // 8014591C
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80145920
  c->r[4]=c->r[27]|c->r[27]; // 80145924
  c->lr=0x8014592Cu; f_8017C1B4(c); // 80145928
L_8014592C:;
  c->r[0]=0u+0x00000000u; // 8014592C
  W32(c->r[25]+0x00000028u,c->r[0]); // 80145930
L_80145934:;
  c->r[3]=c->r[25]+0x000000F8u; // 80145934
  c->lr=0x8014593Cu; f_8014C788(c); // 80145938
  c->r[3]=addc(c,c->r[25],0x000000E8u,0); cr0(c,c->r[3]); // 8014593C
  if (crb(c,2)) { goto L_80145958; } // 80145940
  c->r[4]=0u+0x800D0000u; // 80145944
  c->r[5]=0u+0x00000004u; // 80145948
  c->r[4]=c->r[4]+0x00002D0Cu; // 8014594C
  c->r[6]=0u+0x00000004u; // 80145950
  c->lr=0x80145958u; f_802529DC(c); // 80145954
L_80145958:;
  c->r[3]=c->r[25]|c->r[25]; // 80145958
  c->r[4]=0u+0x00000000u; // 8014595C
  c->lr=0x80145964u; f_801417C4(c); // 80145960
  cmps(c,0,(int32_t)c->r[26],0); // 80145964
  if (!crb(c,1)) { goto L_80145974; } // 80145968
  c->r[3]=c->r[25]|c->r[25]; // 8014596C
  c->lr=0x80145974u; f_802525B0(c); // 80145970
L_80145974:;
  c->r[11]=c->r[1]+0x00000030u; // 80145974
  c->r[3]=c->r[25]|c->r[25]; // 80145978
  c->lr=0x80145980u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014597C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80145980
  c->lr=c->r[0]; // 80145984
  c->r[1]=c->r[1]+0x00000030u; // 80145988
  return; // 8014598C
}

// FindMaterialByName__Q34nw4r3lyt6WindowFPCcb
void f_80145990(Ctx* __restrict c) {
  trace_call(0x80145990u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80145990
  c->r[0]=c->lr; // 80145994
  W32(c->r[1]+0x00000024u,c->r[0]); // 80145998
  c->r[11]=c->r[1]+0x00000020u; // 8014599C
  c->lr=0x801459A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801459A0
  c->r[6]=R32(c->r[3]+0x00000028u); // 801459A4
  c->r[27]=c->r[3]|c->r[3]; // 801459A8
  c->r[28]=c->r[4]|c->r[4]; // 801459AC
  c->r[29]=c->r[5]|c->r[5]; // 801459B0
  cmps(c,0,(int32_t)c->r[6],0); // 801459B4
  if (crb(c,2)) { goto L_801459D4; } // 801459B8
  c->r[3]=c->r[6]+0x00000044u; // 801459BC
  c->lr=0x801459C4u; f_8014C720(c); // 801459C0
  cmps(c,0,(int32_t)c->r[3],0); // 801459C4
  if (crb(c,2)) { goto L_801459D4; } // 801459C8
  c->r[3]=R32(c->r[27]+0x00000028u); // 801459CC
  goto L_80145A74; // 801459D0
L_801459D4:;
  c->r[31]=0u+0x00000000u; // 801459D4
  c->r[30]=0u+0x00000000u; // 801459D8
  goto L_80145A1C; // 801459DC
L_801459E0:;
  c->r[0]=R32(c->r[27]+0x00000100u); // 801459E0
  c->r[4]=c->r[28]|c->r[28]; // 801459E4
  c->r[3]=c->r[0]+c->r[30]; // 801459E8
  c->r[3]=R32(c->r[3]+0x00000004u); // 801459EC
  c->r[3]=c->r[3]+0x00000044u; // 801459F0
  c->lr=0x801459F8u; f_8014C720(c); // 801459F4
  cmps(c,0,(int32_t)c->r[3],0); // 801459F8
  if (crb(c,2)) { goto L_80145A14; } // 801459FC
  c->r[3]=R32(c->r[27]+0x00000100u); // 80145A00
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 80145A04
  c->r[3]=c->r[3]+c->r[0]; // 80145A08
  c->r[3]=R32(c->r[3]+0x00000004u); // 80145A0C
  goto L_80145A74; // 80145A10
L_80145A14:;
  c->r[30]=c->r[30]+0x00000008u; // 80145A14
  c->r[31]=c->r[31]+0x00000001u; // 80145A18
L_80145A1C:;
  c->r[0]=R8(c->r[27]+0x00000104u); // 80145A1C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80145A20
  if (crb(c,0)) { IRQCHK(c); goto L_801459E0; } // 80145A24
  cmps(c,0,(int32_t)c->r[29],0); // 80145A28
  if (crb(c,2)) { goto L_80145A70; } // 80145A2C
  c->r[31]=R32(c->r[27]+0x00000014u); // 80145A30
  c->r[30]=c->r[27]+0x00000014u; // 80145A34
  goto L_80145A68; // 80145A38
L_80145A3C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80145A3C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80145A40
  c->r[4]=c->r[28]|c->r[28]; // 80145A44
  c->r[5]=c->r[29]|c->r[29]; // 80145A48
  c->r[12]=R32(c->r[12]+0x00000040u); // 80145A4C
  c->ctr=c->r[12]; // 80145A50
  if (true) { c->lr=0x80145A58u; dispatch(c,c->ctr); } // 80145A54
  cmps(c,0,(int32_t)c->r[3],0); // 80145A58
  if (crb(c,2)) { goto L_80145A64; } // 80145A5C
  goto L_80145A74; // 80145A60
L_80145A64:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 80145A64
L_80145A68:;
  cmpu(c,0,c->r[31],c->r[30]); // 80145A68
  if (!crb(c,2)) { IRQCHK(c); goto L_80145A3C; } // 80145A6C
L_80145A70:;
  c->r[3]=0u+0x00000000u; // 80145A70
L_80145A74:;
  c->r[11]=c->r[1]+0x00000020u; // 80145A74
  c->lr=0x80145A7Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80145A78
  c->r[0]=R32(c->r[1]+0x00000024u); // 80145A7C
  c->lr=c->r[0]; // 80145A80
  c->r[1]=c->r[1]+0x00000020u; // 80145A84
  return; // 80145A88
}

// GetVtxColor__Q34nw4r3lyt6WindowCFUl
void f_80145A8C(Ctx* __restrict c) {
  trace_call(0x80145A8Cu);
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80145A8C
  c->r[7]=c->r[4]+c->r[0]; // 80145A90
  c->r[6]=R8(c->r[7]+0x000000E8u); // 80145A94
  c->r[5]=R8(c->r[7]+0x000000E9u); // 80145A98
  c->r[4]=R8(c->r[7]+0x000000EAu); // 80145A9C
  c->r[0]=R8(c->r[7]+0x000000EBu); // 80145AA0
  W8(c->r[3]+0x00000000u,c->r[6]); // 80145AA4
  W8(c->r[3]+0x00000001u,c->r[5]); // 80145AA8
  W8(c->r[3]+0x00000002u,c->r[4]); // 80145AAC
  W8(c->r[3]+0x00000003u,c->r[0]); // 80145AB0
  return; // 80145AB4
}

// SetVtxColor__Q34nw4r3lyt6WindowFUlQ34nw4r2ut5Color
void f_80145AB8(Ctx* __restrict c) {
  trace_call(0x80145AB8u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80145AB8
  c->r[6]=R8(c->r[5]+0x00000000u); // 80145ABC
  c->r[4]=c->r[3]+c->r[0]; // 80145AC0
  c->r[0]=R8(c->r[5]+0x00000001u); // 80145AC4
  W8(c->r[4]+0x000000E8u,c->r[6]); // 80145AC8
  c->r[3]=R8(c->r[5]+0x00000002u); // 80145ACC
  W8(c->r[4]+0x000000E9u,c->r[0]); // 80145AD0
  c->r[0]=R8(c->r[5]+0x00000003u); // 80145AD4
  W8(c->r[4]+0x000000EAu,c->r[3]); // 80145AD8
  W8(c->r[4]+0x000000EBu,c->r[0]); // 80145ADC
  return; // 80145AE0
}

// GetVtxColorElement__Q34nw4r3lyt6WindowCFUl
void f_80145AE4(Ctx* __restrict c) {
  trace_call(0x80145AE4u);
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFCu; // 80145AE4
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80145AE8
  c->r[3]=c->r[3]+c->r[5]; // 80145AEC
  c->r[3]=c->r[3]+c->r[0]; // 80145AF0
  c->r[3]=R8(c->r[3]+0x000000E8u); // 80145AF4
  return; // 80145AF8
}

// SetVtxColorElement__Q34nw4r3lyt6WindowFUlUc
void f_80145AFC(Ctx* __restrict c) {
  trace_call(0x80145AFCu);
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 80145AFC
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80145B00
  c->r[3]=c->r[3]+c->r[6]; // 80145B04
  c->r[3]=c->r[3]+c->r[0]; // 80145B08
  W8(c->r[3]+0x000000E8u,c->r[5]); // 80145B0C
  return; // 80145B10
}

// DrawSelf__Q34nw4r3lyt6WindowFRCQ34nw4r3lyt8DrawInfo
void f_80145B14(Ctx* __restrict c) {
  trace_call(0x80145B14u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80145B14
  c->r[0]=c->lr; // 80145B18
  W32(c->r[1]+0x00000044u,c->r[0]); // 80145B1C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80145B20
  c->r[31]=c->r[3]|c->r[3]; // 80145B24
  c->r[12]=R32(c->r[3]+0x00000000u); // 80145B28
  c->r[12]=R32(c->r[12]+0x00000070u); // 80145B2C
  c->ctr=c->r[12]; // 80145B30
  if (true) { c->lr=0x80145B38u; dispatch(c,c->ctr); } // 80145B34
  c->r[5]=R8(c->r[31]+0x00000104u); // 80145B38
  c->r[4]=c->r[31]|c->r[31]; // 80145B3C
  c->r[6]=R32(c->r[31]+0x00000100u); // 80145B40
  c->r[3]=c->r[1]+0x00000018u; // 80145B44
  c->lr=0x80145B4Cu; f_801479F4(c); // 80145B48
  c->r[6]=R32(c->r[1]+0x00000018u); // 80145B4C
  c->r[3]=c->r[31]|c->r[31]; // 80145B50
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 80145B54
  c->r[4]=R32(c->r[1]+0x00000020u); // 80145B58
  c->r[0]=R32(c->r[1]+0x00000024u); // 80145B5C
  W32(c->r[1]+0x00000028u,c->r[6]); // 80145B60
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 80145B64
  W32(c->r[1]+0x00000030u,c->r[4]); // 80145B68
  W32(c->r[1]+0x00000034u,c->r[0]); // 80145B6C
  c->lr=0x80145B74u; f_801423D0(c); // 80145B70
  W32(c->r[1]+0x00000010u,c->r[3]); // 80145B74
  c->r[5]=c->r[1]+0x00000028u; // 80145B78
  W32(c->r[1]+0x00000014u,c->r[4]); // 80145B7C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80145B80
  W32(c->r[1]+0x00000008u,c->r[3]); // 80145B84
  c->r[3]=c->r[31]|c->r[31]; // 80145B88
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 80145B8C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80145B90
  c->r[4]=c->r[1]+0x00000010u; // 80145B94
  c->r[6]=R8(c->r[31]+0x000000B9u); // 80145B98
  c->ctr=c->r[12]; // 80145B9C
  if (true) { c->lr=0x80145BA4u; dispatch(c,c->ctr); } // 80145BA0
  c->r[0]=R8(c->r[31]+0x00000104u); // 80145BA4
  cmps(c,0,(int32_t)c->r[0],4); // 80145BA8
  if (crb(c,2)) { goto L_80145BF4; } // 80145BAC
  if (!crb(c,0)) { goto L_80145BC0; } // 80145BB0
  cmps(c,0,(int32_t)c->r[0],1); // 80145BB4
  if (crb(c,2)) { goto L_80145BCC; } // 80145BB8
  goto L_80145C40; // 80145BBC
L_80145BC0:;
  cmps(c,0,(int32_t)c->r[0],8); // 80145BC0
  if (crb(c,2)) { goto L_80145C1C; } // 80145BC4
  goto L_80145C40; // 80145BC8
L_80145BCC:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80145BCC
  c->r[3]=c->r[31]|c->r[31]; // 80145BD0
  c->r[4]=c->r[1]+0x00000010u; // 80145BD4
  c->r[6]=c->r[1]+0x00000028u; // 80145BD8
  c->r[12]=R32(c->r[12]+0x00000080u); // 80145BDC
  c->r[5]=R32(c->r[31]+0x00000100u); // 80145BE0
  c->r[7]=R8(c->r[31]+0x000000B9u); // 80145BE4
  c->ctr=c->r[12]; // 80145BE8
  if (true) { c->lr=0x80145BF0u; dispatch(c,c->ctr); } // 80145BEC
  goto L_80145C40; // 80145BF0
L_80145BF4:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80145BF4
  c->r[3]=c->r[31]|c->r[31]; // 80145BF8
  c->r[4]=c->r[1]+0x00000010u; // 80145BFC
  c->r[6]=c->r[1]+0x00000028u; // 80145C00
  c->r[12]=R32(c->r[12]+0x00000084u); // 80145C04
  c->r[5]=R32(c->r[31]+0x00000100u); // 80145C08
  c->r[7]=R8(c->r[31]+0x000000B9u); // 80145C0C
  c->ctr=c->r[12]; // 80145C10
  if (true) { c->lr=0x80145C18u; dispatch(c,c->ctr); } // 80145C14
  goto L_80145C40; // 80145C18
L_80145C1C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80145C1C
  c->r[3]=c->r[31]|c->r[31]; // 80145C20
  c->r[4]=c->r[1]+0x00000010u; // 80145C24
  c->r[6]=c->r[1]+0x00000028u; // 80145C28
  c->r[12]=R32(c->r[12]+0x00000088u); // 80145C2C
  c->r[5]=R32(c->r[31]+0x00000100u); // 80145C30
  c->r[7]=R8(c->r[31]+0x000000B9u); // 80145C34
  c->ctr=c->r[12]; // 80145C38
  if (true) { c->lr=0x80145C40u; dispatch(c,c->ctr); } // 80145C3C
L_80145C40:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 80145C40
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80145C44
  c->lr=c->r[0]; // 80145C48
  c->r[1]=c->r[1]+0x00000040u; // 80145C4C
  return; // 80145C50
}

// AnimateSelf__Q34nw4r3lyt6WindowFUl
void f_80145C54(Ctx* __restrict c) {
  trace_call(0x80145C54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80145C54
  c->r[0]=c->lr; // 80145C58
  W32(c->r[1]+0x00000024u,c->r[0]); // 80145C5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80145C60
  W32(c->r[1]+0x00000018u,c->r[30]); // 80145C64
  c->r[30]=c->r[4]|c->r[4]; // 80145C68
  W32(c->r[1]+0x00000014u,c->r[29]); // 80145C6C
  c->r[29]=c->r[3]|c->r[3]; // 80145C70
  c->lr=0x80145C78u; f_80141F5C(c); // 80145C74
  c->r[0]=R8(c->r[29]+0x000000BBu); // 80145C78
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80145C7C
  if (!crb(c,2)) { goto L_80145C8C; } // 80145C80
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 80145C84
  if (!crb(c,2)) { goto L_80145CC8; } // 80145C88
L_80145C8C:;
  c->r[30]=0u+0x00000000u; // 80145C8C
  c->r[31]=0u+0x00000000u; // 80145C90
  goto L_80145CBC; // 80145C94
L_80145C98:;
  c->r[0]=R32(c->r[29]+0x00000100u); // 80145C98
  c->r[3]=c->r[0]+c->r[31]; // 80145C9C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80145CA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80145CA4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80145CA8
  c->ctr=c->r[12]; // 80145CAC
  if (true) { c->lr=0x80145CB4u; dispatch(c,c->ctr); } // 80145CB0
  c->r[31]=c->r[31]+0x00000008u; // 80145CB4
  c->r[30]=c->r[30]+0x00000001u; // 80145CB8
L_80145CBC:;
  c->r[0]=R8(c->r[29]+0x00000104u); // 80145CBC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80145CC0
  if (crb(c,0)) { IRQCHK(c); goto L_80145C98; } // 80145CC4
L_80145CC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80145CC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80145CCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80145CD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80145CD4
  c->lr=c->r[0]; // 80145CD8
  c->r[1]=c->r[1]+0x00000020u; // 80145CDC
  return; // 80145CE0
}

// UnbindAnimationSelf__Q34nw4r3lyt6WindowFPQ34nw4r3lyt13AnimTransform
void f_80145CE4(Ctx* __restrict c) {
  trace_call(0x80145CE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80145CE4
  c->r[0]=c->lr; // 80145CE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80145CEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80145CF0
  c->r[31]=0u+0x00000000u; // 80145CF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80145CF8
  c->r[30]=0u+0x00000000u; // 80145CFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80145D00
  c->r[29]=c->r[4]|c->r[4]; // 80145D04
  W32(c->r[1]+0x00000010u,c->r[28]); // 80145D08
  c->r[28]=c->r[3]|c->r[3]; // 80145D0C
  goto L_80145D3C; // 80145D10
L_80145D14:;
  c->r[0]=R32(c->r[28]+0x00000100u); // 80145D14
  c->r[4]=c->r[29]|c->r[29]; // 80145D18
  c->r[3]=c->r[0]+c->r[31]; // 80145D1C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80145D20
  c->r[12]=R32(c->r[3]+0x00000000u); // 80145D24
  c->r[12]=R32(c->r[12]+0x00000014u); // 80145D28
  c->ctr=c->r[12]; // 80145D2C
  if (true) { c->lr=0x80145D34u; dispatch(c,c->ctr); } // 80145D30
  c->r[31]=c->r[31]+0x00000008u; // 80145D34
  c->r[30]=c->r[30]+0x00000001u; // 80145D38
L_80145D3C:;
  c->r[0]=R8(c->r[28]+0x00000104u); // 80145D3C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80145D40
  if (crb(c,0)) { IRQCHK(c); goto L_80145D14; } // 80145D44
  c->r[3]=c->r[28]|c->r[28]; // 80145D48
  c->r[4]=c->r[29]|c->r[29]; // 80145D4C
  c->lr=0x80145D54u; f_801420D4(c); // 80145D50
  c->r[0]=R32(c->r[1]+0x00000024u); // 80145D54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80145D58
  c->r[30]=R32(c->r[1]+0x00000018u); // 80145D5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80145D60
  c->r[28]=R32(c->r[1]+0x00000010u); // 80145D64
  c->lr=c->r[0]; // 80145D68
  c->r[1]=c->r[1]+0x00000020u; // 80145D6C
  return; // 80145D70
}

// DrawContent__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt15WindowFrameSizeUc
void f_80145D74(Ctx* __restrict c) {
  trace_call(0x80145D74u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80145D74
  c->r[0]=c->lr; // 80145D78
  W32(c->r[1]+0x00000034u,c->r[0]); // 80145D7C
  c->r[11]=c->r[1]+0x00000030u; // 80145D80
  c->lr=0x80145D88u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80145D84
  c->r[30]=c->r[6]|c->r[6]; // 80145D88
  c->r[27]=c->r[3]|c->r[3]; // 80145D8C
  c->r[28]=c->r[4]|c->r[4]; // 80145D90
  c->r[29]=c->r[5]|c->r[5]; // 80145D94
  c->r[4]=c->r[30]|c->r[30]; // 80145D98
  c->r[3]=c->r[3]+0x000000E8u; // 80145D9C
  c->lr=0x80145DA4u; f_8014C9EC(c); // 80145DA0
  c->r[4]=c->r[3]|c->r[3]; // 80145DA4
  c->r[3]=R32(c->r[27]+0x00000028u); // 80145DA8
  c->r[5]=c->r[30]|c->r[30]; // 80145DAC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80145DB0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80145DB4
  c->ctr=c->r[12]; // 80145DB8
  if (true) { c->lr=0x80145DC0u; dispatch(c,c->ctr); } // 80145DBC
  c->r[4]=R8(c->r[27]+0x000000F9u); // 80145DC0
  c->r[31]=c->r[3]|c->r[3]; // 80145DC4
  c->lr=0x80145DCCu; f_8014CAA8(c); // 80145DC8
  cmps(c,0,(int32_t)c->r[31],0); // 80145DCC
  if (crb(c,2)) { goto L_80145DDC; } // 80145DD0
  c->r[7]=c->r[27]+0x000000E8u; // 80145DD4
  goto L_80145DE0; // 80145DD8
L_80145DDC:;
  c->r[7]=0u+0x00000000u; // 80145DDC
L_80145DE0:;
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80145DE0
  c->r[8]=c->r[30]|c->r[30]; // 80145DE4
  {uint32_t ea=c->r[29]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 80145DE8
  c->r[3]=c->r[1]+0x00000010u; // 80145DEC
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80145DF0
  c->r[4]=c->r[1]+0x00000008u; // 80145DF4
  {uint32_t ea=c->r[29]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 80145DF8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 80145DFC
  {uint32_t ea=c->r[27]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80145E00
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 80145E04
  {uint32_t ea=c->r[27]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145E08
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[3]); // 80145E0C
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80145E10
  c->r[6]=R32(c->r[27]+0x000000FCu); // 80145E14
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 80145E18
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80145E1C
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[3]); // 80145E20
  {uint32_t ea=c->r[27]+0x000000E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80145E24
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80145E28
  {uint32_t ea=c->r[27]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80145E2C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[5]); // 80145E30
  c->r[5]=R8(c->r[27]+0x000000F9u); // 80145E34
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 80145E38
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80145E3C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 80145E40
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145E44
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 80145E48
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80145E4C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[4]); // 80145E50
  {uint32_t ea=c->r[27]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80145E54
  {uint32_t ea=c->r[27]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145E58
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 80145E5C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80145E60
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 80145E64
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80145E68
  c->lr=0x80145E70u; f_8014D0EC(c); // 80145E6C
  c->r[11]=c->r[1]+0x00000030u; // 80145E70
  c->lr=0x80145E78u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80145E74
  c->r[0]=R32(c->r[1]+0x00000034u); // 80145E78
  c->lr=c->r[0]; // 80145E7C
  c->r[1]=c->r[1]+0x00000030u; // 80145E80
  return; // 80145E84
}

// DrawFrame__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2RCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc
void f_80145E88(Ctx* __restrict c) {
  trace_call(0x80145E88u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80145E88
  c->r[0]=c->lr; // 80145E8C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80145E90
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 80145E94
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 80145E98
  c->r[11]=c->r[1]+0x000000D0u; // 80145E9C
  c->lr=0x80145EA4u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80145EA0
  c->r[8]=R32(c->r[5]+0x00000004u); // 80145EA4
  c->r[9]=0u+0x43300000u; // 80145EA8
  W32(c->r[1]+0x00000088u,c->r[9]); // 80145EAC
  c->r[27]=c->r[3]|c->r[3]; // 80145EB0
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 80145EB4
  c->r[28]=c->r[4]|c->r[4]; // 80145EB8
  W32(c->r[1]+0x00000090u,c->r[9]); // 80145EBC
  c->r[20]=c->r[5]|c->r[5]; // 80145EC0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 80145EC4
  c->r[29]=c->r[6]|c->r[6]; // 80145EC8
  c->r[30]=c->r[7]|c->r[7]; // 80145ECC
  if (crb(c,2)) { goto L_80146448; } // 80145ED0
  c->r[4]=c->r[30]|c->r[30]; // 80145ED4
  c->r[3]=0u+0x00000000u; // 80145ED8
  c->lr=0x80145EE0u; f_8014C9EC(c); // 80145EDC
  c->r[4]=c->r[3]|c->r[3]; // 80145EE0
  c->r[3]=R32(c->r[20]+0x00000004u); // 80145EE4
  c->r[5]=c->r[30]|c->r[30]; // 80145EE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80145EEC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80145EF0
  c->ctr=c->r[12]; // 80145EF4
  if (true) { c->lr=0x80145EFCu; dispatch(c,c->ctr); } // 80145EF8
  c->r[31]=c->r[3]|c->r[3]; // 80145EFC
  c->r[4]=0u+0x00000001u; // 80145F00
  c->lr=0x80145F08u; f_8014CAA8(c); // 80145F04
  c->r[4]=R32(c->r[20]+0x00000004u); // 80145F08
  c->r[3]=c->r[1]+0x00000050u; // 80145F0C
  c->r[5]=0u+0x00000000u; // 80145F10
  c->lr=0x80145F18u; f_8014A960(c); // 80145F14
  c->r[21]=0u+0x802C0000u; // 80145F18
  c->r[0]=0u+0xFFFFFFFFu; // 80145F1C
  c->r[21]=c->r[21]+0x00006600u; // 80145F20
  {uint32_t ea=c->r[2]+0xFFFFA8B8u; c->f[12]=c->ps1[12]=RF32(ea);} // 80145F24
  c->r[6]=R8(c->r[21]+0x00000009u); // 80145F28
  c->r[3]=0u-c->r[31]; // 80145F2C
  c->r[7]=R8(c->r[21]+0x00000008u); // 80145F30
  c->r[9]=c->r[1]+0x00000038u; // 80145F34
  c->r[12]=R8(c->r[21]+c->r[6]); // 80145F38
  c->r[4]=c->r[21]+c->r[6]; // 80145F3C
  c->r[5]=c->r[21]+c->r[7]; // 80145F40
  c->r[11]=R8(c->r[21]+c->r[7]); // 80145F44
  W32(c->r[1]+0x00000094u,c->r[12]); // 80145F48
  c->r[10]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80145F4C
  c->r[5]=R8(c->r[5]+0x00000002u); // 80145F50
  c->r[20]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80145F54
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 80145F58
  c->r[23]=c->r[1]+0x00000068u; // 80145F5C
  c->r[5]=c->r[5]-c->r[11]; // 80145F60
  c->r[4]=R8(c->r[4]+0x00000004u); // 80145F64
  c->r[5]=c->r[5]^0x80000000u; // 80145F68
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[3]=RF64(ea);} // 80145F6C
  W32(c->r[1]+0x00000094u,c->r[5]); // 80145F70
  c->r[4]=c->r[4]-c->r[12]; // 80145F74
  {uint32_t ea=c->r[28]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 80145F78
  c->r[3]=c->r[3]|c->r[31]; // 80145F7C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80145F80
  c->r[4]=c->r[4]^0x80000000u; // 80145F84
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[1]=RF64(ea);} // 80145F88
  c->r[5]=sraw(c,c->r[3],31); // 80145F8C
  W32(c->r[1]+0x00000094u,c->r[4]); // 80145F90
  c->r[26]=c->r[1]+0x00000058u; // 80145F94
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 80145F98
  {uint32_t ea=c->r[28]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 80145F9C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80145FA0
  c->r[7]=c->r[26]&c->r[5]; // 80145FA4
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 80145FA8
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[3]); // 80145FAC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80145FB0
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 80145FB4
  {uint32_t ea=c->r[1]+0x00000054u; c->f[13]=c->ps1[13]=RF32(ea);} // 80145FB8
  c->r[22]=c->r[1]+0x00000078u; // 80145FBC
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 80145FC0
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[3]); // 80145FC4
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 80145FC8
  c->r[24]=c->r[1]+0x00000070u; // 80145FCC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=c->ps1[31]=RF32(ea);} // 80145FD0
  c->r[25]=c->r[1]+0x00000080u; // 80145FD4
  W32(c->r[1]+0x0000008Cu,c->r[12]); // 80145FD8
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[3]); // 80145FDC
  {uint32_t ea=c->r[29]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 80145FE0
  c->r[6]=c->r[23]|c->r[23]; // 80145FE4
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 80145FE8
  c->r[8]=c->r[30]|c->r[30]; // 80145FEC
  W32(c->r[1]+0x00000058u,c->r[0]); // 80145FF0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 80145FF4
  {uint32_t ea=c->r[29]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 80145FF8
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 80145FFC
  c->r[3]=c->r[1]+0x00000048u; // 80146000
  c->r[4]=c->r[1]+0x00000040u; // 80146004
  c->r[5]=0u+0x00000001u; // 80146008
  W32(c->r[1]+0x00000060u,c->r[0]); // 8014600C
  W32(c->r[1]+0x00000064u,c->r[0]); // 80146010
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[12]);} // 80146014
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[12]);} // 80146018
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[11]);} // 8014601C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[10]);} // 80146020
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80146024
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[31]);} // 80146028
  c->f[9]=c->ps1[9]=S(c->f[0]-c->f[9]); // 8014602C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[13]);} // 80146030
  {uint32_t ea=c->r[9]+c->r[10]; c->f[3]=c->ps1[3]=RF32(ea);} // 80146034
  {uint32_t ea=c->r[9]+c->r[20]; c->f[0]=c->ps1[0]=RF32(ea);} // 80146038
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[7]);} // 8014603C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 80146040
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80146044
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[7]);} // 80146048
  c->f[1]=c->ps1[1]=S(c->f[9]/c->f[3]); // 8014604C
  {uint32_t ea=c->r[24]+c->r[20]; WF32(ea,c->f[6]);} // 80146050
  {uint32_t ea=c->r[23]+c->r[20]; WF32(ea,c->f[6]);} // 80146054
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[9]);} // 80146058
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 8014605C
  c->f[0]=c->ps1[0]=S(c->f[8]/c->f[0]); // 80146060
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 80146064
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80146068
  {uint32_t ea=c->r[24]+c->r[10]; WF32(ea,c->f[1]);} // 8014606C
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[1]);} // 80146070
  {uint32_t ea=c->r[22]+c->r[20]; WF32(ea,c->f[0]);} // 80146074
  {uint32_t ea=c->r[25]+c->r[20]; WF32(ea,c->f[0]);} // 80146078
  c->lr=0x80146080u; f_8014D0EC(c); // 8014607C
  c->r[6]=R8(c->r[21]+0x00000013u); // 80146080
  c->r[8]=c->r[21]+0x0000000Au; // 80146084
  c->r[7]=R8(c->r[21]+0x00000012u); // 80146088
  c->r[0]=0u-c->r[31]; // 8014608C
  c->r[4]=c->r[8]+c->r[6]; // 80146090
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 80146094
  c->r[3]=c->r[0]|c->r[31]; // 80146098
  c->r[0]=R8(c->r[4]+0x00000002u); // 8014609C
  c->r[5]=c->r[8]+c->r[7]; // 801460A0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 801460A4
  c->r[9]=R8(c->r[5]+0x00000002u); // 801460A8
  c->r[5]=sraw(c,c->r[3],31); // 801460AC
  c->r[3]=R8(c->r[8]+c->r[7]); // 801460B0
  c->r[10]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801460B4
  W32(c->r[1]+0x00000094u,c->r[0]); // 801460B8
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801460BC
  c->r[3]=c->r[3]-c->r[9]; // 801460C0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801460C4
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801460C8
  c->r[3]=c->r[3]^0x80000000u; // 801460CC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=RF64(ea);} // 801460D0
  c->r[7]=c->r[26]&c->r[5]; // 801460D4
  {uint32_t ea=c->r[29]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 801460D8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801460DC
  W32(c->r[1]+0x00000094u,c->r[3]); // 801460E0
  c->r[20]=c->r[1]+0x00000028u; // 801460E4
  c->r[3]=R8(c->r[4]+0x00000006u); // 801460E8
  c->r[6]=c->r[23]|c->r[23]; // 801460EC
  c->f[10]=c->ps1[10]=S(c->f[0]-c->f[8]); // 801460F0
  {uint32_t ea=c->r[28]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 801460F4
  c->r[3]=c->r[3]-c->r[0]; // 801460F8
  c->r[12]=c->r[3]^0x80000000u; // 801460FC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80146100
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[3]=RF64(ea);} // 80146104
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[5]);} // 80146108
  c->r[8]=c->r[30]|c->r[30]; // 8014610C
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[6]=RF64(ea);} // 80146110
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 80146114
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 80146118
  c->r[3]=c->r[1]+0x00000048u; // 8014611C
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[6]); // 80146120
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 80146124
  W32(c->r[1]+0x00000094u,c->r[12]); // 80146128
  {uint32_t ea=c->r[20]+c->r[10]; c->f[1]=c->ps1[1]=RF32(ea);} // 8014612C
  c->r[4]=c->r[1]+0x00000040u; // 80146130
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80146134
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 80146138
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 8014613C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 80146140
  {uint32_t ea=c->r[20]+c->r[11]; c->f[0]=c->ps1[0]=RF32(ea);} // 80146144
  {uint32_t ea=c->r[1]+0x00000088u; c->f[5]=RF64(ea);} // 80146148
  c->r[5]=0u+0x00000001u; // 8014614C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[10]);} // 80146150
  c->f[2]=c->ps1[2]=S(c->f[8]/c->f[2]); // 80146154
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 80146158
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 8014615C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[9]);} // 80146160
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[8]);} // 80146164
  {uint32_t ea=c->r[27]+0x00000050u; c->f[8]=c->ps1[8]=RF32(ea);} // 80146168
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 8014616C
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 80146170
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80146174
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[6]); // 80146178
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 8014617C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[6]); // 80146180
  c->f[0]=c->ps1[0]=S(c->f[7]/c->f[0]); // 80146184
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[10]);} // 80146188
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[5]);} // 8014618C
  {uint32_t ea=c->r[24]+c->r[10]; WF32(ea,c->f[5]);} // 80146190
  {uint32_t ea=c->r[23]+c->r[11]; WF32(ea,c->f[4]);} // 80146194
  {uint32_t ea=c->r[24]+c->r[11]; WF32(ea,c->f[4]);} // 80146198
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8014619C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[9]);} // 801461A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 801461A4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 801461A8
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[2]);} // 801461AC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801461B0
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[2]);} // 801461B4
  {uint32_t ea=c->r[25]+c->r[11]; WF32(ea,c->f[0]);} // 801461B8
  {uint32_t ea=c->r[22]+c->r[11]; WF32(ea,c->f[0]);} // 801461BC
  c->lr=0x801461C4u; f_8014D0EC(c); // 801461C0
  c->r[6]=R8(c->r[21]+0x00000031u); // 801461C4
  c->r[4]=c->r[21]+0x00000028u; // 801461C8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801461CC
  c->r[0]=0u-c->r[31]; // 801461D0
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801461D4
  c->r[7]=c->r[4]+c->r[6]; // 801461D8
  c->r[8]=R8(c->r[21]+0x00000030u); // 801461DC
  c->r[3]=c->r[0]|c->r[31]; // 801461E0
  c->r[0]=R8(c->r[7]+0x00000006u); // 801461E4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801461E8
  c->r[4]=c->r[4]+c->r[8]; // 801461EC
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 801461F0
  c->r[5]=sraw(c,c->r[3],31); // 801461F4
  W32(c->r[1]+0x00000094u,c->r[0]); // 801461F8
  c->f[9]=c->ps1[9]=S(c->f[8]+c->f[0]); // 801461FC
  c->r[9]=R8(c->r[4]+0x00000006u); // 80146200
  c->r[10]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80146204
  c->r[3]=R8(c->r[4]+0x00000004u); // 80146208
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8014620C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146210
  c->r[4]=c->r[3]-c->r[9]; // 80146214
  c->r[3]=R8(c->r[7]+0x00000002u); // 80146218
  {uint32_t ea=c->r[29]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 8014621C
  c->r[4]=c->r[4]^0x80000000u; // 80146220
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 80146224
  c->r[3]=c->r[3]-c->r[0]; // 80146228
  c->f[10]=c->ps1[10]=S(c->f[0]+c->f[5]); // 8014622C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[11]=c->ps1[11]=RF32(ea);} // 80146230
  W32(c->r[1]+0x00000094u,c->r[4]); // 80146234
  c->r[12]=c->r[3]^0x80000000u; // 80146238
  {uint32_t ea=c->r[1]+0x00000050u; c->f[12]=c->ps1[12]=RF32(ea);} // 8014623C
  c->r[20]=c->r[1]+0x00000018u; // 80146240
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80146244
  c->r[7]=c->r[26]&c->r[5]; // 80146248
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[1]=RF64(ea);} // 8014624C
  c->r[6]=c->r[23]|c->r[23]; // 80146250
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[6]=RF64(ea);} // 80146254
  c->r[8]=c->r[30]|c->r[30]; // 80146258
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[10]);} // 8014625C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 80146260
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 80146264
  c->r[3]=c->r[1]+0x00000048u; // 80146268
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[9]);} // 8014626C
  c->r[4]=c->r[1]+0x00000040u; // 80146270
  c->r[5]=0u+0x00000001u; // 80146274
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80146278
  W32(c->r[1]+0x00000094u,c->r[12]); // 8014627C
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[5]); // 80146280
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80146284
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[12]);} // 80146288
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8014628C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[11]);} // 80146290
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 80146294
  {uint32_t ea=c->r[20]+c->r[10]; c->f[2]=c->ps1[2]=RF32(ea);} // 80146298
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 8014629C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801462A0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[10]);} // 801462A4
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[6]); // 801462A8
  {uint32_t ea=c->r[20]+c->r[11]; c->f[0]=c->ps1[0]=RF32(ea);} // 801462AC
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 801462B0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801462B4
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 801462B8
  c->f[2]=c->ps1[2]=S(c->f[7]/c->f[2]); // 801462BC
  {uint32_t ea=c->r[24]+c->r[10]; WF32(ea,c->f[5]);} // 801462C0
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[5]);} // 801462C4
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 801462C8
  {uint32_t ea=c->r[22]+c->r[11]; WF32(ea,c->f[4]);} // 801462CC
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 801462D0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[6]); // 801462D4
  {uint32_t ea=c->r[25]+c->r[11]; WF32(ea,c->f[4]);} // 801462D8
  c->f[0]=c->ps1[0]=S(c->f[8]/c->f[0]); // 801462DC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[9]);} // 801462E0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[7]);} // 801462E4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 801462E8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801462EC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 801462F0
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[2]);} // 801462F4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801462F8
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[2]);} // 801462FC
  {uint32_t ea=c->r[24]+c->r[11]; WF32(ea,c->f[0]);} // 80146300
  {uint32_t ea=c->r[23]+c->r[11]; WF32(ea,c->f[0]);} // 80146304
  c->lr=0x8014630Cu; f_8014D0EC(c); // 80146308
  c->r[6]=R8(c->r[21]+0x0000001Du); // 8014630C
  c->r[7]=c->r[21]+0x00000014u; // 80146310
  {uint32_t ea=c->r[28]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 80146314
  c->r[0]=0u-c->r[31]; // 80146318
  c->r[3]=c->r[7]+c->r[6]; // 8014631C
  c->r[4]=R8(c->r[21]+0x0000001Cu); // 80146320
  c->r[11]=R8(c->r[3]+0x00000004u); // 80146324
  c->r[0]=c->r[0]|c->r[31]; // 80146328
  c->r[3]=c->r[7]+c->r[4]; // 8014632C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 80146330
  c->r[12]=R8(c->r[3]+0x00000004u); // 80146334
  c->r[5]=sraw(c,c->r[0],31); // 80146338
  W32(c->r[1]+0x00000094u,c->r[11]); // 8014633C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80146340
  c->r[3]=R8(c->r[3]+0x00000006u); // 80146344
  c->r[10]=c->r[1]+0x00000008u; // 80146348
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 8014634C
  c->r[9]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80146350
  c->r[4]=c->r[3]-c->r[12]; // 80146354
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80146358
  c->r[3]=R8(c->r[7]+c->r[6]); // 8014635C
  c->r[4]=c->r[4]^0x80000000u; // 80146360
  W32(c->r[1]+0x00000094u,c->r[4]); // 80146364
  c->r[7]=c->r[26]&c->r[5]; // 80146368
  {uint32_t ea=c->r[29]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 8014636C
  c->r[3]=c->r[3]-c->r[11]; // 80146370
  {uint32_t ea=c->r[1]+0x00000050u; c->f[6]=c->ps1[6]=RF32(ea);} // 80146374
  c->r[3]=c->r[3]^0x80000000u; // 80146378
  c->f[8]=c->ps1[8]=S(c->f[1]-c->f[7]); // 8014637C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80146380
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[1]=RF64(ea);} // 80146384
  c->r[6]=c->r[23]|c->r[23]; // 80146388
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 8014638C
  c->r[8]=c->r[30]|c->r[30]; // 80146390
  W32(c->r[1]+0x00000094u,c->r[3]); // 80146394
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 80146398
  {uint32_t ea=c->r[29]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 8014639C
  c->r[3]=c->r[1]+0x00000048u; // 801463A0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 801463A4
  c->r[4]=c->r[1]+0x00000040u; // 801463A8
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[6]=RF64(ea);} // 801463AC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 801463B0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801463B4
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 801463B8
  c->r[5]=0u+0x00000001u; // 801463BC
  {uint32_t ea=c->r[10]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 801463C0
  {uint32_t ea=c->r[10]+c->r[9]; c->f[0]=c->ps1[0]=RF32(ea);} // 801463C4
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801463C8
  W32(c->r[1]+0x0000008Cu,c->r[12]); // 801463CC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801463D0
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 801463D4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[9]);} // 801463D8
  c->f[2]=c->ps1[2]=S(c->f[5]/c->f[2]); // 801463DC
  W32(c->r[1]+0x0000008Cu,c->r[12]); // 801463E0
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 801463E4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[8]);} // 801463E8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[5]);} // 801463EC
  {uint32_t ea=c->r[27]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 801463F0
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[7]); // 801463F4
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 801463F8
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[6]); // 801463FC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 80146400
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 80146404
  c->f[0]=c->ps1[0]=S(c->f[7]/c->f[0]); // 80146408
  {uint32_t ea=c->r[23]+c->r[0]; WF32(ea,c->f[5]);} // 8014640C
  {uint32_t ea=c->r[22]+c->r[0]; WF32(ea,c->f[5]);} // 80146410
  {uint32_t ea=c->r[25]+c->r[9]; WF32(ea,c->f[4]);} // 80146414
  {uint32_t ea=c->r[22]+c->r[9]; WF32(ea,c->f[4]);} // 80146418
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[9]);} // 8014641C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80146420
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[8]);} // 80146424
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 80146428
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 8014642C
  {uint32_t ea=c->r[25]+c->r[0]; WF32(ea,c->f[2]);} // 80146430
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80146434
  {uint32_t ea=c->r[24]+c->r[0]; WF32(ea,c->f[2]);} // 80146438
  {uint32_t ea=c->r[23]+c->r[9]; WF32(ea,c->f[0]);} // 8014643C
  {uint32_t ea=c->r[24]+c->r[9]; WF32(ea,c->f[0]);} // 80146440
  c->lr=0x80146448u; f_8014D0EC(c); // 80146444
L_80146448:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 80146448
  c->r[11]=c->r[1]+0x000000D0u; // 8014644C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 80146450
  c->lr=0x80146458u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80146454
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80146458
  c->lr=c->r[0]; // 8014645C
  c->r[1]=c->r[1]+0x000000E0u; // 80146460
  return; // 80146464
}

// DrawFrame4__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2PCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc
void f_80146468(Ctx* __restrict c) {
  trace_call(0x80146468u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80146468
  c->r[0]=c->lr; // 8014646C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80146470
  c->r[11]=c->r[1]+0x000000E0u; // 80146474
  c->lr=0x8014647Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80146478
  {uint32_t ea=c->r[2]+0xFFFFA8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014647C
  c->r[0]=0u+0xFFFFFFFFu; // 80146480
  c->r[8]=0u+0x43300000u; // 80146484
  c->r[24]=c->r[3]|c->r[3]; // 80146488
  c->r[28]=c->r[7]|c->r[7]; // 8014648C
  W32(c->r[1]+0x000000A0u,c->r[8]); // 80146490
  c->r[25]=c->r[4]|c->r[4]; // 80146494
  c->r[26]=c->r[5]|c->r[5]; // 80146498
  W32(c->r[1]+0x000000A8u,c->r[8]); // 8014649C
  c->r[27]=c->r[6]|c->r[6]; // 801464A0
  c->r[4]=c->r[28]|c->r[28]; // 801464A4
  c->r[3]=0u+0x00000000u; // 801464A8
  W32(c->r[1]+0x00000070u,c->r[0]); // 801464AC
  W32(c->r[1]+0x00000074u,c->r[0]); // 801464B0
  W32(c->r[1]+0x00000078u,c->r[0]); // 801464B4
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 801464B8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 801464BC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801464C0
  c->lr=0x801464C8u; f_8014C9EC(c); // 801464C4
  c->r[4]=R32(c->r[26]+0x00000004u); // 801464C8
  c->r[30]=c->r[3]|c->r[3]; // 801464CC
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 801464D0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801464D4
  if (crb(c,2)) { goto L_80146670; } // 801464D8
  c->r[3]=c->r[4]|c->r[4]; // 801464DC
  c->r[4]=c->r[30]|c->r[30]; // 801464E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801464E4
  c->r[5]=c->r[28]|c->r[28]; // 801464E8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801464EC
  c->ctr=c->r[12]; // 801464F0
  if (true) { c->lr=0x801464F8u; dispatch(c,c->ctr); } // 801464F4
  {uint32_t ea=c->r[25]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801464F8
  c->r[29]=c->r[3]|c->r[3]; // 801464FC
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146500
  c->r[3]=c->r[1]+0x00000058u; // 80146504
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 80146508
  c->r[5]=0u+0x00000000u; // 8014650C
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80146510
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80146514
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146518
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8014651C
  c->r[31]=R8(c->r[26]+0x00000000u); // 80146520
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80146524
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80146528
  c->r[4]=R32(c->r[26]+0x00000004u); // 8014652C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 80146530
  c->lr=0x80146538u; f_8014A960(c); // 80146534
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 80146538
  c->r[3]=0u+0x802C0000u; // 8014653C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146540
  c->r[6]=c->r[1]+0x00000038u; // 80146544
  c->r[3]=c->r[3]+0x00006600u; // 80146548
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8014654C
  c->r[4]=c->r[3]+c->r[0]; // 80146550
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80146554
  c->r[0]=R8(c->r[4]+0x00000009u); // 80146558
  c->r[9]=c->r[1]+0x00000090u; // 8014655C
  c->r[3]=R8(c->r[4]+0x00000008u); // 80146560
  c->r[31]=c->r[1]+0x00000080u; // 80146564
  c->r[8]=R8(c->r[4]+c->r[0]); // 80146568
  c->r[23]=c->r[4]+c->r[0]; // 8014656C
  {uint32_t ea=c->r[4]+c->r[3]; c->r[10]=R8(ea); c->r[4]=ea;} // 80146570
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80146574
  W32(c->r[1]+0x000000ACu,c->r[8]); // 80146578
  c->r[11]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8014657C
  c->r[0]=R8(c->r[4]+0x00000002u); // 80146580
  c->r[7]=c->r[1]+0x00000088u; // 80146584
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80146588
  c->r[5]=c->r[1]+0x00000098u; // 8014658C
  c->r[3]=c->r[0]-c->r[10]; // 80146590
  c->r[0]=R8(c->r[23]+0x00000004u); // 80146594
  c->r[3]=c->r[3]^0x80000000u; // 80146598
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[8]=RF64(ea);} // 8014659C
  W32(c->r[1]+0x000000ACu,c->r[3]); // 801465A0
  c->r[0]=c->r[0]-c->r[8]; // 801465A4
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801465A8
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[5]=RF64(ea);} // 801465AC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801465B0
  c->r[0]=c->r[0]^0x80000000u; // 801465B4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801465B8
  c->r[3]=c->r[29]|c->r[29]; // 801465BC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801465C0
  W32(c->r[1]+0x000000ACu,c->r[0]); // 801465C4
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 801465C8
  c->r[4]=0u+0x00000001u; // 801465CC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801465D0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801465D4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 801465D8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801465DC
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 801465E0
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 801465E4
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801465E8
  W32(c->r[1]+0x000000A4u,c->r[10]); // 801465EC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 801465F0
  W32(c->r[1]+0x000000A4u,c->r[10]); // 801465F4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 801465F8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801465FC
  W32(c->r[1]+0x000000A4u,c->r[8]); // 80146600
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 80146604
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 80146608
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 8014660C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80146610
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 80146614
  {uint32_t ea=c->r[31]+c->r[11]; WF32(ea,c->f[7]);} // 80146618
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 8014661C
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[6]);} // 80146620
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 80146624
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 80146628
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[2]);} // 8014662C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80146630
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[2]);} // 80146634
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 80146638
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 8014663C
  c->lr=0x80146644u; f_8014CAA8(c); // 80146640
  c->r[3]=0u-c->r[29]; // 80146644
  c->r[0]=c->r[1]+0x00000070u; // 80146648
  c->r[3]=c->r[3]|c->r[29]; // 8014664C
  c->r[6]=c->r[31]|c->r[31]; // 80146650
  c->r[5]=sraw(c,c->r[3],31); // 80146654
  c->r[8]=c->r[28]|c->r[28]; // 80146658
  c->r[7]=c->r[0]&c->r[5]; // 8014665C
  c->r[3]=c->r[1]+0x00000068u; // 80146660
  c->r[4]=c->r[1]+0x00000060u; // 80146664
  c->r[5]=0u+0x00000001u; // 80146668
  c->lr=0x80146670u; f_8014D0EC(c); // 8014666C
L_80146670:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 80146670
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80146674
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 80146678
  if (crb(c,2)) { goto L_80146828; } // 8014667C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80146680
  c->r[4]=c->r[30]|c->r[30]; // 80146684
  c->r[5]=c->r[28]|c->r[28]; // 80146688
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8014668C
  c->ctr=c->r[12]; // 80146690
  if (true) { c->lr=0x80146698u; dispatch(c,c->ctr); } // 80146694
  {uint32_t ea=c->r[25]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80146698
  c->r[29]=c->r[3]|c->r[3]; // 8014669C
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801466A0
  c->r[3]=c->r[1]+0x00000050u; // 801466A4
  {uint32_t ea=c->r[25]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801466A8
  c->r[5]=0u+0x00000000u; // 801466AC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801466B0
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801466B4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 801466B8
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801466BC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 801466C0
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 801466C4
  c->r[31]=R8(c->r[26]+0x00000008u); // 801466C8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[3]);} // 801466CC
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 801466D0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 801466D4
  {uint32_t ea=c->r[24]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801466D8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 801466DC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801466E0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801466E4
  c->lr=0x801466ECu; f_8014A960(c); // 801466E8
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 801466EC
  c->r[3]=0u+0x802C0000u; // 801466F0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801466F4
  c->r[6]=c->r[1]+0x00000028u; // 801466F8
  c->r[3]=c->r[3]+0x00006600u; // 801466FC
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 80146700
  c->r[11]=c->r[3]+c->r[0]; // 80146704
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80146708
  c->r[0]=R8(c->r[11]+0x00000009u); // 8014670C
  c->r[9]=c->r[1]+0x00000098u; // 80146710
  c->r[5]=R8(c->r[11]+0x00000008u); // 80146714
  c->r[8]=c->r[1]+0x00000088u; // 80146718
  c->r[4]=c->r[11]+c->r[0]; // 8014671C
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80146720
  c->r[7]=R8(c->r[4]+0x00000002u); // 80146724
  c->r[3]=c->r[11]+c->r[5]; // 80146728
  c->r[10]=R8(c->r[3]+0x00000002u); // 8014672C
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80146730
  c->r[0]=R8(c->r[11]+c->r[5]); // 80146734
  c->r[31]=c->r[1]+0x00000080u; // 80146738
  W32(c->r[1]+0x000000ACu,c->r[7]); // 8014673C
  c->r[5]=c->r[1]+0x00000090u; // 80146740
  c->r[3]=c->r[0]-c->r[10]; // 80146744
  c->r[0]=R8(c->r[4]+0x00000006u); // 80146748
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8014674C
  c->r[3]=c->r[3]^0x80000000u; // 80146750
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[8]=RF64(ea);} // 80146754
  c->r[0]=c->r[0]-c->r[7]; // 80146758
  W32(c->r[1]+0x000000ACu,c->r[3]); // 8014675C
  c->r[0]=c->r[0]^0x80000000u; // 80146760
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 80146764
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[5]=RF64(ea);} // 80146768
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8014676C
  c->r[3]=c->r[29]|c->r[29]; // 80146770
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80146774
  c->r[4]=0u+0x00000001u; // 80146778
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8014677C
  W32(c->r[1]+0x000000ACu,c->r[0]); // 80146780
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 80146784
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80146788
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8014678C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 80146790
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80146794
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 80146798
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014679C
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 801467A0
  W32(c->r[1]+0x000000A4u,c->r[10]); // 801467A4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 801467A8
  W32(c->r[1]+0x000000A4u,c->r[10]); // 801467AC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 801467B0
  W32(c->r[1]+0x000000A4u,c->r[7]); // 801467B4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801467B8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 801467BC
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 801467C0
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 801467C4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801467C8
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 801467CC
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[7]);} // 801467D0
  {uint32_t ea=c->r[31]+c->r[23]; WF32(ea,c->f[6]);} // 801467D4
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[6]);} // 801467D8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 801467DC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 801467E0
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[2]);} // 801467E4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801467E8
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 801467EC
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[0]);} // 801467F0
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 801467F4
  c->lr=0x801467FCu; f_8014CAA8(c); // 801467F8
  c->r[3]=0u-c->r[29]; // 801467FC
  c->r[0]=c->r[1]+0x00000070u; // 80146800
  c->r[3]=c->r[3]|c->r[29]; // 80146804
  c->r[6]=c->r[31]|c->r[31]; // 80146808
  c->r[5]=sraw(c,c->r[3],31); // 8014680C
  c->r[8]=c->r[28]|c->r[28]; // 80146810
  c->r[7]=c->r[0]&c->r[5]; // 80146814
  c->r[3]=c->r[1]+0x00000068u; // 80146818
  c->r[4]=c->r[1]+0x00000060u; // 8014681C
  c->r[5]=0u+0x00000001u; // 80146820
  c->lr=0x80146828u; f_8014D0EC(c); // 80146824
L_80146828:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 80146828
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8014682C
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 80146830
  if (crb(c,2)) { goto L_801469E4; } // 80146834
  c->r[12]=R32(c->r[3]+0x00000000u); // 80146838
  c->r[4]=c->r[30]|c->r[30]; // 8014683C
  c->r[5]=c->r[28]|c->r[28]; // 80146840
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80146844
  c->ctr=c->r[12]; // 80146848
  if (true) { c->lr=0x80146850u; dispatch(c,c->ctr); } // 8014684C
  {uint32_t ea=c->r[25]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80146850
  c->r[29]=c->r[3]|c->r[3]; // 80146854
  {uint32_t ea=c->r[24]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146858
  c->r[3]=c->r[1]+0x00000048u; // 8014685C
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80146860
  c->r[5]=0u+0x00000000u; // 80146864
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80146868
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014686C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80146870
  c->r[31]=R8(c->r[26]+0x00000018u); // 80146874
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[3]); // 80146878
  c->r[4]=R32(c->r[26]+0x0000001Cu); // 8014687C
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[1]); // 80146880
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 80146884
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[4]);} // 80146888
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014688C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 80146890
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80146894
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 80146898
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 8014689C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 801468A0
  c->lr=0x801468A8u; f_8014A960(c); // 801468A4
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 801468A8
  c->r[3]=0u+0x802C0000u; // 801468AC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801468B0
  c->r[5]=c->r[1]+0x00000018u; // 801468B4
  c->r[3]=c->r[3]+0x00006600u; // 801468B8
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801468BC
  c->r[3]=c->r[3]+c->r[0]; // 801468C0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801468C4
  c->r[0]=R8(c->r[3]+0x00000009u); // 801468C8
  c->r[9]=c->r[1]+0x00000088u; // 801468CC
  c->r[6]=R8(c->r[3]+0x00000008u); // 801468D0
  c->r[8]=c->r[1]+0x00000098u; // 801468D4
  c->r[4]=c->r[3]+c->r[0]; // 801468D8
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801468DC
  c->r[3]=c->r[3]+c->r[6]; // 801468E0
  c->r[7]=R8(c->r[4]+0x00000006u); // 801468E4
  c->r[10]=R8(c->r[3]+0x00000006u); // 801468E8
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801468EC
  W32(c->r[1]+0x000000ACu,c->r[7]); // 801468F0
  c->r[6]=c->r[1]+0x00000090u; // 801468F4
  c->r[0]=R8(c->r[3]+0x00000004u); // 801468F8
  c->r[31]=c->r[1]+0x00000080u; // 801468FC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80146900
  c->r[3]=c->r[0]-c->r[10]; // 80146904
  c->r[0]=R8(c->r[4]+0x00000002u); // 80146908
  c->r[3]=c->r[3]^0x80000000u; // 8014690C
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[8]=RF64(ea);} // 80146910
  W32(c->r[1]+0x000000ACu,c->r[3]); // 80146914
  c->r[0]=c->r[0]-c->r[7]; // 80146918
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8014691C
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[5]=RF64(ea);} // 80146920
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80146924
  c->r[0]=c->r[0]^0x80000000u; // 80146928
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8014692C
  c->r[3]=c->r[29]|c->r[29]; // 80146930
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80146934
  W32(c->r[1]+0x000000ACu,c->r[0]); // 80146938
  {uint32_t ea=c->r[5]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 8014693C
  c->r[4]=0u+0x00000001u; // 80146940
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80146944
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80146948
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 8014694C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80146950
  {uint32_t ea=c->r[5]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 80146954
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 80146958
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014695C
  W32(c->r[1]+0x000000A4u,c->r[10]); // 80146960
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 80146964
  W32(c->r[1]+0x000000A4u,c->r[10]); // 80146968
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 8014696C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80146970
  W32(c->r[1]+0x000000A4u,c->r[7]); // 80146974
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 80146978
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 8014697C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 80146980
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80146984
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 80146988
  {uint32_t ea=c->r[8]+c->r[11]; WF32(ea,c->f[7]);} // 8014698C
  {uint32_t ea=c->r[6]+c->r[12]; WF32(ea,c->f[6]);} // 80146990
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[6]);} // 80146994
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 80146998
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 8014699C
  {uint32_t ea=c->r[6]+c->r[11]; WF32(ea,c->f[2]);} // 801469A0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801469A4
  {uint32_t ea=c->r[31]+c->r[11]; WF32(ea,c->f[2]);} // 801469A8
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 801469AC
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[0]);} // 801469B0
  c->lr=0x801469B8u; f_8014CAA8(c); // 801469B4
  c->r[3]=0u-c->r[29]; // 801469B8
  c->r[0]=c->r[1]+0x00000070u; // 801469BC
  c->r[3]=c->r[3]|c->r[29]; // 801469C0
  c->r[6]=c->r[31]|c->r[31]; // 801469C4
  c->r[5]=sraw(c,c->r[3],31); // 801469C8
  c->r[8]=c->r[28]|c->r[28]; // 801469CC
  c->r[7]=c->r[0]&c->r[5]; // 801469D0
  c->r[3]=c->r[1]+0x00000068u; // 801469D4
  c->r[4]=c->r[1]+0x00000060u; // 801469D8
  c->r[5]=0u+0x00000001u; // 801469DC
  c->lr=0x801469E4u; f_8014D0EC(c); // 801469E0
L_801469E4:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 801469E4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801469E8
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801469EC
  if (crb(c,2)) { goto L_80146B94; } // 801469F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801469F4
  c->r[4]=c->r[30]|c->r[30]; // 801469F8
  c->r[5]=c->r[28]|c->r[28]; // 801469FC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80146A00
  c->ctr=c->r[12]; // 80146A04
  if (true) { c->lr=0x80146A0Cu; dispatch(c,c->ctr); } // 80146A08
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146A0C
  c->r[29]=c->r[3]|c->r[3]; // 80146A10
  {uint32_t ea=c->r[27]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80146A14
  c->r[3]=c->r[1]+0x00000040u; // 80146A18
  {uint32_t ea=c->r[25]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80146A1C
  c->r[5]=0u+0x00000000u; // 80146A20
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 80146A24
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146A28
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[3]);} // 80146A2C
  c->r[25]=R8(c->r[26]+0x00000010u); // 80146A30
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 80146A34
  c->r[4]=R32(c->r[26]+0x00000014u); // 80146A38
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80146A3C
  {uint32_t ea=c->r[24]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146A40
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 80146A44
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80146A48
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 80146A4C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80146A50
  c->lr=0x80146A58u; f_8014A960(c); // 80146A54
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)10); // 80146A58
  c->r[3]=0u+0x802C0000u; // 80146A5C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[3]=c->ps1[3]=RF32(ea);} // 80146A60
  c->r[6]=c->r[1]+0x00000008u; // 80146A64
  c->r[3]=c->r[3]+0x00006600u; // 80146A68
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 80146A6C
  c->r[7]=c->r[3]+c->r[0]; // 80146A70
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 80146A74
  c->r[4]=R8(c->r[7]+0x00000009u); // 80146A78
  c->r[31]=c->r[1]+0x00000080u; // 80146A7C
  c->r[5]=R8(c->r[7]+0x00000008u); // 80146A80
  c->r[9]=c->r[1]+0x00000090u; // 80146A84
  c->r[3]=c->r[7]+c->r[4]; // 80146A88
  c->r[0]=R8(c->r[7]+c->r[4]); // 80146A8C
  c->r[8]=R8(c->r[3]+0x00000004u); // 80146A90
  c->r[3]=c->r[7]+c->r[5]; // 80146A94
  c->r[10]=R8(c->r[3]+0x00000004u); // 80146A98
  c->r[11]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80146A9C
  W32(c->r[1]+0x000000ACu,c->r[8]); // 80146AA0
  c->r[0]=c->r[0]-c->r[8]; // 80146AA4
  c->r[3]=R8(c->r[3]+0x00000006u); // 80146AA8
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80146AAC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80146AB0
  c->r[0]=c->r[0]^0x80000000u; // 80146AB4
  c->r[3]=c->r[3]-c->r[10]; // 80146AB8
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[8]=RF64(ea);} // 80146ABC
  c->r[3]=c->r[3]^0x80000000u; // 80146AC0
  W32(c->r[1]+0x000000A4u,c->r[10]); // 80146AC4
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[5]=RF64(ea);} // 80146AC8
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 80146ACC
  W32(c->r[1]+0x000000ACu,c->r[3]); // 80146AD0
  c->r[7]=c->r[1]+0x00000098u; // 80146AD4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=RF64(ea);} // 80146AD8
  c->r[5]=c->r[1]+0x00000088u; // 80146ADC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80146AE0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80146AE4
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 80146AE8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80146AEC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 80146AF0
  W32(c->r[1]+0x000000ACu,c->r[0]); // 80146AF4
  c->r[3]=c->r[29]|c->r[29]; // 80146AF8
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 80146AFC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80146B00
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80146B04
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 80146B08
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80146B0C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146B10
  {uint32_t ea=c->r[31]+c->r[11]; WF32(ea,c->f[7]);} // 80146B14
  c->r[4]=0u+0x00000001u; // 80146B18
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80146B1C
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 80146B20
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 80146B24
  W32(c->r[1]+0x000000A4u,c->r[10]); // 80146B28
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[4]=RF64(ea);} // 80146B2C
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 80146B30
  W32(c->r[1]+0x000000A4u,c->r[8]); // 80146B34
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 80146B38
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80146B3C
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[6]);} // 80146B40
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 80146B44
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 80146B48
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 80146B4C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80146B50
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[1]);} // 80146B54
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[1]);} // 80146B58
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[0]);} // 80146B5C
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 80146B60
  c->lr=0x80146B68u; f_8014CAA8(c); // 80146B64
  c->r[3]=0u-c->r[29]; // 80146B68
  c->r[0]=c->r[1]+0x00000070u; // 80146B6C
  c->r[3]=c->r[3]|c->r[29]; // 80146B70
  c->r[6]=c->r[31]|c->r[31]; // 80146B74
  c->r[5]=sraw(c,c->r[3],31); // 80146B78
  c->r[8]=c->r[28]|c->r[28]; // 80146B7C
  c->r[7]=c->r[0]&c->r[5]; // 80146B80
  c->r[3]=c->r[1]+0x00000068u; // 80146B84
  c->r[4]=c->r[1]+0x00000060u; // 80146B88
  c->r[5]=0u+0x00000001u; // 80146B8C
  c->lr=0x80146B94u; f_8014D0EC(c); // 80146B90
L_80146B94:;
  c->r[11]=c->r[1]+0x000000E0u; // 80146B94
  c->lr=0x80146B9Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80146B98
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80146B9C
  c->lr=c->r[0]; // 80146BA0
  c->r[1]=c->r[1]+0x000000E0u; // 80146BA4
  return; // 80146BA8
}

// DrawFrame8__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2PCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc
void f_80146BAC(Ctx* __restrict c) {
  trace_call(0x80146BACu);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80146BAC
  c->r[0]=c->lr; // 80146BB0
  W32(c->r[1]+0x00000174u,c->r[0]); // 80146BB4
  c->r[11]=c->r[1]+0x00000170u; // 80146BB8
  c->lr=0x80146BC0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80146BBC
  {uint32_t ea=c->r[2]+0xFFFFA8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146BC0
  c->r[0]=0u+0xFFFFFFFFu; // 80146BC4
  c->r[8]=0u+0x43300000u; // 80146BC8
  c->r[27]=c->r[3]|c->r[3]; // 80146BCC
  c->r[31]=c->r[7]|c->r[7]; // 80146BD0
  W32(c->r[1]+0x00000138u,c->r[8]); // 80146BD4
  c->r[28]=c->r[4]|c->r[4]; // 80146BD8
  c->r[29]=c->r[5]|c->r[5]; // 80146BDC
  W32(c->r[1]+0x00000140u,c->r[8]); // 80146BE0
  c->r[30]=c->r[6]|c->r[6]; // 80146BE4
  c->r[4]=c->r[31]|c->r[31]; // 80146BE8
  c->r[3]=0u+0x00000000u; // 80146BEC
  W32(c->r[1]+0x00000108u,c->r[0]); // 80146BF0
  W32(c->r[1]+0x0000010Cu,c->r[0]); // 80146BF4
  W32(c->r[1]+0x00000110u,c->r[0]); // 80146BF8
  W32(c->r[1]+0x00000114u,c->r[0]); // 80146BFC
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80146C00
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 80146C04
  c->lr=0x80146C0Cu; f_8014C9EC(c); // 80146C08
  c->r[4]=R32(c->r[29]+0x00000004u); // 80146C0C
  c->r[25]=c->r[3]|c->r[3]; // 80146C10
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 80146C14
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 80146C18
  if (crb(c,2)) { goto L_80146DA4; } // 80146C1C
  c->r[3]=c->r[4]|c->r[4]; // 80146C20
  c->r[4]=c->r[25]|c->r[25]; // 80146C24
  c->r[12]=R32(c->r[3]+0x00000000u); // 80146C28
  c->r[5]=c->r[31]|c->r[31]; // 80146C2C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80146C30
  c->ctr=c->r[12]; // 80146C34
  if (true) { c->lr=0x80146C3Cu; dispatch(c,c->ctr); } // 80146C38
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80146C3C
  c->r[24]=c->r[3]|c->r[3]; // 80146C40
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146C44
  c->r[3]=c->r[1]+0x000000F0u; // 80146C48
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[1]);} // 80146C4C
  c->r[5]=0u+0x00000000u; // 80146C50
  c->r[26]=R8(c->r[29]+0x00000000u); // 80146C54
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 80146C58
  c->r[4]=R32(c->r[29]+0x00000004u); // 80146C5C
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80146C60
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 80146C64
  c->lr=0x80146C6Cu; f_8014A960(c); // 80146C68
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 80146C6C
  c->r[3]=0u+0x802C0000u; // 80146C70
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146C74
  c->r[6]=c->r[1]+0x00000040u; // 80146C78
  c->r[3]=c->r[3]+0x00006600u; // 80146C7C
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80146C80
  c->r[4]=c->r[3]+c->r[0]; // 80146C84
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80146C88
  c->r[0]=R8(c->r[4]+0x00000009u); // 80146C8C
  c->r[9]=c->r[1]+0x00000128u; // 80146C90
  c->r[3]=R8(c->r[4]+0x00000008u); // 80146C94
  c->r[26]=c->r[1]+0x00000118u; // 80146C98
  c->r[8]=R8(c->r[4]+c->r[0]); // 80146C9C
  c->r[23]=c->r[4]+c->r[0]; // 80146CA0
  {uint32_t ea=c->r[4]+c->r[3]; c->r[10]=R8(ea); c->r[4]=ea;} // 80146CA4
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80146CA8
  W32(c->r[1]+0x00000144u,c->r[8]); // 80146CAC
  c->r[11]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80146CB0
  c->r[0]=R8(c->r[4]+0x00000002u); // 80146CB4
  c->r[7]=c->r[1]+0x00000120u; // 80146CB8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80146CBC
  c->r[5]=c->r[1]+0x00000130u; // 80146CC0
  c->r[3]=c->r[0]-c->r[10]; // 80146CC4
  c->r[0]=R8(c->r[23]+0x00000004u); // 80146CC8
  c->r[3]=c->r[3]^0x80000000u; // 80146CCC
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[8]=RF64(ea);} // 80146CD0
  W32(c->r[1]+0x00000144u,c->r[3]); // 80146CD4
  c->r[0]=c->r[0]-c->r[8]; // 80146CD8
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 80146CDC
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[5]=RF64(ea);} // 80146CE0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80146CE4
  c->r[0]=c->r[0]^0x80000000u; // 80146CE8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 80146CEC
  c->r[3]=c->r[24]|c->r[24]; // 80146CF0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80146CF4
  W32(c->r[1]+0x00000144u,c->r[0]); // 80146CF8
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 80146CFC
  c->r[4]=0u+0x00000001u; // 80146D00
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80146D04
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80146D08
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80146D0C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80146D10
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 80146D14
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 80146D18
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146D1C
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 80146D20
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 80146D24
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 80146D28
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 80146D2C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80146D30
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 80146D34
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 80146D38
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 80146D3C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 80146D40
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80146D44
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 80146D48
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[7]);} // 80146D4C
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 80146D50
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[6]);} // 80146D54
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 80146D58
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 80146D5C
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[2]);} // 80146D60
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80146D64
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[2]);} // 80146D68
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 80146D6C
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 80146D70
  c->lr=0x80146D78u; f_8014CAA8(c); // 80146D74
  c->r[3]=0u-c->r[24]; // 80146D78
  c->r[0]=c->r[1]+0x00000108u; // 80146D7C
  c->r[4]=c->r[3]|c->r[24]; // 80146D80
  c->r[6]=c->r[26]|c->r[26]; // 80146D84
  c->r[5]=sraw(c,c->r[4],31); // 80146D88
  c->r[3]=c->r[28]|c->r[28]; // 80146D8C
  c->r[7]=c->r[0]&c->r[5]; // 80146D90
  c->r[8]=c->r[31]|c->r[31]; // 80146D94
  c->r[4]=c->r[1]+0x00000100u; // 80146D98
  c->r[5]=0u+0x00000001u; // 80146D9C
  c->lr=0x80146DA4u; f_8014D0EC(c); // 80146DA0
L_80146DA4:;
  c->r[3]=R32(c->r[29]+0x00000034u); // 80146DA4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80146DA8
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 80146DAC
  if (crb(c,2)) { goto L_80146F5C; } // 80146DB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80146DB4
  c->r[4]=c->r[25]|c->r[25]; // 80146DB8
  c->r[5]=c->r[31]|c->r[31]; // 80146DBC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80146DC0
  c->ctr=c->r[12]; // 80146DC4
  if (true) { c->lr=0x80146DCCu; dispatch(c,c->ctr); } // 80146DC8
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80146DCC
  c->r[24]=c->r[3]|c->r[3]; // 80146DD0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146DD4
  c->r[3]=c->r[1]+0x000000E0u; // 80146DD8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80146DDC
  c->r[5]=0u+0x00000000u; // 80146DE0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80146DE4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146DE8
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[2]);} // 80146DEC
  c->r[26]=R8(c->r[29]+0x00000030u); // 80146DF0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80146DF4
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 80146DF8
  c->r[4]=R32(c->r[29]+0x00000034u); // 80146DFC
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 80146E00
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80146E04
  c->lr=0x80146E0Cu; f_8014A960(c); // 80146E08
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 80146E0C
  c->r[3]=0u+0x802C0000u; // 80146E10
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146E14
  c->r[6]=c->r[1]+0x00000038u; // 80146E18
  c->r[3]=c->r[3]+0x00006600u; // 80146E1C
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80146E20
  c->r[4]=c->r[3]+c->r[0]; // 80146E24
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80146E28
  c->r[0]=R8(c->r[4]+0x00000009u); // 80146E2C
  c->r[9]=c->r[1]+0x00000128u; // 80146E30
  c->r[3]=R8(c->r[4]+0x00000008u); // 80146E34
  c->r[26]=c->r[1]+0x00000118u; // 80146E38
  c->r[8]=R8(c->r[4]+c->r[0]); // 80146E3C
  c->r[23]=c->r[4]+c->r[0]; // 80146E40
  {uint32_t ea=c->r[4]+c->r[3]; c->r[10]=R8(ea); c->r[4]=ea;} // 80146E44
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80146E48
  W32(c->r[1]+0x00000144u,c->r[8]); // 80146E4C
  c->r[11]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80146E50
  c->r[0]=R8(c->r[4]+0x00000002u); // 80146E54
  c->r[7]=c->r[1]+0x00000120u; // 80146E58
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80146E5C
  c->r[5]=c->r[1]+0x00000130u; // 80146E60
  c->r[3]=c->r[0]-c->r[10]; // 80146E64
  c->r[0]=R8(c->r[23]+0x00000004u); // 80146E68
  c->r[3]=c->r[3]^0x80000000u; // 80146E6C
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[8]=RF64(ea);} // 80146E70
  W32(c->r[1]+0x00000144u,c->r[3]); // 80146E74
  c->r[0]=c->r[0]-c->r[8]; // 80146E78
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 80146E7C
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[5]=RF64(ea);} // 80146E80
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80146E84
  c->r[0]=c->r[0]^0x80000000u; // 80146E88
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 80146E8C
  c->r[3]=c->r[24]|c->r[24]; // 80146E90
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80146E94
  W32(c->r[1]+0x00000144u,c->r[0]); // 80146E98
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 80146E9C
  c->r[4]=0u+0x00000001u; // 80146EA0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80146EA4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80146EA8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80146EAC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80146EB0
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 80146EB4
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 80146EB8
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146EBC
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 80146EC0
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 80146EC4
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 80146EC8
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 80146ECC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80146ED0
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 80146ED4
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 80146ED8
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 80146EDC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 80146EE0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80146EE4
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 80146EE8
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[7]);} // 80146EEC
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 80146EF0
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[6]);} // 80146EF4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 80146EF8
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 80146EFC
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[2]);} // 80146F00
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80146F04
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[2]);} // 80146F08
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 80146F0C
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 80146F10
  c->lr=0x80146F18u; f_8014CAA8(c); // 80146F14
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80146F18
  c->r[0]=0u-c->r[24]; // 80146F1C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146F20
  c->r[0]=c->r[0]|c->r[24]; // 80146F24
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80146F28
  c->r[3]=sraw(c,c->r[0],31); // 80146F2C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80146F30
  c->r[0]=c->r[1]+0x00000108u; // 80146F34
  c->r[7]=c->r[0]&c->r[3]; // 80146F38
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[2]);} // 80146F3C
  c->r[6]=c->r[26]|c->r[26]; // 80146F40
  c->r[8]=c->r[31]|c->r[31]; // 80146F44
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 80146F48
  c->r[3]=c->r[1]+0x000000D8u; // 80146F4C
  c->r[4]=c->r[1]+0x00000100u; // 80146F50
  c->r[5]=0u+0x00000001u; // 80146F54
  c->lr=0x80146F5Cu; f_8014D0EC(c); // 80146F58
L_80146F5C:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80146F5C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80146F60
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 80146F64
  if (crb(c,2)) { goto L_80147110; } // 80146F68
  c->r[12]=R32(c->r[3]+0x00000000u); // 80146F6C
  c->r[4]=c->r[25]|c->r[25]; // 80146F70
  c->r[5]=c->r[31]|c->r[31]; // 80146F74
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80146F78
  c->ctr=c->r[12]; // 80146F7C
  if (true) { c->lr=0x80146F84u; dispatch(c,c->ctr); } // 80146F80
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80146F84
  c->r[24]=c->r[3]|c->r[3]; // 80146F88
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146F8C
  c->r[3]=c->r[1]+0x000000C8u; // 80146F90
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 80146F94
  c->r[5]=0u+0x00000000u; // 80146F98
  c->r[26]=R8(c->r[29]+0x00000008u); // 80146F9C
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 80146FA0
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 80146FA4
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80146FA8
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 80146FAC
  c->lr=0x80146FB4u; f_8014A960(c); // 80146FB0
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 80146FB4
  c->r[3]=0u+0x802C0000u; // 80146FB8
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146FBC
  c->r[6]=c->r[1]+0x00000030u; // 80146FC0
  c->r[3]=c->r[3]+0x00006600u; // 80146FC4
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80146FC8
  c->r[11]=c->r[3]+c->r[0]; // 80146FCC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80146FD0
  c->r[0]=R8(c->r[11]+0x00000009u); // 80146FD4
  c->r[9]=c->r[1]+0x00000130u; // 80146FD8
  c->r[5]=R8(c->r[11]+0x00000008u); // 80146FDC
  c->r[8]=c->r[1]+0x00000120u; // 80146FE0
  c->r[4]=c->r[11]+c->r[0]; // 80146FE4
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80146FE8
  c->r[7]=R8(c->r[4]+0x00000002u); // 80146FEC
  c->r[3]=c->r[11]+c->r[5]; // 80146FF0
  c->r[10]=R8(c->r[3]+0x00000002u); // 80146FF4
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80146FF8
  c->r[0]=R8(c->r[11]+c->r[5]); // 80146FFC
  c->r[26]=c->r[1]+0x00000118u; // 80147000
  W32(c->r[1]+0x00000144u,c->r[7]); // 80147004
  c->r[5]=c->r[1]+0x00000128u; // 80147008
  c->r[3]=c->r[0]-c->r[10]; // 8014700C
  c->r[0]=R8(c->r[4]+0x00000006u); // 80147010
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80147014
  c->r[3]=c->r[3]^0x80000000u; // 80147018
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[8]=RF64(ea);} // 8014701C
  c->r[0]=c->r[0]-c->r[7]; // 80147020
  W32(c->r[1]+0x00000144u,c->r[3]); // 80147024
  c->r[0]=c->r[0]^0x80000000u; // 80147028
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8014702C
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[5]=RF64(ea);} // 80147030
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80147034
  c->r[3]=c->r[24]|c->r[24]; // 80147038
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 8014703C
  c->r[4]=0u+0x00000001u; // 80147040
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80147044
  W32(c->r[1]+0x00000144u,c->r[0]); // 80147048
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 8014704C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80147050
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80147054
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80147058
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8014705C
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 80147060
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147064
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 80147068
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8014706C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 80147070
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 80147074
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 80147078
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 8014707C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80147080
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 80147084
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 80147088
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 8014708C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80147090
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 80147094
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[7]);} // 80147098
  {uint32_t ea=c->r[26]+c->r[23]; WF32(ea,c->f[6]);} // 8014709C
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[6]);} // 801470A0
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 801470A4
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 801470A8
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[2]);} // 801470AC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801470B0
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 801470B4
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[0]);} // 801470B8
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 801470BC
  c->lr=0x801470C4u; f_8014CAA8(c); // 801470C0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801470C4
  c->r[0]=0u-c->r[24]; // 801470C8
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801470CC
  c->r[0]=c->r[0]|c->r[24]; // 801470D0
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801470D4
  c->r[3]=sraw(c,c->r[0],31); // 801470D8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801470DC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801470E0
  c->r[0]=c->r[1]+0x00000108u; // 801470E4
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[2]);} // 801470E8
  c->r[7]=c->r[0]&c->r[3]; // 801470EC
  c->r[6]=c->r[26]|c->r[26]; // 801470F0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801470F4
  c->r[8]=c->r[31]|c->r[31]; // 801470F8
  c->r[3]=c->r[1]+0x000000C0u; // 801470FC
  c->r[4]=c->r[1]+0x00000100u; // 80147100
  c->r[5]=0u+0x00000001u; // 80147104
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 80147108
  c->lr=0x80147110u; f_8014D0EC(c); // 8014710C
L_80147110:;
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 80147110
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80147114
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 80147118
  if (crb(c,2)) { goto L_801472DC; } // 8014711C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80147120
  c->r[4]=c->r[25]|c->r[25]; // 80147124
  c->r[5]=c->r[31]|c->r[31]; // 80147128
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8014712C
  c->ctr=c->r[12]; // 80147130
  if (true) { c->lr=0x80147138u; dispatch(c,c->ctr); } // 80147134
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147138
  c->r[24]=c->r[3]|c->r[3]; // 8014713C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147140
  c->r[3]=c->r[1]+0x000000B0u; // 80147144
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80147148
  c->r[5]=0u+0x00000000u; // 8014714C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80147150
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80147154
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[2]);} // 80147158
  c->r[26]=R8(c->r[29]+0x00000028u); // 8014715C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80147160
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[2]);} // 80147164
  c->r[4]=R32(c->r[29]+0x0000002Cu); // 80147168
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 8014716C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 80147170
  c->lr=0x80147178u; f_8014A960(c); // 80147174
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 80147178
  c->r[3]=0u+0x802C0000u; // 8014717C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147180
  c->r[6]=c->r[1]+0x00000028u; // 80147184
  c->r[3]=c->r[3]+0x00006600u; // 80147188
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014718C
  c->r[11]=c->r[3]+c->r[0]; // 80147190
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80147194
  c->r[0]=R8(c->r[11]+0x00000009u); // 80147198
  c->r[9]=c->r[1]+0x00000130u; // 8014719C
  c->r[5]=R8(c->r[11]+0x00000008u); // 801471A0
  c->r[8]=c->r[1]+0x00000120u; // 801471A4
  c->r[4]=c->r[11]+c->r[0]; // 801471A8
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801471AC
  c->r[7]=R8(c->r[4]+0x00000002u); // 801471B0
  c->r[3]=c->r[11]+c->r[5]; // 801471B4
  c->r[10]=R8(c->r[3]+0x00000002u); // 801471B8
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801471BC
  c->r[0]=R8(c->r[11]+c->r[5]); // 801471C0
  c->r[26]=c->r[1]+0x00000118u; // 801471C4
  W32(c->r[1]+0x00000144u,c->r[7]); // 801471C8
  c->r[5]=c->r[1]+0x00000128u; // 801471CC
  c->r[3]=c->r[0]-c->r[10]; // 801471D0
  c->r[0]=R8(c->r[4]+0x00000006u); // 801471D4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801471D8
  c->r[3]=c->r[3]^0x80000000u; // 801471DC
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[8]=RF64(ea);} // 801471E0
  c->r[0]=c->r[0]-c->r[7]; // 801471E4
  W32(c->r[1]+0x00000144u,c->r[3]); // 801471E8
  c->r[0]=c->r[0]^0x80000000u; // 801471EC
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801471F0
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[5]=RF64(ea);} // 801471F4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801471F8
  c->r[3]=c->r[24]|c->r[24]; // 801471FC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80147200
  c->r[4]=0u+0x00000001u; // 80147204
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80147208
  W32(c->r[1]+0x00000144u,c->r[0]); // 8014720C
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 80147210
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80147214
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80147218
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8014721C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80147220
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 80147224
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147228
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 8014722C
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 80147230
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 80147234
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 80147238
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 8014723C
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 80147240
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80147244
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 80147248
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 8014724C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 80147250
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80147254
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 80147258
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[7]);} // 8014725C
  {uint32_t ea=c->r[26]+c->r[23]; WF32(ea,c->f[6]);} // 80147260
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[6]);} // 80147264
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 80147268
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 8014726C
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[2]);} // 80147270
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80147274
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 80147278
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[0]);} // 8014727C
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 80147280
  c->lr=0x80147288u; f_8014CAA8(c); // 80147284
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147288
  c->r[0]=0u-c->r[24]; // 8014728C
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80147290
  c->r[0]=c->r[0]|c->r[24]; // 80147294
  c->r[3]=sraw(c,c->r[0],31); // 80147298
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8014729C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801472A0
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801472A4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801472A8
  c->r[0]=c->r[1]+0x00000108u; // 801472AC
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 801472B0
  c->r[7]=c->r[0]&c->r[3]; // 801472B4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801472B8
  c->r[6]=c->r[26]|c->r[26]; // 801472BC
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 801472C0
  c->r[8]=c->r[31]|c->r[31]; // 801472C4
  c->r[3]=c->r[1]+0x000000A8u; // 801472C8
  c->r[4]=c->r[1]+0x00000100u; // 801472CC
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 801472D0
  c->r[5]=0u+0x00000001u; // 801472D4
  c->lr=0x801472DCu; f_8014D0EC(c); // 801472D8
L_801472DC:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 801472DC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801472E0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801472E4
  if (crb(c,2)) { goto L_801474A0; } // 801472E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801472EC
  c->r[4]=c->r[25]|c->r[25]; // 801472F0
  c->r[5]=c->r[31]|c->r[31]; // 801472F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801472F8
  c->ctr=c->r[12]; // 801472FC
  if (true) { c->lr=0x80147304u; dispatch(c,c->ctr); } // 80147300
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80147304
  c->r[24]=c->r[3]|c->r[3]; // 80147308
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014730C
  c->r[3]=c->r[1]+0x00000098u; // 80147310
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 80147314
  c->r[5]=0u+0x00000000u; // 80147318
  c->r[26]=R8(c->r[29]+0x00000018u); // 8014731C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 80147320
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 80147324
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80147328
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 8014732C
  c->lr=0x80147334u; f_8014A960(c); // 80147330
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 80147334
  c->r[3]=0u+0x802C0000u; // 80147338
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014733C
  c->r[5]=c->r[1]+0x00000020u; // 80147340
  c->r[3]=c->r[3]+0x00006600u; // 80147344
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80147348
  c->r[3]=c->r[3]+c->r[0]; // 8014734C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80147350
  c->r[0]=R8(c->r[3]+0x00000009u); // 80147354
  c->r[9]=c->r[1]+0x00000120u; // 80147358
  c->r[6]=R8(c->r[3]+0x00000008u); // 8014735C
  c->r[8]=c->r[1]+0x00000130u; // 80147360
  c->r[4]=c->r[3]+c->r[0]; // 80147364
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80147368
  c->r[3]=c->r[3]+c->r[6]; // 8014736C
  c->r[7]=R8(c->r[4]+0x00000006u); // 80147370
  c->r[10]=R8(c->r[3]+0x00000006u); // 80147374
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80147378
  W32(c->r[1]+0x00000144u,c->r[7]); // 8014737C
  c->r[6]=c->r[1]+0x00000128u; // 80147380
  c->r[0]=R8(c->r[3]+0x00000004u); // 80147384
  c->r[26]=c->r[1]+0x00000118u; // 80147388
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8014738C
  c->r[3]=c->r[0]-c->r[10]; // 80147390
  c->r[0]=R8(c->r[4]+0x00000002u); // 80147394
  c->r[3]=c->r[3]^0x80000000u; // 80147398
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[8]=RF64(ea);} // 8014739C
  W32(c->r[1]+0x00000144u,c->r[3]); // 801473A0
  c->r[0]=c->r[0]-c->r[7]; // 801473A4
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801473A8
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[5]=RF64(ea);} // 801473AC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801473B0
  c->r[0]=c->r[0]^0x80000000u; // 801473B4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801473B8
  c->r[3]=c->r[24]|c->r[24]; // 801473BC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801473C0
  W32(c->r[1]+0x00000144u,c->r[0]); // 801473C4
  {uint32_t ea=c->r[5]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 801473C8
  c->r[4]=0u+0x00000001u; // 801473CC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801473D0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801473D4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 801473D8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801473DC
  {uint32_t ea=c->r[5]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 801473E0
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 801473E4
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 801473E8
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801473EC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 801473F0
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801473F4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 801473F8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801473FC
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 80147400
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 80147404
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 80147408
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 8014740C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80147410
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 80147414
  {uint32_t ea=c->r[8]+c->r[11]; WF32(ea,c->f[7]);} // 80147418
  {uint32_t ea=c->r[6]+c->r[12]; WF32(ea,c->f[6]);} // 8014741C
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[6]);} // 80147420
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 80147424
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 80147428
  {uint32_t ea=c->r[6]+c->r[11]; WF32(ea,c->f[2]);} // 8014742C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80147430
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[2]);} // 80147434
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 80147438
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 8014743C
  c->lr=0x80147444u; f_8014CAA8(c); // 80147440
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80147444
  c->r[0]=0u-c->r[24]; // 80147448
  {uint32_t ea=c->r[27]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014744C
  c->r[0]=c->r[0]|c->r[24]; // 80147450
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147454
  c->r[3]=sraw(c,c->r[0],31); // 80147458
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014745C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 80147460
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80147464
  c->r[0]=c->r[1]+0x00000108u; // 80147468
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8014746C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147470
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 80147474
  c->r[7]=c->r[0]&c->r[3]; // 80147478
  c->r[6]=c->r[26]|c->r[26]; // 8014747C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80147480
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[2]);} // 80147484
  c->r[8]=c->r[31]|c->r[31]; // 80147488
  c->r[3]=c->r[1]+0x00000090u; // 8014748C
  c->r[4]=c->r[1]+0x00000100u; // 80147490
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 80147494
  c->r[5]=0u+0x00000001u; // 80147498
  c->lr=0x801474A0u; f_8014D0EC(c); // 8014749C
L_801474A0:;
  c->r[3]=R32(c->r[29]+0x0000003Cu); // 801474A0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801474A4
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801474A8
  if (crb(c,2)) { goto L_8014766C; } // 801474AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801474B0
  c->r[4]=c->r[25]|c->r[25]; // 801474B4
  c->r[5]=c->r[31]|c->r[31]; // 801474B8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801474BC
  c->ctr=c->r[12]; // 801474C0
  if (true) { c->lr=0x801474C8u; dispatch(c,c->ctr); } // 801474C4
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801474C8
  c->r[24]=c->r[3]|c->r[3]; // 801474CC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801474D0
  c->r[3]=c->r[1]+0x00000080u; // 801474D4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801474D8
  c->r[5]=0u+0x00000000u; // 801474DC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801474E0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801474E4
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[2]);} // 801474E8
  c->r[26]=R8(c->r[29]+0x00000038u); // 801474EC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801474F0
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 801474F4
  c->r[4]=R32(c->r[29]+0x0000003Cu); // 801474F8
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 801474FC
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80147500
  c->lr=0x80147508u; f_8014A960(c); // 80147504
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 80147508
  c->r[3]=0u+0x802C0000u; // 8014750C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147510
  c->r[5]=c->r[1]+0x00000018u; // 80147514
  c->r[3]=c->r[3]+0x00006600u; // 80147518
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014751C
  c->r[3]=c->r[3]+c->r[0]; // 80147520
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80147524
  c->r[0]=R8(c->r[3]+0x00000009u); // 80147528
  c->r[9]=c->r[1]+0x00000120u; // 8014752C
  c->r[6]=R8(c->r[3]+0x00000008u); // 80147530
  c->r[8]=c->r[1]+0x00000130u; // 80147534
  c->r[4]=c->r[3]+c->r[0]; // 80147538
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8014753C
  c->r[3]=c->r[3]+c->r[6]; // 80147540
  c->r[7]=R8(c->r[4]+0x00000006u); // 80147544
  c->r[10]=R8(c->r[3]+0x00000006u); // 80147548
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8014754C
  W32(c->r[1]+0x00000144u,c->r[7]); // 80147550
  c->r[6]=c->r[1]+0x00000128u; // 80147554
  c->r[0]=R8(c->r[3]+0x00000004u); // 80147558
  c->r[26]=c->r[1]+0x00000118u; // 8014755C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80147560
  c->r[3]=c->r[0]-c->r[10]; // 80147564
  c->r[0]=R8(c->r[4]+0x00000002u); // 80147568
  c->r[3]=c->r[3]^0x80000000u; // 8014756C
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[8]=RF64(ea);} // 80147570
  W32(c->r[1]+0x00000144u,c->r[3]); // 80147574
  c->r[0]=c->r[0]-c->r[7]; // 80147578
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8014757C
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[5]=RF64(ea);} // 80147580
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80147584
  c->r[0]=c->r[0]^0x80000000u; // 80147588
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8014758C
  c->r[3]=c->r[24]|c->r[24]; // 80147590
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80147594
  W32(c->r[1]+0x00000144u,c->r[0]); // 80147598
  {uint32_t ea=c->r[5]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 8014759C
  c->r[4]=0u+0x00000001u; // 801475A0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801475A4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801475A8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 801475AC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801475B0
  {uint32_t ea=c->r[5]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 801475B4
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 801475B8
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 801475BC
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801475C0
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 801475C4
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801475C8
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 801475CC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801475D0
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 801475D4
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 801475D8
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 801475DC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 801475E0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801475E4
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 801475E8
  {uint32_t ea=c->r[8]+c->r[11]; WF32(ea,c->f[7]);} // 801475EC
  {uint32_t ea=c->r[6]+c->r[12]; WF32(ea,c->f[6]);} // 801475F0
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[6]);} // 801475F4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 801475F8
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 801475FC
  {uint32_t ea=c->r[6]+c->r[11]; WF32(ea,c->f[2]);} // 80147600
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80147604
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[2]);} // 80147608
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 8014760C
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 80147610
  c->lr=0x80147618u; f_8014CAA8(c); // 80147614
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147618
  c->r[0]=0u-c->r[24]; // 8014761C
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147620
  c->r[0]=c->r[0]|c->r[24]; // 80147624
  c->r[3]=sraw(c,c->r[0],31); // 80147628
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8014762C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80147630
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147634
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147638
  c->r[0]=c->r[1]+0x00000108u; // 8014763C
  c->r[7]=c->r[0]&c->r[3]; // 80147640
  c->r[6]=c->r[26]|c->r[26]; // 80147644
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 80147648
  c->r[8]=c->r[31]|c->r[31]; // 8014764C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80147650
  c->r[3]=c->r[1]+0x00000078u; // 80147654
  c->r[4]=c->r[1]+0x00000100u; // 80147658
  c->r[5]=0u+0x00000001u; // 8014765C
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 80147660
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 80147664
  c->lr=0x8014766Cu; f_8014D0EC(c); // 80147668
L_8014766C:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8014766C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80147670
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 80147674
  if (crb(c,2)) { goto L_80147820; } // 80147678
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014767C
  c->r[4]=c->r[25]|c->r[25]; // 80147680
  c->r[5]=c->r[31]|c->r[31]; // 80147684
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80147688
  c->ctr=c->r[12]; // 8014768C
  if (true) { c->lr=0x80147694u; dispatch(c,c->ctr); } // 80147690
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80147694
  c->r[24]=c->r[3]|c->r[3]; // 80147698
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014769C
  c->r[3]=c->r[1]+0x00000068u; // 801476A0
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 801476A4
  c->r[5]=0u+0x00000000u; // 801476A8
  c->r[26]=R8(c->r[29]+0x00000010u); // 801476AC
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 801476B0
  c->r[4]=R32(c->r[29]+0x00000014u); // 801476B4
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 801476B8
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 801476BC
  c->lr=0x801476C4u; f_8014A960(c); // 801476C0
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 801476C4
  c->r[3]=0u+0x802C0000u; // 801476C8
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801476CC
  c->r[6]=c->r[1]+0x00000010u; // 801476D0
  c->r[3]=c->r[3]+0x00006600u; // 801476D4
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 801476D8
  c->r[7]=c->r[3]+c->r[0]; // 801476DC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 801476E0
  c->r[4]=R8(c->r[7]+0x00000009u); // 801476E4
  c->r[26]=c->r[1]+0x00000118u; // 801476E8
  c->r[5]=R8(c->r[7]+0x00000008u); // 801476EC
  c->r[9]=c->r[1]+0x00000128u; // 801476F0
  c->r[3]=c->r[7]+c->r[4]; // 801476F4
  c->r[0]=R8(c->r[7]+c->r[4]); // 801476F8
  c->r[8]=R8(c->r[3]+0x00000004u); // 801476FC
  c->r[3]=c->r[7]+c->r[5]; // 80147700
  c->r[10]=R8(c->r[3]+0x00000004u); // 80147704
  c->r[11]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80147708
  W32(c->r[1]+0x00000144u,c->r[8]); // 8014770C
  c->r[0]=c->r[0]-c->r[8]; // 80147710
  c->r[3]=R8(c->r[3]+0x00000006u); // 80147714
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80147718
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8014771C
  c->r[0]=c->r[0]^0x80000000u; // 80147720
  c->r[3]=c->r[3]-c->r[10]; // 80147724
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[8]=RF64(ea);} // 80147728
  c->r[3]=c->r[3]^0x80000000u; // 8014772C
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 80147730
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[5]=RF64(ea);} // 80147734
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 80147738
  W32(c->r[1]+0x00000144u,c->r[3]); // 8014773C
  c->r[7]=c->r[1]+0x00000130u; // 80147740
  {uint32_t ea=c->r[1]+0x00000138u; c->f[1]=RF64(ea);} // 80147744
  c->r[5]=c->r[1]+0x00000120u; // 80147748
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8014774C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 80147750
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 80147754
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80147758
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8014775C
  W32(c->r[1]+0x00000144u,c->r[0]); // 80147760
  c->r[3]=c->r[24]|c->r[24]; // 80147764
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 80147768
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8014776C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80147770
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 80147774
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80147778
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014777C
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[7]);} // 80147780
  c->r[4]=0u+0x00000001u; // 80147784
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80147788
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 8014778C
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 80147790
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 80147794
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 80147798
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 8014779C
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 801477A0
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 801477A4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801477A8
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[6]);} // 801477AC
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 801477B0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 801477B4
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 801477B8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801477BC
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[1]);} // 801477C0
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[1]);} // 801477C4
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 801477C8
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 801477CC
  c->lr=0x801477D4u; f_8014CAA8(c); // 801477D0
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801477D4
  c->r[0]=0u-c->r[24]; // 801477D8
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801477DC
  c->r[0]=c->r[0]|c->r[24]; // 801477E0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801477E4
  c->r[3]=sraw(c,c->r[0],31); // 801477E8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801477EC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801477F0
  c->r[0]=c->r[1]+0x00000108u; // 801477F4
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 801477F8
  c->r[7]=c->r[0]&c->r[3]; // 801477FC
  c->r[6]=c->r[26]|c->r[26]; // 80147800
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80147804
  c->r[8]=c->r[31]|c->r[31]; // 80147808
  c->r[3]=c->r[1]+0x00000060u; // 8014780C
  c->r[4]=c->r[1]+0x00000100u; // 80147810
  c->r[5]=0u+0x00000001u; // 80147814
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80147818
  c->lr=0x80147820u; f_8014D0EC(c); // 8014781C
L_80147820:;
  c->r[3]=R32(c->r[29]+0x00000024u); // 80147820
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80147824
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 80147828
  if (crb(c,2)) { goto L_801479DC; } // 8014782C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80147830
  c->r[4]=c->r[25]|c->r[25]; // 80147834
  c->r[5]=c->r[31]|c->r[31]; // 80147838
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8014783C
  c->ctr=c->r[12]; // 80147840
  if (true) { c->lr=0x80147848u; dispatch(c,c->ctr); } // 80147844
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147848
  c->r[24]=c->r[3]|c->r[3]; // 8014784C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147850
  c->r[3]=c->r[1]+0x00000050u; // 80147854
  {uint32_t ea=c->r[30]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80147858
  c->r[5]=0u+0x00000000u; // 8014785C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80147860
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80147864
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[2]);} // 80147868
  c->r[25]=R8(c->r[29]+0x00000020u); // 8014786C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80147870
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[2]);} // 80147874
  c->r[4]=R32(c->r[29]+0x00000024u); // 80147878
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 8014787C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 80147880
  c->lr=0x80147888u; f_8014A960(c); // 80147884
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)10); // 80147888
  c->r[3]=0u+0x802C0000u; // 8014788C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[3]=c->ps1[3]=RF32(ea);} // 80147890
  c->r[6]=c->r[1]+0x00000008u; // 80147894
  c->r[3]=c->r[3]+0x00006600u; // 80147898
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014789C
  c->r[7]=c->r[3]+c->r[0]; // 801478A0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 801478A4
  c->r[4]=R8(c->r[7]+0x00000009u); // 801478A8
  c->r[27]=c->r[1]+0x00000118u; // 801478AC
  c->r[5]=R8(c->r[7]+0x00000008u); // 801478B0
  c->r[9]=c->r[1]+0x00000128u; // 801478B4
  c->r[3]=c->r[7]+c->r[4]; // 801478B8
  c->r[0]=R8(c->r[7]+c->r[4]); // 801478BC
  c->r[8]=R8(c->r[3]+0x00000004u); // 801478C0
  c->r[3]=c->r[7]+c->r[5]; // 801478C4
  c->r[10]=R8(c->r[3]+0x00000004u); // 801478C8
  c->r[11]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801478CC
  W32(c->r[1]+0x00000144u,c->r[8]); // 801478D0
  c->r[0]=c->r[0]-c->r[8]; // 801478D4
  c->r[3]=R8(c->r[3]+0x00000006u); // 801478D8
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801478DC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801478E0
  c->r[0]=c->r[0]^0x80000000u; // 801478E4
  c->r[3]=c->r[3]-c->r[10]; // 801478E8
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[8]=RF64(ea);} // 801478EC
  c->r[3]=c->r[3]^0x80000000u; // 801478F0
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801478F4
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[5]=RF64(ea);} // 801478F8
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801478FC
  W32(c->r[1]+0x00000144u,c->r[3]); // 80147900
  c->r[7]=c->r[1]+0x00000130u; // 80147904
  {uint32_t ea=c->r[1]+0x00000138u; c->f[1]=RF64(ea);} // 80147908
  c->r[5]=c->r[1]+0x00000120u; // 8014790C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80147910
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80147914
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 80147918
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8014791C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80147920
  W32(c->r[1]+0x00000144u,c->r[0]); // 80147924
  c->r[3]=c->r[24]|c->r[24]; // 80147928
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 8014792C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80147930
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80147934
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 80147938
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8014793C
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147940
  {uint32_t ea=c->r[27]+c->r[11]; WF32(ea,c->f[7]);} // 80147944
  c->r[4]=0u+0x00000001u; // 80147948
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8014794C
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 80147950
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 80147954
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 80147958
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 8014795C
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 80147960
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 80147964
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 80147968
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8014796C
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[6]);} // 80147970
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 80147974
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 80147978
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 8014797C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80147980
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[1]);} // 80147984
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[1]);} // 80147988
  {uint32_t ea=c->r[27]+c->r[12]; WF32(ea,c->f[0]);} // 8014798C
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 80147990
  c->lr=0x80147998u; f_8014CAA8(c); // 80147994
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147998
  c->r[0]=0u-c->r[24]; // 8014799C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801479A0
  c->r[0]=c->r[0]|c->r[24]; // 801479A4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801479A8
  c->r[3]=sraw(c,c->r[0],31); // 801479AC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801479B0
  c->r[0]=c->r[1]+0x00000108u; // 801479B4
  c->r[7]=c->r[0]&c->r[3]; // 801479B8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 801479BC
  c->r[6]=c->r[27]|c->r[27]; // 801479C0
  c->r[8]=c->r[31]|c->r[31]; // 801479C4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 801479C8
  c->r[3]=c->r[1]+0x00000048u; // 801479CC
  c->r[4]=c->r[1]+0x00000100u; // 801479D0
  c->r[5]=0u+0x00000001u; // 801479D4
  c->lr=0x801479DCu; f_8014D0EC(c); // 801479D8
L_801479DC:;
  c->r[11]=c->r[1]+0x00000170u; // 801479DC
  c->lr=0x801479E4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801479E0
  c->r[0]=R32(c->r[1]+0x00000174u); // 801479E4
  c->lr=c->r[0]; // 801479E8
  c->r[1]=c->r[1]+0x00000170u; // 801479EC
  return; // 801479F0
}

// GetFrameSize__Q34nw4r3lyt6WindowFUcPCQ44nw4r3lyt6Window5Frame
void f_801479F4(Ctx* __restrict c) {
  trace_call(0x801479F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801479F4
  c->r[0]=c->lr; // 801479F8
  cmps(c,0,(int32_t)c->r[5],4); // 801479FC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80147A00
  c->r[0]=0u+0x00000000u; // 80147A04
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80147A08
  c->r[31]=c->r[6]|c->r[6]; // 80147A0C
  W32(c->r[1]+0x00000038u,c->r[30]); // 80147A10
  c->r[30]=c->r[3]|c->r[3]; // 80147A14
  W32(c->r[1]+0x00000020u,c->r[0]); // 80147A18
  W32(c->r[1]+0x00000024u,c->r[0]); // 80147A1C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80147A20
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80147A24
  if (crb(c,2)) { goto L_80147A74; } // 80147A28
  if (!crb(c,0)) { goto L_80147A3C; } // 80147A2C
  cmps(c,0,(int32_t)c->r[5],1); // 80147A30
  if (crb(c,2)) { goto L_80147A48; } // 80147A34
  goto L_80147ABC; // 80147A38
L_80147A3C:;
  cmps(c,0,(int32_t)c->r[5],8); // 80147A3C
  if (crb(c,2)) { goto L_80147A74; } // 80147A40
  goto L_80147ABC; // 80147A44
L_80147A48:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 80147A48
  c->r[3]=c->r[1]+0x00000018u; // 80147A4C
  c->r[5]=0u+0x00000000u; // 80147A50
  c->lr=0x80147A58u; f_8014A960(c); // 80147A54
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147A58
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80147A5C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80147A60
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80147A64
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80147A68
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80147A6C
  goto L_80147ABC; // 80147A70
L_80147A74:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 80147A74
  c->r[3]=c->r[1]+0x00000010u; // 80147A78
  c->r[5]=0u+0x00000000u; // 80147A7C
  c->lr=0x80147A84u; f_8014A960(c); // 80147A80
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147A84
  c->r[3]=c->r[1]+0x00000008u; // 80147A88
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147A8C
  c->r[5]=0u+0x00000000u; // 80147A90
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80147A94
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 80147A98
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80147A9C
  c->lr=0x80147AA4u; f_8014A960(c); // 80147AA0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147AA4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80147AA8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 80147AAC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80147AB0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80147AB4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80147AB8
L_80147ABC:;
  c->r[5]=R32(c->r[1]+0x00000020u); // 80147ABC
  c->r[4]=R32(c->r[1]+0x00000024u); // 80147AC0
  c->r[3]=R32(c->r[1]+0x00000028u); // 80147AC4
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80147AC8
  W32(c->r[30]+0x00000000u,c->r[5]); // 80147ACC
  W32(c->r[30]+0x00000004u,c->r[4]); // 80147AD0
  W32(c->r[30]+0x00000008u,c->r[3]); // 80147AD4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80147AD8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80147ADC
  c->r[30]=R32(c->r[1]+0x00000038u); // 80147AE0
  c->r[0]=R32(c->r[1]+0x00000044u); // 80147AE4
  c->lr=c->r[0]; // 80147AE8
  c->r[1]=c->r[1]+0x00000040u; // 80147AEC
  return; // 80147AF0
}

// GetMaterialNum__Q34nw4r3lyt6WindowCFv
void f_80147AF4(Ctx* __restrict c) {
  trace_call(0x80147AF4u);
  c->r[3]=R8(c->r[3]+0x00000104u); // 80147AF4
  c->r[0]=c->r[3]+0x00000001u; // 80147AF8
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 80147AFC
  return; // 80147B00
}

// GetMaterial__Q34nw4r3lyt6WindowCFUl
void f_80147B04(Ctx* __restrict c) {
  trace_call(0x80147B04u);
  cmps(c,0,(int32_t)c->r[4],0); // 80147B04
  if (!crb(c,2)) { goto L_80147B1C; } // 80147B08
  c->r[12]=R32(c->r[3]+0x00000000u); // 80147B0C
  c->r[12]=R32(c->r[12]+0x00000074u); // 80147B10
  c->ctr=c->r[12]; // 80147B14
  if (true) { dispatch(c,c->ctr); return; } // 80147B18
L_80147B1C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80147B1C
  c->r[12]=R32(c->r[12]+0x00000078u); // 80147B20
  c->ctr=c->r[12]; // 80147B24
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80147B28
  if (true) { dispatch(c,c->ctr); return; } // 80147B2C
}

// GetFrameMaterial__Q34nw4r3lyt6WindowCFUl
void f_80147B30(Ctx* __restrict c) {
  trace_call(0x80147B30u);
  c->r[0]=R8(c->r[3]+0x00000104u); // 80147B30
  cmpu(c,0,c->r[4],c->r[0]); // 80147B34
  if (crb(c,0)) { goto L_80147B44; } // 80147B38
  c->r[3]=0u+0x00000000u; // 80147B3C
  return; // 80147B40
L_80147B44:;
  c->r[3]=R32(c->r[3]+0x00000100u); // 80147B44
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80147B48
  c->r[3]=c->r[3]+c->r[0]; // 80147B4C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80147B50
  return; // 80147B54
}

// GetContentMaterial__Q34nw4r3lyt6WindowCFv
void f_80147B58(Ctx* __restrict c) {
  trace_call(0x80147B58u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 80147B58
  c->r[12]=R32(c->r[12]+0x00000068u); // 80147B5C
  c->ctr=c->r[12]; // 80147B60
  if (true) { dispatch(c,c->ctr); return; } // 80147B64
}

// GetRuntimeTypeInfo__Q34nw4r3lyt6WindowCFv
void f_80147B68(Ctx* __restrict c) {
  trace_call(0x80147B68u);
  c->r[3]=c->r[13]+0xFFFFA978u; // 80147B68
  return; // 80147B6C
}

// fn_80147B70
void f_80147B70(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFFA958u; // 80147B70
  W32(c->r[13]+0xFFFFA978u,c->r[0]); // 80147B74
  return; // 80147B78
}

// __ct__Q34nw4r3lyt8BoundingFPCQ44nw4r3lyt3res8BoundingRCQ34nw4r3lyt11ResBlockSet
void f_80147B7C(Ctx* __restrict c) {
  trace_call(0x80147B7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147B7C
  c->r[0]=c->lr; // 80147B80
  W32(c->r[1]+0x00000014u,c->r[0]); // 80147B84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80147B88
  c->r[31]=c->r[3]|c->r[3]; // 80147B8C
  c->lr=0x80147B94u; f_8014168C(c); // 80147B90
  c->r[4]=0u+0x802C0000u; // 80147B94
  c->r[3]=c->r[31]|c->r[31]; // 80147B98
  c->r[4]=c->r[4]+0x000066C8u; // 80147B9C
  W32(c->r[31]+0x00000000u,c->r[4]); // 80147BA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80147BA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80147BA8
  c->lr=c->r[0]; // 80147BAC
  c->r[1]=c->r[1]+0x00000010u; // 80147BB0
  return; // 80147BB4
}

// __dt__Q34nw4r3lyt8BoundingFv
void f_80147BB8(Ctx* __restrict c) {
  trace_call(0x80147BB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147BB8
  c->r[0]=c->lr; // 80147BBC
  cmps(c,0,(int32_t)c->r[3],0); // 80147BC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80147BC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80147BC8
  c->r[31]=c->r[4]|c->r[4]; // 80147BCC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80147BD0
  c->r[30]=c->r[3]|c->r[3]; // 80147BD4
  if (crb(c,2)) { goto L_80147BF4; } // 80147BD8
  c->r[4]=0u+0x00000000u; // 80147BDC
  c->lr=0x80147BE4u; f_801417C4(c); // 80147BE0
  cmps(c,0,(int32_t)c->r[31],0); // 80147BE4
  if (!crb(c,1)) { goto L_80147BF4; } // 80147BE8
  c->r[3]=c->r[30]|c->r[30]; // 80147BEC
  c->lr=0x80147BF4u; f_802525B0(c); // 80147BF0
L_80147BF4:;
  c->r[3]=c->r[30]|c->r[30]; // 80147BF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80147BF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80147BFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80147C00
  c->lr=c->r[0]; // 80147C04
  c->r[1]=c->r[1]+0x00000010u; // 80147C08
  return; // 80147C0C
}

// DrawSelf__Q34nw4r3lyt8BoundingFRCQ34nw4r3lyt8DrawInfo
void f_80147C10(Ctx* __restrict c) {
  trace_call(0x80147C10u);
  return; // 80147C10
}

// GetRuntimeTypeInfo__Q34nw4r3lyt8BoundingCFv
void f_80147C14(Ctx* __restrict c) {
  trace_call(0x80147C14u);
  c->r[3]=c->r[13]+0xFFFFA980u; // 80147C14
  return; // 80147C18
}

// fn_80147C1C
void f_80147C1C(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFFA958u; // 80147C1C
  W32(c->r[13]+0xFFFFA980u,c->r[0]); // 80147C20
  return; // 80147C24
}

// CalcTextureMtx__Q34nw4r3lyt26@unnamed@lyt_material_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3lyt6TexSRT
void f_80147C28(Ctx* __restrict c) {
  trace_call(0x80147C28u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147C28
  c->r[0]=c->lr; // 80147C2C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80147C30
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80147C34
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80147C38
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147C3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80147C40
  c->r[31]=c->r[4]|c->r[4]; // 80147C44
  {uint32_t ea=c->r[2]+0xFFFFA8D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80147C48
  {uint32_t ea=c->r[2]+0xFFFFA8D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147C4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80147C50
  c->r[30]=c->r[3]|c->r[3]; // 80147C54
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80147C58
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80147C5C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 80147C60
  c->lr=0x80147C68u; f_800FDB64(c); // 80147C64
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80147C68
  c->f[31]=c->f[1]; // 80147C6C
  {uint32_t ea=c->r[2]+0xFFFFA8D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147C70
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 80147C74
  c->lr=0x80147C7Cu; f_800FDAFC(c); // 80147C78
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80147C7C
  c->f[5]=-c->f[1]; // 80147C80
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80147C84
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[3]); // 80147C88
  {uint32_t ea=c->r[2]+0xFFFFA8D8u; c->f[8]=c->ps1[8]=RF32(ea);} // 80147C8C
  c->f[11]=c->ps1[11]=S(c->f[31]*c->f[3]); // 80147C90
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147C94
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80147C98
  c->f[4]=-c->f[2]; // 80147C9C
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[0]); // 80147CA0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80147CA4
  c->f[10]=c->ps1[10]=S(c->f[31]*c->f[0]); // 80147CA8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147CAC
  c->f[5]=c->ps1[5]=S(c->f[3]+c->f[2]); // 80147CB0
  {uint32_t ea=c->r[2]+0xFFFFA8DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80147CB4
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[6]); // 80147CB8
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[11]);} // 80147CBC
  c->f[7]=-c->f[6]; // 80147CC0
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[4]); // 80147CC4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[12]);} // 80147CC8
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[4]); // 80147CCC
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[7]); // 80147CD0
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[8]);} // 80147CD4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80147CD8
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[3]); // 80147CDC
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[9]);} // 80147CE0
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[7]); // 80147CE4
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[10]);} // 80147CE8
  c->f[2]=c->ps1[2]=S(c->f[6]+c->f[4]); // 80147CEC
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 80147CF0
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[8]);} // 80147CF4
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 80147CF8
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 80147CFC
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[8]);} // 80147D00
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[8]);} // 80147D04
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 80147D08
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[8]);} // 80147D0C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80147D10
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80147D14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80147D18
  c->r[30]=R32(c->r[1]+0x00000018u); // 80147D1C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80147D20
  c->lr=c->r[0]; // 80147D24
  c->r[1]=c->r[1]+0x00000030u; // 80147D28
  return; // 80147D2C
}

// SetIndTexMtx__Q34nw4r3lyt26@unnamed@lyt_material_cpp@F14_GXIndTexMtxIDPA3_Cf
void f_80147D30(Ctx* __restrict c) {
  trace_call(0x80147D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147D30
  c->r[0]=c->lr; // 80147D34
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80147D38
  c->r[5]=0u+0x00000000u; // 80147D3C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80147D40
  c->f[8]=std::fabs(c->f[2]); // 80147D44
  {uint32_t ea=c->r[2]+0xFFFFA8DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80147D48
  {uint32_t ea=c->r[4]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 80147D4C
  c->f[9]=std::fabs(c->f[3]); // 80147D50
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80147D54
  {uint32_t ea=c->r[4]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 80147D58
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 80147D5C
  fcmp(c,0,c->f[8],c->f[0]); // 80147D60
  c->f[10]=std::fabs(c->f[4]); // 80147D64
  W32(c->r[1]+0x00000024u,c->r[0]); // 80147D68
  c->f[11]=std::fabs(c->f[5]); // 80147D6C
  c->f[12]=std::fabs(c->f[6]); // 80147D70
  c->f[13]=std::fabs(c->f[7]); // 80147D74
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80147D78
  if (crb(c,2)) { goto L_80147DBC; } // 80147D7C
  fcmp(c,0,c->f[9],c->f[0]); // 80147D80
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80147D84
  if (crb(c,2)) { goto L_80147DBC; } // 80147D88
  fcmp(c,0,c->f[10],c->f[0]); // 80147D8C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80147D90
  if (crb(c,2)) { goto L_80147DBC; } // 80147D94
  fcmp(c,0,c->f[11],c->f[0]); // 80147D98
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80147D9C
  if (crb(c,2)) { goto L_80147DBC; } // 80147DA0
  fcmp(c,0,c->f[12],c->f[0]); // 80147DA4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80147DA8
  if (crb(c,2)) { goto L_80147DBC; } // 80147DAC
  fcmp(c,0,c->f[13],c->f[0]); // 80147DB0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80147DB4
  if (!crb(c,2)) { goto L_80147E50; } // 80147DB8
L_80147DBC:;
  {uint32_t ea=c->r[2]+0xFFFFA8D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147DBC
  {uint32_t ea=c->r[2]+0xFFFFA8DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80147DC0
L_80147DC4:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80147DC4
  cmps(c,0,(int32_t)c->r[0],46); // 80147DC8
  if (!crb(c,0)) { goto L_80147EF8; } // 80147DCC
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[1]); // 80147DD0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 80147DD4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 80147DD8
  fcmp(c,0,c->f[8],c->f[0]); // 80147DDC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 80147DE0
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 80147DE4
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 80147DE8
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[1]); // 80147DEC
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[1]); // 80147DF0
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[1]); // 80147DF4
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[1]); // 80147DF8
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[1]); // 80147DFC
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[1]); // 80147E00
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80147E04
  c->r[5]=c->r[5]+0x00000001u; // 80147E08
  if (crb(c,2)) { IRQCHK(c); goto L_80147DC4; } // 80147E0C
  fcmp(c,0,c->f[9],c->f[0]); // 80147E10
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80147E14
  if (crb(c,2)) { IRQCHK(c); goto L_80147DC4; } // 80147E18
  fcmp(c,0,c->f[10],c->f[0]); // 80147E1C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80147E20
  if (crb(c,2)) { IRQCHK(c); goto L_80147DC4; } // 80147E24
  fcmp(c,0,c->f[11],c->f[0]); // 80147E28
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80147E2C
  if (crb(c,2)) { IRQCHK(c); goto L_80147DC4; } // 80147E30
  fcmp(c,0,c->f[12],c->f[0]); // 80147E34
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80147E38
  if (crb(c,2)) { IRQCHK(c); goto L_80147DC4; } // 80147E3C
  fcmp(c,0,c->f[13],c->f[0]); // 80147E40
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80147E44
  if (crb(c,2)) { IRQCHK(c); goto L_80147DC4; } // 80147E48
  goto L_80147EF8; // 80147E4C
L_80147E50:;
  {uint32_t ea=c->r[2]+0xFFFFA8D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147E50
  fcmp(c,0,c->f[8],c->f[1]); // 80147E54
  if (!crb(c,0)) { goto L_80147EF8; } // 80147E58
  fcmp(c,0,c->f[9],c->f[1]); // 80147E5C
  if (!crb(c,0)) { goto L_80147EF8; } // 80147E60
  fcmp(c,0,c->f[10],c->f[1]); // 80147E64
  if (!crb(c,0)) { goto L_80147EF8; } // 80147E68
  fcmp(c,0,c->f[11],c->f[1]); // 80147E6C
  if (!crb(c,0)) { goto L_80147EF8; } // 80147E70
  fcmp(c,0,c->f[12],c->f[1]); // 80147E74
  if (!crb(c,0)) { goto L_80147EF8; } // 80147E78
  fcmp(c,0,c->f[13],c->f[1]); // 80147E7C
  if (!crb(c,0)) { goto L_80147EF8; } // 80147E80
  {uint32_t ea=c->r[2]+0xFFFFA8E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147E84
L_80147E88:;
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 80147E88
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80147E8C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 80147E90
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80147E94
  fcmp(c,0,c->f[8],c->f[1]); // 80147E98
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 80147E9C
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 80147EA0
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[0]); // 80147EA4
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[0]); // 80147EA8
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 80147EAC
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 80147EB0
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[0]); // 80147EB4
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[0]); // 80147EB8
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[0]); // 80147EBC
  if (!crb(c,0)) { goto L_80147EF8; } // 80147EC0
  fcmp(c,0,c->f[9],c->f[1]); // 80147EC4
  if (!crb(c,0)) { goto L_80147EF8; } // 80147EC8
  fcmp(c,0,c->f[10],c->f[1]); // 80147ECC
  if (!crb(c,0)) { goto L_80147EF8; } // 80147ED0
  fcmp(c,0,c->f[11],c->f[1]); // 80147ED4
  if (!crb(c,0)) { goto L_80147EF8; } // 80147ED8
  fcmp(c,0,c->f[12],c->f[1]); // 80147EDC
  if (!crb(c,0)) { goto L_80147EF8; } // 80147EE0
  fcmp(c,0,c->f[13],c->f[1]); // 80147EE4
  if (!crb(c,0)) { goto L_80147EF8; } // 80147EE8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80147EEC
  cmps(c,0,(int32_t)c->r[0],-17); // 80147EF0
  if (crb(c,1)) { IRQCHK(c); goto L_80147E88; } // 80147EF4
L_80147EF8:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80147EF8
  c->r[4]=c->r[1]+0x00000008u; // 80147EFC
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80147F00
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 80147F04
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 80147F08
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[5]);} // 80147F0C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[6]);} // 80147F10
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[7]);} // 80147F14
  c->lr=0x80147F1Cu; f_8016A1C8(c); // 80147F18
  c->r[0]=R32(c->r[1]+0x00000024u); // 80147F1C
  c->lr=c->r[0]; // 80147F20
  c->r[1]=c->r[1]+0x00000020u; // 80147F24
  return; // 80147F28
}

// __as__Q34nw4r4math4VEC2FRCQ34nw4r4math4VEC2
void f_80147F2C(Ctx* __restrict c) {
  trace_call(0x80147F2Cu);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147F2C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147F30
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 80147F34
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80147F38
  return; // 80147F3C
}

// fn_80147F40
void f_80147F40(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80147F40
  c->r[4]=c->r[3]+0x00000004u; // 80147F44
  W32(c->r[3]+0x00000004u,c->r[0]); // 80147F48
  W32(c->r[3]+0x00000008u,c->r[0]); // 80147F4C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80147F50
  W32(c->r[3]+0x00000004u,c->r[4]); // 80147F54
  W32(c->r[3]+0x00000008u,c->r[4]); // 80147F58
  return; // 80147F5C
}

// __ct__Q34nw4r3lyt8MaterialFPCQ44nw4r3lyt3res8MaterialRCQ34nw4r3lyt11ResBlockSet
void f_80147F60(Ctx* __restrict c) {
  trace_call(0x80147F60u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147F60
  c->r[0]=c->lr; // 80147F64
  W32(c->r[1]+0x00000084u,c->r[0]); // 80147F68
  c->r[11]=c->r[1]+0x00000080u; // 80147F6C
  c->lr=0x80147F74u; f_80252B70(c); // 80147F70
  c->r[6]=0u+0x802C0000u; // 80147F74
  c->r[17]=c->r[3]|c->r[3]; // 80147F78
  c->r[6]=c->r[6]+0x00006780u; // 80147F7C
  c->r[18]=c->r[4]|c->r[4]; // 80147F80
  W32(c->r[3]+0x00000000u,c->r[6]); // 80147F84
  c->r[19]=c->r[5]|c->r[5]; // 80147F88
  c->r[3]=c->r[3]+0x00000004u; // 80147F8C
  c->lr=0x80147F94u; f_80147F40(c); // 80147F90
  c->r[4]=0u+0x80140000u; // 80147F94
  c->r[5]=0u+0x800D0000u; // 80147F98
  c->r[3]=c->r[17]+0x00000028u; // 80147F9C
  c->r[6]=0u+0x00000004u; // 80147FA0
  c->r[4]=c->r[4]+0x00003828u; // 80147FA4
  c->r[5]=c->r[5]+0x00002D0Cu; // 80147FA8
  c->r[7]=0u+0x00000004u; // 80147FAC
  c->lr=0x80147FB4u; f_802528E4(c); // 80147FB0
  c->r[3]=c->r[17]|c->r[17]; // 80147FB4
  c->lr=0x80147FBCu; f_8014890C(c); // 80147FB8
  c->r[3]=c->r[17]|c->r[17]; // 80147FBC
  c->r[4]=c->r[18]|c->r[18]; // 80147FC0
  c->lr=0x80147FC8u; f_80149418(c); // 80147FC4
  c->r[14]=c->r[18]+0x00000014u; // 80147FC8
  c->r[15]=c->r[17]+0x00000010u; // 80147FCC
  c->r[16]=0u+0x00000000u; // 80147FD0
L_80147FD4:;
  c->r[3]=c->r[15]|c->r[15]; // 80147FD4
  c->r[4]=c->r[14]|c->r[14]; // 80147FD8
  c->lr=0x80147FE0u; f_801485C4(c); // 80147FDC
  c->r[16]=c->r[16]+0x00000001u; // 80147FE0
  c->r[15]=c->r[15]+0x00000008u; // 80147FE4
  cmps(c,0,(int32_t)c->r[16],3); // 80147FE8
  c->r[14]=c->r[14]+0x00000008u; // 80147FEC
  if (crb(c,0)) { IRQCHK(c); goto L_80147FD4; } // 80147FF0
  c->r[14]=c->r[18]+0x0000002Cu; // 80147FF4
  c->r[15]=c->r[17]+0x00000028u; // 80147FF8
  c->r[16]=0u+0x00000000u; // 80147FFC
L_80148000:;
  c->r[3]=c->r[15]|c->r[15]; // 80148000
  c->r[4]=c->r[14]|c->r[14]; // 80148004
  c->lr=0x8014800Cu; f_801485E8(c); // 80148008
  c->r[16]=c->r[16]+0x00000001u; // 8014800C
  c->r[15]=c->r[15]+0x00000004u; // 80148010
  cmps(c,0,(int32_t)c->r[16],4); // 80148014
  c->r[14]=c->r[14]+0x00000004u; // 80148018
  if (crb(c,0)) { IRQCHK(c); goto L_80148000; } // 8014801C
  c->r[3]=c->r[18]|c->r[18]; // 80148020
  c->r[4]=0u+0x00000040u; // 80148024
  c->lr=0x8014802Cu; f_80148904(c); // 80148028
  c->r[28]=c->r[3]|c->r[3]; // 8014802C
  c->r[3]=c->r[18]+0x0000003Cu; // 80148030
  c->lr=0x80148038u; f_801485F4(c); // 80148034
  c->r[4]=rotl(c->r[3],2)&0x000003FCu; // 80148038
  c->r[3]=c->r[18]|c->r[18]; // 8014803C
  c->r[25]=c->r[4]+0x00000040u; // 80148040
  c->r[4]=c->r[25]|c->r[25]; // 80148044
  c->lr=0x8014804Cu; f_801488FC(c); // 80148048
  c->r[24]=c->r[3]|c->r[3]; // 8014804C
  c->r[3]=c->r[18]+0x0000003Cu; // 80148050
  c->lr=0x80148058u; f_80148600(c); // 80148054
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80148058
  c->r[3]=c->r[18]|c->r[18]; // 8014805C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80148060
  c->r[25]=c->r[25]+c->r[0]; // 80148064
  c->r[4]=c->r[25]|c->r[25]; // 80148068
  c->lr=0x80148070u; f_801488F4(c); // 8014806C
  c->r[23]=c->r[3]|c->r[3]; // 80148070
  c->r[3]=c->r[18]+0x0000003Cu; // 80148074
  c->lr=0x8014807Cu; f_8014860C(c); // 80148078
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 8014807C
  c->r[3]=c->r[18]+0x0000003Cu; // 80148080
  c->r[25]=c->r[25]+c->r[0]; // 80148084
  c->lr=0x8014808Cu; f_801485F4(c); // 80148088
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8014808C
  c->r[4]=0u+0x00000008u; // 80148090
  c->lr=0x80148098u; f_801488E4(c); // 80148094
  c->r[15]=c->r[3]|c->r[3]; // 80148098
  c->r[3]=c->r[18]+0x0000003Cu; // 8014809C
  c->lr=0x801480A4u; f_80148600(c); // 801480A0
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801480A4
  c->r[4]=0u+0x0000000Au; // 801480A8
  c->lr=0x801480B0u; f_801488E4(c); // 801480AC
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801480B0
  c->r[3]=c->r[18]+0x0000003Cu; // 801480B4
  c->lr=0x801480BCu; f_8014860C(c); // 801480B8
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801480BC
  c->r[4]=0u+0x00000008u; // 801480C0
  c->lr=0x801480C8u; f_801488E4(c); // 801480C4
  W32(c->r[1]+0x00000020u,c->r[3]); // 801480C8
  c->r[3]=c->r[18]+0x0000003Cu; // 801480CC
  c->lr=0x801480D4u; f_80148618(c); // 801480D0
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801480D4
  c->r[3]=c->r[18]+0x0000003Cu; // 801480D8
  c->r[0]=0u-c->r[4]; // 801480DC
  c->r[0]=c->r[0]|c->r[4]; // 801480E0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801480E4
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801480E8
  c->lr=0x801480F0u; f_80148624(c); // 801480EC
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801480F0
  c->r[3]=c->r[18]+0x0000003Cu; // 801480F4
  c->r[0]=0u-c->r[4]; // 801480F8
  c->r[0]=c->r[0]|c->r[4]; // 801480FC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80148100
  W8(c->r[1]+0x00000019u,c->r[0]); // 80148104
  c->lr=0x8014810Cu; f_80148630(c); // 80148108
  W8(c->r[1]+0x00000018u,c->r[3]); // 8014810C
  c->r[3]=c->r[18]+0x0000003Cu; // 80148110
  c->lr=0x80148118u; f_8014863C(c); // 80148114
  W32(c->r[1]+0x00000024u,c->r[3]); // 80148118
  c->r[3]=c->r[18]+0x0000003Cu; // 8014811C
  c->lr=0x80148124u; f_80148648(c); // 80148120
  W32(c->r[1]+0x00000028u,c->r[3]); // 80148124
  c->r[3]=c->r[18]+0x0000003Cu; // 80148128
  c->lr=0x80148130u; f_80148654(c); // 8014812C
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80148130
  c->r[4]=0u+0x00000003u; // 80148134
  c->lr=0x8014813Cu; f_801488E4(c); // 80148138
  c->r[29]=c->r[3]|c->r[3]; // 8014813C
  c->r[3]=c->r[18]+0x0000003Cu; // 80148140
  c->lr=0x80148148u; f_80148660(c); // 80148144
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80148148
  c->r[4]=0u+0x00000004u; // 8014814C
  c->lr=0x80148154u; f_801488E4(c); // 80148150
  c->r[30]=c->r[3]|c->r[3]; // 80148154
  c->r[3]=c->r[18]+0x0000003Cu; // 80148158
  c->lr=0x80148160u; f_8014866C(c); // 8014815C
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80148160
  c->r[4]=0u+0x00000010u; // 80148164
  c->lr=0x8014816Cu; f_801488E4(c); // 80148168
  c->r[0]=R8(c->r[1]+0x0000001Au); // 8014816C
  c->r[14]=c->r[3]|c->r[3]; // 80148170
  c->r[8]=R8(c->r[1]+0x00000018u); // 80148174
  c->r[3]=c->r[17]|c->r[17]; // 80148178
  W32(c->r[1]+0x00000008u,c->r[0]); // 8014817C
  c->r[4]=rotl(c->r[15],0)&0x000000FFu; // 80148180
  c->r[0]=R8(c->r[1]+0x00000019u); // 80148184
  c->r[7]=rotl(c->r[14],0)&0x000000FFu; // 80148188
  c->r[9]=rotl(c->r[30],0)&0x000000FFu; // 8014818C
  c->r[10]=rotl(c->r[29],0)&0x000000FFu; // 80148190
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80148194
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80148198
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 8014819C
  c->r[0]=R32(c->r[1]+0x00000020u); // 801481A0
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 801481A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801481A8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801481AC
  c->r[0]=R32(c->r[1]+0x00000028u); // 801481B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801481B4
  c->lr=0x801481BCu; f_80148A28(c); // 801481B8
  c->r[0]=R32(c->r[17]+0x00000040u); // 801481BC
  cmps(c,0,(int32_t)c->r[0],0); // 801481C0
  if (crb(c,2)) { goto L_801485A8; } // 801481C4
  c->r[3]=c->r[17]|c->r[17]; // 801481C8
  c->r[4]=rotl(c->r[15],0)&0x000000FFu; // 801481CC
  c->lr=0x801481D4u; f_80149454(c); // 801481D0
  c->r[0]=rotl(c->r[15],0)&0x000000FFu; cr0(c,c->r[0]); // 801481D4
  if (crb(c,2)) { goto L_801482CC; } // 801481D8
  c->r[3]=R32(c->r[19]+0x00000000u); // 801481DC
  c->r[4]=0u+0x0000000Cu; // 801481E0
  c->lr=0x801481E8u; f_801488DC(c); // 801481E4
  c->r[22]=c->r[3]|c->r[3]; // 801481E8
  c->r[3]=c->r[17]|c->r[17]; // 801481EC
  c->lr=0x801481F4u; f_80149194(c); // 801481F0
  c->r[31]=c->r[3]|c->r[3]; // 801481F4
  c->r[16]=rotl(c->r[15],0)&0x000000FFu; // 801481F8
  c->r[21]=0u+0x00000000u; // 801481FC
  c->r[20]=0u+0x00000000u; // 80148200
  goto L_801482B4; // 80148204
L_80148208:;
  c->r[15]=rotl(c->r[20],2)&0x000003FCu; // 80148208
  c->r[3]=c->r[22]|c->r[22]; // 8014820C
  c->r[0]=R16(c->r[28]+c->r[15]); // 80148210
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80148214
  c->r[4]=R32(c->r[22]+c->r[0]); // 80148218
  c->lr=0x80148220u; f_801488D4(c); // 8014821C
  c->r[5]=c->r[3]|c->r[3]; // 80148220
  c->r[3]=R32(c->r[19]+0x0000000Cu); // 80148224
  c->r[4]=0u+0x74690000u; // 80148228
  c->r[6]=0u+0x00000000u; // 8014822C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80148230
  c->r[4]=c->r[4]+0x00006D67u; // 80148234
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80148238
  c->ctr=c->r[12]; // 8014823C
  if (true) { c->lr=0x80148244u; dispatch(c,c->ctr); } // 80148240
  c->r[0]=rotl(c->r[21],0)&0x000000FFu; // 80148244
  c->r[4]=c->r[3]|c->r[3]; // 80148248
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 8014824C
  c->r[5]=0u+0x00000000u; // 80148250
  c->r[26]=c->r[31]+c->r[0]; // 80148254
  c->r[3]=c->r[26]|c->r[26]; // 80148258
  c->lr=0x80148260u; f_8014AAD8(c); // 8014825C
  c->r[27]=c->r[28]+c->r[15]; // 80148260
  c->r[3]=c->r[27]|c->r[27]; // 80148264
  c->lr=0x8014826Cu; f_80148698(c); // 80148268
  c->r[15]=c->r[3]|c->r[3]; // 8014826C
  c->r[3]=c->r[27]|c->r[27]; // 80148270
  c->lr=0x80148278u; f_8014868C(c); // 80148274
  c->r[4]=c->r[3]|c->r[3]; // 80148278
  c->r[3]=c->r[26]|c->r[26]; // 8014827C
  c->r[5]=c->r[15]|c->r[15]; // 80148280
  c->lr=0x80148288u; f_80148678(c); // 80148284
  c->r[3]=c->r[27]|c->r[27]; // 80148288
  c->lr=0x80148290u; f_801486CC(c); // 8014828C
  c->r[15]=c->r[3]|c->r[3]; // 80148290
  c->r[3]=c->r[27]|c->r[27]; // 80148294
  c->lr=0x8014829Cu; f_801486B8(c); // 80148298
  c->r[4]=c->r[3]|c->r[3]; // 8014829C
  c->r[3]=c->r[26]|c->r[26]; // 801482A0
  c->r[5]=c->r[15]|c->r[15]; // 801482A4
  c->lr=0x801482ACu; f_801486A4(c); // 801482A8
  c->r[21]=c->r[21]+0x00000001u; // 801482AC
  c->r[20]=c->r[20]+0x00000001u; // 801482B0
L_801482B4:;
  c->r[0]=rotl(c->r[20],0)&0x000000FFu; // 801482B4
  cmpu(c,0,c->r[0],c->r[16]); // 801482B8
  if (crb(c,0)) { IRQCHK(c); goto L_80148208; } // 801482BC
  c->r[3]=c->r[17]|c->r[17]; // 801482C0
  c->r[4]=rotl(c->r[21],0)&0x000000FFu; // 801482C4
  c->lr=0x801482CCu; f_80149454(c); // 801482C8
L_801482CC:;
  c->r[3]=c->r[17]|c->r[17]; // 801482CC
  c->lr=0x801482D4u; f_8014919C(c); // 801482D0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801482D4
  c->r[16]=c->r[3]|c->r[3]; // 801482D8
  c->r[19]=c->r[24]|c->r[24]; // 801482DC
  c->r[20]=0u+0x00000000u; // 801482E0
  c->r[15]=rotl(c->r[0],0)&0x000000FFu; // 801482E4
  goto L_8014831C; // 801482E8
L_801482EC:;
  c->r[3]=c->r[16]|c->r[16]; // 801482EC
  c->r[4]=c->r[24]|c->r[24]; // 801482F0
  c->lr=0x801482F8u; f_80147F2C(c); // 801482F4
  {uint32_t ea=c->r[19]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801482F8
  c->r[3]=c->r[16]+0x0000000Cu; // 801482FC
  c->r[4]=c->r[24]+0x0000000Cu; // 80148300
  {uint32_t ea=c->r[16]+0x00000008u; WF32(ea,c->f[0]);} // 80148304
  c->lr=0x8014830Cu; f_80147F2C(c); // 80148308
  c->r[24]=c->r[24]+0x00000014u; // 8014830C
  c->r[16]=c->r[16]+0x00000014u; // 80148310
  c->r[19]=c->r[19]+0x00000014u; // 80148314
  c->r[20]=c->r[20]+0x00000001u; // 80148318
L_8014831C:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[15]); // 8014831C
  if (crb(c,0)) { IRQCHK(c); goto L_801482EC; } // 80148320
  c->r[3]=c->r[17]|c->r[17]; // 80148324
  c->lr=0x8014832Cu; f_801491B4(c); // 80148328
  c->r[0]=R32(c->r[1]+0x00000020u); // 8014832C
  c->r[15]=c->r[3]|c->r[3]; // 80148330
  c->r[3]=c->r[17]|c->r[17]; // 80148334
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 80148338
  c->lr=0x80148340u; f_801494E4(c); // 8014833C
  c->r[16]=0u+0x00000000u; // 80148340
  goto L_80148360; // 80148344
L_80148348:;
  c->r[3]=c->r[15]|c->r[15]; // 80148348
  c->r[4]=c->r[23]|c->r[23]; // 8014834C
  c->lr=0x80148354u; f_801486E0(c); // 80148350
  c->r[23]=c->r[23]+0x00000004u; // 80148354
  c->r[15]=c->r[15]+0x00000004u; // 80148358
  c->r[16]=c->r[16]+0x00000001u; // 8014835C
L_80148360:;
  c->r[0]=R32(c->r[17]+0x0000003Cu); // 80148360
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 80148364
  cmpu(c,0,c->r[16],c->r[0]); // 80148368
  if (crb(c,0)) { IRQCHK(c); goto L_80148348; } // 8014836C
  c->r[0]=R8(c->r[1]+0x0000001Au); // 80148370
  cmps(c,0,(int32_t)c->r[0],0); // 80148374
  if (crb(c,2)) { goto L_801483A0; } // 80148378
  c->r[3]=c->r[18]|c->r[18]; // 8014837C
  c->r[4]=c->r[25]|c->r[25]; // 80148380
  c->lr=0x80148388u; f_801488CC(c); // 80148384
  c->r[15]=c->r[3]|c->r[3]; // 80148388
  c->r[3]=c->r[17]|c->r[17]; // 8014838C
  c->lr=0x80148394u; f_801491D8(c); // 80148390
  c->r[4]=c->r[15]|c->r[15]; // 80148394
  c->lr=0x8014839Cu; f_80148704(c); // 80148398
  c->r[25]=c->r[25]+0x00000004u; // 8014839C
L_801483A0:;
  c->r[0]=R8(c->r[1]+0x00000019u); // 801483A0
  cmps(c,0,(int32_t)c->r[0],0); // 801483A4
  if (crb(c,2)) { goto L_801483D0; } // 801483A8
  c->r[3]=c->r[18]|c->r[18]; // 801483AC
  c->r[4]=c->r[25]|c->r[25]; // 801483B0
  c->lr=0x801483B8u; f_801488C4(c); // 801483B4
  c->r[15]=c->r[3]|c->r[3]; // 801483B8
  c->r[3]=c->r[17]|c->r[17]; // 801483BC
  c->lr=0x801483C4u; f_80149204(c); // 801483C0
  c->r[4]=c->r[15]|c->r[15]; // 801483C4
  c->lr=0x801483CCu; f_80148728(c); // 801483C8
  c->r[25]=c->r[25]+0x00000004u; // 801483CC
L_801483D0:;
  c->r[0]=R8(c->r[1]+0x00000018u); // 801483D0
  cmps(c,0,(int32_t)c->r[0],0); // 801483D4
  if (crb(c,2)) { goto L_80148418; } // 801483D8
  c->r[3]=c->r[18]|c->r[18]; // 801483DC
  c->r[4]=c->r[25]|c->r[25]; // 801483E0
  c->lr=0x801483E8u; f_801488BC(c); // 801483E4
  c->r[16]=c->r[3]|c->r[3]; // 801483E8
  c->r[3]=c->r[17]|c->r[17]; // 801483EC
  c->lr=0x801483F4u; f_80149238(c); // 801483F0
  c->r[15]=c->r[3]|c->r[3]; // 801483F4
  c->r[19]=0u+0x00000000u; // 801483F8
L_801483FC:;
  c->r[3]=c->r[15]+c->r[19]; // 801483FC
  c->r[4]=c->r[16]+c->r[19]; // 80148400
  c->lr=0x80148408u; f_8014874C(c); // 80148404
  c->r[19]=c->r[19]+0x00000001u; // 80148408
  cmps(c,0,(int32_t)c->r[19],4); // 8014840C
  if (crb(c,0)) { IRQCHK(c); goto L_801483FC; } // 80148410
  c->r[25]=c->r[25]+0x00000004u; // 80148414
L_80148418:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[0]); // 80148418
  if (crb(c,2)) { goto L_80148468; } // 8014841C
  c->r[3]=c->r[17]|c->r[17]; // 80148420
  c->lr=0x80148428u; f_80149358(c); // 80148424
  c->r[19]=c->r[3]|c->r[3]; // 80148428
  c->r[3]=c->r[18]|c->r[18]; // 8014842C
  c->r[4]=c->r[25]|c->r[25]; // 80148430
  c->lr=0x80148438u; f_801488FC(c); // 80148434
  c->r[16]=c->r[3]|c->r[3]; // 80148438
  c->r[15]=rotl(c->r[29],0)&0x000000FFu; // 8014843C
  c->r[20]=0u+0x00000000u; // 80148440
  goto L_80148460; // 80148444
L_80148448:;
  c->r[3]=c->r[19]|c->r[19]; // 80148448
  c->r[4]=c->r[16]|c->r[16]; // 8014844C
  c->lr=0x80148454u; f_80148758(c); // 80148450
  c->r[16]=c->r[16]+0x00000014u; // 80148454
  c->r[19]=c->r[19]+0x00000014u; // 80148458
  c->r[20]=c->r[20]+0x00000001u; // 8014845C
L_80148460:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[15]); // 80148460
  if (crb(c,0)) { IRQCHK(c); goto L_80148448; } // 80148464
L_80148468:;
  c->r[3]=c->r[18]+0x0000003Cu; // 80148468
  c->lr=0x80148470u; f_80148654(c); // 8014846C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80148470
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[4]); // 80148474
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80148478
  c->r[25]=c->r[25]+c->r[0]; // 8014847C
  if (crb(c,2)) { goto L_801484D4; } // 80148480
  c->r[3]=c->r[17]|c->r[17]; // 80148484
  c->lr=0x8014848Cu; f_8014968C(c); // 80148488
  c->r[3]=c->r[17]|c->r[17]; // 8014848C
  c->lr=0x80148494u; f_80149304(c); // 80148490
  c->r[19]=c->r[3]|c->r[3]; // 80148494
  c->r[3]=c->r[18]|c->r[18]; // 80148498
  c->r[4]=c->r[25]|c->r[25]; // 8014849C
  c->lr=0x801484A4u; f_801488B4(c); // 801484A0
  c->r[16]=c->r[3]|c->r[3]; // 801484A4
  c->r[15]=rotl(c->r[30],0)&0x000000FFu; // 801484A8
  c->r[20]=0u+0x00000000u; // 801484AC
  goto L_801484CC; // 801484B0
L_801484B4:;
  c->r[3]=c->r[19]|c->r[19]; // 801484B4
  c->r[4]=c->r[16]|c->r[16]; // 801484B8
  c->lr=0x801484C0u; f_80148784(c); // 801484BC
  c->r[16]=c->r[16]+0x00000004u; // 801484C0
  c->r[19]=c->r[19]+0x00000004u; // 801484C4
  c->r[20]=c->r[20]+0x00000001u; // 801484C8
L_801484CC:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[15]); // 801484CC
  if (crb(c,0)) { IRQCHK(c); goto L_801484B4; } // 801484D0
L_801484D4:;
  c->r[3]=c->r[18]+0x0000003Cu; // 801484D4
  c->lr=0x801484DCu; f_80148660(c); // 801484D8
  c->r[4]=rotl(c->r[14],0)&0x000000FFu; cr0(c,c->r[4]); // 801484DC
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801484E0
  c->r[25]=c->r[25]+c->r[0]; // 801484E4
  if (crb(c,2)) { goto L_8014853C; } // 801484E8
  c->r[3]=c->r[17]|c->r[17]; // 801484EC
  c->lr=0x801484F4u; f_8014956C(c); // 801484F0
  c->r[3]=c->r[17]|c->r[17]; // 801484F4
  c->lr=0x801484FCu; f_801493B4(c); // 801484F8
  c->r[16]=c->r[3]|c->r[3]; // 801484FC
  c->r[3]=c->r[18]|c->r[18]; // 80148500
  c->r[4]=c->r[25]|c->r[25]; // 80148504
  c->lr=0x8014850Cu; f_801488AC(c); // 80148508
  c->r[15]=c->r[3]|c->r[3]; // 8014850C
  c->r[14]=rotl(c->r[14],0)&0x000000FFu; // 80148510
  c->r[19]=0u+0x00000000u; // 80148514
  goto L_80148534; // 80148518
L_8014851C:;
  c->r[3]=c->r[16]|c->r[16]; // 8014851C
  c->r[4]=c->r[15]|c->r[15]; // 80148520
  c->lr=0x80148528u; f_801487A8(c); // 80148524
  c->r[15]=c->r[15]+0x00000010u; // 80148528
  c->r[16]=c->r[16]+0x00000010u; // 8014852C
  c->r[19]=c->r[19]+0x00000001u; // 80148530
L_80148534:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[14]); // 80148534
  if (crb(c,0)) { IRQCHK(c); goto L_8014851C; } // 80148538
L_8014853C:;
  c->r[3]=c->r[18]+0x0000003Cu; // 8014853C
  c->lr=0x80148544u; f_8014866C(c); // 80148540
  c->r[0]=R32(c->r[1]+0x00000024u); // 80148544
  cmps(c,0,(int32_t)c->r[0],0); // 80148548
  c->r[0]=rotl(c->r[3],4)&0x00000FF0u; // 8014854C
  c->r[25]=c->r[25]+c->r[0]; // 80148550
  if (crb(c,2)) { goto L_8014857C; } // 80148554
  c->r[3]=c->r[18]|c->r[18]; // 80148558
  c->r[4]=c->r[25]|c->r[25]; // 8014855C
  c->lr=0x80148564u; f_801488A4(c); // 80148560
  c->r[14]=c->r[3]|c->r[3]; // 80148564
  c->r[3]=c->r[17]|c->r[17]; // 80148568
  c->lr=0x80148570u; f_80149274(c); // 8014856C
  c->r[4]=c->r[14]|c->r[14]; // 80148570
  c->lr=0x80148578u; f_80148854(c); // 80148574
  c->r[25]=c->r[25]+0x00000004u; // 80148578
L_8014857C:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 8014857C
  cmps(c,0,(int32_t)c->r[0],0); // 80148580
  if (crb(c,2)) { goto L_801485A8; } // 80148584
  c->r[3]=c->r[18]|c->r[18]; // 80148588
  c->r[4]=c->r[25]|c->r[25]; // 8014858C
  c->lr=0x80148594u; f_8014889C(c); // 80148590
  c->r[14]=c->r[3]|c->r[3]; // 80148594
  c->r[3]=c->r[17]|c->r[17]; // 80148598
  c->lr=0x801485A0u; f_801492B8(c); // 8014859C
  c->r[4]=c->r[14]|c->r[14]; // 801485A0
  c->lr=0x801485A8u; f_80148878(c); // 801485A4
L_801485A8:;
  c->r[11]=c->r[1]+0x00000080u; // 801485A8
  c->r[3]=c->r[17]|c->r[17]; // 801485AC
  c->lr=0x801485B4u; f_80252BBC(c); // 801485B0
  c->r[0]=R32(c->r[1]+0x00000084u); // 801485B4
  c->lr=c->r[0]; // 801485B8
  c->r[1]=c->r[1]+0x00000080u; // 801485BC
  return; // 801485C0
}

// __as__11_GXColorS10FRC11_GXColorS10
void f_801485C4(Ctx* __restrict c) {
  trace_call(0x801485C4u);
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000000u); // 801485C4
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 801485C8
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 801485CC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 801485D0
  W16(c->r[3]+0x00000000u,c->r[7]); // 801485D4
  W16(c->r[3]+0x00000002u,c->r[6]); // 801485D8
  W16(c->r[3]+0x00000004u,c->r[5]); // 801485DC
  W16(c->r[3]+0x00000006u,c->r[0]); // 801485E0
  return; // 801485E4
}

// __as__Q34nw4r2ut5ColorFRC8_GXColor
void f_801485E8(Ctx* __restrict c) {
  trace_call(0x801485E8u);
  c->r[0]=R32(c->r[4]+0x00000000u); // 801485E8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801485EC
  return; // 801485F0
}

// GetTexMapNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_801485F4(Ctx* __restrict c) {
  trace_call(0x801485F4u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801485F4
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 801485F8
  return; // 801485FC
}

// GetTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_80148600(Ctx* __restrict c) {
  trace_call(0x80148600u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80148600
  c->r[3]=rotl(c->r[0],28)&0x0000000Fu; // 80148604
  return; // 80148608
}

// GetTexCoordGenNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_8014860C(Ctx* __restrict c) {
  trace_call(0x8014860Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8014860C
  c->r[3]=rotl(c->r[0],24)&0x0000000Fu; // 80148610
  return; // 80148614
}

// GetChanCtrlNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_80148618(Ctx* __restrict c) {
  trace_call(0x80148618u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80148618
  c->r[3]=rotl(c->r[0],7)&0x00000001u; // 8014861C
  return; // 80148620
}

// GetMatColNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_80148624(Ctx* __restrict c) {
  trace_call(0x80148624u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80148624
  c->r[3]=rotl(c->r[0],5)&0x00000001u; // 80148628
  return; // 8014862C
}

// HasTevSwapTable__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_80148630(Ctx* __restrict c) {
  trace_call(0x80148630u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80148630
  c->r[3]=rotl(c->r[0],20)&0x00000001u; // 80148634
  return; // 80148638
}

// HasAlphaCompare__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_8014863C(Ctx* __restrict c) {
  trace_call(0x8014863Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8014863C
  c->r[3]=rotl(c->r[0],9)&0x00000001u; // 80148640
  return; // 80148644
}

// HasBlendMode__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_80148648(Ctx* __restrict c) {
  trace_call(0x80148648u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80148648
  c->r[3]=rotl(c->r[0],8)&0x00000001u; // 8014864C
  return; // 80148650
}

// GetIndTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_80148654(Ctx* __restrict c) {
  trace_call(0x80148654u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80148654
  c->r[3]=rotl(c->r[0],19)&0x00000003u; // 80148658
  return; // 8014865C
}

// GetIndTexStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_80148660(Ctx* __restrict c) {
  trace_call(0x80148660u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80148660
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 80148664
  return; // 80148668
}

// GetTevStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_8014866C(Ctx* __restrict c) {
  trace_call(0x8014866Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8014866C
  c->r[3]=rotl(c->r[0],14)&0x0000001Fu; // 80148670
  return; // 80148674
}

// SetWrapMode__Q34nw4r3lyt6TexMapF14_GXTexWrapMode14_GXTexWrapMode
void f_80148678(Ctx* __restrict c) {
  trace_call(0x80148678u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 80148678
  c->r[0]=(rotl(c->r[4],25)&0x06000000u)|(c->r[0]&~0x06000000u); // 8014867C
  c->r[0]=(rotl(c->r[5],23)&0x01800000u)|(c->r[0]&~0x01800000u); // 80148680
  W32(c->r[3]+0x00000018u,c->r[0]); // 80148684
  return; // 80148688
}

// GetWarpModeS__Q44nw4r3lyt3res6TexMapCFv
void f_8014868C(Ctx* __restrict c) {
  trace_call(0x8014868Cu);
  c->r[0]=R8(c->r[3]+0x00000002u); // 8014868C
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 80148690
  return; // 80148694
}

// GetWarpModeT__Q44nw4r3lyt3res6TexMapCFv
void f_80148698(Ctx* __restrict c) {
  trace_call(0x80148698u);
  c->r[0]=R8(c->r[3]+0x00000003u); // 80148698
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 8014869C
  return; // 801486A0
}

// SetFilter__Q34nw4r3lyt6TexMapF12_GXTexFilter12_GXTexFilter
void f_801486A4(Ctx* __restrict c) {
  trace_call(0x801486A4u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801486A4
  c->r[0]=(rotl(c->r[4],20)&0x00700000u)|(c->r[0]&~0x00700000u); // 801486A8
  c->r[0]=(rotl(c->r[5],19)&0x00080000u)|(c->r[0]&~0x00080000u); // 801486AC
  W32(c->r[3]+0x00000018u,c->r[0]); // 801486B0
  return; // 801486B4
}

// GetMinFilter__Q44nw4r3lyt3res6TexMapCFv
void f_801486B8(Ctx* __restrict c) {
  trace_call(0x801486B8u);
  c->r[0]=R8(c->r[3]+0x00000002u); // 801486B8
  c->r[3]=rotl(c->r[0],30)&0x00000007u; // 801486BC
  c->r[0]=c->r[3]+0x00000001u; // 801486C0
  c->r[3]=rotl(c->r[0],0)&0x00000007u; // 801486C4
  return; // 801486C8
}

// GetMagFilter__Q44nw4r3lyt3res6TexMapCFv
void f_801486CC(Ctx* __restrict c) {
  trace_call(0x801486CCu);
  c->r[0]=R8(c->r[3]+0x00000003u); // 801486CC
  c->r[3]=rotl(c->r[0],30)&0x00000001u; // 801486D0
  c->r[0]=c->r[3]+0x00000001u; // 801486D4
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 801486D8
  return; // 801486DC
}

// __as__Q34nw4r3lyt11TexCoordGenFRCQ34nw4r3lyt11TexCoordGen
void f_801486E0(Ctx* __restrict c) {
  trace_call(0x801486E0u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 801486E0
  c->r[6]=R8(c->r[4]+0x00000001u); // 801486E4
  c->r[5]=R8(c->r[4]+0x00000002u); // 801486E8
  c->r[0]=R8(c->r[4]+0x00000003u); // 801486EC
  W8(c->r[3]+0x00000000u,c->r[7]); // 801486F0
  W8(c->r[3]+0x00000001u,c->r[6]); // 801486F4
  W8(c->r[3]+0x00000002u,c->r[5]); // 801486F8
  W8(c->r[3]+0x00000003u,c->r[0]); // 801486FC
  return; // 80148700
}

// __as__Q34nw4r3lyt8ChanCtrlFRCQ34nw4r3lyt8ChanCtrl
void f_80148704(Ctx* __restrict c) {
  trace_call(0x80148704u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 80148704
  c->r[6]=R8(c->r[4]+0x00000001u); // 80148708
  c->r[5]=R8(c->r[4]+0x00000002u); // 8014870C
  c->r[0]=R8(c->r[4]+0x00000003u); // 80148710
  W8(c->r[3]+0x00000000u,c->r[7]); // 80148714
  W8(c->r[3]+0x00000001u,c->r[6]); // 80148718
  W8(c->r[3]+0x00000002u,c->r[5]); // 8014871C
  W8(c->r[3]+0x00000003u,c->r[0]); // 80148720
  return; // 80148724
}

// __as__Q34nw4r2ut5ColorFRCQ34nw4r2ut5Color
void f_80148728(Ctx* __restrict c) {
  trace_call(0x80148728u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 80148728
  c->r[6]=R8(c->r[4]+0x00000001u); // 8014872C
  c->r[5]=R8(c->r[4]+0x00000002u); // 80148730
  c->r[0]=R8(c->r[4]+0x00000003u); // 80148734
  W8(c->r[3]+0x00000000u,c->r[7]); // 80148738
  W8(c->r[3]+0x00000001u,c->r[6]); // 8014873C
  W8(c->r[3]+0x00000002u,c->r[5]); // 80148740
  W8(c->r[3]+0x00000003u,c->r[0]); // 80148744
  return; // 80148748
}

// __as__Q34nw4r3lyt11TevSwapModeFRCQ34nw4r3lyt11TevSwapMode
void f_8014874C(Ctx* __restrict c) {
  trace_call(0x8014874Cu);
  c->r[0]=R8(c->r[4]+0x00000000u); // 8014874C
  W8(c->r[3]+0x00000000u,c->r[0]); // 80148750
  return; // 80148754
}

// __as__Q34nw4r3lyt6TexSRTFRCQ34nw4r3lyt6TexSRT
void f_80148758(Ctx* __restrict c) {
  trace_call(0x80148758u);
  c->r[7]=R32(c->r[4]+0x00000000u); // 80148758
  c->r[6]=R32(c->r[4]+0x00000004u); // 8014875C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80148760
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 80148764
  c->r[0]=R32(c->r[4]+0x00000010u); // 80148768
  W32(c->r[3]+0x00000000u,c->r[7]); // 8014876C
  W32(c->r[3]+0x00000004u,c->r[6]); // 80148770
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80148774
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 80148778
  W32(c->r[3]+0x00000010u,c->r[0]); // 8014877C
  return; // 80148780
}

// __as__Q34nw4r3lyt13IndirectStageFRCQ34nw4r3lyt13IndirectStage
void f_80148784(Ctx* __restrict c) {
  trace_call(0x80148784u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 80148784
  c->r[6]=R8(c->r[4]+0x00000001u); // 80148788
  c->r[5]=R8(c->r[4]+0x00000002u); // 8014878C
  c->r[0]=R8(c->r[4]+0x00000003u); // 80148790
  W8(c->r[3]+0x00000000u,c->r[7]); // 80148794
  W8(c->r[3]+0x00000001u,c->r[6]); // 80148798
  W8(c->r[3]+0x00000002u,c->r[5]); // 8014879C
  W8(c->r[3]+0x00000003u,c->r[0]); // 801487A0
  return; // 801487A4
}

// __as__Q34nw4r3lyt8TevStageFRCQ34nw4r3lyt8TevStage
void f_801487A8(Ctx* __restrict c) {
  trace_call(0x801487A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801487A8
  c->r[0]=c->lr; // 801487AC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801487B0
  c->r[11]=c->r[1]+0x00000030u; // 801487B4
  c->lr=0x801487BCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801487B8
  c->r[25]=R8(c->r[4]+0x00000000u); // 801487BC
  c->r[26]=R8(c->r[4]+0x00000001u); // 801487C0
  c->r[27]=R8(c->r[4]+0x00000002u); // 801487C4
  c->r[28]=R8(c->r[4]+0x00000003u); // 801487C8
  c->r[29]=R8(c->r[4]+0x00000004u); // 801487CC
  c->r[30]=R8(c->r[4]+0x00000005u); // 801487D0
  c->r[31]=R8(c->r[4]+0x00000006u); // 801487D4
  c->r[12]=R8(c->r[4]+0x00000007u); // 801487D8
  c->r[11]=R8(c->r[4]+0x00000008u); // 801487DC
  c->r[10]=R8(c->r[4]+0x00000009u); // 801487E0
  c->r[9]=R8(c->r[4]+0x0000000Au); // 801487E4
  c->r[8]=R8(c->r[4]+0x0000000Bu); // 801487E8
  c->r[7]=R8(c->r[4]+0x0000000Cu); // 801487EC
  c->r[6]=R8(c->r[4]+0x0000000Du); // 801487F0
  c->r[5]=R8(c->r[4]+0x0000000Eu); // 801487F4
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 801487F8
  W8(c->r[3]+0x00000008u,c->r[11]); // 801487FC
  c->r[11]=c->r[1]+0x00000030u; // 80148800
  W8(c->r[3]+0x00000000u,c->r[25]); // 80148804
  W8(c->r[3]+0x00000001u,c->r[26]); // 80148808
  W8(c->r[3]+0x00000002u,c->r[27]); // 8014880C
  W8(c->r[3]+0x00000003u,c->r[28]); // 80148810
  W8(c->r[3]+0x00000004u,c->r[29]); // 80148814
  W8(c->r[3]+0x00000005u,c->r[30]); // 80148818
  W8(c->r[3]+0x00000006u,c->r[31]); // 8014881C
  W8(c->r[3]+0x00000007u,c->r[12]); // 80148820
  W8(c->r[3]+0x00000009u,c->r[10]); // 80148824
  W8(c->r[3]+0x0000000Au,c->r[9]); // 80148828
  W8(c->r[3]+0x0000000Bu,c->r[8]); // 8014882C
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 80148830
  W8(c->r[3]+0x0000000Du,c->r[6]); // 80148834
  W8(c->r[3]+0x0000000Eu,c->r[5]); // 80148838
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8014883C
  c->lr=0x80148844u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80148840
  c->r[0]=R32(c->r[1]+0x00000034u); // 80148844
  c->lr=c->r[0]; // 80148848
  c->r[1]=c->r[1]+0x00000030u; // 8014884C
  return; // 80148850
}

// __as__Q34nw4r3lyt12AlphaCompareFRCQ34nw4r3lyt12AlphaCompare
void f_80148854(Ctx* __restrict c) {
  trace_call(0x80148854u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 80148854
  c->r[6]=R8(c->r[4]+0x00000001u); // 80148858
  c->r[5]=R8(c->r[4]+0x00000002u); // 8014885C
  c->r[0]=R8(c->r[4]+0x00000003u); // 80148860
  W8(c->r[3]+0x00000000u,c->r[7]); // 80148864
  W8(c->r[3]+0x00000001u,c->r[6]); // 80148868
  W8(c->r[3]+0x00000002u,c->r[5]); // 8014886C
  W8(c->r[3]+0x00000003u,c->r[0]); // 80148870
  return; // 80148874
}

// __as__Q34nw4r3lyt9BlendModeFRCQ34nw4r3lyt9BlendMode
void f_80148878(Ctx* __restrict c) {
  trace_call(0x80148878u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 80148878
  c->r[6]=R8(c->r[4]+0x00000001u); // 8014887C
  c->r[5]=R8(c->r[4]+0x00000002u); // 80148880
  c->r[0]=R8(c->r[4]+0x00000003u); // 80148884
  W8(c->r[3]+0x00000000u,c->r[7]); // 80148888
  W8(c->r[3]+0x00000001u,c->r[6]); // 8014888C
  W8(c->r[3]+0x00000002u,c->r[5]); // 80148890
  W8(c->r[3]+0x00000003u,c->r[0]); // 80148894
  return; // 80148898
}

// ConvertOffsToPtr<Q34nw4r3lyt9BlendMode>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt9BlendMode
void f_8014889C(Ctx* __restrict c) {
  trace_call(0x8014889Cu);
  c->r[3]=c->r[3]+c->r[4]; // 8014889C
  return; // 801488A0
}

// ConvertOffsToPtr<Q34nw4r3lyt12AlphaCompare>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt12AlphaCompare
void f_801488A4(Ctx* __restrict c) {
  trace_call(0x801488A4u);
  c->r[3]=c->r[3]+c->r[4]; // 801488A4
  return; // 801488A8
}

// ConvertOffsToPtr<Q34nw4r3lyt8TevStage>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt8TevStage
void f_801488AC(Ctx* __restrict c) {
  trace_call(0x801488ACu);
  c->r[3]=c->r[3]+c->r[4]; // 801488AC
  return; // 801488B0
}

// ConvertOffsToPtr<Q34nw4r3lyt13IndirectStage>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt13IndirectStage
void f_801488B4(Ctx* __restrict c) {
  trace_call(0x801488B4u);
  c->r[3]=c->r[3]+c->r[4]; // 801488B4
  return; // 801488B8
}

// ConvertOffsToPtr<Q34nw4r3lyt11TevSwapMode>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt11TevSwapMode
void f_801488BC(Ctx* __restrict c) {
  trace_call(0x801488BCu);
  c->r[3]=c->r[3]+c->r[4]; // 801488BC
  return; // 801488C0
}

// ConvertOffsToPtr<Q34nw4r2ut5Color>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r2ut5Color
void f_801488C4(Ctx* __restrict c) {
  trace_call(0x801488C4u);
  c->r[3]=c->r[3]+c->r[4]; // 801488C4
  return; // 801488C8
}

// ConvertOffsToPtr<Q34nw4r3lyt8ChanCtrl>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt8ChanCtrl
void f_801488CC(Ctx* __restrict c) {
  trace_call(0x801488CCu);
  c->r[3]=c->r[3]+c->r[4]; // 801488CC
  return; // 801488D0
}

// ConvertOffsToPtr<c>__Q34nw4r3lyt6detailFPCvUi_PCc
void f_801488D4(Ctx* __restrict c) {
  trace_call(0x801488D4u);
  c->r[3]=c->r[3]+c->r[4]; // 801488D4
  return; // 801488D8
}

// ConvertOffsToPtr<Q44nw4r3lyt3res7Texture>__Q34nw4r3lyt6detailFPCvUi_PCQ44nw4r3lyt3res7Texture
void f_801488DC(Ctx* __restrict c) {
  trace_call(0x801488DCu);
  c->r[3]=c->r[3]+c->r[4]; // 801488DC
  return; // 801488E0
}

// Min<Uc>__Q34nw4r2ut26@unnamed@lyt_material_cpp@FUcUc_Uc
void f_801488E4(Ctx* __restrict c) {
  trace_call(0x801488E4u);
  cmpu(c,0,c->r[3],c->r[4]); // 801488E4
  if (!crb(c,1)) return; // 801488E8
  c->r[3]=c->r[4]|c->r[4]; // 801488EC
  return; // 801488F0
}

// ConvertOffsToPtr<Q34nw4r3lyt11TexCoordGen>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt11TexCoordGen
void f_801488F4(Ctx* __restrict c) {
  trace_call(0x801488F4u);
  c->r[3]=c->r[3]+c->r[4]; // 801488F4
  return; // 801488F8
}

// ConvertOffsToPtr<Q34nw4r3lyt6TexSRT>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt6TexSRT
void f_801488FC(Ctx* __restrict c) {
  trace_call(0x801488FCu);
  c->r[3]=c->r[3]+c->r[4]; // 801488FC
  return; // 80148900
}

// ConvertOffsToPtr<Q44nw4r3lyt3res6TexMap>__Q34nw4r3lyt6detailFPCvUi_PCQ44nw4r3lyt3res6TexMap
void f_80148904(Ctx* __restrict c) {
  trace_call(0x80148904u);
  c->r[3]=c->r[3]+c->r[4]; // 80148904
  return; // 80148908
}

// Init__Q34nw4r3lyt8MaterialFv
void f_8014890C(Ctx* __restrict c) {
  trace_call(0x8014890Cu);
  c->r[7]=c->r[2]+0xFFFFB340u; // 8014890C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80148910
  c->r[5]=R32(c->r[3]+0x00000038u); // 80148914
  c->r[6]=0u+0x000000FFu; // 80148918
  c->r[4]=0u+0x00000000u; // 8014891C
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[2]+0xFFFFB340u); // 80148920
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000002u); // 80148924
  c->r[5]=rotl(c->r[5],0)&0x0000001Fu; // 80148928
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000004u); // 8014892C
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 80148930
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000006u); // 80148934
  W16(c->r[3]+0x00000010u,c->r[10]); // 80148938
  W16(c->r[3]+0x00000012u,c->r[9]); // 8014893C
  W16(c->r[3]+0x00000014u,c->r[8]); // 80148940
  W16(c->r[3]+0x00000016u,c->r[7]); // 80148944
  W16(c->r[3]+0x00000018u,c->r[6]); // 80148948
  W16(c->r[3]+0x0000001Au,c->r[6]); // 8014894C
  W16(c->r[3]+0x0000001Cu,c->r[6]); // 80148950
  W16(c->r[3]+0x0000001Eu,c->r[6]); // 80148954
  W16(c->r[3]+0x00000020u,c->r[6]); // 80148958
  W16(c->r[3]+0x00000022u,c->r[6]); // 8014895C
  W16(c->r[3]+0x00000024u,c->r[6]); // 80148960
  W16(c->r[3]+0x00000026u,c->r[6]); // 80148964
  W32(c->r[3]+0x00000038u,c->r[5]); // 80148968
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8014896C
  W8(c->r[3]+0x00000059u,c->r[4]); // 80148970
  W32(c->r[3]+0x00000040u,c->r[4]); // 80148974
  return; // 80148978
}

// __dt__Q34nw4r3lyt8MaterialFv
void f_8014897C(Ctx* __restrict c) {
  trace_call(0x8014897Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014897C
  c->r[0]=c->lr; // 80148980
  cmps(c,0,(int32_t)c->r[3],0); // 80148984
  W32(c->r[1]+0x00000014u,c->r[0]); // 80148988
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014898C
  c->r[31]=c->r[4]|c->r[4]; // 80148990
  W32(c->r[1]+0x00000008u,c->r[30]); // 80148994
  c->r[30]=c->r[3]|c->r[3]; // 80148998
  if (crb(c,2)) { goto L_80148A0C; } // 8014899C
  c->r[12]=0u+0x802C0000u; // 801489A0
  c->r[12]=c->r[12]+0x00006780u; // 801489A4
  W32(c->r[3]+0x00000000u,c->r[12]); // 801489A8
  c->r[12]=R32(c->r[12]+0x00000018u); // 801489AC
  c->ctr=c->r[12]; // 801489B0
  if (true) { c->lr=0x801489B8u; dispatch(c,c->ctr); } // 801489B4
  c->r[4]=R32(c->r[30]+0x00000040u); // 801489B8
  cmps(c,0,(int32_t)c->r[4],0); // 801489BC
  if (crb(c,2)) { goto L_801489D4; } // 801489C0
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 801489C4
  c->lr=0x801489CCu; f_8017C1B4(c); // 801489C8
  c->r[0]=0u+0x00000000u; // 801489CC
  W32(c->r[30]+0x00000040u,c->r[0]); // 801489D0
L_801489D4:;
  c->r[4]=0u+0x800D0000u; // 801489D4
  c->r[3]=c->r[30]+0x00000028u; // 801489D8
  c->r[4]=c->r[4]+0x00002D0Cu; // 801489DC
  c->r[5]=0u+0x00000004u; // 801489E0
  c->r[6]=0u+0x00000004u; // 801489E4
  c->lr=0x801489ECu; f_802529DC(c); // 801489E8
  c->r[3]=addc(c,c->r[30],0x00000004u,0); cr0(c,c->r[3]); // 801489EC
  if (crb(c,2)) { goto L_801489FC; } // 801489F0
  c->r[4]=0u+0x00000000u; // 801489F4
  c->lr=0x801489FCu; f_800F6320(c); // 801489F8
L_801489FC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801489FC
  if (!crb(c,1)) { goto L_80148A0C; } // 80148A00
  c->r[3]=c->r[30]|c->r[30]; // 80148A04
  c->lr=0x80148A0Cu; f_802525B0(c); // 80148A08
L_80148A0C:;
  c->r[3]=c->r[30]|c->r[30]; // 80148A0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80148A10
  c->r[30]=R32(c->r[1]+0x00000008u); // 80148A14
  c->r[0]=R32(c->r[1]+0x00000014u); // 80148A18
  c->lr=c->r[0]; // 80148A1C
  c->r[1]=c->r[1]+0x00000010u; // 80148A20
  return; // 80148A24
}

// ReserveGXMem__Q34nw4r3lyt8MaterialFUcUcUcUcbUcUcbbbb
void f_80148A28(Ctx* __restrict c) {
  trace_call(0x80148A28u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80148A28
  c->r[0]=c->lr; // 80148A2C
  W32(c->r[1]+0x00000064u,c->r[0]); // 80148A30
  c->r[11]=c->r[1]+0x00000060u; // 80148A34
  c->lr=0x80148A3Cu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80148A38
  c->r[0]=R32(c->r[3]+0x00000038u); // 80148A3C
  c->r[20]=c->r[3]|c->r[3]; // 80148A40
  c->r[28]=R8(c->r[1]+0x0000006Bu); // 80148A44
  c->r[21]=c->r[4]|c->r[4]; // 80148A48
  c->r[11]=rotl(c->r[0],4)&0x0000000Fu; // 80148A4C
  c->r[29]=R8(c->r[1]+0x0000006Fu); // 80148A50
  cmpu(c,0,c->r[11],c->r[4]); // 80148A54
  c->r[30]=R8(c->r[1]+0x00000073u); // 80148A58
  c->r[31]=R8(c->r[1]+0x00000077u); // 80148A5C
  c->r[22]=c->r[5]|c->r[5]; // 80148A60
  c->r[23]=c->r[6]|c->r[6]; // 80148A64
  c->r[24]=c->r[7]|c->r[7]; // 80148A68
  c->r[25]=c->r[8]|c->r[8]; // 80148A6C
  c->r[26]=c->r[9]|c->r[9]; // 80148A70
  c->r[27]=c->r[10]|c->r[10]; // 80148A74
  if (crb(c,0)) { goto L_80148AF4; } // 80148A78
  c->r[4]=rotl(c->r[0],8)&0x0000000Fu; // 80148A7C
  cmpu(c,0,c->r[4],c->r[5]); // 80148A80
  if (crb(c,0)) { goto L_80148AF4; } // 80148A84
  c->r[4]=rotl(c->r[0],12)&0x0000000Fu; // 80148A88
  cmpu(c,0,c->r[4],c->r[6]); // 80148A8C
  if (crb(c,0)) { goto L_80148AF4; } // 80148A90
  c->r[4]=rotl(c->r[0],23)&0x0000001Fu; // 80148A94
  cmpu(c,0,c->r[4],c->r[7]); // 80148A98
  if (crb(c,0)) { goto L_80148AF4; } // 80148A9C
  c->r[4]=rotl(c->r[0],18)&0x00000001u; // 80148AA0
  cmpu(c,0,c->r[4],c->r[8]); // 80148AA4
  if (crb(c,0)) { goto L_80148AF4; } // 80148AA8
  c->r[4]=rotl(c->r[0],17)&0x00000007u; // 80148AAC
  cmpu(c,0,c->r[4],c->r[9]); // 80148AB0
  if (crb(c,0)) { goto L_80148AF4; } // 80148AB4
  c->r[4]=rotl(c->r[0],14)&0x00000003u; // 80148AB8
  cmpu(c,0,c->r[4],c->r[10]); // 80148ABC
  if (crb(c,0)) { goto L_80148AF4; } // 80148AC0
  c->r[4]=rotl(c->r[0],24)&0x00000001u; // 80148AC4
  cmpu(c,0,c->r[4],c->r[28]); // 80148AC8
  if (crb(c,0)) { goto L_80148AF4; } // 80148ACC
  c->r[4]=rotl(c->r[0],25)&0x00000001u; // 80148AD0
  cmpu(c,0,c->r[4],c->r[29]); // 80148AD4
  if (crb(c,0)) { goto L_80148AF4; } // 80148AD8
  c->r[4]=rotl(c->r[0],26)&0x00000001u; // 80148ADC
  cmpu(c,0,c->r[4],c->r[30]); // 80148AE0
  if (crb(c,0)) { goto L_80148AF4; } // 80148AE4
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 80148AE8
  cmpu(c,0,c->r[0],c->r[31]); // 80148AEC
  if (!crb(c,0)) { goto L_8014917C; } // 80148AF0
L_80148AF4:;
  c->r[4]=R32(c->r[3]+0x00000040u); // 80148AF4
  cmps(c,0,(int32_t)c->r[4],0); // 80148AF8
  if (crb(c,2)) { goto L_80148B28; } // 80148AFC
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80148B00
  c->lr=0x80148B08u; f_8017C1B4(c); // 80148B04
  c->r[3]=R32(c->r[20]+0x00000038u); // 80148B08
  c->r[4]=0u+0x00000000u; // 80148B0C
  c->r[0]=R32(c->r[20]+0x0000003Cu); // 80148B10
  c->r[3]=rotl(c->r[3],0)&0x0000001Fu; // 80148B14
  W32(c->r[20]+0x00000040u,c->r[4]); // 80148B18
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 80148B1C
  W32(c->r[20]+0x00000038u,c->r[3]); // 80148B20
  W32(c->r[20]+0x0000003Cu,c->r[0]); // 80148B24
L_80148B28:;
  c->r[4]=c->r[27]+c->r[22]; // 80148B28
  c->r[0]=c->r[25]+c->r[28]; // 80148B2C
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 80148B30
  c->r[5]=c->r[31]+c->r[29]; // 80148B34
  c->r[3]=c->r[26]+c->r[23]; // 80148B38
  c->r[4]=c->r[30]+c->r[0]; // 80148B3C
  c->r[6]=c->r[5]+c->r[3]; // 80148B40
  c->r[0]=rotl(c->r[24],4)&0x00000FF0u; // 80148B44
  c->r[5]=(uint32_t)((int32_t)c->r[21]*(int32_t)28); // 80148B48
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 80148B4C
  c->r[4]=c->r[6]+c->r[4]; // 80148B50
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80148B54
  c->r[4]=c->r[7]+c->r[4]; // 80148B58
  c->r[0]=c->r[5]+c->r[0]; // 80148B5C
  c->r[4]=c->r[4]+c->r[0]; // 80148B60
  c->lr=0x80148B68u; f_8017C1A4(c); // 80148B64
  cmps(c,0,(int32_t)c->r[3],0); // 80148B68
  W32(c->r[20]+0x00000040u,c->r[3]); // 80148B6C
  if (crb(c,2)) { goto L_8014917C; } // 80148B70
  c->r[0]=R32(c->r[20]+0x00000038u); // 80148B74
  c->r[0]=(rotl(c->r[21],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 80148B78
  c->r[0]=(rotl(c->r[22],24)&0x0F000000u)|(c->r[0]&~0x0F000000u); // 80148B7C
  c->r[4]=R32(c->r[20]+0x0000003Cu); // 80148B80
  c->r[0]=(rotl(c->r[23],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 80148B84
  c->r[6]=0u+0x00000000u; // 80148B88
  c->r[0]=(rotl(c->r[27],18)&0x000C0000u)|(c->r[0]&~0x000C0000u); // 80148B8C
  c->r[0]=(rotl(c->r[26],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 80148B90
  c->r[0]=(rotl(c->r[25],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 80148B94
  c->r[0]=(rotl(c->r[24],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 80148B98
  c->r[0]=(rotl(c->r[28],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 80148B9C
  c->r[0]=(rotl(c->r[29],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 80148BA0
  c->r[0]=(rotl(c->r[30],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 80148BA4
  c->r[0]=(rotl(c->r[31],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 80148BA8
  c->r[4]=(rotl(c->r[0],0)&0x0F000000u)|(c->r[4]&~0x0F000000u); // 80148BAC
  W32(c->r[20]+0x00000038u,c->r[0]); // 80148BB0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80148BB4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80148BB8
  c->r[5]=rotl(c->r[4],8)&0x0000000Fu; cr0(c,c->r[5]); // 80148BBC
  W32(c->r[20]+0x0000003Cu,c->r[4]); // 80148BC0
  c->r[4]=c->r[3]+c->r[0]; // 80148BC4
  if (crb(c,2)) { goto L_80148D70; } // 80148BC8
  cmpu(c,0,c->r[5],0x00000008u); // 80148BCC
  c->r[3]=c->r[5]+0xFFFFFFF8u; // 80148BD0
  if (!crb(c,1)) { goto L_80148D24; } // 80148BD4
  c->r[0]=c->r[3]+0x00000007u; // 80148BD8
  c->r[7]=c->r[4]|c->r[4]; // 80148BDC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80148BE0
  {uint32_t ea=c->r[2]+0xFFFFA8D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80148BE4
  {uint32_t ea=c->r[2]+0xFFFFA8DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80148BE8
  c->ctr=c->r[0]; // 80148BEC
  cmpu(c,0,c->r[3],0x00000000u); // 80148BF0
  if (!crb(c,1)) { goto L_80148D24; } // 80148BF4
L_80148BF8:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[1]);} // 80148BF8
  c->r[6]=c->r[6]+0x00000008u; // 80148BFC
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[1]);} // 80148C00
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[1]);} // 80148C04
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 80148C08
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 80148C0C
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[1]);} // 80148C10
  {uint32_t ea=c->r[7]+0x00000018u; WF32(ea,c->f[1]);} // 80148C14
  {uint32_t ea=c->r[7]+0x0000001Cu; WF32(ea,c->f[1]);} // 80148C18
  {uint32_t ea=c->r[7]+0x00000020u; WF32(ea,c->f[0]);} // 80148C1C
  {uint32_t ea=c->r[7]+0x00000024u; WF32(ea,c->f[0]);} // 80148C20
  {uint32_t ea=c->r[7]+0x00000028u; WF32(ea,c->f[1]);} // 80148C24
  {uint32_t ea=c->r[7]+0x0000002Cu; WF32(ea,c->f[1]);} // 80148C28
  {uint32_t ea=c->r[7]+0x00000030u; WF32(ea,c->f[1]);} // 80148C2C
  {uint32_t ea=c->r[7]+0x00000034u; WF32(ea,c->f[0]);} // 80148C30
  {uint32_t ea=c->r[7]+0x00000038u; WF32(ea,c->f[0]);} // 80148C34
  {uint32_t ea=c->r[7]+0x0000003Cu; WF32(ea,c->f[1]);} // 80148C38
  {uint32_t ea=c->r[7]+0x00000040u; WF32(ea,c->f[1]);} // 80148C3C
  {uint32_t ea=c->r[7]+0x00000044u; WF32(ea,c->f[1]);} // 80148C40
  {uint32_t ea=c->r[7]+0x00000048u; WF32(ea,c->f[0]);} // 80148C44
  {uint32_t ea=c->r[7]+0x0000004Cu; WF32(ea,c->f[0]);} // 80148C48
  {uint32_t ea=c->r[7]+0x00000050u; WF32(ea,c->f[1]);} // 80148C4C
  {uint32_t ea=c->r[7]+0x00000054u; WF32(ea,c->f[1]);} // 80148C50
  {uint32_t ea=c->r[7]+0x00000058u; WF32(ea,c->f[1]);} // 80148C54
  {uint32_t ea=c->r[7]+0x0000005Cu; WF32(ea,c->f[0]);} // 80148C58
  {uint32_t ea=c->r[7]+0x00000060u; WF32(ea,c->f[0]);} // 80148C5C
  {uint32_t ea=c->r[7]+0x00000064u; WF32(ea,c->f[1]);} // 80148C60
  {uint32_t ea=c->r[7]+0x00000068u; WF32(ea,c->f[1]);} // 80148C64
  {uint32_t ea=c->r[7]+0x0000006Cu; WF32(ea,c->f[1]);} // 80148C68
  {uint32_t ea=c->r[7]+0x00000070u; WF32(ea,c->f[0]);} // 80148C6C
  {uint32_t ea=c->r[7]+0x00000074u; WF32(ea,c->f[0]);} // 80148C70
  {uint32_t ea=c->r[7]+0x00000078u; WF32(ea,c->f[1]);} // 80148C74
  {uint32_t ea=c->r[7]+0x0000007Cu; WF32(ea,c->f[1]);} // 80148C78
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80148C7C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80148C80
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80148C84
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80148C88
  {uint32_t ea=c->r[7]+0x00000080u; WF32(ea,c->f[1]);} // 80148C8C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80148C90
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80148C94
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80148C98
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80148C9C
  {uint32_t ea=c->r[7]+0x00000084u; WF32(ea,c->f[0]);} // 80148CA0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80148CA4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80148CA8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80148CAC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80148CB0
  {uint32_t ea=c->r[7]+0x00000088u; WF32(ea,c->f[0]);} // 80148CB4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80148CB8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80148CBC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80148CC0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80148CC4
  {uint32_t ea=c->r[7]+0x0000008Cu; WF32(ea,c->f[1]);} // 80148CC8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80148CCC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80148CD0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80148CD4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80148CD8
  {uint32_t ea=c->r[7]+0x00000090u; WF32(ea,c->f[1]);} // 80148CDC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80148CE0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80148CE4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80148CE8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80148CEC
  {uint32_t ea=c->r[7]+0x00000094u; WF32(ea,c->f[1]);} // 80148CF0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80148CF4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80148CF8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80148CFC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80148D00
  {uint32_t ea=c->r[7]+0x00000098u; WF32(ea,c->f[0]);} // 80148D04
  {uint32_t ea=c->r[7]+0x0000009Cu; WF32(ea,c->f[0]);} // 80148D08
  c->r[7]=c->r[7]+0x000000A0u; // 80148D0C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80148D10
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80148D14
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80148D18
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80148D1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80148BF8; } // 80148D20
L_80148D24:;
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 80148D24
  c->r[0]=c->r[5]-c->r[6]; // 80148D28
  {uint32_t ea=c->r[2]+0xFFFFA8D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80148D2C
  {uint32_t ea=c->r[2]+0xFFFFA8DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80148D30
  c->r[3]=c->r[4]+c->r[3]; // 80148D34
  c->ctr=c->r[0]; // 80148D38
  cmpu(c,0,c->r[6],c->r[5]); // 80148D3C
  if (!crb(c,0)) { goto L_80148D70; } // 80148D40
L_80148D44:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 80148D44
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80148D48
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80148D4C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80148D50
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80148D54
  c->r[3]=c->r[3]+0x00000014u; // 80148D58
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80148D5C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80148D60
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80148D64
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80148D68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80148D44; } // 80148D6C
L_80148D70:;
  c->r[10]=R32(c->r[20]+0x00000038u); // 80148D70
  c->r[4]=0u+0x00000000u; // 80148D74
  c->r[0]=R32(c->r[20]+0x00000038u); // 80148D78
  c->r[21]=R32(c->r[20]+0x0000003Cu); // 80148D7C
  c->r[7]=rotl(c->r[10],27)&0x00000004u; // 80148D80
  c->r[21]=(rotl(c->r[0],0)&0x000C0000u)|(c->r[21]&~0x000C0000u); // 80148D84
  c->r[0]=rotl(c->r[10],26)&0x00000004u; // 80148D88
  c->r[5]=rotl(c->r[10],4)&0x0000000Fu; // 80148D8C
  c->r[6]=rotl(c->r[10],8)&0x0000000Fu; // 80148D90
  c->r[0]=c->r[7]+c->r[0]; // 80148D94
  c->r[8]=rotl(c->r[10],28)&0x00000004u; // 80148D98
  c->r[9]=rotl(c->r[10],20)&0x00000004u; // 80148D9C
  c->r[7]=rotl(c->r[10],14)&0x0000003Cu; // 80148DA0
  c->r[9]=c->r[9]+c->r[7]; // 80148DA4
  c->r[11]=rotl(c->r[10],19)&0x0000001Cu; // 80148DA8
  c->r[7]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 80148DAC
  c->r[8]=c->r[8]+c->r[0]; // 80148DB0
  c->r[10]=rotl(c->r[10],29)&0x00000004u; // 80148DB4
  c->r[12]=R32(c->r[20]+0x00000040u); // 80148DB8
  c->r[3]=rotl(c->r[21],14)&0x00000003u; cr0(c,c->r[3]); // 80148DBC
  W32(c->r[20]+0x0000003Cu,c->r[21]); // 80148DC0
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 80148DC4
  c->r[0]=c->r[11]+c->r[10]; // 80148DC8
  c->r[6]=c->r[9]+c->r[8]; // 80148DCC
  c->r[0]=c->r[12]+c->r[0]; // 80148DD0
  c->r[5]=c->r[7]+c->r[5]; // 80148DD4
  c->r[5]=c->r[6]+c->r[5]; // 80148DD8
  c->r[6]=c->r[5]+c->r[0]; // 80148DDC
  if (crb(c,2)) { goto L_80148F88; } // 80148DE0
  cmpu(c,0,c->r[3],0x00000008u); // 80148DE4
  c->r[5]=c->r[3]+0xFFFFFFF8u; // 80148DE8
  if (!crb(c,1)) { goto L_80148F3C; } // 80148DEC
  c->r[0]=c->r[5]+0x00000007u; // 80148DF0
  c->r[7]=c->r[6]|c->r[6]; // 80148DF4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80148DF8
  {uint32_t ea=c->r[2]+0xFFFFA8D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80148DFC
  {uint32_t ea=c->r[2]+0xFFFFA8DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80148E00
  c->ctr=c->r[0]; // 80148E04
  cmpu(c,0,c->r[5],0x00000000u); // 80148E08
  if (!crb(c,1)) { goto L_80148F3C; } // 80148E0C
L_80148E10:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[1]);} // 80148E10
  c->r[4]=c->r[4]+0x00000008u; // 80148E14
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[1]);} // 80148E18
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[1]);} // 80148E1C
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 80148E20
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 80148E24
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[1]);} // 80148E28
  {uint32_t ea=c->r[7]+0x00000018u; WF32(ea,c->f[1]);} // 80148E2C
  {uint32_t ea=c->r[7]+0x0000001Cu; WF32(ea,c->f[1]);} // 80148E30
  {uint32_t ea=c->r[7]+0x00000020u; WF32(ea,c->f[0]);} // 80148E34
  {uint32_t ea=c->r[7]+0x00000024u; WF32(ea,c->f[0]);} // 80148E38
  {uint32_t ea=c->r[7]+0x00000028u; WF32(ea,c->f[1]);} // 80148E3C
  {uint32_t ea=c->r[7]+0x0000002Cu; WF32(ea,c->f[1]);} // 80148E40
  {uint32_t ea=c->r[7]+0x00000030u; WF32(ea,c->f[1]);} // 80148E44
  {uint32_t ea=c->r[7]+0x00000034u; WF32(ea,c->f[0]);} // 80148E48
  {uint32_t ea=c->r[7]+0x00000038u; WF32(ea,c->f[0]);} // 80148E4C
  {uint32_t ea=c->r[7]+0x0000003Cu; WF32(ea,c->f[1]);} // 80148E50
  {uint32_t ea=c->r[7]+0x00000040u; WF32(ea,c->f[1]);} // 80148E54
  {uint32_t ea=c->r[7]+0x00000044u; WF32(ea,c->f[1]);} // 80148E58
  {uint32_t ea=c->r[7]+0x00000048u; WF32(ea,c->f[0]);} // 80148E5C
  {uint32_t ea=c->r[7]+0x0000004Cu; WF32(ea,c->f[0]);} // 80148E60
  {uint32_t ea=c->r[7]+0x00000050u; WF32(ea,c->f[1]);} // 80148E64
  {uint32_t ea=c->r[7]+0x00000054u; WF32(ea,c->f[1]);} // 80148E68
  {uint32_t ea=c->r[7]+0x00000058u; WF32(ea,c->f[1]);} // 80148E6C
  {uint32_t ea=c->r[7]+0x0000005Cu; WF32(ea,c->f[0]);} // 80148E70
  {uint32_t ea=c->r[7]+0x00000060u; WF32(ea,c->f[0]);} // 80148E74
  {uint32_t ea=c->r[7]+0x00000064u; WF32(ea,c->f[1]);} // 80148E78
  {uint32_t ea=c->r[7]+0x00000068u; WF32(ea,c->f[1]);} // 80148E7C
  {uint32_t ea=c->r[7]+0x0000006Cu; WF32(ea,c->f[1]);} // 80148E80
  {uint32_t ea=c->r[7]+0x00000070u; WF32(ea,c->f[0]);} // 80148E84
  {uint32_t ea=c->r[7]+0x00000074u; WF32(ea,c->f[0]);} // 80148E88
  {uint32_t ea=c->r[7]+0x00000078u; WF32(ea,c->f[1]);} // 80148E8C
  {uint32_t ea=c->r[7]+0x0000007Cu; WF32(ea,c->f[1]);} // 80148E90
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80148E94
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80148E98
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80148E9C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80148EA0
  {uint32_t ea=c->r[7]+0x00000080u; WF32(ea,c->f[1]);} // 80148EA4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80148EA8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80148EAC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80148EB0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80148EB4
  {uint32_t ea=c->r[7]+0x00000084u; WF32(ea,c->f[0]);} // 80148EB8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80148EBC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80148EC0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80148EC4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80148EC8
  {uint32_t ea=c->r[7]+0x00000088u; WF32(ea,c->f[0]);} // 80148ECC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80148ED0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80148ED4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80148ED8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80148EDC
  {uint32_t ea=c->r[7]+0x0000008Cu; WF32(ea,c->f[1]);} // 80148EE0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80148EE4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80148EE8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80148EEC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80148EF0
  {uint32_t ea=c->r[7]+0x00000090u; WF32(ea,c->f[1]);} // 80148EF4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80148EF8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80148EFC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80148F00
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80148F04
  {uint32_t ea=c->r[7]+0x00000094u; WF32(ea,c->f[1]);} // 80148F08
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80148F0C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80148F10
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80148F14
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80148F18
  {uint32_t ea=c->r[7]+0x00000098u; WF32(ea,c->f[0]);} // 80148F1C
  {uint32_t ea=c->r[7]+0x0000009Cu; WF32(ea,c->f[0]);} // 80148F20
  c->r[7]=c->r[7]+0x000000A0u; // 80148F24
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80148F28
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80148F2C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80148F30
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80148F34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80148E10; } // 80148F38
L_80148F3C:;
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 80148F3C
  c->r[0]=c->r[3]-c->r[4]; // 80148F40
  {uint32_t ea=c->r[2]+0xFFFFA8D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80148F44
  {uint32_t ea=c->r[2]+0xFFFFA8DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80148F48
  c->r[5]=c->r[6]+c->r[5]; // 80148F4C
  c->ctr=c->r[0]; // 80148F50
  cmpu(c,0,c->r[4],c->r[3]); // 80148F54
  if (!crb(c,0)) { goto L_80148F88; } // 80148F58
L_80148F5C:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 80148F5C
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 80148F60
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 80148F64
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 80148F68
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 80148F6C
  c->r[5]=c->r[5]+0x00000014u; // 80148F70
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80148F74
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80148F78
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80148F7C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80148F80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80148F5C; } // 80148F84
L_80148F88:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 80148F88
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 80148F8C
  c->r[3]=(rotl(c->r[0],0)&0x00000100u)|(c->r[3]&~0x00000100u); // 80148F90
  c->r[0]=rotl(c->r[3],24)&0x00000001u; cr0(c,c->r[0]); // 80148F94
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 80148F98
  if (crb(c,2)) { goto L_80148FDC; } // 80148F9C
  c->r[6]=R32(c->r[20]+0x00000038u); // 80148FA0
  c->r[3]=0u+0x00000001u; // 80148FA4
  c->r[7]=R32(c->r[20]+0x00000040u); // 80148FA8
  c->r[0]=0u+0x00000000u; // 80148FAC
  c->r[5]=rotl(c->r[6],8)&0x0000000Fu; // 80148FB0
  c->r[4]=rotl(c->r[6],4)&0x0000000Fu; // 80148FB4
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 80148FB8
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 80148FBC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 80148FC0
  c->r[5]=c->r[6]+c->r[5]; // 80148FC4
  c->r[4]=c->r[7]+c->r[4]; // 80148FC8
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 80148FCC
  W8(c->r[4]+0x00000001u,c->r[3]); // 80148FD0
  W8(c->r[4]+0x00000002u,c->r[0]); // 80148FD4
  W8(c->r[4]+0x00000003u,c->r[0]); // 80148FD8
L_80148FDC:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 80148FDC
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 80148FE0
  c->r[3]=(rotl(c->r[0],0)&0x00000080u)|(c->r[3]&~0x00000080u); // 80148FE4
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 80148FE8
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 80148FEC
  if (crb(c,2)) { goto L_80149028; } // 80148FF0
  c->r[5]=R32(c->r[20]+0x00000038u); // 80148FF4
  c->r[8]=0u+0xFFFFFFFFu; // 80148FF8
  c->r[7]=R32(c->r[20]+0x00000040u); // 80148FFC
  c->r[3]=rotl(c->r[5],8)&0x0000000Fu; // 80149000
  c->r[0]=rotl(c->r[5],4)&0x0000000Fu; // 80149004
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80149008
  c->r[6]=rotl(c->r[5],26)&0x00000004u; // 8014900C
  c->r[5]=rotl(c->r[5],14)&0x0000003Cu; // 80149010
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80149014
  c->r[0]=c->r[6]+c->r[5]; // 80149018
  c->r[0]=c->r[7]+c->r[0]; // 8014901C
  c->r[3]=c->r[4]+c->r[3]; // 80149020
  W32(c->r[3]+c->r[0],c->r[8]); // 80149024
L_80149028:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 80149028
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 8014902C
  c->r[3]=(rotl(c->r[0],0)&0x00004000u)|(c->r[3]&~0x00004000u); // 80149030
  c->r[0]=rotl(c->r[3],18)&0x00000001u; cr0(c,c->r[0]); // 80149034
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 80149038
  if (crb(c,2)) { goto L_80149094; } // 8014903C
  c->r[9]=R32(c->r[20]+0x00000038u); // 80149040
  c->r[5]=0u+0x000000E4u; // 80149044
  c->r[10]=R32(c->r[20]+0x00000040u); // 80149048
  c->r[4]=0u+0x000000C0u; // 8014904C
  c->r[3]=rotl(c->r[9],8)&0x0000000Fu; // 80149050
  c->r[0]=rotl(c->r[9],4)&0x0000000Fu; // 80149054
  c->r[8]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80149058
  c->r[7]=rotl(c->r[9],27)&0x00000004u; // 8014905C
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 80149060
  c->r[9]=rotl(c->r[9],14)&0x0000003Cu; // 80149064
  c->r[6]=c->r[7]+c->r[6]; // 80149068
  c->r[3]=0u+0x000000D5u; // 8014906C
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80149070
  c->r[0]=0u+0x000000EAu; // 80149074
  c->r[6]=c->r[9]+c->r[6]; // 80149078
  c->r[7]=c->r[8]+c->r[7]; // 8014907C
  c->r[6]=c->r[10]+c->r[6]; // 80149080
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 80149084
  W8(c->r[6]+0x00000001u,c->r[4]); // 80149088
  W8(c->r[6]+0x00000002u,c->r[3]); // 8014908C
  W8(c->r[6]+0x00000003u,c->r[0]); // 80149090
L_80149094:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 80149094
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 80149098
  c->r[3]=(rotl(c->r[0],0)&0x00000040u)|(c->r[3]&~0x00000040u); // 8014909C
  c->r[0]=rotl(c->r[3],26)&0x00000001u; cr0(c,c->r[0]); // 801490A0
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 801490A4
  if (crb(c,2)) { goto L_80149100; } // 801490A8
  c->r[6]=R32(c->r[20]+0x00000038u); // 801490AC
  c->r[3]=0u+0x00000077u; // 801490B0
  c->r[11]=R32(c->r[20]+0x00000040u); // 801490B4
  c->r[0]=0u+0x00000000u; // 801490B8
  c->r[5]=rotl(c->r[6],8)&0x0000000Fu; // 801490BC
  c->r[4]=rotl(c->r[6],4)&0x0000000Fu; // 801490C0
  c->r[10]=rotl(c->r[6],20)&0x00000004u; // 801490C4
  c->r[7]=rotl(c->r[6],14)&0x0000003Cu; // 801490C8
  c->r[9]=rotl(c->r[6],27)&0x00000004u; // 801490CC
  c->r[8]=rotl(c->r[6],26)&0x00000004u; // 801490D0
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 801490D4
  c->r[7]=c->r[10]+c->r[7]; // 801490D8
  c->r[8]=c->r[9]+c->r[8]; // 801490DC
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 801490E0
  c->r[4]=c->r[8]+c->r[7]; // 801490E4
  c->r[4]=c->r[11]+c->r[4]; // 801490E8
  c->r[5]=c->r[6]+c->r[5]; // 801490EC
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 801490F0
  W8(c->r[4]+0x00000001u,c->r[0]); // 801490F4
  W8(c->r[4]+0x00000002u,c->r[0]); // 801490F8
  W8(c->r[4]+0x00000003u,c->r[0]); // 801490FC
L_80149100:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 80149100
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 80149104
  c->r[3]=(rotl(c->r[0],0)&0x00000020u)|(c->r[3]&~0x00000020u); // 80149108
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 8014910C
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 80149110
  if (crb(c,2)) { goto L_8014917C; } // 80149114
  c->r[7]=R32(c->r[20]+0x00000038u); // 80149118
  c->r[5]=0u+0x00000001u; // 8014911C
  c->r[11]=R32(c->r[20]+0x00000040u); // 80149120
  c->r[4]=0u+0x00000004u; // 80149124
  c->r[3]=rotl(c->r[7],8)&0x0000000Fu; // 80149128
  c->r[0]=rotl(c->r[7],4)&0x0000000Fu; // 8014912C
  c->r[8]=rotl(c->r[7],27)&0x00000004u; // 80149130
  c->r[6]=rotl(c->r[7],26)&0x00000004u; // 80149134
  c->r[6]=c->r[8]+c->r[6]; // 80149138
  c->r[10]=rotl(c->r[7],28)&0x00000004u; // 8014913C
  c->r[9]=rotl(c->r[7],20)&0x00000004u; // 80149140
  c->r[7]=rotl(c->r[7],14)&0x0000003Cu; // 80149144
  c->r[8]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80149148
  c->r[6]=c->r[10]+c->r[6]; // 8014914C
  c->r[9]=c->r[9]+c->r[7]; // 80149150
  c->r[3]=0u+0x00000005u; // 80149154
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80149158
  c->r[6]=c->r[9]+c->r[6]; // 8014915C
  c->r[0]=0u+0x0000000Fu; // 80149160
  c->r[6]=c->r[11]+c->r[6]; // 80149164
  c->r[7]=c->r[8]+c->r[7]; // 80149168
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 8014916C
  W8(c->r[6]+0x00000001u,c->r[4]); // 80149170
  W8(c->r[6]+0x00000002u,c->r[3]); // 80149174
  W8(c->r[6]+0x00000003u,c->r[0]); // 80149178
L_8014917C:;
  c->r[11]=c->r[1]+0x00000060u; // 8014917C
  c->lr=0x80149184u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80149180
  c->r[0]=R32(c->r[1]+0x00000064u); // 80149184
  c->lr=c->r[0]; // 80149188
  c->r[1]=c->r[1]+0x00000060u; // 8014918C
  return; // 80149190
}

// GetTexMapAry__Q34nw4r3lyt8MaterialCFv
void f_80149194(Ctx* __restrict c) {
  trace_call(0x80149194u);
  c->r[3]=R32(c->r[3]+0x00000040u); // 80149194
  return; // 80149198
}

// GetTexSRTAry__Q34nw4r3lyt8MaterialFv
void f_8014919C(Ctx* __restrict c) {
  trace_call(0x8014919Cu);
  c->r[0]=R32(c->r[3]+0x00000038u); // 8014919C
  c->r[3]=R32(c->r[3]+0x00000040u); // 801491A0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 801491A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801491A8
  c->r[3]=c->r[3]+c->r[0]; // 801491AC
  return; // 801491B0
}

// GetTexCoordGenAry__Q34nw4r3lyt8MaterialFv
void f_801491B4(Ctx* __restrict c) {
  trace_call(0x801491B4u);
  c->r[0]=R32(c->r[3]+0x00000038u); // 801491B4
  c->r[5]=R32(c->r[3]+0x00000040u); // 801491B8
  c->r[3]=rotl(c->r[0],8)&0x0000000Fu; // 801491BC
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 801491C0
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801491C4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801491C8
  c->r[0]=c->r[5]+c->r[4]; // 801491CC
  c->r[3]=c->r[3]+c->r[0]; // 801491D0
  return; // 801491D4
}

// GetChanCtrlAry__Q34nw4r3lyt8MaterialFv
void f_801491D8(Ctx* __restrict c) {
  trace_call(0x801491D8u);
  c->r[4]=R32(c->r[3]+0x00000038u); // 801491D8
  c->r[5]=R32(c->r[3]+0x00000040u); // 801491DC
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 801491E0
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 801491E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801491E8
  c->r[4]=rotl(c->r[4],14)&0x0000003Cu; // 801491EC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801491F0
  c->r[0]=c->r[5]+c->r[0]; // 801491F4
  c->r[3]=c->r[4]+c->r[3]; // 801491F8
  c->r[3]=c->r[3]+c->r[0]; // 801491FC
  return; // 80149200
}

// GetMatColAry__Q34nw4r3lyt8MaterialFv
void f_80149204(Ctx* __restrict c) {
  trace_call(0x80149204u);
  c->r[5]=R32(c->r[3]+0x00000038u); // 80149204
  c->r[7]=R32(c->r[3]+0x00000040u); // 80149208
  c->r[3]=rotl(c->r[5],8)&0x0000000Fu; // 8014920C
  c->r[0]=rotl(c->r[5],4)&0x0000000Fu; // 80149210
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80149214
  c->r[6]=rotl(c->r[5],26)&0x00000004u; // 80149218
  c->r[5]=rotl(c->r[5],14)&0x0000003Cu; // 8014921C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80149220
  c->r[0]=c->r[6]+c->r[5]; // 80149224
  c->r[0]=c->r[7]+c->r[0]; // 80149228
  c->r[3]=c->r[4]+c->r[3]; // 8014922C
  c->r[3]=c->r[3]+c->r[0]; // 80149230
  return; // 80149234
}

// GetTevSwapAry__Q34nw4r3lyt8MaterialFv
void f_80149238(Ctx* __restrict c) {
  trace_call(0x80149238u);
  c->r[6]=R32(c->r[3]+0x00000038u); // 80149238
  c->r[8]=R32(c->r[3]+0x00000040u); // 8014923C
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 80149240
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 80149244
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80149248
  c->r[7]=rotl(c->r[6],27)&0x00000004u; // 8014924C
  c->r[5]=rotl(c->r[6],26)&0x00000004u; // 80149250
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 80149254
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80149258
  c->r[5]=c->r[7]+c->r[5]; // 8014925C
  c->r[0]=c->r[6]+c->r[5]; // 80149260
  c->r[0]=c->r[8]+c->r[0]; // 80149264
  c->r[3]=c->r[4]+c->r[3]; // 80149268
  c->r[3]=c->r[3]+c->r[0]; // 8014926C
  return; // 80149270
}

// GetAlphaComparePtr__Q34nw4r3lyt8MaterialFv
void f_80149274(Ctx* __restrict c) {
  trace_call(0x80149274u);
  c->r[4]=R32(c->r[3]+0x00000038u); // 80149274
  c->r[9]=R32(c->r[3]+0x00000040u); // 80149278
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 8014927C
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 80149280
  c->r[8]=rotl(c->r[4],20)&0x00000004u; // 80149284
  c->r[5]=rotl(c->r[4],14)&0x0000003Cu; // 80149288
  c->r[7]=rotl(c->r[4],27)&0x00000004u; // 8014928C
  c->r[6]=rotl(c->r[4],26)&0x00000004u; // 80149290
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80149294
  c->r[5]=c->r[8]+c->r[5]; // 80149298
  c->r[6]=c->r[7]+c->r[6]; // 8014929C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801492A0
  c->r[0]=c->r[6]+c->r[5]; // 801492A4
  c->r[0]=c->r[9]+c->r[0]; // 801492A8
  c->r[3]=c->r[4]+c->r[3]; // 801492AC
  c->r[3]=c->r[3]+c->r[0]; // 801492B0
  return; // 801492B4
}

// GetBlendModePtr__Q34nw4r3lyt8MaterialFv
void f_801492B8(Ctx* __restrict c) {
  trace_call(0x801492B8u);
  c->r[6]=R32(c->r[3]+0x00000038u); // 801492B8
  c->r[9]=R32(c->r[3]+0x00000040u); // 801492BC
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 801492C0
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 801492C4
  c->r[5]=rotl(c->r[6],27)&0x00000004u; // 801492C8
  c->r[4]=rotl(c->r[6],26)&0x00000004u; // 801492CC
  c->r[5]=c->r[5]+c->r[4]; // 801492D0
  c->r[8]=rotl(c->r[6],28)&0x00000004u; // 801492D4
  c->r[7]=rotl(c->r[6],20)&0x00000004u; // 801492D8
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 801492DC
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801492E0
  c->r[5]=c->r[8]+c->r[5]; // 801492E4
  c->r[6]=c->r[7]+c->r[6]; // 801492E8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801492EC
  c->r[0]=c->r[6]+c->r[5]; // 801492F0
  c->r[0]=c->r[9]+c->r[0]; // 801492F4
  c->r[3]=c->r[4]+c->r[3]; // 801492F8
  c->r[3]=c->r[3]+c->r[0]; // 801492FC
  return; // 80149300
}

// GetIndirectStageAry__Q34nw4r3lyt8MaterialFv
void f_80149304(Ctx* __restrict c) {
  trace_call(0x80149304u);
  c->r[8]=R32(c->r[3]+0x00000038u); // 80149304
  c->r[9]=R32(c->r[3]+0x00000040u); // 80149308
  c->r[3]=rotl(c->r[8],8)&0x0000000Fu; // 8014930C
  c->r[0]=rotl(c->r[8],4)&0x0000000Fu; // 80149310
  c->r[5]=rotl(c->r[8],27)&0x00000004u; // 80149314
  c->r[4]=rotl(c->r[8],26)&0x00000004u; // 80149318
  c->r[4]=c->r[5]+c->r[4]; // 8014931C
  c->r[7]=rotl(c->r[8],28)&0x00000004u; // 80149320
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80149324
  c->r[6]=rotl(c->r[8],20)&0x00000004u; // 80149328
  c->r[5]=rotl(c->r[8],14)&0x0000003Cu; // 8014932C
  c->r[4]=c->r[7]+c->r[4]; // 80149330
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80149334
  c->r[5]=c->r[6]+c->r[5]; // 80149338
  c->r[6]=rotl(c->r[8],29)&0x00000004u; // 8014933C
  c->r[0]=c->r[3]+c->r[0]; // 80149340
  c->r[3]=c->r[5]+c->r[4]; // 80149344
  c->r[3]=c->r[6]+c->r[3]; // 80149348
  c->r[0]=c->r[9]+c->r[0]; // 8014934C
  c->r[3]=c->r[3]+c->r[0]; // 80149350
  return; // 80149354
}

// GetIndTexSRTAry__Q34nw4r3lyt8MaterialFv
void f_80149358(Ctx* __restrict c) {
  trace_call(0x80149358u);
  c->r[10]=R32(c->r[3]+0x00000038u); // 80149358
  c->r[11]=R32(c->r[3]+0x00000040u); // 8014935C
  c->r[3]=rotl(c->r[10],8)&0x0000000Fu; // 80149360
  c->r[0]=rotl(c->r[10],4)&0x0000000Fu; // 80149364
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80149368
  c->r[6]=rotl(c->r[10],27)&0x00000004u; // 8014936C
  c->r[5]=rotl(c->r[10],26)&0x00000004u; // 80149370
  c->r[8]=rotl(c->r[10],28)&0x00000004u; // 80149374
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80149378
  c->r[5]=c->r[6]+c->r[5]; // 8014937C
  c->r[7]=rotl(c->r[10],20)&0x00000004u; // 80149380
  c->r[6]=rotl(c->r[10],14)&0x0000003Cu; // 80149384
  c->r[9]=rotl(c->r[10],19)&0x0000001Cu; // 80149388
  c->r[0]=rotl(c->r[10],29)&0x00000004u; // 8014938C
  c->r[0]=c->r[9]+c->r[0]; // 80149390
  c->r[6]=c->r[7]+c->r[6]; // 80149394
  c->r[5]=c->r[8]+c->r[5]; // 80149398
  c->r[3]=c->r[4]+c->r[3]; // 8014939C
  c->r[4]=c->r[6]+c->r[5]; // 801493A0
  c->r[0]=c->r[11]+c->r[0]; // 801493A4
  c->r[3]=c->r[4]+c->r[3]; // 801493A8
  c->r[3]=c->r[3]+c->r[0]; // 801493AC
  return; // 801493B0
}

// GetTevStageAry__Q34nw4r3lyt8MaterialFv
void f_801493B4(Ctx* __restrict c) {
  trace_call(0x801493B4u);
  c->r[7]=R32(c->r[3]+0x00000038u); // 801493B4
  c->r[8]=R32(c->r[3]+0x00000040u); // 801493B8
  c->r[3]=rotl(c->r[7],14)&0x00000003u; // 801493BC
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 801493C0
  c->r[3]=c->r[3]+c->r[0]; // 801493C4
  c->r[5]=rotl(c->r[7],4)&0x0000000Fu; // 801493C8
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801493CC
  c->r[4]=rotl(c->r[7],14)&0x0000003Cu; // 801493D0
  c->r[0]=rotl(c->r[7],26)&0x00000004u; // 801493D4
  c->r[3]=rotl(c->r[7],27)&0x00000004u; // 801493D8
  c->r[0]=c->r[4]+c->r[0]; // 801493DC
  c->r[4]=rotl(c->r[7],20)&0x00000004u; // 801493E0
  c->r[0]=c->r[3]+c->r[0]; // 801493E4
  c->r[3]=rotl(c->r[7],28)&0x00000004u; // 801493E8
  c->r[0]=c->r[4]+c->r[0]; // 801493EC
  c->r[4]=rotl(c->r[7],29)&0x00000004u; // 801493F0
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 801493F4
  c->r[0]=c->r[3]+c->r[0]; // 801493F8
  c->r[3]=rotl(c->r[7],19)&0x0000001Cu; // 801493FC
  c->r[5]=c->r[6]+c->r[5]; // 80149400
  c->r[0]=c->r[5]+c->r[0]; // 80149404
  c->r[3]=c->r[4]+c->r[3]; // 80149408
  c->r[0]=c->r[8]+c->r[0]; // 8014940C
  c->r[3]=c->r[3]+c->r[0]; // 80149410
  return; // 80149414
}

// SetName__Q34nw4r3lyt8MaterialFPCc
void f_80149418(Ctx* __restrict c) {
  trace_call(0x80149418u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80149418
  c->r[0]=c->lr; // 8014941C
  c->r[5]=0u+0x00000014u; // 80149420
  W32(c->r[1]+0x00000014u,c->r[0]); // 80149424
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80149428
  c->r[31]=c->r[3]|c->r[3]; // 8014942C
  c->r[3]=c->r[3]+0x00000044u; // 80149430
  c->lr=0x80149438u; f_8025C504(c); // 80149434
  c->r[0]=0u+0x00000000u; // 80149438
  W8(c->r[31]+0x00000058u,c->r[0]); // 8014943C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80149440
  c->r[0]=R32(c->r[1]+0x00000014u); // 80149444
  c->lr=c->r[0]; // 80149448
  c->r[1]=c->r[1]+0x00000010u; // 8014944C
  return; // 80149450
}

// SetTextureNum__Q34nw4r3lyt8MaterialFUc
void f_80149454(Ctx* __restrict c) {
  trace_call(0x80149454u);
  cmps(c,0,(int32_t)c->r[4],0); // 80149454
  if (crb(c,2)) { goto L_801494D4; } // 80149458
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8014945C
  c->r[6]=0u+0x00000000u; // 80149460
  c->r[8]=R32(c->r[3]+0x00000040u); // 80149464
  c->r[5]=0u+0x00000001u; // 80149468
  c->r[9]=rotl(c->r[0],4)&0x0000000Fu; // 8014946C
  {uint32_t ea=c->r[2]+0xFFFFA8D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149470
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)28); // 80149474
  c->r[0]=c->r[4]-c->r[9]; // 80149478
  c->r[7]=c->r[8]+c->r[7]; // 8014947C
  c->ctr=c->r[0]; // 80149480
  cmpu(c,0,c->r[9],c->r[4]); // 80149484
  if (!crb(c,0)) { goto L_801494D4; } // 80149488
L_8014948C:;
  cmps(c,0,(int32_t)c->r[7],0); // 8014948C
  if (crb(c,2)) { goto L_801494CC; } // 80149490
  W32(c->r[7]+0x00000000u,c->r[6]); // 80149494
  W16(c->r[7]+0x00000008u,c->r[6]); // 80149498
  W16(c->r[7]+0x0000000Au,c->r[6]); // 8014949C
  c->r[0]=R32(c->r[7]+0x00000018u); // 801494A0
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 801494A4
  c->r[0]=rotl(c->r[0],0)&0x007FFFFFu; // 801494A8
  c->r[0]=(rotl(c->r[5],20)&0x00700000u)|(c->r[0]&~0x00700000u); // 801494AC
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 801494B0
  c->r[0]=c->r[0]|0x00080000u; // 801494B4
  c->r[0]=rotl(c->r[0],0)&0xFFF81FFFu; // 801494B8
  W16(c->r[7]+0x00000014u,c->r[6]); // 801494BC
  W32(c->r[7]+0x00000004u,c->r[6]); // 801494C0
  W32(c->r[7]+0x00000018u,c->r[0]); // 801494C4
  W16(c->r[7]+0x00000016u,c->r[6]); // 801494C8
L_801494CC:;
  c->r[7]=c->r[7]+0x0000001Cu; // 801494CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014948C; } // 801494D0
L_801494D4:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801494D4
  c->r[0]=(rotl(c->r[4],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 801494D8
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801494DC
  return; // 801494E0
}

// SetTexCoordGenNum__Q34nw4r3lyt8MaterialFUc
void f_801494E4(Ctx* __restrict c) {
  trace_call(0x801494E4u);
  cmps(c,0,(int32_t)c->r[4],0); // 801494E4
  if (crb(c,2)) { goto L_8014955C; } // 801494E8
  c->r[0]=R32(c->r[3]+0x00000038u); // 801494EC
  c->r[8]=0u+0x00000000u; // 801494F0
  c->r[9]=R32(c->r[3]+0x0000003Cu); // 801494F4
  c->r[7]=0u+0x00000001u; // 801494F8
  c->r[5]=rotl(c->r[0],8)&0x0000000Fu; // 801494FC
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80149500
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 80149504
  c->r[6]=R32(c->r[3]+0x00000040u); // 80149508
  c->r[11]=rotl(c->r[9],12)&0x0000000Fu; // 8014950C
  c->r[10]=rotl(c->r[9],14)&0x0000003Cu; // 80149510
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80149514
  c->r[0]=c->r[4]-c->r[11]; // 80149518
  c->r[5]=c->r[6]+c->r[5]; // 8014951C
  c->r[6]=0u+0x00000004u; // 80149520
  c->r[9]=c->r[9]+c->r[5]; // 80149524
  c->r[5]=0u+0x0000003Cu; // 80149528
  c->r[9]=c->r[10]+c->r[9]; // 8014952C
  c->ctr=c->r[0]; // 80149530
  cmpu(c,0,c->r[11],c->r[4]); // 80149534
  if (!crb(c,0)) { goto L_8014955C; } // 80149538
L_8014953C:;
  cmps(c,0,(int32_t)c->r[9],0); // 8014953C
  if (crb(c,2)) { goto L_80149554; } // 80149540
  W8(c->r[9]+0x00000003u,c->r[8]); // 80149544
  W8(c->r[9]+0x00000000u,c->r[7]); // 80149548
  W8(c->r[9]+0x00000001u,c->r[6]); // 8014954C
  W8(c->r[9]+0x00000002u,c->r[5]); // 80149550
L_80149554:;
  c->r[9]=c->r[9]+0x00000004u; // 80149554
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014953C; } // 80149558
L_8014955C:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8014955C
  c->r[0]=(rotl(c->r[4],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 80149560
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 80149564
  return; // 80149568
}

// SetTevStageNum__Q34nw4r3lyt8MaterialFUc
void f_8014956C(Ctx* __restrict c) {
  trace_call(0x8014956Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014956C
  cmps(c,0,(int32_t)c->r[4],0); // 80149570
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80149574
  W32(c->r[1]+0x00000008u,c->r[30]); // 80149578
  if (crb(c,2)) { goto L_80149670; } // 8014957C
  c->r[10]=R32(c->r[3]+0x00000038u); // 80149580
  c->r[31]=0u+0x000000FFu; // 80149584
  c->r[30]=R32(c->r[3]+0x0000003Cu); // 80149588
  c->r[12]=0u+0x00000004u; // 8014958C
  c->r[5]=rotl(c->r[10],14)&0x00000003u; // 80149590
  c->r[0]=rotl(c->r[10],8)&0x0000000Fu; // 80149594
  c->r[5]=c->r[5]+c->r[0]; // 80149598
  c->r[8]=rotl(c->r[10],4)&0x0000000Fu; // 8014959C
  c->r[9]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 801495A0
  c->r[6]=rotl(c->r[10],14)&0x0000003Cu; // 801495A4
  c->r[0]=rotl(c->r[10],26)&0x00000004u; // 801495A8
  c->r[11]=R32(c->r[3]+0x00000040u); // 801495AC
  c->r[5]=rotl(c->r[10],27)&0x00000004u; // 801495B0
  c->r[0]=c->r[6]+c->r[0]; // 801495B4
  c->r[5]=c->r[5]+c->r[0]; // 801495B8
  c->r[7]=rotl(c->r[10],20)&0x00000004u; // 801495BC
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)28); // 801495C0
  c->r[6]=rotl(c->r[10],28)&0x00000004u; // 801495C4
  c->r[5]=c->r[7]+c->r[5]; // 801495C8
  c->r[0]=rotl(c->r[30],23)&0x0000001Fu; // 801495CC
  c->r[7]=c->r[9]+c->r[8]; // 801495D0
  c->r[6]=c->r[6]+c->r[5]; // 801495D4
  c->r[6]=c->r[7]+c->r[6]; // 801495D8
  c->r[8]=rotl(c->r[10],29)&0x00000004u; // 801495DC
  c->r[5]=rotl(c->r[10],19)&0x0000001Cu; // 801495E0
  c->r[7]=rotl(c->r[30],27)&0x000001F0u; // 801495E4
  c->r[8]=c->r[8]+c->r[5]; // 801495E8
  c->r[6]=c->r[11]+c->r[6]; // 801495EC
  c->r[6]=c->r[8]+c->r[6]; // 801495F0
  c->r[5]=c->r[4]-c->r[0]; // 801495F4
  c->r[30]=c->r[7]+c->r[6]; // 801495F8
  c->r[11]=0u+0x00000000u; // 801495FC
  c->r[10]=0u+0x000000AFu; // 80149600
  c->r[9]=0u+0x00000077u; // 80149604
  c->r[8]=0u+0x00000057u; // 80149608
  c->r[7]=0u+0x00000061u; // 8014960C
  c->r[6]=0u+0x00000081u; // 80149610
  c->ctr=c->r[5]; // 80149614
  cmpu(c,0,c->r[0],c->r[4]); // 80149618
  if (!crb(c,0)) { goto L_80149670; } // 8014961C
L_80149620:;
  cmps(c,0,(int32_t)c->r[30],0); // 80149620
  if (crb(c,2)) { goto L_80149668; } // 80149624
  W8(c->r[30]+0x00000000u,c->r[31]); // 80149628
  W8(c->r[30]+0x00000001u,c->r[12]); // 8014962C
  W8(c->r[30]+0x00000002u,c->r[31]); // 80149630
  W8(c->r[30]+0x00000003u,c->r[11]); // 80149634
  W8(c->r[30]+0x00000004u,c->r[31]); // 80149638
  W8(c->r[30]+0x00000005u,c->r[10]); // 8014963C
  W8(c->r[30]+0x00000008u,c->r[9]); // 80149640
  W8(c->r[30]+0x00000009u,c->r[8]); // 80149644
  W8(c->r[30]+0x00000006u,c->r[11]); // 80149648
  W8(c->r[30]+0x00000007u,c->r[7]); // 8014964C
  W8(c->r[30]+0x0000000Au,c->r[11]); // 80149650
  W8(c->r[30]+0x0000000Bu,c->r[6]); // 80149654
  W8(c->r[30]+0x0000000Cu,c->r[11]); // 80149658
  W8(c->r[30]+0x0000000Du,c->r[11]); // 8014965C
  W8(c->r[30]+0x0000000Eu,c->r[11]); // 80149660
  W8(c->r[30]+0x0000000Fu,c->r[11]); // 80149664
L_80149668:;
  c->r[30]=c->r[30]+0x00000010u; // 80149668
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80149620; } // 8014966C
L_80149670:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80149670
  c->r[0]=(rotl(c->r[4],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 80149674
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 80149678
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014967C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80149680
  c->r[1]=c->r[1]+0x00000010u; // 80149684
  return; // 80149688
}

// SetIndStageNum__Q34nw4r3lyt8MaterialFUc
void f_8014968C(Ctx* __restrict c) {
  trace_call(0x8014968Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014968C
  cmps(c,0,(int32_t)c->r[4],0); // 80149690
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80149694
  W32(c->r[1]+0x00000008u,c->r[30]); // 80149698
  if (crb(c,2)) { goto L_80149734; } // 8014969C
  c->r[11]=R32(c->r[3]+0x00000038u); // 801496A0
  c->r[5]=0u+0x00000000u; // 801496A4
  c->r[31]=R32(c->r[3]+0x0000003Cu); // 801496A8
  c->r[6]=rotl(c->r[11],8)&0x0000000Fu; // 801496AC
  c->r[0]=rotl(c->r[11],4)&0x0000000Fu; // 801496B0
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 801496B4
  c->r[8]=rotl(c->r[11],27)&0x00000004u; // 801496B8
  c->r[7]=rotl(c->r[11],26)&0x00000004u; // 801496BC
  c->r[12]=R32(c->r[3]+0x00000040u); // 801496C0
  c->r[10]=rotl(c->r[11],28)&0x00000004u; // 801496C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801496C8
  c->r[8]=c->r[8]+c->r[7]; // 801496CC
  c->r[9]=rotl(c->r[11],20)&0x00000004u; // 801496D0
  c->r[0]=c->r[6]+c->r[0]; // 801496D4
  c->r[7]=rotl(c->r[11],14)&0x0000003Cu; // 801496D8
  c->r[6]=c->r[10]+c->r[8]; // 801496DC
  c->r[8]=rotl(c->r[11],29)&0x00000004u; // 801496E0
  c->r[7]=c->r[9]+c->r[7]; // 801496E4
  c->r[30]=rotl(c->r[31],17)&0x00000007u; // 801496E8
  c->r[6]=c->r[7]+c->r[6]; // 801496EC
  c->r[0]=c->r[12]+c->r[0]; // 801496F0
  c->r[6]=c->r[8]+c->r[6]; // 801496F4
  c->r[7]=rotl(c->r[31],19)&0x0000001Cu; // 801496F8
  c->r[6]=c->r[6]+c->r[0]; // 801496FC
  c->r[0]=c->r[4]-c->r[30]; // 80149700
  c->r[6]=c->r[7]+c->r[6]; // 80149704
  c->ctr=c->r[0]; // 80149708
  cmpu(c,0,c->r[30],c->r[4]); // 8014970C
  if (!crb(c,0)) { goto L_80149734; } // 80149710
L_80149714:;
  cmps(c,0,(int32_t)c->r[6],0); // 80149714
  if (crb(c,2)) { goto L_8014972C; } // 80149718
  W8(c->r[6]+0x00000000u,c->r[5]); // 8014971C
  W8(c->r[6]+0x00000001u,c->r[5]); // 80149720
  W8(c->r[6]+0x00000002u,c->r[5]); // 80149724
  W8(c->r[6]+0x00000003u,c->r[5]); // 80149728
L_8014972C:;
  c->r[6]=c->r[6]+0x00000004u; // 8014972C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80149714; } // 80149730
L_80149734:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80149734
  c->r[0]=(rotl(c->r[4],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 80149738
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8014973C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80149740
  c->r[30]=R32(c->r[1]+0x00000008u); // 80149744
  c->r[1]=c->r[1]+0x00000010u; // 80149748
  return; // 8014974C
}

// SetColorElement__Q34nw4r3lyt8MaterialFUls
void f_80149750(Ctx* __restrict c) {
  trace_call(0x80149750u);
  cmps(c,0,(int32_t)c->r[4],16); // 80149750
  if (!crb(c,0)) { goto L_8014976C; } // 80149754
  cmps(c,0,(int32_t)c->r[4],4); // 80149758
  if (!crb(c,0)) { goto L_80149824; } // 8014975C
  cmps(c,0,(int32_t)c->r[4],0); // 80149760
  if (!crb(c,0)) { goto L_80149778; } // 80149764
  return; // 80149768
L_8014976C:;
  cmps(c,0,(int32_t)c->r[4],32); // 8014976C
  if (!crb(c,0)) return; // 80149770
  goto L_80149898; // 80149774
L_80149778:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80149778
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 8014977C
  cmpu(c,0,c->r[0],0x00000001u); // 80149780
  if (crb(c,0)) return; // 80149784
  c->r[7]=R32(c->r[3]+0x00000038u); // 80149788
  c->r[0]=sraw(c,c->r[5],31); // 8014978C
  c->r[10]=c->r[5]&~c->r[0]; // 80149790
  c->r[9]=R32(c->r[3]+0x00000040u); // 80149794
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 80149798
  c->r[3]=rotl(c->r[7],4)&0x0000000Fu; // 8014979C
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801497A0
  c->r[8]=rotl(c->r[7],26)&0x00000004u; // 801497A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[10]; // 801497A8
  c->r[7]=rotl(c->r[7],14)&0x0000003Cu; // 801497AC
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 801497B0
  cmps(c,0,(int32_t)c->r[0],255); // 801497B4
  c->r[0]=c->r[8]+c->r[7]; // 801497B8
  c->r[3]=0u+0x000000FFu; // 801497BC
  c->r[5]=c->r[6]+c->r[5]; // 801497C0
  c->r[0]=c->r[9]+c->r[0]; // 801497C4
  c->r[5]=c->r[5]+c->r[0]; // 801497C8
  if (crb(c,1)) { goto L_801497D4; } // 801497CC
  c->r[3]=c->r[10]|c->r[10]; // 801497D0
L_801497D4:;
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 801497D4
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801497D8
  cmps(c,0,(int32_t)c->r[0],2); // 801497DC
  if (crb(c,2)) { goto L_80149814; } // 801497E0
  if (!crb(c,0)) { goto L_801497F8; } // 801497E4
  cmps(c,0,(int32_t)c->r[0],0); // 801497E8
  if (crb(c,2)) { goto L_80149804; } // 801497EC
  if (!crb(c,0)) { goto L_8014980C; } // 801497F0
  return; // 801497F4
L_801497F8:;
  cmps(c,0,(int32_t)c->r[0],4); // 801497F8
  if (!crb(c,0)) return; // 801497FC
  goto L_8014981C; // 80149800
L_80149804:;
  W8(c->r[5]+0x00000000u,c->r[3]); // 80149804
  return; // 80149808
L_8014980C:;
  W8(c->r[5]+0x00000001u,c->r[3]); // 8014980C
  return; // 80149810
L_80149814:;
  W8(c->r[5]+0x00000002u,c->r[3]); // 80149814
  return; // 80149818
L_8014981C:;
  W8(c->r[5]+0x00000003u,c->r[3]); // 8014981C
  return; // 80149820
L_80149824:;
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 80149824
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80149828
  cmps(c,0,(int32_t)c->r[0],2); // 8014982C
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 80149830
  if (crb(c,2)) { goto L_80149878; } // 80149834
  if (!crb(c,0)) { goto L_8014984C; } // 80149838
  cmps(c,0,(int32_t)c->r[0],0); // 8014983C
  if (crb(c,2)) { goto L_80149858; } // 80149840
  if (!crb(c,0)) { goto L_80149868; } // 80149844
  return; // 80149848
L_8014984C:;
  cmps(c,0,(int32_t)c->r[0],4); // 8014984C
  if (!crb(c,0)) return; // 80149850
  goto L_80149888; // 80149854
L_80149858:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80149858
  c->r[3]=c->r[3]+c->r[0]; // 8014985C
  W16(c->r[3]+0x00000010u,c->r[5]); // 80149860
  return; // 80149864
L_80149868:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80149868
  c->r[3]=c->r[3]+c->r[0]; // 8014986C
  W16(c->r[3]+0x00000012u,c->r[5]); // 80149870
  return; // 80149874
L_80149878:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80149878
  c->r[3]=c->r[3]+c->r[0]; // 8014987C
  W16(c->r[3]+0x00000014u,c->r[5]); // 80149880
  return; // 80149884
L_80149888:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80149888
  c->r[3]=c->r[3]+c->r[0]; // 8014988C
  W16(c->r[3]+0x00000016u,c->r[5]); // 80149890
  return; // 80149894
L_80149898:;
  c->r[0]=sraw(c,c->r[5],31); // 80149898
  c->r[6]=c->r[4]+0xFFFFFFF0u; // 8014989C
  c->r[7]=c->r[5]&~c->r[0]; // 801498A0
  c->r[5]=0u+0x000000FFu; // 801498A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 801498A8
  c->r[6]=rotl(c->r[6],30)&0x3FFFFFFFu; // 801498AC
  cmps(c,0,(int32_t)c->r[0],255); // 801498B0
  if (crb(c,1)) { goto L_801498BC; } // 801498B4
  c->r[5]=c->r[7]|c->r[7]; // 801498B8
L_801498BC:;
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 801498BC
  c->r[4]=rotl(c->r[5],0)&0x000000FFu; // 801498C0
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 801498C4
  cmps(c,0,(int32_t)c->r[0],2); // 801498C8
  if (crb(c,2)) { goto L_80149910; } // 801498CC
  if (!crb(c,0)) { goto L_801498E4; } // 801498D0
  cmps(c,0,(int32_t)c->r[0],0); // 801498D4
  if (crb(c,2)) { goto L_801498F0; } // 801498D8
  if (!crb(c,0)) { goto L_80149900; } // 801498DC
  return; // 801498E0
L_801498E4:;
  cmps(c,0,(int32_t)c->r[0],4); // 801498E4
  if (!crb(c,0)) return; // 801498E8
  goto L_80149920; // 801498EC
L_801498F0:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801498F0
  c->r[3]=c->r[3]+c->r[0]; // 801498F4
  W8(c->r[3]+0x00000028u,c->r[4]); // 801498F8
  return; // 801498FC
L_80149900:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80149900
  c->r[3]=c->r[3]+c->r[0]; // 80149904
  W8(c->r[3]+0x00000029u,c->r[4]); // 80149908
  return; // 8014990C
L_80149910:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80149910
  c->r[3]=c->r[3]+c->r[0]; // 80149914
  W8(c->r[3]+0x0000002Au,c->r[4]); // 80149918
  return; // 8014991C
L_80149920:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80149920
  c->r[3]=c->r[3]+c->r[0]; // 80149924
  W8(c->r[3]+0x0000002Bu,c->r[4]); // 80149928
  return; // 8014992C
}

// SetupGX__Q34nw4r3lyt8MaterialFbUc
void f_80149930(Ctx* __restrict c) {
  trace_call(0x80149930u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80149930
  c->r[0]=c->lr; // 80149934
  W32(c->r[1]+0x00000124u,c->r[0]); // 80149938
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 8014993C
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 80149940
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 80149944
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 80149948
  c->r[11]=c->r[1]+0x00000100u; // 8014994C
  c->lr=0x80149954u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80149950
  c->r[27]=c->r[3]|c->r[3]; // 80149954
  c->r[31]=c->r[4]|c->r[4]; // 80149958
  c->r[28]=c->r[5]|c->r[5]; // 8014995C
  c->r[30]=0u+0x00000001u; // 80149960
  c->r[23]=0u+0x00000000u; // 80149964
  c->r[3]=0u+0x00000001u; // 80149968
  c->lr=0x80149970u; f_801691DC(c); // 8014996C
  c->r[4]=R32(c->r[27]+0x00000038u); // 80149970
  c->r[0]=rotl(c->r[4],24)&0x00000001u; cr0(c,c->r[0]); // 80149974
  if (crb(c,2)) { goto L_80149A20; } // 80149978
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 8014997C
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 80149980
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80149984
  c->r[6]=rotl(c->r[4],14)&0x0000003Cu; // 80149988
  c->r[7]=R32(c->r[27]+0x00000040u); // 8014998C
  c->r[3]=0u+0x00000000u; // 80149990
  c->r[4]=0u+0x00000000u; // 80149994
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80149998
  c->r[6]=c->r[6]+c->r[5]; // 8014999C
  c->r[5]=0u+0x00000000u; // 801499A0
  c->r[0]=c->r[7]+c->r[0]; // 801499A4
  c->r[7]=0u+0x00000000u; // 801499A8
  c->r[24]=c->r[6]+c->r[0]; // 801499AC
  c->r[6]=R8(c->r[6]+c->r[0]); // 801499B0
  c->r[8]=0u+0x00000000u; // 801499B4
  c->r[9]=0u+0x00000002u; // 801499B8
  c->lr=0x801499C0u; f_80169200(c); // 801499BC
  c->r[6]=R8(c->r[24]+0x00000001u); // 801499C0
  c->r[3]=0u+0x00000002u; // 801499C4
  c->r[4]=0u+0x00000000u; // 801499C8
  c->r[5]=0u+0x00000000u; // 801499CC
  c->r[7]=0u+0x00000000u; // 801499D0
  c->r[8]=0u+0x00000000u; // 801499D4
  c->r[9]=0u+0x00000002u; // 801499D8
  c->lr=0x801499E0u; f_80169200(c); // 801499DC
  c->r[3]=R8(c->r[24]+0x00000000u); // 801499E0
  c->r[30]=0u+0x00000001u; // 801499E4
  cmps(c,0,(int32_t)c->r[3],1); // 801499E8
  if (crb(c,2)) { goto L_80149A00; } // 801499EC
  c->r[0]=R8(c->r[24]+0x00000001u); // 801499F0
  cmps(c,0,(int32_t)c->r[0],1); // 801499F4
  if (crb(c,2)) { goto L_80149A00; } // 801499F8
  c->r[30]=0u+0x00000000u; // 801499FC
L_80149A00:;
  cmps(c,0,(int32_t)c->r[3],0); // 80149A00
  c->r[23]=0u+0x00000000u; // 80149A04
  if (crb(c,2)) { goto L_80149A18; } // 80149A08
  c->r[0]=R8(c->r[24]+0x00000001u); // 80149A0C
  cmps(c,0,(int32_t)c->r[0],0); // 80149A10
  if (!crb(c,2)) { goto L_80149A40; } // 80149A14
L_80149A18:;
  c->r[23]=0u+0x00000001u; // 80149A18
  goto L_80149A40; // 80149A1C
L_80149A20:;
  c->r[3]=0u+0x00000004u; // 80149A20
  c->r[4]=0u+0x00000000u; // 80149A24
  c->r[5]=0u+0x00000000u; // 80149A28
  c->r[6]=0u+0x00000001u; // 80149A2C
  c->r[7]=0u+0x00000000u; // 80149A30
  c->r[8]=0u+0x00000000u; // 80149A34
  c->r[9]=0u+0x00000002u; // 80149A38
  c->lr=0x80149A40u; f_80169200(c); // 80149A3C
L_80149A40:;
  cmps(c,0,(int32_t)c->r[30],0); // 80149A40
  c->r[29]=0u+0x00000000u; // 80149A44
  if (crb(c,2)) { goto L_80149A5C; } // 80149A48
  cmps(c,0,(int32_t)c->r[31],0); // 80149A4C
  c->r[29]=0u+0x00000001u; // 80149A50
  if (!crb(c,2)) { goto L_80149A5C; } // 80149A54
  c->r[29]=0u+0x00000000u; // 80149A58
L_80149A5C:;
  cmps(c,0,(int32_t)c->r[23],0); // 80149A5C
  if (crb(c,2)) { goto L_80149B38; } // 80149A60
  c->r[5]=R32(c->r[27]+0x00000038u); // 80149A64
  c->r[0]=0u+0xFFFFFFFFu; // 80149A68
  W32(c->r[1]+0x00000030u,c->r[0]); // 80149A6C
  c->r[0]=rotl(c->r[5],25)&0x00000001u; cr0(c,c->r[0]); // 80149A70
  if (crb(c,2)) { goto L_80149AC4; } // 80149A74
  c->r[3]=rotl(c->r[5],8)&0x0000000Fu; // 80149A78
  c->r[0]=rotl(c->r[5],4)&0x0000000Fu; // 80149A7C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80149A80
  c->r[6]=rotl(c->r[5],26)&0x00000004u; // 80149A84
  c->r[5]=rotl(c->r[5],14)&0x0000003Cu; // 80149A88
  c->r[7]=R32(c->r[27]+0x00000040u); // 80149A8C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80149A90
  c->r[0]=c->r[6]+c->r[5]; // 80149A94
  c->r[0]=c->r[7]+c->r[0]; // 80149A98
  c->r[3]=c->r[4]+c->r[3]; // 80149A9C
  c->r[6]=c->r[3]+c->r[0]; // 80149AA0
  c->r[5]=R8(c->r[3]+c->r[0]); // 80149AA4
  c->r[4]=R8(c->r[6]+0x00000001u); // 80149AA8
  c->r[3]=R8(c->r[6]+0x00000002u); // 80149AAC
  c->r[0]=R8(c->r[6]+0x00000003u); // 80149AB0
  W8(c->r[1]+0x00000030u,c->r[5]); // 80149AB4
  W8(c->r[1]+0x00000031u,c->r[4]); // 80149AB8
  W8(c->r[1]+0x00000032u,c->r[3]); // 80149ABC
  W8(c->r[1]+0x00000033u,c->r[0]); // 80149AC0
L_80149AC4:;
  c->r[0]=R32(c->r[1]+0x00000030u); // 80149AC4
  c->r[5]=c->r[28]|c->r[28]; // 80149AC8
  c->r[3]=c->r[1]+0x00000024u; // 80149ACC
  c->r[4]=c->r[1]+0x00000028u; // 80149AD0
  W32(c->r[1]+0x00000028u,c->r[0]); // 80149AD4
  c->lr=0x80149ADCu; f_8014CA54(c); // 80149AD8
  c->r[7]=R8(c->r[1]+0x00000024u); // 80149ADC
  c->r[4]=c->r[1]+0x00000020u; // 80149AE0
  c->r[6]=R8(c->r[1]+0x00000025u); // 80149AE4
  c->r[3]=0u+0x00000004u; // 80149AE8
  c->r[5]=R8(c->r[1]+0x00000026u); // 80149AEC
  c->r[0]=R8(c->r[1]+0x00000027u); // 80149AF0
  W8(c->r[1]+0x00000030u,c->r[7]); // 80149AF4
  W8(c->r[1]+0x00000031u,c->r[6]); // 80149AF8
  W8(c->r[1]+0x00000032u,c->r[5]); // 80149AFC
  W8(c->r[1]+0x00000033u,c->r[0]); // 80149B00
  W8(c->r[1]+0x00000020u,c->r[7]); // 80149B04
  W8(c->r[1]+0x00000021u,c->r[6]); // 80149B08
  W8(c->r[1]+0x00000022u,c->r[5]); // 80149B0C
  W8(c->r[1]+0x00000023u,c->r[0]); // 80149B10
  c->lr=0x80149B18u; f_80169104(c); // 80149B14
  cmps(c,0,(int32_t)c->r[29],0); // 80149B18
  c->r[29]=0u+0x00000000u; // 80149B1C
  if (!crb(c,2)) { goto L_80149B34; } // 80149B20
  c->r[3]=R32(c->r[1]+0x00000030u); // 80149B24
  c->r[0]=c->r[3]+0x00010000u; // 80149B28
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80149B2C
  if (crb(c,2)) { goto L_80149B38; } // 80149B30
L_80149B34:;
  c->r[29]=0u+0x00000001u; // 80149B34
L_80149B38:;
  c->r[31]=0u+0x00000000u; // 80149B38
  W8(c->r[1]+0x0000005Cu,c->r[31]); // 80149B3C
  W8(c->r[1]+0x0000005Du,c->r[31]); // 80149B40
  W8(c->r[1]+0x0000005Eu,c->r[31]); // 80149B44
  W8(c->r[1]+0x0000005Fu,c->r[31]); // 80149B48
  W8(c->r[1]+0x00000060u,c->r[31]); // 80149B4C
  W8(c->r[1]+0x00000061u,c->r[31]); // 80149B50
  W8(c->r[1]+0x00000062u,c->r[31]); // 80149B54
  W8(c->r[1]+0x00000063u,c->r[31]); // 80149B58
  W8(c->r[1]+0x00000064u,c->r[31]); // 80149B5C
  W8(c->r[1]+0x00000065u,c->r[31]); // 80149B60
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80149B64
  c->r[3]=rotl(c->r[0],12)&0x0000000Fu; // 80149B68
  c->lr=0x80149B70u; f_80167404(c); // 80149B6C
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80149B70
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; cr0(c,c->r[0]); // 80149B74
  if (crb(c,2)) { goto L_80149C10; } // 80149B78
  c->r[0]=R32(c->r[27]+0x00000038u); // 80149B7C
  c->r[3]=0u+0xAAAB0000u; // 80149B80
  c->r[5]=R32(c->r[27]+0x00000040u); // 80149B84
  c->r[25]=c->r[3]+0xFFFFAAABu; // 80149B88
  c->r[4]=rotl(c->r[0],8)&0x0000000Fu; // 80149B8C
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80149B90
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 80149B94
  c->r[26]=c->r[1]+0x0000005Cu; // 80149B98
  c->r[28]=0u+0x00000000u; // 80149B9C
  c->r[24]=0u+0x00000001u; // 80149BA0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80149BA4
  c->r[0]=c->r[5]+c->r[4]; // 80149BA8
  c->r[23]=c->r[3]+c->r[0]; // 80149BAC
  goto L_80149C00; // 80149BB0
L_80149BB4:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 80149BB4
  c->r[6]=R8(c->r[23]+0x00000002u); // 80149BB8
  cmps(c,0,(int32_t)c->r[0],1); // 80149BBC
  if (!crb(c,2)) { goto L_80149BE0; } // 80149BC0
  cmpu(c,0,c->r[6],0x0000003Cu); // 80149BC4
  if (crb(c,2)) { goto L_80149BE0; } // 80149BC8
  c->r[0]=c->r[6]+0xFFFFFFE2u; // 80149BCC
  c->r[31]=0u+0x00000001u; // 80149BD0
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[0])>>32); // 80149BD4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80149BD8
  W8(c->r[26]+c->r[0],c->r[24]); // 80149BDC
L_80149BE0:;
  c->r[4]=R8(c->r[23]+0x00000000u); // 80149BE0
  c->r[3]=c->r[28]|c->r[28]; // 80149BE4
  c->r[5]=R8(c->r[23]+0x00000001u); // 80149BE8
  c->r[7]=0u+0x00000000u; // 80149BEC
  c->r[8]=0u+0x0000007Du; // 80149BF0
  c->lr=0x80149BF8u; f_801671DC(c); // 80149BF4
  c->r[23]=c->r[23]+0x00000004u; // 80149BF8
  c->r[28]=c->r[28]+0x00000001u; // 80149BFC
L_80149C00:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80149C00
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 80149C04
  cmpu(c,0,c->r[28],c->r[0]); // 80149C08
  if (crb(c,0)) { IRQCHK(c); goto L_80149BB4; } // 80149C0C
L_80149C10:;
  cmps(c,0,(int32_t)c->r[31],0); // 80149C10
  if (crb(c,2)) { goto L_80149C8C; } // 80149C14
  c->r[0]=R32(c->r[27]+0x00000038u); // 80149C18
  c->r[26]=c->r[1]+0x0000005Cu; // 80149C1C
  c->r[3]=R32(c->r[27]+0x00000040u); // 80149C20
  c->r[28]=0u+0x00000000u; // 80149C24
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80149C28
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80149C2C
  c->r[23]=c->r[3]+c->r[0]; // 80149C30
  goto L_80149C78; // 80149C34
L_80149C38:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 80149C38
  c->r[0]=R8(c->r[26]+c->r[3]); // 80149C3C
  cmps(c,0,(int32_t)c->r[0],0); // 80149C40
  if (crb(c,2)) { goto L_80149C74; } // 80149C44
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80149C48
  c->r[3]=c->r[1]+0x000000A0u; // 80149C4C
  c->r[4]=c->r[23]+c->r[0]; // 80149C50
  c->lr=0x80149C58u; f_80147C28(c); // 80149C54
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 80149C58
  c->r[0]=rotl(c->r[28],2)&0x000003FCu; // 80149C5C
  c->r[4]=c->r[0]-c->r[3]; // 80149C60
  c->r[5]=0u+0x00000001u; // 80149C64
  c->r[3]=c->r[1]+0x000000A0u; // 80149C68
  c->r[4]=c->r[4]+0x0000001Eu; // 80149C6C
  c->lr=0x80149C74u; f_8016B83C(c); // 80149C70
L_80149C74:;
  c->r[28]=c->r[28]+0x00000001u; // 80149C74
L_80149C78:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80149C78
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 80149C7C
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 80149C80
  cmpu(c,0,c->r[3],c->r[0]); // 80149C84
  if (crb(c,0)) { IRQCHK(c); goto L_80149C38; } // 80149C88
L_80149C8C:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80149C8C
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 80149C90
  if (crb(c,2)) { goto L_80149D30; } // 80149C94
  c->r[24]=R32(c->r[27]+0x00000040u); // 80149C98
  c->r[23]=0u+0x00000000u; // 80149C9C
  c->r[25]=0u+0x00000010u; // 80149CA0
  c->r[26]=0u+0x00000000u; // 80149CA4
  goto L_80149D20; // 80149CA8
L_80149CAC:;
  c->r[3]=c->r[24]|c->r[24]; // 80149CAC
  c->r[4]=c->r[1]+0x00000080u; // 80149CB0
  c->lr=0x80149CB8u; f_8014A9D0(c); // 80149CB4
  c->r[0]=R32(c->r[24]+0x00000018u); // 80149CB8
  c->r[3]=rotl(c->r[0],4)&0x0000000Fu; // 80149CBC
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 80149CC0
  cmpu(c,0,c->r[0],0x00000002u); // 80149CC4
  if (crb(c,1)) { goto L_80149D0C; } // 80149CC8
  cmps(c,0,(int32_t)c->r[3],10); // 80149CCC
  if (!crb(c,2)) { goto L_80149CE0; } // 80149CD0
  c->r[28]=c->r[25]|c->r[25]; // 80149CD4
  c->r[25]=c->r[25]+0x00000001u; // 80149CD8
  goto L_80149CE8; // 80149CDC
L_80149CE0:;
  c->r[28]=c->r[23]|c->r[23]; // 80149CE0
  c->r[23]=c->r[23]+0x00000001u; // 80149CE4
L_80149CE8:;
  c->r[4]=c->r[28]|c->r[28]; // 80149CE8
  c->r[3]=c->r[1]+0x00000080u; // 80149CEC
  c->lr=0x80149CF4u; f_801696D0(c); // 80149CF0
  c->r[3]=c->r[24]|c->r[24]; // 80149CF4
  c->r[4]=c->r[1]+0x00000050u; // 80149CF8
  c->lr=0x80149D00u; f_8014AABC(c); // 80149CFC
  c->r[4]=c->r[28]|c->r[28]; // 80149D00
  c->r[3]=c->r[1]+0x00000050u; // 80149D04
  c->lr=0x80149D0Cu; f_80169A3C(c); // 80149D08
L_80149D0C:;
  c->r[4]=c->r[26]|c->r[26]; // 80149D0C
  c->r[3]=c->r[1]+0x00000080u; // 80149D10
  c->lr=0x80149D18u; f_801699C0(c); // 80149D14
  c->r[24]=c->r[24]+0x0000001Cu; // 80149D18
  c->r[26]=c->r[26]+0x00000001u; // 80149D1C
L_80149D20:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80149D20
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80149D24
  cmpu(c,0,c->r[26],c->r[0]); // 80149D28
  if (crb(c,0)) { IRQCHK(c); goto L_80149CAC; } // 80149D2C
L_80149D30:;
  c->r[5]=R16(c->r[27]+0x00000010u); // 80149D30
  c->r[4]=c->r[1]+0x00000048u; // 80149D34
  c->r[0]=R16(c->r[27]+0x00000012u); // 80149D38
  c->r[3]=0u+0x00000001u; // 80149D3C
  W16(c->r[1]+0x00000048u,c->r[5]); // 80149D40
  W16(c->r[1]+0x0000004Au,c->r[0]); // 80149D44
  c->r[5]=R16(c->r[27]+0x00000014u); // 80149D48
  c->r[0]=R16(c->r[27]+0x00000016u); // 80149D4C
  W16(c->r[1]+0x0000004Cu,c->r[5]); // 80149D50
  W16(c->r[1]+0x0000004Eu,c->r[0]); // 80149D54
  c->lr=0x80149D5Cu; f_8016A824(c); // 80149D58
  c->r[5]=R16(c->r[27]+0x00000018u); // 80149D5C
  c->r[4]=c->r[1]+0x00000040u; // 80149D60
  c->r[0]=R16(c->r[27]+0x0000001Au); // 80149D64
  c->r[3]=0u+0x00000002u; // 80149D68
  W16(c->r[1]+0x00000040u,c->r[5]); // 80149D6C
  W16(c->r[1]+0x00000042u,c->r[0]); // 80149D70
  c->r[5]=R16(c->r[27]+0x0000001Cu); // 80149D74
  c->r[0]=R16(c->r[27]+0x0000001Eu); // 80149D78
  W16(c->r[1]+0x00000044u,c->r[5]); // 80149D7C
  W16(c->r[1]+0x00000046u,c->r[0]); // 80149D80
  c->lr=0x80149D88u; f_8016A824(c); // 80149D84
  c->r[5]=R16(c->r[27]+0x00000020u); // 80149D88
  c->r[4]=c->r[1]+0x00000038u; // 80149D8C
  c->r[0]=R16(c->r[27]+0x00000022u); // 80149D90
  c->r[3]=0u+0x00000003u; // 80149D94
  W16(c->r[1]+0x00000038u,c->r[5]); // 80149D98
  W16(c->r[1]+0x0000003Au,c->r[0]); // 80149D9C
  c->r[5]=R16(c->r[27]+0x00000024u); // 80149DA0
  c->r[0]=R16(c->r[27]+0x00000026u); // 80149DA4
  W16(c->r[1]+0x0000003Cu,c->r[5]); // 80149DA8
  W16(c->r[1]+0x0000003Eu,c->r[0]); // 80149DAC
  c->lr=0x80149DB4u; f_8016A824(c); // 80149DB0
  c->r[0]=R8(c->r[27]+0x00000028u); // 80149DB4
  c->r[4]=c->r[1]+0x0000001Cu; // 80149DB8
  c->r[3]=0u+0x00000000u; // 80149DBC
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 80149DC0
  c->r[0]=R8(c->r[27]+0x00000029u); // 80149DC4
  W8(c->r[1]+0x0000001Du,c->r[0]); // 80149DC8
  c->r[0]=R8(c->r[27]+0x0000002Au); // 80149DCC
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 80149DD0
  c->r[0]=R8(c->r[27]+0x0000002Bu); // 80149DD4
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 80149DD8
  c->lr=0x80149DE0u; f_8016A888(c); // 80149DDC
  c->r[0]=R8(c->r[27]+0x0000002Cu); // 80149DE0
  c->r[4]=c->r[1]+0x00000018u; // 80149DE4
  c->r[3]=0u+0x00000001u; // 80149DE8
  W8(c->r[1]+0x00000018u,c->r[0]); // 80149DEC
  c->r[0]=R8(c->r[27]+0x0000002Du); // 80149DF0
  W8(c->r[1]+0x00000019u,c->r[0]); // 80149DF4
  c->r[0]=R8(c->r[27]+0x0000002Eu); // 80149DF8
  W8(c->r[1]+0x0000001Au,c->r[0]); // 80149DFC
  c->r[0]=R8(c->r[27]+0x0000002Fu); // 80149E00
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 80149E04
  c->lr=0x80149E0Cu; f_8016A888(c); // 80149E08
  c->r[0]=R8(c->r[27]+0x00000030u); // 80149E0C
  c->r[4]=c->r[1]+0x00000014u; // 80149E10
  c->r[3]=0u+0x00000002u; // 80149E14
  W8(c->r[1]+0x00000014u,c->r[0]); // 80149E18
  c->r[0]=R8(c->r[27]+0x00000031u); // 80149E1C
  W8(c->r[1]+0x00000015u,c->r[0]); // 80149E20
  c->r[0]=R8(c->r[27]+0x00000032u); // 80149E24
  W8(c->r[1]+0x00000016u,c->r[0]); // 80149E28
  c->r[0]=R8(c->r[27]+0x00000033u); // 80149E2C
  W8(c->r[1]+0x00000017u,c->r[0]); // 80149E30
  c->lr=0x80149E38u; f_8016A888(c); // 80149E34
  c->r[0]=R8(c->r[27]+0x00000034u); // 80149E38
  c->r[4]=c->r[1]+0x00000010u; // 80149E3C
  c->r[3]=0u+0x00000003u; // 80149E40
  W8(c->r[1]+0x00000010u,c->r[0]); // 80149E44
  c->r[0]=R8(c->r[27]+0x00000035u); // 80149E48
  W8(c->r[1]+0x00000011u,c->r[0]); // 80149E4C
  c->r[0]=R8(c->r[27]+0x00000036u); // 80149E50
  W8(c->r[1]+0x00000012u,c->r[0]); // 80149E54
  c->r[0]=R8(c->r[27]+0x00000037u); // 80149E58
  W8(c->r[1]+0x00000013u,c->r[0]); // 80149E5C
  c->lr=0x80149E64u; f_8016A888(c); // 80149E60
  c->r[6]=R32(c->r[27]+0x00000038u); // 80149E64
  c->r[0]=rotl(c->r[6],18)&0x00000001u; cr0(c,c->r[0]); // 80149E68
  if (crb(c,2)) { goto L_80149ED8; } // 80149E6C
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 80149E70
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 80149E74
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80149E78
  c->r[7]=rotl(c->r[6],27)&0x00000004u; // 80149E7C
  c->r[5]=rotl(c->r[6],26)&0x00000004u; // 80149E80
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 80149E84
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80149E88
  c->r[5]=c->r[7]+c->r[5]; // 80149E8C
  c->r[7]=R32(c->r[27]+0x00000040u); // 80149E90
  c->r[23]=0u+0x00000000u; // 80149E94
  c->r[0]=c->r[6]+c->r[5]; // 80149E98
  c->r[3]=c->r[4]+c->r[3]; // 80149E9C
  c->r[0]=c->r[7]+c->r[0]; // 80149EA0
  c->r[28]=c->r[3]+c->r[0]; // 80149EA4
L_80149EA8:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 80149EA8
  c->r[3]=c->r[23]|c->r[23]; // 80149EAC
  c->r[4]=rotl(c->r[0],0)&0x00000003u; // 80149EB0
  c->r[5]=rotl(c->r[0],30)&0x00000003u; // 80149EB4
  c->r[6]=rotl(c->r[0],28)&0x00000003u; // 80149EB8
  c->r[7]=rotl(c->r[0],26)&0x00000003u; // 80149EBC
  c->lr=0x80149EC4u; f_8016A9C0(c); // 80149EC0
  c->r[23]=c->r[23]+0x00000001u; // 80149EC4
  c->r[28]=c->r[28]+0x00000001u; // 80149EC8
  cmps(c,0,(int32_t)c->r[23],4); // 80149ECC
  if (crb(c,0)) { IRQCHK(c); goto L_80149EA8; } // 80149ED0
  goto L_80149F38; // 80149ED4
L_80149ED8:;
  c->r[3]=0u+0x00000000u; // 80149ED8
  c->r[4]=0u+0x00000000u; // 80149EDC
  c->r[5]=0u+0x00000001u; // 80149EE0
  c->r[6]=0u+0x00000002u; // 80149EE4
  c->r[7]=0u+0x00000003u; // 80149EE8
  c->lr=0x80149EF0u; f_8016A9C0(c); // 80149EEC
  c->r[3]=0u+0x00000001u; // 80149EF0
  c->r[4]=0u+0x00000000u; // 80149EF4
  c->r[5]=0u+0x00000000u; // 80149EF8
  c->r[6]=0u+0x00000000u; // 80149EFC
  c->r[7]=0u+0x00000003u; // 80149F00
  c->lr=0x80149F08u; f_8016A9C0(c); // 80149F04
  c->r[3]=0u+0x00000002u; // 80149F08
  c->r[4]=0u+0x00000001u; // 80149F0C
  c->r[5]=0u+0x00000001u; // 80149F10
  c->r[6]=0u+0x00000001u; // 80149F14
  c->r[7]=0u+0x00000003u; // 80149F18
  c->lr=0x80149F20u; f_8016A9C0(c); // 80149F1C
  c->r[3]=0u+0x00000003u; // 80149F20
  c->r[4]=0u+0x00000002u; // 80149F24
  c->r[5]=0u+0x00000002u; // 80149F28
  c->r[6]=0u+0x00000002u; // 80149F2C
  c->r[7]=0u+0x00000003u; // 80149F30
  c->lr=0x80149F38u; f_8016A9C0(c); // 80149F34
L_80149F38:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80149F38
  c->r[28]=0u+0x00000000u; // 80149F3C
  W8(c->r[1]+0x0000002Cu,c->r[28]); // 80149F40
  c->r[3]=rotl(c->r[0],23)&0x0000001Fu; cr0(c,c->r[3]); // 80149F44
  W8(c->r[1]+0x0000002Du,c->r[28]); // 80149F48
  W8(c->r[1]+0x0000002Eu,c->r[28]); // 80149F4C
  if (crb(c,2)) { goto L_8014A120; } // 80149F50
  c->lr=0x80149F58u; f_8016AC5C(c); // 80149F54
  c->r[7]=R32(c->r[27]+0x00000038u); // 80149F58
  c->r[26]=c->r[1]+0x0000002Cu; // 80149F5C
  c->r[8]=R32(c->r[27]+0x00000040u); // 80149F60
  c->r[29]=0u+0x00000000u; // 80149F64
  c->r[3]=rotl(c->r[7],14)&0x00000003u; // 80149F68
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 80149F6C
  c->r[3]=c->r[3]+c->r[0]; // 80149F70
  c->r[5]=rotl(c->r[7],4)&0x0000000Fu; // 80149F74
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80149F78
  c->r[4]=rotl(c->r[7],14)&0x0000003Cu; // 80149F7C
  c->r[0]=rotl(c->r[7],26)&0x00000004u; // 80149F80
  c->r[3]=rotl(c->r[7],27)&0x00000004u; // 80149F84
  c->r[0]=c->r[4]+c->r[0]; // 80149F88
  c->r[4]=rotl(c->r[7],20)&0x00000004u; // 80149F8C
  c->r[0]=c->r[3]+c->r[0]; // 80149F90
  c->r[3]=rotl(c->r[7],28)&0x00000004u; // 80149F94
  c->r[0]=c->r[4]+c->r[0]; // 80149F98
  c->r[4]=rotl(c->r[7],29)&0x00000004u; // 80149F9C
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 80149FA0
  c->r[31]=0u+0x00000001u; // 80149FA4
  c->r[0]=c->r[3]+c->r[0]; // 80149FA8
  c->r[3]=rotl(c->r[7],19)&0x0000001Cu; // 80149FAC
  c->r[5]=c->r[6]+c->r[5]; // 80149FB0
  c->r[0]=c->r[5]+c->r[0]; // 80149FB4
  c->r[3]=c->r[4]+c->r[3]; // 80149FB8
  c->r[0]=c->r[8]+c->r[0]; // 80149FBC
  c->r[25]=c->r[3]+c->r[0]; // 80149FC0
  goto L_8014A108; // 80149FC4
L_80149FC8:;
  c->r[0]=R8(c->r[25]+0x00000003u); // 80149FC8
  c->r[3]=c->r[29]|c->r[29]; // 80149FCC
  c->r[5]=R8(c->r[25]+0x00000002u); // 80149FD0
  c->r[4]=R8(c->r[25]+0x00000000u); // 80149FD4
  c->r[5]=(rotl(c->r[0],8)&0x00000100u)|(c->r[5]&~0x00000100u); // 80149FD8
  c->r[6]=R8(c->r[25]+0x00000001u); // 80149FDC
  c->lr=0x80149FE4u; f_8016AB00(c); // 80149FE0
  c->r[0]=R8(c->r[25]+0x00000003u); // 80149FE4
  c->r[3]=c->r[29]|c->r[29]; // 80149FE8
  c->r[4]=rotl(c->r[0],31)&0x00000003u; // 80149FEC
  c->r[5]=rotl(c->r[0],29)&0x00000003u; // 80149FF0
  c->lr=0x80149FF8u; f_8016A984(c); // 80149FF4
  c->r[0]=R8(c->r[25]+0x00000005u); // 80149FF8
  c->r[3]=c->r[29]|c->r[29]; // 80149FFC
  c->r[5]=R8(c->r[25]+0x00000004u); // 8014A000
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 8014A004
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 8014A008
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 8014A00C
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 8014A010
  c->lr=0x8014A018u; f_8016A694(c); // 8014A014
  c->r[6]=R8(c->r[25]+0x00000006u); // 8014A018
  c->r[3]=c->r[29]|c->r[29]; // 8014A01C
  c->r[0]=R8(c->r[25]+0x00000007u); // 8014A020
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 8014A024
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 8014A028
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 8014A02C
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 8014A030
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 8014A034
  c->lr=0x8014A03Cu; f_8016A714(c); // 8014A038
  c->r[0]=R8(c->r[25]+0x00000007u); // 8014A03C
  c->r[3]=c->r[29]|c->r[29]; // 8014A040
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 8014A044
  c->lr=0x8014A04Cu; f_8016A8E4(c); // 8014A048
  c->r[0]=R8(c->r[25]+0x00000009u); // 8014A04C
  c->r[3]=c->r[29]|c->r[29]; // 8014A050
  c->r[5]=R8(c->r[25]+0x00000008u); // 8014A054
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 8014A058
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 8014A05C
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 8014A060
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 8014A064
  c->lr=0x8014A06Cu; f_8016A6D4(c); // 8014A068
  c->r[6]=R8(c->r[25]+0x0000000Au); // 8014A06C
  c->r[3]=c->r[29]|c->r[29]; // 8014A070
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 8014A074
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 8014A078
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 8014A07C
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 8014A080
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 8014A084
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 8014A088
  c->lr=0x8014A090u; f_8016A76C(c); // 8014A08C
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 8014A090
  c->r[3]=c->r[29]|c->r[29]; // 8014A094
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 8014A098
  c->lr=0x8014A0A0u; f_8016A934(c); // 8014A09C
  c->r[10]=R8(c->r[25]+0x0000000Fu); // 8014A0A0
  c->r[3]=c->r[29]|c->r[29]; // 8014A0A4
  c->r[6]=R8(c->r[25]+0x0000000Du); // 8014A0A8
  c->r[9]=R8(c->r[25]+0x0000000Eu); // 8014A0AC
  c->r[4]=rotl(c->r[10],29)&0x00000001u; // 8014A0B0
  c->r[24]=rotl(c->r[6],29)&0x0000000Fu; // 8014A0B4
  c->r[0]=rotl(c->r[10],28)&0x00000003u; // 8014A0B8
  W32(c->r[1]+0x00000008u,c->r[4]); // 8014A0BC
  c->r[5]=rotl(c->r[10],0)&0x00000003u; // 8014A0C0
  c->r[8]=rotl(c->r[9],0)&0x00000007u; // 8014A0C4
  c->r[7]=c->r[24]|c->r[24]; // 8014A0C8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014A0CC
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 8014A0D0
  c->r[9]=rotl(c->r[9],29)&0x00000007u; // 8014A0D4
  c->r[10]=rotl(c->r[10],30)&0x00000001u; // 8014A0D8
  c->r[4]=R8(c->r[25]+0x0000000Cu); // 8014A0DC
  c->lr=0x8014A0E4u; f_8016A160(c); // 8014A0E0
  cmps(c,0,(int32_t)c->r[24],1); // 8014A0E4
  if (crb(c,0)) { goto L_8014A100; } // 8014A0E8
  cmps(c,0,(int32_t)c->r[24],3); // 8014A0EC
  if (crb(c,1)) { goto L_8014A100; } // 8014A0F0
  c->r[3]=c->r[26]+c->r[24]; // 8014A0F4
  c->r[28]=0u+0x00000001u; // 8014A0F8
  W8(c->r[3]+0xFFFFFFFFu,c->r[31]); // 8014A0FC
L_8014A100:;
  c->r[25]=c->r[25]+0x00000010u; // 8014A100
  c->r[29]=c->r[29]+0x00000001u; // 8014A104
L_8014A108:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 8014A108
  c->r[0]=rotl(c->r[0],23)&0x0000001Fu; // 8014A10C
  cmpu(c,0,c->r[29],c->r[0]); // 8014A110
  if (crb(c,0)) { IRQCHK(c); goto L_80149FC8; } // 8014A114
  c->r[29]=0u+0x00000001u; // 8014A118
  goto L_8014A4E8; // 8014A11C
L_8014A120:;
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8014A120
  c->r[31]=0u+0x00000000u; // 8014A124
  if (!crb(c,2)) { goto L_8014A17C; } // 8014A128
  c->r[3]=0u+0x00000000u; // 8014A12C
  c->r[4]=0u+0x000000FFu; // 8014A130
  c->r[5]=0u+0x000000FFu; // 8014A134
  c->r[6]=0u+0x00000004u; // 8014A138
  c->lr=0x8014A140u; f_8016AB00(c); // 8014A13C
  c->r[3]=0u+0x00000000u; // 8014A140
  c->r[4]=0u+0x0000000Fu; // 8014A144
  c->r[5]=0u+0x00000004u; // 8014A148
  c->r[6]=0u+0x0000000Au; // 8014A14C
  c->r[7]=0u+0x0000000Fu; // 8014A150
  c->lr=0x8014A158u; f_8016A694(c); // 8014A154
  c->r[3]=0u+0x00000000u; // 8014A158
  c->r[4]=0u+0x00000007u; // 8014A15C
  c->r[5]=0u+0x00000002u; // 8014A160
  c->r[6]=0u+0x00000005u; // 8014A164
  c->r[7]=0u+0x00000007u; // 8014A168
  c->lr=0x8014A170u; f_8016A6D4(c); // 8014A16C
  c->r[29]=0u+0x00000001u; // 8014A170
  c->r[31]=0u+0x00000001u; // 8014A174
  goto L_8014A470; // 8014A178
L_8014A17C:;
  cmpu(c,0,c->r[0],0x00000001u); // 8014A17C
  if (!crb(c,2)) { goto L_8014A1D0; } // 8014A180
  c->r[3]=0u+0x00000000u; // 8014A184
  c->r[4]=0u+0x00000000u; // 8014A188
  c->r[5]=0u+0x00000000u; // 8014A18C
  c->r[6]=0u+0x000000FFu; // 8014A190
  c->lr=0x8014A198u; f_8016AB00(c); // 8014A194
  c->r[3]=0u+0x00000000u; // 8014A198
  c->r[4]=0u+0x00000002u; // 8014A19C
  c->r[5]=0u+0x00000004u; // 8014A1A0
  c->r[6]=0u+0x00000008u; // 8014A1A4
  c->r[7]=0u+0x0000000Fu; // 8014A1A8
  c->lr=0x8014A1B0u; f_8016A694(c); // 8014A1AC
  c->r[3]=0u+0x00000000u; // 8014A1B0
  c->r[4]=0u+0x00000001u; // 8014A1B4
  c->r[5]=0u+0x00000002u; // 8014A1B8
  c->r[6]=0u+0x00000004u; // 8014A1BC
  c->r[7]=0u+0x00000007u; // 8014A1C0
  c->lr=0x8014A1C8u; f_8016A6D4(c); // 8014A1C4
  c->r[31]=0u+0x00000001u; // 8014A1C8
  goto L_8014A41C; // 8014A1CC
L_8014A1D0:;
  cmpu(c,0,c->r[0],0x00000002u); // 8014A1D0
  if (!crb(c,2)) { goto L_8014A288; } // 8014A1D4
  c->r[3]=0u+0x00000000u; // 8014A1D8
  c->r[4]=0u+0x00000000u; // 8014A1DC
  c->r[5]=0u+0x00000000u; // 8014A1E0
  c->r[6]=0u+0x000000FFu; // 8014A1E4
  c->lr=0x8014A1ECu; f_8016AB00(c); // 8014A1E8
  c->r[3]=0u+0x00000000u; // 8014A1EC
  c->r[4]=0u+0x0000000Fu; // 8014A1F0
  c->r[5]=0u+0x0000000Fu; // 8014A1F4
  c->r[6]=0u+0x0000000Fu; // 8014A1F8
  c->r[7]=0u+0x00000008u; // 8014A1FC
  c->lr=0x8014A204u; f_8016A694(c); // 8014A200
  c->r[3]=0u+0x00000000u; // 8014A204
  c->r[4]=0u+0x00000007u; // 8014A208
  c->r[5]=0u+0x00000007u; // 8014A20C
  c->r[6]=0u+0x00000007u; // 8014A210
  c->r[7]=0u+0x00000004u; // 8014A214
  c->lr=0x8014A21Cu; f_8016A6D4(c); // 8014A218
  c->r[3]=0u+0x00000001u; // 8014A21C
  c->r[4]=0u+0x00000001u; // 8014A220
  c->r[5]=0u+0x00000001u; // 8014A224
  c->r[6]=0u+0x000000FFu; // 8014A228
  c->lr=0x8014A230u; f_8016AB00(c); // 8014A22C
  c->r[3]=0u+0x00000001u; // 8014A230
  c->r[4]=0u+0x00000008u; // 8014A234
  c->r[5]=0u+0x00000000u; // 8014A238
  c->r[6]=0u+0x0000000Eu; // 8014A23C
  c->r[7]=0u+0x0000000Fu; // 8014A240
  c->lr=0x8014A248u; f_8016A694(c); // 8014A244
  c->r[3]=0u+0x00000001u; // 8014A248
  c->r[4]=0u+0x00000004u; // 8014A24C
  c->r[5]=0u+0x00000000u; // 8014A250
  c->r[6]=0u+0x00000006u; // 8014A254
  c->r[7]=0u+0x00000007u; // 8014A258
  c->lr=0x8014A260u; f_8016A6D4(c); // 8014A25C
  c->r[4]=0u+0x802C0000u; // 8014A260
  c->r[3]=0u+0x00000001u; // 8014A264
  c->r[4]=R32(c->r[4]+0x00006740u); // 8014A268
  c->lr=0x8014A270u; f_8016A8E4(c); // 8014A26C
  c->r[4]=0u+0x802C0000u; // 8014A270
  c->r[3]=0u+0x00000001u; // 8014A274
  c->r[4]=R32(c->r[4]+0x00006760u); // 8014A278
  c->lr=0x8014A280u; f_8016A934(c); // 8014A27C
  c->r[31]=0u+0x00000002u; // 8014A280
  goto L_8014A33C; // 8014A284
L_8014A288:;
  c->r[24]=0u+0x802C0000u; // 8014A288
  c->r[25]=0u+0x802C0000u; // 8014A28C
  c->r[24]=c->r[24]+0x00006740u; // 8014A290
  c->r[23]=0u+0x00000000u; // 8014A294
  c->r[25]=c->r[25]+0x00006760u; // 8014A298
  goto L_8014A32C; // 8014A29C
L_8014A2A0:;
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 8014A2A0
  c->r[4]=c->r[23]|c->r[23]; // 8014A2A4
  c->r[3]=c->r[22]|c->r[22]; // 8014A2A8
  c->r[5]=c->r[23]|c->r[23]; // 8014A2AC
  c->r[6]=0u+0x000000FFu; // 8014A2B0
  c->lr=0x8014A2B8u; f_8016AB00(c); // 8014A2B4
  cmps(c,0,(int32_t)c->r[23],0); // 8014A2B8
  c->r[7]=0u+0x00000000u; // 8014A2BC
  if (!crb(c,2)) { goto L_8014A2C8; } // 8014A2C0
  c->r[7]=0u+0x0000000Fu; // 8014A2C4
L_8014A2C8:;
  cmps(c,0,(int32_t)c->r[23],0); // 8014A2C8
  c->r[26]=0u+0x00000000u; // 8014A2CC
  if (!crb(c,2)) { goto L_8014A2D8; } // 8014A2D0
  c->r[26]=0u+0x00000007u; // 8014A2D4
L_8014A2D8:;
  c->r[3]=c->r[22]|c->r[22]; // 8014A2D8
  c->r[4]=0u+0x0000000Fu; // 8014A2DC
  c->r[5]=0u+0x00000008u; // 8014A2E0
  c->r[6]=0u+0x0000000Eu; // 8014A2E4
  c->lr=0x8014A2ECu; f_8016A694(c); // 8014A2E8
  c->r[3]=c->r[22]|c->r[22]; // 8014A2EC
  c->r[7]=c->r[26]|c->r[26]; // 8014A2F0
  c->r[4]=0u+0x00000007u; // 8014A2F4
  c->r[5]=0u+0x00000004u; // 8014A2F8
  c->r[6]=0u+0x00000006u; // 8014A2FC
  c->lr=0x8014A304u; f_8016A6D4(c); // 8014A300
  c->r[4]=R32(c->r[24]+0x00000000u); // 8014A304
  c->r[3]=c->r[22]|c->r[22]; // 8014A308
  c->lr=0x8014A310u; f_8016A8E4(c); // 8014A30C
  c->r[4]=R32(c->r[25]+0x00000000u); // 8014A310
  c->r[3]=c->r[22]|c->r[22]; // 8014A314
  c->lr=0x8014A31Cu; f_8016A934(c); // 8014A318
  c->r[31]=c->r[31]+0x00000001u; // 8014A31C
  c->r[24]=c->r[24]+0x00000004u; // 8014A320
  c->r[25]=c->r[25]+0x00000004u; // 8014A324
  c->r[23]=c->r[23]+0x00000001u; // 8014A328
L_8014A32C:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 8014A32C
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 8014A330
  cmpu(c,0,c->r[23],c->r[0]); // 8014A334
  if (crb(c,0)) { IRQCHK(c); goto L_8014A2A0; } // 8014A338
L_8014A33C:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000010u); // 8014A33C
  c->r[5]=0u+0x00000000u; // 8014A340
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[2]+0xFFFFB340u); // 8014A344
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8014A348
  if (!crb(c,2)) { goto L_8014A388; } // 8014A34C
  c->r[4]=c->r[2]+0xFFFFB340u; // 8014A350
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000012u); // 8014A354
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 8014A358
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8014A35C
  if (!crb(c,2)) { goto L_8014A388; } // 8014A360
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000014u); // 8014A364
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 8014A368
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8014A36C
  if (!crb(c,2)) { goto L_8014A388; } // 8014A370
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000016u); // 8014A374
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 8014A378
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8014A37C
  if (!crb(c,2)) { goto L_8014A388; } // 8014A380
  c->r[5]=0u+0x00000001u; // 8014A384
L_8014A388:;
  cmps(c,0,(int32_t)c->r[5],0); // 8014A388
  if (crb(c,2)) { goto L_8014A3D0; } // 8014A38C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000018u); // 8014A390
  c->r[3]=0u+0x00000000u; // 8014A394
  cmps(c,0,(int32_t)c->r[0],255); // 8014A398
  if (!crb(c,2)) { goto L_8014A3C8; } // 8014A39C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x0000001Au); // 8014A3A0
  cmps(c,0,(int32_t)c->r[0],255); // 8014A3A4
  if (!crb(c,2)) { goto L_8014A3C8; } // 8014A3A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x0000001Cu); // 8014A3AC
  cmps(c,0,(int32_t)c->r[0],255); // 8014A3B0
  if (!crb(c,2)) { goto L_8014A3C8; } // 8014A3B4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x0000001Eu); // 8014A3B8
  cmps(c,0,(int32_t)c->r[0],255); // 8014A3BC
  if (!crb(c,2)) { goto L_8014A3C8; } // 8014A3C0
  c->r[3]=0u+0x00000001u; // 8014A3C4
L_8014A3C8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8014A3C8
  if (!crb(c,2)) { goto L_8014A41C; } // 8014A3CC
L_8014A3D0:;
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 8014A3D0
  c->r[4]=0u+0x000000FFu; // 8014A3D4
  c->r[3]=c->r[22]|c->r[22]; // 8014A3D8
  c->r[5]=0u+0x000000FFu; // 8014A3DC
  c->r[6]=0u+0x000000FFu; // 8014A3E0
  c->lr=0x8014A3E8u; f_8016AB00(c); // 8014A3E4
  c->r[3]=c->r[22]|c->r[22]; // 8014A3E8
  c->r[4]=0u+0x00000002u; // 8014A3EC
  c->r[5]=0u+0x00000004u; // 8014A3F0
  c->r[6]=0u+0x00000000u; // 8014A3F4
  c->r[7]=0u+0x0000000Fu; // 8014A3F8
  c->lr=0x8014A400u; f_8016A694(c); // 8014A3FC
  c->r[3]=c->r[22]|c->r[22]; // 8014A400
  c->r[4]=0u+0x00000001u; // 8014A404
  c->r[5]=0u+0x00000002u; // 8014A408
  c->r[6]=0u+0x00000000u; // 8014A40C
  c->r[7]=0u+0x00000007u; // 8014A410
  c->lr=0x8014A418u; f_8016A6D4(c); // 8014A414
  c->r[31]=c->r[31]+0x00000001u; // 8014A418
L_8014A41C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8014A41C
  if (crb(c,2)) { goto L_8014A470; } // 8014A420
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 8014A424
  c->r[4]=0u+0x000000FFu; // 8014A428
  c->r[3]=c->r[22]|c->r[22]; // 8014A42C
  c->r[5]=0u+0x000000FFu; // 8014A430
  c->r[6]=0u+0x00000004u; // 8014A434
  c->lr=0x8014A43Cu; f_8016AB00(c); // 8014A438
  c->r[3]=c->r[22]|c->r[22]; // 8014A43C
  c->r[4]=0u+0x0000000Fu; // 8014A440
  c->r[5]=0u+0x00000000u; // 8014A444
  c->r[6]=0u+0x0000000Au; // 8014A448
  c->r[7]=0u+0x0000000Fu; // 8014A44C
  c->lr=0x8014A454u; f_8016A694(c); // 8014A450
  c->r[3]=c->r[22]|c->r[22]; // 8014A454
  c->r[4]=0u+0x00000007u; // 8014A458
  c->r[5]=0u+0x00000000u; // 8014A45C
  c->r[6]=0u+0x00000005u; // 8014A460
  c->r[7]=0u+0x00000007u; // 8014A464
  c->lr=0x8014A46Cu; f_8016A6D4(c); // 8014A468
  c->r[31]=c->r[31]+0x00000001u; // 8014A46C
L_8014A470:;
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 8014A470
  c->r[23]=0u+0x00000000u; // 8014A474
  goto L_8014A4D4; // 8014A478
L_8014A47C:;
  c->r[24]=rotl(c->r[23],0)&0x000000FFu; // 8014A47C
  c->r[4]=0u+0x00000000u; // 8014A480
  c->r[3]=c->r[24]|c->r[24]; // 8014A484
  c->r[5]=0u+0x00000000u; // 8014A488
  c->r[6]=0u+0x00000000u; // 8014A48C
  c->r[7]=0u+0x00000001u; // 8014A490
  c->r[8]=0u+0x00000000u; // 8014A494
  c->lr=0x8014A49Cu; f_8016A714(c); // 8014A498
  c->r[3]=c->r[24]|c->r[24]; // 8014A49C
  c->r[4]=0u+0x00000000u; // 8014A4A0
  c->r[5]=0u+0x00000000u; // 8014A4A4
  c->r[6]=0u+0x00000000u; // 8014A4A8
  c->r[7]=0u+0x00000001u; // 8014A4AC
  c->r[8]=0u+0x00000000u; // 8014A4B0
  c->lr=0x8014A4B8u; f_8016A76C(c); // 8014A4B4
  c->r[3]=c->r[24]|c->r[24]; // 8014A4B8
  c->lr=0x8014A4C0u; f_8016A50C(c); // 8014A4BC
  c->r[3]=c->r[24]|c->r[24]; // 8014A4C0
  c->r[4]=0u+0x00000000u; // 8014A4C4
  c->r[5]=0u+0x00000000u; // 8014A4C8
  c->lr=0x8014A4D0u; f_8016A984(c); // 8014A4CC
  c->r[23]=c->r[23]+0x00000001u; // 8014A4D0
L_8014A4D4:;
  c->r[0]=rotl(c->r[23],0)&0x000000FFu; // 8014A4D4
  cmpu(c,0,c->r[0],c->r[22]); // 8014A4D8
  if (crb(c,0)) { IRQCHK(c); goto L_8014A47C; } // 8014A4DC
  c->r[3]=c->r[22]|c->r[22]; // 8014A4E0
  c->lr=0x8014A4E8u; f_8016AC5C(c); // 8014A4E4
L_8014A4E8:;
  cmps(c,0,(int32_t)c->r[28],0); // 8014A4E8
  if (crb(c,2)) { goto L_8014A5EC; } // 8014A4EC
  c->r[8]=R32(c->r[27]+0x00000038u); // 8014A4F0
  c->r[31]=c->r[1]+0x0000002Cu; // 8014A4F4
  c->r[10]=R32(c->r[27]+0x00000040u); // 8014A4F8
  c->r[28]=0u+0x00000000u; // 8014A4FC
  c->r[3]=rotl(c->r[8],8)&0x0000000Fu; // 8014A500
  c->r[0]=rotl(c->r[8],4)&0x0000000Fu; // 8014A504
  c->r[5]=rotl(c->r[8],27)&0x00000004u; // 8014A508
  c->r[4]=rotl(c->r[8],26)&0x00000004u; // 8014A50C
  c->r[4]=c->r[5]+c->r[4]; // 8014A510
  c->r[7]=rotl(c->r[8],28)&0x00000004u; // 8014A514
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8014A518
  c->r[6]=rotl(c->r[8],20)&0x00000004u; // 8014A51C
  c->r[5]=rotl(c->r[8],14)&0x0000003Cu; // 8014A520
  {uint32_t ea=c->r[2]+0xFFFFA8D4u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014A524
  c->r[9]=rotl(c->r[8],19)&0x0000001Cu; // 8014A528
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 8014A52C
  c->r[8]=rotl(c->r[8],29)&0x00000004u; // 8014A530
  c->r[5]=c->r[6]+c->r[5]; // 8014A534
  c->r[4]=c->r[7]+c->r[4]; // 8014A538
  c->r[3]=c->r[3]+c->r[0]; // 8014A53C
  c->r[0]=c->r[9]+c->r[8]; // 8014A540
  c->r[4]=c->r[5]+c->r[4]; // 8014A544
  c->r[3]=c->r[4]+c->r[3]; // 8014A548
  c->r[0]=c->r[10]+c->r[0]; // 8014A54C
  c->r[24]=c->r[3]+c->r[0]; // 8014A550
  goto L_8014A5DC; // 8014A554
L_8014A558:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 8014A558
  cmps(c,0,(int32_t)c->r[0],0); // 8014A55C
  if (crb(c,2)) { goto L_8014A5D0; } // 8014A560
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A564
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 8014A568
  c->lr=0x8014A570u; f_800FDB64(c); // 8014A56C
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A570
  c->f[31]=c->f[1]; // 8014A574
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 8014A578
  c->lr=0x8014A580u; f_800FDAFC(c); // 8014A57C
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A580
  c->f[2]=-c->f[1]; // 8014A584
  c->r[3]=c->r[28]+0x00000001u; // 8014A588
  c->r[4]=c->r[1]+0x00000068u; // 8014A58C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8014A590
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8014A594
  {uint32_t ea=c->r[24]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A598
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8014A59C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8014A5A0
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A5A4
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8014A5A8
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A5AC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8014A5B0
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 8014A5B4
  {uint32_t ea=c->r[24]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A5B8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8014A5BC
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 8014A5C0
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A5C4
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 8014A5C8
  c->lr=0x8014A5D0u; f_80147D30(c); // 8014A5CC
L_8014A5D0:;
  c->r[31]=c->r[31]+0x00000001u; // 8014A5D0
  c->r[24]=c->r[24]+0x00000014u; // 8014A5D4
  c->r[28]=c->r[28]+0x00000001u; // 8014A5D8
L_8014A5DC:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 8014A5DC
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 8014A5E0
  cmpu(c,0,c->r[28],c->r[0]); // 8014A5E4
  if (crb(c,0)) { IRQCHK(c); goto L_8014A558; } // 8014A5E8
L_8014A5EC:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 8014A5EC
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 8014A5F0
  c->lr=0x8014A5F8u; f_8016A4EC(c); // 8014A5F4
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 8014A5F8
  c->r[0]=rotl(c->r[0],17)&0x00000007u; cr0(c,c->r[0]); // 8014A5FC
  if (crb(c,2)) { goto L_8014A694; } // 8014A600
  c->r[8]=R32(c->r[27]+0x00000038u); // 8014A604
  c->r[28]=0u+0x00000000u; // 8014A608
  c->r[9]=R32(c->r[27]+0x00000040u); // 8014A60C
  c->r[3]=rotl(c->r[8],8)&0x0000000Fu; // 8014A610
  c->r[0]=rotl(c->r[8],4)&0x0000000Fu; // 8014A614
  c->r[5]=rotl(c->r[8],27)&0x00000004u; // 8014A618
  c->r[4]=rotl(c->r[8],26)&0x00000004u; // 8014A61C
  c->r[4]=c->r[5]+c->r[4]; // 8014A620
  c->r[7]=rotl(c->r[8],28)&0x00000004u; // 8014A624
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8014A628
  c->r[6]=rotl(c->r[8],20)&0x00000004u; // 8014A62C
  c->r[5]=rotl(c->r[8],14)&0x0000003Cu; // 8014A630
  c->r[4]=c->r[7]+c->r[4]; // 8014A634
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 8014A638
  c->r[5]=c->r[6]+c->r[5]; // 8014A63C
  c->r[6]=rotl(c->r[8],29)&0x00000004u; // 8014A640
  c->r[0]=c->r[3]+c->r[0]; // 8014A644
  c->r[3]=c->r[5]+c->r[4]; // 8014A648
  c->r[3]=c->r[6]+c->r[3]; // 8014A64C
  c->r[0]=c->r[9]+c->r[0]; // 8014A650
  c->r[24]=c->r[3]+c->r[0]; // 8014A654
  goto L_8014A684; // 8014A658
L_8014A65C:;
  c->r[4]=R8(c->r[24]+0x00000000u); // 8014A65C
  c->r[3]=c->r[28]|c->r[28]; // 8014A660
  c->r[5]=R8(c->r[24]+0x00000001u); // 8014A664
  c->lr=0x8014A66Cu; f_8016A420(c); // 8014A668
  c->r[4]=R8(c->r[24]+0x00000002u); // 8014A66C
  c->r[3]=c->r[28]|c->r[28]; // 8014A670
  c->r[5]=R8(c->r[24]+0x00000003u); // 8014A674
  c->lr=0x8014A67Cu; f_8016A31C(c); // 8014A678
  c->r[24]=c->r[24]+0x00000004u; // 8014A67C
  c->r[28]=c->r[28]+0x00000001u; // 8014A680
L_8014A684:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 8014A684
  c->r[0]=rotl(c->r[0],17)&0x00000007u; // 8014A688
  cmpu(c,0,c->r[28],c->r[0]); // 8014A68C
  if (crb(c,0)) { IRQCHK(c); goto L_8014A65C; } // 8014A690
L_8014A694:;
  c->r[4]=R32(c->r[27]+0x00000038u); // 8014A694
  c->r[0]=rotl(c->r[4],26)&0x00000001u; cr0(c,c->r[0]); // 8014A698
  if (crb(c,2)) { goto L_8014A6FC; } // 8014A69C
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 8014A6A0
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 8014A6A4
  c->r[8]=rotl(c->r[4],20)&0x00000004u; // 8014A6A8
  c->r[5]=rotl(c->r[4],14)&0x0000003Cu; // 8014A6AC
  c->r[7]=rotl(c->r[4],27)&0x00000004u; // 8014A6B0
  c->r[6]=rotl(c->r[4],26)&0x00000004u; // 8014A6B4
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8014A6B8
  c->r[5]=c->r[8]+c->r[5]; // 8014A6BC
  c->r[6]=c->r[7]+c->r[6]; // 8014A6C0
  c->r[7]=R32(c->r[27]+0x00000040u); // 8014A6C4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 8014A6C8
  c->r[0]=c->r[6]+c->r[5]; // 8014A6CC
  c->r[0]=c->r[7]+c->r[0]; // 8014A6D0
  c->r[3]=c->r[4]+c->r[3]; // 8014A6D4
  c->r[6]=c->r[3]+c->r[0]; // 8014A6D8
  c->r[0]=R8(c->r[3]+c->r[0]); // 8014A6DC
  c->r[4]=R8(c->r[6]+0x00000002u); // 8014A6E0
  c->r[5]=R8(c->r[6]+0x00000001u); // 8014A6E4
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 8014A6E8
  c->r[7]=R8(c->r[6]+0x00000003u); // 8014A6EC
  c->r[6]=rotl(c->r[0],28)&0x0000000Fu; // 8014A6F0
  c->lr=0x8014A6F8u; f_8016AA3C(c); // 8014A6F4
  goto L_8014A714; // 8014A6F8
L_8014A6FC:;
  c->r[3]=0u+0x00000007u; // 8014A6FC
  c->r[4]=0u+0x00000000u; // 8014A700
  c->r[5]=0u+0x00000000u; // 8014A704
  c->r[6]=0u+0x00000007u; // 8014A708
  c->r[7]=0u+0x00000000u; // 8014A70C
  c->lr=0x8014A714u; f_8016AA3C(c); // 8014A710
L_8014A714:;
  c->r[6]=R32(c->r[27]+0x00000038u); // 8014A714
  c->r[0]=rotl(c->r[6],27)&0x00000001u; cr0(c,c->r[0]); // 8014A718
  if (crb(c,2)) { goto L_8014A77C; } // 8014A71C
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 8014A720
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 8014A724
  c->r[5]=rotl(c->r[6],27)&0x00000004u; // 8014A728
  c->r[4]=rotl(c->r[6],26)&0x00000004u; // 8014A72C
  c->r[5]=c->r[5]+c->r[4]; // 8014A730
  c->r[8]=rotl(c->r[6],28)&0x00000004u; // 8014A734
  c->r[7]=rotl(c->r[6],20)&0x00000004u; // 8014A738
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 8014A73C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8014A740
  c->r[9]=R32(c->r[27]+0x00000040u); // 8014A744
  c->r[6]=c->r[7]+c->r[6]; // 8014A748
  c->r[5]=c->r[8]+c->r[5]; // 8014A74C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 8014A750
  c->r[0]=c->r[6]+c->r[5]; // 8014A754
  c->r[3]=c->r[4]+c->r[3]; // 8014A758
  c->r[0]=c->r[9]+c->r[0]; // 8014A75C
  c->r[6]=c->r[3]+c->r[0]; // 8014A760
  c->r[3]=R8(c->r[3]+c->r[0]); // 8014A764
  c->r[4]=R8(c->r[6]+0x00000001u); // 8014A768
  c->r[5]=R8(c->r[6]+0x00000002u); // 8014A76C
  c->r[6]=R8(c->r[6]+0x00000003u); // 8014A770
  c->lr=0x8014A778u; f_8016B130(c); // 8014A774
  goto L_8014A790; // 8014A778
L_8014A77C:;
  c->r[3]=0u+0x00000001u; // 8014A77C
  c->r[4]=0u+0x00000004u; // 8014A780
  c->r[5]=0u+0x00000005u; // 8014A784
  c->r[6]=0u+0x0000000Fu; // 8014A788
  c->lr=0x8014A790u; f_8016B130(c); // 8014A78C
L_8014A790:;
  cmps(c,0,(int32_t)c->r[29],0); // 8014A790
  c->r[3]=0u+0x00000000u; // 8014A794
  if (crb(c,2)) { goto L_8014A7A8; } // 8014A798
  cmps(c,0,(int32_t)c->r[30],0); // 8014A79C
  if (crb(c,2)) { goto L_8014A7A8; } // 8014A7A0
  c->r[3]=0u+0x00000001u; // 8014A7A4
L_8014A7A8:;
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 8014A7A8
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 8014A7AC
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 8014A7B0
  c->r[11]=c->r[1]+0x00000100u; // 8014A7B4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 8014A7B8
  c->lr=0x8014A7C0u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014A7BC
  c->r[0]=R32(c->r[1]+0x00000124u); // 8014A7C0
  c->lr=c->r[0]; // 8014A7C4
  c->r[1]=c->r[1]+0x00000120u; // 8014A7C8
  return; // 8014A7CC
}

// BindAnimation__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform
void f_8014A7D0(Ctx* __restrict c) {
  trace_call(0x8014A7D0u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 8014A7D0
  c->r[0]=c->r[3]|c->r[3]; // 8014A7D4
  c->r[3]=c->r[4]|c->r[4]; // 8014A7D8
  c->r[5]=0u+0x00000000u; // 8014A7DC
  c->r[12]=R32(c->r[12]+0x00000018u); // 8014A7E0
  c->r[4]=c->r[0]|c->r[0]; // 8014A7E4
  c->ctr=c->r[12]; // 8014A7E8
  if (true) { dispatch(c,c->ctr); return; } // 8014A7EC
}

// UnbindAnimation__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform
void f_8014A7F0(Ctx* __restrict c) {
  trace_call(0x8014A7F0u);
  c->r[3]=c->r[3]+0x00000004u; // 8014A7F0
  f_8014C0EC(c); return; // 8014A7F4
}

// UnbindAllAnimation__Q34nw4r3lyt8MaterialFv
void f_8014A7F8(Ctx* __restrict c) {
  trace_call(0x8014A7F8u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014A7F8
  c->r[4]=0u+0x00000000u; // 8014A7FC
  c->r[12]=R32(c->r[12]+0x00000014u); // 8014A800
  c->ctr=c->r[12]; // 8014A804
  if (true) { dispatch(c,c->ctr); return; } // 8014A808
}

// Animate__Q34nw4r3lyt8MaterialFv
void f_8014A80C(Ctx* __restrict c) {
  trace_call(0x8014A80Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014A80C
  c->r[0]=c->lr; // 8014A810
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014A814
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014A818
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014A81C
  c->r[30]=c->r[3]+0x00000008u; // 8014A820
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014A824
  c->r[29]=c->r[3]|c->r[3]; // 8014A828
  c->r[31]=R32(c->r[3]+0x00000008u); // 8014A82C
  goto L_8014A860; // 8014A830
L_8014A834:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 8014A834
  cmps(c,0,(int32_t)c->r[0],0); // 8014A838
  if (!crb(c,2)) { goto L_8014A85C; } // 8014A83C
  c->r[3]=R32(c->r[31]+0x00000008u); // 8014A840
  c->r[5]=c->r[29]|c->r[29]; // 8014A844
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 8014A848
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014A84C
  c->r[12]=R32(c->r[12]+0x00000020u); // 8014A850
  c->ctr=c->r[12]; // 8014A854
  if (true) { c->lr=0x8014A85Cu; dispatch(c,c->ctr); } // 8014A858
L_8014A85C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8014A85C
L_8014A860:;
  cmpu(c,0,c->r[31],c->r[30]); // 8014A860
  if (!crb(c,2)) { IRQCHK(c); goto L_8014A834; } // 8014A864
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014A868
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014A86C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014A870
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014A874
  c->lr=c->r[0]; // 8014A878
  c->r[1]=c->r[1]+0x00000020u; // 8014A87C
  return; // 8014A880
}

// AddAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimationLink
void f_8014A884(Ctx* __restrict c) {
  trace_call(0x8014A884u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014A884
  c->r[0]=c->lr; // 8014A888
  c->r[5]=c->r[4]|c->r[4]; // 8014A88C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014A890
  c->r[0]=c->r[3]+0x00000008u; // 8014A894
  c->r[3]=c->r[3]+0x00000004u; // 8014A898
  c->r[4]=c->r[1]+0x00000008u; // 8014A89C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8014A8A0
  c->lr=0x8014A8A8u; f_800F6430(c); // 8014A8A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014A8A8
  c->lr=c->r[0]; // 8014A8AC
  c->r[1]=c->r[1]+0x00000010u; // 8014A8B0
  return; // 8014A8B4
}

// FindAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform
void f_8014A8B8(Ctx* __restrict c) {
  trace_call(0x8014A8B8u);
  c->r[3]=c->r[3]+0x00000004u; // 8014A8B8
  f_8014C07C(c); return; // 8014A8BC
}

// FindAnimationLink__Q34nw4r3lyt8MaterialFRCQ34nw4r3lyt12AnimResource
void f_8014A8C0(Ctx* __restrict c) {
  trace_call(0x8014A8C0u);
  c->r[3]=c->r[3]+0x00000004u; // 8014A8C0
  f_8014C0B0(c); return; // 8014A8C4
}

// SetAnimationEnable__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransformb
void f_8014A8C8(Ctx* __restrict c) {
  trace_call(0x8014A8C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014A8C8
  c->r[0]=c->lr; // 8014A8CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014A8D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014A8D4
  c->r[31]=c->r[5]|c->r[5]; // 8014A8D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014A8DC
  c->r[12]=R32(c->r[12]+0x00000020u); // 8014A8E0
  c->ctr=c->r[12]; // 8014A8E4
  if (true) { c->lr=0x8014A8ECu; dispatch(c,c->ctr); } // 8014A8E8
  cmps(c,0,(int32_t)c->r[3],0); // 8014A8EC
  if (crb(c,2)) { goto L_8014A900; } // 8014A8F0
  c->r[0]=cntlz(c->r[31]); // 8014A8F4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8014A8F8
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8014A8FC
L_8014A900:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014A900
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014A904
  c->lr=c->r[0]; // 8014A908
  c->r[1]=c->r[1]+0x00000010u; // 8014A90C
  return; // 8014A910
}

// SetAnimationEnable__Q34nw4r3lyt8MaterialFRCQ34nw4r3lyt12AnimResourceb
void f_8014A914(Ctx* __restrict c) {
  trace_call(0x8014A914u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014A914
  c->r[0]=c->lr; // 8014A918
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014A91C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014A920
  c->r[31]=c->r[5]|c->r[5]; // 8014A924
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014A928
  c->r[12]=R32(c->r[12]+0x00000024u); // 8014A92C
  c->ctr=c->r[12]; // 8014A930
  if (true) { c->lr=0x8014A938u; dispatch(c,c->ctr); } // 8014A934
  cmps(c,0,(int32_t)c->r[3],0); // 8014A938
  if (crb(c,2)) { goto L_8014A94C; } // 8014A93C
  c->r[0]=cntlz(c->r[31]); // 8014A940
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8014A944
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8014A948
L_8014A94C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014A94C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014A950
  c->lr=c->r[0]; // 8014A954
  c->r[1]=c->r[1]+0x00000010u; // 8014A958
  return; // 8014A95C
}

// GetTextureSize__Q34nw4r3lyt6detailFPQ34nw4r3lyt8MaterialUc
void f_8014A960(Ctx* __restrict c) {
  trace_call(0x8014A960u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014A960
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 8014A964
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 8014A968
  cmpu(c,0,c->r[5],c->r[0]); // 8014A96C
  if (crb(c,0)) { goto L_8014A984; } // 8014A970
  {uint32_t ea=c->r[2]+0xFFFFA8D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A974
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8014A978
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8014A97C
  goto L_8014A9C8; // 8014A980
L_8014A984:;
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 8014A984
  c->r[5]=0u+0x43300000u; // 8014A988
  c->r[4]=R32(c->r[4]+0x00000040u); // 8014A98C
  W32(c->r[1]+0x00000008u,c->r[5]); // 8014A990
  c->r[6]=c->r[4]+c->r[0]; // 8014A994
  {uint32_t ea=c->r[2]+0xFFFFA8E8u; c->f[1]=RF64(ea);} // 8014A998
  c->r[4]=R16(c->r[6]+0x0000000Au); // 8014A99C
  c->r[0]=R16(c->r[6]+0x00000008u); // 8014A9A0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8014A9A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8014A9A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014A9AC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 8014A9B0
  W32(c->r[1]+0x00000010u,c->r[5]); // 8014A9B4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014A9B8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 8014A9BC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014A9C0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8014A9C4
L_8014A9C8:;
  c->r[1]=c->r[1]+0x00000020u; // 8014A9C8
  return; // 8014A9CC
}

// Get__Q34nw4r3lyt6TexMapCFP9_GXTexObj
void f_8014A9D0(Ctx* __restrict c) {
  trace_call(0x8014A9D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014A9D0
  c->r[0]=c->lr; // 8014A9D4
  c->r[10]=R32(c->r[3]+0x00000018u); // 8014A9D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014A9DC
  c->r[7]=rotl(c->r[10],4)&0x0000000Fu; // 8014A9E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014A9E4
  c->r[0]=c->r[7]+0xFFFFFFF8u; // 8014A9E8
  cmpu(c,0,c->r[0],0x00000002u); // 8014A9EC
  c->r[31]=c->r[4]|c->r[4]; // 8014A9F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014A9F4
  c->r[30]=c->r[3]|c->r[3]; // 8014A9F8
  if (crb(c,1)) { goto L_8014AA38; } // 8014A9FC
  c->r[3]=c->r[31]|c->r[31]; // 8014AA00
  c->lr=0x8014AA08u; f_80169854(c); // 8014AA04
  c->r[0]=R32(c->r[30]+0x00000018u); // 8014AA08
  W32(c->r[1]+0x00000008u,c->r[3]); // 8014AA0C
  c->r[3]=c->r[31]|c->r[31]; // 8014AA10
  c->r[4]=R32(c->r[30]+0x00000000u); // 8014AA14
  c->r[7]=rotl(c->r[0],4)&0x0000000Fu; // 8014AA18
  c->r[5]=R16(c->r[30]+0x00000008u); // 8014AA1C
  c->r[8]=rotl(c->r[0],7)&0x00000003u; // 8014AA20
  c->r[6]=R16(c->r[30]+0x0000000Au); // 8014AA24
  c->r[9]=rotl(c->r[0],9)&0x00000003u; // 8014AA28
  c->r[10]=rotl(c->r[0],5)&0x00000001u; // 8014AA2C
  c->lr=0x8014AA34u; f_80169570(c); // 8014AA30
  goto L_8014AA58; // 8014AA34
L_8014AA38:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 8014AA38
  c->r[3]=c->r[31]|c->r[31]; // 8014AA3C
  c->r[5]=R16(c->r[30]+0x00000008u); // 8014AA40
  c->r[8]=rotl(c->r[10],7)&0x00000003u; // 8014AA44
  c->r[9]=rotl(c->r[10],9)&0x00000003u; // 8014AA48
  c->r[6]=R16(c->r[30]+0x0000000Au); // 8014AA4C
  c->r[10]=rotl(c->r[10],5)&0x00000001u; // 8014AA50
  c->lr=0x8014AA58u; f_80169364(c); // 8014AA54
L_8014AA58:;
  c->r[4]=R16(c->r[30]+0x00000014u); // 8014AA58
  c->r[5]=0u+0x43300000u; // 8014AA5C
  c->r[0]=R32(c->r[30]+0x00000018u); // 8014AA60
  c->r[3]=c->r[31]|c->r[31]; // 8014AA64
  W32(c->r[1]+0x00000014u,c->r[4]); // 8014AA68
  {uint32_t ea=c->r[2]+0xFFFFA8F8u; c->f[3]=RF64(ea);} // 8014AA6C
  c->r[4]=rotl(c->r[0],12)&0x00000007u; // 8014AA70
  W32(c->r[1]+0x00000010u,c->r[5]); // 8014AA74
  c->r[5]=rotl(c->r[0],13)&0x00000001u; // 8014AA78
  {uint32_t ea=c->r[2]+0xFFFFA8F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014AA7C
  c->r[6]=rotl(c->r[0],14)&0x00000001u; // 8014AA80
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8014AA84
  c->r[7]=rotl(c->r[0],15)&0x00000001u; // 8014AA88
  {uint32_t ea=c->r[30]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014AA8C
  c->r[8]=rotl(c->r[0],17)&0x00000003u; // 8014AA90
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[3]); // 8014AA94
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8014AA98
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 8014AA9C
  c->lr=0x8014AAA4u; f_801695B8(c); // 8014AAA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014AAA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014AAA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014AAAC
  c->lr=c->r[0]; // 8014AAB0
  c->r[1]=c->r[1]+0x00000020u; // 8014AAB4
  return; // 8014AAB8
}

// Get__Q34nw4r3lyt6TexMapCFP10_GXTlutObj
void f_8014AABC(Ctx* __restrict c) {
  trace_call(0x8014AABCu);
  c->r[5]=c->r[3]|c->r[3]; // 8014AABC
  c->r[3]=c->r[4]|c->r[4]; // 8014AAC0
  c->r[0]=R32(c->r[5]+0x00000018u); // 8014AAC4
  c->r[4]=R32(c->r[5]+0x00000004u); // 8014AAC8
  c->r[6]=R16(c->r[5]+0x00000016u); // 8014AACC
  c->r[5]=rotl(c->r[0],19)&0x00000003u; // 8014AAD0
  f_80169A14(c); return; // 8014AAD4
}

// ReplaceImage__Q34nw4r3lyt6TexMapFP10TPLPaletteUl
void f_8014AAD8(Ctx* __restrict c) {
  trace_call(0x8014AAD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014AAD8
  c->r[0]=c->lr; // 8014AADC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014AAE0
  c->r[0]=0u+0x80000000u; // 8014AAE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014AAE8
  c->r[31]=c->r[5]|c->r[5]; // 8014AAEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014AAF0
  c->r[30]=c->r[4]|c->r[4]; // 8014AAF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014AAF8
  c->r[29]=c->r[3]|c->r[3]; // 8014AAFC
  c->r[6]=R32(c->r[4]+0x00000008u); // 8014AB00
  cmpu(c,0,c->r[6],c->r[0]); // 8014AB04
  if (!crb(c,0)) { goto L_8014AB14; } // 8014AB08
  c->r[3]=c->r[30]|c->r[30]; // 8014AB0C
  c->lr=0x8014AB14u; f_801CF42C(c); // 8014AB10
L_8014AB14:;
  c->r[3]=c->r[30]|c->r[30]; // 8014AB14
  c->r[4]=c->r[31]|c->r[31]; // 8014AB18
  c->lr=0x8014AB20u; f_801CF540(c); // 8014AB1C
  c->r[6]=R32(c->r[3]+0x00000000u); // 8014AB20
  c->r[4]=R32(c->r[29]+0x00000018u); // 8014AB24
  c->r[0]=R32(c->r[6]+0x00000008u); // 8014AB28
  W32(c->r[29]+0x00000000u,c->r[0]); // 8014AB2C
  c->r[5]=R16(c->r[6]+0x00000000u); // 8014AB30
  c->r[0]=R16(c->r[6]+0x00000002u); // 8014AB34
  W16(c->r[29]+0x00000008u,c->r[0]); // 8014AB38
  W16(c->r[29]+0x0000000Au,c->r[5]); // 8014AB3C
  c->r[0]=R32(c->r[6]+0x00000004u); // 8014AB40
  c->r[4]=(rotl(c->r[0],28)&0xF0000000u)|(c->r[4]&~0xF0000000u); // 8014AB44
  W32(c->r[29]+0x00000018u,c->r[4]); // 8014AB48
  c->r[3]=R32(c->r[3]+0x00000004u); // 8014AB4C
  cmps(c,0,(int32_t)c->r[3],0); // 8014AB50
  if (crb(c,2)) { goto L_8014AB78; } // 8014AB54
  c->r[0]=R32(c->r[3]+0x00000008u); // 8014AB58
  W32(c->r[29]+0x00000004u,c->r[0]); // 8014AB5C
  c->r[0]=R32(c->r[3]+0x00000004u); // 8014AB60
  c->r[4]=(rotl(c->r[0],13)&0x00006000u)|(c->r[4]&~0x00006000u); // 8014AB64
  W32(c->r[29]+0x00000018u,c->r[4]); // 8014AB68
  c->r[0]=R16(c->r[3]+0x00000000u); // 8014AB6C
  W16(c->r[29]+0x00000016u,c->r[0]); // 8014AB70
  goto L_8014AB8C; // 8014AB74
L_8014AB78:;
  c->r[3]=0u+0x00000000u; // 8014AB78
  c->r[0]=rotl(c->r[4],0)&0xFFFF9FFFu; // 8014AB7C
  W32(c->r[29]+0x00000004u,c->r[3]); // 8014AB80
  W32(c->r[29]+0x00000018u,c->r[0]); // 8014AB84
  W16(c->r[29]+0x00000016u,c->r[3]); // 8014AB88
L_8014AB8C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014AB8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014AB90
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014AB94
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014AB98
  c->lr=c->r[0]; // 8014AB9C
  c->r[1]=c->r[1]+0x00000020u; // 8014ABA0
  return; // 8014ABA4
}

// __ct__Q34nw4r3lyt8DrawInfoFv
void f_8014ABA8(Ctx* __restrict c) {
  trace_call(0x8014ABA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014ABA8
  c->r[0]=c->lr; // 8014ABAC
  c->r[4]=0u+0x802C0000u; // 8014ABB0
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014ABB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014ABB8
  c->r[4]=c->r[4]+0x000067B0u; // 8014ABBC
  {uint32_t ea=c->r[2]+0xFFFFA904u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014ABC0
  c->r[5]=0u+0x00000001u; // 8014ABC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014ABC8
  c->r[31]=c->r[3]|c->r[3]; // 8014ABCC
  W32(c->r[3]+0x00000000u,c->r[4]); // 8014ABD0
  c->r[4]=0u+0x00000000u; // 8014ABD4
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 8014ABD8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 8014ABDC
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 8014ABE0
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 8014ABE4
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 8014ABE8
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 8014ABEC
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 8014ABF0
  c->r[3]=c->r[3]+0x00000050u; // 8014ABF4
  c->lr=0x8014ABFCu; f_8000443C(c); // 8014ABF8
  c->r[3]=c->r[31]+0x00000004u; // 8014ABFC
  c->lr=0x8014AC04u; f_80163838(c); // 8014AC00
  c->r[3]=c->r[31]|c->r[31]; // 8014AC04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014AC08
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014AC0C
  c->lr=c->r[0]; // 8014AC10
  c->r[1]=c->r[1]+0x00000010u; // 8014AC14
  return; // 8014AC18
}

// __dt__Q34nw4r3lyt8DrawInfoFv
void f_8014AC1C(Ctx* __restrict c) {
  trace_call(0x8014AC1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014AC1C
  c->r[0]=c->lr; // 8014AC20
  cmps(c,0,(int32_t)c->r[3],0); // 8014AC24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014AC28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014AC2C
  c->r[31]=c->r[3]|c->r[3]; // 8014AC30
  if (crb(c,2)) { goto L_8014AC44; } // 8014AC34
  cmps(c,0,(int32_t)c->r[4],0); // 8014AC38
  if (!crb(c,1)) { goto L_8014AC44; } // 8014AC3C
  c->lr=0x8014AC44u; f_802525B0(c); // 8014AC40
L_8014AC44:;
  c->r[3]=c->r[31]|c->r[31]; // 8014AC44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014AC48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014AC4C
  c->lr=c->r[0]; // 8014AC50
  c->r[1]=c->r[1]+0x00000010u; // 8014AC54
  return; // 8014AC58
}

// GetStepCurveValue__Q34nw4r3lyt27@unnamed@lyt_animation_cpp@FfPCQ44nw4r3lyt3res7StepKeyUl
void f_8014AC5C(Ctx* __restrict c) {
  trace_call(0x8014AC5Cu);
  cmpu(c,0,c->r[4],0x00000001u); // 8014AC5C
  if (crb(c,2)) { goto L_8014AC74; } // 8014AC60
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014AC64
  fcmp(c,0,c->f[1],c->f[0]); // 8014AC68
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014AC6C
  if (!crb(c,2)) { goto L_8014AC7C; } // 8014AC70
L_8014AC74:;
  c->r[3]=R16(c->r[3]+0x00000004u); // 8014AC74
  return; // 8014AC78
L_8014AC7C:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 8014AC7C
  c->r[5]=c->r[3]+c->r[0]; // 8014AC80
  {uint32_t ea=c->r[5]+0xFFFFFFF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014AC84
  fcmp(c,0,c->f[1],c->f[0]); // 8014AC88
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014AC8C
  if (!crb(c,2)) { goto L_8014AC9C; } // 8014AC90
  c->r[3]=R16(c->r[5]+0xFFFFFFFCu); // 8014AC94
  return; // 8014AC98
L_8014AC9C:;
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 8014AC9C
  c->r[5]=0u+0x00000000u; // 8014ACA0
  goto L_8014ACE0; // 8014ACA4
L_8014ACA8:;
  c->r[4]=c->r[5]+c->r[6]; // 8014ACA8
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8014ACAC
  c->r[4]=c->r[0]+c->r[4]; // 8014ACB0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFF8u; // 8014ACB4
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8014ACB8
  c->r[4]=sraw(c,c->r[4],1); // 8014ACBC
  fcmp(c,0,c->f[1],c->f[0]); // 8014ACC0
  c->r[0]=c->cr; // 8014ACC4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8014ACC8
  if (crb(c,2)) { goto L_8014ACD4; } // 8014ACCC
  c->r[6]=c->r[4]|c->r[4]; // 8014ACD0
L_8014ACD4:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014ACD4
  if (!crb(c,2)) { goto L_8014ACE0; } // 8014ACD8
  c->r[5]=c->r[4]|c->r[4]; // 8014ACDC
L_8014ACE0:;
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 8014ACE0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8014ACE4
  if (crb(c,2)) { goto L_8014ACF4; } // 8014ACE8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 8014ACEC
  if (!crb(c,2)) { IRQCHK(c); goto L_8014ACA8; } // 8014ACF0
L_8014ACF4:;
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 8014ACF4
  {uint32_t ea=c->r[2]+0xFFFFA908u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014ACF8
  {uint32_t ea=c->r[3]+c->r[4]; c->f[2]=c->ps1[2]=RF32(ea);} // 8014ACFC
  c->r[0]=0u+0x00000000u; // 8014AD00
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014AD04
  fcmp(c,0,c->f[0],c->f[1]); // 8014AD08
  if (!crb(c,0)) { goto L_8014AD20; } // 8014AD0C
  {uint32_t ea=c->r[2]+0xFFFFA90Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014AD10
  fcmp(c,0,c->f[1],c->f[0]); // 8014AD14
  if (!crb(c,0)) { goto L_8014AD20; } // 8014AD18
  c->r[0]=0u+0x00000001u; // 8014AD1C
L_8014AD20:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014AD20
  if (crb(c,2)) { goto L_8014AD34; } // 8014AD24
  c->r[3]=c->r[3]+c->r[4]; // 8014AD28
  c->r[3]=R16(c->r[3]+0x00000004u); // 8014AD2C
  return; // 8014AD30
L_8014AD34:;
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 8014AD34
  c->r[3]=c->r[3]+c->r[0]; // 8014AD38
  c->r[3]=R16(c->r[3]+0x00000004u); // 8014AD3C
  return; // 8014AD40
}

// GetHermiteCurveValue__Q34nw4r3lyt27@unnamed@lyt_animation_cpp@FfPCQ44nw4r3lyt3res10HermiteKeyUl
void f_8014AD44(Ctx* __restrict c) {
  trace_call(0x8014AD44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014AD44
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8014AD48
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8014AD4C
  cmpu(c,0,c->r[4],0x00000001u); // 8014AD50
  if (crb(c,2)) { goto L_8014AD68; } // 8014AD54
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014AD58
  fcmp(c,0,c->f[1],c->f[0]); // 8014AD5C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014AD60
  if (!crb(c,2)) { goto L_8014AD70; } // 8014AD64
L_8014AD68:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014AD68
  goto L_8014AEF0; // 8014AD6C
L_8014AD70:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8014AD70
  c->r[5]=c->r[3]+c->r[0]; // 8014AD74
  {uint32_t ea=c->r[5]+0xFFFFFFF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014AD78
  fcmp(c,0,c->f[1],c->f[0]); // 8014AD7C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014AD80
  if (!crb(c,2)) { goto L_8014AD90; } // 8014AD84
  {uint32_t ea=c->r[5]+0xFFFFFFF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014AD88
  goto L_8014AEF0; // 8014AD8C
L_8014AD90:;
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 8014AD90
  c->r[6]=0u+0x00000000u; // 8014AD94
  goto L_8014ADD8; // 8014AD98
L_8014AD9C:;
  c->r[5]=c->r[6]+c->r[7]; // 8014AD9C
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 8014ADA0
  c->r[0]=c->r[0]+c->r[5]; // 8014ADA4
  c->r[5]=sraw(c,c->r[0],1); // 8014ADA8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8014ADAC
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8014ADB0
  fcmp(c,0,c->f[1],c->f[0]); // 8014ADB4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014ADB8
  c->r[0]=c->cr; // 8014ADBC
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8014ADC0
  if (crb(c,2)) { goto L_8014ADCC; } // 8014ADC4
  c->r[7]=c->r[5]|c->r[5]; // 8014ADC8
L_8014ADCC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014ADCC
  if (!crb(c,2)) { goto L_8014ADD8; } // 8014ADD0
  c->r[6]=c->r[5]|c->r[5]; // 8014ADD4
L_8014ADD8:;
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 8014ADD8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8014ADDC
  if (crb(c,2)) { goto L_8014ADEC; } // 8014ADE0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 8014ADE4
  if (!crb(c,2)) { IRQCHK(c); goto L_8014AD9C; } // 8014ADE8
L_8014ADEC:;
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 8014ADEC
  {uint32_t ea=c->r[2]+0xFFFFA908u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014ADF0
  c->r[0]=0u+0x00000000u; // 8014ADF4
  {uint32_t ea=c->r[3]+c->r[5]; c->f[2]=c->ps1[2]=RF32(ea);} // 8014ADF8
  c->r[8]=c->r[3]+c->r[5]; // 8014ADFC
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 8014AE00
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 8014AE04
  c->r[5]=c->r[3]+c->r[5]; // 8014AE08
  fcmp(c,0,c->f[0],c->f[2]); // 8014AE0C
  if (!crb(c,0)) { goto L_8014AE24; } // 8014AE10
  {uint32_t ea=c->r[2]+0xFFFFA90Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014AE14
  fcmp(c,0,c->f[2],c->f[0]); // 8014AE18
  if (!crb(c,0)) { goto L_8014AE24; } // 8014AE1C
  c->r[0]=0u+0x00000001u; // 8014AE20
L_8014AE24:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014AE24
  if (crb(c,2)) { goto L_8014AE64; } // 8014AE28
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8014AE2C
  cmpu(c,0,c->r[7],c->r[0]); // 8014AE30
  if (!crb(c,0)) { goto L_8014AE5C; } // 8014AE34
  c->r[0]=c->r[7]+0x00000001u; // 8014AE38
  {uint32_t ea=c->r[8]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014AE3C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8014AE40
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8014AE44
  fcmp(c,0,c->f[1],c->f[0]); // 8014AE48
  if (!crb(c,2)) { goto L_8014AE5C; } // 8014AE4C
  c->r[3]=c->r[3]+c->r[0]; // 8014AE50
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014AE54
  goto L_8014AEF0; // 8014AE58
L_8014AE5C:;
  {uint32_t ea=c->r[8]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014AE5C
  goto L_8014AEF0; // 8014AE60
L_8014AE64:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014AE64
  {uint32_t ea=c->r[8]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014AE68
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[2]); // 8014AE6C
  {uint32_t ea=c->r[2]+0xFFFFA910u; c->f[6]=c->ps1[6]=RF32(ea);} // 8014AE70
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8014AE74
  {uint32_t ea=c->r[2]+0xFFFFA914u; c->f[4]=c->ps1[4]=RF32(ea);} // 8014AE78
  {uint32_t ea=c->r[2]+0xFFFFA918u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014AE7C
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[7]); // 8014AE80
  c->f[5]=c->ps1[5]=S(c->f[6]/c->f[0]); // 8014AE84
  {uint32_t ea=c->r[2]+0xFFFFA91Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014AE88
  {uint32_t ea=c->r[5]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 8014AE8C
  {uint32_t ea=c->r[8]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 8014AE90
  {uint32_t ea=c->r[5]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 8014AE94
  {uint32_t ea=c->r[8]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 8014AE98
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[2]); // 8014AE9C
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[5]); // 8014AEA0
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[12]); // 8014AEA4
  c->f[13]=c->ps1[13]=S(c->f[7]*c->f[2]); // 8014AEA8
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8014AEAC
  c->f[31]=c->ps1[31]=S(c->f[13]*c->f[5]); // 8014AEB0
  c->f[3]=c->ps1[3]=S(c->f[13]-c->f[3]); // 8014AEB4
  c->f[5]=c->ps1[5]=S(c->f[13]-c->f[12]); // 8014AEB8
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[31]); // 8014AEBC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 8014AEC0
  c->f[3]=c->ps1[3]=S(c->f[7]+c->f[3]); // 8014AEC4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014AEC8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 8014AECC
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[3]); // 8014AED0
  c->f[1]=c->ps1[1]=S(c->f[6]+c->f[1]); // 8014AED4
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[0]); // 8014AED8
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[5]); // 8014AEDC
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 8014AEE0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8014AEE4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8014AEE8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 8014AEEC
L_8014AEF0:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8014AEF0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8014AEF4
  c->r[1]=c->r[1]+0x00000020u; // 8014AEF8
  return; // 8014AEFC
}

// GetFrameSize__Q34nw4r3lyt13AnimTransformCFv
void f_8014AF00(Ctx* __restrict c) {
  trace_call(0x8014AF00u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8014AF00
  c->r[3]=R16(c->r[3]+0x00000008u); // 8014AF04
  return; // 8014AF08
}

// __ct__Q34nw4r3lyt18AnimTransformBasicFv
void f_8014AF0C(Ctx* __restrict c) {
  trace_call(0x8014AF0Cu);
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014AF0C
  c->r[4]=0u+0x802C0000u; // 8014AF10
  c->r[0]=0u+0x00000000u; // 8014AF14
  c->r[4]=c->r[4]+0x000067C0u; // 8014AF18
  W32(c->r[3]+0x00000004u,c->r[0]); // 8014AF1C
  W32(c->r[3]+0x00000008u,c->r[0]); // 8014AF20
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8014AF24
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8014AF28
  W32(c->r[3]+0x00000000u,c->r[4]); // 8014AF2C
  W32(c->r[3]+0x00000014u,c->r[0]); // 8014AF30
  W32(c->r[3]+0x00000018u,c->r[0]); // 8014AF34
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 8014AF38
  return; // 8014AF3C
}

// __dt__Q34nw4r3lyt18AnimTransformBasicFv
void f_8014AF40(Ctx* __restrict c) {
  trace_call(0x8014AF40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014AF40
  c->r[0]=c->lr; // 8014AF44
  cmps(c,0,(int32_t)c->r[3],0); // 8014AF48
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014AF4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014AF50
  c->r[31]=c->r[4]|c->r[4]; // 8014AF54
  W32(c->r[1]+0x00000008u,c->r[30]); // 8014AF58
  c->r[30]=c->r[3]|c->r[3]; // 8014AF5C
  if (crb(c,2)) { goto L_8014AFA8; } // 8014AF60
  c->r[4]=R32(c->r[3]+0x00000018u); // 8014AF64
  c->r[5]=0u+0x802C0000u; // 8014AF68
  c->r[5]=c->r[5]+0x000067C0u; // 8014AF6C
  cmps(c,0,(int32_t)c->r[4],0); // 8014AF70
  W32(c->r[3]+0x00000000u,c->r[5]); // 8014AF74
  if (crb(c,2)) { goto L_8014AF84; } // 8014AF78
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 8014AF7C
  c->lr=0x8014AF84u; f_8017C1B4(c); // 8014AF80
L_8014AF84:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 8014AF84
  cmps(c,0,(int32_t)c->r[4],0); // 8014AF88
  if (crb(c,2)) { goto L_8014AF98; } // 8014AF8C
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 8014AF90
  c->lr=0x8014AF98u; f_8017C1B4(c); // 8014AF94
L_8014AF98:;
  cmps(c,0,(int32_t)c->r[31],0); // 8014AF98
  if (!crb(c,1)) { goto L_8014AFA8; } // 8014AF9C
  c->r[3]=c->r[30]|c->r[30]; // 8014AFA0
  c->lr=0x8014AFA8u; f_802525B0(c); // 8014AFA4
L_8014AFA8:;
  c->r[3]=c->r[30]|c->r[30]; // 8014AFA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014AFAC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8014AFB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014AFB4
  c->lr=c->r[0]; // 8014AFB8
  c->r[1]=c->r[1]+0x00000010u; // 8014AFBC
  return; // 8014AFC0
}

// SetResource__Q34nw4r3lyt18AnimTransformBasicFPCQ44nw4r3lyt3res14AnimationBlockPQ34nw4r3lyt16ResourceAccessor
void f_8014AFC4(Ctx* __restrict c) {
  trace_call(0x8014AFC4u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014AFC4
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 8014AFC8
  c->r[12]=R32(c->r[12]+0x00000010u); // 8014AFCC
  c->ctr=c->r[12]; // 8014AFD0
  if (true) { dispatch(c,c->ctr); return; } // 8014AFD4
}

// SetResource__Q34nw4r3lyt18AnimTransformBasicFPCQ44nw4r3lyt3res14AnimationBlockPQ34nw4r3lyt16ResourceAccessorUs
void f_8014AFD8(Ctx* __restrict c) {
  trace_call(0x8014AFD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014AFD8
  c->r[0]=c->lr; // 8014AFDC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8014AFE0
  c->r[11]=c->r[1]+0x00000030u; // 8014AFE4
  c->lr=0x8014AFECu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014AFE8
  c->r[27]=R16(c->r[4]+0x0000000Cu); // 8014AFEC
  c->r[30]=0u+0x00000000u; // 8014AFF0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8014AFF4
  c->r[31]=c->r[3]|c->r[3]; // 8014AFF8
  cmps(c,0,(int32_t)c->r[27],0); // 8014AFFC
  c->r[24]=c->r[5]|c->r[5]; // 8014B000
  W32(c->r[3]+0x00000014u,c->r[30]); // 8014B004
  c->r[25]=c->r[6]|c->r[6]; // 8014B008
  if (crb(c,2)) { goto L_8014B0C0; } // 8014B00C
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 8014B010
  c->r[4]=rotl(c->r[27],2)&0x0003FFFCu; // 8014B014
  c->lr=0x8014B01Cu; f_8017C1A4(c); // 8014B018
  cmps(c,0,(int32_t)c->r[3],0); // 8014B01C
  if (!crb(c,2)) { goto L_8014B02C; } // 8014B020
  c->r[3]=0u+0x00000000u; // 8014B024
  goto L_8014B050; // 8014B028
L_8014B02C:;
  c->r[4]=c->r[3]|c->r[3]; // 8014B02C
  c->ctr=c->r[27]; // 8014B030
  cmpu(c,0,c->r[27],0x00000000u); // 8014B034
  if (!crb(c,1)) { goto L_8014B050; } // 8014B038
L_8014B03C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8014B03C
  if (crb(c,2)) { goto L_8014B048; } // 8014B040
  W32(c->r[4]+0x00000000u,c->r[30]); // 8014B044
L_8014B048:;
  c->r[4]=c->r[4]+0x00000004u; // 8014B048
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014B03C; } // 8014B04C
L_8014B050:;
  cmps(c,0,(int32_t)c->r[3],0); // 8014B050
  W32(c->r[31]+0x00000014u,c->r[3]); // 8014B054
  if (crb(c,2)) { goto L_8014B0C0; } // 8014B058
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8014B05C
  c->r[26]=0u+0x00000000u; // 8014B060
  c->r[27]=0u+0x00000000u; // 8014B064
  c->r[30]=0u+0x74690000u; // 8014B068
  c->r[29]=c->r[3]+0x00000014u; // 8014B06C
  c->r[28]=c->r[29]|c->r[29]; // 8014B070
  goto L_8014B0B0; // 8014B074
L_8014B078:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 8014B078
  c->r[3]=c->r[24]|c->r[24]; // 8014B07C
  c->r[0]=R32(c->r[28]+0x00000000u); // 8014B080
  c->r[4]=c->r[30]+0x00006D67u; // 8014B084
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8014B088
  c->r[6]=0u+0x00000000u; // 8014B08C
  c->r[5]=c->r[29]+c->r[0]; // 8014B090
  c->ctr=c->r[12]; // 8014B094
  if (true) { c->lr=0x8014B09Cu; dispatch(c,c->ctr); } // 8014B098
  c->r[4]=R32(c->r[31]+0x00000014u); // 8014B09C
  c->r[28]=c->r[28]+0x00000004u; // 8014B0A0
  c->r[26]=c->r[26]+0x00000001u; // 8014B0A4
  W32(c->r[4]+c->r[27],c->r[3]); // 8014B0A8
  c->r[27]=c->r[27]+0x00000004u; // 8014B0AC
L_8014B0B0:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8014B0B0
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 8014B0B4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 8014B0B8
  if (crb(c,0)) { IRQCHK(c); goto L_8014B078; } // 8014B0BC
L_8014B0C0:;
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 8014B0C0
  c->r[4]=rotl(c->r[25],4)&0x000FFFF0u; // 8014B0C4
  c->lr=0x8014B0CCu; f_8017C1A4(c); // 8014B0C8
  cmps(c,0,(int32_t)c->r[3],0); // 8014B0CC
  if (!crb(c,2)) { goto L_8014B0DC; } // 8014B0D0
  c->r[3]=0u+0x00000000u; // 8014B0D4
  goto L_8014B114; // 8014B0D8
L_8014B0DC:;
  c->r[4]=c->r[3]|c->r[3]; // 8014B0DC
  c->r[0]=0u+0x00000000u; // 8014B0E0
  c->ctr=c->r[25]; // 8014B0E4
  cmpu(c,0,c->r[25],0x00000000u); // 8014B0E8
  if (!crb(c,1)) { goto L_8014B114; } // 8014B0EC
L_8014B0F0:;
  cmps(c,0,(int32_t)c->r[4],0); // 8014B0F0
  if (crb(c,2)) { goto L_8014B10C; } // 8014B0F4
  W32(c->r[4]+0x00000000u,c->r[0]); // 8014B0F8
  W32(c->r[4]+0x00000004u,c->r[0]); // 8014B0FC
  W32(c->r[4]+0x00000008u,c->r[0]); // 8014B100
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 8014B104
  W8(c->r[4]+0x0000000Eu,c->r[0]); // 8014B108
L_8014B10C:;
  c->r[4]=c->r[4]+0x00000010u; // 8014B10C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014B0F0; } // 8014B110
L_8014B114:;
  cmps(c,0,(int32_t)c->r[3],0); // 8014B114
  W32(c->r[31]+0x00000018u,c->r[3]); // 8014B118
  if (crb(c,2)) { goto L_8014B124; } // 8014B11C
  W16(c->r[31]+0x0000001Cu,c->r[25]); // 8014B120
L_8014B124:;
  c->r[11]=c->r[1]+0x00000030u; // 8014B124
  c->lr=0x8014B12Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014B128
  c->r[0]=R32(c->r[1]+0x00000034u); // 8014B12C
  c->lr=c->r[0]; // 8014B130
  c->r[1]=c->r[1]+0x00000030u; // 8014B134
  return; // 8014B138
}

// Bind__Q34nw4r3lyt18AnimTransformBasicFPQ34nw4r3lyt4Panebb
void f_8014B13C(Ctx* __restrict c) {
  trace_call(0x8014B13Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014B13C
  c->r[0]=c->lr; // 8014B140
  W32(c->r[1]+0x00000034u,c->r[0]); // 8014B144
  c->r[11]=c->r[1]+0x00000030u; // 8014B148
  c->lr=0x8014B150u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014B14C
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 8014B150
  c->r[25]=c->r[3]|c->r[3]; // 8014B154
  c->r[26]=c->r[4]|c->r[4]; // 8014B158
  c->r[27]=c->r[5]|c->r[5]; // 8014B15C
  c->r[0]=R32(c->r[7]+0x00000010u); // 8014B160
  c->r[28]=c->r[6]|c->r[6]; // 8014B164
  c->r[31]=0u+0x00000000u; // 8014B168
  c->r[29]=0u+0x00000000u; // 8014B16C
  c->r[30]=c->r[7]+c->r[0]; // 8014B170
  goto L_8014B2D8; // 8014B174
L_8014B178:;
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 8014B178
  c->r[0]=R32(c->r[30]+c->r[0]); // 8014B17C
  c->r[4]=c->r[4]+c->r[0]; // 8014B180
  c->r[0]=R8(c->r[4]+0x00000015u); // 8014B184
  cmps(c,0,(int32_t)c->r[0],0); // 8014B188
  if (!crb(c,2)) { goto L_8014B234; } // 8014B18C
  c->r[12]=R32(c->r[26]+0x00000000u); // 8014B190
  c->r[3]=c->r[26]|c->r[26]; // 8014B194
  c->r[5]=c->r[27]|c->r[27]; // 8014B198
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8014B19C
  c->ctr=c->r[12]; // 8014B1A0
  if (true) { c->lr=0x8014B1A8u; dispatch(c,c->ctr); } // 8014B1A4
  cmps(c,0,(int32_t)c->r[3],0); // 8014B1A8
  if (crb(c,2)) { goto L_8014B2D4; } // 8014B1AC
  cmps(c,0,(int32_t)c->r[31],0); // 8014B1B0
  if (!crb(c,2)) { goto L_8014B1BC; } // 8014B1B4
  c->r[31]=R32(c->r[25]+0x00000018u); // 8014B1B8
L_8014B1BC:;
  c->r[0]=R16(c->r[25]+0x0000001Cu); // 8014B1BC
  c->r[4]=R32(c->r[25]+0x00000018u); // 8014B1C0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8014B1C4
  c->r[4]=c->r[4]+c->r[0]; // 8014B1C8
  c->r[0]=c->r[4]+0x0000000Fu; // 8014B1CC
  c->r[0]=c->r[0]-c->r[31]; // 8014B1D0
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 8014B1D4
  c->ctr=c->r[0]; // 8014B1D8
  cmpu(c,0,c->r[31],c->r[4]); // 8014B1DC
  if (!crb(c,0)) { goto L_8014B1FC; } // 8014B1E0
L_8014B1E4:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8014B1E4
  cmps(c,0,(int32_t)c->r[0],0); // 8014B1E8
  if (!crb(c,2)) { goto L_8014B1F4; } // 8014B1EC
  goto L_8014B200; // 8014B1F0
L_8014B1F4:;
  c->r[31]=c->r[31]+0x00000010u; // 8014B1F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014B1E4; } // 8014B1F8
L_8014B1FC:;
  c->r[31]=0u+0x00000000u; // 8014B1FC
L_8014B200:;
  cmps(c,0,(int32_t)c->r[31],0); // 8014B200
  if (!crb(c,2)) { goto L_8014B210; } // 8014B204
  c->r[31]=0u+0x00000000u; // 8014B208
  goto L_8014B228; // 8014B20C
L_8014B210:;
  W32(c->r[31]+0x00000008u,c->r[25]); // 8014B210
  c->r[4]=c->r[31]|c->r[31]; // 8014B214
  W16(c->r[31]+0x0000000Cu,c->r[29]); // 8014B218
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 8014B21C
  c->lr=0x8014B224u; f_80142134(c); // 8014B220
  c->r[31]=c->r[31]+0x00000010u; // 8014B224
L_8014B228:;
  cmps(c,0,(int32_t)c->r[31],0); // 8014B228
  if (crb(c,2)) { goto L_8014B2EC; } // 8014B22C
  goto L_8014B2D4; // 8014B230
L_8014B234:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 8014B234
  c->r[3]=c->r[26]|c->r[26]; // 8014B238
  c->r[5]=c->r[27]|c->r[27]; // 8014B23C
  c->r[12]=R32(c->r[12]+0x00000040u); // 8014B240
  c->ctr=c->r[12]; // 8014B244
  if (true) { c->lr=0x8014B24Cu; dispatch(c,c->ctr); } // 8014B248
  cmps(c,0,(int32_t)c->r[3],0); // 8014B24C
  if (crb(c,2)) { goto L_8014B2D4; } // 8014B250
  cmps(c,0,(int32_t)c->r[31],0); // 8014B254
  if (!crb(c,2)) { goto L_8014B260; } // 8014B258
  c->r[31]=R32(c->r[25]+0x00000018u); // 8014B25C
L_8014B260:;
  c->r[0]=R16(c->r[25]+0x0000001Cu); // 8014B260
  c->r[4]=R32(c->r[25]+0x00000018u); // 8014B264
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8014B268
  c->r[4]=c->r[4]+c->r[0]; // 8014B26C
  c->r[0]=c->r[4]+0x0000000Fu; // 8014B270
  c->r[0]=c->r[0]-c->r[31]; // 8014B274
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 8014B278
  c->ctr=c->r[0]; // 8014B27C
  cmpu(c,0,c->r[31],c->r[4]); // 8014B280
  if (!crb(c,0)) { goto L_8014B2A0; } // 8014B284
L_8014B288:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8014B288
  cmps(c,0,(int32_t)c->r[0],0); // 8014B28C
  if (!crb(c,2)) { goto L_8014B298; } // 8014B290
  goto L_8014B2A4; // 8014B294
L_8014B298:;
  c->r[31]=c->r[31]+0x00000010u; // 8014B298
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014B288; } // 8014B29C
L_8014B2A0:;
  c->r[31]=0u+0x00000000u; // 8014B2A0
L_8014B2A4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8014B2A4
  if (!crb(c,2)) { goto L_8014B2B4; } // 8014B2A8
  c->r[31]=0u+0x00000000u; // 8014B2AC
  goto L_8014B2CC; // 8014B2B0
L_8014B2B4:;
  W32(c->r[31]+0x00000008u,c->r[25]); // 8014B2B4
  c->r[4]=c->r[31]|c->r[31]; // 8014B2B8
  W16(c->r[31]+0x0000000Cu,c->r[29]); // 8014B2BC
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 8014B2C0
  c->lr=0x8014B2C8u; f_8014A884(c); // 8014B2C4
  c->r[31]=c->r[31]+0x00000010u; // 8014B2C8
L_8014B2CC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8014B2CC
  if (crb(c,2)) { goto L_8014B2EC; } // 8014B2D0
L_8014B2D4:;
  c->r[29]=c->r[29]+0x00000001u; // 8014B2D4
L_8014B2D8:;
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 8014B2D8
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 8014B2DC
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 8014B2E0
  cmpu(c,0,c->r[3],c->r[0]); // 8014B2E4
  if (crb(c,0)) { IRQCHK(c); goto L_8014B178; } // 8014B2E8
L_8014B2EC:;
  c->r[11]=c->r[1]+0x00000030u; // 8014B2EC
  c->lr=0x8014B2F4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014B2F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8014B2F4
  c->lr=c->r[0]; // 8014B2F8
  c->r[1]=c->r[1]+0x00000030u; // 8014B2FC
  return; // 8014B300
}

// Bind__Q34nw4r3lyt18AnimTransformBasicFPQ34nw4r3lyt8Materialb
void f_8014B304(Ctx* __restrict c) {
  trace_call(0x8014B304u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014B304
  c->r[0]=c->lr; // 8014B308
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014B30C
  c->r[11]=c->r[1]+0x00000020u; // 8014B310
  c->lr=0x8014B318u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014B314
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 8014B318
  c->r[26]=c->r[3]|c->r[3]; // 8014B31C
  c->r[27]=c->r[4]|c->r[4]; // 8014B320
  c->r[28]=c->r[5]|c->r[5]; // 8014B324
  c->r[0]=R32(c->r[6]+0x00000010u); // 8014B328
  c->r[31]=0u+0x00000000u; // 8014B32C
  c->r[29]=0u+0x00000000u; // 8014B330
  c->r[30]=c->r[6]+c->r[0]; // 8014B334
  goto L_8014B3EC; // 8014B338
L_8014B33C:;
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 8014B33C
  c->r[0]=R32(c->r[30]+c->r[0]); // 8014B340
  c->r[4]=c->r[4]+c->r[0]; // 8014B344
  c->r[0]=R8(c->r[4]+0x00000015u); // 8014B348
  cmpu(c,0,c->r[0],0x00000001u); // 8014B34C
  if (!crb(c,2)) { goto L_8014B3E8; } // 8014B350
  c->r[3]=c->r[27]+0x00000044u; // 8014B354
  c->lr=0x8014B35Cu; f_8014C720(c); // 8014B358
  cmps(c,0,(int32_t)c->r[3],0); // 8014B35C
  if (crb(c,2)) { goto L_8014B3E8; } // 8014B360
  cmps(c,0,(int32_t)c->r[31],0); // 8014B364
  if (!crb(c,2)) { goto L_8014B370; } // 8014B368
  c->r[31]=R32(c->r[26]+0x00000018u); // 8014B36C
L_8014B370:;
  c->r[0]=R16(c->r[26]+0x0000001Cu); // 8014B370
  c->r[3]=R32(c->r[26]+0x00000018u); // 8014B374
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8014B378
  c->r[3]=c->r[3]+c->r[0]; // 8014B37C
  c->r[0]=c->r[3]+0x0000000Fu; // 8014B380
  c->r[0]=c->r[0]-c->r[31]; // 8014B384
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 8014B388
  c->ctr=c->r[0]; // 8014B38C
  cmpu(c,0,c->r[31],c->r[3]); // 8014B390
  if (!crb(c,0)) { goto L_8014B3B0; } // 8014B394
L_8014B398:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8014B398
  cmps(c,0,(int32_t)c->r[0],0); // 8014B39C
  if (!crb(c,2)) { goto L_8014B3A8; } // 8014B3A0
  goto L_8014B3B4; // 8014B3A4
L_8014B3A8:;
  c->r[31]=c->r[31]+0x00000010u; // 8014B3A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014B398; } // 8014B3AC
L_8014B3B0:;
  c->r[31]=0u+0x00000000u; // 8014B3B0
L_8014B3B4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8014B3B4
  if (!crb(c,2)) { goto L_8014B3C4; } // 8014B3B8
  c->r[31]=0u+0x00000000u; // 8014B3BC
  goto L_8014B3E0; // 8014B3C0
L_8014B3C4:;
  W32(c->r[31]+0x00000008u,c->r[26]); // 8014B3C4
  c->r[3]=c->r[27]|c->r[27]; // 8014B3C8
  c->r[4]=c->r[31]|c->r[31]; // 8014B3CC
  W16(c->r[31]+0x0000000Cu,c->r[29]); // 8014B3D0
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 8014B3D4
  c->lr=0x8014B3DCu; f_8014A884(c); // 8014B3D8
  c->r[31]=c->r[31]+0x00000010u; // 8014B3DC
L_8014B3E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8014B3E0
  if (crb(c,2)) { goto L_8014B400; } // 8014B3E4
L_8014B3E8:;
  c->r[29]=c->r[29]+0x00000001u; // 8014B3E8
L_8014B3EC:;
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 8014B3EC
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 8014B3F0
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 8014B3F4
  cmpu(c,0,c->r[3],c->r[0]); // 8014B3F8
  if (crb(c,0)) { IRQCHK(c); goto L_8014B33C; } // 8014B3FC
L_8014B400:;
  c->r[11]=c->r[1]+0x00000020u; // 8014B400
  c->lr=0x8014B408u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014B404
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014B408
  c->lr=c->r[0]; // 8014B40C
  c->r[1]=c->r[1]+0x00000020u; // 8014B410
  return; // 8014B414
}

// Animate__Q34nw4r3lyt18AnimTransformBasicFUlPQ34nw4r3lyt4Pane
void f_8014B418(Ctx* __restrict c) {
  trace_call(0x8014B418u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014B418
  c->r[0]=c->lr; // 8014B41C
  W32(c->r[1]+0x00000064u,c->r[0]); // 8014B420
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8014B424
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8014B428
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 8014B42C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 8014B430
  c->r[11]=c->r[1]+0x00000040u; // 8014B434
  c->lr=0x8014B43Cu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014B438
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 8014B43C
  c->r[31]=0u+0x524C0000u; // 8014B440
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8014B444
  {uint32_t ea=c->r[2]+0xFFFFA924u; c->f[31]=c->ps1[31]=RF32(ea);} // 8014B448
  c->r[0]=R32(c->r[6]+0x00000010u); // 8014B44C
  c->r[22]=c->r[3]|c->r[3]; // 8014B450
  c->r[23]=c->r[5]|c->r[5]; // 8014B454
  c->r[30]=c->r[31]+0x00005643u; // 8014B458
  c->r[0]=c->r[6]+c->r[0]; // 8014B45C
  c->r[24]=0u+0x00000000u; // 8014B460
  c->r[0]=R32(c->r[4]+c->r[0]); // 8014B464
  c->r[28]=c->r[6]+c->r[0]; // 8014B468
  c->r[26]=c->r[28]+0x00000018u; // 8014B46C
  goto L_8014B5D0; // 8014B470
L_8014B474:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 8014B474
  c->r[3]=R32(c->r[28]+c->r[0]); // 8014B478
  c->r[27]=c->r[28]+c->r[0]; // 8014B47C
  c->r[25]=c->r[27]+0x00000008u; // 8014B480
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[30]); // 8014B484
  if (crb(c,2)) { goto L_8014B55C; } // 8014B488
  if (!crb(c,0)) { goto L_8014B4A0; } // 8014B48C
  c->r[0]=c->r[31]+0x00005041u; // 8014B490
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8014B494
  if (crb(c,2)) { goto L_8014B4B0; } // 8014B498
  goto L_8014B5C8; // 8014B49C
L_8014B4A0:;
  c->r[0]=c->r[31]+0x00005649u; // 8014B4A0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8014B4A4
  if (crb(c,2)) { goto L_8014B500; } // 8014B4A8
  goto L_8014B5C8; // 8014B4AC
L_8014B4B0:;
  {uint32_t ea=c->r[22]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014B4B0
  c->r[29]=0u+0x00000000u; // 8014B4B4
  goto L_8014B4F0; // 8014B4B8
L_8014B4BC:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 8014B4BC
  c->f[1]=c->f[30]; // 8014B4C0
  c->r[21]=c->r[27]+c->r[0]; // 8014B4C4
  c->r[0]=R32(c->r[21]+0x00000008u); // 8014B4C8
  c->r[4]=R16(c->r[21]+0x00000004u); // 8014B4CC
  c->r[3]=c->r[21]+c->r[0]; // 8014B4D0
  c->lr=0x8014B4D8u; f_8014AD44(c); // 8014B4D4
  c->r[0]=R8(c->r[21]+0x00000001u); // 8014B4D8
  c->r[25]=c->r[25]+0x00000004u; // 8014B4DC
  c->r[29]=c->r[29]+0x00000001u; // 8014B4E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8014B4E4
  c->r[3]=c->r[23]+c->r[0]; // 8014B4E8
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 8014B4EC
L_8014B4F0:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8014B4F0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8014B4F4
  if (crb(c,0)) { IRQCHK(c); goto L_8014B4BC; } // 8014B4F8
  goto L_8014B5C8; // 8014B4FC
L_8014B500:;
  {uint32_t ea=c->r[22]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014B500
  c->r[29]=0u+0x00000000u; // 8014B504
  goto L_8014B54C; // 8014B508
L_8014B50C:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 8014B50C
  c->f[1]=c->f[30]; // 8014B510
  c->r[3]=c->r[27]+c->r[0]; // 8014B514
  c->r[0]=R32(c->r[3]+0x00000008u); // 8014B518
  c->r[4]=R16(c->r[3]+0x00000004u); // 8014B51C
  c->r[3]=c->r[3]+c->r[0]; // 8014B520
  c->lr=0x8014B528u; f_8014AC5C(c); // 8014B524
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B528
  c->r[0]=R8(c->r[23]+0x000000BBu); // 8014B52C
  c->r[3]=0u-c->r[4]; // 8014B530
  c->r[25]=c->r[25]+0x00000004u; // 8014B534
  c->r[3]=c->r[3]|c->r[4]; // 8014B538
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 8014B53C
  c->r[0]=(rotl(c->r[3],1)&0x00000001u)|(c->r[0]&~0x00000001u); // 8014B540
  c->r[29]=c->r[29]+0x00000001u; // 8014B544
  W8(c->r[23]+0x000000BBu,c->r[0]); // 8014B548
L_8014B54C:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8014B54C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8014B550
  if (crb(c,0)) { IRQCHK(c); goto L_8014B50C; } // 8014B554
  goto L_8014B5C8; // 8014B558
L_8014B55C:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8014B55C
  c->r[29]=0u+0x00000000u; // 8014B560
  {uint32_t ea=c->r[22]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014B564
  cmps(c,0,(int32_t)c->r[0],0); // 8014B568
  if (!crb(c,1)) { goto L_8014B5C8; } // 8014B56C
  goto L_8014B5BC; // 8014B570
L_8014B574:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 8014B574
  c->f[1]=c->f[30]; // 8014B578
  c->r[21]=c->r[27]+c->r[0]; // 8014B57C
  c->r[0]=R32(c->r[21]+0x00000008u); // 8014B580
  c->r[4]=R16(c->r[21]+0x00000004u); // 8014B584
  c->r[3]=c->r[21]+c->r[0]; // 8014B588
  c->lr=0x8014B590u; f_8014AD44(c); // 8014B58C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[31]); // 8014B590
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,2);} // 8014B594
  c->r[3]=c->r[23]|c->r[23]; // 8014B598
  c->r[12]=R32(c->r[23]+0x00000000u); // 8014B59C
  c->r[5]=R8(c->r[1]+0x00000008u); // 8014B5A0
  c->r[12]=R32(c->r[12]+0x00000030u); // 8014B5A4
  c->r[4]=R8(c->r[21]+0x00000001u); // 8014B5A8
  c->ctr=c->r[12]; // 8014B5AC
  if (true) { c->lr=0x8014B5B4u; dispatch(c,c->ctr); } // 8014B5B0
  c->r[25]=c->r[25]+0x00000004u; // 8014B5B4
  c->r[29]=c->r[29]+0x00000001u; // 8014B5B8
L_8014B5BC:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8014B5BC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8014B5C0
  if (crb(c,0)) { IRQCHK(c); goto L_8014B574; } // 8014B5C4
L_8014B5C8:;
  c->r[26]=c->r[26]+0x00000004u; // 8014B5C8
  c->r[24]=c->r[24]+0x00000001u; // 8014B5CC
L_8014B5D0:;
  c->r[0]=R8(c->r[28]+0x00000014u); // 8014B5D0
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 8014B5D4
  if (crb(c,0)) { IRQCHK(c); goto L_8014B474; } // 8014B5D8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8014B5DC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8014B5E0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 8014B5E4
  c->r[11]=c->r[1]+0x00000040u; // 8014B5E8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8014B5EC
  c->lr=0x8014B5F4u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014B5F0
  c->r[0]=R32(c->r[1]+0x00000064u); // 8014B5F4
  c->lr=c->r[0]; // 8014B5F8
  c->r[1]=c->r[1]+0x00000060u; // 8014B5FC
  return; // 8014B600
}

// Animate__Q34nw4r3lyt18AnimTransformBasicFUlPQ34nw4r3lyt8Material
void f_8014B604(Ctx* __restrict c) {
  trace_call(0x8014B604u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014B604
  c->r[0]=c->lr; // 8014B608
  W32(c->r[1]+0x00000084u,c->r[0]); // 8014B60C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 8014B610
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 8014B614
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 8014B618
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 8014B61C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 8014B620
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 8014B624
  c->r[11]=c->r[1]+0x00000050u; // 8014B628
  c->lr=0x8014B630u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014B62C
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 8014B630
  c->r[31]=0u+0x524C0000u; // 8014B634
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8014B638
  {uint32_t ea=c->r[2]+0xFFFFA924u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014B63C
  c->r[0]=R32(c->r[6]+0x00000010u); // 8014B640
  c->r[20]=c->r[3]|c->r[3]; // 8014B644
  c->r[21]=c->r[5]|c->r[5]; // 8014B648
  c->r[30]=c->r[31]+0x00005450u; // 8014B64C
  c->r[0]=c->r[6]+c->r[0]; // 8014B650
  c->r[22]=0u+0x00000000u; // 8014B654
  c->r[0]=R32(c->r[4]+c->r[0]); // 8014B658
  c->r[28]=c->r[6]+c->r[0]; // 8014B65C
  c->r[25]=c->r[28]+0x00000018u; // 8014B660
  goto L_8014B8C4; // 8014B664
L_8014B668:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 8014B668
  c->r[3]=R32(c->r[28]+c->r[0]); // 8014B66C
  c->r[27]=c->r[28]+c->r[0]; // 8014B670
  c->r[24]=c->r[27]+0x00000008u; // 8014B674
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[30]); // 8014B678
  if (crb(c,2)) { goto L_8014B7B8; } // 8014B67C
  if (!crb(c,0)) { goto L_8014B6A4; } // 8014B680
  c->r[0]=c->r[31]+0x00004D43u; // 8014B684
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8014B688
  if (crb(c,2)) { goto L_8014B6B4; } // 8014B68C
  if (!crb(c,0)) { goto L_8014B8BC; } // 8014B690
  c->r[0]=c->r[31]+0x0000494Du; // 8014B694
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8014B698
  if (crb(c,2)) { goto L_8014B848; } // 8014B69C
  goto L_8014B8BC; // 8014B6A0
L_8014B6A4:;
  c->r[0]=c->r[31]+0x00005453u; // 8014B6A4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8014B6A8
  if (crb(c,2)) { goto L_8014B740; } // 8014B6AC
  goto L_8014B8BC; // 8014B6B0
L_8014B6B4:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8014B6B4
  c->r[19]=0u+0x00000000u; // 8014B6B8
  {uint32_t ea=c->r[20]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 8014B6BC
  cmps(c,0,(int32_t)c->r[0],0); // 8014B6C0
  if (!crb(c,1)) { goto L_8014B8BC; } // 8014B6C4
  goto L_8014B730; // 8014B6C8
L_8014B6CC:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 8014B6CC
  c->f[1]=c->f[31]; // 8014B6D0
  c->r[23]=c->r[27]+c->r[0]; // 8014B6D4
  c->r[0]=R32(c->r[23]+0x00000008u); // 8014B6D8
  c->r[4]=R16(c->r[23]+0x00000004u); // 8014B6DC
  c->r[3]=c->r[23]+c->r[0]; // 8014B6E0
  c->lr=0x8014B6E8u; f_8014AD44(c); // 8014B6E4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[30]); // 8014B6E8
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,5);} // 8014B6EC
  c->r[6]=0u+0xFFFFFC00u; // 8014B6F0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 8014B6F4
  cmps(c,0,(int32_t)c->r[0],-1024); // 8014B6F8
  if (crb(c,0)) { goto L_8014B704; } // 8014B6FC
  c->r[6]=c->r[0]|c->r[0]; // 8014B700
L_8014B704:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 8014B704
  c->r[4]=R8(c->r[23]+0x00000001u); // 8014B708
  cmps(c,0,(int32_t)c->r[0],1023); // 8014B70C
  c->r[3]=c->r[21]|c->r[21]; // 8014B710
  c->r[5]=0u+0x000003FFu; // 8014B714
  if (crb(c,1)) { goto L_8014B720; } // 8014B718
  c->r[5]=c->r[6]|c->r[6]; // 8014B71C
L_8014B720:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 8014B720
  c->lr=0x8014B728u; f_80149750(c); // 8014B724
  c->r[24]=c->r[24]+0x00000004u; // 8014B728
  c->r[19]=c->r[19]+0x00000001u; // 8014B72C
L_8014B730:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8014B730
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[0]); // 8014B734
  if (crb(c,0)) { IRQCHK(c); goto L_8014B6CC; } // 8014B738
  goto L_8014B8BC; // 8014B73C
L_8014B740:;
  {uint32_t ea=c->r[20]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 8014B740
  c->r[29]=0u+0x00000000u; // 8014B744
  goto L_8014B7A8; // 8014B748
L_8014B74C:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 8014B74C
  c->r[0]=R32(c->r[21]+0x00000038u); // 8014B750
  c->r[23]=c->r[27]+c->r[3]; // 8014B754
  c->r[3]=R8(c->r[27]+c->r[3]); // 8014B758
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 8014B75C
  cmpu(c,0,c->r[3],c->r[0]); // 8014B760
  if (!crb(c,0)) { goto L_8014B7A0; } // 8014B764
  c->r[0]=R32(c->r[23]+0x00000008u); // 8014B768
  c->f[1]=c->f[29]; // 8014B76C
  c->r[4]=R16(c->r[23]+0x00000004u); // 8014B770
  c->r[3]=c->r[23]+c->r[0]; // 8014B774
  c->lr=0x8014B77Cu; f_8014AD44(c); // 8014B778
  c->f[31]=c->f[1]; // 8014B77C
  c->r[19]=R8(c->r[23]+0x00000001u); // 8014B780
  c->r[23]=R8(c->r[23]+0x00000000u); // 8014B784
  c->r[3]=c->r[21]|c->r[21]; // 8014B788
  c->lr=0x8014B790u; f_8014919C(c); // 8014B78C
  c->r[4]=(uint32_t)((int32_t)c->r[23]*(int32_t)20); // 8014B790
  c->r[0]=rotl(c->r[19],2)&0xFFFFFFFCu; // 8014B794
  c->r[3]=c->r[3]+c->r[4]; // 8014B798
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 8014B79C
L_8014B7A0:;
  c->r[24]=c->r[24]+0x00000004u; // 8014B7A0
  c->r[29]=c->r[29]+0x00000001u; // 8014B7A4
L_8014B7A8:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8014B7A8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8014B7AC
  if (crb(c,0)) { IRQCHK(c); goto L_8014B74C; } // 8014B7B0
  goto L_8014B8BC; // 8014B7B4
L_8014B7B8:;
  c->r[23]=R32(c->r[20]+0x00000014u); // 8014B7B8
  cmps(c,0,(int32_t)c->r[23],0); // 8014B7BC
  if (crb(c,2)) { goto L_8014B8BC; } // 8014B7C0
  {uint32_t ea=c->r[20]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 8014B7C4
  c->r[29]=0u+0x00000000u; // 8014B7C8
  goto L_8014B838; // 8014B7CC
L_8014B7D0:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 8014B7D0
  c->r[0]=R32(c->r[21]+0x0000003Cu); // 8014B7D4
  c->r[26]=c->r[27]+c->r[3]; // 8014B7D8
  c->r[3]=R8(c->r[27]+c->r[3]); // 8014B7DC
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 8014B7E0
  cmpu(c,0,c->r[3],c->r[0]); // 8014B7E4
  if (!crb(c,0)) { goto L_8014B830; } // 8014B7E8
  c->r[0]=R32(c->r[26]+0x00000008u); // 8014B7EC
  c->f[1]=c->f[29]; // 8014B7F0
  c->r[4]=R16(c->r[26]+0x00000004u); // 8014B7F4
  c->r[3]=c->r[26]+c->r[0]; // 8014B7F8
  c->lr=0x8014B800u; f_8014AC5C(c); // 8014B7FC
  c->r[19]=rotl(c->r[3],2)&0x0003FFFCu; // 8014B800
  c->r[0]=R32(c->r[23]+c->r[19]); // 8014B804
  cmps(c,0,(int32_t)c->r[0],0); // 8014B808
  if (crb(c,2)) { goto L_8014B830; } // 8014B80C
  c->r[26]=R8(c->r[26]+0x00000000u); // 8014B810
  c->r[3]=c->r[21]|c->r[21]; // 8014B814
  c->lr=0x8014B81Cu; f_80149194(c); // 8014B818
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)28); // 8014B81C
  c->r[4]=R32(c->r[23]+c->r[19]); // 8014B820
  c->r[5]=0u+0x00000000u; // 8014B824
  c->r[3]=c->r[3]+c->r[0]; // 8014B828
  c->lr=0x8014B830u; f_8014AAD8(c); // 8014B82C
L_8014B830:;
  c->r[24]=c->r[24]+0x00000004u; // 8014B830
  c->r[29]=c->r[29]+0x00000001u; // 8014B834
L_8014B838:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8014B838
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8014B83C
  if (crb(c,0)) { IRQCHK(c); goto L_8014B7D0; } // 8014B840
  goto L_8014B8BC; // 8014B844
L_8014B848:;
  {uint32_t ea=c->r[20]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 8014B848
  c->r[29]=0u+0x00000000u; // 8014B84C
  goto L_8014B8B0; // 8014B850
L_8014B854:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 8014B854
  c->r[0]=R32(c->r[21]+0x00000038u); // 8014B858
  c->r[23]=c->r[27]+c->r[3]; // 8014B85C
  c->r[3]=R8(c->r[27]+c->r[3]); // 8014B860
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 8014B864
  cmpu(c,0,c->r[3],c->r[0]); // 8014B868
  if (!crb(c,0)) { goto L_8014B8A8; } // 8014B86C
  c->r[0]=R32(c->r[23]+0x00000008u); // 8014B870
  c->f[1]=c->f[29]; // 8014B874
  c->r[4]=R16(c->r[23]+0x00000004u); // 8014B878
  c->r[3]=c->r[23]+c->r[0]; // 8014B87C
  c->lr=0x8014B884u; f_8014AD44(c); // 8014B880
  c->f[31]=c->f[1]; // 8014B884
  c->r[19]=R8(c->r[23]+0x00000001u); // 8014B888
  c->r[23]=R8(c->r[23]+0x00000000u); // 8014B88C
  c->r[3]=c->r[21]|c->r[21]; // 8014B890
  c->lr=0x8014B898u; f_80149358(c); // 8014B894
  c->r[4]=(uint32_t)((int32_t)c->r[23]*(int32_t)20); // 8014B898
  c->r[0]=rotl(c->r[19],2)&0xFFFFFFFCu; // 8014B89C
  c->r[3]=c->r[3]+c->r[4]; // 8014B8A0
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 8014B8A4
L_8014B8A8:;
  c->r[24]=c->r[24]+0x00000004u; // 8014B8A8
  c->r[29]=c->r[29]+0x00000001u; // 8014B8AC
L_8014B8B0:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 8014B8B0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8014B8B4
  if (crb(c,0)) { IRQCHK(c); goto L_8014B854; } // 8014B8B8
L_8014B8BC:;
  c->r[25]=c->r[25]+0x00000004u; // 8014B8BC
  c->r[22]=c->r[22]+0x00000001u; // 8014B8C0
L_8014B8C4:;
  c->r[0]=R8(c->r[28]+0x00000014u); // 8014B8C4
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 8014B8C8
  if (crb(c,0)) { IRQCHK(c); goto L_8014B668; } // 8014B8CC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 8014B8D0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 8014B8D4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 8014B8D8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 8014B8DC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 8014B8E0
  c->r[11]=c->r[1]+0x00000050u; // 8014B8E4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 8014B8E8
  c->lr=0x8014B8F0u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014B8EC
  c->r[0]=R32(c->r[1]+0x00000084u); // 8014B8F0
  c->lr=c->r[0]; // 8014B8F4
  c->r[1]=c->r[1]+0x00000080u; // 8014B8F8
  return; // 8014B8FC
}

// __ct__Q34nw4r3lyt12AnimResourceFv
void f_8014B900(Ctx* __restrict c) {
  trace_call(0x8014B900u);
  c->r[0]=0u+0x00000000u; // 8014B900
  W32(c->r[3]+0x00000000u,c->r[0]); // 8014B904
  W32(c->r[3]+0x00000004u,c->r[0]); // 8014B908
  W32(c->r[3]+0x00000008u,c->r[0]); // 8014B90C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8014B910
  return; // 8014B914
}

// Set__Q34nw4r3lyt12AnimResourceFPCv
void f_8014B918(Ctx* __restrict c) {
  trace_call(0x8014B918u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014B918
  c->r[0]=c->lr; // 8014B91C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014B920
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014B924
  c->r[31]=c->r[3]|c->r[3]; // 8014B928
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014B92C
  c->r[30]=0u+0x00000000u; // 8014B930
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014B934
  c->r[29]=c->r[4]|c->r[4]; // 8014B938
  c->r[4]=0u+0x524C0000u; // 8014B93C
  W32(c->r[3]+0x00000000u,c->r[30]); // 8014B940
  c->r[4]=c->r[4]+0x0000414Eu; // 8014B944
  W32(c->r[3]+0x00000004u,c->r[30]); // 8014B948
  W32(c->r[3]+0x00000008u,c->r[30]); // 8014B94C
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 8014B950
  c->r[3]=c->r[29]|c->r[29]; // 8014B954
  c->lr=0x8014B95Cu; f_8014C74C(c); // 8014B958
  cmps(c,0,(int32_t)c->r[3],0); // 8014B95C
  if (crb(c,2)) { goto L_8014BA0C; } // 8014B960
  c->r[3]=R16(c->r[29]+0x00000006u); // 8014B964
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; cr0(c,c->r[0]); // 8014B968
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014B96C
  if (!crb(c,2)) { goto L_8014B988; } // 8014B970
  cmpu(c,0,c->r[0],0x00000008u); // 8014B974
  if (crb(c,0)) { goto L_8014B988; } // 8014B978
  cmpu(c,0,c->r[0],0x0000000Au); // 8014B97C
  if (crb(c,1)) { goto L_8014B988; } // 8014B980
  c->r[30]=0u+0x00000001u; // 8014B984
L_8014B988:;
  cmps(c,0,(int32_t)c->r[30],0); // 8014B988
  if (crb(c,2)) { goto L_8014BA0C; } // 8014B98C
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 8014B990
  c->r[3]=0u+0x70610000u; // 8014B994
  W32(c->r[31]+0x00000000u,c->r[29]); // 8014B998
  c->r[6]=c->r[3]+0x00006931u; // 8014B99C
  c->r[7]=c->r[29]+c->r[0]; // 8014B9A0
  c->r[4]=c->r[3]+0x00007431u; // 8014B9A4
  c->r[5]=c->r[3]+0x00006831u; // 8014B9A8
  c->r[8]=0u+0x00000000u; // 8014B9AC
  goto L_8014B9FC; // 8014B9B0
L_8014B9B4:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 8014B9B4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 8014B9B8
  if (crb(c,2)) { goto L_8014B9EC; } // 8014B9BC
  if (!crb(c,0)) { goto L_8014B9D0; } // 8014B9C0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8014B9C4
  if (crb(c,2)) { goto L_8014B9E4; } // 8014B9C8
  goto L_8014B9F0; // 8014B9CC
L_8014B9D0:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8014B9D0
  if (crb(c,2)) { goto L_8014B9DC; } // 8014B9D4
  goto L_8014B9F0; // 8014B9D8
L_8014B9DC:;
  W32(c->r[31]+0x00000008u,c->r[7]); // 8014B9DC
  goto L_8014B9F0; // 8014B9E0
L_8014B9E4:;
  W32(c->r[31]+0x0000000Cu,c->r[7]); // 8014B9E4
  goto L_8014B9F0; // 8014B9E8
L_8014B9EC:;
  W32(c->r[31]+0x00000004u,c->r[7]); // 8014B9EC
L_8014B9F0:;
  c->r[0]=R32(c->r[7]+0x00000004u); // 8014B9F0
  c->r[8]=c->r[8]+0x00000001u; // 8014B9F4
  c->r[7]=c->r[7]+c->r[0]; // 8014B9F8
L_8014B9FC:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8014B9FC
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 8014BA00
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 8014BA04
  if (crb(c,0)) { IRQCHK(c); goto L_8014B9B4; } // 8014BA08
L_8014BA0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014BA0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014BA10
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014BA14
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014BA18
  c->lr=c->r[0]; // 8014BA1C
  c->r[1]=c->r[1]+0x00000020u; // 8014BA20
  return; // 8014BA24
}

// GetGroupNum__Q34nw4r3lyt12AnimResourceCFv
void f_8014BA28(Ctx* __restrict c) {
  trace_call(0x8014BA28u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 8014BA28
  cmps(c,0,(int32_t)c->r[3],0); // 8014BA2C
  if (crb(c,2)) { goto L_8014BA3C; } // 8014BA30
  c->r[3]=R16(c->r[3]+0x0000000Au); // 8014BA34
  return; // 8014BA38
L_8014BA3C:;
  c->r[3]=0u+0x00000000u; // 8014BA3C
  return; // 8014BA40
}

// GetGroupArray__Q34nw4r3lyt12AnimResourceCFv
void f_8014BA44(Ctx* __restrict c) {
  trace_call(0x8014BA44u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 8014BA44
  cmps(c,0,(int32_t)c->r[3],0); // 8014BA48
  if (crb(c,2)) { goto L_8014BA5C; } // 8014BA4C
  c->r[0]=R32(c->r[3]+0x00000010u); // 8014BA50
  c->r[3]=c->r[3]+c->r[0]; // 8014BA54
  return; // 8014BA58
L_8014BA5C:;
  c->r[3]=0u+0x00000000u; // 8014BA5C
  return; // 8014BA60
}

// IsDescendingBind__Q34nw4r3lyt12AnimResourceCFv
void f_8014BA64(Ctx* __restrict c) {
  trace_call(0x8014BA64u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 8014BA64
  cmps(c,0,(int32_t)c->r[3],0); // 8014BA68
  if (crb(c,2)) { goto L_8014BA7C; } // 8014BA6C
  c->r[0]=R8(c->r[3]+0x00000018u); // 8014BA70
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 8014BA74
  return; // 8014BA78
L_8014BA7C:;
  c->r[3]=0u+0x00000000u; // 8014BA7C
  return; // 8014BA80
}

// GetAnimationShareInfoNum__Q34nw4r3lyt12AnimResourceCFv
void f_8014BA84(Ctx* __restrict c) {
  trace_call(0x8014BA84u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8014BA84
  cmps(c,0,(int32_t)c->r[3],0); // 8014BA88
  if (crb(c,2)) { goto L_8014BA98; } // 8014BA8C
  c->r[3]=R16(c->r[3]+0x0000000Cu); // 8014BA90
  return; // 8014BA94
L_8014BA98:;
  c->r[3]=0u+0x00000000u; // 8014BA98
  return; // 8014BA9C
}

// GetAnimationShareInfoArray__Q34nw4r3lyt12AnimResourceCFv
void f_8014BAA0(Ctx* __restrict c) {
  trace_call(0x8014BAA0u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8014BAA0
  cmps(c,0,(int32_t)c->r[3],0); // 8014BAA4
  if (crb(c,2)) { goto L_8014BAB8; } // 8014BAA8
  c->r[0]=R32(c->r[3]+0x00000008u); // 8014BAAC
  c->r[3]=c->r[3]+c->r[0]; // 8014BAB0
  return; // 8014BAB4
L_8014BAB8:;
  c->r[3]=0u+0x00000000u; // 8014BAB8
  return; // 8014BABC
}

// CalcAnimationNum__Q34nw4r3lyt12AnimResourceCFPQ34nw4r3lyt4Paneb
void f_8014BAC0(Ctx* __restrict c) {
  trace_call(0x8014BAC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014BAC0
  c->r[0]=c->lr; // 8014BAC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014BAC8
  c->r[11]=c->r[1]+0x00000020u; // 8014BACC
  c->lr=0x8014BAD4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014BAD0
  c->r[6]=R32(c->r[3]+0x00000004u); // 8014BAD4
  c->r[26]=c->r[3]|c->r[3]; // 8014BAD8
  c->r[27]=c->r[4]|c->r[4]; // 8014BADC
  c->r[28]=c->r[5]|c->r[5]; // 8014BAE0
  c->r[0]=R32(c->r[6]+0x00000010u); // 8014BAE4
  c->r[31]=0u+0x00000000u; // 8014BAE8
  c->r[29]=0u+0x00000000u; // 8014BAEC
  c->r[30]=c->r[6]+c->r[0]; // 8014BAF0
  goto L_8014BB68; // 8014BAF4
L_8014BAF8:;
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 8014BAF8
  c->r[0]=R32(c->r[30]+c->r[0]); // 8014BAFC
  c->r[4]=c->r[4]+c->r[0]; // 8014BB00
  c->r[0]=R8(c->r[4]+0x00000015u); // 8014BB04
  cmps(c,0,(int32_t)c->r[0],0); // 8014BB08
  if (!crb(c,2)) { goto L_8014BB38; } // 8014BB0C
  c->r[12]=R32(c->r[27]+0x00000000u); // 8014BB10
  c->r[3]=c->r[27]|c->r[27]; // 8014BB14
  c->r[5]=c->r[28]|c->r[28]; // 8014BB18
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8014BB1C
  c->ctr=c->r[12]; // 8014BB20
  if (true) { c->lr=0x8014BB28u; dispatch(c,c->ctr); } // 8014BB24
  cmps(c,0,(int32_t)c->r[3],0); // 8014BB28
  if (crb(c,2)) { goto L_8014BB64; } // 8014BB2C
  c->r[31]=c->r[31]+0x00000001u; // 8014BB30
  goto L_8014BB64; // 8014BB34
L_8014BB38:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 8014BB38
  c->r[3]=c->r[27]|c->r[27]; // 8014BB3C
  c->r[5]=c->r[28]|c->r[28]; // 8014BB40
  c->r[12]=R32(c->r[12]+0x00000040u); // 8014BB44
  c->ctr=c->r[12]; // 8014BB48
  if (true) { c->lr=0x8014BB50u; dispatch(c,c->ctr); } // 8014BB4C
  cmps(c,0,(int32_t)c->r[3],0); // 8014BB50
  if (crb(c,2)) { goto L_8014BB64; } // 8014BB54
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 8014BB58
  c->r[0]=c->r[3]+0x00000001u; // 8014BB5C
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 8014BB60
L_8014BB64:;
  c->r[29]=c->r[29]+0x00000001u; // 8014BB64
L_8014BB68:;
  c->r[4]=R32(c->r[26]+0x00000004u); // 8014BB68
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 8014BB6C
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 8014BB70
  cmpu(c,0,c->r[3],c->r[0]); // 8014BB74
  if (crb(c,0)) { IRQCHK(c); goto L_8014BAF8; } // 8014BB78
  c->r[11]=c->r[1]+0x00000020u; // 8014BB7C
  c->r[3]=c->r[31]|c->r[31]; // 8014BB80
  c->lr=0x8014BB88u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014BB84
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014BB88
  c->lr=c->r[0]; // 8014BB8C
  c->r[1]=c->r[1]+0x00000020u; // 8014BB90
  return; // 8014BB94
}

// CalcAnimationNum__Q34nw4r3lyt12AnimResourceCFPQ34nw4r3lyt5Groupb
void f_8014BB98(Ctx* __restrict c) {
  trace_call(0x8014BB98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014BB98
  c->r[0]=c->lr; // 8014BB9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014BBA0
  c->r[11]=c->r[1]+0x00000020u; // 8014BBA4
  c->lr=0x8014BBACu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014BBA8
  c->r[31]=R32(c->r[4]+0x00000010u); // 8014BBAC
  c->r[27]=c->r[3]|c->r[3]; // 8014BBB0
  c->r[28]=c->r[5]|c->r[5]; // 8014BBB4
  c->r[30]=c->r[4]+0x00000010u; // 8014BBB8
  c->r[29]=0u+0x00000000u; // 8014BBBC
  goto L_8014BBDC; // 8014BBC0
L_8014BBC4:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 8014BBC4
  c->r[3]=c->r[27]|c->r[27]; // 8014BBC8
  c->r[5]=c->r[28]|c->r[28]; // 8014BBCC
  c->lr=0x8014BBD4u; f_8014BAC0(c); // 8014BBD0
  c->r[29]=c->r[29]+c->r[3]; // 8014BBD4
  c->r[31]=R32(c->r[31]+0x00000000u); // 8014BBD8
L_8014BBDC:;
  cmpu(c,0,c->r[31],c->r[30]); // 8014BBDC
  if (!crb(c,2)) { IRQCHK(c); goto L_8014BBC4; } // 8014BBE0
  c->r[11]=c->r[1]+0x00000020u; // 8014BBE4
  c->r[3]=c->r[29]|c->r[29]; // 8014BBE8
  c->lr=0x8014BBF0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014BBEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014BBF0
  c->lr=c->r[0]; // 8014BBF4
  c->r[1]=c->r[1]+0x00000020u; // 8014BBF8
  return; // 8014BBFC
}

// Init__Q44nw4r3lyt6detail12AnimPaneTreeFv
void f_8014BC00(Ctx* __restrict c) {
  trace_call(0x8014BC00u);
  c->r[0]=0u+0x00000000u; // 8014BC00
  W16(c->r[3]+0x00000012u,c->r[0]); // 8014BC04
  W16(c->r[3]+0x00000010u,c->r[0]); // 8014BC08
  W8(c->r[3]+0x00000026u,c->r[0]); // 8014BC0C
  W16(c->r[3]+0x00000014u,c->r[0]); // 8014BC10
  W16(c->r[3]+0x00000016u,c->r[0]); // 8014BC14
  W16(c->r[3]+0x00000018u,c->r[0]); // 8014BC18
  W16(c->r[3]+0x0000001Au,c->r[0]); // 8014BC1C
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 8014BC20
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 8014BC24
  W16(c->r[3]+0x00000020u,c->r[0]); // 8014BC28
  W16(c->r[3]+0x00000022u,c->r[0]); // 8014BC2C
  W16(c->r[3]+0x00000024u,c->r[0]); // 8014BC30
  return; // 8014BC34
}

// Set__Q44nw4r3lyt6detail12AnimPaneTreeFPQ34nw4r3lyt4PaneRCQ34nw4r3lyt12AnimResource
void f_8014BC38(Ctx* __restrict c) {
  trace_call(0x8014BC38u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014BC38
  c->r[0]=c->lr; // 8014BC3C
  W32(c->r[1]+0x00000064u,c->r[0]); // 8014BC40
  c->r[11]=c->r[1]+0x00000060u; // 8014BC44
  c->lr=0x8014BC4Cu; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014BC48
  c->r[25]=R32(c->r[5]+0x00000004u); // 8014BC4C
  c->r[18]=c->r[3]|c->r[3]; // 8014BC50
  c->r[19]=c->r[4]|c->r[4]; // 8014BC54
  c->r[20]=c->r[5]|c->r[5]; // 8014BC58
  c->r[0]=R32(c->r[25]+0x00000010u); // 8014BC5C
  c->r[21]=c->r[4]+0x000000BCu; // 8014BC60
  c->r[22]=0u+0x00000000u; // 8014BC64
  c->r[28]=0u+0x00000000u; // 8014BC68
  c->r[23]=c->r[25]+c->r[0]; // 8014BC6C
  goto L_8014BCA4; // 8014BC70
L_8014BC74:;
  c->r[0]=rotl(c->r[28],2)&0x0003FFFCu; // 8014BC74
  c->r[0]=R32(c->r[23]+c->r[0]); // 8014BC78
  c->r[3]=c->r[25]+c->r[0]; // 8014BC7C
  c->r[0]=R8(c->r[3]+0x00000015u); // 8014BC80
  cmps(c,0,(int32_t)c->r[0],0); // 8014BC84
  if (!crb(c,2)) { goto L_8014BCA0; } // 8014BC88
  c->r[4]=c->r[21]|c->r[21]; // 8014BC8C
  c->lr=0x8014BC94u; f_8014C720(c); // 8014BC90
  cmps(c,0,(int32_t)c->r[3],0); // 8014BC94
  if (crb(c,2)) { goto L_8014BCA0; } // 8014BC98
  goto L_8014BCBC; // 8014BC9C
L_8014BCA0:;
  c->r[28]=c->r[28]+0x00000001u; // 8014BCA0
L_8014BCA4:;
  c->r[0]=R16(c->r[25]+0x0000000Eu); // 8014BCA4
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 8014BCA8
  cmpu(c,0,c->r[3],c->r[0]); // 8014BCAC
  if (crb(c,0)) { IRQCHK(c); goto L_8014BC74; } // 8014BCB0
  c->r[3]=0u+0x00010000u; // 8014BCB4
  c->r[28]=c->r[3]+0xFFFFFFFFu; // 8014BCB8
L_8014BCBC:;
  c->r[0]=rotl(c->r[28],0)&0x0000FFFFu; // 8014BCBC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8014BCC0
  if (crb(c,2)) { goto L_8014BCCC; } // 8014BCC4
  c->r[22]=0u+0x00000001u; // 8014BCC8
L_8014BCCC:;
  c->r[12]=R32(c->r[19]+0x00000000u); // 8014BCCC
  c->r[3]=c->r[19]|c->r[19]; // 8014BCD0
  c->r[12]=R32(c->r[12]+0x00000064u); // 8014BCD4
  c->ctr=c->r[12]; // 8014BCD8
  if (true) { c->lr=0x8014BCE0u; dispatch(c,c->ctr); } // 8014BCDC
  c->r[29]=c->r[3]|c->r[3]; // 8014BCE0
  c->r[23]=c->r[1]+0x00000008u; // 8014BCE4
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 8014BCE8
  c->r[21]=0u+0x00000000u; // 8014BCEC
  c->r[30]=0u+0x00010000u; // 8014BCF0
  goto L_8014BD88; // 8014BCF4
L_8014BCF8:;
  c->r[12]=R32(c->r[19]+0x00000000u); // 8014BCF8
  c->r[3]=c->r[19]|c->r[19]; // 8014BCFC
  c->r[4]=rotl(c->r[21],0)&0x000000FFu; // 8014BD00
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 8014BD04
  c->ctr=c->r[12]; // 8014BD08
  if (true) { c->lr=0x8014BD10u; dispatch(c,c->ctr); } // 8014BD0C
  c->r[0]=R32(c->r[25]+0x00000010u); // 8014BD10
  c->r[24]=c->r[3]+0x00000044u; // 8014BD14
  c->r[27]=0u+0x00000000u; // 8014BD18
  c->r[26]=c->r[25]+c->r[0]; // 8014BD1C
  goto L_8014BD54; // 8014BD20
L_8014BD24:;
  c->r[0]=rotl(c->r[27],2)&0x0003FFFCu; // 8014BD24
  c->r[0]=R32(c->r[26]+c->r[0]); // 8014BD28
  c->r[3]=c->r[25]+c->r[0]; // 8014BD2C
  c->r[0]=R8(c->r[3]+0x00000015u); // 8014BD30
  cmpu(c,0,c->r[0],0x00000001u); // 8014BD34
  if (!crb(c,2)) { goto L_8014BD50; } // 8014BD38
  c->r[4]=c->r[24]|c->r[24]; // 8014BD3C
  c->lr=0x8014BD44u; f_8014C720(c); // 8014BD40
  cmps(c,0,(int32_t)c->r[3],0); // 8014BD44
  if (crb(c,2)) { goto L_8014BD50; } // 8014BD48
  goto L_8014BD68; // 8014BD4C
L_8014BD50:;
  c->r[27]=c->r[27]+0x00000001u; // 8014BD50
L_8014BD54:;
  c->r[0]=R16(c->r[25]+0x0000000Eu); // 8014BD54
  c->r[3]=rotl(c->r[27],0)&0x0000FFFFu; // 8014BD58
  cmpu(c,0,c->r[3],c->r[0]); // 8014BD5C
  if (crb(c,0)) { IRQCHK(c); goto L_8014BD24; } // 8014BD60
  c->r[27]=c->r[30]+0xFFFFFFFFu; // 8014BD64
L_8014BD68:;
  c->r[0]=rotl(c->r[27],0)&0x0000FFFFu; // 8014BD68
  c->r[3]=rotl(c->r[21],1)&0x000001FEu; // 8014BD6C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8014BD70
  W16(c->r[23]+c->r[3],c->r[27]); // 8014BD74
  if (crb(c,2)) { goto L_8014BD84; } // 8014BD78
  c->r[0]=c->r[22]+0x00000001u; // 8014BD7C
  c->r[22]=rotl(c->r[0],0)&0x0000FFFFu; // 8014BD80
L_8014BD84:;
  c->r[21]=c->r[21]+0x00000001u; // 8014BD84
L_8014BD88:;
  c->r[0]=rotl(c->r[21],0)&0x000000FFu; // 8014BD88
  cmpu(c,0,c->r[0],c->r[31]); // 8014BD8C
  if (crb(c,0)) { IRQCHK(c); goto L_8014BCF8; } // 8014BD90
  cmps(c,0,(int32_t)c->r[22],0); // 8014BD94
  if (crb(c,2)) { goto L_8014BE80; } // 8014BD98
  c->r[6]=R32(c->r[20]+0x00000000u); // 8014BD9C
  cmps(c,0,(int32_t)c->r[31],0); // 8014BDA0
  c->r[5]=R32(c->r[20]+0x00000004u); // 8014BDA4
  c->r[3]=0u+0x00000000u; // 8014BDA8
  c->r[4]=R32(c->r[20]+0x00000008u); // 8014BDAC
  c->r[0]=R32(c->r[20]+0x0000000Cu); // 8014BDB0
  W32(c->r[18]+0x00000000u,c->r[6]); // 8014BDB4
  W32(c->r[18]+0x00000004u,c->r[5]); // 8014BDB8
  W32(c->r[18]+0x00000008u,c->r[4]); // 8014BDBC
  W32(c->r[18]+0x0000000Cu,c->r[0]); // 8014BDC0
  W16(c->r[18]+0x00000010u,c->r[28]); // 8014BDC4
  W8(c->r[18]+0x00000026u,c->r[29]); // 8014BDC8
  if (crb(c,2)) { goto L_8014BE7C; } // 8014BDCC
  cmpu(c,0,c->r[31],0x00000008u); // 8014BDD0
  c->r[0]=c->r[29]+0x000000F8u; // 8014BDD4
  if (!crb(c,1)) { goto L_8014BE48; } // 8014BDD8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8014BDDC
  c->r[0]=c->r[4]+0x00000007u; // 8014BDE0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8014BDE4
  c->ctr=c->r[0]; // 8014BDE8
  cmpu(c,0,c->r[4],0x00000000u); // 8014BDEC
  if (!crb(c,1)) { goto L_8014BE48; } // 8014BDF0
L_8014BDF4:;
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 8014BDF4
  c->r[5]=c->r[1]+0x00000008u; // 8014BDF8
  {uint32_t ea=c->r[5]+c->r[0]; c->r[4]=R16(ea); c->r[5]=ea;} // 8014BDFC
  c->r[6]=c->r[18]+c->r[0]; // 8014BE00
  c->r[3]=c->r[3]+0x00000008u; // 8014BE04
  W16(c->r[6]+0x00000014u,c->r[4]); // 8014BE08
  c->r[0]=R16(c->r[5]+0x00000002u); // 8014BE0C
  c->r[4]=R16(c->r[5]+0x00000004u); // 8014BE10
  W16(c->r[6]+0x00000016u,c->r[0]); // 8014BE14
  c->r[0]=R16(c->r[5]+0x00000006u); // 8014BE18
  W16(c->r[6]+0x00000018u,c->r[4]); // 8014BE1C
  c->r[4]=R16(c->r[5]+0x00000008u); // 8014BE20
  W16(c->r[6]+0x0000001Au,c->r[0]); // 8014BE24
  c->r[0]=R16(c->r[5]+0x0000000Au); // 8014BE28
  W16(c->r[6]+0x0000001Cu,c->r[4]); // 8014BE2C
  c->r[4]=R16(c->r[5]+0x0000000Cu); // 8014BE30
  W16(c->r[6]+0x0000001Eu,c->r[0]); // 8014BE34
  c->r[0]=R16(c->r[5]+0x0000000Eu); // 8014BE38
  W16(c->r[6]+0x00000020u,c->r[4]); // 8014BE3C
  W16(c->r[6]+0x00000022u,c->r[0]); // 8014BE40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014BDF4; } // 8014BE44
L_8014BE48:;
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 8014BE48
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 8014BE4C
  c->r[0]=c->r[4]-c->r[5]; // 8014BE50
  c->r[6]=c->r[1]+0x00000008u; // 8014BE54
  c->ctr=c->r[0]; // 8014BE58
  cmpu(c,0,c->r[5],c->r[4]); // 8014BE5C
  if (!crb(c,0)) { goto L_8014BE7C; } // 8014BE60
L_8014BE64:;
  c->r[4]=rotl(c->r[3],1)&0x000001FEu; // 8014BE64
  c->r[3]=c->r[3]+0x00000001u; // 8014BE68
  c->r[0]=R16(c->r[6]+c->r[4]); // 8014BE6C
  c->r[4]=c->r[18]+c->r[4]; // 8014BE70
  W16(c->r[4]+0x00000014u,c->r[0]); // 8014BE74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014BE64; } // 8014BE78
L_8014BE7C:;
  W16(c->r[18]+0x00000012u,c->r[22]); // 8014BE7C
L_8014BE80:;
  c->r[11]=c->r[1]+0x00000060u; // 8014BE80
  c->lr=0x8014BE88u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014BE84
  c->r[0]=R32(c->r[1]+0x00000064u); // 8014BE88
  c->lr=c->r[0]; // 8014BE8C
  c->r[1]=c->r[1]+0x00000060u; // 8014BE90
  return; // 8014BE94
}

// Bind__Q44nw4r3lyt6detail12AnimPaneTreeCFPQ34nw4r3lyt6LayoutPQ34nw4r3lyt4PanePQ34nw4r3lyt16ResourceAccessor
void f_8014BE98(Ctx* __restrict c) {
  trace_call(0x8014BE98u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014BE98
  c->r[0]=c->lr; // 8014BE9C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8014BEA0
  c->r[11]=c->r[1]+0x00000030u; // 8014BEA4
  c->lr=0x8014BEACu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014BEA8
  c->r[12]=R32(c->r[4]+0x00000000u); // 8014BEAC
  c->r[27]=c->r[3]|c->r[3]; // 8014BEB0
  c->r[3]=c->r[4]|c->r[4]; // 8014BEB4
  c->r[28]=c->r[5]|c->r[5]; // 8014BEB8
  c->r[12]=R32(c->r[12]+0x00000010u); // 8014BEBC
  c->r[24]=c->r[6]|c->r[6]; // 8014BEC0
  c->ctr=c->r[12]; // 8014BEC4
  if (true) { c->lr=0x8014BECCu; dispatch(c,c->ctr); } // 8014BEC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014BECC
  c->r[31]=c->r[3]|c->r[3]; // 8014BED0
  c->r[5]=c->r[24]|c->r[24]; // 8014BED4
  c->r[4]=R32(c->r[27]+0x00000004u); // 8014BED8
  c->r[12]=R32(c->r[12]+0x00000010u); // 8014BEDC
  c->r[6]=R16(c->r[27]+0x00000012u); // 8014BEE0
  c->ctr=c->r[12]; // 8014BEE4
  if (true) { c->lr=0x8014BEECu; dispatch(c,c->ctr); } // 8014BEE8
  c->r[5]=R16(c->r[27]+0x00000010u); // 8014BEEC
  c->r[30]=0u+0x00000000u; // 8014BEF0
  cmpu(c,0,c->r[5],0x0000FFFFu); // 8014BEF4
  if (crb(c,2)) { goto L_8014BF70; } // 8014BEF8
  c->r[0]=R16(c->r[31]+0x0000001Cu); // 8014BEFC
  c->r[25]=R32(c->r[31]+0x00000018u); // 8014BF00
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8014BF04
  c->r[3]=c->r[25]+c->r[0]; // 8014BF08
  c->r[0]=c->r[3]+0x0000000Fu; // 8014BF0C
  c->r[0]=c->r[0]-c->r[25]; // 8014BF10
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 8014BF14
  c->ctr=c->r[0]; // 8014BF18
  cmpu(c,0,c->r[25],c->r[3]); // 8014BF1C
  if (!crb(c,0)) { goto L_8014BF3C; } // 8014BF20
L_8014BF24:;
  c->r[0]=R32(c->r[25]+0x00000008u); // 8014BF24
  cmps(c,0,(int32_t)c->r[0],0); // 8014BF28
  if (!crb(c,2)) { goto L_8014BF34; } // 8014BF2C
  goto L_8014BF40; // 8014BF30
L_8014BF34:;
  c->r[25]=c->r[25]+0x00000010u; // 8014BF34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014BF24; } // 8014BF38
L_8014BF3C:;
  c->r[25]=0u+0x00000000u; // 8014BF3C
L_8014BF40:;
  cmps(c,0,(int32_t)c->r[25],0); // 8014BF40
  if (!crb(c,2)) { goto L_8014BF50; } // 8014BF44
  c->r[30]=0u+0x00000000u; // 8014BF48
  goto L_8014BF70; // 8014BF4C
L_8014BF50:;
  W32(c->r[25]+0x00000008u,c->r[31]); // 8014BF50
  c->r[0]=0u+0x00000001u; // 8014BF54
  c->r[3]=c->r[28]|c->r[28]; // 8014BF58
  c->r[4]=c->r[25]|c->r[25]; // 8014BF5C
  W16(c->r[25]+0x0000000Cu,c->r[5]); // 8014BF60
  W8(c->r[25]+0x0000000Eu,c->r[0]); // 8014BF64
  c->lr=0x8014BF6Cu; f_80142134(c); // 8014BF68
  c->r[30]=c->r[25]+0x00000010u; // 8014BF6C
L_8014BF70:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8014BF70
  c->r[3]=c->r[28]|c->r[28]; // 8014BF74
  c->r[12]=R32(c->r[12]+0x00000064u); // 8014BF78
  c->ctr=c->r[12]; // 8014BF7C
  if (true) { c->lr=0x8014BF84u; dispatch(c,c->ctr); } // 8014BF80
  c->r[4]=R8(c->r[27]+0x00000026u); // 8014BF84
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014BF88
  cmpu(c,0,c->r[4],c->r[0]); // 8014BF8C
  if (!crb(c,1)) { goto L_8014BF98; } // 8014BF90
  c->r[4]=c->r[3]|c->r[3]; // 8014BF94
L_8014BF98:;
  c->r[26]=rotl(c->r[4],0)&0x000000FFu; // 8014BF98
  c->r[29]=0u+0x00000000u; // 8014BF9C
  c->r[25]=0u+0x00000001u; // 8014BFA0
  goto L_8014C054; // 8014BFA4
L_8014BFA8:;
  c->r[0]=rotl(c->r[29],1)&0x000001FEu; // 8014BFA8
  c->r[24]=c->r[27]+c->r[0]; // 8014BFAC
  c->r[0]=R16(c->r[24]+0x00000014u); // 8014BFB0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8014BFB4
  if (crb(c,2)) { goto L_8014C050; } // 8014BFB8
  c->r[12]=R32(c->r[28]+0x00000000u); // 8014BFBC
  c->r[3]=c->r[28]|c->r[28]; // 8014BFC0
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 8014BFC4
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 8014BFC8
  c->ctr=c->r[12]; // 8014BFCC
  if (true) { c->lr=0x8014BFD4u; dispatch(c,c->ctr); } // 8014BFD0
  cmps(c,0,(int32_t)c->r[30],0); // 8014BFD4
  c->r[5]=R16(c->r[24]+0x00000014u); // 8014BFD8
  if (!crb(c,2)) { goto L_8014BFE4; } // 8014BFDC
  c->r[30]=R32(c->r[31]+0x00000018u); // 8014BFE0
L_8014BFE4:;
  c->r[0]=R16(c->r[31]+0x0000001Cu); // 8014BFE4
  c->r[4]=R32(c->r[31]+0x00000018u); // 8014BFE8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8014BFEC
  c->r[4]=c->r[4]+c->r[0]; // 8014BFF0
  c->r[0]=c->r[4]+0x0000000Fu; // 8014BFF4
  c->r[0]=c->r[0]-c->r[30]; // 8014BFF8
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 8014BFFC
  c->ctr=c->r[0]; // 8014C000
  cmpu(c,0,c->r[30],c->r[4]); // 8014C004
  if (!crb(c,0)) { goto L_8014C024; } // 8014C008
L_8014C00C:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 8014C00C
  cmps(c,0,(int32_t)c->r[0],0); // 8014C010
  if (!crb(c,2)) { goto L_8014C01C; } // 8014C014
  goto L_8014C028; // 8014C018
L_8014C01C:;
  c->r[30]=c->r[30]+0x00000010u; // 8014C01C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014C00C; } // 8014C020
L_8014C024:;
  c->r[30]=0u+0x00000000u; // 8014C024
L_8014C028:;
  cmps(c,0,(int32_t)c->r[30],0); // 8014C028
  if (!crb(c,2)) { goto L_8014C038; } // 8014C02C
  c->r[30]=0u+0x00000000u; // 8014C030
  goto L_8014C050; // 8014C034
L_8014C038:;
  W32(c->r[30]+0x00000008u,c->r[31]); // 8014C038
  c->r[4]=c->r[30]|c->r[30]; // 8014C03C
  W16(c->r[30]+0x0000000Cu,c->r[5]); // 8014C040
  W8(c->r[30]+0x0000000Eu,c->r[25]); // 8014C044
  c->lr=0x8014C04Cu; f_8014A884(c); // 8014C048
  c->r[30]=c->r[30]+0x00000010u; // 8014C04C
L_8014C050:;
  c->r[29]=c->r[29]+0x00000001u; // 8014C050
L_8014C054:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 8014C054
  cmpu(c,0,c->r[0],c->r[26]); // 8014C058
  if (crb(c,0)) { IRQCHK(c); goto L_8014BFA8; } // 8014C05C
  c->r[11]=c->r[1]+0x00000030u; // 8014C060
  c->r[3]=c->r[31]|c->r[31]; // 8014C064
  c->lr=0x8014C06Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014C068
  c->r[0]=R32(c->r[1]+0x00000034u); // 8014C06C
  c->lr=c->r[0]; // 8014C070
  c->r[1]=c->r[1]+0x00000030u; // 8014C074
  return; // 8014C078
}

// FindAnimationLink__Q34nw4r3lyt6detailFPQ34nw4r2ut38LinkList<Q34nw4r3lyt13AnimationLink,0>PQ34nw4r3lyt13AnimTransform
void f_8014C07C(Ctx* __restrict c) {
  trace_call(0x8014C07Cu);
  c->r[5]=R32(c->r[3]+0x00000004u); // 8014C07C
  c->r[0]=c->r[3]+0x00000004u; // 8014C080
  goto L_8014C0A0; // 8014C084
L_8014C088:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 8014C088
  cmpu(c,0,c->r[4],c->r[3]); // 8014C08C
  if (!crb(c,2)) { goto L_8014C09C; } // 8014C090
  c->r[3]=c->r[5]|c->r[5]; // 8014C094
  return; // 8014C098
L_8014C09C:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 8014C09C
L_8014C0A0:;
  cmpu(c,0,c->r[5],c->r[0]); // 8014C0A0
  if (!crb(c,2)) { IRQCHK(c); goto L_8014C088; } // 8014C0A4
  c->r[3]=0u+0x00000000u; // 8014C0A8
  return; // 8014C0AC
}

// FindAnimationLink__Q34nw4r3lyt6detailFPQ34nw4r2ut38LinkList<Q34nw4r3lyt13AnimationLink,0>RCQ34nw4r3lyt12AnimResource
void f_8014C0B0(Ctx* __restrict c) {
  trace_call(0x8014C0B0u);
  c->r[5]=R32(c->r[3]+0x00000004u); // 8014C0B0
  c->r[0]=c->r[3]+0x00000004u; // 8014C0B4
  goto L_8014C0DC; // 8014C0B8
L_8014C0BC:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 8014C0BC
  c->r[6]=R32(c->r[4]+0x00000004u); // 8014C0C0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8014C0C4
  cmpu(c,0,c->r[6],c->r[3]); // 8014C0C8
  if (!crb(c,2)) { goto L_8014C0D8; } // 8014C0CC
  c->r[3]=c->r[5]|c->r[5]; // 8014C0D0
  return; // 8014C0D4
L_8014C0D8:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 8014C0D8
L_8014C0DC:;
  cmpu(c,0,c->r[5],c->r[0]); // 8014C0DC
  if (!crb(c,2)) { IRQCHK(c); goto L_8014C0BC; } // 8014C0E0
  c->r[3]=0u+0x00000000u; // 8014C0E4
  return; // 8014C0E8
}

// UnbindAnimationLink__Q34nw4r3lyt6detailFPQ34nw4r2ut38LinkList<Q34nw4r3lyt13AnimationLink,0>PQ34nw4r3lyt13AnimTransform
void f_8014C0EC(Ctx* __restrict c) {
  trace_call(0x8014C0ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C0EC
  c->r[0]=c->lr; // 8014C0F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8014C0F4
  c->r[11]=c->r[1]+0x00000030u; // 8014C0F8
  c->lr=0x8014C100u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014C0FC
  c->r[31]=R32(c->r[3]+0x00000004u); // 8014C100
  c->r[26]=c->r[3]|c->r[3]; // 8014C104
  c->r[27]=c->r[4]|c->r[4]; // 8014C108
  c->r[30]=c->r[3]+0x00000004u; // 8014C10C
  c->r[29]=0u+0x00000000u; // 8014C110
  goto L_8014C150; // 8014C114
L_8014C118:;
  cmps(c,0,(int32_t)c->r[27],0); // 8014C118
  c->r[28]=c->r[31]|c->r[31]; // 8014C11C
  c->r[31]=R32(c->r[31]+0x00000000u); // 8014C120
  if (crb(c,2)) { goto L_8014C134; } // 8014C124
  c->r[0]=R32(c->r[28]+0x00000008u); // 8014C128
  cmpu(c,0,c->r[0],c->r[27]); // 8014C12C
  if (!crb(c,2)) { goto L_8014C150; } // 8014C130
L_8014C134:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 8014C134
  c->r[3]=c->r[26]|c->r[26]; // 8014C138
  c->r[4]=c->r[1]+0x00000008u; // 8014C13C
  c->lr=0x8014C144u; f_800F63A4(c); // 8014C140
  W32(c->r[28]+0x00000008u,c->r[29]); // 8014C144
  W16(c->r[28]+0x0000000Cu,c->r[29]); // 8014C148
  W8(c->r[28]+0x0000000Eu,c->r[29]); // 8014C14C
L_8014C150:;
  cmpu(c,0,c->r[31],c->r[30]); // 8014C150
  if (!crb(c,2)) { IRQCHK(c); goto L_8014C118; } // 8014C154
  c->r[11]=c->r[1]+0x00000030u; // 8014C158
  c->lr=0x8014C160u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014C15C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8014C160
  c->lr=c->r[0]; // 8014C164
  c->r[1]=c->r[1]+0x00000030u; // 8014C168
  return; // 8014C16C
}

// __dt__Q34nw4r3lyt16ResourceAccessorFv
void f_8014C170(Ctx* __restrict c) {
  trace_call(0x8014C170u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C170
  c->r[0]=c->lr; // 8014C174
  cmps(c,0,(int32_t)c->r[3],0); // 8014C178
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C17C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014C180
  c->r[31]=c->r[3]|c->r[3]; // 8014C184
  if (crb(c,2)) { goto L_8014C198; } // 8014C188
  cmps(c,0,(int32_t)c->r[4],0); // 8014C18C
  if (!crb(c,1)) { goto L_8014C198; } // 8014C190
  c->lr=0x8014C198u; f_802525B0(c); // 8014C194
L_8014C198:;
  c->r[3]=c->r[31]|c->r[31]; // 8014C198
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014C19C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014C1A0
  c->lr=c->r[0]; // 8014C1A4
  c->r[1]=c->r[1]+0x00000010u; // 8014C1A8
  return; // 8014C1AC
}

// __ct__Q34nw4r3lyt16ResourceAccessorFv
void f_8014C1B0(Ctx* __restrict c) {
  trace_call(0x8014C1B0u);
  c->r[4]=0u+0x802C0000u; // 8014C1B0
  c->r[4]=c->r[4]+0x000067E8u; // 8014C1B4
  W32(c->r[3]+0x00000000u,c->r[4]); // 8014C1B8
  return; // 8014C1BC
}

// GetFont__Q34nw4r3lyt16ResourceAccessorFPCc
void f_8014C1C0(Ctx* __restrict c) {
  trace_call(0x8014C1C0u);
  c->r[3]=0u+0x00000000u; // 8014C1C0
  return; // 8014C1C4
}

// FindNameResource__37@unnamed@lyt_arcResourceAccessor_cpp@FP9ARCHandlePCc
void f_8014C1C8(Ctx* __restrict c) {
  trace_call(0x8014C1C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C1C8
  c->r[0]=c->lr; // 8014C1CC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8014C1D0
  c->r[5]=c->r[1]+0x00000018u; // 8014C1D4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8014C1D8
  c->r[31]=0u+0xFFFFFFFFu; // 8014C1DC
  W32(c->r[1]+0x00000038u,c->r[30]); // 8014C1E0
  c->r[30]=c->r[4]|c->r[4]; // 8014C1E4
  c->r[4]=c->r[13]+0xFFFF8F70u; // 8014C1E8
  W32(c->r[1]+0x00000034u,c->r[29]); // 8014C1EC
  c->r[29]=c->r[3]|c->r[3]; // 8014C1F0
  c->lr=0x8014C1F8u; f_80184ECC(c); // 8014C1F4
  goto L_8014C258; // 8014C1F8
L_8014C1FC:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 8014C1FC
  cmps(c,0,(int32_t)c->r[0],0); // 8014C200
  if (crb(c,2)) { goto L_8014C23C; } // 8014C204
  c->r[4]=R32(c->r[1]+0x00000014u); // 8014C208
  c->r[3]=c->r[29]|c->r[29]; // 8014C20C
  c->lr=0x8014C214u; f_80184E74(c); // 8014C210
  c->r[3]=c->r[29]|c->r[29]; // 8014C214
  c->r[4]=c->r[30]|c->r[30]; // 8014C218
  c->lr=0x8014C220u; f_8014C1C8(c); // 8014C21C
  c->r[31]=c->r[3]|c->r[3]; // 8014C220
  c->r[3]=c->r[29]|c->r[29]; // 8014C224
  c->r[4]=c->r[13]+0xFFFF8F74u; // 8014C228
  c->lr=0x8014C230u; f_80184E74(c); // 8014C22C
  cmps(c,0,(int32_t)c->r[31],-1); // 8014C230
  if (!crb(c,2)) { goto L_8014C26C; } // 8014C234
  goto L_8014C258; // 8014C238
L_8014C23C:;
  c->r[4]=R32(c->r[1]+0x00000014u); // 8014C23C
  c->r[3]=c->r[30]|c->r[30]; // 8014C240
  c->lr=0x8014C248u; f_8025EBA8(c); // 8014C244
  cmps(c,0,(int32_t)c->r[3],0); // 8014C248
  if (!crb(c,2)) { goto L_8014C258; } // 8014C24C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014C250
  goto L_8014C26C; // 8014C254
L_8014C258:;
  c->r[3]=c->r[1]+0x00000018u; // 8014C258
  c->r[4]=c->r[1]+0x00000008u; // 8014C25C
  c->lr=0x8014C264u; f_80184F48(c); // 8014C260
  cmps(c,0,(int32_t)c->r[3],0); // 8014C264
  if (!crb(c,2)) { IRQCHK(c); goto L_8014C1FC; } // 8014C268
L_8014C26C:;
  c->r[3]=c->r[1]+0x00000018u; // 8014C26C
  c->lr=0x8014C274u; f_80185000(c); // 8014C270
  c->r[3]=c->r[31]|c->r[31]; // 8014C274
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8014C278
  c->r[30]=R32(c->r[1]+0x00000038u); // 8014C27C
  c->r[29]=R32(c->r[1]+0x00000034u); // 8014C280
  c->r[0]=R32(c->r[1]+0x00000044u); // 8014C284
  c->lr=c->r[0]; // 8014C288
  c->r[1]=c->r[1]+0x00000040u; // 8014C28C
  return; // 8014C290
}

// GetResourceSub__37@unnamed@lyt_arcResourceAccessor_cpp@FP9ARCHandlePCcUlPCcPUl
void f_8014C294(Ctx* __restrict c) {
  trace_call(0x8014C294u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C294
  c->r[0]=c->lr; // 8014C298
  W32(c->r[1]+0x00000044u,c->r[0]); // 8014C29C
  c->r[11]=c->r[1]+0x00000040u; // 8014C2A0
  c->lr=0x8014C2A8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014C2A4
  c->r[26]=c->r[3]|c->r[3]; // 8014C2A8
  c->r[27]=c->r[4]|c->r[4]; // 8014C2AC
  c->r[28]=c->r[5]|c->r[5]; // 8014C2B0
  c->r[29]=c->r[6]|c->r[6]; // 8014C2B4
  c->r[30]=c->r[7]|c->r[7]; // 8014C2B8
  c->r[31]=0u+0xFFFFFFFFu; // 8014C2BC
  c->lr=0x8014C2C4u; f_80184A24(c); // 8014C2C0
  cmps(c,0,(int32_t)c->r[3],-1); // 8014C2C4
  if (crb(c,2)) { goto L_8014C370; } // 8014C2C8
  c->r[3]=c->r[26]|c->r[26]; // 8014C2CC
  c->r[4]=c->r[27]|c->r[27]; // 8014C2D0
  c->lr=0x8014C2D8u; f_80184E74(c); // 8014C2D4
  cmps(c,0,(int32_t)c->r[3],0); // 8014C2D8
  if (crb(c,2)) { goto L_8014C370; } // 8014C2DC
  cmps(c,0,(int32_t)c->r[28],0); // 8014C2E0
  if (!crb(c,2)) { goto L_8014C2FC; } // 8014C2E4
  c->r[3]=c->r[26]|c->r[26]; // 8014C2E8
  c->r[4]=c->r[29]|c->r[29]; // 8014C2EC
  c->lr=0x8014C2F4u; f_8014C1C8(c); // 8014C2F0
  c->r[31]=c->r[3]|c->r[3]; // 8014C2F4
  goto L_8014C364; // 8014C2F8
L_8014C2FC:;
  c->r[3]=rotl(c->r[28],8)&0x000000FFu; // 8014C2FC
  c->r[6]=rotl(c->r[28],16)&0x0000FFFFu; // 8014C300
  c->r[5]=rotl(c->r[28],24)&0x00FFFFFFu; // 8014C304
  c->r[0]=0u+0x00000000u; // 8014C308
  W8(c->r[1]+0x00000008u,c->r[3]); // 8014C30C
  c->r[3]=c->r[26]|c->r[26]; // 8014C310
  c->r[4]=c->r[1]+0x00000008u; // 8014C314
  W8(c->r[1]+0x00000009u,c->r[6]); // 8014C318
  W8(c->r[1]+0x0000000Au,c->r[5]); // 8014C31C
  W8(c->r[1]+0x0000000Bu,c->r[28]); // 8014C320
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8014C324
  c->lr=0x8014C32Cu; f_80184A24(c); // 8014C328
  cmps(c,0,(int32_t)c->r[3],-1); // 8014C32C
  if (crb(c,2)) { goto L_8014C364; } // 8014C330
  c->r[3]=c->r[26]|c->r[26]; // 8014C334
  c->r[4]=c->r[1]+0x00000008u; // 8014C338
  c->lr=0x8014C340u; f_80184E74(c); // 8014C33C
  cmps(c,0,(int32_t)c->r[3],0); // 8014C340
  if (crb(c,2)) { goto L_8014C364; } // 8014C344
  c->r[3]=c->r[26]|c->r[26]; // 8014C348
  c->r[4]=c->r[29]|c->r[29]; // 8014C34C
  c->lr=0x8014C354u; f_80184A24(c); // 8014C350
  c->r[31]=c->r[3]|c->r[3]; // 8014C354
  c->r[3]=c->r[26]|c->r[26]; // 8014C358
  c->r[4]=c->r[13]+0xFFFF8F74u; // 8014C35C
  c->lr=0x8014C364u; f_80184E74(c); // 8014C360
L_8014C364:;
  c->r[3]=c->r[26]|c->r[26]; // 8014C364
  c->r[4]=c->r[13]+0xFFFF8F74u; // 8014C368
  c->lr=0x8014C370u; f_80184E74(c); // 8014C36C
L_8014C370:;
  cmps(c,0,(int32_t)c->r[31],-1); // 8014C370
  if (crb(c,2)) { goto L_8014C3B8; } // 8014C374
  c->r[3]=c->r[26]|c->r[26]; // 8014C378
  c->r[4]=c->r[31]|c->r[31]; // 8014C37C
  c->r[5]=c->r[1]+0x00000010u; // 8014C380
  c->lr=0x8014C388u; f_801849D4(c); // 8014C384
  c->r[3]=c->r[1]+0x00000010u; // 8014C388
  c->lr=0x8014C390u; f_80184E50(c); // 8014C38C
  cmps(c,0,(int32_t)c->r[30],0); // 8014C390
  c->r[31]=c->r[3]|c->r[3]; // 8014C394
  if (crb(c,2)) { goto L_8014C3A8; } // 8014C398
  c->r[3]=c->r[1]+0x00000010u; // 8014C39C
  c->lr=0x8014C3A4u; f_80184E64(c); // 8014C3A0
  W32(c->r[30]+0x00000000u,c->r[3]); // 8014C3A4
L_8014C3A8:;
  c->r[3]=c->r[1]+0x00000010u; // 8014C3A8
  c->lr=0x8014C3B0u; f_80184E6C(c); // 8014C3AC
  c->r[3]=c->r[31]|c->r[31]; // 8014C3B0
  goto L_8014C3BC; // 8014C3B4
L_8014C3B8:;
  c->r[3]=0u+0x00000000u; // 8014C3B8
L_8014C3BC:;
  c->r[11]=c->r[1]+0x00000040u; // 8014C3BC
  c->lr=0x8014C3C4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014C3C0
  c->r[0]=R32(c->r[1]+0x00000044u); // 8014C3C4
  c->lr=c->r[0]; // 8014C3C8
  c->r[1]=c->r[1]+0x00000040u; // 8014C3CC
  return; // 8014C3D0
}

// fn_8014C3D4
void f_8014C3D4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8014C3D4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8014C3D8
  W32(c->r[3]+0x00000004u,c->r[0]); // 8014C3DC
  W32(c->r[3]+0x00000088u,c->r[0]); // 8014C3E0
  return; // 8014C3E4
}

// fn_8014C3E8
void f_8014C3E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C3E8
  c->r[0]=c->lr; // 8014C3EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C3F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014C3F4
  c->r[31]=c->r[5]|c->r[5]; // 8014C3F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8014C3FC
  c->r[30]=c->r[3]|c->r[3]; // 8014C400
  c->r[3]=c->r[3]+0x00000008u; // 8014C404
  c->lr=0x8014C40Cu; f_8025C444(c); // 8014C408
  W32(c->r[30]+0x00000088u,c->r[31]); // 8014C40C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014C410
  c->r[30]=R32(c->r[1]+0x00000008u); // 8014C414
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014C418
  c->lr=c->r[0]; // 8014C41C
  c->r[1]=c->r[1]+0x00000010u; // 8014C420
  return; // 8014C424
}

// fn_8014C428
void f_8014C428(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C428
  c->r[0]=c->lr; // 8014C42C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C430
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014C434
  c->r[31]=c->r[5]|c->r[5]; // 8014C438
  W32(c->r[1]+0x00000008u,c->r[30]); // 8014C43C
  c->r[30]=c->r[3]|c->r[3]; // 8014C440
  c->r[3]=c->r[4]|c->r[4]; // 8014C444
  c->r[4]=c->r[30]+0x00000008u; // 8014C448
  c->lr=0x8014C450u; f_80184690(c); // 8014C44C
  cmps(c,0,(int32_t)c->r[3],0); // 8014C450
  if (!crb(c,2)) { goto L_8014C460; } // 8014C454
  c->r[3]=0u+0x00000000u; // 8014C458
  goto L_8014C47C; // 8014C45C
L_8014C460:;
  c->r[4]=c->r[31]|c->r[31]; // 8014C460
  c->r[3]=c->r[30]+0x00000024u; // 8014C464
  c->r[5]=0u+0x0000007Fu; // 8014C468
  c->lr=0x8014C470u; f_8025C504(c); // 8014C46C
  c->r[0]=0u+0x00000000u; // 8014C470
  c->r[3]=0u+0x00000001u; // 8014C474
  W8(c->r[30]+0x000000A3u,c->r[0]); // 8014C478
L_8014C47C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014C47C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014C480
  c->r[30]=R32(c->r[1]+0x00000008u); // 8014C484
  c->lr=c->r[0]; // 8014C488
  c->r[1]=c->r[1]+0x00000010u; // 8014C48C
  return; // 8014C490
}

// fn_8014C494
void f_8014C494(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C494
  c->r[0]=c->lr; // 8014C498
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C49C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014C4A0
  c->r[31]=c->r[3]|c->r[3]; // 8014C4A4
  c->lr=0x8014C4ACu; f_8014C1B0(c); // 8014C4A8
  c->r[0]=0u+0x00000000u; // 8014C4AC
  c->r[4]=0u+0x802C0000u; // 8014C4B0
  W32(c->r[31]+0x00000008u,c->r[0]); // 8014C4B4
  c->r[5]=c->r[31]+0x00000008u; // 8014C4B8
  c->r[4]=c->r[4]+0x00006800u; // 8014C4BC
  c->r[6]=c->r[31]+0x00000014u; // 8014C4C0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8014C4C4
  c->r[3]=c->r[31]|c->r[31]; // 8014C4C8
  W32(c->r[31]+0x00000014u,c->r[0]); // 8014C4CC
  W32(c->r[31]+0x00000018u,c->r[0]); // 8014C4D0
  W32(c->r[31]+0x00000000u,c->r[4]); // 8014C4D4
  W32(c->r[31]+0x00000004u,c->r[0]); // 8014C4D8
  W32(c->r[31]+0x00000008u,c->r[5]); // 8014C4DC
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8014C4E0
  W32(c->r[31]+0x00000010u,c->r[0]); // 8014C4E4
  W32(c->r[31]+0x00000014u,c->r[6]); // 8014C4E8
  W32(c->r[31]+0x00000018u,c->r[6]); // 8014C4EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014C4F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014C4F4
  c->lr=c->r[0]; // 8014C4F8
  c->r[1]=c->r[1]+0x00000010u; // 8014C4FC
  return; // 8014C500
}

// fn_8014C504
void f_8014C504(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C504
  c->r[0]=c->lr; // 8014C508
  cmps(c,0,(int32_t)c->r[3],0); // 8014C50C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C510
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014C514
  c->r[31]=c->r[4]|c->r[4]; // 8014C518
  W32(c->r[1]+0x00000008u,c->r[30]); // 8014C51C
  c->r[30]=c->r[3]|c->r[3]; // 8014C520
  if (crb(c,2)) { goto L_8014C578; } // 8014C524
  c->r[4]=0u+0x802C0000u; // 8014C528
  c->r[4]=c->r[4]+0x00006800u; // 8014C52C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8014C530
  c->r[3]=c->r[3]+0x00000004u; // 8014C534
  c->lr=0x8014C53Cu; f_800F63EC(c); // 8014C538
  c->r[3]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[3]); // 8014C53C
  if (crb(c,2)) { goto L_8014C54C; } // 8014C540
  c->r[4]=0u+0x00000000u; // 8014C544
  c->lr=0x8014C54Cu; f_800F6320(c); // 8014C548
L_8014C54C:;
  c->r[3]=addc(c,c->r[30],0x00000004u,0); cr0(c,c->r[3]); // 8014C54C
  if (crb(c,2)) { goto L_8014C55C; } // 8014C550
  c->r[4]=0u+0x00000000u; // 8014C554
  c->lr=0x8014C55Cu; f_800F6320(c); // 8014C558
L_8014C55C:;
  c->r[3]=c->r[30]|c->r[30]; // 8014C55C
  c->r[4]=0u+0x00000000u; // 8014C560
  c->lr=0x8014C568u; f_8014C170(c); // 8014C564
  cmps(c,0,(int32_t)c->r[31],0); // 8014C568
  if (!crb(c,1)) { goto L_8014C578; } // 8014C56C
  c->r[3]=c->r[30]|c->r[30]; // 8014C570
  c->lr=0x8014C578u; f_802525B0(c); // 8014C574
L_8014C578:;
  c->r[3]=c->r[30]|c->r[30]; // 8014C578
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014C57C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8014C580
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014C584
  c->lr=c->r[0]; // 8014C588
  c->r[1]=c->r[1]+0x00000010u; // 8014C58C
  return; // 8014C590
}

// fn_8014C594
void f_8014C594(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C594
  c->r[0]=c->lr; // 8014C598
  c->r[5]=c->r[4]|c->r[4]; // 8014C59C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C5A0
  c->r[0]=c->r[3]+0x00000008u; // 8014C5A4
  c->r[3]=c->r[3]+0x00000004u; // 8014C5A8
  c->r[4]=c->r[1]+0x00000008u; // 8014C5AC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8014C5B0
  c->lr=0x8014C5B8u; f_800F6430(c); // 8014C5B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014C5B8
  c->lr=c->r[0]; // 8014C5BC
  c->r[1]=c->r[1]+0x00000010u; // 8014C5C0
  return; // 8014C5C4
}

// fn_8014C5C8
void f_8014C5C8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000004u; // 8014C5C8
  f_800F63EC(c); return; // 8014C5CC
}

// fn_8014C5D0
void f_8014C5D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C5D0
  c->r[0]=c->lr; // 8014C5D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014C5D8
  c->r[11]=c->r[1]+0x00000020u; // 8014C5DC
  c->lr=0x8014C5E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014C5E0
  c->r[31]=R32(c->r[3]+0x00000008u); // 8014C5E4
  c->r[27]=c->r[4]|c->r[4]; // 8014C5E8
  c->r[28]=c->r[5]|c->r[5]; // 8014C5EC
  c->r[29]=c->r[6]|c->r[6]; // 8014C5F0
  c->r[30]=c->r[3]+0x00000008u; // 8014C5F4
  goto L_8014C624; // 8014C5F8
L_8014C5FC:;
  c->r[5]=c->r[27]|c->r[27]; // 8014C5FC
  c->r[6]=c->r[28]|c->r[28]; // 8014C600
  c->r[7]=c->r[29]|c->r[29]; // 8014C604
  c->r[3]=c->r[31]+0x00000008u; // 8014C608
  c->r[4]=c->r[31]+0x00000024u; // 8014C60C
  c->lr=0x8014C614u; f_8014C294(c); // 8014C610
  cmps(c,0,(int32_t)c->r[3],0); // 8014C614
  if (crb(c,2)) { goto L_8014C620; } // 8014C618
  goto L_8014C630; // 8014C61C
L_8014C620:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8014C620
L_8014C624:;
  cmpu(c,0,c->r[31],c->r[30]); // 8014C624
  if (!crb(c,2)) { IRQCHK(c); goto L_8014C5FC; } // 8014C628
  c->r[3]=0u+0x00000000u; // 8014C62C
L_8014C630:;
  c->r[11]=c->r[1]+0x00000020u; // 8014C630
  c->lr=0x8014C638u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014C634
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014C638
  c->lr=c->r[0]; // 8014C63C
  c->r[1]=c->r[1]+0x00000020u; // 8014C640
  return; // 8014C644
}

// fn_8014C648
void f_8014C648(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C648
  c->r[0]=c->lr; // 8014C64C
  c->r[5]=c->r[4]|c->r[4]; // 8014C650
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C654
  c->r[0]=c->r[3]+0x00000014u; // 8014C658
  c->r[3]=c->r[3]+0x00000010u; // 8014C65C
  c->r[4]=c->r[1]+0x00000008u; // 8014C660
  W32(c->r[1]+0x00000008u,c->r[0]); // 8014C664
  c->lr=0x8014C66Cu; f_800F6430(c); // 8014C668
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014C66C
  c->lr=c->r[0]; // 8014C670
  c->r[1]=c->r[1]+0x00000010u; // 8014C674
  return; // 8014C678
}

// fn_8014C67C
void f_8014C67C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000010u; // 8014C67C
  f_800F645C(c); return; // 8014C680
}

// fn_8014C684
void f_8014C684(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C684
  c->r[0]=c->lr; // 8014C688
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014C68C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014C690
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014C694
  c->r[30]=c->r[3]+0x00000014u; // 8014C698
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014C69C
  c->r[29]=c->r[4]|c->r[4]; // 8014C6A0
  c->r[31]=R32(c->r[3]+0x00000014u); // 8014C6A4
  goto L_8014C6CC; // 8014C6A8
L_8014C6AC:;
  c->r[3]=c->r[29]|c->r[29]; // 8014C6AC
  c->r[4]=c->r[31]+0x00000008u; // 8014C6B0
  c->lr=0x8014C6B8u; f_8025C5C0(c); // 8014C6B4
  cmps(c,0,(int32_t)c->r[3],0); // 8014C6B8
  if (!crb(c,2)) { goto L_8014C6C8; } // 8014C6BC
  c->r[3]=R32(c->r[31]+0x00000088u); // 8014C6C0
  goto L_8014C6D8; // 8014C6C4
L_8014C6C8:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8014C6C8
L_8014C6CC:;
  cmpu(c,0,c->r[31],c->r[30]); // 8014C6CC
  if (!crb(c,2)) { IRQCHK(c); goto L_8014C6AC; } // 8014C6D0
  c->r[3]=0u+0x00000000u; // 8014C6D4
L_8014C6D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014C6D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014C6DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014C6E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014C6E4
  c->lr=c->r[0]; // 8014C6E8
  c->r[1]=c->r[1]+0x00000020u; // 8014C6EC
  return; // 8014C6F0
}

