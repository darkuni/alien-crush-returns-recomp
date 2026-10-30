#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8014C6F4
void f_8014C6F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C6F4
  c->r[0]=c->lr; // 8014C6F8
  c->r[5]=0u+0x00000010u; // 8014C6FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C700
  c->lr=0x8014C708u; f_8025C6DC(c); // 8014C704
  c->r[0]=cntlz(c->r[3]); // 8014C708
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8014C70C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014C710
  c->lr=c->r[0]; // 8014C714
  c->r[1]=c->r[1]+0x00000010u; // 8014C718
  return; // 8014C71C
}

// fn_8014C720
void f_8014C720(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C720
  c->r[0]=c->lr; // 8014C724
  c->r[5]=0u+0x00000014u; // 8014C728
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C72C
  c->lr=0x8014C734u; f_8025C6DC(c); // 8014C730
  c->r[0]=cntlz(c->r[3]); // 8014C734
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8014C738
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014C73C
  c->lr=c->r[0]; // 8014C740
  c->r[1]=c->r[1]+0x00000010u; // 8014C744
  return; // 8014C748
}

// fn_8014C74C
void f_8014C74C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 8014C74C
  c->r[5]=0u+0x00000000u; // 8014C750
  cmpu(c,0,c->r[4],c->r[0]); // 8014C754
  if (!crb(c,2)) { goto L_8014C76C; } // 8014C758
  c->r[0]=R16(c->r[3]+0x00000004u); // 8014C75C
  cmpu(c,0,c->r[0],0x0000FEFFu); // 8014C760
  if (!crb(c,2)) { goto L_8014C76C; } // 8014C764
  c->r[5]=0u+0x00000001u; // 8014C768
L_8014C76C:;
  c->r[3]=c->r[5]|c->r[5]; // 8014C76C
  return; // 8014C770
}

// fn_8014C774
void f_8014C774(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8014C774
  W8(c->r[3]+0x00000000u,c->r[0]); // 8014C778
  W8(c->r[3]+0x00000001u,c->r[0]); // 8014C77C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8014C780
  return; // 8014C784
}

// fn_8014C788
void f_8014C788(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C788
  c->r[0]=c->lr; // 8014C78C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C790
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014C794
  c->r[31]=c->r[3]|c->r[3]; // 8014C798
  c->r[4]=R32(c->r[3]+0x00000004u); // 8014C79C
  cmps(c,0,(int32_t)c->r[4],0); // 8014C7A0
  if (crb(c,2)) { goto L_8014C7C4; } // 8014C7A4
  if (crb(c,2)) { goto L_8014C7B4; } // 8014C7A8
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 8014C7AC
  c->lr=0x8014C7B4u; f_8017C1B4(c); // 8014C7B0
L_8014C7B4:;
  c->r[0]=0u+0x00000000u; // 8014C7B4
  W32(c->r[31]+0x00000004u,c->r[0]); // 8014C7B8
  W8(c->r[31]+0x00000000u,c->r[0]); // 8014C7BC
  W8(c->r[31]+0x00000001u,c->r[0]); // 8014C7C0
L_8014C7C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014C7C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014C7C8
  c->lr=c->r[0]; // 8014C7CC
  c->r[1]=c->r[1]+0x00000010u; // 8014C7D0
  return; // 8014C7D4
}

// fn_8014C7D8
void f_8014C7D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C7D8
  c->r[0]=c->lr; // 8014C7DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C7E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014C7E4
  c->r[31]=c->r[4]|c->r[4]; // 8014C7E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8014C7EC
  c->r[30]=c->r[3]|c->r[3]; // 8014C7F0
  c->r[0]=R8(c->r[3]+0x00000000u); // 8014C7F4
  cmpu(c,0,c->r[0],c->r[4]); // 8014C7F8
  if (!crb(c,0)) { goto L_8014C854; } // 8014C7FC
  c->r[4]=R32(c->r[3]+0x00000004u); // 8014C800
  cmps(c,0,(int32_t)c->r[4],0); // 8014C804
  if (crb(c,2)) { goto L_8014C828; } // 8014C808
  if (crb(c,2)) { goto L_8014C818; } // 8014C80C
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 8014C810
  c->lr=0x8014C818u; f_8017C1B4(c); // 8014C814
L_8014C818:;
  c->r[0]=0u+0x00000000u; // 8014C818
  W32(c->r[30]+0x00000004u,c->r[0]); // 8014C81C
  W8(c->r[30]+0x00000000u,c->r[0]); // 8014C820
  W8(c->r[30]+0x00000001u,c->r[0]); // 8014C824
L_8014C828:;
  c->r[3]=R32(c->r[13]+0xFFFFA960u); // 8014C828
  c->r[4]=rotl(c->r[31],5)&0x00001FE0u; // 8014C82C
  c->lr=0x8014C834u; f_8017C1A4(c); // 8014C830
  cmps(c,0,(int32_t)c->r[3],0); // 8014C834
  if (crb(c,2)) { goto L_8014C840; } // 8014C838
  goto L_8014C844; // 8014C83C
L_8014C840:;
  c->r[3]=0u+0x00000000u; // 8014C840
L_8014C844:;
  cmps(c,0,(int32_t)c->r[3],0); // 8014C844
  W32(c->r[30]+0x00000004u,c->r[3]); // 8014C848
  if (crb(c,2)) { goto L_8014C854; } // 8014C84C
  W8(c->r[30]+0x00000000u,c->r[31]); // 8014C850
L_8014C854:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014C854
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014C858
  c->r[30]=R32(c->r[1]+0x00000008u); // 8014C85C
  c->lr=c->r[0]; // 8014C860
  c->r[1]=c->r[1]+0x00000010u; // 8014C864
  return; // 8014C868
}

// SetSize__Q44nw4r3lyt6detail11TexCoordAryFUc
void f_8014C86C(Ctx* __restrict c) {
  trace_call(0x8014C86Cu);
  c->r[0]=R32(c->r[3]+0x00000004u); // 8014C86C
  cmps(c,0,(int32_t)c->r[0],0); // 8014C870
  if (crb(c,2)) return; // 8014C874
  c->r[0]=R8(c->r[3]+0x00000000u); // 8014C878
  cmpu(c,0,c->r[4],c->r[0]); // 8014C87C
  if (crb(c,1)) return; // 8014C880
  c->r[0]=R8(c->r[13]+0xFFFFA988u); // 8014C884
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8014C888
  if (!crb(c,2)) { goto L_8014C8C8; } // 8014C88C
  c->r[6]=0u+0x80440000u; // 8014C890
  {uint32_t ea=c->r[2]+0xFFFFA928u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C894
  c->r[5]=c->r[6]+0xFFFFE148u; // 8014C898
  {uint32_t ea=c->r[2]+0xFFFFA92Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C89C
  c->r[0]=0u+0x00000001u; // 8014C8A0
  {uint32_t ea=c->r[6]+0xFFFFE148u; WF32(ea,c->f[1]);} // 8014C8A4
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 8014C8A8
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 8014C8AC
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[1]);} // 8014C8B0
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[1]);} // 8014C8B4
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 8014C8B8
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[0]);} // 8014C8BC
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 8014C8C0
  W8(c->r[13]+0xFFFFA988u,c->r[0]); // 8014C8C4
L_8014C8C8:;
  c->r[7]=R8(c->r[3]+0x00000001u); // 8014C8C8
  c->r[6]=0u+0x80440000u; // 8014C8CC
  c->r[5]=c->r[6]+0xFFFFE148u; // 8014C8D0
  {uint32_t ea=c->r[6]+0xFFFFE148u; c->f[7]=c->ps1[7]=RF32(ea);} // 8014C8D4
  c->r[0]=c->r[4]-c->r[7]; // 8014C8D8
  c->r[6]=rotl(c->r[7],5)&0xFFFFFFE0u; // 8014C8DC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 8014C8E0
  {uint32_t ea=c->r[5]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8014C8E4
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8014C8E8
  {uint32_t ea=c->r[5]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8014C8EC
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014C8F0
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C8F4
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C8F8
  c->ctr=c->r[0]; // 8014C8FC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 8014C900
  if (!crb(c,0)) { goto L_8014C950; } // 8014C904
L_8014C908:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8014C908
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[7]);} // 8014C90C
  c->r[5]=c->r[0]+c->r[6]; // 8014C910
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[6]);} // 8014C914
  c->r[0]=R32(c->r[3]+0x00000004u); // 8014C918
  c->r[5]=c->r[0]+c->r[6]; // 8014C91C
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[5]);} // 8014C920
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[4]);} // 8014C924
  c->r[0]=R32(c->r[3]+0x00000004u); // 8014C928
  c->r[5]=c->r[0]+c->r[6]; // 8014C92C
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 8014C930
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 8014C934
  c->r[0]=R32(c->r[3]+0x00000004u); // 8014C938
  c->r[5]=c->r[0]+c->r[6]; // 8014C93C
  c->r[6]=c->r[6]+0x00000020u; // 8014C940
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 8014C944
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 8014C948
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014C908; } // 8014C94C
L_8014C950:;
  W8(c->r[3]+0x00000001u,c->r[4]); // 8014C950
  return; // 8014C954
}

// Copy__Q44nw4r3lyt6detail11TexCoordAryFPCvUc
void f_8014C958(Ctx* __restrict c) {
  trace_call(0x8014C958u);
  c->r[0]=R8(c->r[3]+0x00000001u); // 8014C958
  cmpu(c,0,c->r[0],c->r[5]); // 8014C95C
  if (!crb(c,0)) { goto L_8014C968; } // 8014C960
  c->r[0]=c->r[5]|c->r[5]; // 8014C964
L_8014C968:;
  W8(c->r[3]+0x00000001u,c->r[0]); // 8014C968
  c->r[6]=0u+0x00000000u; // 8014C96C
  c->ctr=c->r[5]; // 8014C970
  cmps(c,0,(int32_t)c->r[5],0); // 8014C974
  if (!crb(c,1)) return; // 8014C978
L_8014C97C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8014C97C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C980
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C984
  c->r[5]=c->r[0]+c->r[6]; // 8014C988
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[1]);} // 8014C98C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C990
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 8014C994
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C998
  c->r[0]=R32(c->r[3]+0x00000004u); // 8014C99C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8014C9A0
  c->r[5]=c->r[0]+c->r[6]; // 8014C9A4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014C9A8
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 8014C9AC
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C9B0
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 8014C9B4
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C9B8
  c->r[4]=c->r[4]+0x00000020u; // 8014C9BC
  c->r[0]=R32(c->r[3]+0x00000004u); // 8014C9C0
  c->r[5]=c->r[0]+c->r[6]; // 8014C9C4
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 8014C9C8
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 8014C9CC
  c->r[0]=R32(c->r[3]+0x00000004u); // 8014C9D0
  c->r[5]=c->r[0]+c->r[6]; // 8014C9D4
  c->r[6]=c->r[6]+0x00000020u; // 8014C9D8
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 8014C9DC
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 8014C9E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014C97C; } // 8014C9E4
  return; // 8014C9E8
}

// IsModulateVertexColor__Q34nw4r3lyt6detailFPQ34nw4r2ut5ColorUc
void f_8014C9EC(Ctx* __restrict c) {
  trace_call(0x8014C9ECu);
  cmpu(c,0,c->r[4],0x000000FFu); // 8014C9EC
  if (crb(c,2)) { goto L_8014C9FC; } // 8014C9F0
  c->r[3]=0u+0x00000001u; // 8014C9F4
  return; // 8014C9F8
L_8014C9FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8014C9FC
  if (crb(c,2)) { goto L_8014CA4C; } // 8014CA00
  c->r[4]=R32(c->r[3]+0x00000000u); // 8014CA04
  c->r[0]=c->r[4]+0x00010000u; // 8014CA08
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8014CA0C
  if (!crb(c,2)) { goto L_8014CA44; } // 8014CA10
  c->r[4]=R32(c->r[3]+0x00000004u); // 8014CA14
  c->r[0]=c->r[4]+0x00010000u; // 8014CA18
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8014CA1C
  if (!crb(c,2)) { goto L_8014CA44; } // 8014CA20
  c->r[4]=R32(c->r[3]+0x00000008u); // 8014CA24
  c->r[0]=c->r[4]+0x00010000u; // 8014CA28
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8014CA2C
  if (!crb(c,2)) { goto L_8014CA44; } // 8014CA30
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8014CA34
  c->r[0]=c->r[3]+0x00010000u; // 8014CA38
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8014CA3C
  if (crb(c,2)) { goto L_8014CA4C; } // 8014CA40
L_8014CA44:;
  c->r[3]=0u+0x00000001u; // 8014CA44
  return; // 8014CA48
L_8014CA4C:;
  c->r[3]=0u+0x00000000u; // 8014CA4C
  return; // 8014CA50
}

// MultipleAlpha__Q34nw4r3lyt6detailFQ34nw4r2ut5ColorUc
void f_8014CA54(Ctx* __restrict c) {
  trace_call(0x8014CA54u);
  c->r[8]=R8(c->r[4]+0x00000000u); // 8014CA54
  cmpu(c,0,c->r[5],0x000000FFu); // 8014CA58
  c->r[7]=R8(c->r[4]+0x00000001u); // 8014CA5C
  c->r[6]=R8(c->r[4]+0x00000002u); // 8014CA60
  c->r[0]=R8(c->r[4]+0x00000003u); // 8014CA64
  W8(c->r[3]+0x00000000u,c->r[8]); // 8014CA68
  W8(c->r[3]+0x00000001u,c->r[7]); // 8014CA6C
  W8(c->r[3]+0x00000002u,c->r[6]); // 8014CA70
  W8(c->r[3]+0x00000003u,c->r[0]); // 8014CA74
  if (crb(c,2)) return; // 8014CA78
  c->r[0]=R8(c->r[4]+0x00000003u); // 8014CA7C
  c->r[4]=0u+0x80810000u; // 8014CA80
  c->r[4]=c->r[4]+0xFFFF8081u; // 8014CA84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 8014CA88
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8014CA8C
  c->r[0]=c->r[4]+c->r[0]; // 8014CA90
  c->r[0]=sraw(c,c->r[0],7); // 8014CA94
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8014CA98
  c->r[0]=c->r[0]+c->r[4]; // 8014CA9C
  W8(c->r[3]+0x00000003u,c->r[0]); // 8014CAA0
  return; // 8014CAA4
}

// SetVertexFormat__Q34nw4r3lyt6detailFbUc
void f_8014CAA8(Ctx* __restrict c) {
  trace_call(0x8014CAA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014CAA8
  c->r[0]=c->lr; // 8014CAAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014CAB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014CAB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014CAB8
  c->r[30]=c->r[4]|c->r[4]; // 8014CABC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014CAC0
  c->r[29]=c->r[3]|c->r[3]; // 8014CAC4
  c->lr=0x8014CACCu; f_80166D74(c); // 8014CAC8
  c->r[3]=0u+0x00000009u; // 8014CACC
  c->r[4]=0u+0x00000001u; // 8014CAD0
  c->lr=0x8014CAD8u; f_80166934(c); // 8014CAD4
  cmps(c,0,(int32_t)c->r[29],0); // 8014CAD8
  if (crb(c,2)) { goto L_8014CAEC; } // 8014CADC
  c->r[3]=0u+0x0000000Bu; // 8014CAE0
  c->r[4]=0u+0x00000001u; // 8014CAE4
  c->lr=0x8014CAECu; f_80166934(c); // 8014CAE8
L_8014CAEC:;
  c->r[31]=0u+0x00000000u; // 8014CAEC
  goto L_8014CB04; // 8014CAF0
L_8014CAF4:;
  c->r[3]=c->r[31]+0x0000000Du; // 8014CAF4
  c->r[4]=0u+0x00000001u; // 8014CAF8
  c->lr=0x8014CB00u; f_80166934(c); // 8014CAFC
  c->r[31]=c->r[31]+0x00000001u; // 8014CB00
L_8014CB04:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 8014CB04
  if (crb(c,0)) { IRQCHK(c); goto L_8014CAF4; } // 8014CB08
  c->r[3]=0u+0x00000000u; // 8014CB0C
  c->r[4]=0u+0x00000009u; // 8014CB10
  c->r[5]=0u+0x00000000u; // 8014CB14
  c->r[6]=0u+0x00000004u; // 8014CB18
  c->r[7]=0u+0x00000000u; // 8014CB1C
  c->lr=0x8014CB24u; f_80166DA8(c); // 8014CB20
  cmps(c,0,(int32_t)c->r[29],0); // 8014CB24
  if (crb(c,2)) { goto L_8014CB44; } // 8014CB28
  c->r[3]=0u+0x00000000u; // 8014CB2C
  c->r[4]=0u+0x0000000Bu; // 8014CB30
  c->r[5]=0u+0x00000001u; // 8014CB34
  c->r[6]=0u+0x00000005u; // 8014CB38
  c->r[7]=0u+0x00000000u; // 8014CB3C
  c->lr=0x8014CB44u; f_80166DA8(c); // 8014CB40
L_8014CB44:;
  c->r[31]=0u+0x00000000u; // 8014CB44
  goto L_8014CB68; // 8014CB48
L_8014CB4C:;
  c->r[4]=c->r[31]+0x0000000Du; // 8014CB4C
  c->r[3]=0u+0x00000000u; // 8014CB50
  c->r[5]=0u+0x00000001u; // 8014CB54
  c->r[6]=0u+0x00000004u; // 8014CB58
  c->r[7]=0u+0x00000000u; // 8014CB5C
  c->lr=0x8014CB64u; f_80166DA8(c); // 8014CB60
  c->r[31]=c->r[31]+0x00000001u; // 8014CB64
L_8014CB68:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 8014CB68
  if (crb(c,0)) { IRQCHK(c); goto L_8014CB4C; } // 8014CB6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014CB70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014CB74
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014CB78
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014CB7C
  c->lr=c->r[0]; // 8014CB80
  c->r[1]=c->r[1]+0x00000020u; // 8014CB84
  return; // 8014CB88
}

// DrawQuad__Q34nw4r3lyt6detailFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt4SizeUcPA4_CQ34nw4r4math4VEC2PCQ34nw4r2ut5Color
void f_8014CB8C(Ctx* __restrict c) {
  trace_call(0x8014CB8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014CB8C
  c->r[0]=c->lr; // 8014CB90
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014CB94
  c->r[11]=c->r[1]+0x00000020u; // 8014CB98
  c->lr=0x8014CBA0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014CB9C
  c->r[27]=c->r[3]|c->r[3]; // 8014CBA0
  c->r[28]=c->r[4]|c->r[4]; // 8014CBA4
  c->r[29]=c->r[5]|c->r[5]; // 8014CBA8
  c->r[30]=c->r[6]|c->r[6]; // 8014CBAC
  c->r[31]=c->r[7]|c->r[7]; // 8014CBB0
  c->r[3]=0u+0x00000080u; // 8014CBB4
  c->r[4]=0u+0x00000000u; // 8014CBB8
  c->r[5]=0u+0x00000004u; // 8014CBBC
  c->lr=0x8014CBC4u; f_80167E0C(c); // 8014CBC0
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CBC4
  c->r[3]=0u+0xCC010000u; // 8014CBC8
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CBCC
  cmps(c,0,(int32_t)c->r[31],0); // 8014CBD0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CBD4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CBD8
  if (crb(c,2)) { goto L_8014CBE8; } // 8014CBDC
  c->r[0]=R32(c->r[31]+0x00000000u); // 8014CBE0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8014CBE4
L_8014CBE8:;
  cmps(c,1,(int32_t)c->r[29],0); // 8014CBE8
  c->r[6]=0u+0x00000000u; // 8014CBEC
  if (!crb(c,5)) { goto L_8014CD00; } // 8014CBF0
  cmps(c,0,(int32_t)c->r[29],8); // 8014CBF4
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 8014CBF8
  if (!crb(c,1)) { goto L_8014CCCC; } // 8014CBFC
  c->r[5]=0u+0x00000000u; // 8014CC00
  if (crb(c,4)) { goto L_8014CC1C; } // 8014CC04
  c->r[3]=0u+0x80000000u; // 8014CC08
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8014CC0C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8014CC10
  if (crb(c,1)) { goto L_8014CC1C; } // 8014CC14
  c->r[5]=0u+0x00000001u; // 8014CC18
L_8014CC1C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8014CC1C
  if (crb(c,2)) { goto L_8014CCCC; } // 8014CC20
  c->r[0]=c->r[4]+0x00000007u; // 8014CC24
  c->r[5]=c->r[30]|c->r[30]; // 8014CC28
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8014CC2C
  c->r[3]=0u+0xCC010000u; // 8014CC30
  c->ctr=c->r[0]; // 8014CC34
  cmps(c,0,(int32_t)c->r[4],0); // 8014CC38
  if (!crb(c,1)) { goto L_8014CCCC; } // 8014CC3C
L_8014CC40:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CC40
  c->r[6]=c->r[6]+0x00000008u; // 8014CC44
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CC48
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CC4C
  {uint32_t ea=c->r[5]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014CC50
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CC54
  {uint32_t ea=c->r[5]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CC58
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8014CC5C
  {uint32_t ea=c->r[5]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CC60
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CC64
  {uint32_t ea=c->r[5]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CC68
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CC6C
  {uint32_t ea=c->r[5]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CC70
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CC74
  {uint32_t ea=c->r[5]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CC78
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CC7C
  {uint32_t ea=c->r[5]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CC80
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CC84
  {uint32_t ea=c->r[5]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CC88
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CC8C
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CC90
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CC94
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CC98
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CC9C
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CCA0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CCA4
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CCA8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CCAC
  {uint32_t ea=c->r[5]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CCB0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CCB4
  {uint32_t ea=c->r[5]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CCB8
  c->r[5]=c->r[5]+0x00000100u; // 8014CCBC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CCC0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CCC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014CC40; } // 8014CCC8
L_8014CCCC:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 8014CCCC
  c->r[0]=c->r[29]-c->r[6]; // 8014CCD0
  c->r[4]=c->r[30]+c->r[3]; // 8014CCD4
  c->r[3]=0u+0xCC010000u; // 8014CCD8
  c->ctr=c->r[0]; // 8014CCDC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 8014CCE0
  if (!crb(c,0)) { goto L_8014CD00; } // 8014CCE4
L_8014CCE8:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CCE8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CCEC
  c->r[4]=c->r[4]+0x00000020u; // 8014CCF0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CCF4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CCF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014CCE8; } // 8014CCFC
L_8014CD00:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CD00
  c->r[3]=0u+0xCC010000u; // 8014CD04
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CD08
  cmps(c,0,(int32_t)c->r[31],0); // 8014CD0C
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014CD10
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8014CD14
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CD18
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8014CD1C
  if (crb(c,2)) { goto L_8014CD2C; } // 8014CD20
  c->r[0]=R32(c->r[31]+0x00000004u); // 8014CD24
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8014CD28
L_8014CD2C:;
  cmps(c,1,(int32_t)c->r[29],0); // 8014CD2C
  c->r[6]=0u+0x00000000u; // 8014CD30
  if (!crb(c,5)) { goto L_8014CE44; } // 8014CD34
  cmps(c,0,(int32_t)c->r[29],8); // 8014CD38
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 8014CD3C
  if (!crb(c,1)) { goto L_8014CE10; } // 8014CD40
  c->r[5]=0u+0x00000000u; // 8014CD44
  if (crb(c,4)) { goto L_8014CD60; } // 8014CD48
  c->r[3]=0u+0x80000000u; // 8014CD4C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8014CD50
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8014CD54
  if (crb(c,1)) { goto L_8014CD60; } // 8014CD58
  c->r[5]=0u+0x00000001u; // 8014CD5C
L_8014CD60:;
  cmps(c,0,(int32_t)c->r[5],0); // 8014CD60
  if (crb(c,2)) { goto L_8014CE10; } // 8014CD64
  c->r[0]=c->r[4]+0x00000007u; // 8014CD68
  c->r[5]=c->r[30]|c->r[30]; // 8014CD6C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8014CD70
  c->r[3]=0u+0xCC010000u; // 8014CD74
  c->ctr=c->r[0]; // 8014CD78
  cmps(c,0,(int32_t)c->r[4],0); // 8014CD7C
  if (!crb(c,1)) { goto L_8014CE10; } // 8014CD80
L_8014CD84:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CD84
  c->r[6]=c->r[6]+0x00000008u; // 8014CD88
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CD8C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CD90
  {uint32_t ea=c->r[5]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014CD94
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CD98
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CD9C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8014CDA0
  {uint32_t ea=c->r[5]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CDA4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CDA8
  {uint32_t ea=c->r[5]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CDAC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CDB0
  {uint32_t ea=c->r[5]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CDB4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CDB8
  {uint32_t ea=c->r[5]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CDBC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CDC0
  {uint32_t ea=c->r[5]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CDC4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CDC8
  {uint32_t ea=c->r[5]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CDCC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CDD0
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CDD4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CDD8
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CDDC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CDE0
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CDE4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CDE8
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CDEC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CDF0
  {uint32_t ea=c->r[5]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CDF4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CDF8
  {uint32_t ea=c->r[5]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CDFC
  c->r[5]=c->r[5]+0x00000100u; // 8014CE00
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CE04
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CE08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014CD84; } // 8014CE0C
L_8014CE10:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 8014CE10
  c->r[0]=c->r[29]-c->r[6]; // 8014CE14
  c->r[4]=c->r[30]+c->r[3]; // 8014CE18
  c->r[3]=0u+0xCC010000u; // 8014CE1C
  c->ctr=c->r[0]; // 8014CE20
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 8014CE24
  if (!crb(c,0)) { goto L_8014CE44; } // 8014CE28
L_8014CE2C:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CE2C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CE30
  c->r[4]=c->r[4]+0x00000020u; // 8014CE34
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CE38
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CE3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014CE2C; } // 8014CE40
L_8014CE44:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CE44
  c->r[3]=0u+0xCC010000u; // 8014CE48
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CE4C
  cmps(c,0,(int32_t)c->r[31],0); // 8014CE50
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014CE54
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8014CE58
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CE5C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8014CE60
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CE64
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CE68
  if (crb(c,2)) { goto L_8014CE78; } // 8014CE6C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8014CE70
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8014CE74
L_8014CE78:;
  cmps(c,1,(int32_t)c->r[29],0); // 8014CE78
  c->r[6]=0u+0x00000000u; // 8014CE7C
  if (!crb(c,5)) { goto L_8014CF90; } // 8014CE80
  cmps(c,0,(int32_t)c->r[29],8); // 8014CE84
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 8014CE88
  if (!crb(c,1)) { goto L_8014CF5C; } // 8014CE8C
  c->r[5]=0u+0x00000000u; // 8014CE90
  if (crb(c,4)) { goto L_8014CEAC; } // 8014CE94
  c->r[3]=0u+0x80000000u; // 8014CE98
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8014CE9C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8014CEA0
  if (crb(c,1)) { goto L_8014CEAC; } // 8014CEA4
  c->r[5]=0u+0x00000001u; // 8014CEA8
L_8014CEAC:;
  cmps(c,0,(int32_t)c->r[5],0); // 8014CEAC
  if (crb(c,2)) { goto L_8014CF5C; } // 8014CEB0
  c->r[0]=c->r[4]+0x00000007u; // 8014CEB4
  c->r[5]=c->r[30]|c->r[30]; // 8014CEB8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8014CEBC
  c->r[3]=0u+0xCC010000u; // 8014CEC0
  c->ctr=c->r[0]; // 8014CEC4
  cmps(c,0,(int32_t)c->r[4],0); // 8014CEC8
  if (!crb(c,1)) { goto L_8014CF5C; } // 8014CECC
L_8014CED0:;
  {uint32_t ea=c->r[5]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CED0
  c->r[6]=c->r[6]+0x00000008u; // 8014CED4
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CED8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CEDC
  {uint32_t ea=c->r[5]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014CEE0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CEE4
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CEE8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8014CEEC
  {uint32_t ea=c->r[5]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CEF0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CEF4
  {uint32_t ea=c->r[5]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CEF8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CEFC
  {uint32_t ea=c->r[5]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CF00
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CF04
  {uint32_t ea=c->r[5]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CF08
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CF0C
  {uint32_t ea=c->r[5]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CF10
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CF14
  {uint32_t ea=c->r[5]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CF18
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CF1C
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CF20
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CF24
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CF28
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CF2C
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CF30
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CF34
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CF38
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CF3C
  {uint32_t ea=c->r[5]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CF40
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CF44
  {uint32_t ea=c->r[5]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CF48
  c->r[5]=c->r[5]+0x00000100u; // 8014CF4C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CF50
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CF54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014CED0; } // 8014CF58
L_8014CF5C:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 8014CF5C
  c->r[0]=c->r[29]-c->r[6]; // 8014CF60
  c->r[4]=c->r[30]+c->r[3]; // 8014CF64
  c->r[3]=0u+0xCC010000u; // 8014CF68
  c->ctr=c->r[0]; // 8014CF6C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 8014CF70
  if (!crb(c,0)) { goto L_8014CF90; } // 8014CF74
L_8014CF78:;
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CF78
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CF7C
  c->r[4]=c->r[4]+0x00000020u; // 8014CF80
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014CF84
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CF88
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014CF78; } // 8014CF8C
L_8014CF90:;
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014CF90
  c->r[3]=0u+0xCC010000u; // 8014CF94
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CF98
  cmps(c,0,(int32_t)c->r[31],0); // 8014CF9C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014CFA0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8014CFA4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8014CFA8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014CFAC
  if (crb(c,2)) { goto L_8014CFBC; } // 8014CFB0
  c->r[0]=R32(c->r[31]+0x00000008u); // 8014CFB4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8014CFB8
L_8014CFBC:;
  cmps(c,1,(int32_t)c->r[29],0); // 8014CFBC
  c->r[6]=0u+0x00000000u; // 8014CFC0
  if (!crb(c,5)) { goto L_8014D0D4; } // 8014CFC4
  cmps(c,0,(int32_t)c->r[29],8); // 8014CFC8
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 8014CFCC
  if (!crb(c,1)) { goto L_8014D0A0; } // 8014CFD0
  c->r[5]=0u+0x00000000u; // 8014CFD4
  if (crb(c,4)) { goto L_8014CFF0; } // 8014CFD8
  c->r[3]=0u+0x80000000u; // 8014CFDC
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8014CFE0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8014CFE4
  if (crb(c,1)) { goto L_8014CFF0; } // 8014CFE8
  c->r[5]=0u+0x00000001u; // 8014CFEC
L_8014CFF0:;
  cmps(c,0,(int32_t)c->r[5],0); // 8014CFF0
  if (crb(c,2)) { goto L_8014D0A0; } // 8014CFF4
  c->r[0]=c->r[4]+0x00000007u; // 8014CFF8
  c->r[5]=c->r[30]|c->r[30]; // 8014CFFC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8014D000
  c->r[3]=0u+0xCC010000u; // 8014D004
  c->ctr=c->r[0]; // 8014D008
  cmps(c,0,(int32_t)c->r[4],0); // 8014D00C
  if (!crb(c,1)) { goto L_8014D0A0; } // 8014D010
L_8014D014:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D014
  c->r[6]=c->r[6]+0x00000008u; // 8014D018
  {uint32_t ea=c->r[5]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D01C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014D020
  {uint32_t ea=c->r[5]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014D024
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014D028
  {uint32_t ea=c->r[5]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D02C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8014D030
  {uint32_t ea=c->r[5]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D034
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014D038
  {uint32_t ea=c->r[5]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D03C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014D040
  {uint32_t ea=c->r[5]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D044
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014D048
  {uint32_t ea=c->r[5]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D04C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014D050
  {uint32_t ea=c->r[5]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D054
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014D058
  {uint32_t ea=c->r[5]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D05C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014D060
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D064
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014D068
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D06C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014D070
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D074
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014D078
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D07C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014D080
  {uint32_t ea=c->r[5]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D084
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014D088
  {uint32_t ea=c->r[5]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D08C
  c->r[5]=c->r[5]+0x00000100u; // 8014D090
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014D094
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014D098
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014D014; } // 8014D09C
L_8014D0A0:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 8014D0A0
  c->r[0]=c->r[29]-c->r[6]; // 8014D0A4
  c->r[4]=c->r[30]+c->r[3]; // 8014D0A8
  c->r[3]=0u+0xCC010000u; // 8014D0AC
  c->ctr=c->r[0]; // 8014D0B0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 8014D0B4
  if (!crb(c,0)) { goto L_8014D0D4; } // 8014D0B8
L_8014D0BC:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D0BC
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D0C0
  c->r[4]=c->r[4]+0x00000020u; // 8014D0C4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8014D0C8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8014D0CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014D0BC; } // 8014D0D0
L_8014D0D4:;
  c->r[11]=c->r[1]+0x00000020u; // 8014D0D4
  c->lr=0x8014D0DCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014D0D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014D0DC
  c->lr=c->r[0]; // 8014D0E0
  c->r[1]=c->r[1]+0x00000020u; // 8014D0E4
  return; // 8014D0E8
}

// DrawQuad__Q34nw4r3lyt6detailFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt4SizeUcPA4_CQ34nw4r4math4VEC2PCQ34nw4r2ut5ColorUc
void f_8014D0EC(Ctx* __restrict c) {
  trace_call(0x8014D0ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014D0EC
  c->r[0]=c->lr; // 8014D0F0
  W32(c->r[1]+0x00000054u,c->r[0]); // 8014D0F4
  c->r[11]=c->r[1]+0x00000050u; // 8014D0F8
  c->lr=0x8014D100u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014D0FC
  c->r[0]=0u+0xFFFFFFFFu; // 8014D100
  cmps(c,0,(int32_t)c->r[7],0); // 8014D104
  W32(c->r[1]+0x00000010u,c->r[0]); // 8014D108
  c->r[26]=c->r[3]|c->r[3]; // 8014D10C
  c->r[27]=c->r[4]|c->r[4]; // 8014D110
  c->r[28]=c->r[5]|c->r[5]; // 8014D114
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014D118
  c->r[29]=c->r[6]|c->r[6]; // 8014D11C
  c->r[30]=c->r[7]|c->r[7]; // 8014D120
  c->r[31]=c->r[8]|c->r[8]; // 8014D124
  W32(c->r[1]+0x00000018u,c->r[0]); // 8014D128
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8014D12C
  if (crb(c,2)) { goto L_8014D1A4; } // 8014D130
  c->r[24]=c->r[30]|c->r[30]; // 8014D134
  c->r[23]=c->r[1]+0x00000010u; // 8014D138
  c->r[25]=0u+0x00000000u; // 8014D13C
L_8014D140:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 8014D140
  c->r[5]=c->r[31]|c->r[31]; // 8014D144
  c->r[3]=c->r[1]+0x0000000Cu; // 8014D148
  c->r[4]=c->r[1]+0x00000008u; // 8014D14C
  W8(c->r[1]+0x00000008u,c->r[0]); // 8014D150
  c->r[0]=R8(c->r[24]+0x00000001u); // 8014D154
  W8(c->r[1]+0x00000009u,c->r[0]); // 8014D158
  c->r[0]=R8(c->r[24]+0x00000002u); // 8014D15C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8014D160
  c->r[0]=R8(c->r[24]+0x00000003u); // 8014D164
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8014D168
  c->lr=0x8014D170u; f_8014CA54(c); // 8014D16C
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 8014D170
  c->r[25]=c->r[25]+0x00000001u; // 8014D174
  c->r[0]=R8(c->r[1]+0x0000000Du); // 8014D178
  cmps(c,0,(int32_t)c->r[25],4); // 8014D17C
  W8(c->r[23]+0x00000000u,c->r[3]); // 8014D180
  c->r[24]=c->r[24]+0x00000004u; // 8014D184
  c->r[3]=R8(c->r[1]+0x0000000Eu); // 8014D188
  W8(c->r[23]+0x00000001u,c->r[0]); // 8014D18C
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 8014D190
  W8(c->r[23]+0x00000002u,c->r[3]); // 8014D194
  W8(c->r[23]+0x00000003u,c->r[0]); // 8014D198
  c->r[23]=c->r[23]+0x00000004u; // 8014D19C
  if (crb(c,0)) { IRQCHK(c); goto L_8014D140; } // 8014D1A0
L_8014D1A4:;
  c->r[3]=0u-c->r[30]; // 8014D1A4
  c->r[0]=c->r[1]+0x00000010u; // 8014D1A8
  c->r[4]=c->r[3]|c->r[30]; // 8014D1AC
  c->r[5]=c->r[28]|c->r[28]; // 8014D1B0
  c->r[7]=sraw(c,c->r[4],31); // 8014D1B4
  c->r[3]=c->r[26]|c->r[26]; // 8014D1B8
  c->r[4]=c->r[27]|c->r[27]; // 8014D1BC
  c->r[6]=c->r[29]|c->r[29]; // 8014D1C0
  c->r[7]=c->r[0]&c->r[7]; // 8014D1C4
  c->lr=0x8014D1CCu; f_8014CB8C(c); // 8014D1C8
  c->r[11]=c->r[1]+0x00000050u; // 8014D1CC
  c->lr=0x8014D1D4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014D1D0
  c->r[0]=R32(c->r[1]+0x00000054u); // 8014D1D4
  c->lr=c->r[0]; // 8014D1D8
  c->r[1]=c->r[1]+0x00000050u; // 8014D1DC
  return; // 8014D1E0
}

// BindAnimation__Q24nw4r3lytFPQ34nw4r3lyt5GroupPQ34nw4r3lyt13AnimTransformbb
void f_8014D1E4(Ctx* __restrict c) {
  trace_call(0x8014D1E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014D1E4
  c->r[0]=c->lr; // 8014D1E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014D1EC
  c->r[11]=c->r[1]+0x00000020u; // 8014D1F0
  c->lr=0x8014D1F8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014D1F4
  c->r[31]=R32(c->r[3]+0x00000010u); // 8014D1F8
  c->r[27]=c->r[4]|c->r[4]; // 8014D1FC
  c->r[28]=c->r[5]|c->r[5]; // 8014D200
  c->r[29]=c->r[6]|c->r[6]; // 8014D204
  c->r[30]=c->r[3]+0x00000010u; // 8014D208
  goto L_8014D234; // 8014D20C
L_8014D210:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8014D210
  c->r[4]=c->r[27]|c->r[27]; // 8014D214
  c->r[5]=c->r[28]|c->r[28]; // 8014D218
  c->r[6]=c->r[29]|c->r[29]; // 8014D21C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014D220
  c->r[12]=R32(c->r[12]+0x00000044u); // 8014D224
  c->ctr=c->r[12]; // 8014D228
  if (true) { c->lr=0x8014D230u; dispatch(c,c->ctr); } // 8014D22C
  c->r[31]=R32(c->r[31]+0x00000000u); // 8014D230
L_8014D234:;
  cmpu(c,0,c->r[31],c->r[30]); // 8014D234
  if (!crb(c,2)) { IRQCHK(c); goto L_8014D210; } // 8014D238
  c->r[11]=c->r[1]+0x00000020u; // 8014D23C
  c->lr=0x8014D244u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014D240
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014D244
  c->lr=c->r[0]; // 8014D248
  c->r[1]=c->r[1]+0x00000020u; // 8014D24C
  return; // 8014D250
}

// PPCMfmsr
void f_8014D254(Ctx* __restrict c) {
  trace_call(0x8014D254u);
  c->r[3]=c->msr; // 8014D254
  return; // 8014D258
}

// PPCMtmsr
void f_8014D25C(Ctx* __restrict c) {
  trace_call(0x8014D25Cu);
  c->msr=c->r[3]; // 8014D25C
  return; // 8014D260
}

// PPCMfhid0
void f_8014D264(Ctx* __restrict c) {
  trace_call(0x8014D264u);
  c->r[3]=mfspr(c,1008); // 8014D264
  return; // 8014D268
}

// fn_8014D26C
void f_8014D26C(Ctx* __restrict c) {
  mtspr(c,1008,c->r[3]); // 8014D26C
  return; // 8014D270
}

// PPCMfl2cr
void f_8014D274(Ctx* __restrict c) {
  trace_call(0x8014D274u);
  c->r[3]=mfspr(c,1017); // 8014D274
  return; // 8014D278
}

// PPCMtl2cr
void f_8014D27C(Ctx* __restrict c) {
  trace_call(0x8014D27Cu);
  mtspr(c,1017,c->r[3]); // 8014D27C
  return; // 8014D280
}

// PPCMtdec
void f_8014D284(Ctx* __restrict c) {
  trace_call(0x8014D284u);
  mtspr(c,22,c->r[3]); // 8014D284
  return; // 8014D288
}

// fn_8014D28C
void f_8014D28C(Ctx* __restrict c) {
  sc(c,0x8014D28Cu); // 8014D28C
  return; // 8014D290
}

// PPCHalt
void f_8014D294(Ctx* __restrict c) {
  trace_call(0x8014D294u);
  /* sync */ // 8014D294
L_8014D298:;
  c->r[0]=c->r[0]|0x00000000u; // 8014D298
  c->r[3]=0u+0x00000000u; // 8014D29C
  c->r[0]=c->r[0]|0x00000000u; // 8014D2A0
  IRQCHK(c); goto L_8014D298; // 8014D2A4
}

// PPCMtmmcr0
void f_8014D2A8(Ctx* __restrict c) {
  trace_call(0x8014D2A8u);
  mtspr(c,952,c->r[3]); // 8014D2A8
  return; // 8014D2AC
}

// PPCMtmmcr1
void f_8014D2B0(Ctx* __restrict c) {
  trace_call(0x8014D2B0u);
  mtspr(c,956,c->r[3]); // 8014D2B0
  return; // 8014D2B4
}

// PPCMtpmc1
void f_8014D2B8(Ctx* __restrict c) {
  trace_call(0x8014D2B8u);
  mtspr(c,953,c->r[3]); // 8014D2B8
  return; // 8014D2BC
}

// PPCMtpmc2
void f_8014D2C0(Ctx* __restrict c) {
  trace_call(0x8014D2C0u);
  mtspr(c,954,c->r[3]); // 8014D2C0
  return; // 8014D2C4
}

// PPCMtpmc3
void f_8014D2C8(Ctx* __restrict c) {
  trace_call(0x8014D2C8u);
  mtspr(c,957,c->r[3]); // 8014D2C8
  return; // 8014D2CC
}

// PPCMtpmc4
void f_8014D2D0(Ctx* __restrict c) {
  trace_call(0x8014D2D0u);
  mtspr(c,958,c->r[3]); // 8014D2D0
  return; // 8014D2D4
}

// PPCMffpscr
void f_8014D2D8(Ctx* __restrict c) {
  trace_call(0x8014D2D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014D2D8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8014D2DC
  c->f[31]=u2d((uint64_t)c->fpscr); // 8014D2E0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8014D2E4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8014D2E8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8014D2EC
  c->r[1]=c->r[1]+0x00000020u; // 8014D2F0
  return; // 8014D2F4
}

// PPCMtfpscr
void f_8014D2F8(Ctx* __restrict c) {
  trace_call(0x8014D2F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014D2F8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8014D2FC
  c->r[4]=0u+0x00000000u; // 8014D300
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8014D304
  W32(c->r[1]+0x00000008u,c->r[4]); // 8014D308
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8014D30C
  c->fpscr=(uint32_t)d2u(c->f[31]); // 8014D310
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8014D314
  c->r[1]=c->r[1]+0x00000020u; // 8014D318
  return; // 8014D31C
}

// PPCMfhid2
void f_8014D320(Ctx* __restrict c) {
  trace_call(0x8014D320u);
  c->r[3]=mfspr(c,920); // 8014D320
  return; // 8014D324
}

// PPCMthid2
void f_8014D328(Ctx* __restrict c) {
  trace_call(0x8014D328u);
  mtspr(c,920,c->r[3]); // 8014D328
  return; // 8014D32C
}

// PPCMtwpar
void f_8014D330(Ctx* __restrict c) {
  trace_call(0x8014D330u);
  mtspr(c,921,c->r[3]); // 8014D330
  return; // 8014D334
}

// PPCDisableSpeculation
void f_8014D338(Ctx* __restrict c) {
  trace_call(0x8014D338u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014D338
  c->r[0]=c->lr; // 8014D33C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014D340
  c->lr=0x8014D348u; f_8014D264(c); // 8014D344
  c->r[3]=c->r[3]|0x00000200u; // 8014D348
  c->lr=0x8014D350u; f_8014D26C(c); // 8014D34C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014D350
  c->lr=c->r[0]; // 8014D354
  c->r[1]=c->r[1]+0x00000010u; // 8014D358
  return; // 8014D35C
}

// PPCSetFpNonIEEEMode
void f_8014D360(Ctx* __restrict c) {
  trace_call(0x8014D360u);
  c->fpscr|=0x00000004u; // 8014D360
  return; // 8014D364
}

// PPCMthid4
void f_8014D368(Ctx* __restrict c) {
  trace_call(0x8014D368u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014D368
  c->r[0]=c->lr; // 8014D36C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014D370
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 8014D374
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014D378
  c->r[31]=c->r[3]|c->r[3]; // 8014D37C
  if (crb(c,2)) { goto L_8014D38C; } // 8014D380
  mtspr(c,1011,c->r[3]); // 8014D384
  goto L_8014D3A4; // 8014D388
L_8014D38C:;
  c->r[3]=0u+0x802C0000u; // 8014D38C
  c->r[3]=c->r[3]+0x00006818u; // 8014D390
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014D394
  c->lr=0x8014D39Cu; f_801506B4(c); // 8014D398
  c->r[31]=c->r[31]|0x80000000u; // 8014D39C
  mtspr(c,1011,c->r[31]); // 8014D3A0
L_8014D3A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014D3A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014D3A8
  c->lr=c->r[0]; // 8014D3AC
  c->r[1]=c->r[1]+0x00000010u; // 8014D3B0
  return; // 8014D3B4
}

// __OSFPRInit
void f_8014D3B8(Ctx* __restrict c) {
  trace_call(0x8014D3B8u);
  c->r[3]=c->msr; // 8014D3B8
  c->r[3]=c->r[3]|0x00002000u; // 8014D3BC
  c->msr=c->r[3]; // 8014D3C0
  c->r[3]=mfspr(c,920); // 8014D3C4
  c->r[3]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[3]); // 8014D3C8
  if (crb(c,2)) { goto L_8014D458; } // 8014D3CC
  c->r[3]=0u+0x804E0000u; // 8014D3D0
  c->r[3]=c->r[3]+0xFFFF96E8u; // 8014D3D4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 8014D3D8
  {double t0=c->f[0], t1=c->ps1[0]; c->f[1]=t0; c->ps1[1]=t1;} // 8014D3DC
  {double t0=c->f[0], t1=c->ps1[0]; c->f[2]=t0; c->ps1[2]=t1;} // 8014D3E0
  {double t0=c->f[0], t1=c->ps1[0]; c->f[3]=t0; c->ps1[3]=t1;} // 8014D3E4
  {double t0=c->f[0], t1=c->ps1[0]; c->f[4]=t0; c->ps1[4]=t1;} // 8014D3E8
  {double t0=c->f[0], t1=c->ps1[0]; c->f[5]=t0; c->ps1[5]=t1;} // 8014D3EC
  {double t0=c->f[0], t1=c->ps1[0]; c->f[6]=t0; c->ps1[6]=t1;} // 8014D3F0
  {double t0=c->f[0], t1=c->ps1[0]; c->f[7]=t0; c->ps1[7]=t1;} // 8014D3F4
  {double t0=c->f[0], t1=c->ps1[0]; c->f[8]=t0; c->ps1[8]=t1;} // 8014D3F8
  {double t0=c->f[0], t1=c->ps1[0]; c->f[9]=t0; c->ps1[9]=t1;} // 8014D3FC
  {double t0=c->f[0], t1=c->ps1[0]; c->f[10]=t0; c->ps1[10]=t1;} // 8014D400
  {double t0=c->f[0], t1=c->ps1[0]; c->f[11]=t0; c->ps1[11]=t1;} // 8014D404
  {double t0=c->f[0], t1=c->ps1[0]; c->f[12]=t0; c->ps1[12]=t1;} // 8014D408
  {double t0=c->f[0], t1=c->ps1[0]; c->f[13]=t0; c->ps1[13]=t1;} // 8014D40C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[14]=t0; c->ps1[14]=t1;} // 8014D410
  {double t0=c->f[0], t1=c->ps1[0]; c->f[15]=t0; c->ps1[15]=t1;} // 8014D414
  {double t0=c->f[0], t1=c->ps1[0]; c->f[16]=t0; c->ps1[16]=t1;} // 8014D418
  {double t0=c->f[0], t1=c->ps1[0]; c->f[17]=t0; c->ps1[17]=t1;} // 8014D41C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[18]=t0; c->ps1[18]=t1;} // 8014D420
  {double t0=c->f[0], t1=c->ps1[0]; c->f[19]=t0; c->ps1[19]=t1;} // 8014D424
  {double t0=c->f[0], t1=c->ps1[0]; c->f[20]=t0; c->ps1[20]=t1;} // 8014D428
  {double t0=c->f[0], t1=c->ps1[0]; c->f[21]=t0; c->ps1[21]=t1;} // 8014D42C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[22]=t0; c->ps1[22]=t1;} // 8014D430
  {double t0=c->f[0], t1=c->ps1[0]; c->f[23]=t0; c->ps1[23]=t1;} // 8014D434
  {double t0=c->f[0], t1=c->ps1[0]; c->f[24]=t0; c->ps1[24]=t1;} // 8014D438
  {double t0=c->f[0], t1=c->ps1[0]; c->f[25]=t0; c->ps1[25]=t1;} // 8014D43C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[26]=t0; c->ps1[26]=t1;} // 8014D440
  {double t0=c->f[0], t1=c->ps1[0]; c->f[27]=t0; c->ps1[27]=t1;} // 8014D444
  {double t0=c->f[0], t1=c->ps1[0]; c->f[28]=t0; c->ps1[28]=t1;} // 8014D448
  {double t0=c->f[0], t1=c->ps1[0]; c->f[29]=t0; c->ps1[29]=t1;} // 8014D44C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[30]=t0; c->ps1[30]=t1;} // 8014D450
  {double t0=c->f[0], t1=c->ps1[0]; c->f[31]=t0; c->ps1[31]=t1;} // 8014D454
L_8014D458:;
  {uint32_t ea=c->r[13]+0xFFFFA9B0u; c->f[0]=RF64(ea);} // 8014D458
  c->f[1]=c->f[0]; // 8014D45C
  c->f[2]=c->f[0]; // 8014D460
  c->f[3]=c->f[0]; // 8014D464
  c->f[4]=c->f[0]; // 8014D468
  c->f[5]=c->f[0]; // 8014D46C
  c->f[6]=c->f[0]; // 8014D470
  c->f[7]=c->f[0]; // 8014D474
  c->f[8]=c->f[0]; // 8014D478
  c->f[9]=c->f[0]; // 8014D47C
  c->f[10]=c->f[0]; // 8014D480
  c->f[11]=c->f[0]; // 8014D484
  c->f[12]=c->f[0]; // 8014D488
  c->f[13]=c->f[0]; // 8014D48C
  c->f[14]=c->f[0]; // 8014D490
  c->f[15]=c->f[0]; // 8014D494
  c->f[16]=c->f[0]; // 8014D498
  c->f[17]=c->f[0]; // 8014D49C
  c->f[18]=c->f[0]; // 8014D4A0
  c->f[19]=c->f[0]; // 8014D4A4
  c->f[20]=c->f[0]; // 8014D4A8
  c->f[21]=c->f[0]; // 8014D4AC
  c->f[22]=c->f[0]; // 8014D4B0
  c->f[23]=c->f[0]; // 8014D4B4
  c->f[24]=c->f[0]; // 8014D4B8
  c->f[25]=c->f[0]; // 8014D4BC
  c->f[26]=c->f[0]; // 8014D4C0
  c->f[27]=c->f[0]; // 8014D4C4
  c->f[28]=c->f[0]; // 8014D4C8
  c->f[29]=c->f[0]; // 8014D4CC
  c->f[30]=c->f[0]; // 8014D4D0
  c->f[31]=c->f[0]; // 8014D4D4
  c->fpscr=(uint32_t)d2u(c->f[0]); // 8014D4D8
  return; // 8014D4DC
}

// __OSGetIOSRev
void f_8014D4E0(Ctx* __restrict c) {
  trace_call(0x8014D4E0u);
  c->r[4]=0u+0xC0000000u; // 8014D4E0
  c->r[10]=R32(c->r[4]+0x00003144u); // 8014D4E4
  c->r[9]=R32(c->r[4]+0x00003140u); // 8014D4E8
  c->r[0]=rotl(c->r[10],28)&0x0000000Fu; // 8014D4EC
  c->r[6]=rotl(c->r[10],12)&0x0000000Fu; // 8014D4F0
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8014D4F4
  c->r[7]=rotl(c->r[9],8)&0x000000FFu; // 8014D4F8
  c->r[0]=rotl(c->r[10],0)&0x0000000Fu; // 8014D4FC
  W8(c->r[3]+0x00000000u,c->r[7]); // 8014D500
  c->r[8]=rotl(c->r[9],16)&0x000000FFu; // 8014D504
  c->r[4]=c->r[0]+c->r[4]; // 8014D508
  c->r[0]=c->r[4]+0x000007D0u; // 8014D50C
  c->r[5]=rotl(c->r[10],20)&0x0000000Fu; // 8014D510
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)10); // 8014D514
  W8(c->r[3]+0x00000001u,c->r[8]); // 8014D518
  c->r[5]=rotl(c->r[10],24)&0x0000000Fu; // 8014D51C
  c->r[8]=rotl(c->r[9],24)&0x000000FFu; // 8014D520
  W8(c->r[3]+0x00000003u,c->r[9]); // 8014D524
  c->r[4]=c->r[5]+c->r[4]; // 8014D528
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)10); // 8014D52C
  c->r[7]=rotl(c->r[10],16)&0x0000000Fu; // 8014D530
  W8(c->r[3]+0x00000002u,c->r[8]); // 8014D534
  c->r[6]=c->r[7]+c->r[6]; // 8014D538
  W8(c->r[3]+0x00000005u,c->r[4]); // 8014D53C
  W8(c->r[3]+0x00000004u,c->r[6]); // 8014D540
  W16(c->r[3]+0x00000006u,c->r[0]); // 8014D544
  return; // 8014D548
}

// OSGetConsoleType
void f_8014D54C(Ctx* __restrict c) {
  trace_call(0x8014D54Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014D54C
  c->r[0]=c->lr; // 8014D550
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014D554
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014D558
  c->r[3]=R32(c->r[13]+0xFFFFA9C8u); // 8014D55C
  cmps(c,0,(int32_t)c->r[3],0); // 8014D560
  if (crb(c,2)) { goto L_8014D574; } // 8014D564
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 8014D568
  cmps(c,0,(int32_t)c->r[0],0); // 8014D56C
  if (!crb(c,2)) { goto L_8014D580; } // 8014D570
L_8014D574:;
  c->r[3]=0u+0x10000000u; // 8014D574
  c->r[3]=c->r[3]+0x00000002u; // 8014D578
  goto L_8014D7BC; // 8014D57C
L_8014D580:;
  c->r[3]=0u+0x80000000u; // 8014D580
  c->r[0]=R16(c->r[3]+0x000030E6u); // 8014D584
  c->r[31]=R32(c->r[3]+0x00003138u); // 8014D588
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 8014D58C
  if (crb(c,2)) { goto L_8014D6CC; } // 8014D590
  c->r[0]=R16(c->r[3]+0x000030E6u); // 8014D594
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 8014D598
  cmps(c,0,(int32_t)c->r[0],515); // 8014D59C
  if (crb(c,2)) { goto L_8014D5D4; } // 8014D5A0
  if (!crb(c,0)) { goto L_8014D5C8; } // 8014D5A4
  cmps(c,0,(int32_t)c->r[0],4); // 8014D5A8
  if (!crb(c,0)) { goto L_8014D5BC; } // 8014D5AC
  cmps(c,0,(int32_t)c->r[0],2); // 8014D5B0
  if (!crb(c,0)) { goto L_8014D5D4; } // 8014D5B4
  goto L_8014D6CC; // 8014D5B8
L_8014D5BC:;
  cmps(c,0,(int32_t)c->r[0],513); // 8014D5BC
  if (!crb(c,0)) { goto L_8014D640; } // 8014D5C0
  goto L_8014D6CC; // 8014D5C4
L_8014D5C8:;
  cmps(c,0,(int32_t)c->r[0],768); // 8014D5C8
  if (crb(c,2)) { goto L_8014D6C4; } // 8014D5CC
  goto L_8014D6CC; // 8014D5D0
L_8014D5D4:;
  cmps(c,0,(int32_t)c->r[31],2); // 8014D5D4
  if (crb(c,2)) { goto L_8014D618; } // 8014D5D8
  if (!crb(c,0)) { goto L_8014D5F0; } // 8014D5DC
  cmps(c,0,(int32_t)c->r[31],0); // 8014D5E0
  if (crb(c,2)) { goto L_8014D608; } // 8014D5E4
  if (!crb(c,0)) { goto L_8014D610; } // 8014D5E8
  goto L_8014D630; // 8014D5EC
L_8014D5F0:;
  cmps(c,0,(int32_t)c->r[31],17); // 8014D5F0
  if (crb(c,2)) { goto L_8014D628; } // 8014D5F4
  if (!crb(c,0)) { goto L_8014D630; } // 8014D5F8
  cmps(c,0,(int32_t)c->r[31],16); // 8014D5FC
  if (!crb(c,0)) { goto L_8014D620; } // 8014D600
  goto L_8014D630; // 8014D604
L_8014D608:;
  c->r[3]=0u+0x00000010u; // 8014D608
  goto L_8014D7BC; // 8014D60C
L_8014D610:;
  c->r[3]=0u+0x00000011u; // 8014D610
  goto L_8014D7BC; // 8014D614
L_8014D618:;
  c->r[3]=0u+0x00000012u; // 8014D618
  goto L_8014D7BC; // 8014D61C
L_8014D620:;
  c->r[3]=0u+0x00000020u; // 8014D620
  goto L_8014D7BC; // 8014D624
L_8014D628:;
  c->r[3]=0u+0x00000021u; // 8014D628
  goto L_8014D7BC; // 8014D62C
L_8014D630:;
  cmpu(c,0,c->r[31],0x00000011u); // 8014D630
  if (!crb(c,1)) { goto L_8014D640; } // 8014D634
  c->r[3]=0u+0x00000021u; // 8014D638
  goto L_8014D7BC; // 8014D63C
L_8014D640:;
  cmps(c,0,(int32_t)c->r[31],2); // 8014D640
  if (crb(c,2)) { goto L_8014D68C; } // 8014D644
  if (!crb(c,0)) { goto L_8014D65C; } // 8014D648
  cmps(c,0,(int32_t)c->r[31],0); // 8014D64C
  if (crb(c,2)) { goto L_8014D674; } // 8014D650
  if (!crb(c,0)) { goto L_8014D680; } // 8014D654
  goto L_8014D6B0; // 8014D658
L_8014D65C:;
  cmps(c,0,(int32_t)c->r[31],17); // 8014D65C
  if (crb(c,2)) { goto L_8014D6A4; } // 8014D660
  if (!crb(c,0)) { goto L_8014D6B0; } // 8014D664
  cmps(c,0,(int32_t)c->r[31],16); // 8014D668
  if (!crb(c,0)) { goto L_8014D698; } // 8014D66C
  goto L_8014D6B0; // 8014D670
L_8014D674:;
  c->r[3]=0u+0x10000000u; // 8014D674
  c->r[3]=c->r[3]+0x00000010u; // 8014D678
  goto L_8014D7BC; // 8014D67C
L_8014D680:;
  c->r[3]=0u+0x10000000u; // 8014D680
  c->r[3]=c->r[3]+0x00000011u; // 8014D684
  goto L_8014D7BC; // 8014D688
L_8014D68C:;
  c->r[3]=0u+0x10000000u; // 8014D68C
  c->r[3]=c->r[3]+0x00000012u; // 8014D690
  goto L_8014D7BC; // 8014D694
L_8014D698:;
  c->r[3]=0u+0x10000000u; // 8014D698
  c->r[3]=c->r[3]+0x00000020u; // 8014D69C
  goto L_8014D7BC; // 8014D6A0
L_8014D6A4:;
  c->r[3]=0u+0x10000000u; // 8014D6A4
  c->r[3]=c->r[3]+0x00000021u; // 8014D6A8
  goto L_8014D7BC; // 8014D6AC
L_8014D6B0:;
  cmpu(c,0,c->r[31],0x00000011u); // 8014D6B0
  if (!crb(c,1)) { goto L_8014D6C4; } // 8014D6B4
  c->r[3]=0u+0x10000000u; // 8014D6B8
  c->r[3]=c->r[3]+0x00000021u; // 8014D6BC
  goto L_8014D7BC; // 8014D6C0
L_8014D6C4:;
  c->r[3]=0u+0x00000100u; // 8014D6C4
  goto L_8014D7BC; // 8014D6C8
L_8014D6CC:;
  c->lr=0x8014D6D0u; f_80154E8C(c); // 8014D6CC
  cmps(c,0,(int32_t)c->r[31],2); // 8014D6D0
  if (crb(c,2)) { goto L_8014D73C; } // 8014D6D4
  if (!crb(c,0)) { goto L_8014D6EC; } // 8014D6D8
  cmps(c,0,(int32_t)c->r[31],0); // 8014D6DC
  if (crb(c,2)) { goto L_8014D704; } // 8014D6E0
  if (!crb(c,0)) { goto L_8014D720; } // 8014D6E4
  goto L_8014D790; // 8014D6E8
L_8014D6EC:;
  cmps(c,0,(int32_t)c->r[31],17); // 8014D6EC
  if (crb(c,2)) { goto L_8014D774; } // 8014D6F0
  if (!crb(c,0)) { goto L_8014D790; } // 8014D6F4
  cmps(c,0,(int32_t)c->r[31],16); // 8014D6F8
  if (!crb(c,0)) { goto L_8014D758; } // 8014D6FC
  goto L_8014D790; // 8014D700
L_8014D704:;
  c->r[0]=c->r[3]+0xFC000000u; // 8014D704
  c->r[3]=0u+0x10000000u; // 8014D708
  cmpu(c,0,c->r[0],0x00000000u); // 8014D70C
  c->r[3]=c->r[3]+0x00000010u; // 8014D710
  if (!crb(c,2)) { goto L_8014D7BC; } // 8014D714
  c->r[3]=0u+0x00000010u; // 8014D718
  goto L_8014D7BC; // 8014D71C
L_8014D720:;
  c->r[0]=c->r[3]+0xFC000000u; // 8014D720
  c->r[3]=0u+0x10000000u; // 8014D724
  cmpu(c,0,c->r[0],0x00000000u); // 8014D728
  c->r[3]=c->r[3]+0x00000011u; // 8014D72C
  if (!crb(c,2)) { goto L_8014D7BC; } // 8014D730
  c->r[3]=0u+0x00000011u; // 8014D734
  goto L_8014D7BC; // 8014D738
L_8014D73C:;
  c->r[0]=c->r[3]+0xFC000000u; // 8014D73C
  c->r[3]=0u+0x10000000u; // 8014D740
  cmpu(c,0,c->r[0],0x00000000u); // 8014D744
  c->r[3]=c->r[3]+0x00000012u; // 8014D748
  if (!crb(c,2)) { goto L_8014D7BC; } // 8014D74C
  c->r[3]=0u+0x00000012u; // 8014D750
  goto L_8014D7BC; // 8014D754
L_8014D758:;
  c->r[0]=c->r[3]+0xFC000000u; // 8014D758
  c->r[3]=0u+0x10000000u; // 8014D75C
  cmpu(c,0,c->r[0],0x00000000u); // 8014D760
  c->r[3]=c->r[3]+0x00000020u; // 8014D764
  if (!crb(c,2)) { goto L_8014D7BC; } // 8014D768
  c->r[3]=0u+0x00000020u; // 8014D76C
  goto L_8014D7BC; // 8014D770
L_8014D774:;
  c->r[0]=c->r[3]+0xFC000000u; // 8014D774
  c->r[3]=0u+0x10000000u; // 8014D778
  cmpu(c,0,c->r[0],0x00000000u); // 8014D77C
  c->r[3]=c->r[3]+0x00000021u; // 8014D780
  if (!crb(c,2)) { goto L_8014D7BC; } // 8014D784
  c->r[3]=0u+0x00000021u; // 8014D788
  goto L_8014D7BC; // 8014D78C
L_8014D790:;
  cmpu(c,0,c->r[31],0x00000011u); // 8014D790
  if (!crb(c,1)) { goto L_8014D7B4; } // 8014D794
  c->r[0]=c->r[3]+0xFC000000u; // 8014D798
  c->r[3]=0u+0x10000000u; // 8014D79C
  cmpu(c,0,c->r[0],0x00000000u); // 8014D7A0
  c->r[3]=c->r[3]+0x00000021u; // 8014D7A4
  if (!crb(c,2)) { goto L_8014D7BC; } // 8014D7A8
  c->r[3]=0u+0x00000021u; // 8014D7AC
  goto L_8014D7BC; // 8014D7B0
L_8014D7B4:;
  c->r[3]=R32(c->r[13]+0xFFFFA9C8u); // 8014D7B4
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 8014D7B8
L_8014D7BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014D7BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014D7C0
  c->lr=c->r[0]; // 8014D7C4
  c->r[1]=c->r[1]+0x00000010u; // 8014D7C8
  return; // 8014D7CC
}

// ClearArena
void f_8014D7D0(Ctx* __restrict c) {
  trace_call(0x8014D7D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014D7D0
  c->r[0]=c->lr; // 8014D7D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014D7D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014D7DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8014D7E0
  c->lr=0x8014D7E8u; f_8015637C(c); // 8014D7E4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 8014D7E8
  if (!crb(c,2)) { goto L_8014D838; } // 8014D7EC
  c->lr=0x8014D7F4u; f_8014F2C4(c); // 8014D7F0
  c->r[31]=c->r[3]|c->r[3]; // 8014D7F4
  c->lr=0x8014D7FCu; f_8014F2DC(c); // 8014D7F8
  c->r[31]=c->r[31]-c->r[3]; // 8014D7FC
  c->lr=0x8014D804u; f_8014F2DC(c); // 8014D800
  c->r[0]=0u+0x00040000u; // 8014D804
  cmpu(c,0,c->r[31],c->r[0]); // 8014D808
  if (!crb(c,1)) { goto L_8014D81C; } // 8014D80C
  c->r[30]=c->r[31]+0xFFFC0000u; // 8014D810
  c->r[30]=c->r[3]+c->r[30]; // 8014D814
  goto L_8014D820; // 8014D818
L_8014D81C:;
  c->r[30]=c->r[3]|c->r[3]; // 8014D81C
L_8014D820:;
  c->r[4]=c->r[31]|c->r[31]; // 8014D820
  c->lr=0x8014D828u; f_8014F8F4(c); // 8014D824
  c->r[3]=c->r[30]|c->r[30]; // 8014D828
  c->r[4]=0u+0x00040000u; // 8014D82C
  c->lr=0x8014D834u; f_8014F83C(c); // 8014D830
  goto L_8014D994; // 8014D834
L_8014D838:;
  c->r[31]=0u+0x80440000u; // 8014D838
  c->r[31]=c->r[31]+0xFFFFE180u; // 8014D83C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8014D840
  cmps(c,0,(int32_t)c->r[0],0); // 8014D844
  if (crb(c,2)) { goto L_8014D854; } // 8014D848
  c->r[0]=rotl(c->r[0],0)&0x30000000u; cr0(c,c->r[0]); // 8014D84C
  if (crb(c,2)) { goto L_8014D89C; } // 8014D850
L_8014D854:;
  c->lr=0x8014D858u; f_8014F2C4(c); // 8014D854
  c->r[31]=c->r[3]|c->r[3]; // 8014D858
  c->lr=0x8014D860u; f_8014F2DC(c); // 8014D85C
  c->r[31]=c->r[31]-c->r[3]; // 8014D860
  c->lr=0x8014D868u; f_8014F2DC(c); // 8014D864
  c->r[0]=0u+0x00040000u; // 8014D868
  cmpu(c,0,c->r[31],c->r[0]); // 8014D86C
  if (!crb(c,1)) { goto L_8014D880; } // 8014D870
  c->r[30]=c->r[31]+0xFFFC0000u; // 8014D874
  c->r[30]=c->r[3]+c->r[30]; // 8014D878
  goto L_8014D884; // 8014D87C
L_8014D880:;
  c->r[30]=c->r[3]|c->r[3]; // 8014D880
L_8014D884:;
  c->r[4]=c->r[31]|c->r[31]; // 8014D884
  c->lr=0x8014D88Cu; f_8014F8F4(c); // 8014D888
  c->r[3]=c->r[30]|c->r[30]; // 8014D88C
  c->r[4]=0u+0x00040000u; // 8014D890
  c->lr=0x8014D898u; f_8014F83C(c); // 8014D894
  goto L_8014D994; // 8014D898
L_8014D89C:;
  c->lr=0x8014D8A0u; f_8014F2DC(c); // 8014D89C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8014D8A0
  cmpu(c,0,c->r[3],c->r[0]); // 8014D8A4
  if (!crb(c,0)) { goto L_8014D994; } // 8014D8A8
  c->lr=0x8014D8B0u; f_8014F2C4(c); // 8014D8AC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8014D8B0
  cmpu(c,0,c->r[3],c->r[0]); // 8014D8B4
  if (crb(c,1)) { goto L_8014D904; } // 8014D8B8
  c->lr=0x8014D8C0u; f_8014F2C4(c); // 8014D8BC
  c->r[31]=c->r[3]|c->r[3]; // 8014D8C0
  c->lr=0x8014D8C8u; f_8014F2DC(c); // 8014D8C4
  c->r[31]=c->r[31]-c->r[3]; // 8014D8C8
  c->lr=0x8014D8D0u; f_8014F2DC(c); // 8014D8CC
  c->r[0]=0u+0x00040000u; // 8014D8D0
  cmpu(c,0,c->r[31],c->r[0]); // 8014D8D4
  if (!crb(c,1)) { goto L_8014D8E8; } // 8014D8D8
  c->r[30]=c->r[31]+0xFFFC0000u; // 8014D8DC
  c->r[30]=c->r[3]+c->r[30]; // 8014D8E0
  goto L_8014D8EC; // 8014D8E4
L_8014D8E8:;
  c->r[30]=c->r[3]|c->r[3]; // 8014D8E8
L_8014D8EC:;
  c->r[4]=c->r[31]|c->r[31]; // 8014D8EC
  c->lr=0x8014D8F4u; f_8014F8F4(c); // 8014D8F0
  c->r[3]=c->r[30]|c->r[30]; // 8014D8F4
  c->r[4]=0u+0x00040000u; // 8014D8F8
  c->lr=0x8014D900u; f_8014F83C(c); // 8014D8FC
  goto L_8014D994; // 8014D900
L_8014D904:;
  c->lr=0x8014D908u; f_8014F2DC(c); // 8014D904
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8014D908
  c->r[31]=c->r[0]-c->r[3]; // 8014D90C
  c->lr=0x8014D914u; f_8014F2DC(c); // 8014D910
  c->r[0]=0u+0x00040000u; // 8014D914
  cmpu(c,0,c->r[31],c->r[0]); // 8014D918
  if (!crb(c,1)) { goto L_8014D92C; } // 8014D91C
  c->r[30]=c->r[31]+0xFFFC0000u; // 8014D920
  c->r[30]=c->r[3]+c->r[30]; // 8014D924
  goto L_8014D930; // 8014D928
L_8014D92C:;
  c->r[30]=c->r[3]|c->r[3]; // 8014D92C
L_8014D930:;
  c->r[4]=c->r[31]|c->r[31]; // 8014D930
  c->lr=0x8014D938u; f_8014F8F4(c); // 8014D934
  c->r[3]=c->r[30]|c->r[30]; // 8014D938
  c->r[4]=0u+0x00040000u; // 8014D93C
  c->lr=0x8014D944u; f_8014F83C(c); // 8014D940
  c->r[3]=0u+0x80440000u; // 8014D944
  c->r[3]=c->r[3]+0xFFFFE180u; // 8014D948
  c->r[31]=R32(c->r[3]+0x00000010u); // 8014D94C
  c->lr=0x8014D954u; f_8014F2C4(c); // 8014D950
  cmpu(c,0,c->r[3],c->r[31]); // 8014D954
  if (!crb(c,1)) { goto L_8014D994; } // 8014D958
  c->lr=0x8014D960u; f_8014F2C4(c); // 8014D95C
  c->r[4]=c->r[3]-c->r[31]; // 8014D960
  c->r[0]=0u+0x00040000u; // 8014D964
  cmpu(c,0,c->r[4],c->r[0]); // 8014D968
  if (!crb(c,1)) { goto L_8014D97C; } // 8014D96C
  c->r[30]=c->r[4]+0xFFFC0000u; // 8014D970
  c->r[30]=c->r[31]+c->r[30]; // 8014D974
  goto L_8014D980; // 8014D978
L_8014D97C:;
  c->r[30]=c->r[31]|c->r[31]; // 8014D97C
L_8014D980:;
  c->r[3]=c->r[31]|c->r[31]; // 8014D980
  c->lr=0x8014D988u; f_8014F8F4(c); // 8014D984
  c->r[3]=c->r[30]|c->r[30]; // 8014D988
  c->r[4]=0u+0x00040000u; // 8014D98C
  c->lr=0x8014D994u; f_8014F83C(c); // 8014D990
L_8014D994:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014D994
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014D998
  c->r[30]=R32(c->r[1]+0x00000008u); // 8014D99C
  c->lr=c->r[0]; // 8014D9A0
  c->r[1]=c->r[1]+0x00000010u; // 8014D9A4
  return; // 8014D9A8
}

// ClearMEM2Arena
void f_8014D9AC(Ctx* __restrict c) {
  trace_call(0x8014D9ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014D9AC
  c->r[0]=c->lr; // 8014D9B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014D9B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014D9B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8014D9BC
  c->lr=0x8014D9C4u; f_8015637C(c); // 8014D9C0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 8014D9C4
  if (!crb(c,2)) { goto L_8014DA14; } // 8014D9C8
  c->lr=0x8014D9D0u; f_8014F2BC(c); // 8014D9CC
  c->r[31]=c->r[3]|c->r[3]; // 8014D9D0
  c->lr=0x8014D9D8u; f_8014F2D4(c); // 8014D9D4
  c->r[31]=c->r[31]-c->r[3]; // 8014D9D8
  c->lr=0x8014D9E0u; f_8014F2D4(c); // 8014D9DC
  c->r[0]=0u+0x00040000u; // 8014D9E0
  cmpu(c,0,c->r[31],c->r[0]); // 8014D9E4
  if (!crb(c,1)) { goto L_8014D9F8; } // 8014D9E8
  c->r[30]=c->r[31]+0xFFFC0000u; // 8014D9EC
  c->r[30]=c->r[3]+c->r[30]; // 8014D9F0
  goto L_8014D9FC; // 8014D9F4
L_8014D9F8:;
  c->r[30]=c->r[3]|c->r[3]; // 8014D9F8
L_8014D9FC:;
  c->r[4]=c->r[31]|c->r[31]; // 8014D9FC
  c->lr=0x8014DA04u; f_8014F8F4(c); // 8014DA00
  c->r[3]=c->r[30]|c->r[30]; // 8014DA04
  c->r[4]=0u+0x00040000u; // 8014DA08
  c->lr=0x8014DA10u; f_8014F83C(c); // 8014DA0C
  goto L_8014DB78; // 8014DA10
L_8014DA14:;
  c->r[31]=0u+0x80440000u; // 8014DA14
  c->r[31]=c->r[31]+0xFFFFE180u; // 8014DA18
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8014DA1C
  cmps(c,0,(int32_t)c->r[0],0); // 8014DA20
  if (crb(c,2)) { goto L_8014DA38; } // 8014DA24
  c->r[3]=rotl(c->r[0],0)&0x30000000u; // 8014DA28
  c->r[0]=c->r[3]+0xF0000000u; // 8014DA2C
  cmpu(c,0,c->r[0],0x00000000u); // 8014DA30
  if (crb(c,2)) { goto L_8014DA80; } // 8014DA34
L_8014DA38:;
  c->lr=0x8014DA3Cu; f_8014F2BC(c); // 8014DA38
  c->r[31]=c->r[3]|c->r[3]; // 8014DA3C
  c->lr=0x8014DA44u; f_8014F2D4(c); // 8014DA40
  c->r[31]=c->r[31]-c->r[3]; // 8014DA44
  c->lr=0x8014DA4Cu; f_8014F2D4(c); // 8014DA48
  c->r[0]=0u+0x00040000u; // 8014DA4C
  cmpu(c,0,c->r[31],c->r[0]); // 8014DA50
  if (!crb(c,1)) { goto L_8014DA64; } // 8014DA54
  c->r[30]=c->r[31]+0xFFFC0000u; // 8014DA58
  c->r[30]=c->r[3]+c->r[30]; // 8014DA5C
  goto L_8014DA68; // 8014DA60
L_8014DA64:;
  c->r[30]=c->r[3]|c->r[3]; // 8014DA64
L_8014DA68:;
  c->r[4]=c->r[31]|c->r[31]; // 8014DA68
  c->lr=0x8014DA70u; f_8014F8F4(c); // 8014DA6C
  c->r[3]=c->r[30]|c->r[30]; // 8014DA70
  c->r[4]=0u+0x00040000u; // 8014DA74
  c->lr=0x8014DA7Cu; f_8014F83C(c); // 8014DA78
  goto L_8014DB78; // 8014DA7C
L_8014DA80:;
  c->lr=0x8014DA84u; f_8014F2D4(c); // 8014DA80
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8014DA84
  cmpu(c,0,c->r[3],c->r[0]); // 8014DA88
  if (!crb(c,0)) { goto L_8014DB78; } // 8014DA8C
  c->lr=0x8014DA94u; f_8014F2BC(c); // 8014DA90
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8014DA94
  cmpu(c,0,c->r[3],c->r[0]); // 8014DA98
  if (crb(c,1)) { goto L_8014DAE8; } // 8014DA9C
  c->lr=0x8014DAA4u; f_8014F2BC(c); // 8014DAA0
  c->r[31]=c->r[3]|c->r[3]; // 8014DAA4
  c->lr=0x8014DAACu; f_8014F2D4(c); // 8014DAA8
  c->r[31]=c->r[31]-c->r[3]; // 8014DAAC
  c->lr=0x8014DAB4u; f_8014F2D4(c); // 8014DAB0
  c->r[0]=0u+0x00040000u; // 8014DAB4
  cmpu(c,0,c->r[31],c->r[0]); // 8014DAB8
  if (!crb(c,1)) { goto L_8014DACC; } // 8014DABC
  c->r[30]=c->r[31]+0xFFFC0000u; // 8014DAC0
  c->r[30]=c->r[3]+c->r[30]; // 8014DAC4
  goto L_8014DAD0; // 8014DAC8
L_8014DACC:;
  c->r[30]=c->r[3]|c->r[3]; // 8014DACC
L_8014DAD0:;
  c->r[4]=c->r[31]|c->r[31]; // 8014DAD0
  c->lr=0x8014DAD8u; f_8014F8F4(c); // 8014DAD4
  c->r[3]=c->r[30]|c->r[30]; // 8014DAD8
  c->r[4]=0u+0x00040000u; // 8014DADC
  c->lr=0x8014DAE4u; f_8014F83C(c); // 8014DAE0
  goto L_8014DB78; // 8014DAE4
L_8014DAE8:;
  c->lr=0x8014DAECu; f_8014F2D4(c); // 8014DAE8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8014DAEC
  c->r[31]=c->r[0]-c->r[3]; // 8014DAF0
  c->lr=0x8014DAF8u; f_8014F2D4(c); // 8014DAF4
  c->r[0]=0u+0x00040000u; // 8014DAF8
  cmpu(c,0,c->r[31],c->r[0]); // 8014DAFC
  if (!crb(c,1)) { goto L_8014DB10; } // 8014DB00
  c->r[30]=c->r[31]+0xFFFC0000u; // 8014DB04
  c->r[30]=c->r[3]+c->r[30]; // 8014DB08
  goto L_8014DB14; // 8014DB0C
L_8014DB10:;
  c->r[30]=c->r[3]|c->r[3]; // 8014DB10
L_8014DB14:;
  c->r[4]=c->r[31]|c->r[31]; // 8014DB14
  c->lr=0x8014DB1Cu; f_8014F8F4(c); // 8014DB18
  c->r[3]=c->r[30]|c->r[30]; // 8014DB1C
  c->r[4]=0u+0x00040000u; // 8014DB20
  c->lr=0x8014DB28u; f_8014F83C(c); // 8014DB24
  c->r[3]=0u+0x80440000u; // 8014DB28
  c->r[3]=c->r[3]+0xFFFFE180u; // 8014DB2C
  c->r[31]=R32(c->r[3]+0x00000010u); // 8014DB30
  c->lr=0x8014DB38u; f_8014F2BC(c); // 8014DB34
  cmpu(c,0,c->r[3],c->r[31]); // 8014DB38
  if (!crb(c,1)) { goto L_8014DB78; } // 8014DB3C
  c->lr=0x8014DB44u; f_8014F2BC(c); // 8014DB40
  c->r[4]=c->r[3]-c->r[31]; // 8014DB44
  c->r[0]=0u+0x00040000u; // 8014DB48
  cmpu(c,0,c->r[4],c->r[0]); // 8014DB4C
  if (!crb(c,1)) { goto L_8014DB60; } // 8014DB50
  c->r[30]=c->r[4]+0xFFFC0000u; // 8014DB54
  c->r[30]=c->r[31]+c->r[30]; // 8014DB58
  goto L_8014DB64; // 8014DB5C
L_8014DB60:;
  c->r[30]=c->r[31]|c->r[31]; // 8014DB60
L_8014DB64:;
  c->r[3]=c->r[31]|c->r[31]; // 8014DB64
  c->lr=0x8014DB6Cu; f_8014F8F4(c); // 8014DB68
  c->r[3]=c->r[30]|c->r[30]; // 8014DB6C
  c->r[4]=0u+0x00040000u; // 8014DB70
  c->lr=0x8014DB78u; f_8014F83C(c); // 8014DB74
L_8014DB78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014DB78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014DB7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8014DB80
  c->lr=c->r[0]; // 8014DB84
  c->r[1]=c->r[1]+0x00000010u; // 8014DB88
  return; // 8014DB8C
}

// InquiryCallback
void f_8014DB90(Ctx* __restrict c) {
  trace_call(0x8014DB90u);
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8014DB90
  cmps(c,0,(int32_t)c->r[0],0); // 8014DB94
  if (crb(c,2)) { goto L_8014DBA0; } // 8014DB98
  goto L_8014DBBC; // 8014DB9C
L_8014DBA0:;
  c->r[4]=0u+0x80440000u; // 8014DBA0
  c->r[3]=0u+0x80000000u; // 8014DBA4
  c->r[4]=c->r[4]+0xFFFFE1A0u; // 8014DBA8
  c->r[0]=R16(c->r[4]+0x00000002u); // 8014DBAC
  c->r[0]=c->r[0]|0x00008000u; // 8014DBB0
  W16(c->r[3]+0x000030E6u,c->r[0]); // 8014DBB4
  return; // 8014DBB8
L_8014DBBC:;
  c->r[0]=0u+0x00000001u; // 8014DBBC
  c->r[3]=0u+0x80000000u; // 8014DBC0
  W16(c->r[3]+0x000030E6u,c->r[0]); // 8014DBC4
  return; // 8014DBC8
}

// ReportOSInfo
void f_8014DBCC(Ctx* __restrict c) {
  trace_call(0x8014DBCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014DBCC
  c->r[0]=c->lr; // 8014DBD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014DBD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014DBD8
  c->r[31]=0u+0x802C0000u; // 8014DBDC
  c->r[31]=c->r[31]+0x00006850u; // 8014DBE0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8014DBE4
  c->r[3]=c->r[31]+0x00000048u; // 8014DBE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DBEC
  c->lr=0x8014DBF4u; f_801506B4(c); // 8014DBF0
  c->r[3]=c->r[31]+0x00000058u; // 8014DBF4
  c->r[4]=c->r[31]+0x00000070u; // 8014DBF8
  c->r[5]=c->r[31]+0x0000007Cu; // 8014DBFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DC00
  c->lr=0x8014DC08u; f_801506B4(c); // 8014DC04
  c->r[3]=c->r[31]+0x00000088u; // 8014DC08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DC0C
  c->lr=0x8014DC14u; f_801506B4(c); // 8014DC10
  c->lr=0x8014DC18u; f_8014D54C(c); // 8014DC14
  c->r[4]=rotl(c->r[3],0)&0xF0000000u; // 8014DC18
  c->r[0]=0u+0x10000000u; // 8014DC1C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8014DC20
  if (crb(c,2)) { goto L_8014DCCC; } // 8014DC24
  if (!crb(c,0)) { goto L_8014DC38; } // 8014DC28
  cmps(c,0,(int32_t)c->r[4],0); // 8014DC2C
  if (crb(c,2)) { goto L_8014DC48; } // 8014DC30
  goto L_8014DD80; // 8014DC34
L_8014DC38:;
  c->r[0]=0u+0x20000000u; // 8014DC38
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8014DC3C
  if (crb(c,2)) { goto L_8014DD68; } // 8014DC40
  goto L_8014DD80; // 8014DC44
L_8014DC48:;
  cmps(c,0,(int32_t)c->r[3],32); // 8014DC48
  if (crb(c,2)) { goto L_8014DC98; } // 8014DC4C
  if (!crb(c,0)) { goto L_8014DC6C; } // 8014DC50
  cmps(c,0,(int32_t)c->r[3],18); // 8014DC54
  if (crb(c,2)) { goto L_8014DC88; } // 8014DC58
  if (!crb(c,0)) { goto L_8014DCB8; } // 8014DC5C
  cmps(c,0,(int32_t)c->r[3],17); // 8014DC60
  if (!crb(c,0)) { goto L_8014DC78; } // 8014DC64
  goto L_8014DCB8; // 8014DC68
L_8014DC6C:;
  cmps(c,0,(int32_t)c->r[3],256); // 8014DC6C
  if (crb(c,2)) { goto L_8014DCA8; } // 8014DC70
  goto L_8014DCB8; // 8014DC74
L_8014DC78:;
  c->r[3]=c->r[31]+0x00000098u; // 8014DC78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DC7C
  c->lr=0x8014DC84u; f_801506B4(c); // 8014DC80
  goto L_8014DD90; // 8014DC84
L_8014DC88:;
  c->r[3]=c->r[31]+0x000000B0u; // 8014DC88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DC8C
  c->lr=0x8014DC94u; f_801506B4(c); // 8014DC90
  goto L_8014DD90; // 8014DC94
L_8014DC98:;
  c->r[3]=c->r[31]+0x000000CCu; // 8014DC98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DC9C
  c->lr=0x8014DCA4u; f_801506B4(c); // 8014DCA0
  goto L_8014DD90; // 8014DCA4
L_8014DCA8:;
  c->r[3]=c->r[13]+0xFFFF8F7Cu; // 8014DCA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DCAC
  c->lr=0x8014DCB4u; f_801506B4(c); // 8014DCB0
  goto L_8014DD90; // 8014DCB4
L_8014DCB8:;
  c->r[4]=c->r[3]|c->r[3]; // 8014DCB8
  c->r[3]=c->r[31]+0x000000E8u; // 8014DCBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DCC0
  c->lr=0x8014DCC8u; f_801506B4(c); // 8014DCC4
  goto L_8014DD90; // 8014DCC8
L_8014DCCC:;
  c->r[5]=c->r[3]+0xF0000000u; // 8014DCCC
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 8014DCD0
  cmpu(c,0,c->r[5],0x00000019u); // 8014DCD4
  if (crb(c,1)) { goto L_8014DD54; } // 8014DCD8
  c->r[4]=0u+0x802C0000u; // 8014DCDC
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8014DCE0
  c->r[4]=c->r[4]+0x00006A40u; // 8014DCE4
  c->r[4]=R32(c->r[4]+c->r[5]); // 8014DCE8
  c->ctr=c->r[4]; // 8014DCEC
  if (true) { switch (c->ctr) { case 0x8014DCF4u: goto L_8014DCF4; case 0x8014DD04u: goto L_8014DD04; case 0x8014DD14u: goto L_8014DD14; case 0x8014DD24u: goto L_8014DD24; case 0x8014DD34u: goto L_8014DD34; case 0x8014DD44u: goto L_8014DD44; case 0x8014DD54u: goto L_8014DD54; default: break; } dispatch(c,c->ctr); return; } // 8014DCF0
L_8014DCF4:;
  c->r[3]=c->r[31]+0x000000F4u; // 8014DCF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DCF8
  c->lr=0x8014DD00u; f_801506B4(c); // 8014DCFC
  goto L_8014DD90; // 8014DD00
L_8014DD04:;
  c->r[3]=c->r[31]+0x00000100u; // 8014DD04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DD08
  c->lr=0x8014DD10u; f_801506B4(c); // 8014DD0C
  goto L_8014DD90; // 8014DD10
L_8014DD14:;
  c->r[3]=c->r[31]+0x0000010Cu; // 8014DD14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DD18
  c->lr=0x8014DD20u; f_801506B4(c); // 8014DD1C
  goto L_8014DD90; // 8014DD20
L_8014DD24:;
  c->r[3]=c->r[31]+0x00000118u; // 8014DD24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DD28
  c->lr=0x8014DD30u; f_801506B4(c); // 8014DD2C
  goto L_8014DD90; // 8014DD30
L_8014DD34:;
  c->r[3]=c->r[31]+0x00000124u; // 8014DD34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DD38
  c->lr=0x8014DD40u; f_801506B4(c); // 8014DD3C
  goto L_8014DD90; // 8014DD40
L_8014DD44:;
  c->r[3]=c->r[31]+0x00000130u; // 8014DD44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DD48
  c->lr=0x8014DD50u; f_801506B4(c); // 8014DD4C
  goto L_8014DD90; // 8014DD50
L_8014DD54:;
  c->r[4]=c->r[3]|c->r[3]; // 8014DD54
  c->r[3]=c->r[31]+0x00000148u; // 8014DD58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DD5C
  c->lr=0x8014DD64u; f_801506B4(c); // 8014DD60
  goto L_8014DD90; // 8014DD64
L_8014DD68:;
  c->r[4]=rotl(c->r[3],0)&0x0FFFFFFFu; // 8014DD68
  c->r[3]=c->r[31]+0x00000164u; // 8014DD6C
  c->r[4]=c->r[4]+0xFFFFFFFDu; // 8014DD70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DD74
  c->lr=0x8014DD7Cu; f_801506B4(c); // 8014DD78
  goto L_8014DD90; // 8014DD7C
L_8014DD80:;
  c->r[4]=c->r[3]|c->r[3]; // 8014DD80
  c->r[3]=c->r[13]+0xFFFF8F84u; // 8014DD84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DD88
  c->lr=0x8014DD90u; f_801506B4(c); // 8014DD8C
L_8014DD90:;
  c->r[4]=0u+0xC0000000u; // 8014DD90
  c->r[3]=c->r[31]+0x00000180u; // 8014DD94
  c->r[0]=R32(c->r[4]+0x00003140u); // 8014DD98
  c->r[30]=R32(c->r[4]+0x00003144u); // 8014DD9C
  c->r[4]=rotl(c->r[0],16)&0x000000FFu; // 8014DDA0
  c->r[5]=rotl(c->r[0],24)&0x000000FFu; // 8014DDA4
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 8014DDA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DDAC
  c->lr=0x8014DDB4u; f_801506B4(c); // 8014DDB0
  c->r[3]=rotl(c->r[30],28)&0x0000000Fu; // 8014DDB4
  c->r[6]=rotl(c->r[30],12)&0x0000000Fu; // 8014DDB8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)10); // 8014DDBC
  c->r[5]=rotl(c->r[30],20)&0x0000000Fu; // 8014DDC0
  c->r[0]=rotl(c->r[30],0)&0x0000000Fu; // 8014DDC4
  c->r[8]=rotl(c->r[30],16)&0x0000000Fu; // 8014DDC8
  c->r[4]=c->r[0]+c->r[4]; // 8014DDCC
  c->r[7]=rotl(c->r[30],24)&0x0000000Fu; // 8014DDD0
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)10); // 8014DDD4
  c->r[3]=c->r[31]+0x0000019Cu; // 8014DDD8
  c->r[0]=c->r[4]+0x000007D0u; // 8014DDDC
  c->r[4]=c->r[8]+c->r[6]; // 8014DDE0
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)10); // 8014DDE4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8014DDE8
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 8014DDEC
  c->r[0]=c->r[7]+c->r[5]; // 8014DDF0
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 8014DDF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DDF8
  c->lr=0x8014DE00u; f_801506B4(c); // 8014DDFC
  c->lr=0x8014DE04u; f_80154EA4(c); // 8014DE00
  c->r[30]=c->r[3]|c->r[3]; // 8014DE04
  c->lr=0x8014DE0Cu; f_80154E98(c); // 8014DE08
  c->r[0]=c->r[3]+c->r[30]; // 8014DE0C
  c->r[3]=c->r[31]+0x000001A8u; // 8014DE10
  c->r[4]=rotl(c->r[0],12)&0x00000FFFu; // 8014DE14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DE18
  c->lr=0x8014DE20u; f_801506B4(c); // 8014DE1C
  c->lr=0x8014DE24u; f_8014F2B4(c); // 8014DE20
  c->r[30]=c->r[3]|c->r[3]; // 8014DE24
  c->lr=0x8014DE2Cu; f_8014F2CC(c); // 8014DE28
  c->r[4]=c->r[3]|c->r[3]; // 8014DE2C
  c->r[5]=c->r[30]|c->r[30]; // 8014DE30
  c->r[3]=c->r[31]+0x000001B8u; // 8014DE34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DE38
  c->lr=0x8014DE40u; f_801506B4(c); // 8014DE3C
  c->lr=0x8014DE44u; f_8014F2BC(c); // 8014DE40
  c->r[30]=c->r[3]|c->r[3]; // 8014DE44
  c->lr=0x8014DE4Cu; f_8014F2D4(c); // 8014DE48
  c->r[4]=c->r[3]|c->r[3]; // 8014DE4C
  c->r[5]=c->r[30]|c->r[30]; // 8014DE50
  c->r[3]=c->r[31]+0x000001D4u; // 8014DE54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014DE58
  c->lr=0x8014DE60u; f_801506B4(c); // 8014DE5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014DE60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014DE64
  c->r[30]=R32(c->r[1]+0x00000008u); // 8014DE68
  c->lr=c->r[0]; // 8014DE6C
  c->r[1]=c->r[1]+0x00000010u; // 8014DE70
  return; // 8014DE74
}

// OSInit
void f_8014DE78(Ctx* __restrict c) {
  trace_call(0x8014DE78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014DE78
  c->r[0]=c->lr; // 8014DE7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014DE80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014DE84
  c->r[31]=0u+0x802C0000u; // 8014DE88
  c->r[31]=c->r[31]+0x00006850u; // 8014DE8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8014DE90
  c->r[30]=0u+0x80440000u; // 8014DE94
  c->r[30]=c->r[30]+0xFFFFE180u; // 8014DE98
  c->r[0]=R32(c->r[13]+0xFFFFA99Cu); // 8014DE9C
  cmps(c,0,(int32_t)c->r[0],0); // 8014DEA0
  if (!crb(c,2)) { goto L_8014E2D8; } // 8014DEA4
  c->r[0]=0u+0x00000001u; // 8014DEA8
  W32(c->r[13]+0xFFFFA99Cu,c->r[0]); // 8014DEAC
  c->lr=0x8014DEB4u; f_801584AC(c); // 8014DEB0
  W32(c->r[13]+0xFFFFA9D4u,c->r[4]); // 8014DEB4
  W32(c->r[13]+0xFFFFA9D0u,c->r[3]); // 8014DEB8
  c->lr=0x8014DEC0u; f_80154410(c); // 8014DEBC
  c->r[3]=c->r[30]+0x00000000u; // 8014DEC0
  c->lr=0x8014DEC8u; f_801512D4(c); // 8014DEC4
  c->r[3]=0u+0x00000000u; // 8014DEC8
  c->lr=0x8014DED0u; f_8014D2A8(c); // 8014DECC
  c->r[3]=0u+0x00000000u; // 8014DED0
  c->lr=0x8014DED8u; f_8014D2B0(c); // 8014DED4
  c->r[3]=0u+0x00000000u; // 8014DED8
  c->lr=0x8014DEE0u; f_8014D2B8(c); // 8014DEDC
  c->r[3]=0u+0x00000000u; // 8014DEE0
  c->lr=0x8014DEE8u; f_8014D2C0(c); // 8014DEE4
  c->r[3]=0u+0x00000000u; // 8014DEE8
  c->lr=0x8014DEF0u; f_8014D2C8(c); // 8014DEEC
  c->r[3]=0u+0x00000000u; // 8014DEF0
  c->lr=0x8014DEF8u; f_8014D2D0(c); // 8014DEF4
  c->r[3]=0u+0x83900000u; // 8014DEF8
  c->lr=0x8014DF00u; f_8014D368(c); // 8014DEFC
  c->lr=0x8014DF04u; f_8014D338(c); // 8014DF00
  c->lr=0x8014DF08u; f_8014D360(c); // 8014DF04
  c->r[0]=0u+0x00000000u; // 8014DF08
  c->r[4]=0u+0x80000000u; // 8014DF0C
  W32(c->r[13]+0xFFFFA9C8u,c->r[4]); // 8014DF10
  W32(c->r[13]+0xFFFFA9C4u,c->r[0]); // 8014DF14
  W32(c->r[13]+0xFFFF90D0u,c->r[0]); // 8014DF18
  c->r[5]=R32(c->r[4]+0x000000F4u); // 8014DF1C
  cmps(c,0,(int32_t)c->r[5],0); // 8014DF20
  if (crb(c,2)) { goto L_8014DF4C; } // 8014DF24
  c->r[3]=c->r[5]+0x0000000Cu; // 8014DF28
  W32(c->r[13]+0xFFFFA9C4u,c->r[3]); // 8014DF2C
  c->r[0]=R32(c->r[5]+0x00000024u); // 8014DF30
  W32(c->r[13]+0xFFFFAF98u,c->r[0]); // 8014DF34
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8014DF38
  W8(c->r[4]+0x000030E8u,c->r[0]); // 8014DF3C
  c->r[0]=R32(c->r[13]+0xFFFFAF98u); // 8014DF40
  W8(c->r[4]+0x000030E9u,c->r[0]); // 8014DF44
  goto L_8014DF70; // 8014DF48
L_8014DF4C:;
  c->r[0]=R32(c->r[4]+0x00000034u); // 8014DF4C
  cmps(c,0,(int32_t)c->r[0],0); // 8014DF50
  if (crb(c,2)) { goto L_8014DF70; } // 8014DF54
  c->r[3]=R8(c->r[4]+0x000030E8u); // 8014DF58
  c->r[0]=c->r[13]+0xFFFFA9C0u; // 8014DF5C
  W32(c->r[13]+0xFFFFA9C0u,c->r[3]); // 8014DF60
  W32(c->r[13]+0xFFFFA9C4u,c->r[0]); // 8014DF64
  c->r[0]=R8(c->r[4]+0x000030E9u); // 8014DF68
  W32(c->r[13]+0xFFFFAF98u,c->r[0]); // 8014DF6C
L_8014DF70:;
  c->r[0]=0u+0x00000001u; // 8014DF70
  c->r[4]=0u+0x80000000u; // 8014DF74
  W32(c->r[13]+0xFFFF90D0u,c->r[0]); // 8014DF78
  c->r[3]=R32(c->r[4]+0x0000310Cu); // 8014DF7C
  cmps(c,0,(int32_t)c->r[3],0); // 8014DF80
  if (!crb(c,2)) { goto L_8014DFF0; } // 8014DF84
  c->r[3]=0u+0x804F0000u; // 8014DF88
  c->r[3]=c->r[3]+0xFFFFF4A0u; // 8014DF8C
  c->r[0]=rotl(c->r[3],0)&0x30000000u; cr0(c,c->r[0]); // 8014DF90
  if (!crb(c,2)) { goto L_8014DFEC; } // 8014DF94
  c->r[4]=R32(c->r[13]+0xFFFFA9C8u); // 8014DF98
  c->r[0]=R32(c->r[4]+0x00000030u); // 8014DF9C
  cmps(c,0,(int32_t)c->r[0],0); // 8014DFA0
  if (!crb(c,2)) { goto L_8014DFAC; } // 8014DFA4
  goto L_8014DFB0; // 8014DFA8
L_8014DFAC:;
  c->r[3]=c->r[0]|c->r[0]; // 8014DFAC
L_8014DFB0:;
  c->r[4]=R32(c->r[13]+0xFFFFA9C8u); // 8014DFB0
  c->r[0]=R32(c->r[4]+0x00000030u); // 8014DFB4
  cmps(c,0,(int32_t)c->r[0],0); // 8014DFB8
  if (!crb(c,2)) { goto L_8014DFF0; } // 8014DFBC
  c->r[4]=R32(c->r[13]+0xFFFFA9C4u); // 8014DFC0
  cmps(c,0,(int32_t)c->r[4],0); // 8014DFC4
  if (crb(c,2)) { goto L_8014DFF0; } // 8014DFC8
  c->r[0]=R32(c->r[4]+0x00000000u); // 8014DFCC
  cmpu(c,0,c->r[0],0x00000002u); // 8014DFD0
  if (!crb(c,0)) { goto L_8014DFF0; } // 8014DFD4
  c->r[3]=0u+0x804F0000u; // 8014DFD8
  c->r[3]=c->r[3]+0xFFFFD498u; // 8014DFDC
  c->r[0]=c->r[3]+0x0000001Fu; // 8014DFE0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8014DFE4
  goto L_8014DFF0; // 8014DFE8
L_8014DFEC:;
  c->r[3]=c->r[4]+0x00004000u; // 8014DFEC
L_8014DFF0:;
  c->lr=0x8014DFF4u; f_8014F2FC(c); // 8014DFF0
  c->r[3]=0u+0x80000000u; // 8014DFF4
  c->r[3]=R32(c->r[3]+0x00003110u); // 8014DFF8
  cmps(c,0,(int32_t)c->r[3],0); // 8014DFFC
  if (!crb(c,2)) { goto L_8014E01C; } // 8014E000
  c->r[3]=R32(c->r[13]+0xFFFFA9C8u); // 8014E004
  c->r[3]=R32(c->r[3]+0x00000034u); // 8014E008
  cmps(c,0,(int32_t)c->r[3],0); // 8014E00C
  if (!crb(c,2)) { goto L_8014E01C; } // 8014E010
  c->r[3]=0u+0x81700000u; // 8014E014
  c->r[3]=c->r[3]+0x00000000u; // 8014E018
L_8014E01C:;
  c->lr=0x8014E020u; f_8014F2E4(c); // 8014E01C
  c->r[3]=0u+0x80000000u; // 8014E020
  c->r[3]=R32(c->r[3]+0x00003124u); // 8014E024
  cmps(c,0,(int32_t)c->r[3],0); // 8014E028
  if (crb(c,2)) { goto L_8014E098; } // 8014E02C
  c->r[5]=0u+0x804F0000u; // 8014E030
  c->r[5]=c->r[5]+0xFFFFF4A0u; // 8014E034
  c->r[4]=rotl(c->r[5],0)&0x30000000u; // 8014E038
  c->r[0]=c->r[4]+0xF0000000u; // 8014E03C
  cmpu(c,0,c->r[0],0x00000000u); // 8014E040
  if (!crb(c,2)) { goto L_8014E078; } // 8014E044
  c->r[4]=R32(c->r[13]+0xFFFFA9C4u); // 8014E048
  c->r[3]=c->r[5]|c->r[5]; // 8014E04C
  cmps(c,0,(int32_t)c->r[4],0); // 8014E050
  if (crb(c,2)) { goto L_8014E094; } // 8014E054
  c->r[0]=R32(c->r[4]+0x00000000u); // 8014E058
  cmpu(c,0,c->r[0],0x00000002u); // 8014E05C
  if (!crb(c,0)) { goto L_8014E094; } // 8014E060
  c->r[3]=0u+0x804F0000u; // 8014E064
  c->r[3]=c->r[3]+0xFFFFD498u; // 8014E068
  c->r[0]=c->r[3]+0x0000001Fu; // 8014E06C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8014E070
  goto L_8014E094; // 8014E074
L_8014E078:;
  c->r[4]=0u+0x90000000u; // 8014E078
  cmpu(c,0,c->r[3],c->r[4]); // 8014E07C
  if (crb(c,0)) { goto L_8014E094; } // 8014E080
  c->r[0]=c->r[4]+0x00000800u; // 8014E084
  cmpu(c,0,c->r[3],c->r[0]); // 8014E088
  if (!crb(c,0)) { goto L_8014E094; } // 8014E08C
  c->r[3]=c->r[0]|c->r[0]; // 8014E090
L_8014E094:;
  c->lr=0x8014E098u; f_8014F304(c); // 8014E094
L_8014E098:;
  c->r[3]=0u+0x80000000u; // 8014E098
  c->r[3]=R32(c->r[3]+0x00003128u); // 8014E09C
  cmps(c,0,(int32_t)c->r[3],0); // 8014E0A0
  if (crb(c,2)) { goto L_8014E0AC; } // 8014E0A4
  c->lr=0x8014E0ACu; f_8014F2EC(c); // 8014E0A8
L_8014E0AC:;
  c->lr=0x8014E0B0u; f_80158D88(c); // 8014E0AC
  c->lr=0x8014E0B4u; f_8014E2F0(c); // 8014E0B0
  c->lr=0x8014E0B8u; f_80156E74(c); // 8014E0B4
  c->lr=0x8014E0BCu; f_8014E7C8(c); // 8014E0B8
  c->lr=0x8014E0C0u; f_80154B94(c); // 8014E0BC
  c->lr=0x8014E0C4u; f_80154480(c); // 8014E0C0
  c->lr=0x8014E0C8u; f_8015066C(c); // 8014E0C4
  c->lr=0x8014E0CCu; f_8014FCF4(c); // 8014E0C8
  c->lr=0x8014E0D0u; f_8015C94C(c); // 8014E0CC
  c->lr=0x8014E0D4u; f_8015DE0C(c); // 8014E0D0
  c->lr=0x8014E0D8u; f_80156500(c); // 8014E0D4
  c->lr=0x8014E0DCu; f_80156ED8(c); // 8014E0D8
  c->lr=0x8014E0E0u; f_8014F568(c); // 8014E0DC
  c->lr=0x8014E0E4u; f_8014D320(c); // 8014E0E0
  c->r[3]=rotl(c->r[3],0)&0xBFFFFFFFu; // 8014E0E4
  c->lr=0x8014E0ECu; f_8014D328(c); // 8014E0E8
  c->r[0]=R32(c->r[13]+0xFFFFA990u); // 8014E0EC
  cmps(c,0,(int32_t)c->r[0],0); // 8014E0F0
  if (!crb(c,2)) { goto L_8014E0FC; } // 8014E0F4
  c->lr=0x8014E0FCu; f_801555E4(c); // 8014E0F8
L_8014E0FC:;
  c->lr=0x8014E100u; f_8014DBCC(c); // 8014E0FC
  c->r[4]=R32(c->r[13]+0xFFFF8F78u); // 8014E100
  c->r[3]=c->r[13]+0xFFFF8F8Cu; // 8014E104
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014E108
  c->lr=0x8014E110u; f_801506B4(c); // 8014E10C
  c->r[3]=R32(c->r[13]+0xFFFFA9C4u); // 8014E110
  cmps(c,0,(int32_t)c->r[3],0); // 8014E114
  if (crb(c,2)) { goto L_8014E12C; } // 8014E118
  c->r[0]=R32(c->r[3]+0x00000000u); // 8014E11C
  cmpu(c,0,c->r[0],0x00000002u); // 8014E120
  if (crb(c,0)) { goto L_8014E12C; } // 8014E124
  c->lr=0x8014E12Cu; f_802679F4(c); // 8014E128
L_8014E12C:;
  c->r[0]=R32(c->r[13]+0xFFFFA994u); // 8014E12C
  cmps(c,0,(int32_t)c->r[0],0); // 8014E130
  if (!crb(c,2)) { goto L_8014E14C; } // 8014E134
  c->r[0]=R32(c->r[13]+0xFFFFAA04u); // 8014E138
  cmps(c,0,(int32_t)c->r[0],0); // 8014E13C
  if (!crb(c,2)) { goto L_8014E14C; } // 8014E140
  c->lr=0x8014E148u; f_8014D7D0(c); // 8014E144
  c->lr=0x8014E14Cu; f_8014D9AC(c); // 8014E148
L_8014E14C:;
  c->lr=0x8014E150u; f_80154424(c); // 8014E14C
  c->lr=0x8014E154u; f_80185E04(c); // 8014E150
  c->r[0]=R32(c->r[13]+0xFFFFA994u); // 8014E154
  cmps(c,0,(int32_t)c->r[0],0); // 8014E158
  if (!crb(c,2)) { goto L_8014E184; } // 8014E15C
  c->r[0]=R32(c->r[13]+0xFFFFAA04u); // 8014E160
  cmps(c,0,(int32_t)c->r[0],0); // 8014E164
  if (!crb(c,2)) { goto L_8014E184; } // 8014E168
  c->lr=0x8014E170u; f_80158F78(c); // 8014E16C
  c->lr=0x8014E174u; f_8018177C(c); // 8014E170
L_8014E174:;
  c->lr=0x8014E178u; f_8018181C(c); // 8014E174
  cmpu(c,0,c->r[3],0x00000001u); // 8014E178
  if (crb(c,2)) { IRQCHK(c); goto L_8014E174; } // 8014E17C
  c->lr=0x8014E184u; f_80159D98(c); // 8014E180
L_8014E184:;
  c->r[0]=R32(c->r[13]+0xFFFFA990u); // 8014E184
  cmps(c,0,(int32_t)c->r[0],0); // 8014E188
  if (!crb(c,2)) { goto L_8014E294; } // 8014E18C
  c->r[3]=0u+0x80000000u; // 8014E190
  c->r[0]=R8(c->r[3]+0x0000315Cu); // 8014E194
  cmps(c,0,(int32_t)c->r[0],129); // 8014E198
  if (crb(c,2)) { goto L_8014E1A8; } // 8014E19C
  if (!crb(c,0)) { goto L_8014E1C8; } // 8014E1A0
  goto L_8014E1C8; // 8014E1A4
L_8014E1A8:;
  c->r[3]=c->r[31]+0x00000258u; // 8014E1A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014E1AC
  c->lr=0x8014E1B4u; f_801506B4(c); // 8014E1B0
  c->r[5]=c->r[31]+0x000002A8u; // 8014E1B4
  c->r[3]=c->r[13]+0xFFFF8F90u; // 8014E1B8
  c->r[4]=0u+0x0000047Eu; // 8014E1BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014E1C0
  c->lr=0x8014E1C8u; f_80150744(c); // 8014E1C4
L_8014E1C8:;
  c->r[3]=0u+0x80000000u; // 8014E1C8
  c->r[0]=R8(c->r[3]+0x0000315Du); // 8014E1CC
  cmps(c,0,(int32_t)c->r[0],129); // 8014E1D0
  if (crb(c,2)) { goto L_8014E1E0; } // 8014E1D4
  if (!crb(c,0)) { goto L_8014E200; } // 8014E1D8
  goto L_8014E200; // 8014E1DC
L_8014E1E0:;
  c->r[3]=c->r[31]+0x000002C0u; // 8014E1E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014E1E4
  c->lr=0x8014E1ECu; f_801506B4(c); // 8014E1E8
  c->r[5]=c->r[31]+0x000002A8u; // 8014E1EC
  c->r[3]=c->r[13]+0xFFFF8F90u; // 8014E1F0
  c->r[4]=0u+0x00000490u; // 8014E1F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014E1F8
  c->lr=0x8014E200u; f_80150744(c); // 8014E1FC
L_8014E200:;
  c->lr=0x8014E204u; f_8016C678(c); // 8014E200
  c->r[0]=R32(c->r[13]+0xFFFFA998u); // 8014E204
  cmps(c,0,(int32_t)c->r[0],0); // 8014E208
  if (crb(c,2)) { goto L_8014E224; } // 8014E20C
  c->r[4]=0u+0x00010000u; // 8014E210
  c->r[3]=0u+0x80000000u; // 8014E214
  c->r[0]=c->r[4]+0xFFFF9000u; // 8014E218
  W16(c->r[3]+0x000030E6u,c->r[0]); // 8014E21C
  goto L_8014E254; // 8014E220
L_8014E224:;
  c->r[3]=0u+0x80000000u; // 8014E224
  c->r[0]=R16(c->r[3]+0x000030E6u); // 8014E228
  cmps(c,0,(int32_t)c->r[0],0); // 8014E22C
  if (!crb(c,2)) { goto L_8014E254; } // 8014E230
  c->r[3]=c->r[30]+0x00000020u; // 8014E234
  c->r[4]=0u+0x00000020u; // 8014E238
  c->lr=0x8014E240u; f_8014F810(c); // 8014E23C
  c->r[5]=0u+0x80150000u; // 8014E240
  c->r[3]=c->r[30]+0x00000040u; // 8014E244
  c->r[4]=c->r[30]+0x00000020u; // 8014E248
  c->r[5]=c->r[5]+0xFFFFDB90u; // 8014E24C
  c->lr=0x8014E254u; f_8017060C(c); // 8014E250
L_8014E254:;
  c->r[0]=R32(c->r[13]+0xFFFFA990u); // 8014E254
  cmps(c,0,(int32_t)c->r[0],0); // 8014E258
  if (crb(c,2)) { goto L_8014E268; } // 8014E25C
  c->r[0]=0u+0x00000040u; // 8014E260
  goto L_8014E270; // 8014E264
L_8014E268:;
  c->r[3]=0u+0x80000000u; // 8014E268
  c->r[0]=R8(c->r[3]+0x00003184u); // 8014E26C
L_8014E270:;
  cmpu(c,0,c->r[0],0x00000080u); // 8014E270
  if (!crb(c,2)) { goto L_8014E294; } // 8014E274
  c->r[0]=R32(c->r[13]+0xFFFFAA04u); // 8014E278
  cmps(c,0,(int32_t)c->r[0],0); // 8014E27C
  if (!crb(c,2)) { goto L_8014E294; } // 8014E280
  c->lr=0x8014E288u; f_80171E48(c); // 8014E284
  cmps(c,0,(int32_t)c->r[3],0); // 8014E288
  if (!crb(c,2)) { goto L_8014E294; } // 8014E28C
  c->lr=0x8014E294u; f_80156144(c); // 8014E290
L_8014E294:;
  c->r[0]=R32(c->r[13]+0xFFFFA990u); // 8014E294
  cmps(c,0,(int32_t)c->r[0],0); // 8014E298
  if (!crb(c,2)) { goto L_8014E2B0; } // 8014E29C
  c->r[0]=R32(c->r[13]+0xFFFFA994u); // 8014E2A0
  cmps(c,0,(int32_t)c->r[0],0); // 8014E2A4
  if (!crb(c,2)) { goto L_8014E2B0; } // 8014E2A8
  c->lr=0x8014E2B0u; f_8015A794(c); // 8014E2AC
L_8014E2B0:;
  c->r[0]=R32(c->r[13]+0xFFFFA990u); // 8014E2B0
  cmps(c,0,(int32_t)c->r[0],0); // 8014E2B4
  if (!crb(c,2)) { goto L_8014E2D8; } // 8014E2B8
  c->r[0]=R32(c->r[13]+0xFFFFA994u); // 8014E2BC
  cmps(c,0,(int32_t)c->r[0],0); // 8014E2C0
  if (!crb(c,2)) { goto L_8014E2D8; } // 8014E2C4
  c->r[0]=R32(c->r[13]+0xFFFFAA04u); // 8014E2C8
  cmps(c,0,(int32_t)c->r[0],0); // 8014E2CC
  if (!crb(c,2)) { goto L_8014E2D8; } // 8014E2D0
  c->lr=0x8014E2D8u; f_80159950(c); // 8014E2D4
L_8014E2D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014E2D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014E2DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8014E2E0
  c->lr=c->r[0]; // 8014E2E4
  c->r[1]=c->r[1]+0x00000010u; // 8014E2E8
  return; // 8014E2EC
}

// OSExceptionInit
void f_8014E2F0(Ctx* __restrict c) {
  trace_call(0x8014E2F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014E2F0
  c->r[0]=c->lr; // 8014E2F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8014E2F8
  c->r[11]=c->r[1]+0x00000040u; // 8014E2FC
  c->lr=0x8014E304u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014E300
  c->r[22]=0u+0x80000000u; // 8014E304
  c->r[26]=0u+0x80150000u; // 8014E308
  c->r[0]=R32(c->r[22]+0x00000060u); // 8014E30C
  c->r[3]=0u+0x80150000u; // 8014E310
  c->r[28]=0u+0x80150000u; // 8014E314
  c->r[30]=0u+0x802C0000u; // 8014E318
  cmps(c,0,(int32_t)c->r[0],0); // 8014E31C
  c->r[26]=c->r[26]+0xFFFFE5BCu; // 8014E320
  c->r[3]=c->r[3]+0xFFFFE654u; // 8014E324
  {uint32_t ea=c->r[28]+0xFFFFE624u; c->r[27]=R32(ea); c->r[28]=ea;} // 8014E328
  c->r[30]=c->r[30]+0x00006850u; // 8014E32C
  c->r[25]=c->r[3]-c->r[26]; // 8014E330
  if (!crb(c,2)) { goto L_8014E380; } // 8014E334
  c->r[3]=c->r[30]+0x00000354u; // 8014E338
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014E33C
  c->lr=0x8014E344u; f_8015EDDC(c); // 8014E340
  c->r[4]=0u+0x80150000u; // 8014E344
  c->r[5]=0u+0x80150000u; // 8014E348
  c->r[4]=c->r[4]+0xFFFFE570u; // 8014E34C
  c->r[3]=c->r[22]+0x00000060u; // 8014E350
  c->r[5]=c->r[5]+0xFFFFE594u; // 8014E354
  c->r[21]=c->r[5]-c->r[4]; // 8014E358
  c->r[5]=c->r[21]|c->r[21]; // 8014E35C
  c->lr=0x8014E364u; f_80004338(c); // 8014E360
  c->r[4]=c->r[21]|c->r[21]; // 8014E364
  c->r[3]=c->r[22]+0x00000060u; // 8014E368
  c->lr=0x8014E370u; f_8014F89C(c); // 8014E36C
  /* sync */ // 8014E370
  c->r[4]=c->r[21]|c->r[21]; // 8014E374
  c->r[3]=c->r[22]+0x00000060u; // 8014E378
  c->lr=0x8014E380u; f_8014F920(c); // 8014E37C
L_8014E380:;
  c->r[31]=0u+0x80150000u; // 8014E380
  c->r[3]=0u+0x80150000u; // 8014E384
  c->r[0]=c->r[31]+0xFFFFE594u; // 8014E388
  c->r[24]=c->r[30]+0x00000318u; // 8014E38C
  c->r[3]=c->r[3]+0xFFFFE598u; // 8014E390
  c->r[29]=0u+0x00000000u; // 8014E394
  c->r[21]=c->r[3]-c->r[0]; // 8014E398
  c->r[23]=0u+0x60000000u; // 8014E39C
  c->r[22]=0u+0x80150000u; // 8014E3A0
L_8014E3A4:;
  c->r[3]=R32(c->r[13]+0xFFFFA9C4u); // 8014E3A4
  cmps(c,0,(int32_t)c->r[3],0); // 8014E3A8
  if (crb(c,2)) { goto L_8014E3E0; } // 8014E3AC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8014E3B0
  cmpu(c,0,c->r[0],0x00000002u); // 8014E3B4
  if (crb(c,0)) { goto L_8014E3E0; } // 8014E3B8
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 8014E3BC
  c->lr=0x8014E3C4u; f_8015EDC4(c); // 8014E3C0
  cmps(c,0,(int32_t)c->r[3],0); // 8014E3C4
  if (crb(c,2)) { goto L_8014E3E0; } // 8014E3C8
  c->r[3]=c->r[30]+0x00000370u; // 8014E3CC
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 8014E3D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014E3D4
  c->lr=0x8014E3DCu; f_8015EDDC(c); // 8014E3D8
  goto L_8014E4B4; // 8014E3DC
L_8014E3E0:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 8014E3E0
  c->r[0]=c->r[27]|c->r[3]; // 8014E3E4
  W32(c->r[28]+0x00000000u,c->r[0]); // 8014E3E8
  c->lr=0x8014E3F0u; f_8015EDC4(c); // 8014E3EC
  cmps(c,0,(int32_t)c->r[3],0); // 8014E3F0
  if (crb(c,2)) { goto L_8014E41C; } // 8014E3F4
  c->r[3]=c->r[30]+0x000003A0u; // 8014E3F8
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 8014E3FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014E400
  c->lr=0x8014E408u; f_8015EDDC(c); // 8014E404
  c->r[5]=c->r[21]|c->r[21]; // 8014E408
  c->r[3]=c->r[22]+0xFFFFE614u; // 8014E40C
  c->r[4]=c->r[31]+0xFFFFE594u; // 8014E410
  c->lr=0x8014E418u; f_80004338(c); // 8014E414
  goto L_8014E47C; // 8014E418
L_8014E41C:;
  cmpu(c,0,c->r[21],0x00000000u); // 8014E41C
  c->r[3]=c->r[21]+0x00000003u; // 8014E420
  c->r[4]=c->r[22]+0xFFFFE614u; // 8014E424
  c->r[3]=rotl(c->r[3],30)&0x3FFFFFFFu; // 8014E428
  if (!crb(c,1)) { goto L_8014E47C; } // 8014E42C
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 8014E430
  c->ctr=c->r[0]; // 8014E434
  if (crb(c,2)) { goto L_8014E46C; } // 8014E438
L_8014E43C:;
  W32(c->r[4]+0x00000000u,c->r[23]); // 8014E43C
  W32(c->r[4]+0x00000004u,c->r[23]); // 8014E440
  W32(c->r[4]+0x00000008u,c->r[23]); // 8014E444
  W32(c->r[4]+0x0000000Cu,c->r[23]); // 8014E448
  W32(c->r[4]+0x00000010u,c->r[23]); // 8014E44C
  W32(c->r[4]+0x00000014u,c->r[23]); // 8014E450
  W32(c->r[4]+0x00000018u,c->r[23]); // 8014E454
  W32(c->r[4]+0x0000001Cu,c->r[23]); // 8014E458
  c->r[4]=c->r[4]+0x00000020u; // 8014E45C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014E43C; } // 8014E460
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 8014E464
  if (crb(c,2)) { goto L_8014E47C; } // 8014E468
L_8014E46C:;
  c->ctr=c->r[3]; // 8014E46C
L_8014E470:;
  W32(c->r[4]+0x00000000u,c->r[23]); // 8014E470
  c->r[4]=c->r[4]+0x00000004u; // 8014E474
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014E470; } // 8014E478
L_8014E47C:;
  c->r[0]=rotl(c->r[29],2)&0x000003FCu; // 8014E47C
  c->r[4]=c->r[26]|c->r[26]; // 8014E480
  c->r[3]=R32(c->r[24]+c->r[0]); // 8014E484
  c->r[5]=c->r[25]|c->r[25]; // 8014E488
  c->r[20]=c->r[3]+0x80000000u; // 8014E48C
  c->r[3]=c->r[20]|c->r[20]; // 8014E490
  c->lr=0x8014E498u; f_80004338(c); // 8014E494
  c->r[3]=c->r[20]|c->r[20]; // 8014E498
  c->r[4]=c->r[25]|c->r[25]; // 8014E49C
  c->lr=0x8014E4A4u; f_8014F89C(c); // 8014E4A0
  /* sync */ // 8014E4A4
  c->r[3]=c->r[20]|c->r[20]; // 8014E4A8
  c->r[4]=c->r[25]|c->r[25]; // 8014E4AC
  c->lr=0x8014E4B4u; f_8014F920(c); // 8014E4B0
L_8014E4B4:;
  c->r[29]=c->r[29]+0x00000001u; // 8014E4B4
  cmpu(c,0,c->r[29],0x0000000Fu); // 8014E4B8
  if (crb(c,0)) { IRQCHK(c); goto L_8014E3A4; } // 8014E4BC
  c->r[3]=0u+0x80000000u; // 8014E4C0
  c->r[5]=0u+0x80150000u; // 8014E4C4
  c->r[4]=c->r[3]+0x00003000u; // 8014E4C8
  W32(c->r[13]+0xFFFFA9A0u,c->r[4]); // 8014E4CC
  c->r[5]=c->r[5]+0xFFFFE658u; // 8014E4D0
  c->r[3]=c->r[30]+0x000003D0u; // 8014E4D4
  W32(c->r[4]+0x00000000u,c->r[5]); // 8014E4D8
  c->r[4]=R32(c->r[13]+0xFFFFA9A0u); // 8014E4DC
  W32(c->r[4]+0x00000004u,c->r[5]); // 8014E4E0
  c->r[4]=R32(c->r[13]+0xFFFFA9A0u); // 8014E4E4
  W32(c->r[4]+0x00000008u,c->r[5]); // 8014E4E8
  c->r[4]=R32(c->r[13]+0xFFFFA9A0u); // 8014E4EC
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 8014E4F0
  c->r[4]=R32(c->r[13]+0xFFFFA9A0u); // 8014E4F4
  W32(c->r[4]+0x00000010u,c->r[5]); // 8014E4F8
  c->r[4]=R32(c->r[13]+0xFFFFA9A0u); // 8014E4FC
  W32(c->r[4]+0x00000014u,c->r[5]); // 8014E500
  c->r[4]=R32(c->r[13]+0xFFFFA9A0u); // 8014E504
  W32(c->r[4]+0x00000018u,c->r[5]); // 8014E508
  c->r[4]=R32(c->r[13]+0xFFFFA9A0u); // 8014E50C
  W32(c->r[4]+0x0000001Cu,c->r[5]); // 8014E510
  c->r[4]=R32(c->r[13]+0xFFFFA9A0u); // 8014E514
  W32(c->r[4]+0x00000020u,c->r[5]); // 8014E518
  c->r[4]=R32(c->r[13]+0xFFFFA9A0u); // 8014E51C
  W32(c->r[4]+0x00000024u,c->r[5]); // 8014E520
  c->r[4]=R32(c->r[13]+0xFFFFA9A0u); // 8014E524
  W32(c->r[4]+0x00000028u,c->r[5]); // 8014E528
  c->r[4]=R32(c->r[13]+0xFFFFA9A0u); // 8014E52C
  W32(c->r[4]+0x0000002Cu,c->r[5]); // 8014E530
  c->r[4]=R32(c->r[13]+0xFFFFA9A0u); // 8014E534
  W32(c->r[4]+0x00000030u,c->r[5]); // 8014E538
  c->r[4]=R32(c->r[13]+0xFFFFA9A0u); // 8014E53C
  W32(c->r[4]+0x00000034u,c->r[5]); // 8014E540
  c->r[4]=R32(c->r[13]+0xFFFFA9A0u); // 8014E544
  W32(c->r[4]+0x00000038u,c->r[5]); // 8014E548
  W32(c->r[28]+0x00000000u,c->r[27]); // 8014E54C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014E550
  c->lr=0x8014E558u; f_8015EDDC(c); // 8014E554
  c->r[11]=c->r[1]+0x00000040u; // 8014E558
  c->lr=0x8014E560u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014E55C
  c->r[0]=R32(c->r[1]+0x00000044u); // 8014E560
  c->lr=c->r[0]; // 8014E564
  c->r[1]=c->r[1]+0x00000040u; // 8014E568
  return; // 8014E56C
}

// __OSDBIntegrator
void f_8014E570(Ctx* __restrict c) {
  trace_call(0x8014E570u);
  c->r[5]=0u+0x00000040u; // 8014E570
  c->r[3]=c->lr; // 8014E574
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 8014E578
  c->r[3]=R32(c->r[5]+0x00000008u); // 8014E57C
  c->r[3]=c->r[3]|0x80000000u; // 8014E580
  c->lr=c->r[3]; // 8014E584
  c->r[3]=0u+0x00000030u; // 8014E588
  c->msr=c->r[3]; // 8014E58C
  return; // 8014E590
}

// __OSDBJump
void f_8014E594(Ctx* __restrict c) {
  trace_call(0x8014E594u);
  c->lr=0x8014E598u; dispatch(c,0x8014E5F4u); // 8014E594
}

// __OSSetExceptionHandler
void f_8014E598(Ctx* __restrict c) {
  trace_call(0x8014E598u);
  c->r[5]=R32(c->r[13]+0xFFFFA9A0u); // 8014E598
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 8014E59C
  c->r[3]=R32(c->r[5]+c->r[0]); // 8014E5A0
  W32(c->r[5]+c->r[0],c->r[4]); // 8014E5A4
  return; // 8014E5A8
}

// __OSGetExceptionHandler
void f_8014E5AC(Ctx* __restrict c) {
  trace_call(0x8014E5ACu);
  c->r[4]=R32(c->r[13]+0xFFFFA9A0u); // 8014E5AC
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 8014E5B0
  c->r[3]=R32(c->r[4]+c->r[0]); // 8014E5B4
  return; // 8014E5B8
}

// OSExceptionVector
void f_8014E5BC(Ctx* __restrict c) {
  trace_call(0x8014E5BCu);
  mtspr(c,272,c->r[4]); // 8014E5BC
  c->r[4]=R32(0u+0x000000C0u); // 8014E5C0
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 8014E5C4
  c->r[3]=mfspr(c,272); // 8014E5C8
  W32(c->r[4]+0x00000010u,c->r[3]); // 8014E5CC
  W32(c->r[4]+0x00000014u,c->r[5]); // 8014E5D0
  c->r[3]=R16(c->r[4]+0x000001A2u); // 8014E5D4
  c->r[3]=c->r[3]|0x00000002u; // 8014E5D8
  W16(c->r[4]+0x000001A2u,c->r[3]); // 8014E5DC
  c->r[3]=c->cr; // 8014E5E0
  W32(c->r[4]+0x00000080u,c->r[3]); // 8014E5E4
  c->r[3]=c->lr; // 8014E5E8
  W32(c->r[4]+0x00000084u,c->r[3]); // 8014E5EC
  c->r[3]=c->ctr; // 8014E5F0
  W32(c->r[4]+0x00000088u,c->r[3]); // 8014E5F4
  c->r[3]=mfspr(c,1); // 8014E5F8
  W32(c->r[4]+0x0000008Cu,c->r[3]); // 8014E5FC
  c->r[3]=mfspr(c,26); // 8014E600
  W32(c->r[4]+0x00000198u,c->r[3]); // 8014E604
  c->r[3]=mfspr(c,27); // 8014E608
  W32(c->r[4]+0x0000019Cu,c->r[3]); // 8014E60C
  c->r[5]=c->r[3]|c->r[3]; // 8014E610
  c->r[0]=c->r[0]|0x00000000u; // 8014E614
  c->r[3]=c->msr; // 8014E618
  c->r[3]=c->r[3]|0x00000030u; // 8014E61C
  mtspr(c,27,c->r[3]); // 8014E620
  c->r[3]=0u+0x00000000u; // 8014E624
  c->r[4]=R32(0u+0x000000D4u); // 8014E628
  c->r[5]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[5]); // 8014E62C
  if (!crb(c,2)) { goto L_8014E644; } // 8014E630
  c->r[5]=0u+0x80150000u; // 8014E634
  c->r[5]=c->r[5]+0xFFFFE658u; // 8014E638
  mtspr(c,26,c->r[5]); // 8014E63C
  return; /* rfi */ // 8014E640
L_8014E644:;
  c->r[5]=rotl(c->r[3],2)&0x000003FCu; // 8014E644
  c->r[5]=R32(c->r[5]+0x00003000u); // 8014E648
  mtspr(c,26,c->r[5]); // 8014E64C
  return; /* rfi */ // 8014E650
  c->r[0]=c->r[0]|0x00000000u; // 8014E654
}

// OSDefaultExceptionHandler
void f_8014E658(Ctx* __restrict c) {
  trace_call(0x8014E658u);
  W32(c->r[4]+0x00000000u,c->r[0]); // 8014E658
  W32(c->r[4]+0x00000004u,c->r[1]); // 8014E65C
  W32(c->r[4]+0x00000008u,c->r[2]); // 8014E660
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8014E664
  c->r[0]=mfspr(c,913); // 8014E668
  W32(c->r[4]+0x000001A8u,c->r[0]); // 8014E66C
  c->r[0]=mfspr(c,914); // 8014E670
  W32(c->r[4]+0x000001ACu,c->r[0]); // 8014E674
  c->r[0]=mfspr(c,915); // 8014E678
  W32(c->r[4]+0x000001B0u,c->r[0]); // 8014E67C
  c->r[0]=mfspr(c,916); // 8014E680
  W32(c->r[4]+0x000001B4u,c->r[0]); // 8014E684
  c->r[0]=mfspr(c,917); // 8014E688
  W32(c->r[4]+0x000001B8u,c->r[0]); // 8014E68C
  c->r[0]=mfspr(c,918); // 8014E690
  W32(c->r[4]+0x000001BCu,c->r[0]); // 8014E694
  c->r[0]=mfspr(c,919); // 8014E698
  W32(c->r[4]+0x000001C0u,c->r[0]); // 8014E69C
  c->r[5]=mfspr(c,18); // 8014E6A0
  c->r[6]=mfspr(c,19); // 8014E6A4
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014E6A8
  f_80150AF8(c); return; // 8014E6AC
}

// __OSPSInit
void f_8014E6B0(Ctx* __restrict c) {
  trace_call(0x8014E6B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014E6B0
  c->r[0]=c->lr; // 8014E6B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014E6B8
  c->lr=0x8014E6C0u; f_8014D320(c); // 8014E6BC
  c->r[3]=c->r[3]|0xA0000000u; // 8014E6C0
  c->lr=0x8014E6C8u; f_8014D328(c); // 8014E6C4
  c->lr=0x8014E6CCu; f_8014F954(c); // 8014E6C8
  /* sync */ // 8014E6CC
  c->r[3]=0u+0x00000000u; // 8014E6D0
  mtspr(c,912,c->r[3]); // 8014E6D4
  mtspr(c,913,c->r[3]); // 8014E6D8
  mtspr(c,914,c->r[3]); // 8014E6DC
  mtspr(c,915,c->r[3]); // 8014E6E0
  mtspr(c,916,c->r[3]); // 8014E6E4
  mtspr(c,917,c->r[3]); // 8014E6E8
  mtspr(c,918,c->r[3]); // 8014E6EC
  mtspr(c,919,c->r[3]); // 8014E6F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014E6F4
  c->lr=c->r[0]; // 8014E6F8
  c->r[1]=c->r[1]+0x00000010u; // 8014E6FC
  return; // 8014E700
}

// __OSGetDIConfig
void f_8014E704(Ctx* __restrict c) {
  trace_call(0x8014E704u);
  c->r[3]=0u+0xCD000000u; // 8014E704
  c->r[0]=R32(c->r[3]+0x00006024u); // 8014E708
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8014E70C
  return; // 8014E710
}

// OSRegisterVersion
void f_8014E714(Ctx* __restrict c) {
  trace_call(0x8014E714u);
  c->r[4]=c->r[3]|c->r[3]; // 8014E714
  c->r[3]=c->r[13]+0xFFFF8F8Cu; // 8014E718
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014E71C
  f_801506B4(c); return; // 8014E720
}

// fn_8014E724
void f_8014E724(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFFA990u); // 8014E724
  c->r[3]=0u+0x80000000u; // 8014E728
  c->r[6]=c->r[3]+0x00003194u; // 8014E72C
  cmps(c,0,(int32_t)c->r[0],0); // 8014E730
  if (crb(c,2)) { goto L_8014E740; } // 8014E734
  c->r[6]=R32(c->r[13]+0xFFFF8FA0u); // 8014E738
  goto L_8014E774; // 8014E73C
L_8014E740:;
  c->r[3]=R8(c->r[3]+0x00003194u); // 8014E740
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8014E744
  cmps(c,0,(int32_t)c->r[0],48); // 8014E748
  if (crb(c,0)) { goto L_8014E76C; } // 8014E74C
  cmps(c,0,(int32_t)c->r[0],57); // 8014E750
  if (!crb(c,1)) { goto L_8014E760; } // 8014E754
  cmps(c,0,(int32_t)c->r[0],65); // 8014E758
  if (crb(c,0)) { goto L_8014E76C; } // 8014E75C
L_8014E760:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8014E760
  cmps(c,0,(int32_t)c->r[0],90); // 8014E764
  if (!crb(c,1)) { goto L_8014E774; } // 8014E768
L_8014E76C:;
  c->r[3]=0u+0x80000000u; // 8014E76C
  c->r[6]=c->r[3]+0x00003180u; // 8014E770
L_8014E774:;
  c->r[4]=R8(c->r[6]+0x00000000u); // 8014E774
  c->r[5]=c->r[13]+0xFFFFA9B8u; // 8014E778
  c->r[0]=0u+0x00000000u; // 8014E77C
  c->r[3]=c->r[13]+0xFFFFA9B8u; // 8014E780
  W8(c->r[13]+0xFFFFA9B8u,c->r[4]); // 8014E784
  c->r[4]=R8(c->r[6]+0x00000001u); // 8014E788
  W8(c->r[5]+0x00000001u,c->r[4]); // 8014E78C
  c->r[4]=R8(c->r[6]+0x00000002u); // 8014E790
  W8(c->r[5]+0x00000002u,c->r[4]); // 8014E794
  c->r[4]=R8(c->r[6]+0x00000003u); // 8014E798
  W8(c->r[5]+0x00000003u,c->r[4]); // 8014E79C
  W8(c->r[5]+0x00000004u,c->r[0]); // 8014E7A0
  return; // 8014E7A4
}

// OSGetAppType
void f_8014E7A8(Ctx* __restrict c) {
  trace_call(0x8014E7A8u);
  c->r[0]=R32(c->r[13]+0xFFFFA990u); // 8014E7A8
  cmps(c,0,(int32_t)c->r[0],0); // 8014E7AC
  if (crb(c,2)) { goto L_8014E7BC; } // 8014E7B0
  c->r[3]=0u+0x00000040u; // 8014E7B4
  return; // 8014E7B8
L_8014E7BC:;
  c->r[3]=0u+0x80000000u; // 8014E7BC
  c->r[3]=R8(c->r[3]+0x00003184u); // 8014E7C0
  return; // 8014E7C4
}

// __OSInitAlarm
void f_8014E7C8(Ctx* __restrict c) {
  trace_call(0x8014E7C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014E7C8
  c->r[0]=c->lr; // 8014E7CC
  c->r[3]=0u+0x00000008u; // 8014E7D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014E7D4
  c->lr=0x8014E7DCu; f_8014E5AC(c); // 8014E7D8
  c->r[4]=0u+0x80150000u; // 8014E7DC
  c->r[4]=c->r[4]+0xFFFFEEB8u; // 8014E7E0
  cmpu(c,0,c->r[3],c->r[4]); // 8014E7E4
  if (crb(c,2)) { goto L_8014E810; } // 8014E7E8
  c->r[0]=0u+0x00000000u; // 8014E7EC
  c->r[3]=c->r[13]+0xFFFFA9D8u; // 8014E7F0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8014E7F4
  c->r[3]=0u+0x00000008u; // 8014E7F8
  W32(c->r[13]+0xFFFFA9D8u,c->r[0]); // 8014E7FC
  c->lr=0x8014E804u; f_8014E598(c); // 8014E800
  c->r[3]=0u+0x802C0000u; // 8014E804
  c->r[3]=c->r[3]+0x00006C40u; // 8014E808
  c->lr=0x8014E810u; f_80155A40(c); // 8014E80C
L_8014E810:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014E810
  c->lr=c->r[0]; // 8014E814
  c->r[1]=c->r[1]+0x00000010u; // 8014E818
  return; // 8014E81C
}

// OSCreateAlarm
void f_8014E820(Ctx* __restrict c) {
  trace_call(0x8014E820u);
  c->r[0]=0u+0x00000000u; // 8014E820
  W32(c->r[3]+0x00000000u,c->r[0]); // 8014E824
  W32(c->r[3]+0x00000004u,c->r[0]); // 8014E828
  return; // 8014E82C
}

// InsertAlarm
void f_8014E830(Ctx* __restrict c) {
  trace_call(0x8014E830u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014E830
  c->r[0]=c->lr; // 8014E834
  W32(c->r[1]+0x00000034u,c->r[0]); // 8014E838
  c->r[11]=c->r[1]+0x00000030u; // 8014E83C
  c->lr=0x8014E844u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014E840
  c->r[4]=R32(c->r[3]+0x00000018u); // 8014E844
  c->r[29]=0u+0x00000000u; // 8014E848
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 8014E84C
  c->r[30]=c->r[3]|c->r[3]; // 8014E850
  c->r[0]=c->r[29]^0x80000000u; // 8014E854
  c->r[4]=c->r[4]^0x80000000u; // 8014E858
  c->r[3]=addc(c,~c->r[8],c->r[29],1); // 8014E85C
  c->r[31]=c->r[7]|c->r[7]; // 8014E860
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 8014E864
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8014E868
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 8014E86C
  if (crb(c,2)) { goto L_8014E8EC; } // 8014E870
  c->lr=0x8014E878u; f_801584AC(c); // 8014E874
  c->r[28]=R32(c->r[30]+0x00000020u); // 8014E878
  c->r[7]=c->r[3]^0x80000000u; // 8014E87C
  c->r[27]=R32(c->r[30]+0x00000024u); // 8014E880
  c->r[0]=c->r[28]^0x80000000u; // 8014E884
  c->r[5]=c->r[28]|c->r[28]; // 8014E888
  c->r[6]=addc(c,~c->r[4],c->r[27],1); // 8014E88C
  c->r[7]=addc(c,~c->r[7],c->r[0],c->xer_ca); // 8014E890
  c->r[7]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8014E894
  c->r[6]=c->r[27]|c->r[27]; // 8014E898
  c->r[7]=0u-c->r[7]; cr0(c,c->r[7]); // 8014E89C
  if (crb(c,2)) { goto L_8014E8EC; } // 8014E8A0
  c->r[26]=R32(c->r[30]+0x00000018u); // 8014E8A4
  c->r[4]=addc(c,~c->r[27],c->r[4],1); // 8014E8A8
  c->r[25]=R32(c->r[30]+0x0000001Cu); // 8014E8AC
  c->r[3]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 8014E8B0
  c->r[5]=c->r[26]|c->r[26]; // 8014E8B4
  c->r[6]=c->r[25]|c->r[25]; // 8014E8B8
  c->lr=0x8014E8C0u; f_80252CF4(c); // 8014E8BC
  c->r[0]=0u+0x00000001u; // 8014E8C0
  c->r[4]=addc(c,c->r[4],c->r[0],0); // 8014E8C4
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[4])>>32); // 8014E8C8
  c->r[5]=addc(c,c->r[3],c->r[29],c->xer_ca); // 8014E8CC
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[4]); // 8014E8D0
  c->r[4]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[4]); // 8014E8D4
  c->r[3]=c->r[0]+c->r[3]; // 8014E8D8
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[5]); // 8014E8DC
  c->r[6]=addc(c,c->r[27],c->r[4],0); // 8014E8E0
  c->r[0]=c->r[3]+c->r[0]; // 8014E8E4
  c->r[5]=addc(c,c->r[28],c->r[0],c->xer_ca); // 8014E8E8
L_8014E8EC:;
  W32(c->r[30]+0x00000000u,c->r[31]); // 8014E8EC
  c->r[0]=c->r[5]^0x80000000u; // 8014E8F0
  W32(c->r[30]+0x0000000Cu,c->r[6]); // 8014E8F4
  W32(c->r[30]+0x00000008u,c->r[5]); // 8014E8F8
  c->r[7]=R32(c->r[13]+0xFFFFA9D8u); // 8014E8FC
  goto L_8014E9C4; // 8014E900
L_8014E904:;
  c->r[3]=R32(c->r[7]+0x00000008u); // 8014E904
  c->r[5]=R32(c->r[7]+0x0000000Cu); // 8014E908
  c->r[4]=c->r[3]^0x80000000u; // 8014E90C
  c->r[3]=addc(c,~c->r[5],c->r[6],1); // 8014E910
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 8014E914
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8014E918
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 8014E91C
  if (crb(c,2)) { goto L_8014E9C0; } // 8014E920
  c->r[0]=R32(c->r[7]+0x00000010u); // 8014E924
  W32(c->r[30]+0x00000010u,c->r[0]); // 8014E928
  W32(c->r[7]+0x00000010u,c->r[30]); // 8014E92C
  c->r[3]=R32(c->r[30]+0x00000010u); // 8014E930
  W32(c->r[30]+0x00000014u,c->r[7]); // 8014E934
  cmps(c,0,(int32_t)c->r[3],0); // 8014E938
  if (crb(c,2)) { goto L_8014E948; } // 8014E93C
  W32(c->r[3]+0x00000014u,c->r[30]); // 8014E940
  goto L_8014EA68; // 8014E944
L_8014E948:;
  W32(c->r[13]+0xFFFFA9D8u,c->r[30]); // 8014E948
  c->lr=0x8014E950u; f_801584AC(c); // 8014E94C
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 8014E950
  c->r[7]=0u+0x00000000u; // 8014E954
  c->r[0]=R32(c->r[30]+0x00000008u); // 8014E958
  c->r[6]=c->r[7]^0x80000000u; // 8014E95C
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 8014E960
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 8014E964
  c->r[5]=c->r[0]^0x80000000u; // 8014E968
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 8014E96C
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 8014E970
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 8014E974
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 8014E978
  if (crb(c,2)) { goto L_8014E98C; } // 8014E97C
  c->r[3]=0u+0x00000000u; // 8014E980
  c->lr=0x8014E988u; f_8014D284(c); // 8014E984
  goto L_8014EA68; // 8014E988
L_8014E98C:;
  c->r[4]=0u+0x80000000u; // 8014E98C
  c->r[3]=c->r[7]^0x80000000u; // 8014E990
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 8014E994
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 8014E998
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 8014E99C
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 8014E9A0
  if (crb(c,2)) { goto L_8014E9B4; } // 8014E9A4
  c->r[3]=c->r[8]|c->r[8]; // 8014E9A8
  c->lr=0x8014E9B0u; f_8014D284(c); // 8014E9AC
  goto L_8014EA68; // 8014E9B0
L_8014E9B4:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 8014E9B4
  c->lr=0x8014E9BCu; f_8014D284(c); // 8014E9B8
  goto L_8014EA68; // 8014E9BC
L_8014E9C0:;
  c->r[7]=R32(c->r[7]+0x00000014u); // 8014E9C0
L_8014E9C4:;
  cmps(c,0,(int32_t)c->r[7],0); // 8014E9C4
  if (!crb(c,2)) { IRQCHK(c); goto L_8014E904; } // 8014E9C8
  c->r[31]=0u+0x00000000u; // 8014E9CC
  c->r[3]=c->r[13]+0xFFFFA9D8u; // 8014E9D0
  W32(c->r[30]+0x00000014u,c->r[31]); // 8014E9D4
  c->r[4]=R32(c->r[3]+0x00000004u); // 8014E9D8
  W32(c->r[3]+0x00000004u,c->r[30]); // 8014E9DC
  cmps(c,0,(int32_t)c->r[4],0); // 8014E9E0
  W32(c->r[30]+0x00000010u,c->r[4]); // 8014E9E4
  if (crb(c,2)) { goto L_8014E9F4; } // 8014E9E8
  W32(c->r[4]+0x00000014u,c->r[30]); // 8014E9EC
  goto L_8014EA68; // 8014E9F0
L_8014E9F4:;
  W32(c->r[3]+0x00000004u,c->r[30]); // 8014E9F4
  W32(c->r[13]+0xFFFFA9D8u,c->r[30]); // 8014E9F8
  c->lr=0x8014EA00u; f_801584AC(c); // 8014E9FC
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 8014EA00
  c->r[6]=c->r[31]^0x80000000u; // 8014EA04
  c->r[0]=R32(c->r[30]+0x00000008u); // 8014EA08
  c->r[7]=addc(c,~c->r[4],c->r[5],1); // 8014EA0C
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 8014EA10
  c->r[5]=c->r[0]^0x80000000u; // 8014EA14
  c->r[0]=addc(c,~c->r[31],c->r[7],1); // 8014EA18
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 8014EA1C
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 8014EA20
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 8014EA24
  if (crb(c,2)) { goto L_8014EA38; } // 8014EA28
  c->r[3]=0u+0x00000000u; // 8014EA2C
  c->lr=0x8014EA34u; f_8014D284(c); // 8014EA30
  goto L_8014EA68; // 8014EA34
L_8014EA38:;
  c->r[4]=0u+0x80000000u; // 8014EA38
  c->r[3]=c->r[31]^0x80000000u; // 8014EA3C
  c->r[0]=addc(c,~c->r[4],c->r[7],1); // 8014EA40
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 8014EA44
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 8014EA48
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 8014EA4C
  if (crb(c,2)) { goto L_8014EA60; } // 8014EA50
  c->r[3]=c->r[7]|c->r[7]; // 8014EA54
  c->lr=0x8014EA5Cu; f_8014D284(c); // 8014EA58
  goto L_8014EA68; // 8014EA5C
L_8014EA60:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 8014EA60
  c->lr=0x8014EA68u; f_8014D284(c); // 8014EA64
L_8014EA68:;
  c->r[11]=c->r[1]+0x00000030u; // 8014EA68
  c->lr=0x8014EA70u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014EA6C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8014EA70
  c->lr=c->r[0]; // 8014EA74
  c->r[1]=c->r[1]+0x00000030u; // 8014EA78
  return; // 8014EA7C
}

// OSSetAlarm
void f_8014EA80(Ctx* __restrict c) {
  trace_call(0x8014EA80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014EA80
  c->r[0]=c->lr; // 8014EA84
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014EA88
  c->r[11]=c->r[1]+0x00000020u; // 8014EA8C
  c->lr=0x8014EA94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014EA90
  c->r[27]=c->r[3]|c->r[3]; // 8014EA94
  c->r[29]=c->r[5]|c->r[5]; // 8014EA98
  c->r[28]=c->r[6]|c->r[6]; // 8014EA9C
  c->r[30]=c->r[7]|c->r[7]; // 8014EAA0
  c->lr=0x8014EAA8u; f_80154410(c); // 8014EAA4
  c->r[0]=0u+0x00000000u; // 8014EAA8
  c->r[31]=c->r[3]|c->r[3]; // 8014EAAC
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 8014EAB0
  W32(c->r[27]+0x00000018u,c->r[0]); // 8014EAB4
  c->lr=0x8014EABCu; f_801584AC(c); // 8014EAB8
  c->r[6]=addc(c,c->r[28],c->r[4],0); // 8014EABC
  c->r[7]=c->r[30]|c->r[30]; // 8014EAC0
  c->r[5]=addc(c,c->r[29],c->r[3],c->xer_ca); // 8014EAC4
  c->r[3]=c->r[27]|c->r[27]; // 8014EAC8
  c->lr=0x8014EAD0u; f_8014E830(c); // 8014EACC
  c->r[3]=c->r[31]|c->r[31]; // 8014EAD0
  c->lr=0x8014EAD8u; f_80154438(c); // 8014EAD4
  c->r[11]=c->r[1]+0x00000020u; // 8014EAD8
  c->lr=0x8014EAE0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014EADC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014EAE0
  c->lr=c->r[0]; // 8014EAE4
  c->r[1]=c->r[1]+0x00000020u; // 8014EAE8
  return; // 8014EAEC
}

// OSSetPeriodicAlarm
void f_8014EAF0(Ctx* __restrict c) {
  trace_call(0x8014EAF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014EAF0
  c->r[0]=c->lr; // 8014EAF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014EAF8
  c->r[11]=c->r[1]+0x00000020u; // 8014EAFC
  c->lr=0x8014EB04u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8014EB00
  c->r[26]=c->r[3]|c->r[3]; // 8014EB04
  c->r[28]=c->r[5]|c->r[5]; // 8014EB08
  c->r[27]=c->r[6]|c->r[6]; // 8014EB0C
  c->r[29]=c->r[7]|c->r[7]; // 8014EB10
  c->r[31]=c->r[8]|c->r[8]; // 8014EB14
  c->r[30]=c->r[9]|c->r[9]; // 8014EB18
  c->lr=0x8014EB20u; f_80154410(c); // 8014EB1C
  W32(c->r[26]+0x0000001Cu,c->r[31]); // 8014EB20
  c->r[31]=c->r[3]|c->r[3]; // 8014EB24
  c->r[4]=c->r[27]|c->r[27]; // 8014EB28
  c->r[3]=c->r[28]|c->r[28]; // 8014EB2C
  W32(c->r[26]+0x00000018u,c->r[29]); // 8014EB30
  c->lr=0x8014EB38u; f_80158510(c); // 8014EB34
  W32(c->r[26]+0x00000020u,c->r[3]); // 8014EB38
  c->r[3]=c->r[26]|c->r[26]; // 8014EB3C
  c->r[7]=c->r[30]|c->r[30]; // 8014EB40
  c->r[6]=0u+0x00000000u; // 8014EB44
  W32(c->r[26]+0x00000024u,c->r[4]); // 8014EB48
  c->r[5]=0u+0x00000000u; // 8014EB4C
  c->lr=0x8014EB54u; f_8014E830(c); // 8014EB50
  c->r[3]=c->r[31]|c->r[31]; // 8014EB54
  c->lr=0x8014EB5Cu; f_80154438(c); // 8014EB58
  c->r[11]=c->r[1]+0x00000020u; // 8014EB5C
  c->lr=0x8014EB64u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014EB60
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014EB64
  c->lr=c->r[0]; // 8014EB68
  c->r[1]=c->r[1]+0x00000020u; // 8014EB6C
  return; // 8014EB70
}

// OSCancelAlarm
void f_8014EB74(Ctx* __restrict c) {
  trace_call(0x8014EB74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014EB74
  c->r[0]=c->lr; // 8014EB78
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014EB7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014EB80
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014EB84
  c->r[30]=c->r[3]|c->r[3]; // 8014EB88
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014EB8C
  c->lr=0x8014EB94u; f_80154410(c); // 8014EB90
  c->r[0]=R32(c->r[30]+0x00000000u); // 8014EB94
  c->r[31]=c->r[3]|c->r[3]; // 8014EB98
  cmps(c,0,(int32_t)c->r[0],0); // 8014EB9C
  if (!crb(c,2)) { goto L_8014EBAC; } // 8014EBA0
  c->lr=0x8014EBA8u; f_80154438(c); // 8014EBA4
  goto L_8014EC70; // 8014EBA8
L_8014EBAC:;
  c->r[29]=R32(c->r[30]+0x00000014u); // 8014EBAC
  cmps(c,0,(int32_t)c->r[29],0); // 8014EBB0
  if (!crb(c,2)) { goto L_8014EBC8; } // 8014EBB4
  c->r[0]=R32(c->r[30]+0x00000010u); // 8014EBB8
  c->r[3]=c->r[13]+0xFFFFA9D8u; // 8014EBBC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8014EBC0
  goto L_8014EBD0; // 8014EBC4
L_8014EBC8:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 8014EBC8
  W32(c->r[29]+0x00000010u,c->r[0]); // 8014EBCC
L_8014EBD0:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 8014EBD0
  cmps(c,0,(int32_t)c->r[3],0); // 8014EBD4
  if (crb(c,2)) { goto L_8014EBE4; } // 8014EBD8
  W32(c->r[3]+0x00000014u,c->r[29]); // 8014EBDC
  goto L_8014EC60; // 8014EBE0
L_8014EBE4:;
  cmps(c,0,(int32_t)c->r[29],0); // 8014EBE4
  W32(c->r[13]+0xFFFFA9D8u,c->r[29]); // 8014EBE8
  if (crb(c,2)) { goto L_8014EC60; } // 8014EBEC
  c->lr=0x8014EBF4u; f_801584AC(c); // 8014EBF0
  c->r[5]=R32(c->r[29]+0x0000000Cu); // 8014EBF4
  c->r[7]=0u+0x00000000u; // 8014EBF8
  c->r[0]=R32(c->r[29]+0x00000008u); // 8014EBFC
  c->r[6]=c->r[7]^0x80000000u; // 8014EC00
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 8014EC04
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 8014EC08
  c->r[5]=c->r[0]^0x80000000u; // 8014EC0C
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 8014EC10
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 8014EC14
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 8014EC18
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 8014EC1C
  if (crb(c,2)) { goto L_8014EC30; } // 8014EC20
  c->r[3]=0u+0x00000000u; // 8014EC24
  c->lr=0x8014EC2Cu; f_8014D284(c); // 8014EC28
  goto L_8014EC60; // 8014EC2C
L_8014EC30:;
  c->r[4]=0u+0x80000000u; // 8014EC30
  c->r[3]=c->r[7]^0x80000000u; // 8014EC34
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 8014EC38
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 8014EC3C
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 8014EC40
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 8014EC44
  if (crb(c,2)) { goto L_8014EC58; } // 8014EC48
  c->r[3]=c->r[8]|c->r[8]; // 8014EC4C
  c->lr=0x8014EC54u; f_8014D284(c); // 8014EC50
  goto L_8014EC60; // 8014EC54
L_8014EC58:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 8014EC58
  c->lr=0x8014EC60u; f_8014D284(c); // 8014EC5C
L_8014EC60:;
  c->r[0]=0u+0x00000000u; // 8014EC60
  c->r[3]=c->r[31]|c->r[31]; // 8014EC64
  W32(c->r[30]+0x00000000u,c->r[0]); // 8014EC68
  c->lr=0x8014EC70u; f_80154438(c); // 8014EC6C
L_8014EC70:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014EC70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014EC74
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014EC78
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014EC7C
  c->lr=c->r[0]; // 8014EC80
  c->r[1]=c->r[1]+0x00000020u; // 8014EC84
  return; // 8014EC88
}

// DecrementerExceptionCallback
void f_8014EC8C(Ctx* __restrict c) {
  trace_call(0x8014EC8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014EC8C
  c->r[0]=c->lr; // 8014EC90
  W32(c->r[1]+0x000002E4u,c->r[0]); // 8014EC94
  W32(c->r[1]+0x000002DCu,c->r[31]); // 8014EC98
  W32(c->r[1]+0x000002D8u,c->r[30]); // 8014EC9C
  W32(c->r[1]+0x000002D4u,c->r[29]); // 8014ECA0
  c->r[29]=c->r[4]|c->r[4]; // 8014ECA4
  W32(c->r[1]+0x000002D0u,c->r[28]); // 8014ECA8
  c->lr=0x8014ECB0u; f_801584AC(c); // 8014ECAC
  c->r[31]=R32(c->r[13]+0xFFFFA9D8u); // 8014ECB0
  c->r[28]=c->r[4]|c->r[4]; // 8014ECB4
  c->r[30]=c->r[3]|c->r[3]; // 8014ECB8
  cmps(c,0,(int32_t)c->r[31],0); // 8014ECBC
  if (!crb(c,2)) { goto L_8014ECCC; } // 8014ECC0
  c->r[3]=c->r[29]|c->r[29]; // 8014ECC4
  c->lr=0x8014ECCCu; f_80150168(c); // 8014ECC8
L_8014ECCC:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8014ECCC
  c->r[0]=c->r[30]^0x80000000u; // 8014ECD0
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 8014ECD4
  c->r[4]=c->r[3]^0x80000000u; // 8014ECD8
  c->r[3]=addc(c,~c->r[5],c->r[28],1); // 8014ECDC
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 8014ECE0
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8014ECE4
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 8014ECE8
  if (crb(c,2)) { goto L_8014ED68; } // 8014ECEC
  c->lr=0x8014ECF4u; f_801584AC(c); // 8014ECF0
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 8014ECF4
  c->r[7]=0u+0x00000000u; // 8014ECF8
  c->r[0]=R32(c->r[31]+0x00000008u); // 8014ECFC
  c->r[6]=c->r[7]^0x80000000u; // 8014ED00
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 8014ED04
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 8014ED08
  c->r[5]=c->r[0]^0x80000000u; // 8014ED0C
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 8014ED10
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 8014ED14
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 8014ED18
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 8014ED1C
  if (crb(c,2)) { goto L_8014ED30; } // 8014ED20
  c->r[3]=0u+0x00000000u; // 8014ED24
  c->lr=0x8014ED2Cu; f_8014D284(c); // 8014ED28
  goto L_8014ED60; // 8014ED2C
L_8014ED30:;
  c->r[4]=0u+0x80000000u; // 8014ED30
  c->r[3]=c->r[7]^0x80000000u; // 8014ED34
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 8014ED38
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 8014ED3C
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 8014ED40
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 8014ED44
  if (crb(c,2)) { goto L_8014ED58; } // 8014ED48
  c->r[3]=c->r[8]|c->r[8]; // 8014ED4C
  c->lr=0x8014ED54u; f_8014D284(c); // 8014ED50
  goto L_8014ED60; // 8014ED54
L_8014ED58:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 8014ED58
  c->lr=0x8014ED60u; f_8014D284(c); // 8014ED5C
L_8014ED60:;
  c->r[3]=c->r[29]|c->r[29]; // 8014ED60
  c->lr=0x8014ED68u; f_80150168(c); // 8014ED64
L_8014ED68:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8014ED68
  cmps(c,0,(int32_t)c->r[3],0); // 8014ED6C
  W32(c->r[13]+0xFFFFA9D8u,c->r[3]); // 8014ED70
  if (!crb(c,2)) { goto L_8014ED88; } // 8014ED74
  c->r[0]=0u+0x00000000u; // 8014ED78
  c->r[3]=c->r[13]+0xFFFFA9D8u; // 8014ED7C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8014ED80
  goto L_8014ED90; // 8014ED84
L_8014ED88:;
  c->r[0]=0u+0x00000000u; // 8014ED88
  W32(c->r[3]+0x00000010u,c->r[0]); // 8014ED8C
L_8014ED90:;
  c->r[30]=R32(c->r[31]+0x00000000u); // 8014ED90
  c->r[6]=0u+0x00000000u; // 8014ED94
  c->r[0]=c->r[6]^0x80000000u; // 8014ED98
  W32(c->r[31]+0x00000000u,c->r[6]); // 8014ED9C
  c->r[3]=R32(c->r[31]+0x00000018u); // 8014EDA0
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 8014EDA4
  c->r[4]=c->r[3]^0x80000000u; // 8014EDA8
  c->r[3]=addc(c,~c->r[5],c->r[6],1); // 8014EDAC
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 8014EDB0
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8014EDB4
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 8014EDB8
  if (crb(c,2)) { goto L_8014EDD4; } // 8014EDBC
  c->r[3]=c->r[31]|c->r[31]; // 8014EDC0
  c->r[7]=c->r[30]|c->r[30]; // 8014EDC4
  c->r[6]=0u+0x00000000u; // 8014EDC8
  c->r[5]=0u+0x00000000u; // 8014EDCC
  c->lr=0x8014EDD4u; f_8014E830(c); // 8014EDD0
L_8014EDD4:;
  c->r[28]=R32(c->r[13]+0xFFFFA9D8u); // 8014EDD4
  cmps(c,0,(int32_t)c->r[28],0); // 8014EDD8
  if (crb(c,2)) { goto L_8014EE50; } // 8014EDDC
  c->lr=0x8014EDE4u; f_801584AC(c); // 8014EDE0
  c->r[5]=R32(c->r[28]+0x0000000Cu); // 8014EDE4
  c->r[7]=0u+0x00000000u; // 8014EDE8
  c->r[0]=R32(c->r[28]+0x00000008u); // 8014EDEC
  c->r[6]=c->r[7]^0x80000000u; // 8014EDF0
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 8014EDF4
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 8014EDF8
  c->r[5]=c->r[0]^0x80000000u; // 8014EDFC
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 8014EE00
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 8014EE04
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 8014EE08
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 8014EE0C
  if (crb(c,2)) { goto L_8014EE20; } // 8014EE10
  c->r[3]=0u+0x00000000u; // 8014EE14
  c->lr=0x8014EE1Cu; f_8014D284(c); // 8014EE18
  goto L_8014EE50; // 8014EE1C
L_8014EE20:;
  c->r[4]=0u+0x80000000u; // 8014EE20
  c->r[3]=c->r[7]^0x80000000u; // 8014EE24
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 8014EE28
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 8014EE2C
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 8014EE30
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 8014EE34
  if (crb(c,2)) { goto L_8014EE48; } // 8014EE38
  c->r[3]=c->r[8]|c->r[8]; // 8014EE3C
  c->lr=0x8014EE44u; f_8014D284(c); // 8014EE40
  goto L_8014EE50; // 8014EE44
L_8014EE48:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 8014EE48
  c->lr=0x8014EE50u; f_8014D284(c); // 8014EE4C
L_8014EE50:;
  c->lr=0x8014EE54u; f_801571A4(c); // 8014EE50
  c->r[3]=c->r[1]+0x00000008u; // 8014EE54
  c->lr=0x8014EE5Cu; f_801502A8(c); // 8014EE58
  c->r[3]=c->r[1]+0x00000008u; // 8014EE5C
  c->lr=0x8014EE64u; f_80150080(c); // 8014EE60
  c->r[12]=c->r[30]|c->r[30]; // 8014EE64
  c->r[3]=c->r[31]|c->r[31]; // 8014EE68
  c->r[4]=c->r[29]|c->r[29]; // 8014EE6C
  c->ctr=c->r[12]; // 8014EE70
  if (true) { c->lr=0x8014EE78u; dispatch(c,c->ctr); } // 8014EE74
  c->r[3]=c->r[1]+0x00000008u; // 8014EE78
  c->lr=0x8014EE80u; f_801502A8(c); // 8014EE7C
  c->r[3]=c->r[29]|c->r[29]; // 8014EE80
  c->lr=0x8014EE88u; f_80150080(c); // 8014EE84
  c->lr=0x8014EE8Cu; f_801571E0(c); // 8014EE88
  c->lr=0x8014EE90u; f_801576EC(c); // 8014EE8C
  c->r[3]=c->r[29]|c->r[29]; // 8014EE90
  c->lr=0x8014EE98u; f_80150168(c); // 8014EE94
  c->r[0]=R32(c->r[1]+0x000002E4u); // 8014EE98
  c->r[31]=R32(c->r[1]+0x000002DCu); // 8014EE9C
  c->r[30]=R32(c->r[1]+0x000002D8u); // 8014EEA0
  c->r[29]=R32(c->r[1]+0x000002D4u); // 8014EEA4
  c->r[28]=R32(c->r[1]+0x000002D0u); // 8014EEA8
  c->lr=c->r[0]; // 8014EEAC
  c->r[1]=c->r[1]+0x000002E0u; // 8014EEB0
  return; // 8014EEB4
}

// DecrementerExceptionHandler
void f_8014EEB8(Ctx* __restrict c) {
  trace_call(0x8014EEB8u);
  W32(c->r[4]+0x00000000u,c->r[0]); // 8014EEB8
  W32(c->r[4]+0x00000004u,c->r[1]); // 8014EEBC
  W32(c->r[4]+0x00000008u,c->r[2]); // 8014EEC0
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8014EEC4
  c->r[0]=mfspr(c,913); // 8014EEC8
  W32(c->r[4]+0x000001A8u,c->r[0]); // 8014EECC
  c->r[0]=mfspr(c,914); // 8014EED0
  W32(c->r[4]+0x000001ACu,c->r[0]); // 8014EED4
  c->r[0]=mfspr(c,915); // 8014EED8
  W32(c->r[4]+0x000001B0u,c->r[0]); // 8014EEDC
  c->r[0]=mfspr(c,916); // 8014EEE0
  W32(c->r[4]+0x000001B4u,c->r[0]); // 8014EEE4
  c->r[0]=mfspr(c,917); // 8014EEE8
  W32(c->r[4]+0x000001B8u,c->r[0]); // 8014EEEC
  c->r[0]=mfspr(c,918); // 8014EEF0
  W32(c->r[4]+0x000001BCu,c->r[0]); // 8014EEF4
  c->r[0]=mfspr(c,919); // 8014EEF8
  W32(c->r[4]+0x000001C0u,c->r[0]); // 8014EEFC
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014EF00
  f_8014EC8C(c); return; // 8014EF04
}

// OSSetAlarmTag
void f_8014EF08(Ctx* __restrict c) {
  trace_call(0x8014EF08u);
  W32(c->r[3]+0x00000004u,c->r[4]); // 8014EF08
  return; // 8014EF0C
}

// OnReset
void f_8014EF10(Ctx* __restrict c) {
  trace_call(0x8014EF10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014EF10
  c->r[0]=c->lr; // 8014EF14
  cmps(c,0,(int32_t)c->r[3],0); // 8014EF18
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014EF1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014EF20
  W32(c->r[1]+0x00000008u,c->r[30]); // 8014EF24
  if (crb(c,2)) { goto L_8014EF80; } // 8014EF28
  c->r[31]=R32(c->r[13]+0xFFFFA9D8u); // 8014EF2C
  cmps(c,0,(int32_t)c->r[31],0); // 8014EF30
  if (crb(c,2)) { goto L_8014EF40; } // 8014EF34
  c->r[30]=R32(c->r[31]+0x00000014u); // 8014EF38
  goto L_8014EF78; // 8014EF3C
L_8014EF40:;
  c->r[30]=0u+0x00000000u; // 8014EF40
  goto L_8014EF78; // 8014EF44
L_8014EF48:;
  c->r[3]=c->r[31]|c->r[31]; // 8014EF48
  c->lr=0x8014EF50u; f_80171068(c); // 8014EF4C
  cmps(c,0,(int32_t)c->r[3],0); // 8014EF50
  if (!crb(c,2)) { goto L_8014EF60; } // 8014EF54
  c->r[3]=c->r[31]|c->r[31]; // 8014EF58
  c->lr=0x8014EF60u; f_8014EB74(c); // 8014EF5C
L_8014EF60:;
  cmps(c,0,(int32_t)c->r[30],0); // 8014EF60
  c->r[31]=c->r[30]|c->r[30]; // 8014EF64
  if (crb(c,2)) { goto L_8014EF74; } // 8014EF68
  c->r[30]=R32(c->r[30]+0x00000014u); // 8014EF6C
  goto L_8014EF78; // 8014EF70
L_8014EF74:;
  c->r[30]=0u+0x00000000u; // 8014EF74
L_8014EF78:;
  cmps(c,0,(int32_t)c->r[31],0); // 8014EF78
  if (!crb(c,2)) { IRQCHK(c); goto L_8014EF48; } // 8014EF7C
L_8014EF80:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014EF80
  c->r[3]=0u+0x00000001u; // 8014EF84
  c->r[30]=R32(c->r[1]+0x00000008u); // 8014EF88
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014EF8C
  c->lr=c->r[0]; // 8014EF90
  c->r[1]=c->r[1]+0x00000010u; // 8014EF94
  return; // 8014EF98
}

// OSSetAlarmUserData
void f_8014EF9C(Ctx* __restrict c) {
  trace_call(0x8014EF9Cu);
  W32(c->r[3]+0x00000028u,c->r[4]); // 8014EF9C
  return; // 8014EFA0
}

// OSGetAlarmUserData
void f_8014EFA4(Ctx* __restrict c) {
  trace_call(0x8014EFA4u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 8014EFA4
  return; // 8014EFA8
}

// DLInsert
void f_8014EFAC(Ctx* __restrict c) {
  trace_call(0x8014EFACu);
  c->r[7]=c->r[3]|c->r[3]; // 8014EFAC
  c->r[6]=0u+0x00000000u; // 8014EFB0
  goto L_8014EFC8; // 8014EFB4
L_8014EFB8:;
  cmpu(c,0,c->r[4],c->r[7]); // 8014EFB8
  if (!crb(c,1)) { goto L_8014EFD0; } // 8014EFBC
  c->r[6]=c->r[7]|c->r[7]; // 8014EFC0
  c->r[7]=R32(c->r[7]+0x00000004u); // 8014EFC4
L_8014EFC8:;
  cmps(c,0,(int32_t)c->r[7],0); // 8014EFC8
  if (!crb(c,2)) { IRQCHK(c); goto L_8014EFB8; } // 8014EFCC
L_8014EFD0:;
  cmps(c,0,(int32_t)c->r[7],0); // 8014EFD0
  W32(c->r[4]+0x00000004u,c->r[7]); // 8014EFD4
  W32(c->r[4]+0x00000000u,c->r[6]); // 8014EFD8
  if (crb(c,2)) { goto L_8014F014; } // 8014EFDC
  W32(c->r[7]+0x00000000u,c->r[4]); // 8014EFE0
  c->r[5]=R32(c->r[4]+0x00000008u); // 8014EFE4
  c->r[0]=c->r[4]+c->r[5]; // 8014EFE8
  cmpu(c,0,c->r[0],c->r[7]); // 8014EFEC
  if (!crb(c,2)) { goto L_8014F014; } // 8014EFF0
  c->r[0]=R32(c->r[7]+0x00000008u); // 8014EFF4
  c->r[0]=c->r[5]+c->r[0]; // 8014EFF8
  W32(c->r[4]+0x00000008u,c->r[0]); // 8014EFFC
  c->r[7]=R32(c->r[7]+0x00000004u); // 8014F000
  cmps(c,0,(int32_t)c->r[7],0); // 8014F004
  W32(c->r[4]+0x00000004u,c->r[7]); // 8014F008
  if (crb(c,2)) { goto L_8014F014; } // 8014F00C
  W32(c->r[7]+0x00000000u,c->r[4]); // 8014F010
L_8014F014:;
  cmps(c,0,(int32_t)c->r[6],0); // 8014F014
  if (crb(c,2)) { goto L_8014F050; } // 8014F018
  W32(c->r[6]+0x00000004u,c->r[4]); // 8014F01C
  c->r[5]=R32(c->r[6]+0x00000008u); // 8014F020
  c->r[0]=c->r[6]+c->r[5]; // 8014F024
  cmpu(c,0,c->r[0],c->r[4]); // 8014F028
  if (!crb(c,2)) return; // 8014F02C
  c->r[0]=R32(c->r[4]+0x00000008u); // 8014F030
  cmps(c,0,(int32_t)c->r[7],0); // 8014F034
  c->r[0]=c->r[5]+c->r[0]; // 8014F038
  W32(c->r[6]+0x00000008u,c->r[0]); // 8014F03C
  W32(c->r[6]+0x00000004u,c->r[7]); // 8014F040
  if (crb(c,2)) return; // 8014F044
  W32(c->r[7]+0x00000000u,c->r[6]); // 8014F048
  return; // 8014F04C
L_8014F050:;
  c->r[3]=c->r[4]|c->r[4]; // 8014F050
  return; // 8014F054
}

// OSAllocFromHeap
void f_8014F058(Ctx* __restrict c) {
  trace_call(0x8014F058u);
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8014F058
  c->r[5]=R32(c->r[13]+0xFFFFA9ECu); // 8014F05C
  c->r[0]=c->r[4]+0x0000003Fu; // 8014F060
  c->r[5]=c->r[5]+c->r[3]; // 8014F064
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8014F068
  c->r[3]=R32(c->r[5]+0x00000004u); // 8014F06C
  c->r[6]=c->r[3]|c->r[3]; // 8014F070
  goto L_8014F088; // 8014F074
L_8014F078:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 8014F078
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8014F07C
  if (!crb(c,1)) { goto L_8014F090; } // 8014F080
  c->r[6]=R32(c->r[6]+0x00000004u); // 8014F084
L_8014F088:;
  cmps(c,0,(int32_t)c->r[6],0); // 8014F088
  if (!crb(c,2)) { IRQCHK(c); goto L_8014F078; } // 8014F08C
L_8014F090:;
  cmps(c,0,(int32_t)c->r[6],0); // 8014F090
  if (!crb(c,2)) { goto L_8014F0A0; } // 8014F094
  c->r[3]=0u+0x00000000u; // 8014F098
  return; // 8014F09C
L_8014F0A0:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 8014F0A0
  c->r[0]=c->r[0]-c->r[4]; // 8014F0A4
  cmpu(c,0,c->r[0],0x00000040u); // 8014F0A8
  if (!crb(c,0)) { goto L_8014F0E8; } // 8014F0AC
  c->r[4]=R32(c->r[6]+0x00000004u); // 8014F0B0
  cmps(c,0,(int32_t)c->r[4],0); // 8014F0B4
  if (crb(c,2)) { goto L_8014F0C4; } // 8014F0B8
  c->r[0]=R32(c->r[6]+0x00000000u); // 8014F0BC
  W32(c->r[4]+0x00000000u,c->r[0]); // 8014F0C0
L_8014F0C4:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 8014F0C4
  cmps(c,0,(int32_t)c->r[4],0); // 8014F0C8
  if (!crb(c,2)) { goto L_8014F0D8; } // 8014F0CC
  c->r[3]=R32(c->r[6]+0x00000004u); // 8014F0D0
  goto L_8014F0E0; // 8014F0D4
L_8014F0D8:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 8014F0D8
  W32(c->r[4]+0x00000004u,c->r[0]); // 8014F0DC
L_8014F0E0:;
  W32(c->r[5]+0x00000004u,c->r[3]); // 8014F0E0
  goto L_8014F128; // 8014F0E4
L_8014F0E8:;
  W32(c->r[6]+0x00000008u,c->r[4]); // 8014F0E8
  c->r[4]=c->r[6]+c->r[4]; // 8014F0EC
  W32(c->r[4]+0x00000008u,c->r[0]); // 8014F0F0
  c->r[0]=R32(c->r[6]+0x00000000u); // 8014F0F4
  W32(c->r[4]+0x00000000u,c->r[0]); // 8014F0F8
  c->r[3]=R32(c->r[6]+0x00000004u); // 8014F0FC
  cmps(c,0,(int32_t)c->r[3],0); // 8014F100
  W32(c->r[4]+0x00000004u,c->r[3]); // 8014F104
  if (crb(c,2)) { goto L_8014F110; } // 8014F108
  W32(c->r[3]+0x00000000u,c->r[4]); // 8014F10C
L_8014F110:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 8014F110
  cmps(c,0,(int32_t)c->r[3],0); // 8014F114
  if (crb(c,2)) { goto L_8014F124; } // 8014F118
  W32(c->r[3]+0x00000004u,c->r[4]); // 8014F11C
  goto L_8014F128; // 8014F120
L_8014F124:;
  W32(c->r[5]+0x00000004u,c->r[4]); // 8014F124
L_8014F128:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 8014F128
  c->r[0]=0u+0x00000000u; // 8014F12C
  W32(c->r[6]+0x00000004u,c->r[3]); // 8014F130
  cmps(c,0,(int32_t)c->r[3],0); // 8014F134
  W32(c->r[6]+0x00000000u,c->r[0]); // 8014F138
  if (crb(c,2)) { goto L_8014F144; } // 8014F13C
  W32(c->r[3]+0x00000000u,c->r[6]); // 8014F140
L_8014F144:;
  W32(c->r[5]+0x00000008u,c->r[6]); // 8014F144
  c->r[3]=c->r[6]+0x00000020u; // 8014F148
  return; // 8014F14C
}

// OSFreeToHeap
void f_8014F150(Ctx* __restrict c) {
  trace_call(0x8014F150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014F150
  c->r[0]=c->lr; // 8014F154
  c->r[4]=c->r[4]+0xFFFFFFE0u; // 8014F158
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014F15C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8014F160
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014F164
  c->r[5]=R32(c->r[13]+0xFFFFA9ECu); // 8014F168
  c->r[6]=R32(c->r[4]+0x00000004u); // 8014F16C
  c->r[31]=c->r[5]+c->r[0]; // 8014F170
  cmps(c,0,(int32_t)c->r[6],0); // 8014F174
  c->r[3]=R32(c->r[31]+0x00000008u); // 8014F178
  if (crb(c,2)) { goto L_8014F188; } // 8014F17C
  c->r[0]=R32(c->r[4]+0x00000000u); // 8014F180
  W32(c->r[6]+0x00000000u,c->r[0]); // 8014F184
L_8014F188:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 8014F188
  cmps(c,0,(int32_t)c->r[5],0); // 8014F18C
  if (!crb(c,2)) { goto L_8014F19C; } // 8014F190
  c->r[3]=R32(c->r[4]+0x00000004u); // 8014F194
  goto L_8014F1A4; // 8014F198
L_8014F19C:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 8014F19C
  W32(c->r[5]+0x00000004u,c->r[0]); // 8014F1A0
L_8014F1A4:;
  W32(c->r[31]+0x00000008u,c->r[3]); // 8014F1A4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F1A8
  c->lr=0x8014F1B0u; f_8014EFAC(c); // 8014F1AC
  W32(c->r[31]+0x00000004u,c->r[3]); // 8014F1B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014F1B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014F1B8
  c->lr=c->r[0]; // 8014F1BC
  c->r[1]=c->r[1]+0x00000010u; // 8014F1C0
  return; // 8014F1C4
}

// OSSetCurrentHeap
void f_8014F1C8(Ctx* __restrict c) {
  trace_call(0x8014F1C8u);
  c->r[0]=R32(c->r[13]+0xFFFF8FA8u); // 8014F1C8
  W32(c->r[13]+0xFFFF8FA8u,c->r[3]); // 8014F1CC
  c->r[3]=c->r[0]|c->r[0]; // 8014F1D0
  return; // 8014F1D4
}

// OSInitAlloc
void f_8014F1D8(Ctx* __restrict c) {
  trace_call(0x8014F1D8u);
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8014F1D8
  W32(c->r[13]+0xFFFFA9ECu,c->r[3]); // 8014F1DC
  c->r[8]=0u+0x00000000u; // 8014F1E0
  W32(c->r[13]+0xFFFFA9E8u,c->r[5]); // 8014F1E4
  c->r[6]=0u+0x00000000u; // 8014F1E8
  c->r[5]=0u+0xFFFFFFFFu; // 8014F1EC
  c->r[3]=0u+0x00000000u; // 8014F1F0
  goto L_8014F214; // 8014F1F4
L_8014F1F8:;
  c->r[0]=R32(c->r[13]+0xFFFFA9ECu); // 8014F1F8
  c->r[8]=c->r[8]+0x00000001u; // 8014F1FC
  W32(c->r[6]+c->r[0],c->r[5]); // 8014F200
  c->r[9]=c->r[0]+c->r[6]; // 8014F204
  c->r[6]=c->r[6]+0x0000000Cu; // 8014F208
  W32(c->r[9]+0x00000008u,c->r[3]); // 8014F20C
  W32(c->r[9]+0x00000004u,c->r[3]); // 8014F210
L_8014F214:;
  c->r[0]=R32(c->r[13]+0xFFFFA9E8u); // 8014F214
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 8014F218
  if (crb(c,0)) { IRQCHK(c); goto L_8014F1F8; } // 8014F21C
  c->r[3]=R32(c->r[13]+0xFFFFA9ECu); // 8014F220
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFE0u; // 8014F224
  c->r[4]=0u+0xFFFFFFFFu; // 8014F228
  W32(c->r[13]+0xFFFFA9E0u,c->r[0]); // 8014F22C
  c->r[3]=c->r[3]+c->r[7]; // 8014F230
  c->r[0]=c->r[3]+0x0000001Fu; // 8014F234
  W32(c->r[13]+0xFFFF8FA8u,c->r[4]); // 8014F238
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8014F23C
  W32(c->r[13]+0xFFFFA9E4u,c->r[3]); // 8014F240
  return; // 8014F244
}

// OSCreateHeap
void f_8014F248(Ctx* __restrict c) {
  trace_call(0x8014F248u);
  c->r[6]=R32(c->r[13]+0xFFFFA9E8u); // 8014F248
  c->r[0]=c->r[3]+0x0000001Fu; // 8014F24C
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8014F250
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 8014F254
  c->r[5]=R32(c->r[13]+0xFFFFA9ECu); // 8014F258
  c->r[3]=0u+0x00000000u; // 8014F25C
  c->ctr=c->r[6]; // 8014F260
  cmps(c,0,(int32_t)c->r[6],0); // 8014F264
  if (!crb(c,1)) { goto L_8014F2AC; } // 8014F268
L_8014F26C:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 8014F26C
  cmps(c,0,(int32_t)c->r[0],0); // 8014F270
  if (!crb(c,0)) { goto L_8014F2A0; } // 8014F274
  c->r[0]=c->r[4]-c->r[7]; // 8014F278
  c->r[4]=0u+0x00000000u; // 8014F27C
  W32(c->r[5]+0x00000000u,c->r[0]); // 8014F280
  W32(c->r[7]+0x00000000u,c->r[4]); // 8014F284
  W32(c->r[7]+0x00000004u,c->r[4]); // 8014F288
  c->r[0]=R32(c->r[5]+0x00000000u); // 8014F28C
  W32(c->r[7]+0x00000008u,c->r[0]); // 8014F290
  W32(c->r[5]+0x00000004u,c->r[7]); // 8014F294
  W32(c->r[5]+0x00000008u,c->r[4]); // 8014F298
  return; // 8014F29C
L_8014F2A0:;
  c->r[5]=c->r[5]+0x0000000Cu; // 8014F2A0
  c->r[3]=c->r[3]+0x00000001u; // 8014F2A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014F26C; } // 8014F2A8
L_8014F2AC:;
  c->r[3]=0u+0xFFFFFFFFu; // 8014F2AC
  return; // 8014F2B0
}

// OSGetMEM1ArenaHi
void f_8014F2B4(Ctx* __restrict c) {
  trace_call(0x8014F2B4u);
  c->r[3]=R32(c->r[13]+0xFFFFA9F0u); // 8014F2B4
  return; // 8014F2B8
}

// OSGetMEM2ArenaHi
void f_8014F2BC(Ctx* __restrict c) {
  trace_call(0x8014F2BCu);
  c->r[3]=R32(c->r[13]+0xFFFFA9F4u); // 8014F2BC
  return; // 8014F2C0
}

// OSGetArenaHi
void f_8014F2C4(Ctx* __restrict c) {
  trace_call(0x8014F2C4u);
  c->r[3]=R32(c->r[13]+0xFFFFA9F0u); // 8014F2C4
  return; // 8014F2C8
}

// OSGetMEM1ArenaLo
void f_8014F2CC(Ctx* __restrict c) {
  trace_call(0x8014F2CCu);
  c->r[3]=R32(c->r[13]+0xFFFF8FB0u); // 8014F2CC
  return; // 8014F2D0
}

// OSGetMEM2ArenaLo
void f_8014F2D4(Ctx* __restrict c) {
  trace_call(0x8014F2D4u);
  c->r[3]=R32(c->r[13]+0xFFFF8FB4u); // 8014F2D4
  return; // 8014F2D8
}

// OSGetArenaLo
void f_8014F2DC(Ctx* __restrict c) {
  trace_call(0x8014F2DCu);
  c->r[3]=R32(c->r[13]+0xFFFF8FB0u); // 8014F2DC
  return; // 8014F2E0
}

// OSSetMEM1ArenaHi
void f_8014F2E4(Ctx* __restrict c) {
  trace_call(0x8014F2E4u);
  W32(c->r[13]+0xFFFFA9F0u,c->r[3]); // 8014F2E4
  return; // 8014F2E8
}

// OSSetMEM2ArenaHi
void f_8014F2EC(Ctx* __restrict c) {
  trace_call(0x8014F2ECu);
  W32(c->r[13]+0xFFFFA9F4u,c->r[3]); // 8014F2EC
  return; // 8014F2F0
}

// OSSetArenaHi
void f_8014F2F4(Ctx* __restrict c) {
  trace_call(0x8014F2F4u);
  W32(c->r[13]+0xFFFFA9F0u,c->r[3]); // 8014F2F4
  return; // 8014F2F8
}

// OSSetMEM1ArenaLo
void f_8014F2FC(Ctx* __restrict c) {
  trace_call(0x8014F2FCu);
  W32(c->r[13]+0xFFFF8FB0u,c->r[3]); // 8014F2FC
  return; // 8014F300
}

// OSSetMEM2ArenaLo
void f_8014F304(Ctx* __restrict c) {
  trace_call(0x8014F304u);
  W32(c->r[13]+0xFFFF8FB4u,c->r[3]); // 8014F304
  return; // 8014F308
}

// OSSetArenaLo
void f_8014F30C(Ctx* __restrict c) {
  trace_call(0x8014F30Cu);
  W32(c->r[13]+0xFFFF8FB0u,c->r[3]); // 8014F30C
  return; // 8014F310
}

// OSAllocFromMEM1ArenaLo
void f_8014F314(Ctx* __restrict c) {
  trace_call(0x8014F314u);
  c->r[0]=R32(c->r[13]+0xFFFF8FB0u); // 8014F314
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 8014F318
  c->r[6]=~(c->r[5]|c->r[5]); // 8014F31C
  c->r[5]=c->r[4]+c->r[0]; // 8014F320
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8014F324
  c->r[0]=c->r[6]&c->r[0]; // 8014F328
  c->r[3]=c->r[0]+c->r[3]; // 8014F32C
  c->r[4]=c->r[3]+c->r[4]; // 8014F330
  c->r[3]=c->r[0]|c->r[0]; // 8014F334
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8014F338
  c->r[0]=c->r[6]&c->r[0]; // 8014F33C
  W32(c->r[13]+0xFFFF8FB0u,c->r[0]); // 8014F340
  return; // 8014F344
}

// __AIClockInit
void f_8014F348(Ctx* __restrict c) {
  trace_call(0x8014F348u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014F348
  c->r[0]=c->lr; // 8014F34C
  c->r[4]=0u+0xCD800000u; // 8014F350
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014F354
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 8014F358
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014F35C
  c->r[31]=c->r[3]|c->r[3]; // 8014F360
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014F364
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014F368
  W32(c->r[1]+0x00000010u,c->r[28]); // 8014F36C
  c->r[5]=R32(c->r[4]+0x00000180u); // 8014F370
  c->r[5]=rotl(c->r[5],0)&0xFFFFFEFFu; // 8014F374
  c->r[5]=c->r[5]|c->r[0]; // 8014F378
  c->r[0]=rotl(c->r[5],0)&0xFFFFFF7Fu; // 8014F37C
  W32(c->r[4]+0x00000180u,c->r[0]); // 8014F380
  c->r[0]=R32(c->r[4]+0x000001D0u); // 8014F384
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 8014F388
  W32(c->r[4]+0x000001D0u,c->r[0]); // 8014F38C
  c->lr=0x8014F394u; f_801584A4(c); // 8014F390
  c->r[4]=0u+0x431C0000u; // 8014F394
  c->r[28]=c->r[3]|c->r[3]; // 8014F398
  c->r[30]=c->r[4]+0xFFFFDE83u; // 8014F39C
  c->r[29]=0u+0x80000000u; // 8014F3A0
L_8014F3A4:;
  c->lr=0x8014F3A8u; f_801584A4(c); // 8014F3A4
  c->r[0]=R32(c->r[29]+0x000000F8u); // 8014F3A8
  c->r[3]=c->r[3]-c->r[28]; // 8014F3AC
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8014F3B0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8014F3B4
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 8014F3B8
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 8014F3BC
  c->r[0]=divwu(c->r[3],c->r[0]); // 8014F3C0
  cmpu(c,0,c->r[0],0x00000064u); // 8014F3C4
  if (crb(c,0)) { IRQCHK(c); goto L_8014F3A4; } // 8014F3C8
  cmps(c,0,(int32_t)c->r[31],0); // 8014F3CC
  if (!crb(c,2)) { goto L_8014F3FC; } // 8014F3D0
  c->r[4]=0u+0xCD800000u; // 8014F3D4
  c->r[3]=0u+0xF8040000u; // 8014F3D8
  c->r[5]=R32(c->r[4]+0x000001CCu); // 8014F3DC
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 8014F3E0
  c->r[3]=rotl(c->r[5],0)&0xFFFC003Fu; // 8014F3E4
  c->r[3]=c->r[3]|0x00000FC0u; // 8014F3E8
  c->r[0]=c->r[3]&c->r[0]; // 8014F3EC
  c->r[0]=c->r[0]|0x04640000u; // 8014F3F0
  W32(c->r[4]+0x000001CCu,c->r[0]); // 8014F3F4
  goto L_8014F420; // 8014F3F8
L_8014F3FC:;
  c->r[3]=0u+0xCD800000u; // 8014F3FC
  c->r[0]=R32(c->r[3]+0x000001CCu); // 8014F400
  c->r[0]=rotl(c->r[0],0)&0xFFFC003Fu; // 8014F404
  c->r[0]=c->r[0]|0x0000FFC0u; // 8014F408
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFC0u; // 8014F40C
  c->r[0]=c->r[0]|0x0000000Eu; // 8014F410
  c->r[0]=rotl(c->r[0],0)&0xF803FFFFu; // 8014F414
  c->r[0]=c->r[0]|0x04B00000u; // 8014F418
  W32(c->r[3]+0x000001CCu,c->r[0]); // 8014F41C
L_8014F420:;
  c->lr=0x8014F424u; f_801584A4(c); // 8014F420
  c->r[4]=0u+0x431C0000u; // 8014F424
  c->r[31]=c->r[3]|c->r[3]; // 8014F428
  c->r[30]=c->r[4]+0xFFFFDE83u; // 8014F42C
  c->r[29]=0u+0x80000000u; // 8014F430
L_8014F434:;
  c->lr=0x8014F438u; f_801584A4(c); // 8014F434
  c->r[0]=R32(c->r[29]+0x000000F8u); // 8014F438
  c->r[3]=c->r[3]-c->r[31]; // 8014F43C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8014F440
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8014F444
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 8014F448
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 8014F44C
  c->r[0]=divwu(c->r[3],c->r[0]); // 8014F450
  cmpu(c,0,c->r[0],0x00000064u); // 8014F454
  if (crb(c,0)) { IRQCHK(c); goto L_8014F434; } // 8014F458
  c->r[3]=0u+0xCD800000u; // 8014F45C
  c->r[0]=R32(c->r[3]+0x000001D0u); // 8014F460
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 8014F464
  W32(c->r[3]+0x000001D0u,c->r[0]); // 8014F468
  c->lr=0x8014F470u; f_801584A4(c); // 8014F46C
  c->r[4]=0u+0x431C0000u; // 8014F470
  c->r[31]=c->r[3]|c->r[3]; // 8014F474
  c->r[30]=c->r[4]+0xFFFFDE83u; // 8014F478
  c->r[29]=0u+0x80000000u; // 8014F47C
L_8014F480:;
  c->lr=0x8014F484u; f_801584A4(c); // 8014F480
  c->r[0]=R32(c->r[29]+0x000000F8u); // 8014F484
  c->r[3]=c->r[3]-c->r[31]; // 8014F488
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8014F48C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8014F490
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 8014F494
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 8014F498
  c->r[0]=divwu(c->r[3],c->r[0]); // 8014F49C
  cmpu(c,0,c->r[0],0x000003E8u); // 8014F4A0
  if (crb(c,0)) { IRQCHK(c); goto L_8014F480; } // 8014F4A4
  c->r[3]=0u+0xCD800000u; // 8014F4A8
  c->r[0]=R32(c->r[3]+0x000001D0u); // 8014F4AC
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 8014F4B0
  c->r[0]=c->r[0]|0x40000000u; // 8014F4B4
  W32(c->r[3]+0x000001D0u,c->r[0]); // 8014F4B8
  c->lr=0x8014F4C0u; f_801584A4(c); // 8014F4BC
  c->r[4]=0u+0x431C0000u; // 8014F4C0
  c->r[31]=c->r[3]|c->r[3]; // 8014F4C4
  c->r[30]=c->r[4]+0xFFFFDE83u; // 8014F4C8
  c->r[29]=0u+0x80000000u; // 8014F4CC
L_8014F4D0:;
  c->lr=0x8014F4D4u; f_801584A4(c); // 8014F4D0
  c->r[0]=R32(c->r[29]+0x000000F8u); // 8014F4D4
  c->r[3]=c->r[3]-c->r[31]; // 8014F4D8
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8014F4DC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8014F4E0
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 8014F4E4
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 8014F4E8
  c->r[0]=divwu(c->r[3],c->r[0]); // 8014F4EC
  cmpu(c,0,c->r[0],0x000003E8u); // 8014F4F0
  if (crb(c,0)) { IRQCHK(c); goto L_8014F4D0; } // 8014F4F4
  c->r[3]=0u+0xCD800000u; // 8014F4F8
  c->r[0]=R32(c->r[3]+0x000001D0u); // 8014F4FC
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 8014F500
  c->r[0]=c->r[0]|0x80000000u; // 8014F504
  W32(c->r[3]+0x000001D0u,c->r[0]); // 8014F508
  c->lr=0x8014F510u; f_801584A4(c); // 8014F50C
  c->r[4]=0u+0x431C0000u; // 8014F510
  c->r[29]=c->r[3]|c->r[3]; // 8014F514
  c->r[30]=c->r[4]+0xFFFFDE83u; // 8014F518
  c->r[31]=0u+0x80000000u; // 8014F51C
L_8014F520:;
  c->lr=0x8014F524u; f_801584A4(c); // 8014F520
  c->r[0]=R32(c->r[31]+0x000000F8u); // 8014F524
  c->r[3]=c->r[3]-c->r[29]; // 8014F528
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8014F52C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8014F530
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 8014F534
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 8014F538
  c->r[0]=divwu(c->r[3],c->r[0]); // 8014F53C
  cmpu(c,0,c->r[0],0x000003E8u); // 8014F540
  if (crb(c,0)) { IRQCHK(c); goto L_8014F520; } // 8014F544
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014F548
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014F54C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014F550
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014F554
  c->r[28]=R32(c->r[1]+0x00000010u); // 8014F558
  c->lr=c->r[0]; // 8014F55C
  c->r[1]=c->r[1]+0x00000020u; // 8014F560
  return; // 8014F564
}

// __OSInitAudioSystem
void f_8014F568(Ctx* __restrict c) {
  stub_log(0x8014F568u);  return;
}

// __OSStopAudioSystem
void f_8014F730(Ctx* __restrict c) {
  trace_call(0x8014F730u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014F730
  c->r[0]=c->lr; // 8014F734
  c->r[3]=0u+0xCC000000u; // 8014F738
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014F73C
  c->r[0]=0u+0x00000804u; // 8014F740
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014F744
  W16(c->r[3]+0x0000500Au,c->r[0]); // 8014F748
  c->r[0]=R16(c->r[3]+0x00005036u); // 8014F74C
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 8014F750
  W16(c->r[3]+0x00005036u,c->r[0]); // 8014F754
  c->r[0]=R16(c->r[3]+0x0000500Au); // 8014F758
  goto L_8014F764; // 8014F75C
L_8014F760:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 8014F760
L_8014F764:;
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 8014F764
  if (!crb(c,2)) { IRQCHK(c); goto L_8014F760; } // 8014F768
  c->r[3]=0u+0xCC000000u; // 8014F76C
  c->r[0]=R16(c->r[3]+0x0000500Au); // 8014F770
  goto L_8014F77C; // 8014F774
L_8014F778:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 8014F778
L_8014F77C:;
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 8014F77C
  if (!crb(c,2)) { IRQCHK(c); goto L_8014F778; } // 8014F780
  c->r[4]=0u+0xCC000000u; // 8014F784
  c->r[0]=0u+0x000008ACu; // 8014F788
  W16(c->r[4]+0x0000500Au,c->r[0]); // 8014F78C
  c->r[0]=0u+0x00000000u; // 8014F790
  W16(c->r[4]+0x00005000u,c->r[0]); // 8014F794
L_8014F798:;
  c->r[3]=R16(c->r[4]+0x00005004u); // 8014F798
  c->r[0]=R16(c->r[4]+0x00005006u); // 8014F79C
  c->r[0]=(rotl(c->r[3],16)&0xFFFF0000u)|(c->r[0]&~0xFFFF0000u); // 8014F7A0
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 8014F7A4
  if (!crb(c,2)) { IRQCHK(c); goto L_8014F798; } // 8014F7A8
  c->lr=0x8014F7B0u; f_801584A4(c); // 8014F7AC
  c->r[31]=c->r[3]|c->r[3]; // 8014F7B0
L_8014F7B4:;
  c->lr=0x8014F7B8u; f_801584A4(c); // 8014F7B4
  c->r[0]=c->r[3]-c->r[31]; // 8014F7B8
  cmps(c,0,(int32_t)c->r[0],44); // 8014F7BC
  if (crb(c,0)) { IRQCHK(c); goto L_8014F7B4; } // 8014F7C0
  c->r[3]=0u+0xCC000000u; // 8014F7C4
  c->r[0]=R16(c->r[3]+0x0000500Au); // 8014F7C8
  c->r[0]=c->r[0]|0x00000001u; // 8014F7CC
  W16(c->r[3]+0x0000500Au,c->r[0]); // 8014F7D0
  c->r[0]=R16(c->r[3]+0x0000500Au); // 8014F7D4
  goto L_8014F7E0; // 8014F7D8
L_8014F7DC:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 8014F7DC
L_8014F7E0:;
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8014F7E0
  if (!crb(c,2)) { IRQCHK(c); goto L_8014F7DC; } // 8014F7E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014F7E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014F7EC
  c->lr=c->r[0]; // 8014F7F0
  c->r[1]=c->r[1]+0x00000010u; // 8014F7F4
  return; // 8014F7F8
}

// DCEnable
void f_8014F7FC(Ctx* __restrict c) {
  trace_call(0x8014F7FCu);
  /* sync */ // 8014F7FC
  c->r[3]=mfspr(c,1008); // 8014F800
  c->r[3]=c->r[3]|0x00004000u; // 8014F804
  mtspr(c,1008,c->r[3]); // 8014F808
  return; // 8014F80C
}

// DCInvalidateRange
void f_8014F810(Ctx* __restrict c) {
  trace_call(0x8014F810u);
  cmpu(c,0,c->r[4],0x00000000u); // 8014F810
  if (!crb(c,1)) return; // 8014F814
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 8014F818
  c->r[4]=c->r[4]+c->r[5]; // 8014F81C
  c->r[4]=c->r[4]+0x0000001Fu; // 8014F820
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8014F824
  c->ctr=c->r[4]; // 8014F828
L_8014F82C:;
  /* dcbi */ // 8014F82C
  c->r[3]=c->r[3]+0x00000020u; // 8014F830
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014F82C; } // 8014F834
  return; // 8014F838
}

// DCFlushRange
void f_8014F83C(Ctx* __restrict c) {
  trace_call(0x8014F83Cu);
  cmpu(c,0,c->r[4],0x00000000u); // 8014F83C
  if (!crb(c,1)) return; // 8014F840
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 8014F844
  c->r[4]=c->r[4]+c->r[5]; // 8014F848
  c->r[4]=c->r[4]+0x0000001Fu; // 8014F84C
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8014F850
  c->ctr=c->r[4]; // 8014F854
L_8014F858:;
  /* dcbf */ // 8014F858
  c->r[3]=c->r[3]+0x00000020u; // 8014F85C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014F858; } // 8014F860
  sc(c,0x8014F864u); // 8014F864
  return; // 8014F868
}

// DCStoreRange
void f_8014F86C(Ctx* __restrict c) {
  trace_call(0x8014F86Cu);
  cmpu(c,0,c->r[4],0x00000000u); // 8014F86C
  if (!crb(c,1)) return; // 8014F870
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 8014F874
  c->r[4]=c->r[4]+c->r[5]; // 8014F878
  c->r[4]=c->r[4]+0x0000001Fu; // 8014F87C
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8014F880
  c->ctr=c->r[4]; // 8014F884
L_8014F888:;
  /* dcbst */ // 8014F888
  c->r[3]=c->r[3]+0x00000020u; // 8014F88C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014F888; } // 8014F890
  sc(c,0x8014F894u); // 8014F894
  return; // 8014F898
}

// DCFlushRangeNoSync
void f_8014F89C(Ctx* __restrict c) {
  trace_call(0x8014F89Cu);
  cmpu(c,0,c->r[4],0x00000000u); // 8014F89C
  if (!crb(c,1)) return; // 8014F8A0
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 8014F8A4
  c->r[4]=c->r[4]+c->r[5]; // 8014F8A8
  c->r[4]=c->r[4]+0x0000001Fu; // 8014F8AC
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8014F8B0
  c->ctr=c->r[4]; // 8014F8B4
L_8014F8B8:;
  /* dcbf */ // 8014F8B8
  c->r[3]=c->r[3]+0x00000020u; // 8014F8BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014F8B8; } // 8014F8C0
  return; // 8014F8C4
}

// DCStoreRangeNoSync
void f_8014F8C8(Ctx* __restrict c) {
  trace_call(0x8014F8C8u);
  cmpu(c,0,c->r[4],0x00000000u); // 8014F8C8
  if (!crb(c,1)) return; // 8014F8CC
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 8014F8D0
  c->r[4]=c->r[4]+c->r[5]; // 8014F8D4
  c->r[4]=c->r[4]+0x0000001Fu; // 8014F8D8
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8014F8DC
  c->ctr=c->r[4]; // 8014F8E0
L_8014F8E4:;
  /* dcbst */ // 8014F8E4
  c->r[3]=c->r[3]+0x00000020u; // 8014F8E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014F8E4; } // 8014F8EC
  return; // 8014F8F0
}

// DCZeroRange
void f_8014F8F4(Ctx* __restrict c) {
  trace_call(0x8014F8F4u);
  cmpu(c,0,c->r[4],0x00000000u); // 8014F8F4
  if (!crb(c,1)) return; // 8014F8F8
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 8014F8FC
  c->r[4]=c->r[4]+c->r[5]; // 8014F900
  c->r[4]=c->r[4]+0x0000001Fu; // 8014F904
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8014F908
  c->ctr=c->r[4]; // 8014F90C
L_8014F910:;
  dcbz(0u+c->r[3]); // 8014F910
  c->r[3]=c->r[3]+0x00000020u; // 8014F914
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014F910; } // 8014F918
  return; // 8014F91C
}

// ICInvalidateRange
void f_8014F920(Ctx* __restrict c) {
  trace_call(0x8014F920u);
  cmpu(c,0,c->r[4],0x00000000u); // 8014F920
  if (!crb(c,1)) return; // 8014F924
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 8014F928
  c->r[4]=c->r[4]+c->r[5]; // 8014F92C
  c->r[4]=c->r[4]+0x0000001Fu; // 8014F930
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8014F934
  c->ctr=c->r[4]; // 8014F938
L_8014F93C:;
  /* icbi */ // 8014F93C
  c->r[3]=c->r[3]+0x00000020u; // 8014F940
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014F93C; } // 8014F944
  /* sync */ // 8014F948
  /* isync */ // 8014F94C
  return; // 8014F950
}

// ICFlashInvalidate
void f_8014F954(Ctx* __restrict c) {
  trace_call(0x8014F954u);
  c->r[3]=mfspr(c,1008); // 8014F954
  c->r[3]=c->r[3]|0x00000800u; // 8014F958
  mtspr(c,1008,c->r[3]); // 8014F95C
  return; // 8014F960
}

// ICEnable
void f_8014F964(Ctx* __restrict c) {
  trace_call(0x8014F964u);
  /* isync */ // 8014F964
  c->r[3]=mfspr(c,1008); // 8014F968
  c->r[3]=c->r[3]|0x00008000u; // 8014F96C
  mtspr(c,1008,c->r[3]); // 8014F970
  return; // 8014F974
}

// __LCEnable
void f_8014F978(Ctx* __restrict c) {
  trace_call(0x8014F978u);
  c->r[5]=c->msr; // 8014F978
  c->r[5]=c->r[5]|0x00001000u; // 8014F97C
  c->msr=c->r[5]; // 8014F980
  c->r[3]=0u+0x80000000u; // 8014F984
  c->r[4]=0u+0x00000400u; // 8014F988
  c->ctr=c->r[4]; // 8014F98C
L_8014F990:;
  /* dcbt */ // 8014F990
  /* dcbst */ // 8014F994
  c->r[3]=c->r[3]+0x00000020u; // 8014F998
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014F990; } // 8014F99C
  c->r[4]=mfspr(c,920); // 8014F9A0
  c->r[4]=c->r[4]|0x100F0000u; // 8014F9A4
  mtspr(c,920,c->r[4]); // 8014F9A8
  c->r[0]=c->r[0]|0x00000000u; // 8014F9AC
  c->r[0]=c->r[0]|0x00000000u; // 8014F9B0
  c->r[0]=c->r[0]|0x00000000u; // 8014F9B4
  c->r[0]=c->r[0]|0x00000000u; // 8014F9B8
  c->r[0]=c->r[0]|0x00000000u; // 8014F9BC
  c->r[0]=c->r[0]|0x00000000u; // 8014F9C0
  c->r[0]=c->r[0]|0x00000000u; // 8014F9C4
  c->r[0]=c->r[0]|0x00000000u; // 8014F9C8
  c->r[0]=c->r[0]|0x00000000u; // 8014F9CC
  c->r[0]=c->r[0]|0x00000000u; // 8014F9D0
  c->r[0]=c->r[0]|0x00000000u; // 8014F9D4
  c->r[0]=c->r[0]|0x00000000u; // 8014F9D8
  c->r[3]=0u+0xE0000000u; // 8014F9DC
  c->r[3]=c->r[3]|0x00000002u; // 8014F9E0
  mtspr(c,543,c->r[3]); // 8014F9E4
  c->r[3]=c->r[3]|0x000001FEu; // 8014F9E8
  mtspr(c,542,c->r[3]); // 8014F9EC
  /* isync */ // 8014F9F0
  c->r[3]=0u+0xE0000000u; // 8014F9F4
  c->r[6]=0u+0x00000200u; // 8014F9F8
  c->ctr=c->r[6]; // 8014F9FC
  c->r[6]=0u+0x00000000u; // 8014FA00
L_8014FA04:;
  dcbz(c->r[6]+c->r[3]); // 8014FA04
  c->r[3]=c->r[3]+0x00000020u; // 8014FA08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014FA04; } // 8014FA0C
  c->r[0]=c->r[0]|0x00000000u; // 8014FA10
  c->r[0]=c->r[0]|0x00000000u; // 8014FA14
  c->r[0]=c->r[0]|0x00000000u; // 8014FA18
  c->r[0]=c->r[0]|0x00000000u; // 8014FA1C
  c->r[0]=c->r[0]|0x00000000u; // 8014FA20
  c->r[0]=c->r[0]|0x00000000u; // 8014FA24
  c->r[0]=c->r[0]|0x00000000u; // 8014FA28
  c->r[0]=c->r[0]|0x00000000u; // 8014FA2C
  c->r[0]=c->r[0]|0x00000000u; // 8014FA30
  c->r[0]=c->r[0]|0x00000000u; // 8014FA34
  c->r[0]=c->r[0]|0x00000000u; // 8014FA38
  c->r[0]=c->r[0]|0x00000000u; // 8014FA3C
  return; // 8014FA40
}

// LCEnable
void f_8014FA44(Ctx* __restrict c) {
  trace_call(0x8014FA44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014FA44
  c->r[0]=c->lr; // 8014FA48
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014FA4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014FA50
  c->lr=0x8014FA58u; f_80154410(c); // 8014FA54
  c->r[31]=c->r[3]|c->r[3]; // 8014FA58
  c->lr=0x8014FA60u; f_8014F978(c); // 8014FA5C
  c->r[3]=c->r[31]|c->r[31]; // 8014FA60
  c->lr=0x8014FA68u; f_80154438(c); // 8014FA64
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014FA68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014FA6C
  c->lr=c->r[0]; // 8014FA70
  c->r[1]=c->r[1]+0x00000010u; // 8014FA74
  return; // 8014FA78
}

// LCDisable
void f_8014FA7C(Ctx* __restrict c) {
  trace_call(0x8014FA7Cu);
  c->r[3]=0u+0xE0000000u; // 8014FA7C
  c->r[4]=0u+0x00000200u; // 8014FA80
  c->ctr=c->r[4]; // 8014FA84
L_8014FA88:;
  /* dcbi */ // 8014FA88
  c->r[3]=c->r[3]+0x00000020u; // 8014FA8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014FA88; } // 8014FA90
  c->r[4]=mfspr(c,920); // 8014FA94
  c->r[4]=rotl(c->r[4],0)&0xEFFFFFFFu; // 8014FA98
  mtspr(c,920,c->r[4]); // 8014FA9C
  return; // 8014FAA0
}

// LCLoadBlocks
void f_8014FAA4(Ctx* __restrict c) {
  trace_call(0x8014FAA4u);
  c->r[6]=rotl(c->r[5],30)&0x0000001Fu; // 8014FAA4
  c->r[4]=rotl(c->r[4],0)&0x1FFFFFFFu; // 8014FAA8
  c->r[6]=c->r[6]|c->r[4]; // 8014FAAC
  mtspr(c,922,c->r[6]); // 8014FAB0
  c->r[6]=rotl(c->r[5],2)&0x0000000Cu; // 8014FAB4
  c->r[6]=c->r[6]|c->r[3]; // 8014FAB8
  c->r[6]=c->r[6]|0x00000012u; // 8014FABC
  mtspr(c,923,c->r[6]); // 8014FAC0
  return; // 8014FAC4
}

// LCStoreBlocks
void f_8014FAC8(Ctx* __restrict c) {
  trace_call(0x8014FAC8u);
  c->r[6]=rotl(c->r[5],30)&0x0000001Fu; // 8014FAC8
  c->r[3]=rotl(c->r[3],0)&0x1FFFFFFFu; // 8014FACC
  c->r[6]=c->r[6]|c->r[3]; // 8014FAD0
  mtspr(c,922,c->r[6]); // 8014FAD4
  c->r[6]=rotl(c->r[5],2)&0x0000000Cu; // 8014FAD8
  c->r[6]=c->r[6]|c->r[4]; // 8014FADC
  c->r[6]=c->r[6]|0x00000002u; // 8014FAE0
  mtspr(c,923,c->r[6]); // 8014FAE4
  return; // 8014FAE8
}

// LCStoreData
void f_8014FAEC(Ctx* __restrict c) {
  trace_call(0x8014FAECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014FAEC
  c->r[0]=c->lr; // 8014FAF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014FAF4
  c->r[0]=c->r[5]+0x0000001Fu; // 8014FAF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014FAFC
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8014FB00
  c->r[0]=c->r[31]+0x0000007Fu; // 8014FB04
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014FB08
  c->r[30]=rotl(c->r[0],25)&0x01FFFFFFu; // 8014FB0C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014FB10
  c->r[29]=c->r[4]|c->r[4]; // 8014FB14
  W32(c->r[1]+0x00000010u,c->r[28]); // 8014FB18
  c->r[28]=c->r[3]|c->r[3]; // 8014FB1C
  goto L_8014FB60; // 8014FB20
L_8014FB24:;
  cmpu(c,0,c->r[31],0x00000080u); // 8014FB24
  if (!crb(c,0)) { goto L_8014FB44; } // 8014FB28
  c->r[3]=c->r[28]|c->r[28]; // 8014FB2C
  c->r[4]=c->r[29]|c->r[29]; // 8014FB30
  c->r[5]=c->r[31]|c->r[31]; // 8014FB34
  c->lr=0x8014FB3Cu; f_8014FAC8(c); // 8014FB38
  c->r[31]=0u+0x00000000u; // 8014FB3C
  goto L_8014FB60; // 8014FB40
L_8014FB44:;
  c->r[3]=c->r[28]|c->r[28]; // 8014FB44
  c->r[4]=c->r[29]|c->r[29]; // 8014FB48
  c->r[5]=0u+0x00000000u; // 8014FB4C
  c->lr=0x8014FB54u; f_8014FAC8(c); // 8014FB50
  c->r[31]=c->r[31]+0xFFFFFF80u; // 8014FB54
  c->r[28]=c->r[28]+0x00001000u; // 8014FB58
  c->r[29]=c->r[29]+0x00001000u; // 8014FB5C
L_8014FB60:;
  cmps(c,0,(int32_t)c->r[31],0); // 8014FB60
  if (!crb(c,2)) { IRQCHK(c); goto L_8014FB24; } // 8014FB64
  c->r[3]=c->r[30]|c->r[30]; // 8014FB68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014FB6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014FB70
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014FB74
  c->r[28]=R32(c->r[1]+0x00000010u); // 8014FB78
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014FB7C
  c->lr=c->r[0]; // 8014FB80
  c->r[1]=c->r[1]+0x00000020u; // 8014FB84
  return; // 8014FB88
}

// LCQueueLength
void f_8014FB8C(Ctx* __restrict c) {
  trace_call(0x8014FB8Cu);
  c->r[4]=mfspr(c,920); // 8014FB8C
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 8014FB90
  return; // 8014FB94
}

// LCQueueWait
void f_8014FB98(Ctx* __restrict c) {
  trace_call(0x8014FB98u);
L_8014FB98:;
  c->r[4]=mfspr(c,920); // 8014FB98
  c->r[4]=rotl(c->r[4],8)&0x0000000Fu; // 8014FB9C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 8014FBA0
  if (crb(c,1)) { IRQCHK(c); goto L_8014FB98; } // 8014FBA4
  return; // 8014FBA8
}

// DMAErrorHandler
void f_8014FBAC(Ctx* __restrict c) {
  trace_call(0x8014FBACu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014FBAC
  c->r[0]=c->lr; // 8014FBB0
  W32(c->r[1]+0x00000084u,c->r[0]); // 8014FBB4
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8014FBB8
  W32(c->r[1]+0x00000078u,c->r[30]); // 8014FBBC
  W32(c->r[1]+0x00000074u,c->r[29]); // 8014FBC0
  c->r[29]=c->r[4]|c->r[4]; // 8014FBC4
  if (!crb(c,6)) { goto L_8014FBEC; } // 8014FBC8
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8014FBCC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 8014FBD0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 8014FBD4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 8014FBD8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 8014FBDC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 8014FBE0
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 8014FBE4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 8014FBE8
L_8014FBEC:;
  c->r[31]=0u+0x802C0000u; // 8014FBEC
  W32(c->r[1]+0x00000008u,c->r[3]); // 8014FBF0
  c->r[31]=c->r[31]+0x00006CD0u; // 8014FBF4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8014FBF8
  W32(c->r[1]+0x00000010u,c->r[5]); // 8014FBFC
  W32(c->r[1]+0x00000014u,c->r[6]); // 8014FC00
  W32(c->r[1]+0x00000018u,c->r[7]); // 8014FC04
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 8014FC08
  W32(c->r[1]+0x00000020u,c->r[9]); // 8014FC0C
  W32(c->r[1]+0x00000024u,c->r[10]); // 8014FC10
  c->lr=0x8014FC18u; f_8014D320(c); // 8014FC14
  c->r[30]=c->r[3]|c->r[3]; // 8014FC18
  c->r[3]=c->r[31]+0x00000030u; // 8014FC1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014FC20
  c->lr=0x8014FC28u; f_801506B4(c); // 8014FC24
  c->r[5]=R32(c->r[29]+0x0000019Cu); // 8014FC28
  c->r[4]=c->r[30]|c->r[30]; // 8014FC2C
  c->r[3]=c->r[31]+0x00000048u; // 8014FC30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014FC34
  c->lr=0x8014FC3Cu; f_801506B4(c); // 8014FC38
  c->r[0]=rotl(c->r[30],0)&0x00F00000u; cr0(c,c->r[0]); // 8014FC3C
  if (crb(c,2)) { goto L_8014FC50; } // 8014FC40
  c->r[0]=R32(c->r[29]+0x0000019Cu); // 8014FC44
  c->r[0]=rotl(c->r[0],0)&0x00200000u; cr0(c,c->r[0]); // 8014FC48
  if (!crb(c,2)) { goto L_8014FC68; } // 8014FC4C
L_8014FC50:;
  c->r[3]=c->r[31]+0x00000068u; // 8014FC50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014FC54
  c->lr=0x8014FC5Cu; f_801506B4(c); // 8014FC58
  c->r[3]=c->r[29]|c->r[29]; // 8014FC5C
  c->lr=0x8014FC64u; f_80150388(c); // 8014FC60
  c->lr=0x8014FC68u; f_8014D294(c); // 8014FC64
L_8014FC68:;
  c->r[3]=c->r[31]+0x00000098u; // 8014FC68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014FC6C
  c->lr=0x8014FC74u; f_801506B4(c); // 8014FC70
  c->r[3]=c->r[31]+0x000000D4u; // 8014FC74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014FC78
  c->lr=0x8014FC80u; f_801506B4(c); // 8014FC7C
  c->r[0]=rotl(c->r[30],0)&0x00800000u; cr0(c,c->r[0]); // 8014FC80
  if (crb(c,2)) { goto L_8014FC94; } // 8014FC84
  c->r[3]=c->r[31]+0x0000010Cu; // 8014FC88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014FC8C
  c->lr=0x8014FC94u; f_801506B4(c); // 8014FC90
L_8014FC94:;
  c->r[0]=rotl(c->r[30],0)&0x00400000u; cr0(c,c->r[0]); // 8014FC94
  if (crb(c,2)) { goto L_8014FCA8; } // 8014FC98
  c->r[3]=c->r[31]+0x0000014Cu; // 8014FC9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014FCA0
  c->lr=0x8014FCA8u; f_801506B4(c); // 8014FCA4
L_8014FCA8:;
  c->r[0]=rotl(c->r[30],0)&0x00200000u; cr0(c,c->r[0]); // 8014FCA8
  if (crb(c,2)) { goto L_8014FCBC; } // 8014FCAC
  c->r[3]=c->r[31]+0x00000178u; // 8014FCB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014FCB4
  c->lr=0x8014FCBCu; f_801506B4(c); // 8014FCB8
L_8014FCBC:;
  c->r[0]=rotl(c->r[30],0)&0x00100000u; cr0(c,c->r[0]); // 8014FCBC
  if (crb(c,2)) { goto L_8014FCD0; } // 8014FCC0
  c->r[3]=c->r[31]+0x00000198u; // 8014FCC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014FCC8
  c->lr=0x8014FCD0u; f_801506B4(c); // 8014FCCC
L_8014FCD0:;
  c->r[3]=c->r[30]|c->r[30]; // 8014FCD0
  c->lr=0x8014FCD8u; f_8014D328(c); // 8014FCD4
  c->r[0]=R32(c->r[1]+0x00000084u); // 8014FCD8
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 8014FCDC
  c->r[30]=R32(c->r[1]+0x00000078u); // 8014FCE0
  c->r[29]=R32(c->r[1]+0x00000074u); // 8014FCE4
  c->lr=c->r[0]; // 8014FCE8
  c->r[1]=c->r[1]+0x00000080u; // 8014FCEC
  return; // 8014FCF0
}

// __OSCacheInit
void f_8014FCF4(Ctx* __restrict c) {
  trace_call(0x8014FCF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014FCF4
  c->r[0]=c->lr; // 8014FCF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014FCFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014FD00
  c->r[31]=0u+0x802C0000u; // 8014FD04
  c->r[31]=c->r[31]+0x00006CD0u; // 8014FD08
  W32(c->r[1]+0x00000008u,c->r[30]); // 8014FD0C
  c->lr=0x8014FD14u; f_8014D264(c); // 8014FD10
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8014FD14
  if (!crb(c,2)) { goto L_8014FD2C; } // 8014FD18
  c->lr=0x8014FD20u; f_8014F964(c); // 8014FD1C
  c->r[3]=c->r[31]+0x000001B4u; // 8014FD20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014FD24
  c->lr=0x8014FD2Cu; f_8015EDDC(c); // 8014FD28
L_8014FD2C:;
  c->lr=0x8014FD30u; f_8014D264(c); // 8014FD2C
  c->r[0]=rotl(c->r[3],0)&0x00004000u; cr0(c,c->r[0]); // 8014FD30
  if (!crb(c,2)) { goto L_8014FD48; } // 8014FD34
  c->lr=0x8014FD3Cu; f_8014F7FC(c); // 8014FD38
  c->r[3]=c->r[31]+0x000001D0u; // 8014FD3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014FD40
  c->lr=0x8014FD48u; f_8015EDDC(c); // 8014FD44
L_8014FD48:;
  c->lr=0x8014FD4Cu; f_8014D274(c); // 8014FD48
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 8014FD4C
  if (!crb(c,2)) { goto L_8014FDF8; } // 8014FD50
  c->lr=0x8014FD58u; f_8014D254(c); // 8014FD54
  c->r[30]=c->r[3]|c->r[3]; // 8014FD58
  /* sync */ // 8014FD5C
  c->r[3]=0u+0x00000030u; // 8014FD60
  c->lr=0x8014FD68u; f_8014D25C(c); // 8014FD64
  /* sync */ // 8014FD68
  /* sync */ // 8014FD6C
  c->lr=0x8014FD74u; f_8014D274(c); // 8014FD70
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 8014FD74
  c->lr=0x8014FD7Cu; f_8014D27C(c); // 8014FD78
  /* sync */ // 8014FD7C
  /* sync */ // 8014FD80
  c->lr=0x8014FD88u; f_8014D274(c); // 8014FD84
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 8014FD88
  c->lr=0x8014FD90u; f_8014D27C(c); // 8014FD8C
  /* sync */ // 8014FD90
  c->lr=0x8014FD98u; f_8014D274(c); // 8014FD94
  c->r[3]=c->r[3]|0x00200000u; // 8014FD98
  c->lr=0x8014FDA0u; f_8014D27C(c); // 8014FD9C
L_8014FDA0:;
  c->lr=0x8014FDA4u; f_8014D274(c); // 8014FDA0
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8014FDA4
  if (!crb(c,2)) { IRQCHK(c); goto L_8014FDA0; } // 8014FDA8
  c->lr=0x8014FDB0u; f_8014D274(c); // 8014FDAC
  c->r[3]=rotl(c->r[3],0)&0xFFDFFFFFu; // 8014FDB0
  c->lr=0x8014FDB8u; f_8014D27C(c); // 8014FDB4
  goto L_8014FDC8; // 8014FDB8
L_8014FDBC:;
  c->r[3]=c->r[31]+0x00000000u; // 8014FDBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014FDC0
  c->lr=0x8014FDC8u; f_8015EDDC(c); // 8014FDC4
L_8014FDC8:;
  c->lr=0x8014FDCCu; f_8014D274(c); // 8014FDC8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8014FDCC
  if (!crb(c,2)) { IRQCHK(c); goto L_8014FDBC; } // 8014FDD0
  c->r[3]=c->r[30]|c->r[30]; // 8014FDD4
  c->lr=0x8014FDDCu; f_8014D25C(c); // 8014FDD8
  c->lr=0x8014FDE0u; f_8014D274(c); // 8014FDDC
  c->r[0]=c->r[3]|0x80000000u; // 8014FDE0
  c->r[3]=rotl(c->r[0],0)&0xFFDFFFFFu; // 8014FDE4
  c->lr=0x8014FDECu; f_8014D27C(c); // 8014FDE8
  c->r[3]=c->r[31]+0x000001ECu; // 8014FDEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014FDF0
  c->lr=0x8014FDF8u; f_8015EDDC(c); // 8014FDF4
L_8014FDF8:;
  c->r[4]=0u+0x80150000u; // 8014FDF8
  c->r[3]=0u+0x00000001u; // 8014FDFC
  c->r[4]=c->r[4]+0xFFFFFBACu; // 8014FE00
  c->lr=0x8014FE08u; f_80150870(c); // 8014FE04
  c->r[3]=c->r[31]+0x00000204u; // 8014FE08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8014FE0C
  c->lr=0x8014FE14u; f_8015EDDC(c); // 8014FE10
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014FE14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014FE18
  c->r[30]=R32(c->r[1]+0x00000008u); // 8014FE1C
  c->lr=c->r[0]; // 8014FE20
  c->r[1]=c->r[1]+0x00000010u; // 8014FE24
  return; // 8014FE28
}

// __OSLoadFPUContext
void f_8014FE2C(Ctx* __restrict c) {
  trace_call(0x8014FE2Cu);
  c->r[5]=R16(c->r[4]+0x000001A2u); // 8014FE2C
  c->r[5]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[5]); // 8014FE30
  if (crb(c,2)) { goto L_8014FF4C; } // 8014FE34
  {uint32_t ea=c->r[4]+0x00000190u; c->f[0]=RF64(ea);} // 8014FE38
  c->fpscr=(uint32_t)d2u(c->f[0]); // 8014FE3C
  c->r[5]=mfspr(c,920); // 8014FE40
  c->r[5]=rotl(c->r[5],3)&0x00000001u; cr0(c,c->r[5]); // 8014FE44
  if (crb(c,2)) { goto L_8014FECC; } // 8014FE48
  {uint32_t ea=c->r[4]+0x000001C8u; psq_load(c,0,ea,0,0);} // 8014FE4C
  {uint32_t ea=c->r[4]+0x000001D0u; psq_load(c,1,ea,0,0);} // 8014FE50
  {uint32_t ea=c->r[4]+0x000001D8u; psq_load(c,2,ea,0,0);} // 8014FE54
  {uint32_t ea=c->r[4]+0x000001E0u; psq_load(c,3,ea,0,0);} // 8014FE58
  {uint32_t ea=c->r[4]+0x000001E8u; psq_load(c,4,ea,0,0);} // 8014FE5C
  {uint32_t ea=c->r[4]+0x000001F0u; psq_load(c,5,ea,0,0);} // 8014FE60
  {uint32_t ea=c->r[4]+0x000001F8u; psq_load(c,6,ea,0,0);} // 8014FE64
  {uint32_t ea=c->r[4]+0x00000200u; psq_load(c,7,ea,0,0);} // 8014FE68
  {uint32_t ea=c->r[4]+0x00000208u; psq_load(c,8,ea,0,0);} // 8014FE6C
  {uint32_t ea=c->r[4]+0x00000210u; psq_load(c,9,ea,0,0);} // 8014FE70
  {uint32_t ea=c->r[4]+0x00000218u; psq_load(c,10,ea,0,0);} // 8014FE74
  {uint32_t ea=c->r[4]+0x00000220u; psq_load(c,11,ea,0,0);} // 8014FE78
  {uint32_t ea=c->r[4]+0x00000228u; psq_load(c,12,ea,0,0);} // 8014FE7C
  {uint32_t ea=c->r[4]+0x00000230u; psq_load(c,13,ea,0,0);} // 8014FE80
  {uint32_t ea=c->r[4]+0x00000238u; psq_load(c,14,ea,0,0);} // 8014FE84
  {uint32_t ea=c->r[4]+0x00000240u; psq_load(c,15,ea,0,0);} // 8014FE88
  {uint32_t ea=c->r[4]+0x00000248u; psq_load(c,16,ea,0,0);} // 8014FE8C
  {uint32_t ea=c->r[4]+0x00000250u; psq_load(c,17,ea,0,0);} // 8014FE90
  {uint32_t ea=c->r[4]+0x00000258u; psq_load(c,18,ea,0,0);} // 8014FE94
  {uint32_t ea=c->r[4]+0x00000260u; psq_load(c,19,ea,0,0);} // 8014FE98
  {uint32_t ea=c->r[4]+0x00000268u; psq_load(c,20,ea,0,0);} // 8014FE9C
  {uint32_t ea=c->r[4]+0x00000270u; psq_load(c,21,ea,0,0);} // 8014FEA0
  {uint32_t ea=c->r[4]+0x00000278u; psq_load(c,22,ea,0,0);} // 8014FEA4
  {uint32_t ea=c->r[4]+0x00000280u; psq_load(c,23,ea,0,0);} // 8014FEA8
  {uint32_t ea=c->r[4]+0x00000288u; psq_load(c,24,ea,0,0);} // 8014FEAC
  {uint32_t ea=c->r[4]+0x00000290u; psq_load(c,25,ea,0,0);} // 8014FEB0
  {uint32_t ea=c->r[4]+0x00000298u; psq_load(c,26,ea,0,0);} // 8014FEB4
  {uint32_t ea=c->r[4]+0x000002A0u; psq_load(c,27,ea,0,0);} // 8014FEB8
  {uint32_t ea=c->r[4]+0x000002A8u; psq_load(c,28,ea,0,0);} // 8014FEBC
  {uint32_t ea=c->r[4]+0x000002B0u; psq_load(c,29,ea,0,0);} // 8014FEC0
  {uint32_t ea=c->r[4]+0x000002B8u; psq_load(c,30,ea,0,0);} // 8014FEC4
  {uint32_t ea=c->r[4]+0x000002C0u; psq_load(c,31,ea,0,0);} // 8014FEC8
L_8014FECC:;
  {uint32_t ea=c->r[4]+0x00000090u; c->f[0]=RF64(ea);} // 8014FECC
  {uint32_t ea=c->r[4]+0x00000098u; c->f[1]=RF64(ea);} // 8014FED0
  {uint32_t ea=c->r[4]+0x000000A0u; c->f[2]=RF64(ea);} // 8014FED4
  {uint32_t ea=c->r[4]+0x000000A8u; c->f[3]=RF64(ea);} // 8014FED8
  {uint32_t ea=c->r[4]+0x000000B0u; c->f[4]=RF64(ea);} // 8014FEDC
  {uint32_t ea=c->r[4]+0x000000B8u; c->f[5]=RF64(ea);} // 8014FEE0
  {uint32_t ea=c->r[4]+0x000000C0u; c->f[6]=RF64(ea);} // 8014FEE4
  {uint32_t ea=c->r[4]+0x000000C8u; c->f[7]=RF64(ea);} // 8014FEE8
  {uint32_t ea=c->r[4]+0x000000D0u; c->f[8]=RF64(ea);} // 8014FEEC
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[9]=RF64(ea);} // 8014FEF0
  {uint32_t ea=c->r[4]+0x000000E0u; c->f[10]=RF64(ea);} // 8014FEF4
  {uint32_t ea=c->r[4]+0x000000E8u; c->f[11]=RF64(ea);} // 8014FEF8
  {uint32_t ea=c->r[4]+0x000000F0u; c->f[12]=RF64(ea);} // 8014FEFC
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[13]=RF64(ea);} // 8014FF00
  {uint32_t ea=c->r[4]+0x00000100u; c->f[14]=RF64(ea);} // 8014FF04
  {uint32_t ea=c->r[4]+0x00000108u; c->f[15]=RF64(ea);} // 8014FF08
  {uint32_t ea=c->r[4]+0x00000110u; c->f[16]=RF64(ea);} // 8014FF0C
  {uint32_t ea=c->r[4]+0x00000118u; c->f[17]=RF64(ea);} // 8014FF10
  {uint32_t ea=c->r[4]+0x00000120u; c->f[18]=RF64(ea);} // 8014FF14
  {uint32_t ea=c->r[4]+0x00000128u; c->f[19]=RF64(ea);} // 8014FF18
  {uint32_t ea=c->r[4]+0x00000130u; c->f[20]=RF64(ea);} // 8014FF1C
  {uint32_t ea=c->r[4]+0x00000138u; c->f[21]=RF64(ea);} // 8014FF20
  {uint32_t ea=c->r[4]+0x00000140u; c->f[22]=RF64(ea);} // 8014FF24
  {uint32_t ea=c->r[4]+0x00000148u; c->f[23]=RF64(ea);} // 8014FF28
  {uint32_t ea=c->r[4]+0x00000150u; c->f[24]=RF64(ea);} // 8014FF2C
  {uint32_t ea=c->r[4]+0x00000158u; c->f[25]=RF64(ea);} // 8014FF30
  {uint32_t ea=c->r[4]+0x00000160u; c->f[26]=RF64(ea);} // 8014FF34
  {uint32_t ea=c->r[4]+0x00000168u; c->f[27]=RF64(ea);} // 8014FF38
  {uint32_t ea=c->r[4]+0x00000170u; c->f[28]=RF64(ea);} // 8014FF3C
  {uint32_t ea=c->r[4]+0x00000178u; c->f[29]=RF64(ea);} // 8014FF40
  {uint32_t ea=c->r[4]+0x00000180u; c->f[30]=RF64(ea);} // 8014FF44
  {uint32_t ea=c->r[4]+0x00000188u; c->f[31]=RF64(ea);} // 8014FF48
L_8014FF4C:;
  return; // 8014FF4C
}

// __OSSaveFPUContext
void f_8014FF50(Ctx* __restrict c) {
  trace_call(0x8014FF50u);
  c->r[3]=R16(c->r[5]+0x000001A2u); // 8014FF50
  c->r[3]=c->r[3]|0x00000001u; // 8014FF54
  W16(c->r[5]+0x000001A2u,c->r[3]); // 8014FF58
  {uint32_t ea=c->r[5]+0x00000090u; WF64(ea,c->f[0]);} // 8014FF5C
  {uint32_t ea=c->r[5]+0x00000098u; WF64(ea,c->f[1]);} // 8014FF60
  {uint32_t ea=c->r[5]+0x000000A0u; WF64(ea,c->f[2]);} // 8014FF64
  {uint32_t ea=c->r[5]+0x000000A8u; WF64(ea,c->f[3]);} // 8014FF68
  {uint32_t ea=c->r[5]+0x000000B0u; WF64(ea,c->f[4]);} // 8014FF6C
  {uint32_t ea=c->r[5]+0x000000B8u; WF64(ea,c->f[5]);} // 8014FF70
  {uint32_t ea=c->r[5]+0x000000C0u; WF64(ea,c->f[6]);} // 8014FF74
  {uint32_t ea=c->r[5]+0x000000C8u; WF64(ea,c->f[7]);} // 8014FF78
  {uint32_t ea=c->r[5]+0x000000D0u; WF64(ea,c->f[8]);} // 8014FF7C
  {uint32_t ea=c->r[5]+0x000000D8u; WF64(ea,c->f[9]);} // 8014FF80
  {uint32_t ea=c->r[5]+0x000000E0u; WF64(ea,c->f[10]);} // 8014FF84
  {uint32_t ea=c->r[5]+0x000000E8u; WF64(ea,c->f[11]);} // 8014FF88
  {uint32_t ea=c->r[5]+0x000000F0u; WF64(ea,c->f[12]);} // 8014FF8C
  {uint32_t ea=c->r[5]+0x000000F8u; WF64(ea,c->f[13]);} // 8014FF90
  {uint32_t ea=c->r[5]+0x00000100u; WF64(ea,c->f[14]);} // 8014FF94
  {uint32_t ea=c->r[5]+0x00000108u; WF64(ea,c->f[15]);} // 8014FF98
  {uint32_t ea=c->r[5]+0x00000110u; WF64(ea,c->f[16]);} // 8014FF9C
  {uint32_t ea=c->r[5]+0x00000118u; WF64(ea,c->f[17]);} // 8014FFA0
  {uint32_t ea=c->r[5]+0x00000120u; WF64(ea,c->f[18]);} // 8014FFA4
  {uint32_t ea=c->r[5]+0x00000128u; WF64(ea,c->f[19]);} // 8014FFA8
  {uint32_t ea=c->r[5]+0x00000130u; WF64(ea,c->f[20]);} // 8014FFAC
  {uint32_t ea=c->r[5]+0x00000138u; WF64(ea,c->f[21]);} // 8014FFB0
  {uint32_t ea=c->r[5]+0x00000140u; WF64(ea,c->f[22]);} // 8014FFB4
  {uint32_t ea=c->r[5]+0x00000148u; WF64(ea,c->f[23]);} // 8014FFB8
  {uint32_t ea=c->r[5]+0x00000150u; WF64(ea,c->f[24]);} // 8014FFBC
  {uint32_t ea=c->r[5]+0x00000158u; WF64(ea,c->f[25]);} // 8014FFC0
  {uint32_t ea=c->r[5]+0x00000160u; WF64(ea,c->f[26]);} // 8014FFC4
  {uint32_t ea=c->r[5]+0x00000168u; WF64(ea,c->f[27]);} // 8014FFC8
  {uint32_t ea=c->r[5]+0x00000170u; WF64(ea,c->f[28]);} // 8014FFCC
  {uint32_t ea=c->r[5]+0x00000178u; WF64(ea,c->f[29]);} // 8014FFD0
  {uint32_t ea=c->r[5]+0x00000180u; WF64(ea,c->f[30]);} // 8014FFD4
  {uint32_t ea=c->r[5]+0x00000188u; WF64(ea,c->f[31]);} // 8014FFD8
  c->f[0]=u2d((uint64_t)c->fpscr); // 8014FFDC
  {uint32_t ea=c->r[5]+0x00000190u; WF64(ea,c->f[0]);} // 8014FFE0
  {uint32_t ea=c->r[5]+0x00000090u; c->f[0]=RF64(ea);} // 8014FFE4
  c->r[3]=mfspr(c,920); // 8014FFE8
  c->r[3]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[3]); // 8014FFEC
  if (crb(c,2)) { goto L_80150074; } // 8014FFF0
  {uint32_t ea=c->r[5]+0x000001C8u; psq_store(c,0,ea,0,0);} // 8014FFF4
  {uint32_t ea=c->r[5]+0x000001D0u; psq_store(c,1,ea,0,0);} // 8014FFF8
  {uint32_t ea=c->r[5]+0x000001D8u; psq_store(c,2,ea,0,0);} // 8014FFFC
  {uint32_t ea=c->r[5]+0x000001E0u; psq_store(c,3,ea,0,0);} // 80150000
  {uint32_t ea=c->r[5]+0x000001E8u; psq_store(c,4,ea,0,0);} // 80150004
  {uint32_t ea=c->r[5]+0x000001F0u; psq_store(c,5,ea,0,0);} // 80150008
  {uint32_t ea=c->r[5]+0x000001F8u; psq_store(c,6,ea,0,0);} // 8015000C
  {uint32_t ea=c->r[5]+0x00000200u; psq_store(c,7,ea,0,0);} // 80150010
  {uint32_t ea=c->r[5]+0x00000208u; psq_store(c,8,ea,0,0);} // 80150014
  {uint32_t ea=c->r[5]+0x00000210u; psq_store(c,9,ea,0,0);} // 80150018
  {uint32_t ea=c->r[5]+0x00000218u; psq_store(c,10,ea,0,0);} // 8015001C
  {uint32_t ea=c->r[5]+0x00000220u; psq_store(c,11,ea,0,0);} // 80150020
  {uint32_t ea=c->r[5]+0x00000228u; psq_store(c,12,ea,0,0);} // 80150024
  {uint32_t ea=c->r[5]+0x00000230u; psq_store(c,13,ea,0,0);} // 80150028
  {uint32_t ea=c->r[5]+0x00000238u; psq_store(c,14,ea,0,0);} // 8015002C
  {uint32_t ea=c->r[5]+0x00000240u; psq_store(c,15,ea,0,0);} // 80150030
  {uint32_t ea=c->r[5]+0x00000248u; psq_store(c,16,ea,0,0);} // 80150034
  {uint32_t ea=c->r[5]+0x00000250u; psq_store(c,17,ea,0,0);} // 80150038
  {uint32_t ea=c->r[5]+0x00000258u; psq_store(c,18,ea,0,0);} // 8015003C
  {uint32_t ea=c->r[5]+0x00000260u; psq_store(c,19,ea,0,0);} // 80150040
  {uint32_t ea=c->r[5]+0x00000268u; psq_store(c,20,ea,0,0);} // 80150044
  {uint32_t ea=c->r[5]+0x00000270u; psq_store(c,21,ea,0,0);} // 80150048
  {uint32_t ea=c->r[5]+0x00000278u; psq_store(c,22,ea,0,0);} // 8015004C
  {uint32_t ea=c->r[5]+0x00000280u; psq_store(c,23,ea,0,0);} // 80150050
  {uint32_t ea=c->r[5]+0x00000288u; psq_store(c,24,ea,0,0);} // 80150054
  {uint32_t ea=c->r[5]+0x00000290u; psq_store(c,25,ea,0,0);} // 80150058
  {uint32_t ea=c->r[5]+0x00000298u; psq_store(c,26,ea,0,0);} // 8015005C
  {uint32_t ea=c->r[5]+0x000002A0u; psq_store(c,27,ea,0,0);} // 80150060
  {uint32_t ea=c->r[5]+0x000002A8u; psq_store(c,28,ea,0,0);} // 80150064
  {uint32_t ea=c->r[5]+0x000002B0u; psq_store(c,29,ea,0,0);} // 80150068
  {uint32_t ea=c->r[5]+0x000002B8u; psq_store(c,30,ea,0,0);} // 8015006C
  {uint32_t ea=c->r[5]+0x000002C0u; psq_store(c,31,ea,0,0);} // 80150070
L_80150074:;
  return; // 80150074
}

// OSSaveFPUContext
void f_80150078(Ctx* __restrict c) {
  trace_call(0x80150078u);
  c->r[5]=c->r[3]+0x00000000u; // 80150078
  f_8014FF50(c); return; // 8015007C
}

// OSSetCurrentContext
void f_80150080(Ctx* __restrict c) {
  trace_call(0x80150080u);
  c->r[4]=0u+0x80000000u; // 80150080
  W32(c->r[4]+0x000000D4u,c->r[3]); // 80150084
  c->r[5]=rotl(c->r[3],0)&0x3FFFFFFFu; // 80150088
  W32(c->r[4]+0x000000C0u,c->r[5]); // 8015008C
  c->r[5]=R32(c->r[4]+0x000000D8u); // 80150090
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[3]); // 80150094
  if (!crb(c,2)) { goto L_801500B8; } // 80150098
  c->r[6]=R32(c->r[3]+0x0000019Cu); // 8015009C
  c->r[6]=c->r[6]|0x00002000u; // 801500A0
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 801500A4
  c->r[6]=c->msr; // 801500A8
  c->r[6]=c->r[6]|0x00000002u; // 801500AC
  c->msr=c->r[6]; // 801500B0
  return; // 801500B4
L_801500B8:;
  c->r[6]=R32(c->r[3]+0x0000019Cu); // 801500B8
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 801500BC
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 801500C0
  c->r[6]=c->msr; // 801500C4
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 801500C8
  c->r[6]=c->r[6]|0x00000002u; // 801500CC
  c->msr=c->r[6]; // 801500D0
  /* isync */ // 801500D4
  return; // 801500D8
}

// OSGetCurrentContext
void f_801500DC(Ctx* __restrict c) {
  trace_call(0x801500DCu);
  c->r[3]=0u+0x80000000u; // 801500DC
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801500E0
  return; // 801500E4
}

void hle_OSSaveContext(Ctx*);
// OSSaveContext
void f_801500E8(Ctx* __restrict c) {
  hle_OSSaveContext(c);
}

void hle_OSLoadContext(Ctx*);
// OSLoadContext
void f_80150168(Ctx* __restrict c) {
  hle_OSLoadContext(c);
}

// OSGetStackPointer
void f_80150240(Ctx* __restrict c) {
  trace_call(0x80150240u);
  c->r[3]=c->r[1]|c->r[1]; // 80150240
  return; // 80150244
}

void hle_OSSwitchFiber(Ctx*);
// OSSwitchFiber
void f_80150248(Ctx* __restrict c) {
  hle_OSSwitchFiber(c);
}

void hle_OSSwitchFiberEx(Ctx*);
// OSSwitchFiberEx
void f_80150278(Ctx* __restrict c) {
  hle_OSSwitchFiberEx(c);
}

// OSClearContext
void f_801502A8(Ctx* __restrict c) {
  trace_call(0x801502A8u);
  c->r[5]=0u+0x00000000u; // 801502A8
  c->r[4]=0u+0x80000000u; // 801502AC
  W16(c->r[3]+0x000001A0u,c->r[5]); // 801502B0
  W16(c->r[3]+0x000001A2u,c->r[5]); // 801502B4
  c->r[0]=R32(c->r[4]+0x000000D8u); // 801502B8
  cmpu(c,0,c->r[3],c->r[0]); // 801502BC
  if (!crb(c,2)) return; // 801502C0
  W32(c->r[4]+0x000000D8u,c->r[5]); // 801502C4
  return; // 801502C8
}

// OSInitContext
void f_801502CC(Ctx* __restrict c) {
  trace_call(0x801502CCu);
  W32(c->r[3]+0x00000198u,c->r[4]); // 801502CC
  W32(c->r[3]+0x00000004u,c->r[5]); // 801502D0
  c->r[11]=0u+0x00000000u; // 801502D4
  c->r[11]=c->r[11]|0x00009032u; // 801502D8
  W32(c->r[3]+0x0000019Cu,c->r[11]); // 801502DC
  c->r[0]=0u+0x00000000u; // 801502E0
  W32(c->r[3]+0x00000080u,c->r[0]); // 801502E4
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 801502E8
  W32(c->r[3]+0x00000008u,c->r[2]); // 801502EC
  W32(c->r[3]+0x00000034u,c->r[13]); // 801502F0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801502F4
  W32(c->r[3]+0x00000010u,c->r[0]); // 801502F8
  W32(c->r[3]+0x00000014u,c->r[0]); // 801502FC
  W32(c->r[3]+0x00000018u,c->r[0]); // 80150300
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80150304
  W32(c->r[3]+0x00000020u,c->r[0]); // 80150308
  W32(c->r[3]+0x00000024u,c->r[0]); // 8015030C
  W32(c->r[3]+0x00000028u,c->r[0]); // 80150310
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80150314
  W32(c->r[3]+0x00000030u,c->r[0]); // 80150318
  W32(c->r[3]+0x00000038u,c->r[0]); // 8015031C
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 80150320
  W32(c->r[3]+0x00000040u,c->r[0]); // 80150324
  W32(c->r[3]+0x00000044u,c->r[0]); // 80150328
  W32(c->r[3]+0x00000048u,c->r[0]); // 8015032C
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 80150330
  W32(c->r[3]+0x00000050u,c->r[0]); // 80150334
  W32(c->r[3]+0x00000054u,c->r[0]); // 80150338
  W32(c->r[3]+0x00000058u,c->r[0]); // 8015033C
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 80150340
  W32(c->r[3]+0x00000060u,c->r[0]); // 80150344
  W32(c->r[3]+0x00000064u,c->r[0]); // 80150348
  W32(c->r[3]+0x00000068u,c->r[0]); // 8015034C
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 80150350
  W32(c->r[3]+0x00000070u,c->r[0]); // 80150354
  W32(c->r[3]+0x00000074u,c->r[0]); // 80150358
  W32(c->r[3]+0x00000078u,c->r[0]); // 8015035C
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 80150360
  W32(c->r[3]+0x000001A4u,c->r[0]); // 80150364
  W32(c->r[3]+0x000001A8u,c->r[0]); // 80150368
  W32(c->r[3]+0x000001ACu,c->r[0]); // 8015036C
  W32(c->r[3]+0x000001B0u,c->r[0]); // 80150370
  W32(c->r[3]+0x000001B4u,c->r[0]); // 80150374
  W32(c->r[3]+0x000001B8u,c->r[0]); // 80150378
  W32(c->r[3]+0x000001BCu,c->r[0]); // 8015037C
  W32(c->r[3]+0x000001C0u,c->r[0]); // 80150380
  f_801502A8(c); return; // 80150384
}

// OSDumpContext
void f_80150388(Ctx* __restrict c) {
  trace_call(0x80150388u);
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80150388
  c->r[0]=c->lr; // 8015038C
  W32(c->r[1]+0x000002F4u,c->r[0]); // 80150390
  c->r[11]=c->r[1]+0x000002F0u; // 80150394
  c->lr=0x8015039Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80150398
  c->r[28]=0u+0x802C0000u; // 8015039C
  c->r[30]=c->r[3]|c->r[3]; // 801503A0
  c->r[28]=c->r[28]+0x00006F08u; // 801503A4
  c->r[4]=c->r[30]|c->r[30]; // 801503A8
  c->r[3]=c->r[28]+0x00000000u; // 801503AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801503B0
  c->lr=0x801503B8u; f_801506B4(c); // 801503B4
  c->r[26]=c->r[30]|c->r[30]; // 801503B8
  c->r[25]=0u+0x00000000u; // 801503BC
L_801503C0:;
  c->r[8]=R32(c->r[26]+0x00000040u); // 801503C0
  c->r[4]=c->r[25]|c->r[25]; // 801503C4
  c->r[5]=R32(c->r[26]+0x00000000u); // 801503C8
  c->r[3]=c->r[28]+0x00000048u; // 801503CC
  c->r[9]=c->r[8]|c->r[8]; // 801503D0
  c->r[7]=c->r[25]+0x00000010u; // 801503D4
  c->r[6]=c->r[5]|c->r[5]; // 801503D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801503DC
  c->lr=0x801503E4u; f_801506B4(c); // 801503E0
  c->r[25]=c->r[25]+0x00000001u; // 801503E4
  c->r[26]=c->r[26]+0x00000004u; // 801503E8
  cmpu(c,0,c->r[25],0x00000010u); // 801503EC
  if (crb(c,0)) { IRQCHK(c); goto L_801503C0; } // 801503F0
  c->r[4]=R32(c->r[30]+0x00000084u); // 801503F4
  c->r[3]=c->r[28]+0x00000078u; // 801503F8
  c->r[5]=R32(c->r[30]+0x00000080u); // 801503FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150400
  c->lr=0x80150408u; f_801506B4(c); // 80150404
  c->r[4]=R32(c->r[30]+0x00000198u); // 80150408
  c->r[3]=c->r[28]+0x000000A8u; // 8015040C
  c->r[5]=R32(c->r[30]+0x0000019Cu); // 80150410
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150414
  c->lr=0x8015041Cu; f_801506B4(c); // 80150418
  c->r[3]=c->r[28]+0x000000D8u; // 8015041C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150420
  c->lr=0x80150428u; f_801506B4(c); // 80150424
  c->r[26]=c->r[30]|c->r[30]; // 80150428
  c->r[25]=0u+0x00000000u; // 8015042C
L_80150430:;
  c->r[5]=R32(c->r[26]+0x000001A4u); // 80150430
  c->r[4]=c->r[25]|c->r[25]; // 80150434
  c->r[7]=R32(c->r[26]+0x000001B4u); // 80150438
  c->r[3]=c->r[28]+0x000000ECu; // 8015043C
  c->r[6]=c->r[25]+0x00000004u; // 80150440
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150444
  c->lr=0x8015044Cu; f_801506B4(c); // 80150448
  c->r[25]=c->r[25]+0x00000001u; // 8015044C
  c->r[26]=c->r[26]+0x00000004u; // 80150450
  cmpu(c,0,c->r[25],0x00000004u); // 80150454
  if (crb(c,0)) { IRQCHK(c); goto L_80150430; } // 80150458
  c->r[0]=R16(c->r[30]+0x000001A2u); // 8015045C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80150460
  if (crb(c,2)) { goto L_8015057C; } // 80150464
  c->lr=0x8015046Cu; f_80154410(c); // 80150468
  c->r[6]=0u+0x80000000u; // 8015046C
  c->r[5]=0u+0x00000000u; // 80150470
  c->r[27]=R32(c->r[6]+0x000000D4u); // 80150474
  c->r[4]=c->r[1]+0x00000008u; // 80150478
  c->r[31]=c->r[3]|c->r[3]; // 8015047C
  W16(c->r[1]+0x000001A8u,c->r[5]); // 80150480
  W16(c->r[1]+0x000001AAu,c->r[5]); // 80150484
  c->r[0]=R32(c->r[6]+0x000000D8u); // 80150488
  cmpu(c,0,c->r[4],c->r[0]); // 8015048C
  if (!crb(c,2)) { goto L_80150498; } // 80150490
  W32(c->r[6]+0x000000D8u,c->r[5]); // 80150494
L_80150498:;
  c->r[3]=c->r[1]+0x00000008u; // 80150498
  c->lr=0x801504A0u; f_80150080(c); // 8015049C
  c->r[3]=c->r[28]+0x00000110u; // 801504A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801504A4
  c->lr=0x801504ACu; f_801506B4(c); // 801504A8
  c->r[26]=c->r[30]|c->r[30]; // 801504AC
  c->r[25]=0u+0x00000000u; // 801504B0
L_801504B4:;
  {uint32_t ea=c->r[26]+0x00000098u; c->f[1]=RF64(ea);} // 801504B4
  c->lr=0x801504BCu; f_80252A7C(c); // 801504B8
  {uint32_t ea=c->r[26]+0x00000090u; c->f[1]=RF64(ea);} // 801504BC
  c->r[29]=c->r[3]|c->r[3]; // 801504C0
  c->lr=0x801504C8u; f_80252A7C(c); // 801504C4
  c->r[5]=c->r[3]|c->r[3]; // 801504C8
  c->r[4]=c->r[25]|c->r[25]; // 801504CC
  c->r[7]=c->r[29]|c->r[29]; // 801504D0
  c->r[3]=c->r[28]+0x00000124u; // 801504D4
  c->r[6]=c->r[25]+0x00000001u; // 801504D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801504DC
  c->lr=0x801504E4u; f_801506B4(c); // 801504E0
  c->r[25]=c->r[25]+0x00000002u; // 801504E4
  c->r[26]=c->r[26]+0x00000010u; // 801504E8
  cmpu(c,0,c->r[25],0x00000020u); // 801504EC
  if (crb(c,0)) { IRQCHK(c); goto L_801504B4; } // 801504F0
  c->r[3]=c->r[28]+0x00000140u; // 801504F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801504F8
  c->lr=0x80150500u; f_801506B4(c); // 801504FC
  c->r[26]=c->r[30]|c->r[30]; // 80150500
  c->r[25]=0u+0x00000000u; // 80150504
L_80150508:;
  {uint32_t ea=c->r[26]+0x000001D0u; c->f[1]=RF64(ea);} // 80150508
  c->lr=0x80150510u; f_80252A7C(c); // 8015050C
  {uint32_t ea=c->r[26]+0x000001C8u; c->f[1]=RF64(ea);} // 80150510
  c->r[29]=c->r[3]|c->r[3]; // 80150514
  c->lr=0x8015051Cu; f_80252A7C(c); // 80150518
  c->r[5]=c->r[3]|c->r[3]; // 8015051C
  c->r[4]=c->r[25]|c->r[25]; // 80150520
  c->r[7]=c->r[29]|c->r[29]; // 80150524
  c->r[3]=c->r[28]+0x00000154u; // 80150528
  c->r[6]=c->r[25]+0x00000001u; // 8015052C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150530
  c->lr=0x80150538u; f_801506B4(c); // 80150534
  c->r[25]=c->r[25]+0x00000002u; // 80150538
  c->r[26]=c->r[26]+0x00000010u; // 8015053C
  cmpu(c,0,c->r[25],0x00000020u); // 80150540
  if (crb(c,0)) { IRQCHK(c); goto L_80150508; } // 80150544
  c->r[5]=0u+0x00000000u; // 80150548
  c->r[3]=0u+0x80000000u; // 8015054C
  W16(c->r[1]+0x000001A8u,c->r[5]); // 80150550
  c->r[4]=c->r[1]+0x00000008u; // 80150554
  W16(c->r[1]+0x000001AAu,c->r[5]); // 80150558
  c->r[0]=R32(c->r[3]+0x000000D8u); // 8015055C
  cmpu(c,0,c->r[4],c->r[0]); // 80150560
  if (!crb(c,2)) { goto L_8015056C; } // 80150564
  W32(c->r[3]+0x000000D8u,c->r[5]); // 80150568
L_8015056C:;
  c->r[3]=c->r[27]|c->r[27]; // 8015056C
  c->lr=0x80150574u; f_80150080(c); // 80150570
  c->r[3]=c->r[31]|c->r[31]; // 80150574
  c->lr=0x8015057Cu; f_80154438(c); // 80150578
L_8015057C:;
  c->r[3]=c->r[28]+0x00000174u; // 8015057C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150580
  c->lr=0x80150588u; f_801506B4(c); // 80150584
  c->r[25]=R32(c->r[30]+0x00000004u); // 80150588
  c->r[26]=0u+0x00000000u; // 8015058C
  goto L_801505B0; // 80150590
L_80150594:;
  c->r[5]=R32(c->r[25]+0x00000000u); // 80150594
  c->r[4]=c->r[25]|c->r[25]; // 80150598
  c->r[6]=R32(c->r[25]+0x00000004u); // 8015059C
  c->r[3]=c->r[28]+0x0000019Cu; // 801505A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801505A4
  c->lr=0x801505ACu; f_801506B4(c); // 801505A8
  c->r[25]=R32(c->r[25]+0x00000000u); // 801505AC
L_801505B0:;
  cmps(c,0,(int32_t)c->r[25],0); // 801505B0
  if (crb(c,2)) { goto L_801505D0; } // 801505B4
  c->r[0]=c->r[25]+0x00010000u; // 801505B8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801505BC
  if (crb(c,2)) { goto L_801505D0; } // 801505C0
  cmpu(c,0,c->r[26],0x00000010u); // 801505C4
  c->r[26]=c->r[26]+0x00000001u; // 801505C8
  if (crb(c,0)) { IRQCHK(c); goto L_80150594; } // 801505CC
L_801505D0:;
  c->r[11]=c->r[1]+0x000002F0u; // 801505D0
  c->lr=0x801505D8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801505D4
  c->r[0]=R32(c->r[1]+0x000002F4u); // 801505D8
  c->lr=c->r[0]; // 801505DC
  c->r[1]=c->r[1]+0x000002F0u; // 801505E0
  return; // 801505E4
}

// OSSwitchFPUContext
void f_801505E8(Ctx* __restrict c) {
  trace_call(0x801505E8u);
  c->r[5]=c->msr; // 801505E8
  c->r[5]=c->r[5]|0x00002000u; // 801505EC
  c->msr=c->r[5]; // 801505F0
  /* isync */ // 801505F4
  c->r[5]=R32(c->r[4]+0x0000019Cu); // 801505F8
  c->r[5]=c->r[5]|0x00002000u; // 801505FC
  mtspr(c,27,c->r[5]); // 80150600
  c->r[3]=0u+0x80000000u; // 80150604
  c->r[5]=R32(c->r[3]+0x000000D8u); // 80150608
  W32(c->r[3]+0x000000D8u,c->r[4]); // 8015060C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 80150610
  if (crb(c,2)) { goto L_80150628; } // 80150614
  cmps(c,0,(int32_t)c->r[5],0); // 80150618
  if (crb(c,2)) { goto L_80150624; } // 8015061C
  c->lr=0x80150624u; f_8014FF50(c); // 80150620
L_80150624:;
  c->lr=0x80150628u; f_8014FE2C(c); // 80150624
L_80150628:;
  c->r[3]=R32(c->r[4]+0x00000080u); // 80150628
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[3]&0xFFFFFFFFu); // 8015062C
  c->r[3]=R32(c->r[4]+0x00000084u); // 80150630
  c->lr=c->r[3]; // 80150634
  c->r[3]=R32(c->r[4]+0x00000198u); // 80150638
  mtspr(c,26,c->r[3]); // 8015063C
  c->r[3]=R32(c->r[4]+0x00000088u); // 80150640
  c->ctr=c->r[3]; // 80150644
  c->r[3]=R32(c->r[4]+0x0000008Cu); // 80150648
  mtspr(c,1,c->r[3]); // 8015064C
  c->r[3]=R16(c->r[4]+0x000001A2u); // 80150650
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFDu; // 80150654
  W16(c->r[4]+0x000001A2u,c->r[3]); // 80150658
  c->r[5]=R32(c->r[4]+0x00000014u); // 8015065C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80150660
  c->r[4]=R32(c->r[4]+0x00000010u); // 80150664
  return; /* rfi */ // 80150668
}

// __OSContextInit
void f_8015066C(Ctx* __restrict c) {
  trace_call(0x8015066Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015066C
  c->r[0]=c->lr; // 80150670
  c->r[4]=0u+0x80150000u; // 80150674
  c->r[3]=0u+0x00000007u; // 80150678
  W32(c->r[1]+0x00000014u,c->r[0]); // 8015067C
  c->r[4]=c->r[4]+0x000005E8u; // 80150680
  c->lr=0x80150688u; f_8014E598(c); // 80150684
  c->r[0]=0u+0x00000000u; // 80150688
  c->r[4]=0u+0x80000000u; // 8015068C
  c->r[3]=0u+0x802C0000u; // 80150690
  W32(c->r[4]+0x000000D8u,c->r[0]); // 80150694
  c->r[3]=c->r[3]+0x000070C0u; // 80150698
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8015069C
  c->lr=0x801506A4u; f_8015EDDC(c); // 801506A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801506A4
  c->lr=c->r[0]; // 801506A8
  c->r[1]=c->r[1]+0x00000010u; // 801506AC
  return; // 801506B0
}

void hle_OSReport(Ctx*);
// OSReport
void f_801506B4(Ctx* __restrict c) {
  hle_OSReport(c);
}

// fn_80150740
void f_80150740(Ctx* __restrict c) {
  f_8025A96C(c); return; // 80150740
}

void hle_OSPanic(Ctx*);
// OSPanic
void f_80150744(Ctx* __restrict c) {
  hle_OSPanic(c);
}

// OSSetErrorHandler
void f_80150870(Ctx* __restrict c) {
  trace_call(0x80150870u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80150870
  c->r[0]=c->lr; // 80150874
  W32(c->r[1]+0x00000024u,c->r[0]); // 80150878
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8015087C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80150880
  W32(c->r[1]+0x00000014u,c->r[29]); // 80150884
  c->r[29]=c->r[3]|c->r[3]; // 80150888
  W32(c->r[1]+0x00000010u,c->r[28]); // 8015088C
  c->r[28]=c->r[4]|c->r[4]; // 80150890
  c->lr=0x80150898u; f_80154410(c); // 80150894
  c->r[4]=0u+0x80440000u; // 80150898
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 8015089C
  c->r[4]=c->r[4]+0xFFFFE1F0u; // 801508A0
  cmpu(c,0,c->r[29],0x00000010u); // 801508A4
  c->r[30]=R32(c->r[4]+c->r[0]); // 801508A8
  c->r[29]=c->r[3]|c->r[3]; // 801508AC
  W32(c->r[4]+c->r[0],c->r[28]); // 801508B0
  if (!crb(c,2)) { goto L_80150ACC; } // 801508B4
  c->lr=0x801508BCu; f_8014D254(c); // 801508B8
  c->r[31]=c->r[3]|c->r[3]; // 801508BC
  c->r[3]=c->r[3]|0x00002000u; // 801508C0
  c->lr=0x801508C8u; f_8014D25C(c); // 801508C4
  c->lr=0x801508CCu; f_8014D2D8(c); // 801508C8
  cmps(c,0,(int32_t)c->r[28],0); // 801508CC
  if (crb(c,2)) { goto L_80150A68; } // 801508D0
  c->r[5]=0u+0x80000000u; // 801508D4
  c->r[4]=0u+0x60060000u; // 801508D8
  c->r[9]=R32(c->r[5]+0x000000DCu); // 801508DC
  c->r[5]=c->r[4]+0xFFFFF8FFu; // 801508E0
  c->r[8]=0u+0xFFFFFFFFu; // 801508E4
  c->r[7]=0u+0x00000004u; // 801508E8
  c->r[0]=0u+0x00000002u; // 801508EC
  goto L_80150A4C; // 801508F0
L_801508F4:;
  c->r[4]=R32(c->r[9]+0x0000019Cu); // 801508F4
  c->r[4]=c->r[4]|0x00000900u; // 801508F8
  W32(c->r[9]+0x0000019Cu,c->r[4]); // 801508FC
  c->r[6]=R16(c->r[9]+0x000001A2u); // 80150900
  c->r[4]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[4]); // 80150904
  if (!crb(c,2)) { goto L_80150A30; } // 80150908
  c->r[4]=c->r[6]|0x00000001u; // 8015090C
  c->r[6]=c->r[9]+0x00000090u; // 80150910
  W16(c->r[9]+0x000001A2u,c->r[4]); // 80150914
  c->r[4]=c->r[9]+0x000001C8u; // 80150918
  c->ctr=c->r[0]; // 8015091C
L_80150920:;
  W32(c->r[6]+0x00000004u,c->r[8]); // 80150920
  W32(c->r[6]+0x00000000u,c->r[8]); // 80150924
  W32(c->r[4]+0x00000004u,c->r[8]); // 80150928
  W32(c->r[4]+0x00000000u,c->r[8]); // 8015092C
  W32(c->r[6]+0x0000000Cu,c->r[8]); // 80150930
  W32(c->r[6]+0x00000008u,c->r[8]); // 80150934
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 80150938
  W32(c->r[4]+0x00000008u,c->r[8]); // 8015093C
  W32(c->r[6]+0x00000014u,c->r[8]); // 80150940
  W32(c->r[6]+0x00000010u,c->r[8]); // 80150944
  W32(c->r[4]+0x00000014u,c->r[8]); // 80150948
  W32(c->r[4]+0x00000010u,c->r[8]); // 8015094C
  W32(c->r[6]+0x0000001Cu,c->r[8]); // 80150950
  W32(c->r[6]+0x00000018u,c->r[8]); // 80150954
  W32(c->r[4]+0x0000001Cu,c->r[8]); // 80150958
  W32(c->r[4]+0x00000018u,c->r[8]); // 8015095C
  W32(c->r[6]+0x00000024u,c->r[8]); // 80150960
  W32(c->r[6]+0x00000020u,c->r[8]); // 80150964
  W32(c->r[4]+0x00000024u,c->r[8]); // 80150968
  W32(c->r[4]+0x00000020u,c->r[8]); // 8015096C
  W32(c->r[6]+0x0000002Cu,c->r[8]); // 80150970
  W32(c->r[6]+0x00000028u,c->r[8]); // 80150974
  W32(c->r[4]+0x0000002Cu,c->r[8]); // 80150978
  W32(c->r[4]+0x00000028u,c->r[8]); // 8015097C
  W32(c->r[6]+0x00000034u,c->r[8]); // 80150980
  W32(c->r[6]+0x00000030u,c->r[8]); // 80150984
  W32(c->r[4]+0x00000034u,c->r[8]); // 80150988
  W32(c->r[4]+0x00000030u,c->r[8]); // 8015098C
  W32(c->r[6]+0x0000003Cu,c->r[8]); // 80150990
  W32(c->r[6]+0x00000038u,c->r[8]); // 80150994
  W32(c->r[4]+0x0000003Cu,c->r[8]); // 80150998
  W32(c->r[4]+0x00000038u,c->r[8]); // 8015099C
  W32(c->r[6]+0x00000044u,c->r[8]); // 801509A0
  W32(c->r[6]+0x00000040u,c->r[8]); // 801509A4
  W32(c->r[4]+0x00000044u,c->r[8]); // 801509A8
  W32(c->r[4]+0x00000040u,c->r[8]); // 801509AC
  W32(c->r[6]+0x0000004Cu,c->r[8]); // 801509B0
  W32(c->r[6]+0x00000048u,c->r[8]); // 801509B4
  W32(c->r[4]+0x0000004Cu,c->r[8]); // 801509B8
  W32(c->r[4]+0x00000048u,c->r[8]); // 801509BC
  W32(c->r[6]+0x00000054u,c->r[8]); // 801509C0
  W32(c->r[6]+0x00000050u,c->r[8]); // 801509C4
  W32(c->r[4]+0x00000054u,c->r[8]); // 801509C8
  W32(c->r[4]+0x00000050u,c->r[8]); // 801509CC
  W32(c->r[6]+0x0000005Cu,c->r[8]); // 801509D0
  W32(c->r[6]+0x00000058u,c->r[8]); // 801509D4
  W32(c->r[4]+0x0000005Cu,c->r[8]); // 801509D8
  W32(c->r[4]+0x00000058u,c->r[8]); // 801509DC
  W32(c->r[6]+0x00000064u,c->r[8]); // 801509E0
  W32(c->r[6]+0x00000060u,c->r[8]); // 801509E4
  W32(c->r[4]+0x00000064u,c->r[8]); // 801509E8
  W32(c->r[4]+0x00000060u,c->r[8]); // 801509EC
  W32(c->r[6]+0x0000006Cu,c->r[8]); // 801509F0
  W32(c->r[6]+0x00000068u,c->r[8]); // 801509F4
  W32(c->r[4]+0x0000006Cu,c->r[8]); // 801509F8
  W32(c->r[4]+0x00000068u,c->r[8]); // 801509FC
  W32(c->r[6]+0x00000074u,c->r[8]); // 80150A00
  W32(c->r[6]+0x00000070u,c->r[8]); // 80150A04
  W32(c->r[4]+0x00000074u,c->r[8]); // 80150A08
  W32(c->r[4]+0x00000070u,c->r[8]); // 80150A0C
  W32(c->r[6]+0x0000007Cu,c->r[8]); // 80150A10
  W32(c->r[6]+0x00000078u,c->r[8]); // 80150A14
  c->r[6]=c->r[6]+0x00000080u; // 80150A18
  W32(c->r[4]+0x0000007Cu,c->r[8]); // 80150A1C
  W32(c->r[4]+0x00000078u,c->r[8]); // 80150A20
  c->r[4]=c->r[4]+0x00000080u; // 80150A24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80150920; } // 80150A28
  W32(c->r[9]+0x00000194u,c->r[7]); // 80150A2C
L_80150A30:;
  c->r[4]=R32(c->r[13]+0xFFFF8FB8u); // 80150A30
  c->r[6]=R32(c->r[9]+0x00000194u); // 80150A34
  c->r[4]=rotl(c->r[4],0)&0x000000F8u; // 80150A38
  c->r[4]=c->r[6]|c->r[4]; // 80150A3C
  c->r[4]=c->r[4]&c->r[5]; // 80150A40
  W32(c->r[9]+0x00000194u,c->r[4]); // 80150A44
  c->r[9]=R32(c->r[9]+0x000002FCu); // 80150A48
L_80150A4C:;
  cmps(c,0,(int32_t)c->r[9],0); // 80150A4C
  if (!crb(c,2)) { IRQCHK(c); goto L_801508F4; } // 80150A50
  c->r[0]=R32(c->r[13]+0xFFFF8FB8u); // 80150A54
  c->r[31]=c->r[31]|0x00000900u; // 80150A58
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 80150A5C
  c->r[4]=c->r[3]|c->r[0]; // 80150A60
  goto L_80150AB4; // 80150A64
L_80150A68:;
  c->r[5]=0u+0x80000000u; // 80150A68
  c->r[4]=0u+0x60060000u; // 80150A6C
  c->r[6]=R32(c->r[5]+0x000000DCu); // 80150A70
  c->r[4]=c->r[4]+0xFFFFF8FFu; // 80150A74
  c->r[5]=0u+0xFFFFF6FFu; // 80150A78
  goto L_80150AA0; // 80150A7C
L_80150A80:;
  c->r[0]=R32(c->r[6]+0x0000019Cu); // 80150A80
  c->r[0]=c->r[0]&c->r[5]; // 80150A84
  W32(c->r[6]+0x0000019Cu,c->r[0]); // 80150A88
  c->r[0]=R32(c->r[6]+0x00000194u); // 80150A8C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF07u; // 80150A90
  c->r[0]=c->r[0]&c->r[4]; // 80150A94
  W32(c->r[6]+0x00000194u,c->r[0]); // 80150A98
  c->r[6]=R32(c->r[6]+0x000002FCu); // 80150A9C
L_80150AA0:;
  cmps(c,0,(int32_t)c->r[6],0); // 80150AA0
  if (!crb(c,2)) { IRQCHK(c); goto L_80150A80; } // 80150AA4
  c->r[0]=0u+0xFFFFF6FFu; // 80150AA8
  c->r[4]=rotl(c->r[3],0)&0xFFFFFF07u; // 80150AAC
  c->r[31]=c->r[31]&c->r[0]; // 80150AB0
L_80150AB4:;
  c->r[3]=0u+0x60060000u; // 80150AB4
  c->r[0]=c->r[3]+0xFFFFF8FFu; // 80150AB8
  c->r[3]=c->r[4]&c->r[0]; // 80150ABC
  c->lr=0x80150AC4u; f_8014D2F8(c); // 80150AC0
  c->r[3]=c->r[31]|c->r[31]; // 80150AC4
  c->lr=0x80150ACCu; f_8014D25C(c); // 80150AC8
L_80150ACC:;
  c->r[3]=c->r[29]|c->r[29]; // 80150ACC
  c->lr=0x80150AD4u; f_80154438(c); // 80150AD0
  c->r[3]=c->r[30]|c->r[30]; // 80150AD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80150AD8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80150ADC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80150AE0
  c->r[28]=R32(c->r[1]+0x00000010u); // 80150AE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80150AE8
  c->lr=c->r[0]; // 80150AEC
  c->r[1]=c->r[1]+0x00000020u; // 80150AF0
  return; // 80150AF4
}

// __OSUnhandledException
void f_80150AF8(Ctx* __restrict c) {
  trace_call(0x80150AF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80150AF8
  c->r[0]=c->lr; // 80150AFC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80150B00
  c->r[11]=c->r[1]+0x00000030u; // 80150B04
  c->lr=0x80150B0Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80150B08
  c->r[31]=0u+0x802C0000u; // 80150B0C
  c->r[25]=c->r[3]|c->r[3]; // 80150B10
  c->r[26]=c->r[4]|c->r[4]; // 80150B14
  c->r[27]=c->r[5]|c->r[5]; // 80150B18
  c->r[28]=c->r[6]|c->r[6]; // 80150B1C
  c->r[31]=c->r[31]+0x000070E8u; // 80150B20
  c->lr=0x80150B28u; f_8015848C(c); // 80150B24
  c->r[5]=R32(c->r[26]+0x0000019Cu); // 80150B28
  c->r[29]=c->r[4]|c->r[4]; // 80150B2C
  c->r[30]=c->r[3]|c->r[3]; // 80150B30
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 80150B34
  if (!crb(c,2)) { goto L_80150B50; } // 80150B38
  c->r[4]=c->r[25]|c->r[25]; // 80150B3C
  c->r[3]=c->r[31]+0x0000005Cu; // 80150B40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150B44
  c->lr=0x80150B4Cu; f_801506B4(c); // 80150B48
  goto L_80150CAC; // 80150B4C
L_80150B50:;
  cmpu(c,0,c->r[25],0x00000006u); // 80150B50
  if (!crb(c,2)) { goto L_80150C40; } // 80150B54
  c->r[0]=rotl(c->r[5],0)&0x00100000u; cr0(c,c->r[0]); // 80150B58
  if (crb(c,2)) { goto L_80150C40; } // 80150B5C
  c->r[3]=0u+0x80440000u; // 80150B60
  c->r[3]=c->r[3]+0xFFFFE1F0u; // 80150B64
  c->r[0]=R32(c->r[3]+0x00000040u); // 80150B68
  cmps(c,0,(int32_t)c->r[0],0); // 80150B6C
  if (crb(c,2)) { goto L_80150C40; } // 80150B70
  c->r[25]=0u+0x00000010u; // 80150B74
  c->lr=0x80150B7Cu; f_8014D254(c); // 80150B78
  c->r[23]=c->r[3]|c->r[3]; // 80150B7C
  c->r[3]=c->r[3]|0x00002000u; // 80150B80
  c->lr=0x80150B88u; f_8014D25C(c); // 80150B84
  c->r[3]=0u+0x80000000u; // 80150B88
  c->r[3]=R32(c->r[3]+0x000000D8u); // 80150B8C
  cmps(c,0,(int32_t)c->r[3],0); // 80150B90
  if (crb(c,2)) { goto L_80150B9C; } // 80150B94
  c->lr=0x80150B9Cu; f_80150078(c); // 80150B98
L_80150B9C:;
  c->lr=0x80150BA0u; f_8014D2D8(c); // 80150B9C
  c->r[24]=0u+0x60060000u; // 80150BA0
  c->r[0]=c->r[24]+0xFFFFF8FFu; // 80150BA4
  c->r[3]=c->r[3]&c->r[0]; // 80150BA8
  c->lr=0x80150BB0u; f_8014D2F8(c); // 80150BAC
  c->r[3]=c->r[23]|c->r[23]; // 80150BB0
  c->lr=0x80150BB8u; f_8014D25C(c); // 80150BB4
  c->r[23]=0u+0x80000000u; // 80150BB8
  c->r[0]=R32(c->r[23]+0x000000D8u); // 80150BBC
  cmpu(c,0,c->r[0],c->r[26]); // 80150BC0
  if (!crb(c,2)) { goto L_80150C24; } // 80150BC4
  c->lr=0x80150BCCu; f_801571A4(c); // 80150BC8
  c->r[4]=c->r[26]|c->r[26]; // 80150BCC
  c->r[5]=c->r[27]|c->r[27]; // 80150BD0
  c->r[6]=c->r[28]|c->r[28]; // 80150BD4
  c->r[3]=0u+0x00000010u; // 80150BD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150BDC
  c->r[7]=0u+0x80440000u; // 80150BE0
  c->r[7]=c->r[7]+0xFFFFE1F0u; // 80150BE4
  c->r[12]=R32(c->r[7]+0x00000040u); // 80150BE8
  c->ctr=c->r[12]; // 80150BEC
  if (true) { c->lr=0x80150BF4u; dispatch(c,c->ctr); } // 80150BF0
  c->r[4]=R32(c->r[26]+0x0000019Cu); // 80150BF4
  c->r[3]=0u+0x00000000u; // 80150BF8
  c->r[0]=c->r[24]+0xFFFFF8FFu; // 80150BFC
  c->r[4]=rotl(c->r[4],0)&0xFFFFDFFFu; // 80150C00
  W32(c->r[26]+0x0000019Cu,c->r[4]); // 80150C04
  W32(c->r[23]+0x000000D8u,c->r[3]); // 80150C08
  c->r[3]=R32(c->r[26]+0x00000194u); // 80150C0C
  c->r[0]=c->r[3]&c->r[0]; // 80150C10
  W32(c->r[26]+0x00000194u,c->r[0]); // 80150C14
  c->lr=0x80150C1Cu; f_801571E0(c); // 80150C18
  c->lr=0x80150C20u; f_801576EC(c); // 80150C1C
  goto L_80150C38; // 80150C20
L_80150C24:;
  c->r[3]=R32(c->r[26]+0x0000019Cu); // 80150C24
  c->r[0]=0u+0x00000000u; // 80150C28
  c->r[3]=rotl(c->r[3],0)&0xFFFFDFFFu; // 80150C2C
  W32(c->r[26]+0x0000019Cu,c->r[3]); // 80150C30
  W32(c->r[23]+0x000000D8u,c->r[0]); // 80150C34
L_80150C38:;
  c->r[3]=c->r[26]|c->r[26]; // 80150C38
  c->lr=0x80150C40u; f_80150168(c); // 80150C3C
L_80150C40:;
  c->r[24]=0u+0x80440000u; // 80150C40
  c->r[23]=rotl(c->r[25],2)&0x000003FCu; // 80150C44
  c->r[24]=c->r[24]+0xFFFFE1F0u; // 80150C48
  c->r[0]=R32(c->r[24]+c->r[23]); // 80150C4C
  cmps(c,0,(int32_t)c->r[0],0); // 80150C50
  if (crb(c,2)) { goto L_80150C8C; } // 80150C54
  c->lr=0x80150C5Cu; f_801571A4(c); // 80150C58
  c->r[3]=c->r[25]|c->r[25]; // 80150C5C
  c->r[4]=c->r[26]|c->r[26]; // 80150C60
  c->r[5]=c->r[27]|c->r[27]; // 80150C64
  c->r[6]=c->r[28]|c->r[28]; // 80150C68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150C6C
  c->r[12]=R32(c->r[24]+c->r[23]); // 80150C70
  c->ctr=c->r[12]; // 80150C74
  if (true) { c->lr=0x80150C7Cu; dispatch(c,c->ctr); } // 80150C78
  c->lr=0x80150C80u; f_801571E0(c); // 80150C7C
  c->lr=0x80150C84u; f_801576EC(c); // 80150C80
  c->r[3]=c->r[26]|c->r[26]; // 80150C84
  c->lr=0x80150C8Cu; f_80150168(c); // 80150C88
L_80150C8C:;
  cmpu(c,0,c->r[25],0x00000008u); // 80150C8C
  if (!crb(c,2)) { goto L_80150C9C; } // 80150C90
  c->r[3]=c->r[26]|c->r[26]; // 80150C94
  c->lr=0x80150C9Cu; f_80150168(c); // 80150C98
L_80150C9C:;
  c->r[4]=c->r[25]|c->r[25]; // 80150C9C
  c->r[3]=c->r[31]+0x0000007Cu; // 80150CA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150CA4
  c->lr=0x80150CACu; f_801506B4(c); // 80150CA8
L_80150CAC:;
  c->r[3]=c->r[13]+0xFFFF8FBCu; // 80150CAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150CB0
  c->lr=0x80150CB8u; f_801506B4(c); // 80150CB4
  c->r[3]=c->r[26]|c->r[26]; // 80150CB8
  c->lr=0x80150CC0u; f_80150388(c); // 80150CBC
  c->r[4]=c->r[27]|c->r[27]; // 80150CC0
  c->r[5]=c->r[28]|c->r[28]; // 80150CC4
  c->r[3]=c->r[31]+0x00000094u; // 80150CC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150CCC
  c->lr=0x80150CD4u; f_801506B4(c); // 80150CD0
  c->r[6]=c->r[29]|c->r[29]; // 80150CD4
  c->r[5]=c->r[30]|c->r[30]; // 80150CD8
  c->r[3]=c->r[31]+0x000000C8u; // 80150CDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150CE0
  c->lr=0x80150CE8u; f_801506B4(c); // 80150CE4
  cmpu(c,0,c->r[25],0x0000000Fu); // 80150CE8
  if (crb(c,1)) { goto L_80150DB0; } // 80150CEC
  c->r[3]=0u+0x802C0000u; // 80150CF0
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 80150CF4
  c->r[3]=c->r[3]+0x000073C4u; // 80150CF8
  c->r[3]=R32(c->r[3]+c->r[0]); // 80150CFC
  c->ctr=c->r[3]; // 80150D00
  if (true) { switch (c->ctr) { case 0x80150D08u: goto L_80150D08; case 0x80150D20u: goto L_80150D20; case 0x80150D34u: goto L_80150D34; case 0x80150D4Cu: goto L_80150D4C; case 0x80150D64u: goto L_80150D64; case 0x80150DB0u: goto L_80150DB0; default: break; } dispatch(c,c->ctr); return; } // 80150D04
L_80150D08:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 80150D08
  c->r[5]=c->r[28]|c->r[28]; // 80150D0C
  c->r[3]=c->r[31]+0x000000D8u; // 80150D10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150D14
  c->lr=0x80150D1Cu; f_801506B4(c); // 80150D18
  goto L_80150DB0; // 80150D1C
L_80150D20:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 80150D20
  c->r[3]=c->r[31]+0x00000138u; // 80150D24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150D28
  c->lr=0x80150D30u; f_801506B4(c); // 80150D2C
  goto L_80150DB0; // 80150D30
L_80150D34:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 80150D34
  c->r[5]=c->r[28]|c->r[28]; // 80150D38
  c->r[3]=c->r[31]+0x00000184u; // 80150D3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150D40
  c->lr=0x80150D48u; f_801506B4(c); // 80150D44
  goto L_80150DB0; // 80150D48
L_80150D4C:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 80150D4C
  c->r[5]=c->r[28]|c->r[28]; // 80150D50
  c->r[3]=c->r[31]+0x000001E8u; // 80150D54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150D58
  c->lr=0x80150D60u; f_801506B4(c); // 80150D5C
  goto L_80150DB0; // 80150D60
L_80150D64:;
  c->r[3]=c->r[13]+0xFFFF8FBCu; // 80150D64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150D68
  c->lr=0x80150D70u; f_801506B4(c); // 80150D6C
  c->r[25]=0u+0xCC000000u; // 80150D70
  c->r[3]=c->r[31]+0x00000248u; // 80150D74
  c->r[4]=R16(c->r[25]+0x00005030u); // 80150D78
  c->r[5]=R16(c->r[25]+0x00005032u); // 80150D7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150D80
  c->lr=0x80150D88u; f_801506B4(c); // 80150D84
  c->r[4]=R16(c->r[25]+0x00005020u); // 80150D88
  c->r[3]=c->r[31]+0x00000268u; // 80150D8C
  c->r[5]=R16(c->r[25]+0x00005022u); // 80150D90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150D94
  c->lr=0x80150D9Cu; f_801506B4(c); // 80150D98
  c->r[4]=0u+0xCD000000u; // 80150D9C
  c->r[3]=c->r[31]+0x00000288u; // 80150DA0
  c->r[4]=R32(c->r[4]+0x00006014u); // 80150DA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150DA8
  c->lr=0x80150DB0u; f_801506B4(c); // 80150DAC
L_80150DB0:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFAA24u); // 80150DB0
  c->r[3]=c->r[31]+0x000002A4u; // 80150DB4
  c->r[5]=R32(c->r[13]+0xFFFFAA20u); // 80150DB8
  c->r[7]=R32(c->r[13]+0xFFFFAA28u); // 80150DBC
  c->r[8]=R32(c->r[13]+0xFFFFAA2Cu); // 80150DC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80150DC4
  c->lr=0x80150DCCu; f_801506B4(c); // 80150DC8
  c->lr=0x80150DD0u; f_8014D294(c); // 80150DCC
  c->r[11]=c->r[1]+0x00000030u; // 80150DD0
  c->lr=0x80150DD8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80150DD4
  c->r[0]=R32(c->r[1]+0x00000034u); // 80150DD8
  c->lr=c->r[0]; // 80150DDC
  c->r[1]=c->r[1]+0x00000030u; // 80150DE0
  return; // 80150DE4
}

// fn_80150DE8
void f_80150DE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80150DE8
  c->r[0]=c->lr; // 80150DEC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80150DF0
  c->r[11]=c->r[1]+0x00000030u; // 80150DF4
  c->lr=0x80150DFCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80150DF8
  c->r[25]=c->r[4]|c->r[4]; // 80150DFC
  c->r[29]=c->r[5]|c->r[5]; // 80150E00
  c->r[30]=c->r[3]|c->r[3]; // 80150E04
  c->r[4]=0u+0x00000000u; // 80150E08
  c->r[5]=0u+0x00002000u; // 80150E0C
  c->lr=0x80150E14u; f_8000443C(c); // 80150E10
  cmps(c,0,(int32_t)c->r[25],0); // 80150E14
  if (!crb(c,2)) { goto L_80150E28; } // 80150E18
  c->r[0]=0u+0x00000000u; // 80150E1C
  W32(c->r[30]+0x00000008u,c->r[0]); // 80150E20
  goto L_80150F4C; // 80150E24
L_80150E28:;
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 80150E28
  c->r[31]=c->r[25]|c->r[25]; // 80150E2C
  c->r[26]=c->r[30]+0x00002000u; // 80150E30
  c->r[28]=c->r[29]+c->r[0]; // 80150E34
  goto L_80150E64; // 80150E38
L_80150E3C:;
  c->r[27]=R32(c->r[28]+0x00000000u); // 80150E3C
  c->r[3]=c->r[27]|c->r[27]; // 80150E40
  c->lr=0x80150E48u; f_80252384(c); // 80150E44
  c->r[0]=c->r[3]+0x00000001u; // 80150E48
  c->r[4]=c->r[27]|c->r[27]; // 80150E4C
  c->r[26]=c->r[26]-c->r[0]; // 80150E50
  c->r[3]=c->r[26]|c->r[26]; // 80150E54
  c->lr=0x80150E5Cu; f_8025C444(c); // 80150E58
  c->r[0]=c->r[26]-c->r[30]; // 80150E5C
  W32(c->r[28]+0x00000000u,c->r[0]); // 80150E60
L_80150E64:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFFFu,0); cr0(c,c->r[25]); // 80150E64
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 80150E68
  if (!crb(c,0)) { IRQCHK(c); goto L_80150E3C; } // 80150E6C
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 80150E70
  c->r[0]=c->r[26]-c->r[30]; // 80150E74
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80150E78
  c->r[7]=0u+0x00000000u; // 80150E7C
  c->r[6]=c->r[30]+c->r[4]; // 80150E80
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80150E84
  c->r[6]=c->r[6]-c->r[0]; // 80150E88
  if (crb(c,2)) { goto L_80150F3C; } // 80150E8C
  cmpu(c,0,c->r[3],0x00000008u); // 80150E90
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 80150E94
  if (!crb(c,1)) { goto L_80150F08; } // 80150E98
  c->r[0]=c->r[3]+0x00000007u; // 80150E9C
  c->r[4]=c->r[29]|c->r[29]; // 80150EA0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80150EA4
  c->r[5]=c->r[6]|c->r[6]; // 80150EA8
  c->ctr=c->r[0]; // 80150EAC
  cmpu(c,0,c->r[3],0x00000000u); // 80150EB0
  if (!crb(c,1)) { goto L_80150F08; } // 80150EB4
L_80150EB8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80150EB8
  c->r[7]=c->r[7]+0x00000008u; // 80150EBC
  W32(c->r[5]+0x00000000u,c->r[0]); // 80150EC0
  c->r[0]=R32(c->r[4]+0x00000004u); // 80150EC4
  W32(c->r[5]+0x00000004u,c->r[0]); // 80150EC8
  c->r[0]=R32(c->r[4]+0x00000008u); // 80150ECC
  W32(c->r[5]+0x00000008u,c->r[0]); // 80150ED0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80150ED4
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80150ED8
  c->r[0]=R32(c->r[4]+0x00000010u); // 80150EDC
  W32(c->r[5]+0x00000010u,c->r[0]); // 80150EE0
  c->r[0]=R32(c->r[4]+0x00000014u); // 80150EE4
  W32(c->r[5]+0x00000014u,c->r[0]); // 80150EE8
  c->r[0]=R32(c->r[4]+0x00000018u); // 80150EEC
  W32(c->r[5]+0x00000018u,c->r[0]); // 80150EF0
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80150EF4
  c->r[4]=c->r[4]+0x00000020u; // 80150EF8
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 80150EFC
  c->r[5]=c->r[5]+0x00000020u; // 80150F00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80150EB8; } // 80150F04
L_80150F08:;
  c->r[3]=c->r[31]+0x00000001u; // 80150F08
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80150F0C
  c->r[0]=c->r[3]-c->r[7]; // 80150F10
  c->r[4]=c->r[29]+c->r[5]; // 80150F14
  c->r[5]=c->r[6]+c->r[5]; // 80150F18
  c->ctr=c->r[0]; // 80150F1C
  cmpu(c,0,c->r[7],c->r[3]); // 80150F20
  if (!crb(c,0)) { goto L_80150F3C; } // 80150F24
L_80150F28:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80150F28
  c->r[4]=c->r[4]+0x00000004u; // 80150F2C
  W32(c->r[5]+0x00000000u,c->r[0]); // 80150F30
  c->r[5]=c->r[5]+0x00000004u; // 80150F34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80150F28; } // 80150F38
L_80150F3C:;
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 80150F3C
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 80150F40
  c->r[0]=c->r[0]-c->r[30]; // 80150F44
  W32(c->r[30]+0x00000008u,c->r[0]); // 80150F48
L_80150F4C:;
  c->r[11]=c->r[1]+0x00000030u; // 80150F4C
  c->r[3]=0u+0x00000001u; // 80150F50
  c->lr=0x80150F58u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80150F54
  c->r[0]=R32(c->r[1]+0x00000034u); // 80150F58
  c->lr=c->r[0]; // 80150F5C
  c->r[1]=c->r[1]+0x00000030u; // 80150F60
  return; // 80150F64
}

// fn_80150F68
void f_80150F68(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 80150F68
  if (crb(c,2)) { goto L_801510B8; } // 80150F6C
  c->r[9]=c->r[3]|c->r[3]; // 80150F70
  c->r[5]=0u+0x00000004u; // 80150F74
  c->r[0]=0u+0x00000002u; // 80150F78
  goto L_80151090; // 80150F7C
L_80150F80:;
  c->r[10]=0u+0x00000000u; // 80150F80
  c->ctr=c->r[0]; // 80150F84
L_80150F88:;
  c->r[8]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[8]); // 80150F88
  c->r[7]=0u+0x000000F0u; // 80150F8C
  if (crb(c,2)) { goto L_80150F98; } // 80150F90
  c->r[7]=0u+0x0000000Fu; // 80150F94
L_80150F98:;
  c->r[3]=0u-c->r[8]; // 80150F98
  c->r[6]=R8(c->r[4]+0x00000000u); // 80150F9C
  c->r[3]=c->r[3]|c->r[8]; // 80150FA0
  c->r[3]=sraw(c,c->r[3],31); // 80150FA4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80150FA8
  c->r[3]=c->r[5]&~c->r[3]; // 80150FAC
  c->r[6]=c->r[6]&c->r[7]; // 80150FB0
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80150FB4
  c->r[3]=sraw(c,c->r[6],(c->r[3])&63); cr0(c,c->r[3]); // 80150FB8
  if (crb(c,0)) { goto L_80150FD4; } // 80150FBC
  cmps(c,0,(int32_t)c->r[3],10); // 80150FC0
  if (!crb(c,0)) { goto L_80150FD4; } // 80150FC4
  c->r[3]=c->r[3]+0x00000030u; // 80150FC8
  W8(c->r[9]+0x00000000u,c->r[3]); // 80150FCC
  goto L_80150FF8; // 80150FD0
L_80150FD4:;
  cmps(c,0,(int32_t)c->r[3],10); // 80150FD4
  if (crb(c,0)) { goto L_80150FF0; } // 80150FD8
  cmps(c,0,(int32_t)c->r[3],16); // 80150FDC
  if (!crb(c,0)) { goto L_80150FF0; } // 80150FE0
  c->r[3]=c->r[3]+0x00000057u; // 80150FE4
  W8(c->r[9]+0x00000000u,c->r[3]); // 80150FE8
  goto L_80150FF8; // 80150FEC
L_80150FF0:;
  c->r[3]=0u+0x00000000u; // 80150FF0
  return; // 80150FF4
L_80150FF8:;
  cmps(c,0,(int32_t)c->r[8],0); // 80150FF8
  if (crb(c,2)) { goto L_80151004; } // 80150FFC
  c->r[4]=c->r[4]+0x00000001u; // 80151000
L_80151004:;
  c->r[10]=c->r[10]+0x00000001u; // 80151004
  c->r[7]=0u+0x000000F0u; // 80151008
  c->r[8]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[8]); // 8015100C
  if (crb(c,2)) { goto L_80151018; } // 80151010
  c->r[7]=0u+0x0000000Fu; // 80151014
L_80151018:;
  c->r[3]=0u-c->r[8]; // 80151018
  c->r[6]=R8(c->r[4]+0x00000000u); // 8015101C
  c->r[3]=c->r[3]|c->r[8]; // 80151020
  c->r[3]=sraw(c,c->r[3],31); // 80151024
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80151028
  c->r[3]=c->r[5]&~c->r[3]; // 8015102C
  c->r[6]=c->r[6]&c->r[7]; // 80151030
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80151034
  c->r[3]=sraw(c,c->r[6],(c->r[3])&63); cr0(c,c->r[3]); // 80151038
  if (crb(c,0)) { goto L_80151054; } // 8015103C
  cmps(c,0,(int32_t)c->r[3],10); // 80151040
  if (!crb(c,0)) { goto L_80151054; } // 80151044
  c->r[3]=c->r[3]+0x00000030u; // 80151048
  W8(c->r[9]+0x00000001u,c->r[3]); // 8015104C
  goto L_80151078; // 80151050
L_80151054:;
  cmps(c,0,(int32_t)c->r[3],10); // 80151054
  if (crb(c,0)) { goto L_80151070; } // 80151058
  cmps(c,0,(int32_t)c->r[3],16); // 8015105C
  if (!crb(c,0)) { goto L_80151070; } // 80151060
  c->r[3]=c->r[3]+0x00000057u; // 80151064
  W8(c->r[9]+0x00000001u,c->r[3]); // 80151068
  goto L_80151078; // 8015106C
L_80151070:;
  c->r[3]=0u+0x00000000u; // 80151070
  return; // 80151074
L_80151078:;
  cmps(c,0,(int32_t)c->r[8],0); // 80151078
  c->r[9]=c->r[9]+0x00000002u; // 8015107C
  if (crb(c,2)) { goto L_80151088; } // 80151080
  c->r[4]=c->r[4]+0x00000001u; // 80151084
L_80151088:;
  c->r[10]=c->r[10]+0x00000001u; // 80151088
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80150F88; } // 8015108C
L_80151090:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 80151090
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[3]); // 80151094
  if (!crb(c,2)) { IRQCHK(c); goto L_80150F80; } // 80151098
  c->r[3]=R8(c->r[4]+0x00000001u); // 8015109C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[3]); // 801510A0
  if (!crb(c,2)) { IRQCHK(c); goto L_80150F80; } // 801510A4
  c->r[0]=0u+0x00000000u; // 801510A8
  c->r[3]=0u+0x00000001u; // 801510AC
  W8(c->r[9]+0x00000000u,c->r[0]); // 801510B0
  return; // 801510B4
L_801510B8:;
  c->r[3]=0u+0x00000000u; // 801510B8
  return; // 801510BC
}

// fn_801510C0
void f_801510C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801510C0
  c->r[0]=c->lr; // 801510C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801510C8
  c->r[11]=c->r[1]+0x00000030u; // 801510CC
  c->lr=0x801510D4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801510D0
  c->r[27]=c->r[4]|c->r[4]; // 801510D4
  c->r[28]=c->r[5]|c->r[5]; // 801510D8
  c->r[30]=c->r[3]|c->r[3]; // 801510DC
  c->r[4]=0u+0x00000000u; // 801510E0
  c->r[5]=0u+0x00002000u; // 801510E4
  c->lr=0x801510ECu; f_8000443C(c); // 801510E8
  cmps(c,0,(int32_t)c->r[27],0); // 801510EC
  if (!crb(c,2)) { goto L_80151100; } // 801510F0
  c->r[0]=0u+0x00000000u; // 801510F4
  W32(c->r[30]+0x00000008u,c->r[0]); // 801510F8
  goto L_80151270; // 801510FC
L_80151100:;
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80151100
  c->r[31]=c->r[27]|c->r[27]; // 80151104
  c->r[29]=c->r[30]+0x00002000u; // 80151108
  c->r[26]=c->r[28]+c->r[0]; // 8015110C
  goto L_80151188; // 80151110
L_80151114:;
  cmps(c,0,(int32_t)c->r[27],2); // 80151114
  if (crb(c,0)) { goto L_80151130; } // 80151118
  c->r[3]=rotl(c->r[27],1)&0x00000001u; // 8015111C
  c->r[0]=rotl(c->r[27],0)&0x00000001u; // 80151120
  c->r[0]=c->r[0]^c->r[3]; // 80151124
  c->r[0]=c->r[0]-c->r[3]; cr0(c,c->r[0]); // 80151128
  if (crb(c,2)) { goto L_8015115C; } // 8015112C
L_80151130:;
  c->r[25]=R32(c->r[26]+0x00000000u); // 80151130
  c->r[3]=c->r[25]|c->r[25]; // 80151134
  c->lr=0x8015113Cu; f_80252384(c); // 80151138
  c->r[0]=c->r[3]+0x00000001u; // 8015113C
  c->r[4]=c->r[25]|c->r[25]; // 80151140
  c->r[29]=c->r[29]-c->r[0]; // 80151144
  c->r[3]=c->r[29]|c->r[29]; // 80151148
  c->lr=0x80151150u; f_8025C444(c); // 8015114C
  c->r[0]=c->r[29]-c->r[30]; // 80151150
  W32(c->r[26]+0x00000000u,c->r[0]); // 80151154
  goto L_80151188; // 80151158
L_8015115C:;
  c->r[25]=R32(c->r[26]+0x00000000u); // 8015115C
  c->r[3]=c->r[25]|c->r[25]; // 80151160
  c->lr=0x80151168u; f_8025E944(c); // 80151164
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80151168
  c->r[4]=c->r[25]|c->r[25]; // 8015116C
  c->r[0]=c->r[3]+0x00000001u; // 80151170
  c->r[29]=c->r[29]-c->r[0]; // 80151174
  c->r[3]=c->r[29]|c->r[29]; // 80151178
  c->lr=0x80151180u; f_80150F68(c); // 8015117C
  c->r[0]=c->r[29]-c->r[30]; // 80151180
  W32(c->r[26]+0x00000000u,c->r[0]); // 80151184
L_80151188:;
  c->r[27]=addc(c,c->r[27],0xFFFFFFFFu,0); cr0(c,c->r[27]); // 80151188
  c->r[26]=c->r[26]+0xFFFFFFFCu; // 8015118C
  if (!crb(c,0)) { IRQCHK(c); goto L_80151114; } // 80151190
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 80151194
  c->r[0]=c->r[29]-c->r[30]; // 80151198
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8015119C
  c->r[7]=0u+0x00000000u; // 801511A0
  c->r[6]=c->r[30]+c->r[4]; // 801511A4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801511A8
  c->r[6]=c->r[6]-c->r[0]; // 801511AC
  if (crb(c,2)) { goto L_80151260; } // 801511B0
  cmpu(c,0,c->r[3],0x00000008u); // 801511B4
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 801511B8
  if (!crb(c,1)) { goto L_8015122C; } // 801511BC
  c->r[0]=c->r[3]+0x00000007u; // 801511C0
  c->r[4]=c->r[28]|c->r[28]; // 801511C4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801511C8
  c->r[5]=c->r[6]|c->r[6]; // 801511CC
  c->ctr=c->r[0]; // 801511D0
  cmpu(c,0,c->r[3],0x00000000u); // 801511D4
  if (!crb(c,1)) { goto L_8015122C; } // 801511D8
L_801511DC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801511DC
  c->r[7]=c->r[7]+0x00000008u; // 801511E0
  W32(c->r[5]+0x00000000u,c->r[0]); // 801511E4
  c->r[0]=R32(c->r[4]+0x00000004u); // 801511E8
  W32(c->r[5]+0x00000004u,c->r[0]); // 801511EC
  c->r[0]=R32(c->r[4]+0x00000008u); // 801511F0
  W32(c->r[5]+0x00000008u,c->r[0]); // 801511F4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801511F8
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801511FC
  c->r[0]=R32(c->r[4]+0x00000010u); // 80151200
  W32(c->r[5]+0x00000010u,c->r[0]); // 80151204
  c->r[0]=R32(c->r[4]+0x00000014u); // 80151208
  W32(c->r[5]+0x00000014u,c->r[0]); // 8015120C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80151210
  W32(c->r[5]+0x00000018u,c->r[0]); // 80151214
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80151218
  c->r[4]=c->r[4]+0x00000020u; // 8015121C
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 80151220
  c->r[5]=c->r[5]+0x00000020u; // 80151224
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801511DC; } // 80151228
L_8015122C:;
  c->r[3]=c->r[31]+0x00000001u; // 8015122C
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80151230
  c->r[0]=c->r[3]-c->r[7]; // 80151234
  c->r[4]=c->r[28]+c->r[5]; // 80151238
  c->r[5]=c->r[6]+c->r[5]; // 8015123C
  c->ctr=c->r[0]; // 80151240
  cmpu(c,0,c->r[7],c->r[3]); // 80151244
  if (!crb(c,0)) { goto L_80151260; } // 80151248
L_8015124C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8015124C
  c->r[4]=c->r[4]+0x00000004u; // 80151250
  W32(c->r[5]+0x00000000u,c->r[0]); // 80151254
  c->r[5]=c->r[5]+0x00000004u; // 80151258
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8015124C; } // 8015125C
L_80151260:;
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 80151260
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 80151264
  c->r[0]=c->r[0]-c->r[30]; // 80151268
  W32(c->r[30]+0x00000008u,c->r[0]); // 8015126C
L_80151270:;
  c->r[11]=c->r[1]+0x00000030u; // 80151270
  c->r[3]=0u+0x00000001u; // 80151274
  c->lr=0x8015127Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80151278
  c->r[0]=R32(c->r[1]+0x00000034u); // 8015127C
  c->lr=c->r[0]; // 80151280
  c->r[1]=c->r[1]+0x00000030u; // 80151284
  return; // 80151288
}

// fn_8015128C
void f_8015128C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015128C
  c->r[0]=c->lr; // 80151290
  W32(c->r[1]+0x00000014u,c->r[0]); // 80151294
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80151298
  c->r[31]=c->r[3]|c->r[3]; // 8015129C
  c->lr=0x801512A4u; f_8014F954(c); // 801512A0
  /* sync */ // 801512A4
  /* isync */ // 801512A8
  c->ctr=c->r[31]; // 801512AC
  if (true) { dispatch(c,c->ctr); return; } // 801512B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801512B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801512B8
  c->lr=c->r[0]; // 801512BC
  c->r[1]=c->r[1]+0x00000010u; // 801512C0
  return; // 801512C4
}

// fn_801512C8
void f_801512C8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 801512C8
  W32(c->r[13]+0xFFFFAA08u,c->r[0]); // 801512CC
  return; // 801512D0
}

// __OSGetExecParams
void f_801512D4(Ctx* __restrict c) {
  trace_call(0x801512D4u);
  c->r[5]=0u+0x80000000u; // 801512D4
  c->r[4]=R32(c->r[5]+0x000030F0u); // 801512D8
  cmpu(c,0,c->r[4],c->r[5]); // 801512DC
  if (crb(c,0)) { goto L_801512EC; } // 801512E0
  c->r[5]=0u+0x0000001Cu; // 801512E4
  f_80004338(c); return; // 801512E8
L_801512EC:;
  c->r[0]=0u+0x00000000u; // 801512EC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801512F0
  return; // 801512F4
}

// fn_801512F8
void f_801512F8(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFFAA00u,c->r[3]); // 801512F8
  return; // 801512FC
}

// fn_80151300
void f_80151300(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80151300
  c->r[0]=c->lr; // 80151304
  W32(c->r[1]+0x00000044u,c->r[0]); // 80151308
  c->r[11]=c->r[1]+0x00000040u; // 8015130C
  c->lr=0x80151314u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80151310
  c->r[3]=0u+0x00000001u; // 80151314
  c->r[0]=0u+0x00000000u; // 80151318
  W32(c->r[1]+0x00000014u,c->r[3]); // 8015131C
  c->r[31]=0u+0xFFFFFFFFu; // 80151320
  c->r[3]=0u+0x00000020u; // 80151324
  c->r[4]=0u+0x00000020u; // 80151328
  W32(c->r[1]+0x00000010u,c->r[0]); // 8015132C
  c->lr=0x80151334u; f_8014F314(c); // 80151330
  c->r[28]=c->r[3]|c->r[3]; // 80151334
  c->r[3]=0u+0x00000800u; // 80151338
  c->r[4]=0u+0x00000020u; // 8015133C
  c->lr=0x80151344u; f_8014F314(c); // 80151340
  c->r[29]=c->r[3]|c->r[3]; // 80151344
  c->r[3]=0u+0x00004A00u; // 80151348
  c->r[4]=0u+0x00000040u; // 8015134C
  c->lr=0x80151354u; f_8014F314(c); // 80151350
  c->r[26]=c->r[3]|c->r[3]; // 80151354
  c->r[3]=0u+0x000000E0u; // 80151358
  c->r[4]=0u+0x00000020u; // 8015135C
  c->lr=0x80151364u; f_8014F314(c); // 80151360
  c->r[4]=0u+0x80000000u; // 80151364
  c->r[5]=R32(c->r[13]+0xFFFFA9F8u); // 80151368
  c->r[0]=R32(c->r[4]+0x00003194u); // 8015136C
  c->r[30]=c->r[3]|c->r[3]; // 80151370
  cmpu(c,0,c->r[5],c->r[0]); // 80151374
  if (!crb(c,2)) { goto L_8015141C; } // 80151378
  c->r[0]=R32(c->r[4]+0x00003198u); // 8015137C
  cmps(c,0,(int32_t)c->r[0],0); // 80151380
  if (crb(c,2)) { goto L_8015141C; } // 80151384
  c->lr=0x8015138Cu; f_80185008(c); // 80151388
  cmps(c,0,(int32_t)c->r[3],0); // 8015138C
  c->r[31]=c->r[3]|c->r[3]; // 80151390
  if (!crb(c,2)) { goto L_801513A8; } // 80151394
  c->r[4]=c->r[30]|c->r[30]; // 80151398
  c->r[3]=0u+0x00000000u; // 8015139C
  c->lr=0x801513A4u; f_8018545C(c); // 801513A0
  c->r[31]=c->r[3]|c->r[3]; // 801513A4
L_801513A8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801513A8
  if (!crb(c,2)) { goto L_801513C0; } // 801513AC
  c->r[4]=c->r[1]+0x00000010u; // 801513B0
  c->r[3]=0u+0x00000000u; // 801513B4
  c->lr=0x801513BCu; f_80185500(c); // 801513B8
  c->r[31]=c->r[3]|c->r[3]; // 801513BC
L_801513C0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801513C0
  if (!crb(c,2)) { goto L_801513D8; } // 801513C4
  c->r[3]=c->r[26]|c->r[26]; // 801513C8
  c->r[4]=c->r[1]+0x00000010u; // 801513CC
  c->lr=0x801513D4u; f_80185500(c); // 801513D0
  c->r[31]=c->r[3]|c->r[3]; // 801513D4
L_801513D8:;
  c->lr=0x801513DCu; f_8018505C(c); // 801513D8
  c->lr=0x801513E0u; f_8015A054(c); // 801513DC
  cmps(c,0,(int32_t)c->r[3],0); // 801513E0
  if (crb(c,2)) { goto L_8015141C; } // 801513E4
  c->r[3]=0u+0x00000000u; // 801513E8
  c->r[0]=0u+0xFFFFFFFFu; // 801513EC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801513F0
  c->r[3]=c->r[30]|c->r[30]; // 801513F4
  c->r[4]=c->r[1]+0x0000000Cu; // 801513F8
  c->r[5]=c->r[1]+0x00000008u; // 801513FC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80151400
  c->lr=0x80151408u; f_8015A5CC(c); // 80151404
  c->r[0]=R32(c->r[1]+0x00000008u); // 80151408
  cmps(c,0,(int32_t)c->r[0],0); // 8015140C
  if (!crb(c,2)) { goto L_8015141C; } // 80151410
  c->lr=0x80151418u; f_8015A2B0(c); // 80151414
  c->lr=0x8015141Cu; f_80156280(c); // 80151418
L_8015141C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8015141C
  if (!crb(c,2)) { goto L_80151440; } // 80151420
  c->r[3]=0u+0x80000000u; // 80151424
  c->r[27]=c->r[29]|c->r[29]; // 80151428
  c->r[0]=R32(c->r[3]+0x00003194u); // 8015142C
  W32(c->r[29]+0x00000004u,c->r[0]); // 80151430
  c->r[0]=R32(c->r[3]+0x00003198u); // 80151434
  W32(c->r[29]+0x00000000u,c->r[0]); // 80151438
  goto L_801516B4; // 8015143C
L_80151440:;
  c->r[0]=0u+0x00000000u; // 80151440
  c->r[3]=0u+0x80150000u; // 80151444
  W32(c->r[13]+0xFFFFAA00u,c->r[0]); // 80151448
  c->r[3]=c->r[3]+0x000012F8u; // 8015144C
  c->lr=0x80151454u; f_80172FF0(c); // 80151450
L_80151454:;
  c->r[0]=R32(c->r[13]+0xFFFFAA00u); // 80151454
  cmps(c,0,(int32_t)c->r[0],0); // 80151458
  if (crb(c,2)) { IRQCHK(c); goto L_80151454; } // 8015145C
  c->r[0]=R32(c->r[13]+0xFFFFAA00u); // 80151460
  cmpu(c,0,c->r[0],0x00000001u); // 80151464
  if (crb(c,2)) { goto L_80151488; } // 80151468
  c->r[3]=0u+0x802C0000u; // 8015146C
  c->r[4]=R32(c->r[13]+0xFFFFAA00u); // 80151470
  c->r[3]=c->r[3]+0x00007408u; // 80151474
  c->r[5]=0u+0x00000395u; // 80151478
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8015147C
  c->lr=0x80151484u; f_801506B4(c); // 80151480
  c->lr=0x80151488u; f_80156280(c); // 80151484
L_80151488:;
  c->r[0]=0u+0x00000000u; // 80151488
  c->r[6]=0u+0x80150000u; // 8015148C
  W32(c->r[13]+0xFFFFAA00u,c->r[0]); // 80151490
  c->r[3]=c->r[28]|c->r[28]; // 80151494
  c->r[6]=c->r[6]+0x000012F8u; // 80151498
  c->r[4]=0u+0x00000020u; // 8015149C
  c->r[5]=0u+0x00010000u; // 801514A0
  c->lr=0x801514A8u; f_80173154(c); // 801514A4
L_801514A8:;
  c->r[0]=R32(c->r[13]+0xFFFFAA00u); // 801514A8
  cmps(c,0,(int32_t)c->r[0],0); // 801514AC
  if (crb(c,2)) { IRQCHK(c); goto L_801514A8; } // 801514B0
  c->r[0]=R32(c->r[13]+0xFFFFAA00u); // 801514B4
  cmpu(c,0,c->r[0],0x00000001u); // 801514B8
  if (crb(c,2)) { goto L_801514DC; } // 801514BC
  c->r[3]=0u+0x802C0000u; // 801514C0
  c->r[4]=R32(c->r[13]+0xFFFFAA00u); // 801514C4
  c->r[3]=c->r[3]+0x00007408u; // 801514C8
  c->r[5]=0u+0x0000039Fu; // 801514CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801514D0
  c->lr=0x801514D8u; f_801506B4(c); // 801514D4
  c->lr=0x801514DCu; f_80156280(c); // 801514D8
L_801514DC:;
  c->r[0]=0u+0x00000000u; // 801514DC
  c->r[6]=0u+0x80150000u; // 801514E0
  W32(c->r[13]+0xFFFFAA00u,c->r[0]); // 801514E4
  c->r[3]=c->r[29]|c->r[29]; // 801514E8
  c->r[6]=c->r[6]+0x000012F8u; // 801514EC
  c->r[4]=0u+0x00000800u; // 801514F0
  c->r[5]=R32(c->r[28]+0x00000004u); // 801514F4
  c->lr=0x801514FCu; f_80173154(c); // 801514F8
L_801514FC:;
  c->r[0]=R32(c->r[13]+0xFFFFAA00u); // 801514FC
  cmps(c,0,(int32_t)c->r[0],0); // 80151500
  if (crb(c,2)) { IRQCHK(c); goto L_801514FC; } // 80151504
  c->r[0]=R32(c->r[13]+0xFFFFAA00u); // 80151508
  cmpu(c,0,c->r[0],0x00000001u); // 8015150C
  if (crb(c,2)) { goto L_80151530; } // 80151510
  c->r[3]=0u+0x802C0000u; // 80151514
  c->r[4]=R32(c->r[13]+0xFFFFAA00u); // 80151518
  c->r[3]=c->r[3]+0x00007408u; // 8015151C
  c->r[5]=0u+0x000003ABu; // 80151520
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80151524
  c->lr=0x8015152Cu; f_801506B4(c); // 80151528
  c->lr=0x80151530u; f_80156280(c); // 8015152C
L_80151530:;
  c->r[4]=R32(c->r[13]+0xFFFFA9F8u); // 80151530
  c->r[6]=c->r[29]|c->r[29]; // 80151534
  c->r[27]=0u+0x00000000u; // 80151538
  c->r[5]=0u+0x00000000u; // 8015153C
  goto L_8015155C; // 80151540
L_80151544:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 80151544
  cmpu(c,0,c->r[0],c->r[4]); // 80151548
  if (!crb(c,2)) { goto L_80151554; } // 8015154C
  c->r[27]=c->r[6]|c->r[6]; // 80151550
L_80151554:;
  c->r[6]=c->r[6]+0x00000008u; // 80151554
  c->r[5]=c->r[5]+0x00000001u; // 80151558
L_8015155C:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 8015155C
  c->r[3]=rotl(c->r[5],0)&0x000000FFu; // 80151560
  cmpu(c,0,c->r[3],c->r[0]); // 80151564
  if (crb(c,0)) { IRQCHK(c); goto L_80151544; } // 80151568
  cmps(c,0,(int32_t)c->r[27],0); // 8015156C
  if (!crb(c,2)) { goto L_801515AC; } // 80151570
  c->r[4]=R32(c->r[13]+0xFFFFA9F8u); // 80151574
  c->r[6]=c->r[29]+0x00000020u; // 80151578
  c->r[5]=0u+0x00000000u; // 8015157C
  goto L_8015159C; // 80151580
L_80151584:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 80151584
  cmpu(c,0,c->r[0],c->r[4]); // 80151588
  if (!crb(c,2)) { goto L_80151594; } // 8015158C
  c->r[27]=c->r[6]|c->r[6]; // 80151590
L_80151594:;
  c->r[6]=c->r[6]+0x00000008u; // 80151594
  c->r[5]=c->r[5]+0x00000001u; // 80151598
L_8015159C:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 8015159C
  c->r[3]=rotl(c->r[5],0)&0x000000FFu; // 801515A0
  cmpu(c,0,c->r[3],c->r[0]); // 801515A4
  if (crb(c,0)) { IRQCHK(c); goto L_80151584; } // 801515A8
L_801515AC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801515AC
  if (!crb(c,2)) { goto L_801515C8; } // 801515B0
  c->r[3]=0u+0x802C0000u; // 801515B4
  c->r[3]=c->r[3]+0x0000742Cu; // 801515B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801515BC
  c->lr=0x801515C4u; f_801506B4(c); // 801515C0
  c->lr=0x801515C8u; f_80156280(c); // 801515C4
L_801515C8:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 801515C8
  c->r[4]=0u+0x80000000u; // 801515CC
  c->r[0]=0u+0x00000000u; // 801515D0
  W32(c->r[4]+0x00003194u,c->r[3]); // 801515D4
  c->r[3]=R32(c->r[27]+0x00000000u); // 801515D8
  W32(c->r[4]+0x00003198u,c->r[3]); // 801515DC
  W32(c->r[13]+0xFFFFAA00u,c->r[0]); // 801515E0
  c->r[0]=R8(c->r[4]+0x00003187u); // 801515E4
  cmpu(c,0,c->r[0],0x00000080u); // 801515E8
  if (!crb(c,2)) { goto L_80151618; } // 801515EC
  c->r[9]=0u+0x80150000u; // 801515F0
  c->r[3]=R32(c->r[27]+0x00000000u); // 801515F4
  c->r[5]=R32(c->r[1]+0x00000010u); // 801515F8
  c->r[4]=c->r[30]|c->r[30]; // 801515FC
  c->r[6]=c->r[26]|c->r[26]; // 80151600
  c->r[9]=c->r[9]+0x000012F8u; // 80151604
  c->r[7]=0u+0x00000000u; // 80151608
  c->r[8]=0u+0x00000000u; // 8015160C
  c->lr=0x80151614u; f_801728E8(c); // 80151610
  goto L_80151638; // 80151614
L_80151618:;
  c->r[8]=0u+0x80150000u; // 80151618
  c->r[3]=R32(c->r[27]+0x00000000u); // 8015161C
  c->r[7]=c->r[26]|c->r[26]; // 80151620
  c->r[4]=0u+0x00000000u; // 80151624
  c->r[8]=c->r[8]+0x000012F8u; // 80151628
  c->r[5]=0u+0x00000000u; // 8015162C
  c->r[6]=0u+0x00000000u; // 80151630
  c->lr=0x80151638u; f_80172680(c); // 80151634
L_80151638:;
  c->r[0]=R32(c->r[13]+0xFFFFAA00u); // 80151638
  cmps(c,0,(int32_t)c->r[0],0); // 8015163C
  if (crb(c,2)) { IRQCHK(c); goto L_80151638; } // 80151640
  c->r[0]=R32(c->r[13]+0xFFFFAA00u); // 80151644
  cmpu(c,0,c->r[0],0x00000001u); // 80151648
  if (crb(c,2)) { goto L_8015166C; } // 8015164C
  c->r[3]=0u+0x802C0000u; // 80151650
  c->r[4]=R32(c->r[13]+0xFFFFAA00u); // 80151654
  c->r[3]=c->r[3]+0x00007408u; // 80151658
  c->r[5]=0u+0x000003E8u; // 8015165C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80151660
  c->lr=0x80151668u; f_801506B4(c); // 80151664
  c->lr=0x8015166Cu; f_80156280(c); // 80151668
L_8015166C:;
  c->r[0]=0u+0x00000000u; // 8015166C
  c->r[3]=0u+0x80150000u; // 80151670
  W32(c->r[13]+0xFFFFAA00u,c->r[0]); // 80151674
  c->r[3]=c->r[3]+0x000012F8u; // 80151678
  c->lr=0x80151680u; f_80172FF0(c); // 8015167C
L_80151680:;
  c->r[0]=R32(c->r[13]+0xFFFFAA00u); // 80151680
  cmps(c,0,(int32_t)c->r[0],0); // 80151684
  if (crb(c,2)) { IRQCHK(c); goto L_80151680; } // 80151688
  c->r[0]=R32(c->r[13]+0xFFFFAA00u); // 8015168C
  cmpu(c,0,c->r[0],0x00000001u); // 80151690
  if (crb(c,2)) { goto L_801516B4; } // 80151694
  c->r[3]=0u+0x802C0000u; // 80151698
  c->r[4]=R32(c->r[13]+0xFFFFAA00u); // 8015169C
  c->r[3]=c->r[3]+0x00007408u; // 801516A0
  c->r[5]=0u+0x000003F2u; // 801516A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801516A8
  c->lr=0x801516B0u; f_801506B4(c); // 801516AC
  c->lr=0x801516B4u; f_80156280(c); // 801516B0
L_801516B4:;
  c->r[24]=R32(c->r[26]+0x00000184u); // 801516B4
  c->r[23]=R32(c->r[26]+0x00000188u); // 801516B8
  c->lr=0x801516C0u; f_80185008(c); // 801516BC
  cmps(c,0,(int32_t)c->r[3],0); // 801516C0
  c->r[31]=c->r[3]|c->r[3]; // 801516C4
  if (crb(c,2)) { goto L_801516E8; } // 801516C8
  c->r[3]=0u+0x802C0000u; // 801516CC
  c->r[4]=c->r[31]|c->r[31]; // 801516D0
  c->r[3]=c->r[3]+0x00007408u; // 801516D4
  c->r[5]=0u+0x000003FDu; // 801516D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801516DC
  c->lr=0x801516E4u; f_801506B4(c); // 801516E0
  c->lr=0x801516E8u; f_80156324(c); // 801516E4
L_801516E8:;
  c->r[4]=c->r[23]|c->r[23]; // 801516E8
  c->r[3]=c->r[24]|c->r[24]; // 801516EC
  c->r[6]=c->r[1]+0x00000014u; // 801516F0
  c->r[5]=0u+0x00000000u; // 801516F4
  c->lr=0x801516FCu; f_80185344(c); // 801516F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801516FC
  c->r[31]=c->r[3]|c->r[3]; // 80151700
  cmpu(c,0,c->r[0],0x00000001u); // 80151704
  if (!crb(c,2)) { goto L_80151714; } // 80151708
  cmps(c,0,(int32_t)c->r[3],0); // 8015170C
  if (crb(c,2)) { goto L_80151730; } // 80151710
L_80151714:;
  c->r[3]=0u+0x802C0000u; // 80151714
  c->r[4]=c->r[31]|c->r[31]; // 80151718
  c->r[3]=c->r[3]+0x00007408u; // 8015171C
  c->r[5]=0u+0x00000406u; // 80151720
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80151724
  c->lr=0x8015172Cu; f_801506B4(c); // 80151728
  c->lr=0x80151730u; f_80156324(c); // 8015172C
L_80151730:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80151730
  c->r[4]=0u+0x00000020u; // 80151734
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 80151738
  c->r[0]=c->r[3]+0x0000001Fu; // 8015173C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80151740
  c->lr=0x80151748u; f_8014F314(c); // 80151744
  c->r[25]=c->r[3]|c->r[3]; // 80151748
  c->r[4]=c->r[23]|c->r[23]; // 8015174C
  c->r[3]=c->r[24]|c->r[24]; // 80151750
  c->r[6]=c->r[1]+0x00000014u; // 80151754
  c->r[5]=c->r[25]|c->r[25]; // 80151758
  c->lr=0x80151760u; f_80185344(c); // 8015175C
  cmps(c,0,(int32_t)c->r[3],0); // 80151760
  c->r[31]=c->r[3]|c->r[3]; // 80151764
  if (crb(c,2)) { goto L_80151788; } // 80151768
  c->r[3]=0u+0x802C0000u; // 8015176C
  c->r[4]=c->r[31]|c->r[31]; // 80151770
  c->r[3]=c->r[3]+0x00007408u; // 80151774
  c->r[5]=0u+0x0000040Fu; // 80151778
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8015177C
  c->lr=0x80151784u; f_801506B4(c); // 80151780
  c->lr=0x80151788u; f_80156324(c); // 80151784
L_80151788:;
  c->lr=0x8015178Cu; f_80172244(c); // 80151788
  c->r[5]=0u+0x80000000u; // 8015178C
  c->r[4]=0u+0x00000100u; // 80151790
  c->r[29]=R32(c->r[5]+0x0000311Cu); // 80151794
  c->r[3]=c->r[5]+0x00003100u; // 80151798
  c->r[28]=R32(c->r[5]+0x00003120u); // 8015179C
  c->lr=0x801517A4u; f_8014F86C(c); // 801517A0
  c->r[4]=c->r[23]|c->r[23]; // 801517A4
  c->r[3]=c->r[24]|c->r[24]; // 801517A8
  c->r[5]=c->r[25]|c->r[25]; // 801517AC
  c->lr=0x801517B4u; f_801850A4(c); // 801517B0
  cmps(c,0,(int32_t)c->r[3],0); // 801517B4
  c->r[31]=c->r[3]|c->r[3]; // 801517B8
  if (crb(c,2)) { goto L_801517DC; } // 801517BC
  c->r[3]=0u+0x802C0000u; // 801517C0
  c->r[4]=c->r[31]|c->r[31]; // 801517C4
  c->r[3]=c->r[3]+0x00007408u; // 801517C8
  c->r[5]=0u+0x0000041Fu; // 801517CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801517D0
  c->lr=0x801517D8u; f_801506B4(c); // 801517D4
  c->lr=0x801517DCu; f_80156324(c); // 801517D8
L_801517DC:;
  c->lr=0x801517E0u; f_8018505C(c); // 801517DC
  c->r[31]=0u+0x80000000u; // 801517E0
  c->r[4]=0u+0x00000100u; // 801517E4
  c->r[3]=c->r[31]+0x00003100u; // 801517E8
  c->lr=0x801517F0u; f_8014F810(c); // 801517EC
  c->r[3]=R32(c->r[31]+0x0000311Cu); // 801517F0
  cmpu(c,0,c->r[29],c->r[3]); // 801517F4
  if (!crb(c,0)) { goto L_8015184C; } // 801517F8
  c->r[0]=R32(c->r[31]+0x00003120u); // 801517FC
  c->r[0]=c->r[3]-c->r[0]; // 80151800
  c->r[0]=c->r[29]-c->r[0]; // 80151804
  W32(c->r[31]+0x00003120u,c->r[0]); // 80151808
  c->r[3]=R32(c->r[31]+0x00003128u); // 8015180C
  c->r[0]=R32(c->r[31]+0x0000311Cu); // 80151810
  c->r[0]=c->r[0]-c->r[3]; // 80151814
  c->r[0]=c->r[29]-c->r[0]; // 80151818
  W32(c->r[31]+0x00003128u,c->r[0]); // 8015181C
  c->r[3]=R32(c->r[31]+0x00003130u); // 80151820
  c->r[0]=R32(c->r[31]+0x0000311Cu); // 80151824
  c->r[0]=c->r[0]-c->r[3]; // 80151828
  c->r[0]=c->r[29]-c->r[0]; // 8015182C
  W32(c->r[31]+0x00003130u,c->r[0]); // 80151830
  c->r[3]=R32(c->r[31]+0x00003134u); // 80151834
  c->r[0]=R32(c->r[31]+0x0000311Cu); // 80151838
  c->r[0]=c->r[0]-c->r[3]; // 8015183C
  c->r[0]=c->r[29]-c->r[0]; // 80151840
  W32(c->r[31]+0x00003134u,c->r[0]); // 80151844
  W32(c->r[31]+0x0000311Cu,c->r[29]); // 80151848
L_8015184C:;
  c->r[3]=0u+0x80000000u; // 8015184C
  c->r[0]=R32(c->r[3]+0x00003120u); // 80151850
  cmpu(c,0,c->r[28],c->r[0]); // 80151854
  if (!crb(c,0)) { goto L_80151860; } // 80151858
  c->lr=0x80151860u; f_801555E4(c); // 8015185C
L_80151860:;
  c->lr=0x80151864u; f_80158D88(c); // 80151860
  c->lr=0x80151868u; f_80185954(c); // 80151864
  c->lr=0x8015186Cu; f_80185EB8(c); // 80151868
  c->lr=0x80151870u; f_80172294(c); // 8015186C
  c->r[0]=0u+0x00000000u; // 80151870
  c->r[3]=0u+0x80440000u; // 80151874
  c->r[4]=0u+0x80150000u; // 80151878
  W32(c->r[13]+0xFFFFAA00u,c->r[0]); // 8015187C
  c->r[3]=c->r[3]+0xFFFFE240u; // 80151880
  c->r[4]=c->r[4]+0x000012F8u; // 80151884
  c->lr=0x8015188Cu; f_801724F8(c); // 80151888
L_8015188C:;
  c->r[0]=R32(c->r[13]+0xFFFFAA00u); // 8015188C
  cmps(c,0,(int32_t)c->r[0],0); // 80151890
  if (crb(c,2)) { IRQCHK(c); goto L_8015188C; } // 80151894
  c->r[0]=R32(c->r[13]+0xFFFFAA00u); // 80151898
  cmpu(c,0,c->r[0],0x00000001u); // 8015189C
  if (crb(c,2)) { goto L_801518C0; } // 801518A0
  c->r[3]=0u+0x802C0000u; // 801518A4
  c->r[4]=R32(c->r[13]+0xFFFFAA00u); // 801518A8
  c->r[3]=c->r[3]+0x00007408u; // 801518AC
  c->r[5]=0u+0x0000044Bu; // 801518B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801518B4
  c->lr=0x801518BCu; f_801506B4(c); // 801518B8
  c->lr=0x801518C0u; f_80156280(c); // 801518BC
L_801518C0:;
  c->r[0]=0u+0x00000000u; // 801518C0
  c->r[3]=0u+0x80000000u; // 801518C4
  W32(c->r[13]+0xFFFFAA00u,c->r[0]); // 801518C8
  c->r[0]=R8(c->r[3]+0x00003187u); // 801518CC
  cmpu(c,0,c->r[0],0x00000080u); // 801518D0
  if (!crb(c,2)) { goto L_80151900; } // 801518D4
  c->r[9]=0u+0x80150000u; // 801518D8
  c->r[3]=R32(c->r[27]+0x00000000u); // 801518DC
  c->r[5]=R32(c->r[1]+0x00000010u); // 801518E0
  c->r[4]=c->r[30]|c->r[30]; // 801518E4
  c->r[6]=c->r[26]|c->r[26]; // 801518E8
  c->r[9]=c->r[9]+0x000012F8u; // 801518EC
  c->r[7]=0u+0x00000000u; // 801518F0
  c->r[8]=0u+0x00000000u; // 801518F4
  c->lr=0x801518FCu; f_801728E8(c); // 801518F8
  goto L_80151920; // 801518FC
L_80151900:;
  c->r[8]=0u+0x80150000u; // 80151900
  c->r[3]=R32(c->r[27]+0x00000000u); // 80151904
  c->r[7]=c->r[26]|c->r[26]; // 80151908
  c->r[4]=0u+0x00000000u; // 8015190C
  c->r[8]=c->r[8]+0x000012F8u; // 80151910
  c->r[5]=0u+0x00000000u; // 80151914
  c->r[6]=0u+0x00000000u; // 80151918
  c->lr=0x80151920u; f_80172680(c); // 8015191C
L_80151920:;
  c->r[0]=R32(c->r[13]+0xFFFFAA00u); // 80151920
  cmps(c,0,(int32_t)c->r[0],0); // 80151924
  if (crb(c,2)) { IRQCHK(c); goto L_80151920; } // 80151928
  c->r[0]=R32(c->r[13]+0xFFFFAA00u); // 8015192C
  cmpu(c,0,c->r[0],0x00000001u); // 80151930
  if (crb(c,2)) { goto L_80151954; } // 80151934
  c->r[3]=0u+0x802C0000u; // 80151938
  c->r[4]=R32(c->r[13]+0xFFFFAA00u); // 8015193C
  c->r[3]=c->r[3]+0x00007408u; // 80151940
  c->r[5]=0u+0x00000462u; // 80151944
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80151948
  c->lr=0x80151950u; f_801506B4(c); // 8015194C
  c->lr=0x80151954u; f_80156280(c); // 80151950
L_80151954:;
  c->r[11]=c->r[1]+0x00000040u; // 80151954
  c->lr=0x8015195Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80151958
  c->r[0]=R32(c->r[1]+0x00000044u); // 8015195C
  c->lr=c->r[0]; // 80151960
  c->r[1]=c->r[1]+0x00000040u; // 80151964
  return; // 80151968
}

// __OSLaunchMenu
void f_8015196C(Ctx* __restrict c) {
  trace_call(0x8015196Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015196C
  c->r[0]=c->lr; // 80151970
  c->r[3]=0u+0x81280000u; // 80151974
  W32(c->r[1]+0x00000024u,c->r[0]); // 80151978
  c->r[0]=0u+0x00000001u; // 8015197C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80151980
  W32(c->r[1]+0x00000008u,c->r[0]); // 80151984
  c->lr=0x8015198Cu; f_8014F30C(c); // 80151988
  c->r[3]=0u+0x812F0000u; // 8015198C
  c->lr=0x80151994u; f_8014F2F4(c); // 80151990
  c->lr=0x80151998u; f_80185008(c); // 80151994
  cmps(c,0,(int32_t)c->r[3],0); // 80151998
  if (!crb(c,2)) { goto L_80151A1C; } // 8015199C
  c->r[6]=c->r[1]+0x00000008u; // 801519A0
  c->r[4]=0u+0x00000002u; // 801519A4
  c->r[3]=0u+0x00000001u; // 801519A8
  c->r[5]=0u+0x00000000u; // 801519AC
  c->lr=0x801519B4u; f_80185344(c); // 801519B0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801519B4
  cmpu(c,0,c->r[0],0x00000001u); // 801519B8
  if (!crb(c,2)) { goto L_80151A1C; } // 801519BC
  cmps(c,0,(int32_t)c->r[3],0); // 801519C0
  if (crb(c,2)) { goto L_801519CC; } // 801519C4
  goto L_80151A1C; // 801519C8
L_801519CC:;
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 801519CC
  c->r[4]=0u+0x00000020u; // 801519D0
  c->r[0]=c->r[3]+0x0000001Fu; // 801519D4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801519D8
  c->lr=0x801519E0u; f_8014F314(c); // 801519DC
  c->r[31]=c->r[3]|c->r[3]; // 801519E0
  c->r[6]=c->r[1]+0x00000008u; // 801519E4
  c->r[5]=c->r[31]|c->r[31]; // 801519E8
  c->r[4]=0u+0x00000002u; // 801519EC
  c->r[3]=0u+0x00000001u; // 801519F0
  c->lr=0x801519F8u; f_80185344(c); // 801519F4
  cmps(c,0,(int32_t)c->r[3],0); // 801519F8
  if (!crb(c,2)) { goto L_80151A1C; } // 801519FC
  c->r[5]=c->r[31]|c->r[31]; // 80151A00
  c->r[4]=0u+0x00000002u; // 80151A04
  c->r[3]=0u+0x00000001u; // 80151A08
  c->lr=0x80151A10u; f_801850A4(c); // 80151A0C
  cmps(c,0,(int32_t)c->r[3],0); // 80151A10
  if (!crb(c,2)) { goto L_80151A1C; } // 80151A14
L_80151A18:;
  IRQCHK(c); goto L_80151A18; // 80151A18
L_80151A1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80151A1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80151A20
  c->lr=c->r[0]; // 80151A24
  c->r[1]=c->r[1]+0x00000020u; // 80151A28
  return; // 80151A2C
}

// fn_80151A30
void f_80151A30(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80151A30
  c->r[12]=c->r[1]|c->r[1]; // 80151A34
  c->r[11]=addc(c,~c->r[11],0xFFFFFDE0u,1); // 80151A38
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80151A3C
  c->r[0]=c->lr; // 80151A40
  c->r[11]=c->r[12]|c->r[12]; // 80151A44
  W32(c->r[12]+0x00000004u,c->r[0]); // 80151A48
  c->lr=0x80151A50u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80151A4C
  c->r[27]=c->r[3]|c->r[3]; // 80151A50
  c->r[24]=c->r[4]|c->r[4]; // 80151A54
  c->r[28]=c->r[5]|c->r[5]; // 80151A58
  c->r[29]=c->r[6]|c->r[6]; // 80151A5C
  c->r[31]=c->r[7]|c->r[7]; // 80151A60
  c->r[26]=c->r[8]|c->r[8]; // 80151A64
  c->r[25]=c->r[9]|c->r[9]; // 80151A68
  c->lr=0x80151A70u; f_80154410(c); // 80151A6C
  c->r[0]=R32(c->r[13]+0xFFFFAA04u); // 80151A70
  cmps(c,0,(int32_t)c->r[0],0); // 80151A74
  if (crb(c,2)) { goto L_80151A88; } // 80151A78
  c->r[3]=0u+0x80000000u; // 80151A7C
  c->r[0]=R32(c->r[3]+0x00003194u); // 80151A80
  W32(c->r[13]+0xFFFFA9F8u,c->r[0]); // 80151A84
L_80151A88:;
  c->r[3]=0u+0x0000001Cu; // 80151A88
  c->r[4]=0u+0x00000001u; // 80151A8C
  c->lr=0x80151A94u; f_8014F314(c); // 80151A90
  c->r[0]=0u+0x00000001u; // 80151A94
  cmps(c,0,(int32_t)c->r[31],0); // 80151A98
  W32(c->r[3]+0x00000000u,c->r[0]); // 80151A9C
  c->r[30]=c->r[3]|c->r[3]; // 80151AA0
  W32(c->r[3]+0x00000004u,c->r[24]); // 80151AA4
  W32(c->r[3]+0x0000000Cu,c->r[28]); // 80151AA8
  W32(c->r[3]+0x00000010u,c->r[29]); // 80151AAC
  W32(c->r[3]+0x00000014u,c->r[31]); // 80151AB0
  if (!crb(c,2)) { goto L_80151B04; } // 80151AB4
  c->r[3]=0u+0x00002000u; // 80151AB8
  c->r[4]=0u+0x00000001u; // 80151ABC
  c->lr=0x80151AC4u; f_8014F314(c); // 80151AC0
  W32(c->r[30]+0x00000018u,c->r[3]); // 80151AC4
  c->r[0]=R32(c->r[13]+0xFFFFA9F8u); // 80151AC8
  cmpu(c,0,c->r[0],0x00000002u); // 80151ACC
  if (!crb(c,2)) { goto L_80151AF4; } // 80151AD0
  c->r[0]=R32(c->r[13]+0xFFFFAA04u); // 80151AD4
  cmps(c,0,(int32_t)c->r[0],0); // 80151AD8
  if (!crb(c,2)) { goto L_80151AF4; } // 80151ADC
  c->r[3]=R32(c->r[30]+0x00000018u); // 80151AE0
  c->r[4]=c->r[26]|c->r[26]; // 80151AE4
  c->r[5]=c->r[25]|c->r[25]; // 80151AE8
  c->lr=0x80151AF0u; f_801510C0(c); // 80151AEC
  goto L_80151B04; // 80151AF0
L_80151AF4:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 80151AF4
  c->r[4]=c->r[26]|c->r[26]; // 80151AF8
  c->r[5]=c->r[25]|c->r[25]; // 80151AFC
  c->lr=0x80151B04u; f_80150DE8(c); // 80151B00
L_80151B04:;
  c->lr=0x80151B08u; f_8016C678(c); // 80151B04
  c->r[3]=0u+0x00000001u; // 80151B08
  c->lr=0x80151B10u; f_80170848(c); // 80151B0C
  c->lr=0x80151B14u; f_80170858(c); // 80151B10
  c->r[0]=0u+0x00000000u; // 80151B14
  c->r[3]=0u+0x80150000u; // 80151B18
  W32(c->r[13]+0xFFFFAA08u,c->r[0]); // 80151B1C
  c->r[3]=c->r[3]+0x000012C8u; // 80151B20
  c->lr=0x80151B28u; f_80170E0C(c); // 80151B24
  c->r[3]=0u+0xFFFFFFF0u; // 80151B28
  c->lr=0x80151B30u; f_801547A0(c); // 80151B2C
  c->r[3]=0u+0x00000010u; // 80151B30
  c->lr=0x80151B38u; f_80154820(c); // 80151B34
  c->lr=0x80151B3Cu; f_80154424(c); // 80151B38
L_80151B3C:;
  c->r[0]=R32(c->r[13]+0xFFFFAA08u); // 80151B3C
  cmps(c,0,(int32_t)c->r[0],1); // 80151B40
  if (!crb(c,2)) { IRQCHK(c); goto L_80151B3C; } // 80151B44
  c->lr=0x80151B4Cu; f_80151300(c); // 80151B48
  c->r[0]=c->r[24]+0x60000000u; // 80151B4C
  cmpu(c,0,c->r[0],0x00000000u); // 80151B50
  if (!crb(c,2)) { goto L_80151BB0; } // 80151B54
  c->r[0]=R32(c->r[13]+0xFFFFAA04u); // 80151B58
  cmps(c,0,(int32_t)c->r[0],0); // 80151B5C
  if (!crb(c,2)) { goto L_80151BB0; } // 80151B60
  c->lr=0x80151B68u; f_80185008(c); // 80151B64
  cmps(c,0,(int32_t)c->r[3],0); // 80151B68
  if (!crb(c,2)) { goto L_8015225C; } // 80151B6C
  c->r[3]=c->r[1]+0x00000060u; // 80151B70
  c->lr=0x80151B78u; f_8018579C(c); // 80151B74
  cmps(c,0,(int32_t)c->r[3],0); // 80151B78
  if (!crb(c,2)) { goto L_8015225C; } // 80151B7C
  c->lr=0x80151B84u; f_8018505C(c); // 80151B80
  cmps(c,0,(int32_t)c->r[3],0); // 80151B84
  if (!crb(c,2)) { goto L_8015225C; } // 80151B88
  c->r[3]=R32(c->r[30]+0x00000018u); // 80151B8C
  c->r[4]=0u+0x00000011u; // 80151B90
  c->r[0]=R32(c->r[25]+0x00000004u); // 80151B94
  c->r[5]=c->r[13]+0xFFFF8FC0u; // 80151B98
  c->r[7]=R32(c->r[1]+0x00000060u); // 80151B9C
  c->r[8]=R32(c->r[1]+0x00000064u); // 80151BA0
  c->r[3]=c->r[3]+c->r[0]; // 80151BA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80151BA8
  c->lr=0x80151BB0u; f_8025AAE8(c); // 80151BAC
L_80151BB0:;
  c->r[3]=0u+0x00000020u; // 80151BB0
  c->r[4]=0u+0x00000020u; // 80151BB4
  c->lr=0x80151BBCu; f_8014F314(c); // 80151BB8
  c->r[6]=R32(c->r[13]+0xFFFFA9FCu); // 80151BBC
  c->r[31]=c->r[3]|c->r[3]; // 80151BC0
  cmps(c,0,(int32_t)c->r[6],0); // 80151BC4
  if (crb(c,2)) { goto L_80151BD0; } // 80151BC8
  goto L_80151C8C; // 80151BCC
L_80151BD0:;
  c->r[26]=0u+0x80000000u; // 80151BD0
  c->r[0]=R32(c->r[26]+0x000030F4u); // 80151BD4
  cmps(c,0,(int32_t)c->r[0],0); // 80151BD8
  if (crb(c,2)) { goto L_80151C84; } // 80151BDC
  c->r[3]=0u+0x00000040u; // 80151BE0
  c->r[4]=0u+0x00000020u; // 80151BE4
  c->lr=0x80151BECu; f_8014F314(c); // 80151BE8
  c->r[6]=R8(c->r[2]+0xFFFFA930u); // 80151BEC
  c->r[25]=c->r[3]|c->r[3]; // 80151BF0
  c->r[10]=R8(c->r[2]+0xFFFFA931u); // 80151BF4
  c->r[4]=c->r[25]|c->r[25]; // 80151BF8
  c->r[9]=R8(c->r[2]+0xFFFFA932u); // 80151BFC
  c->r[3]=c->r[1]+0x00000140u; // 80151C00
  c->r[0]=R8(c->r[2]+0xFFFFA933u); // 80151C04
  c->r[5]=0u+0x00000040u; // 80151C08
  c->r[8]=R32(c->r[26]+0x000030F4u); // 80151C0C
  c->r[7]=0u+0x00000000u; // 80151C10
  W8(c->r[1]+0x00000048u,c->r[6]); // 80151C14
  c->r[6]=sraw(c,c->r[8],2); // 80151C18
  c->r[8]=0u+0x00000000u; // 80151C1C
  W8(c->r[1]+0x00000049u,c->r[10]); // 80151C20
  W8(c->r[1]+0x0000004Au,c->r[9]); // 80151C24
  W8(c->r[1]+0x0000004Bu,c->r[0]); // 80151C28
  c->lr=0x80151C30u; f_80170528(c); // 80151C2C
  goto L_80151C58; // 80151C30
L_80151C34:;
  c->r[3]=c->r[1]+0x00000140u; // 80151C34
  c->lr=0x80151C3Cu; f_801706E4(c); // 80151C38
  cmps(c,0,(int32_t)c->r[3],2); // 80151C3C
  if (crb(c,1)) { goto L_80151C54; } // 80151C40
  c->r[3]=c->r[1]+0x00000140u; // 80151C44
  c->lr=0x80151C4Cu; f_801706E4(c); // 80151C48
  cmps(c,0,(int32_t)c->r[3],0); // 80151C4C
  if (!crb(c,0)) { goto L_80151C58; } // 80151C50
L_80151C54:;
  c->lr=0x80151C58u; f_80156280(c); // 80151C54
L_80151C58:;
  c->r[3]=c->r[1]+0x00000140u; // 80151C58
  c->lr=0x80151C60u; f_801706E4(c); // 80151C5C
  cmps(c,0,(int32_t)c->r[3],0); // 80151C60
  if (!crb(c,2)) { IRQCHK(c); goto L_80151C34; } // 80151C64
  c->r[3]=0u+0x80000000u; // 80151C68
  c->r[4]=R32(c->r[25]+0x00000038u); // 80151C6C
  c->r[0]=R32(c->r[3]+0x000030F4u); // 80151C70
  c->r[0]=c->r[0]+c->r[4]; // 80151C74
  c->r[6]=sraw(c,c->r[0],2); // 80151C78
  W32(c->r[13]+0xFFFFA9FCu,c->r[6]); // 80151C7C
  goto L_80151C8C; // 80151C80
L_80151C84:;
  c->r[6]=0u+0x00000910u; // 80151C84
  W32(c->r[13]+0xFFFFA9FCu,c->r[6]); // 80151C88
L_80151C8C:;
  c->r[7]=R8(c->r[2]+0xFFFFA930u); // 80151C8C
  c->r[4]=c->r[31]|c->r[31]; // 80151C90
  c->r[10]=R8(c->r[2]+0xFFFFA931u); // 80151C94
  c->r[3]=c->r[1]+0x00000170u; // 80151C98
  c->r[9]=R8(c->r[2]+0xFFFFA932u); // 80151C9C
  c->r[5]=0u+0x00000020u; // 80151CA0
  c->r[0]=R8(c->r[2]+0xFFFFA933u); // 80151CA4
  c->r[8]=0u+0x00000000u; // 80151CA8
  W8(c->r[1]+0x0000004Cu,c->r[7]); // 80151CAC
  c->r[7]=0u+0x00000000u; // 80151CB0
  W8(c->r[1]+0x0000004Du,c->r[10]); // 80151CB4
  W8(c->r[1]+0x0000004Eu,c->r[9]); // 80151CB8
  W8(c->r[1]+0x0000004Fu,c->r[0]); // 80151CBC
  c->lr=0x80151CC4u; f_80170528(c); // 80151CC0
  goto L_80151CEC; // 80151CC4
L_80151CC8:;
  c->r[3]=c->r[1]+0x00000170u; // 80151CC8
  c->lr=0x80151CD0u; f_801706E4(c); // 80151CCC
  cmps(c,0,(int32_t)c->r[3],2); // 80151CD0
  if (crb(c,1)) { goto L_80151CE8; } // 80151CD4
  c->r[3]=c->r[1]+0x00000170u; // 80151CD8
  c->lr=0x80151CE0u; f_801706E4(c); // 80151CDC
  cmps(c,0,(int32_t)c->r[3],0); // 80151CE0
  if (!crb(c,0)) { goto L_80151CEC; } // 80151CE4
L_80151CE8:;
  c->lr=0x80151CECu; f_80156280(c); // 80151CE8
L_80151CEC:;
  c->r[3]=c->r[1]+0x00000170u; // 80151CEC
  c->lr=0x80151CF4u; f_801706E4(c); // 80151CF0
  cmps(c,0,(int32_t)c->r[3],0); // 80151CF4
  if (!crb(c,2)) { IRQCHK(c); goto L_80151CC8; } // 80151CF8
  c->r[6]=R32(c->r[13]+0xFFFFA9FCu); // 80151CFC
  cmps(c,0,(int32_t)c->r[6],0); // 80151D00
  if (crb(c,2)) { goto L_80151D0C; } // 80151D04
  goto L_80151DC8; // 80151D08
L_80151D0C:;
  c->r[26]=0u+0x80000000u; // 80151D0C
  c->r[0]=R32(c->r[26]+0x000030F4u); // 80151D10
  cmps(c,0,(int32_t)c->r[0],0); // 80151D14
  if (crb(c,2)) { goto L_80151DC0; } // 80151D18
  c->r[3]=0u+0x00000040u; // 80151D1C
  c->r[4]=0u+0x00000020u; // 80151D20
  c->lr=0x80151D28u; f_8014F314(c); // 80151D24
  c->r[6]=R8(c->r[2]+0xFFFFA930u); // 80151D28
  c->r[25]=c->r[3]|c->r[3]; // 80151D2C
  c->r[10]=R8(c->r[2]+0xFFFFA931u); // 80151D30
  c->r[4]=c->r[25]|c->r[25]; // 80151D34
  c->r[9]=R8(c->r[2]+0xFFFFA932u); // 80151D38
  c->r[3]=c->r[1]+0x000001A0u; // 80151D3C
  c->r[0]=R8(c->r[2]+0xFFFFA933u); // 80151D40
  c->r[5]=0u+0x00000040u; // 80151D44
  c->r[8]=R32(c->r[26]+0x000030F4u); // 80151D48
  c->r[7]=0u+0x00000000u; // 80151D4C
  W8(c->r[1]+0x00000050u,c->r[6]); // 80151D50
  c->r[6]=sraw(c,c->r[8],2); // 80151D54
  c->r[8]=0u+0x00000000u; // 80151D58
  W8(c->r[1]+0x00000051u,c->r[10]); // 80151D5C
  W8(c->r[1]+0x00000052u,c->r[9]); // 80151D60
  W8(c->r[1]+0x00000053u,c->r[0]); // 80151D64
  c->lr=0x80151D6Cu; f_80170528(c); // 80151D68
  goto L_80151D94; // 80151D6C
L_80151D70:;
  c->r[3]=c->r[1]+0x000001A0u; // 80151D70
  c->lr=0x80151D78u; f_801706E4(c); // 80151D74
  cmps(c,0,(int32_t)c->r[3],2); // 80151D78
  if (crb(c,1)) { goto L_80151D90; } // 80151D7C
  c->r[3]=c->r[1]+0x000001A0u; // 80151D80
  c->lr=0x80151D88u; f_801706E4(c); // 80151D84
  cmps(c,0,(int32_t)c->r[3],0); // 80151D88
  if (!crb(c,0)) { goto L_80151D94; } // 80151D8C
L_80151D90:;
  c->lr=0x80151D94u; f_80156280(c); // 80151D90
L_80151D94:;
  c->r[3]=c->r[1]+0x000001A0u; // 80151D94
  c->lr=0x80151D9Cu; f_801706E4(c); // 80151D98
  cmps(c,0,(int32_t)c->r[3],0); // 80151D9C
  if (!crb(c,2)) { IRQCHK(c); goto L_80151D70; } // 80151DA0
  c->r[3]=0u+0x80000000u; // 80151DA4
  c->r[4]=R32(c->r[25]+0x00000038u); // 80151DA8
  c->r[0]=R32(c->r[3]+0x000030F4u); // 80151DAC
  c->r[0]=c->r[0]+c->r[4]; // 80151DB0
  c->r[6]=sraw(c,c->r[0],2); // 80151DB4
  W32(c->r[13]+0xFFFFA9FCu,c->r[6]); // 80151DB8
  goto L_80151DC8; // 80151DBC
L_80151DC0:;
  c->r[6]=0u+0x00000910u; // 80151DC0
  W32(c->r[13]+0xFFFFA9FCu,c->r[6]); // 80151DC4
L_80151DC8:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 80151DC8
  c->r[3]=c->r[1]+0x000001D0u; // 80151DCC
  c->r[7]=R8(c->r[2]+0xFFFFA930u); // 80151DD0
  c->r[6]=c->r[6]+0x00000008u; // 80151DD4
  c->r[0]=c->r[4]+0x0000001Fu; // 80151DD8
  c->r[10]=R8(c->r[2]+0xFFFFA931u); // 80151DDC
  c->r[9]=R8(c->r[2]+0xFFFFA932u); // 80151DE0
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80151DE4
  c->r[0]=R8(c->r[2]+0xFFFFA933u); // 80151DE8
  c->r[4]=0u+0x81200000u; // 80151DEC
  W8(c->r[1]+0x00000054u,c->r[7]); // 80151DF0
  c->r[7]=0u+0x00000000u; // 80151DF4
  c->r[8]=0u+0x00000000u; // 80151DF8
  W8(c->r[1]+0x00000055u,c->r[10]); // 80151DFC
  W8(c->r[1]+0x00000056u,c->r[9]); // 80151E00
  W8(c->r[1]+0x00000057u,c->r[0]); // 80151E04
  c->lr=0x80151E0Cu; f_80170528(c); // 80151E08
  goto L_80151E34; // 80151E0C
L_80151E10:;
  c->r[3]=c->r[1]+0x000001D0u; // 80151E10
  c->lr=0x80151E18u; f_801706E4(c); // 80151E14
  cmps(c,0,(int32_t)c->r[3],2); // 80151E18
  if (crb(c,1)) { goto L_80151E30; } // 80151E1C
  c->r[3]=c->r[1]+0x000001D0u; // 80151E20
  c->lr=0x80151E28u; f_801706E4(c); // 80151E24
  cmps(c,0,(int32_t)c->r[3],0); // 80151E28
  if (!crb(c,0)) { goto L_80151E34; } // 80151E2C
L_80151E30:;
  c->lr=0x80151E34u; f_80156280(c); // 80151E30
L_80151E34:;
  c->r[3]=c->r[1]+0x000001D0u; // 80151E34
  c->lr=0x80151E3Cu; f_801706E4(c); // 80151E38
  cmps(c,0,(int32_t)c->r[3],0); // 80151E3C
  if (!crb(c,2)) { IRQCHK(c); goto L_80151E10; } // 80151E40
  c->r[4]=R32(c->r[31]+0x00000014u); // 80151E44
  c->r[3]=0u+0x81200000u; // 80151E48
  c->r[0]=c->r[4]+0x0000001Fu; // 80151E4C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80151E50
  c->lr=0x80151E58u; f_8014F920(c); // 80151E54
  c->r[4]=0u+0x802C0000u; // 80151E58
  c->r[3]=c->r[31]|c->r[31]; // 80151E5C
  c->r[4]=c->r[4]+0x00007468u; // 80151E60
  c->r[5]=0u+0x0000000Au; // 80151E64
  c->lr=0x80151E6Cu; f_8025C6DC(c); // 80151E68
  cmps(c,0,(int32_t)c->r[3],0); // 80151E6C
  if (!crb(c,1)) { goto L_80151E7C; } // 80151E70
  c->r[0]=0u+0x00000001u; // 80151E74
  goto L_80151E80; // 80151E78
L_80151E7C:;
  c->r[0]=0u+0x00000000u; // 80151E7C
L_80151E80:;
  cmps(c,0,(int32_t)c->r[0],0); // 80151E80
  if (crb(c,2)) { goto L_801520D0; } // 80151E84
  c->r[0]=c->r[27]+0x00010000u; // 80151E88
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80151E8C
  if (!crb(c,2)) { goto L_80151F70; } // 80151E90
  c->r[6]=R32(c->r[13]+0xFFFFA9FCu); // 80151E94
  cmps(c,0,(int32_t)c->r[6],0); // 80151E98
  if (crb(c,2)) { goto L_80151EA4; } // 80151E9C
  goto L_80151F60; // 80151EA0
L_80151EA4:;
  c->r[27]=0u+0x80000000u; // 80151EA4
  c->r[0]=R32(c->r[27]+0x000030F4u); // 80151EA8
  cmps(c,0,(int32_t)c->r[0],0); // 80151EAC
  if (crb(c,2)) { goto L_80151F58; } // 80151EB0
  c->r[3]=0u+0x00000040u; // 80151EB4
  c->r[4]=0u+0x00000020u; // 80151EB8
  c->lr=0x80151EC0u; f_8014F314(c); // 80151EBC
  c->r[6]=R8(c->r[2]+0xFFFFA930u); // 80151EC0
  c->r[25]=c->r[3]|c->r[3]; // 80151EC4
  c->r[10]=R8(c->r[2]+0xFFFFA931u); // 80151EC8
  c->r[4]=c->r[25]|c->r[25]; // 80151ECC
  c->r[9]=R8(c->r[2]+0xFFFFA932u); // 80151ED0
  c->r[3]=c->r[1]+0x00000110u; // 80151ED4
  c->r[0]=R8(c->r[2]+0xFFFFA933u); // 80151ED8
  c->r[5]=0u+0x00000040u; // 80151EDC
  c->r[8]=R32(c->r[27]+0x000030F4u); // 80151EE0
  c->r[7]=0u+0x00000000u; // 80151EE4
  W8(c->r[1]+0x00000044u,c->r[6]); // 80151EE8
  c->r[6]=sraw(c,c->r[8],2); // 80151EEC
  c->r[8]=0u+0x00000000u; // 80151EF0
  W8(c->r[1]+0x00000045u,c->r[10]); // 80151EF4
  W8(c->r[1]+0x00000046u,c->r[9]); // 80151EF8
  W8(c->r[1]+0x00000047u,c->r[0]); // 80151EFC
  c->lr=0x80151F04u; f_80170528(c); // 80151F00
  goto L_80151F2C; // 80151F04
L_80151F08:;
  c->r[3]=c->r[1]+0x00000110u; // 80151F08
  c->lr=0x80151F10u; f_801706E4(c); // 80151F0C
  cmps(c,0,(int32_t)c->r[3],2); // 80151F10
  if (crb(c,1)) { goto L_80151F28; } // 80151F14
  c->r[3]=c->r[1]+0x00000110u; // 80151F18
  c->lr=0x80151F20u; f_801706E4(c); // 80151F1C
  cmps(c,0,(int32_t)c->r[3],0); // 80151F20
  if (!crb(c,0)) { goto L_80151F2C; } // 80151F24
L_80151F28:;
  c->lr=0x80151F2Cu; f_80156280(c); // 80151F28
L_80151F2C:;
  c->r[3]=c->r[1]+0x00000110u; // 80151F2C
  c->lr=0x80151F34u; f_801706E4(c); // 80151F30
  cmps(c,0,(int32_t)c->r[3],0); // 80151F34
  if (!crb(c,2)) { IRQCHK(c); goto L_80151F08; } // 80151F38
  c->r[3]=0u+0x80000000u; // 80151F3C
  c->r[4]=R32(c->r[25]+0x00000038u); // 80151F40
  c->r[0]=R32(c->r[3]+0x000030F4u); // 80151F44
  c->r[0]=c->r[0]+c->r[4]; // 80151F48
  c->r[6]=sraw(c,c->r[0],2); // 80151F4C
  W32(c->r[13]+0xFFFFA9FCu,c->r[6]); // 80151F50
  goto L_80151F60; // 80151F54
L_80151F58:;
  c->r[6]=0u+0x00000910u; // 80151F58
  W32(c->r[13]+0xFFFFA9FCu,c->r[6]); // 80151F5C
L_80151F60:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80151F60
  c->r[0]=c->r[3]+0x00000020u; // 80151F64
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80151F68
  c->r[27]=c->r[0]+c->r[6]; // 80151F6C
L_80151F70:;
  W32(c->r[30]+0x00000008u,c->r[27]); // 80151F70
  c->r[3]=c->r[1]+0x00000028u; // 80151F74
  c->r[4]=c->r[1]+0x0000002Cu; // 80151F78
  c->r[5]=c->r[1]+0x00000030u; // 80151F7C
  c->r[12]=R32(c->r[31]+0x00000010u); // 80151F80
  c->ctr=c->r[12]; // 80151F84
  if (true) { c->lr=0x80151F8Cu; dispatch(c,c->ctr); } // 80151F88
  c->r[3]=0u+0x0000001Cu; // 80151F8C
  c->r[4]=0u+0x00000001u; // 80151F90
  c->lr=0x80151F98u; f_8014F314(c); // 80151F94
  c->r[25]=c->r[3]|c->r[3]; // 80151F98
  c->r[4]=c->r[30]|c->r[30]; // 80151F9C
  c->r[5]=0u+0x0000001Cu; // 80151FA0
  c->lr=0x80151FA8u; f_80004338(c); // 80151FA4
  c->r[4]=0u+0x80000000u; // 80151FA8
  c->r[3]=0u+0x80150000u; // 80151FAC
  W32(c->r[4]+0x000030F0u,c->r[25]); // 80151FB0
  c->r[3]=c->r[3]+0x000006B4u; // 80151FB4
  c->r[12]=R32(c->r[1]+0x00000028u); // 80151FB8
  c->ctr=c->r[12]; // 80151FBC
  if (true) { c->lr=0x80151FC4u; dispatch(c,c->ctr); } // 80151FC0
  c->r[3]=c->r[25]|c->r[25]; // 80151FC4
  c->lr=0x80151FCCu; f_8014F30C(c); // 80151FC8
  goto L_8015204C; // 80151FCC
L_80151FD0:;
  c->r[5]=R8(c->r[2]+0xFFFFA930u); // 80151FD0
  c->r[3]=c->r[1]+0x000000E0u; // 80151FD4
  c->r[4]=R8(c->r[2]+0xFFFFA931u); // 80151FD8
  c->r[7]=0u+0x00000000u; // 80151FDC
  c->r[9]=R8(c->r[2]+0xFFFFA932u); // 80151FE0
  c->r[8]=0u+0x00000000u; // 80151FE4
  c->r[0]=R8(c->r[2]+0xFFFFA933u); // 80151FE8
  W8(c->r[1]+0x00000040u,c->r[5]); // 80151FEC
  c->r[10]=R32(c->r[1]+0x0000003Cu); // 80151FF0
  c->r[6]=R32(c->r[13]+0xFFFFAC98u); // 80151FF4
  W8(c->r[1]+0x00000041u,c->r[4]); // 80151FF8
  c->r[5]=R32(c->r[1]+0x00000038u); // 80151FFC
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[10]>>((c->r[6])&31)); // 80152000
  c->r[4]=R32(c->r[1]+0x00000034u); // 80152004
  W8(c->r[1]+0x00000042u,c->r[9]); // 80152008
  W8(c->r[1]+0x00000043u,c->r[0]); // 8015200C
  c->lr=0x80152014u; f_80170528(c); // 80152010
  goto L_8015203C; // 80152014
L_80152018:;
  c->r[3]=c->r[1]+0x000000E0u; // 80152018
  c->lr=0x80152020u; f_801706E4(c); // 8015201C
  cmps(c,0,(int32_t)c->r[3],2); // 80152020
  if (crb(c,1)) { goto L_80152038; } // 80152024
  c->r[3]=c->r[1]+0x000000E0u; // 80152028
  c->lr=0x80152030u; f_801706E4(c); // 8015202C
  cmps(c,0,(int32_t)c->r[3],0); // 80152030
  if (!crb(c,0)) { goto L_8015203C; } // 80152034
L_80152038:;
  c->lr=0x8015203Cu; f_80156280(c); // 80152038
L_8015203C:;
  c->r[3]=c->r[1]+0x000000E0u; // 8015203C
  c->lr=0x80152044u; f_801706E4(c); // 80152040
  cmps(c,0,(int32_t)c->r[3],0); // 80152044
  if (!crb(c,2)) { IRQCHK(c); goto L_80152018; } // 80152048
L_8015204C:;
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 8015204C
  c->r[3]=c->r[1]+0x00000034u; // 80152050
  c->r[4]=c->r[1]+0x00000038u; // 80152054
  c->r[5]=c->r[1]+0x0000003Cu; // 80152058
  c->ctr=c->r[12]; // 8015205C
  if (true) { c->lr=0x80152064u; dispatch(c,c->ctr); } // 80152060
  cmps(c,0,(int32_t)c->r[3],0); // 80152064
  if (!crb(c,2)) { IRQCHK(c); goto L_80151FD0; } // 80152068
  c->r[12]=R32(c->r[1]+0x00000030u); // 8015206C
  c->ctr=c->r[12]; // 80152070
  if (true) { c->lr=0x80152078u; dispatch(c,c->ctr); } // 80152074
  c->r[6]=0u+0x80000000u; // 80152078
  c->r[26]=c->r[3]|c->r[3]; // 8015207C
  c->r[5]=R32(c->r[6]+0x00000000u); // 80152080
  c->r[0]=0u+0x00000080u; // 80152084
  c->r[3]=0u+0x0000001Cu; // 80152088
  c->r[4]=0u+0x00000001u; // 8015208C
  W32(c->r[6]+0x00003180u,c->r[5]); // 80152090
  W8(c->r[6]+0x00003184u,c->r[0]); // 80152094
  c->lr=0x8015209Cu; f_8014F314(c); // 80152098
  c->r[25]=c->r[3]|c->r[3]; // 8015209C
  c->r[4]=c->r[30]|c->r[30]; // 801520A0
  c->r[5]=0u+0x0000001Cu; // 801520A4
  c->lr=0x801520ACu; f_80004338(c); // 801520A8
  c->r[3]=0u+0x80000000u; // 801520AC
  c->r[0]=0u+0x00000007u; // 801520B0
  W32(c->r[3]+0x000030F0u,c->r[25]); // 801520B4
  c->r[3]=0u+0xCC000000u; // 801520B8
  W32(c->r[3]+0x00003024u,c->r[0]); // 801520BC
  c->lr=0x801520C4u; f_80154410(c); // 801520C0
  c->r[3]=c->r[26]|c->r[26]; // 801520C4
  c->lr=0x801520CCu; f_8015128C(c); // 801520C8
  goto L_8015225C; // 801520CC
L_801520D0:;
  c->r[3]=0u+0x81300000u; // 801520D0
  c->r[6]=R32(c->r[13]+0xFFFFA9FCu); // 801520D4
  W32(c->r[3]+0xFFFFDFF0u,c->r[28]); // 801520D8
  c->r[0]=0u+0x00000001u; // 801520DC
  cmps(c,0,(int32_t)c->r[6],0); // 801520E0
  c->r[27]=0u+0x80000000u; // 801520E4
  W32(c->r[3]+0xFFFFDFECu,c->r[29]); // 801520E8
  W8(c->r[27]+0x000030E2u,c->r[0]); // 801520EC
  if (crb(c,2)) { goto L_801520F8; } // 801520F0
  goto L_801521B0; // 801520F4
L_801520F8:;
  c->r[0]=R32(c->r[27]+0x000030F4u); // 801520F8
  cmps(c,0,(int32_t)c->r[0],0); // 801520FC
  if (crb(c,2)) { goto L_801521A8; } // 80152100
  c->r[3]=0u+0x00000040u; // 80152104
  c->r[4]=0u+0x00000020u; // 80152108
  c->lr=0x80152110u; f_8014F314(c); // 8015210C
  c->r[6]=R8(c->r[2]+0xFFFFA930u); // 80152110
  c->r[25]=c->r[3]|c->r[3]; // 80152114
  c->r[10]=R8(c->r[2]+0xFFFFA931u); // 80152118
  c->r[4]=c->r[25]|c->r[25]; // 8015211C
  c->r[9]=R8(c->r[2]+0xFFFFA932u); // 80152120
  c->r[3]=c->r[1]+0x000000B0u; // 80152124
  c->r[0]=R8(c->r[2]+0xFFFFA933u); // 80152128
  c->r[5]=0u+0x00000040u; // 8015212C
  c->r[8]=R32(c->r[27]+0x000030F4u); // 80152130
  c->r[7]=0u+0x00000000u; // 80152134
  W8(c->r[1]+0x00000024u,c->r[6]); // 80152138
  c->r[6]=sraw(c,c->r[8],2); // 8015213C
  c->r[8]=0u+0x00000000u; // 80152140
  W8(c->r[1]+0x00000025u,c->r[10]); // 80152144
  W8(c->r[1]+0x00000026u,c->r[9]); // 80152148
  W8(c->r[1]+0x00000027u,c->r[0]); // 8015214C
  c->lr=0x80152154u; f_80170528(c); // 80152150
  goto L_8015217C; // 80152154
L_80152158:;
  c->r[3]=c->r[1]+0x000000B0u; // 80152158
  c->lr=0x80152160u; f_801706E4(c); // 8015215C
  cmps(c,0,(int32_t)c->r[3],2); // 80152160
  if (crb(c,1)) { goto L_80152178; } // 80152164
  c->r[3]=c->r[1]+0x000000B0u; // 80152168
  c->lr=0x80152170u; f_801706E4(c); // 8015216C
  cmps(c,0,(int32_t)c->r[3],0); // 80152170
  if (!crb(c,0)) { goto L_8015217C; } // 80152174
L_80152178:;
  c->lr=0x8015217Cu; f_80156280(c); // 80152178
L_8015217C:;
  c->r[3]=c->r[1]+0x000000B0u; // 8015217C
  c->lr=0x80152184u; f_801706E4(c); // 80152180
  cmps(c,0,(int32_t)c->r[3],0); // 80152184
  if (!crb(c,2)) { IRQCHK(c); goto L_80152158; } // 80152188
  c->r[3]=0u+0x80000000u; // 8015218C
  c->r[4]=R32(c->r[25]+0x00000038u); // 80152190
  c->r[0]=R32(c->r[3]+0x000030F4u); // 80152194
  c->r[0]=c->r[0]+c->r[4]; // 80152198
  c->r[6]=sraw(c,c->r[0],2); // 8015219C
  W32(c->r[13]+0xFFFFA9FCu,c->r[6]); // 801521A0
  goto L_801521B0; // 801521A4
L_801521A8:;
  c->r[6]=0u+0x00000910u; // 801521A8
  W32(c->r[13]+0xFFFFA9FCu,c->r[6]); // 801521AC
L_801521B0:;
  c->r[8]=R32(c->r[31]+0x00000014u); // 801521B0
  c->r[3]=c->r[1]+0x00000080u; // 801521B4
  c->r[7]=R32(c->r[31]+0x00000018u); // 801521B8
  c->r[4]=0u+0x81330000u; // 801521BC
  c->r[0]=c->r[8]+0x00000020u; // 801521C0
  c->r[5]=R8(c->r[2]+0xFFFFA930u); // 801521C4
  c->r[8]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801521C8
  c->r[10]=R8(c->r[2]+0xFFFFA931u); // 801521CC
  c->r[9]=R8(c->r[2]+0xFFFFA932u); // 801521D0
  c->r[6]=c->r[8]+c->r[6]; // 801521D4
  c->r[0]=R8(c->r[2]+0xFFFFA933u); // 801521D8
  c->r[7]=c->r[7]+0x0000001Fu; // 801521DC
  W8(c->r[1]+0x00000020u,c->r[5]); // 801521E0
  c->r[5]=rotl(c->r[7],0)&0xFFFFFFE0u; // 801521E4
  c->r[7]=0u+0x00000000u; // 801521E8
  c->r[8]=0u+0x00000000u; // 801521EC
  W8(c->r[1]+0x00000021u,c->r[10]); // 801521F0
  W8(c->r[1]+0x00000022u,c->r[9]); // 801521F4
  W8(c->r[1]+0x00000023u,c->r[0]); // 801521F8
  c->lr=0x80152200u; f_80170528(c); // 801521FC
  goto L_80152228; // 80152200
L_80152204:;
  c->r[3]=c->r[1]+0x00000080u; // 80152204
  c->lr=0x8015220Cu; f_801706E4(c); // 80152208
  cmps(c,0,(int32_t)c->r[3],2); // 8015220C
  if (crb(c,1)) { goto L_80152224; } // 80152210
  c->r[3]=c->r[1]+0x00000080u; // 80152214
  c->lr=0x8015221Cu; f_801706E4(c); // 80152218
  cmps(c,0,(int32_t)c->r[3],0); // 8015221C
  if (!crb(c,0)) { goto L_80152228; } // 80152220
L_80152224:;
  c->lr=0x80152228u; f_80156280(c); // 80152224
L_80152228:;
  c->r[3]=c->r[1]+0x00000080u; // 80152228
  c->lr=0x80152230u; f_801706E4(c); // 8015222C
  cmps(c,0,(int32_t)c->r[3],0); // 80152230
  if (!crb(c,2)) { IRQCHK(c); goto L_80152204; } // 80152234
  c->r[4]=R32(c->r[31]+0x00000018u); // 80152238
  c->r[3]=0u+0x81330000u; // 8015223C
  c->r[0]=c->r[4]+0x0000001Fu; // 80152240
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80152244
  c->lr=0x8015224Cu; f_8014F920(c); // 80152248
  c->lr=0x80152250u; f_80154410(c); // 8015224C
  c->lr=0x80152254u; f_8014F954(c); // 80152250
  c->r[3]=0u+0x81330000u; // 80152254
  c->lr=0x8015225Cu; f_8015128C(c); // 80152258
L_8015225C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8015225C
  c->r[11]=c->r[10]|c->r[10]; // 80152260
  c->lr=0x80152268u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80152264
  c->r[0]=R32(c->r[10]+0x00000004u); // 80152268
  c->lr=c->r[0]; // 8015226C
  c->r[1]=c->r[10]|c->r[10]; // 80152270
  return; // 80152274
}

// fn_80152278
void f_80152278(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80152278
  c->r[0]=c->lr; // 8015227C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80152280
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80152284
  c->r[31]=c->r[3]|c->r[3]; // 80152288
  c->r[3]=c->r[1]+0x0000000Cu; // 8015228C
  W32(c->r[1]+0x00000038u,c->r[30]); // 80152290
  c->r[30]=c->r[5]|c->r[5]; // 80152294
  W32(c->r[1]+0x00000034u,c->r[29]); // 80152298
  c->r[29]=c->r[4]|c->r[4]; // 8015229C
  c->r[4]=c->r[1]+0x00000008u; // 801522A0
  c->lr=0x801522A8u; f_80155A2C(c); // 801522A4
  c->r[5]=c->r[31]|c->r[31]; // 801522A8
  c->r[3]=c->r[1]+0x00000010u; // 801522AC
  c->r[4]=c->r[13]+0xFFFF8FC8u; // 801522B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801522B4
  c->lr=0x801522BCu; f_8025ABC0(c); // 801522B8
  cmps(c,0,(int32_t)c->r[30],0); // 801522BC
  c->r[31]=0u+0x00000000u; // 801522C0
  if (crb(c,2)) { goto L_801522E4; } // 801522C4
  c->r[3]=c->r[30]|c->r[30]; // 801522C8
  goto L_801522D8; // 801522CC
L_801522D0:;
  c->r[3]=c->r[3]+0x00000004u; // 801522D0
  c->r[31]=c->r[31]+0x00000001u; // 801522D4
L_801522D8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801522D8
  cmps(c,0,(int32_t)c->r[0],0); // 801522DC
  if (!crb(c,2)) { IRQCHK(c); goto L_801522D0; } // 801522E0
L_801522E4:;
  c->r[0]=c->r[31]+0x00000002u; // 801522E4
  c->r[4]=0u+0x00000001u; // 801522E8
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801522EC
  c->lr=0x801522F4u; f_8014F314(c); // 801522F0
  c->r[6]=c->r[31]+0x00000001u; // 801522F4
  c->r[0]=c->r[1]+0x00000010u; // 801522F8
  cmps(c,1,(int32_t)c->r[6],1); // 801522FC
  W32(c->r[3]+0x00000000u,c->r[0]); // 80152300
  c->r[4]=0u+0x00000001u; // 80152304
  if (!crb(c,5)) { goto L_8015241C; } // 80152308
  cmps(c,0,(int32_t)c->r[31],8); // 8015230C
  c->r[7]=c->r[31]+0xFFFFFFF9u; // 80152310
  if (!crb(c,1)) { goto L_801523E8; } // 80152314
  c->r[8]=0u+0x00000000u; // 80152318
  c->r[9]=0u+0x00000000u; // 8015231C
  if (crb(c,4)) { goto L_80152338; } // 80152320
  c->r[5]=0u+0x80000000u; // 80152324
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 80152328
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8015232C
  if (crb(c,1)) { goto L_80152338; } // 80152330
  c->r[9]=0u+0x00000001u; // 80152334
L_80152338:;
  cmps(c,0,(int32_t)c->r[9],0); // 80152338
  if (crb(c,2)) { goto L_80152374; } // 8015233C
  c->r[0]=c->r[31]+0x00000001u; // 80152340
  c->r[5]=0u+0x00000001u; // 80152344
  c->r[6]=rotl(c->r[0],0)&0x80000000u; // 80152348
  c->r[0]=c->r[6]+0x80000000u; // 8015234C
  cmpu(c,0,c->r[0],0x00000000u); // 80152350
  if (!crb(c,2)) { goto L_80152368; } // 80152354
  c->r[0]=rotl(c->r[31],0)&0x80000000u; // 80152358
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8015235C
  if (crb(c,2)) { goto L_80152368; } // 80152360
  c->r[5]=0u+0x00000000u; // 80152364
L_80152368:;
  cmps(c,0,(int32_t)c->r[5],0); // 80152368
  if (crb(c,2)) { goto L_80152374; } // 8015236C
  c->r[8]=0u+0x00000001u; // 80152370
L_80152374:;
  cmps(c,0,(int32_t)c->r[8],0); // 80152374
  if (crb(c,2)) { goto L_801523E8; } // 80152378
  c->r[0]=c->r[7]+0x00000006u; // 8015237C
  c->r[5]=c->r[30]+0x00000004u; // 80152380
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80152384
  c->r[6]=c->r[3]+0x00000004u; // 80152388
  c->ctr=c->r[0]; // 8015238C
  cmps(c,0,(int32_t)c->r[7],1); // 80152390
  if (!crb(c,1)) { goto L_801523E8; } // 80152394
L_80152398:;
  c->r[0]=R32(c->r[5]+0xFFFFFFFCu); // 80152398
  c->r[4]=c->r[4]+0x00000008u; // 8015239C
  W32(c->r[6]+0x00000000u,c->r[0]); // 801523A0
  c->r[0]=R32(c->r[5]+0x00000000u); // 801523A4
  W32(c->r[6]+0x00000004u,c->r[0]); // 801523A8
  c->r[0]=R32(c->r[5]+0x00000004u); // 801523AC
  W32(c->r[6]+0x00000008u,c->r[0]); // 801523B0
  c->r[0]=R32(c->r[5]+0x00000008u); // 801523B4
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 801523B8
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801523BC
  W32(c->r[6]+0x00000010u,c->r[0]); // 801523C0
  c->r[0]=R32(c->r[5]+0x00000010u); // 801523C4
  W32(c->r[6]+0x00000014u,c->r[0]); // 801523C8
  c->r[0]=R32(c->r[5]+0x00000014u); // 801523CC
  W32(c->r[6]+0x00000018u,c->r[0]); // 801523D0
  c->r[0]=R32(c->r[5]+0x00000018u); // 801523D4
  c->r[5]=c->r[5]+0x00000020u; // 801523D8
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 801523DC
  c->r[6]=c->r[6]+0x00000020u; // 801523E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80152398; } // 801523E4
L_801523E8:;
  c->r[5]=c->r[31]+0x00000001u; // 801523E8
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801523EC
  c->r[0]=c->r[5]-c->r[4]; // 801523F0
  c->r[6]=c->r[30]+c->r[7]; // 801523F4
  c->r[7]=c->r[3]+c->r[7]; // 801523F8
  c->ctr=c->r[0]; // 801523FC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 80152400
  if (!crb(c,0)) { goto L_8015241C; } // 80152404
L_80152408:;
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 80152408
  c->r[6]=c->r[6]+0x00000004u; // 8015240C
  W32(c->r[7]+0x00000000u,c->r[0]); // 80152410
  c->r[7]=c->r[7]+0x00000004u; // 80152414
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80152408; } // 80152418
L_8015241C:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8015241C
  c->r[9]=c->r[3]|c->r[3]; // 80152420
  c->r[6]=R32(c->r[1]+0x00000008u); // 80152424
  c->r[4]=c->r[29]|c->r[29]; // 80152428
  c->r[8]=c->r[31]+0x00000001u; // 8015242C
  c->r[3]=0u+0xFFFFFFFFu; // 80152430
  c->r[7]=0u+0x00000000u; // 80152434
  c->lr=0x8015243Cu; f_80151A30(c); // 80152438
  c->r[0]=R32(c->r[1]+0x00000044u); // 8015243C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80152440
  c->r[30]=R32(c->r[1]+0x00000038u); // 80152444
  c->r[29]=R32(c->r[1]+0x00000034u); // 80152448
  c->lr=c->r[0]; // 8015244C
  c->r[1]=c->r[1]+0x00000040u; // 80152450
  return; // 80152454
}

// ScreenReport
void f_80152458(Ctx* __restrict c) {
  trace_call(0x80152458u);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80152458
  c->r[0]=c->lr; // 8015245C
  W32(c->r[1]+0x00000174u,c->r[0]); // 80152460
  c->r[11]=c->r[1]+0x00000170u; // 80152464
  c->lr=0x8015246Cu; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80152468
  c->r[22]=c->r[3]|c->r[3]; // 8015246C
  c->r[23]=c->r[4]|c->r[4]; // 80152470
  c->r[24]=c->r[6]|c->r[6]; // 80152474
  c->r[25]=c->r[7]|c->r[7]; // 80152478
  c->r[26]=c->r[8]|c->r[8]; // 8015247C
  c->r[27]=c->r[9]|c->r[9]; // 80152480
  c->r[31]=c->r[5]+0xFFFFFFE8u; // 80152484
  c->r[30]=c->r[4]+0xFFFFFFD0u; // 80152488
  c->r[18]=0u+0x80810000u; // 8015248C
  c->r[19]=0u+0x88890000u; // 80152490
  c->r[17]=0u+0x00000000u; // 80152494
  c->r[21]=0u+0x00000018u; // 80152498
  c->r[20]=0u+0x00000003u; // 8015249C
L_801524A0:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[26]); // 801524A0
  if (crb(c,0)) { goto L_80152764; } // 801524A4
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[23]); // 801524A8
  c->r[28]=c->r[25]|c->r[25]; // 801524AC
  c->r[0]=c->r[25]+c->r[0]; // 801524B0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801524B4
  c->r[29]=c->r[22]+c->r[0]; // 801524B8
  goto L_80152758; // 801524BC
L_801524C0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801524C0
  cmps(c,0,(int32_t)c->r[0],10); // 801524C4
  if (!crb(c,2)) { goto L_801524D8; } // 801524C8
  c->r[26]=c->r[26]+c->r[27]; // 801524CC
  c->r[10]=c->r[10]+0x00000001u; // 801524D0
  IRQCHK(c); goto L_801524A0; // 801524D4
L_801524D8:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[28]); // 801524D8
  if (!crb(c,0)) { goto L_801524E8; } // 801524DC
  c->r[26]=c->r[26]+c->r[27]; // 801524E0
  IRQCHK(c); goto L_801524A0; // 801524E4
L_801524E8:;
  c->r[6]=0u+0x00000000u; // 801524E8
  c->r[7]=0u+0x00000000u; // 801524EC
  c->ctr=c->r[20]; // 801524F0
L_801524F4:;
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 801524F4
  c->r[3]=c->r[6]+0x00000001u; // 801524F8
  c->r[0]=c->r[0]+c->r[7]; // 801524FC
  c->r[4]=c->r[1]+0x00000010u; // 80152500
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80152504
  c->r[5]=c->r[6]+0x00000002u; // 80152508
  c->r[4]=c->r[4]+c->r[0]; // 8015250C
  c->r[8]=c->r[6]+0x00000003u; // 80152510
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; // 80152514
  W32(c->r[4]+0x00000000u,c->r[17]); // 80152518
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8015251C
  c->r[3]=rotl(c->r[3],0)&0x00000007u; // 80152520
  W32(c->r[4]+0x00000020u,c->r[17]); // 80152524
  c->r[9]=c->r[6]+0x00000004u; // 80152528
  c->r[11]=c->r[6]+0x00000006u; // 8015252C
  c->r[0]=c->r[3]+c->r[0]; // 80152530
  W32(c->r[4]+0x00000040u,c->r[17]); // 80152534
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80152538
  c->r[4]=rotl(c->r[5],29)&0x1FFFFFFFu; // 8015253C
  c->r[3]=c->r[1]+0x00000010u; // 80152540
  c->r[3]=c->r[3]+c->r[0]; // 80152544
  c->r[5]=rotl(c->r[5],0)&0x00000007u; // 80152548
  W32(c->r[3]+0x00000000u,c->r[17]); // 8015254C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 80152550
  c->r[0]=c->r[6]+0x00000005u; // 80152554
  W32(c->r[3]+0x00000020u,c->r[17]); // 80152558
  c->r[7]=c->r[7]+0x00000018u; // 8015255C
  c->r[5]=c->r[5]+c->r[4]; // 80152560
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80152564
  W32(c->r[3]+0x00000040u,c->r[17]); // 80152568
  c->r[5]=rotl(c->r[8],29)&0x1FFFFFFFu; // 8015256C
  c->r[4]=c->r[1]+0x00000010u; // 80152570
  {uint32_t ea=c->r[4]+c->r[12]; W32(ea,c->r[17]); c->r[4]=ea;} // 80152574
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)24); // 80152578
  c->r[12]=rotl(c->r[8],0)&0x00000007u; // 8015257C
  W32(c->r[4]+0x00000020u,c->r[17]); // 80152580
  c->r[8]=rotl(c->r[9],29)&0x1FFFFFFFu; // 80152584
  c->r[12]=c->r[12]+c->r[3]; // 80152588
  c->r[5]=c->r[6]+0x00000007u; // 8015258C
  W32(c->r[4]+0x00000040u,c->r[17]); // 80152590
  c->r[3]=c->r[1]+0x00000010u; // 80152594
  c->r[12]=rotl(c->r[12],2)&0xFFFFFFFCu; // 80152598
  c->r[9]=rotl(c->r[9],0)&0x00000007u; // 8015259C
  c->r[3]=c->r[3]+c->r[12]; // 801525A0
  c->r[4]=c->r[1]+0x00000010u; // 801525A4
  W32(c->r[3]+0x00000000u,c->r[17]); // 801525A8
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)24); // 801525AC
  c->r[12]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801525B0
  W32(c->r[3]+0x00000020u,c->r[17]); // 801525B4
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 801525B8
  c->r[8]=c->r[9]+c->r[8]; // 801525BC
  c->r[9]=rotl(c->r[11],29)&0x1FFFFFFFu; // 801525C0
  c->r[8]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801525C4
  W32(c->r[3]+0x00000040u,c->r[17]); // 801525C8
  c->r[4]=c->r[4]+c->r[8]; // 801525CC
  c->r[3]=c->r[1]+0x00000010u; // 801525D0
  W32(c->r[4]+0x00000000u,c->r[17]); // 801525D4
  c->r[12]=(uint32_t)((int32_t)c->r[12]*(int32_t)24); // 801525D8
  c->r[11]=rotl(c->r[11],0)&0x00000007u; // 801525DC
  W32(c->r[4]+0x00000020u,c->r[17]); // 801525E0
  c->r[8]=rotl(c->r[5],29)&0x1FFFFFFFu; // 801525E4
  c->r[0]=c->r[0]+c->r[12]; // 801525E8
  c->r[6]=c->r[6]+0x00000008u; // 801525EC
  W32(c->r[4]+0x00000040u,c->r[17]); // 801525F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801525F4
  c->r[4]=c->r[1]+0x00000010u; // 801525F8
  {uint32_t ea=c->r[3]+c->r[0]; W32(ea,c->r[17]); c->r[3]=ea;} // 801525FC
  c->r[0]=(uint32_t)((int32_t)c->r[9]*(int32_t)24); // 80152600
  c->r[9]=rotl(c->r[5],0)&0x00000007u; // 80152604
  W32(c->r[3]+0x00000020u,c->r[17]); // 80152608
  c->r[5]=c->r[4]|c->r[4]; // 8015260C
  c->r[0]=c->r[11]+c->r[0]; // 80152610
  W32(c->r[3]+0x00000040u,c->r[17]); // 80152614
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80152618
  {uint32_t ea=c->r[4]+c->r[0]; W32(ea,c->r[17]); c->r[4]=ea;} // 8015261C
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)24); // 80152620
  W32(c->r[4]+0x00000020u,c->r[17]); // 80152624
  c->r[0]=c->r[9]+c->r[0]; // 80152628
  W32(c->r[4]+0x00000040u,c->r[17]); // 8015262C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80152630
  {uint32_t ea=c->r[5]+c->r[0]; W32(ea,c->r[17]); c->r[5]=ea;} // 80152634
  W32(c->r[5]+0x00000020u,c->r[17]); // 80152638
  W32(c->r[5]+0x00000040u,c->r[17]); // 8015263C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801524F4; } // 80152640
  c->r[3]=c->r[10]|c->r[10]; // 80152644
  c->r[4]=c->r[1]+0x00000010u; // 80152648
  c->r[7]=c->r[1]+0x00000008u; // 8015264C
  c->r[5]=0u+0x00000000u; // 80152650
  c->r[6]=0u+0x00000006u; // 80152654
  c->lr=0x8015265Cu; f_80153B1C(c); // 80152658
  c->r[10]=c->r[3]|c->r[3]; // 8015265C
  c->r[7]=0u+0x00000000u; // 80152660
  c->r[3]=0u+0x00000000u; // 80152664
L_80152668:;
  c->r[0]=rotl(c->r[7],29)&0x1FFFFFFFu; // 80152668
  c->r[6]=rotl(c->r[7],0)&0x00000007u; // 8015266C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80152670
  c->r[5]=c->r[1]+0x00000010u; // 80152674
  c->r[4]=c->r[28]|c->r[28]; // 80152678
  c->r[8]=0u+0x00000000u; // 8015267C
  c->r[0]=c->r[6]+c->r[0]; // 80152680
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80152684
  c->r[5]=c->r[5]+c->r[0]; // 80152688
  c->ctr=c->r[21]; // 8015268C
L_80152690:;
  c->r[6]=rotl(c->r[8],2)&0xFFFFFFE0u; // 80152690
  c->r[0]=rotl(c->r[8],0)&0x00000007u; // 80152694
  c->r[0]=addc(c,~c->r[0],0x00000007u,1); // 80152698
  c->r[6]=R32(c->r[5]+c->r[6]); // 8015269C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801526A0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[6]>>((c->r[0])&31)); // 801526A4
  c->r[9]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[9]); // 801526A8
  if (crb(c,2)) { goto L_8015272C; } // 801526AC
  c->r[6]=R8(c->r[24]+0x00000000u); // 801526B0
  c->r[0]=c->r[8]+c->r[3]; // 801526B4
  c->r[12]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801526B8
  c->r[11]=c->r[18]+0xFFFF8081u; // 801526BC
  c->r[9]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[9]); // 801526C0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801526C4
  c->r[6]=c->r[29]+c->r[12]; // 801526C8
  c->r[0]=c->r[19]+0xFFFF8889u; // 801526CC
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)239); // 801526D0
  c->r[11]=(uint32_t)(((int64_t)(int32_t)c->r[11]*(int64_t)(int32_t)c->r[9])>>32); // 801526D4
  c->r[9]=c->r[11]+c->r[9]; // 801526D8
  c->r[9]=sraw(c,c->r[9],7); // 801526DC
  c->r[11]=rotl(c->r[9],1)&0x00000001u; // 801526E0
  c->r[9]=c->r[9]+c->r[11]; // 801526E4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[9])>>32); // 801526E8
  c->r[0]=c->r[0]+c->r[9]; // 801526EC
  c->r[0]=sraw(c,c->r[0],3); // 801526F0
  c->r[9]=rotl(c->r[0],1)&0x00000001u; // 801526F4
  c->r[9]=c->r[0]+c->r[9]; // 801526F8
  c->r[0]=c->r[9]+0x00000010u; // 801526FC
  W8(c->r[29]+c->r[12],c->r[0]); // 80152700
  if (crb(c,2)) { goto L_8015271C; } // 80152704
  c->r[9]=R8(c->r[24]+0x00000001u); // 80152708
  c->r[0]=R8(c->r[24]+0x00000002u); // 8015270C
  W8(c->r[6]+0xFFFFFFFFu,c->r[9]); // 80152710
  W8(c->r[6]+0x00000001u,c->r[0]); // 80152714
  goto L_8015272C; // 80152718
L_8015271C:;
  c->r[9]=R8(c->r[24]+0x00000002u); // 8015271C
  c->r[0]=R8(c->r[24]+0x00000001u); // 80152720
  W8(c->r[6]+0xFFFFFFFFu,c->r[9]); // 80152724
  W8(c->r[6]+0x00000001u,c->r[0]); // 80152728
L_8015272C:;
  c->r[4]=c->r[4]+0x00000001u; // 8015272C
  c->r[8]=c->r[8]+0x00000001u; // 80152730
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80152690; } // 80152734
  c->r[7]=c->r[7]+0x00000001u; // 80152738
  c->r[3]=c->r[3]+c->r[23]; // 8015273C
  cmpu(c,0,c->r[7],0x00000018u); // 80152740
  if (crb(c,0)) { IRQCHK(c); goto L_80152668; } // 80152744
  c->r[3]=R32(c->r[1]+0x00000008u); // 80152748
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8015274C
  c->r[28]=c->r[28]+c->r[3]; // 80152750
  c->r[29]=c->r[29]+c->r[0]; // 80152754
L_80152758:;
  c->r[3]=R8(c->r[10]+0x00000000u); // 80152758
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 8015275C
  if (!crb(c,2)) { IRQCHK(c); goto L_801524C0; } // 80152760
L_80152764:;
  c->r[11]=c->r[1]+0x00000170u; // 80152764
  c->lr=0x8015276Cu; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80152768
  c->r[0]=R32(c->r[1]+0x00000174u); // 8015276C
  c->lr=c->r[0]; // 80152770
  c->r[1]=c->r[1]+0x00000170u; // 80152774
  return; // 80152778
}

// ConfigureVideo
void f_8015277C(Ctx* __restrict c) {
  trace_call(0x8015277Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015277C
  c->r[0]=c->lr; // 80152780
  c->r[6]=0u+0x000001E0u; // 80152784
  c->r[5]=0u+0x00000028u; // 80152788
  W32(c->r[1]+0x00000054u,c->r[0]); // 8015278C
  c->r[0]=0u+0x00000280u; // 80152790
  W16(c->r[1]+0x0000000Cu,c->r[3]); // 80152794
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 80152798
  W16(c->r[1]+0x00000010u,c->r[4]); // 8015279C
  W16(c->r[1]+0x00000012u,c->r[5]); // 801527A0
  W16(c->r[1]+0x00000016u,c->r[0]); // 801527A4
  W16(c->r[1]+0x00000018u,c->r[4]); // 801527A8
  c->lr=0x801527B0u; f_80161310(c); // 801527AC
  cmps(c,0,(int32_t)c->r[3],2); // 801527B0
  if (crb(c,2)) { goto L_801527D8; } // 801527B4
  if (!crb(c,0)) { goto L_801527CC; } // 801527B8
  cmps(c,0,(int32_t)c->r[3],0); // 801527BC
  if (crb(c,2)) { goto L_801527D8; } // 801527C0
  if (!crb(c,0)) { goto L_80152834; } // 801527C4
  goto L_8015284C; // 801527C8
L_801527CC:;
  cmps(c,0,(int32_t)c->r[3],5); // 801527CC
  if (crb(c,2)) { goto L_80152818; } // 801527D0
  goto L_8015284C; // 801527D4
L_801527D8:;
  c->r[3]=0u+0xCC000000u; // 801527D8
  c->r[0]=R16(c->r[3]+0x0000206Cu); // 801527DC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801527E0
  if (crb(c,2)) { goto L_80152800; } // 801527E4
  c->r[0]=0u+0x00000000u; // 801527E8
  c->r[3]=0u+0x00000002u; // 801527EC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801527F0
  W16(c->r[1]+0x00000014u,c->r[0]); // 801527F4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801527F8
  goto L_8015284C; // 801527FC
L_80152800:;
  c->r[3]=0u+0x00000000u; // 80152800
  c->r[0]=0u+0x00000001u; // 80152804
  W32(c->r[1]+0x00000008u,c->r[3]); // 80152808
  W16(c->r[1]+0x00000014u,c->r[3]); // 8015280C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80152810
  goto L_8015284C; // 80152814
L_80152818:;
  c->r[4]=0u+0x00000014u; // 80152818
  c->r[3]=0u+0x00000000u; // 8015281C
  c->r[0]=0u+0x00000001u; // 80152820
  W32(c->r[1]+0x00000008u,c->r[4]); // 80152824
  W16(c->r[1]+0x00000014u,c->r[3]); // 80152828
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8015282C
  goto L_8015284C; // 80152830
L_80152834:;
  c->r[4]=0u+0x00000004u; // 80152834
  c->r[3]=0u+0x0000002Fu; // 80152838
  c->r[0]=0u+0x00000001u; // 8015283C
  W32(c->r[1]+0x00000008u,c->r[4]); // 80152840
  W16(c->r[1]+0x00000014u,c->r[3]); // 80152844
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80152848
L_8015284C:;
  c->r[3]=c->r[1]+0x00000008u; // 8015284C
  c->lr=0x80152854u; f_80160648(c); // 80152850
  c->r[3]=0u+0x00000000u; // 80152854
  c->r[4]=0u+0x00000000u; // 80152858
  c->r[5]=0u+0x00000280u; // 8015285C
  c->r[6]=0u+0x000001E0u; // 80152860
  c->lr=0x80152868u; f_80160D2C(c); // 80152864
  c->r[0]=R32(c->r[1]+0x00000054u); // 80152868
  c->lr=c->r[0]; // 8015286C
  c->r[1]=c->r[1]+0x00000050u; // 80152870
  return; // 80152874
}

// OSFatal
void f_80152878(Ctx* __restrict c) {
  trace_call(0x80152878u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80152878
  c->r[0]=c->lr; // 8015287C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80152880
  c->r[11]=c->r[1]+0x00000030u; // 80152884
  c->lr=0x8015288Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80152888
  c->r[27]=c->r[3]|c->r[3]; // 8015288C
  c->r[28]=c->r[4]|c->r[4]; // 80152890
  c->r[29]=c->r[5]|c->r[5]; // 80152894
  c->lr=0x8015289Cu; f_80154410(c); // 80152898
  c->lr=0x801528A0u; f_801571A4(c); // 8015289C
  c->r[24]=0u+0x80440000u; // 801528A0
  c->r[3]=c->r[24]+0xFFFFE260u; // 801528A4
  c->lr=0x801528ACu; f_801502A8(c); // 801528A8
  c->r[3]=c->r[24]+0xFFFFE260u; // 801528AC
  c->lr=0x801528B4u; f_80150080(c); // 801528B0
  c->lr=0x801528B8u; f_8014F730(c); // 801528B4
  c->lr=0x801528BCu; f_8015FB80(c); // 801528B8
  c->r[3]=0u+0x00000080u; // 801528BC
  c->lr=0x801528C4u; f_80154820(c); // 801528C0
  c->r[3]=0u+0x00000001u; // 801528C4
  c->lr=0x801528CCu; f_80161200(c); // 801528C8
  c->lr=0x801528D0u; f_80161080(c); // 801528CC
  c->r[3]=0u+0x00000000u; // 801528D0
  c->lr=0x801528D8u; f_8015F7D0(c); // 801528D4
  c->r[3]=0u+0x00000000u; // 801528D8
  c->lr=0x801528E0u; f_8015F814(c); // 801528DC
  c->lr=0x801528E4u; f_80154424(c); // 801528E0
  c->lr=0x801528E8u; f_80161278(c); // 801528E4
  c->r[24]=c->r[3]|c->r[3]; // 801528E8
L_801528EC:;
  c->lr=0x801528F0u; f_80161278(c); // 801528EC
  c->r[0]=c->r[3]-c->r[24]; // 801528F0
  cmps(c,0,(int32_t)c->r[0],1); // 801528F4
  if (crb(c,0)) { IRQCHK(c); goto L_801528EC; } // 801528F8
  c->lr=0x80152900u; f_8015848C(c); // 801528FC
  c->r[5]=0u+0x10620000u; // 80152900
  c->r[30]=c->r[4]|c->r[4]; // 80152904
  c->r[31]=c->r[3]|c->r[3]; // 80152908
  c->r[25]=0u+0x80000000u; // 8015290C
  c->r[24]=c->r[5]+0x00004DD3u; // 80152910
  c->r[26]=0u+0x00000000u; // 80152914
L_80152918:;
  c->r[3]=0u+0x00000000u; // 80152918
  c->r[4]=0u+0x00000000u; // 8015291C
  c->lr=0x80152924u; f_80155AC8(c); // 80152920
  cmps(c,0,(int32_t)c->r[3],0); // 80152924
  if (!crb(c,2)) { goto L_80152968; } // 80152928
  c->lr=0x80152930u; f_8015848C(c); // 8015292C
  c->r[0]=R32(c->r[25]+0x000000F8u); // 80152930
  c->r[6]=addc(c,~c->r[30],c->r[4],1); // 80152934
  c->r[5]=addc(c,~c->r[31],c->r[3],c->xer_ca); // 80152938
  c->r[4]=c->r[26]^0x80000000u; // 8015293C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80152940
  c->r[3]=(uint32_t)(((uint64_t)c->r[24]*(uint64_t)c->r[0])>>32); // 80152944
  c->r[0]=c->r[5]^0x80000000u; // 80152948
  c->r[3]=rotl(c->r[3],26)&0x03FFFFFFu; // 8015294C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1000); // 80152950
  c->r[3]=addc(c,~c->r[3],c->r[6],1); // 80152954
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80152958
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8015295C
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 80152960
  if (!crb(c,2)) { IRQCHK(c); goto L_80152918; } // 80152964
L_80152968:;
  c->lr=0x8015296Cu; f_80154410(c); // 80152968
  c->r[3]=0u+0x00000001u; // 8015296C
  c->r[4]=0u+0x00000000u; // 80152970
  c->lr=0x80152978u; f_80155AC8(c); // 80152974
  c->r[3]=0u+0x00000000u; // 80152978
  c->r[4]=0u+0x00000000u; // 8015297C
  c->lr=0x80152984u; f_8015BFA8(c); // 80152980
  c->r[3]=0u+0x00000002u; // 80152984
  c->r[4]=0u+0x00000000u; // 80152988
  c->lr=0x80152990u; f_8015BFA8(c); // 8015298C
  goto L_801529AC; // 80152990
L_80152994:;
  c->r[3]=0u+0x00000000u; // 80152994
  c->lr=0x8015299Cu; f_8015BD2C(c); // 80152998
  c->r[3]=0u+0x00000000u; // 8015299C
  c->lr=0x801529A4u; f_8015C4AC(c); // 801529A0
  c->r[3]=0u+0x00000000u; // 801529A4
  c->lr=0x801529ACu; f_8015CC0C(c); // 801529A8
L_801529AC:;
  c->r[3]=0u+0x00000000u; // 801529AC
  c->r[4]=0u+0x00000001u; // 801529B0
  c->r[5]=0u+0x00000000u; // 801529B4
  c->lr=0x801529BCu; f_8015CB10(c); // 801529B8
  cmps(c,0,(int32_t)c->r[3],0); // 801529BC
  if (crb(c,2)) { IRQCHK(c); goto L_80152994; } // 801529C0
  c->r[3]=0u+0x00000000u; // 801529C4
  c->lr=0x801529CCu; f_8015CC0C(c); // 801529C8
  c->r[3]=0u+0xCD000000u; // 801529CC
L_801529D0:;
  c->r[0]=R32(c->r[3]+0x0000680Cu); // 801529D0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801529D4
  cmpu(c,0,c->r[0],0x00000001u); // 801529D8
  if (crb(c,2)) { IRQCHK(c); goto L_801529D0; } // 801529DC
  c->r[4]=0u+0x80150000u; // 801529E0
  c->r[3]=0u+0x00000008u; // 801529E4
  c->r[4]=c->r[4]+0xFFFFE658u; // 801529E8
  c->lr=0x801529F0u; f_8014E598(c); // 801529EC
  c->lr=0x801529F4u; f_80167618(c); // 801529F0
  c->r[3]=0u+0x81400000u; // 801529F4
  c->lr=0x801529FCu; f_8014F30C(c); // 801529F8
  c->r[4]=0u+0x80000000u; // 801529FC
  c->r[3]=R32(c->r[4]+0x00000038u); // 80152A00
  cmps(c,0,(int32_t)c->r[3],0); // 80152A04
  if (!crb(c,2)) { goto L_80152A18; } // 80152A08
  c->r[3]=R32(c->r[4]+0x00003110u); // 80152A0C
  c->lr=0x80152A14u; f_8014F2F4(c); // 80152A10
  goto L_80152A1C; // 80152A14
L_80152A18:;
  c->lr=0x80152A1Cu; f_8014F2F4(c); // 80152A18
L_80152A1C:;
  c->r[9]=R8(c->r[27]+0x00000000u); // 80152A1C
  c->r[10]=0u+0x80440000u; // 80152A20
  c->r[8]=R8(c->r[27]+0x00000001u); // 80152A24
  {uint32_t ea=c->r[10]+0xFFFFE528u; W8(ea,c->r[9]); c->r[10]=ea;} // 80152A28
  c->r[7]=R8(c->r[27]+0x00000002u); // 80152A2C
  c->r[6]=R8(c->r[27]+0x00000003u); // 80152A30
  c->r[5]=R8(c->r[28]+0x00000000u); // 80152A34
  c->r[4]=R8(c->r[28]+0x00000001u); // 80152A38
  c->r[3]=R8(c->r[28]+0x00000002u); // 80152A3C
  c->r[0]=R8(c->r[28]+0x00000003u); // 80152A40
  W8(c->r[10]+0x00000001u,c->r[8]); // 80152A44
  W8(c->r[10]+0x00000002u,c->r[7]); // 80152A48
  W8(c->r[10]+0x00000003u,c->r[6]); // 80152A4C
  W8(c->r[10]+0x00000004u,c->r[5]); // 80152A50
  W8(c->r[10]+0x00000005u,c->r[4]); // 80152A54
  W8(c->r[10]+0x00000006u,c->r[3]); // 80152A58
  W8(c->r[10]+0x00000007u,c->r[0]); // 80152A5C
  W32(c->r[10]+0x00000008u,c->r[29]); // 80152A60
  c->lr=0x80152A68u; f_8014F2C4(c); // 80152A64
  c->r[5]=0u+0x80150000u; // 80152A68
  c->r[4]=c->r[3]|c->r[3]; // 80152A6C
  c->r[3]=c->r[5]+0x00002A90u; // 80152A70
  c->lr=0x80152A78u; f_80150248(c); // 80152A74
  c->r[11]=c->r[1]+0x00000030u; // 80152A78
  c->lr=0x80152A80u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80152A7C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80152A80
  c->lr=c->r[0]; // 80152A84
  c->r[1]=c->r[1]+0x00000030u; // 80152A88
  return; // 80152A8C
}

// Halt
void f_80152A90(Ctx* __restrict c) {
  trace_call(0x80152A90u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80152A90
  c->r[0]=c->lr; // 80152A94
  W32(c->r[1]+0x00000054u,c->r[0]); // 80152A98
  c->r[0]=0u+0x43300000u; // 80152A9C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80152AA0
  W32(c->r[1]+0x00000048u,c->r[30]); // 80152AA4
  W32(c->r[1]+0x00000044u,c->r[29]); // 80152AA8
  W32(c->r[1]+0x00000040u,c->r[28]); // 80152AAC
  W32(c->r[1]+0x00000020u,c->r[0]); // 80152AB0
  W32(c->r[1]+0x00000028u,c->r[0]); // 80152AB4
  c->lr=0x80152ABCu; f_80154424(c); // 80152AB8
  c->r[29]=0u+0x80440000u; // 80152ABC
  c->r[29]=c->r[29]+0xFFFFE528u; // 80152AC0
  c->r[28]=R32(c->r[29]+0x00000008u); // 80152AC4
  c->r[3]=c->r[28]|c->r[28]; // 80152AC8
  c->lr=0x80152AD0u; f_80252384(c); // 80152ACC
  c->r[30]=c->r[3]+0x00000001u; // 80152AD0
  c->r[4]=0u+0x00000020u; // 80152AD4
  c->r[3]=c->r[30]|c->r[30]; // 80152AD8
  c->lr=0x80152AE0u; f_8014F314(c); // 80152ADC
  c->r[4]=c->r[28]|c->r[28]; // 80152AE0
  c->r[5]=c->r[30]|c->r[30]; // 80152AE4
  c->lr=0x80152AECu; f_802582B4(c); // 80152AE8
  W32(c->r[29]+0x00000008u,c->r[3]); // 80152AEC
  c->r[3]=0u+0x000A0000u; // 80152AF0
  c->r[3]=c->r[3]+0x00001004u; // 80152AF4
  c->r[4]=0u+0x00000020u; // 80152AF8
  c->lr=0x80152B00u; f_8014F314(c); // 80152AFC
  c->r[31]=c->r[3]|c->r[3]; // 80152B00
  c->lr=0x80152B08u; f_8014F2DC(c); // 80152B04
  c->r[4]=c->r[3]|c->r[3]; // 80152B08
  c->r[3]=c->r[31]|c->r[31]; // 80152B0C
  c->lr=0x80152B14u; f_8015373C(c); // 80152B10
  c->r[3]=0u+0x00090000u; // 80152B14
  c->r[4]=0u+0x00000020u; // 80152B18
  c->r[3]=c->r[3]+0x00006000u; // 80152B1C
  c->lr=0x80152B24u; f_8014F314(c); // 80152B20
  c->r[4]=R8(c->r[29]+0x00000006u); // 80152B24
  c->r[30]=c->r[3]|c->r[3]; // 80152B28
  c->r[5]=R8(c->r[29]+0x00000004u); // 80152B2C
  W32(c->r[1]+0x00000024u,c->r[4]); // 80152B30
  c->r[3]=R8(c->r[29]+0x00000005u); // 80152B34
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 80152B38
  {uint32_t ea=c->r[1]+0x00000020u; c->f[4]=RF64(ea);} // 80152B3C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 80152B40
  {uint32_t ea=c->r[2]+0xFFFFA970u; c->f[0]=RF64(ea);} // 80152B44
  W32(c->r[1]+0x00000024u,c->r[3]); // 80152B48
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 80152B4C
  {uint32_t ea=c->r[2]+0xFFFFA944u; c->f[2]=c->ps1[2]=RF32(ea);} // 80152B50
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 80152B54
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[0]); // 80152B58
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 80152B5C
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 80152B60
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 80152B64
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[3]); // 80152B68
  W32(c->r[1]+0x00000024u,c->r[5]); // 80152B6C
  {uint32_t ea=c->r[2]+0xFFFFA948u; c->f[4]=c->ps1[4]=RF32(ea);} // 80152B70
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80152B74
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 80152B78
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 80152B7C
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80152B80
  {uint32_t ea=c->r[2]+0xFFFFA940u; c->f[5]=c->ps1[5]=RF32(ea);} // 80152B84
  c->f[9]=c->ps1[9]=S(c->f[2]-c->f[0]); // 80152B88
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 80152B8C
  c->f[13]=c->ps1[13]=S(c->f[5]*c->f[7]); // 80152B90
  {uint32_t ea=c->r[2]+0xFFFFA950u; c->f[11]=c->ps1[11]=RF32(ea);} // 80152B94
  c->f[12]=c->ps1[12]=S(c->f[6]+c->f[4]); // 80152B98
  {uint32_t ea=c->r[2]+0xFFFFA954u; c->f[8]=c->ps1[8]=RF32(ea);} // 80152B9C
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[0]); // 80152BA0
  W32(c->r[1]+0x00000024u,c->r[5]); // 80152BA4
  c->f[10]=c->ps1[10]=S(c->f[11]*c->f[3]); // 80152BA8
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[6]=c->ps1[6]=RF32(ea);} // 80152BAC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 80152BB0
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 80152BB4
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[7]); // 80152BB8
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80152BBC
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 80152BC0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 80152BC4
  W32(c->r[1]+0x00000024u,c->r[4]); // 80152BC8
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 80152BCC
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80152BD0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 80152BD4
  c->f[5]=c->ps1[5]=S(c->f[11]*c->f[5]); // 80152BD8
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152BDC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80152BE0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[4]); // 80152BE4
  c->r[0]=R8(c->r[29]+0x00000007u); // 80152BE8
  c->f[3]=c->ps1[3]=S(c->f[13]+c->f[12]); // 80152BEC
  c->f[4]=c->ps1[4]=S(c->f[8]-c->f[6]); // 80152BF0
  {uint32_t ea=c->r[2]+0xFFFFA93Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 80152BF4
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[2]); // 80152BF8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80152BFC
  {uint32_t ea=c->r[2]+0xFFFFA938u; c->f[5]=c->ps1[5]=RF32(ea);} // 80152C00
  c->f[6]=c->ps1[6]=S(c->f[9]+c->f[3]); // 80152C04
  c->f[1]=c->ps1[1]=S(c->f[10]+c->f[4]); // 80152C08
  {uint32_t ea=c->r[2]+0xFFFFA94Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80152C0C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80152C10
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[6]); // 80152C14
  {uint32_t ea=c->r[2]+0xFFFFA964u; c->f[7]=c->ps1[7]=RF32(ea);} // 80152C18
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 80152C1C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 80152C20
  W8(c->r[1]+0x00000018u,c->r[5]); // 80152C24
  fcmp(c,0,c->f[4],c->f[7]); // 80152C28
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[1]); // 80152C2C
  W8(c->r[1]+0x00000019u,c->r[3]); // 80152C30
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[0]); // 80152C34
  W8(c->r[1]+0x0000001Au,c->r[4]); // 80152C38
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 80152C3C
  if (!crb(c,1)) { goto L_80152C48; } // 80152C40
  goto L_80152C5C; // 80152C44
L_80152C48:;
  fcmp(c,0,c->f[4],c->f[9]); // 80152C48
  if (!crb(c,0)) { goto L_80152C54; } // 80152C4C
  goto L_80152C58; // 80152C50
L_80152C54:;
  c->f[9]=c->f[4]; // 80152C54
L_80152C58:;
  c->f[7]=c->f[9]; // 80152C58
L_80152C5C:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[7],true)); // 80152C5C
  {uint32_t ea=c->r[2]+0xFFFFA968u; c->f[3]=c->ps1[3]=RF32(ea);} // 80152C60
  fcmp(c,0,c->f[2],c->f[3]); // 80152C64
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80152C68
  c->r[0]=R32(c->r[1]+0x00000034u); // 80152C6C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80152C70
  if (!crb(c,1)) { goto L_80152C7C; } // 80152C74
  goto L_80152C90; // 80152C78
L_80152C7C:;
  {uint32_t ea=c->r[2]+0xFFFFA93Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80152C7C
  fcmp(c,0,c->f[2],c->f[3]); // 80152C80
  if (!crb(c,0)) { goto L_80152C8C; } // 80152C84
  goto L_80152C90; // 80152C88
L_80152C8C:;
  c->f[3]=c->f[2]; // 80152C8C
L_80152C90:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80152C90
  {uint32_t ea=c->r[2]+0xFFFFA968u; c->f[2]=c->ps1[2]=RF32(ea);} // 80152C94
  fcmp(c,0,c->f[1],c->f[2]); // 80152C98
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80152C9C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80152CA0
  W8(c->r[1]+0x0000000Du,c->r[0]); // 80152CA4
  if (!crb(c,1)) { goto L_80152CB0; } // 80152CA8
  goto L_80152CC4; // 80152CAC
L_80152CB0:;
  {uint32_t ea=c->r[2]+0xFFFFA93Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80152CB0
  fcmp(c,0,c->f[1],c->f[2]); // 80152CB4
  if (!crb(c,0)) { goto L_80152CC0; } // 80152CB8
  goto L_80152CC4; // 80152CBC
L_80152CC0:;
  c->f[2]=c->f[1]; // 80152CC0
L_80152CC4:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80152CC4
  c->r[0]=0u+0x00000000u; // 80152CC8
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80152CCC
  c->r[4]=c->r[30]|c->r[30]; // 80152CD0
  c->r[5]=0u+0x00000000u; // 80152CD4
  c->r[0]=0u+0x00000014u; // 80152CD8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80152CDC
  c->r[3]=R32(c->r[1]+0x00000034u); // 80152CE0
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 80152CE4
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80152CE8
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80152CEC
  c->r[6]=R8(c->r[1]+0x0000001Du); // 80152CF0
  c->r[7]=R8(c->r[1]+0x0000001Eu); // 80152CF4
  c->r[3]=R8(c->r[1]+0x0000001Cu); // 80152CF8
L_80152CFC:;
  c->ctr=c->r[0]; // 80152CFC
L_80152D00:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 80152D00
  W8(c->r[4]+0x00000001u,c->r[6]); // 80152D04
  W8(c->r[4]+0x00000002u,c->r[3]); // 80152D08
  W8(c->r[4]+0x00000003u,c->r[7]); // 80152D0C
  W8(c->r[4]+0x00000004u,c->r[3]); // 80152D10
  W8(c->r[4]+0x00000005u,c->r[6]); // 80152D14
  W8(c->r[4]+0x00000006u,c->r[3]); // 80152D18
  W8(c->r[4]+0x00000007u,c->r[7]); // 80152D1C
  W8(c->r[4]+0x00000008u,c->r[3]); // 80152D20
  W8(c->r[4]+0x00000009u,c->r[6]); // 80152D24
  W8(c->r[4]+0x0000000Au,c->r[3]); // 80152D28
  W8(c->r[4]+0x0000000Bu,c->r[7]); // 80152D2C
  W8(c->r[4]+0x0000000Cu,c->r[3]); // 80152D30
  W8(c->r[4]+0x0000000Du,c->r[6]); // 80152D34
  W8(c->r[4]+0x0000000Eu,c->r[3]); // 80152D38
  W8(c->r[4]+0x0000000Fu,c->r[7]); // 80152D3C
  W8(c->r[4]+0x00000010u,c->r[3]); // 80152D40
  W8(c->r[4]+0x00000011u,c->r[6]); // 80152D44
  W8(c->r[4]+0x00000012u,c->r[3]); // 80152D48
  W8(c->r[4]+0x00000013u,c->r[7]); // 80152D4C
  W8(c->r[4]+0x00000014u,c->r[3]); // 80152D50
  W8(c->r[4]+0x00000015u,c->r[6]); // 80152D54
  W8(c->r[4]+0x00000016u,c->r[3]); // 80152D58
  W8(c->r[4]+0x00000017u,c->r[7]); // 80152D5C
  W8(c->r[4]+0x00000018u,c->r[3]); // 80152D60
  W8(c->r[4]+0x00000019u,c->r[6]); // 80152D64
  W8(c->r[4]+0x0000001Au,c->r[3]); // 80152D68
  W8(c->r[4]+0x0000001Bu,c->r[7]); // 80152D6C
  W8(c->r[4]+0x0000001Cu,c->r[3]); // 80152D70
  W8(c->r[4]+0x0000001Du,c->r[6]); // 80152D74
  W8(c->r[4]+0x0000001Eu,c->r[3]); // 80152D78
  W8(c->r[4]+0x0000001Fu,c->r[7]); // 80152D7C
  W8(c->r[4]+0x00000020u,c->r[3]); // 80152D80
  W8(c->r[4]+0x00000021u,c->r[6]); // 80152D84
  W8(c->r[4]+0x00000022u,c->r[3]); // 80152D88
  W8(c->r[4]+0x00000023u,c->r[7]); // 80152D8C
  W8(c->r[4]+0x00000024u,c->r[3]); // 80152D90
  W8(c->r[4]+0x00000025u,c->r[6]); // 80152D94
  W8(c->r[4]+0x00000026u,c->r[3]); // 80152D98
  W8(c->r[4]+0x00000027u,c->r[7]); // 80152D9C
  W8(c->r[4]+0x00000028u,c->r[3]); // 80152DA0
  W8(c->r[4]+0x00000029u,c->r[6]); // 80152DA4
  W8(c->r[4]+0x0000002Au,c->r[3]); // 80152DA8
  W8(c->r[4]+0x0000002Bu,c->r[7]); // 80152DAC
  W8(c->r[4]+0x0000002Cu,c->r[3]); // 80152DB0
  W8(c->r[4]+0x0000002Du,c->r[6]); // 80152DB4
  W8(c->r[4]+0x0000002Eu,c->r[3]); // 80152DB8
  W8(c->r[4]+0x0000002Fu,c->r[7]); // 80152DBC
  W8(c->r[4]+0x00000030u,c->r[3]); // 80152DC0
  W8(c->r[4]+0x00000031u,c->r[6]); // 80152DC4
  W8(c->r[4]+0x00000032u,c->r[3]); // 80152DC8
  W8(c->r[4]+0x00000033u,c->r[7]); // 80152DCC
  W8(c->r[4]+0x00000034u,c->r[3]); // 80152DD0
  W8(c->r[4]+0x00000035u,c->r[6]); // 80152DD4
  W8(c->r[4]+0x00000036u,c->r[3]); // 80152DD8
  W8(c->r[4]+0x00000037u,c->r[7]); // 80152DDC
  W8(c->r[4]+0x00000038u,c->r[3]); // 80152DE0
  W8(c->r[4]+0x00000039u,c->r[6]); // 80152DE4
  W8(c->r[4]+0x0000003Au,c->r[3]); // 80152DE8
  W8(c->r[4]+0x0000003Bu,c->r[7]); // 80152DEC
  W8(c->r[4]+0x0000003Cu,c->r[3]); // 80152DF0
  W8(c->r[4]+0x0000003Du,c->r[6]); // 80152DF4
  W8(c->r[4]+0x0000003Eu,c->r[3]); // 80152DF8
  W8(c->r[4]+0x0000003Fu,c->r[7]); // 80152DFC
  c->r[4]=c->r[4]+0x00000040u; // 80152E00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80152D00; } // 80152E04
  c->r[5]=c->r[5]+0x00000001u; // 80152E08
  cmps(c,0,(int32_t)c->r[5],480); // 80152E0C
  if (crb(c,0)) { IRQCHK(c); goto L_80152CFC; } // 80152E10
  c->r[3]=c->r[30]|c->r[30]; // 80152E14
  c->lr=0x80152E1Cu; f_80161194(c); // 80152E18
  c->r[3]=0u+0x00000280u; // 80152E1C
  c->r[4]=0u+0x000001E0u; // 80152E20
  c->lr=0x80152E28u; f_8015277C(c); // 80152E24
  c->lr=0x80152E2Cu; f_80161080(c); // 80152E28
  c->lr=0x80152E30u; f_80161278(c); // 80152E2C
  c->r[28]=c->r[3]|c->r[3]; // 80152E30
L_80152E34:;
  c->lr=0x80152E38u; f_80161278(c); // 80152E34
  c->r[0]=c->r[3]-c->r[28]; // 80152E38
  cmps(c,0,(int32_t)c->r[0],2); // 80152E3C
  if (crb(c,0)) { IRQCHK(c); goto L_80152E34; } // 80152E40
  c->r[3]=R8(c->r[29]+0x00000002u); // 80152E44
  c->r[5]=R8(c->r[29]+0x00000000u); // 80152E48
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80152E4C
  c->r[4]=R8(c->r[29]+0x00000001u); // 80152E50
  W32(c->r[1]+0x00000024u,c->r[5]); // 80152E54
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=RF64(ea);} // 80152E58
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 80152E5C
  {uint32_t ea=c->r[2]+0xFFFFA970u; c->f[0]=RF64(ea);} // 80152E60
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 80152E64
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 80152E68
  {uint32_t ea=c->r[2]+0xFFFFA944u; c->f[2]=c->ps1[2]=RF32(ea);} // 80152E6C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 80152E70
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[0]); // 80152E74
  W32(c->r[1]+0x00000024u,c->r[3]); // 80152E78
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 80152E7C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 80152E80
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[3]); // 80152E84
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 80152E88
  {uint32_t ea=c->r[2]+0xFFFFA948u; c->f[4]=c->ps1[4]=RF32(ea);} // 80152E8C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80152E90
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 80152E94
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 80152E98
  W32(c->r[1]+0x00000024u,c->r[4]); // 80152E9C
  {uint32_t ea=c->r[2]+0xFFFFA940u; c->f[5]=c->ps1[5]=RF32(ea);} // 80152EA0
  c->f[9]=c->ps1[9]=S(c->f[2]-c->f[0]); // 80152EA4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 80152EA8
  c->f[13]=c->ps1[13]=S(c->f[5]*c->f[7]); // 80152EAC
  {uint32_t ea=c->r[2]+0xFFFFA950u; c->f[11]=c->ps1[11]=RF32(ea);} // 80152EB0
  c->f[12]=c->ps1[12]=S(c->f[6]+c->f[4]); // 80152EB4
  {uint32_t ea=c->r[2]+0xFFFFA954u; c->f[8]=c->ps1[8]=RF32(ea);} // 80152EB8
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[0]); // 80152EBC
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 80152EC0
  c->f[10]=c->ps1[10]=S(c->f[11]*c->f[3]); // 80152EC4
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[6]=c->ps1[6]=RF32(ea);} // 80152EC8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 80152ECC
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 80152ED0
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[7]); // 80152ED4
  W32(c->r[1]+0x00000024u,c->r[4]); // 80152ED8
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 80152EDC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 80152EE0
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80152EE4
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 80152EE8
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80152EEC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 80152EF0
  c->f[5]=c->ps1[5]=S(c->f[11]*c->f[5]); // 80152EF4
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152EF8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80152EFC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[4]); // 80152F00
  c->r[0]=R8(c->r[29]+0x00000003u); // 80152F04
  c->f[3]=c->ps1[3]=S(c->f[13]+c->f[12]); // 80152F08
  c->f[4]=c->ps1[4]=S(c->f[8]-c->f[6]); // 80152F0C
  {uint32_t ea=c->r[2]+0xFFFFA93Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 80152F10
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[2]); // 80152F14
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80152F18
  {uint32_t ea=c->r[2]+0xFFFFA938u; c->f[5]=c->ps1[5]=RF32(ea);} // 80152F1C
  c->f[6]=c->ps1[6]=S(c->f[9]+c->f[3]); // 80152F20
  c->f[1]=c->ps1[1]=S(c->f[10]+c->f[4]); // 80152F24
  {uint32_t ea=c->r[2]+0xFFFFA94Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80152F28
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80152F2C
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[6]); // 80152F30
  {uint32_t ea=c->r[2]+0xFFFFA964u; c->f[7]=c->ps1[7]=RF32(ea);} // 80152F34
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 80152F38
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 80152F3C
  W8(c->r[1]+0x00000010u,c->r[5]); // 80152F40
  fcmp(c,0,c->f[4],c->f[7]); // 80152F44
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[1]); // 80152F48
  W8(c->r[1]+0x00000011u,c->r[4]); // 80152F4C
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[0]); // 80152F50
  W8(c->r[1]+0x00000012u,c->r[3]); // 80152F54
  W8(c->r[1]+0x00000013u,c->r[0]); // 80152F58
  if (!crb(c,1)) { goto L_80152F64; } // 80152F5C
  goto L_80152F78; // 80152F60
L_80152F64:;
  fcmp(c,0,c->f[4],c->f[9]); // 80152F64
  if (!crb(c,0)) { goto L_80152F70; } // 80152F68
  goto L_80152F74; // 80152F6C
L_80152F70:;
  c->f[9]=c->f[4]; // 80152F70
L_80152F74:;
  c->f[7]=c->f[9]; // 80152F74
L_80152F78:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[7],true)); // 80152F78
  {uint32_t ea=c->r[2]+0xFFFFA968u; c->f[3]=c->ps1[3]=RF32(ea);} // 80152F7C
  fcmp(c,0,c->f[2],c->f[3]); // 80152F80
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80152F84
  c->r[0]=R32(c->r[1]+0x00000034u); // 80152F88
  W8(c->r[1]+0x00000008u,c->r[0]); // 80152F8C
  if (!crb(c,1)) { goto L_80152F98; } // 80152F90
  goto L_80152FAC; // 80152F94
L_80152F98:;
  {uint32_t ea=c->r[2]+0xFFFFA93Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80152F98
  fcmp(c,0,c->f[2],c->f[3]); // 80152F9C
  if (!crb(c,0)) { goto L_80152FA8; } // 80152FA0
  goto L_80152FAC; // 80152FA4
L_80152FA8:;
  c->f[3]=c->f[2]; // 80152FA8
L_80152FAC:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80152FAC
  {uint32_t ea=c->r[2]+0xFFFFA968u; c->f[2]=c->ps1[2]=RF32(ea);} // 80152FB0
  fcmp(c,0,c->f[1],c->f[2]); // 80152FB4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80152FB8
  c->r[0]=R32(c->r[1]+0x00000034u); // 80152FBC
  W8(c->r[1]+0x00000009u,c->r[0]); // 80152FC0
  if (!crb(c,1)) { goto L_80152FCC; } // 80152FC4
  goto L_80152FE0; // 80152FC8
L_80152FCC:;
  {uint32_t ea=c->r[2]+0xFFFFA93Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80152FCC
  fcmp(c,0,c->f[1],c->f[2]); // 80152FD0
  if (!crb(c,0)) { goto L_80152FDC; } // 80152FD4
  goto L_80152FE0; // 80152FD8
L_80152FDC:;
  c->f[2]=c->f[1]; // 80152FDC
L_80152FE0:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80152FE0
  c->r[0]=0u+0x00000000u; // 80152FE4
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80152FE8
  c->r[3]=c->r[30]|c->r[30]; // 80152FEC
  c->r[10]=R32(c->r[29]+0x00000008u); // 80152FF0
  c->r[6]=c->r[1]+0x00000014u; // 80152FF4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80152FF8
  c->r[4]=0u+0x00000280u; // 80152FFC
  c->r[5]=0u+0x000001E0u; // 80153000
  c->r[7]=0u+0x00000030u; // 80153004
  c->r[0]=R32(c->r[1]+0x00000034u); // 80153008
  c->r[8]=0u+0x00000064u; // 8015300C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80153010
  c->r[0]=R32(c->r[1]+0x00000008u); // 80153014
  W32(c->r[1]+0x00000014u,c->r[0]); // 80153018
  c->r[9]=R16(c->r[31]+0x0000000Eu); // 8015301C
  c->lr=0x80153024u; f_80152458(c); // 80153020
  c->r[4]=0u+0x00090000u; // 80153024
  c->r[3]=c->r[30]|c->r[30]; // 80153028
  c->r[4]=c->r[4]+0x00006000u; // 8015302C
  c->lr=0x80153034u; f_8014F83C(c); // 80153030
  c->r[3]=0u+0x00000000u; // 80153034
  c->lr=0x8015303Cu; f_80161200(c); // 80153038
  c->lr=0x80153040u; f_80161080(c); // 8015303C
  c->lr=0x80153044u; f_80161278(c); // 80153040
  c->r[30]=c->r[3]|c->r[3]; // 80153044
L_80153048:;
  c->lr=0x8015304Cu; f_80161278(c); // 80153048
  c->r[0]=c->r[3]-c->r[30]; // 8015304C
  cmps(c,0,(int32_t)c->r[0],1); // 80153050
  if (crb(c,0)) { IRQCHK(c); goto L_80153048; } // 80153054
  c->lr=0x8015305Cu; f_80154410(c); // 80153058
  c->r[4]=R32(c->r[29]+0x00000008u); // 8015305C
  c->r[3]=c->r[13]+0xFFFF8FD0u; // 80153060
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80153064
  c->lr=0x8015306Cu; f_801506B4(c); // 80153068
  c->lr=0x80153070u; f_8014D294(c); // 8015306C
  c->r[0]=R32(c->r[1]+0x00000054u); // 80153070
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80153074
  c->r[30]=R32(c->r[1]+0x00000048u); // 80153078
  c->r[29]=R32(c->r[1]+0x00000044u); // 8015307C
  c->r[28]=R32(c->r[1]+0x00000040u); // 80153080
  c->lr=c->r[0]; // 80153084
  c->r[1]=c->r[1]+0x00000050u; // 80153088
  return; // 8015308C
}

// GetFontCode
void f_80153090(Ctx* __restrict c) {
  trace_call(0x80153090u);
  cmpu(c,0,c->r[3],0x00000001u); // 80153090
  if (!crb(c,2)) { goto L_801531A4; } // 80153094
  cmpu(c,0,c->r[4],0x00000020u); // 80153098
  if (crb(c,0)) { goto L_801530C0; } // 8015309C
  cmpu(c,0,c->r[4],0x000000DFu); // 801530A0
  if (crb(c,1)) { goto L_801530C0; } // 801530A4
  c->r[0]=c->r[4]+0xFFFFFFE0u; // 801530A8
  c->r[3]=0u+0x802C0000u; // 801530AC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801530B0
  c->r[3]=c->r[3]+0x00007478u; // 801530B4
  c->r[3]=R16(c->r[3]+c->r[0]); // 801530B8
  return; // 801530BC
L_801530C0:;
  cmpu(c,0,c->r[4],0x0000889Eu); // 801530C0
  if (!crb(c,1)) { goto L_8015312C; } // 801530C4
  cmpu(c,0,c->r[4],0x00009872u); // 801530C8
  if (crb(c,1)) { goto L_8015312C; } // 801530CC
  c->r[3]=rotl(c->r[4],24)&0x000000FFu; // 801530D0
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 801530D4
  c->r[3]=c->r[3]+0xFFFFFF78u; // 801530D8
  c->r[0]=0u+0x00000000u; // 801530DC
  cmpu(c,0,c->r[4],0x00000040u); // 801530E0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 801530E4
  if (crb(c,0)) { goto L_80153100; } // 801530E8
  cmpu(c,0,c->r[4],0x000000FCu); // 801530EC
  if (crb(c,1)) { goto L_80153100; } // 801530F0
  cmpu(c,0,c->r[4],0x0000007Fu); // 801530F4
  if (crb(c,2)) { goto L_80153100; } // 801530F8
  c->r[0]=0u+0x00000001u; // 801530FC
L_80153100:;
  cmps(c,0,(int32_t)c->r[0],0); // 80153100
  if (!crb(c,2)) { goto L_80153110; } // 80153104
  c->r[3]=0u+0x00000000u; // 80153108
  return; // 8015310C
L_80153110:;
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 80153110
  cmps(c,0,(int32_t)c->r[4],64); // 80153114
  if (crb(c,0)) { goto L_80153120; } // 80153118
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8015311C
L_80153120:;
  c->r[3]=c->r[3]+c->r[4]; // 80153120
  c->r[3]=c->r[3]+0x000002BEu; // 80153124
  return; // 80153128
L_8015312C:;
  cmpu(c,0,c->r[4],0x00008140u); // 8015312C
  if (crb(c,0)) { goto L_801531BC; } // 80153130
  cmpu(c,0,c->r[4],0x0000879Eu); // 80153134
  if (!crb(c,0)) { goto L_801531BC; } // 80153138
  c->r[3]=rotl(c->r[4],24)&0x000000FFu; // 8015313C
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 80153140
  c->r[3]=c->r[3]+0xFFFFFF7Fu; // 80153144
  c->r[0]=0u+0x00000000u; // 80153148
  cmpu(c,0,c->r[4],0x00000040u); // 8015314C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 80153150
  if (crb(c,0)) { goto L_8015316C; } // 80153154
  cmpu(c,0,c->r[4],0x000000FCu); // 80153158
  if (crb(c,1)) { goto L_8015316C; } // 8015315C
  cmpu(c,0,c->r[4],0x0000007Fu); // 80153160
  if (crb(c,2)) { goto L_8015316C; } // 80153164
  c->r[0]=0u+0x00000001u; // 80153168
L_8015316C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8015316C
  if (!crb(c,2)) { goto L_8015317C; } // 80153170
  c->r[3]=0u+0x00000000u; // 80153174
  return; // 80153178
L_8015317C:;
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 8015317C
  cmps(c,0,(int32_t)c->r[4],64); // 80153180
  if (crb(c,0)) { goto L_8015318C; } // 80153184
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80153188
L_8015318C:;
  c->r[0]=c->r[3]+c->r[4]; // 8015318C
  c->r[3]=0u+0x802C0000u; // 80153190
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80153194
  c->r[3]=c->r[3]+0x000075F8u; // 80153198
  c->r[3]=R16(c->r[3]+c->r[0]); // 8015319C
  return; // 801531A0
L_801531A4:;
  cmpu(c,0,c->r[4],0x00000020u); // 801531A4
  if (!crb(c,1)) { goto L_801531BC; } // 801531A8
  cmpu(c,0,c->r[4],0x000000FFu); // 801531AC
  if (crb(c,1)) { goto L_801531BC; } // 801531B0
  c->r[3]=c->r[4]+0xFFFFFFE0u; // 801531B4
  return; // 801531B8
L_801531BC:;
  c->r[3]=0u+0x00000000u; // 801531BC
  return; // 801531C0
}

// Decode
void f_801531C4(Ctx* __restrict c) {
  trace_call(0x801531C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801531C4
  c->r[0]=c->lr; // 801531C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801531CC
  c->r[11]=c->r[1]+0x00000020u; // 801531D0
  c->lr=0x801531D8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801531D4
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 801531D8
  c->r[30]=c->r[3]+0x00000010u; // 801531DC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801531E0
  c->r[8]=0u+0x00000000u; // 801531E4
  c->r[29]=c->r[3]+c->r[5]; // 801531E8
  c->r[9]=R32(c->r[3]+0x00000008u); // 801531EC
  c->r[11]=0u+0x00000000u; // 801531F0
  c->r[5]=0u+0x80000000u; // 801531F4
L_801531F8:;
  cmps(c,0,(int32_t)c->r[11],0); // 801531F8
  if (!crb(c,2)) { goto L_8015320C; } // 801531FC
  c->r[12]=R32(c->r[30]+0x00000000u); // 80153200
  c->r[11]=0u+0x00000020u; // 80153204
  c->r[30]=c->r[30]+0x00000004u; // 80153208
L_8015320C:;
  c->r[6]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[6]); // 8015320C
  if (crb(c,2)) { goto L_80153228; } // 80153210
  c->r[6]=R8(c->r[29]+0x00000000u); // 80153214
  c->r[29]=c->r[29]+0x00000001u; // 80153218
  W8(c->r[4]+c->r[8],c->r[6]); // 8015321C
  c->r[8]=c->r[8]+0x00000001u; // 80153220
  goto L_80153340; // 80153224
L_80153228:;
  c->r[7]=c->r[3]+c->r[9]; // 80153228
  c->r[6]=R8(c->r[3]+c->r[9]); // 8015322C
  c->r[7]=R8(c->r[7]+0x00000001u); // 80153230
  c->r[9]=c->r[9]+0x00000002u; // 80153234
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 80153238
  c->r[10]=sraw(c,c->r[7],12); cr0(c,c->r[10]); // 8015323C
  c->r[6]=rotl(c->r[7],0)&0x00000FFFu; // 80153240
  c->r[7]=c->r[8]-c->r[6]; // 80153244
  if (!crb(c,2)) { goto L_8015325C; } // 80153248
  c->r[6]=R8(c->r[29]+0x00000000u); // 8015324C
  c->r[29]=c->r[29]+0x00000001u; // 80153250
  c->r[10]=c->r[6]+0x00000012u; // 80153254
  goto L_80153260; // 80153258
L_8015325C:;
  c->r[10]=c->r[10]+0x00000002u; // 8015325C
L_80153260:;
  cmps(c,1,(int32_t)c->r[10],0); // 80153260
  c->r[6]=0u+0x00000000u; // 80153264
  if (!crb(c,5)) { goto L_80153340; } // 80153268
  cmps(c,0,(int32_t)c->r[10],8); // 8015326C
  c->r[27]=c->r[10]+0xFFFFFFF8u; // 80153270
  if (!crb(c,1)) { goto L_8015330C; } // 80153274
  c->r[28]=0u+0x00000000u; // 80153278
  if (crb(c,4)) { goto L_80153290; } // 8015327C
  c->r[26]=c->r[5]+0xFFFFFFFEu; // 80153280
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[26]); // 80153284
  if (crb(c,1)) { goto L_80153290; } // 80153288
  c->r[28]=0u+0x00000001u; // 8015328C
L_80153290:;
  cmps(c,0,(int32_t)c->r[28],0); // 80153290
  if (crb(c,2)) { goto L_8015330C; } // 80153294
  c->r[31]=c->r[27]+0x00000007u; // 80153298
  c->r[28]=c->r[4]+c->r[8]; // 8015329C
  c->r[31]=rotl(c->r[31],29)&0x1FFFFFFFu; // 801532A0
  c->ctr=c->r[31]; // 801532A4
  cmps(c,0,(int32_t)c->r[27],0); // 801532A8
  if (!crb(c,1)) { goto L_8015330C; } // 801532AC
L_801532B0:;
  c->r[26]=c->r[4]+c->r[7]; // 801532B0
  c->r[27]=c->r[8]+c->r[4]; // 801532B4
  c->r[31]=R8(c->r[26]+0xFFFFFFFFu); // 801532B8
  c->r[8]=c->r[8]+0x00000008u; // 801532BC
  c->r[6]=c->r[6]+0x00000008u; // 801532C0
  W8(c->r[28]+0x00000000u,c->r[31]); // 801532C4
  c->r[28]=c->r[28]+0x00000008u; // 801532C8
  c->r[31]=R8(c->r[4]+c->r[7]); // 801532CC
  c->r[7]=c->r[7]+0x00000008u; // 801532D0
  W8(c->r[27]+0x00000001u,c->r[31]); // 801532D4
  c->r[31]=R8(c->r[26]+0x00000001u); // 801532D8
  W8(c->r[27]+0x00000002u,c->r[31]); // 801532DC
  c->r[31]=R8(c->r[26]+0x00000002u); // 801532E0
  W8(c->r[27]+0x00000003u,c->r[31]); // 801532E4
  c->r[31]=R8(c->r[26]+0x00000003u); // 801532E8
  W8(c->r[27]+0x00000004u,c->r[31]); // 801532EC
  c->r[31]=R8(c->r[26]+0x00000004u); // 801532F0
  W8(c->r[27]+0x00000005u,c->r[31]); // 801532F4
  c->r[31]=R8(c->r[26]+0x00000005u); // 801532F8
  W8(c->r[27]+0x00000006u,c->r[31]); // 801532FC
  c->r[31]=R8(c->r[26]+0x00000006u); // 80153300
  W8(c->r[27]+0x00000007u,c->r[31]); // 80153304
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801532B0; } // 80153308
L_8015330C:;
  c->r[31]=c->r[10]-c->r[6]; // 8015330C
  c->r[28]=c->r[4]+c->r[8]; // 80153310
  c->ctr=c->r[31]; // 80153314
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[10]); // 80153318
  if (!crb(c,0)) { goto L_80153340; } // 8015331C
L_80153320:;
  c->r[10]=c->r[4]+c->r[7]; // 80153320
  c->r[6]=c->r[6]+0x00000001u; // 80153324
  c->r[10]=R8(c->r[10]+0xFFFFFFFFu); // 80153328
  c->r[8]=c->r[8]+0x00000001u; // 8015332C
  c->r[7]=c->r[7]+0x00000001u; // 80153330
  W8(c->r[28]+0x00000000u,c->r[10]); // 80153334
  c->r[28]=c->r[28]+0x00000001u; // 80153338
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80153320; } // 8015333C
L_80153340:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80153340
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 80153344
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 80153348
  if (crb(c,0)) { IRQCHK(c); goto L_801531F8; } // 8015334C
  c->r[11]=c->r[1]+0x00000020u; // 80153350
  c->lr=0x80153358u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80153354
  c->r[0]=R32(c->r[1]+0x00000024u); // 80153358
  c->lr=c->r[0]; // 8015335C
  c->r[1]=c->r[1]+0x00000020u; // 80153360
  return; // 80153364
}

// OSGetFontEncode
void f_80153368(Ctx* __restrict c) {
  trace_call(0x80153368u);
  c->r[3]=R16(c->r[13]+0xFFFF8FD8u); // 80153368
  cmpu(c,0,c->r[3],0x0000FFFFu); // 8015336C
  if (!crb(c,2)) return; // 80153370
  c->r[3]=0u+0x80000000u; // 80153374
  c->r[0]=R32(c->r[3]+0x000000CCu); // 80153378
  cmps(c,0,(int32_t)c->r[0],0); // 8015337C
  if (crb(c,2)) { goto L_8015338C; } // 80153380
  if (crb(c,0)) { goto L_801533A0; } // 80153384
  goto L_801533A0; // 80153388
L_8015338C:;
  c->r[3]=0u+0xCC000000u; // 8015338C
  c->r[0]=R16(c->r[3]+0x0000206Eu); // 80153390
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 80153394
  W16(c->r[13]+0xFFFF8FD8u,c->r[0]); // 80153398
  goto L_801533A8; // 8015339C
L_801533A0:;
  c->r[0]=0u+0x00000000u; // 801533A0
  W16(c->r[13]+0xFFFF8FD8u,c->r[0]); // 801533A4
L_801533A8:;
  c->r[4]=0u+0x80150000u; // 801533A8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801533AC
  c->r[4]=c->r[4]+0x00003864u; // 801533B0
  W32(c->r[13]+0xFFFFAA10u,c->r[4]); // 801533B4
  return; // 801533B8
}

// OSSetFontEncode
void f_801533BC(Ctx* __restrict c) {
  trace_call(0x801533BCu);
  c->r[0]=R16(c->r[13]+0xFFFF8FD8u); // 801533BC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801533C0
  if (crb(c,2)) { goto L_801533CC; } // 801533C4
  goto L_80153410; // 801533C8
L_801533CC:;
  c->r[4]=0u+0x80000000u; // 801533CC
  c->r[0]=R32(c->r[4]+0x000000CCu); // 801533D0
  cmps(c,0,(int32_t)c->r[0],0); // 801533D4
  if (crb(c,2)) { goto L_801533E4; } // 801533D8
  if (crb(c,0)) { goto L_801533F8; } // 801533DC
  goto L_801533F8; // 801533E0
L_801533E4:;
  c->r[4]=0u+0xCC000000u; // 801533E4
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 801533E8
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 801533EC
  W16(c->r[13]+0xFFFF8FD8u,c->r[0]); // 801533F0
  goto L_80153400; // 801533F4
L_801533F8:;
  c->r[0]=0u+0x00000000u; // 801533F8
  W16(c->r[13]+0xFFFF8FD8u,c->r[0]); // 801533FC
L_80153400:;
  c->r[4]=0u+0x80150000u; // 80153400
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80153404
  c->r[4]=c->r[4]+0x00003864u; // 80153408
  W32(c->r[13]+0xFFFFAA10u,c->r[4]); // 8015340C
L_80153410:;
  cmpu(c,1,c->r[3],0x00000005u); // 80153410
  if (crb(c,5)) { goto L_80153434; } // 80153414
  cmpu(c,0,c->r[3],0x00000003u); // 80153418
  W16(c->r[13]+0xFFFF8FD8u,c->r[3]); // 8015341C
  if (crb(c,0)) { goto L_80153434; } // 80153420
  if (crb(c,5)) { goto L_80153434; } // 80153424
  c->r[3]=0u+0x80150000u; // 80153428
  c->r[3]=c->r[3]+0x00003960u; // 8015342C
  W32(c->r[13]+0xFFFFAA10u,c->r[3]); // 80153430
L_80153434:;
  c->r[3]=c->r[0]|c->r[0]; // 80153434
  return; // 80153438
}

// ReadFont
void f_8015343C(Ctx* __restrict c) {
  trace_call(0x8015343Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015343C
  c->r[0]=c->lr; // 80153440
  W32(c->r[1]+0x00000034u,c->r[0]); // 80153444
  c->r[11]=c->r[1]+0x00000030u; // 80153448
  c->lr=0x80153450u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8015344C
  cmpu(c,0,c->r[4],0x00000001u); // 80153450
  c->r[28]=c->r[3]|c->r[3]; // 80153454
  c->r[29]=c->r[4]|c->r[4]; // 80153458
  c->r[26]=c->r[5]|c->r[5]; // 8015345C
  if (!crb(c,2)) { goto L_801534BC; } // 80153460
  c->r[4]=0u+0x001B0000u; // 80153464
  c->r[3]=0u+0x00050000u; // 80153468
  c->r[27]=c->r[28]|c->r[28]; // 8015346C
  c->r[31]=c->r[4]+0xFFFFFF00u; // 80153470
  c->r[30]=c->r[3]+0xFFFFD000u; // 80153474
  goto L_801534B0; // 80153478
L_8015347C:;
  cmps(c,0,(int32_t)c->r[30],256); // 8015347C
  c->r[25]=0u+0x00000100u; // 80153480
  if (crb(c,1)) { goto L_8015348C; } // 80153484
  c->r[25]=c->r[30]|c->r[30]; // 80153488
L_8015348C:;
  c->r[30]=c->r[30]-c->r[25]; // 8015348C
L_80153490:;
  c->r[3]=c->r[27]|c->r[27]; // 80153490
  c->r[4]=c->r[25]|c->r[25]; // 80153494
  c->r[5]=c->r[31]|c->r[31]; // 80153498
  c->lr=0x801534A0u; f_801569F0(c); // 8015349C
  cmps(c,0,(int32_t)c->r[3],0); // 801534A0
  if (crb(c,2)) { IRQCHK(c); goto L_80153490; } // 801534A4
  c->r[31]=c->r[31]+c->r[25]; // 801534A8
  c->r[27]=c->r[27]+c->r[25]; // 801534AC
L_801534B0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801534B0
  if (crb(c,1)) { IRQCHK(c); goto L_8015347C; } // 801534B4
  goto L_8015350C; // 801534B8
L_801534BC:;
  c->r[3]=0u+0x00200000u; // 801534BC
  c->r[27]=c->r[28]|c->r[28]; // 801534C0
  c->r[31]=c->r[3]+0xFFFFCF00u; // 801534C4
  c->r[30]=0u+0x00003000u; // 801534C8
  goto L_80153504; // 801534CC
L_801534D0:;
  cmps(c,0,(int32_t)c->r[30],256); // 801534D0
  c->r[25]=0u+0x00000100u; // 801534D4
  if (crb(c,1)) { goto L_801534E0; } // 801534D8
  c->r[25]=c->r[30]|c->r[30]; // 801534DC
L_801534E0:;
  c->r[30]=c->r[30]-c->r[25]; // 801534E0
L_801534E4:;
  c->r[3]=c->r[27]|c->r[27]; // 801534E4
  c->r[4]=c->r[25]|c->r[25]; // 801534E8
  c->r[5]=c->r[31]|c->r[31]; // 801534EC
  c->lr=0x801534F4u; f_801569F0(c); // 801534F0
  cmps(c,0,(int32_t)c->r[3],0); // 801534F4
  if (crb(c,2)) { IRQCHK(c); goto L_801534E4; } // 801534F8
  c->r[31]=c->r[31]+c->r[25]; // 801534FC
  c->r[27]=c->r[27]+c->r[25]; // 80153500
L_80153504:;
  cmps(c,0,(int32_t)c->r[30],0); // 80153504
  if (crb(c,1)) { IRQCHK(c); goto L_801534D0; } // 80153508
L_8015350C:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 8015350C
  cmpu(c,0,c->r[0],0x00000059u); // 80153510
  if (!crb(c,2)) { goto L_80153538; } // 80153514
  c->r[0]=R8(c->r[28]+0x00000001u); // 80153518
  cmpu(c,0,c->r[0],0x00000061u); // 8015351C
  if (!crb(c,2)) { goto L_80153538; } // 80153520
  c->r[0]=R8(c->r[28]+0x00000002u); // 80153524
  cmpu(c,0,c->r[0],0x00000079u); // 80153528
  if (!crb(c,2)) { goto L_80153538; } // 8015352C
  c->r[27]=R32(c->r[28]+0x00000004u); // 80153530
  goto L_8015353C; // 80153534
L_80153538:;
  c->r[27]=0u+0x00000000u; // 80153538
L_8015353C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8015353C
  if (!crb(c,2)) { goto L_8015354C; } // 80153540
  c->r[3]=0u+0x00000000u; // 80153544
  goto L_80153724; // 80153548
L_8015354C:;
  c->r[3]=c->r[28]|c->r[28]; // 8015354C
  c->r[4]=c->r[26]|c->r[26]; // 80153550
  c->lr=0x80153558u; f_801531C4(c); // 80153554
  cmpu(c,0,c->r[29],0x00000001u); // 80153558
  if (!crb(c,2)) { goto L_80153720; } // 8015355C
  c->r[3]=c->r[29]|c->r[29]; // 80153560
  c->r[28]=R16(c->r[2]+0xFFFFA978u); // 80153564
  c->r[29]=R16(c->r[2]+0xFFFFA97Au); // 80153568
  c->r[4]=0u+0x00000054u; // 8015356C
  c->r[30]=R16(c->r[2]+0xFFFFA97Cu); // 80153570
  c->r[31]=R16(c->r[2]+0xFFFFA97Eu); // 80153574
  c->lr=0x8015357Cu; f_80153090(c); // 80153578
  c->r[9]=R16(c->r[26]+0x0000001Au); // 8015357C
  c->r[4]=R16(c->r[26]+0x0000001Cu); // 80153580
  c->r[0]=R16(c->r[26]+0x0000001Eu); // 80153584
  c->r[10]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[4]); // 80153588
  c->r[5]=R32(c->r[26]+0x00000024u); // 8015358C
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFE0u; // 80153590
  c->r[6]=R16(c->r[26]+0x00000012u); // 80153594
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 80153598
  c->r[7]=R16(c->r[26]+0x00000010u); // 8015359C
  c->r[12]=divw((int32_t)c->r[3],(int32_t)c->r[10]); // 801535A0
  c->r[0]=c->r[0]+c->r[4]; // 801535A4
  c->r[4]=c->r[26]+c->r[5]; // 801535A8
  c->r[8]=R32(c->r[26]+0x00000014u); // 801535AC
  c->r[11]=sraw(c,c->r[0],1); // 801535B0
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[10]); // 801535B4
  c->r[3]=c->r[3]-c->r[0]; // 801535B8
  c->r[5]=divw((int32_t)c->r[3],(int32_t)c->r[9]); // 801535BC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[9]); // 801535C0
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 801535C4
  c->r[25]=c->r[3]-c->r[0]; // 801535C8
  c->r[6]=c->r[5]+0x00000004u; // 801535CC
  c->r[25]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[7]); // 801535D0
  c->r[10]=c->r[5]+0x00000005u; // 801535D4
  c->r[3]=sraw(c,c->r[6],3); // 801535D8
  c->r[0]=rotl(c->r[6],29)&0xE0000000u; // 801535DC
  c->r[9]=addc(c,c->r[3],0,c->xer_ca); // 801535E0
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 801535E4
  c->r[12]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[8]); // 801535E8
  c->r[3]=sraw(c,c->r[25],3); // 801535EC
  c->r[0]=c->r[0]-c->r[7]; // 801535F0
  c->r[8]=addc(c,c->r[3],0,c->xer_ca); // 801535F4
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFFFu; // 801535F8
  c->r[0]=rotl(c->r[25],29)&0xE0000000u; // 801535FC
  c->r[6]=rotl(c->r[25],1)&0x00000001u; // 80153600
  c->r[12]=rotl(c->r[12],31)&0x7FFFFFFFu; // 80153604
  c->r[9]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[9]); // 80153608
  c->r[7]=c->r[3]+c->r[7]; // 8015360C
  c->r[0]=c->r[0]-c->r[6]; // 80153610
  c->r[4]=c->r[4]+c->r[12]; // 80153614
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFFFu; // 80153618
  c->r[0]=rotl(c->r[8],4)&0xFFFFFFF0u; // 8015361C
  c->r[3]=c->r[3]+c->r[6]; // 80153620
  c->r[9]=c->r[4]+c->r[9]; // 80153624
  c->r[8]=rotl(c->r[7],1)&0xFFFFFFFEu; // 80153628
  c->r[6]=rotl(c->r[10],29)&0xE0000000u; // 8015362C
  c->r[3]=sraw(c,c->r[3],2); // 80153630
  c->r[9]=c->r[9]+c->r[0]; // 80153634
  c->r[9]=c->r[9]+c->r[8]; // 80153638
  c->r[7]=rotl(c->r[10],1)&0x00000001u; // 8015363C
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 80153640
  c->r[8]=c->r[5]+0x00000006u; // 80153644
  W16(c->r[9]+c->r[3],c->r[28]); // 80153648
  c->r[6]=c->r[6]-c->r[7]; // 8015364C
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 80153650
  c->r[6]=c->r[6]+c->r[7]; // 80153654
  c->r[11]=R16(c->r[26]+0x0000001Eu); // 80153658
  c->r[9]=rotl(c->r[6],1)&0xFFFFFFFEu; // 8015365C
  c->r[7]=rotl(c->r[8],1)&0x00000001u; // 80153660
  c->r[12]=rotl(c->r[11],2)&0xFFFFFFE0u; // 80153664
  c->r[11]=rotl(c->r[11],3)&0x00000001u; // 80153668
  c->r[11]=c->r[11]+c->r[12]; // 8015366C
  c->r[6]=rotl(c->r[8],29)&0xE0000000u; // 80153670
  c->r[11]=sraw(c,c->r[11],1); // 80153674
  c->r[10]=sraw(c,c->r[10],3); // 80153678
  c->r[6]=c->r[6]-c->r[7]; // 8015367C
  c->r[10]=addc(c,c->r[10],0,c->xer_ca); // 80153680
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 80153684
  c->r[6]=c->r[6]+c->r[7]; // 80153688
  c->r[10]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[10]); // 8015368C
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 80153690
  c->r[7]=c->r[4]+c->r[10]; // 80153694
  c->r[7]=c->r[7]+c->r[0]; // 80153698
  c->r[7]=c->r[7]+c->r[9]; // 8015369C
  W16(c->r[7]+c->r[3],c->r[29]); // 801536A0
  c->r[7]=R16(c->r[26]+0x0000001Eu); // 801536A4
  c->r[9]=rotl(c->r[7],2)&0xFFFFFFE0u; // 801536A8
  c->r[7]=rotl(c->r[7],3)&0x00000001u; // 801536AC
  c->r[7]=c->r[7]+c->r[9]; // 801536B0
  c->r[9]=sraw(c,c->r[7],1); // 801536B4
  c->r[7]=sraw(c,c->r[8],3); // 801536B8
  c->r[7]=addc(c,c->r[7],0,c->xer_ca); // 801536BC
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[7]); // 801536C0
  c->r[7]=c->r[4]+c->r[7]; // 801536C4
  c->r[7]=c->r[7]+c->r[0]; // 801536C8
  c->r[7]=c->r[7]+c->r[6]; // 801536CC
  W16(c->r[7]+c->r[3],c->r[30]); // 801536D0
  c->r[7]=c->r[5]+0x00000007u; // 801536D4
  c->r[5]=rotl(c->r[7],29)&0xE0000000u; // 801536D8
  c->r[8]=R16(c->r[26]+0x0000001Eu); // 801536DC
  c->r[6]=rotl(c->r[7],1)&0x00000001u; // 801536E0
  c->r[5]=c->r[5]-c->r[6]; // 801536E4
  c->r[9]=rotl(c->r[8],2)&0xFFFFFFE0u; // 801536E8
  c->r[8]=rotl(c->r[8],3)&0x00000001u; // 801536EC
  c->r[8]=c->r[8]+c->r[9]; // 801536F0
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801536F4
  c->r[8]=sraw(c,c->r[8],1); // 801536F8
  c->r[7]=sraw(c,c->r[7],3); // 801536FC
  c->r[5]=c->r[5]+c->r[6]; // 80153700
  c->r[6]=addc(c,c->r[7],0,c->xer_ca); // 80153704
  c->r[6]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[6]); // 80153708
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 8015370C
  c->r[4]=c->r[4]+c->r[6]; // 80153710
  c->r[4]=c->r[4]+c->r[0]; // 80153714
  c->r[4]=c->r[4]+c->r[5]; // 80153718
  W16(c->r[4]+c->r[3],c->r[31]); // 8015371C
L_80153720:;
  c->r[3]=c->r[27]|c->r[27]; // 80153720
L_80153724:;
  c->r[11]=c->r[1]+0x00000030u; // 80153724
  c->lr=0x8015372Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80153728
  c->r[0]=R32(c->r[1]+0x00000034u); // 8015372C
  c->lr=c->r[0]; // 80153730
  c->r[1]=c->r[1]+0x00000030u; // 80153734
  return; // 80153738
}

// OSLoadFont
void f_8015373C(Ctx* __restrict c) {
  trace_call(0x8015373Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015373C
  c->r[0]=c->lr; // 80153740
  c->r[5]=c->r[3]|c->r[3]; // 80153744
  W32(c->r[1]+0x00000014u,c->r[0]); // 80153748
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8015374C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80153750
  c->r[30]=c->r[4]|c->r[4]; // 80153754
  c->r[0]=R16(c->r[13]+0xFFFF8FD8u); // 80153758
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8015375C
  if (crb(c,2)) { goto L_80153768; } // 80153760
  goto L_801537AC; // 80153764
L_80153768:;
  c->r[4]=0u+0x80000000u; // 80153768
  c->r[0]=R32(c->r[4]+0x000000CCu); // 8015376C
  cmps(c,0,(int32_t)c->r[0],0); // 80153770
  if (crb(c,2)) { goto L_80153780; } // 80153774
  if (crb(c,0)) { goto L_80153794; } // 80153778
  goto L_80153794; // 8015377C
L_80153780:;
  c->r[4]=0u+0xCC000000u; // 80153780
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 80153784
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 80153788
  W16(c->r[13]+0xFFFF8FD8u,c->r[0]); // 8015378C
  goto L_8015379C; // 80153790
L_80153794:;
  c->r[0]=0u+0x00000000u; // 80153794
  W16(c->r[13]+0xFFFF8FD8u,c->r[0]); // 80153798
L_8015379C:;
  c->r[4]=0u+0x80150000u; // 8015379C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801537A0
  c->r[4]=c->r[4]+0x00003864u; // 801537A4
  W32(c->r[13]+0xFFFFAA10u,c->r[4]); // 801537A8
L_801537AC:;
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801537AC
  cmps(c,0,(int32_t)c->r[0],2); // 801537B0
  if (crb(c,2)) { goto L_80153844; } // 801537B4
  if (!crb(c,0)) { goto L_801537CC; } // 801537B8
  cmps(c,0,(int32_t)c->r[0],0); // 801537BC
  if (crb(c,2)) { goto L_801537D8; } // 801537C0
  if (!crb(c,0)) { goto L_801537F0; } // 801537C4
  goto L_80153844; // 801537C8
L_801537CC:;
  cmps(c,0,(int32_t)c->r[0],6); // 801537CC
  if (!crb(c,0)) { goto L_80153844; } // 801537D0
  goto L_80153808; // 801537D4
L_801537D8:;
  W32(c->r[13]+0xFFFFAA1Cu,c->r[3]); // 801537D8
  c->r[3]=c->r[30]|c->r[30]; // 801537DC
  c->r[4]=0u+0x00000000u; // 801537E0
  c->lr=0x801537E8u; f_8015343C(c); // 801537E4
  c->r[31]=c->r[3]|c->r[3]; // 801537E8
  goto L_80153848; // 801537EC
L_801537F0:;
  W32(c->r[13]+0xFFFFAA18u,c->r[3]); // 801537F0
  c->r[3]=c->r[30]|c->r[30]; // 801537F4
  c->r[4]=0u+0x00000001u; // 801537F8
  c->lr=0x80153800u; f_8015343C(c); // 801537FC
  c->r[31]=c->r[3]|c->r[3]; // 80153800
  goto L_80153848; // 80153804
L_80153808:;
  W32(c->r[13]+0xFFFFAA1Cu,c->r[3]); // 80153808
  c->r[3]=c->r[30]|c->r[30]; // 8015380C
  c->r[4]=0u+0x00000000u; // 80153810
  c->lr=0x80153818u; f_8015343C(c); // 80153814
  cmps(c,0,(int32_t)c->r[3],0); // 80153818
  c->r[31]=c->r[3]|c->r[3]; // 8015381C
  if (crb(c,2)) { goto L_80153848; } // 80153820
  c->r[0]=R32(c->r[13]+0xFFFFAA1Cu); // 80153824
  c->r[4]=0u+0x00000001u; // 80153828
  c->r[5]=c->r[0]+c->r[3]; // 8015382C
  c->r[3]=c->r[30]|c->r[30]; // 80153830
  W32(c->r[13]+0xFFFFAA18u,c->r[5]); // 80153834
  c->lr=0x8015383Cu; f_8015343C(c); // 80153838
  c->r[31]=c->r[31]+c->r[3]; // 8015383C
  goto L_80153848; // 80153840
L_80153844:;
  c->r[31]=0u+0x00000000u; // 80153844
L_80153848:;
  c->r[3]=c->r[31]|c->r[31]; // 80153848
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8015384C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80153850
  c->r[0]=R32(c->r[1]+0x00000014u); // 80153854
  c->lr=c->r[0]; // 80153858
  c->r[1]=c->r[1]+0x00000010u; // 8015385C
  return; // 80153860
}

// ParseStringS
void f_80153864(Ctx* __restrict c) {
  trace_call(0x80153864u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80153864
  c->r[0]=c->lr; // 80153868
  cmps(c,0,(int32_t)c->r[3],1); // 8015386C
  c->r[7]=0u+0x00000000u; // 80153870
  W32(c->r[1]+0x00000014u,c->r[0]); // 80153874
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80153878
  c->r[31]=c->r[6]|c->r[6]; // 8015387C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80153880
  c->r[30]=c->r[4]|c->r[4]; // 80153884
  if (crb(c,2)) { goto L_801538B4; } // 80153888
  if (!crb(c,0)) { goto L_80153934; } // 8015388C
  cmps(c,0,(int32_t)c->r[3],0); // 80153890
  if (!crb(c,0)) { goto L_8015389C; } // 80153894
  goto L_80153934; // 80153898
L_8015389C:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 8015389C
  c->r[6]=R32(c->r[13]+0xFFFFAA1Cu); // 801538A0
  cmps(c,0,(int32_t)c->r[7],0); // 801538A4
  if (crb(c,2)) { goto L_80153934; } // 801538A8
  c->r[30]=c->r[4]+0x00000001u; // 801538AC
  goto L_80153934; // 801538B0
L_801538B4:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 801538B4
  c->r[6]=R32(c->r[13]+0xFFFFAA18u); // 801538B8
  cmps(c,0,(int32_t)c->r[7],0); // 801538BC
  if (crb(c,2)) { goto L_80153934; } // 801538C0
  cmpu(c,0,c->r[7],0x00000081u); // 801538C4
  c->r[30]=c->r[4]+0x00000001u; // 801538C8
  c->r[0]=0u+0x00000000u; // 801538CC
  if (crb(c,0)) { goto L_801538DC; } // 801538D0
  cmpu(c,0,c->r[7],0x0000009Fu); // 801538D4
  if (!crb(c,1)) { goto L_801538EC; } // 801538D8
L_801538DC:;
  cmpu(c,0,c->r[7],0x000000E0u); // 801538DC
  if (crb(c,0)) { goto L_801538F0; } // 801538E0
  cmpu(c,0,c->r[7],0x000000FCu); // 801538E4
  if (crb(c,1)) { goto L_801538F0; } // 801538E8
L_801538EC:;
  c->r[0]=0u+0x00000001u; // 801538EC
L_801538F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801538F0
  if (crb(c,2)) { goto L_80153934; } // 801538F4
  c->r[4]=R8(c->r[30]+0x00000000u); // 801538F8
  c->r[0]=0u+0x00000000u; // 801538FC
  cmpu(c,0,c->r[4],0x00000040u); // 80153900
  if (crb(c,0)) { goto L_8015391C; } // 80153904
  cmpu(c,0,c->r[4],0x000000FCu); // 80153908
  if (crb(c,1)) { goto L_8015391C; } // 8015390C
  cmpu(c,0,c->r[4],0x0000007Fu); // 80153910
  if (crb(c,2)) { goto L_8015391C; } // 80153914
  c->r[0]=0u+0x00000001u; // 80153918
L_8015391C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8015391C
  if (crb(c,2)) { goto L_80153934; } // 80153920
  c->r[0]=R8(c->r[30]+0x00000000u); // 80153924
  c->r[0]=(rotl(c->r[7],8)&0x00FFFF00u)|(c->r[0]&~0x00FFFF00u); // 80153928
  c->r[30]=c->r[30]+0x00000001u; // 8015392C
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 80153930
L_80153934:;
  W32(c->r[5]+0x00000000u,c->r[6]); // 80153934
  c->r[4]=c->r[7]|c->r[7]; // 80153938
  c->lr=0x80153940u; f_80153090(c); // 8015393C
  W32(c->r[31]+0x00000000u,c->r[3]); // 80153940
  c->r[3]=c->r[30]|c->r[30]; // 80153944
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80153948
  c->r[30]=R32(c->r[1]+0x00000008u); // 8015394C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80153950
  c->lr=c->r[0]; // 80153954
  c->r[1]=c->r[1]+0x00000010u; // 80153958
  return; // 8015395C
}

// ParseStringW
void f_80153960(Ctx* __restrict c) {
  trace_call(0x80153960u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80153960
  c->r[0]=c->lr; // 80153964
  W32(c->r[1]+0x00000034u,c->r[0]); // 80153968
  c->r[11]=c->r[1]+0x00000030u; // 8015396C
  c->lr=0x80153974u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80153970
  c->r[30]=0u+0x00000000u; // 80153974
  cmps(c,0,(int32_t)c->r[3],3); // 80153978
  W32(c->r[1]+0x00000008u,c->r[30]); // 8015397C
  c->r[26]=c->r[3]|c->r[3]; // 80153980
  c->r[27]=c->r[4]|c->r[4]; // 80153984
  c->r[28]=c->r[5]|c->r[5]; // 80153988
  c->r[29]=c->r[6]|c->r[6]; // 8015398C
  if (crb(c,2)) { goto L_80153A5C; } // 80153990
  if (!crb(c,0)) { goto L_801539B0; } // 80153994
  cmps(c,0,(int32_t)c->r[3],1); // 80153998
  if (crb(c,2)) { goto L_801539D8; } // 8015399C
  if (!crb(c,0)) { goto L_80153A98; } // 801539A0
  cmps(c,0,(int32_t)c->r[3],0); // 801539A4
  if (!crb(c,0)) { goto L_801539C0; } // 801539A8
  goto L_80153A98; // 801539AC
L_801539B0:;
  cmps(c,0,(int32_t)c->r[3],5); // 801539B0
  if (crb(c,2)) { goto L_80153A84; } // 801539B4
  if (!crb(c,0)) { goto L_80153A98; } // 801539B8
  goto L_80153A70; // 801539BC
L_801539C0:;
  c->r[30]=R8(c->r[4]+0x00000000u); // 801539C0
  c->r[31]=R32(c->r[13]+0xFFFFAA1Cu); // 801539C4
  cmps(c,0,(int32_t)c->r[30],0); // 801539C8
  if (crb(c,2)) { goto L_80153A98; } // 801539CC
  c->r[27]=c->r[4]+0x00000001u; // 801539D0
  goto L_80153A98; // 801539D4
L_801539D8:;
  c->r[30]=R8(c->r[4]+0x00000000u); // 801539D8
  c->r[31]=R32(c->r[13]+0xFFFFAA18u); // 801539DC
  cmps(c,0,(int32_t)c->r[30],0); // 801539E0
  if (crb(c,2)) { goto L_80153A98; } // 801539E4
  cmpu(c,0,c->r[30],0x00000081u); // 801539E8
  c->r[27]=c->r[4]+0x00000001u; // 801539EC
  c->r[0]=0u+0x00000000u; // 801539F0
  if (crb(c,0)) { goto L_80153A00; } // 801539F4
  cmpu(c,0,c->r[30],0x0000009Fu); // 801539F8
  if (!crb(c,1)) { goto L_80153A10; } // 801539FC
L_80153A00:;
  cmpu(c,0,c->r[30],0x000000E0u); // 80153A00
  if (crb(c,0)) { goto L_80153A14; } // 80153A04
  cmpu(c,0,c->r[30],0x000000FCu); // 80153A08
  if (crb(c,1)) { goto L_80153A14; } // 80153A0C
L_80153A10:;
  c->r[0]=0u+0x00000001u; // 80153A10
L_80153A14:;
  cmps(c,0,(int32_t)c->r[0],0); // 80153A14
  if (crb(c,2)) { goto L_80153A98; } // 80153A18
  c->r[3]=R8(c->r[27]+0x00000000u); // 80153A1C
  c->r[0]=0u+0x00000000u; // 80153A20
  cmpu(c,0,c->r[3],0x00000040u); // 80153A24
  if (crb(c,0)) { goto L_80153A40; } // 80153A28
  cmpu(c,0,c->r[3],0x000000FCu); // 80153A2C
  if (crb(c,1)) { goto L_80153A40; } // 80153A30
  cmpu(c,0,c->r[3],0x0000007Fu); // 80153A34
  if (crb(c,2)) { goto L_80153A40; } // 80153A38
  c->r[0]=0u+0x00000001u; // 80153A3C
L_80153A40:;
  cmps(c,0,(int32_t)c->r[0],0); // 80153A40
  if (crb(c,2)) { goto L_80153A98; } // 80153A44
  c->r[0]=R8(c->r[27]+0x00000000u); // 80153A48
  c->r[0]=(rotl(c->r[30],8)&0x00FFFF00u)|(c->r[0]&~0x00FFFF00u); // 80153A4C
  c->r[27]=c->r[27]+0x00000001u; // 80153A50
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 80153A54
  goto L_80153A98; // 80153A58
L_80153A5C:;
  c->r[3]=c->r[27]|c->r[27]; // 80153A5C
  c->r[4]=c->r[1]+0x00000008u; // 80153A60
  c->lr=0x80153A68u; f_80158B40(c); // 80153A64
  c->r[27]=c->r[3]|c->r[3]; // 80153A68
  goto L_80153A98; // 80153A6C
L_80153A70:;
  c->r[3]=c->r[27]|c->r[27]; // 80153A70
  c->r[4]=c->r[1]+0x00000008u; // 80153A74
  c->lr=0x80153A7Cu; f_80158C50(c); // 80153A78
  c->r[27]=c->r[3]|c->r[3]; // 80153A7C
  goto L_80153A98; // 80153A80
L_80153A84:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80153A84
  cmps(c,0,(int32_t)c->r[0],0); // 80153A88
  W32(c->r[1]+0x00000008u,c->r[0]); // 80153A8C
  if (crb(c,2)) { goto L_80153A98; } // 80153A90
  c->r[27]=c->r[4]+0x00000004u; // 80153A94
L_80153A98:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80153A98
  cmps(c,0,(int32_t)c->r[3],0); // 80153A9C
  if (crb(c,2)) { goto L_80153AEC; } // 80153AA0
  c->r[31]=R32(c->r[13]+0xFFFFAA1Cu); // 80153AA4
  c->r[26]=0u+0x00000000u; // 80153AA8
  c->lr=0x80153AB0u; f_80158CC0(c); // 80153AAC
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[30]); // 80153AB0
  if (crb(c,2)) { goto L_80153AD0; } // 80153AB4
  c->r[0]=R32(c->r[13]+0xFFFFAA14u); // 80153AB8
  cmps(c,0,(int32_t)c->r[0],0); // 80153ABC
  if (crb(c,2)) { goto L_80153AEC; } // 80153AC0
  c->r[0]=R32(c->r[1]+0x00000008u); // 80153AC4
  cmpu(c,0,c->r[0],0x0000007Fu); // 80153AC8
  if (crb(c,1)) { goto L_80153AEC; } // 80153ACC
L_80153AD0:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80153AD0
  c->lr=0x80153AD8u; f_80158D38(c); // 80153AD4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80153AD8
  c->r[30]=c->r[3]|c->r[3]; // 80153ADC
  if (crb(c,2)) { goto L_80153AEC; } // 80153AE0
  c->r[26]=0u+0x00000001u; // 80153AE4
  c->r[31]=R32(c->r[13]+0xFFFFAA18u); // 80153AE8
L_80153AEC:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 80153AEC
  c->r[3]=c->r[26]|c->r[26]; // 80153AF0
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 80153AF4
  c->lr=0x80153AFCu; f_80153090(c); // 80153AF8
  W32(c->r[29]+0x00000000u,c->r[3]); // 80153AFC
  c->r[11]=c->r[1]+0x00000030u; // 80153B00
  c->r[3]=c->r[27]|c->r[27]; // 80153B04
  c->lr=0x80153B0Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80153B08
  c->r[0]=R32(c->r[1]+0x00000034u); // 80153B0C
  c->lr=c->r[0]; // 80153B10
  c->r[1]=c->r[1]+0x00000030u; // 80153B14
  return; // 80153B18
}

// OSGetFontTexel
void f_80153B1C(Ctx* __restrict c) {
  trace_call(0x80153B1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80153B1C
  c->r[0]=c->lr; // 80153B20
  W32(c->r[1]+0x00000054u,c->r[0]); // 80153B24
  c->r[11]=c->r[1]+0x00000050u; // 80153B28
  c->lr=0x80153B30u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80153B2C
  c->r[0]=R16(c->r[13]+0xFFFF8FD8u); // 80153B30
  c->r[29]=c->r[4]|c->r[4]; // 80153B34
  c->r[30]=c->r[5]|c->r[5]; // 80153B38
  c->r[17]=c->r[6]|c->r[6]; // 80153B3C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80153B40
  c->r[31]=c->r[7]|c->r[7]; // 80153B44
  if (crb(c,2)) { goto L_80153B50; } // 80153B48
  goto L_80153B94; // 80153B4C
L_80153B50:;
  c->r[4]=0u+0x80000000u; // 80153B50
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80153B54
  cmps(c,0,(int32_t)c->r[0],0); // 80153B58
  if (crb(c,2)) { goto L_80153B68; } // 80153B5C
  if (crb(c,0)) { goto L_80153B7C; } // 80153B60
  goto L_80153B7C; // 80153B64
L_80153B68:;
  c->r[4]=0u+0xCC000000u; // 80153B68
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 80153B6C
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 80153B70
  W16(c->r[13]+0xFFFF8FD8u,c->r[0]); // 80153B74
  goto L_80153B84; // 80153B78
L_80153B7C:;
  c->r[0]=0u+0x00000000u; // 80153B7C
  W16(c->r[13]+0xFFFF8FD8u,c->r[0]); // 80153B80
L_80153B84:;
  c->r[4]=0u+0x80150000u; // 80153B84
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80153B88
  c->r[4]=c->r[4]+0x00003864u; // 80153B8C
  W32(c->r[13]+0xFFFFAA10u,c->r[4]); // 80153B90
L_80153B94:;
  c->r[12]=R32(c->r[13]+0xFFFFAA10u); // 80153B94
  c->r[4]=c->r[3]|c->r[3]; // 80153B98
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80153B9C
  c->r[5]=c->r[1]+0x0000000Cu; // 80153BA0
  c->r[6]=c->r[1]+0x00000008u; // 80153BA4
  c->ctr=c->r[12]; // 80153BA8
  if (true) { c->lr=0x80153BB0u; dispatch(c,c->ctr); } // 80153BAC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80153BB0
  c->r[0]=rotl(c->r[17],2)&0xFFFFFFFCu; // 80153BB4
  c->r[0]=sraw(c,c->r[0],3); // 80153BB8
  c->r[11]=R32(c->r[1]+0x00000008u); // 80153BBC
  c->r[9]=R16(c->r[4]+0x0000001Au); // 80153BC0
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80153BC4
  c->r[5]=R16(c->r[4]+0x0000001Cu); // 80153BC8
  c->r[8]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80153BCC
  c->r[6]=R32(c->r[4]+0x00000024u); // 80153BD0
  c->r[23]=c->r[4]+0x0000002Cu; // 80153BD4
  c->r[10]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[5]); // 80153BD8
  c->r[5]=R32(c->r[4]+0x00000014u); // 80153BDC
  c->r[22]=c->r[4]+c->r[6]; // 80153BE0
  c->r[7]=R16(c->r[4]+0x00000012u); // 80153BE4
  c->r[6]=R16(c->r[4]+0x00000010u); // 80153BE8
  c->r[24]=0u+0x00000000u; // 80153BEC
  c->r[12]=divw((int32_t)c->r[11],(int32_t)c->r[10]); // 80153BF0
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[10]); // 80153BF4
  c->r[11]=c->r[11]-c->r[0]; // 80153BF8
  c->r[10]=divw((int32_t)c->r[11],(int32_t)c->r[9]); // 80153BFC
  c->r[9]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[9]); // 80153C00
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[5]); // 80153C04
  c->r[26]=c->r[11]-c->r[9]; // 80153C08
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80153C0C
  c->r[27]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[7]); // 80153C10
  c->r[22]=c->r[22]+c->r[0]; // 80153C14
  c->r[26]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[6]); // 80153C18
  goto L_80153D68; // 80153C1C
L_80153C20:;
  c->r[7]=c->r[27]+c->r[24]; // 80153C20
  c->r[0]=rotl(c->r[24],29)&0xE0000000u; // 80153C24
  c->r[5]=sraw(c,c->r[7],3); // 80153C28
  c->r[4]=rotl(c->r[24],1)&0x00000001u; // 80153C2C
  c->r[9]=addc(c,c->r[5],0,c->xer_ca); // 80153C30
  c->r[6]=rotl(c->r[7],29)&0xE0000000u; // 80153C34
  c->r[5]=sraw(c,c->r[24],3); // 80153C38
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 80153C3C
  c->r[5]=addc(c,c->r[5],0,c->xer_ca); // 80153C40
  c->r[0]=c->r[0]-c->r[4]; // 80153C44
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[8]); // 80153C48
  c->r[6]=c->r[6]-c->r[7]; // 80153C4C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 80153C50
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 80153C54
  c->r[0]=c->r[0]+c->r[4]; // 80153C58
  c->r[4]=c->r[6]+c->r[7]; // 80153C5C
  c->r[10]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80153C60
  c->r[11]=c->r[29]+c->r[5]; // 80153C64
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80153C68
  c->r[25]=0u+0x00000000u; // 80153C6C
  goto L_80153D54; // 80153C70
L_80153C74:;
  c->r[4]=R16(c->r[4]+0x0000001Eu); // 80153C74
  c->r[28]=c->r[30]+c->r[25]; // 80153C78
  c->r[5]=c->r[26]+c->r[25]; // 80153C7C
  c->r[0]=0u+0x000000F0u; // 80153C80
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFE0u; // 80153C84
  c->r[4]=rotl(c->r[4],3)&0x00000001u; // 80153C88
  c->r[4]=c->r[4]+c->r[6]; // 80153C8C
  c->r[20]=rotl(c->r[28],29)&0xE0000000u; // 80153C90
  c->r[7]=sraw(c,c->r[4],1); // 80153C94
  c->r[19]=rotl(c->r[28],1)&0x00000001u; // 80153C98
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[9]); // 80153C9C
  c->r[6]=rotl(c->r[5],29)&0xE0000000u; // 80153CA0
  c->r[4]=rotl(c->r[5],1)&0x00000001u; // 80153CA4
  c->r[18]=sraw(c,c->r[5],3); // 80153CA8
  c->r[6]=c->r[6]-c->r[4]; // 80153CAC
  c->r[21]=rotl(c->r[28],0)&0x00000001u; // 80153CB0
  c->r[17]=rotl(c->r[6],3)&0xFFFFFFFFu; // 80153CB4
  c->r[6]=addc(c,c->r[18],0,c->xer_ca); // 80153CB8
  c->r[17]=c->r[17]+c->r[4]; // 80153CBC
  c->r[20]=c->r[20]-c->r[19]; // 80153CC0
  c->r[21]=c->r[21]^c->r[19]; // 80153CC4
  c->r[5]=rotl(c->r[5],30)&0xC0000000u; // 80153CC8
  c->r[18]=sraw(c,c->r[17],2); // 80153CCC
  c->r[20]=rotl(c->r[20],3)&0xFFFFFFFFu; // 80153CD0
  c->r[17]=c->r[5]-c->r[4]; // 80153CD4
  c->r[21]=c->r[21]-c->r[19]; cr0(c,c->r[21]); // 80153CD8
  c->r[5]=addc(c,c->r[18],0,c->xer_ca); // 80153CDC
  c->r[20]=c->r[20]+c->r[19]; // 80153CE0
  c->r[18]=sraw(c,c->r[28],3); // 80153CE4
  c->r[17]=rotl(c->r[17],2)&0xFFFFFFFFu; // 80153CE8
  c->r[7]=c->r[22]+c->r[7]; // 80153CEC
  c->r[6]=rotl(c->r[6],4)&0xFFFFFFF0u; // 80153CF0
  c->r[7]=c->r[7]+c->r[6]; // 80153CF4
  c->r[19]=addc(c,c->r[18],0,c->xer_ca); // 80153CF8
  c->r[7]=c->r[7]+c->r[10]; // 80153CFC
  c->r[21]=rotl(c->r[20],1)&0x00000001u; // 80153D00
  c->r[28]=c->r[17]+c->r[4]; // 80153D04
  c->r[6]=rotl(c->r[19],5)&0xFFFFFFE0u; // 80153D08
  c->r[4]=c->r[21]+c->r[20]; // 80153D0C
  c->r[7]=R8(c->r[7]+c->r[5]); // 80153D10
  c->r[6]=c->r[11]+c->r[6]; // 80153D14
  c->r[21]=rotl(c->r[28],1)&0xFFFFFFFEu; // 80153D18
  c->r[4]=sraw(c,c->r[4],1); // 80153D1C
  c->r[5]=addc(c,~c->r[21],0x00000006u,1); // 80153D20
  c->r[6]=c->r[6]+c->r[12]; // 80153D24
  c->r[5]=sraw(c,c->r[7],(c->r[5])&63); // 80153D28
  c->r[7]=R8(c->r[6]+c->r[4]); // 80153D2C
  c->r[5]=rotl(c->r[5],0)&0x00000003u; // 80153D30
  c->r[5]=R8(c->r[23]+c->r[5]); // 80153D34
  if (crb(c,2)) { goto L_80153D40; } // 80153D38
  c->r[0]=0u+0x0000000Fu; // 80153D3C
L_80153D40:;
  c->r[0]=c->r[5]&c->r[0]; // 80153D40
  c->r[25]=c->r[25]+0x00000001u; // 80153D44
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80153D48
  c->r[0]=c->r[7]|c->r[0]; // 80153D4C
  W8(c->r[6]+c->r[4],c->r[0]); // 80153D50
L_80153D54:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80153D54
  c->r[0]=R16(c->r[4]+0x00000010u); // 80153D58
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 80153D5C
  if (crb(c,0)) { IRQCHK(c); goto L_80153C74; } // 80153D60
  c->r[24]=c->r[24]+0x00000001u; // 80153D64
L_80153D68:;
  c->r[0]=R16(c->r[4]+0x00000012u); // 80153D68
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 80153D6C
  if (crb(c,0)) { IRQCHK(c); goto L_80153C20; } // 80153D70
  cmps(c,0,(int32_t)c->r[31],0); // 80153D74
  if (crb(c,2)) { goto L_80153D94; } // 80153D78
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80153D7C
  c->r[4]=R32(c->r[1]+0x00000008u); // 80153D80
  c->r[0]=R16(c->r[5]+0x00000022u); // 80153D84
  c->r[0]=c->r[5]+c->r[0]; // 80153D88
  c->r[0]=R8(c->r[4]+c->r[0]); // 80153D8C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80153D90
L_80153D94:;
  c->r[11]=c->r[1]+0x00000050u; // 80153D94
  c->lr=0x80153D9Cu; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80153D98
  c->r[0]=R32(c->r[1]+0x00000054u); // 80153D9C
  c->lr=c->r[0]; // 80153DA0
  c->r[1]=c->r[1]+0x00000050u; // 80153DA4
  return; // 80153DA8
}

// ExpandFontSheet
void f_80153DAC(Ctx* __restrict c) {
  trace_call(0x80153DACu);
  c->r[0]=R16(c->r[3]+0x00000018u); // 80153DAC
  c->r[6]=c->r[3]+0x0000002Cu; // 80153DB0
  cmps(c,0,(int32_t)c->r[0],0); // 80153DB4
  if (!crb(c,2)) { goto L_80153EE4; } // 80153DB8
  c->r[7]=R32(c->r[3]+0x00000028u); // 80153DBC
  c->r[0]=rotl(c->r[7],1)&0x00000001u; // 80153DC0
  c->r[0]=c->r[0]+c->r[7]; // 80153DC4
  c->r[7]=sraw(c,c->r[0],1); // 80153DC8
  c->r[8]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 80153DCC
  c->r[7]=c->r[4]+c->r[8]; // 80153DD0
  c->r[9]=rotl(c->r[8],1)&0xFFFFFFFEu; // 80153DD4
  c->r[4]=c->r[8]+0x00000001u; // 80153DD8
  if (crb(c,0)) { goto L_8015400C; } // 80153DDC
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 80153DE0
  c->ctr=c->r[0]; // 80153DE4
  if (crb(c,2)) { goto L_80153E8C; } // 80153DE8
L_80153DEC:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 80153DEC
  c->r[10]=c->r[5]+c->r[9]; // 80153DF0
  c->r[8]=rotl(c->r[0],26)&0x00000003u; // 80153DF4
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 80153DF8
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153DFC
  c->r[8]=R8(c->r[6]+c->r[8]); // 80153E00
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 80153E04
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 80153E08
  W8(c->r[5]+c->r[9],c->r[0]); // 80153E0C
  c->r[9]=c->r[9]+0xFFFFFFFEu; // 80153E10
  c->r[0]=R8(c->r[7]+0x00000000u); // 80153E14
  c->r[8]=rotl(c->r[0],30)&0x00000003u; // 80153E18
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 80153E1C
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153E20
  c->r[8]=R8(c->r[6]+c->r[8]); // 80153E24
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 80153E28
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 80153E2C
  W8(c->r[10]+0x00000001u,c->r[0]); // 80153E30
  c->r[10]=c->r[5]+c->r[9]; // 80153E34
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 80153E38
  c->r[8]=rotl(c->r[0],26)&0x00000003u; // 80153E3C
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 80153E40
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153E44
  c->r[8]=R8(c->r[6]+c->r[8]); // 80153E48
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 80153E4C
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 80153E50
  W8(c->r[5]+c->r[9],c->r[0]); // 80153E54
  c->r[9]=c->r[9]+0xFFFFFFFEu; // 80153E58
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 80153E5C
  c->r[7]=c->r[7]+0xFFFFFFFEu; // 80153E60
  c->r[8]=rotl(c->r[0],30)&0x00000003u; // 80153E64
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 80153E68
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153E6C
  c->r[8]=R8(c->r[6]+c->r[8]); // 80153E70
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 80153E74
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 80153E78
  W8(c->r[10]+0x00000001u,c->r[0]); // 80153E7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80153DEC; } // 80153E80
  c->r[4]=c->r[4]&0x00000001u; cr0(c,c->r[4]); // 80153E84
  if (crb(c,2)) { goto L_8015400C; } // 80153E88
L_80153E8C:;
  c->ctr=c->r[4]; // 80153E8C
L_80153E90:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 80153E90
  c->r[10]=c->r[5]+c->r[9]; // 80153E94
  c->r[8]=rotl(c->r[0],26)&0x00000003u; // 80153E98
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 80153E9C
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153EA0
  c->r[8]=R8(c->r[6]+c->r[8]); // 80153EA4
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 80153EA8
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 80153EAC
  W8(c->r[5]+c->r[9],c->r[0]); // 80153EB0
  c->r[9]=c->r[9]+0xFFFFFFFEu; // 80153EB4
  c->r[0]=R8(c->r[7]+0x00000000u); // 80153EB8
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 80153EBC
  c->r[8]=rotl(c->r[0],30)&0x00000003u; // 80153EC0
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 80153EC4
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153EC8
  c->r[8]=R8(c->r[6]+c->r[8]); // 80153ECC
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 80153ED0
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 80153ED4
  W8(c->r[10]+0x00000001u,c->r[0]); // 80153ED8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80153E90; } // 80153EDC
  goto L_8015400C; // 80153EE0
L_80153EE4:;
  cmpu(c,0,c->r[0],0x00000002u); // 80153EE4
  if (!crb(c,2)) { goto L_8015400C; } // 80153EE8
  c->r[0]=R32(c->r[3]+0x00000028u); // 80153EEC
  c->r[0]=sraw(c,c->r[0],2); // 80153EF0
  c->r[7]=addc(c,c->r[0],0,c->xer_ca); // 80153EF4
  c->r[9]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[9]); // 80153EF8
  c->r[7]=c->r[4]+c->r[9]; // 80153EFC
  c->r[8]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80153F00
  c->r[4]=c->r[9]+0x00000001u; // 80153F04
  if (crb(c,0)) { goto L_8015400C; } // 80153F08
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 80153F0C
  c->ctr=c->r[0]; // 80153F10
  if (crb(c,2)) { goto L_80153FB8; } // 80153F14
L_80153F18:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 80153F18
  c->r[9]=c->r[5]+c->r[8]; // 80153F1C
  c->r[0]=rotl(c->r[0],26)&0x00000003u; // 80153F20
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153F24
  W8(c->r[5]+c->r[8],c->r[0]); // 80153F28
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 80153F2C
  c->r[0]=R8(c->r[7]+0x00000000u); // 80153F30
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 80153F34
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153F38
  W8(c->r[9]+0x00000001u,c->r[0]); // 80153F3C
  c->r[0]=R8(c->r[7]+0x00000000u); // 80153F40
  c->r[0]=rotl(c->r[0],30)&0x00000003u; // 80153F44
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153F48
  W8(c->r[9]+0x00000002u,c->r[0]); // 80153F4C
  c->r[0]=R8(c->r[7]+0x00000000u); // 80153F50
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 80153F54
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153F58
  W8(c->r[9]+0x00000003u,c->r[0]); // 80153F5C
  c->r[9]=c->r[5]+c->r[8]; // 80153F60
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 80153F64
  c->r[0]=rotl(c->r[0],26)&0x00000003u; // 80153F68
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153F6C
  W8(c->r[5]+c->r[8],c->r[0]); // 80153F70
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 80153F74
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 80153F78
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 80153F7C
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153F80
  W8(c->r[9]+0x00000001u,c->r[0]); // 80153F84
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 80153F88
  c->r[0]=rotl(c->r[0],30)&0x00000003u; // 80153F8C
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153F90
  W8(c->r[9]+0x00000002u,c->r[0]); // 80153F94
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 80153F98
  c->r[7]=c->r[7]+0xFFFFFFFEu; // 80153F9C
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 80153FA0
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153FA4
  W8(c->r[9]+0x00000003u,c->r[0]); // 80153FA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80153F18; } // 80153FAC
  c->r[4]=c->r[4]&0x00000001u; cr0(c,c->r[4]); // 80153FB0
  if (crb(c,2)) { goto L_8015400C; } // 80153FB4
L_80153FB8:;
  c->ctr=c->r[4]; // 80153FB8
L_80153FBC:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 80153FBC
  c->r[9]=c->r[5]+c->r[8]; // 80153FC0
  c->r[0]=rotl(c->r[0],26)&0x00000003u; // 80153FC4
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153FC8
  W8(c->r[5]+c->r[8],c->r[0]); // 80153FCC
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 80153FD0
  c->r[0]=R8(c->r[7]+0x00000000u); // 80153FD4
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 80153FD8
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153FDC
  W8(c->r[9]+0x00000001u,c->r[0]); // 80153FE0
  c->r[0]=R8(c->r[7]+0x00000000u); // 80153FE4
  c->r[0]=rotl(c->r[0],30)&0x00000003u; // 80153FE8
  c->r[0]=R8(c->r[6]+c->r[0]); // 80153FEC
  W8(c->r[9]+0x00000002u,c->r[0]); // 80153FF0
  c->r[0]=R8(c->r[7]+0x00000000u); // 80153FF4
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 80153FF8
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 80153FFC
  c->r[0]=R8(c->r[6]+c->r[0]); // 80154000
  W8(c->r[9]+0x00000003u,c->r[0]); // 80154004
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80153FBC; } // 80154008
L_8015400C:;
  c->r[4]=R32(c->r[3]+0x00000028u); // 8015400C
  c->r[3]=c->r[5]|c->r[5]; // 80154010
  f_8014F86C(c); return; // 80154014
}

// OSInitFont
void f_80154018(Ctx* __restrict c) {
  trace_call(0x80154018u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154018
  c->r[0]=c->lr; // 8015401C
  c->r[5]=c->r[3]|c->r[3]; // 80154020
  W32(c->r[1]+0x00000014u,c->r[0]); // 80154024
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80154028
  c->r[0]=R16(c->r[13]+0xFFFF8FD8u); // 8015402C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80154030
  if (crb(c,2)) { goto L_8015403C; } // 80154034
  goto L_80154080; // 80154038
L_8015403C:;
  c->r[4]=0u+0x80000000u; // 8015403C
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80154040
  cmps(c,0,(int32_t)c->r[0],0); // 80154044
  if (crb(c,2)) { goto L_80154054; } // 80154048
  if (crb(c,0)) { goto L_80154068; } // 8015404C
  goto L_80154068; // 80154050
L_80154054:;
  c->r[4]=0u+0xCC000000u; // 80154054
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 80154058
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8015405C
  W16(c->r[13]+0xFFFF8FD8u,c->r[0]); // 80154060
  goto L_80154070; // 80154064
L_80154068:;
  c->r[0]=0u+0x00000000u; // 80154068
  W16(c->r[13]+0xFFFF8FD8u,c->r[0]); // 8015406C
L_80154070:;
  c->r[4]=0u+0x80150000u; // 80154070
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80154074
  c->r[4]=c->r[4]+0x00003864u; // 80154078
  W32(c->r[13]+0xFFFFAA10u,c->r[4]); // 8015407C
L_80154080:;
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80154080
  cmps(c,0,(int32_t)c->r[0],2); // 80154084
  if (crb(c,2)) { goto L_801541F0; } // 80154088
  if (!crb(c,0)) { goto L_801540A0; } // 8015408C
  cmps(c,0,(int32_t)c->r[0],0); // 80154090
  if (crb(c,2)) { goto L_801540AC; } // 80154094
  if (!crb(c,0)) { goto L_801540FC; } // 80154098
  goto L_801541F0; // 8015409C
L_801540A0:;
  cmps(c,0,(int32_t)c->r[0],6); // 801540A0
  if (!crb(c,0)) { goto L_801541F0; } // 801540A4
  goto L_8015414C; // 801540A8
L_801540AC:;
  W32(c->r[13]+0xFFFFAA1Cu,c->r[3]); // 801540AC
  c->r[3]=c->r[3]+0x00020000u; // 801540B0
  c->r[4]=0u+0x00000000u; // 801540B4
  c->r[3]=c->r[3]+0xFFFFD120u; // 801540B8
  c->lr=0x801540C0u; f_8015343C(c); // 801540BC
  cmps(c,0,(int32_t)c->r[3],0); // 801540C0
  if (!crb(c,2)) { goto L_801540D0; } // 801540C4
  c->r[3]=0u+0x00000000u; // 801540C8
  goto L_801541F4; // 801540CC
L_801540D0:;
  c->r[5]=R32(c->r[13]+0xFFFFAA1Cu); // 801540D0
  c->r[3]=R32(c->r[5]+0x00000024u); // 801540D4
  c->r[0]=c->r[3]+0x0000001Fu; // 801540D8
  c->r[4]=c->r[5]+c->r[3]; // 801540DC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801540E0
  W32(c->r[5]+0x00000024u,c->r[0]); // 801540E4
  c->r[3]=R32(c->r[13]+0xFFFFAA1Cu); // 801540E8
  c->r[0]=R32(c->r[3]+0x00000024u); // 801540EC
  c->r[5]=c->r[3]+c->r[0]; // 801540F0
  c->lr=0x801540F8u; f_80153DAC(c); // 801540F4
  goto L_801541F0; // 801540F8
L_801540FC:;
  W32(c->r[13]+0xFFFFAA18u,c->r[3]); // 801540FC
  c->r[3]=c->r[3]+0x000D0000u; // 80154100
  c->r[4]=0u+0x00000001u; // 80154104
  c->r[3]=c->r[3]+0x00003F00u; // 80154108
  c->lr=0x80154110u; f_8015343C(c); // 8015410C
  cmps(c,0,(int32_t)c->r[3],0); // 80154110
  if (!crb(c,2)) { goto L_80154120; } // 80154114
  c->r[3]=0u+0x00000000u; // 80154118
  goto L_801541F4; // 8015411C
L_80154120:;
  c->r[5]=R32(c->r[13]+0xFFFFAA18u); // 80154120
  c->r[3]=R32(c->r[5]+0x00000024u); // 80154124
  c->r[0]=c->r[3]+0x0000001Fu; // 80154128
  c->r[4]=c->r[5]+c->r[3]; // 8015412C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80154130
  W32(c->r[5]+0x00000024u,c->r[0]); // 80154134
  c->r[3]=R32(c->r[13]+0xFFFFAA18u); // 80154138
  c->r[0]=R32(c->r[3]+0x00000024u); // 8015413C
  c->r[5]=c->r[3]+c->r[0]; // 80154140
  c->lr=0x80154148u; f_80153DAC(c); // 80154144
  goto L_801541F0; // 80154148
L_8015414C:;
  c->r[31]=c->r[3]+0x000F0000u; // 8015414C
  W32(c->r[13]+0xFFFFAA1Cu,c->r[3]); // 80154150
  c->r[31]=c->r[31]+0x00004020u; // 80154154
  c->r[4]=0u+0x00000000u; // 80154158
  c->r[3]=c->r[31]|c->r[31]; // 8015415C
  c->lr=0x80154164u; f_8015343C(c); // 80154160
  cmps(c,0,(int32_t)c->r[3],0); // 80154164
  if (!crb(c,2)) { goto L_80154174; } // 80154168
  c->r[3]=0u+0x00000000u; // 8015416C
  goto L_801541F4; // 80154170
L_80154174:;
  c->r[5]=R32(c->r[13]+0xFFFFAA1Cu); // 80154174
  c->r[3]=R32(c->r[5]+0x00000024u); // 80154178
  c->r[0]=c->r[3]+0x0000001Fu; // 8015417C
  c->r[4]=c->r[5]+c->r[3]; // 80154180
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80154184
  W32(c->r[5]+0x00000024u,c->r[0]); // 80154188
  c->r[3]=R32(c->r[13]+0xFFFFAA1Cu); // 8015418C
  c->r[0]=R32(c->r[3]+0x00000024u); // 80154190
  c->r[5]=c->r[3]+c->r[0]; // 80154194
  c->lr=0x8015419Cu; f_80153DAC(c); // 80154198
  c->r[5]=R32(c->r[13]+0xFFFFAA1Cu); // 8015419C
  c->r[3]=c->r[31]|c->r[31]; // 801541A0
  c->r[4]=0u+0x00000001u; // 801541A4
  c->r[5]=c->r[5]+0x00020000u; // 801541A8
  c->r[5]=c->r[5]+0x00000120u; // 801541AC
  W32(c->r[13]+0xFFFFAA18u,c->r[5]); // 801541B0
  c->lr=0x801541B8u; f_8015343C(c); // 801541B4
  cmps(c,0,(int32_t)c->r[3],0); // 801541B8
  if (!crb(c,2)) { goto L_801541C8; } // 801541BC
  c->r[3]=0u+0x00000000u; // 801541C0
  goto L_801541F4; // 801541C4
L_801541C8:;
  c->r[5]=R32(c->r[13]+0xFFFFAA18u); // 801541C8
  c->r[3]=R32(c->r[5]+0x00000024u); // 801541CC
  c->r[0]=c->r[3]+0x0000001Fu; // 801541D0
  c->r[4]=c->r[5]+c->r[3]; // 801541D4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801541D8
  W32(c->r[5]+0x00000024u,c->r[0]); // 801541DC
  c->r[3]=R32(c->r[13]+0xFFFFAA18u); // 801541E0
  c->r[0]=R32(c->r[3]+0x00000024u); // 801541E4
  c->r[5]=c->r[3]+c->r[0]; // 801541E8
  c->lr=0x801541F0u; f_80153DAC(c); // 801541EC
L_801541F0:;
  c->r[3]=0u+0x00000001u; // 801541F0
L_801541F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801541F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801541F8
  c->lr=c->r[0]; // 801541FC
  c->r[1]=c->r[1]+0x00000010u; // 80154200
  return; // 80154204
}

// OSGetFontTexture
void f_80154208(Ctx* __restrict c) {
  trace_call(0x80154208u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154208
  c->r[0]=c->lr; // 8015420C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80154210
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80154214
  c->r[31]=c->r[7]|c->r[7]; // 80154218
  W32(c->r[1]+0x00000018u,c->r[30]); // 8015421C
  c->r[30]=c->r[6]|c->r[6]; // 80154220
  W32(c->r[1]+0x00000014u,c->r[29]); // 80154224
  c->r[29]=c->r[5]|c->r[5]; // 80154228
  W32(c->r[1]+0x00000010u,c->r[28]); // 8015422C
  c->r[28]=c->r[4]|c->r[4]; // 80154230
  c->r[0]=R16(c->r[13]+0xFFFF8FD8u); // 80154234
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80154238
  if (crb(c,2)) { goto L_80154244; } // 8015423C
  goto L_80154288; // 80154240
L_80154244:;
  c->r[4]=0u+0x80000000u; // 80154244
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80154248
  cmps(c,0,(int32_t)c->r[0],0); // 8015424C
  if (crb(c,2)) { goto L_8015425C; } // 80154250
  if (crb(c,0)) { goto L_80154270; } // 80154254
  goto L_80154270; // 80154258
L_8015425C:;
  c->r[4]=0u+0xCC000000u; // 8015425C
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 80154260
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 80154264
  W16(c->r[13]+0xFFFF8FD8u,c->r[0]); // 80154268
  goto L_80154278; // 8015426C
L_80154270:;
  c->r[0]=0u+0x00000000u; // 80154270
  W16(c->r[13]+0xFFFF8FD8u,c->r[0]); // 80154274
L_80154278:;
  c->r[4]=0u+0x80150000u; // 80154278
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8015427C
  c->r[4]=c->r[4]+0x00003864u; // 80154280
  W32(c->r[13]+0xFFFFAA10u,c->r[4]); // 80154284
L_80154288:;
  c->r[12]=R32(c->r[13]+0xFFFFAA10u); // 80154288
  c->r[4]=c->r[3]|c->r[3]; // 8015428C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80154290
  c->r[5]=c->r[1]+0x0000000Cu; // 80154294
  c->r[6]=c->r[1]+0x00000008u; // 80154298
  c->ctr=c->r[12]; // 8015429C
  if (true) { c->lr=0x801542A4u; dispatch(c,c->ctr); } // 801542A0
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 801542A4
  cmps(c,0,(int32_t)c->r[31],0); // 801542A8
  c->r[6]=R32(c->r[1]+0x00000008u); // 801542AC
  c->r[5]=R16(c->r[7]+0x0000001Au); // 801542B0
  c->r[4]=R16(c->r[7]+0x0000001Cu); // 801542B4
  c->r[0]=R32(c->r[7]+0x00000024u); // 801542B8
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 801542BC
  c->r[4]=R32(c->r[7]+0x00000014u); // 801542C0
  c->r[0]=c->r[7]+c->r[0]; // 801542C4
  c->r[6]=divw((int32_t)c->r[6],(int32_t)c->r[5]); // 801542C8
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[6]); // 801542CC
  c->r[0]=c->r[4]+c->r[0]; // 801542D0
  W32(c->r[28]+0x00000000u,c->r[0]); // 801542D4
  c->r[8]=R32(c->r[1]+0x0000000Cu); // 801542D8
  c->r[4]=R32(c->r[1]+0x00000008u); // 801542DC
  c->r[7]=R16(c->r[8]+0x0000001Au); // 801542E0
  c->r[5]=R16(c->r[8]+0x0000001Cu); // 801542E4
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 801542E8
  c->r[0]=R16(c->r[8]+0x00000010u); // 801542EC
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[5]); // 801542F0
  c->r[5]=c->r[4]-c->r[5]; // 801542F4
  c->r[6]=divw((int32_t)c->r[5],(int32_t)c->r[7]); // 801542F8
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 801542FC
  c->r[4]=c->r[5]-c->r[4]; // 80154300
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 80154304
  W32(c->r[29]+0x00000000u,c->r[0]); // 80154308
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8015430C
  c->r[0]=R16(c->r[4]+0x00000012u); // 80154310
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 80154314
  W32(c->r[30]+0x00000000u,c->r[0]); // 80154318
  if (crb(c,2)) { goto L_80154338; } // 8015431C
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80154320
  c->r[4]=R32(c->r[1]+0x00000008u); // 80154324
  c->r[0]=R16(c->r[5]+0x00000022u); // 80154328
  c->r[0]=c->r[5]+c->r[0]; // 8015432C
  c->r[0]=R8(c->r[4]+c->r[0]); // 80154330
  W32(c->r[31]+0x00000000u,c->r[0]); // 80154334
L_80154338:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80154338
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8015433C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80154340
  c->r[29]=R32(c->r[1]+0x00000014u); // 80154344
  c->r[28]=R32(c->r[1]+0x00000010u); // 80154348
  c->lr=c->r[0]; // 8015434C
  c->r[1]=c->r[1]+0x00000020u; // 80154350
  return; // 80154354
}

// OSGetFontWidth
void f_80154358(Ctx* __restrict c) {
  trace_call(0x80154358u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154358
  c->r[0]=c->lr; // 8015435C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80154360
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80154364
  c->r[31]=c->r[4]|c->r[4]; // 80154368
  c->r[0]=R16(c->r[13]+0xFFFF8FD8u); // 8015436C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80154370
  if (crb(c,2)) { goto L_8015437C; } // 80154374
  goto L_801543C0; // 80154378
L_8015437C:;
  c->r[4]=0u+0x80000000u; // 8015437C
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80154380
  cmps(c,0,(int32_t)c->r[0],0); // 80154384
  if (crb(c,2)) { goto L_80154394; } // 80154388
  if (crb(c,0)) { goto L_801543A8; } // 8015438C
  goto L_801543A8; // 80154390
L_80154394:;
  c->r[4]=0u+0xCC000000u; // 80154394
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 80154398
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8015439C
  W16(c->r[13]+0xFFFF8FD8u,c->r[0]); // 801543A0
  goto L_801543B0; // 801543A4
L_801543A8:;
  c->r[0]=0u+0x00000000u; // 801543A8
  W16(c->r[13]+0xFFFF8FD8u,c->r[0]); // 801543AC
L_801543B0:;
  c->r[4]=0u+0x80150000u; // 801543B0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801543B4
  c->r[4]=c->r[4]+0x00003864u; // 801543B8
  W32(c->r[13]+0xFFFFAA10u,c->r[4]); // 801543BC
L_801543C0:;
  c->r[12]=R32(c->r[13]+0xFFFFAA10u); // 801543C0
  c->r[4]=c->r[3]|c->r[3]; // 801543C4
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801543C8
  c->r[5]=c->r[1]+0x0000000Cu; // 801543CC
  c->r[6]=c->r[1]+0x00000008u; // 801543D0
  c->ctr=c->r[12]; // 801543D4
  if (true) { c->lr=0x801543DCu; dispatch(c,c->ctr); } // 801543D8
  cmps(c,0,(int32_t)c->r[31],0); // 801543DC
  if (crb(c,2)) { goto L_801543FC; } // 801543E0
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801543E4
  c->r[4]=R32(c->r[1]+0x00000008u); // 801543E8
  c->r[0]=R16(c->r[5]+0x00000022u); // 801543EC
  c->r[0]=c->r[5]+c->r[0]; // 801543F0
  c->r[0]=R8(c->r[4]+c->r[0]); // 801543F4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801543F8
L_801543FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801543FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80154400
  c->lr=c->r[0]; // 80154404
  c->r[1]=c->r[1]+0x00000020u; // 80154408
  return; // 8015440C
}

void hle_OSDisableInterrupts(Ctx*);
// OSDisableInterrupts
void f_80154410(Ctx* __restrict c) {
  hle_OSDisableInterrupts(c);
}

void hle_OSEnableInterrupts(Ctx*);
// OSEnableInterrupts
void f_80154424(Ctx* __restrict c) {
  hle_OSEnableInterrupts(c);
}

void hle_OSRestoreInterrupts(Ctx*);
// OSRestoreInterrupts
void f_80154438(Ctx* __restrict c) {
  hle_OSRestoreInterrupts(c);
}

// __OSSetInterruptHandler
void f_8015445C(Ctx* __restrict c) {
  trace_call(0x8015445Cu);
  c->r[5]=R32(c->r[13]+0xFFFFAA30u); // 8015445C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80154460
  c->r[3]=R32(c->r[5]+c->r[0]); // 80154464
  W32(c->r[5]+c->r[0],c->r[4]); // 80154468
  return; // 8015446C
}

// __OSGetInterruptHandler
void f_80154470(Ctx* __restrict c) {
  trace_call(0x80154470u);
  c->r[4]=R32(c->r[13]+0xFFFFAA30u); // 80154470
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80154474
  c->r[3]=R32(c->r[4]+c->r[0]); // 80154478
  return; // 8015447C
}

// __OSInterruptInit
void f_80154480(Ctx* __restrict c) {
  trace_call(0x80154480u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154480
  c->r[0]=c->lr; // 80154484
  c->r[4]=0u+0x00000000u; // 80154488
  c->r[5]=0u+0x00000080u; // 8015448C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80154490
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80154494
  c->r[31]=0u+0x80000000u; // 80154498
  c->r[3]=c->r[31]+0x00003040u; // 8015449C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801544A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801544A4
  W32(c->r[13]+0xFFFFAA30u,c->r[3]); // 801544A8
  c->lr=0x801544B0u; f_8000443C(c); // 801544AC
  c->r[6]=0u+0x00000000u; // 801544B0
  c->r[5]=0u+0x000000F0u; // 801544B4
  W32(c->r[31]+0x000000C4u,c->r[6]); // 801544B8
  c->r[4]=0u+0xCC000000u; // 801544BC
  c->r[0]=0u+0x40000000u; // 801544C0
  c->r[3]=0u+0xCD000000u; // 801544C4
  W32(c->r[31]+0x000000C8u,c->r[6]); // 801544C8
  c->r[30]=0u+0xFFFFFFF0u; // 801544CC
  W32(c->r[4]+0x00003004u,c->r[5]); // 801544D0
  W32(c->r[3]+0x00000034u,c->r[0]); // 801544D4
  c->lr=0x801544DCu; f_80154410(c); // 801544D8
  c->r[0]=R32(c->r[31]+0x000000C4u); // 801544DC
  c->r[29]=c->r[3]|c->r[3]; // 801544E0
  c->r[4]=R32(c->r[31]+0x000000C8u); // 801544E4
  c->r[30]=c->r[30]|c->r[0]; // 801544E8
  c->r[0]=~(c->r[0]|c->r[4]); // 801544EC
  W32(c->r[31]+0x000000C4u,c->r[30]); // 801544F0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF0u; // 801544F4
  c->r[30]=c->r[30]|c->r[4]; // 801544F8
  goto L_80154508; // 801544FC
L_80154500:;
  c->r[4]=c->r[30]|c->r[30]; // 80154500
  c->lr=0x80154508u; f_80154544(c); // 80154504
L_80154508:;
  cmps(c,0,(int32_t)c->r[3],0); // 80154508
  if (!crb(c,2)) { IRQCHK(c); goto L_80154500; } // 8015450C
  c->r[3]=c->r[29]|c->r[29]; // 80154510
  c->lr=0x80154518u; f_80154438(c); // 80154514
  c->r[4]=0u+0x80150000u; // 80154518
  c->r[3]=0u+0x00000004u; // 8015451C
  c->r[4]=c->r[4]+0x00004B44u; // 80154520
  c->lr=0x80154528u; f_8014E598(c); // 80154524
  c->r[0]=R32(c->r[1]+0x00000024u); // 80154528
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8015452C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80154530
  c->r[29]=R32(c->r[1]+0x00000014u); // 80154534
  c->lr=c->r[0]; // 80154538
  c->r[1]=c->r[1]+0x00000020u; // 8015453C
  return; // 80154540
}

// SetInterruptMask
void f_80154544(Ctx* __restrict c) {
  trace_call(0x80154544u);
  c->r[0]=cntlz(c->r[3]); // 80154544
  cmps(c,0,(int32_t)c->r[0],12); // 80154548
  if (!crb(c,0)) { goto L_80154570; } // 8015454C
  cmps(c,0,(int32_t)c->r[0],8); // 80154550
  if (crb(c,2)) { goto L_80154620; } // 80154554
  if (!crb(c,0)) { goto L_8015464C; } // 80154558
  cmps(c,0,(int32_t)c->r[0],5); // 8015455C
  if (!crb(c,0)) { goto L_801545E0; } // 80154560
  cmps(c,0,(int32_t)c->r[0],0); // 80154564
  if (!crb(c,0)) { goto L_80154590; } // 80154568
  return; // 8015456C
L_80154570:;
  cmps(c,0,(int32_t)c->r[0],17); // 80154570
  if (!crb(c,0)) { goto L_80154584; } // 80154574
  cmps(c,0,(int32_t)c->r[0],15); // 80154578
  if (!crb(c,0)) { goto L_801546D4; } // 8015457C
  goto L_80154690; // 80154580
L_80154584:;
  cmps(c,0,(int32_t)c->r[0],28); // 80154584
  if (!crb(c,0)) return; // 80154588
  goto L_80154708; // 8015458C
L_80154590:;
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 80154590
  c->r[5]=0u+0x00000000u; // 80154594
  if (!crb(c,2)) { goto L_801545A0; } // 80154598
  c->r[5]=c->r[5]|0x00000001u; // 8015459C
L_801545A0:;
  c->r[0]=rotl(c->r[4],0)&0x40000000u; cr0(c,c->r[0]); // 801545A0
  if (!crb(c,2)) { goto L_801545AC; } // 801545A4
  c->r[5]=c->r[5]|0x00000002u; // 801545A8
L_801545AC:;
  c->r[0]=rotl(c->r[4],0)&0x20000000u; cr0(c,c->r[0]); // 801545AC
  if (!crb(c,2)) { goto L_801545B8; } // 801545B0
  c->r[5]=c->r[5]|0x00000004u; // 801545B4
L_801545B8:;
  c->r[0]=rotl(c->r[4],0)&0x10000000u; cr0(c,c->r[0]); // 801545B8
  if (!crb(c,2)) { goto L_801545C4; } // 801545BC
  c->r[5]=c->r[5]|0x00000008u; // 801545C0
L_801545C4:;
  c->r[0]=rotl(c->r[4],0)&0x08000000u; cr0(c,c->r[0]); // 801545C4
  if (!crb(c,2)) { goto L_801545D0; } // 801545C8
  c->r[5]=c->r[5]|0x00000010u; // 801545CC
L_801545D0:;
  c->r[4]=0u+0xCC000000u; // 801545D0
  c->r[3]=rotl(c->r[3],0)&0x07FFFFFFu; // 801545D4
  W16(c->r[4]+0x0000401Cu,c->r[5]); // 801545D8
  return; // 801545DC
L_801545E0:;
  c->r[5]=0u+0xCC000000u; // 801545E0
  c->r[0]=rotl(c->r[4],0)&0x04000000u; cr0(c,c->r[0]); // 801545E4
  c->r[5]=R16(c->r[5]+0x0000500Au); // 801545E8
  c->r[5]=rotl(c->r[5],0)&0xFFFFFE07u; // 801545EC
  if (!crb(c,2)) { goto L_801545F8; } // 801545F0
  c->r[5]=c->r[5]|0x00000010u; // 801545F4
L_801545F8:;
  c->r[0]=rotl(c->r[4],0)&0x02000000u; cr0(c,c->r[0]); // 801545F8
  if (!crb(c,2)) { goto L_80154604; } // 801545FC
  c->r[5]=c->r[5]|0x00000040u; // 80154600
L_80154604:;
  c->r[0]=rotl(c->r[4],0)&0x01000000u; cr0(c,c->r[0]); // 80154604
  if (!crb(c,2)) { goto L_80154610; } // 80154608
  c->r[5]=c->r[5]|0x00000100u; // 8015460C
L_80154610:;
  c->r[4]=0u+0xCC000000u; // 80154610
  c->r[3]=rotl(c->r[3],0)&0xF8FFFFFFu; // 80154614
  W16(c->r[4]+0x0000500Au,c->r[5]); // 80154618
  return; // 8015461C
L_80154620:;
  c->r[0]=rotl(c->r[4],0)&0x00800000u; cr0(c,c->r[0]); // 80154620
  c->r[4]=0u+0xCD000000u; // 80154624
  c->r[5]=R32(c->r[4]+0x00006C00u); // 80154628
  c->r[0]=0u+0xFFFFFFD3u; // 8015462C
  c->r[5]=c->r[5]&c->r[0]; // 80154630
  if (!crb(c,2)) { goto L_8015463C; } // 80154634
  c->r[5]=c->r[5]|0x00000004u; // 80154638
L_8015463C:;
  c->r[4]=0u+0xCD000000u; // 8015463C
  c->r[3]=rotl(c->r[3],0)&0xFF7FFFFFu; // 80154640
  W32(c->r[4]+0x00006C00u,c->r[5]); // 80154644
  return; // 80154648
L_8015464C:;
  c->r[0]=rotl(c->r[4],0)&0x00400000u; cr0(c,c->r[0]); // 8015464C
  c->r[5]=0u+0xCD000000u; // 80154650
  c->r[5]=R32(c->r[5]+0x00006800u); // 80154654
  c->r[0]=0u+0xFFFFD3F0u; // 80154658
  c->r[5]=c->r[5]&c->r[0]; // 8015465C
  if (!crb(c,2)) { goto L_80154668; } // 80154660
  c->r[5]=c->r[5]|0x00000001u; // 80154664
L_80154668:;
  c->r[0]=rotl(c->r[4],0)&0x00200000u; cr0(c,c->r[0]); // 80154668
  if (!crb(c,2)) { goto L_80154674; } // 8015466C
  c->r[5]=c->r[5]|0x00000004u; // 80154670
L_80154674:;
  c->r[0]=rotl(c->r[4],0)&0x00100000u; cr0(c,c->r[0]); // 80154674
  if (!crb(c,2)) { goto L_80154680; } // 80154678
  c->r[5]=c->r[5]|0x00000400u; // 8015467C
L_80154680:;
  c->r[4]=0u+0xCD000000u; // 80154680
  c->r[3]=rotl(c->r[3],0)&0xFF8FFFFFu; // 80154684
  W32(c->r[4]+0x00006800u,c->r[5]); // 80154688
  return; // 8015468C
L_80154690:;
  c->r[0]=rotl(c->r[4],0)&0x00080000u; cr0(c,c->r[0]); // 80154690
  c->r[5]=0u+0xCD000000u; // 80154694
  c->r[5]=R32(c->r[5]+0x00006814u); // 80154698
  c->r[0]=0u+0xFFFFF3F0u; // 8015469C
  c->r[5]=c->r[5]&c->r[0]; // 801546A0
  if (!crb(c,2)) { goto L_801546AC; } // 801546A4
  c->r[5]=c->r[5]|0x00000001u; // 801546A8
L_801546AC:;
  c->r[0]=rotl(c->r[4],0)&0x00040000u; cr0(c,c->r[0]); // 801546AC
  if (!crb(c,2)) { goto L_801546B8; } // 801546B0
  c->r[5]=c->r[5]|0x00000004u; // 801546B4
L_801546B8:;
  c->r[0]=rotl(c->r[4],0)&0x00020000u; cr0(c,c->r[0]); // 801546B8
  if (!crb(c,2)) { goto L_801546C4; } // 801546BC
  c->r[5]=c->r[5]|0x00000400u; // 801546C0
L_801546C4:;
  c->r[4]=0u+0xCD000000u; // 801546C4
  c->r[3]=rotl(c->r[3],0)&0xFFF1FFFFu; // 801546C8
  W32(c->r[4]+0x00006814u,c->r[5]); // 801546CC
  return; // 801546D0
L_801546D4:;
  c->r[5]=0u+0xCD000000u; // 801546D4
  c->r[0]=rotl(c->r[4],0)&0x00010000u; cr0(c,c->r[0]); // 801546D8
  c->r[5]=R32(c->r[5]+0x00006828u); // 801546DC
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFF0u; // 801546E0
  if (!crb(c,2)) { goto L_801546EC; } // 801546E4
  c->r[5]=c->r[5]|0x00000001u; // 801546E8
L_801546EC:;
  c->r[0]=rotl(c->r[4],0)&0x00008000u; cr0(c,c->r[0]); // 801546EC
  if (!crb(c,2)) { goto L_801546F8; } // 801546F0
  c->r[5]=c->r[5]|0x00000004u; // 801546F4
L_801546F8:;
  c->r[4]=0u+0xCD000000u; // 801546F8
  c->r[3]=rotl(c->r[3],0)&0xFFFE7FFFu; // 801546FC
  W32(c->r[4]+0x00006828u,c->r[5]); // 80154700
  return; // 80154704
L_80154708:;
  c->r[0]=rotl(c->r[4],0)&0x00004000u; cr0(c,c->r[0]); // 80154708
  c->r[5]=0u+0x000000F0u; // 8015470C
  if (!crb(c,2)) { goto L_80154718; } // 80154710
  c->r[5]=c->r[5]|0x00000800u; // 80154714
L_80154718:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 80154718
  if (!crb(c,2)) { goto L_80154724; } // 8015471C
  c->r[5]=c->r[5]|0x00000008u; // 80154720
L_80154724:;
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 80154724
  if (!crb(c,2)) { goto L_80154730; } // 80154728
  c->r[5]=c->r[5]|0x00000004u; // 8015472C
L_80154730:;
  c->r[0]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[0]); // 80154730
  if (!crb(c,2)) { goto L_8015473C; } // 80154734
  c->r[5]=c->r[5]|0x00000002u; // 80154738
L_8015473C:;
  c->r[0]=rotl(c->r[4],0)&0x00000100u; cr0(c,c->r[0]); // 8015473C
  if (!crb(c,2)) { goto L_80154748; } // 80154740
  c->r[5]=c->r[5]|0x00000001u; // 80154744
L_80154748:;
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 80154748
  if (!crb(c,2)) { goto L_80154754; } // 8015474C
  c->r[5]=c->r[5]|0x00000100u; // 80154750
L_80154754:;
  c->r[0]=rotl(c->r[4],0)&0x00000040u; cr0(c,c->r[0]); // 80154754
  if (!crb(c,2)) { goto L_80154760; } // 80154758
  c->r[5]=c->r[5]|0x00001000u; // 8015475C
L_80154760:;
  c->r[0]=rotl(c->r[4],0)&0x00002000u; cr0(c,c->r[0]); // 80154760
  if (!crb(c,2)) { goto L_8015476C; } // 80154764
  c->r[5]=c->r[5]|0x00000200u; // 80154768
L_8015476C:;
  c->r[0]=rotl(c->r[4],0)&0x00001000u; cr0(c,c->r[0]); // 8015476C
  if (!crb(c,2)) { goto L_80154778; } // 80154770
  c->r[5]=c->r[5]|0x00000400u; // 80154774
L_80154778:;
  c->r[0]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[0]); // 80154778
  if (!crb(c,2)) { goto L_80154784; } // 8015477C
  c->r[5]=c->r[5]|0x00002000u; // 80154780
L_80154784:;
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 80154784
  if (!crb(c,2)) { goto L_80154790; } // 80154788
  c->r[5]=c->r[5]|0x00004000u; // 8015478C
L_80154790:;
  c->r[4]=0u+0xCC000000u; // 80154790
  c->r[3]=rotl(c->r[3],0)&0xFFFF800Fu; // 80154794
  W32(c->r[4]+0x00003004u,c->r[5]); // 80154798
  return; // 8015479C
}

// __OSMaskInterrupts
void f_801547A0(Ctx* __restrict c) {
  trace_call(0x801547A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801547A0
  c->r[0]=c->lr; // 801547A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801547A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801547AC
  c->r[31]=c->r[3]|c->r[3]; // 801547B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801547B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801547B8
  c->lr=0x801547C0u; f_80154410(c); // 801547BC
  c->r[4]=0u+0x80000000u; // 801547C0
  c->r[30]=c->r[3]|c->r[3]; // 801547C4
  c->r[29]=R32(c->r[4]+0x000000C4u); // 801547C8
  c->r[5]=R32(c->r[4]+0x000000C8u); // 801547CC
  c->r[0]=c->r[29]|c->r[5]; // 801547D0
  c->r[3]=c->r[31]&~c->r[0]; // 801547D4
  c->r[31]=c->r[31]|c->r[29]; // 801547D8
  W32(c->r[4]+0x000000C4u,c->r[31]); // 801547DC
  c->r[31]=c->r[31]|c->r[5]; // 801547E0
  goto L_801547F0; // 801547E4
L_801547E8:;
  c->r[4]=c->r[31]|c->r[31]; // 801547E8
  c->lr=0x801547F0u; f_80154544(c); // 801547EC
L_801547F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801547F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801547E8; } // 801547F4
  c->r[3]=c->r[30]|c->r[30]; // 801547F8
  c->lr=0x80154800u; f_80154438(c); // 801547FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80154800
  c->r[3]=c->r[29]|c->r[29]; // 80154804
  c->r[30]=R32(c->r[1]+0x00000018u); // 80154808
  c->r[29]=R32(c->r[1]+0x00000014u); // 8015480C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80154810
  c->lr=c->r[0]; // 80154814
  c->r[1]=c->r[1]+0x00000020u; // 80154818
  return; // 8015481C
}

// __OSUnmaskInterrupts
void f_80154820(Ctx* __restrict c) {
  trace_call(0x80154820u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154820
  c->r[0]=c->lr; // 80154824
  W32(c->r[1]+0x00000024u,c->r[0]); // 80154828
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8015482C
  c->r[31]=c->r[3]|c->r[3]; // 80154830
  W32(c->r[1]+0x00000018u,c->r[30]); // 80154834
  W32(c->r[1]+0x00000014u,c->r[29]); // 80154838
  c->lr=0x80154840u; f_80154410(c); // 8015483C
  c->r[4]=0u+0x80000000u; // 80154840
  c->r[30]=c->r[3]|c->r[3]; // 80154844
  c->r[29]=R32(c->r[4]+0x000000C4u); // 80154848
  c->r[5]=R32(c->r[4]+0x000000C8u); // 8015484C
  c->r[0]=c->r[29]|c->r[5]; // 80154850
  c->r[3]=c->r[31]&c->r[0]; // 80154854
  c->r[31]=c->r[29]&~c->r[31]; // 80154858
  W32(c->r[4]+0x000000C4u,c->r[31]); // 8015485C
  c->r[31]=c->r[31]|c->r[5]; // 80154860
  goto L_80154870; // 80154864
L_80154868:;
  c->r[4]=c->r[31]|c->r[31]; // 80154868
  c->lr=0x80154870u; f_80154544(c); // 8015486C
L_80154870:;
  cmps(c,0,(int32_t)c->r[3],0); // 80154870
  if (!crb(c,2)) { IRQCHK(c); goto L_80154868; } // 80154874
  c->r[3]=c->r[30]|c->r[30]; // 80154878
  c->lr=0x80154880u; f_80154438(c); // 8015487C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80154880
  c->r[3]=c->r[29]|c->r[29]; // 80154884
  c->r[30]=R32(c->r[1]+0x00000018u); // 80154888
  c->r[29]=R32(c->r[1]+0x00000014u); // 8015488C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80154890
  c->lr=c->r[0]; // 80154894
  c->r[1]=c->r[1]+0x00000020u; // 80154898
  return; // 8015489C
}

// __OSDispatchInterrupt
void f_801548A0(Ctx* __restrict c) {
  trace_call(0x801548A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801548A0
  c->r[0]=c->lr; // 801548A4
  c->r[3]=0u+0xCC000000u; // 801548A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801548AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801548B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801548B4
  c->r[30]=c->r[4]|c->r[4]; // 801548B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801548BC
  c->r[31]=R32(c->r[3]+0x00003000u); // 801548C0
  c->r[0]=R32(c->r[3]+0x00003004u); // 801548C4
  c->r[31]=rotl(c->r[31],0)&0xFFFEFFFFu; cr0(c,c->r[31]); // 801548C8
  if (crb(c,2)) { goto L_801548D8; } // 801548CC
  c->r[0]=c->r[31]&c->r[0]; cr0(c,c->r[0]); // 801548D0
  if (!crb(c,2)) { goto L_801548E0; } // 801548D4
L_801548D8:;
  c->r[3]=c->r[30]|c->r[30]; // 801548D8
  c->lr=0x801548E0u; f_80150168(c); // 801548DC
L_801548E0:;
  c->r[0]=rotl(c->r[31],0)&0x00000080u; cr0(c,c->r[0]); // 801548E0
  c->r[0]=0u+0x00000000u; // 801548E4
  if (crb(c,2)) { goto L_80154930; } // 801548E8
  c->r[3]=0u+0xCC000000u; // 801548EC
  c->r[4]=R16(c->r[3]+0x0000401Eu); // 801548F0
  c->r[3]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[3]); // 801548F4
  if (crb(c,2)) { goto L_80154900; } // 801548F8
  c->r[0]=c->r[0]|0x80000000u; // 801548FC
L_80154900:;
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 80154900
  if (crb(c,2)) { goto L_8015490C; } // 80154904
  c->r[0]=c->r[0]|0x40000000u; // 80154908
L_8015490C:;
  c->r[3]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[3]); // 8015490C
  if (crb(c,2)) { goto L_80154918; } // 80154910
  c->r[0]=c->r[0]|0x20000000u; // 80154914
L_80154918:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 80154918
  if (crb(c,2)) { goto L_80154924; } // 8015491C
  c->r[0]=c->r[0]|0x10000000u; // 80154920
L_80154924:;
  c->r[3]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[3]); // 80154924
  if (crb(c,2)) { goto L_80154930; } // 80154928
  c->r[0]=c->r[0]|0x08000000u; // 8015492C
L_80154930:;
  c->r[3]=rotl(c->r[31],0)&0x00000040u; cr0(c,c->r[3]); // 80154930
  if (crb(c,2)) { goto L_80154964; } // 80154934
  c->r[3]=0u+0xCC000000u; // 80154938
  c->r[4]=R16(c->r[3]+0x0000500Au); // 8015493C
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 80154940
  if (crb(c,2)) { goto L_8015494C; } // 80154944
  c->r[0]=c->r[0]|0x04000000u; // 80154948
L_8015494C:;
  c->r[3]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[3]); // 8015494C
  if (crb(c,2)) { goto L_80154958; } // 80154950
  c->r[0]=c->r[0]|0x02000000u; // 80154954
L_80154958:;
  c->r[3]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[3]); // 80154958
  if (crb(c,2)) { goto L_80154964; } // 8015495C
  c->r[0]=c->r[0]|0x01000000u; // 80154960
L_80154964:;
  c->r[3]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[3]); // 80154964
  if (crb(c,2)) { goto L_80154980; } // 80154968
  c->r[3]=0u+0xCD000000u; // 8015496C
  c->r[3]=R32(c->r[3]+0x00006C00u); // 80154970
  c->r[3]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[3]); // 80154974
  if (crb(c,2)) { goto L_80154980; } // 80154978
  c->r[0]=c->r[0]|0x00800000u; // 8015497C
L_80154980:;
  c->r[3]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[3]); // 80154980
  if (crb(c,2)) { goto L_80154A00; } // 80154984
  c->r[3]=0u+0xCD000000u; // 80154988
  c->r[4]=R32(c->r[3]+0x00006800u); // 8015498C
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 80154990
  if (crb(c,2)) { goto L_8015499C; } // 80154994
  c->r[0]=c->r[0]|0x00400000u; // 80154998
L_8015499C:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 8015499C
  if (crb(c,2)) { goto L_801549A8; } // 801549A0
  c->r[0]=c->r[0]|0x00200000u; // 801549A4
L_801549A8:;
  c->r[3]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[3]); // 801549A8
  if (crb(c,2)) { goto L_801549B4; } // 801549AC
  c->r[0]=c->r[0]|0x00100000u; // 801549B0
L_801549B4:;
  c->r[3]=0u+0xCD000000u; // 801549B4
  c->r[4]=R32(c->r[3]+0x00006814u); // 801549B8
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 801549BC
  if (crb(c,2)) { goto L_801549C8; } // 801549C0
  c->r[0]=c->r[0]|0x00080000u; // 801549C4
L_801549C8:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 801549C8
  if (crb(c,2)) { goto L_801549D4; } // 801549CC
  c->r[0]=c->r[0]|0x00040000u; // 801549D0
L_801549D4:;
  c->r[3]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[3]); // 801549D4
  if (crb(c,2)) { goto L_801549E0; } // 801549D8
  c->r[0]=c->r[0]|0x00020000u; // 801549DC
L_801549E0:;
  c->r[3]=0u+0xCD000000u; // 801549E0
  c->r[4]=R32(c->r[3]+0x00006828u); // 801549E4
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 801549E8
  if (crb(c,2)) { goto L_801549F4; } // 801549EC
  c->r[0]=c->r[0]|0x00010000u; // 801549F0
L_801549F4:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 801549F4
  if (crb(c,2)) { goto L_80154A00; } // 801549F8
  c->r[0]=c->r[0]|0x00008000u; // 801549FC
L_80154A00:;
  c->r[3]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[3]); // 80154A00
  if (crb(c,2)) { goto L_80154A0C; } // 80154A04
  c->r[0]=c->r[0]|0x00000020u; // 80154A08
L_80154A0C:;
  c->r[3]=rotl(c->r[31],0)&0x00001000u; cr0(c,c->r[3]); // 80154A0C
  if (crb(c,2)) { goto L_80154A18; } // 80154A10
  c->r[0]=c->r[0]|0x00000040u; // 80154A14
L_80154A18:;
  c->r[3]=rotl(c->r[31],0)&0x00000400u; cr0(c,c->r[3]); // 80154A18
  if (crb(c,2)) { goto L_80154A24; } // 80154A1C
  c->r[0]=c->r[0]|0x00001000u; // 80154A20
L_80154A24:;
  c->r[3]=rotl(c->r[31],0)&0x00000200u; cr0(c,c->r[3]); // 80154A24
  if (crb(c,2)) { goto L_80154A30; } // 80154A28
  c->r[0]=c->r[0]|0x00002000u; // 80154A2C
L_80154A30:;
  c->r[3]=rotl(c->r[31],0)&0x00000100u; cr0(c,c->r[3]); // 80154A30
  if (crb(c,2)) { goto L_80154A3C; } // 80154A34
  c->r[0]=c->r[0]|0x00000080u; // 80154A38
L_80154A3C:;
  c->r[3]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[3]); // 80154A3C
  if (crb(c,2)) { goto L_80154A48; } // 80154A40
  c->r[0]=c->r[0]|0x00000800u; // 80154A44
L_80154A48:;
  c->r[3]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[3]); // 80154A48
  if (crb(c,2)) { goto L_80154A54; } // 80154A4C
  c->r[0]=c->r[0]|0x00000400u; // 80154A50
L_80154A54:;
  c->r[3]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[3]); // 80154A54
  if (crb(c,2)) { goto L_80154A60; } // 80154A58
  c->r[0]=c->r[0]|0x00000200u; // 80154A5C
L_80154A60:;
  c->r[3]=rotl(c->r[31],0)&0x00000800u; cr0(c,c->r[3]); // 80154A60
  if (crb(c,2)) { goto L_80154A6C; } // 80154A64
  c->r[0]=c->r[0]|0x00004000u; // 80154A68
L_80154A6C:;
  c->r[3]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[3]); // 80154A6C
  if (crb(c,2)) { goto L_80154A78; } // 80154A70
  c->r[0]=c->r[0]|0x00000100u; // 80154A74
L_80154A78:;
  c->r[3]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[3]); // 80154A78
  if (crb(c,2)) { goto L_80154A84; } // 80154A7C
  c->r[0]=c->r[0]|0x00000010u; // 80154A80
L_80154A84:;
  c->r[3]=0u+0x80000000u; // 80154A84
  c->r[4]=R32(c->r[3]+0x000000C4u); // 80154A88
  c->r[3]=R32(c->r[3]+0x000000C8u); // 80154A8C
  c->r[3]=c->r[4]|c->r[3]; // 80154A90
  c->r[3]=c->r[0]&~c->r[3]; cr0(c,c->r[3]); // 80154A94
  if (crb(c,2)) { goto L_80154B20; } // 80154A98
  c->r[4]=0u+0x802C0000u; // 80154A9C
  c->r[4]=c->r[4]+0x00007F88u; // 80154AA0
L_80154AA4:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80154AA4
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80154AA8
  if (crb(c,2)) { goto L_80154ABC; } // 80154AAC
  c->r[0]=cntlz(c->r[0]); // 80154AB0
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80154AB4
  goto L_80154AC4; // 80154AB8
L_80154ABC:;
  c->r[4]=c->r[4]+0x00000004u; // 80154ABC
  IRQCHK(c); goto L_80154AA4; // 80154AC0
L_80154AC4:;
  c->r[3]=R32(c->r[13]+0xFFFFAA30u); // 80154AC4
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80154AC8
  c->r[31]=R32(c->r[3]+c->r[0]); // 80154ACC
  cmps(c,0,(int32_t)c->r[31],0); // 80154AD0
  if (crb(c,2)) { goto L_80154B20; } // 80154AD4
  cmps(c,0,(int32_t)c->r[29],4); // 80154AD8
  if (!crb(c,1)) { goto L_80154AF8; } // 80154ADC
  W16(c->r[13]+0xFFFFAA24u,c->r[29]); // 80154AE0
  c->lr=0x80154AE8u; f_8015848C(c); // 80154AE4
  W32(c->r[13]+0xFFFFAA2Cu,c->r[4]); // 80154AE8
  W32(c->r[13]+0xFFFFAA28u,c->r[3]); // 80154AEC
  c->r[0]=R32(c->r[30]+0x00000198u); // 80154AF0
  W32(c->r[13]+0xFFFFAA20u,c->r[0]); // 80154AF4
L_80154AF8:;
  c->lr=0x80154AFCu; f_801571A4(c); // 80154AF8
  c->r[12]=c->r[31]|c->r[31]; // 80154AFC
  c->r[3]=c->r[29]|c->r[29]; // 80154B00
  c->r[4]=c->r[30]|c->r[30]; // 80154B04
  c->ctr=c->r[12]; // 80154B08
  if (true) { c->lr=0x80154B10u; dispatch(c,c->ctr); } // 80154B0C
  c->lr=0x80154B14u; f_801571E0(c); // 80154B10
  c->lr=0x80154B18u; f_801576EC(c); // 80154B14
  c->r[3]=c->r[30]|c->r[30]; // 80154B18
  c->lr=0x80154B20u; f_80150168(c); // 80154B1C
L_80154B20:;
  c->r[3]=c->r[30]|c->r[30]; // 80154B20
  c->lr=0x80154B28u; f_80150168(c); // 80154B24
  c->r[0]=R32(c->r[1]+0x00000024u); // 80154B28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80154B2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80154B30
  c->r[29]=R32(c->r[1]+0x00000014u); // 80154B34
  c->lr=c->r[0]; // 80154B38
  c->r[1]=c->r[1]+0x00000020u; // 80154B3C
  return; // 80154B40
}

// ExternalInterruptHandler
void f_80154B44(Ctx* __restrict c) {
  trace_call(0x80154B44u);
  W32(c->r[4]+0x00000000u,c->r[0]); // 80154B44
  W32(c->r[4]+0x00000004u,c->r[1]); // 80154B48
  W32(c->r[4]+0x00000008u,c->r[2]); // 80154B4C
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80154B50
  c->r[0]=mfspr(c,913); // 80154B54
  W32(c->r[4]+0x000001A8u,c->r[0]); // 80154B58
  c->r[0]=mfspr(c,914); // 80154B5C
  W32(c->r[4]+0x000001ACu,c->r[0]); // 80154B60
  c->r[0]=mfspr(c,915); // 80154B64
  W32(c->r[4]+0x000001B0u,c->r[0]); // 80154B68
  c->r[0]=mfspr(c,916); // 80154B6C
  W32(c->r[4]+0x000001B4u,c->r[0]); // 80154B70
  c->r[0]=mfspr(c,917); // 80154B74
  W32(c->r[4]+0x000001B8u,c->r[0]); // 80154B78
  c->r[0]=mfspr(c,918); // 80154B7C
  W32(c->r[4]+0x000001BCu,c->r[0]); // 80154B80
  c->r[0]=mfspr(c,919); // 80154B84
  W32(c->r[4]+0x000001C0u,c->r[0]); // 80154B88
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154B8C
  f_801548A0(c); return; // 80154B90
}

// __OSModuleInit
void f_80154B94(Ctx* __restrict c) {
  trace_call(0x80154B94u);
  c->r[0]=0u+0x00000000u; // 80154B94
  c->r[3]=0u+0x80000000u; // 80154B98
  W32(c->r[3]+0x000030CCu,c->r[0]); // 80154B9C
  W32(c->r[3]+0x000030C8u,c->r[0]); // 80154BA0
  W32(c->r[3]+0x000030D0u,c->r[0]); // 80154BA4
  return; // 80154BA8
}

// OSInitMessageQueue
void f_80154BAC(Ctx* __restrict c) {
  trace_call(0x80154BACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154BAC
  c->r[0]=c->lr; // 80154BB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80154BB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80154BB8
  c->r[31]=c->r[5]|c->r[5]; // 80154BBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80154BC0
  c->r[30]=c->r[4]|c->r[4]; // 80154BC4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80154BC8
  c->r[29]=c->r[3]|c->r[3]; // 80154BCC
  c->lr=0x80154BD4u; f_8015715C(c); // 80154BD0
  c->r[3]=c->r[29]+0x00000008u; // 80154BD4
  c->lr=0x80154BDCu; f_8015715C(c); // 80154BD8
  c->r[0]=0u+0x00000000u; // 80154BDC
  W32(c->r[29]+0x00000010u,c->r[30]); // 80154BE0
  W32(c->r[29]+0x00000014u,c->r[31]); // 80154BE4
  W32(c->r[29]+0x00000018u,c->r[0]); // 80154BE8
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 80154BEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80154BF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80154BF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80154BF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80154BFC
  c->lr=c->r[0]; // 80154C00
  c->r[1]=c->r[1]+0x00000020u; // 80154C04
  return; // 80154C08
}

// OSSendMessage
void f_80154C0C(Ctx* __restrict c) {
  trace_call(0x80154C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154C0C
  c->r[0]=c->lr; // 80154C10
  W32(c->r[1]+0x00000024u,c->r[0]); // 80154C14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80154C18
  c->r[31]=c->r[5]|c->r[5]; // 80154C1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80154C20
  W32(c->r[1]+0x00000014u,c->r[29]); // 80154C24
  c->r[29]=c->r[4]|c->r[4]; // 80154C28
  W32(c->r[1]+0x00000010u,c->r[28]); // 80154C2C
  c->r[28]=c->r[3]|c->r[3]; // 80154C30
  c->lr=0x80154C38u; f_80154410(c); // 80154C34
  c->r[30]=c->r[3]|c->r[3]; // 80154C38
  c->r[31]=rotl(c->r[31],0)&0x00000001u; // 80154C3C
  goto L_80154C64; // 80154C40
L_80154C44:;
  cmps(c,0,(int32_t)c->r[31],0); // 80154C44
  if (!crb(c,2)) { goto L_80154C5C; } // 80154C48
  c->r[3]=c->r[30]|c->r[30]; // 80154C4C
  c->lr=0x80154C54u; f_80154438(c); // 80154C50
  c->r[3]=0u+0x00000000u; // 80154C54
  goto L_80154CB4; // 80154C58
L_80154C5C:;
  c->r[3]=c->r[28]|c->r[28]; // 80154C5C
  c->lr=0x80154C64u; f_801581D4(c); // 80154C60
L_80154C64:;
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 80154C64
  c->r[6]=R32(c->r[28]+0x00000014u); // 80154C68
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 80154C6C
  if (!crb(c,1)) { IRQCHK(c); goto L_80154C44; } // 80154C70
  c->r[0]=R32(c->r[28]+0x00000018u); // 80154C74
  c->r[3]=c->r[28]+0x00000008u; // 80154C78
  c->r[5]=R32(c->r[28]+0x00000010u); // 80154C7C
  c->r[4]=c->r[0]+c->r[4]; // 80154C80
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[6]); // 80154C84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 80154C88
  c->r[0]=c->r[4]-c->r[0]; // 80154C8C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80154C90
  W32(c->r[5]+c->r[0],c->r[29]); // 80154C94
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 80154C98
  c->r[0]=c->r[4]+0x00000001u; // 80154C9C
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 80154CA0
  c->lr=0x80154CA8u; f_801582C0(c); // 80154CA4
  c->r[3]=c->r[30]|c->r[30]; // 80154CA8
  c->lr=0x80154CB0u; f_80154438(c); // 80154CAC
  c->r[3]=0u+0x00000001u; // 80154CB0
L_80154CB4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80154CB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80154CB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80154CBC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80154CC0
  c->r[28]=R32(c->r[1]+0x00000010u); // 80154CC4
  c->lr=c->r[0]; // 80154CC8
  c->r[1]=c->r[1]+0x00000020u; // 80154CCC
  return; // 80154CD0
}

// OSReceiveMessage
void f_80154CD4(Ctx* __restrict c) {
  trace_call(0x80154CD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154CD4
  c->r[0]=c->lr; // 80154CD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80154CDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80154CE0
  c->r[31]=c->r[3]|c->r[3]; // 80154CE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80154CE8
  c->r[30]=c->r[5]|c->r[5]; // 80154CEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80154CF0
  W32(c->r[1]+0x00000010u,c->r[28]); // 80154CF4
  c->r[28]=c->r[4]|c->r[4]; // 80154CF8
  c->lr=0x80154D00u; f_80154410(c); // 80154CFC
  c->r[29]=c->r[3]|c->r[3]; // 80154D00
  c->r[30]=rotl(c->r[30],0)&0x00000001u; // 80154D04
  goto L_80154D2C; // 80154D08
L_80154D0C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80154D0C
  if (!crb(c,2)) { goto L_80154D24; } // 80154D10
  c->r[3]=c->r[29]|c->r[29]; // 80154D14
  c->lr=0x80154D1Cu; f_80154438(c); // 80154D18
  c->r[3]=0u+0x00000000u; // 80154D1C
  goto L_80154D90; // 80154D20
L_80154D24:;
  c->r[3]=c->r[31]+0x00000008u; // 80154D24
  c->lr=0x80154D2Cu; f_801581D4(c); // 80154D28
L_80154D2C:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80154D2C
  cmps(c,0,(int32_t)c->r[0],0); // 80154D30
  if (crb(c,2)) { IRQCHK(c); goto L_80154D0C; } // 80154D34
  cmps(c,0,(int32_t)c->r[28],0); // 80154D38
  if (crb(c,2)) { goto L_80154D54; } // 80154D3C
  c->r[0]=R32(c->r[31]+0x00000018u); // 80154D40
  c->r[3]=R32(c->r[31]+0x00000010u); // 80154D44
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80154D48
  c->r[0]=R32(c->r[3]+c->r[0]); // 80154D4C
  W32(c->r[28]+0x00000000u,c->r[0]); // 80154D50
L_80154D54:;
  c->r[4]=R32(c->r[31]+0x00000018u); // 80154D54
  c->r[3]=c->r[31]|c->r[31]; // 80154D58
  c->r[6]=R32(c->r[31]+0x00000014u); // 80154D5C
  c->r[7]=c->r[4]+0x00000001u; // 80154D60
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 80154D64
  c->r[5]=divw((int32_t)c->r[7],(int32_t)c->r[6]); // 80154D68
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80154D6C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80154D70
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 80154D74
  c->r[0]=c->r[7]-c->r[0]; // 80154D78
  W32(c->r[31]+0x00000018u,c->r[0]); // 80154D7C
  c->lr=0x80154D84u; f_801582C0(c); // 80154D80
  c->r[3]=c->r[29]|c->r[29]; // 80154D84
  c->lr=0x80154D8Cu; f_80154438(c); // 80154D88
  c->r[3]=0u+0x00000001u; // 80154D8C
L_80154D90:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80154D90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80154D94
  c->r[30]=R32(c->r[1]+0x00000018u); // 80154D98
  c->r[29]=R32(c->r[1]+0x00000014u); // 80154D9C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80154DA0
  c->lr=c->r[0]; // 80154DA4
  c->r[1]=c->r[1]+0x00000020u; // 80154DA8
  return; // 80154DAC
}

// OSJamMessage
void f_80154DB0(Ctx* __restrict c) {
  trace_call(0x80154DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154DB0
  c->r[0]=c->lr; // 80154DB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80154DB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80154DBC
  c->r[31]=c->r[5]|c->r[5]; // 80154DC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80154DC4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80154DC8
  c->r[29]=c->r[4]|c->r[4]; // 80154DCC
  W32(c->r[1]+0x00000010u,c->r[28]); // 80154DD0
  c->r[28]=c->r[3]|c->r[3]; // 80154DD4
  c->lr=0x80154DDCu; f_80154410(c); // 80154DD8
  c->r[30]=c->r[3]|c->r[3]; // 80154DDC
  c->r[31]=rotl(c->r[31],0)&0x00000001u; // 80154DE0
  goto L_80154E08; // 80154DE4
L_80154DE8:;
  cmps(c,0,(int32_t)c->r[31],0); // 80154DE8
  if (!crb(c,2)) { goto L_80154E00; } // 80154DEC
  c->r[3]=c->r[30]|c->r[30]; // 80154DF0
  c->lr=0x80154DF8u; f_80154438(c); // 80154DF4
  c->r[3]=0u+0x00000000u; // 80154DF8
  goto L_80154E60; // 80154DFC
L_80154E00:;
  c->r[3]=c->r[28]|c->r[28]; // 80154E00
  c->lr=0x80154E08u; f_801581D4(c); // 80154E04
L_80154E08:;
  c->r[6]=R32(c->r[28]+0x00000014u); // 80154E08
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 80154E0C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80154E10
  if (!crb(c,1)) { IRQCHK(c); goto L_80154DE8; } // 80154E14
  c->r[0]=R32(c->r[28]+0x00000018u); // 80154E18
  c->r[3]=c->r[28]+0x00000008u; // 80154E1C
  c->r[4]=R32(c->r[28]+0x00000010u); // 80154E20
  c->r[5]=c->r[6]+c->r[0]; // 80154E24
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80154E28
  c->r[0]=divw((int32_t)c->r[5],(int32_t)c->r[6]); // 80154E2C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 80154E30
  c->r[0]=c->r[5]-c->r[0]; // 80154E34
  W32(c->r[28]+0x00000018u,c->r[0]); // 80154E38
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80154E3C
  W32(c->r[4]+c->r[0],c->r[29]); // 80154E40
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 80154E44
  c->r[0]=c->r[4]+0x00000001u; // 80154E48
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 80154E4C
  c->lr=0x80154E54u; f_801582C0(c); // 80154E50
  c->r[3]=c->r[30]|c->r[30]; // 80154E54
  c->lr=0x80154E5Cu; f_80154438(c); // 80154E58
  c->r[3]=0u+0x00000001u; // 80154E5C
L_80154E60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80154E60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80154E64
  c->r[30]=R32(c->r[1]+0x00000018u); // 80154E68
  c->r[29]=R32(c->r[1]+0x00000014u); // 80154E6C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80154E70
  c->lr=c->r[0]; // 80154E74
  c->r[1]=c->r[1]+0x00000020u; // 80154E78
  return; // 80154E7C
}

// OSGetPhysicalMem1Size
void f_80154E80(Ctx* __restrict c) {
  trace_call(0x80154E80u);
  c->r[3]=0u+0x80000000u; // 80154E80
  c->r[3]=R32(c->r[3]+0x00003100u); // 80154E84
  return; // 80154E88
}

// OSGetPhysicalMem2Size
void f_80154E8C(Ctx* __restrict c) {
  trace_call(0x80154E8Cu);
  c->r[3]=0u+0x80000000u; // 80154E8C
  c->r[3]=R32(c->r[3]+0x00003118u); // 80154E90
  return; // 80154E94
}

// OSGetConsoleSimulatedMem1Size
void f_80154E98(Ctx* __restrict c) {
  trace_call(0x80154E98u);
  c->r[3]=0u+0x80000000u; // 80154E98
  c->r[3]=R32(c->r[3]+0x00003104u); // 80154E9C
  return; // 80154EA0
}

// OSGetConsoleSimulatedMem2Size
void f_80154EA4(Ctx* __restrict c) {
  trace_call(0x80154EA4u);
  c->r[3]=0u+0x80000000u; // 80154EA4
  c->r[3]=R32(c->r[3]+0x0000311Cu); // 80154EA8
  return; // 80154EAC
}

// OnShutdown
void f_80154EB0(Ctx* __restrict c) {
  trace_call(0x80154EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154EB0
  c->r[0]=c->lr; // 80154EB4
  cmps(c,0,(int32_t)c->r[3],0); // 80154EB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80154EBC
  if (crb(c,2)) { goto L_80154ED8; } // 80154EC0
  c->r[0]=0u+0x000000FFu; // 80154EC4
  c->r[3]=0u+0xCC000000u; // 80154EC8
  W16(c->r[3]+0x00004010u,c->r[0]); // 80154ECC
  c->r[3]=0u+0xF0000000u; // 80154ED0
  c->lr=0x80154ED8u; f_801547A0(c); // 80154ED4
L_80154ED8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80154ED8
  c->r[3]=0u+0x00000001u; // 80154EDC
  c->lr=c->r[0]; // 80154EE0
  c->r[1]=c->r[1]+0x00000010u; // 80154EE4
  return; // 80154EE8
}

// MEMIntrruptHandler
void f_80154EEC(Ctx* __restrict c) {
  trace_call(0x80154EECu);
  c->r[8]=0u+0xCC000000u; // 80154EEC
  c->r[3]=0u+0x80440000u; // 80154EF0
  c->r[5]=R16(c->r[8]+0x0000401Eu); // 80154EF4
  c->r[0]=0u+0x00000000u; // 80154EF8
  c->r[7]=R16(c->r[8]+0x00004024u); // 80154EFC
  c->r[3]=c->r[3]+0xFFFFE1F0u; // 80154F00
  c->r[6]=R16(c->r[8]+0x00004022u); // 80154F04
  c->r[6]=(rotl(c->r[7],16)&0x03FF0000u)|(c->r[6]&~0x03FF0000u); // 80154F08
  W16(c->r[8]+0x00004020u,c->r[0]); // 80154F0C
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 80154F10
  cmps(c,0,(int32_t)c->r[12],0); // 80154F14
  if (crb(c,2)) { goto L_80154F2C; } // 80154F18
  c->r[3]=0u+0x0000000Fu; // 80154F1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80154F20
  c->ctr=c->r[12]; // 80154F24
  if (true) { dispatch(c,c->ctr); return; } // 80154F28
L_80154F2C:;
  c->r[3]=0u+0x0000000Fu; // 80154F2C
  f_80150AF8(c); return; // 80154F30
}

// ConfigMEM1_24MB
void f_80154F34(Ctx* __restrict c) {
  trace_call(0x80154F34u);
  c->r[7]=0u+0x00000000u; // 80154F34
  c->r[4]=0u+0x00000000u; // 80154F38
  c->r[4]=c->r[4]+0x00000002u; // 80154F3C
  c->r[3]=0u+0x80000000u; // 80154F40
  c->r[3]=c->r[3]+0x000001FFu; // 80154F44
  c->r[6]=0u+0x01000000u; // 80154F48
  c->r[6]=c->r[6]+0x00000002u; // 80154F4C
  c->r[5]=0u+0x81000000u; // 80154F50
  c->r[5]=c->r[5]+0x000000FFu; // 80154F54
  /* isync */ // 80154F58
  mtspr(c,536,c->r[7]); // 80154F5C
  mtspr(c,537,c->r[4]); // 80154F60
  mtspr(c,536,c->r[3]); // 80154F64
  /* isync */ // 80154F68
  mtspr(c,528,c->r[7]); // 80154F6C
  mtspr(c,529,c->r[4]); // 80154F70
  mtspr(c,528,c->r[3]); // 80154F74
  /* isync */ // 80154F78
  mtspr(c,540,c->r[7]); // 80154F7C
  mtspr(c,541,c->r[6]); // 80154F80
  mtspr(c,540,c->r[5]); // 80154F84
  /* isync */ // 80154F88
  mtspr(c,532,c->r[7]); // 80154F8C
  mtspr(c,533,c->r[6]); // 80154F90
  mtspr(c,532,c->r[5]); // 80154F94
  /* isync */ // 80154F98
  c->r[3]=c->msr; // 80154F9C
  c->r[3]=c->r[3]|0x00000030u; // 80154FA0
  mtspr(c,27,c->r[3]); // 80154FA4
  c->r[3]=c->lr; // 80154FA8
  mtspr(c,26,c->r[3]); // 80154FAC
  return; /* rfi */ // 80154FB0
}

// ConfigMEM1_48MB
void f_80154FB4(Ctx* __restrict c) {
  trace_call(0x80154FB4u);
  c->r[7]=0u+0x00000000u; // 80154FB4
  c->r[4]=0u+0x00000000u; // 80154FB8
  c->r[4]=c->r[4]+0x00000002u; // 80154FBC
  c->r[3]=0u+0x80000000u; // 80154FC0
  c->r[3]=c->r[3]+0x000003FFu; // 80154FC4
  c->r[6]=0u+0x02000000u; // 80154FC8
  c->r[6]=c->r[6]+0x00000002u; // 80154FCC
  c->r[5]=0u+0x82000000u; // 80154FD0
  c->r[5]=c->r[5]+0x000001FFu; // 80154FD4
  /* isync */ // 80154FD8
  mtspr(c,536,c->r[7]); // 80154FDC
  mtspr(c,537,c->r[4]); // 80154FE0
  mtspr(c,536,c->r[3]); // 80154FE4
  /* isync */ // 80154FE8
  mtspr(c,528,c->r[7]); // 80154FEC
  mtspr(c,529,c->r[4]); // 80154FF0
  mtspr(c,528,c->r[3]); // 80154FF4
  /* isync */ // 80154FF8
  mtspr(c,540,c->r[7]); // 80154FFC
  mtspr(c,541,c->r[6]); // 80155000
  mtspr(c,540,c->r[5]); // 80155004
  /* isync */ // 80155008
  mtspr(c,532,c->r[7]); // 8015500C
  mtspr(c,533,c->r[6]); // 80155010
  mtspr(c,532,c->r[5]); // 80155014
  /* isync */ // 80155018
  c->r[3]=c->msr; // 8015501C
  c->r[3]=c->r[3]|0x00000030u; // 80155020
  mtspr(c,27,c->r[3]); // 80155024
  c->r[3]=c->lr; // 80155028
  mtspr(c,26,c->r[3]); // 8015502C
  return; /* rfi */ // 80155030
}

// ConfigMEM2_52MB
void f_80155034(Ctx* __restrict c) {
  trace_call(0x80155034u);
  c->r[7]=0u+0x00000000u; // 80155034
  c->r[4]=0u+0x10000000u; // 80155038
  c->r[4]=c->r[4]+0x00000002u; // 8015503C
  c->r[3]=0u+0x90000000u; // 80155040
  c->r[3]=c->r[3]+0x000003FFu; // 80155044
  c->r[6]=0u+0x10000000u; // 80155048
  c->r[6]=c->r[6]+0x0000002Au; // 8015504C
  c->r[5]=0u+0xD0000000u; // 80155050
  c->r[5]=c->r[5]+0x000007FFu; // 80155054
  /* isync */ // 80155058
  mtspr(c,568,c->r[7]); // 8015505C
  mtspr(c,569,c->r[4]); // 80155060
  mtspr(c,568,c->r[3]); // 80155064
  /* isync */ // 80155068
  mtspr(c,560,c->r[7]); // 8015506C
  mtspr(c,561,c->r[4]); // 80155070
  mtspr(c,560,c->r[3]); // 80155074
  /* isync */ // 80155078
  mtspr(c,570,c->r[7]); // 8015507C
  mtspr(c,571,c->r[6]); // 80155080
  mtspr(c,570,c->r[5]); // 80155084
  /* isync */ // 80155088
  mtspr(c,562,c->r[7]); // 8015508C
  mtspr(c,563,c->r[7]); // 80155090
  /* isync */ // 80155094
  c->r[4]=0u+0x12000000u; // 80155098
  c->r[4]=c->r[4]+0x00000002u; // 8015509C
  c->r[3]=0u+0x92000000u; // 801550A0
  c->r[3]=c->r[3]+0x000001FFu; // 801550A4
  c->r[6]=0u+0x13000000u; // 801550A8
  c->r[6]=c->r[6]+0x00000002u; // 801550AC
  c->r[5]=0u+0x93000000u; // 801550B0
  c->r[5]=c->r[5]+0x0000007Fu; // 801550B4
  /* isync */ // 801550B8
  mtspr(c,572,c->r[7]); // 801550BC
  mtspr(c,573,c->r[4]); // 801550C0
  mtspr(c,572,c->r[3]); // 801550C4
  /* isync */ // 801550C8
  mtspr(c,564,c->r[7]); // 801550CC
  mtspr(c,565,c->r[4]); // 801550D0
  mtspr(c,564,c->r[3]); // 801550D4
  /* isync */ // 801550D8
  mtspr(c,574,c->r[7]); // 801550DC
  mtspr(c,575,c->r[6]); // 801550E0
  mtspr(c,574,c->r[5]); // 801550E4
  /* isync */ // 801550E8
  mtspr(c,566,c->r[7]); // 801550EC
  mtspr(c,567,c->r[6]); // 801550F0
  mtspr(c,566,c->r[5]); // 801550F4
  /* isync */ // 801550F8
  c->r[3]=c->msr; // 801550FC
  c->r[3]=c->r[3]|0x00000030u; // 80155100
  mtspr(c,27,c->r[3]); // 80155104
  c->r[3]=c->lr; // 80155108
  mtspr(c,26,c->r[3]); // 8015510C
  return; /* rfi */ // 80155110
}

// ConfigMEM2_56MB
void f_80155114(Ctx* __restrict c) {
  trace_call(0x80155114u);
  c->r[7]=0u+0x00000000u; // 80155114
  c->r[4]=0u+0x10000000u; // 80155118
  c->r[4]=c->r[4]+0x00000002u; // 8015511C
  c->r[3]=0u+0x90000000u; // 80155120
  c->r[3]=c->r[3]+0x000003FFu; // 80155124
  c->r[6]=0u+0x10000000u; // 80155128
  c->r[6]=c->r[6]+0x0000002Au; // 8015512C
  c->r[5]=0u+0xD0000000u; // 80155130
  c->r[5]=c->r[5]+0x000007FFu; // 80155134
  /* isync */ // 80155138
  mtspr(c,568,c->r[7]); // 8015513C
  mtspr(c,569,c->r[4]); // 80155140
  mtspr(c,568,c->r[3]); // 80155144
  /* isync */ // 80155148
  mtspr(c,560,c->r[7]); // 8015514C
  mtspr(c,561,c->r[4]); // 80155150
  mtspr(c,560,c->r[3]); // 80155154
  /* isync */ // 80155158
  mtspr(c,570,c->r[7]); // 8015515C
  mtspr(c,571,c->r[6]); // 80155160
  mtspr(c,570,c->r[5]); // 80155164
  /* isync */ // 80155168
  mtspr(c,562,c->r[7]); // 8015516C
  mtspr(c,563,c->r[7]); // 80155170
  /* isync */ // 80155174
  c->r[4]=0u+0x12000000u; // 80155178
  c->r[4]=c->r[4]+0x00000002u; // 8015517C
  c->r[3]=0u+0x92000000u; // 80155180
  c->r[3]=c->r[3]+0x000001FFu; // 80155184
  c->r[6]=0u+0x13000000u; // 80155188
  c->r[6]=c->r[6]+0x00000002u; // 8015518C
  c->r[5]=0u+0x93000000u; // 80155190
  c->r[5]=c->r[5]+0x000000FFu; // 80155194
  /* isync */ // 80155198
  mtspr(c,572,c->r[7]); // 8015519C
  mtspr(c,573,c->r[4]); // 801551A0
  mtspr(c,572,c->r[3]); // 801551A4
  /* isync */ // 801551A8
  mtspr(c,564,c->r[7]); // 801551AC
  mtspr(c,565,c->r[4]); // 801551B0
  mtspr(c,564,c->r[3]); // 801551B4
  /* isync */ // 801551B8
  mtspr(c,574,c->r[7]); // 801551BC
  mtspr(c,575,c->r[6]); // 801551C0
  mtspr(c,574,c->r[5]); // 801551C4
  /* isync */ // 801551C8
  mtspr(c,566,c->r[7]); // 801551CC
  mtspr(c,567,c->r[6]); // 801551D0
  mtspr(c,566,c->r[5]); // 801551D4
  /* isync */ // 801551D8
  c->r[3]=c->msr; // 801551DC
  c->r[3]=c->r[3]|0x00000030u; // 801551E0
  mtspr(c,27,c->r[3]); // 801551E4
  c->r[3]=c->lr; // 801551E8
  mtspr(c,26,c->r[3]); // 801551EC
  return; /* rfi */ // 801551F0
}

// ConfigMEM2_64MB
void f_801551F4(Ctx* __restrict c) {
  trace_call(0x801551F4u);
  c->r[7]=0u+0x00000000u; // 801551F4
  c->r[4]=0u+0x10000000u; // 801551F8
  c->r[4]=c->r[4]+0x00000002u; // 801551FC
  c->r[3]=0u+0x90000000u; // 80155200
  c->r[3]=c->r[3]+0x000007FFu; // 80155204
  c->r[6]=0u+0x10000000u; // 80155208
  c->r[6]=c->r[6]+0x0000002Au; // 8015520C
  c->r[5]=0u+0xD0000000u; // 80155210
  c->r[5]=c->r[5]+0x000007FFu; // 80155214
  /* isync */ // 80155218
  mtspr(c,568,c->r[7]); // 8015521C
  mtspr(c,569,c->r[4]); // 80155220
  mtspr(c,568,c->r[3]); // 80155224
  /* isync */ // 80155228
  mtspr(c,560,c->r[7]); // 8015522C
  mtspr(c,561,c->r[4]); // 80155230
  mtspr(c,560,c->r[3]); // 80155234
  /* isync */ // 80155238
  mtspr(c,570,c->r[7]); // 8015523C
  mtspr(c,571,c->r[6]); // 80155240
  mtspr(c,570,c->r[5]); // 80155244
  /* isync */ // 80155248
  mtspr(c,562,c->r[7]); // 8015524C
  mtspr(c,563,c->r[7]); // 80155250
  /* isync */ // 80155254
  mtspr(c,564,c->r[7]); // 80155258
  mtspr(c,565,c->r[7]); // 8015525C
  /* isync */ // 80155260
  mtspr(c,566,c->r[7]); // 80155264
  mtspr(c,567,c->r[7]); // 80155268
  /* isync */ // 8015526C
  mtspr(c,572,c->r[7]); // 80155270
  mtspr(c,573,c->r[7]); // 80155274
  /* isync */ // 80155278
  mtspr(c,574,c->r[7]); // 8015527C
  mtspr(c,575,c->r[7]); // 80155280
  /* isync */ // 80155284
  c->r[3]=c->msr; // 80155288
  c->r[3]=c->r[3]|0x00000030u; // 8015528C
  mtspr(c,27,c->r[3]); // 80155290
  c->r[3]=c->lr; // 80155294
  mtspr(c,26,c->r[3]); // 80155298
  return; /* rfi */ // 8015529C
}

// ConfigMEM2_112MB
void f_801552A0(Ctx* __restrict c) {
  trace_call(0x801552A0u);
  c->r[7]=0u+0x00000000u; // 801552A0
  c->r[4]=0u+0x10000000u; // 801552A4
  c->r[4]=c->r[4]+0x00000002u; // 801552A8
  c->r[3]=0u+0x90000000u; // 801552AC
  c->r[3]=c->r[3]+0x000007FFu; // 801552B0
  c->r[6]=0u+0x10000000u; // 801552B4
  c->r[6]=c->r[6]+0x0000002Au; // 801552B8
  c->r[5]=0u+0xD0000000u; // 801552BC
  c->r[5]=c->r[5]+0x00000FFFu; // 801552C0
  /* isync */ // 801552C4
  mtspr(c,568,c->r[7]); // 801552C8
  mtspr(c,569,c->r[4]); // 801552CC
  mtspr(c,568,c->r[3]); // 801552D0
  /* isync */ // 801552D4
  mtspr(c,560,c->r[7]); // 801552D8
  mtspr(c,561,c->r[4]); // 801552DC
  mtspr(c,560,c->r[3]); // 801552E0
  /* isync */ // 801552E4
  mtspr(c,570,c->r[7]); // 801552E8
  mtspr(c,571,c->r[6]); // 801552EC
  mtspr(c,570,c->r[5]); // 801552F0
  /* isync */ // 801552F4
  mtspr(c,562,c->r[7]); // 801552F8
  mtspr(c,563,c->r[7]); // 801552FC
  /* isync */ // 80155300
  c->r[4]=0u+0x14000000u; // 80155304
  c->r[4]=c->r[4]+0x00000002u; // 80155308
  c->r[3]=0u+0x94000000u; // 8015530C
  c->r[3]=c->r[3]+0x000003FFu; // 80155310
  c->r[6]=0u+0x16000000u; // 80155314
  c->r[6]=c->r[6]+0x00000002u; // 80155318
  c->r[5]=0u+0x96000000u; // 8015531C
  c->r[5]=c->r[5]+0x000001FFu; // 80155320
  /* isync */ // 80155324
  mtspr(c,572,c->r[7]); // 80155328
  mtspr(c,573,c->r[4]); // 8015532C
  mtspr(c,572,c->r[3]); // 80155330
  /* isync */ // 80155334
  mtspr(c,564,c->r[7]); // 80155338
  mtspr(c,565,c->r[4]); // 8015533C
  mtspr(c,564,c->r[3]); // 80155340
  /* isync */ // 80155344
  mtspr(c,574,c->r[7]); // 80155348
  mtspr(c,575,c->r[6]); // 8015534C
  mtspr(c,574,c->r[5]); // 80155350
  /* isync */ // 80155354
  mtspr(c,566,c->r[7]); // 80155358
  mtspr(c,567,c->r[6]); // 8015535C
  mtspr(c,566,c->r[5]); // 80155360
  /* isync */ // 80155364
  c->r[3]=c->msr; // 80155368
  c->r[3]=c->r[3]|0x00000030u; // 8015536C
  mtspr(c,27,c->r[3]); // 80155370
  c->r[3]=c->lr; // 80155374
  mtspr(c,26,c->r[3]); // 80155378
  return; /* rfi */ // 8015537C
}

// ConfigMEM2_128MB
void f_80155380(Ctx* __restrict c) {
  trace_call(0x80155380u);
  c->r[7]=0u+0x00000000u; // 80155380
  c->r[4]=0u+0x10000000u; // 80155384
  c->r[4]=c->r[4]+0x00000002u; // 80155388
  c->r[3]=0u+0x90000000u; // 8015538C
  c->r[3]=c->r[3]+0x00000FFFu; // 80155390
  c->r[6]=0u+0x10000000u; // 80155394
  c->r[6]=c->r[6]+0x0000002Au; // 80155398
  c->r[5]=0u+0xD0000000u; // 8015539C
  c->r[5]=c->r[5]+0x00000FFFu; // 801553A0
  /* isync */ // 801553A4
  mtspr(c,568,c->r[7]); // 801553A8
  mtspr(c,569,c->r[4]); // 801553AC
  mtspr(c,568,c->r[3]); // 801553B0
  /* isync */ // 801553B4
  mtspr(c,560,c->r[7]); // 801553B8
  mtspr(c,561,c->r[4]); // 801553BC
  mtspr(c,560,c->r[3]); // 801553C0
  /* isync */ // 801553C4
  mtspr(c,570,c->r[7]); // 801553C8
  mtspr(c,571,c->r[6]); // 801553CC
  mtspr(c,570,c->r[5]); // 801553D0
  /* isync */ // 801553D4
  mtspr(c,562,c->r[7]); // 801553D8
  mtspr(c,563,c->r[7]); // 801553DC
  /* isync */ // 801553E0
  mtspr(c,564,c->r[7]); // 801553E4
  mtspr(c,565,c->r[7]); // 801553E8
  /* isync */ // 801553EC
  mtspr(c,566,c->r[7]); // 801553F0
  mtspr(c,567,c->r[7]); // 801553F4
  /* isync */ // 801553F8
  mtspr(c,572,c->r[7]); // 801553FC
  mtspr(c,573,c->r[7]); // 80155400
  /* isync */ // 80155404
  mtspr(c,574,c->r[7]); // 80155408
  mtspr(c,575,c->r[7]); // 8015540C
  /* isync */ // 80155410
  c->r[3]=c->msr; // 80155414
  c->r[3]=c->r[3]|0x00000030u; // 80155418
  mtspr(c,27,c->r[3]); // 8015541C
  c->r[3]=c->lr; // 80155420
  mtspr(c,26,c->r[3]); // 80155424
  return; /* rfi */ // 80155428
}

// ConfigMEM_ES1_0
void f_8015542C(Ctx* __restrict c) {
  trace_call(0x8015542Cu);
  c->r[7]=0u+0x00000000u; // 8015542C
  c->r[4]=0u+0x00000000u; // 80155430
  c->r[4]=c->r[4]+0x00000002u; // 80155434
  c->r[3]=0u+0x80000000u; // 80155438
  c->r[3]=c->r[3]+0x00000FFFu; // 8015543C
  /* isync */ // 80155440
  mtspr(c,536,c->r[7]); // 80155444
  mtspr(c,537,c->r[4]); // 80155448
  mtspr(c,536,c->r[3]); // 8015544C
  /* isync */ // 80155450
  mtspr(c,528,c->r[7]); // 80155454
  mtspr(c,529,c->r[4]); // 80155458
  mtspr(c,528,c->r[3]); // 8015545C
  /* isync */ // 80155460
  c->r[3]=c->msr; // 80155464
  c->r[3]=c->r[3]|0x00000030u; // 80155468
  mtspr(c,27,c->r[3]); // 8015546C
  c->r[3]=c->lr; // 80155470
  mtspr(c,26,c->r[3]); // 80155474
  return; /* rfi */ // 80155478
}

// RealMode
void f_8015547C(Ctx* __restrict c) {
  trace_call(0x8015547Cu);
  c->r[3]=rotl(c->r[3],0)&0x3FFFFFFFu; // 8015547C
  mtspr(c,26,c->r[3]); // 80155480
  c->r[3]=c->msr; // 80155484
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFCFu; // 80155488
  mtspr(c,27,c->r[3]); // 8015548C
  return; /* rfi */ // 80155490
}

// BATConfig
void f_80155494(Ctx* __restrict c) {
  trace_call(0x80155494u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80155494
  c->r[0]=c->lr; // 80155498
  c->r[3]=0u+0x80000000u; // 8015549C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801554A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801554A4
  c->r[0]=R32(c->r[3]+0x00003138u); // 801554A8
  cmps(c,0,(int32_t)c->r[0],0); // 801554AC
  if (!crb(c,2)) { goto L_801554D0; } // 801554B0
  c->r[0]=0u+0x80150000u; // 801554B4
  c->r[0]=addc(c,c->r[0],0x00004E80u,0); cr0(c,c->r[0]); // 801554B8
  if (!crb(c,2)) { goto L_801554D0; } // 801554BC
  c->r[3]=0u+0x80150000u; // 801554C0
  c->r[3]=c->r[3]+0x0000542Cu; // 801554C4
  c->lr=0x801554CCu; f_8015547C(c); // 801554C8
  goto L_801555D0; // 801554CC
L_801554D0:;
  c->r[3]=0u+0x80000000u; // 801554D0
  c->r[31]=R32(c->r[3]+0x00003104u); // 801554D4
  c->r[0]=R32(c->r[3]+0x00003100u); // 801554D8
  cmpu(c,0,c->r[31],c->r[0]); // 801554DC
  if (!crb(c,0)) { goto L_80155508; } // 801554E0
  c->r[0]=c->r[31]+0xFE800000u; // 801554E4
  cmpu(c,0,c->r[0],0x00000000u); // 801554E8
  if (!crb(c,2)) { goto L_80155508; } // 801554EC
  c->r[3]=0u+0x81800000u; // 801554F0
  c->r[4]=0u+0x01800000u; // 801554F4
  c->lr=0x801554FCu; f_8014F810(c); // 801554F8
  c->r[0]=0u+0x00000002u; // 801554FC
  c->r[3]=0u+0xCC000000u; // 80155500
  W16(c->r[3]+0x00004028u,c->r[0]); // 80155504
L_80155508:;
  c->r[0]=0u+0x01800000u; // 80155508
  cmpu(c,0,c->r[31],c->r[0]); // 8015550C
  if (crb(c,1)) { goto L_80155524; } // 80155510
  c->r[3]=0u+0x80150000u; // 80155514
  c->r[3]=c->r[3]+0x00004F34u; // 80155518
  c->lr=0x80155520u; f_8015547C(c); // 8015551C
  goto L_8015553C; // 80155520
L_80155524:;
  c->r[0]=0u+0x03000000u; // 80155524
  cmpu(c,0,c->r[31],c->r[0]); // 80155528
  if (crb(c,1)) { goto L_8015553C; } // 8015552C
  c->r[3]=0u+0x80150000u; // 80155530
  c->r[3]=c->r[3]+0x00004FB4u; // 80155534
  c->lr=0x8015553Cu; f_8015547C(c); // 80155538
L_8015553C:;
  c->r[3]=0u+0x80000000u; // 8015553C
  c->r[0]=0u+0x04000000u; // 80155540
  c->r[4]=R32(c->r[3]+0x0000311Cu); // 80155544
  c->r[3]=R32(c->r[3]+0x00003120u); // 80155548
  cmpu(c,0,c->r[4],c->r[0]); // 8015554C
  if (crb(c,1)) { goto L_8015559C; } // 80155550
  c->r[0]=0u+0x93400000u; // 80155554
  cmpu(c,0,c->r[3],c->r[0]); // 80155558
  if (crb(c,1)) { goto L_80155570; } // 8015555C
  c->r[3]=0u+0x80150000u; // 80155560
  c->r[3]=c->r[3]+0x00005034u; // 80155564
  c->lr=0x8015556Cu; f_8015547C(c); // 80155568
  goto L_801555D0; // 8015556C
L_80155570:;
  c->r[0]=0u+0x93800000u; // 80155570
  cmpu(c,0,c->r[3],c->r[0]); // 80155574
  if (crb(c,1)) { goto L_8015558C; } // 80155578
  c->r[3]=0u+0x80150000u; // 8015557C
  c->r[3]=c->r[3]+0x00005114u; // 80155580
  c->lr=0x80155588u; f_8015547C(c); // 80155584
  goto L_801555D0; // 80155588
L_8015558C:;
  c->r[3]=0u+0x80150000u; // 8015558C
  c->r[3]=c->r[3]+0x000051F4u; // 80155590
  c->lr=0x80155598u; f_8015547C(c); // 80155594
  goto L_801555D0; // 80155598
L_8015559C:;
  c->r[0]=0u+0x08000000u; // 8015559C
  cmpu(c,0,c->r[4],c->r[0]); // 801555A0
  if (crb(c,1)) { goto L_801555D0; } // 801555A4
  c->r[0]=0u+0x97000000u; // 801555A8
  cmpu(c,0,c->r[3],c->r[0]); // 801555AC
  if (crb(c,1)) { goto L_801555C4; } // 801555B0
  c->r[3]=0u+0x80150000u; // 801555B4
  c->r[3]=c->r[3]+0x000052A0u; // 801555B8
  c->lr=0x801555C0u; f_8015547C(c); // 801555BC
  goto L_801555D0; // 801555C0
L_801555C4:;
  c->r[3]=0u+0x80150000u; // 801555C4
  c->r[3]=c->r[3]+0x00005380u; // 801555C8
  c->lr=0x801555D0u; f_8015547C(c); // 801555CC
L_801555D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801555D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801555D4
  c->lr=c->r[0]; // 801555D8
  c->r[1]=c->r[1]+0x00000010u; // 801555DC
  return; // 801555E0
}

// __OSInitMemoryProtection
void f_801555E4(Ctx* __restrict c) {
  trace_call(0x801555E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801555E4
  c->r[0]=c->lr; // 801555E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801555EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801555F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801555F4
  c->lr=0x801555FCu; f_80154410(c); // 801555F8
  c->r[4]=0u+0xCC000000u; // 801555FC
  c->r[0]=0u+0x00000000u; // 80155600
  W16(c->r[4]+0x00004020u,c->r[0]); // 80155604
  c->r[0]=0u+0x000000FFu; // 80155608
  c->r[30]=c->r[3]|c->r[3]; // 8015560C
  c->r[3]=0u+0xF0000000u; // 80155610
  W16(c->r[4]+0x00004010u,c->r[0]); // 80155614
  c->lr=0x8015561Cu; f_801547A0(c); // 80155618
  c->r[31]=0u+0x80150000u; // 8015561C
  c->r[3]=0u+0x00000000u; // 80155620
  c->r[4]=c->r[31]+0x00004EECu; // 80155624
  c->lr=0x8015562Cu; f_8015445C(c); // 80155628
  c->r[4]=c->r[31]+0x00004EECu; // 8015562C
  c->r[3]=0u+0x00000001u; // 80155630
  c->lr=0x80155638u; f_8015445C(c); // 80155634
  c->r[4]=c->r[31]+0x00004EECu; // 80155638
  c->r[3]=0u+0x00000002u; // 8015563C
  c->lr=0x80155644u; f_8015445C(c); // 80155640
  c->r[4]=c->r[31]+0x00004EECu; // 80155644
  c->r[3]=0u+0x00000003u; // 80155648
  c->lr=0x80155650u; f_8015445C(c); // 8015564C
  c->r[4]=c->r[31]+0x00004EECu; // 80155650
  c->r[3]=0u+0x00000004u; // 80155654
  c->lr=0x8015565Cu; f_8015445C(c); // 80155658
  c->r[3]=0u+0x802C0000u; // 8015565C
  c->r[3]=c->r[3]+0x00007FB8u; // 80155660
  c->lr=0x80155668u; f_80155A40(c); // 80155664
  c->lr=0x8015566Cu; f_80155494(c); // 80155668
  c->r[3]=0u+0x08000000u; // 8015566C
  c->lr=0x80155674u; f_80154820(c); // 80155670
  c->r[3]=c->r[30]|c->r[30]; // 80155674
  c->lr=0x8015567Cu; f_80154438(c); // 80155678
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015567C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80155680
  c->r[30]=R32(c->r[1]+0x00000008u); // 80155684
  c->lr=c->r[0]; // 80155688
  c->r[1]=c->r[1]+0x00000010u; // 8015568C
  return; // 80155690
}

// OSInitMutex
void f_80155694(Ctx* __restrict c) {
  trace_call(0x80155694u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80155694
  c->r[0]=c->lr; // 80155698
  W32(c->r[1]+0x00000014u,c->r[0]); // 8015569C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801556A0
  c->r[31]=c->r[3]|c->r[3]; // 801556A4
  c->lr=0x801556ACu; f_8015715C(c); // 801556A8
  c->r[0]=0u+0x00000000u; // 801556AC
  W32(c->r[31]+0x00000008u,c->r[0]); // 801556B0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801556B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801556B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801556BC
  c->lr=c->r[0]; // 801556C0
  c->r[1]=c->r[1]+0x00000010u; // 801556C4
  return; // 801556C8
}

// OSLockMutex
void f_801556CC(Ctx* __restrict c) {
  trace_call(0x801556CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801556CC
  c->r[0]=c->lr; // 801556D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801556D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801556D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801556DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801556E0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801556E4
  c->r[28]=c->r[3]|c->r[3]; // 801556E8
  c->lr=0x801556F0u; f_80154410(c); // 801556EC
  c->r[29]=c->r[3]|c->r[3]; // 801556F0
  c->lr=0x801556F8u; f_8015716C(c); // 801556F4
  c->r[30]=c->r[3]|c->r[3]; // 801556F8
  c->r[31]=0u+0x00000000u; // 801556FC
L_80155700:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 80155700
  cmps(c,0,(int32_t)c->r[0],0); // 80155704
  if (!crb(c,2)) { goto L_80155748; } // 80155708
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 8015570C
  W32(c->r[28]+0x00000008u,c->r[30]); // 80155710
  c->r[0]=c->r[3]+0x00000001u; // 80155714
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80155718
  c->r[3]=R32(c->r[30]+0x000002F8u); // 8015571C
  cmps(c,0,(int32_t)c->r[3],0); // 80155720
  if (!crb(c,2)) { goto L_80155730; } // 80155724
  W32(c->r[30]+0x000002F4u,c->r[28]); // 80155728
  goto L_80155734; // 8015572C
L_80155730:;
  W32(c->r[3]+0x00000010u,c->r[28]); // 80155730
L_80155734:;
  c->r[0]=0u+0x00000000u; // 80155734
  W32(c->r[28]+0x00000014u,c->r[3]); // 80155738
  W32(c->r[28]+0x00000010u,c->r[0]); // 8015573C
  W32(c->r[30]+0x000002F8u,c->r[28]); // 80155740
  goto L_80155780; // 80155744
L_80155748:;
  cmpu(c,0,c->r[0],c->r[30]); // 80155748
  if (!crb(c,2)) { goto L_80155760; } // 8015574C
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 80155750
  c->r[0]=c->r[3]+0x00000001u; // 80155754
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80155758
  goto L_80155780; // 8015575C
L_80155760:;
  W32(c->r[30]+0x000002F0u,c->r[28]); // 80155760
  c->r[3]=R32(c->r[28]+0x00000008u); // 80155764
  c->r[4]=R32(c->r[30]+0x000002D0u); // 80155768
  c->lr=0x80155770u; f_80157474(c); // 8015576C
  c->r[3]=c->r[28]|c->r[28]; // 80155770
  c->lr=0x80155778u; f_801581D4(c); // 80155774
  W32(c->r[30]+0x000002F0u,c->r[31]); // 80155778
  IRQCHK(c); goto L_80155700; // 8015577C
L_80155780:;
  c->r[3]=c->r[29]|c->r[29]; // 80155780
  c->lr=0x80155788u; f_80154438(c); // 80155784
  c->r[0]=R32(c->r[1]+0x00000024u); // 80155788
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8015578C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80155790
  c->r[29]=R32(c->r[1]+0x00000014u); // 80155794
  c->r[28]=R32(c->r[1]+0x00000010u); // 80155798
  c->lr=c->r[0]; // 8015579C
  c->r[1]=c->r[1]+0x00000020u; // 801557A0
  return; // 801557A4
}

// OSUnlockMutex
void f_801557A8(Ctx* __restrict c) {
  trace_call(0x801557A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801557A8
  c->r[0]=c->lr; // 801557AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801557B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801557B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801557B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801557BC
  c->r[29]=c->r[3]|c->r[3]; // 801557C0
  c->lr=0x801557C8u; f_80154410(c); // 801557C4
  c->r[31]=c->r[3]|c->r[3]; // 801557C8
  c->lr=0x801557D0u; f_8015716C(c); // 801557CC
  c->r[0]=R32(c->r[29]+0x00000008u); // 801557D0
  c->r[30]=c->r[3]|c->r[3]; // 801557D4
  cmpu(c,0,c->r[0],c->r[3]); // 801557D8
  if (!crb(c,2)) { goto L_8015584C; } // 801557DC
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801557E0
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801557E4
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801557E8
  if (!crb(c,2)) { goto L_8015584C; } // 801557EC
  c->r[4]=R32(c->r[29]+0x00000010u); // 801557F0
  c->r[5]=R32(c->r[29]+0x00000014u); // 801557F4
  cmps(c,0,(int32_t)c->r[4],0); // 801557F8
  if (!crb(c,2)) { goto L_80155808; } // 801557FC
  W32(c->r[3]+0x000002F8u,c->r[5]); // 80155800
  goto L_8015580C; // 80155804
L_80155808:;
  W32(c->r[4]+0x00000014u,c->r[5]); // 80155808
L_8015580C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8015580C
  if (!crb(c,2)) { goto L_8015581C; } // 80155810
  W32(c->r[3]+0x000002F4u,c->r[4]); // 80155814
  goto L_80155820; // 80155818
L_8015581C:;
  W32(c->r[5]+0x00000010u,c->r[4]); // 8015581C
L_80155820:;
  c->r[0]=0u+0x00000000u; // 80155820
  W32(c->r[29]+0x00000008u,c->r[0]); // 80155824
  c->r[4]=R32(c->r[3]+0x000002D0u); // 80155828
  c->r[0]=R32(c->r[3]+0x000002D4u); // 8015582C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80155830
  if (!crb(c,0)) { goto L_80155844; } // 80155834
  c->r[3]=c->r[30]|c->r[30]; // 80155838
  c->lr=0x80155840u; f_80157284(c); // 8015583C
  W32(c->r[30]+0x000002D0u,c->r[3]); // 80155840
L_80155844:;
  c->r[3]=c->r[29]|c->r[29]; // 80155844
  c->lr=0x8015584Cu; f_801582C0(c); // 80155848
L_8015584C:;
  c->r[3]=c->r[31]|c->r[31]; // 8015584C
  c->lr=0x80155854u; f_80154438(c); // 80155850
  c->r[0]=R32(c->r[1]+0x00000024u); // 80155854
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80155858
  c->r[30]=R32(c->r[1]+0x00000018u); // 8015585C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80155860
  c->lr=c->r[0]; // 80155864
  c->r[1]=c->r[1]+0x00000020u; // 80155868
  return; // 8015586C
}

// __OSUnlockAllMutex
void f_80155870(Ctx* __restrict c) {
  trace_call(0x80155870u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80155870
  c->r[0]=c->lr; // 80155874
  W32(c->r[1]+0x00000014u,c->r[0]); // 80155878
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8015587C
  c->r[31]=0u+0x00000000u; // 80155880
  W32(c->r[1]+0x00000008u,c->r[30]); // 80155884
  c->r[30]=c->r[3]|c->r[3]; // 80155888
  goto L_801558B8; // 8015588C
L_80155890:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 80155890
  cmps(c,0,(int32_t)c->r[4],0); // 80155894
  if (!crb(c,2)) { goto L_801558A4; } // 80155898
  W32(c->r[30]+0x000002F8u,c->r[31]); // 8015589C
  goto L_801558A8; // 801558A0
L_801558A4:;
  W32(c->r[4]+0x00000014u,c->r[31]); // 801558A4
L_801558A8:;
  W32(c->r[30]+0x000002F4u,c->r[4]); // 801558A8
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 801558AC
  W32(c->r[3]+0x00000008u,c->r[31]); // 801558B0
  c->lr=0x801558B8u; f_801582C0(c); // 801558B4
L_801558B8:;
  c->r[3]=R32(c->r[30]+0x000002F4u); // 801558B8
  cmps(c,0,(int32_t)c->r[3],0); // 801558BC
  if (!crb(c,2)) { IRQCHK(c); goto L_80155890; } // 801558C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801558C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801558C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801558CC
  c->lr=c->r[0]; // 801558D0
  c->r[1]=c->r[1]+0x00000010u; // 801558D4
  return; // 801558D8
}

// OSInitCond
void f_801558DC(Ctx* __restrict c) {
  trace_call(0x801558DCu);
  f_8015715C(c); return; // 801558DC
}

// fn_801558E0
void f_801558E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801558E0
  c->r[0]=c->lr; // 801558E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801558E8
  c->r[11]=c->r[1]+0x00000020u; // 801558EC
  c->lr=0x801558F4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801558F0
  c->r[27]=c->r[3]|c->r[3]; // 801558F4
  c->r[28]=c->r[4]|c->r[4]; // 801558F8
  c->lr=0x80155900u; f_80154410(c); // 801558FC
  c->r[31]=c->r[3]|c->r[3]; // 80155900
  c->lr=0x80155908u; f_8015716C(c); // 80155904
  c->r[0]=R32(c->r[28]+0x00000008u); // 80155908
  c->r[30]=c->r[3]|c->r[3]; // 8015590C
  cmpu(c,0,c->r[0],c->r[3]); // 80155910
  if (!crb(c,2)) { goto L_8015599C; } // 80155914
  c->r[4]=R32(c->r[28]+0x00000010u); // 80155918
  c->r[0]=0u+0x00000000u; // 8015591C
  c->r[29]=R32(c->r[28]+0x0000000Cu); // 80155920
  cmps(c,0,(int32_t)c->r[4],0); // 80155924
  c->r[5]=R32(c->r[28]+0x00000014u); // 80155928
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8015592C
  if (!crb(c,2)) { goto L_8015593C; } // 80155930
  W32(c->r[3]+0x000002F8u,c->r[5]); // 80155934
  goto L_80155940; // 80155938
L_8015593C:;
  W32(c->r[4]+0x00000014u,c->r[5]); // 8015593C
L_80155940:;
  cmps(c,0,(int32_t)c->r[5],0); // 80155940
  if (!crb(c,2)) { goto L_80155950; } // 80155944
  W32(c->r[3]+0x000002F4u,c->r[4]); // 80155948
  goto L_80155954; // 8015594C
L_80155950:;
  W32(c->r[5]+0x00000010u,c->r[4]); // 80155950
L_80155954:;
  c->r[0]=0u+0x00000000u; // 80155954
  W32(c->r[28]+0x00000008u,c->r[0]); // 80155958
  c->r[4]=R32(c->r[3]+0x000002D0u); // 8015595C
  c->r[0]=R32(c->r[3]+0x000002D4u); // 80155960
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80155964
  if (!crb(c,0)) { goto L_80155978; } // 80155968
  c->r[3]=c->r[30]|c->r[30]; // 8015596C
  c->lr=0x80155974u; f_80157284(c); // 80155970
  W32(c->r[30]+0x000002D0u,c->r[3]); // 80155974
L_80155978:;
  c->lr=0x8015597Cu; f_801571A4(c); // 80155978
  c->r[3]=c->r[28]|c->r[28]; // 8015597C
  c->lr=0x80155984u; f_801582C0(c); // 80155980
  c->lr=0x80155988u; f_801571E0(c); // 80155984
  c->r[3]=c->r[27]|c->r[27]; // 80155988
  c->lr=0x80155990u; f_801581D4(c); // 8015598C
  c->r[3]=c->r[28]|c->r[28]; // 80155990
  c->lr=0x80155998u; f_801556CC(c); // 80155994
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80155998
L_8015599C:;
  c->r[3]=c->r[31]|c->r[31]; // 8015599C
  c->lr=0x801559A4u; f_80154438(c); // 801559A0
  c->r[11]=c->r[1]+0x00000020u; // 801559A4
  c->lr=0x801559ACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801559A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801559AC
  c->lr=c->r[0]; // 801559B0
  c->r[1]=c->r[1]+0x00000020u; // 801559B4
  return; // 801559B8
}

// fn_801559BC
void f_801559BC(Ctx* __restrict c) {
  f_801582C0(c); return; // 801559BC
}

// fn_801559C0
void f_801559C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801559C0
  c->r[0]=c->lr; // 801559C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801559C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801559CC
  c->r[31]=c->r[4]|c->r[4]; // 801559D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801559D4
  c->r[30]=c->r[3]|c->r[3]; // 801559D8
  c->lr=0x801559E0u; f_80154410(c); // 801559DC
  c->r[3]=0u+0x81280000u; // 801559E0
  c->lr=0x801559E8u; f_8014F30C(c); // 801559E4
  c->r[3]=0u+0x812F0000u; // 801559E8
  c->lr=0x801559F0u; f_8014F2F4(c); // 801559EC
  c->r[0]=0u+0x00000000u; // 801559F0
  c->r[6]=0u+0x80000000u; // 801559F4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801559F8
  c->r[3]=c->r[31]|c->r[31]; // 801559FC
  c->r[4]=c->r[30]|0x80000000u; // 80155A00
  c->r[5]=c->r[1]+0x00000008u; // 80155A04
  c->r[0]=R32(c->r[6]+0x00003194u); // 80155A08
  W32(c->r[13]+0xFFFFA9F8u,c->r[0]); // 80155A0C
  c->lr=0x80155A14u; f_80152278(c); // 80155A10
  c->r[0]=R32(c->r[1]+0x00000024u); // 80155A14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80155A18
  c->r[30]=R32(c->r[1]+0x00000018u); // 80155A1C
  c->lr=c->r[0]; // 80155A20
  c->r[1]=c->r[1]+0x00000020u; // 80155A24
  return; // 80155A28
}

// fn_80155A2C
void f_80155A2C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFFAA38u); // 80155A2C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80155A30
  c->r[0]=R32(c->r[13]+0xFFFFAA3Cu); // 80155A34
  W32(c->r[4]+0x00000000u,c->r[0]); // 80155A38
  return; // 80155A3C
}

// OSRegisterShutdownFunction
void f_80155A40(Ctx* __restrict c) {
  trace_call(0x80155A40u);
  c->r[5]=R32(c->r[13]+0xFFFFAA48u); // 80155A40
  goto L_80155A4C; // 80155A44
L_80155A48:;
  c->r[5]=R32(c->r[5]+0x00000008u); // 80155A48
L_80155A4C:;
  cmps(c,0,(int32_t)c->r[5],0); // 80155A4C
  if (crb(c,2)) { goto L_80155A64; } // 80155A50
  c->r[4]=R32(c->r[5]+0x00000004u); // 80155A54
  c->r[0]=R32(c->r[3]+0x00000004u); // 80155A58
  cmpu(c,0,c->r[4],c->r[0]); // 80155A5C
  if (!crb(c,1)) { IRQCHK(c); goto L_80155A48; } // 80155A60
L_80155A64:;
  cmps(c,0,(int32_t)c->r[5],0); // 80155A64
  if (!crb(c,2)) { goto L_80155AA0; } // 80155A68
  c->r[4]=c->r[13]+0xFFFFAA48u; // 80155A6C
  c->r[4]=R32(c->r[4]+0x00000004u); // 80155A70
  cmps(c,0,(int32_t)c->r[4],0); // 80155A74
  if (!crb(c,2)) { goto L_80155A84; } // 80155A78
  W32(c->r[13]+0xFFFFAA48u,c->r[3]); // 80155A7C
  goto L_80155A88; // 80155A80
L_80155A84:;
  W32(c->r[4]+0x00000008u,c->r[3]); // 80155A84
L_80155A88:;
  c->r[0]=0u+0x00000000u; // 80155A88
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80155A8C
  c->r[4]=c->r[13]+0xFFFFAA48u; // 80155A90
  W32(c->r[3]+0x00000008u,c->r[0]); // 80155A94
  W32(c->r[4]+0x00000004u,c->r[3]); // 80155A98
  return; // 80155A9C
L_80155AA0:;
  W32(c->r[3]+0x00000008u,c->r[5]); // 80155AA0
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 80155AA4
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 80155AA8
  cmps(c,0,(int32_t)c->r[4],0); // 80155AAC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80155AB0
  if (!crb(c,2)) { goto L_80155AC0; } // 80155AB4
  W32(c->r[13]+0xFFFFAA48u,c->r[3]); // 80155AB8
  return; // 80155ABC
L_80155AC0:;
  W32(c->r[4]+0x00000008u,c->r[3]); // 80155AC0
  return; // 80155AC4
}

// fn_80155AC8
void f_80155AC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80155AC8
  c->r[0]=c->lr; // 80155ACC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80155AD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80155AD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80155AD8
  c->r[30]=0u+0x00000000u; // 80155ADC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80155AE0
  c->r[29]=c->r[4]|c->r[4]; // 80155AE4
  W32(c->r[1]+0x00000010u,c->r[28]); // 80155AE8
  c->r[28]=c->r[3]|c->r[3]; // 80155AEC
  c->r[3]=0u+0x00000000u; // 80155AF0
  c->r[31]=R32(c->r[13]+0xFFFFAA48u); // 80155AF4
  goto L_80155B38; // 80155AF8
L_80155AFC:;
  cmps(c,0,(int32_t)c->r[30],0); // 80155AFC
  if (crb(c,2)) { goto L_80155B10; } // 80155B00
  c->r[0]=R32(c->r[31]+0x00000004u); // 80155B04
  cmpu(c,0,c->r[3],c->r[0]); // 80155B08
  if (!crb(c,2)) { goto L_80155B40; } // 80155B0C
L_80155B10:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80155B10
  c->r[3]=c->r[28]|c->r[28]; // 80155B14
  c->r[4]=c->r[29]|c->r[29]; // 80155B18
  c->ctr=c->r[12]; // 80155B1C
  if (true) { c->lr=0x80155B24u; dispatch(c,c->ctr); } // 80155B20
  c->r[0]=cntlz(c->r[3]); // 80155B24
  c->r[3]=R32(c->r[31]+0x00000004u); // 80155B28
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80155B2C
  c->r[31]=R32(c->r[31]+0x00000008u); // 80155B30
  c->r[30]=c->r[30]|c->r[0]; // 80155B34
L_80155B38:;
  cmps(c,0,(int32_t)c->r[31],0); // 80155B38
  if (!crb(c,2)) { IRQCHK(c); goto L_80155AFC; } // 80155B3C
L_80155B40:;
  c->lr=0x80155B44u; f_801569E0(c); // 80155B40
  c->r[0]=cntlz(c->r[3]); // 80155B44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80155B48
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80155B4C
  c->r[30]=c->r[30]|c->r[0]; // 80155B50
  c->r[0]=cntlz(c->r[30]); // 80155B54
  c->r[30]=R32(c->r[1]+0x00000018u); // 80155B58
  c->r[29]=R32(c->r[1]+0x00000014u); // 80155B5C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80155B60
  c->r[28]=R32(c->r[1]+0x00000010u); // 80155B64
  c->r[0]=R32(c->r[1]+0x00000024u); // 80155B68
  c->lr=c->r[0]; // 80155B6C
  c->r[1]=c->r[1]+0x00000020u; // 80155B70
  return; // 80155B74
}

// fn_80155B78
void f_80155B78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80155B78
  c->r[0]=c->lr; // 80155B7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80155B80
  c->r[11]=c->r[1]+0x00000020u; // 80155B84
  c->lr=0x80155B8Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80155B88
  cmps(c,0,(int32_t)c->r[3],5); // 80155B8C
  c->r[27]=c->r[3]|c->r[3]; // 80155B90
  if (!crb(c,0)) { goto L_80155BA4; } // 80155B94
  cmps(c,0,(int32_t)c->r[3],0); // 80155B98
  if (crb(c,2)) { goto L_80155BAC; } // 80155B9C
  goto L_80155BB4; // 80155BA0
L_80155BA4:;
  cmps(c,0,(int32_t)c->r[3],7); // 80155BA4
  if (!crb(c,0)) { goto L_80155BB4; } // 80155BA8
L_80155BAC:;
  c->r[28]=0u+0x00000000u; // 80155BAC
  goto L_80155BB8; // 80155BB0
L_80155BB4:;
  c->r[28]=0u+0x00000001u; // 80155BB4
L_80155BB8:;
  c->lr=0x80155BBCu; f_8014F730(c); // 80155BB8
  cmps(c,0,(int32_t)c->r[28],0); // 80155BBC
  if (!crb(c,2)) { goto L_80155BD0; } // 80155BC0
  c->r[3]=0u+0x00000001u; // 80155BC4
  c->lr=0x80155BCCu; f_8018AA0C(c); // 80155BC8
  c->r[29]=c->r[3]|c->r[3]; // 80155BCC
L_80155BD0:;
  c->r[30]=R32(c->r[13]+0xFFFFAA48u); // 80155BD0
  c->r[3]=0u+0x00000000u; // 80155BD4
  c->r[31]=0u+0x00000000u; // 80155BD8
  goto L_80155C1C; // 80155BDC
L_80155BE0:;
  cmps(c,0,(int32_t)c->r[31],0); // 80155BE0
  if (crb(c,2)) { goto L_80155BF4; } // 80155BE4
  c->r[0]=R32(c->r[30]+0x00000004u); // 80155BE8
  cmpu(c,0,c->r[3],c->r[0]); // 80155BEC
  if (!crb(c,2)) { goto L_80155C24; } // 80155BF0
L_80155BF4:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80155BF4
  c->r[4]=c->r[27]|c->r[27]; // 80155BF8
  c->r[3]=0u+0x00000000u; // 80155BFC
  c->ctr=c->r[12]; // 80155C00
  if (true) { c->lr=0x80155C08u; dispatch(c,c->ctr); } // 80155C04
  c->r[0]=cntlz(c->r[3]); // 80155C08
  c->r[3]=R32(c->r[30]+0x00000004u); // 80155C0C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80155C10
  c->r[30]=R32(c->r[30]+0x00000008u); // 80155C14
  c->r[31]=c->r[31]|c->r[0]; // 80155C18
L_80155C1C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80155C1C
  if (!crb(c,2)) { IRQCHK(c); goto L_80155BE0; } // 80155C20
L_80155C24:;
  c->lr=0x80155C28u; f_801569E0(c); // 80155C24
  c->r[0]=cntlz(c->r[3]); // 80155C28
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80155C2C
  c->r[31]=c->r[31]|c->r[0]; cr0(c,c->r[31]); // 80155C30
  if (!crb(c,2)) { IRQCHK(c); goto L_80155BD0; } // 80155C34
L_80155C38:;
  c->lr=0x80155C3Cu; f_801569E0(c); // 80155C38
  cmps(c,0,(int32_t)c->r[3],0); // 80155C3C
  if (crb(c,2)) { IRQCHK(c); goto L_80155C38; } // 80155C40
  c->lr=0x80155C48u; f_80154410(c); // 80155C44
  c->r[31]=R32(c->r[13]+0xFFFFAA48u); // 80155C48
  c->r[3]=0u+0x00000000u; // 80155C4C
  c->r[30]=0u+0x00000000u; // 80155C50
  goto L_80155C94; // 80155C54
L_80155C58:;
  cmps(c,0,(int32_t)c->r[30],0); // 80155C58
  if (crb(c,2)) { goto L_80155C6C; } // 80155C5C
  c->r[0]=R32(c->r[31]+0x00000004u); // 80155C60
  cmpu(c,0,c->r[3],c->r[0]); // 80155C64
  if (!crb(c,2)) { goto L_80155C9C; } // 80155C68
L_80155C6C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80155C6C
  c->r[4]=c->r[27]|c->r[27]; // 80155C70
  c->r[3]=0u+0x00000001u; // 80155C74
  c->ctr=c->r[12]; // 80155C78
  if (true) { c->lr=0x80155C80u; dispatch(c,c->ctr); } // 80155C7C
  c->r[0]=cntlz(c->r[3]); // 80155C80
  c->r[3]=R32(c->r[31]+0x00000004u); // 80155C84
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80155C88
  c->r[31]=R32(c->r[31]+0x00000008u); // 80155C8C
  c->r[30]=c->r[30]|c->r[0]; // 80155C90
L_80155C94:;
  cmps(c,0,(int32_t)c->r[31],0); // 80155C94
  if (!crb(c,2)) { IRQCHK(c); goto L_80155C58; } // 80155C98
L_80155C9C:;
  c->lr=0x80155CA0u; f_801569E0(c); // 80155C9C
  c->lr=0x80155CA4u; f_8014FA7C(c); // 80155CA0
  cmps(c,0,(int32_t)c->r[28],0); // 80155CA4
  if (!crb(c,2)) { goto L_80155CB4; } // 80155CA8
  c->r[3]=c->r[29]|c->r[29]; // 80155CAC
  c->lr=0x80155CB4u; f_8018AA0C(c); // 80155CB0
L_80155CB4:;
  c->r[3]=0u+0x80000000u; // 80155CB4
  c->r[3]=R32(c->r[3]+0x000000DCu); // 80155CB8
  goto L_80155CE8; // 80155CBC
L_80155CC0:;
  c->r[0]=R16(c->r[3]+0x000002C8u); // 80155CC0
  c->r[30]=R32(c->r[3]+0x000002FCu); // 80155CC4
  cmps(c,0,(int32_t)c->r[0],4); // 80155CC8
  if (crb(c,2)) { goto L_80155CE0; } // 80155CCC
  if (!crb(c,0)) { goto L_80155CE4; } // 80155CD0
  cmps(c,0,(int32_t)c->r[0],1); // 80155CD4
  if (crb(c,2)) { goto L_80155CE0; } // 80155CD8
  goto L_80155CE4; // 80155CDC
L_80155CE0:;
  c->lr=0x80155CE4u; f_80157A90(c); // 80155CE0
L_80155CE4:;
  c->r[3]=c->r[30]|c->r[30]; // 80155CE4
L_80155CE8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80155CE8
  if (!crb(c,2)) { IRQCHK(c); goto L_80155CC0; } // 80155CEC
  c->r[11]=c->r[1]+0x00000020u; // 80155CF0
  c->lr=0x80155CF8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80155CF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80155CF8
  c->lr=c->r[0]; // 80155CFC
  c->r[1]=c->r[1]+0x00000020u; // 80155D00
  return; // 80155D04
}

// fn_80155D08
void f_80155D08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80155D08
  c->r[0]=c->lr; // 80155D0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80155D10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80155D14
  c->r[31]=c->r[3]|c->r[3]; // 80155D18
  c->lr=0x80155D20u; f_80170D00(c); // 80155D1C
  cmpu(c,0,c->r[3],0x00000002u); // 80155D20
  if (crb(c,2)) { goto L_80155D30; } // 80155D24
  c->r[3]=0u+0x00000003u; // 80155D28
  goto L_80155D60; // 80155D2C
L_80155D30:;
  cmpu(c,0,c->r[31],0x00000001u); // 80155D30
  if (!crb(c,2)) { goto L_80155D5C; } // 80155D34
  c->r[3]=c->r[1]+0x00000008u; // 80155D38
  c->lr=0x80155D40u; f_80156C28(c); // 80155D3C
  cmps(c,0,(int32_t)c->r[3],0); // 80155D40
  if (crb(c,2)) { goto L_80155D5C; } // 80155D44
  c->r[0]=R32(c->r[1]+0x00000008u); // 80155D48
  cmps(c,0,(int32_t)c->r[0],0); // 80155D4C
  if (!crb(c,2)) { goto L_80155D5C; } // 80155D50
  c->r[3]=0u+0x00000001u; // 80155D54
  goto L_80155D60; // 80155D58
L_80155D5C:;
  c->r[3]=0u+0x00000002u; // 80155D5C
L_80155D60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80155D60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80155D64
  c->lr=c->r[0]; // 80155D68
  c->r[1]=c->r[1]+0x00000020u; // 80155D6C
  return; // 80155D70
}

// fn_80155D74
void f_80155D74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80155D74
  c->r[0]=c->lr; // 80155D78
  W32(c->r[1]+0x00000044u,c->r[0]); // 80155D7C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80155D80
  c->lr=0x80155D88u; f_801599A4(c); // 80155D84
  c->lr=0x80155D8Cu; f_801592B0(c); // 80155D88
  c->lr=0x80155D90u; f_80170F34(c); // 80155D8C
  c->r[3]=c->r[1]+0x00000010u; // 80155D90
  c->lr=0x80155D98u; f_80159C70(c); // 80155D94
  c->r[31]=R8(c->r[1]+0x00000016u); // 80155D98
  c->lr=0x80155DA0u; f_80170D00(c); // 80155D9C
  cmpu(c,0,c->r[3],0x00000002u); // 80155DA0
  if (crb(c,2)) { goto L_80155DB0; } // 80155DA4
  c->r[3]=0u+0x00000003u; // 80155DA8
  goto L_80155DE0; // 80155DAC
L_80155DB0:;
  cmpu(c,0,c->r[31],0x00000001u); // 80155DB0
  if (!crb(c,2)) { goto L_80155DDC; } // 80155DB4
  c->r[3]=c->r[1]+0x00000008u; // 80155DB8
  c->lr=0x80155DC0u; f_80156C28(c); // 80155DBC
  cmps(c,0,(int32_t)c->r[3],0); // 80155DC0
  if (crb(c,2)) { goto L_80155DDC; } // 80155DC4
  c->r[0]=R32(c->r[1]+0x00000008u); // 80155DC8
  cmps(c,0,(int32_t)c->r[0],0); // 80155DCC
  if (!crb(c,2)) { goto L_80155DDC; } // 80155DD0
  c->r[3]=0u+0x00000001u; // 80155DD4
  goto L_80155DE0; // 80155DD8
L_80155DDC:;
  c->r[3]=0u+0x00000002u; // 80155DDC
L_80155DE0:;
  c->r[0]=0u+0x00000002u; // 80155DE0
  W8(c->r[1]+0x00000016u,c->r[3]); // 80155DE4
  W8(c->r[1]+0x00000015u,c->r[0]); // 80155DE8
  c->lr=0x80155DF0u; f_80156D44(c); // 80155DEC
  c->r[3]=c->r[1]+0x00000010u; // 80155DF0
  c->lr=0x80155DF8u; f_80159B8C(c); // 80155DF4
  c->lr=0x80155DFCu; f_801571A4(c); // 80155DF8
  c->r[3]=0u+0x00000001u; // 80155DFC
  c->lr=0x80155E04u; f_80155B78(c); // 80155E00
  c->r[0]=R32(c->r[13]+0xFFFFA994u); // 80155E04
  cmps(c,0,(int32_t)c->r[0],0); // 80155E08
  if (!crb(c,2)) { goto L_80155E1C; } // 80155E0C
  c->r[0]=R32(c->r[13]+0xFFFFAA04u); // 80155E10
  cmps(c,0,(int32_t)c->r[0],0); // 80155E14
  if (crb(c,2)) { goto L_80155E20; } // 80155E18
L_80155E1C:;
  c->lr=0x80155E20u; f_80158F78(c); // 80155E1C
L_80155E20:;
  c->lr=0x80155E24u; f_80159108(c); // 80155E20
  c->r[3]=0u+0x802C0000u; // 80155E24
  c->r[5]=0u+0x802C0000u; // 80155E28
  c->r[3]=c->r[3]+0x00007FC8u; // 80155E2C
  c->r[4]=0u+0x000003D3u; // 80155E30
  c->r[5]=c->r[5]+0x00007FD4u; // 80155E34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80155E38
  c->lr=0x80155E40u; f_80150744(c); // 80155E3C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80155E40
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80155E44
  c->lr=c->r[0]; // 80155E48
  c->r[1]=c->r[1]+0x00000040u; // 80155E4C
  return; // 80155E50
}

// OSShutdownSystem
void f_80155E54(Ctx* __restrict c) {
  trace_call(0x80155E54u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80155E54
  c->r[0]=c->lr; // 80155E58
  c->r[4]=0u+0x00000000u; // 80155E5C
  c->r[5]=0u+0x00000002u; // 80155E60
  W32(c->r[1]+0x00000044u,c->r[0]); // 80155E64
  c->r[3]=c->r[1]+0x00000008u; // 80155E68
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80155E6C
  c->lr=0x80155E74u; f_8000443C(c); // 80155E70
  c->lr=0x80155E78u; f_8018177C(c); // 80155E74
L_80155E78:;
  c->lr=0x80155E7Cu; f_8018181C(c); // 80155E78
  cmpu(c,0,c->r[3],0x00000001u); // 80155E7C
  if (crb(c,2)) { IRQCHK(c); goto L_80155E78; } // 80155E80
  c->r[3]=c->r[1]+0x00000008u; // 80155E84
  c->lr=0x80155E8Cu; f_801831FC(c); // 80155E88
  c->lr=0x80155E90u; f_801599A4(c); // 80155E8C
  c->lr=0x80155E94u; f_801592B0(c); // 80155E90
  c->lr=0x80155E98u; f_80170F34(c); // 80155E94
  c->r[3]=c->r[1]+0x00000018u; // 80155E98
  c->lr=0x80155EA0u; f_80159C70(c); // 80155E9C
  c->r[31]=R8(c->r[1]+0x0000001Eu); // 80155EA0
  c->lr=0x80155EA8u; f_80170D00(c); // 80155EA4
  cmpu(c,0,c->r[3],0x00000002u); // 80155EA8
  if (crb(c,2)) { goto L_80155EB8; } // 80155EAC
  c->r[3]=0u+0x00000003u; // 80155EB0
  goto L_80155EE8; // 80155EB4
L_80155EB8:;
  cmpu(c,0,c->r[31],0x00000001u); // 80155EB8
  if (!crb(c,2)) { goto L_80155EE4; } // 80155EBC
  c->r[3]=c->r[1]+0x0000000Cu; // 80155EC0
  c->lr=0x80155EC8u; f_80156C28(c); // 80155EC4
  cmps(c,0,(int32_t)c->r[3],0); // 80155EC8
  if (crb(c,2)) { goto L_80155EE4; } // 80155ECC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80155ED0
  cmps(c,0,(int32_t)c->r[0],0); // 80155ED4
  if (!crb(c,2)) { goto L_80155EE4; } // 80155ED8
  c->r[3]=0u+0x00000001u; // 80155EDC
  goto L_80155EE8; // 80155EE0
L_80155EE4:;
  c->r[3]=0u+0x00000002u; // 80155EE4
L_80155EE8:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80155EE8
  W8(c->r[1]+0x0000001Eu,c->r[3]); // 80155EEC
  cmpu(c,0,c->r[0],0x00000001u); // 80155EF0
  if (!crb(c,2)) { goto L_80155F04; } // 80155EF4
  c->r[0]=0u+0x00000005u; // 80155EF8
  W8(c->r[1]+0x0000001Du,c->r[0]); // 80155EFC
  goto L_80155F0C; // 80155F00
L_80155F04:;
  c->r[0]=0u+0x00000001u; // 80155F04
  W8(c->r[1]+0x0000001Du,c->r[0]); // 80155F08
L_80155F0C:;
  c->lr=0x80155F10u; f_80156D44(c); // 80155F0C
  c->r[3]=c->r[1]+0x00000018u; // 80155F10
  c->lr=0x80155F18u; f_80159B8C(c); // 80155F14
  c->r[3]=c->r[1]+0x00000010u; // 80155F18
  c->lr=0x80155F20u; f_8014D4E0(c); // 80155F1C
  c->r[0]=R8(c->r[1]+0x00000008u); // 80155F20
  cmpu(c,0,c->r[0],0x00000001u); // 80155F24
  if (!crb(c,2)) { goto L_80155F4C; } // 80155F28
  c->r[0]=0u+0x00000001u; // 80155F2C
  W32(c->r[13]+0xFFFFAA44u,c->r[0]); // 80155F30
  c->lr=0x80155F38u; f_801571A4(c); // 80155F34
  c->r[3]=0u+0x00000005u; // 80155F38
  c->lr=0x80155F40u; f_80155B78(c); // 80155F3C
  c->lr=0x80155F44u; f_801571E0(c); // 80155F40
  c->lr=0x80155F48u; f_8015196C(c); // 80155F44
  goto L_80155F5C; // 80155F48
L_80155F4C:;
  c->lr=0x80155F50u; f_801571A4(c); // 80155F4C
  c->r[3]=0u+0x00000002u; // 80155F50
  c->lr=0x80155F58u; f_80155B78(c); // 80155F54
  c->lr=0x80155F5Cu; f_80159090(c); // 80155F58
L_80155F5C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 80155F5C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80155F60
  c->lr=c->r[0]; // 80155F64
  c->r[1]=c->r[1]+0x00000040u; // 80155F68
  return; // 80155F6C
}

// OSRestart
void f_80155F70(Ctx* __restrict c) {
  trace_call(0x80155F70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80155F70
  c->r[0]=c->lr; // 80155F74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80155F78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80155F7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80155F80
  c->r[30]=c->r[3]|c->r[3]; // 80155F84
  c->lr=0x80155F8Cu; f_8014E7A8(c); // 80155F88
  c->r[31]=c->r[3]|c->r[3]; // 80155F8C
  c->lr=0x80155F94u; f_801599A4(c); // 80155F90
  c->lr=0x80155F98u; f_801592B0(c); // 80155F94
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80155F98
  cmpu(c,0,c->r[0],0x00000081u); // 80155F9C
  if (!crb(c,2)) { goto L_80155FC0; } // 80155FA0
  c->lr=0x80155FA8u; f_801571A4(c); // 80155FA4
  c->r[3]=0u+0x00000004u; // 80155FA8
  c->lr=0x80155FB0u; f_80155B78(c); // 80155FAC
  c->lr=0x80155FB4u; f_801571E0(c); // 80155FB0
  c->r[3]=c->r[30]|c->r[30]; // 80155FB4
  c->lr=0x80155FBCu; f_8015AE44(c); // 80155FB8
  goto L_80155FE4; // 80155FBC
L_80155FC0:;
  cmpu(c,0,c->r[0],0x00000080u); // 80155FC0
  if (!crb(c,2)) { goto L_80155FE4; } // 80155FC4
  c->lr=0x80155FCCu; f_801571A4(c); // 80155FC8
  c->r[3]=0u+0x00000004u; // 80155FCC
  c->lr=0x80155FD4u; f_80155B78(c); // 80155FD0
  c->lr=0x80155FD8u; f_801571E0(c); // 80155FD4
  c->r[4]=R32(c->r[13]+0xFFFFAA40u); // 80155FD8
  c->r[3]=c->r[30]|c->r[30]; // 80155FDC
  c->lr=0x80155FE4u; f_801559C0(c); // 80155FE0
L_80155FE4:;
  c->lr=0x80155FE8u; f_801571A4(c); // 80155FE4
  c->r[3]=0u+0x00000001u; // 80155FE8
  c->lr=0x80155FF0u; f_80155B78(c); // 80155FEC
  c->r[0]=R32(c->r[13]+0xFFFFA994u); // 80155FF0
  cmps(c,0,(int32_t)c->r[0],0); // 80155FF4
  if (!crb(c,2)) { goto L_80156008; } // 80155FF8
  c->r[0]=R32(c->r[13]+0xFFFFAA04u); // 80155FFC
  cmps(c,0,(int32_t)c->r[0],0); // 80156000
  if (crb(c,2)) { goto L_8015600C; } // 80156004
L_80156008:;
  c->lr=0x8015600Cu; f_80158F78(c); // 80156008
L_8015600C:;
  c->lr=0x80156010u; f_80159108(c); // 8015600C
  c->r[3]=0u+0x802C0000u; // 80156010
  c->r[5]=0u+0x802C0000u; // 80156014
  c->r[3]=c->r[3]+0x00007FC8u; // 80156018
  c->r[4]=0u+0x000003D3u; // 8015601C
  c->r[5]=c->r[5]+0x00007FD4u; // 80156020
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80156024
  c->lr=0x8015602Cu; f_80150744(c); // 80156028
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015602C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80156030
  c->r[30]=R32(c->r[1]+0x00000008u); // 80156034
  c->lr=c->r[0]; // 80156038
  c->r[1]=c->r[1]+0x00000010u; // 8015603C
  return; // 80156040
}

// __OSReturnToMenu
void f_80156044(Ctx* __restrict c) {
  trace_call(0x80156044u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156044
  c->r[0]=c->lr; // 80156048
  W32(c->r[1]+0x00000044u,c->r[0]); // 8015604C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80156050
  W32(c->r[1]+0x00000038u,c->r[30]); // 80156054
  c->r[30]=c->r[3]|c->r[3]; // 80156058
  c->lr=0x80156060u; f_801599A4(c); // 8015605C
  c->lr=0x80156064u; f_801592B0(c); // 80156060
  c->lr=0x80156068u; f_80170F34(c); // 80156064
  c->r[3]=c->r[1]+0x00000010u; // 80156068
  c->lr=0x80156070u; f_80159C70(c); // 8015606C
  c->r[31]=R8(c->r[1]+0x00000016u); // 80156070
  c->lr=0x80156078u; f_80170D00(c); // 80156074
  cmpu(c,0,c->r[3],0x00000002u); // 80156078
  if (crb(c,2)) { goto L_80156088; } // 8015607C
  c->r[3]=0u+0x00000003u; // 80156080
  goto L_801560B8; // 80156084
L_80156088:;
  cmpu(c,0,c->r[31],0x00000001u); // 80156088
  if (!crb(c,2)) { goto L_801560B4; } // 8015608C
  c->r[3]=c->r[1]+0x00000008u; // 80156090
  c->lr=0x80156098u; f_80156C28(c); // 80156094
  cmps(c,0,(int32_t)c->r[3],0); // 80156098
  if (crb(c,2)) { goto L_801560B4; } // 8015609C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801560A0
  cmps(c,0,(int32_t)c->r[0],0); // 801560A4
  if (!crb(c,2)) { goto L_801560B4; } // 801560A8
  c->r[3]=0u+0x00000001u; // 801560AC
  goto L_801560B8; // 801560B0
L_801560B4:;
  c->r[3]=0u+0x00000002u; // 801560B4
L_801560B8:;
  c->r[0]=0u+0x00000003u; // 801560B8
  W8(c->r[1]+0x00000016u,c->r[3]); // 801560BC
  W8(c->r[1]+0x00000015u,c->r[0]); // 801560C0
  W8(c->r[1]+0x00000017u,c->r[30]); // 801560C4
  c->lr=0x801560CCu; f_80156D44(c); // 801560C8
  c->r[3]=c->r[1]+0x00000010u; // 801560CC
  c->lr=0x801560D4u; f_80159B8C(c); // 801560D0
  c->lr=0x801560D8u; f_801571A4(c); // 801560D4
  c->r[3]=0u+0x00000005u; // 801560D8
  c->lr=0x801560E0u; f_80155B78(c); // 801560DC
  c->lr=0x801560E4u; f_801571E0(c); // 801560E0
  c->lr=0x801560E8u; f_8015196C(c); // 801560E4
  c->lr=0x801560ECu; f_801571A4(c); // 801560E8
  c->lr=0x801560F0u; f_801633C4(c); // 801560EC
  c->r[0]=R32(c->r[13]+0xFFFFA994u); // 801560F0
  cmps(c,0,(int32_t)c->r[0],0); // 801560F4
  if (!crb(c,2)) { goto L_80156108; } // 801560F8
  c->r[0]=R32(c->r[13]+0xFFFFAA04u); // 801560FC
  cmps(c,0,(int32_t)c->r[0],0); // 80156100
  if (crb(c,2)) { goto L_8015610C; } // 80156104
L_80156108:;
  c->lr=0x8015610Cu; f_80158F78(c); // 80156108
L_8015610C:;
  c->lr=0x80156110u; f_80159108(c); // 8015610C
  c->r[3]=0u+0x802C0000u; // 80156110
  c->r[5]=0u+0x802C0000u; // 80156114
  c->r[3]=c->r[3]+0x00007FC8u; // 80156118
  c->r[4]=0u+0x000003D3u; // 8015611C
  c->r[5]=c->r[5]+0x00007FD4u; // 80156120
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80156124
  c->lr=0x8015612Cu; f_80150744(c); // 80156128
  c->r[0]=R32(c->r[1]+0x00000044u); // 8015612C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80156130
  c->r[30]=R32(c->r[1]+0x00000038u); // 80156134
  c->lr=c->r[0]; // 80156138
  c->r[1]=c->r[1]+0x00000040u; // 8015613C
  return; // 80156140
}

// OSReturnToMenu
void f_80156144(Ctx* __restrict c) {
  trace_call(0x80156144u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156144
  c->r[0]=c->lr; // 80156148
  c->r[3]=0u+0x00000000u; // 8015614C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80156150
  c->lr=0x80156158u; f_80156044(c); // 80156154
  c->r[3]=0u+0x802C0000u; // 80156158
  c->r[5]=0u+0x802D0000u; // 8015615C
  c->r[3]=c->r[3]+0x00007FC8u; // 80156160
  c->r[4]=0u+0x00000348u; // 80156164
  c->r[5]=c->r[5]+0xFFFF8000u; // 80156168
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8015616C
  c->lr=0x80156174u; f_80150744(c); // 80156170
  c->r[0]=R32(c->r[1]+0x00000014u); // 80156174
  c->lr=c->r[0]; // 80156178
  c->r[1]=c->r[1]+0x00000010u; // 8015617C
  return; // 80156180
}

// OSReturnToMenu_80156184
void f_80156184(Ctx* __restrict c) {
  trace_call(0x80156184u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156184
  c->r[0]=c->lr; // 80156188
  c->r[3]=0u+0x00000001u; // 8015618C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80156190
  c->lr=0x80156198u; f_80156044(c); // 80156194
  c->r[3]=0u+0x802C0000u; // 80156198
  c->r[5]=0u+0x802D0000u; // 8015619C
  c->r[3]=c->r[3]+0x00007FC8u; // 801561A0
  c->r[4]=0u+0x0000035Au; // 801561A4
  c->r[5]=c->r[5]+0xFFFF8030u; // 801561A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801561AC
  c->lr=0x801561B4u; f_80150744(c); // 801561B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801561B4
  c->lr=c->r[0]; // 801561B8
  c->r[1]=c->r[1]+0x00000010u; // 801561BC
  return; // 801561C0
}

// OSReturnToSetting
void f_801561C4(Ctx* __restrict c) {
  trace_call(0x801561C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801561C4
  c->r[0]=c->lr; // 801561C8
  cmpu(c,0,c->r[3],0x00000007u); // 801561CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801561D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801561D4
  c->r[31]=0u+0x802C0000u; // 801561D8
  c->r[31]=c->r[31]+0x00007FC8u; // 801561DC
  if (crb(c,1)) { goto L_80156234; } // 801561E0
  c->r[4]=0u+0x802D0000u; // 801561E4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801561E8
  c->r[4]=c->r[4]+0xFFFF8180u; // 801561EC
  c->r[4]=R32(c->r[4]+c->r[0]); // 801561F0
  c->ctr=c->r[4]; // 801561F4
  if (true) { switch (c->ctr) { case 0x801561FCu: goto L_801561FC; case 0x80156204u: goto L_80156204; case 0x8015620Cu: goto L_8015620C; case 0x80156214u: goto L_80156214; case 0x8015621Cu: goto L_8015621C; case 0x80156224u: goto L_80156224; case 0x8015622Cu: goto L_8015622C; case 0x80156234u: goto L_80156234; default: break; } dispatch(c,c->ctr); return; } // 801561F8
L_801561FC:;
  c->r[31]=c->r[31]+0x000000A0u; // 801561FC
  goto L_80156258; // 80156200
L_80156204:;
  c->r[31]=c->r[31]+0x000000C0u; // 80156204
  goto L_80156258; // 80156208
L_8015620C:;
  c->r[31]=c->r[31]+0x000000DCu; // 8015620C
  goto L_80156258; // 80156210
L_80156214:;
  c->r[31]=c->r[31]+0x000000F4u; // 80156214
  goto L_80156258; // 80156218
L_8015621C:;
  c->r[31]=c->r[31]+0x00000124u; // 8015621C
  goto L_80156258; // 80156220
L_80156224:;
  c->r[31]=c->r[31]+0x00000144u; // 80156224
  goto L_80156258; // 80156228
L_8015622C:;
  c->r[31]=c->r[31]+0x0000016Cu; // 8015622C
  goto L_80156258; // 80156230
L_80156234:;
  c->r[4]=c->r[3]|c->r[3]; // 80156234
  c->r[3]=c->r[31]+0x00000188u; // 80156238
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8015623C
  c->lr=0x80156244u; f_801506B4(c); // 80156240
  c->r[3]=c->r[31]+0x00000000u; // 80156244
  c->r[4]=0u+0x00000394u; // 80156248
  c->r[5]=c->r[13]+0xFFFF8FE0u; // 8015624C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80156250
  c->lr=0x80156258u; f_80150744(c); // 80156254
L_80156258:;
  c->r[4]=c->r[31]|c->r[31]; // 80156258
  c->r[3]=0u+0x00000001u; // 8015625C
  c->r[5]=0u+0x00000000u; // 80156260
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80156264
  c->lr=0x8015626Cu; f_8015B5A4(c); // 80156268
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015626C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80156270
  c->lr=c->r[0]; // 80156274
  c->r[1]=c->r[1]+0x00000010u; // 80156278
  return; // 8015627C
}

// __OSReturnToMenuForError
void f_80156280(Ctx* __restrict c) {
  trace_call(0x80156280u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156280
  c->r[0]=c->lr; // 80156284
  W32(c->r[1]+0x00000034u,c->r[0]); // 80156288
  c->r[3]=c->r[1]+0x00000008u; // 8015628C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80156290
  c->r[31]=0u+0x802C0000u; // 80156294
  c->r[31]=c->r[31]+0x00007FC8u; // 80156298
  c->lr=0x801562A0u; f_80159C70(c); // 8015629C
  c->r[3]=0u+0x00000002u; // 801562A0
  c->r[0]=0u+0x00000003u; // 801562A4
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801562A8
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801562AC
  c->lr=0x801562B4u; f_80156D44(c); // 801562B0
  c->r[3]=c->r[1]+0x00000008u; // 801562B4
  c->lr=0x801562BCu; f_80159B8C(c); // 801562B8
  c->lr=0x801562C0u; f_8015196C(c); // 801562BC
  c->lr=0x801562C4u; f_801571A4(c); // 801562C0
  c->lr=0x801562C8u; f_801633C4(c); // 801562C4
  c->r[0]=R32(c->r[13]+0xFFFFA994u); // 801562C8
  cmps(c,0,(int32_t)c->r[0],0); // 801562CC
  if (!crb(c,2)) { goto L_801562E0; } // 801562D0
  c->r[0]=R32(c->r[13]+0xFFFFAA04u); // 801562D4
  cmps(c,0,(int32_t)c->r[0],0); // 801562D8
  if (crb(c,2)) { goto L_801562E4; } // 801562DC
L_801562E0:;
  c->lr=0x801562E4u; f_80158F78(c); // 801562E0
L_801562E4:;
  c->lr=0x801562E8u; f_80159108(c); // 801562E4
  c->r[3]=c->r[31]+0x00000000u; // 801562E8
  c->r[5]=c->r[31]+0x0000000Cu; // 801562EC
  c->r[4]=0u+0x000003D3u; // 801562F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801562F4
  c->lr=0x801562FCu; f_80150744(c); // 801562F8
  c->r[3]=c->r[31]+0x00000000u; // 801562FC
  c->r[5]=c->r[31]+0x000001D8u; // 80156300
  c->r[4]=0u+0x000003BBu; // 80156304
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80156308
  c->lr=0x80156310u; f_80150744(c); // 8015630C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80156310
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80156314
  c->lr=c->r[0]; // 80156318
  c->r[1]=c->r[1]+0x00000030u; // 8015631C
  return; // 80156320
}

// __OSHotResetForError
void f_80156324(Ctx* __restrict c) {
  trace_call(0x80156324u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156324
  c->r[0]=c->lr; // 80156328
  W32(c->r[1]+0x00000014u,c->r[0]); // 8015632C
  c->r[0]=R32(c->r[13]+0xFFFFA994u); // 80156330
  cmps(c,0,(int32_t)c->r[0],0); // 80156334
  if (!crb(c,2)) { goto L_80156348; } // 80156338
  c->r[0]=R32(c->r[13]+0xFFFFAA04u); // 8015633C
  cmps(c,0,(int32_t)c->r[0],0); // 80156340
  if (crb(c,2)) { goto L_8015634C; } // 80156344
L_80156348:;
  c->lr=0x8015634Cu; f_80158F78(c); // 80156348
L_8015634C:;
  c->lr=0x80156350u; f_80159108(c); // 8015634C
  c->r[3]=0u+0x802C0000u; // 80156350
  c->r[5]=0u+0x802C0000u; // 80156354
  c->r[3]=c->r[3]+0x00007FC8u; // 80156358
  c->r[4]=0u+0x000003D3u; // 8015635C
  c->r[5]=c->r[5]+0x00007FD4u; // 80156360
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80156364
  c->lr=0x8015636Cu; f_80150744(c); // 80156368
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015636C
  c->lr=c->r[0]; // 80156370
  c->r[1]=c->r[1]+0x00000010u; // 80156374
  return; // 80156378
}

// OSGetResetCode
void f_8015637C(Ctx* __restrict c) {
  trace_call(0x8015637Cu);
  c->r[3]=0u+0x80440000u; // 8015637C
  c->r[0]=R32(c->r[3]+0xFFFFE180u); // 80156380
  cmps(c,0,(int32_t)c->r[0],0); // 80156384
  if (crb(c,2)) { goto L_8015639C; } // 80156388
  c->r[3]=c->r[3]+0xFFFFE180u; // 8015638C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80156390
  c->r[3]=c->r[0]|0x80000000u; // 80156394
  return; // 80156398
L_8015639C:;
  c->r[3]=0u+0xCC000000u; // 8015639C
  c->r[0]=R32(c->r[3]+0x00003024u); // 801563A0
  c->r[3]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801563A4
  return; // 801563A8
}

// OSResetSystem
void f_801563AC(Ctx* __restrict c) {
  trace_call(0x801563ACu);
  c->r[3]=0u+0x802C0000u; // 801563AC
  c->r[5]=0u+0x802D0000u; // 801563B0
  c->r[3]=c->r[3]+0x00007FC8u; // 801563B4
  c->r[4]=0u+0x0000046Au; // 801563B8
  c->r[5]=c->r[5]+0xFFFF81D4u; // 801563BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801563C0
  f_80150744(c); return; // 801563C4
}

// WriteSramCallback
void f_801563C8(Ctx* __restrict c) {
  trace_call(0x801563C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801563C8
  c->r[0]=c->lr; // 801563CC
  c->r[6]=0u+0x80440000u; // 801563D0
  c->r[5]=0u+0x80150000u; // 801563D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801563D8
  c->r[6]=c->r[6]+0xFFFFE540u; // 801563DC
  c->r[3]=0u+0x00000000u; // 801563E0
  c->r[5]=c->r[5]+0x000063C8u; // 801563E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801563E8
  c->r[4]=0u+0x00000001u; // 801563EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801563F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801563F4
  c->r[31]=R32(c->r[6]+0x00000040u); // 801563F8
  c->r[29]=addc(c,~c->r[31],0x00000040u,1); // 801563FC
  c->r[30]=c->r[6]+c->r[31]; // 80156400
  c->lr=0x80156408u; f_8015CB10(c); // 80156404
  cmps(c,0,(int32_t)c->r[3],0); // 80156408
  if (!crb(c,2)) { goto L_80156418; } // 8015640C
  c->r[0]=0u+0x00000000u; // 80156410
  goto L_801564C8; // 80156414
L_80156418:;
  c->r[3]=0u+0x00000000u; // 80156418
  c->r[4]=0u+0x00000001u; // 8015641C
  c->r[5]=0u+0x00000003u; // 80156420
  c->lr=0x80156428u; f_8015C37C(c); // 80156424
  cmps(c,0,(int32_t)c->r[3],0); // 80156428
  if (!crb(c,2)) { goto L_80156440; } // 8015642C
  c->r[3]=0u+0x00000000u; // 80156430
  c->lr=0x80156438u; f_8015CC0C(c); // 80156434
  c->r[0]=0u+0x00000000u; // 80156438
  goto L_801564C8; // 8015643C
L_80156440:;
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 80156440
  c->r[4]=c->r[1]+0x00000008u; // 80156444
  c->r[0]=c->r[3]+0x00000100u; // 80156448
  c->r[5]=0u+0x00000004u; // 8015644C
  c->r[0]=c->r[0]|0xA0000000u; // 80156450
  c->r[3]=0u+0x00000000u; // 80156454
  W32(c->r[1]+0x00000008u,c->r[0]); // 80156458
  c->r[6]=0u+0x00000001u; // 8015645C
  c->r[7]=0u+0x00000000u; // 80156460
  c->lr=0x80156468u; f_8015B914(c); // 80156464
  c->r[0]=cntlz(c->r[3]); // 80156468
  c->r[3]=0u+0x00000000u; // 8015646C
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156470
  c->lr=0x80156478u; f_8015BD2C(c); // 80156474
  c->r[0]=cntlz(c->r[3]); // 80156478
  c->r[4]=c->r[30]|c->r[30]; // 8015647C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156480
  c->r[5]=c->r[29]|c->r[29]; // 80156484
  c->r[29]=c->r[31]|c->r[0]; // 80156488
  c->r[3]=0u+0x00000000u; // 8015648C
  c->r[6]=0u+0x00000001u; // 80156490
  c->lr=0x80156498u; f_8015BB90(c); // 80156494
  c->r[0]=cntlz(c->r[3]); // 80156498
  c->r[3]=0u+0x00000000u; // 8015649C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801564A0
  c->r[29]=c->r[29]|c->r[0]; // 801564A4
  c->lr=0x801564ACu; f_8015C4AC(c); // 801564A8
  c->r[0]=cntlz(c->r[3]); // 801564AC
  c->r[3]=0u+0x00000000u; // 801564B0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801564B4
  c->r[29]=c->r[29]|c->r[0]; // 801564B8
  c->lr=0x801564C0u; f_8015CC0C(c); // 801564BC
  c->r[0]=cntlz(c->r[29]); // 801564C0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801564C4
L_801564C8:;
  c->r[3]=0u+0x80440000u; // 801564C8
  cmps(c,0,(int32_t)c->r[0],0); // 801564CC
  c->r[3]=c->r[3]+0xFFFFE540u; // 801564D0
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 801564D4
  if (crb(c,2)) { goto L_801564E4; } // 801564D8
  c->r[0]=0u+0x00000040u; // 801564DC
  W32(c->r[3]+0x00000040u,c->r[0]); // 801564E0
L_801564E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801564E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801564E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801564EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801564F0
  c->lr=c->r[0]; // 801564F4
  c->r[1]=c->r[1]+0x00000020u; // 801564F8
  return; // 801564FC
}

// __OSInitSram
void f_80156500(Ctx* __restrict c) {
  trace_call(0x80156500u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156500
  c->r[0]=c->lr; // 80156504
  c->r[4]=0u+0x00000040u; // 80156508
  W32(c->r[1]+0x00000024u,c->r[0]); // 8015650C
  c->r[0]=0u+0x00000000u; // 80156510
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80156514
  W32(c->r[1]+0x00000018u,c->r[30]); // 80156518
  c->r[30]=0u+0x80440000u; // 8015651C
  c->r[30]=c->r[30]+0xFFFFE540u; // 80156520
  W32(c->r[30]+0x00000044u,c->r[0]); // 80156524
  c->r[3]=c->r[30]|c->r[30]; // 80156528
  W32(c->r[30]+0x00000048u,c->r[0]); // 8015652C
  c->lr=0x80156534u; f_8014F810(c); // 80156530
  c->r[3]=0u+0x00000000u; // 80156534
  c->r[4]=0u+0x00000001u; // 80156538
  c->r[5]=0u+0x00000000u; // 8015653C
  c->lr=0x80156544u; f_8015CB10(c); // 80156540
  cmps(c,0,(int32_t)c->r[3],0); // 80156544
  if (!crb(c,2)) { goto L_80156554; } // 80156548
  c->r[3]=0u+0x00000000u; // 8015654C
  goto L_80156618; // 80156550
L_80156554:;
  c->r[3]=0u+0x00000000u; // 80156554
  c->r[4]=0u+0x00000001u; // 80156558
  c->r[5]=0u+0x00000003u; // 8015655C
  c->lr=0x80156564u; f_8015C37C(c); // 80156560
  cmps(c,0,(int32_t)c->r[3],0); // 80156564
  if (!crb(c,2)) { goto L_8015657C; } // 80156568
  c->r[3]=0u+0x00000000u; // 8015656C
  c->lr=0x80156574u; f_8015CC0C(c); // 80156570
  c->r[3]=0u+0x00000000u; // 80156574
  goto L_80156618; // 80156578
L_8015657C:;
  c->r[3]=0u+0x20000000u; // 8015657C
  c->r[4]=c->r[1]+0x00000008u; // 80156580
  c->r[0]=c->r[3]+0x00000100u; // 80156584
  c->r[5]=0u+0x00000004u; // 80156588
  W32(c->r[1]+0x00000008u,c->r[0]); // 8015658C
  c->r[3]=0u+0x00000000u; // 80156590
  c->r[6]=0u+0x00000001u; // 80156594
  c->r[7]=0u+0x00000000u; // 80156598
  c->lr=0x801565A0u; f_8015B914(c); // 8015659C
  c->r[0]=cntlz(c->r[3]); // 801565A0
  c->r[3]=0u+0x00000000u; // 801565A4
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801565A8
  c->lr=0x801565B0u; f_8015BD2C(c); // 801565AC
  c->r[0]=cntlz(c->r[3]); // 801565B0
  c->r[4]=c->r[30]|c->r[30]; // 801565B4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801565B8
  c->r[3]=0u+0x00000000u; // 801565BC
  c->r[30]=c->r[31]|c->r[0]; // 801565C0
  c->r[5]=0u+0x00000040u; // 801565C4
  c->r[6]=0u+0x00000000u; // 801565C8
  c->r[7]=0u+0x00000000u; // 801565CC
  c->lr=0x801565D4u; f_8015BC34(c); // 801565D0
  c->r[0]=cntlz(c->r[3]); // 801565D4
  c->r[3]=0u+0x00000000u; // 801565D8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801565DC
  c->r[30]=c->r[30]|c->r[0]; // 801565E0
  c->lr=0x801565E8u; f_8015BD2C(c); // 801565E4
  c->r[0]=cntlz(c->r[3]); // 801565E8
  c->r[3]=0u+0x00000000u; // 801565EC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801565F0
  c->r[30]=c->r[30]|c->r[0]; // 801565F4
  c->lr=0x801565FCu; f_8015C4AC(c); // 801565F8
  c->r[0]=cntlz(c->r[3]); // 801565FC
  c->r[3]=0u+0x00000000u; // 80156600
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156604
  c->r[30]=c->r[30]|c->r[0]; // 80156608
  c->lr=0x80156610u; f_8015CC0C(c); // 8015660C
  c->r[0]=cntlz(c->r[30]); // 80156610
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156614
L_80156618:;
  c->r[31]=0u+0x80440000u; // 80156618
  c->r[0]=0u+0x00000040u; // 8015661C
  c->r[31]=c->r[31]+0xFFFFE540u; // 80156620
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 80156624
  W32(c->r[31]+0x00000040u,c->r[0]); // 80156628
  c->lr=0x80156630u; f_80154410(c); // 8015662C
  c->r[0]=R32(c->r[31]+0x00000048u); // 80156630
  cmps(c,0,(int32_t)c->r[0],0); // 80156634
  if (crb(c,2)) { goto L_80156648; } // 80156638
  c->lr=0x80156640u; f_80154438(c); // 8015663C
  c->r[3]=0u+0x00000000u; // 80156640
  goto L_80156658; // 80156644
L_80156648:;
  c->r[0]=0u+0x00000001u; // 80156648
  W32(c->r[31]+0x00000044u,c->r[3]); // 8015664C
  c->r[3]=c->r[31]+0x00000014u; // 80156650
  W32(c->r[31]+0x00000048u,c->r[0]); // 80156654
L_80156658:;
  c->r[30]=R16(c->r[3]+0x00000028u); // 80156658
  c->r[3]=0u+0x00000000u; // 8015665C
  c->r[4]=0u+0x00000014u; // 80156660
  c->lr=0x80156668u; f_80156700(c); // 80156664
  c->r[0]=rotl(c->r[30],0)&0x00007C00u; // 80156668
  cmpu(c,0,c->r[0],0x00005000u); // 8015666C
  if (crb(c,2)) { goto L_80156680; } // 80156670
  c->r[0]=rotl(c->r[30],0)&0x000000C0u; // 80156674
  cmpu(c,0,c->r[0],0x000000C0u); // 80156678
  if (!crb(c,2)) { goto L_80156684; } // 8015667C
L_80156680:;
  c->r[30]=0u+0x00000000u; // 80156680
L_80156684:;
  c->lr=0x80156688u; f_80154410(c); // 80156684
  c->r[4]=0u+0x80440000u; // 80156688
  c->r[4]=c->r[4]+0xFFFFE540u; // 8015668C
  c->r[0]=R32(c->r[4]+0x00000048u); // 80156690
  cmps(c,0,(int32_t)c->r[0],0); // 80156694
  if (crb(c,2)) { goto L_801566A8; } // 80156698
  c->lr=0x801566A0u; f_80154438(c); // 8015669C
  c->r[5]=0u+0x00000000u; // 801566A0
  goto L_801566B8; // 801566A4
L_801566A8:;
  c->r[0]=0u+0x00000001u; // 801566A8
  W32(c->r[4]+0x00000044u,c->r[3]); // 801566AC
  c->r[5]=c->r[4]+0x00000014u; // 801566B0
  W32(c->r[4]+0x00000048u,c->r[0]); // 801566B4
L_801566B8:;
  c->r[0]=R16(c->r[5]+0x00000028u); // 801566B8
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801566BC
  cmpu(c,0,c->r[3],c->r[0]); // 801566C0
  if (!crb(c,2)) { goto L_801566D8; } // 801566C4
  c->r[3]=0u+0x00000000u; // 801566C8
  c->r[4]=0u+0x00000014u; // 801566CC
  c->lr=0x801566D4u; f_80156700(c); // 801566D0
  goto L_801566E8; // 801566D4
L_801566D8:;
  W16(c->r[5]+0x00000028u,c->r[30]); // 801566D8
  c->r[3]=0u+0x00000001u; // 801566DC
  c->r[4]=0u+0x00000014u; // 801566E0
  c->lr=0x801566E8u; f_80156700(c); // 801566E4
L_801566E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801566E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801566EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801566F0
  c->lr=c->r[0]; // 801566F4
  c->r[1]=c->r[1]+0x00000020u; // 801566F8
  return; // 801566FC
}

// UnlockSram
void f_80156700(Ctx* __restrict c) {
  trace_call(0x80156700u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156700
  c->r[0]=c->lr; // 80156704
  cmps(c,0,(int32_t)c->r[3],0); // 80156708
  W32(c->r[1]+0x00000024u,c->r[0]); // 8015670C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80156710
  W32(c->r[1]+0x00000018u,c->r[30]); // 80156714
  W32(c->r[1]+0x00000014u,c->r[29]); // 80156718
  if (crb(c,2)) { goto L_801569A8; } // 8015671C
  cmps(c,0,(int32_t)c->r[4],0); // 80156720
  if (!crb(c,2)) { goto L_80156854; } // 80156724
  c->r[8]=0u+0x80440000u; // 80156728
  c->r[8]=c->r[8]+0xFFFFE540u; // 8015672C
  c->r[3]=R8(c->r[8]+0x00000013u); // 80156730
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 80156734
  cmpu(c,0,c->r[0],0x00000002u); // 80156738
  if (!crb(c,1)) { goto L_80156748; } // 8015673C
  c->r[0]=rotl(c->r[3],0)&0x000000FCu; // 80156740
  W8(c->r[8]+0x00000013u,c->r[0]); // 80156744
L_80156748:;
  c->r[3]=0u+0x80440000u; // 80156748
  c->r[0]=0u+0x00000000u; // 8015674C
  c->r[3]=c->r[3]+0xFFFFE540u; // 80156750
  c->r[7]=c->r[8]+0x0000000Cu; // 80156754
  c->r[5]=c->r[3]+0x00000014u; // 80156758
  W16(c->r[8]+0x00000002u,c->r[0]); // 8015675C
  c->r[3]=c->r[5]+0x00000001u; // 80156760
  c->r[3]=c->r[3]-c->r[7]; // 80156764
  cmpu(c,0,c->r[7],c->r[5]); // 80156768
  W16(c->r[8]+0x00000000u,c->r[0]); // 8015676C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 80156770
  if (!crb(c,0)) { goto L_80156854; } // 80156774
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 80156778
  c->ctr=c->r[0]; // 8015677C
  if (crb(c,2)) { goto L_80156824; } // 80156780
L_80156784:;
  c->r[6]=R16(c->r[8]+0x00000000u); // 80156784
  c->r[0]=R16(c->r[7]+0x00000000u); // 80156788
  c->r[5]=R16(c->r[8]+0x00000002u); // 8015678C
  c->r[0]=c->r[6]+c->r[0]; // 80156790
  W16(c->r[8]+0x00000000u,c->r[0]); // 80156794
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 80156798
  c->r[0]=R16(c->r[7]+0x00000000u); // 8015679C
  c->r[0]=~(c->r[0]|c->r[0]); // 801567A0
  c->r[0]=c->r[5]+c->r[0]; // 801567A4
  W16(c->r[8]+0x00000002u,c->r[0]); // 801567A8
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801567AC
  c->r[0]=R16(c->r[7]+0x00000002u); // 801567B0
  c->r[0]=c->r[6]+c->r[0]; // 801567B4
  W16(c->r[8]+0x00000000u,c->r[0]); // 801567B8
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801567BC
  c->r[0]=R16(c->r[7]+0x00000002u); // 801567C0
  c->r[0]=~(c->r[0]|c->r[0]); // 801567C4
  c->r[0]=c->r[5]+c->r[0]; // 801567C8
  W16(c->r[8]+0x00000002u,c->r[0]); // 801567CC
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801567D0
  c->r[0]=R16(c->r[7]+0x00000004u); // 801567D4
  c->r[0]=c->r[6]+c->r[0]; // 801567D8
  W16(c->r[8]+0x00000000u,c->r[0]); // 801567DC
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801567E0
  c->r[0]=R16(c->r[7]+0x00000004u); // 801567E4
  c->r[0]=~(c->r[0]|c->r[0]); // 801567E8
  c->r[0]=c->r[5]+c->r[0]; // 801567EC
  W16(c->r[8]+0x00000002u,c->r[0]); // 801567F0
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801567F4
  c->r[0]=R16(c->r[7]+0x00000006u); // 801567F8
  c->r[0]=c->r[6]+c->r[0]; // 801567FC
  W16(c->r[8]+0x00000000u,c->r[0]); // 80156800
  c->r[0]=R16(c->r[7]+0x00000006u); // 80156804
  c->r[7]=c->r[7]+0x00000008u; // 80156808
  c->r[0]=~(c->r[0]|c->r[0]); // 8015680C
  c->r[0]=c->r[5]+c->r[0]; // 80156810
  W16(c->r[8]+0x00000002u,c->r[0]); // 80156814
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80156784; } // 80156818
  c->r[3]=c->r[3]&0x00000003u; cr0(c,c->r[3]); // 8015681C
  if (crb(c,2)) { goto L_80156854; } // 80156820
L_80156824:;
  c->ctr=c->r[3]; // 80156824
L_80156828:;
  c->r[6]=R16(c->r[8]+0x00000000u); // 80156828
  c->r[0]=R16(c->r[7]+0x00000000u); // 8015682C
  c->r[5]=R16(c->r[8]+0x00000002u); // 80156830
  c->r[0]=c->r[6]+c->r[0]; // 80156834
  W16(c->r[8]+0x00000000u,c->r[0]); // 80156838
  c->r[0]=R16(c->r[7]+0x00000000u); // 8015683C
  c->r[7]=c->r[7]+0x00000002u; // 80156840
  c->r[0]=~(c->r[0]|c->r[0]); // 80156844
  c->r[0]=c->r[5]+c->r[0]; // 80156848
  W16(c->r[8]+0x00000002u,c->r[0]); // 8015684C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80156828; } // 80156850
L_80156854:;
  c->r[3]=0u+0x80440000u; // 80156854
  c->r[3]=c->r[3]+0xFFFFE540u; // 80156858
  c->r[0]=R32(c->r[3]+0x00000040u); // 8015685C
  cmpu(c,0,c->r[4],c->r[0]); // 80156860
  if (!crb(c,0)) { goto L_8015686C; } // 80156864
  W32(c->r[3]+0x00000040u,c->r[4]); // 80156868
L_8015686C:;
  c->r[4]=0u+0x80440000u; // 8015686C
  c->r[4]=c->r[4]+0xFFFFE540u; // 80156870
  c->r[0]=R32(c->r[4]+0x00000040u); // 80156874
  cmpu(c,0,c->r[0],0x00000014u); // 80156878
  if (crb(c,1)) { goto L_801568A4; } // 8015687C
  c->r[3]=R16(c->r[4]+0x0000003Cu); // 80156880
  c->r[0]=rotl(c->r[3],0)&0x00007C00u; // 80156884
  cmpu(c,0,c->r[0],0x00005000u); // 80156888
  if (crb(c,2)) { goto L_8015689C; } // 8015688C
  c->r[0]=rotl(c->r[3],0)&0x000000C0u; // 80156890
  cmpu(c,0,c->r[0],0x000000C0u); // 80156894
  if (!crb(c,2)) { goto L_801568A4; } // 80156898
L_8015689C:;
  c->r[0]=0u+0x00000000u; // 8015689C
  W16(c->r[4]+0x0000003Cu,c->r[0]); // 801568A0
L_801568A4:;
  c->r[6]=0u+0x80440000u; // 801568A4
  c->r[5]=0u+0x80150000u; // 801568A8
  c->r[6]=c->r[6]+0xFFFFE540u; // 801568AC
  c->r[3]=0u+0x00000000u; // 801568B0
  c->r[31]=R32(c->r[6]+0x00000040u); // 801568B4
  c->r[5]=c->r[5]+0x000063C8u; // 801568B8
  c->r[4]=0u+0x00000001u; // 801568BC
  c->r[29]=addc(c,~c->r[31],0x00000040u,1); // 801568C0
  c->r[30]=c->r[6]+c->r[31]; // 801568C4
  c->lr=0x801568CCu; f_8015CB10(c); // 801568C8
  cmps(c,0,(int32_t)c->r[3],0); // 801568CC
  if (!crb(c,2)) { goto L_801568DC; } // 801568D0
  c->r[0]=0u+0x00000000u; // 801568D4
  goto L_8015698C; // 801568D8
L_801568DC:;
  c->r[3]=0u+0x00000000u; // 801568DC
  c->r[4]=0u+0x00000001u; // 801568E0
  c->r[5]=0u+0x00000003u; // 801568E4
  c->lr=0x801568ECu; f_8015C37C(c); // 801568E8
  cmps(c,0,(int32_t)c->r[3],0); // 801568EC
  if (!crb(c,2)) { goto L_80156904; } // 801568F0
  c->r[3]=0u+0x00000000u; // 801568F4
  c->lr=0x801568FCu; f_8015CC0C(c); // 801568F8
  c->r[0]=0u+0x00000000u; // 801568FC
  goto L_8015698C; // 80156900
L_80156904:;
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 80156904
  c->r[4]=c->r[1]+0x00000008u; // 80156908
  c->r[0]=c->r[3]+0x00000100u; // 8015690C
  c->r[5]=0u+0x00000004u; // 80156910
  c->r[0]=c->r[0]|0xA0000000u; // 80156914
  c->r[3]=0u+0x00000000u; // 80156918
  W32(c->r[1]+0x00000008u,c->r[0]); // 8015691C
  c->r[6]=0u+0x00000001u; // 80156920
  c->r[7]=0u+0x00000000u; // 80156924
  c->lr=0x8015692Cu; f_8015B914(c); // 80156928
  c->r[0]=cntlz(c->r[3]); // 8015692C
  c->r[3]=0u+0x00000000u; // 80156930
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156934
  c->lr=0x8015693Cu; f_8015BD2C(c); // 80156938
  c->r[0]=cntlz(c->r[3]); // 8015693C
  c->r[4]=c->r[30]|c->r[30]; // 80156940
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156944
  c->r[5]=c->r[29]|c->r[29]; // 80156948
  c->r[29]=c->r[31]|c->r[0]; // 8015694C
  c->r[3]=0u+0x00000000u; // 80156950
  c->r[6]=0u+0x00000001u; // 80156954
  c->lr=0x8015695Cu; f_8015BB90(c); // 80156958
  c->r[0]=cntlz(c->r[3]); // 8015695C
  c->r[3]=0u+0x00000000u; // 80156960
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156964
  c->r[29]=c->r[29]|c->r[0]; // 80156968
  c->lr=0x80156970u; f_8015C4AC(c); // 8015696C
  c->r[0]=cntlz(c->r[3]); // 80156970
  c->r[3]=0u+0x00000000u; // 80156974
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156978
  c->r[29]=c->r[29]|c->r[0]; // 8015697C
  c->lr=0x80156984u; f_8015CC0C(c); // 80156980
  c->r[0]=cntlz(c->r[29]); // 80156984
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156988
L_8015698C:;
  c->r[3]=0u+0x80440000u; // 8015698C
  cmps(c,0,(int32_t)c->r[0],0); // 80156990
  c->r[3]=c->r[3]+0xFFFFE540u; // 80156994
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 80156998
  if (crb(c,2)) { goto L_801569A8; } // 8015699C
  c->r[0]=0u+0x00000040u; // 801569A0
  W32(c->r[3]+0x00000040u,c->r[0]); // 801569A4
L_801569A8:;
  c->r[31]=0u+0x80440000u; // 801569A8
  c->r[0]=0u+0x00000000u; // 801569AC
  c->r[31]=c->r[31]+0xFFFFE540u; // 801569B0
  W32(c->r[31]+0x00000048u,c->r[0]); // 801569B4
  c->r[3]=R32(c->r[31]+0x00000044u); // 801569B8
  c->lr=0x801569C0u; f_80154438(c); // 801569BC
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 801569C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801569C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801569C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801569CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801569D0
  c->lr=c->r[0]; // 801569D4
  c->r[1]=c->r[1]+0x00000020u; // 801569D8
  return; // 801569DC
}

// __OSSyncSram
void f_801569E0(Ctx* __restrict c) {
  trace_call(0x801569E0u);
  c->r[3]=0u+0x80440000u; // 801569E0
  c->r[3]=c->r[3]+0xFFFFE540u; // 801569E4
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 801569E8
  return; // 801569EC
}

void hle___OSReadROM(Ctx*);
// __OSReadROM
void f_801569F0(Ctx* __restrict c) {
  hle___OSReadROM(c);
}

// OSGetWirelessID
void f_80156B14(Ctx* __restrict c) {
  trace_call(0x80156B14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156B14
  c->r[0]=c->lr; // 80156B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80156B1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80156B20
  c->r[31]=c->r[3]|c->r[3]; // 80156B24
  c->lr=0x80156B2Cu; f_80154410(c); // 80156B28
  c->r[4]=0u+0x80440000u; // 80156B2C
  c->r[4]=c->r[4]+0xFFFFE540u; // 80156B30
  c->r[0]=R32(c->r[4]+0x00000048u); // 80156B34
  cmps(c,0,(int32_t)c->r[0],0); // 80156B38
  if (crb(c,2)) { goto L_80156B4C; } // 80156B3C
  c->lr=0x80156B44u; f_80154438(c); // 80156B40
  c->r[5]=0u+0x00000000u; // 80156B44
  goto L_80156B5C; // 80156B48
L_80156B4C:;
  c->r[0]=0u+0x00000001u; // 80156B4C
  W32(c->r[4]+0x00000044u,c->r[3]); // 80156B50
  c->r[5]=c->r[4]+0x00000014u; // 80156B54
  W32(c->r[4]+0x00000048u,c->r[0]); // 80156B58
L_80156B5C:;
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 80156B5C
  c->r[3]=0u+0x00000000u; // 80156B60
  c->r[5]=c->r[5]+c->r[0]; // 80156B64
  c->r[4]=0u+0x00000014u; // 80156B68
  c->r[31]=R16(c->r[5]+0x0000001Cu); // 80156B6C
  c->lr=0x80156B74u; f_80156700(c); // 80156B70
  c->r[3]=c->r[31]|c->r[31]; // 80156B74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80156B78
  c->r[0]=R32(c->r[1]+0x00000014u); // 80156B7C
  c->lr=c->r[0]; // 80156B80
  c->r[1]=c->r[1]+0x00000010u; // 80156B84
  return; // 80156B88
}

// OSSetWirelessID
void f_80156B8C(Ctx* __restrict c) {
  trace_call(0x80156B8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156B8C
  c->r[0]=c->lr; // 80156B90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80156B94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80156B98
  c->r[31]=c->r[4]|c->r[4]; // 80156B9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80156BA0
  c->r[30]=c->r[3]|c->r[3]; // 80156BA4
  c->lr=0x80156BACu; f_80154410(c); // 80156BA8
  c->r[4]=0u+0x80440000u; // 80156BAC
  c->r[4]=c->r[4]+0xFFFFE540u; // 80156BB0
  c->r[0]=R32(c->r[4]+0x00000048u); // 80156BB4
  cmps(c,0,(int32_t)c->r[0],0); // 80156BB8
  if (crb(c,2)) { goto L_80156BCC; } // 80156BBC
  c->lr=0x80156BC4u; f_80154438(c); // 80156BC0
  c->r[3]=0u+0x00000000u; // 80156BC4
  goto L_80156BDC; // 80156BC8
L_80156BCC:;
  c->r[0]=0u+0x00000001u; // 80156BCC
  W32(c->r[4]+0x00000044u,c->r[3]); // 80156BD0
  c->r[3]=c->r[4]+0x00000014u; // 80156BD4
  W32(c->r[4]+0x00000048u,c->r[0]); // 80156BD8
L_80156BDC:;
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80156BDC
  c->r[3]=c->r[3]+c->r[0]; // 80156BE0
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 80156BE4
  cmpu(c,0,c->r[31],c->r[0]); // 80156BE8
  if (crb(c,2)) { goto L_80156C04; } // 80156BEC
  W16(c->r[3]+0x0000001Cu,c->r[31]); // 80156BF0
  c->r[3]=0u+0x00000001u; // 80156BF4
  c->r[4]=0u+0x00000014u; // 80156BF8
  c->lr=0x80156C00u; f_80156700(c); // 80156BFC
  goto L_80156C10; // 80156C00
L_80156C04:;
  c->r[3]=0u+0x00000000u; // 80156C04
  c->r[4]=0u+0x00000014u; // 80156C08
  c->lr=0x80156C10u; f_80156700(c); // 80156C0C
L_80156C10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80156C10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80156C14
  c->r[30]=R32(c->r[1]+0x00000008u); // 80156C18
  c->lr=c->r[0]; // 80156C1C
  c->r[1]=c->r[1]+0x00000010u; // 80156C20
  return; // 80156C24
}

// __OSGetRTCFlags
void f_80156C28(Ctx* __restrict c) {
  trace_call(0x80156C28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156C28
  c->r[0]=c->lr; // 80156C2C
  c->r[4]=0u+0x00000001u; // 80156C30
  c->r[5]=0u+0x00000000u; // 80156C34
  W32(c->r[1]+0x00000024u,c->r[0]); // 80156C38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80156C3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80156C40
  c->r[30]=c->r[3]|c->r[3]; // 80156C44
  c->r[3]=0u+0x00000000u; // 80156C48
  c->lr=0x80156C50u; f_8015CB10(c); // 80156C4C
  cmps(c,0,(int32_t)c->r[3],0); // 80156C50
  if (!crb(c,2)) { goto L_80156C60; } // 80156C54
  c->r[3]=0u+0x00000000u; // 80156C58
  goto L_80156D2C; // 80156C5C
L_80156C60:;
  c->r[3]=0u+0x00000000u; // 80156C60
  c->r[4]=0u+0x00000001u; // 80156C64
  c->r[5]=0u+0x00000003u; // 80156C68
  c->lr=0x80156C70u; f_8015C37C(c); // 80156C6C
  cmps(c,0,(int32_t)c->r[3],0); // 80156C70
  if (!crb(c,2)) { goto L_80156C88; } // 80156C74
  c->r[3]=0u+0x00000000u; // 80156C78
  c->lr=0x80156C80u; f_8015CC0C(c); // 80156C7C
  c->r[3]=0u+0x00000000u; // 80156C80
  goto L_80156D2C; // 80156C84
L_80156C88:;
  c->r[3]=0u+0x21000000u; // 80156C88
  c->r[4]=c->r[1]+0x00000008u; // 80156C8C
  c->r[0]=c->r[3]+0x00000800u; // 80156C90
  c->r[5]=0u+0x00000004u; // 80156C94
  W32(c->r[1]+0x00000008u,c->r[0]); // 80156C98
  c->r[3]=0u+0x00000000u; // 80156C9C
  c->r[6]=0u+0x00000001u; // 80156CA0
  c->r[7]=0u+0x00000000u; // 80156CA4
  c->lr=0x80156CACu; f_8015B914(c); // 80156CA8
  c->r[0]=cntlz(c->r[3]); // 80156CAC
  c->r[3]=0u+0x00000000u; // 80156CB0
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156CB4
  c->lr=0x80156CBCu; f_8015BD2C(c); // 80156CB8
  c->r[0]=cntlz(c->r[3]); // 80156CBC
  c->r[4]=c->r[1]+0x00000008u; // 80156CC0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156CC4
  c->r[3]=0u+0x00000000u; // 80156CC8
  c->r[31]=c->r[31]|c->r[0]; // 80156CCC
  c->r[5]=0u+0x00000004u; // 80156CD0
  c->r[6]=0u+0x00000000u; // 80156CD4
  c->r[7]=0u+0x00000000u; // 80156CD8
  c->lr=0x80156CE0u; f_8015B914(c); // 80156CDC
  c->r[0]=cntlz(c->r[3]); // 80156CE0
  c->r[3]=0u+0x00000000u; // 80156CE4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156CE8
  c->r[31]=c->r[31]|c->r[0]; // 80156CEC
  c->lr=0x80156CF4u; f_8015BD2C(c); // 80156CF0
  c->r[0]=cntlz(c->r[3]); // 80156CF4
  c->r[3]=0u+0x00000000u; // 80156CF8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156CFC
  c->r[31]=c->r[31]|c->r[0]; // 80156D00
  c->lr=0x80156D08u; f_8015C4AC(c); // 80156D04
  c->r[0]=cntlz(c->r[3]); // 80156D08
  c->r[3]=0u+0x00000000u; // 80156D0C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156D10
  c->r[31]=c->r[31]|c->r[0]; // 80156D14
  c->lr=0x80156D1Cu; f_8015CC0C(c); // 80156D18
  c->r[4]=R32(c->r[1]+0x00000008u); // 80156D1C
  c->r[0]=cntlz(c->r[31]); // 80156D20
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156D24
  W32(c->r[30]+0x00000000u,c->r[4]); // 80156D28
L_80156D2C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80156D2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80156D30
  c->r[30]=R32(c->r[1]+0x00000018u); // 80156D34
  c->lr=c->r[0]; // 80156D38
  c->r[1]=c->r[1]+0x00000020u; // 80156D3C
  return; // 80156D40
}

// __OSClearRTCFlags
void f_80156D44(Ctx* __restrict c) {
  trace_call(0x80156D44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156D44
  c->r[0]=c->lr; // 80156D48
  c->r[3]=0u+0x00000000u; // 80156D4C
  c->r[4]=0u+0x00000001u; // 80156D50
  W32(c->r[1]+0x00000024u,c->r[0]); // 80156D54
  c->r[0]=0u+0x00000000u; // 80156D58
  c->r[5]=0u+0x00000000u; // 80156D5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80156D60
  W32(c->r[1]+0x00000008u,c->r[0]); // 80156D64
  c->lr=0x80156D6Cu; f_8015CB10(c); // 80156D68
  cmps(c,0,(int32_t)c->r[3],0); // 80156D6C
  if (!crb(c,2)) { goto L_80156D7C; } // 80156D70
  c->r[3]=0u+0x00000000u; // 80156D74
  goto L_80156E40; // 80156D78
L_80156D7C:;
  c->r[3]=0u+0x00000000u; // 80156D7C
  c->r[4]=0u+0x00000001u; // 80156D80
  c->r[5]=0u+0x00000003u; // 80156D84
  c->lr=0x80156D8Cu; f_8015C37C(c); // 80156D88
  cmps(c,0,(int32_t)c->r[3],0); // 80156D8C
  if (!crb(c,2)) { goto L_80156DA4; } // 80156D90
  c->r[3]=0u+0x00000000u; // 80156D94
  c->lr=0x80156D9Cu; f_8015CC0C(c); // 80156D98
  c->r[3]=0u+0x00000000u; // 80156D9C
  goto L_80156E40; // 80156DA0
L_80156DA4:;
  c->r[3]=0u+0xA1000000u; // 80156DA4
  c->r[4]=c->r[1]+0x0000000Cu; // 80156DA8
  c->r[0]=c->r[3]+0x00000800u; // 80156DAC
  c->r[5]=0u+0x00000004u; // 80156DB0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80156DB4
  c->r[3]=0u+0x00000000u; // 80156DB8
  c->r[6]=0u+0x00000001u; // 80156DBC
  c->r[7]=0u+0x00000000u; // 80156DC0
  c->lr=0x80156DC8u; f_8015B914(c); // 80156DC4
  c->r[0]=cntlz(c->r[3]); // 80156DC8
  c->r[3]=0u+0x00000000u; // 80156DCC
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156DD0
  c->lr=0x80156DD8u; f_8015BD2C(c); // 80156DD4
  c->r[0]=cntlz(c->r[3]); // 80156DD8
  c->r[4]=c->r[1]+0x00000008u; // 80156DDC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156DE0
  c->r[3]=0u+0x00000000u; // 80156DE4
  c->r[31]=c->r[31]|c->r[0]; // 80156DE8
  c->r[5]=0u+0x00000004u; // 80156DEC
  c->r[6]=0u+0x00000001u; // 80156DF0
  c->r[7]=0u+0x00000000u; // 80156DF4
  c->lr=0x80156DFCu; f_8015B914(c); // 80156DF8
  c->r[0]=cntlz(c->r[3]); // 80156DFC
  c->r[3]=0u+0x00000000u; // 80156E00
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156E04
  c->r[31]=c->r[31]|c->r[0]; // 80156E08
  c->lr=0x80156E10u; f_8015BD2C(c); // 80156E0C
  c->r[0]=cntlz(c->r[3]); // 80156E10
  c->r[3]=0u+0x00000000u; // 80156E14
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156E18
  c->r[31]=c->r[31]|c->r[0]; // 80156E1C
  c->lr=0x80156E24u; f_8015C4AC(c); // 80156E20
  c->r[0]=cntlz(c->r[3]); // 80156E24
  c->r[3]=0u+0x00000000u; // 80156E28
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156E2C
  c->r[31]=c->r[31]|c->r[0]; // 80156E30
  c->lr=0x80156E38u; f_8015CC0C(c); // 80156E34
  c->r[0]=cntlz(c->r[31]); // 80156E38
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80156E3C
L_80156E40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80156E40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80156E44
  c->lr=c->r[0]; // 80156E48
  c->r[1]=c->r[1]+0x00000020u; // 80156E4C
  return; // 80156E50
}

// SystemCallVector
void f_80156E54(Ctx* __restrict c) {
  trace_call(0x80156E54u);
  c->r[9]=mfspr(c,1008); // 80156E54
  c->r[10]=c->r[9]|0x00000008u; // 80156E58
  mtspr(c,1008,c->r[10]); // 80156E5C
  /* isync */ // 80156E60
  /* sync */ // 80156E64
  mtspr(c,1008,c->r[9]); // 80156E68
  return; /* rfi */ // 80156E6C
  c->r[0]=c->r[0]|0x00000000u; // 80156E70
}

// __OSInitSystemCall
void f_80156E74(Ctx* __restrict c) {
  trace_call(0x80156E74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156E74
  c->r[0]=c->lr; // 80156E78
  c->r[4]=0u+0x80150000u; // 80156E7C
  c->r[5]=0u+0x80150000u; // 80156E80
  W32(c->r[1]+0x00000014u,c->r[0]); // 80156E84
  c->r[4]=c->r[4]+0x00006E54u; // 80156E88
  c->r[5]=c->r[5]+0x00006E70u; // 80156E8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80156E90
  c->r[31]=0u+0x80000000u; // 80156E94
  c->r[3]=c->r[31]+0x00000C00u; // 80156E98
  c->r[5]=c->r[5]-c->r[4]; // 80156E9C
  c->lr=0x80156EA4u; f_80004338(c); // 80156EA0
  c->r[3]=c->r[31]+0x00000C00u; // 80156EA4
  c->r[4]=0u+0x00000100u; // 80156EA8
  c->lr=0x80156EB0u; f_8014F89C(c); // 80156EAC
  /* sync */ // 80156EB0
  c->r[3]=c->r[31]+0x00000C00u; // 80156EB4
  c->r[4]=0u+0x00000100u; // 80156EB8
  c->lr=0x80156EC0u; f_8014F920(c); // 80156EBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80156EC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80156EC4
  c->lr=c->r[0]; // 80156EC8
  c->r[1]=c->r[1]+0x00000010u; // 80156ECC
  return; // 80156ED0
}

// DefaultSwitchThreadCallback
void f_80156ED4(Ctx* __restrict c) {
  trace_call(0x80156ED4u);
  return; // 80156ED4
}

// __OSThreadInit
void f_80156ED8(Ctx* __restrict c) {
  trace_call(0x80156ED8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156ED8
  c->r[0]=c->lr; // 80156EDC
  c->r[3]=0u+0x00000002u; // 80156EE0
  c->r[6]=0u+0x00000001u; // 80156EE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80156EE8
  c->r[4]=0u+0x00000000u; // 80156EEC
  c->r[5]=0u+0x00000010u; // 80156EF0
  c->r[0]=0u+0xFFFFFFFFu; // 80156EF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80156EF8
  c->r[31]=0u+0x80440000u; // 80156EFC
  c->r[31]=c->r[31]+0xFFFFE598u; // 80156F00
  W32(c->r[1]+0x00000018u,c->r[30]); // 80156F04
  c->r[30]=c->r[31]+0x00000000u; // 80156F08
  W32(c->r[1]+0x00000014u,c->r[29]); // 80156F0C
  c->r[29]=0u+0x80000000u; // 80156F10
  W16(c->r[30]+0x000002C8u,c->r[3]); // 80156F14
  c->r[3]=c->r[30]|c->r[30]; // 80156F18
  W16(c->r[30]+0x000002CAu,c->r[6]); // 80156F1C
  W32(c->r[30]+0x000002D4u,c->r[5]); // 80156F20
  W32(c->r[30]+0x000002D0u,c->r[5]); // 80156F24
  W32(c->r[30]+0x000002CCu,c->r[4]); // 80156F28
  W32(c->r[30]+0x000002D8u,c->r[0]); // 80156F2C
  W32(c->r[30]+0x000002F0u,c->r[4]); // 80156F30
  W32(c->r[30]+0x000002ECu,c->r[4]); // 80156F34
  W32(c->r[30]+0x000002E8u,c->r[4]); // 80156F38
  W32(c->r[30]+0x000002F8u,c->r[4]); // 80156F3C
  W32(c->r[30]+0x000002F4u,c->r[4]); // 80156F40
  W32(c->r[29]+0x000000D8u,c->r[30]); // 80156F44
  c->lr=0x80156F4Cu; f_801502A8(c); // 80156F48
  c->r[3]=c->r[30]|c->r[30]; // 80156F4C
  c->lr=0x80156F54u; f_80150080(c); // 80156F50
  c->r[4]=0u+0x804F0000u; // 80156F54
  c->r[5]=0u+0x804E0000u; // 80156F58
  c->r[4]=c->r[4]+0xFFFFD498u; // 80156F5C
  c->r[3]=0u+0xDEAE0000u; // 80156F60
  c->r[5]=c->r[5]+0xFFFFD498u; // 80156F64
  W32(c->r[30]+0x00000304u,c->r[4]); // 80156F68
  c->r[0]=c->r[3]+0xFFFFBABEu; // 80156F6C
  c->r[4]=c->r[30]|c->r[30]; // 80156F70
  W32(c->r[30]+0x00000308u,c->r[5]); // 80156F74
  W32(c->r[5]+0x00000000u,c->r[0]); // 80156F78
  c->r[12]=R32(c->r[13]+0xFFFF8FE8u); // 80156F7C
  c->r[3]=R32(c->r[29]+0x000000E4u); // 80156F80
  c->ctr=c->r[12]; // 80156F84
  if (true) { c->lr=0x80156F8Cu; dispatch(c,c->ctr); } // 80156F88
  W32(c->r[29]+0x000000E4u,c->r[30]); // 80156F8C
  c->lr=0x80156F94u; f_80150240(c); // 80156F90
  c->r[4]=R32(c->r[29]+0x000000E4u); // 80156F94
  c->r[4]=R32(c->r[4]+0x00000308u); // 80156F98
  c->r[8]=c->r[4]+0x00000004u; // 80156F9C
  cmpu(c,1,c->r[8],c->r[3]); // 80156FA0
  if (!crb(c,4)) { goto L_80157064; } // 80156FA4
  c->r[5]=c->r[3]-c->r[8]; // 80156FA8
  c->r[6]=c->r[3]+0xFFFFFFE0u; // 80156FAC
  c->r[4]=c->r[5]+0x00000003u; // 80156FB0
  c->r[0]=sraw(c,c->r[4],2); // 80156FB4
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80156FB8
  cmps(c,0,(int32_t)c->r[0],8); // 80156FBC
  if (!crb(c,1)) { goto L_8015703C; } // 80156FC0
  c->r[7]=0u+0x00000000u; // 80156FC4
  if (crb(c,5)) { goto L_80156FF0; } // 80156FC8
  c->r[0]=rotl(c->r[5],0)&0x80000000u; cr0(c,c->r[0]); // 80156FCC
  c->r[5]=0u+0x00000001u; // 80156FD0
  if (!crb(c,2)) { goto L_80156FE4; } // 80156FD4
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 80156FD8
  if (crb(c,2)) { goto L_80156FE4; } // 80156FDC
  c->r[5]=0u+0x00000000u; // 80156FE0
L_80156FE4:;
  cmps(c,0,(int32_t)c->r[5],0); // 80156FE4
  if (crb(c,2)) { goto L_80156FF0; } // 80156FE8
  c->r[7]=0u+0x00000001u; // 80156FEC
L_80156FF0:;
  cmps(c,0,(int32_t)c->r[7],0); // 80156FF0
  if (crb(c,2)) { goto L_8015703C; } // 80156FF4
  c->r[0]=c->r[6]+0x0000001Fu; // 80156FF8
  c->r[4]=0u+0x00000000u; // 80156FFC
  c->r[0]=c->r[0]-c->r[8]; // 80157000
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80157004
  c->ctr=c->r[0]; // 80157008
  cmpu(c,0,c->r[8],c->r[6]); // 8015700C
  if (!crb(c,0)) { goto L_8015703C; } // 80157010
L_80157014:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 80157014
  W32(c->r[8]+0x00000004u,c->r[4]); // 80157018
  W32(c->r[8]+0x00000008u,c->r[4]); // 8015701C
  W32(c->r[8]+0x0000000Cu,c->r[4]); // 80157020
  W32(c->r[8]+0x00000010u,c->r[4]); // 80157024
  W32(c->r[8]+0x00000014u,c->r[4]); // 80157028
  W32(c->r[8]+0x00000018u,c->r[4]); // 8015702C
  W32(c->r[8]+0x0000001Cu,c->r[4]); // 80157030
  c->r[8]=c->r[8]+0x00000020u; // 80157034
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80157014; } // 80157038
L_8015703C:;
  c->r[0]=c->r[3]+0x00000003u; // 8015703C
  c->r[4]=0u+0x00000000u; // 80157040
  c->r[0]=c->r[0]-c->r[8]; // 80157044
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80157048
  c->ctr=c->r[0]; // 8015704C
  cmpu(c,0,c->r[8],c->r[3]); // 80157050
  if (!crb(c,0)) { goto L_80157064; } // 80157054
L_80157058:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 80157058
  c->r[8]=c->r[8]+0x00000004u; // 8015705C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80157058; } // 80157060
L_80157064:;
  c->r[3]=0u+0x00000000u; // 80157064
  c->r[0]=0u+0x00000002u; // 80157068
  W32(c->r[13]+0xFFFFAA58u,c->r[3]); // 8015706C
  c->r[4]=c->r[31]+0x00000318u; // 80157070
  W32(c->r[13]+0xFFFFAA54u,c->r[3]); // 80157074
  c->ctr=c->r[0]; // 80157078
L_8015707C:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 8015707C
  W32(c->r[4]+0x00000000u,c->r[3]); // 80157080
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 80157084
  W32(c->r[4]+0x00000008u,c->r[3]); // 80157088
  W32(c->r[4]+0x00000014u,c->r[3]); // 8015708C
  W32(c->r[4]+0x00000010u,c->r[3]); // 80157090
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 80157094
  W32(c->r[4]+0x00000018u,c->r[3]); // 80157098
  W32(c->r[4]+0x00000024u,c->r[3]); // 8015709C
  W32(c->r[4]+0x00000020u,c->r[3]); // 801570A0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801570A4
  W32(c->r[4]+0x00000028u,c->r[3]); // 801570A8
  W32(c->r[4]+0x00000034u,c->r[3]); // 801570AC
  W32(c->r[4]+0x00000030u,c->r[3]); // 801570B0
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 801570B4
  W32(c->r[4]+0x00000038u,c->r[3]); // 801570B8
  W32(c->r[4]+0x00000044u,c->r[3]); // 801570BC
  W32(c->r[4]+0x00000040u,c->r[3]); // 801570C0
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 801570C4
  W32(c->r[4]+0x00000048u,c->r[3]); // 801570C8
  W32(c->r[4]+0x00000054u,c->r[3]); // 801570CC
  W32(c->r[4]+0x00000050u,c->r[3]); // 801570D0
  W32(c->r[4]+0x0000005Cu,c->r[3]); // 801570D4
  W32(c->r[4]+0x00000058u,c->r[3]); // 801570D8
  W32(c->r[4]+0x00000064u,c->r[3]); // 801570DC
  W32(c->r[4]+0x00000060u,c->r[3]); // 801570E0
  W32(c->r[4]+0x0000006Cu,c->r[3]); // 801570E4
  W32(c->r[4]+0x00000068u,c->r[3]); // 801570E8
  W32(c->r[4]+0x00000074u,c->r[3]); // 801570EC
  W32(c->r[4]+0x00000070u,c->r[3]); // 801570F0
  W32(c->r[4]+0x0000007Cu,c->r[3]); // 801570F4
  W32(c->r[4]+0x00000078u,c->r[3]); // 801570F8
  c->r[4]=c->r[4]+0x00000080u; // 801570FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8015707C; } // 80157100
  c->r[4]=0u+0x00000000u; // 80157104
  c->r[3]=0u+0x80000000u; // 80157108
  W32(c->r[3]+0x000000E0u,c->r[4]); // 8015710C
  W32(c->r[3]+0x000000DCu,c->r[4]); // 80157110
  W32(c->r[3]+0x000000DCu,c->r[30]); // 80157114
  goto L_80157120; // 80157118
  W32(c->r[4]+0x000002FCu,c->r[30]); // 8015711C
L_80157120:;
  c->r[29]=0u+0x00000000u; // 80157120
  W32(c->r[30]+0x00000300u,c->r[4]); // 80157124
  c->r[4]=0u+0x80000000u; // 80157128
  c->r[3]=c->r[31]+0x00000418u; // 8015712C
  W32(c->r[30]+0x000002FCu,c->r[29]); // 80157130
  W32(c->r[4]+0x000000E0u,c->r[30]); // 80157134
  c->lr=0x8015713Cu; f_801502A8(c); // 80157138
  W32(c->r[13]+0xFFFFAA50u,c->r[29]); // 8015713C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80157140
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80157144
  c->r[30]=R32(c->r[1]+0x00000018u); // 80157148
  c->r[29]=R32(c->r[1]+0x00000014u); // 8015714C
  c->lr=c->r[0]; // 80157150
  c->r[1]=c->r[1]+0x00000020u; // 80157154
  return; // 80157158
}

// OSInitThreadQueue
void f_8015715C(Ctx* __restrict c) {
  trace_call(0x8015715Cu);
  c->r[0]=0u+0x00000000u; // 8015715C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80157160
  W32(c->r[3]+0x00000000u,c->r[0]); // 80157164
  return; // 80157168
}

// OSGetCurrentThread
void f_8015716C(Ctx* __restrict c) {
  trace_call(0x8015716Cu);
  c->r[3]=0u+0x80000000u; // 8015716C
  c->r[3]=R32(c->r[3]+0x000000E4u); // 80157170
  return; // 80157174
}

// OSIsThreadTerminated
void f_80157178(Ctx* __restrict c) {
  trace_call(0x80157178u);
  c->r[0]=R16(c->r[3]+0x000002C8u); // 80157178
  c->r[3]=0u+0x00000001u; // 8015717C
  cmpu(c,0,c->r[0],0x00000008u); // 80157180
  if (crb(c,2)) { goto L_80157194; } // 80157184
  cmps(c,0,(int32_t)c->r[0],0); // 80157188
  if (crb(c,2)) { goto L_80157194; } // 8015718C
  c->r[3]=0u+0x00000000u; // 80157190
L_80157194:;
  c->r[0]=0u-c->r[3]; // 80157194
  c->r[0]=c->r[0]|c->r[3]; // 80157198
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8015719C
  return; // 801571A0
}

// OSDisableScheduler
void f_801571A4(Ctx* __restrict c) {
  trace_call(0x801571A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801571A4
  c->r[0]=c->lr; // 801571A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801571AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801571B0
  c->lr=0x801571B8u; f_80154410(c); // 801571B4
  c->r[31]=R32(c->r[13]+0xFFFFAA50u); // 801571B8
  c->r[0]=c->r[31]+0x00000001u; // 801571BC
  W32(c->r[13]+0xFFFFAA50u,c->r[0]); // 801571C0
  c->lr=0x801571C8u; f_80154438(c); // 801571C4
  c->r[3]=c->r[31]|c->r[31]; // 801571C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801571CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801571D0
  c->lr=c->r[0]; // 801571D4
  c->r[1]=c->r[1]+0x00000010u; // 801571D8
  return; // 801571DC
}

// OSEnableScheduler
void f_801571E0(Ctx* __restrict c) {
  trace_call(0x801571E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801571E0
  c->r[0]=c->lr; // 801571E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801571E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801571EC
  c->lr=0x801571F4u; f_80154410(c); // 801571F0
  c->r[31]=R32(c->r[13]+0xFFFFAA50u); // 801571F4
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801571F8
  W32(c->r[13]+0xFFFFAA50u,c->r[0]); // 801571FC
  c->lr=0x80157204u; f_80154438(c); // 80157200
  c->r[3]=c->r[31]|c->r[31]; // 80157204
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80157208
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015720C
  c->lr=c->r[0]; // 80157210
  c->r[1]=c->r[1]+0x00000010u; // 80157214
  return; // 80157218
}

// UnsetRun
void f_8015721C(Ctx* __restrict c) {
  trace_call(0x8015721Cu);
  c->r[5]=R32(c->r[3]+0x000002E0u); // 8015721C
  c->r[4]=R32(c->r[3]+0x000002DCu); // 80157220
  cmps(c,0,(int32_t)c->r[5],0); // 80157224
  c->r[6]=R32(c->r[3]+0x000002E4u); // 80157228
  if (!crb(c,2)) { goto L_80157238; } // 8015722C
  W32(c->r[4]+0x00000004u,c->r[6]); // 80157230
  goto L_8015723C; // 80157234
L_80157238:;
  W32(c->r[5]+0x000002E4u,c->r[6]); // 80157238
L_8015723C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8015723C
  if (!crb(c,2)) { goto L_8015724C; } // 80157240
  W32(c->r[4]+0x00000000u,c->r[5]); // 80157244
  goto L_80157250; // 80157248
L_8015724C:;
  W32(c->r[6]+0x000002E0u,c->r[5]); // 8015724C
L_80157250:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80157250
  cmps(c,0,(int32_t)c->r[0],0); // 80157254
  if (!crb(c,2)) { goto L_80157278; } // 80157258
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8015725C
  c->r[4]=0u+0x00000001u; // 80157260
  c->r[5]=R32(c->r[13]+0xFFFFAA58u); // 80157264
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 80157268
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 8015726C
  c->r[0]=c->r[5]&~c->r[0]; // 80157270
  W32(c->r[13]+0xFFFFAA58u,c->r[0]); // 80157274
L_80157278:;
  c->r[0]=0u+0x00000000u; // 80157278
  W32(c->r[3]+0x000002DCu,c->r[0]); // 8015727C
  return; // 80157280
}

// __OSGetEffectivePriority
void f_80157284(Ctx* __restrict c) {
  trace_call(0x80157284u);
  c->r[4]=R32(c->r[3]+0x000002D4u); // 80157284
  c->r[3]=R32(c->r[3]+0x000002F4u); // 80157288
  goto L_801572B0; // 8015728C
L_80157290:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 80157290
  cmps(c,0,(int32_t)c->r[5],0); // 80157294
  if (crb(c,2)) { goto L_801572AC; } // 80157298
  c->r[0]=R32(c->r[5]+0x000002D0u); // 8015729C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801572A0
  if (!crb(c,0)) { goto L_801572AC; } // 801572A4
  c->r[4]=c->r[0]|c->r[0]; // 801572A8
L_801572AC:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 801572AC
L_801572B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801572B0
  if (!crb(c,2)) { IRQCHK(c); goto L_80157290; } // 801572B4
  c->r[3]=c->r[4]|c->r[4]; // 801572B8
  return; // 801572BC
}

// SetEffectivePriority
void f_801572C0(Ctx* __restrict c) {
  trace_call(0x801572C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801572C0
  c->r[0]=c->lr; // 801572C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801572C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801572CC
  c->r[31]=c->r[4]|c->r[4]; // 801572D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801572D4
  c->r[30]=c->r[3]|c->r[3]; // 801572D8
  c->r[0]=R16(c->r[3]+0x000002C8u); // 801572DC
  cmps(c,0,(int32_t)c->r[0],3); // 801572E0
  if (crb(c,2)) { goto L_80157458; } // 801572E4
  if (!crb(c,0)) { goto L_801572FC; } // 801572E8
  cmps(c,0,(int32_t)c->r[0],1); // 801572EC
  if (crb(c,2)) { goto L_80157308; } // 801572F0
  if (!crb(c,0)) { goto L_8015744C; } // 801572F4
  goto L_80157458; // 801572F8
L_801572FC:;
  cmps(c,0,(int32_t)c->r[0],5); // 801572FC
  if (!crb(c,0)) { goto L_80157458; } // 80157300
  goto L_80157374; // 80157304
L_80157308:;
  c->lr=0x8015730Cu; f_8015721C(c); // 80157308
  c->r[3]=0u+0x80440000u; // 8015730C
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 80157310
  c->r[3]=c->r[3]+0xFFFFE8B0u; // 80157314
  W32(c->r[30]+0x000002D0u,c->r[31]); // 80157318
  c->r[3]=c->r[3]+c->r[0]; // 8015731C
  W32(c->r[30]+0x000002DCu,c->r[3]); // 80157320
  c->r[4]=R32(c->r[3]+0x00000004u); // 80157324
  cmps(c,0,(int32_t)c->r[4],0); // 80157328
  if (!crb(c,2)) { goto L_80157338; } // 8015732C
  W32(c->r[3]+0x00000000u,c->r[30]); // 80157330
  goto L_8015733C; // 80157334
L_80157338:;
  W32(c->r[4]+0x000002E0u,c->r[30]); // 80157338
L_8015733C:;
  c->r[0]=0u+0x00000000u; // 8015733C
  W32(c->r[30]+0x000002E4u,c->r[4]); // 80157340
  c->r[4]=R32(c->r[30]+0x000002DCu); // 80157344
  c->r[3]=0u+0x00000001u; // 80157348
  W32(c->r[30]+0x000002E0u,c->r[0]); // 8015734C
  W32(c->r[4]+0x00000004u,c->r[30]); // 80157350
  c->r[0]=R32(c->r[30]+0x000002D0u); // 80157354
  c->r[4]=R32(c->r[13]+0xFFFFAA58u); // 80157358
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 8015735C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80157360
  c->r[0]=c->r[4]|c->r[0]; // 80157364
  W32(c->r[13]+0xFFFFAA58u,c->r[0]); // 80157368
  W32(c->r[13]+0xFFFFAA54u,c->r[3]); // 8015736C
  goto L_80157458; // 80157370
L_80157374:;
  c->r[6]=R32(c->r[3]+0x000002E0u); // 80157374
  c->r[7]=R32(c->r[3]+0x000002E4u); // 80157378
  cmps(c,0,(int32_t)c->r[6],0); // 8015737C
  if (!crb(c,2)) { goto L_80157390; } // 80157380
  c->r[5]=R32(c->r[3]+0x000002DCu); // 80157384
  W32(c->r[5]+0x00000004u,c->r[7]); // 80157388
  goto L_80157394; // 8015738C
L_80157390:;
  W32(c->r[6]+0x000002E4u,c->r[7]); // 80157390
L_80157394:;
  cmps(c,0,(int32_t)c->r[7],0); // 80157394
  if (!crb(c,2)) { goto L_801573A8; } // 80157398
  c->r[5]=R32(c->r[3]+0x000002DCu); // 8015739C
  W32(c->r[5]+0x00000000u,c->r[6]); // 801573A0
  goto L_801573AC; // 801573A4
L_801573A8:;
  W32(c->r[7]+0x000002E0u,c->r[6]); // 801573A8
L_801573AC:;
  W32(c->r[3]+0x000002D0u,c->r[4]); // 801573AC
  c->r[5]=R32(c->r[3]+0x000002DCu); // 801573B0
  c->r[6]=R32(c->r[5]+0x00000000u); // 801573B4
  goto L_801573C0; // 801573B8
L_801573BC:;
  c->r[6]=R32(c->r[6]+0x000002E0u); // 801573BC
L_801573C0:;
  cmps(c,0,(int32_t)c->r[6],0); // 801573C0
  if (crb(c,2)) { goto L_801573D8; } // 801573C4
  c->r[4]=R32(c->r[6]+0x000002D0u); // 801573C8
  c->r[0]=R32(c->r[3]+0x000002D0u); // 801573CC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801573D0
  if (!crb(c,1)) { IRQCHK(c); goto L_801573BC; } // 801573D4
L_801573D8:;
  cmps(c,0,(int32_t)c->r[6],0); // 801573D8
  if (!crb(c,2)) { goto L_80157410; } // 801573DC
  c->r[4]=R32(c->r[5]+0x00000004u); // 801573E0
  cmps(c,0,(int32_t)c->r[4],0); // 801573E4
  if (!crb(c,2)) { goto L_801573F4; } // 801573E8
  W32(c->r[5]+0x00000000u,c->r[3]); // 801573EC
  goto L_801573F8; // 801573F0
L_801573F4:;
  W32(c->r[4]+0x000002E0u,c->r[3]); // 801573F4
L_801573F8:;
  c->r[0]=0u+0x00000000u; // 801573F8
  W32(c->r[3]+0x000002E4u,c->r[4]); // 801573FC
  c->r[4]=R32(c->r[3]+0x000002DCu); // 80157400
  W32(c->r[3]+0x000002E0u,c->r[0]); // 80157404
  W32(c->r[4]+0x00000004u,c->r[3]); // 80157408
  goto L_80157438; // 8015740C
L_80157410:;
  W32(c->r[3]+0x000002E0u,c->r[6]); // 80157410
  c->r[4]=R32(c->r[6]+0x000002E4u); // 80157414
  W32(c->r[6]+0x000002E4u,c->r[3]); // 80157418
  cmps(c,0,(int32_t)c->r[4],0); // 8015741C
  W32(c->r[3]+0x000002E4u,c->r[4]); // 80157420
  if (!crb(c,2)) { goto L_80157434; } // 80157424
  c->r[4]=R32(c->r[3]+0x000002DCu); // 80157428
  W32(c->r[4]+0x00000000u,c->r[3]); // 8015742C
  goto L_80157438; // 80157430
L_80157434:;
  W32(c->r[4]+0x000002E0u,c->r[3]); // 80157434
L_80157438:;
  c->r[3]=R32(c->r[3]+0x000002F0u); // 80157438
  cmps(c,0,(int32_t)c->r[3],0); // 8015743C
  if (crb(c,2)) { goto L_80157458; } // 80157440
  c->r[3]=R32(c->r[3]+0x00000008u); // 80157444
  goto L_8015745C; // 80157448
L_8015744C:;
  c->r[0]=0u+0x00000001u; // 8015744C
  W32(c->r[13]+0xFFFFAA54u,c->r[0]); // 80157450
  W32(c->r[3]+0x000002D0u,c->r[4]); // 80157454
L_80157458:;
  c->r[3]=0u+0x00000000u; // 80157458
L_8015745C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015745C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80157460
  c->r[30]=R32(c->r[1]+0x00000008u); // 80157464
  c->lr=c->r[0]; // 80157468
  c->r[1]=c->r[1]+0x00000010u; // 8015746C
  return; // 80157470
}

// __OSPromoteThread
void f_80157474(Ctx* __restrict c) {
  trace_call(0x80157474u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80157474
  c->r[0]=c->lr; // 80157478
  W32(c->r[1]+0x00000014u,c->r[0]); // 8015747C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80157480
  c->r[31]=c->r[4]|c->r[4]; // 80157484
L_80157488:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 80157488
  cmps(c,0,(int32_t)c->r[0],0); // 8015748C
  if (crb(c,1)) { goto L_801574B0; } // 80157490
  c->r[0]=R32(c->r[3]+0x000002D0u); // 80157494
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 80157498
  if (!crb(c,1)) { goto L_801574B0; } // 8015749C
  c->r[4]=c->r[31]|c->r[31]; // 801574A0
  c->lr=0x801574A8u; f_801572C0(c); // 801574A4
  cmps(c,0,(int32_t)c->r[3],0); // 801574A8
  if (!crb(c,2)) { IRQCHK(c); goto L_80157488; } // 801574AC
L_801574B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801574B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801574B4
  c->lr=c->r[0]; // 801574B8
  c->r[1]=c->r[1]+0x00000010u; // 801574BC
  return; // 801574C0
}

// SelectThread
void f_801574C4(Ctx* __restrict c) {
  trace_call(0x801574C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801574C4
  c->r[0]=c->lr; // 801574C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801574CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801574D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801574D4
  c->r[30]=c->r[3]|c->r[3]; // 801574D8
  c->r[0]=R32(c->r[13]+0xFFFFAA50u); // 801574DC
  cmps(c,0,(int32_t)c->r[0],0); // 801574E0
  if (!crb(c,1)) { goto L_801574F0; } // 801574E4
  c->r[3]=0u+0x00000000u; // 801574E8
  goto L_801576D4; // 801574EC
L_801574F0:;
  c->lr=0x801574F4u; f_801500DC(c); // 801574F0
  c->r[4]=0u+0x80000000u; // 801574F4
  c->r[5]=R32(c->r[4]+0x000000E4u); // 801574F8
  cmpu(c,0,c->r[3],c->r[5]); // 801574FC
  if (crb(c,2)) { goto L_8015750C; } // 80157500
  c->r[3]=0u+0x00000000u; // 80157504
  goto L_801576D4; // 80157508
L_8015750C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8015750C
  if (crb(c,2)) { goto L_801575D4; } // 80157510
  c->r[0]=R16(c->r[5]+0x000002C8u); // 80157514
  cmpu(c,0,c->r[0],0x00000002u); // 80157518
  if (!crb(c,2)) { goto L_801575B0; } // 8015751C
  cmps(c,0,(int32_t)c->r[30],0); // 80157520
  if (!crb(c,2)) { goto L_80157544; } // 80157524
  c->r[3]=R32(c->r[13]+0xFFFFAA58u); // 80157528
  c->r[0]=R32(c->r[5]+0x000002D0u); // 8015752C
  c->r[3]=cntlz(c->r[3]); // 80157530
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80157534
  if (crb(c,1)) { goto L_80157544; } // 80157538
  c->r[3]=0u+0x00000000u; // 8015753C
  goto L_801576D4; // 80157540
L_80157544:;
  c->r[0]=0u+0x00000001u; // 80157544
  c->r[3]=0u+0x80440000u; // 80157548
  W16(c->r[5]+0x000002C8u,c->r[0]); // 8015754C
  c->r[3]=c->r[3]+0xFFFFE8B0u; // 80157550
  c->r[0]=R32(c->r[5]+0x000002D0u); // 80157554
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80157558
  c->r[3]=c->r[3]+c->r[0]; // 8015755C
  W32(c->r[5]+0x000002DCu,c->r[3]); // 80157560
  c->r[4]=R32(c->r[3]+0x00000004u); // 80157564
  cmps(c,0,(int32_t)c->r[4],0); // 80157568
  if (!crb(c,2)) { goto L_80157578; } // 8015756C
  W32(c->r[3]+0x00000000u,c->r[5]); // 80157570
  goto L_8015757C; // 80157574
L_80157578:;
  W32(c->r[4]+0x000002E0u,c->r[5]); // 80157578
L_8015757C:;
  W32(c->r[5]+0x000002E4u,c->r[4]); // 8015757C
  c->r[0]=0u+0x00000000u; // 80157580
  c->r[3]=0u+0x00000001u; // 80157584
  W32(c->r[5]+0x000002E0u,c->r[0]); // 80157588
  c->r[4]=R32(c->r[5]+0x000002DCu); // 8015758C
  W32(c->r[4]+0x00000004u,c->r[5]); // 80157590
  c->r[0]=R32(c->r[5]+0x000002D0u); // 80157594
  c->r[4]=R32(c->r[13]+0xFFFFAA58u); // 80157598
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 8015759C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801575A0
  c->r[0]=c->r[4]|c->r[0]; // 801575A4
  W32(c->r[13]+0xFFFFAA58u,c->r[0]); // 801575A8
  W32(c->r[13]+0xFFFFAA54u,c->r[3]); // 801575AC
L_801575B0:;
  c->r[0]=R16(c->r[5]+0x000001A2u); // 801575B0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801575B4
  if (!crb(c,2)) { goto L_801575D4; } // 801575B8
  c->r[3]=c->r[5]|c->r[5]; // 801575BC
  c->lr=0x801575C4u; f_801500E8(c); // 801575C0
  cmps(c,0,(int32_t)c->r[3],0); // 801575C4
  if (crb(c,2)) { goto L_801575D4; } // 801575C8
  c->r[3]=0u+0x00000000u; // 801575CC
  goto L_801576D4; // 801575D0
L_801575D4:;
  c->r[0]=R32(c->r[13]+0xFFFFAA58u); // 801575D4
  cmps(c,0,(int32_t)c->r[0],0); // 801575D8
  if (!crb(c,2)) { goto L_80157638; } // 801575DC
  c->r[12]=R32(c->r[13]+0xFFFF8FE8u); // 801575E0
  c->r[31]=0u+0x80000000u; // 801575E4
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801575E8
  c->r[4]=0u+0x00000000u; // 801575EC
  c->ctr=c->r[12]; // 801575F0
  if (true) { c->lr=0x801575F8u; dispatch(c,c->ctr); } // 801575F4
  c->r[0]=0u+0x00000000u; // 801575F8
  c->r[3]=0u+0x80440000u; // 801575FC
  W32(c->r[31]+0x000000E4u,c->r[0]); // 80157600
  c->r[3]=c->r[3]+0xFFFFE9B0u; // 80157604
  c->lr=0x8015760Cu; f_80150080(c); // 80157608
L_8015760C:;
  c->lr=0x80157610u; f_80154424(c); // 8015760C
L_80157610:;
  c->r[0]=R32(c->r[13]+0xFFFFAA58u); // 80157610
  cmps(c,0,(int32_t)c->r[0],0); // 80157614
  if (crb(c,2)) { IDLEWAIT(c); goto L_80157610; } // 80157618
  c->lr=0x80157620u; f_80154410(c); // 8015761C
  c->r[0]=R32(c->r[13]+0xFFFFAA58u); // 80157620
  cmps(c,0,(int32_t)c->r[0],0); // 80157624
  if (crb(c,2)) { IRQCHK(c); goto L_8015760C; } // 80157628
  c->r[3]=0u+0x80440000u; // 8015762C
  c->r[3]=c->r[3]+0xFFFFE9B0u; // 80157630
  c->lr=0x80157638u; f_801502A8(c); // 80157634
L_80157638:;
  c->r[4]=0u+0x00000000u; // 80157638
  c->r[3]=0u+0x80440000u; // 8015763C
  W32(c->r[13]+0xFFFFAA54u,c->r[4]); // 80157640
  c->r[3]=c->r[3]+0xFFFFE8B0u; // 80157644
  c->r[0]=R32(c->r[13]+0xFFFFAA58u); // 80157648
  c->r[5]=cntlz(c->r[0]); // 8015764C
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80157650
  {uint32_t ea=c->r[3]+c->r[0]; c->r[30]=R32(ea); c->r[3]=ea;} // 80157654
  c->r[6]=R32(c->r[30]+0x000002E0u); // 80157658
  cmps(c,0,(int32_t)c->r[6],0); // 8015765C
  if (!crb(c,2)) { goto L_8015766C; } // 80157660
  W32(c->r[3]+0x00000004u,c->r[4]); // 80157664
  goto L_80157670; // 80157668
L_8015766C:;
  W32(c->r[6]+0x000002E4u,c->r[4]); // 8015766C
L_80157670:;
  cmps(c,0,(int32_t)c->r[6],0); // 80157670
  W32(c->r[3]+0x00000000u,c->r[6]); // 80157674
  if (!crb(c,2)) { goto L_80157694; } // 80157678
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 8015767C
  c->r[3]=0u+0x00000001u; // 80157680
  c->r[4]=R32(c->r[13]+0xFFFFAA58u); // 80157684
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80157688
  c->r[0]=c->r[4]&~c->r[0]; // 8015768C
  W32(c->r[13]+0xFFFFAA58u,c->r[0]); // 80157690
L_80157694:;
  c->r[3]=0u+0x00000000u; // 80157694
  c->r[0]=0u+0x00000002u; // 80157698
  W32(c->r[30]+0x000002DCu,c->r[3]); // 8015769C
  c->r[31]=0u+0x80000000u; // 801576A0
  c->r[4]=c->r[30]|c->r[30]; // 801576A4
  W16(c->r[30]+0x000002C8u,c->r[0]); // 801576A8
  c->r[12]=R32(c->r[13]+0xFFFF8FE8u); // 801576AC
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801576B0
  c->ctr=c->r[12]; // 801576B4
  if (true) { c->lr=0x801576BCu; dispatch(c,c->ctr); } // 801576B8
  W32(c->r[31]+0x000000E4u,c->r[30]); // 801576BC
  c->r[3]=c->r[30]|c->r[30]; // 801576C0
  c->lr=0x801576C8u; f_80150080(c); // 801576C4
  c->r[3]=c->r[30]|c->r[30]; // 801576C8
  c->lr=0x801576D0u; f_80150168(c); // 801576CC
  c->r[3]=c->r[30]|c->r[30]; // 801576D0
L_801576D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801576D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801576D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801576DC
  c->lr=c->r[0]; // 801576E0
  c->r[1]=c->r[1]+0x00000010u; // 801576E4
  return; // 801576E8
}

// __OSReschedule
void f_801576EC(Ctx* __restrict c) {
  trace_call(0x801576ECu);
  c->r[0]=R32(c->r[13]+0xFFFFAA54u); // 801576EC
  cmps(c,0,(int32_t)c->r[0],0); // 801576F0
  if (crb(c,2)) return; // 801576F4
  c->r[3]=0u+0x00000000u; // 801576F8
  f_801574C4(c); return; // 801576FC
  return; // 80157700
}

// OSYieldThread
void f_80157704(Ctx* __restrict c) {
  trace_call(0x80157704u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80157704
  c->r[0]=c->lr; // 80157708
  W32(c->r[1]+0x00000014u,c->r[0]); // 8015770C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80157710
  c->lr=0x80157718u; f_80154410(c); // 80157714
  c->r[31]=c->r[3]|c->r[3]; // 80157718
  c->r[3]=0u+0x00000001u; // 8015771C
  c->lr=0x80157724u; f_801574C4(c); // 80157720
  c->r[3]=c->r[31]|c->r[31]; // 80157724
  c->lr=0x8015772Cu; f_80154438(c); // 80157728
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015772C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80157730
  c->lr=c->r[0]; // 80157734
  c->r[1]=c->r[1]+0x00000010u; // 80157738
  return; // 8015773C
}

// OSCreateThread
void f_80157740(Ctx* __restrict c) {
  trace_call(0x80157740u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80157740
  c->r[0]=c->lr; // 80157744
  W32(c->r[1]+0x00000024u,c->r[0]); // 80157748
  c->r[11]=c->r[1]+0x00000020u; // 8015774C
  c->lr=0x80157754u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80157750
  cmps(c,0,(int32_t)c->r[8],0); // 80157754
  c->r[31]=c->r[3]|c->r[3]; // 80157758
  c->r[26]=c->r[5]|c->r[5]; // 8015775C
  c->r[27]=c->r[6]|c->r[6]; // 80157760
  c->r[28]=c->r[7]|c->r[7]; // 80157764
  if (crb(c,0)) { goto L_80157774; } // 80157768
  cmps(c,0,(int32_t)c->r[8],31); // 8015776C
  if (!crb(c,1)) { goto L_8015777C; } // 80157770
L_80157774:;
  c->r[3]=0u+0x00000000u; // 80157774
  goto L_80157994; // 80157778
L_8015777C:;
  c->r[30]=0u+0x00000000u; // 8015777C
  c->r[7]=0u+0x00000001u; // 80157780
  c->r[0]=rotl(c->r[9],0)&0x00000001u; // 80157784
  c->r[29]=0u+0xFFFFFFFFu; // 80157788
  c->r[6]=rotl(c->r[6],0)&0xFFFFFFF8u; // 8015778C
  W16(c->r[3]+0x000002C8u,c->r[7]); // 80157790
  c->r[5]=c->r[6]+0xFFFFFFF8u; // 80157794
  W16(c->r[3]+0x000002CAu,c->r[0]); // 80157798
  W32(c->r[3]+0x000002D4u,c->r[8]); // 8015779C
  W32(c->r[3]+0x000002D0u,c->r[8]); // 801577A0
  W32(c->r[3]+0x000002CCu,c->r[7]); // 801577A4
  W32(c->r[3]+0x000002D8u,c->r[29]); // 801577A8
  W32(c->r[3]+0x000002F0u,c->r[30]); // 801577AC
  W32(c->r[3]+0x000002ECu,c->r[30]); // 801577B0
  W32(c->r[3]+0x000002E8u,c->r[30]); // 801577B4
  W32(c->r[3]+0x000002F8u,c->r[30]); // 801577B8
  W32(c->r[3]+0x000002F4u,c->r[30]); // 801577BC
  W32(c->r[6]+0xFFFFFFF8u,c->r[30]); // 801577C0
  W32(c->r[6]+0xFFFFFFFCu,c->r[30]); // 801577C4
  c->lr=0x801577CCu; f_801502CC(c); // 801577C8
  c->r[5]=0u+0x80150000u; // 801577CC
  c->r[4]=c->r[27]-c->r[28]; // 801577D0
  c->r[5]=c->r[5]+0x000079ACu; // 801577D4
  c->r[3]=0u+0xDEAE0000u; // 801577D8
  W32(c->r[31]+0x00000084u,c->r[5]); // 801577DC
  c->r[0]=c->r[3]+0xFFFFBABEu; // 801577E0
  W32(c->r[31]+0x0000000Cu,c->r[26]); // 801577E4
  W32(c->r[31]+0x00000304u,c->r[27]); // 801577E8
  W32(c->r[31]+0x00000308u,c->r[4]); // 801577EC
  W32(c->r[4]+0x00000000u,c->r[0]); // 801577F0
  W32(c->r[31]+0x0000030Cu,c->r[30]); // 801577F4
  W32(c->r[31]+0x00000310u,c->r[30]); // 801577F8
  W32(c->r[31]+0x00000314u,c->r[30]); // 801577FC
  c->lr=0x80157804u; f_80154410(c); // 80157800
  c->r[4]=0u+0x80440000u; // 80157804
  c->r[4]=c->r[4]+0xFFFFE1F0u; // 80157808
  c->r[0]=R32(c->r[4]+0x00000040u); // 8015780C
  cmps(c,0,(int32_t)c->r[0],0); // 80157810
  if (crb(c,2)) { goto L_8015795C; } // 80157814
  c->r[5]=R32(c->r[31]+0x0000019Cu); // 80157818
  c->r[0]=0u+0x00000002u; // 8015781C
  c->r[4]=R16(c->r[31]+0x000001A2u); // 80157820
  c->r[6]=c->r[31]+0x00000090u; // 80157824
  c->r[5]=c->r[5]|0x00000900u; // 80157828
  c->r[7]=c->r[31]+0x000001C8u; // 8015782C
  c->r[4]=c->r[4]|0x00000001u; // 80157830
  W32(c->r[31]+0x0000019Cu,c->r[5]); // 80157834
  W16(c->r[31]+0x000001A2u,c->r[4]); // 80157838
  c->r[4]=R32(c->r[13]+0xFFFF8FB8u); // 8015783C
  c->r[4]=rotl(c->r[4],0)&0x000000F8u; // 80157840
  c->r[4]=c->r[4]|0x00000004u; // 80157844
  W32(c->r[31]+0x00000194u,c->r[4]); // 80157848
  c->ctr=c->r[0]; // 8015784C
L_80157850:;
  W32(c->r[6]+0x00000004u,c->r[29]); // 80157850
  W32(c->r[6]+0x00000000u,c->r[29]); // 80157854
  W32(c->r[7]+0x00000004u,c->r[29]); // 80157858
  W32(c->r[7]+0x00000000u,c->r[29]); // 8015785C
  W32(c->r[6]+0x0000000Cu,c->r[29]); // 80157860
  W32(c->r[6]+0x00000008u,c->r[29]); // 80157864
  W32(c->r[7]+0x0000000Cu,c->r[29]); // 80157868
  W32(c->r[7]+0x00000008u,c->r[29]); // 8015786C
  W32(c->r[6]+0x00000014u,c->r[29]); // 80157870
  W32(c->r[6]+0x00000010u,c->r[29]); // 80157874
  W32(c->r[7]+0x00000014u,c->r[29]); // 80157878
  W32(c->r[7]+0x00000010u,c->r[29]); // 8015787C
  W32(c->r[6]+0x0000001Cu,c->r[29]); // 80157880
  W32(c->r[6]+0x00000018u,c->r[29]); // 80157884
  W32(c->r[7]+0x0000001Cu,c->r[29]); // 80157888
  W32(c->r[7]+0x00000018u,c->r[29]); // 8015788C
  W32(c->r[6]+0x00000024u,c->r[29]); // 80157890
  W32(c->r[6]+0x00000020u,c->r[29]); // 80157894
  W32(c->r[7]+0x00000024u,c->r[29]); // 80157898
  W32(c->r[7]+0x00000020u,c->r[29]); // 8015789C
  W32(c->r[6]+0x0000002Cu,c->r[29]); // 801578A0
  W32(c->r[6]+0x00000028u,c->r[29]); // 801578A4
  W32(c->r[7]+0x0000002Cu,c->r[29]); // 801578A8
  W32(c->r[7]+0x00000028u,c->r[29]); // 801578AC
  W32(c->r[6]+0x00000034u,c->r[29]); // 801578B0
  W32(c->r[6]+0x00000030u,c->r[29]); // 801578B4
  W32(c->r[7]+0x00000034u,c->r[29]); // 801578B8
  W32(c->r[7]+0x00000030u,c->r[29]); // 801578BC
  W32(c->r[6]+0x0000003Cu,c->r[29]); // 801578C0
  W32(c->r[6]+0x00000038u,c->r[29]); // 801578C4
  W32(c->r[7]+0x0000003Cu,c->r[29]); // 801578C8
  W32(c->r[7]+0x00000038u,c->r[29]); // 801578CC
  W32(c->r[6]+0x00000044u,c->r[29]); // 801578D0
  W32(c->r[6]+0x00000040u,c->r[29]); // 801578D4
  W32(c->r[7]+0x00000044u,c->r[29]); // 801578D8
  W32(c->r[7]+0x00000040u,c->r[29]); // 801578DC
  W32(c->r[6]+0x0000004Cu,c->r[29]); // 801578E0
  W32(c->r[6]+0x00000048u,c->r[29]); // 801578E4
  W32(c->r[7]+0x0000004Cu,c->r[29]); // 801578E8
  W32(c->r[7]+0x00000048u,c->r[29]); // 801578EC
  W32(c->r[6]+0x00000054u,c->r[29]); // 801578F0
  W32(c->r[6]+0x00000050u,c->r[29]); // 801578F4
  W32(c->r[7]+0x00000054u,c->r[29]); // 801578F8
  W32(c->r[7]+0x00000050u,c->r[29]); // 801578FC
  W32(c->r[6]+0x0000005Cu,c->r[29]); // 80157900
  W32(c->r[6]+0x00000058u,c->r[29]); // 80157904
  W32(c->r[7]+0x0000005Cu,c->r[29]); // 80157908
  W32(c->r[7]+0x00000058u,c->r[29]); // 8015790C
  W32(c->r[6]+0x00000064u,c->r[29]); // 80157910
  W32(c->r[6]+0x00000060u,c->r[29]); // 80157914
  W32(c->r[7]+0x00000064u,c->r[29]); // 80157918
  W32(c->r[7]+0x00000060u,c->r[29]); // 8015791C
  W32(c->r[6]+0x0000006Cu,c->r[29]); // 80157920
  W32(c->r[6]+0x00000068u,c->r[29]); // 80157924
  W32(c->r[7]+0x0000006Cu,c->r[29]); // 80157928
  W32(c->r[7]+0x00000068u,c->r[29]); // 8015792C
  W32(c->r[6]+0x00000074u,c->r[29]); // 80157930
  W32(c->r[6]+0x00000070u,c->r[29]); // 80157934
  W32(c->r[7]+0x00000074u,c->r[29]); // 80157938
  W32(c->r[7]+0x00000070u,c->r[29]); // 8015793C
  W32(c->r[6]+0x0000007Cu,c->r[29]); // 80157940
  W32(c->r[6]+0x00000078u,c->r[29]); // 80157944
  c->r[6]=c->r[6]+0x00000080u; // 80157948
  W32(c->r[7]+0x0000007Cu,c->r[29]); // 8015794C
  W32(c->r[7]+0x00000078u,c->r[29]); // 80157950
  c->r[7]=c->r[7]+0x00000080u; // 80157954
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80157850; } // 80157958
L_8015795C:;
  c->r[4]=0u+0x80000000u; // 8015795C
  c->r[5]=R32(c->r[4]+0x000000E0u); // 80157960
  cmps(c,0,(int32_t)c->r[5],0); // 80157964
  if (!crb(c,2)) { goto L_80157974; } // 80157968
  W32(c->r[4]+0x000000DCu,c->r[31]); // 8015796C
  goto L_80157978; // 80157970
L_80157974:;
  W32(c->r[5]+0x000002FCu,c->r[31]); // 80157974
L_80157978:;
  c->r[0]=0u+0x00000000u; // 80157978
  W32(c->r[31]+0x00000300u,c->r[5]); // 8015797C
  c->r[4]=0u+0x80000000u; // 80157980
  W32(c->r[31]+0x000002FCu,c->r[0]); // 80157984
  W32(c->r[4]+0x000000E0u,c->r[31]); // 80157988
  c->lr=0x80157990u; f_80154438(c); // 8015798C
  c->r[3]=0u+0x00000001u; // 80157990
L_80157994:;
  c->r[11]=c->r[1]+0x00000020u; // 80157994
  c->lr=0x8015799Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80157998
  c->r[0]=R32(c->r[1]+0x00000024u); // 8015799C
  c->lr=c->r[0]; // 801579A0
  c->r[1]=c->r[1]+0x00000020u; // 801579A4
  return; // 801579A8
}

// OSExitThread
void f_801579AC(Ctx* __restrict c) {
  trace_call(0x801579ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801579AC
  c->r[0]=c->lr; // 801579B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801579B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801579B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801579BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801579C0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801579C4
  c->r[28]=c->r[3]|c->r[3]; // 801579C8
  c->lr=0x801579D0u; f_80154410(c); // 801579CC
  c->r[31]=0u+0x80000000u; // 801579D0
  c->r[29]=c->r[3]|c->r[3]; // 801579D4
  c->r[30]=R32(c->r[31]+0x000000E4u); // 801579D8
  c->r[3]=c->r[30]|c->r[30]; // 801579DC
  c->lr=0x801579E4u; f_801502A8(c); // 801579E0
  c->r[0]=R16(c->r[30]+0x000002CAu); // 801579E4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801579E8
  if (crb(c,2)) { goto L_80157A30; } // 801579EC
  c->r[4]=R32(c->r[30]+0x000002FCu); // 801579F0
  c->r[3]=R32(c->r[30]+0x00000300u); // 801579F4
  cmps(c,0,(int32_t)c->r[4],0); // 801579F8
  if (!crb(c,2)) { goto L_80157A08; } // 801579FC
  W32(c->r[31]+0x000000E0u,c->r[3]); // 80157A00
  goto L_80157A0C; // 80157A04
L_80157A08:;
  W32(c->r[4]+0x00000300u,c->r[3]); // 80157A08
L_80157A0C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80157A0C
  if (!crb(c,2)) { goto L_80157A20; } // 80157A10
  c->r[3]=0u+0x80000000u; // 80157A14
  W32(c->r[3]+0x000000DCu,c->r[4]); // 80157A18
  goto L_80157A24; // 80157A1C
L_80157A20:;
  W32(c->r[3]+0x000002FCu,c->r[4]); // 80157A20
L_80157A24:;
  c->r[0]=0u+0x00000000u; // 80157A24
  W16(c->r[30]+0x000002C8u,c->r[0]); // 80157A28
  goto L_80157A3C; // 80157A2C
L_80157A30:;
  c->r[0]=0u+0x00000008u; // 80157A30
  W16(c->r[30]+0x000002C8u,c->r[0]); // 80157A34
  W32(c->r[30]+0x000002D8u,c->r[28]); // 80157A38
L_80157A3C:;
  c->r[3]=c->r[30]|c->r[30]; // 80157A3C
  c->lr=0x80157A44u; f_80155870(c); // 80157A40
  c->r[3]=c->r[30]+0x000002E8u; // 80157A44
  c->lr=0x80157A4Cu; f_801582C0(c); // 80157A48
  c->r[0]=0u+0x00000001u; // 80157A4C
  W32(c->r[13]+0xFFFFAA54u,c->r[0]); // 80157A50
  c->r[0]=R32(c->r[13]+0xFFFFAA54u); // 80157A54
  cmps(c,0,(int32_t)c->r[0],0); // 80157A58
  if (crb(c,2)) { goto L_80157A68; } // 80157A5C
  c->r[3]=0u+0x00000000u; // 80157A60
  c->lr=0x80157A68u; f_801574C4(c); // 80157A64
L_80157A68:;
  c->r[3]=c->r[29]|c->r[29]; // 80157A68
  c->lr=0x80157A70u; f_80154438(c); // 80157A6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80157A70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80157A74
  c->r[30]=R32(c->r[1]+0x00000018u); // 80157A78
  c->r[29]=R32(c->r[1]+0x00000014u); // 80157A7C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80157A80
  c->lr=c->r[0]; // 80157A84
  c->r[1]=c->r[1]+0x00000020u; // 80157A88
  return; // 80157A8C
}

// OSCancelThread
void f_80157A90(Ctx* __restrict c) {
  trace_call(0x80157A90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80157A90
  c->r[0]=c->lr; // 80157A94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80157A98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80157A9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80157AA0
  c->r[30]=c->r[3]|c->r[3]; // 80157AA4
  c->lr=0x80157AACu; f_80154410(c); // 80157AA8
  c->r[0]=R16(c->r[30]+0x000002C8u); // 80157AAC
  c->r[31]=c->r[3]|c->r[3]; // 80157AB0
  cmps(c,0,(int32_t)c->r[0],3); // 80157AB4
  if (crb(c,2)) { goto L_80157BB8; } // 80157AB8
  if (!crb(c,0)) { goto L_80157AD0; } // 80157ABC
  cmps(c,0,(int32_t)c->r[0],1); // 80157AC0
  if (crb(c,2)) { goto L_80157ADC; } // 80157AC4
  if (!crb(c,0)) { goto L_80157AF4; } // 80157AC8
  goto L_80157BB8; // 80157ACC
L_80157AD0:;
  cmps(c,0,(int32_t)c->r[0],5); // 80157AD0
  if (!crb(c,0)) { goto L_80157BB8; } // 80157AD4
  goto L_80157B00; // 80157AD8
L_80157ADC:;
  c->r[0]=R32(c->r[30]+0x000002CCu); // 80157ADC
  cmps(c,0,(int32_t)c->r[0],0); // 80157AE0
  if (crb(c,1)) { goto L_80157BC4; } // 80157AE4
  c->r[3]=c->r[30]|c->r[30]; // 80157AE8
  c->lr=0x80157AF0u; f_8015721C(c); // 80157AEC
  goto L_80157BC4; // 80157AF0
L_80157AF4:;
  c->r[0]=0u+0x00000001u; // 80157AF4
  W32(c->r[13]+0xFFFFAA54u,c->r[0]); // 80157AF8
  goto L_80157BC4; // 80157AFC
L_80157B00:;
  c->r[4]=R32(c->r[30]+0x000002E0u); // 80157B00
  c->r[5]=R32(c->r[30]+0x000002E4u); // 80157B04
  cmps(c,0,(int32_t)c->r[4],0); // 80157B08
  if (!crb(c,2)) { goto L_80157B1C; } // 80157B0C
  c->r[3]=R32(c->r[30]+0x000002DCu); // 80157B10
  W32(c->r[3]+0x00000004u,c->r[5]); // 80157B14
  goto L_80157B20; // 80157B18
L_80157B1C:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 80157B1C
L_80157B20:;
  cmps(c,0,(int32_t)c->r[5],0); // 80157B20
  if (!crb(c,2)) { goto L_80157B34; } // 80157B24
  c->r[3]=R32(c->r[30]+0x000002DCu); // 80157B28
  W32(c->r[3]+0x00000000u,c->r[4]); // 80157B2C
  goto L_80157B38; // 80157B30
L_80157B34:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 80157B34
L_80157B38:;
  c->r[0]=R32(c->r[30]+0x000002CCu); // 80157B38
  c->r[3]=0u+0x00000000u; // 80157B3C
  W32(c->r[30]+0x000002DCu,c->r[3]); // 80157B40
  cmps(c,0,(int32_t)c->r[0],0); // 80157B44
  if (crb(c,1)) { goto L_80157BC4; } // 80157B48
  c->r[3]=R32(c->r[30]+0x000002F0u); // 80157B4C
  cmps(c,0,(int32_t)c->r[3],0); // 80157B50
  if (crb(c,2)) { goto L_80157BC4; } // 80157B54
  c->r[3]=R32(c->r[3]+0x00000008u); // 80157B58
L_80157B5C:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 80157B5C
  cmps(c,0,(int32_t)c->r[0],0); // 80157B60
  if (crb(c,1)) { goto L_80157BC4; } // 80157B64
  c->r[4]=R32(c->r[3]+0x000002D4u); // 80157B68
  c->r[5]=R32(c->r[3]+0x000002F4u); // 80157B6C
  goto L_80157B94; // 80157B70
L_80157B74:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 80157B74
  cmps(c,0,(int32_t)c->r[6],0); // 80157B78
  if (crb(c,2)) { goto L_80157B90; } // 80157B7C
  c->r[0]=R32(c->r[6]+0x000002D0u); // 80157B80
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80157B84
  if (!crb(c,0)) { goto L_80157B90; } // 80157B88
  c->r[4]=c->r[0]|c->r[0]; // 80157B8C
L_80157B90:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 80157B90
L_80157B94:;
  cmps(c,0,(int32_t)c->r[5],0); // 80157B94
  if (!crb(c,2)) { IRQCHK(c); goto L_80157B74; } // 80157B98
  c->r[0]=R32(c->r[3]+0x000002D0u); // 80157B9C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80157BA0
  if (crb(c,2)) { goto L_80157BC4; } // 80157BA4
  c->lr=0x80157BACu; f_801572C0(c); // 80157BA8
  cmps(c,0,(int32_t)c->r[3],0); // 80157BAC
  if (!crb(c,2)) { IRQCHK(c); goto L_80157B5C; } // 80157BB0
  goto L_80157BC4; // 80157BB4
L_80157BB8:;
  c->r[3]=c->r[31]|c->r[31]; // 80157BB8
  c->lr=0x80157BC0u; f_80154438(c); // 80157BBC
  goto L_80157C50; // 80157BC0
L_80157BC4:;
  c->r[3]=c->r[30]|c->r[30]; // 80157BC4
  c->lr=0x80157BCCu; f_801502A8(c); // 80157BC8
  c->r[0]=R16(c->r[30]+0x000002CAu); // 80157BCC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80157BD0
  if (crb(c,2)) { goto L_80157C1C; } // 80157BD4
  c->r[4]=R32(c->r[30]+0x000002FCu); // 80157BD8
  c->r[5]=R32(c->r[30]+0x00000300u); // 80157BDC
  cmps(c,0,(int32_t)c->r[4],0); // 80157BE0
  if (!crb(c,2)) { goto L_80157BF4; } // 80157BE4
  c->r[3]=0u+0x80000000u; // 80157BE8
  W32(c->r[3]+0x000000E0u,c->r[5]); // 80157BEC
  goto L_80157BF8; // 80157BF0
L_80157BF4:;
  W32(c->r[4]+0x00000300u,c->r[5]); // 80157BF4
L_80157BF8:;
  cmps(c,0,(int32_t)c->r[5],0); // 80157BF8
  if (!crb(c,2)) { goto L_80157C0C; } // 80157BFC
  c->r[3]=0u+0x80000000u; // 80157C00
  W32(c->r[3]+0x000000DCu,c->r[4]); // 80157C04
  goto L_80157C10; // 80157C08
L_80157C0C:;
  W32(c->r[5]+0x000002FCu,c->r[4]); // 80157C0C
L_80157C10:;
  c->r[0]=0u+0x00000000u; // 80157C10
  W16(c->r[30]+0x000002C8u,c->r[0]); // 80157C14
  goto L_80157C24; // 80157C18
L_80157C1C:;
  c->r[0]=0u+0x00000008u; // 80157C1C
  W16(c->r[30]+0x000002C8u,c->r[0]); // 80157C20
L_80157C24:;
  c->r[3]=c->r[30]|c->r[30]; // 80157C24
  c->lr=0x80157C2Cu; f_80155870(c); // 80157C28
  c->r[3]=c->r[30]+0x000002E8u; // 80157C2C
  c->lr=0x80157C34u; f_801582C0(c); // 80157C30
  c->r[0]=R32(c->r[13]+0xFFFFAA54u); // 80157C34
  cmps(c,0,(int32_t)c->r[0],0); // 80157C38
  if (crb(c,2)) { goto L_80157C48; } // 80157C3C
  c->r[3]=0u+0x00000000u; // 80157C40
  c->lr=0x80157C48u; f_801574C4(c); // 80157C44
L_80157C48:;
  c->r[3]=c->r[31]|c->r[31]; // 80157C48
  c->lr=0x80157C50u; f_80154438(c); // 80157C4C
L_80157C50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80157C50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80157C54
  c->r[30]=R32(c->r[1]+0x00000008u); // 80157C58
  c->lr=c->r[0]; // 80157C5C
  c->r[1]=c->r[1]+0x00000010u; // 80157C60
  return; // 80157C64
}

// OSJoinThread
void f_80157C68(Ctx* __restrict c) {
  trace_call(0x80157C68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80157C68
  c->r[0]=c->lr; // 80157C6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80157C70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80157C74
  c->r[31]=c->r[3]|c->r[3]; // 80157C78
  W32(c->r[1]+0x00000018u,c->r[30]); // 80157C7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80157C80
  c->r[29]=c->r[4]|c->r[4]; // 80157C84
  c->lr=0x80157C8Cu; f_80154410(c); // 80157C88
  c->r[0]=R16(c->r[31]+0x000002CAu); // 80157C8C
  c->r[30]=c->r[3]|c->r[3]; // 80157C90
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80157C94
  if (!crb(c,2)) { goto L_80157D14; } // 80157C98
  c->r[0]=R16(c->r[31]+0x000002C8u); // 80157C9C
  cmpu(c,0,c->r[0],0x00000008u); // 80157CA0
  if (crb(c,2)) { goto L_80157D14; } // 80157CA4
  c->r[0]=R32(c->r[31]+0x000002E8u); // 80157CA8
  cmps(c,0,(int32_t)c->r[0],0); // 80157CAC
  if (!crb(c,2)) { goto L_80157D14; } // 80157CB0
  c->r[3]=c->r[31]+0x000002E8u; // 80157CB4
  c->lr=0x80157CBCu; f_801581D4(c); // 80157CB8
  c->r[0]=R16(c->r[31]+0x000002C8u); // 80157CBC
  cmps(c,0,(int32_t)c->r[0],0); // 80157CC0
  if (!crb(c,2)) { goto L_80157CD0; } // 80157CC4
  c->r[0]=0u+0x00000000u; // 80157CC8
  goto L_80157CFC; // 80157CCC
L_80157CD0:;
  c->r[3]=0u+0x80000000u; // 80157CD0
  c->r[3]=R32(c->r[3]+0x000000DCu); // 80157CD4
  goto L_80157CF0; // 80157CD8
L_80157CDC:;
  cmpu(c,0,c->r[31],c->r[3]); // 80157CDC
  if (!crb(c,2)) { goto L_80157CEC; } // 80157CE0
  c->r[0]=0u+0x00000001u; // 80157CE4
  goto L_80157CFC; // 80157CE8
L_80157CEC:;
  c->r[3]=R32(c->r[3]+0x000002FCu); // 80157CEC
L_80157CF0:;
  cmps(c,0,(int32_t)c->r[3],0); // 80157CF0
  if (!crb(c,2)) { IRQCHK(c); goto L_80157CDC; } // 80157CF4
  c->r[0]=0u+0x00000000u; // 80157CF8
L_80157CFC:;
  cmps(c,0,(int32_t)c->r[0],0); // 80157CFC
  if (!crb(c,2)) { goto L_80157D14; } // 80157D00
  c->r[3]=c->r[30]|c->r[30]; // 80157D04
  c->lr=0x80157D0Cu; f_80154438(c); // 80157D08
  c->r[3]=0u+0x00000000u; // 80157D0C
  goto L_80157D8C; // 80157D10
L_80157D14:;
  c->r[0]=R16(c->r[31]+0x000002C8u); // 80157D14
  cmpu(c,0,c->r[0],0x00000008u); // 80157D18
  if (!crb(c,2)) { goto L_80157D80; } // 80157D1C
  cmps(c,0,(int32_t)c->r[29],0); // 80157D20
  if (crb(c,2)) { goto L_80157D30; } // 80157D24
  c->r[0]=R32(c->r[31]+0x000002D8u); // 80157D28
  W32(c->r[29]+0x00000000u,c->r[0]); // 80157D2C
L_80157D30:;
  c->r[4]=R32(c->r[31]+0x000002FCu); // 80157D30
  c->r[5]=R32(c->r[31]+0x00000300u); // 80157D34
  cmps(c,0,(int32_t)c->r[4],0); // 80157D38
  if (!crb(c,2)) { goto L_80157D4C; } // 80157D3C
  c->r[3]=0u+0x80000000u; // 80157D40
  W32(c->r[3]+0x000000E0u,c->r[5]); // 80157D44
  goto L_80157D50; // 80157D48
L_80157D4C:;
  W32(c->r[4]+0x00000300u,c->r[5]); // 80157D4C
L_80157D50:;
  cmps(c,0,(int32_t)c->r[5],0); // 80157D50
  if (!crb(c,2)) { goto L_80157D64; } // 80157D54
  c->r[3]=0u+0x80000000u; // 80157D58
  W32(c->r[3]+0x000000DCu,c->r[4]); // 80157D5C
  goto L_80157D68; // 80157D60
L_80157D64:;
  W32(c->r[5]+0x000002FCu,c->r[4]); // 80157D64
L_80157D68:;
  c->r[0]=0u+0x00000000u; // 80157D68
  c->r[3]=c->r[30]|c->r[30]; // 80157D6C
  W16(c->r[31]+0x000002C8u,c->r[0]); // 80157D70
  c->lr=0x80157D78u; f_80154438(c); // 80157D74
  c->r[3]=0u+0x00000001u; // 80157D78
  goto L_80157D8C; // 80157D7C
L_80157D80:;
  c->r[3]=c->r[30]|c->r[30]; // 80157D80
  c->lr=0x80157D88u; f_80154438(c); // 80157D84
  c->r[3]=0u+0x00000000u; // 80157D88
L_80157D8C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80157D8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80157D90
  c->r[30]=R32(c->r[1]+0x00000018u); // 80157D94
  c->r[29]=R32(c->r[1]+0x00000014u); // 80157D98
  c->lr=c->r[0]; // 80157D9C
  c->r[1]=c->r[1]+0x00000020u; // 80157DA0
  return; // 80157DA4
}

// OSResumeThread
void f_80157DA8(Ctx* __restrict c) {
  trace_call(0x80157DA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80157DA8
  c->r[0]=c->lr; // 80157DAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80157DB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80157DB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80157DB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80157DBC
  c->r[29]=c->r[3]|c->r[3]; // 80157DC0
  c->lr=0x80157DC8u; f_80154410(c); // 80157DC4
  c->r[30]=R32(c->r[29]+0x000002CCu); // 80157DC8
  c->r[31]=c->r[3]|c->r[3]; // 80157DCC
  c->r[0]=addc(c,c->r[30],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80157DD0
  W32(c->r[29]+0x000002CCu,c->r[0]); // 80157DD4
  if (!crb(c,0)) { goto L_80157DE8; } // 80157DD8
  c->r[0]=0u+0x00000000u; // 80157DDC
  W32(c->r[29]+0x000002CCu,c->r[0]); // 80157DE0
  goto L_80158018; // 80157DE4
L_80157DE8:;
  if (!crb(c,2)) { goto L_80158018; } // 80157DE8
  c->r[0]=R16(c->r[29]+0x000002C8u); // 80157DEC
  cmps(c,0,(int32_t)c->r[0],4); // 80157DF0
  if (crb(c,2)) { goto L_80157EA4; } // 80157DF4
  if (!crb(c,0)) { goto L_80158004; } // 80157DF8
  cmps(c,0,(int32_t)c->r[0],1); // 80157DFC
  if (crb(c,2)) { goto L_80157E08; } // 80157E00
  goto L_80158004; // 80157E04
L_80157E08:;
  c->r[5]=R32(c->r[29]+0x000002D4u); // 80157E08
  c->r[4]=R32(c->r[29]+0x000002F4u); // 80157E0C
  goto L_80157E34; // 80157E10
L_80157E14:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 80157E14
  cmps(c,0,(int32_t)c->r[3],0); // 80157E18
  if (crb(c,2)) { goto L_80157E30; } // 80157E1C
  c->r[0]=R32(c->r[3]+0x000002D0u); // 80157E20
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 80157E24
  if (!crb(c,0)) { goto L_80157E30; } // 80157E28
  c->r[5]=c->r[0]|c->r[0]; // 80157E2C
L_80157E30:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 80157E30
L_80157E34:;
  cmps(c,0,(int32_t)c->r[4],0); // 80157E34
  if (!crb(c,2)) { IRQCHK(c); goto L_80157E14; } // 80157E38
  c->r[3]=0u+0x80440000u; // 80157E3C
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80157E40
  c->r[3]=c->r[3]+0xFFFFE8B0u; // 80157E44
  W32(c->r[29]+0x000002D0u,c->r[5]); // 80157E48
  c->r[3]=c->r[3]+c->r[0]; // 80157E4C
  W32(c->r[29]+0x000002DCu,c->r[3]); // 80157E50
  c->r[4]=R32(c->r[3]+0x00000004u); // 80157E54
  cmps(c,0,(int32_t)c->r[4],0); // 80157E58
  if (!crb(c,2)) { goto L_80157E68; } // 80157E5C
  W32(c->r[3]+0x00000000u,c->r[29]); // 80157E60
  goto L_80157E6C; // 80157E64
L_80157E68:;
  W32(c->r[4]+0x000002E0u,c->r[29]); // 80157E68
L_80157E6C:;
  c->r[0]=0u+0x00000000u; // 80157E6C
  W32(c->r[29]+0x000002E4u,c->r[4]); // 80157E70
  c->r[4]=R32(c->r[29]+0x000002DCu); // 80157E74
  c->r[3]=0u+0x00000001u; // 80157E78
  W32(c->r[29]+0x000002E0u,c->r[0]); // 80157E7C
  W32(c->r[4]+0x00000004u,c->r[29]); // 80157E80
  c->r[0]=R32(c->r[29]+0x000002D0u); // 80157E84
  c->r[4]=R32(c->r[13]+0xFFFFAA58u); // 80157E88
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 80157E8C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80157E90
  c->r[0]=c->r[4]|c->r[0]; // 80157E94
  W32(c->r[13]+0xFFFFAA58u,c->r[0]); // 80157E98
  W32(c->r[13]+0xFFFFAA54u,c->r[3]); // 80157E9C
  goto L_80158004; // 80157EA0
L_80157EA4:;
  c->r[4]=R32(c->r[29]+0x000002E0u); // 80157EA4
  c->r[5]=R32(c->r[29]+0x000002E4u); // 80157EA8
  cmps(c,0,(int32_t)c->r[4],0); // 80157EAC
  if (!crb(c,2)) { goto L_80157EC0; } // 80157EB0
  c->r[3]=R32(c->r[29]+0x000002DCu); // 80157EB4
  W32(c->r[3]+0x00000004u,c->r[5]); // 80157EB8
  goto L_80157EC4; // 80157EBC
L_80157EC0:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 80157EC0
L_80157EC4:;
  cmps(c,0,(int32_t)c->r[5],0); // 80157EC4
  if (!crb(c,2)) { goto L_80157ED8; } // 80157EC8
  c->r[3]=R32(c->r[29]+0x000002DCu); // 80157ECC
  W32(c->r[3]+0x00000000u,c->r[4]); // 80157ED0
  goto L_80157EDC; // 80157ED4
L_80157ED8:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 80157ED8
L_80157EDC:;
  c->r[0]=R32(c->r[29]+0x000002D4u); // 80157EDC
  c->r[4]=R32(c->r[29]+0x000002F4u); // 80157EE0
  goto L_80157F08; // 80157EE4
L_80157EE8:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 80157EE8
  cmps(c,0,(int32_t)c->r[3],0); // 80157EEC
  if (crb(c,2)) { goto L_80157F04; } // 80157EF0
  c->r[3]=R32(c->r[3]+0x000002D0u); // 80157EF4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80157EF8
  if (!crb(c,0)) { goto L_80157F04; } // 80157EFC
  c->r[0]=c->r[3]|c->r[3]; // 80157F00
L_80157F04:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 80157F04
L_80157F08:;
  cmps(c,0,(int32_t)c->r[4],0); // 80157F08
  if (!crb(c,2)) { IRQCHK(c); goto L_80157EE8; } // 80157F0C
  W32(c->r[29]+0x000002D0u,c->r[0]); // 80157F10
  c->r[4]=R32(c->r[29]+0x000002DCu); // 80157F14
  c->r[5]=R32(c->r[4]+0x00000000u); // 80157F18
  goto L_80157F24; // 80157F1C
L_80157F20:;
  c->r[5]=R32(c->r[5]+0x000002E0u); // 80157F20
L_80157F24:;
  cmps(c,0,(int32_t)c->r[5],0); // 80157F24
  if (crb(c,2)) { goto L_80157F3C; } // 80157F28
  c->r[3]=R32(c->r[5]+0x000002D0u); // 80157F2C
  c->r[0]=R32(c->r[29]+0x000002D0u); // 80157F30
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80157F34
  if (!crb(c,1)) { IRQCHK(c); goto L_80157F20; } // 80157F38
L_80157F3C:;
  cmps(c,0,(int32_t)c->r[5],0); // 80157F3C
  if (!crb(c,2)) { goto L_80157F74; } // 80157F40
  c->r[3]=R32(c->r[4]+0x00000004u); // 80157F44
  cmps(c,0,(int32_t)c->r[3],0); // 80157F48
  if (!crb(c,2)) { goto L_80157F58; } // 80157F4C
  W32(c->r[4]+0x00000000u,c->r[29]); // 80157F50
  goto L_80157F5C; // 80157F54
L_80157F58:;
  W32(c->r[3]+0x000002E0u,c->r[29]); // 80157F58
L_80157F5C:;
  c->r[0]=0u+0x00000000u; // 80157F5C
  W32(c->r[29]+0x000002E4u,c->r[3]); // 80157F60
  c->r[3]=R32(c->r[29]+0x000002DCu); // 80157F64
  W32(c->r[29]+0x000002E0u,c->r[0]); // 80157F68
  W32(c->r[3]+0x00000004u,c->r[29]); // 80157F6C
  goto L_80157F9C; // 80157F70
L_80157F74:;
  W32(c->r[29]+0x000002E0u,c->r[5]); // 80157F74
  c->r[3]=R32(c->r[5]+0x000002E4u); // 80157F78
  W32(c->r[5]+0x000002E4u,c->r[29]); // 80157F7C
  cmps(c,0,(int32_t)c->r[3],0); // 80157F80
  W32(c->r[29]+0x000002E4u,c->r[3]); // 80157F84
  if (!crb(c,2)) { goto L_80157F98; } // 80157F88
  c->r[3]=R32(c->r[29]+0x000002DCu); // 80157F8C
  W32(c->r[3]+0x00000000u,c->r[29]); // 80157F90
  goto L_80157F9C; // 80157F94
L_80157F98:;
  W32(c->r[3]+0x000002E0u,c->r[29]); // 80157F98
L_80157F9C:;
  c->r[3]=R32(c->r[29]+0x000002F0u); // 80157F9C
  cmps(c,0,(int32_t)c->r[3],0); // 80157FA0
  if (crb(c,2)) { goto L_80158004; } // 80157FA4
  c->r[3]=R32(c->r[3]+0x00000008u); // 80157FA8
L_80157FAC:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 80157FAC
  cmps(c,0,(int32_t)c->r[0],0); // 80157FB0
  if (crb(c,1)) { goto L_80158004; } // 80157FB4
  c->r[4]=R32(c->r[3]+0x000002D4u); // 80157FB8
  c->r[5]=R32(c->r[3]+0x000002F4u); // 80157FBC
  goto L_80157FE4; // 80157FC0
L_80157FC4:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 80157FC4
  cmps(c,0,(int32_t)c->r[6],0); // 80157FC8
  if (crb(c,2)) { goto L_80157FE0; } // 80157FCC
  c->r[0]=R32(c->r[6]+0x000002D0u); // 80157FD0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80157FD4
  if (!crb(c,0)) { goto L_80157FE0; } // 80157FD8
  c->r[4]=c->r[0]|c->r[0]; // 80157FDC
L_80157FE0:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 80157FE0
L_80157FE4:;
  cmps(c,0,(int32_t)c->r[5],0); // 80157FE4
  if (!crb(c,2)) { IRQCHK(c); goto L_80157FC4; } // 80157FE8
  c->r[0]=R32(c->r[3]+0x000002D0u); // 80157FEC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80157FF0
  if (crb(c,2)) { goto L_80158004; } // 80157FF4
  c->lr=0x80157FFCu; f_801572C0(c); // 80157FF8
  cmps(c,0,(int32_t)c->r[3],0); // 80157FFC
  if (!crb(c,2)) { IRQCHK(c); goto L_80157FAC; } // 80158000
L_80158004:;
  c->r[0]=R32(c->r[13]+0xFFFFAA54u); // 80158004
  cmps(c,0,(int32_t)c->r[0],0); // 80158008
  if (crb(c,2)) { goto L_80158018; } // 8015800C
  c->r[3]=0u+0x00000000u; // 80158010
  c->lr=0x80158018u; f_801574C4(c); // 80158014
L_80158018:;
  c->r[3]=c->r[31]|c->r[31]; // 80158018
  c->lr=0x80158020u; f_80154438(c); // 8015801C
  c->r[3]=c->r[30]|c->r[30]; // 80158020
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80158024
  c->r[30]=R32(c->r[1]+0x00000018u); // 80158028
  c->r[29]=R32(c->r[1]+0x00000014u); // 8015802C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80158030
  c->lr=c->r[0]; // 80158034
  c->r[1]=c->r[1]+0x00000020u; // 80158038
  return; // 8015803C
}

// OSSuspendThread
void f_80158040(Ctx* __restrict c) {
  trace_call(0x80158040u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80158040
  c->r[0]=c->lr; // 80158044
  W32(c->r[1]+0x00000024u,c->r[0]); // 80158048
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8015804C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80158050
  W32(c->r[1]+0x00000014u,c->r[29]); // 80158054
  c->r[29]=c->r[3]|c->r[3]; // 80158058
  c->lr=0x80158060u; f_80154410(c); // 8015805C
  c->r[30]=R32(c->r[29]+0x000002CCu); // 80158060
  c->r[31]=c->r[3]|c->r[3]; // 80158064
  c->r[0]=c->r[30]+0x00000001u; // 80158068
  cmps(c,0,(int32_t)c->r[30],0); // 8015806C
  W32(c->r[29]+0x000002CCu,c->r[0]); // 80158070
  if (!crb(c,2)) { goto L_801581AC; } // 80158074
  c->r[0]=R16(c->r[29]+0x000002C8u); // 80158078
  cmps(c,0,(int32_t)c->r[0],3); // 8015807C
  if (crb(c,2)) { goto L_80158198; } // 80158080
  if (!crb(c,0)) { goto L_80158098; } // 80158084
  cmps(c,0,(int32_t)c->r[0],1); // 80158088
  if (crb(c,2)) { goto L_801580B4; } // 8015808C
  if (!crb(c,0)) { goto L_801580A4; } // 80158090
  goto L_80158198; // 80158094
L_80158098:;
  cmps(c,0,(int32_t)c->r[0],5); // 80158098
  if (!crb(c,0)) { goto L_80158198; } // 8015809C
  goto L_801580C0; // 801580A0
L_801580A4:;
  c->r[0]=0u+0x00000001u; // 801580A4
  W32(c->r[13]+0xFFFFAA54u,c->r[0]); // 801580A8
  W16(c->r[29]+0x000002C8u,c->r[0]); // 801580AC
  goto L_80158198; // 801580B0
L_801580B4:;
  c->r[3]=c->r[29]|c->r[29]; // 801580B4
  c->lr=0x801580BCu; f_8015721C(c); // 801580B8
  goto L_80158198; // 801580BC
L_801580C0:;
  c->r[4]=R32(c->r[29]+0x000002E0u); // 801580C0
  c->r[5]=R32(c->r[29]+0x000002E4u); // 801580C4
  cmps(c,0,(int32_t)c->r[4],0); // 801580C8
  if (!crb(c,2)) { goto L_801580DC; } // 801580CC
  c->r[3]=R32(c->r[29]+0x000002DCu); // 801580D0
  W32(c->r[3]+0x00000004u,c->r[5]); // 801580D4
  goto L_801580E0; // 801580D8
L_801580DC:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 801580DC
L_801580E0:;
  cmps(c,0,(int32_t)c->r[5],0); // 801580E0
  if (!crb(c,2)) { goto L_801580F4; } // 801580E4
  c->r[3]=R32(c->r[29]+0x000002DCu); // 801580E8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801580EC
  goto L_801580F8; // 801580F0
L_801580F4:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 801580F4
L_801580F8:;
  c->r[0]=0u+0x00000020u; // 801580F8
  c->r[3]=R32(c->r[29]+0x000002DCu); // 801580FC
  W32(c->r[29]+0x000002D0u,c->r[0]); // 80158100
  c->r[4]=R32(c->r[3]+0x00000004u); // 80158104
  cmps(c,0,(int32_t)c->r[4],0); // 80158108
  if (!crb(c,2)) { goto L_80158118; } // 8015810C
  W32(c->r[3]+0x00000000u,c->r[29]); // 80158110
  goto L_8015811C; // 80158114
L_80158118:;
  W32(c->r[4]+0x000002E0u,c->r[29]); // 80158118
L_8015811C:;
  c->r[0]=0u+0x00000000u; // 8015811C
  W32(c->r[29]+0x000002E4u,c->r[4]); // 80158120
  c->r[3]=R32(c->r[29]+0x000002DCu); // 80158124
  W32(c->r[29]+0x000002E0u,c->r[0]); // 80158128
  W32(c->r[3]+0x00000004u,c->r[29]); // 8015812C
  c->r[3]=R32(c->r[29]+0x000002F0u); // 80158130
  cmps(c,0,(int32_t)c->r[3],0); // 80158134
  if (crb(c,2)) { goto L_80158198; } // 80158138
  c->r[3]=R32(c->r[3]+0x00000008u); // 8015813C
L_80158140:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 80158140
  cmps(c,0,(int32_t)c->r[0],0); // 80158144
  if (crb(c,1)) { goto L_80158198; } // 80158148
  c->r[4]=R32(c->r[3]+0x000002D4u); // 8015814C
  c->r[5]=R32(c->r[3]+0x000002F4u); // 80158150
  goto L_80158178; // 80158154
L_80158158:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 80158158
  cmps(c,0,(int32_t)c->r[6],0); // 8015815C
  if (crb(c,2)) { goto L_80158174; } // 80158160
  c->r[0]=R32(c->r[6]+0x000002D0u); // 80158164
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80158168
  if (!crb(c,0)) { goto L_80158174; } // 8015816C
  c->r[4]=c->r[0]|c->r[0]; // 80158170
L_80158174:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 80158174
L_80158178:;
  cmps(c,0,(int32_t)c->r[5],0); // 80158178
  if (!crb(c,2)) { IRQCHK(c); goto L_80158158; } // 8015817C
  c->r[0]=R32(c->r[3]+0x000002D0u); // 80158180
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80158184
  if (crb(c,2)) { goto L_80158198; } // 80158188
  c->lr=0x80158190u; f_801572C0(c); // 8015818C
  cmps(c,0,(int32_t)c->r[3],0); // 80158190
  if (!crb(c,2)) { IRQCHK(c); goto L_80158140; } // 80158194
L_80158198:;
  c->r[0]=R32(c->r[13]+0xFFFFAA54u); // 80158198
  cmps(c,0,(int32_t)c->r[0],0); // 8015819C
  if (crb(c,2)) { goto L_801581AC; } // 801581A0
  c->r[3]=0u+0x00000000u; // 801581A4
  c->lr=0x801581ACu; f_801574C4(c); // 801581A8
L_801581AC:;
  c->r[3]=c->r[31]|c->r[31]; // 801581AC
  c->lr=0x801581B4u; f_80154438(c); // 801581B0
  c->r[3]=c->r[30]|c->r[30]; // 801581B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801581B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801581BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801581C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801581C4
  c->lr=c->r[0]; // 801581C8
  c->r[1]=c->r[1]+0x00000020u; // 801581CC
  return; // 801581D0
}

// OSSleepThread
void f_801581D4(Ctx* __restrict c) {
  trace_call(0x801581D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801581D4
  c->r[0]=c->lr; // 801581D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801581DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801581E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801581E4
  c->r[30]=c->r[3]|c->r[3]; // 801581E8
  c->lr=0x801581F0u; f_80154410(c); // 801581EC
  c->r[4]=0u+0x80000000u; // 801581F0
  c->r[0]=0u+0x00000004u; // 801581F4
  c->r[4]=R32(c->r[4]+0x000000E4u); // 801581F8
  c->r[31]=c->r[3]|c->r[3]; // 801581FC
  W16(c->r[4]+0x000002C8u,c->r[0]); // 80158200
  W32(c->r[4]+0x000002DCu,c->r[30]); // 80158204
  c->r[5]=R32(c->r[30]+0x00000000u); // 80158208
  goto L_80158214; // 8015820C
L_80158210:;
  c->r[5]=R32(c->r[5]+0x000002E0u); // 80158210
L_80158214:;
  cmps(c,0,(int32_t)c->r[5],0); // 80158214
  if (crb(c,2)) { goto L_8015822C; } // 80158218
  c->r[3]=R32(c->r[5]+0x000002D0u); // 8015821C
  c->r[0]=R32(c->r[4]+0x000002D0u); // 80158220
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80158224
  if (!crb(c,1)) { IRQCHK(c); goto L_80158210; } // 80158228
L_8015822C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8015822C
  if (!crb(c,2)) { goto L_80158260; } // 80158230
  c->r[3]=R32(c->r[30]+0x00000004u); // 80158234
  cmps(c,0,(int32_t)c->r[3],0); // 80158238
  if (!crb(c,2)) { goto L_80158248; } // 8015823C
  W32(c->r[30]+0x00000000u,c->r[4]); // 80158240
  goto L_8015824C; // 80158244
L_80158248:;
  W32(c->r[3]+0x000002E0u,c->r[4]); // 80158248
L_8015824C:;
  W32(c->r[4]+0x000002E4u,c->r[3]); // 8015824C
  c->r[0]=0u+0x00000000u; // 80158250
  W32(c->r[4]+0x000002E0u,c->r[0]); // 80158254
  W32(c->r[30]+0x00000004u,c->r[4]); // 80158258
  goto L_80158284; // 8015825C
L_80158260:;
  W32(c->r[4]+0x000002E0u,c->r[5]); // 80158260
  c->r[3]=R32(c->r[5]+0x000002E4u); // 80158264
  W32(c->r[5]+0x000002E4u,c->r[4]); // 80158268
  cmps(c,0,(int32_t)c->r[3],0); // 8015826C
  W32(c->r[4]+0x000002E4u,c->r[3]); // 80158270
  if (!crb(c,2)) { goto L_80158280; } // 80158274
  W32(c->r[30]+0x00000000u,c->r[4]); // 80158278
  goto L_80158284; // 8015827C
L_80158280:;
  W32(c->r[3]+0x000002E0u,c->r[4]); // 80158280
L_80158284:;
  c->r[0]=0u+0x00000001u; // 80158284
  W32(c->r[13]+0xFFFFAA54u,c->r[0]); // 80158288
  c->r[0]=R32(c->r[13]+0xFFFFAA54u); // 8015828C
  cmps(c,0,(int32_t)c->r[0],0); // 80158290
  if (crb(c,2)) { goto L_801582A0; } // 80158294
  c->r[3]=0u+0x00000000u; // 80158298
  c->lr=0x801582A0u; f_801574C4(c); // 8015829C
L_801582A0:;
  c->r[3]=c->r[31]|c->r[31]; // 801582A0
  c->lr=0x801582A8u; f_80154438(c); // 801582A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801582A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801582AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801582B0
  c->lr=c->r[0]; // 801582B4
  c->r[1]=c->r[1]+0x00000010u; // 801582B8
  return; // 801582BC
}

// fn_801582C0
void f_801582C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801582C0
  c->r[0]=c->lr; // 801582C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801582C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801582CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801582D0
  c->r[30]=c->r[3]|c->r[3]; // 801582D4
  c->lr=0x801582DCu; f_80154410(c); // 801582D8
  c->r[5]=0u+0x80440000u; // 801582DC
  c->r[31]=c->r[3]|c->r[3]; // 801582E0
  c->r[5]=c->r[5]+0xFFFFE8B0u; // 801582E4
  c->r[6]=0u+0x00000000u; // 801582E8
  c->r[3]=0u+0x00000001u; // 801582EC
  goto L_80158374; // 801582F0
L_801582F4:;
  c->r[4]=R32(c->r[8]+0x000002E0u); // 801582F4
  cmps(c,0,(int32_t)c->r[4],0); // 801582F8
  if (!crb(c,2)) { goto L_80158308; } // 801582FC
  W32(c->r[30]+0x00000004u,c->r[6]); // 80158300
  goto L_8015830C; // 80158304
L_80158308:;
  W32(c->r[4]+0x000002E4u,c->r[6]); // 80158308
L_8015830C:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 8015830C
  W16(c->r[8]+0x000002C8u,c->r[3]); // 80158310
  c->r[0]=R32(c->r[8]+0x000002CCu); // 80158314
  cmps(c,0,(int32_t)c->r[0],0); // 80158318
  if (crb(c,1)) { goto L_80158374; } // 8015831C
  c->r[0]=R32(c->r[8]+0x000002D0u); // 80158320
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80158324
  c->r[4]=c->r[5]+c->r[0]; // 80158328
  W32(c->r[8]+0x000002DCu,c->r[4]); // 8015832C
  c->r[7]=R32(c->r[4]+0x00000004u); // 80158330
  cmps(c,0,(int32_t)c->r[7],0); // 80158334
  if (!crb(c,2)) { goto L_80158344; } // 80158338
  W32(c->r[4]+0x00000000u,c->r[8]); // 8015833C
  goto L_80158348; // 80158340
L_80158344:;
  W32(c->r[7]+0x000002E0u,c->r[8]); // 80158344
L_80158348:;
  W32(c->r[8]+0x000002E4u,c->r[7]); // 80158348
  W32(c->r[8]+0x000002E0u,c->r[6]); // 8015834C
  c->r[4]=R32(c->r[8]+0x000002DCu); // 80158350
  W32(c->r[4]+0x00000004u,c->r[8]); // 80158354
  c->r[0]=R32(c->r[8]+0x000002D0u); // 80158358
  c->r[4]=R32(c->r[13]+0xFFFFAA58u); // 8015835C
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 80158360
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80158364
  c->r[0]=c->r[4]|c->r[0]; // 80158368
  W32(c->r[13]+0xFFFFAA58u,c->r[0]); // 8015836C
  W32(c->r[13]+0xFFFFAA54u,c->r[3]); // 80158370
L_80158374:;
  c->r[8]=R32(c->r[30]+0x00000000u); // 80158374
  cmps(c,0,(int32_t)c->r[8],0); // 80158378
  if (!crb(c,2)) { IRQCHK(c); goto L_801582F4; } // 8015837C
  c->r[0]=R32(c->r[13]+0xFFFFAA54u); // 80158380
  cmps(c,0,(int32_t)c->r[0],0); // 80158384
  if (crb(c,2)) { goto L_80158394; } // 80158388
  c->r[3]=0u+0x00000000u; // 8015838C
  c->lr=0x80158394u; f_801574C4(c); // 80158390
L_80158394:;
  c->r[3]=c->r[31]|c->r[31]; // 80158394
  c->lr=0x8015839Cu; f_80154438(c); // 80158398
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015839C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801583A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801583A4
  c->lr=c->r[0]; // 801583A8
  c->r[1]=c->r[1]+0x00000010u; // 801583AC
  return; // 801583B0
}

// SleepAlarmHandler
void f_801583B4(Ctx* __restrict c) {
  trace_call(0x801583B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801583B4
  c->r[0]=c->lr; // 801583B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801583BC
  c->lr=0x801583C4u; f_8014EFA4(c); // 801583C0
  c->lr=0x801583C8u; f_80157DA8(c); // 801583C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801583C8
  c->lr=c->r[0]; // 801583CC
  c->r[1]=c->r[1]+0x00000010u; // 801583D0
  return; // 801583D4
}

// OSSleepTicks
void f_801583D8(Ctx* __restrict c) {
  trace_call(0x801583D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801583D8
  c->r[0]=c->lr; // 801583DC
  W32(c->r[1]+0x00000054u,c->r[0]); // 801583E0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801583E4
  W32(c->r[1]+0x00000048u,c->r[30]); // 801583E8
  W32(c->r[1]+0x00000044u,c->r[29]); // 801583EC
  c->r[29]=c->r[3]|c->r[3]; // 801583F0
  W32(c->r[1]+0x00000040u,c->r[28]); // 801583F4
  c->r[28]=c->r[4]|c->r[4]; // 801583F8
  c->lr=0x80158400u; f_80154410(c); // 801583FC
  c->r[4]=0u+0x80000000u; // 80158400
  c->r[30]=c->r[3]|c->r[3]; // 80158404
  c->r[31]=R32(c->r[4]+0x000000E4u); // 80158408
  cmps(c,0,(int32_t)c->r[31],0); // 8015840C
  if (!crb(c,2)) { goto L_8015841C; } // 80158410
  c->lr=0x80158418u; f_80154438(c); // 80158414
  goto L_8015846C; // 80158418
L_8015841C:;
  c->r[3]=c->r[1]+0x00000008u; // 8015841C
  c->lr=0x80158424u; f_8014E820(c); // 80158420
  c->r[4]=c->r[31]|c->r[31]; // 80158424
  c->r[3]=c->r[1]+0x00000008u; // 80158428
  c->lr=0x80158430u; f_8014EF08(c); // 8015842C
  c->r[4]=c->r[31]|c->r[31]; // 80158430
  c->r[3]=c->r[1]+0x00000008u; // 80158434
  c->lr=0x8015843Cu; f_8014EF9C(c); // 80158438
  c->r[7]=0u+0x80160000u; // 8015843C
  c->r[6]=c->r[28]|c->r[28]; // 80158440
  c->r[5]=c->r[29]|c->r[29]; // 80158444
  c->r[3]=c->r[1]+0x00000008u; // 80158448
  c->r[7]=c->r[7]+0xFFFF83B4u; // 8015844C
  c->lr=0x80158454u; f_8014EA80(c); // 80158450
  c->r[3]=c->r[31]|c->r[31]; // 80158454
  c->lr=0x8015845Cu; f_80158040(c); // 80158458
  c->r[3]=c->r[1]+0x00000008u; // 8015845C
  c->lr=0x80158464u; f_8014EB74(c); // 80158460
  c->r[3]=c->r[30]|c->r[30]; // 80158464
  c->lr=0x8015846Cu; f_80154438(c); // 80158468
L_8015846C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8015846C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80158470
  c->r[30]=R32(c->r[1]+0x00000048u); // 80158474
  c->r[29]=R32(c->r[1]+0x00000044u); // 80158478
  c->r[28]=R32(c->r[1]+0x00000040u); // 8015847C
  c->lr=c->r[0]; // 80158480
  c->r[1]=c->r[1]+0x00000050u; // 80158484
  return; // 80158488
}

// OSGetTime
void f_8015848C(Ctx* __restrict c) {
  trace_call(0x8015848Cu);
L_8015848C:;
  c->r[3]=mftb(c,269); // 8015848C
  c->r[4]=mftb(c,268); // 80158490
  c->r[5]=mftb(c,269); // 80158494
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 80158498
  if (!crb(c,2)) { IRQCHK(c); goto L_8015848C; } // 8015849C
  return; // 801584A0
}

// OSGetTick
void f_801584A4(Ctx* __restrict c) {
  trace_call(0x801584A4u);
  c->r[3]=mftb(c,268); // 801584A4
  return; // 801584A8
}

// __OSGetSystemTime
void f_801584AC(Ctx* __restrict c) {
  trace_call(0x801584ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801584AC
  c->r[0]=c->lr; // 801584B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801584B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801584B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801584BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801584C0
  c->lr=0x801584C8u; f_80154410(c); // 801584C4
  c->r[31]=c->r[3]|c->r[3]; // 801584C8
  c->lr=0x801584D0u; f_8015848C(c); // 801584CC
  c->r[6]=0u+0x80000000u; // 801584D0
  c->r[5]=R32(c->r[6]+0x000030DCu); // 801584D4
  c->r[0]=R32(c->r[6]+0x000030D8u); // 801584D8
  c->r[29]=addc(c,c->r[5],c->r[4],0); // 801584DC
  c->r[30]=addc(c,c->r[0],c->r[3],c->xer_ca); // 801584E0
  c->r[3]=c->r[31]|c->r[31]; // 801584E4
  c->lr=0x801584ECu; f_80154438(c); // 801584E8
  c->r[4]=c->r[29]|c->r[29]; // 801584EC
  c->r[3]=c->r[30]|c->r[30]; // 801584F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801584F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801584F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801584FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80158500
  c->lr=c->r[0]; // 80158504
  c->r[1]=c->r[1]+0x00000020u; // 80158508
  return; // 8015850C
}

// __OSTimeToSystemTime
void f_80158510(Ctx* __restrict c) {
  trace_call(0x80158510u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80158510
  c->r[0]=c->lr; // 80158514
  W32(c->r[1]+0x00000014u,c->r[0]); // 80158518
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8015851C
  c->r[31]=c->r[3]|c->r[3]; // 80158520
  W32(c->r[1]+0x00000008u,c->r[30]); // 80158524
  c->r[30]=c->r[4]|c->r[4]; // 80158528
  c->lr=0x80158530u; f_80154410(c); // 8015852C
  c->r[5]=0u+0x80000000u; // 80158530
  c->r[4]=R32(c->r[5]+0x000030DCu); // 80158534
  c->r[0]=R32(c->r[5]+0x000030D8u); // 80158538
  c->r[30]=addc(c,c->r[4],c->r[30],0); // 8015853C
  c->r[31]=addc(c,c->r[0],c->r[31],c->xer_ca); // 80158540
  c->lr=0x80158548u; f_80154438(c); // 80158544
  c->r[3]=c->r[31]|c->r[31]; // 80158548
  c->r[4]=c->r[30]|c->r[30]; // 8015854C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80158550
  c->r[30]=R32(c->r[1]+0x00000008u); // 80158554
  c->r[0]=R32(c->r[1]+0x00000014u); // 80158558
  c->lr=c->r[0]; // 8015855C
  c->r[1]=c->r[1]+0x00000010u; // 80158560
  return; // 80158564
}

// GetDates
void f_80158568(Ctx* __restrict c) {
  trace_call(0x80158568u);
  c->r[7]=0u+0x92490000u; // 80158568
  c->r[6]=0u+0xB38D0000u; // 8015856C
  c->r[8]=c->r[3]+0x00000006u; // 80158570
  c->r[5]=0u+0x51EC0000u; // 80158574
  c->r[0]=c->r[6]+0xFFFFF9B1u; // 80158578
  c->r[7]=c->r[7]+0x00002493u; // 8015857C
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[8])>>32); // 80158580
  c->r[10]=c->r[5]+0xFFFF851Fu; // 80158584
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 80158588
  c->r[5]=c->r[6]+c->r[8]; // 8015858C
  c->r[5]=sraw(c,c->r[5],2); // 80158590
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 80158594
  c->r[5]=c->r[5]+c->r[6]; // 80158598
  c->r[0]=c->r[0]+c->r[3]; // 8015859C
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)7); // 801585A0
  c->r[0]=sraw(c,c->r[0],8); // 801585A4
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801585A8
  c->r[5]=c->r[0]+c->r[5]; // 801585AC
  c->r[0]=c->r[8]-c->r[6]; // 801585B0
  c->r[11]=(uint32_t)((int32_t)c->r[5]*(int32_t)365); // 801585B4
  W32(c->r[4]+0x00000018u,c->r[0]); // 801585B8
  goto L_801585C8; // 801585BC
L_801585C0:;
  c->r[11]=c->r[11]+0xFFFFFE93u; // 801585C0
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801585C4
L_801585C8:;
  cmps(c,0,(int32_t)c->r[5],1); // 801585C8
  if (crb(c,0)) { goto L_80158608; } // 801585CC
  c->r[6]=c->r[5]+0xFFFFFFFFu; // 801585D0
  c->r[0]=c->r[5]+0x00000003u; // 801585D4
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[6])>>32); // 801585D8
  c->r[8]=sraw(c,c->r[6],7); // 801585DC
  c->r[6]=sraw(c,c->r[6],5); // 801585E0
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 801585E4
  c->r[0]=sraw(c,c->r[0],2); // 801585E8
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 801585EC
  c->r[6]=c->r[6]+c->r[7]; // 801585F0
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 801585F4
  c->r[7]=c->r[8]+c->r[9]; // 801585F8
  c->r[0]=c->r[0]-c->r[6]; // 801585FC
  c->r[0]=c->r[7]+c->r[0]; // 80158600
  goto L_8015860C; // 80158604
L_80158608:;
  c->r[0]=0u+0x00000000u; // 80158608
L_8015860C:;
  c->r[8]=c->r[11]+c->r[0]; // 8015860C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[8]); // 80158610
  if (crb(c,0)) { IRQCHK(c); goto L_801585C0; } // 80158614
  c->r[0]=rotl(c->r[5],30)&0xC0000000u; // 80158618
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 8015861C
  c->r[6]=c->r[0]-c->r[7]; // 80158620
  W32(c->r[4]+0x00000014u,c->r[5]); // 80158624
  c->r[0]=c->r[3]-c->r[8]; // 80158628
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFFu; // 8015862C
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80158630
  c->r[3]=c->r[3]+c->r[7]; cr0(c,c->r[3]); // 80158634
  c->r[7]=0u+0x00000000u; // 80158638
  if (!crb(c,2)) { goto L_80158664; } // 8015863C
  c->r[3]=0u+0x51EC0000u; // 80158640
  c->r[3]=c->r[3]+0xFFFF851Fu; // 80158644
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[5])>>32); // 80158648
  c->r[3]=sraw(c,c->r[3],5); // 8015864C
  c->r[6]=rotl(c->r[3],1)&0x00000001u; // 80158650
  c->r[3]=c->r[3]+c->r[6]; // 80158654
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 80158658
  c->r[3]=c->r[5]-c->r[3]; cr0(c,c->r[3]); // 8015865C
  if (!crb(c,2)) { goto L_80158688; } // 80158660
L_80158664:;
  c->r[3]=0u+0x51EC0000u; // 80158664
  c->r[3]=c->r[3]+0xFFFF851Fu; // 80158668
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[5])>>32); // 8015866C
  c->r[3]=sraw(c,c->r[3],7); // 80158670
  c->r[6]=rotl(c->r[3],1)&0x00000001u; // 80158674
  c->r[3]=c->r[3]+c->r[6]; // 80158678
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)400); // 8015867C
  c->r[3]=c->r[5]-c->r[3]; cr0(c,c->r[3]); // 80158680
  if (!crb(c,2)) { goto L_8015868C; } // 80158684
L_80158688:;
  c->r[7]=0u+0x00000001u; // 80158688
L_8015868C:;
  cmps(c,0,(int32_t)c->r[7],0); // 8015868C
  c->r[6]=0u+0x802D0000u; // 80158690
  c->r[6]=c->r[6]+0xFFFF8250u; // 80158694
  if (crb(c,2)) { goto L_801586A4; } // 80158698
  c->r[6]=0u+0x802D0000u; // 8015869C
  c->r[6]=c->r[6]+0xFFFF8280u; // 801586A0
L_801586A4:;
  c->r[7]=0u+0x0000000Cu; // 801586A4
  c->r[3]=0u+0x00000030u; // 801586A8
L_801586AC:;
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 801586AC
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801586B0
  c->r[5]=R32(c->r[6]+c->r[3]); // 801586B4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801586B8
  if (crb(c,0)) { IRQCHK(c); goto L_801586AC; } // 801586BC
  W32(c->r[4]+0x00000010u,c->r[7]); // 801586C0
  c->r[3]=R32(c->r[6]+c->r[3]); // 801586C4
  c->r[3]=c->r[0]-c->r[3]; // 801586C8
  c->r[0]=c->r[3]+0x00000001u; // 801586CC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801586D0
  return; // 801586D4
}

// OSTicksToCalendarTime
void f_801586D8(Ctx* __restrict c) {
  trace_call(0x801586D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801586D8
  c->r[0]=c->lr; // 801586DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801586E0
  c->r[11]=c->r[1]+0x00000020u; // 801586E4
  c->lr=0x801586ECu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801586E8
  c->r[6]=0u+0x80000000u; // 801586EC
  c->r[29]=c->r[5]|c->r[5]; // 801586F0
  c->r[0]=R32(c->r[6]+0x000000F8u); // 801586F4
  c->r[28]=c->r[3]|c->r[3]; // 801586F8
  c->r[27]=c->r[4]|c->r[4]; // 801586FC
  c->r[5]=0u+0x00000000u; // 80158700
  c->r[26]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80158704
  c->r[6]=c->r[26]|c->r[26]; // 80158708
  c->lr=0x80158710u; f_80252F10(c); // 8015870C
  c->r[7]=0u+0x00000000u; // 80158710
  c->r[0]=c->r[3]^0x80000000u; // 80158714
  c->r[6]=c->r[7]^0x80000000u; // 80158718
  c->r[30]=c->r[4]|c->r[4]; // 8015871C
  c->r[5]=addc(c,~c->r[7],c->r[4],1); // 80158720
  c->r[31]=c->r[3]|c->r[3]; // 80158724
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 80158728
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8015872C
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 80158730
  if (crb(c,2)) { goto L_80158740; } // 80158734
  c->r[30]=addc(c,c->r[4],c->r[26],0); // 80158738
  c->r[31]=addc(c,c->r[3],c->r[7],c->xer_ca); // 8015873C
L_80158740:;
  c->r[4]=0u+0x431C0000u; // 80158740
  c->r[3]=rotl(c->r[31],3)&0xFFFFFFF8u; // 80158744
  c->r[0]=c->r[4]+0xFFFFDE83u; // 80158748
  c->r[5]=0u+0x00000000u; // 8015874C
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[26])>>32); // 80158750
  c->r[4]=rotl(c->r[30],3)&0xFFFFFFF8u; // 80158754
  c->r[3]=(rotl(c->r[30],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 80158758
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 8015875C
  c->lr=0x80158764u; f_80252CF4(c); // 80158760
  c->r[6]=0u+0x000003E8u; // 80158764
  c->r[5]=0u+0x00000000u; // 80158768
  c->lr=0x80158770u; f_80252F10(c); // 8015876C
  W32(c->r[29]+0x00000024u,c->r[4]); // 80158770
  c->r[26]=0u+0x80000000u; // 80158774
  c->r[4]=0u+0x10620000u; // 80158778
  c->r[3]=c->r[31]|c->r[31]; // 8015877C
  c->r[0]=R32(c->r[26]+0x000000F8u); // 80158780
  c->r[6]=c->r[4]+0x00004DD3u; // 80158784
  c->r[4]=c->r[30]|c->r[30]; // 80158788
  c->r[5]=0u+0x00000000u; // 8015878C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80158790
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[0])>>32); // 80158794
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 80158798
  c->lr=0x801587A0u; f_80252CF4(c); // 8015879C
  c->r[6]=0u+0x000003E8u; // 801587A0
  c->r[5]=0u+0x00000000u; // 801587A4
  c->lr=0x801587ACu; f_80252F10(c); // 801587A8
  W32(c->r[29]+0x00000020u,c->r[4]); // 801587AC
  c->r[4]=addc(c,~c->r[30],c->r[27],1); // 801587B0
  c->r[3]=addc(c,~c->r[31],c->r[28],c->xer_ca); // 801587B4
  c->r[5]=0u+0x00000000u; // 801587B8
  c->r[0]=R32(c->r[26]+0x000000F8u); // 801587BC
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801587C0
  c->lr=0x801587C8u; f_80252CF4(c); // 801587C4
  c->r[27]=0u+0x00010000u; // 801587C8
  c->r[28]=c->r[4]|c->r[4]; // 801587CC
  c->r[26]=c->r[3]|c->r[3]; // 801587D0
  c->r[5]=0u+0x00000000u; // 801587D4
  c->r[6]=c->r[27]+0x00005180u; // 801587D8
  c->lr=0x801587E0u; f_80252CF4(c); // 801587DC
  c->r[3]=0u+0x000B0000u; // 801587E0
  c->r[6]=c->r[27]+0x00005180u; // 801587E4
  c->r[0]=c->r[3]+0x00002575u; // 801587E8
  c->r[5]=0u+0x00000000u; // 801587EC
  c->r[3]=c->r[26]|c->r[26]; // 801587F0
  c->r[26]=addc(c,c->r[4],c->r[0],0); // 801587F4
  c->r[4]=c->r[28]|c->r[28]; // 801587F8
  c->lr=0x80158800u; f_80252F10(c); // 801587FC
  cmps(c,0,(int32_t)c->r[4],0); // 80158800
  c->r[31]=c->r[4]|c->r[4]; // 80158804
  if (!crb(c,0)) { goto L_80158818; } // 80158808
  c->r[31]=c->r[4]+0x00010000u; // 8015880C
  c->r[26]=c->r[26]+0xFFFFFFFFu; // 80158810
  c->r[31]=c->r[31]+0x00005180u; // 80158814
L_80158818:;
  c->r[3]=c->r[26]|c->r[26]; // 80158818
  c->r[4]=c->r[29]|c->r[29]; // 8015881C
  c->lr=0x80158824u; f_80158568(c); // 80158820
  c->r[3]=0u+0x88890000u; // 80158824
  c->r[11]=c->r[1]+0x00000020u; // 80158828
  c->r[5]=c->r[3]+0xFFFF8889u; // 8015882C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[31])>>32); // 80158830
  c->r[3]=c->r[0]+c->r[31]; // 80158834
  c->r[0]=sraw(c,c->r[3],5); // 80158838
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8015883C
  c->r[8]=c->r[0]+c->r[4]; // 80158840
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[8])>>32); // 80158844
  c->r[0]=c->r[0]+c->r[8]; // 80158848
  c->r[6]=sraw(c,c->r[0],5); // 8015884C
  c->r[4]=sraw(c,c->r[0],5); // 80158850
  c->r[0]=sraw(c,c->r[3],5); // 80158854
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 80158858
  c->r[5]=rotl(c->r[4],1)&0x00000001u; // 8015885C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80158860
  c->r[6]=c->r[6]+c->r[7]; // 80158864
  c->r[0]=c->r[0]+c->r[3]; // 80158868
  c->r[4]=c->r[4]+c->r[5]; // 8015886C
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)60); // 80158870
  W32(c->r[29]+0x00000008u,c->r[6]); // 80158874
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 80158878
  c->r[3]=c->r[8]-c->r[3]; // 8015887C
  W32(c->r[29]+0x00000004u,c->r[3]); // 80158880
  c->r[0]=c->r[31]-c->r[0]; // 80158884
  W32(c->r[29]+0x00000000u,c->r[0]); // 80158888
  c->lr=0x80158890u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8015888C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80158890
  c->lr=c->r[0]; // 80158894
  c->r[1]=c->r[1]+0x00000020u; // 80158898
  return; // 8015889C
}

// OSCalendarTimeToTicks
void f_801588A0(Ctx* __restrict c) {
  trace_call(0x801588A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801588A0
  c->r[0]=c->lr; // 801588A4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801588A8
  c->r[11]=c->r[1]+0x00000040u; // 801588AC
  c->lr=0x801588B4u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801588B0
  c->r[4]=0u+0x2AAB0000u; // 801588B4
  c->r[5]=R32(c->r[3]+0x00000010u); // 801588B8
  c->r[0]=c->r[4]+0xFFFFAAABu; // 801588BC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 801588C0
  c->r[0]=sraw(c,c->r[0],1); // 801588C4
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801588C8
  c->r[6]=c->r[0]+c->r[4]; // 801588CC
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 801588D0
  c->r[4]=c->r[5]-c->r[0]; cr0(c,c->r[4]); // 801588D4
  if (!crb(c,0)) { goto L_801588E4; } // 801588D8
  c->r[4]=c->r[4]+0x0000000Cu; // 801588DC
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 801588E0
L_801588E4:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 801588E4
  c->r[9]=c->r[0]+c->r[6]; // 801588E8
  cmps(c,0,(int32_t)c->r[9],1); // 801588EC
  if (!crb(c,0)) { goto L_801588FC; } // 801588F0
  c->r[7]=0u+0x00000000u; // 801588F4
  goto L_80158938; // 801588F8
L_801588FC:;
  c->r[5]=0u+0x51EC0000u; // 801588FC
  c->r[6]=c->r[9]+0xFFFFFFFFu; // 80158900
  c->r[5]=c->r[5]+0xFFFF851Fu; // 80158904
  c->r[0]=c->r[9]+0x00000003u; // 80158908
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[6])>>32); // 8015890C
  c->r[7]=sraw(c,c->r[5],7); // 80158910
  c->r[5]=sraw(c,c->r[5],5); // 80158914
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 80158918
  c->r[0]=sraw(c,c->r[0],2); // 8015891C
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 80158920
  c->r[5]=c->r[5]+c->r[6]; // 80158924
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80158928
  c->r[6]=c->r[7]+c->r[8]; // 8015892C
  c->r[0]=c->r[0]-c->r[5]; // 80158930
  c->r[7]=c->r[6]+c->r[0]; // 80158934
L_80158938:;
  c->r[0]=rotl(c->r[9],30)&0xC0000000u; // 80158938
  c->r[5]=rotl(c->r[9],1)&0x00000001u; // 8015893C
  c->r[0]=c->r[0]-c->r[5]; // 80158940
  c->r[6]=0u+0x00000000u; // 80158944
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFFu; // 80158948
  c->r[0]=c->r[0]+c->r[5]; cr0(c,c->r[0]); // 8015894C
  if (!crb(c,2)) { goto L_80158978; } // 80158950
  c->r[5]=0u+0x51EC0000u; // 80158954
  c->r[0]=c->r[5]+0xFFFF851Fu; // 80158958
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[9])>>32); // 8015895C
  c->r[0]=sraw(c,c->r[0],5); // 80158960
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 80158964
  c->r[0]=c->r[0]+c->r[5]; // 80158968
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8015896C
  c->r[0]=c->r[9]-c->r[0]; cr0(c,c->r[0]); // 80158970
  if (!crb(c,2)) { goto L_8015899C; } // 80158974
L_80158978:;
  c->r[5]=0u+0x51EC0000u; // 80158978
  c->r[0]=c->r[5]+0xFFFF851Fu; // 8015897C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[9])>>32); // 80158980
  c->r[0]=sraw(c,c->r[0],7); // 80158984
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 80158988
  c->r[0]=c->r[0]+c->r[5]; // 8015898C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)400); // 80158990
  c->r[0]=c->r[9]-c->r[0]; cr0(c,c->r[0]); // 80158994
  if (!crb(c,2)) { goto L_801589A0; } // 80158998
L_8015899C:;
  c->r[6]=0u+0x00000001u; // 8015899C
L_801589A0:;
  cmps(c,0,(int32_t)c->r[6],0); // 801589A0
  c->r[22]=0u+0x802D0000u; // 801589A4
  c->r[22]=c->r[22]+0xFFFF8250u; // 801589A8
  if (crb(c,2)) { goto L_801589B8; } // 801589AC
  c->r[22]=0u+0x802D0000u; // 801589B0
  c->r[22]=c->r[22]+0xFFFF8280u; // 801589B4
L_801589B8:;
  c->r[5]=0u+0x80000000u; // 801589B8
  c->r[6]=R32(c->r[3]+0x00000024u); // 801589BC
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801589C0
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801589C4
  c->r[10]=0u+0x431C0000u; // 801589C8
  c->r[5]=0u+0x00000000u; // 801589CC
  c->r[8]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801589D0
  c->r[20]=sraw(c,c->r[6],31); // 801589D4
  c->r[0]=c->r[10]+0xFFFFDE83u; // 801589D8
  c->r[23]=R32(c->r[3]+0x0000000Cu); // 801589DC
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[8])>>32); // 801589E0
  c->r[22]=R32(c->r[22]+c->r[12]); // 801589E4
  c->r[12]=c->r[23]+c->r[7]; // 801589E8
  c->r[27]=R32(c->r[3]+0x00000004u); // 801589EC
  c->r[10]=0u+0x00010000u; // 801589F0
  c->r[29]=R32(c->r[3]+0x00000008u); // 801589F4
  c->r[4]=rotl(c->r[0],17)&0x0001FFFFu; // 801589F8
  c->r[7]=0u+0x10620000u; // 801589FC
  c->r[21]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[6])>>32); // 80158A00
  c->r[11]=0u+0x01E10000u; // 80158A04
  c->r[7]=c->r[7]+0x00004DD3u; // 80158A08
  c->r[26]=R32(c->r[3]+0x00000000u); // 80158A0C
  c->r[0]=c->r[11]+0x00003380u; // 80158A10
  c->r[11]=R32(c->r[3]+0x00000020u); // 80158A14
  c->r[24]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 80158A18
  c->r[23]=c->r[10]+0x00005180u; // 80158A1C
  c->r[3]=c->r[22]+c->r[12]; // 80158A20
  c->r[28]=0u+0x0000003Cu; // 80158A24
  c->r[22]=c->r[3]+0xFFFFFFFFu; // 80158A28
  c->r[3]=0u+0x4E1E0000u; // 80158A2C
  c->r[25]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[6]); // 80158A30
  c->r[10]=c->r[21]+c->r[24]; // 80158A34
  c->r[31]=c->r[3]+0x00004080u; // 80158A38
  c->r[30]=0u+0x00000E10u; // 80158A3C
  c->r[12]=0u+0xFFFFFFF1u; // 80158A40
  c->r[6]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[20]); // 80158A44
  c->r[4]=rotl(c->r[25],29)&0xFFFFFFFFu; // 80158A48
  c->r[10]=c->r[10]+c->r[6]; // 80158A4C
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[8])>>32); // 80158A50
  c->r[3]=c->r[10]|c->r[10]; // 80158A54
  c->r[4]=(rotl(c->r[10],29)&0xE0000000u)|(c->r[4]&~0xE0000000u); // 80158A58
  c->r[3]=(rotl(c->r[25],0)&0x00000007u)|(c->r[3]&~0x00000007u); // 80158A5C
  c->r[3]=sraw(c,c->r[3],3); // 80158A60
  c->r[10]=rotl(c->r[6],26)&0x03FFFFFFu; // 80158A64
  c->r[4]=addc(c,c->r[4],0,c->xer_ca); // 80158A68
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 80158A6C
  c->r[24]=sraw(c,c->r[9],31); // 80158A70
  c->r[7]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 80158A74
  c->r[25]=sraw(c,c->r[22],31); // 80158A78
  c->r[21]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[9]); // 80158A7C
  c->r[20]=c->r[7]+c->r[21]; // 80158A80
  c->r[21]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[24]); // 80158A84
  c->r[6]=(uint32_t)(((uint64_t)c->r[23]*(uint64_t)c->r[22])>>32); // 80158A88
  c->r[20]=c->r[20]+c->r[21]; // 80158A8C
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[22]); // 80158A90
  c->r[24]=c->r[6]+c->r[7]; // 80158A94
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[9]); // 80158A98
  c->r[6]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[25]); // 80158A9C
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[22]); // 80158AA0
  c->r[24]=c->r[24]+c->r[6]; // 80158AA4
  c->r[25]=addc(c,c->r[7],c->r[0],0); // 80158AA8
  c->r[7]=(uint32_t)(((int64_t)(int32_t)c->r[27]*(int64_t)(int32_t)c->r[28])>>32); // 80158AAC
  c->r[28]=addc(c,c->r[20],c->r[24],c->xer_ca); // 80158AB0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[29]*(int64_t)(int32_t)c->r[30])>>32); // 80158AB4
  c->r[9]=(uint32_t)((int32_t)c->r[27]*(int32_t)60); // 80158AB8
  c->r[6]=(uint32_t)((int32_t)c->r[29]*(int32_t)3600); // 80158ABC
  c->r[6]=addc(c,c->r[9],c->r[6],0); // 80158AC0
  c->r[7]=addc(c,c->r[7],c->r[0],c->xer_ca); // 80158AC4
  c->r[0]=sraw(c,c->r[26],31); // 80158AC8
  c->r[6]=addc(c,c->r[6],c->r[26],0); // 80158ACC
  c->r[0]=addc(c,c->r[7],c->r[0],c->xer_ca); // 80158AD0
  c->r[6]=addc(c,c->r[6],c->r[31],0); // 80158AD4
  c->r[0]=addc(c,c->r[0],c->r[12],c->xer_ca); // 80158AD8
  c->r[12]=addc(c,c->r[25],c->r[6],0); // 80158ADC
  c->r[6]=addc(c,c->r[28],c->r[0],c->xer_ca); // 80158AE0
  c->r[9]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[8]); // 80158AE4
  c->r[0]=sraw(c,c->r[11],31); // 80158AE8
  c->r[7]=(uint32_t)(((uint64_t)c->r[12]*(uint64_t)c->r[8])>>32); // 80158AEC
  c->r[6]=(uint32_t)(((uint64_t)c->r[10]*(uint64_t)c->r[11])>>32); // 80158AF0
  c->r[9]=c->r[7]+c->r[9]; // 80158AF4
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[11]); // 80158AF8
  c->r[5]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[5]); // 80158AFC
  c->r[6]=c->r[6]+c->r[7]; // 80158B00
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[0]); // 80158B04
  c->r[7]=c->r[9]+c->r[5]; // 80158B08
  c->r[6]=c->r[6]+c->r[0]; // 80158B0C
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[11]); // 80158B10
  c->r[11]=c->r[1]+0x00000040u; // 80158B14
  c->r[5]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[8]); // 80158B18
  c->r[5]=addc(c,c->r[5],c->r[0],0); // 80158B1C
  c->r[0]=addc(c,c->r[7],c->r[6],c->xer_ca); // 80158B20
  c->r[4]=addc(c,c->r[4],c->r[5],0); // 80158B24
  c->r[3]=addc(c,c->r[3],c->r[0],c->xer_ca); // 80158B28
  c->lr=0x80158B30u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80158B2C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80158B30
  c->lr=c->r[0]; // 80158B34
  c->r[1]=c->r[1]+0x00000040u; // 80158B38
  return; // 80158B3C
}

// OSUTF8to32
void f_80158B40(Ctx* __restrict c) {
  trace_call(0x80158B40u);
  c->r[6]=R8(c->r[3]+0x00000000u); // 80158B40
  cmps(c,0,(int32_t)c->r[6],0); // 80158B44
  if (crb(c,2)) { goto L_80158B50; } // 80158B48
  c->r[3]=c->r[3]+0x00000001u; // 80158B4C
L_80158B50:;
  c->r[0]=rotl(c->r[6],0)&0x00000080u; cr0(c,c->r[0]); // 80158B50
  if (!crb(c,2)) { goto L_80158B60; } // 80158B54
  c->r[7]=0u+0x00000000u; // 80158B58
  goto L_80158BB0; // 80158B5C
L_80158B60:;
  c->r[0]=rotl(c->r[6],0)&0x000000E0u; // 80158B60
  cmpu(c,0,c->r[0],0x000000C0u); // 80158B64
  if (!crb(c,2)) { goto L_80158B78; } // 80158B68
  c->r[6]=rotl(c->r[6],0)&0x0000001Fu; // 80158B6C
  c->r[7]=0u+0x00000001u; // 80158B70
  goto L_80158BB0; // 80158B74
L_80158B78:;
  c->r[0]=rotl(c->r[6],0)&0x000000F0u; // 80158B78
  cmpu(c,0,c->r[0],0x000000E0u); // 80158B7C
  if (!crb(c,2)) { goto L_80158B90; } // 80158B80
  c->r[6]=rotl(c->r[6],0)&0x0000000Fu; // 80158B84
  c->r[7]=0u+0x00000002u; // 80158B88
  goto L_80158BB0; // 80158B8C
L_80158B90:;
  c->r[0]=rotl(c->r[6],0)&0x000000F8u; // 80158B90
  cmpu(c,0,c->r[0],0x000000F0u); // 80158B94
  if (!crb(c,2)) { goto L_80158BA8; } // 80158B98
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 80158B9C
  c->r[7]=0u+0x00000003u; // 80158BA0
  goto L_80158BB0; // 80158BA4
L_80158BA8:;
  c->r[3]=0u+0x00000000u; // 80158BA8
  return; // 80158BAC
L_80158BB0:;
  c->ctr=c->r[7]; // 80158BB0
  cmpu(c,0,c->r[7],0x00000000u); // 80158BB4
  if (!crb(c,1)) { goto L_80158BE8; } // 80158BB8
L_80158BBC:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 80158BBC
  c->r[6]=rotl(c->r[6],6)&0xFFFFFFC0u; // 80158BC0
  c->r[3]=c->r[3]+0x00000001u; // 80158BC4
  c->r[0]=rotl(c->r[5],0)&0x000000C0u; // 80158BC8
  cmpu(c,0,c->r[0],0x00000080u); // 80158BCC
  if (crb(c,2)) { goto L_80158BDC; } // 80158BD0
  c->r[3]=0u+0x00000000u; // 80158BD4
  return; // 80158BD8
L_80158BDC:;
  c->r[0]=rotl(c->r[5],0)&0x0000003Fu; // 80158BDC
  c->r[6]=c->r[6]|c->r[0]; // 80158BE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80158BBC; } // 80158BE4
L_80158BE8:;
  cmpu(c,0,c->r[6],0x0000007Fu); // 80158BE8
  if (crb(c,1)) { goto L_80158C00; } // 80158BEC
  cmps(c,0,(int32_t)c->r[7],0); // 80158BF0
  if (crb(c,2)) { goto L_80158C30; } // 80158BF4
  c->r[3]=0u+0x00000000u; // 80158BF8
  return; // 80158BFC
L_80158C00:;
  cmpu(c,0,c->r[6],0x000007FFu); // 80158C00
  if (crb(c,1)) { goto L_80158C18; } // 80158C04
  cmpu(c,0,c->r[7],0x00000001u); // 80158C08
  if (crb(c,2)) { goto L_80158C30; } // 80158C0C
  c->r[3]=0u+0x00000000u; // 80158C10
  return; // 80158C14
L_80158C18:;
  cmpu(c,0,c->r[6],0x0000FFFFu); // 80158C18
  if (crb(c,1)) { goto L_80158C30; } // 80158C1C
  cmpu(c,0,c->r[7],0x00000002u); // 80158C20
  if (crb(c,2)) { goto L_80158C30; } // 80158C24
  c->r[3]=0u+0x00000000u; // 80158C28
  return; // 80158C2C
L_80158C30:;
  cmpu(c,0,c->r[6],0x0000D800u); // 80158C30
  if (crb(c,0)) { goto L_80158C48; } // 80158C34
  cmpu(c,0,c->r[6],0x0000DFFFu); // 80158C38
  if (crb(c,1)) { goto L_80158C48; } // 80158C3C
  c->r[3]=0u+0x00000000u; // 80158C40
  return; // 80158C44
L_80158C48:;
  W32(c->r[4]+0x00000000u,c->r[6]); // 80158C48
  return; // 80158C4C
}

// OSUTF16to32
void f_80158C50(Ctx* __restrict c) {
  trace_call(0x80158C50u);
  c->r[5]=R16(c->r[3]+0x00000000u); // 80158C50
  cmps(c,0,(int32_t)c->r[5],0); // 80158C54
  if (crb(c,2)) { goto L_80158C60; } // 80158C58
  c->r[3]=c->r[3]+0x00000002u; // 80158C5C
L_80158C60:;
  cmpu(c,0,c->r[5],0x0000D800u); // 80158C60
  if (crb(c,0)) { goto L_80158C70; } // 80158C64
  cmpu(c,0,c->r[5],0x0000DFFFu); // 80158C68
  if (!crb(c,1)) { goto L_80158C78; } // 80158C6C
L_80158C70:;
  c->r[6]=c->r[5]|c->r[5]; // 80158C70
  goto L_80158CB8; // 80158C74
L_80158C78:;
  cmpu(c,0,c->r[5],0x0000DBFFu); // 80158C78
  if (crb(c,1)) { goto L_80158CB0; } // 80158C7C
  c->r[0]=R16(c->r[3]+0x00000000u); // 80158C80
  c->r[3]=c->r[3]+0x00000002u; // 80158C84
  cmpu(c,0,c->r[0],0x0000DC00u); // 80158C88
  if (crb(c,0)) { goto L_80158CA8; } // 80158C8C
  cmpu(c,0,c->r[0],0x0000DFFFu); // 80158C90
  if (crb(c,1)) { goto L_80158CA8; } // 80158C94
  c->r[6]=rotl(c->r[0],0)&0x000003FFu; // 80158C98
  c->r[6]=(rotl(c->r[5],10)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 80158C9C
  c->r[6]=c->r[6]+0x00010000u; // 80158CA0
  goto L_80158CB8; // 80158CA4
L_80158CA8:;
  c->r[3]=0u+0x00000000u; // 80158CA8
  return; // 80158CAC
L_80158CB0:;
  c->r[3]=0u+0x00000000u; // 80158CB0
  return; // 80158CB4
L_80158CB8:;
  W32(c->r[4]+0x00000000u,c->r[6]); // 80158CB8
  return; // 80158CBC
}

// OSUTF32toANSI
void f_80158CC0(Ctx* __restrict c) {
  trace_call(0x80158CC0u);
  cmpu(c,0,c->r[3],0x000000FFu); // 80158CC0
  if (!crb(c,1)) { goto L_80158CD0; } // 80158CC4
  c->r[3]=0u+0x00000000u; // 80158CC8
  return; // 80158CCC
L_80158CD0:;
  cmpu(c,0,c->r[3],0x00000080u); // 80158CD0
  if (crb(c,0)) { goto L_80158CE0; } // 80158CD4
  cmpu(c,0,c->r[3],0x0000009Fu); // 80158CD8
  if (!crb(c,1)) { goto L_80158CE8; } // 80158CDC
L_80158CE0:;
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80158CE0
  return; // 80158CE4
L_80158CE8:;
  cmpu(c,0,c->r[3],0x00000152u); // 80158CE8
  if (crb(c,0)) { goto L_80158D30; } // 80158CEC
  cmpu(c,0,c->r[3],0x00002122u); // 80158CF0
  if (crb(c,1)) { goto L_80158D30; } // 80158CF4
  c->r[4]=0u+0x802D0000u; // 80158CF8
  c->r[0]=0u+0x00000020u; // 80158CFC
  c->r[4]=c->r[4]+0xFFFF82B0u; // 80158D00
  c->r[5]=0u+0x00000000u; // 80158D04
  c->ctr=c->r[0]; // 80158D08
L_80158D0C:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 80158D0C
  cmpu(c,0,c->r[3],c->r[0]); // 80158D10
  if (!crb(c,2)) { goto L_80158D24; } // 80158D14
  c->r[0]=c->r[5]+0x00000080u; // 80158D18
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 80158D1C
  return; // 80158D20
L_80158D24:;
  c->r[4]=c->r[4]+0x00000002u; // 80158D24
  c->r[5]=c->r[5]+0x00000001u; // 80158D28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80158D0C; } // 80158D2C
L_80158D30:;
  c->r[3]=0u+0x00000000u; // 80158D30
  return; // 80158D34
}

// OSUTF32toSJIS
void f_80158D38(Ctx* __restrict c) {
  trace_call(0x80158D38u);
  c->r[0]=0u+0x00010000u; // 80158D38
  cmpu(c,0,c->r[3],c->r[0]); // 80158D3C
  if (crb(c,0)) { goto L_80158D4C; } // 80158D40
  c->r[3]=0u+0x00000000u; // 80158D44
  return; // 80158D48
L_80158D4C:;
  c->r[4]=0u+0x802D0000u; // 80158D4C
  c->r[0]=rotl(c->r[3],26)&0x000003FCu; // 80158D50
  c->r[4]=c->r[4]+0x00003CF0u; // 80158D54
  c->r[4]=R32(c->r[4]+c->r[0]); // 80158D58
  cmps(c,0,(int32_t)c->r[4],0); // 80158D5C
  if (crb(c,2)) { goto L_80158D70; } // 80158D60
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 80158D64
  c->r[3]=R16(c->r[4]+c->r[0]); // 80158D68
  return; // 80158D6C
L_80158D70:;
  c->r[3]=0u+0x00000000u; // 80158D70
  return; // 80158D74
}

// __OSGetIPCBufferHi
void f_80158D78(Ctx* __restrict c) {
  trace_call(0x80158D78u);
  c->r[3]=R32(c->r[13]+0xFFFFAA60u); // 80158D78
  return; // 80158D7C
}

// __OSGetIPCBufferLo
void f_80158D80(Ctx* __restrict c) {
  trace_call(0x80158D80u);
  c->r[3]=R32(c->r[13]+0xFFFF8FF0u); // 80158D80
  return; // 80158D84
}

// __OSInitIPCBuffer
void f_80158D88(Ctx* __restrict c) {
  trace_call(0x80158D88u);
  c->r[3]=0u+0x80000000u; // 80158D88
  c->r[0]=R32(c->r[3]+0x00003130u); // 80158D8C
  W32(c->r[13]+0xFFFF8FF0u,c->r[0]); // 80158D90
  c->r[0]=R32(c->r[3]+0x00003134u); // 80158D94
  W32(c->r[13]+0xFFFFAA60u,c->r[0]); // 80158D98
  return; // 80158D9C
}

// OSSetResetCallback
void f_80158DA0(Ctx* __restrict c) {
  trace_call(0x80158DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80158DA0
  c->r[0]=c->lr; // 80158DA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80158DA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80158DAC
  c->r[31]=c->r[3]|c->r[3]; // 80158DB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80158DB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80158DB8
  c->lr=0x80158DC0u; f_80154410(c); // 80158DBC
  cmps(c,0,(int32_t)c->r[31],0); // 80158DC0
  c->r[29]=R32(c->r[13]+0xFFFFAA84u); // 80158DC4
  c->r[30]=c->r[3]|c->r[3]; // 80158DC8
  if (crb(c,2)) { goto L_80158DD8; } // 80158DCC
  W32(c->r[13]+0xFFFFAA84u,c->r[31]); // 80158DD0
  goto L_80158DE4; // 80158DD4
L_80158DD8:;
  c->r[3]=0u+0x80160000u; // 80158DD8
  c->r[3]=c->r[3]+0xFFFF9338u; // 80158DDC
  W32(c->r[13]+0xFFFFAA84u,c->r[3]); // 80158DE0
L_80158DE4:;
  c->r[0]=R32(c->r[13]+0xFFFFAA78u); // 80158DE4
  cmps(c,0,(int32_t)c->r[0],0); // 80158DE8
  if (!crb(c,2)) { goto L_80158E4C; } // 80158DEC
  c->lr=0x80158DF4u; f_80154410(c); // 80158DF0
  c->r[31]=c->r[3]|c->r[3]; // 80158DF4
  c->r[5]=0u+0x80440000u; // 80158DF8
  c->r[7]=0u+0x80440000u; // 80158DFC
  c->r[9]=0u+0x80160000u; // 80158E00
  c->r[3]=R32(c->r[13]+0xFFFFAA74u); // 80158E04
  c->r[5]=c->r[5]+0xFFFFEFA0u; // 80158E08
  c->r[7]=c->r[7]+0xFFFFEFC0u; // 80158E0C
  c->r[9]=c->r[9]+0xFFFF9340u; // 80158E10
  c->r[4]=0u+0x00001000u; // 80158E14
  c->r[6]=0u+0x00000020u; // 80158E18
  c->r[8]=0u+0x00000020u; // 80158E1C
  c->r[10]=0u+0x00000000u; // 80158E20
  c->lr=0x80158E28u; f_80186AE4(c); // 80158E24
  cmps(c,0,(int32_t)c->r[3],0); // 80158E28
  if (!crb(c,2)) { goto L_80158E3C; } // 80158E2C
  c->r[0]=0u+0x00000001u; // 80158E30
  W32(c->r[13]+0xFFFFAA78u,c->r[0]); // 80158E34
  goto L_80158E44; // 80158E38
L_80158E3C:;
  c->r[0]=0u+0x00000000u; // 80158E3C
  W32(c->r[13]+0xFFFFAA78u,c->r[0]); // 80158E40
L_80158E44:;
  c->r[3]=c->r[31]|c->r[31]; // 80158E44
  c->lr=0x80158E4Cu; f_80154438(c); // 80158E48
L_80158E4C:;
  c->r[3]=c->r[30]|c->r[30]; // 80158E4C
  c->lr=0x80158E54u; f_80154438(c); // 80158E50
  c->r[3]=0u+0x80160000u; // 80158E54
  c->r[3]=c->r[3]+0xFFFF9338u; // 80158E58
  cmpu(c,0,c->r[29],c->r[3]); // 80158E5C
  if (!crb(c,2)) { goto L_80158E6C; } // 80158E60
  c->r[3]=0u+0x00000000u; // 80158E64
  goto L_80158E70; // 80158E68
L_80158E6C:;
  c->r[3]=c->r[29]|c->r[29]; // 80158E6C
L_80158E70:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80158E70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80158E74
  c->r[30]=R32(c->r[1]+0x00000018u); // 80158E78
  c->r[29]=R32(c->r[1]+0x00000014u); // 80158E7C
  c->lr=c->r[0]; // 80158E80
  c->r[1]=c->r[1]+0x00000020u; // 80158E84
  return; // 80158E88
}

// OSSetPowerCallback
void f_80158E8C(Ctx* __restrict c) {
  trace_call(0x80158E8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80158E8C
  c->r[0]=c->lr; // 80158E90
  W32(c->r[1]+0x00000024u,c->r[0]); // 80158E94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80158E98
  c->r[31]=c->r[3]|c->r[3]; // 80158E9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80158EA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80158EA4
  c->lr=0x80158EACu; f_80154410(c); // 80158EA8
  cmps(c,0,(int32_t)c->r[31],0); // 80158EAC
  c->r[29]=R32(c->r[13]+0xFFFFAA80u); // 80158EB0
  c->r[30]=c->r[3]|c->r[3]; // 80158EB4
  if (crb(c,2)) { goto L_80158EC4; } // 80158EB8
  W32(c->r[13]+0xFFFFAA80u,c->r[31]); // 80158EBC
  goto L_80158ED0; // 80158EC0
L_80158EC4:;
  c->r[3]=0u+0x80160000u; // 80158EC4
  c->r[3]=c->r[3]+0xFFFF933Cu; // 80158EC8
  W32(c->r[13]+0xFFFFAA80u,c->r[3]); // 80158ECC
L_80158ED0:;
  c->r[0]=R32(c->r[13]+0xFFFFAA78u); // 80158ED0
  cmps(c,0,(int32_t)c->r[0],0); // 80158ED4
  if (!crb(c,2)) { goto L_80158F38; } // 80158ED8
  c->lr=0x80158EE0u; f_80154410(c); // 80158EDC
  c->r[31]=c->r[3]|c->r[3]; // 80158EE0
  c->r[5]=0u+0x80440000u; // 80158EE4
  c->r[7]=0u+0x80440000u; // 80158EE8
  c->r[9]=0u+0x80160000u; // 80158EEC
  c->r[3]=R32(c->r[13]+0xFFFFAA74u); // 80158EF0
  c->r[5]=c->r[5]+0xFFFFEFA0u; // 80158EF4
  c->r[7]=c->r[7]+0xFFFFEFC0u; // 80158EF8
  c->r[9]=c->r[9]+0xFFFF9340u; // 80158EFC
  c->r[4]=0u+0x00001000u; // 80158F00
  c->r[6]=0u+0x00000020u; // 80158F04
  c->r[8]=0u+0x00000020u; // 80158F08
  c->r[10]=0u+0x00000000u; // 80158F0C
  c->lr=0x80158F14u; f_80186AE4(c); // 80158F10
  cmps(c,0,(int32_t)c->r[3],0); // 80158F14
  if (!crb(c,2)) { goto L_80158F28; } // 80158F18
  c->r[0]=0u+0x00000001u; // 80158F1C
  W32(c->r[13]+0xFFFFAA78u,c->r[0]); // 80158F20
  goto L_80158F30; // 80158F24
L_80158F28:;
  c->r[0]=0u+0x00000000u; // 80158F28
  W32(c->r[13]+0xFFFFAA78u,c->r[0]); // 80158F2C
L_80158F30:;
  c->r[3]=c->r[31]|c->r[31]; // 80158F30
  c->lr=0x80158F38u; f_80154438(c); // 80158F34
L_80158F38:;
  c->r[3]=c->r[30]|c->r[30]; // 80158F38
  c->lr=0x80158F40u; f_80154438(c); // 80158F3C
  c->r[3]=0u+0x80160000u; // 80158F40
  c->r[3]=c->r[3]+0xFFFF933Cu; // 80158F44
  cmpu(c,0,c->r[29],c->r[3]); // 80158F48
  if (!crb(c,2)) { goto L_80158F58; } // 80158F4C
  c->r[3]=0u+0x00000000u; // 80158F50
  goto L_80158F5C; // 80158F54
L_80158F58:;
  c->r[3]=c->r[29]|c->r[29]; // 80158F58
L_80158F5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80158F5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80158F60
  c->r[30]=R32(c->r[1]+0x00000018u); // 80158F64
  c->r[29]=R32(c->r[1]+0x00000014u); // 80158F68
  c->lr=c->r[0]; // 80158F6C
  c->r[1]=c->r[1]+0x00000020u; // 80158F70
  return; // 80158F74
}

// __OSInitSTM
void f_80158F78(Ctx* __restrict c) {
  trace_call(0x80158F78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80158F78
  c->r[0]=c->lr; // 80158F7C
  c->r[4]=0u+0x80160000u; // 80158F80
  c->r[3]=0u+0x80160000u; // 80158F84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80158F88
  c->r[4]=c->r[4]+0xFFFF933Cu; // 80158F8C
  c->r[3]=c->r[3]+0xFFFF9338u; // 80158F90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80158F94
  c->r[31]=0u+0x00000000u; // 80158F98
  W32(c->r[1]+0x00000008u,c->r[30]); // 80158F9C
  c->r[0]=R32(c->r[13]+0xFFFFAA6Cu); // 80158FA0
  W32(c->r[13]+0xFFFFAA80u,c->r[4]); // 80158FA4
  cmps(c,0,(int32_t)c->r[0],0); // 80158FA8
  W32(c->r[13]+0xFFFFAA84u,c->r[3]); // 80158FAC
  W32(c->r[13]+0xFFFFAA68u,c->r[31]); // 80158FB0
  if (crb(c,2)) { goto L_80158FC0; } // 80158FB4
  c->r[3]=0u+0x00000001u; // 80158FB8
  goto L_80159078; // 80158FBC
L_80158FC0:;
  c->r[3]=0u+0x802D0000u; // 80158FC0
  W32(c->r[13]+0xFFFFAA7Cu,c->r[31]); // 80158FC4
  c->r[4]=0u+0x00000000u; // 80158FC8
  c->r[3]=c->r[3]+0x000040F0u; // 80158FCC
  c->lr=0x80158FD4u; f_80186284(c); // 80158FD0
  cmps(c,0,(int32_t)c->r[3],0); // 80158FD4
  W32(c->r[13]+0xFFFFAA70u,c->r[3]); // 80158FD8
  if (!crb(c,0)) { goto L_80158FEC; } // 80158FDC
  W32(c->r[13]+0xFFFFAA6Cu,c->r[31]); // 80158FE0
  c->r[3]=0u+0x00000000u; // 80158FE4
  goto L_80159078; // 80158FE8
L_80158FEC:;
  c->r[3]=0u+0x802D0000u; // 80158FEC
  c->r[4]=0u+0x00000000u; // 80158FF0
  c->r[3]=c->r[3]+0x00004104u; // 80158FF4
  c->lr=0x80158FFCu; f_80186284(c); // 80158FF8
  cmps(c,0,(int32_t)c->r[3],0); // 80158FFC
  W32(c->r[13]+0xFFFFAA74u,c->r[3]); // 80159000
  if (!crb(c,0)) { goto L_80159014; } // 80159004
  W32(c->r[13]+0xFFFFAA6Cu,c->r[31]); // 80159008
  c->r[3]=0u+0x00000000u; // 8015900C
  goto L_80159078; // 80159010
L_80159014:;
  c->lr=0x80159018u; f_80154410(c); // 80159014
  c->r[30]=c->r[3]|c->r[3]; // 80159018
  c->r[5]=0u+0x80440000u; // 8015901C
  c->r[7]=0u+0x80440000u; // 80159020
  c->r[9]=0u+0x80160000u; // 80159024
  c->r[3]=R32(c->r[13]+0xFFFFAA74u); // 80159028
  c->r[5]=c->r[5]+0xFFFFEFA0u; // 8015902C
  c->r[7]=c->r[7]+0xFFFFEFC0u; // 80159030
  c->r[9]=c->r[9]+0xFFFF9340u; // 80159034
  c->r[4]=0u+0x00001000u; // 80159038
  c->r[6]=0u+0x00000020u; // 8015903C
  c->r[8]=0u+0x00000020u; // 80159040
  c->r[10]=0u+0x00000000u; // 80159044
  c->lr=0x8015904Cu; f_80186AE4(c); // 80159048
  cmps(c,0,(int32_t)c->r[3],0); // 8015904C
  if (!crb(c,2)) { goto L_80159060; } // 80159050
  c->r[0]=0u+0x00000001u; // 80159054
  W32(c->r[13]+0xFFFFAA78u,c->r[0]); // 80159058
  goto L_80159064; // 8015905C
L_80159060:;
  W32(c->r[13]+0xFFFFAA78u,c->r[31]); // 80159060
L_80159064:;
  c->r[3]=c->r[30]|c->r[30]; // 80159064
  c->lr=0x8015906Cu; f_80154438(c); // 80159068
  c->r[0]=0u+0x00000001u; // 8015906C
  c->r[3]=0u+0x00000001u; // 80159070
  W32(c->r[13]+0xFFFFAA6Cu,c->r[0]); // 80159074
L_80159078:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80159078
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8015907C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80159080
  c->lr=c->r[0]; // 80159084
  c->r[1]=c->r[1]+0x00000010u; // 80159088
  return; // 8015908C
}

// __OSShutdownToSBY
void f_80159090(Ctx* __restrict c) {
  trace_call(0x80159090u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80159090
  c->r[0]=c->lr; // 80159094
  c->r[3]=0u+0xCC000000u; // 80159098
  W32(c->r[1]+0x00000014u,c->r[0]); // 8015909C
  c->r[0]=0u+0x00000000u; // 801590A0
  W16(c->r[3]+0x00002002u,c->r[0]); // 801590A4
  c->r[0]=R32(c->r[13]+0xFFFFAA6Cu); // 801590A8
  cmps(c,0,(int32_t)c->r[0],0); // 801590AC
  if (!crb(c,2)) { goto L_801590D0; } // 801590B0
  c->r[3]=0u+0x802D0000u; // 801590B4
  c->r[5]=0u+0x802D0000u; // 801590B8
  c->r[3]=c->r[3]+0x00004118u; // 801590BC
  c->r[4]=0u+0x0000013Cu; // 801590C0
  c->r[5]=c->r[5]+0x00004124u; // 801590C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801590C8
  c->lr=0x801590D0u; f_80150744(c); // 801590CC
L_801590D0:;
  c->r[4]=0u+0x80440000u; // 801590D0
  c->r[0]=0u+0x00000000u; // 801590D4
  c->r[7]=0u+0x80440000u; // 801590D8
  W32(c->r[4]+0xFFFFEFE0u,c->r[0]); // 801590DC
  c->r[5]=c->r[4]+0xFFFFEFE0u; // 801590E0
  c->r[3]=R32(c->r[13]+0xFFFFAA70u); // 801590E4
  c->r[7]=c->r[7]+0xFFFFF000u; // 801590E8
  c->r[4]=0u+0x00002003u; // 801590EC
  c->r[6]=0u+0x00000020u; // 801590F0
  c->r[8]=0u+0x00000020u; // 801590F4
  c->lr=0x801590FCu; f_80186C1C(c); // 801590F8
  c->lr=0x80159100u; f_80154410(c); // 801590FC
  c->lr=0x80159104u; f_8014F954(c); // 80159100
L_80159104:;
  IRQCHK(c); goto L_80159104; // 80159104
}

// __OSHotReset
void f_80159108(Ctx* __restrict c) {
  trace_call(0x80159108u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80159108
  c->r[0]=c->lr; // 8015910C
  c->r[3]=0u+0xCC000000u; // 80159110
  W32(c->r[1]+0x00000014u,c->r[0]); // 80159114
  c->r[0]=0u+0x00000000u; // 80159118
  W16(c->r[3]+0x00002002u,c->r[0]); // 8015911C
  c->r[0]=R32(c->r[13]+0xFFFFAA6Cu); // 80159120
  cmps(c,0,(int32_t)c->r[0],0); // 80159124
  if (!crb(c,2)) { goto L_80159148; } // 80159128
  c->r[3]=0u+0x802D0000u; // 8015912C
  c->r[5]=0u+0x802D0000u; // 80159130
  c->r[3]=c->r[3]+0x00004118u; // 80159134
  c->r[4]=0u+0x0000017Cu; // 80159138
  c->r[5]=c->r[5]+0x0000415Cu; // 8015913C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80159140
  c->lr=0x80159148u; f_80150744(c); // 80159144
L_80159148:;
  c->r[5]=0u+0x80440000u; // 80159148
  c->r[7]=0u+0x80440000u; // 8015914C
  c->r[3]=R32(c->r[13]+0xFFFFAA70u); // 80159150
  c->r[5]=c->r[5]+0xFFFFEFE0u; // 80159154
  c->r[7]=c->r[7]+0xFFFFF000u; // 80159158
  c->r[4]=0u+0x00002001u; // 8015915C
  c->r[6]=0u+0x00000020u; // 80159160
  c->r[8]=0u+0x00000020u; // 80159164
  c->lr=0x8015916Cu; f_80186C1C(c); // 80159168
  c->lr=0x80159170u; f_80154410(c); // 8015916C
  c->lr=0x80159174u; f_8014F954(c); // 80159170
L_80159174:;
  IRQCHK(c); goto L_80159174; // 80159174
}

// __OSSetVIForceDimming
void f_80159178(Ctx* __restrict c) {
  trace_call(0x80159178u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80159178
  c->r[0]=c->lr; // 8015917C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80159180
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80159184
  c->r[31]=c->r[5]|c->r[5]; // 80159188
  W32(c->r[1]+0x00000018u,c->r[30]); // 8015918C
  c->r[30]=c->r[4]|c->r[4]; // 80159190
  W32(c->r[1]+0x00000014u,c->r[29]); // 80159194
  c->r[29]=c->r[3]|c->r[3]; // 80159198
  c->r[0]=R32(c->r[13]+0xFFFFAA6Cu); // 8015919C
  cmps(c,0,(int32_t)c->r[0],0); // 801591A0
  if (!crb(c,2)) { goto L_801591B0; } // 801591A4
  c->r[3]=0u+0xFFFFFFF6u; // 801591A8
  goto L_80159254; // 801591AC
L_801591B0:;
  c->lr=0x801591B4u; f_80154410(c); // 801591B0
  c->r[0]=R32(c->r[13]+0xFFFFAA7Cu); // 801591B4
  cmps(c,0,(int32_t)c->r[0],0); // 801591B8
  if (crb(c,2)) { goto L_801591CC; } // 801591BC
  c->lr=0x801591C4u; f_80154438(c); // 801591C0
  c->r[3]=0u+0x00000000u; // 801591C4
  goto L_80159254; // 801591C8
L_801591CC:;
  c->r[0]=0u+0x00000001u; // 801591CC
  W32(c->r[13]+0xFFFFAA7Cu,c->r[0]); // 801591D0
  c->lr=0x801591D8u; f_80154438(c); // 801591D4
  c->r[0]=rotl(c->r[29],7)&0xFFFFFF80u; // 801591D8
  c->r[3]=0u+0x80440000u; // 801591DC
  c->r[4]=c->r[0]|c->r[31]; // 801591E0
  c->r[7]=0u+0x80440000u; // 801591E4
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801591E8
  c->r[5]=c->r[3]+0xFFFFF020u; // 801591EC
  c->r[12]=0u+0x00000000u; // 801591F0
  c->r[11]=0u+0xFFFFFFFFu; // 801591F4
  c->r[4]=c->r[4]|c->r[0]; // 801591F8
  c->r[0]=0u+0xFFFF0000u; // 801591FC
  W32(c->r[3]+0xFFFFF020u,c->r[4]); // 80159200
  c->r[9]=0u+0x80160000u; // 80159204
  c->r[3]=R32(c->r[13]+0xFFFFAA70u); // 80159208
  c->r[7]=c->r[7]+0xFFFFF040u; // 8015920C
  W32(c->r[5]+0x00000004u,c->r[12]); // 80159210
  c->r[9]=c->r[9]+0xFFFF9328u; // 80159214
  c->r[4]=0u+0x00005001u; // 80159218
  c->r[6]=0u+0x00000020u; // 8015921C
  W32(c->r[5]+0x00000008u,c->r[12]); // 80159220
  c->r[8]=0u+0x00000020u; // 80159224
  c->r[10]=0u+0x00000000u; // 80159228
  W32(c->r[5]+0x0000000Cu,c->r[12]); // 8015922C
  W32(c->r[5]+0x00000010u,c->r[12]); // 80159230
  W32(c->r[5]+0x00000014u,c->r[11]); // 80159234
  W32(c->r[5]+0x00000018u,c->r[0]); // 80159238
  W32(c->r[5]+0x0000001Cu,c->r[12]); // 8015923C
  c->lr=0x80159244u; f_80186AE4(c); // 80159240
  cmps(c,0,(int32_t)c->r[3],0); // 80159244
  if (crb(c,2)) { goto L_80159250; } // 80159248
  goto L_80159254; // 8015924C
L_80159250:;
  c->r[3]=0u+0x00000001u; // 80159250
L_80159254:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80159254
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80159258
  c->r[30]=R32(c->r[1]+0x00000018u); // 8015925C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80159260
  c->lr=c->r[0]; // 80159264
  c->r[1]=c->r[1]+0x00000020u; // 80159268
  return; // 8015926C
}

// __OSSetIdleLEDMode
void f_80159270(Ctx* __restrict c) {
  trace_call(0x80159270u);
  c->r[0]=R32(c->r[13]+0xFFFFAA6Cu); // 80159270
  cmps(c,0,(int32_t)c->r[0],0); // 80159274
  if (!crb(c,2)) { goto L_80159284; } // 80159278
  c->r[3]=0u+0xFFFFFFFAu; // 8015927C
  return; // 80159280
L_80159284:;
  c->r[4]=0u+0x80440000u; // 80159284
  c->r[7]=0u+0x80440000u; // 80159288
  W32(c->r[4]+0xFFFFEFE0u,c->r[3]); // 8015928C
  c->r[5]=c->r[4]+0xFFFFEFE0u; // 80159290
  c->r[3]=R32(c->r[13]+0xFFFFAA70u); // 80159294
  c->r[7]=c->r[7]+0xFFFFF000u; // 80159298
  c->r[4]=0u+0x00006002u; // 8015929C
  c->r[6]=0u+0x00000020u; // 801592A0
  c->r[8]=0u+0x00000020u; // 801592A4
  f_80186C1C(c); return; // 801592A8
  return; // 801592AC
}

// __OSUnRegisterStateEvent
void f_801592B0(Ctx* __restrict c) {
  trace_call(0x801592B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801592B0
  c->r[0]=c->lr; // 801592B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801592B8
  c->r[0]=R32(c->r[13]+0xFFFFAA78u); // 801592BC
  cmps(c,0,(int32_t)c->r[0],0); // 801592C0
  if (!crb(c,2)) { goto L_801592D0; } // 801592C4
  c->r[3]=0u+0x00000000u; // 801592C8
  goto L_80159318; // 801592CC
L_801592D0:;
  c->r[0]=R32(c->r[13]+0xFFFFAA6Cu); // 801592D0
  cmps(c,0,(int32_t)c->r[0],0); // 801592D4
  if (!crb(c,2)) { goto L_801592E4; } // 801592D8
  c->r[3]=0u+0xFFFFFFFAu; // 801592DC
  goto L_80159318; // 801592E0
L_801592E4:;
  c->r[5]=0u+0x80440000u; // 801592E4
  c->r[7]=0u+0x80440000u; // 801592E8
  c->r[3]=R32(c->r[13]+0xFFFFAA70u); // 801592EC
  c->r[5]=c->r[5]+0xFFFFEFE0u; // 801592F0
  c->r[7]=c->r[7]+0xFFFFF000u; // 801592F4
  c->r[4]=0u+0x00003002u; // 801592F8
  c->r[6]=0u+0x00000020u; // 801592FC
  c->r[8]=0u+0x00000020u; // 80159300
  c->lr=0x80159308u; f_80186C1C(c); // 80159304
  cmps(c,0,(int32_t)c->r[3],0); // 80159308
  if (!crb(c,2)) { goto L_80159318; } // 8015930C
  c->r[0]=0u+0x00000000u; // 80159310
  W32(c->r[13]+0xFFFFAA78u,c->r[0]); // 80159314
L_80159318:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80159318
  c->lr=c->r[0]; // 8015931C
  c->r[1]=c->r[1]+0x00000010u; // 80159320
  return; // 80159324
}

// __OSVIDimReplyHandler
void f_80159328(Ctx* __restrict c) {
  trace_call(0x80159328u);
  c->r[0]=0u+0x00000000u; // 80159328
  c->r[3]=0u+0x00000000u; // 8015932C
  W32(c->r[13]+0xFFFFAA7Cu,c->r[0]); // 80159330
  return; // 80159334
}

// __OSDefaultResetCallback
void f_80159338(Ctx* __restrict c) {
  trace_call(0x80159338u);
  return; // 80159338
}

// __OSDefaultPowerCallback
void f_8015933C(Ctx* __restrict c) {
  trace_call(0x8015933Cu);
  return; // 8015933C
}

// __OSStateEventHandler
void f_80159340(Ctx* __restrict c) {
  trace_call(0x80159340u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80159340
  c->r[0]=c->lr; // 80159344
  cmps(c,0,(int32_t)c->r[3],0); // 80159348
  W32(c->r[1]+0x00000014u,c->r[0]); // 8015934C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80159350
  if (crb(c,2)) { goto L_80159374; } // 80159354
  c->r[3]=0u+0x802D0000u; // 80159358
  c->r[5]=0u+0x802D0000u; // 8015935C
  c->r[3]=c->r[3]+0x00004118u; // 80159360
  c->r[4]=0u+0x00000314u; // 80159364
  c->r[5]=c->r[5]+0x00004194u; // 80159368
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8015936C
  c->lr=0x80159374u; f_80150744(c); // 80159370
L_80159374:;
  c->r[3]=0u+0x80440000u; // 80159374
  c->r[0]=0u+0x00000000u; // 80159378
  c->r[3]=R32(c->r[3]+0xFFFFEFC0u); // 8015937C
  W32(c->r[13]+0xFFFFAA78u,c->r[0]); // 80159380
  c->r[0]=c->r[3]+0xFFFE0000u; // 80159384
  cmpu(c,0,c->r[0],0x00000000u); // 80159388
  if (!crb(c,2)) { goto L_80159444; } // 8015938C
  c->r[3]=0u+0xCC000000u; // 80159390
  c->r[0]=R32(c->r[3]+0x00003000u); // 80159394
  c->r[0]=rotl(c->r[0],0)&0x00010000u; cr0(c,c->r[0]); // 80159398
  if (!crb(c,2)) { goto L_801593A8; } // 8015939C
  c->r[0]=0u+0x00000001u; // 801593A0
  goto L_801593AC; // 801593A4
L_801593A8:;
  c->r[0]=0u+0x00000000u; // 801593A8
L_801593AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801593AC
  if (crb(c,2)) { goto L_801593E8; } // 801593B0
  c->lr=0x801593B8u; f_80154410(c); // 801593B4
  c->r[4]=0u+0x80160000u; // 801593B8
  c->r[12]=R32(c->r[13]+0xFFFFAA84u); // 801593BC
  c->r[4]=c->r[4]+0xFFFF9338u; // 801593C0
  c->r[0]=0u+0x00000001u; // 801593C4
  c->r[31]=c->r[3]|c->r[3]; // 801593C8
  W32(c->r[13]+0xFFFFAA68u,c->r[0]); // 801593CC
  W32(c->r[13]+0xFFFFAA84u,c->r[4]); // 801593D0
  c->ctr=c->r[12]; // 801593D4
  if (true) { c->lr=0x801593DCu; dispatch(c,c->ctr); } // 801593D8
  c->r[3]=c->r[31]|c->r[31]; // 801593DC
  c->lr=0x801593E4u; f_80154438(c); // 801593E0
  c->lr=0x801593E8u; f_80161744(c); // 801593E4
L_801593E8:;
  c->lr=0x801593ECu; f_80154410(c); // 801593E8
  c->r[31]=c->r[3]|c->r[3]; // 801593EC
  c->r[5]=0u+0x80440000u; // 801593F0
  c->r[7]=0u+0x80440000u; // 801593F4
  c->r[9]=0u+0x80160000u; // 801593F8
  c->r[3]=R32(c->r[13]+0xFFFFAA74u); // 801593FC
  c->r[5]=c->r[5]+0xFFFFEFA0u; // 80159400
  c->r[7]=c->r[7]+0xFFFFEFC0u; // 80159404
  c->r[9]=c->r[9]+0xFFFF9340u; // 80159408
  c->r[4]=0u+0x00001000u; // 8015940C
  c->r[6]=0u+0x00000020u; // 80159410
  c->r[8]=0u+0x00000020u; // 80159414
  c->r[10]=0u+0x00000000u; // 80159418
  c->lr=0x80159420u; f_80186AE4(c); // 8015941C
  cmps(c,0,(int32_t)c->r[3],0); // 80159420
  if (!crb(c,2)) { goto L_80159434; } // 80159424
  c->r[0]=0u+0x00000001u; // 80159428
  W32(c->r[13]+0xFFFFAA78u,c->r[0]); // 8015942C
  goto L_8015943C; // 80159430
L_80159434:;
  c->r[0]=0u+0x00000000u; // 80159434
  W32(c->r[13]+0xFFFFAA78u,c->r[0]); // 80159438
L_8015943C:;
  c->r[3]=c->r[31]|c->r[31]; // 8015943C
  c->lr=0x80159444u; f_80154438(c); // 80159440
L_80159444:;
  c->r[3]=0u+0x80440000u; // 80159444
  c->r[0]=R32(c->r[3]+0xFFFFEFC0u); // 80159448
  cmpu(c,0,c->r[0],0x00000800u); // 8015944C
  if (!crb(c,2)) { goto L_8015947C; } // 80159450
  c->lr=0x80159458u; f_80154410(c); // 80159454
  c->r[4]=0u+0x80160000u; // 80159458
  c->r[12]=R32(c->r[13]+0xFFFFAA80u); // 8015945C
  c->r[4]=c->r[4]+0xFFFF933Cu; // 80159460
  c->r[31]=c->r[3]|c->r[3]; // 80159464
  W32(c->r[13]+0xFFFFAA80u,c->r[4]); // 80159468
  c->ctr=c->r[12]; // 8015946C
  if (true) { c->lr=0x80159474u; dispatch(c,c->ctr); } // 80159470
  c->r[3]=c->r[31]|c->r[31]; // 80159474
  c->lr=0x8015947Cu; f_80154438(c); // 80159478
L_8015947C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8015947C
  c->r[3]=0u+0x00000000u; // 80159480
  c->r[0]=R32(c->r[1]+0x00000014u); // 80159484
  c->lr=c->r[0]; // 80159488
  c->r[1]=c->r[1]+0x00000010u; // 8015948C
  return; // 80159490
}

// PlayRecordAlarmCallback
void f_80159494(Ctx* __restrict c) {
  trace_call(0x80159494u);
  c->r[3]=0u+0x00000000u; // 80159494
  c->r[4]=0u+0x00000000u; // 80159498
  f_801594A0(c); return; // 8015949C
}

// PlayRecordCallback
void f_801594A0(Ctx* __restrict c) {
  trace_call(0x801594A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801594A0
  c->r[0]=c->lr; // 801594A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801594A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801594AC
  c->r[31]=0u+0x80440000u; // 801594B0
  c->r[31]=c->r[31]+0xFFFFF060u; // 801594B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801594B8
  c->r[30]=0u+0x00000000u; // 801594BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801594C0
  c->r[0]=R32(c->r[13]+0xFFFFAA98u); // 801594C4
  W32(c->r[13]+0xFFFFAAA4u,c->r[3]); // 801594C8
  cmps(c,0,(int32_t)c->r[0],0); // 801594CC
  if (crb(c,2)) { goto L_801594E0; } // 801594D0
  c->r[0]=0u+0x00000001u; // 801594D4
  W32(c->r[13]+0xFFFFAA9Cu,c->r[0]); // 801594D8
  goto L_80159934; // 801594DC
L_801594E0:;
  c->r[0]=R32(c->r[13]+0xFFFFAAA0u); // 801594E0
  cmps(c,0,(int32_t)c->r[0],0); // 801594E4
  if (!crb(c,2)) { goto L_80159700; } // 801594E8
  c->r[0]=R32(c->r[13]+0xFFFF8FF8u); // 801594EC
  cmpu(c,0,c->r[0],0x00000006u); // 801594F0
  if (crb(c,1)) { goto L_801596EC; } // 801594F4
  c->r[4]=0u+0x802D0000u; // 801594F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801594FC
  c->r[4]=c->r[4]+0x000041E4u; // 80159500
  c->r[4]=R32(c->r[4]+c->r[0]); // 80159504
  c->ctr=c->r[4]; // 80159508
  if (true) { switch (c->ctr) { case 0x80159510u: goto L_80159510; case 0x8015951Cu: goto L_8015951C; case 0x80159598u: goto L_80159598; case 0x801595DCu: goto L_801595DC; case 0x80159604u: goto L_80159604; case 0x80159610u: goto L_80159610; case 0x80159698u: goto L_80159698; default: break; } dispatch(c,c->ctr); return; } // 8015950C
L_80159510:;
  c->r[0]=0u+0x00000001u; // 80159510
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 80159514
  goto L_80159700; // 80159518
L_8015951C:;
  cmps(c,0,(int32_t)c->r[3],-10); // 8015951C
  if (!crb(c,2)) { goto L_80159558; } // 80159520
  c->r[0]=0u+0x00000001u; // 80159524
  c->r[3]=c->r[31]+0x00000080u; // 80159528
  W32(c->r[13]+0xFFFFAAA0u,c->r[0]); // 8015952C
  c->lr=0x80159534u; f_8014E820(c); // 80159530
  c->r[3]=0u+0x80000000u; // 80159534
  c->r[7]=0u+0x80160000u; // 80159538
  c->r[0]=R32(c->r[3]+0x000000F8u); // 8015953C
  c->r[3]=c->r[31]+0x00000080u; // 80159540
  c->r[7]=c->r[7]+0xFFFF9494u; // 80159544
  c->r[5]=0u+0x00000000u; // 80159548
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8015954C
  c->lr=0x80159554u; f_8014EA80(c); // 80159550
  goto L_80159934; // 80159554
L_80159558:;
  cmps(c,0,(int32_t)c->r[3],0); // 80159558
  if (!crb(c,2)) { goto L_80159584; } // 8015955C
  c->r[0]=R32(c->r[13]+0xFFFFAA90u); // 80159560
  cmps(c,0,(int32_t)c->r[0],0); // 80159564
  if (!crb(c,2)) { goto L_80159578; } // 80159568
  c->r[0]=0u+0x00000002u; // 8015956C
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 80159570
  goto L_80159700; // 80159574
L_80159578:;
  c->r[0]=0u+0x00000004u; // 80159578
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 8015957C
  goto L_80159700; // 80159580
L_80159584:;
  c->r[3]=0u+0x00000001u; // 80159584
  c->r[0]=0u+0x00000007u; // 80159588
  W32(c->r[13]+0xFFFFAA94u,c->r[3]); // 8015958C
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 80159590
  goto L_80159934; // 80159594
L_80159598:;
  cmpu(c,0,c->r[3],0x00000080u); // 80159598
  if (!crb(c,2)) { goto L_801595C8; } // 8015959C
  c->r[4]=c->r[31]+0x00000000u; // 801595A0
  c->r[5]=0u+0x00000001u; // 801595A4
  c->r[3]=R32(c->r[4]+0x00000060u); // 801595A8
  c->r[0]=0u+0x00000003u; // 801595AC
  c->r[4]=R32(c->r[4]+0x00000064u); // 801595B0
  W32(c->r[13]+0xFFFFAA90u,c->r[5]); // 801595B4
  W32(c->r[13]+0xFFFFAAACu,c->r[4]); // 801595B8
  W32(c->r[13]+0xFFFFAAA8u,c->r[3]); // 801595BC
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 801595C0
  goto L_80159700; // 801595C4
L_801595C8:;
  c->r[3]=0u+0x00000001u; // 801595C8
  c->r[0]=0u+0x00000006u; // 801595CC
  W32(c->r[13]+0xFFFFAA94u,c->r[3]); // 801595D0
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 801595D4
  goto L_80159700; // 801595D8
L_801595DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801595DC
  if (!crb(c,2)) { goto L_801595F0; } // 801595E0
  c->r[0]=0u+0x00000004u; // 801595E4
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 801595E8
  goto L_80159700; // 801595EC
L_801595F0:;
  c->r[3]=0u+0x00000001u; // 801595F0
  c->r[0]=0u+0x00000006u; // 801595F4
  W32(c->r[13]+0xFFFFAA94u,c->r[3]); // 801595F8
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 801595FC
  goto L_80159700; // 80159600
L_80159604:;
  c->r[0]=0u+0x00000005u; // 80159604
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 80159608
  goto L_80159700; // 8015960C
L_80159610:;
  cmpu(c,0,c->r[3],0x00000080u); // 80159610
  if (!crb(c,2)) { goto L_80159684; } // 80159614
  c->lr=0x8015961Cu; f_8015848C(c); // 80159618
  c->r[5]=0u+0x80000000u; // 8015961C
  c->r[8]=R32(c->r[13]+0xFFFFAAACu); // 80159620
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80159624
  c->r[5]=0u+0x0000012Cu; // 80159628
  c->r[9]=R32(c->r[13]+0xFFFFAAA8u); // 8015962C
  c->r[8]=addc(c,~c->r[8],c->r[4],1); // 80159630
  c->r[7]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80159634
  c->r[6]=0u+0x00000000u; // 80159638
  c->r[3]=addc(c,~c->r[9],c->r[3],c->xer_ca); // 8015963C
  c->r[4]=c->r[3]^0x80000000u; // 80159640
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 80159644
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[5]); // 80159648
  c->r[0]=c->r[0]+c->r[3]; // 8015964C
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)300); // 80159650
  c->r[0]=c->r[0]^0x80000000u; // 80159654
  c->r[3]=addc(c,~c->r[8],c->r[5],1); // 80159658
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 8015965C
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80159660
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 80159664
  if (crb(c,2)) { goto L_80159678; } // 80159668
  c->r[0]=0u+0x00000006u; // 8015966C
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 80159670
  goto L_80159700; // 80159674
L_80159678:;
  c->r[0]=0u+0x00000003u; // 80159678
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 8015967C
  goto L_80159700; // 80159680
L_80159684:;
  c->r[3]=0u+0x00000001u; // 80159684
  c->r[0]=0u+0x00000006u; // 80159688
  W32(c->r[13]+0xFFFFAA94u,c->r[3]); // 8015968C
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 80159690
  goto L_80159700; // 80159694
L_80159698:;
  c->r[0]=R32(c->r[13]+0xFFFFAA94u); // 80159698
  cmps(c,0,(int32_t)c->r[0],0); // 8015969C
  if (crb(c,2)) { goto L_801596B0; } // 801596A0
  c->r[0]=0u+0x00000007u; // 801596A4
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 801596A8
  goto L_80159934; // 801596AC
L_801596B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801596B0
  if (!crb(c,2)) { goto L_801596D8; } // 801596B4
  c->r[4]=c->r[31]+0x00000000u; // 801596B8
  c->r[0]=0u+0x00000001u; // 801596BC
  c->r[3]=R32(c->r[4]+0x00000060u); // 801596C0
  c->r[4]=R32(c->r[4]+0x00000064u); // 801596C4
  W32(c->r[13]+0xFFFFAAA8u,c->r[3]); // 801596C8
  W32(c->r[13]+0xFFFFAAACu,c->r[4]); // 801596CC
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 801596D0
  goto L_80159700; // 801596D4
L_801596D8:;
  c->r[3]=0u+0x00000007u; // 801596D8
  c->r[0]=0u+0x00000001u; // 801596DC
  W32(c->r[13]+0xFFFF8FF8u,c->r[3]); // 801596E0
  W32(c->r[13]+0xFFFFAA94u,c->r[0]); // 801596E4
  goto L_80159934; // 801596E8
L_801596EC:;
  c->r[3]=0u+0x00000007u; // 801596EC
  c->r[0]=0u+0x00000001u; // 801596F0
  W32(c->r[13]+0xFFFF8FF8u,c->r[3]); // 801596F4
  W32(c->r[13]+0xFFFFAA94u,c->r[0]); // 801596F8
  goto L_80159934; // 801596FC
L_80159700:;
  c->r[0]=R32(c->r[13]+0xFFFF8FF8u); // 80159700
  c->r[29]=0u+0x00000000u; // 80159704
  W32(c->r[13]+0xFFFFAAA0u,c->r[29]); // 80159708
  cmps(c,0,(int32_t)c->r[0],4); // 8015970C
  if (crb(c,2)) { goto L_801597B0; } // 80159710
  if (!crb(c,0)) { goto L_80159730; } // 80159714
  cmps(c,0,(int32_t)c->r[0],2); // 80159718
  if (crb(c,2)) { goto L_80159768; } // 8015971C
  if (!crb(c,0)) { goto L_8015978C; } // 80159720
  cmps(c,0,(int32_t)c->r[0],1); // 80159724
  if (!crb(c,0)) { goto L_80159740; } // 80159728
  goto L_8015985C; // 8015972C
L_80159730:;
  cmps(c,0,(int32_t)c->r[0],6); // 80159730
  if (crb(c,2)) { goto L_80159844; } // 80159734
  if (!crb(c,0)) { goto L_8015985C; } // 80159738
  goto L_801597EC; // 8015973C
L_80159740:;
  c->r[3]=0u+0x802D0000u; // 80159740
  c->r[6]=0u+0x80160000u; // 80159744
  c->r[3]=c->r[3]+0x000041B8u; // 80159748
  c->r[4]=c->r[31]+0x000000B0u; // 8015974C
  c->r[6]=c->r[6]+0xFFFF94A0u; // 80159750
  c->r[7]=c->r[31]+0x0000013Cu; // 80159754
  c->r[5]=0u+0x00000003u; // 80159758
  c->lr=0x80159760u; f_8017F16C(c); // 8015975C
  c->r[30]=c->r[3]|c->r[3]; // 80159760
  goto L_8015985C; // 80159764
L_80159768:;
  c->r[6]=0u+0x80160000u; // 80159768
  c->r[3]=c->r[31]+0x000000B0u; // 8015976C
  c->r[4]=c->r[31]+0x00000000u; // 80159770
  c->r[7]=c->r[31]+0x0000013Cu; // 80159774
  c->r[6]=c->r[6]+0xFFFF94A0u; // 80159778
  c->r[5]=0u+0x00000080u; // 8015977C
  c->lr=0x80159784u; f_8017E454(c); // 80159780
  c->r[30]=c->r[3]|c->r[3]; // 80159784
  goto L_8015985C; // 80159788
L_8015978C:;
  c->r[6]=0u+0x80160000u; // 8015978C
  c->r[3]=c->r[31]+0x000000B0u; // 80159790
  c->r[6]=c->r[6]+0xFFFF94A0u; // 80159794
  c->r[7]=c->r[31]+0x0000013Cu; // 80159798
  c->r[4]=0u+0x00000000u; // 8015979C
  c->r[5]=0u+0x00000000u; // 801597A0
  c->lr=0x801597A8u; f_8017E64C(c); // 801597A4
  c->r[30]=c->r[3]|c->r[3]; // 801597A8
  goto L_8015985C; // 801597AC
L_801597B0:;
  c->r[3]=c->r[31]+0x00000080u; // 801597B0
  c->lr=0x801597B8u; f_8014E820(c); // 801597B4
  c->r[3]=0u+0x80000000u; // 801597B8
  c->r[0]=0u+0x0000003Cu; // 801597BC
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801597C0
  c->r[7]=0u+0x80160000u; // 801597C4
  c->r[4]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[0]); // 801597C8
  c->r[5]=rotl(c->r[3],30)&0x3FFFFFFFu; // 801597CC
  c->r[3]=c->r[31]+0x00000080u; // 801597D0
  c->r[7]=c->r[7]+0xFFFF9494u; // 801597D4
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801597D8
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)60); // 801597DC
  c->r[5]=c->r[0]+c->r[4]; // 801597E0
  c->lr=0x801597E8u; f_8014EA80(c); // 801597E4
  goto L_8015985C; // 801597E8
L_801597EC:;
  c->lr=0x801597F0u; f_8015848C(c); // 801597EC
  c->r[5]=c->r[31]+0x00000000u; // 801597F0
  c->r[0]=0u+0x0000001Fu; // 801597F4
  W32(c->r[5]+0x00000064u,c->r[4]); // 801597F8
  c->r[6]=c->r[5]+0x00000004u; // 801597FC
  c->r[4]=0u+0x00000000u; // 80159800
  W32(c->r[5]+0x00000060u,c->r[3]); // 80159804
  c->ctr=c->r[0]; // 80159808
L_8015980C:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 8015980C
  c->r[6]=c->r[6]+0x00000004u; // 80159810
  c->r[4]=c->r[4]+c->r[0]; // 80159814
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8015980C; } // 80159818
  c->r[6]=0u+0x80160000u; // 8015981C
  W32(c->r[31]+0x00000000u,c->r[4]); // 80159820
  c->r[3]=c->r[31]+0x000000B0u; // 80159824
  c->r[4]=c->r[31]+0x00000000u; // 80159828
  c->r[6]=c->r[6]+0xFFFF94A0u; // 8015982C
  c->r[7]=c->r[31]+0x0000013Cu; // 80159830
  c->r[5]=0u+0x00000080u; // 80159834
  c->lr=0x8015983Cu; f_8017E534(c); // 80159838
  c->r[30]=c->r[3]|c->r[3]; // 8015983C
  goto L_8015985C; // 80159840
L_80159844:;
  c->r[4]=0u+0x80160000u; // 80159844
  c->r[3]=c->r[31]+0x000000B0u; // 80159848
  c->r[4]=c->r[4]+0xFFFF94A0u; // 8015984C
  c->r[5]=c->r[31]+0x0000013Cu; // 80159850
  c->lr=0x80159858u; f_8017F340(c); // 80159854
  c->r[30]=c->r[3]|c->r[3]; // 80159858
L_8015985C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8015985C
  if (crb(c,2)) { goto L_80159930; } // 80159860
  cmps(c,0,(int32_t)c->r[30],-3); // 80159864
  if (!crb(c,2)) { goto L_801598A0; } // 80159868
  c->r[3]=c->r[31]+0x00000080u; // 8015986C
  c->lr=0x80159874u; f_8014E820(c); // 80159870
  c->r[3]=0u+0x80000000u; // 80159874
  c->r[7]=0u+0x80160000u; // 80159878
  c->r[0]=R32(c->r[3]+0x000000F8u); // 8015987C
  c->r[3]=c->r[31]+0x00000080u; // 80159880
  c->r[7]=c->r[7]+0xFFFF9494u; // 80159884
  c->r[5]=0u+0x00000000u; // 80159888
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8015988C
  c->lr=0x80159894u; f_8014EA80(c); // 80159890
  c->r[0]=0u+0x00000001u; // 80159894
  W32(c->r[13]+0xFFFFAAA0u,c->r[0]); // 80159898
  goto L_80159930; // 8015989C
L_801598A0:;
  c->r[0]=R32(c->r[13]+0xFFFF8FF8u); // 801598A0
  c->r[3]=0u+0x00000001u; // 801598A4
  W32(c->r[13]+0xFFFFAA94u,c->r[3]); // 801598A8
  cmps(c,0,(int32_t)c->r[0],4); // 801598AC
  if (crb(c,2)) { goto L_80159928; } // 801598B0
  if (!crb(c,0)) { goto L_801598C4; } // 801598B4
  cmps(c,0,(int32_t)c->r[0],2); // 801598B8
  if (!crb(c,0)) { goto L_801598CC; } // 801598BC
  goto L_80159928; // 801598C0
L_801598C4:;
  cmps(c,0,(int32_t)c->r[0],6); // 801598C4
  if (!crb(c,0)) { goto L_80159928; } // 801598C8
L_801598CC:;
  c->r[0]=0u+0x00000006u; // 801598CC
  c->r[4]=0u+0x80160000u; // 801598D0
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 801598D4
  c->r[3]=c->r[31]+0x000000B0u; // 801598D8
  c->r[4]=c->r[4]+0xFFFF94A0u; // 801598DC
  c->r[5]=c->r[31]+0x0000013Cu; // 801598E0
  c->lr=0x801598E8u; f_8017F340(c); // 801598E4
  cmps(c,0,(int32_t)c->r[3],-3); // 801598E8
  c->r[30]=c->r[3]|c->r[3]; // 801598EC
  if (!crb(c,2)) { goto L_80159930; } // 801598F0
  c->r[0]=0u+0x00000001u; // 801598F4
  c->r[3]=c->r[31]+0x00000080u; // 801598F8
  W32(c->r[13]+0xFFFFAAA0u,c->r[0]); // 801598FC
  c->lr=0x80159904u; f_8014E820(c); // 80159900
  c->r[3]=0u+0x80000000u; // 80159904
  c->r[7]=0u+0x80160000u; // 80159908
  c->r[0]=R32(c->r[3]+0x000000F8u); // 8015990C
  c->r[3]=c->r[31]+0x00000080u; // 80159910
  c->r[7]=c->r[7]+0xFFFF9494u; // 80159914
  c->r[5]=0u+0x00000000u; // 80159918
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8015991C
  c->lr=0x80159924u; f_8014EA80(c); // 80159920
  goto L_80159930; // 80159924
L_80159928:;
  c->r[0]=0u+0x00000007u; // 80159928
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 8015992C
L_80159930:;
  W32(c->r[13]+0xFFFFAAA4u,c->r[30]); // 80159930
L_80159934:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80159934
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80159938
  c->r[30]=R32(c->r[1]+0x00000018u); // 8015993C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80159940
  c->lr=c->r[0]; // 80159944
  c->r[1]=c->r[1]+0x00000020u; // 80159948
  return; // 8015994C
}

// __OSStartPlayRecord
void f_80159950(Ctx* __restrict c) {
  trace_call(0x80159950u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80159950
  c->r[0]=c->lr; // 80159954
  W32(c->r[1]+0x00000014u,c->r[0]); // 80159958
  c->lr=0x80159960u; f_80180450(c); // 8015995C
  cmps(c,0,(int32_t)c->r[3],0); // 80159960
  if (!crb(c,2)) { goto L_80159994; } // 80159964
  c->r[0]=0u+0x00000000u; // 80159968
  c->r[3]=0u+0x00000000u; // 8015996C
  W32(c->r[13]+0xFFFFAA98u,c->r[0]); // 80159970
  c->r[4]=0u+0x00000000u; // 80159974
  W32(c->r[13]+0xFFFFAA90u,c->r[0]); // 80159978
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 8015997C
  W32(c->r[13]+0xFFFFAA94u,c->r[0]); // 80159980
  W32(c->r[13]+0xFFFFAAA0u,c->r[0]); // 80159984
  W32(c->r[13]+0xFFFFAA9Cu,c->r[0]); // 80159988
  W32(c->r[13]+0xFFFFAAA4u,c->r[0]); // 8015998C
  c->lr=0x80159994u; f_801594A0(c); // 80159990
L_80159994:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80159994
  c->lr=c->r[0]; // 80159998
  c->r[1]=c->r[1]+0x00000010u; // 8015999C
  return; // 801599A0
}

// __OSStopPlayRecord
void f_801599A4(Ctx* __restrict c) {
  trace_call(0x801599A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801599A4
  c->r[0]=c->lr; // 801599A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801599AC
  c->r[11]=c->r[1]+0x00000020u; // 801599B0
  c->lr=0x801599B8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801599B4
  c->r[29]=0u+0x80440000u; // 801599B8
  c->r[29]=c->r[29]+0xFFFFF060u; // 801599BC
  c->lr=0x801599C4u; f_80154410(c); // 801599C0
  c->r[0]=R32(c->r[13]+0xFFFF8FF8u); // 801599C4
  c->r[4]=0u+0x00000001u; // 801599C8
  W32(c->r[13]+0xFFFFAA98u,c->r[4]); // 801599CC
  c->r[26]=c->r[3]|c->r[3]; // 801599D0
  cmps(c,0,(int32_t)c->r[0],7); // 801599D4
  if (crb(c,2)) { goto L_801599F4; } // 801599D8
  cmps(c,0,(int32_t)c->r[0],0); // 801599DC
  if (crb(c,2)) { goto L_801599F4; } // 801599E0
  cmps(c,0,(int32_t)c->r[0],9); // 801599E4
  if (crb(c,2)) { goto L_801599F4; } // 801599E8
  cmps(c,0,(int32_t)c->r[0],8); // 801599EC
  if (!crb(c,2)) { goto L_80159A00; } // 801599F0
L_801599F4:;
  c->r[3]=c->r[26]|c->r[26]; // 801599F4
  c->lr=0x801599FCu; f_80154438(c); // 801599F8
  goto L_80159B6C; // 801599FC
L_80159A00:;
  cmps(c,0,(int32_t)c->r[0],4); // 80159A00
  if (!crb(c,2)) { goto L_80159A68; } // 80159A04
  c->r[3]=c->r[29]+0x00000080u; // 80159A08
  c->lr=0x80159A10u; f_8014EB74(c); // 80159A0C
  c->r[3]=c->r[26]|c->r[26]; // 80159A10
  c->lr=0x80159A18u; f_80154438(c); // 80159A14
  c->lr=0x80159A1Cu; f_8015848C(c); // 80159A18
  c->r[5]=c->r[29]+0x00000000u; // 80159A1C
  c->r[0]=0u+0x0000001Fu; // 80159A20
  W32(c->r[5]+0x00000064u,c->r[4]); // 80159A24
  c->r[6]=c->r[5]+0x00000004u; // 80159A28
  c->r[4]=0u+0x00000000u; // 80159A2C
  W32(c->r[5]+0x00000060u,c->r[3]); // 80159A30
  c->ctr=c->r[0]; // 80159A34
L_80159A38:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 80159A38
  c->r[6]=c->r[6]+0x00000004u; // 80159A3C
  c->r[4]=c->r[4]+c->r[0]; // 80159A40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80159A38; } // 80159A44
  W32(c->r[29]+0x00000000u,c->r[4]); // 80159A48
  c->r[3]=c->r[29]+0x000000B0u; // 80159A4C
  c->r[4]=c->r[29]+0x00000000u; // 80159A50
  c->r[5]=0u+0x00000080u; // 80159A54
  c->lr=0x80159A5Cu; f_8017E4CC(c); // 80159A58
  c->r[3]=c->r[29]+0x000000B0u; // 80159A5C
  c->lr=0x80159A64u; f_8017F2D4(c); // 80159A60
  goto L_80159B6C; // 80159A64
L_80159A68:;
  c->r[0]=R32(c->r[13]+0xFFFFAAA0u); // 80159A68
  cmps(c,0,(int32_t)c->r[0],0); // 80159A6C
  if (crb(c,2)) { goto L_80159A88; } // 80159A70
  c->r[3]=c->r[29]+0x00000080u; // 80159A74
  c->lr=0x80159A7Cu; f_8014EB74(c); // 80159A78
  c->r[3]=c->r[26]|c->r[26]; // 80159A7C
  c->lr=0x80159A84u; f_80154438(c); // 80159A80
  goto L_80159AFC; // 80159A84
L_80159A88:;
  c->lr=0x80159A8Cu; f_80154438(c); // 80159A88
  c->lr=0x80159A90u; f_8015848C(c); // 80159A8C
  c->r[5]=0u+0x10620000u; // 80159A90
  c->r[0]=0u+0x00000000u; // 80159A94
  c->r[30]=c->r[4]|c->r[4]; // 80159A98
  c->r[31]=c->r[3]|c->r[3]; // 80159A9C
  c->r[26]=c->r[5]+0x00004DD3u; // 80159AA0
  c->r[28]=c->r[0]^0x80000000u; // 80159AA4
  c->r[27]=0u+0x80000000u; // 80159AA8
L_80159AAC:;
  c->r[0]=R32(c->r[13]+0xFFFFAA9Cu); // 80159AAC
  cmps(c,0,(int32_t)c->r[0],0); // 80159AB0
  if (!crb(c,2)) { goto L_80159AFC; } // 80159AB4
  c->lr=0x80159ABCu; f_8015848C(c); // 80159AB8
  c->r[0]=R32(c->r[27]+0x000000F8u); // 80159ABC
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 80159AC0
  c->r[3]=addc(c,~c->r[31],c->r[3],c->xer_ca); // 80159AC4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80159AC8
  c->r[0]=(uint32_t)(((uint64_t)c->r[26]*(uint64_t)c->r[0])>>32); // 80159ACC
  c->r[3]=c->r[3]^0x80000000u; // 80159AD0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80159AD4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)500); // 80159AD8
  c->r[0]=addc(c,~c->r[4],c->r[0],1); // 80159ADC
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 80159AE0
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 80159AE4
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80159AE8
  if (crb(c,2)) { IRQCHK(c); goto L_80159AAC; } // 80159AEC
  c->r[0]=0u+0x00000008u; // 80159AF0
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 80159AF4
  goto L_80159B74; // 80159AF8
L_80159AFC:;
  c->r[0]=R32(c->r[13]+0xFFFF8FF8u); // 80159AFC
  cmps(c,0,(int32_t)c->r[0],4); // 80159B00
  if (crb(c,2)) { goto L_80159B6C; } // 80159B04
  if (!crb(c,0)) { goto L_80159B1C; } // 80159B08
  cmps(c,0,(int32_t)c->r[0],1); // 80159B0C
  if (crb(c,2)) { goto L_80159B34; } // 80159B10
  if (!crb(c,0)) { goto L_80159B28; } // 80159B14
  goto L_80159B6C; // 80159B18
L_80159B1C:;
  cmps(c,0,(int32_t)c->r[0],6); // 80159B1C
  if (crb(c,2)) { goto L_80159B58; } // 80159B20
  if (!crb(c,0)) { goto L_80159B6C; } // 80159B24
L_80159B28:;
  c->r[3]=c->r[29]+0x000000B0u; // 80159B28
  c->lr=0x80159B30u; f_8017F2D4(c); // 80159B2C
  goto L_80159B6C; // 80159B30
L_80159B34:;
  c->r[0]=R32(c->r[13]+0xFFFFAAA4u); // 80159B34
  cmps(c,0,(int32_t)c->r[0],0); // 80159B38
  if (!crb(c,2)) { goto L_80159B6C; } // 80159B3C
  c->r[0]=R32(c->r[13]+0xFFFFAAA0u); // 80159B40
  cmps(c,0,(int32_t)c->r[0],0); // 80159B44
  if (!crb(c,2)) { goto L_80159B6C; } // 80159B48
  c->r[3]=c->r[29]+0x000000B0u; // 80159B4C
  c->lr=0x80159B54u; f_8017F2D4(c); // 80159B50
  goto L_80159B6C; // 80159B54
L_80159B58:;
  c->r[0]=R32(c->r[13]+0xFFFFAAA0u); // 80159B58
  cmps(c,0,(int32_t)c->r[0],0); // 80159B5C
  if (crb(c,2)) { goto L_80159B6C; } // 80159B60
  c->r[3]=c->r[29]+0x000000B0u; // 80159B64
  c->lr=0x80159B6Cu; f_8017F2D4(c); // 80159B68
L_80159B6C:;
  c->r[0]=0u+0x00000009u; // 80159B6C
  W32(c->r[13]+0xFFFF8FF8u,c->r[0]); // 80159B70
L_80159B74:;
  c->r[11]=c->r[1]+0x00000020u; // 80159B74
  c->lr=0x80159B7Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80159B78
  c->r[0]=R32(c->r[1]+0x00000024u); // 80159B7C
  c->lr=c->r[0]; // 80159B80
  c->r[1]=c->r[1]+0x00000020u; // 80159B84
  return; // 80159B88
}

// __OSWriteStateFlags
void f_80159B8C(Ctx* __restrict c) {
  trace_call(0x80159B8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80159B8C
  c->r[0]=c->lr; // 80159B90
  c->r[4]=c->r[3]|c->r[3]; // 80159B94
  c->r[5]=0u+0x00000020u; // 80159B98
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80159B9C
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80159BA0
  W32(c->r[1]+0x00000098u,c->r[30]); // 80159BA4
  c->r[30]=0u+0x80440000u; // 80159BA8
  c->r[3]=c->r[30]+0xFFFFF260u; // 80159BAC
  c->lr=0x80159BB4u; f_80004338(c); // 80159BB0
  c->r[31]=c->r[30]+0xFFFFF260u; // 80159BB4
  c->r[3]=0u+0x802D0000u; // 80159BB8
  c->r[6]=R32(c->r[31]+0x00000004u); // 80159BBC
  c->r[3]=c->r[3]+0x00004200u; // 80159BC0
  c->r[0]=R32(c->r[31]+0x00000008u); // 80159BC4
  c->r[4]=c->r[1]+0x00000008u; // 80159BC8
  c->r[5]=0u+0x00000002u; // 80159BCC
  c->r[6]=c->r[6]+c->r[0]; // 80159BD0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80159BD4
  c->r[6]=c->r[6]+c->r[0]; // 80159BD8
  c->r[0]=R32(c->r[31]+0x00000010u); // 80159BDC
  c->r[6]=c->r[6]+c->r[0]; // 80159BE0
  c->r[0]=R32(c->r[31]+0x00000014u); // 80159BE4
  c->r[6]=c->r[6]+c->r[0]; // 80159BE8
  c->r[0]=R32(c->r[31]+0x00000018u); // 80159BEC
  c->r[6]=c->r[6]+c->r[0]; // 80159BF0
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80159BF4
  c->r[6]=c->r[6]+c->r[0]; // 80159BF8
  W32(c->r[30]+0xFFFFF260u,c->r[6]); // 80159BFC
  c->lr=0x80159C04u; f_8017F054(c); // 80159C00
  cmps(c,0,(int32_t)c->r[3],0); // 80159C04
  if (!crb(c,2)) { goto L_80159C4C; } // 80159C08
  c->r[4]=c->r[31]|c->r[31]; // 80159C0C
  c->r[3]=c->r[1]+0x00000008u; // 80159C10
  c->r[5]=0u+0x00000020u; // 80159C14
  c->lr=0x80159C1Cu; f_8017E4CC(c); // 80159C18
  cmpu(c,0,c->r[3],0x00000020u); // 80159C1C
  if (crb(c,2)) { goto L_80159C34; } // 80159C20
  c->r[3]=c->r[1]+0x00000008u; // 80159C24
  c->lr=0x80159C2Cu; f_8017F2D4(c); // 80159C28
  c->r[3]=0u+0x00000000u; // 80159C2C
  goto L_80159C58; // 80159C30
L_80159C34:;
  c->r[3]=c->r[1]+0x00000008u; // 80159C34
  c->lr=0x80159C3Cu; f_8017F2D4(c); // 80159C38
  cmps(c,0,(int32_t)c->r[3],0); // 80159C3C
  if (crb(c,2)) { goto L_80159C54; } // 80159C40
  c->r[3]=0u+0x00000000u; // 80159C44
  goto L_80159C58; // 80159C48
L_80159C4C:;
  c->r[3]=0u+0x00000000u; // 80159C4C
  goto L_80159C58; // 80159C50
L_80159C54:;
  c->r[3]=0u+0x00000001u; // 80159C54
L_80159C58:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80159C58
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80159C5C
  c->r[30]=R32(c->r[1]+0x00000098u); // 80159C60
  c->lr=c->r[0]; // 80159C64
  c->r[1]=c->r[1]+0x000000A0u; // 80159C68
  return; // 80159C6C
}

// __OSReadStateFlags
void f_80159C70(Ctx* __restrict c) {
  trace_call(0x80159C70u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80159C70
  c->r[0]=c->lr; // 80159C74
  c->r[5]=0u+0x00000001u; // 80159C78
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80159C7C
  c->r[4]=c->r[1]+0x00000008u; // 80159C80
  W32(c->r[1]+0x000000ACu,c->r[31]); // 80159C84
  W32(c->r[1]+0x000000A8u,c->r[30]); // 80159C88
  W32(c->r[1]+0x000000A4u,c->r[29]); // 80159C8C
  c->r[29]=0u+0x802D0000u; // 80159C90
  W32(c->r[1]+0x000000A0u,c->r[28]); // 80159C94
  c->r[28]=c->r[3]|c->r[3]; // 80159C98
  c->r[3]=c->r[29]+0x00004200u; // 80159C9C
  c->lr=0x80159CA4u; f_8017F054(c); // 80159CA0
  cmps(c,0,(int32_t)c->r[3],0); // 80159CA4
  if (!crb(c,2)) { goto L_80159CF4; } // 80159CA8
  c->r[30]=0u+0x80440000u; // 80159CAC
  c->r[3]=c->r[1]+0x00000008u; // 80159CB0
  c->r[4]=c->r[30]+0xFFFFF260u; // 80159CB4
  c->r[5]=0u+0x00000020u; // 80159CB8
  c->lr=0x80159CC0u; f_8017E3EC(c); // 80159CBC
  c->r[31]=c->r[3]|c->r[3]; // 80159CC0
  c->r[3]=c->r[1]+0x00000008u; // 80159CC4
  c->lr=0x80159CCCu; f_8017F2D4(c); // 80159CC8
  cmpu(c,0,c->r[31],0x00000020u); // 80159CCC
  if (crb(c,2)) { goto L_80159D0C; } // 80159CD0
  c->r[3]=c->r[29]+0x00004200u; // 80159CD4
  c->lr=0x80159CDCu; f_8017E10C(c); // 80159CD8
  c->r[3]=c->r[28]|c->r[28]; // 80159CDC
  c->r[4]=0u+0x00000000u; // 80159CE0
  c->r[5]=0u+0x00000020u; // 80159CE4
  c->lr=0x80159CECu; f_8000443C(c); // 80159CE8
  c->r[3]=0u+0x00000000u; // 80159CEC
  goto L_80159D78; // 80159CF0
L_80159CF4:;
  c->r[3]=c->r[28]|c->r[28]; // 80159CF4
  c->r[4]=0u+0x00000000u; // 80159CF8
  c->r[5]=0u+0x00000020u; // 80159CFC
  c->lr=0x80159D04u; f_8000443C(c); // 80159D00
  c->r[3]=0u+0x00000000u; // 80159D04
  goto L_80159D78; // 80159D08
L_80159D0C:;
  c->r[4]=c->r[30]+0xFFFFF260u; // 80159D0C
  c->r[0]=R32(c->r[30]+0xFFFFF260u); // 80159D10
  c->r[5]=R32(c->r[4]+0x00000004u); // 80159D14
  c->r[3]=R32(c->r[4]+0x00000008u); // 80159D18
  c->r[5]=c->r[5]+c->r[3]; // 80159D1C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80159D20
  c->r[5]=c->r[5]+c->r[3]; // 80159D24
  c->r[3]=R32(c->r[4]+0x00000010u); // 80159D28
  c->r[5]=c->r[5]+c->r[3]; // 80159D2C
  c->r[3]=R32(c->r[4]+0x00000014u); // 80159D30
  c->r[5]=c->r[5]+c->r[3]; // 80159D34
  c->r[3]=R32(c->r[4]+0x00000018u); // 80159D38
  c->r[5]=c->r[5]+c->r[3]; // 80159D3C
  c->r[3]=R32(c->r[4]+0x0000001Cu); // 80159D40
  c->r[5]=c->r[5]+c->r[3]; // 80159D44
  cmpu(c,0,c->r[0],c->r[5]); // 80159D48
  if (crb(c,2)) { goto L_80159D68; } // 80159D4C
  c->r[3]=c->r[28]|c->r[28]; // 80159D50
  c->r[4]=0u+0x00000000u; // 80159D54
  c->r[5]=0u+0x00000020u; // 80159D58
  c->lr=0x80159D60u; f_8000443C(c); // 80159D5C
  c->r[3]=0u+0x00000000u; // 80159D60
  goto L_80159D78; // 80159D64
L_80159D68:;
  c->r[3]=c->r[28]|c->r[28]; // 80159D68
  c->r[5]=0u+0x00000020u; // 80159D6C
  c->lr=0x80159D74u; f_80004338(c); // 80159D70
  c->r[3]=0u+0x00000001u; // 80159D74
L_80159D78:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80159D78
  c->r[31]=R32(c->r[1]+0x000000ACu); // 80159D7C
  c->r[30]=R32(c->r[1]+0x000000A8u); // 80159D80
  c->r[29]=R32(c->r[1]+0x000000A4u); // 80159D84
  c->r[28]=R32(c->r[1]+0x000000A0u); // 80159D88
  c->lr=c->r[0]; // 80159D8C
  c->r[1]=c->r[1]+0x000000B0u; // 80159D90
  return; // 80159D94
}

// __OSInitNet
void f_80159D98(Ctx* __restrict c) {
  trace_call(0x80159D98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80159D98
  c->r[0]=c->lr; // 80159D9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80159DA0
  c->r[3]=c->r[1]+0x00000008u; // 80159DA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80159DA8
  c->r[31]=0u+0x802D0000u; // 80159DAC
  c->r[31]=c->r[31]+0x00004228u; // 80159DB0
  c->lr=0x80159DB8u; f_8014D4E0(c); // 80159DB4
  c->r[0]=R8(c->r[1]+0x00000009u); // 80159DB8
  cmpu(c,0,c->r[0],0x00000004u); // 80159DBC
  if (!crb(c,1)) { goto L_80159E38; } // 80159DC0
  cmpu(c,0,c->r[0],0x00000009u); // 80159DC4
  if (!crb(c,2)) { goto L_80159DD0; } // 80159DC8
  goto L_80159E38; // 80159DCC
L_80159DD0:;
  c->lr=0x80159DD4u; f_801FBDC4(c); // 80159DD0
  cmps(c,0,(int32_t)c->r[3],0); // 80159DD4
  if (crb(c,2)) { goto L_80159E0C; } // 80159DD8
  if (!crb(c,0)) { goto L_80159DF0; } // 80159DDC
  c->r[4]=c->r[3]|c->r[3]; // 80159DE0
  c->r[3]=c->r[31]+0x00000000u; // 80159DE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80159DE8
  c->lr=0x80159DF0u; f_801506B4(c); // 80159DEC
L_80159DF0:;
  c->lr=0x80159DF4u; f_801FB07C(c); // 80159DF0
  cmps(c,0,(int32_t)c->r[3],0); // 80159DF4
  if (!crb(c,0)) { goto L_80159E0C; } // 80159DF8
  c->r[4]=c->r[3]|c->r[3]; // 80159DFC
  c->r[3]=c->r[31]+0x00000034u; // 80159E00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80159E04
  c->lr=0x80159E0Cu; f_801506B4(c); // 80159E08
L_80159E0C:;
  c->r[0]=R32(c->r[13]+0xFFFFA990u); // 80159E0C
  cmps(c,0,(int32_t)c->r[0],0); // 80159E10
  if (!crb(c,2)) { goto L_80159E38; } // 80159E14
  c->r[3]=0u+0x00000000u; // 80159E18
  c->lr=0x80159E20u; f_801FBBBC(c); // 80159E1C
  cmps(c,0,(int32_t)c->r[3],0); // 80159E20
  if (crb(c,2)) { goto L_80159E38; } // 80159E24
  c->r[4]=c->r[3]|c->r[3]; // 80159E28
  c->r[3]=c->r[31]+0x00000068u; // 80159E2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80159E30
  c->lr=0x80159E38u; f_801506B4(c); // 80159E34
L_80159E38:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80159E38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80159E3C
  c->lr=c->r[0]; // 80159E40
  c->r[1]=c->r[1]+0x00000020u; // 80159E44
  return; // 80159E48
}

// __OSCreateNandbootInfo
void f_80159E4C(Ctx* __restrict c) {
  trace_call(0x80159E4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80159E4C
  c->r[0]=c->lr; // 80159E50
  c->r[3]=0u+0x802D0000u; // 80159E54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80159E58
  c->r[4]=c->r[1]+0x00000008u; // 80159E5C
  c->r[3]=c->r[3]+0x00004390u; // 80159E60
  c->lr=0x80159E68u; f_8017EE48(c); // 80159E64
  cmps(c,0,(int32_t)c->r[3],0); // 80159E68
  if (!crb(c,2)) { goto L_80159E84; } // 80159E6C
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 80159E70
  cmpu(c,0,c->r[0],0x0000003Fu); // 80159E74
  if (!crb(c,2)) { goto L_80159E84; } // 80159E78
  c->r[3]=0u+0x00000001u; // 80159E7C
  goto L_80159EEC; // 80159E80
L_80159E84:;
  cmps(c,0,(int32_t)c->r[3],0); // 80159E84
  if (!crb(c,2)) { goto L_80159EB4; } // 80159E88
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 80159E8C
  cmpu(c,0,c->r[0],0x0000003Fu); // 80159E90
  if (crb(c,2)) { goto L_80159EB4; } // 80159E94
  c->r[3]=0u+0x802D0000u; // 80159E98
  c->r[3]=c->r[3]+0x00004390u; // 80159E9C
  c->lr=0x80159EA4u; f_8017E1BC(c); // 80159EA0
  cmps(c,0,(int32_t)c->r[3],0); // 80159EA4
  if (crb(c,2)) { goto L_80159EC4; } // 80159EA8
  c->r[3]=0u+0x00000000u; // 80159EAC
  goto L_80159EEC; // 80159EB0
L_80159EB4:;
  cmps(c,0,(int32_t)c->r[3],-12); // 80159EB4
  if (crb(c,2)) { goto L_80159EC4; } // 80159EB8
  c->r[3]=0u+0x00000000u; // 80159EBC
  goto L_80159EEC; // 80159EC0
L_80159EC4:;
  c->r[3]=0u+0x802D0000u; // 80159EC4
  c->r[4]=0u+0x0000003Fu; // 80159EC8
  c->r[3]=c->r[3]+0x00004390u; // 80159ECC
  c->r[5]=0u+0x00000000u; // 80159ED0
  c->lr=0x80159ED8u; f_8017DFA8(c); // 80159ED4
  cmps(c,0,(int32_t)c->r[3],0); // 80159ED8
  if (crb(c,2)) { goto L_80159EE8; } // 80159EDC
  c->r[3]=0u+0x00000000u; // 80159EE0
  goto L_80159EEC; // 80159EE4
L_80159EE8:;
  c->r[3]=0u+0x00000001u; // 80159EE8
L_80159EEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80159EEC
  c->lr=c->r[0]; // 80159EF0
  c->r[1]=c->r[1]+0x00000010u; // 80159EF4
  return; // 80159EF8
}

// __OSWriteNandbootInfo
void f_80159EFC(Ctx* __restrict c) {
  trace_call(0x80159EFCu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80159EFC
  c->r[0]=c->lr; // 80159F00
  c->r[8]=c->r[3]+0x00000004u; // 80159F04
  c->r[7]=0u+0x00000000u; // 80159F08
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80159F0C
  c->r[0]=0u+0x00000040u; // 80159F10
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80159F14
  c->r[31]=c->r[3]|c->r[3]; // 80159F18
  c->ctr=c->r[0]; // 80159F1C
L_80159F20:;
  c->r[4]=R32(c->r[8]+0x00000000u); // 80159F20
  c->r[0]=R32(c->r[8]+0x00000004u); // 80159F24
  c->r[7]=c->r[7]+c->r[4]; // 80159F28
  c->r[4]=R32(c->r[8]+0x00000008u); // 80159F2C
  c->r[7]=c->r[7]+c->r[0]; // 80159F30
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 80159F34
  c->r[7]=c->r[7]+c->r[4]; // 80159F38
  c->r[4]=R32(c->r[8]+0x00000010u); // 80159F3C
  c->r[7]=c->r[7]+c->r[0]; // 80159F40
  c->r[0]=R32(c->r[8]+0x00000014u); // 80159F44
  c->r[7]=c->r[7]+c->r[4]; // 80159F48
  c->r[4]=R32(c->r[8]+0x00000018u); // 80159F4C
  c->r[7]=c->r[7]+c->r[0]; // 80159F50
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 80159F54
  c->r[7]=c->r[7]+c->r[4]; // 80159F58
  c->r[4]=R32(c->r[8]+0x00000020u); // 80159F5C
  c->r[7]=c->r[7]+c->r[0]; // 80159F60
  c->r[0]=R32(c->r[8]+0x00000024u); // 80159F64
  c->r[7]=c->r[7]+c->r[4]; // 80159F68
  c->r[4]=R32(c->r[8]+0x00000028u); // 80159F6C
  c->r[7]=c->r[7]+c->r[0]; // 80159F70
  c->r[0]=R32(c->r[8]+0x0000002Cu); // 80159F74
  c->r[7]=c->r[7]+c->r[4]; // 80159F78
  c->r[4]=R32(c->r[8]+0x00000030u); // 80159F7C
  c->r[7]=c->r[7]+c->r[0]; // 80159F80
  c->r[0]=R32(c->r[8]+0x00000034u); // 80159F84
  c->r[7]=c->r[7]+c->r[4]; // 80159F88
  c->r[4]=R32(c->r[8]+0x00000038u); // 80159F8C
  c->r[7]=c->r[7]+c->r[0]; // 80159F90
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 80159F94
  c->r[7]=c->r[7]+c->r[4]; // 80159F98
  c->r[8]=c->r[8]+0x00000040u; // 80159F9C
  c->r[7]=c->r[7]+c->r[0]; // 80159FA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80159F20; } // 80159FA4
  c->r[0]=R32(c->r[8]+0x00000000u); // 80159FA8
  c->r[6]=0u+0x802D0000u; // 80159FAC
  c->r[5]=R32(c->r[8]+0x00000004u); // 80159FB0
  c->r[4]=c->r[1]+0x00000008u; // 80159FB4
  c->r[7]=c->r[7]+c->r[0]; // 80159FB8
  c->r[0]=R32(c->r[8]+0x00000008u); // 80159FBC
  c->r[7]=c->r[7]+c->r[5]; // 80159FC0
  c->r[5]=R32(c->r[8]+0x0000000Cu); // 80159FC4
  c->r[7]=c->r[7]+c->r[0]; // 80159FC8
  c->r[0]=R32(c->r[8]+0x00000010u); // 80159FCC
  c->r[7]=c->r[7]+c->r[5]; // 80159FD0
  c->r[5]=R32(c->r[8]+0x00000014u); // 80159FD4
  c->r[7]=c->r[7]+c->r[0]; // 80159FD8
  c->r[0]=R32(c->r[8]+0x00000018u); // 80159FDC
  c->r[7]=c->r[7]+c->r[5]; // 80159FE0
  c->r[5]=0u+0x00000002u; // 80159FE4
  c->r[7]=c->r[7]+c->r[0]; // 80159FE8
  W32(c->r[3]+0x00000000u,c->r[7]); // 80159FEC
  c->r[3]=c->r[6]+0x00004390u; // 80159FF0
  c->lr=0x80159FF8u; f_8017F0E0(c); // 80159FF4
  cmps(c,0,(int32_t)c->r[3],0); // 80159FF8
  if (!crb(c,2)) { goto L_8015A03C; } // 80159FFC
  c->r[4]=c->r[31]|c->r[31]; // 8015A000
  c->r[3]=c->r[1]+0x00000008u; // 8015A004
  c->r[5]=0u+0x00001020u; // 8015A008
  c->lr=0x8015A010u; f_8017E4CC(c); // 8015A00C
  cmpu(c,0,c->r[3],0x00001020u); // 8015A010
  if (crb(c,2)) { goto L_8015A028; } // 8015A014
  c->r[3]=c->r[1]+0x00000008u; // 8015A018
  c->lr=0x8015A020u; f_8017F2D4(c); // 8015A01C
  c->r[3]=0u+0x00000000u; // 8015A020
  goto L_8015A040; // 8015A024
L_8015A028:;
  c->r[3]=c->r[1]+0x00000008u; // 8015A028
  c->lr=0x8015A030u; f_8017F2D4(c); // 8015A02C
  c->r[0]=cntlz(c->r[3]); // 8015A030
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8015A034
  goto L_8015A040; // 8015A038
L_8015A03C:;
  c->r[3]=0u+0x00000000u; // 8015A03C
L_8015A040:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8015A040
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 8015A044
  c->lr=c->r[0]; // 8015A048
  c->r[1]=c->r[1]+0x000000A0u; // 8015A04C
  return; // 8015A050
}

// OSPlayTimeIsLimited
void f_8015A054(Ctx* __restrict c) {
  trace_call(0x8015A054u);
  c->r[0]=R32(c->r[13]+0xFFFFAAC0u); // 8015A054
  c->r[3]=R32(c->r[13]+0xFFFFAAC4u); // 8015A058
  c->r[0]=c->r[3]|c->r[0]; // 8015A05C
  c->r[3]=addc(c,c->r[0],0xFFFFFFFFu,0); // 8015A060
  c->r[3]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 8015A064
  return; // 8015A068
}

// __OSPlayTimeRebootCallback
void f_8015A06C(Ctx* __restrict c) {
  trace_call(0x8015A06Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015A06C
  c->r[0]=c->lr; // 8015A070
  c->r[3]=0u+0x80000000u; // 8015A074
  W32(c->r[1]+0x00000014u,c->r[0]); // 8015A078
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8015A07C
  c->r[31]=R32(c->r[3]+0x000000DCu); // 8015A080
  goto L_8015A094; // 8015A084
L_8015A088:;
  c->r[3]=c->r[31]|c->r[31]; // 8015A088
  c->lr=0x8015A090u; f_80158040(c); // 8015A08C
  c->r[31]=R32(c->r[31]+0x000002FCu); // 8015A090
L_8015A094:;
  cmps(c,0,(int32_t)c->r[31],0); // 8015A094
  if (!crb(c,2)) { IRQCHK(c); goto L_8015A088; } // 8015A098
  c->r[3]=0u+0x80000000u; // 8015A09C
  c->r[4]=0u+0x80160000u; // 8015A0A0
  c->r[3]=R32(c->r[3]+0x00003128u); // 8015A0A4
  c->r[4]=c->r[4]+0xFFFFA3C4u; // 8015A0A8
  c->r[5]=0u+0x00000000u; // 8015A0AC
  c->r[7]=0u+0x00001000u; // 8015A0B0
  c->r[31]=c->r[3]+0xFFFFECE0u; // 8015A0B4
  c->r[8]=0u+0x00000000u; // 8015A0B8
  c->r[9]=0u+0x00000000u; // 8015A0BC
  c->r[3]=c->r[31]|c->r[31]; // 8015A0C0
  c->r[6]=c->r[31]+0x00001320u; // 8015A0C4
  c->lr=0x8015A0CCu; f_80157740(c); // 8015A0C8
  cmps(c,0,(int32_t)c->r[3],0); // 8015A0CC
  if (!crb(c,2)) { goto L_8015A0D8; } // 8015A0D0
  c->lr=0x8015A0D8u; f_80156324(c); // 8015A0D4
L_8015A0D8:;
  c->r[3]=c->r[31]|c->r[31]; // 8015A0D8
  c->lr=0x8015A0E0u; f_80157DA8(c); // 8015A0DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015A0E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8015A0E4
  c->lr=c->r[0]; // 8015A0E8
  c->r[1]=c->r[1]+0x00000010u; // 8015A0EC
  return; // 8015A0F0
}

// __OSPlayTimeFadeLastAIDCallback
void f_8015A0F4(Ctx* __restrict c) {
  trace_call(0x8015A0F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015A0F4
  c->r[0]=c->lr; // 8015A0F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8015A0FC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8015A100
  W32(c->r[1]+0x00000038u,c->r[30]); // 8015A104
  W32(c->r[1]+0x00000034u,c->r[29]); // 8015A108
  c->r[3]=R32(c->r[13]+0xFFFFAAB0u); // 8015A10C
  c->r[12]=R32(c->r[3]+0x00000490u); // 8015A110
  cmps(c,0,(int32_t)c->r[12],0); // 8015A114
  if (crb(c,2)) { goto L_8015A124; } // 8015A118
  c->ctr=c->r[12]; // 8015A11C
  if (true) { c->lr=0x8015A124u; dispatch(c,c->ctr); } // 8015A120
L_8015A124:;
  c->r[3]=R32(c->r[13]+0xFFFFAAB0u); // 8015A124
  c->r[0]=R32(c->r[3]+0x00000488u); // 8015A128
  cmps(c,0,(int32_t)c->r[0],0); // 8015A12C
  if (!crb(c,2)) { goto L_8015A144; } // 8015A130
  c->lr=0x8015A138u; f_80174614(c); // 8015A134
  c->r[4]=R32(c->r[13]+0xFFFFAAB0u); // 8015A138
  c->r[0]=c->r[3]+0x80000000u; // 8015A13C
  W32(c->r[4]+0x00000484u,c->r[0]); // 8015A140
L_8015A144:;
  c->r[3]=R32(c->r[13]+0xFFFFAAB0u); // 8015A144
  c->r[0]=R32(c->r[3]+0x00000488u); // 8015A148
  cmpu(c,0,c->r[0],0x00000001u); // 8015A14C
  if (!crb(c,2)) { goto L_8015A188; } // 8015A150
  c->r[3]=R32(c->r[3]+0x00000484u); // 8015A154
  c->r[4]=0u+0x00000004u; // 8015A158
  c->lr=0x8015A160u; f_8014F810(c); // 8015A15C
  c->r[4]=R32(c->r[13]+0xFFFFAAB0u); // 8015A160
  c->r[3]=R32(c->r[4]+0x00000484u); // 8015A164
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 8015A168
  c->r[3]=c->r[3]+0x00000002u; // 8015A16C
  W16(c->r[4]+0x0000048Cu,c->r[0]); // 8015A170
  W32(c->r[4]+0x00000484u,c->r[3]); // 8015A174
  c->r[4]=R32(c->r[13]+0xFFFFAAB0u); // 8015A178
  c->r[3]=R32(c->r[4]+0x00000484u); // 8015A17C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 8015A180
  W16(c->r[4]+0x0000048Eu,c->r[0]); // 8015A184
L_8015A188:;
  c->r[3]=R32(c->r[13]+0xFFFFAAB0u); // 8015A188
  c->r[0]=R32(c->r[3]+0x00000488u); // 8015A18C
  cmpu(c,0,c->r[0],0x00000001u); // 8015A190
  if (crb(c,0)) { goto L_8015A284; } // 8015A194
  c->r[0]=R32(c->r[3]+0x00000480u); // 8015A198
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)576); // 8015A19C
  c->r[31]=c->r[3]+c->r[0]; // 8015A1A0
  c->r[30]=c->r[31]|c->r[31]; // 8015A1A4
  c->lr=0x8015A1ACu; f_8017462C(c); // 8015A1A8
  c->r[29]=c->r[3]|c->r[3]; // 8015A1AC
  {uint32_t ea=c->r[2]+0xFFFFA980u; c->f[2]=c->ps1[2]=RF32(ea);} // 8015A1B0
  {uint32_t ea=c->r[2]+0xFFFFA988u; c->f[1]=RF64(ea);} // 8015A1B4
  c->r[5]=c->r[29]|c->r[29]; // 8015A1B8
  c->r[4]=0u+0x43300000u; // 8015A1BC
  goto L_8015A244; // 8015A1C0
L_8015A1C4:;
  c->r[3]=R32(c->r[13]+0xFFFFAAB0u); // 8015A1C4
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 8015A1C8
  W32(c->r[1]+0x00000008u,c->r[4]); // 8015A1CC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Cu); // 8015A1D0
  W32(c->r[1]+0x00000018u,c->r[4]); // 8015A1D4
  W16(c->r[30]+0x00000000u,c->r[0]); // 8015A1D8
  c->r[3]=R32(c->r[13]+0xFFFFAAB0u); // 8015A1DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Eu); // 8015A1E0
  W16(c->r[30]+0x00000002u,c->r[0]); // 8015A1E4
  c->r[30]=c->r[30]+0x00000004u; // 8015A1E8
  c->r[3]=R32(c->r[13]+0xFFFFAAB0u); // 8015A1EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Cu); // 8015A1F0
  c->r[0]=c->r[0]^0x80000000u; // 8015A1F4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8015A1F8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8015A1FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8015A200
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8015A204
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8015A208
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8015A20C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015A210
  W16(c->r[3]+0x0000048Cu,c->r[0]); // 8015A214
  c->r[3]=R32(c->r[13]+0xFFFFAAB0u); // 8015A218
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Eu); // 8015A21C
  c->r[0]=c->r[0]^0x80000000u; // 8015A220
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8015A224
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8015A228
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8015A22C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8015A230
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8015A234
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 8015A238
  c->r[0]=R32(c->r[1]+0x00000024u); // 8015A23C
  W16(c->r[3]+0x0000048Eu,c->r[0]); // 8015A240
L_8015A244:;
  cmps(c,0,(int32_t)c->r[5],0); // 8015A244
  if (!crb(c,2)) { IRQCHK(c); goto L_8015A1C4; } // 8015A248
  c->r[3]=c->r[31]|c->r[31]; // 8015A24C
  c->r[4]=c->r[29]|c->r[29]; // 8015A250
  c->lr=0x8015A258u; f_8014F83C(c); // 8015A254
  c->r[3]=c->r[31]|c->r[31]; // 8015A258
  c->r[4]=c->r[29]|c->r[29]; // 8015A25C
  c->lr=0x8015A264u; f_80174560(c); // 8015A260
  c->r[4]=R32(c->r[13]+0xFFFFAAB0u); // 8015A264
  c->r[3]=R32(c->r[4]+0x00000480u); // 8015A268
  c->r[0]=c->r[3]+0x00000001u; // 8015A26C
  W32(c->r[4]+0x00000480u,c->r[0]); // 8015A270
  c->r[3]=R32(c->r[13]+0xFFFFAAB0u); // 8015A274
  c->r[0]=R32(c->r[3]+0x00000480u); // 8015A278
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8015A27C
  W32(c->r[3]+0x00000480u,c->r[0]); // 8015A280
L_8015A284:;
  c->r[4]=R32(c->r[13]+0xFFFFAAB0u); // 8015A284
  c->r[3]=R32(c->r[4]+0x00000488u); // 8015A288
  c->r[0]=c->r[3]+0x00000001u; // 8015A28C
  W32(c->r[4]+0x00000488u,c->r[0]); // 8015A290
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8015A294
  c->r[30]=R32(c->r[1]+0x00000038u); // 8015A298
  c->r[29]=R32(c->r[1]+0x00000034u); // 8015A29C
  c->r[0]=R32(c->r[1]+0x00000044u); // 8015A2A0
  c->lr=c->r[0]; // 8015A2A4
  c->r[1]=c->r[1]+0x00000040u; // 8015A2A8
  return; // 8015A2AC
}

// __OSWriteExpiredFlag
void f_8015A2B0(Ctx* __restrict c) {
  trace_call(0x8015A2B0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8015A2B0
  c->r[12]=c->r[1]|c->r[1]; // 8015A2B4
  c->r[11]=addc(c,~c->r[11],0xFFFFFF00u,1); // 8015A2B8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8015A2BC
  c->r[0]=c->lr; // 8015A2C0
  c->r[3]=0u+0x802D0000u; // 8015A2C4
  c->r[5]=0u+0x00000000u; // 8015A2C8
  W32(c->r[12]+0x00000004u,c->r[0]); // 8015A2CC
  c->r[3]=c->r[3]+0x000043B0u; // 8015A2D0
  c->r[4]=0u+0x0000003Fu; // 8015A2D4
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8015A2D8
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8015A2DC
  c->r[30]=0u+0x00000000u; // 8015A2E0
  c->lr=0x8015A2E8u; f_8017DFA8(c); // 8015A2E4
  cmps(c,0,(int32_t)c->r[3],0); // 8015A2E8
  c->r[31]=c->r[3]|c->r[3]; // 8015A2EC
  if (crb(c,2)) { goto L_8015A2FC; } // 8015A2F0
  cmps(c,0,(int32_t)c->r[3],-6); // 8015A2F4
  if (!crb(c,2)) { goto L_8015A384; } // 8015A2F8
L_8015A2FC:;
  c->r[3]=0u+0x802D0000u; // 8015A2FC
  c->r[4]=c->r[1]+0x00000040u; // 8015A300
  c->r[3]=c->r[3]+0x000043B0u; // 8015A304
  c->r[5]=0u+0x00000002u; // 8015A308
  c->lr=0x8015A310u; f_8017F0E0(c); // 8015A30C
  cmps(c,0,(int32_t)c->r[3],0); // 8015A310
  c->r[31]=c->r[3]|c->r[3]; // 8015A314
  if (!crb(c,2)) { goto L_8015A384; } // 8015A318
  c->r[30]=0u+0x00000001u; // 8015A31C
  c->lr=0x8015A324u; f_80185008(c); // 8015A320
  cmps(c,0,(int32_t)c->r[3],0); // 8015A324
  c->r[31]=c->r[3]|c->r[3]; // 8015A328
  if (!crb(c,2)) { goto L_8015A384; } // 8015A32C
  c->r[3]=c->r[1]+0x00000020u; // 8015A330
  c->r[4]=0u+0x00000000u; // 8015A334
  c->r[5]=0u+0x00000020u; // 8015A338
  c->lr=0x8015A340u; f_8000443C(c); // 8015A33C
  c->r[3]=c->r[1]+0x00000020u; // 8015A340
  c->lr=0x8015A348u; f_8018579C(c); // 8015A344
  cmps(c,0,(int32_t)c->r[3],0); // 8015A348
  c->r[31]=c->r[3]|c->r[3]; // 8015A34C
  if (!crb(c,2)) { goto L_8015A384; } // 8015A350
  c->r[3]=c->r[1]+0x00000040u; // 8015A354
  c->r[4]=c->r[1]+0x00000020u; // 8015A358
  c->r[5]=0u+0x00000020u; // 8015A35C
  c->lr=0x8015A364u; f_8017E4CC(c); // 8015A360
  cmps(c,0,(int32_t)c->r[3],0); // 8015A364
  c->r[31]=c->r[3]|c->r[3]; // 8015A368
  if (crb(c,0)) { goto L_8015A384; } // 8015A36C
  cmps(c,0,(int32_t)c->r[3],32); // 8015A370
  if (crb(c,2)) { goto L_8015A380; } // 8015A374
  c->r[31]=0u+0xFFFFFFF8u; // 8015A378
  goto L_8015A384; // 8015A37C
L_8015A380:;
  c->r[31]=0u+0x00000000u; // 8015A380
L_8015A384:;
  cmps(c,0,(int32_t)c->r[30],0); // 8015A384
  if (crb(c,2)) { goto L_8015A394; } // 8015A388
  c->r[3]=c->r[1]+0x00000040u; // 8015A38C
  c->lr=0x8015A394u; f_8017F2D4(c); // 8015A390
L_8015A394:;
  cmps(c,0,(int32_t)c->r[31],0); // 8015A394
  if (!crb(c,2)) { goto L_8015A3A4; } // 8015A398
  c->r[3]=0u+0x00000001u; // 8015A39C
  goto L_8015A3A8; // 8015A3A0
L_8015A3A4:;
  c->r[3]=0u+0x00000000u; // 8015A3A4
L_8015A3A8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8015A3A8
  c->r[0]=R32(c->r[10]+0x00000004u); // 8015A3AC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8015A3B0
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8015A3B4
  c->lr=c->r[0]; // 8015A3B8
  c->r[1]=c->r[10]|c->r[10]; // 8015A3BC
  return; // 8015A3C0
}

// __OSPlayTimeRebootThread
void f_8015A3C4(Ctx* __restrict c) {
  trace_call(0x8015A3C4u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8015A3C4
  c->r[12]=c->r[1]|c->r[1]; // 8015A3C8
  c->r[11]=addc(c,~c->r[11],0xFFFFFB20u,1); // 8015A3CC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8015A3D0
  c->r[0]=c->lr; // 8015A3D4
  c->r[4]=0u+0x00000000u; // 8015A3D8
  c->r[5]=0u+0x00000494u; // 8015A3DC
  W32(c->r[12]+0x00000004u,c->r[0]); // 8015A3E0
  c->r[3]=c->r[1]+0x00000020u; // 8015A3E4
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8015A3E8
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8015A3EC
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 8015A3F0
  W32(c->r[13]+0xFFFFAAB0u,c->r[3]); // 8015A3F4
  c->lr=0x8015A3FCu; f_8000443C(c); // 8015A3F8
  c->r[3]=0u+0x80160000u; // 8015A3FC
  c->r[3]=c->r[3]+0xFFFFA0F4u; // 8015A400
  c->lr=0x8015A408u; f_8017451C(c); // 8015A404
  c->r[5]=R32(c->r[13]+0xFFFFAAB0u); // 8015A408
  c->r[4]=0u+0xCCCD0000u; // 8015A40C
  c->r[31]=c->r[4]+0xFFFFCCCDu; // 8015A410
  c->r[30]=0u+0x00000000u; // 8015A414
  W32(c->r[5]+0x00000490u,c->r[3]); // 8015A418
L_8015A41C:;
  c->r[0]=(uint32_t)(((uint64_t)c->r[31]*(uint64_t)c->r[30])>>32); // 8015A41C
  c->r[3]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8015A420
  c->r[29]=c->r[3]+0x00000001u; // 8015A424
  cmpu(c,0,c->r[29],0x00000007u); // 8015A428
  if (!crb(c,1)) { goto L_8015A434; } // 8015A42C
  c->r[29]=0u+0x00000007u; // 8015A430
L_8015A434:;
  c->lr=0x8015A438u; f_801600C8(c); // 8015A434
  c->r[4]=c->r[29]|c->r[29]; // 8015A438
  c->r[5]=c->r[29]|c->r[29]; // 8015A43C
  c->r[3]=0u+0x00000001u; // 8015A440
  c->lr=0x8015A448u; f_80159178(c); // 8015A444
  c->r[30]=c->r[30]+0x00000001u; // 8015A448
  cmpu(c,0,c->r[30],0x00000014u); // 8015A44C
  if (crb(c,0)) { IRQCHK(c); goto L_8015A41C; } // 8015A450
  c->r[3]=0u+0x00000000u; // 8015A454
  c->lr=0x8015A45Cu; f_8017451C(c); // 8015A458
  c->r[3]=0u+0x00000001u; // 8015A45C
  c->lr=0x8015A464u; f_80161200(c); // 8015A460
  c->lr=0x8015A468u; f_80161080(c); // 8015A464
  c->lr=0x8015A46Cu; f_80154410(c); // 8015A468
  c->r[0]=R32(c->r[13]+0xFFFFAAB4u); // 8015A46C
  c->r[31]=c->r[3]|c->r[3]; // 8015A470
  cmps(c,0,(int32_t)c->r[0],0); // 8015A474
  if (crb(c,2)) { goto L_8015A480; } // 8015A478
  c->lr=0x8015A480u; f_8015A2B0(c); // 8015A47C
L_8015A480:;
  c->r[3]=c->r[31]|c->r[31]; // 8015A480
  c->lr=0x8015A488u; f_80154438(c); // 8015A484
  c->lr=0x8015A48Cu; f_80156144(c); // 8015A488
  c->r[3]=0u+0x00000000u; // 8015A48C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8015A490
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8015A494
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8015A498
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 8015A49C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8015A4A0
  c->lr=c->r[0]; // 8015A4A4
  c->r[1]=c->r[10]|c->r[10]; // 8015A4A8
  return; // 8015A4AC
}

// __OSPlayTimeAlarmExpired
void f_8015A4B0(Ctx* __restrict c) {
  trace_call(0x8015A4B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015A4B0
  c->r[0]=c->lr; // 8015A4B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8015A4B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8015A4BC
  c->r[0]=R32(c->r[13]+0xFFFFAAB8u); // 8015A4C0
  cmps(c,0,(int32_t)c->r[0],0); // 8015A4C4
  if (crb(c,2)) { goto L_8015A554; } // 8015A4C8
  c->r[3]=0u+0x80000000u; // 8015A4CC
  c->r[31]=R32(c->r[3]+0x000000DCu); // 8015A4D0
  goto L_8015A4F0; // 8015A4D4
L_8015A4D8:;
  c->r[0]=R32(c->r[13]+0xFFFFAAB8u); // 8015A4D8
  cmpu(c,0,c->r[31],c->r[0]); // 8015A4DC
  if (crb(c,2)) { goto L_8015A4EC; } // 8015A4E0
  c->r[3]=c->r[31]|c->r[31]; // 8015A4E4
  c->lr=0x8015A4ECu; f_80158040(c); // 8015A4E8
L_8015A4EC:;
  c->r[31]=R32(c->r[31]+0x000002FCu); // 8015A4EC
L_8015A4F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8015A4F0
  if (!crb(c,2)) { IRQCHK(c); goto L_8015A4D8; } // 8015A4F4
  c->r[31]=0u+0x80440000u; // 8015A4F8
  c->r[3]=c->r[31]+0xFFFFF280u; // 8015A4FC
  c->lr=0x8015A504u; f_8014E820(c); // 8015A500
  c->r[3]=0u+0x80000000u; // 8015A504
  c->r[7]=0u+0x80160000u; // 8015A508
  c->r[0]=R32(c->r[3]+0x000000F8u); // 8015A50C
  c->r[4]=0u+0x000000F0u; // 8015A510
  c->r[5]=0u+0x00000000u; // 8015A514
  c->r[3]=c->r[31]+0xFFFFF280u; // 8015A518
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8015A51C
  c->r[7]=c->r[7]+0xFFFFA06Cu; // 8015A520
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[4])>>32); // 8015A524
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 8015A528
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)240); // 8015A52C
  c->r[5]=c->r[0]+c->r[4]; // 8015A530
  c->lr=0x8015A538u; f_8014EA80(c); // 8015A534
  goto L_8015A540; // 8015A538
L_8015A53C:;
  c->lr=0x8015A540u; f_80157DA8(c); // 8015A53C
L_8015A540:;
  c->r[3]=R32(c->r[13]+0xFFFFAAB8u); // 8015A540
  c->r[0]=R32(c->r[3]+0x000002CCu); // 8015A544
  cmps(c,0,(int32_t)c->r[0],0); // 8015A548
  if (crb(c,1)) { IRQCHK(c); goto L_8015A53C; } // 8015A54C
  goto L_8015A5B8; // 8015A550
L_8015A554:;
  c->r[3]=0u+0x80000000u; // 8015A554
  c->r[31]=R32(c->r[3]+0x000000DCu); // 8015A558
  goto L_8015A56C; // 8015A55C
L_8015A560:;
  c->r[3]=c->r[31]|c->r[31]; // 8015A560
  c->lr=0x8015A568u; f_80158040(c); // 8015A564
  c->r[31]=R32(c->r[31]+0x000002FCu); // 8015A568
L_8015A56C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8015A56C
  if (!crb(c,2)) { IRQCHK(c); goto L_8015A560; } // 8015A570
  c->r[3]=0u+0x80000000u; // 8015A574
  c->r[4]=0u+0x80160000u; // 8015A578
  c->r[3]=R32(c->r[3]+0x00003128u); // 8015A57C
  c->r[4]=c->r[4]+0xFFFFA3C4u; // 8015A580
  c->r[5]=0u+0x00000000u; // 8015A584
  c->r[7]=0u+0x00001000u; // 8015A588
  c->r[31]=c->r[3]+0xFFFFECE0u; // 8015A58C
  c->r[8]=0u+0x00000000u; // 8015A590
  c->r[9]=0u+0x00000000u; // 8015A594
  c->r[3]=c->r[31]|c->r[31]; // 8015A598
  c->r[6]=c->r[31]+0x00001320u; // 8015A59C
  c->lr=0x8015A5A4u; f_80157740(c); // 8015A5A0
  cmps(c,0,(int32_t)c->r[3],0); // 8015A5A4
  if (!crb(c,2)) { goto L_8015A5B0; } // 8015A5A8
  c->lr=0x8015A5B0u; f_80156324(c); // 8015A5AC
L_8015A5B0:;
  c->r[3]=c->r[31]|c->r[31]; // 8015A5B0
  c->lr=0x8015A5B8u; f_80157DA8(c); // 8015A5B4
L_8015A5B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015A5B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8015A5BC
  c->lr=c->r[0]; // 8015A5C0
  c->r[1]=c->r[1]+0x00000010u; // 8015A5C4
  return; // 8015A5C8
}

// __OSGetPlayTime
void f_8015A5CC(Ctx* __restrict c) {
  trace_call(0x8015A5CCu);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8015A5CC
  c->r[12]=c->r[1]|c->r[1]; // 8015A5D0
  c->r[11]=addc(c,~c->r[11],0xFFFFFE80u,1); // 8015A5D4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8015A5D8
  c->r[0]=c->lr; // 8015A5DC
  W32(c->r[12]+0x00000004u,c->r[0]); // 8015A5E0
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 8015A5E4
  c->r[0]=0u+0x00000000u; // 8015A5E8
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8015A5EC
  c->r[31]=c->r[5]|c->r[5]; // 8015A5F0
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8015A5F4
  c->r[30]=0u+0x00000000u; // 8015A5F8
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 8015A5FC
  c->r[29]=c->r[4]|c->r[4]; // 8015A600
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 8015A604
  c->r[28]=c->r[3]|c->r[3]; // 8015A608
  W32(c->r[1]+0x00000020u,c->r[0]); // 8015A60C
  if (crb(c,2)) { goto L_8015A628; } // 8015A610
  c->r[4]=c->r[28]|c->r[28]; // 8015A614
  c->r[3]=c->r[1]+0x00000080u; // 8015A618
  c->r[5]=0u+0x000000D8u; // 8015A61C
  c->lr=0x8015A624u; f_80004338(c); // 8015A620
  c->r[28]=c->r[1]+0x00000080u; // 8015A624
L_8015A628:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 8015A628
  c->r[6]=c->r[1]+0x00000020u; // 8015A62C
  c->r[4]=R32(c->r[28]+0x00000008u); // 8015A630
  c->r[5]=0u+0x00000000u; // 8015A634
  c->lr=0x8015A63Cu; f_80185834(c); // 8015A638
  cmps(c,0,(int32_t)c->r[3],0); // 8015A63C
  if (crb(c,1)) { goto L_8015A670; } // 8015A640
  if (crb(c,2)) { goto L_8015A64C; } // 8015A644
  goto L_8015A670; // 8015A648
L_8015A64C:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 8015A64C
  cmps(c,0,(int32_t)c->r[0],0); // 8015A650
  if (crb(c,2)) { goto L_8015A670; } // 8015A654
  c->r[3]=R32(c->r[28]+0x00000004u); // 8015A658
  c->r[5]=c->r[1]+0x00000040u; // 8015A65C
  c->r[4]=R32(c->r[28]+0x00000008u); // 8015A660
  c->r[6]=c->r[1]+0x00000020u; // 8015A664
  c->lr=0x8015A66Cu; f_80185834(c); // 8015A668
  cmps(c,0,(int32_t)c->r[3],0); // 8015A66C
L_8015A670:;
  cmps(c,0,(int32_t)c->r[3],0); // 8015A670
  if (!crb(c,2)) { goto L_8015A770; } // 8015A674
  c->r[0]=0u+0x00000008u; // 8015A678
  c->r[5]=0u+0x00000000u; // 8015A67C
  c->r[4]=0u+0x00000000u; // 8015A680
  c->ctr=c->r[0]; // 8015A684
L_8015A688:;
  c->r[6]=c->r[28]+c->r[4]; // 8015A688
  c->r[0]=R32(c->r[6]+0x00000098u); // 8015A68C
  cmpu(c,0,c->r[0],0x00000001u); // 8015A690
  if (!crb(c,2)) { goto L_8015A6E8; } // 8015A694
  c->r[0]=0u+0x00000001u; // 8015A698
  W32(c->r[29]+0x00000000u,c->r[0]); // 8015A69C
  c->r[0]=R32(c->r[1]+0x00000020u); // 8015A6A0
  cmps(c,0,(int32_t)c->r[0],0); // 8015A6A4
  if (!crb(c,2)) { goto L_8015A6B8; } // 8015A6A8
  c->r[0]=R32(c->r[6]+0x0000009Cu); // 8015A6AC
  W32(c->r[31]+0x00000000u,c->r[0]); // 8015A6B0
  goto L_8015A770; // 8015A6B4
L_8015A6B8:;
  c->r[5]=c->r[1]+0x00000040u; // 8015A6B8
  c->r[0]=R32(c->r[6]+0x0000009Cu); // 8015A6BC
  c->r[4]=c->r[5]+c->r[4]; // 8015A6C0
  c->r[4]=R32(c->r[4]+0x00000004u); // 8015A6C4
  cmpu(c,0,c->r[4],c->r[0]); // 8015A6C8
  if (crb(c,0)) { goto L_8015A6DC; } // 8015A6CC
  c->r[0]=0u+0x00000000u; // 8015A6D0
  W32(c->r[31]+0x00000000u,c->r[0]); // 8015A6D4
  goto L_8015A770; // 8015A6D8
L_8015A6DC:;
  c->r[0]=c->r[0]-c->r[4]; // 8015A6DC
  W32(c->r[31]+0x00000000u,c->r[0]); // 8015A6E0
  goto L_8015A770; // 8015A6E4
L_8015A6E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8015A6E8
  if (crb(c,2)) { goto L_8015A6F4; } // 8015A6EC
  c->r[30]=c->r[5]+0x00000001u; // 8015A6F0
L_8015A6F4:;
  c->r[5]=c->r[5]+0x00000001u; // 8015A6F4
  c->r[4]=c->r[4]+0x00000008u; // 8015A6F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8015A688; } // 8015A6FC
  cmps(c,0,(int32_t)c->r[30],0); // 8015A700
  if (!crb(c,2)) { goto L_8015A71C; } // 8015A704
  c->r[4]=0u+0x00000000u; // 8015A708
  c->r[0]=0u+0xFFFFFFFFu; // 8015A70C
  W32(c->r[29]+0x00000000u,c->r[4]); // 8015A710
  W32(c->r[31]+0x00000000u,c->r[0]); // 8015A714
  goto L_8015A770; // 8015A718
L_8015A71C:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 8015A71C
  c->r[6]=rotl(c->r[30],3)&0xFFFFFFF8u; // 8015A720
  c->r[4]=c->r[28]+c->r[6]; // 8015A724
  c->r[0]=R32(c->r[4]+0x00000098u); // 8015A728
  cmpu(c,0,c->r[0],0x00000004u); // 8015A72C
  if (!crb(c,2)) { goto L_8015A768; } // 8015A730
  c->r[0]=0u+0x00000004u; // 8015A734
  W32(c->r[29]+0x00000000u,c->r[0]); // 8015A738
  c->r[5]=R32(c->r[4]+0x0000009Cu); // 8015A73C
  W32(c->r[31]+0x00000000u,c->r[5]); // 8015A740
  c->r[0]=R32(c->r[1]+0x00000020u); // 8015A744
  cmps(c,0,(int32_t)c->r[0],0); // 8015A748
  if (crb(c,2)) { goto L_8015A770; } // 8015A74C
  c->r[0]=c->r[1]+0x00000040u; // 8015A750
  c->r[4]=c->r[0]+c->r[6]; // 8015A754
  c->r[0]=R32(c->r[4]+0x00000004u); // 8015A758
  c->r[0]=c->r[5]-c->r[0]; // 8015A75C
  W32(c->r[31]+0x00000000u,c->r[0]); // 8015A760
  goto L_8015A770; // 8015A764
L_8015A768:;
  c->r[0]=0u+0x00000009u; // 8015A768
  W32(c->r[29]+0x00000000u,c->r[0]); // 8015A76C
L_8015A770:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8015A770
  c->r[0]=R32(c->r[10]+0x00000004u); // 8015A774
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8015A778
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8015A77C
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 8015A780
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 8015A784
  c->lr=c->r[0]; // 8015A788
  c->r[1]=c->r[10]|c->r[10]; // 8015A78C
  return; // 8015A790
}

// __OSInitPlayTime
void f_8015A794(Ctx* __restrict c) {
  trace_call(0x8015A794u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8015A794
  c->r[12]=c->r[1]|c->r[1]; // 8015A798
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 8015A79C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8015A7A0
  c->r[0]=c->lr; // 8015A7A4
  c->r[3]=0u+0x00000000u; // 8015A7A8
  W32(c->r[12]+0x00000004u,c->r[0]); // 8015A7AC
  c->r[0]=0u+0x00000001u; // 8015A7B0
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8015A7B4
  W32(c->r[13]+0xFFFFAAC4u,c->r[3]); // 8015A7B8
  W32(c->r[13]+0xFFFFAAC0u,c->r[3]); // 8015A7BC
  W32(c->r[13]+0xFFFFAAB8u,c->r[3]); // 8015A7C0
  W32(c->r[13]+0xFFFFAAB4u,c->r[0]); // 8015A7C4
  c->lr=0x8015A7CCu; f_80185008(c); // 8015A7C8
  cmps(c,0,(int32_t)c->r[3],0); // 8015A7CC
  if (crb(c,2)) { goto L_8015A7D8; } // 8015A7D0
  goto L_8015A8D0; // 8015A7D4
L_8015A7D8:;
  c->r[4]=c->r[1]+0x00000040u; // 8015A7D8
  c->r[3]=0u+0x00000000u; // 8015A7DC
  c->lr=0x8015A7E4u; f_8018545C(c); // 8015A7E0
  cmps(c,0,(int32_t)c->r[3],-1017); // 8015A7E4
  if (crb(c,2)) { goto L_8015A808; } // 8015A7E8
  cmps(c,0,(int32_t)c->r[3],0); // 8015A7EC
  if (crb(c,2)) { goto L_8015A7F8; } // 8015A7F0
  goto L_8015A808; // 8015A7F4
L_8015A7F8:;
  c->r[3]=c->r[1]+0x00000040u; // 8015A7F8
  c->r[4]=c->r[1]+0x00000020u; // 8015A7FC
  c->r[5]=c->r[1]+0x00000024u; // 8015A800
  c->lr=0x8015A808u; f_8015A5CC(c); // 8015A804
L_8015A808:;
  cmps(c,0,(int32_t)c->r[3],0); // 8015A808
  if (crb(c,2)) { goto L_8015A81C; } // 8015A80C
  cmps(c,0,(int32_t)c->r[3],-1017); // 8015A810
  if (crb(c,2)) { goto L_8015A8D0; } // 8015A814
  goto L_8015A8D0; // 8015A818
L_8015A81C:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 8015A81C
  cmps(c,0,(int32_t)c->r[0],0); // 8015A820
  if (crb(c,2)) { goto L_8015A8D0; } // 8015A824
  cmps(c,0,(int32_t)c->r[0],1); // 8015A828
  if (!crb(c,2)) { goto L_8015A8D0; } // 8015A82C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8015A830
  cmps(c,0,(int32_t)c->r[0],0); // 8015A834
  if (!crb(c,2)) { goto L_8015A854; } // 8015A838
  c->r[3]=0u+0x802D0000u; // 8015A83C
  c->r[4]=0u+0x00000307u; // 8015A840
  c->r[3]=c->r[3]+0x000043C4u; // 8015A844
  c->r[5]=c->r[13]+0xFFFF9000u; // 8015A848
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8015A84C
  c->lr=0x8015A854u; f_80150744(c); // 8015A850
L_8015A854:;
  c->r[31]=0u+0x80440000u; // 8015A854
  c->r[3]=c->r[31]+0xFFFFF280u; // 8015A858
  c->lr=0x8015A860u; f_8014E820(c); // 8015A85C
  c->r[3]=0u+0x80000000u; // 8015A860
  c->r[7]=0u+0x80160000u; // 8015A864
  c->r[0]=R32(c->r[3]+0x000000F8u); // 8015A868
  c->r[4]=0u+0x00000001u; // 8015A86C
  c->r[5]=R32(c->r[1]+0x00000024u); // 8015A870
  c->r[9]=0u+0x00000000u; // 8015A874
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8015A878
  c->r[3]=c->r[31]+0xFFFFF280u; // 8015A87C
  c->r[8]=addc(c,c->r[5],c->r[4],0); // 8015A880
  c->r[7]=c->r[7]+0xFFFFA4B0u; // 8015A884
  c->r[0]=addc(c,c->r[9],c->r[9],c->xer_ca); // 8015A888
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 8015A88C
  c->r[4]=(uint32_t)(((uint64_t)c->r[8]*(uint64_t)c->r[6])>>32); // 8015A890
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[9]); // 8015A894
  c->r[4]=c->r[4]+c->r[5]; // 8015A898
  c->r[6]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[6]); // 8015A89C
  c->r[5]=c->r[4]+c->r[0]; // 8015A8A0
  c->lr=0x8015A8A8u; f_8014EA80(c); // 8015A8A4
  c->r[4]=c->r[31]+0xFFFFF280u; // 8015A8A8
  c->r[3]=0u+0x802D0000u; // 8015A8AC
  c->r[0]=R32(c->r[4]+0x00000008u); // 8015A8B0
  c->r[3]=c->r[3]+0x000043D4u; // 8015A8B4
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 8015A8B8
  W32(c->r[13]+0xFFFFAAC0u,c->r[0]); // 8015A8BC
  c->r[4]=R32(c->r[1]+0x00000024u); // 8015A8C0
  W32(c->r[13]+0xFFFFAAC4u,c->r[5]); // 8015A8C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8015A8C8
  c->lr=0x8015A8D0u; f_801506B4(c); // 8015A8CC
L_8015A8D0:;
  c->lr=0x8015A8D4u; f_8018505C(c); // 8015A8D0
  c->r[10]=R32(c->r[1]+0x00000000u); // 8015A8D4
  c->r[0]=R32(c->r[10]+0x00000004u); // 8015A8D8
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8015A8DC
  c->lr=c->r[0]; // 8015A8E0
  c->r[1]=c->r[10]|c->r[10]; // 8015A8E4
  return; // 8015A8E8
}

// fn_8015A8EC
void f_8015A8EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015A8EC
  c->r[0]=c->lr; // 8015A8F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8015A8F4
  c->r[11]=c->r[1]+0x00000030u; // 8015A8F8
  c->lr=0x8015A900u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8015A8FC
  c->r[25]=c->r[4]|c->r[4]; // 8015A900
  c->r[29]=c->r[5]|c->r[5]; // 8015A904
  c->r[30]=c->r[3]|c->r[3]; // 8015A908
  c->r[4]=0u+0x00000000u; // 8015A90C
  c->r[5]=0u+0x00002000u; // 8015A910
  c->lr=0x8015A918u; f_8000443C(c); // 8015A914
  cmps(c,0,(int32_t)c->r[25],0); // 8015A918
  if (!crb(c,2)) { goto L_8015A92C; } // 8015A91C
  c->r[0]=0u+0x00000000u; // 8015A920
  W32(c->r[30]+0x00000008u,c->r[0]); // 8015A924
  goto L_8015AA50; // 8015A928
L_8015A92C:;
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 8015A92C
  c->r[31]=c->r[25]|c->r[25]; // 8015A930
  c->r[26]=c->r[30]+0x00002000u; // 8015A934
  c->r[28]=c->r[29]+c->r[0]; // 8015A938
  goto L_8015A968; // 8015A93C
L_8015A940:;
  c->r[27]=R32(c->r[28]+0x00000000u); // 8015A940
  c->r[3]=c->r[27]|c->r[27]; // 8015A944
  c->lr=0x8015A94Cu; f_80252384(c); // 8015A948
  c->r[0]=c->r[3]+0x00000001u; // 8015A94C
  c->r[4]=c->r[27]|c->r[27]; // 8015A950
  c->r[26]=c->r[26]-c->r[0]; // 8015A954
  c->r[3]=c->r[26]|c->r[26]; // 8015A958
  c->lr=0x8015A960u; f_8025C444(c); // 8015A95C
  c->r[0]=c->r[26]-c->r[30]; // 8015A960
  W32(c->r[28]+0x00000000u,c->r[0]); // 8015A964
L_8015A968:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFFFu,0); cr0(c,c->r[25]); // 8015A968
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 8015A96C
  if (!crb(c,0)) { IRQCHK(c); goto L_8015A940; } // 8015A970
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 8015A974
  c->r[0]=c->r[26]-c->r[30]; // 8015A978
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8015A97C
  c->r[7]=0u+0x00000000u; // 8015A980
  c->r[6]=c->r[30]+c->r[4]; // 8015A984
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8015A988
  c->r[6]=c->r[6]-c->r[0]; // 8015A98C
  if (crb(c,2)) { goto L_8015AA40; } // 8015A990
  cmpu(c,0,c->r[3],0x00000008u); // 8015A994
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 8015A998
  if (!crb(c,1)) { goto L_8015AA0C; } // 8015A99C
  c->r[0]=c->r[3]+0x00000007u; // 8015A9A0
  c->r[4]=c->r[29]|c->r[29]; // 8015A9A4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8015A9A8
  c->r[5]=c->r[6]|c->r[6]; // 8015A9AC
  c->ctr=c->r[0]; // 8015A9B0
  cmpu(c,0,c->r[3],0x00000000u); // 8015A9B4
  if (!crb(c,1)) { goto L_8015AA0C; } // 8015A9B8
L_8015A9BC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8015A9BC
  c->r[7]=c->r[7]+0x00000008u; // 8015A9C0
  W32(c->r[5]+0x00000000u,c->r[0]); // 8015A9C4
  c->r[0]=R32(c->r[4]+0x00000004u); // 8015A9C8
  W32(c->r[5]+0x00000004u,c->r[0]); // 8015A9CC
  c->r[0]=R32(c->r[4]+0x00000008u); // 8015A9D0
  W32(c->r[5]+0x00000008u,c->r[0]); // 8015A9D4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8015A9D8
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8015A9DC
  c->r[0]=R32(c->r[4]+0x00000010u); // 8015A9E0
  W32(c->r[5]+0x00000010u,c->r[0]); // 8015A9E4
  c->r[0]=R32(c->r[4]+0x00000014u); // 8015A9E8
  W32(c->r[5]+0x00000014u,c->r[0]); // 8015A9EC
  c->r[0]=R32(c->r[4]+0x00000018u); // 8015A9F0
  W32(c->r[5]+0x00000018u,c->r[0]); // 8015A9F4
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8015A9F8
  c->r[4]=c->r[4]+0x00000020u; // 8015A9FC
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 8015AA00
  c->r[5]=c->r[5]+0x00000020u; // 8015AA04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8015A9BC; } // 8015AA08
L_8015AA0C:;
  c->r[3]=c->r[31]+0x00000001u; // 8015AA0C
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8015AA10
  c->r[0]=c->r[3]-c->r[7]; // 8015AA14
  c->r[4]=c->r[29]+c->r[5]; // 8015AA18
  c->r[5]=c->r[6]+c->r[5]; // 8015AA1C
  c->ctr=c->r[0]; // 8015AA20
  cmpu(c,0,c->r[7],c->r[3]); // 8015AA24
  if (!crb(c,0)) { goto L_8015AA40; } // 8015AA28
L_8015AA2C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8015AA2C
  c->r[4]=c->r[4]+0x00000004u; // 8015AA30
  W32(c->r[5]+0x00000000u,c->r[0]); // 8015AA34
  c->r[5]=c->r[5]+0x00000004u; // 8015AA38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8015AA2C; } // 8015AA3C
L_8015AA40:;
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 8015AA40
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 8015AA44
  c->r[0]=c->r[0]-c->r[30]; // 8015AA48
  W32(c->r[30]+0x00000008u,c->r[0]); // 8015AA4C
L_8015AA50:;
  c->r[11]=c->r[1]+0x00000030u; // 8015AA50
  c->r[3]=0u+0x00000001u; // 8015AA54
  c->lr=0x8015AA5Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8015AA58
  c->r[0]=R32(c->r[1]+0x00000034u); // 8015AA5C
  c->lr=c->r[0]; // 8015AA60
  c->r[1]=c->r[1]+0x00000030u; // 8015AA64
  return; // 8015AA68
}

// __OSCheckCompanyCode
void f_8015AA6C(Ctx* __restrict c) {
  trace_call(0x8015AA6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015AA6C
  c->r[0]=c->lr; // 8015AA70
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8015AA74
  W32(c->r[1]+0x000000ACu,c->r[31]); // 8015AA78
  W32(c->r[1]+0x000000A8u,c->r[30]); // 8015AA7C
  c->r[30]=c->r[5]|c->r[5]; // 8015AA80
  W32(c->r[1]+0x000000A4u,c->r[29]); // 8015AA84
  c->r[29]=c->r[3]|c->r[3]; // 8015AA88
  c->r[3]=c->r[1]+0x00000054u; // 8015AA8C
  W32(c->r[1]+0x000000A0u,c->r[28]); // 8015AA90
  c->r[28]=c->r[4]|c->r[4]; // 8015AA94
  c->lr=0x8015AA9Cu; f_80180A24(c); // 8015AA98
  cmps(c,0,(int32_t)c->r[3],0); // 8015AA9C
  if (crb(c,2)) { goto L_8015AAAC; } // 8015AAA0
  c->r[3]=0u+0x00000000u; // 8015AAA4
  goto L_8015AB60; // 8015AAA8
L_8015AAAC:;
  c->r[3]=c->r[1]+0x00000054u; // 8015AAAC
  c->r[4]=c->r[1]+0x00000008u; // 8015AAB0
  c->lr=0x8015AAB8u; f_8017EDE4(c); // 8015AAB4
  cmps(c,0,(int32_t)c->r[3],0); // 8015AAB8
  if (crb(c,2)) { goto L_8015AAC8; } // 8015AABC
  c->r[3]=0u+0x00000000u; // 8015AAC0
  goto L_8015AB60; // 8015AAC4
L_8015AAC8:;
  c->r[31]=R16(c->r[1]+0x0000000Cu); // 8015AAC8
  cmpu(c,0,c->r[31],0x00000002u); // 8015AACC
  if (!crb(c,2)) { goto L_8015AB00; } // 8015AAD0
  c->lr=0x8015AAD8u; f_8014E7A8(c); // 8015AAD4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8015AAD8
  cmpu(c,0,c->r[0],0x00000080u); // 8015AADC
  if (!crb(c,2)) { goto L_8015AB00; } // 8015AAE0
  c->lr=0x8015AAE8u; f_8014D54C(c); // 8015AAE4
  c->r[3]=rotl(c->r[3],0)&0xF0000000u; // 8015AAE8
  c->r[0]=c->r[3]+0xF0000000u; // 8015AAEC
  cmpu(c,0,c->r[0],0x00000000u); // 8015AAF0
  if (!crb(c,2)) { goto L_8015AB00; } // 8015AAF4
  c->lr=0x8015AAFCu; f_80170CF0(c); // 8015AAF8
  c->r[31]=R16(c->r[3]+0x00000004u); // 8015AAFC
L_8015AB00:;
  cmps(c,0,(int32_t)c->r[30],0); // 8015AB00
  if (crb(c,2)) { goto L_8015AB14; } // 8015AB04
  c->lr=0x8015AB0Cu; f_80170CF0(c); // 8015AB08
  c->r[0]=R16(c->r[3]+0x00000004u); // 8015AB0C
  goto L_8015AB54; // 8015AB10
L_8015AB14:;
  c->r[0]=0u+0xFFFFFFFFu; // 8015AB14
  c->r[4]=0u+0x802D0000u; // 8015AB18
  c->r[3]=c->r[1]+0x00000010u; // 8015AB1C
  c->r[4]=c->r[4]+0x000043F0u; // 8015AB20
  c->r[5]=c->r[29]&c->r[0]; // 8015AB24
  c->r[6]=c->r[28]&c->r[0]; // 8015AB28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8015AB2C
  c->lr=0x8015AB34u; f_8025ABC0(c); // 8015AB30
  c->r[3]=c->r[1]+0x00000010u; // 8015AB34
  c->r[4]=c->r[1]+0x00000008u; // 8015AB38
  c->lr=0x8015AB40u; f_8017EDE4(c); // 8015AB3C
  cmps(c,0,(int32_t)c->r[3],0); // 8015AB40
  if (crb(c,2)) { goto L_8015AB50; } // 8015AB44
  c->r[3]=0u+0x00000000u; // 8015AB48
  goto L_8015AB60; // 8015AB4C
L_8015AB50:;
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 8015AB50
L_8015AB54:;
  c->r[0]=c->r[0]-c->r[31]; // 8015AB54
  c->r[0]=cntlz(c->r[0]); // 8015AB58
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8015AB5C
L_8015AB60:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8015AB60
  c->r[31]=R32(c->r[1]+0x000000ACu); // 8015AB64
  c->r[30]=R32(c->r[1]+0x000000A8u); // 8015AB68
  c->r[29]=R32(c->r[1]+0x000000A4u); // 8015AB6C
  c->r[28]=R32(c->r[1]+0x000000A0u); // 8015AB70
  c->lr=c->r[0]; // 8015AB74
  c->r[1]=c->r[1]+0x000000B0u; // 8015AB78
  return; // 8015AB7C
}

// __OSCheckTmdSysVersion
void f_8015AB80(Ctx* __restrict c) {
  trace_call(0x8015AB80u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8015AB80
  c->r[12]=c->r[1]|c->r[1]; // 8015AB84
  c->r[11]=addc(c,~c->r[11],0xFFFFFF40u,1); // 8015AB88
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8015AB8C
  c->r[0]=c->lr; // 8015AB90
  c->r[5]=0u+0x00000000u; // 8015AB94
  W32(c->r[12]+0x00000004u,c->r[0]); // 8015AB98
  c->r[0]=0u+0x00000000u; // 8015AB9C
  c->r[6]=c->r[1]+0x00000028u; // 8015ABA0
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8015ABA4
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8015ABA8
  W32(c->r[1]+0x00000028u,c->r[0]); // 8015ABAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8015ABB0
  W32(c->r[1]+0x00000020u,c->r[0]); // 8015ABB4
  c->r[30]=R32(c->r[3]+0x00000008u); // 8015ABB8
  c->r[31]=R32(c->r[3]+0x00000004u); // 8015ABBC
  c->r[4]=c->r[30]|c->r[30]; // 8015ABC0
  c->r[3]=c->r[31]|c->r[31]; // 8015ABC4
  c->lr=0x8015ABCCu; f_80185344(c); // 8015ABC8
  cmps(c,0,(int32_t)c->r[3],0); // 8015ABCC
  if (!crb(c,2)) { goto L_8015ABE0; } // 8015ABD0
  c->r[0]=R32(c->r[1]+0x00000028u); // 8015ABD4
  cmpu(c,0,c->r[0],0x00000001u); // 8015ABD8
  if (crb(c,2)) { goto L_8015ABE8; } // 8015ABDC
L_8015ABE0:;
  c->r[3]=0u+0x00000000u; // 8015ABE0
  goto L_8015AC38; // 8015ABE4
L_8015ABE8:;
  c->r[0]=0u+0xFFFFFFFFu; // 8015ABE8
  c->r[4]=0u+0x802D0000u; // 8015ABEC
  c->r[3]=c->r[1]+0x00000040u; // 8015ABF0
  c->r[4]=c->r[4]+0x00004408u; // 8015ABF4
  c->r[5]=c->r[31]&c->r[0]; // 8015ABF8
  c->r[6]=c->r[30]&c->r[0]; // 8015ABFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8015AC00
  c->lr=0x8015AC08u; f_8025ABC0(c); // 8015AC04
  c->r[3]=c->r[1]+0x00000040u; // 8015AC08
  c->r[4]=c->r[1]+0x00000024u; // 8015AC0C
  c->r[5]=c->r[1]+0x00000020u; // 8015AC10
  c->lr=0x8015AC18u; f_80180F30(c); // 8015AC14
  cmps(c,0,(int32_t)c->r[3],0); // 8015AC18
  if (!crb(c,2)) { goto L_8015AC2C; } // 8015AC1C
  c->r[0]=R32(c->r[1]+0x00000020u); // 8015AC20
  cmpu(c,0,c->r[0],0x00000002u); // 8015AC24
  if (crb(c,1)) { goto L_8015AC34; } // 8015AC28
L_8015AC2C:;
  c->r[3]=0u+0x00000000u; // 8015AC2C
  goto L_8015AC38; // 8015AC30
L_8015AC34:;
  c->r[3]=0u+0x00000001u; // 8015AC34
L_8015AC38:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8015AC38
  c->r[0]=R32(c->r[10]+0x00000004u); // 8015AC3C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8015AC40
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8015AC44
  c->lr=c->r[0]; // 8015AC48
  c->r[1]=c->r[10]|c->r[10]; // 8015AC4C
  return; // 8015AC50
}

// __OSGetValidTicketIndex
void f_8015AC54(Ctx* __restrict c) {
  trace_call(0x8015AC54u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015AC54
  c->r[0]=c->lr; // 8015AC58
  W32(c->r[1]+0x00000044u,c->r[0]); // 8015AC5C
  c->r[11]=c->r[1]+0x00000040u; // 8015AC60
  c->lr=0x8015AC68u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8015AC64
  cmps(c,0,(int32_t)c->r[3],0); // 8015AC68
  c->r[23]=c->r[4]|c->r[4]; // 8015AC6C
  c->r[27]=0u+0x00000000u; // 8015AC70
  c->r[26]=0u+0x00000000u; // 8015AC74
  c->r[25]=0u+0x00000000u; // 8015AC78
  c->r[24]=0u+0x00000000u; // 8015AC7C
  if (!crb(c,2)) { goto L_8015ACA8; } // 8015AC80
  c->r[3]=0u+0x802D0000u; // 8015AC84
  c->r[5]=0u+0x802D0000u; // 8015AC88
  c->r[3]=c->r[3]+0x00004424u; // 8015AC8C
  c->r[4]=0u+0x00000183u; // 8015AC90
  c->r[5]=c->r[5]+0x0000444Cu; // 8015AC94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8015AC98
  c->lr=0x8015ACA0u; f_801506B4(c); // 8015AC9C
  c->r[3]=0u+0xFFFFFC07u; // 8015ACA0
  goto L_8015AE2C; // 8015ACA4
L_8015ACA8:;
  c->r[29]=c->r[3]|c->r[3]; // 8015ACA8
  c->r[28]=0u+0x00000000u; // 8015ACAC
  c->r[30]=0u+0x00000001u; // 8015ACB0
  c->r[31]=0u+0x00000002u; // 8015ACB4
  goto L_8015AE08; // 8015ACB8
L_8015ACBC:;
  c->r[3]=c->r[29]|c->r[29]; // 8015ACBC
  c->r[4]=c->r[1]+0x00000008u; // 8015ACC0
  c->r[5]=c->r[1]+0x0000000Cu; // 8015ACC4
  c->lr=0x8015ACCCu; f_8015A5CC(c); // 8015ACC8
  cmps(c,0,(int32_t)c->r[3],0); // 8015ACCC
  if (crb(c,1)) { goto L_8015AE00; } // 8015ACD0
  if (crb(c,2)) { goto L_8015ACDC; } // 8015ACD4
  goto L_8015AE2C; // 8015ACD8
L_8015ACDC:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 8015ACDC
  cmps(c,0,(int32_t)c->r[0],1); // 8015ACE0
  if (crb(c,2)) { goto L_8015ADE4; } // 8015ACE4
  if (!crb(c,0)) { goto L_8015ACF8; } // 8015ACE8
  cmps(c,0,(int32_t)c->r[0],0); // 8015ACEC
  if (!crb(c,0)) { goto L_8015AD04; } // 8015ACF0
  goto L_8015AE00; // 8015ACF4
L_8015ACF8:;
  cmps(c,0,(int32_t)c->r[0],9); // 8015ACF8
  if (crb(c,2)) { goto L_8015AE00; } // 8015ACFC
  goto L_8015AE00; // 8015AD00
L_8015AD04:;
  cmps(c,0,(int32_t)c->r[26],0); // 8015AD04
  c->r[5]=0u+0x00000000u; // 8015AD08
  if (!crb(c,2)) { goto L_8015AD18; } // 8015AD0C
  c->r[27]=c->r[28]|c->r[28]; // 8015AD10
  c->r[26]=0u+0x00000001u; // 8015AD14
L_8015AD18:;
  c->r[0]=R8(c->r[29]+0x00000019u); // 8015AD18
  c->r[4]=0u+0x00000000u; // 8015AD1C
  c->r[3]=R8(c->r[29]+0x00000018u); // 8015AD20
  c->r[3]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[3]&~0x0000FF00u); // 8015AD24
  c->ctr=c->r[31]; // 8015AD28
L_8015AD2C:;
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 8015AD2C
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8015AD30
  if (crb(c,2)) { goto L_8015AD3C; } // 8015AD34
  c->r[5]=c->r[5]+0x00000001u; // 8015AD38
L_8015AD3C:;
  c->r[4]=c->r[4]+0x00000001u; // 8015AD3C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 8015AD40
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8015AD44
  if (crb(c,2)) { goto L_8015AD50; } // 8015AD48
  c->r[5]=c->r[5]+0x00000001u; // 8015AD4C
L_8015AD50:;
  c->r[4]=c->r[4]+0x00000001u; // 8015AD50
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 8015AD54
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8015AD58
  if (crb(c,2)) { goto L_8015AD64; } // 8015AD5C
  c->r[5]=c->r[5]+0x00000001u; // 8015AD60
L_8015AD64:;
  c->r[4]=c->r[4]+0x00000001u; // 8015AD64
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 8015AD68
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8015AD6C
  if (crb(c,2)) { goto L_8015AD78; } // 8015AD70
  c->r[5]=c->r[5]+0x00000001u; // 8015AD74
L_8015AD78:;
  c->r[4]=c->r[4]+0x00000001u; // 8015AD78
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 8015AD7C
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8015AD80
  if (crb(c,2)) { goto L_8015AD8C; } // 8015AD84
  c->r[5]=c->r[5]+0x00000001u; // 8015AD88
L_8015AD8C:;
  c->r[4]=c->r[4]+0x00000001u; // 8015AD8C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 8015AD90
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8015AD94
  if (crb(c,2)) { goto L_8015ADA0; } // 8015AD98
  c->r[5]=c->r[5]+0x00000001u; // 8015AD9C
L_8015ADA0:;
  c->r[4]=c->r[4]+0x00000001u; // 8015ADA0
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 8015ADA4
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8015ADA8
  if (crb(c,2)) { goto L_8015ADB4; } // 8015ADAC
  c->r[5]=c->r[5]+0x00000001u; // 8015ADB0
L_8015ADB4:;
  c->r[4]=c->r[4]+0x00000001u; // 8015ADB4
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 8015ADB8
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8015ADBC
  if (crb(c,2)) { goto L_8015ADC8; } // 8015ADC0
  c->r[5]=c->r[5]+0x00000001u; // 8015ADC4
L_8015ADC8:;
  c->r[4]=c->r[4]+0x00000001u; // 8015ADC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8015AD2C; } // 8015ADCC
  cmpu(c,0,c->r[5],c->r[25]); // 8015ADD0
  if (!crb(c,1)) { goto L_8015AE00; } // 8015ADD4
  c->r[27]=c->r[28]|c->r[28]; // 8015ADD8
  c->r[25]=c->r[5]|c->r[5]; // 8015ADDC
  goto L_8015AE00; // 8015ADE0
L_8015ADE4:;
  cmps(c,0,(int32_t)c->r[26],0); // 8015ADE4
  if (!crb(c,2)) { goto L_8015AE00; } // 8015ADE8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8015ADEC
  cmpu(c,0,c->r[0],c->r[24]); // 8015ADF0
  if (!crb(c,1)) { goto L_8015AE00; } // 8015ADF4
  c->r[27]=c->r[28]|c->r[28]; // 8015ADF8
  c->r[24]=c->r[0]|c->r[0]; // 8015ADFC
L_8015AE00:;
  c->r[29]=c->r[29]+0x000000D8u; // 8015AE00
  c->r[28]=c->r[28]+0x00000001u; // 8015AE04
L_8015AE08:;
  cmpu(c,0,c->r[28],c->r[23]); // 8015AE08
  if (crb(c,0)) { IRQCHK(c); goto L_8015ACBC; } // 8015AE0C
  cmps(c,0,(int32_t)c->r[26],0); // 8015AE10
  if (!crb(c,2)) { goto L_8015AE28; } // 8015AE14
  cmps(c,0,(int32_t)c->r[24],0); // 8015AE18
  if (!crb(c,2)) { goto L_8015AE28; } // 8015AE1C
  c->r[3]=0u+0xFFFFFFFFu; // 8015AE20
  goto L_8015AE2C; // 8015AE24
L_8015AE28:;
  c->r[3]=c->r[27]|c->r[27]; // 8015AE28
L_8015AE2C:;
  c->r[11]=c->r[1]+0x00000040u; // 8015AE2C
  c->lr=0x8015AE34u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8015AE30
  c->r[0]=R32(c->r[1]+0x00000044u); // 8015AE34
  c->lr=c->r[0]; // 8015AE38
  c->r[1]=c->r[1]+0x00000040u; // 8015AE3C
  return; // 8015AE40
}

// __OSRelaunchTitle
void f_8015AE44(Ctx* __restrict c) {
  trace_call(0x8015AE44u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8015AE44
  c->r[12]=c->r[1]|c->r[1]; // 8015AE48
  c->r[11]=addc(c,~c->r[11],0xFFFFFF60u,1); // 8015AE4C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8015AE50
  c->r[0]=c->lr; // 8015AE54
  W32(c->r[12]+0x00000004u,c->r[0]); // 8015AE58
  c->r[0]=0u+0x00000001u; // 8015AE5C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8015AE60
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8015AE64
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 8015AE68
  c->r[29]=c->r[3]|c->r[3]; // 8015AE6C
  c->r[3]=0u+0x81280000u; // 8015AE70
  W32(c->r[1]+0x00000028u,c->r[0]); // 8015AE74
  c->lr=0x8015AE7Cu; f_8014F30C(c); // 8015AE78
  c->r[3]=0u+0x812F0000u; // 8015AE7C
  c->lr=0x8015AE84u; f_8014F2F4(c); // 8015AE80
  c->lr=0x8015AE88u; f_80185008(c); // 8015AE84
  cmps(c,0,(int32_t)c->r[3],0); // 8015AE88
  if (crb(c,2)) { goto L_8015AE94; } // 8015AE8C
  c->lr=0x8015AE94u; f_80156280(c); // 8015AE90
L_8015AE94:;
  c->r[3]=c->r[1]+0x00000040u; // 8015AE94
  c->lr=0x8015AE9Cu; f_8018579C(c); // 8015AE98
  cmps(c,0,(int32_t)c->r[3],0); // 8015AE9C
  if (crb(c,2)) { goto L_8015AEA8; } // 8015AEA0
  c->lr=0x8015AEA8u; f_80156280(c); // 8015AEA4
L_8015AEA8:;
  c->r[3]=0u+0x000000E0u; // 8015AEA8
  c->r[4]=0u+0x00000020u; // 8015AEAC
  c->lr=0x8015AEB4u; f_8014F314(c); // 8015AEB0
  c->r[0]=0u+0x00000000u; // 8015AEB4
  c->r[31]=c->r[3]|c->r[3]; // 8015AEB8
  cmpu(c,0,c->r[3],c->r[0]); // 8015AEBC
  if (!crb(c,2)) { goto L_8015AEC8; } // 8015AEC0
  c->lr=0x8015AEC8u; f_80156280(c); // 8015AEC4
L_8015AEC8:;
  c->r[3]=c->r[31]|c->r[31]; // 8015AEC8
  c->r[4]=0u+0x00000000u; // 8015AECC
  c->r[5]=0u+0x000000E0u; // 8015AED0
  c->lr=0x8015AED8u; f_8000443C(c); // 8015AED4
  c->r[4]=c->r[31]|c->r[31]; // 8015AED8
  c->r[3]=0u+0x00000000u; // 8015AEDC
  c->lr=0x8015AEE4u; f_8018545C(c); // 8015AEE0
  cmps(c,0,(int32_t)c->r[3],-1017); // 8015AEE4
  if (!crb(c,2)) { goto L_8015AF6C; } // 8015AEE8
  c->r[3]=R32(c->r[1]+0x00000040u); // 8015AEEC
  c->r[6]=c->r[1]+0x00000028u; // 8015AEF0
  c->r[4]=R32(c->r[1]+0x00000044u); // 8015AEF4
  c->r[5]=0u+0x00000000u; // 8015AEF8
  c->lr=0x8015AF00u; f_80185344(c); // 8015AEFC
  cmps(c,0,(int32_t)c->r[3],0); // 8015AF00
  if (crb(c,2)) { goto L_8015AF0C; } // 8015AF04
  c->lr=0x8015AF0Cu; f_80156280(c); // 8015AF08
L_8015AF0C:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 8015AF0C
  c->r[4]=0u+0x00000020u; // 8015AF10
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 8015AF14
  c->r[0]=c->r[3]+0x0000001Fu; // 8015AF18
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8015AF1C
  c->lr=0x8015AF24u; f_8014F314(c); // 8015AF20
  c->r[0]=0u+0x00000000u; // 8015AF24
  c->r[30]=c->r[3]|c->r[3]; // 8015AF28
  cmpu(c,0,c->r[3],c->r[0]); // 8015AF2C
  if (!crb(c,2)) { goto L_8015AF38; } // 8015AF30
  c->lr=0x8015AF38u; f_80156280(c); // 8015AF34
L_8015AF38:;
  c->r[3]=R32(c->r[1]+0x00000040u); // 8015AF38
  c->r[5]=c->r[30]|c->r[30]; // 8015AF3C
  c->r[4]=R32(c->r[1]+0x00000044u); // 8015AF40
  c->r[6]=c->r[1]+0x00000028u; // 8015AF44
  c->lr=0x8015AF4Cu; f_80185344(c); // 8015AF48
  cmps(c,0,(int32_t)c->r[3],0); // 8015AF4C
  if (crb(c,2)) { goto L_8015AF58; } // 8015AF50
  c->lr=0x8015AF58u; f_80156280(c); // 8015AF54
L_8015AF58:;
  c->r[3]=c->r[31]|c->r[31]; // 8015AF58
  c->r[4]=c->r[30]|c->r[30]; // 8015AF5C
  c->r[5]=0u+0x000000D8u; // 8015AF60
  c->lr=0x8015AF68u; f_80004338(c); // 8015AF64
  goto L_8015AFBC; // 8015AF68
L_8015AF6C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8015AF6C
  if (crb(c,2)) { goto L_8015AF7C; } // 8015AF70
  c->lr=0x8015AF78u; f_80156280(c); // 8015AF74
  goto L_8015AFBC; // 8015AF78
L_8015AF7C:;
  c->lr=0x8015AF80u; f_8015A054(c); // 8015AF7C
  cmps(c,0,(int32_t)c->r[3],0); // 8015AF80
  if (crb(c,2)) { goto L_8015AFBC; } // 8015AF84
  c->r[3]=0u+0x00000000u; // 8015AF88
  c->r[0]=0u+0xFFFFFFFFu; // 8015AF8C
  W32(c->r[1]+0x00000024u,c->r[3]); // 8015AF90
  c->r[3]=c->r[31]|c->r[31]; // 8015AF94
  c->r[4]=c->r[1]+0x00000024u; // 8015AF98
  c->r[5]=c->r[1]+0x00000020u; // 8015AF9C
  W32(c->r[1]+0x00000020u,c->r[0]); // 8015AFA0
  c->lr=0x8015AFA8u; f_8015A5CC(c); // 8015AFA4
  c->r[0]=R32(c->r[1]+0x00000020u); // 8015AFA8
  cmps(c,0,(int32_t)c->r[0],0); // 8015AFAC
  if (!crb(c,2)) { goto L_8015AFBC; } // 8015AFB0
  c->lr=0x8015AFB8u; f_8015A2B0(c); // 8015AFB4
  c->lr=0x8015AFBCu; f_80156280(c); // 8015AFB8
L_8015AFBC:;
  c->r[3]=0u+0x00002000u; // 8015AFBC
  c->r[4]=0u+0x00000040u; // 8015AFC0
  c->lr=0x8015AFC8u; f_8014F314(c); // 8015AFC4
  c->r[30]=c->r[3]+0x00000FE0u; // 8015AFC8
  c->r[4]=0u+0x00000000u; // 8015AFCC
  c->r[5]=0u+0x00002000u; // 8015AFD0
  c->lr=0x8015AFD8u; f_8000443C(c); // 8015AFD4
  c->r[0]=R32(c->r[1]+0x00000040u); // 8015AFD8
  c->r[3]=R32(c->r[1]+0x00000044u); // 8015AFDC
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 8015AFE0
  W32(c->r[30]+0x00000018u,c->r[0]); // 8015AFE4
  c->lr=0x8015AFECu; f_8014E7A8(c); // 8015AFE8
  W8(c->r[30]+0x0000000Au,c->r[3]); // 8015AFEC
  c->r[3]=0u+0x00000001u; // 8015AFF0
  c->r[0]=c->r[29]|0x80000000u; // 8015AFF4
  W8(c->r[30]+0x0000000Bu,c->r[3]); // 8015AFF8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8015AFFC
  c->lr=0x8015B004u; f_80159E4C(c); // 8015B000
  c->r[3]=c->r[30]|c->r[30]; // 8015B004
  c->lr=0x8015B00Cu; f_80159EFC(c); // 8015B008
  c->r[3]=c->r[1]+0x00000060u; // 8015B00C
  c->lr=0x8015B014u; f_80159C70(c); // 8015B010
  c->r[0]=0u+0x00000003u; // 8015B014
  c->r[3]=c->r[1]+0x00000060u; // 8015B018
  W8(c->r[1]+0x00000065u,c->r[0]); // 8015B01C
  c->lr=0x8015B024u; f_80159B8C(c); // 8015B020
  c->r[3]=R32(c->r[1]+0x00000040u); // 8015B024
  c->r[5]=c->r[31]|c->r[31]; // 8015B028
  c->r[4]=R32(c->r[1]+0x00000044u); // 8015B02C
  c->lr=0x8015B034u; f_801850A4(c); // 8015B030
  cmps(c,0,(int32_t)c->r[3],0); // 8015B034
  if (crb(c,2)) { goto L_8015B040; } // 8015B038
  c->lr=0x8015B040u; f_80156280(c); // 8015B03C
L_8015B040:;
  IRQCHK(c); goto L_8015B040; // 8015B040
}

// __OSLaunchTitle
void f_8015B044(Ctx* __restrict c) {
  trace_call(0x8015B044u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015B044
  c->r[0]=c->lr; // 8015B048
  W32(c->r[1]+0x00000024u,c->r[0]); // 8015B04C
  c->r[0]=0u+0x00000001u; // 8015B050
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8015B054
  W32(c->r[1]+0x00000018u,c->r[30]); // 8015B058
  W32(c->r[1]+0x00000014u,c->r[29]); // 8015B05C
  c->r[29]=c->r[3]|c->r[3]; // 8015B060
  W32(c->r[1]+0x00000010u,c->r[28]); // 8015B064
  c->r[28]=c->r[4]|c->r[4]; // 8015B068
  W32(c->r[1]+0x00000008u,c->r[0]); // 8015B06C
  c->lr=0x8015B074u; f_80185008(c); // 8015B070
  cmps(c,0,(int32_t)c->r[3],0); // 8015B074
  if (!crb(c,2)) { goto L_8015B140; } // 8015B078
  c->r[3]=0u+0x000000E0u; // 8015B07C
  c->r[4]=0u+0x00000020u; // 8015B080
  c->lr=0x8015B088u; f_8014F314(c); // 8015B084
  cmps(c,0,(int32_t)c->r[3],0); // 8015B088
  c->r[31]=c->r[3]|c->r[3]; // 8015B08C
  if (crb(c,2)) { goto L_8015B140; } // 8015B090
  c->r[4]=0u+0x00000000u; // 8015B094
  c->r[5]=0u+0x000000E0u; // 8015B098
  c->lr=0x8015B0A0u; f_8000443C(c); // 8015B09C
  c->r[4]=c->r[28]|c->r[28]; // 8015B0A0
  c->r[3]=c->r[29]|c->r[29]; // 8015B0A4
  c->r[6]=c->r[1]+0x00000008u; // 8015B0A8
  c->r[5]=0u+0x00000000u; // 8015B0AC
  c->lr=0x8015B0B4u; f_80185344(c); // 8015B0B0
  cmps(c,0,(int32_t)c->r[3],0); // 8015B0B4
  if (!crb(c,2)) { goto L_8015B140; } // 8015B0B8
  c->r[0]=R32(c->r[1]+0x00000008u); // 8015B0BC
  c->r[4]=0u+0x00000020u; // 8015B0C0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 8015B0C4
  c->r[0]=c->r[3]+0x0000001Fu; // 8015B0C8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8015B0CC
  c->lr=0x8015B0D4u; f_8014F314(c); // 8015B0D0
  cmps(c,0,(int32_t)c->r[3],0); // 8015B0D4
  c->r[30]=c->r[3]|c->r[3]; // 8015B0D8
  if (crb(c,2)) { goto L_8015B140; } // 8015B0DC
  c->r[4]=c->r[28]|c->r[28]; // 8015B0E0
  c->r[3]=c->r[29]|c->r[29]; // 8015B0E4
  c->r[5]=c->r[30]|c->r[30]; // 8015B0E8
  c->r[6]=c->r[1]+0x00000008u; // 8015B0EC
  c->lr=0x8015B0F4u; f_80185344(c); // 8015B0F0
  cmps(c,0,(int32_t)c->r[3],0); // 8015B0F4
  if (!crb(c,2)) { goto L_8015B140; } // 8015B0F8
  c->r[4]=R32(c->r[1]+0x00000008u); // 8015B0FC
  c->r[3]=c->r[30]|c->r[30]; // 8015B100
  c->lr=0x8015B108u; f_8015AC54(c); // 8015B104
  cmps(c,0,(int32_t)c->r[3],0); // 8015B108
  if (crb(c,0)) { goto L_8015B140; } // 8015B10C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)216); // 8015B110
  c->r[3]=c->r[31]|c->r[31]; // 8015B114
  c->r[5]=0u+0x000000D8u; // 8015B118
  c->r[4]=c->r[30]+c->r[0]; // 8015B11C
  c->lr=0x8015B124u; f_80004338(c); // 8015B120
  c->r[4]=c->r[28]|c->r[28]; // 8015B124
  c->r[3]=c->r[29]|c->r[29]; // 8015B128
  c->r[5]=c->r[31]|c->r[31]; // 8015B12C
  c->lr=0x8015B134u; f_801850A4(c); // 8015B130
  cmps(c,0,(int32_t)c->r[3],0); // 8015B134
  if (!crb(c,2)) { goto L_8015B140; } // 8015B138
L_8015B13C:;
  IRQCHK(c); goto L_8015B13C; // 8015B13C
L_8015B140:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8015B140
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8015B144
  c->r[30]=R32(c->r[1]+0x00000018u); // 8015B148
  c->r[29]=R32(c->r[1]+0x00000014u); // 8015B14C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8015B150
  c->lr=c->r[0]; // 8015B154
  c->r[1]=c->r[1]+0x00000020u; // 8015B158
  return; // 8015B15C
}

