#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8017C778
void f_8017C778(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000000u); // 8017C778
  c->r[0]=rotl(c->r[0],0)&0x000000F0u; // 8017C77C
  cmps(c,0,(int32_t)c->r[0],48); // 8017C780
  if (crb(c,2)) { goto L_8017C7B0; } // 8017C784
  if (!crb(c,0)) { goto L_8017C7A4; } // 8017C788
  cmps(c,0,(int32_t)c->r[0],32); // 8017C78C
  if (crb(c,2)) { goto L_8017C7B8; } // 8017C790
  if (!crb(c,0)) { goto L_8017C7C0; } // 8017C794
  cmps(c,0,(int32_t)c->r[0],16); // 8017C798
  if (crb(c,2)) { goto L_8017C7B4; } // 8017C79C
  goto L_8017C7C0; // 8017C7A0
L_8017C7A4:;
  cmps(c,0,(int32_t)c->r[0],128); // 8017C7A4
  if (crb(c,2)) { goto L_8017C7BC; } // 8017C7A8
  goto L_8017C7C0; // 8017C7AC
L_8017C7B0:;
  goto L_8017C7C8; // 8017C7B0
L_8017C7B4:;
  goto L_8017C92C; // 8017C7B4
L_8017C7B8:;
  f_8017CCF4(c); return; // 8017C7B8
L_8017C7BC:;
  f_8017CF50(c); return; // 8017C7BC
L_8017C7C0:;
  c->r[3]=0u+0xFFFFFFFFu; // 8017C7C0
  return; // 8017C7C4
L_8017C7C8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8017C7C8
  c->r[6]=rotl(c->r[0],8)&0x000000FFu; // 8017C7CC
  c->r[6]=(rotl(c->r[0],24)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 8017C7D0
  c->r[6]=(rotl(c->r[0],8)&0x00FF0000u)|(c->r[6]&~0x00FF0000u); // 8017C7D4
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8017C7D8
  c->r[0]=rotl(c->r[6],0)&0x000000F0u; // 8017C7DC
  cmps(c,0,(int32_t)c->r[0],48); // 8017C7E0
  c->r[7]=rotl(c->r[6],24)&0x00FFFFFFu; // 8017C7E4
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 8017C7E8
  if (crb(c,2)) { goto L_8017C7F8; } // 8017C7EC
  c->r[3]=0u+0xFFFFFFFFu; // 8017C7F0
  return; // 8017C7F4
L_8017C7F8:;
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[0]); // 8017C7F8
  if (crb(c,2)) { goto L_8017C808; } // 8017C7FC
  c->r[3]=0u+0xFFFFFFFFu; // 8017C800
  return; // 8017C804
L_8017C808:;
  cmpu(c,0,c->r[4],0x00000004u); // 8017C808
  if (crb(c,1)) { goto L_8017C818; } // 8017C80C
  c->r[3]=0u+0xFFFFFFFEu; // 8017C810
  return; // 8017C814
L_8017C818:;
  cmps(c,0,(int32_t)c->r[7],0); // 8017C818
  c->r[6]=c->r[3]+0x00000004u; // 8017C81C
  c->r[8]=c->r[4]+0xFFFFFFFCu; // 8017C820
  if (!crb(c,2)) { goto L_8017C904; } // 8017C824
  cmps(c,0,(int32_t)c->r[8],4); // 8017C828
  if (!crb(c,0)) { goto L_8017C838; } // 8017C82C
  c->r[3]=0u+0xFFFFFFFEu; // 8017C830
  return; // 8017C834
L_8017C838:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 8017C838
  c->r[6]=c->r[6]+0x00000004u; // 8017C83C
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 8017C840
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 8017C844
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 8017C848
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 8017C84C
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8017C850
  c->r[7]=c->r[3]|c->r[0]; // 8017C854
  goto L_8017C904; // 8017C858
L_8017C85C:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 8017C85C
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 8017C860
  c->r[6]=c->r[6]+0x00000001u; // 8017C864
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 8017C868
  if (!crb(c,0)) { goto L_8017C878; } // 8017C86C
  c->r[3]=0u+0xFFFFFFFEu; // 8017C870
  return; // 8017C874
L_8017C878:;
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8017C878
  if (!crb(c,2)) { goto L_8017C8C4; } // 8017C87C
  c->r[3]=c->r[3]+0x00000001u; // 8017C880
  cmpu(c,0,c->r[3],c->r[7]); // 8017C884
  if (!crb(c,1)) { goto L_8017C894; } // 8017C888
  c->r[3]=0u+0xFFFFFFFCu; // 8017C88C
  return; // 8017C890
L_8017C894:;
  c->r[8]=c->r[8]-c->r[3]; cr0(c,c->r[8]); // 8017C894
  if (!crb(c,0)) { goto L_8017C8A4; } // 8017C898
  c->r[3]=0u+0xFFFFFFFEu; // 8017C89C
  return; // 8017C8A0
L_8017C8A4:;
  c->r[7]=c->r[7]-c->r[3]; // 8017C8A4
L_8017C8A8:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 8017C8A8
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 8017C8AC
  c->r[6]=c->r[6]+0x00000001u; // 8017C8B0
  W8(c->r[5]+0x00000000u,c->r[0]); // 8017C8B4
  c->r[5]=c->r[5]+0x00000001u; // 8017C8B8
  if (crb(c,1)) { IRQCHK(c); goto L_8017C8A8; } // 8017C8BC
  goto L_8017C904; // 8017C8C0
L_8017C8C4:;
  c->r[3]=c->r[3]+0x00000003u; // 8017C8C4
  cmpu(c,0,c->r[3],c->r[7]); // 8017C8C8
  if (!crb(c,1)) { goto L_8017C8D8; } // 8017C8CC
  c->r[3]=0u+0xFFFFFFFCu; // 8017C8D0
  return; // 8017C8D4
L_8017C8D8:;
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 8017C8D8
  c->r[0]=R8(c->r[6]+0x00000000u); // 8017C8DC
  c->r[7]=c->r[7]-c->r[3]; // 8017C8E0
  c->r[6]=c->r[6]+0x00000001u; // 8017C8E4
  if (!crb(c,0)) { goto L_8017C8F4; } // 8017C8E8
  c->r[3]=0u+0xFFFFFFFEu; // 8017C8EC
  return; // 8017C8F0
L_8017C8F4:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 8017C8F4
  W8(c->r[5]+0x00000000u,c->r[0]); // 8017C8F8
  c->r[5]=c->r[5]+0x00000001u; // 8017C8FC
  if (crb(c,1)) { IRQCHK(c); goto L_8017C8F4; } // 8017C900
L_8017C904:;
  cmps(c,0,(int32_t)c->r[7],0); // 8017C904
  if (!crb(c,2)) { IRQCHK(c); goto L_8017C85C; } // 8017C908
  c->r[0]=0u+0x00000020u; // 8017C90C
  c->r[3]=rotl(c->r[8],1)&0x00000001u; // 8017C910
  c->r[0]=addc(c,~c->r[8],c->r[0],1); // 8017C914
  c->r[0]=0u+0x00000000u; // 8017C918
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8017C91C
  c->r[0]=0u+0xFFFFFFFDu; // 8017C920
  c->r[3]=c->r[0]&c->r[3]; // 8017C924
  return; // 8017C928
L_8017C92C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8017C92C
  c->r[6]=c->r[5]|c->r[5]; // 8017C930
  c->r[8]=R32(c->r[3]+0x00000000u); // 8017C934
  c->r[7]=rotl(c->r[0],0)&0x0000000Fu; // 8017C938
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017C93C
  c->r[9]=rotl(c->r[8],8)&0x000000FFu; // 8017C940
  c->r[9]=(rotl(c->r[8],24)&0x0000FF00u)|(c->r[9]&~0x0000FF00u); // 8017C944
  c->r[0]=0u-c->r[7]; // 8017C948
  c->r[9]=(rotl(c->r[8],8)&0x00FF0000u)|(c->r[9]&~0x00FF0000u); // 8017C94C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017C950
  c->r[9]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 8017C954
  c->r[7]=c->r[0]|c->r[7]; // 8017C958
  c->r[0]=rotl(c->r[9],0)&0x000000F0u; // 8017C95C
  cmps(c,0,(int32_t)c->r[0],16); // 8017C960
  c->r[10]=rotl(c->r[9],24)&0x00FFFFFFu; // 8017C964
  c->r[0]=rotl(c->r[9],0)&0x000000FFu; // 8017C968
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 8017C96C
  if (crb(c,2)) { goto L_8017C97C; } // 8017C970
  c->r[3]=0u+0xFFFFFFFFu; // 8017C974
  goto L_8017CB38; // 8017C978
L_8017C97C:;
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[0]); // 8017C97C
  if (crb(c,2)) { goto L_8017C994; } // 8017C980
  cmps(c,0,(int32_t)c->r[0],1); // 8017C984
  if (crb(c,2)) { goto L_8017C994; } // 8017C988
  c->r[3]=0u+0xFFFFFFFFu; // 8017C98C
  goto L_8017CB38; // 8017C990
L_8017C994:;
  cmpu(c,0,c->r[4],0x00000004u); // 8017C994
  if (crb(c,1)) { goto L_8017C9A4; } // 8017C998
  c->r[3]=0u+0xFFFFFFFEu; // 8017C99C
  goto L_8017CB38; // 8017C9A0
L_8017C9A4:;
  cmps(c,0,(int32_t)c->r[10],0); // 8017C9A4
  c->r[9]=c->r[3]+0x00000004u; // 8017C9A8
  c->r[11]=c->r[4]+0xFFFFFFFCu; // 8017C9AC
  if (!crb(c,2)) { goto L_8017C9E4; } // 8017C9B0
  cmps(c,0,(int32_t)c->r[11],4); // 8017C9B4
  if (!crb(c,0)) { goto L_8017C9C4; } // 8017C9B8
  c->r[3]=0u+0xFFFFFFFEu; // 8017C9BC
  goto L_8017CB38; // 8017C9C0
L_8017C9C4:;
  c->r[4]=R32(c->r[9]+0x00000000u); // 8017C9C4
  c->r[9]=c->r[9]+0x00000004u; // 8017C9C8
  c->r[11]=c->r[11]+0xFFFFFFFCu; // 8017C9CC
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 8017C9D0
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 8017C9D4
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 8017C9D8
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8017C9DC
  c->r[10]=c->r[3]|c->r[0]; // 8017C9E0
L_8017C9E4:;
  c->r[0]=0u+0x00000008u; // 8017C9E4
  goto L_8017CB14; // 8017C9E8
L_8017C9EC:;
  c->r[11]=addc(c,c->r[11],0xFFFFFFFFu,0); cr0(c,c->r[11]); // 8017C9EC
  c->r[12]=R8(c->r[9]+0x00000000u); // 8017C9F0
  c->r[9]=c->r[9]+0x00000001u; // 8017C9F4
  if (!crb(c,0)) { goto L_8017CA04; } // 8017C9F8
  c->r[3]=0u+0xFFFFFFFEu; // 8017C9FC
  goto L_8017CB38; // 8017CA00
L_8017CA04:;
  c->ctr=c->r[0]; // 8017CA04
L_8017CA08:;
  c->r[3]=rotl(c->r[12],0)&0x00000080u; cr0(c,c->r[3]); // 8017CA08
  if (!crb(c,2)) { goto L_8017CA38; } // 8017CA0C
  c->r[3]=R8(c->r[9]+0x00000000u); // 8017CA10
  c->r[11]=addc(c,c->r[11],0xFFFFFFFFu,0); cr0(c,c->r[11]); // 8017CA14
  c->r[9]=c->r[9]+0x00000001u; // 8017CA18
  W8(c->r[6]+0x00000000u,c->r[3]); // 8017CA1C
  c->r[6]=c->r[6]+0x00000001u; // 8017CA20
  if (!crb(c,0)) { goto L_8017CA30; } // 8017CA24
  c->r[3]=0u+0xFFFFFFFEu; // 8017CA28
  goto L_8017CB38; // 8017CA2C
L_8017CA30:;
  c->r[10]=c->r[10]+0xFFFFFFFFu; // 8017CA30
  goto L_8017CB04; // 8017CA34
L_8017CA38:;
  c->r[7]=R8(c->r[9]+0x00000000u); // 8017CA38
  cmps(c,0,(int32_t)c->r[8],0); // 8017CA3C
  c->r[31]=sraw(c,c->r[7],4); // 8017CA40
  if (!crb(c,2)) { goto L_8017CA50; } // 8017CA44
  c->r[31]=c->r[31]+0x00000003u; // 8017CA48
  goto L_8017CAA0; // 8017CA4C
L_8017CA50:;
  cmps(c,0,(int32_t)c->r[31],1); // 8017CA50
  if (!crb(c,2)) { goto L_8017CA7C; } // 8017CA54
  c->r[4]=R8(c->r[9]+0x00000001u); // 8017CA58
  c->r[11]=c->r[11]+0xFFFFFFFEu; // 8017CA5C
  {uint32_t ea=c->r[9]+0x00000002u; c->r[3]=R8(ea); c->r[9]=ea;} // 8017CA60
  c->r[31]=rotl(c->r[4],4)&0xFFFFFFF0u; // 8017CA64
  c->r[31]=(rotl(c->r[7],12)&0x0000F000u)|(c->r[31]&~0x0000F000u); // 8017CA68
  c->r[3]=sraw(c,c->r[3],4); // 8017CA6C
  c->r[31]=c->r[31]|c->r[3]; // 8017CA70
  c->r[31]=c->r[31]+0x00000111u; // 8017CA74
  goto L_8017CAA0; // 8017CA78
L_8017CA7C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8017CA7C
  if (!crb(c,2)) { goto L_8017CA9C; } // 8017CA80
  {uint32_t ea=c->r[9]+0x00000001u; c->r[3]=R8(ea); c->r[9]=ea;} // 8017CA84
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 8017CA88
  c->r[31]=sraw(c,c->r[3],4); // 8017CA8C
  c->r[31]=(rotl(c->r[7],4)&0x000000F0u)|(c->r[31]&~0x000000F0u); // 8017CA90
  c->r[31]=c->r[31]+0x00000011u; // 8017CA94
  goto L_8017CAA0; // 8017CA98
L_8017CA9C:;
  c->r[31]=c->r[31]+0x00000001u; // 8017CA9C
L_8017CAA0:;
  c->r[4]=R8(c->r[9]+0x00000000u); // 8017CAA0
  c->r[11]=addc(c,c->r[11],0xFFFFFFFEu,0); cr0(c,c->r[11]); // 8017CAA4
  c->r[3]=R8(c->r[9]+0x00000001u); // 8017CAA8
  c->r[9]=c->r[9]+0x00000002u; // 8017CAAC
  c->r[3]=(rotl(c->r[4],8)&0x00000F00u)|(c->r[3]&~0x00000F00u); // 8017CAB0
  c->r[4]=c->r[3]+0x00000001u; // 8017CAB4
  if (!crb(c,0)) { goto L_8017CAC4; } // 8017CAB8
  c->r[3]=0u+0xFFFFFFFEu; // 8017CABC
  goto L_8017CB38; // 8017CAC0
L_8017CAC4:;
  cmpu(c,0,c->r[31],c->r[10]); // 8017CAC4
  if (!crb(c,1)) { goto L_8017CAD4; } // 8017CAC8
  c->r[3]=0u+0xFFFFFFFCu; // 8017CACC
  goto L_8017CB38; // 8017CAD0
L_8017CAD4:;
  c->r[3]=c->r[6]-c->r[4]; // 8017CAD4
  cmpu(c,0,c->r[3],c->r[5]); // 8017CAD8
  if (!crb(c,0)) { goto L_8017CAE8; } // 8017CADC
  c->r[3]=0u+0xFFFFFFFCu; // 8017CAE0
  goto L_8017CB38; // 8017CAE4
L_8017CAE8:;
  c->r[10]=c->r[10]-c->r[31]; // 8017CAE8
L_8017CAEC:;
  c->r[3]=c->r[6]-c->r[4]; // 8017CAEC
  c->r[31]=addc(c,c->r[31],0xFFFFFFFFu,0); cr0(c,c->r[31]); // 8017CAF0
  c->r[3]=R8(c->r[3]+0x00000000u); // 8017CAF4
  W8(c->r[6]+0x00000000u,c->r[3]); // 8017CAF8
  c->r[6]=c->r[6]+0x00000001u; // 8017CAFC
  if (crb(c,1)) { IRQCHK(c); goto L_8017CAEC; } // 8017CB00
L_8017CB04:;
  cmps(c,0,(int32_t)c->r[10],0); // 8017CB04
  if (crb(c,2)) { goto L_8017CB14; } // 8017CB08
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 8017CB0C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017CA08; } // 8017CB10
L_8017CB14:;
  cmps(c,0,(int32_t)c->r[10],0); // 8017CB14
  if (!crb(c,2)) { IRQCHK(c); goto L_8017C9EC; } // 8017CB18
  c->r[0]=0u+0x00000020u; // 8017CB1C
  c->r[3]=rotl(c->r[11],1)&0x00000001u; // 8017CB20
  c->r[0]=addc(c,~c->r[11],c->r[0],1); // 8017CB24
  c->r[0]=0u+0x00000000u; // 8017CB28
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8017CB2C
  c->r[0]=0u+0xFFFFFFFDu; // 8017CB30
  c->r[3]=c->r[0]&c->r[3]; // 8017CB34
L_8017CB38:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017CB38
  c->r[1]=c->r[1]+0x00000010u; // 8017CB3C
  return; // 8017CB40
}

// fn_8017CB44
void f_8017CB44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017CB44
  c->r[0]=0u+0x00000002u; // 8017CB48
  c->r[5]=c->r[3]+0x00000001u; // 8017CB4C
  c->r[9]=R8(c->r[3]+0x00000000u); // 8017CB50
  c->r[8]=c->r[1]+0x00000008u; // 8017CB54
  c->r[6]=c->r[9]+0x00000001u; // 8017CB58
  c->r[7]=rotl(c->r[6],1)&0xFFFFFFFEu; // 8017CB5C
  c->r[6]=0u+0x00000000u; // 8017CB60
  c->r[3]=c->r[3]+c->r[7]; // 8017CB64
  c->ctr=c->r[0]; // 8017CB68
L_8017CB6C:;
  W8(c->r[8]+0x00000000u,c->r[6]); // 8017CB6C
  W8(c->r[8]+0x00000001u,c->r[6]); // 8017CB70
  W8(c->r[8]+0x00000002u,c->r[6]); // 8017CB74
  W8(c->r[8]+0x00000003u,c->r[6]); // 8017CB78
  W8(c->r[8]+0x00000004u,c->r[6]); // 8017CB7C
  W8(c->r[8]+0x00000005u,c->r[6]); // 8017CB80
  W8(c->r[8]+0x00000006u,c->r[6]); // 8017CB84
  W8(c->r[8]+0x00000007u,c->r[6]); // 8017CB88
  W8(c->r[8]+0x00000008u,c->r[6]); // 8017CB8C
  W8(c->r[8]+0x00000009u,c->r[6]); // 8017CB90
  W8(c->r[8]+0x0000000Au,c->r[6]); // 8017CB94
  W8(c->r[8]+0x0000000Bu,c->r[6]); // 8017CB98
  W8(c->r[8]+0x0000000Cu,c->r[6]); // 8017CB9C
  W8(c->r[8]+0x0000000Du,c->r[6]); // 8017CBA0
  W8(c->r[8]+0x0000000Eu,c->r[6]); // 8017CBA4
  W8(c->r[8]+0x0000000Fu,c->r[6]); // 8017CBA8
  W8(c->r[8]+0x00000010u,c->r[6]); // 8017CBAC
  W8(c->r[8]+0x00000011u,c->r[6]); // 8017CBB0
  W8(c->r[8]+0x00000012u,c->r[6]); // 8017CBB4
  W8(c->r[8]+0x00000013u,c->r[6]); // 8017CBB8
  W8(c->r[8]+0x00000014u,c->r[6]); // 8017CBBC
  W8(c->r[8]+0x00000015u,c->r[6]); // 8017CBC0
  W8(c->r[8]+0x00000016u,c->r[6]); // 8017CBC4
  W8(c->r[8]+0x00000017u,c->r[6]); // 8017CBC8
  W8(c->r[8]+0x00000018u,c->r[6]); // 8017CBCC
  W8(c->r[8]+0x00000019u,c->r[6]); // 8017CBD0
  W8(c->r[8]+0x0000001Au,c->r[6]); // 8017CBD4
  W8(c->r[8]+0x0000001Bu,c->r[6]); // 8017CBD8
  W8(c->r[8]+0x0000001Cu,c->r[6]); // 8017CBDC
  W8(c->r[8]+0x0000001Du,c->r[6]); // 8017CBE0
  W8(c->r[8]+0x0000001Eu,c->r[6]); // 8017CBE4
  W8(c->r[8]+0x0000001Fu,c->r[6]); // 8017CBE8
  c->r[8]=c->r[8]+0x00000020u; // 8017CBEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017CB6C; } // 8017CBF0
  cmpu(c,0,c->r[4],0x00000004u); // 8017CBF4
  if (!crb(c,2)) { goto L_8017CC0C; } // 8017CBF8
  cmpu(c,0,c->r[9],0x00000010u); // 8017CBFC
  if (crb(c,0)) { goto L_8017CC0C; } // 8017CC00
  c->r[3]=0u+0x00000000u; // 8017CC04
  goto L_8017CCEC; // 8017CC08
L_8017CC0C:;
  c->r[6]=c->r[3]-c->r[5]; // 8017CC0C
  c->r[0]=rotl(c->r[9],1)&0xFFFFFFFEu; // 8017CC10
  c->r[10]=c->r[1]+0x00000008u; // 8017CC14
  c->r[4]=0u+0x00000001u; // 8017CC18
  c->r[9]=0u+0x00000001u; // 8017CC1C
  c->ctr=c->r[6]; // 8017CC20
  cmpu(c,0,c->r[5],c->r[3]); // 8017CC24
  if (!crb(c,0)) { goto L_8017CCE8; } // 8017CC28
L_8017CC2C:;
  c->r[7]=rotl(c->r[4],29)&0x1FFFFFFFu; // 8017CC2C
  c->r[6]=rotl(c->r[4],0)&0x00000007u; // 8017CC30
  c->r[7]=R8(c->r[10]+c->r[7]); // 8017CC34
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[9]<<((c->r[6])&31)); // 8017CC38
  c->r[6]=c->r[7]&c->r[6]; cr0(c,c->r[6]); // 8017CC3C
  if (!crb(c,2)) { goto L_8017CCDC; } // 8017CC40
  c->r[8]=R8(c->r[5]+0x00000000u); // 8017CC44
  c->r[6]=rotl(c->r[5],0)&0xFFFFFFFEu; // 8017CC48
  c->r[7]=rotl(c->r[8],0)&0x0000003Fu; // 8017CC4C
  cmps(c,0,(int32_t)c->r[8],0); // 8017CC50
  c->r[7]=c->r[7]+0x00000001u; // 8017CC54
  c->r[11]=rotl(c->r[7],1)&0xFFFFFFFEu; // 8017CC58
  c->r[6]=c->r[6]+c->r[11]; // 8017CC5C
  if (!crb(c,2)) { goto L_8017CC6C; } // 8017CC60
  cmpu(c,0,c->r[4],c->r[0]); // 8017CC64
  if (!crb(c,0)) { goto L_8017CCDC; } // 8017CC68
L_8017CC6C:;
  cmpu(c,0,c->r[6],c->r[3]); // 8017CC6C
  if (crb(c,0)) { goto L_8017CC7C; } // 8017CC70
  c->r[3]=0u+0x00000000u; // 8017CC74
  goto L_8017CCEC; // 8017CC78
L_8017CC7C:;
  c->r[6]=rotl(c->r[8],0)&0x00000080u; cr0(c,c->r[6]); // 8017CC7C
  if (crb(c,2)) { goto L_8017CCA8; } // 8017CC80
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFEu; // 8017CC84
  c->r[6]=c->r[6]+c->r[11]; // 8017CC88
  c->r[8]=rotl(c->r[6],29)&0x1FFFFFFFu; // 8017CC8C
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 8017CC90
  c->r[7]=R8(c->r[10]+c->r[8]); // 8017CC94
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[9]<<((c->r[6])&31)); // 8017CC98
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 8017CC9C
  c->r[6]=c->r[7]|c->r[6]; // 8017CCA0
  W8(c->r[10]+c->r[8],c->r[6]); // 8017CCA4
L_8017CCA8:;
  c->r[6]=R8(c->r[5]+0x00000000u); // 8017CCA8
  c->r[6]=rotl(c->r[6],0)&0x00000040u; cr0(c,c->r[6]); // 8017CCAC
  if (crb(c,2)) { goto L_8017CCDC; } // 8017CCB0
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFEu; // 8017CCB4
  c->r[6]=c->r[11]+c->r[6]; // 8017CCB8
  c->r[6]=c->r[6]+0x00000001u; // 8017CCBC
  c->r[8]=rotl(c->r[6],29)&0x1FFFFFFFu; // 8017CCC0
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 8017CCC4
  c->r[7]=R8(c->r[10]+c->r[8]); // 8017CCC8
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[9]<<((c->r[6])&31)); // 8017CCCC
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 8017CCD0
  c->r[6]=c->r[7]|c->r[6]; // 8017CCD4
  W8(c->r[10]+c->r[8],c->r[6]); // 8017CCD8
L_8017CCDC:;
  c->r[4]=c->r[4]+0x00000001u; // 8017CCDC
  c->r[5]=c->r[5]+0x00000001u; // 8017CCE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017CC2C; } // 8017CCE4
L_8017CCE8:;
  c->r[3]=0u+0x00000001u; // 8017CCE8
L_8017CCEC:;
  c->r[1]=c->r[1]+0x00000050u; // 8017CCEC
  return; // 8017CCF0
}

// fn_8017CCF4
void f_8017CCF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017CCF4
  c->r[0]=c->lr; // 8017CCF8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017CCFC
  c->r[11]=c->r[1]+0x00000040u; // 8017CD00
  c->lr=0x8017CD08u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017CD04
  c->r[7]=R32(c->r[3]+0x00000000u); // 8017CD08
  c->r[22]=c->r[3]|c->r[3]; // 8017CD0C
  c->r[9]=R32(c->r[3]+0x00000000u); // 8017CD10
  c->r[23]=c->r[4]|c->r[4]; // 8017CD14
  c->r[6]=rotl(c->r[7],8)&0x00FF0000u; // 8017CD18
  c->r[0]=rotl(c->r[7],24)&0x0000FF00u; // 8017CD1C
  c->r[6]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8017CD20
  c->r[8]=rotl(c->r[9],8)&0x00FF0000u; // 8017CD24
  c->r[0]=(rotl(c->r[7],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8017CD28
  c->r[7]=rotl(c->r[9],24)&0x0000FF00u; // 8017CD2C
  c->r[0]=c->r[6]|c->r[0]; // 8017CD30
  c->r[8]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 8017CD34
  c->r[29]=rotl(c->r[0],24)&0x00FFFFFFu; cr0(c,c->r[29]); // 8017CD38
  c->r[7]=(rotl(c->r[9],8)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 8017CD3C
  c->r[0]=c->r[8]|c->r[7]; // 8017CD40
  c->r[30]=c->r[5]|c->r[5]; // 8017CD44
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8017CD48
  if (crb(c,2)) { goto L_8017CD58; } // 8017CD4C
  c->r[31]=c->r[3]+0x00000004u; // 8017CD50
  goto L_8017CD5C; // 8017CD54
L_8017CD58:;
  c->r[31]=c->r[3]+0x00000008u; // 8017CD58
L_8017CD5C:;
  c->r[7]=R8(c->r[3]+0x00000000u); // 8017CD5C
  c->r[0]=rotl(c->r[0],0)&0x000000F0u; // 8017CD60
  c->r[5]=R8(c->r[31]+0x00000000u); // 8017CD64
  cmps(c,0,(int32_t)c->r[0],32); // 8017CD68
  c->r[6]=rotl(c->r[7],0)&0x00000007u; // 8017CD6C
  c->r[28]=c->r[31]+0x00000001u; // 8017CD70
  c->r[0]=c->r[5]+0x00000001u; // 8017CD74
  c->r[27]=rotl(c->r[7],0)&0x0000000Fu; // 8017CD78
  c->r[24]=c->r[6]+0x00000004u; // 8017CD7C
  c->r[26]=0u+0x00000000u; // 8017CD80
  c->r[21]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8017CD84
  c->r[25]=0u+0x00000000u; // 8017CD88
  if (crb(c,2)) { goto L_8017CD98; } // 8017CD8C
  c->r[3]=0u+0xFFFFFFFFu; // 8017CD90
  goto L_8017CF38; // 8017CD94
L_8017CD98:;
  cmpu(c,0,c->r[27],0x00000004u); // 8017CD98
  if (crb(c,2)) { goto L_8017CDB0; } // 8017CD9C
  cmpu(c,0,c->r[27],0x00000008u); // 8017CDA0
  if (crb(c,2)) { goto L_8017CDB0; } // 8017CDA4
  c->r[3]=0u+0xFFFFFFFFu; // 8017CDA8
  goto L_8017CF38; // 8017CDAC
L_8017CDB0:;
  cmps(c,0,(int32_t)c->r[29],0); // 8017CDB0
  if (!crb(c,2)) { goto L_8017CDE8; } // 8017CDB4
  c->r[0]=c->r[21]+0x00000008u; // 8017CDB8
  cmpu(c,0,c->r[4],c->r[0]); // 8017CDBC
  if (!crb(c,0)) { goto L_8017CDCC; } // 8017CDC0
  c->r[3]=0u+0xFFFFFFFEu; // 8017CDC4
  goto L_8017CF38; // 8017CDC8
L_8017CDCC:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8017CDCC
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 8017CDD0
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 8017CDD4
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 8017CDD8
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8017CDDC
  c->r[29]=c->r[3]|c->r[0]; // 8017CDE0
  goto L_8017CDFC; // 8017CDE4
L_8017CDE8:;
  c->r[0]=c->r[21]+0x00000004u; // 8017CDE8
  cmpu(c,0,c->r[4],c->r[0]); // 8017CDEC
  if (!crb(c,0)) { goto L_8017CDFC; } // 8017CDF0
  c->r[3]=0u+0xFFFFFFFEu; // 8017CDF4
  goto L_8017CF38; // 8017CDF8
L_8017CDFC:;
  c->r[3]=c->r[31]|c->r[31]; // 8017CDFC
  c->r[4]=c->r[27]|c->r[27]; // 8017CE00
  c->lr=0x8017CE08u; f_8017CB44(c); // 8017CE04
  cmps(c,0,(int32_t)c->r[3],0); // 8017CE08
  if (!crb(c,2)) { goto L_8017CE18; } // 8017CE0C
  c->r[3]=0u+0xFFFFFFFBu; // 8017CE10
  goto L_8017CF38; // 8017CE14
L_8017CE18:;
  c->r[3]=c->r[31]+c->r[21]; // 8017CE18
  c->r[0]=c->r[3]-c->r[22]; // 8017CE1C
  c->r[4]=c->r[23]-c->r[0]; cr0(c,c->r[4]); // 8017CE20
  if (!crb(c,0)) { goto L_8017CE30; } // 8017CE24
  c->r[3]=0u+0xFFFFFFFEu; // 8017CE28
  goto L_8017CF38; // 8017CE2C
L_8017CE30:;
  c->r[9]=c->r[28]|c->r[28]; // 8017CE30
  c->r[0]=addc(c,~c->r[27],0x00000020u,1); // 8017CE34
  goto L_8017CF14; // 8017CE38
L_8017CE3C:;
  c->r[8]=R32(c->r[3]+0x00000000u); // 8017CE3C
  c->r[4]=addc(c,c->r[4],0xFFFFFFFCu,0); cr0(c,c->r[4]); // 8017CE40
  c->r[5]=0u+0x00000020u; // 8017CE44
  c->r[3]=c->r[3]+0x00000004u; // 8017CE48
  c->r[7]=rotl(c->r[8],8)&0x00FF0000u; // 8017CE4C
  c->r[6]=rotl(c->r[8],24)&0x0000FF00u; // 8017CE50
  c->r[7]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 8017CE54
  c->r[6]=(rotl(c->r[8],8)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 8017CE58
  c->r[6]=c->r[7]|c->r[6]; // 8017CE5C
  if (!crb(c,0)) { goto L_8017CF0C; } // 8017CE60
  c->r[3]=0u+0xFFFFFFFEu; // 8017CE64
  goto L_8017CF38; // 8017CE68
  goto L_8017CF0C; // 8017CE6C
L_8017CE70:;
  c->r[7]=R8(c->r[9]+0x00000000u); // 8017CE70
  c->r[10]=rotl(c->r[6],1)&0x00000001u; // 8017CE74
  c->r[9]=rotl(c->r[9],0)&0xFFFFFFFEu; // 8017CE78
  c->r[11]=((c->r[10])&0x20)?0u:(c->r[7]<<((c->r[10])&31)); // 8017CE7C
  c->r[8]=rotl(c->r[7],0)&0x0000003Fu; // 8017CE80
  c->r[7]=rotl(c->r[11],0)&0x00000080u; cr0(c,c->r[7]); // 8017CE84
  c->r[8]=c->r[8]+0x00000001u; // 8017CE88
  c->r[7]=c->r[10]+c->r[9]; // 8017CE8C
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8017CE90
  c->r[9]=c->r[8]+c->r[7]; // 8017CE94
  if (crb(c,2)) { goto L_8017CF00; } // 8017CE98
  c->r[25]=c->r[25]+0x00000001u; // 8017CE9C
  c->r[8]=R8(c->r[9]+0x00000000u); // 8017CEA0
  c->r[7]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[27]); // 8017CEA4
  c->r[26]=((c->r[27])&0x20)?0u:(c->r[26]>>((c->r[27])&31)); // 8017CEA8
  c->r[8]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 8017CEAC
  c->r[9]=c->r[28]|c->r[28]; // 8017CEB0
  c->r[26]=c->r[26]|c->r[8]; // 8017CEB4
  c->r[7]=rotl(c->r[7],29)&0x1FFFFFFFu; // 8017CEB8
  cmpu(c,0,c->r[29],c->r[7]); // 8017CEBC
  if (crb(c,1)) { goto L_8017CED4; } // 8017CEC0
  c->r[7]=c->r[24]-c->r[25]; // 8017CEC4
  c->r[25]=c->r[24]|c->r[24]; // 8017CEC8
  c->r[7]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[7]); // 8017CECC
  c->r[26]=((c->r[7])&0x20)?0u:(c->r[26]>>((c->r[7])&31)); // 8017CED0
L_8017CED4:;
  cmpu(c,0,c->r[25],c->r[24]); // 8017CED4
  if (!crb(c,2)) { goto L_8017CF00; } // 8017CED8
  c->r[8]=rotl(c->r[26],8)&0x00FF0000u; // 8017CEDC
  c->r[7]=rotl(c->r[26],24)&0x0000FF00u; // 8017CEE0
  c->r[8]=(rotl(c->r[26],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 8017CEE4
  c->r[25]=0u+0x00000000u; // 8017CEE8
  c->r[7]=(rotl(c->r[26],8)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 8017CEEC
  c->r[29]=c->r[29]+0xFFFFFFFCu; // 8017CEF0
  c->r[7]=c->r[8]|c->r[7]; // 8017CEF4
  W32(c->r[30]+0x00000000u,c->r[7]); // 8017CEF8
  c->r[30]=c->r[30]+0x00000004u; // 8017CEFC
L_8017CF00:;
  cmps(c,0,(int32_t)c->r[29],0); // 8017CF00
  if (!crb(c,1)) { goto L_8017CF14; } // 8017CF04
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 8017CF08
L_8017CF0C:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 8017CF0C
  if (!crb(c,0)) { IRQCHK(c); goto L_8017CE70; } // 8017CF10
L_8017CF14:;
  cmps(c,0,(int32_t)c->r[29],0); // 8017CF14
  if (crb(c,1)) { IRQCHK(c); goto L_8017CE3C; } // 8017CF18
  c->r[0]=0u+0x00000020u; // 8017CF1C
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 8017CF20
  c->r[0]=addc(c,~c->r[4],c->r[0],1); // 8017CF24
  c->r[0]=0u+0x00000000u; // 8017CF28
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8017CF2C
  c->r[0]=0u+0xFFFFFFFDu; // 8017CF30
  c->r[3]=c->r[0]&c->r[3]; // 8017CF34
L_8017CF38:;
  c->r[11]=c->r[1]+0x00000040u; // 8017CF38
  c->lr=0x8017CF40u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017CF3C
  c->r[0]=R32(c->r[1]+0x00000044u); // 8017CF40
  c->lr=c->r[0]; // 8017CF44
  c->r[1]=c->r[1]+0x00000040u; // 8017CF48
  return; // 8017CF4C
}

// fn_8017CF50
void f_8017CF50(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x00000000u); // 8017CF50
  c->r[9]=0u+0x00000000u; // 8017CF54
  c->r[0]=R8(c->r[3]+0x00000000u); // 8017CF58
  c->r[7]=rotl(c->r[6],8)&0x000000FFu; // 8017CF5C
  c->r[7]=(rotl(c->r[6],24)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 8017CF60
  c->r[8]=rotl(c->r[0],0)&0x0000000Fu; // 8017CF64
  c->r[7]=(rotl(c->r[6],8)&0x00FF0000u)|(c->r[7]&~0x00FF0000u); // 8017CF68
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 8017CF6C
  c->r[0]=rotl(c->r[7],0)&0x000000F0u; // 8017CF70
  cmps(c,0,(int32_t)c->r[0],128); // 8017CF74
  c->r[7]=rotl(c->r[7],24)&0x00FFFFFFu; // 8017CF78
  if (crb(c,2)) { goto L_8017CF88; } // 8017CF7C
  c->r[3]=0u+0xFFFFFFFFu; // 8017CF80
  return; // 8017CF84
L_8017CF88:;
  cmps(c,0,(int32_t)c->r[8],0); // 8017CF88
  if (crb(c,2)) { goto L_8017CFA0; } // 8017CF8C
  cmpu(c,0,c->r[8],0x00000001u); // 8017CF90
  if (crb(c,2)) { goto L_8017CFA0; } // 8017CF94
  c->r[3]=0u+0xFFFFFFFFu; // 8017CF98
  return; // 8017CF9C
L_8017CFA0:;
  cmpu(c,0,c->r[4],0x00000004u); // 8017CFA0
  if (crb(c,1)) { goto L_8017CFB0; } // 8017CFA4
  c->r[3]=0u+0xFFFFFFFEu; // 8017CFA8
  return; // 8017CFAC
L_8017CFB0:;
  cmpu(c,0,c->r[8],0x00000001u); // 8017CFB0
  c->r[6]=c->r[3]+0x00000004u; // 8017CFB4
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 8017CFB8
  if (crb(c,2)) { goto L_8017CFF0; } // 8017CFBC
L_8017CFC0:;
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 8017CFC0
  c->r[0]=R8(c->r[6]+0x00000000u); // 8017CFC4
  c->r[6]=c->r[6]+0x00000001u; // 8017CFC8
  if (!crb(c,0)) { goto L_8017CFD8; } // 8017CFCC
  c->r[3]=0u+0xFFFFFFFEu; // 8017CFD0
  return; // 8017CFD4
L_8017CFD8:;
  c->r[9]=c->r[9]+c->r[0]; // 8017CFD8
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 8017CFDC
  W8(c->r[5]+0x00000000u,c->r[9]); // 8017CFE0
  c->r[5]=c->r[5]+0x00000001u; // 8017CFE4
  if (crb(c,1)) { IRQCHK(c); goto L_8017CFC0; } // 8017CFE8
  goto L_8017D028; // 8017CFEC
L_8017CFF0:;
  c->r[3]=R16(c->r[6]+0x00000000u); // 8017CFF0
  c->r[4]=addc(c,c->r[4],0xFFFFFFFEu,0); cr0(c,c->r[4]); // 8017CFF4
  c->r[6]=c->r[6]+0x00000002u; // 8017CFF8
  c->r[0]=rotl(c->r[3],8)&0x0000FF00u; // 8017CFFC
  c->r[0]=(rotl(c->r[3],24)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8017D000
  if (!crb(c,0)) { goto L_8017D010; } // 8017D004
  c->r[3]=0u+0xFFFFFFFEu; // 8017D008
  return; // 8017D00C
L_8017D010:;
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8017D010
  c->r[7]=addc(c,c->r[7],0xFFFFFFFEu,0); cr0(c,c->r[7]); // 8017D014
  c->r[9]=c->r[9]+c->r[0]; // 8017D018
  W16(0u+c->r[5],__builtin_bswap16((uint16_t)c->r[9])); // 8017D01C
  c->r[5]=c->r[5]+0x00000002u; // 8017D020
  if (crb(c,1)) { IRQCHK(c); goto L_8017CFF0; } // 8017D024
L_8017D028:;
  cmps(c,0,(int32_t)c->r[4],32); // 8017D028
  if (!crb(c,1)) { goto L_8017D038; } // 8017D02C
  c->r[3]=0u+0xFFFFFFFDu; // 8017D030
  return; // 8017D034
L_8017D038:;
  c->r[3]=0u+0x00000000u; // 8017D038
  return; // 8017D03C
}

// fn_8017D040
void f_8017D040(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFFAECCu); // 8017D040
  c->r[6]=0u+0x802E0000u; // 8017D044
  c->r[4]=R32(c->r[3]+0x00000018u); // 8017D048
  c->r[6]=c->r[6]+0xFFFFB0F0u; // 8017D04C
  cmpu(c,0,c->r[0],0x00000003u); // 8017D050
  c->r[10]=R32(c->r[3]+0x0000001Cu); // 8017D054
  c->r[5]=addc(c,~c->r[4],0x0000007Fu,1); // 8017D058
  c->r[11]=addc(c,~c->r[10],0x0000007Fu,1); // 8017D05C
  if (!crb(c,2)) { goto L_8017D0B0; } // 8017D060
  c->r[9]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8017D064
  c->r[7]=c->r[6]+0x00000990u; // 8017D068
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+c->r[9]); // 8017D06C
  c->r[8]=rotl(c->r[5],1)&0xFFFFFFFEu; // 8017D070
  c->r[5]=rotl(c->r[11],1)&0xFFFFFFFEu; // 8017D074
  c->r[0]=rotl(c->r[10],1)&0xFFFFFFFEu; // 8017D078
  W32(c->r[3]+0x00000024u,c->r[4]); // 8017D07C
  c->r[4]=c->r[6]+0x00000A90u; // 8017D080
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+c->r[8]); // 8017D084
  W32(c->r[3]+0x00000028u,c->r[6]); // 8017D088
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+c->r[5]); // 8017D08C
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 8017D090
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+c->r[0]); // 8017D094
  W32(c->r[3]+0x00000030u,c->r[0]); // 8017D098
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+c->r[8]); // 8017D09C
  W32(c->r[3]+0x00000034u,c->r[0]); // 8017D0A0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+c->r[9]); // 8017D0A4
  W32(c->r[3]+0x00000038u,c->r[0]); // 8017D0A8
  return; // 8017D0AC
L_8017D0B0:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8017D0B0
  c->r[7]=c->r[6]+0x00000790u; // 8017D0B4
  c->r[0]=R32(c->r[7]+c->r[0]); // 8017D0B8
  c->r[6]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8017D0BC
  c->r[5]=rotl(c->r[11],2)&0xFFFFFFFCu; // 8017D0C0
  c->r[4]=rotl(c->r[10],2)&0xFFFFFFFCu; // 8017D0C4
  W32(c->r[3]+0x00000024u,c->r[0]); // 8017D0C8
  c->r[0]=0u+0x00000000u; // 8017D0CC
  c->r[6]=R32(c->r[7]+c->r[6]); // 8017D0D0
  W32(c->r[3]+0x00000028u,c->r[6]); // 8017D0D4
  c->r[5]=R32(c->r[7]+c->r[5]); // 8017D0D8
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 8017D0DC
  c->r[4]=R32(c->r[7]+c->r[4]); // 8017D0E0
  W32(c->r[3]+0x00000030u,c->r[4]); // 8017D0E4
  W32(c->r[3]+0x00000034u,c->r[0]); // 8017D0E8
  W32(c->r[3]+0x00000038u,c->r[0]); // 8017D0EC
  return; // 8017D0F0
}

// fn_8017D0F4
void f_8017D0F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D0F4
  c->r[0]=c->lr; // 8017D0F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017D0FC
  c->r[11]=c->r[1]+0x00000030u; // 8017D100
  c->lr=0x8017D108u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017D104
  c->lr=0x8017D10Cu; f_80174B3C(c); // 8017D108
  cmps(c,0,(int32_t)c->r[3],0); // 8017D10C
  if (crb(c,2)) { goto L_8017D1F0; } // 8017D110
  c->r[0]=R32(c->r[13]+0xFFFFAEC4u); // 8017D114
  cmps(c,0,(int32_t)c->r[0],0); // 8017D118
  if (!crb(c,2)) { goto L_8017D1F0; } // 8017D11C
  c->lr=0x8017D124u; f_80177D88(c); // 8017D120
  c->r[5]=0u+0x80460000u; // 8017D124
  c->r[4]=0u+0x80460000u; // 8017D128
  c->r[5]=c->r[5]+0xFFFFA828u; // 8017D12C
  W32(c->r[13]+0xFFFFAEC8u,c->r[3]); // 8017D130
  c->r[4]=c->r[4]+0xFFFFD228u; // 8017D134
  c->r[25]=0u+0x00000000u; // 8017D138
  W32(c->r[13]+0xFFFFAEC0u,c->r[5]); // 8017D13C
  c->r[26]=0u+0x00000000u; // 8017D140
  c->r[27]=0u+0x00000000u; // 8017D144
  c->r[28]=0u+0x50000000u; // 8017D148
  W32(c->r[13]+0xFFFFAED0u,c->r[4]); // 8017D14C
  c->r[29]=0u+0xFFFFFC40u; // 8017D150
  c->r[30]=0u+0x00000040u; // 8017D154
  c->r[31]=0u+0x0000007Fu; // 8017D158
  goto L_8017D1D8; // 8017D15C
L_8017D160:;
  c->r[3]=R32(c->r[13]+0xFFFFAEC0u); // 8017D160
  W32(c->r[3]+c->r[26],c->r[27]); // 8017D164
  c->r[0]=R32(c->r[13]+0xFFFFAEC0u); // 8017D168
  c->r[3]=c->r[0]+c->r[26]; // 8017D16C
  W32(c->r[3]+0x00000004u,c->r[28]); // 8017D170
  W32(c->r[3]+0x00000008u,c->r[27]); // 8017D174
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 8017D178
  W32(c->r[3]+0x00000010u,c->r[29]); // 8017D17C
  W32(c->r[3]+0x00000014u,c->r[29]); // 8017D180
  W32(c->r[3]+0x00000020u,c->r[27]); // 8017D184
  W32(c->r[3]+0x00000018u,c->r[30]); // 8017D188
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 8017D18C
  W16(c->r[3]+0x0000006Cu,c->r[27]); // 8017D190
  W16(c->r[3]+0x00000068u,c->r[27]); // 8017D194
  W16(c->r[3]+0x00000064u,c->r[27]); // 8017D198
  W16(c->r[3]+0x00000060u,c->r[27]); // 8017D19C
  W16(c->r[3]+0x0000005Cu,c->r[27]); // 8017D1A0
  W16(c->r[3]+0x00000058u,c->r[27]); // 8017D1A4
  W16(c->r[3]+0x00000054u,c->r[27]); // 8017D1A8
  W16(c->r[3]+0x00000050u,c->r[27]); // 8017D1AC
  W16(c->r[3]+0x0000004Cu,c->r[27]); // 8017D1B0
  W16(c->r[3]+0x00000048u,c->r[27]); // 8017D1B4
  W16(c->r[3]+0x00000044u,c->r[27]); // 8017D1B8
  W16(c->r[3]+0x00000040u,c->r[27]); // 8017D1BC
  W16(c->r[3]+0x0000003Cu,c->r[27]); // 8017D1C0
  c->lr=0x8017D1C8u; f_8017D040(c); // 8017D1C4
  c->r[3]=c->r[25]|c->r[25]; // 8017D1C8
  c->lr=0x8017D1D0u; f_8017D210(c); // 8017D1CC
  c->r[26]=c->r[26]+0x00000070u; // 8017D1D0
  c->r[25]=c->r[25]+0x00000001u; // 8017D1D4
L_8017D1D8:;
  c->r[0]=R32(c->r[13]+0xFFFFAEC8u); // 8017D1D8
  cmpu(c,0,c->r[25],c->r[0]); // 8017D1DC
  if (crb(c,0)) { IRQCHK(c); goto L_8017D160; } // 8017D1E0
  c->r[0]=0u+0x00000001u; // 8017D1E4
  W32(c->r[13]+0xFFFFAECCu,c->r[0]); // 8017D1E8
  W32(c->r[13]+0xFFFFAEC4u,c->r[0]); // 8017D1EC
L_8017D1F0:;
  c->r[11]=c->r[1]+0x00000030u; // 8017D1F0
  c->lr=0x8017D1F8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017D1F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017D1F8
  c->lr=c->r[0]; // 8017D1FC
  c->r[1]=c->r[1]+0x00000030u; // 8017D200
  return; // 8017D204
}

// fn_8017D208
void f_8017D208(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFFAECCu,c->r[3]); // 8017D208
  return; // 8017D20C
}

// fn_8017D210
void f_8017D210(Ctx* __restrict c) {
  c->r[5]=R32(c->r[13]+0xFFFFAED0u); // 8017D210
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 8017D214
  c->r[3]=0u+0x00000000u; // 8017D218
  {uint32_t ea=c->r[4]+c->r[5]; W32(ea,c->r[3]); c->r[4]=ea;} // 8017D21C
  c->r[0]=0u+0xFFFFFC40u; // 8017D220
  W32(c->r[4]+0x00000004u,c->r[3]); // 8017D224
  W32(c->r[4]+0x00000008u,c->r[3]); // 8017D228
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 8017D22C
  W32(c->r[4]+0x00000010u,c->r[3]); // 8017D230
  W32(c->r[4]+0x00000014u,c->r[0]); // 8017D234
  W32(c->r[4]+0x00000018u,c->r[0]); // 8017D238
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8017D23C
  W32(c->r[4]+0x00000020u,c->r[0]); // 8017D240
  W16(c->r[4]+0x00000040u,c->r[3]); // 8017D244
  W16(c->r[4]+0x0000003Cu,c->r[3]); // 8017D248
  W16(c->r[4]+0x00000038u,c->r[3]); // 8017D24C
  W16(c->r[4]+0x00000034u,c->r[3]); // 8017D250
  W16(c->r[4]+0x00000030u,c->r[3]); // 8017D254
  W16(c->r[4]+0x0000002Cu,c->r[3]); // 8017D258
  W16(c->r[4]+0x00000028u,c->r[3]); // 8017D25C
  W16(c->r[4]+0x00000024u,c->r[3]); // 8017D260
  return; // 8017D264
}

// fn_8017D268
void f_8017D268(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D268
  c->r[0]=c->lr; // 8017D26C
  {uint32_t ea=c->r[2]+0xFFFFAC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017D270
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017D274
  c->r[0]=0u+0x00000000u; // 8017D278
  W32(c->r[13]+0xFFFFAED8u,c->r[0]); // 8017D27C
  c->lr=0x8017D284u; f_8017D2A4(c); // 8017D280
  {uint32_t ea=c->r[2]+0xFFFFAC14u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017D284
  c->lr=0x8017D28Cu; f_8017D29C(c); // 8017D288
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017D28C
  c->lr=c->r[0]; // 8017D290
  c->r[1]=c->r[1]+0x00000010u; // 8017D294
  return; // 8017D298
}

// fn_8017D29C
void f_8017D29C(Ctx* __restrict c) {
  {uint32_t ea=c->r[13]+0xFFFFAEE4u; WF32(ea,c->f[1]);} // 8017D29C
  return; // 8017D2A0
}

// fn_8017D2A4
void f_8017D2A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[13]+0xFFFFAEE0u; WF32(ea,c->f[1]);} // 8017D2A4
  return; // 8017D2A8
}

void hle_DSPCheckMailToDSP(Ctx*);
// DSPCheckMailToDSP
void f_8017D2AC(Ctx* __restrict c) {
  hle_DSPCheckMailToDSP(c);
}

void hle_DSPCheckMailFromDSP(Ctx*);
// DSPCheckMailFromDSP
void f_8017D2BC(Ctx* __restrict c) {
  hle_DSPCheckMailFromDSP(c);
}

// DSPReadMailFromDSP
void f_8017D2CC(Ctx* __restrict c) {
  trace_call(0x8017D2CCu);
  c->r[3]=0u+0xCC000000u; // 8017D2CC
  c->r[0]=R16(c->r[3]+0x00005004u); // 8017D2D0
  c->r[3]=R16(c->r[3]+0x00005006u); // 8017D2D4
  c->r[3]=(rotl(c->r[0],16)&0xFFFF0000u)|(c->r[3]&~0xFFFF0000u); // 8017D2D8
  return; // 8017D2DC
}

void hle_DSPSendMailToDSP(Ctx*);
// DSPSendMailToDSP
void f_8017D2E0(Ctx* __restrict c) {
  hle_DSPSendMailToDSP(c);
}

// DSPInit
void f_8017D2F4(Ctx* __restrict c) {
  trace_call(0x8017D2F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D2F4
  c->r[0]=c->lr; // 8017D2F8
  c->r[5]=0u+0x802E0000u; // 8017D2FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017D300
  c->r[5]=c->r[5]+0xFFFFBC80u; // 8017D304
  c->r[3]=c->r[5]+0x00000048u; // 8017D308
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017D30C
  c->r[4]=c->r[5]+0x00000068u; // 8017D310
  c->r[5]=c->r[5]+0x00000074u; // 8017D314
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017D318
  c->lr=0x8017D320u; f_8017D528(c); // 8017D31C
  c->r[0]=R32(c->r[13]+0xFFFFAEE8u); // 8017D320
  cmps(c,0,(int32_t)c->r[0],1); // 8017D324
  if (crb(c,2)) { goto L_8017D3A0; } // 8017D328
  c->r[3]=R32(c->r[13]+0xFFFF9130u); // 8017D32C
  c->lr=0x8017D334u; f_8014E714(c); // 8017D330
  c->lr=0x8017D338u; f_80154410(c); // 8017D334
  c->r[4]=0u+0x80180000u; // 8017D338
  c->r[31]=c->r[3]|c->r[3]; // 8017D33C
  c->r[4]=c->r[4]+0xFFFFD578u; // 8017D340
  c->r[3]=0u+0x00000007u; // 8017D344
  c->lr=0x8017D34Cu; f_8015445C(c); // 8017D348
  c->r[3]=0u+0x01000000u; // 8017D34C
  c->lr=0x8017D354u; f_80154820(c); // 8017D350
  c->r[7]=0u+0xCC000000u; // 8017D354
  c->r[3]=0u+0xFFFFFF57u; // 8017D358
  c->r[6]=R16(c->r[7]+0x0000500Au); // 8017D35C
  c->r[5]=0u+0xFFFFFF53u; // 8017D360
  c->r[4]=0u+0x00000000u; // 8017D364
  c->r[0]=0u+0x00000001u; // 8017D368
  c->r[3]=c->r[6]&c->r[3]; // 8017D36C
  c->r[3]=c->r[3]|0x00000800u; // 8017D370
  W16(c->r[7]+0x0000500Au,c->r[3]); // 8017D374
  c->r[3]=c->r[31]|c->r[31]; // 8017D378
  c->r[6]=R16(c->r[7]+0x0000500Au); // 8017D37C
  c->r[5]=c->r[6]&c->r[5]; // 8017D380
  W16(c->r[7]+0x0000500Au,c->r[5]); // 8017D384
  W32(c->r[13]+0xFFFFAEF8u,c->r[4]); // 8017D388
  W32(c->r[13]+0xFFFFAF04u,c->r[4]); // 8017D38C
  W32(c->r[13]+0xFFFFAEFCu,c->r[4]); // 8017D390
  W32(c->r[13]+0xFFFFAF00u,c->r[4]); // 8017D394
  W32(c->r[13]+0xFFFFAEE8u,c->r[0]); // 8017D398
  c->lr=0x8017D3A0u; f_80154438(c); // 8017D39C
L_8017D3A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017D3A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017D3A4
  c->lr=c->r[0]; // 8017D3A8
  c->r[1]=c->r[1]+0x00000010u; // 8017D3AC
  return; // 8017D3B0
}

// DSPCheckInit
void f_8017D3B4(Ctx* __restrict c) {
  trace_call(0x8017D3B4u);
  c->r[3]=R32(c->r[13]+0xFFFFAEE8u); // 8017D3B4
  return; // 8017D3B8
}

// DSPAddTask
void f_8017D3BC(Ctx* __restrict c) {
  trace_call(0x8017D3BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D3BC
  c->r[0]=c->lr; // 8017D3C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017D3C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017D3C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017D3CC
  c->r[30]=c->r[3]|c->r[3]; // 8017D3D0
  c->lr=0x8017D3D8u; f_80154410(c); // 8017D3D4
  c->r[31]=c->r[3]|c->r[3]; // 8017D3D8
  c->r[3]=c->r[30]|c->r[30]; // 8017D3DC
  c->lr=0x8017D3E4u; f_8017DCDC(c); // 8017D3E0
  c->r[3]=0u+0x00000000u; // 8017D3E4
  c->r[0]=0u+0x00000001u; // 8017D3E8
  W32(c->r[30]+0x00000000u,c->r[3]); // 8017D3EC
  c->r[3]=c->r[31]|c->r[31]; // 8017D3F0
  W32(c->r[30]+0x00000008u,c->r[0]); // 8017D3F4
  c->lr=0x8017D3FCu; f_80154438(c); // 8017D3F8
  c->r[0]=R32(c->r[13]+0xFFFFAF00u); // 8017D3FC
  cmpu(c,0,c->r[30],c->r[0]); // 8017D400
  if (!crb(c,2)) { goto L_8017D410; } // 8017D404
  c->r[3]=c->r[30]|c->r[30]; // 8017D408
  c->lr=0x8017D410u; f_8017DB50(c); // 8017D40C
L_8017D410:;
  c->r[3]=c->r[30]|c->r[30]; // 8017D410
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017D414
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017D418
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017D41C
  c->lr=c->r[0]; // 8017D420
  c->r[1]=c->r[1]+0x00000010u; // 8017D424
  return; // 8017D428
}

// fn_8017D42C
void f_8017D42C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D42C
  c->r[0]=c->lr; // 8017D430
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017D434
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017D438
  c->r[31]=c->r[3]|c->r[3]; // 8017D43C
  c->lr=0x8017D444u; f_80154410(c); // 8017D440
  c->r[0]=R32(c->r[31]+0x00000008u); // 8017D444
  c->r[0]=c->r[0]|0x00000002u; // 8017D448
  W32(c->r[31]+0x00000008u,c->r[0]); // 8017D44C
  c->lr=0x8017D454u; f_80154438(c); // 8017D450
  c->r[3]=c->r[31]|c->r[31]; // 8017D454
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017D458
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017D45C
  c->lr=c->r[0]; // 8017D460
  c->r[1]=c->r[1]+0x00000010u; // 8017D464
  return; // 8017D468
}

void hle_DSPAssertTask(Ctx*);
// DSPAssertTask
void f_8017D46C(Ctx* __restrict c) {
  hle_DSPAssertTask(c);
}

// __DSP_debug_printf
void f_8017D528(Ctx* __restrict c) {
  trace_call(0x8017D528u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D528
  if (!crb(c,6)) { goto L_8017D550; } // 8017D52C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8017D530
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 8017D534
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 8017D538
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 8017D53C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 8017D540
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 8017D544
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 8017D548
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 8017D54C
L_8017D550:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 8017D550
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8017D554
  W32(c->r[1]+0x00000010u,c->r[5]); // 8017D558
  W32(c->r[1]+0x00000014u,c->r[6]); // 8017D55C
  W32(c->r[1]+0x00000018u,c->r[7]); // 8017D560
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 8017D564
  W32(c->r[1]+0x00000020u,c->r[9]); // 8017D568
  W32(c->r[1]+0x00000024u,c->r[10]); // 8017D56C
  c->r[1]=c->r[1]+0x00000070u; // 8017D570
  return; // 8017D574
}

// __DSPHandler
void f_8017D578(Ctx* __restrict c) {
  trace_call(0x8017D578u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D578
  c->r[0]=c->lr; // 8017D57C
  c->r[6]=0u+0xCC000000u; // 8017D580
  W32(c->r[1]+0x000002E4u,c->r[0]); // 8017D584
  c->r[0]=0u+0xFFFFFFD7u; // 8017D588
  c->r[3]=c->r[1]+0x00000008u; // 8017D58C
  W32(c->r[1]+0x000002DCu,c->r[31]); // 8017D590
  c->r[31]=c->r[4]|c->r[4]; // 8017D594
  c->r[5]=R16(c->r[6]+0x0000500Au); // 8017D598
  c->r[0]=c->r[5]&c->r[0]; // 8017D59C
  c->r[0]=c->r[0]|0x00000080u; // 8017D5A0
  W16(c->r[6]+0x0000500Au,c->r[0]); // 8017D5A4
  c->lr=0x8017D5ACu; f_801502A8(c); // 8017D5A8
  c->r[3]=c->r[1]+0x00000008u; // 8017D5AC
  c->lr=0x8017D5B4u; f_80150080(c); // 8017D5B0
L_8017D5B4:;
  c->lr=0x8017D5B8u; f_8017D2BC(c); // 8017D5B4
  cmps(c,0,(int32_t)c->r[3],0); // 8017D5B8
  if (crb(c,2)) { IRQCHK(c); goto L_8017D5B4; } // 8017D5BC
  c->lr=0x8017D5C4u; f_8017D2CC(c); // 8017D5C0
  c->r[5]=R32(c->r[13]+0xFFFFAF04u); // 8017D5C4
  c->r[0]=R32(c->r[5]+0x00000008u); // 8017D5C8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8017D5CC
  if (crb(c,2)) { goto L_8017D5E8; } // 8017D5D0
  c->r[0]=c->r[3]+0x232F0000u; // 8017D5D4
  cmpu(c,0,c->r[0],0x00000002u); // 8017D5D8
  if (!crb(c,2)) { goto L_8017D5E8; } // 8017D5DC
  c->r[3]=0u+0xDCD10000u; // 8017D5E0
  c->r[3]=c->r[3]+0x00000003u; // 8017D5E4
L_8017D5E8:;
  c->r[4]=0u+0xDCD10000u; // 8017D5E8
  c->r[0]=c->r[4]+0x00000002u; // 8017D5EC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8017D5F0
  if (crb(c,2)) { goto L_8017D668; } // 8017D5F4
  if (!crb(c,0)) { goto L_8017D60C; } // 8017D5F8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 8017D5FC
  if (crb(c,2)) { goto L_8017D620; } // 8017D600
  if (!crb(c,0)) { goto L_8017D644; } // 8017D604
  goto L_8017D988; // 8017D608
L_8017D60C:;
  c->r[0]=c->r[4]+0x00000004u; // 8017D60C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8017D610
  if (crb(c,2)) { goto L_8017D970; } // 8017D614
  if (!crb(c,0)) { goto L_8017D988; } // 8017D618
  goto L_8017D7D0; // 8017D61C
L_8017D620:;
  c->r[0]=0u+0x00000001u; // 8017D620
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017D624
  c->r[3]=R32(c->r[13]+0xFFFFAF04u); // 8017D628
  c->r[12]=R32(c->r[3]+0x00000028u); // 8017D62C
  cmps(c,0,(int32_t)c->r[12],0); // 8017D630
  if (crb(c,2)) { goto L_8017D988; } // 8017D634
  c->ctr=c->r[12]; // 8017D638
  if (true) { c->lr=0x8017D640u; dispatch(c,c->ctr); } // 8017D63C
  goto L_8017D988; // 8017D640
L_8017D644:;
  c->r[0]=0u+0x00000001u; // 8017D644
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017D648
  c->r[3]=R32(c->r[13]+0xFFFFAF04u); // 8017D64C
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 8017D650
  cmps(c,0,(int32_t)c->r[12],0); // 8017D654
  if (crb(c,2)) { goto L_8017D988; } // 8017D658
  c->ctr=c->r[12]; // 8017D65C
  if (true) { c->lr=0x8017D664u; dispatch(c,c->ctr); } // 8017D660
  goto L_8017D988; // 8017D664
L_8017D668:;
  c->r[0]=R32(c->r[13]+0xFFFFAEF0u); // 8017D668
  cmps(c,0,(int32_t)c->r[0],0); // 8017D66C
  if (crb(c,2)) { goto L_8017D708; } // 8017D670
  c->r[0]=R32(c->r[13]+0xFFFFAEF4u); // 8017D674
  cmpu(c,0,c->r[5],c->r[0]); // 8017D678
  if (!crb(c,2)) { goto L_8017D6C0; } // 8017D67C
  c->r[3]=0u+0xCDD10000u; // 8017D680
  c->r[3]=c->r[3]+0x00000003u; // 8017D684
  c->lr=0x8017D68Cu; f_8017D2E0(c); // 8017D688
L_8017D68C:;
  c->lr=0x8017D690u; f_8017D2AC(c); // 8017D68C
  cmps(c,0,(int32_t)c->r[3],0); // 8017D690
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D68C; } // 8017D694
  c->r[0]=0u+0x00000000u; // 8017D698
  c->r[3]=R32(c->r[13]+0xFFFFAF04u); // 8017D69C
  W32(c->r[13]+0xFFFFAEF4u,c->r[0]); // 8017D6A0
  W32(c->r[13]+0xFFFFAEF0u,c->r[0]); // 8017D6A4
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 8017D6A8
  cmps(c,0,(int32_t)c->r[12],0); // 8017D6AC
  if (crb(c,2)) { goto L_8017D988; } // 8017D6B0
  c->ctr=c->r[12]; // 8017D6B4
  if (true) { c->lr=0x8017D6BCu; dispatch(c,c->ctr); } // 8017D6B8
  goto L_8017D988; // 8017D6BC
L_8017D6C0:;
  c->r[3]=0u+0xCDD10000u; // 8017D6C0
  c->r[3]=c->r[3]+0x00000001u; // 8017D6C4
  c->lr=0x8017D6CCu; f_8017D2E0(c); // 8017D6C8
L_8017D6CC:;
  c->lr=0x8017D6D0u; f_8017D2AC(c); // 8017D6CC
  cmps(c,0,(int32_t)c->r[3],0); // 8017D6D0
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D6CC; } // 8017D6D4
  c->r[3]=R32(c->r[13]+0xFFFFAF04u); // 8017D6D8
  c->r[4]=R32(c->r[13]+0xFFFFAEF4u); // 8017D6DC
  c->lr=0x8017D6E4u; f_8017D9AC(c); // 8017D6E0
  c->r[3]=R32(c->r[13]+0xFFFFAF04u); // 8017D6E4
  c->r[4]=0u+0x00000002u; // 8017D6E8
  c->r[0]=0u+0x00000000u; // 8017D6EC
  W32(c->r[3]+0x00000000u,c->r[4]); // 8017D6F0
  c->r[3]=R32(c->r[13]+0xFFFFAEF4u); // 8017D6F4
  W32(c->r[13]+0xFFFFAEF0u,c->r[0]); // 8017D6F8
  W32(c->r[13]+0xFFFFAF04u,c->r[3]); // 8017D6FC
  W32(c->r[13]+0xFFFFAEF4u,c->r[0]); // 8017D700
  goto L_8017D988; // 8017D704
L_8017D708:;
  c->r[0]=R32(c->r[5]+0x00000038u); // 8017D708
  cmps(c,0,(int32_t)c->r[0],0); // 8017D70C
  if (!crb(c,2)) { goto L_8017D790; } // 8017D710
  c->r[0]=R32(c->r[13]+0xFFFFAF00u); // 8017D714
  cmpu(c,0,c->r[5],c->r[0]); // 8017D718
  if (!crb(c,2)) { goto L_8017D754; } // 8017D71C
  c->r[3]=0u+0xCDD10000u; // 8017D720
  c->r[3]=c->r[3]+0x00000003u; // 8017D724
  c->lr=0x8017D72Cu; f_8017D2E0(c); // 8017D728
L_8017D72C:;
  c->lr=0x8017D730u; f_8017D2AC(c); // 8017D72C
  cmps(c,0,(int32_t)c->r[3],0); // 8017D730
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D72C; } // 8017D734
  c->r[3]=R32(c->r[13]+0xFFFFAF04u); // 8017D738
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 8017D73C
  cmps(c,0,(int32_t)c->r[12],0); // 8017D740
  if (crb(c,2)) { goto L_8017D988; } // 8017D744
  c->ctr=c->r[12]; // 8017D748
  if (true) { c->lr=0x8017D750u; dispatch(c,c->ctr); } // 8017D74C
  goto L_8017D988; // 8017D750
L_8017D754:;
  c->r[3]=0u+0xCDD10000u; // 8017D754
  c->r[3]=c->r[3]+0x00000001u; // 8017D758
  c->lr=0x8017D760u; f_8017D2E0(c); // 8017D75C
L_8017D760:;
  c->lr=0x8017D764u; f_8017D2AC(c); // 8017D760
  cmps(c,0,(int32_t)c->r[3],0); // 8017D764
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D760; } // 8017D768
  c->r[3]=R32(c->r[13]+0xFFFFAF04u); // 8017D76C
  c->r[4]=R32(c->r[13]+0xFFFFAF00u); // 8017D770
  c->lr=0x8017D778u; f_8017D9AC(c); // 8017D774
  c->r[3]=R32(c->r[13]+0xFFFFAF04u); // 8017D778
  c->r[0]=0u+0x00000002u; // 8017D77C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017D780
  c->r[0]=R32(c->r[13]+0xFFFFAF00u); // 8017D784
  W32(c->r[13]+0xFFFFAF04u,c->r[0]); // 8017D788
  goto L_8017D988; // 8017D78C
L_8017D790:;
  c->r[3]=0u+0xCDD10000u; // 8017D790
  c->r[3]=c->r[3]+0x00000001u; // 8017D794
  c->lr=0x8017D79Cu; f_8017D2E0(c); // 8017D798
L_8017D79C:;
  c->lr=0x8017D7A0u; f_8017D2AC(c); // 8017D79C
  cmps(c,0,(int32_t)c->r[3],0); // 8017D7A0
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D79C; } // 8017D7A4
  c->r[3]=R32(c->r[13]+0xFFFFAF04u); // 8017D7A8
  c->r[4]=R32(c->r[3]+0x00000038u); // 8017D7AC
  c->lr=0x8017D7B4u; f_8017D9AC(c); // 8017D7B0
  c->r[3]=R32(c->r[13]+0xFFFFAF04u); // 8017D7B4
  c->r[0]=0u+0x00000002u; // 8017D7B8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017D7BC
  c->r[3]=R32(c->r[13]+0xFFFFAF04u); // 8017D7C0
  c->r[0]=R32(c->r[3]+0x00000038u); // 8017D7C4
  W32(c->r[13]+0xFFFFAF04u,c->r[0]); // 8017D7C8
  goto L_8017D988; // 8017D7CC
L_8017D7D0:;
  c->r[0]=R32(c->r[13]+0xFFFFAEF0u); // 8017D7D0
  cmps(c,0,(int32_t)c->r[0],0); // 8017D7D4
  if (crb(c,2)) { goto L_8017D850; } // 8017D7D8
  c->r[0]=R32(c->r[13]+0xFFFFAEF4u); // 8017D7DC
  cmpu(c,0,c->r[5],c->r[0]); // 8017D7E0
  if (crb(c,2)) { goto L_8017D844; } // 8017D7E4
  c->r[12]=R32(c->r[5]+0x00000030u); // 8017D7E8
  cmps(c,0,(int32_t)c->r[12],0); // 8017D7EC
  if (crb(c,2)) { goto L_8017D800; } // 8017D7F0
  c->r[3]=c->r[5]|c->r[5]; // 8017D7F4
  c->ctr=c->r[12]; // 8017D7F8
  if (true) { c->lr=0x8017D800u; dispatch(c,c->ctr); } // 8017D7FC
L_8017D800:;
  c->r[3]=0u+0xCDD10000u; // 8017D800
  c->r[3]=c->r[3]+0x00000001u; // 8017D804
  c->lr=0x8017D80Cu; f_8017D2E0(c); // 8017D808
L_8017D80C:;
  c->lr=0x8017D810u; f_8017D2AC(c); // 8017D80C
  cmps(c,0,(int32_t)c->r[3],0); // 8017D810
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D80C; } // 8017D814
  c->r[4]=R32(c->r[13]+0xFFFFAEF4u); // 8017D818
  c->r[3]=0u+0x00000000u; // 8017D81C
  c->lr=0x8017D824u; f_8017D9AC(c); // 8017D820
  c->r[3]=R32(c->r[13]+0xFFFFAF04u); // 8017D824
  c->lr=0x8017D82Cu; f_8017DD78(c); // 8017D828
  c->r[3]=R32(c->r[13]+0xFFFFAEF4u); // 8017D82C
  c->r[0]=0u+0x00000000u; // 8017D830
  W32(c->r[13]+0xFFFFAEF0u,c->r[0]); // 8017D834
  W32(c->r[13]+0xFFFFAF04u,c->r[3]); // 8017D838
  W32(c->r[13]+0xFFFFAEF4u,c->r[0]); // 8017D83C
  goto L_8017D988; // 8017D840
L_8017D844:;
  c->r[0]=0u+0x00000000u; // 8017D844
  W32(c->r[13]+0xFFFFAEF4u,c->r[0]); // 8017D848
  W32(c->r[13]+0xFFFFAEF0u,c->r[0]); // 8017D84C
L_8017D850:;
  c->r[0]=R32(c->r[5]+0x00000038u); // 8017D850
  cmps(c,0,(int32_t)c->r[0],0); // 8017D854
  if (!crb(c,2)) { goto L_8017D90C; } // 8017D858
  c->r[0]=R32(c->r[13]+0xFFFFAF00u); // 8017D85C
  cmpu(c,0,c->r[5],c->r[0]); // 8017D860
  if (!crb(c,2)) { goto L_8017D8B0; } // 8017D864
  c->r[12]=R32(c->r[5]+0x00000030u); // 8017D868
  cmps(c,0,(int32_t)c->r[12],0); // 8017D86C
  if (crb(c,2)) { goto L_8017D880; } // 8017D870
  c->r[3]=c->r[5]|c->r[5]; // 8017D874
  c->ctr=c->r[12]; // 8017D878
  if (true) { c->lr=0x8017D880u; dispatch(c,c->ctr); } // 8017D87C
L_8017D880:;
  c->r[3]=0u+0xCDD10000u; // 8017D880
  c->r[3]=c->r[3]+0x00000002u; // 8017D884
  c->lr=0x8017D88Cu; f_8017D2E0(c); // 8017D888
L_8017D88C:;
  c->lr=0x8017D890u; f_8017D2AC(c); // 8017D88C
  cmps(c,0,(int32_t)c->r[3],0); // 8017D890
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D88C; } // 8017D894
  c->r[3]=R32(c->r[13]+0xFFFFAF04u); // 8017D898
  c->r[0]=0u+0x00000003u; // 8017D89C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017D8A0
  c->r[3]=R32(c->r[13]+0xFFFFAF04u); // 8017D8A4
  c->lr=0x8017D8ACu; f_8017DD78(c); // 8017D8A8
  goto L_8017D988; // 8017D8AC
L_8017D8B0:;
  c->r[12]=R32(c->r[5]+0x00000030u); // 8017D8B0
  cmps(c,0,(int32_t)c->r[12],0); // 8017D8B4
  if (crb(c,2)) { goto L_8017D8C8; } // 8017D8B8
  c->r[3]=c->r[5]|c->r[5]; // 8017D8BC
  c->ctr=c->r[12]; // 8017D8C0
  if (true) { c->lr=0x8017D8C8u; dispatch(c,c->ctr); } // 8017D8C4
L_8017D8C8:;
  c->r[3]=0u+0xCDD10000u; // 8017D8C8
  c->r[3]=c->r[3]+0x00000001u; // 8017D8CC
  c->lr=0x8017D8D4u; f_8017D2E0(c); // 8017D8D0
L_8017D8D4:;
  c->lr=0x8017D8D8u; f_8017D2AC(c); // 8017D8D4
  cmps(c,0,(int32_t)c->r[3],0); // 8017D8D8
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D8D4; } // 8017D8DC
  c->r[4]=R32(c->r[13]+0xFFFFAF04u); // 8017D8E0
  c->r[0]=0u+0x00000003u; // 8017D8E4
  c->r[3]=0u+0x00000000u; // 8017D8E8
  W32(c->r[4]+0x00000000u,c->r[0]); // 8017D8EC
  c->r[4]=R32(c->r[13]+0xFFFFAF00u); // 8017D8F0
  c->lr=0x8017D8F8u; f_8017D9AC(c); // 8017D8F4
  c->r[0]=R32(c->r[13]+0xFFFFAF00u); // 8017D8F8
  c->r[3]=R32(c->r[13]+0xFFFFAEFCu); // 8017D8FC
  W32(c->r[13]+0xFFFFAF04u,c->r[0]); // 8017D900
  c->lr=0x8017D908u; f_8017DD78(c); // 8017D904
  goto L_8017D988; // 8017D908
L_8017D90C:;
  c->r[12]=R32(c->r[5]+0x00000030u); // 8017D90C
  cmps(c,0,(int32_t)c->r[12],0); // 8017D910
  if (crb(c,2)) { goto L_8017D924; } // 8017D914
  c->r[3]=c->r[5]|c->r[5]; // 8017D918
  c->ctr=c->r[12]; // 8017D91C
  if (true) { c->lr=0x8017D924u; dispatch(c,c->ctr); } // 8017D920
L_8017D924:;
  c->r[3]=0u+0xCDD10000u; // 8017D924
  c->r[3]=c->r[3]+0x00000001u; // 8017D928
  c->lr=0x8017D930u; f_8017D2E0(c); // 8017D92C
L_8017D930:;
  c->lr=0x8017D934u; f_8017D2AC(c); // 8017D930
  cmps(c,0,(int32_t)c->r[3],0); // 8017D934
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D930; } // 8017D938
  c->r[4]=R32(c->r[13]+0xFFFFAF04u); // 8017D93C
  c->r[0]=0u+0x00000003u; // 8017D940
  c->r[3]=0u+0x00000000u; // 8017D944
  W32(c->r[4]+0x00000000u,c->r[0]); // 8017D948
  c->r[4]=R32(c->r[13]+0xFFFFAF04u); // 8017D94C
  c->r[4]=R32(c->r[4]+0x00000038u); // 8017D950
  c->lr=0x8017D958u; f_8017D9AC(c); // 8017D954
  c->r[3]=R32(c->r[13]+0xFFFFAF04u); // 8017D958
  c->r[3]=R32(c->r[3]+0x00000038u); // 8017D95C
  W32(c->r[13]+0xFFFFAF04u,c->r[3]); // 8017D960
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 8017D964
  c->lr=0x8017D96Cu; f_8017DD78(c); // 8017D968
  goto L_8017D988; // 8017D96C
L_8017D970:;
  c->r[12]=R32(c->r[5]+0x00000034u); // 8017D970
  cmps(c,0,(int32_t)c->r[12],0); // 8017D974
  if (crb(c,2)) { goto L_8017D988; } // 8017D978
  c->r[3]=c->r[5]|c->r[5]; // 8017D97C
  c->ctr=c->r[12]; // 8017D980
  if (true) { c->lr=0x8017D988u; dispatch(c,c->ctr); } // 8017D984
L_8017D988:;
  c->r[3]=c->r[1]+0x00000008u; // 8017D988
  c->lr=0x8017D990u; f_801502A8(c); // 8017D98C
  c->r[3]=c->r[31]|c->r[31]; // 8017D990
  c->lr=0x8017D998u; f_80150080(c); // 8017D994
  c->r[0]=R32(c->r[1]+0x000002E4u); // 8017D998
  c->r[31]=R32(c->r[1]+0x000002DCu); // 8017D99C
  c->lr=c->r[0]; // 8017D9A0
  c->r[1]=c->r[1]+0x000002E0u; // 8017D9A4
  return; // 8017D9A8
}

// __DSP_exec_task
void f_8017D9AC(Ctx* __restrict c) {
  trace_call(0x8017D9ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D9AC
  c->r[0]=c->lr; // 8017D9B0
  cmps(c,0,(int32_t)c->r[3],0); // 8017D9B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017D9B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017D9BC
  c->r[31]=c->r[4]|c->r[4]; // 8017D9C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017D9C4
  c->r[30]=c->r[3]|c->r[3]; // 8017D9C8
  if (crb(c,2)) { goto L_8017DA10; } // 8017D9CC
  c->r[3]=R32(c->r[3]+0x00000018u); // 8017D9D0
  c->lr=0x8017D9D8u; f_8017D2E0(c); // 8017D9D4
L_8017D9D8:;
  c->lr=0x8017D9DCu; f_8017D2AC(c); // 8017D9D8
  cmps(c,0,(int32_t)c->r[3],0); // 8017D9DC
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D9D8; } // 8017D9E0
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8017D9E4
  c->lr=0x8017D9ECu; f_8017D2E0(c); // 8017D9E8
L_8017D9EC:;
  c->lr=0x8017D9F0u; f_8017D2AC(c); // 8017D9EC
  cmps(c,0,(int32_t)c->r[3],0); // 8017D9F0
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D9EC; } // 8017D9F4
  c->r[3]=R32(c->r[30]+0x00000020u); // 8017D9F8
  c->lr=0x8017DA00u; f_8017D2E0(c); // 8017D9FC
L_8017DA00:;
  c->lr=0x8017DA04u; f_8017D2AC(c); // 8017DA00
  cmps(c,0,(int32_t)c->r[3],0); // 8017DA04
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DA00; } // 8017DA08
  goto L_8017DA4C; // 8017DA0C
L_8017DA10:;
  c->r[3]=0u+0x00000000u; // 8017DA10
  c->lr=0x8017DA18u; f_8017D2E0(c); // 8017DA14
L_8017DA18:;
  c->lr=0x8017DA1Cu; f_8017D2AC(c); // 8017DA18
  cmps(c,0,(int32_t)c->r[3],0); // 8017DA1C
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DA18; } // 8017DA20
  c->r[3]=0u+0x00000000u; // 8017DA24
  c->lr=0x8017DA2Cu; f_8017D2E0(c); // 8017DA28
L_8017DA2C:;
  c->lr=0x8017DA30u; f_8017D2AC(c); // 8017DA2C
  cmps(c,0,(int32_t)c->r[3],0); // 8017DA30
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DA2C; } // 8017DA34
  c->r[3]=0u+0x00000000u; // 8017DA38
  c->lr=0x8017DA40u; f_8017D2E0(c); // 8017DA3C
L_8017DA40:;
  c->lr=0x8017DA44u; f_8017D2AC(c); // 8017DA40
  cmps(c,0,(int32_t)c->r[3],0); // 8017DA44
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DA40; } // 8017DA48
L_8017DA4C:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8017DA4C
  c->lr=0x8017DA54u; f_8017D2E0(c); // 8017DA50
L_8017DA54:;
  c->lr=0x8017DA58u; f_8017D2AC(c); // 8017DA54
  cmps(c,0,(int32_t)c->r[3],0); // 8017DA58
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DA54; } // 8017DA5C
  c->r[3]=R32(c->r[31]+0x00000010u); // 8017DA60
  c->lr=0x8017DA68u; f_8017D2E0(c); // 8017DA64
L_8017DA68:;
  c->lr=0x8017DA6Cu; f_8017D2AC(c); // 8017DA68
  cmps(c,0,(int32_t)c->r[3],0); // 8017DA6C
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DA68; } // 8017DA70
  c->r[3]=R32(c->r[31]+0x00000014u); // 8017DA74
  c->lr=0x8017DA7Cu; f_8017D2E0(c); // 8017DA78
L_8017DA7C:;
  c->lr=0x8017DA80u; f_8017D2AC(c); // 8017DA7C
  cmps(c,0,(int32_t)c->r[3],0); // 8017DA80
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DA7C; } // 8017DA84
  c->r[0]=R32(c->r[31]+0x00000000u); // 8017DA88
  cmps(c,0,(int32_t)c->r[0],0); // 8017DA8C
  if (!crb(c,2)) { goto L_8017DAE8; } // 8017DA90
  c->r[3]=R16(c->r[31]+0x00000024u); // 8017DA94
  c->lr=0x8017DA9Cu; f_8017D2E0(c); // 8017DA98
L_8017DA9C:;
  c->lr=0x8017DAA0u; f_8017D2AC(c); // 8017DA9C
  cmps(c,0,(int32_t)c->r[3],0); // 8017DAA0
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DA9C; } // 8017DAA4
  c->r[3]=0u+0x00000000u; // 8017DAA8
  c->lr=0x8017DAB0u; f_8017D2E0(c); // 8017DAAC
L_8017DAB0:;
  c->lr=0x8017DAB4u; f_8017D2AC(c); // 8017DAB0
  cmps(c,0,(int32_t)c->r[3],0); // 8017DAB4
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DAB0; } // 8017DAB8
  c->r[3]=0u+0x00000000u; // 8017DABC
  c->lr=0x8017DAC4u; f_8017D2E0(c); // 8017DAC0
L_8017DAC4:;
  c->lr=0x8017DAC8u; f_8017D2AC(c); // 8017DAC4
  cmps(c,0,(int32_t)c->r[3],0); // 8017DAC8
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DAC4; } // 8017DACC
  c->r[3]=0u+0x00000000u; // 8017DAD0
  c->lr=0x8017DAD8u; f_8017D2E0(c); // 8017DAD4
L_8017DAD8:;
  c->lr=0x8017DADCu; f_8017D2AC(c); // 8017DAD8
  cmps(c,0,(int32_t)c->r[3],0); // 8017DADC
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DAD8; } // 8017DAE0
  goto L_8017DB38; // 8017DAE4
L_8017DAE8:;
  c->r[3]=R16(c->r[31]+0x00000026u); // 8017DAE8
  c->lr=0x8017DAF0u; f_8017D2E0(c); // 8017DAEC
L_8017DAF0:;
  c->lr=0x8017DAF4u; f_8017D2AC(c); // 8017DAF0
  cmps(c,0,(int32_t)c->r[3],0); // 8017DAF4
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DAF0; } // 8017DAF8
  c->r[3]=R32(c->r[31]+0x00000018u); // 8017DAFC
  c->lr=0x8017DB04u; f_8017D2E0(c); // 8017DB00
L_8017DB04:;
  c->lr=0x8017DB08u; f_8017D2AC(c); // 8017DB04
  cmps(c,0,(int32_t)c->r[3],0); // 8017DB08
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DB04; } // 8017DB0C
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8017DB10
  c->lr=0x8017DB18u; f_8017D2E0(c); // 8017DB14
L_8017DB18:;
  c->lr=0x8017DB1Cu; f_8017D2AC(c); // 8017DB18
  cmps(c,0,(int32_t)c->r[3],0); // 8017DB1C
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DB18; } // 8017DB20
  c->r[3]=R32(c->r[31]+0x00000020u); // 8017DB24
  c->lr=0x8017DB2Cu; f_8017D2E0(c); // 8017DB28
L_8017DB2C:;
  c->lr=0x8017DB30u; f_8017D2AC(c); // 8017DB2C
  cmps(c,0,(int32_t)c->r[3],0); // 8017DB30
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DB2C; } // 8017DB34
L_8017DB38:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017DB38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017DB3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017DB40
  c->lr=c->r[0]; // 8017DB44
  c->r[1]=c->r[1]+0x00000010u; // 8017DB48
  return; // 8017DB4C
}

// __DSP_boot_task
void f_8017DB50(Ctx* __restrict c) {
  trace_call(0x8017DB50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017DB50
  c->r[0]=c->lr; // 8017DB54
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017DB58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017DB5C
  c->r[31]=0u+0x802E0000u; // 8017DB60
  c->r[31]=c->r[31]+0xFFFFBD00u; // 8017DB64
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017DB68
  c->r[30]=c->r[3]|c->r[3]; // 8017DB6C
L_8017DB70:;
  c->lr=0x8017DB74u; f_8017D2BC(c); // 8017DB70
  cmps(c,0,(int32_t)c->r[3],0); // 8017DB74
  if (crb(c,2)) { IRQCHK(c); goto L_8017DB70; } // 8017DB78
  c->lr=0x8017DB80u; f_8017D2CC(c); // 8017DB7C
  W32(c->r[1]+0x00000008u,c->r[3]); // 8017DB80
  c->r[3]=0u+0x80F40000u; // 8017DB84
  c->r[3]=c->r[3]+0xFFFFA001u; // 8017DB88
  c->lr=0x8017DB90u; f_8017D2E0(c); // 8017DB8C
L_8017DB90:;
  c->lr=0x8017DB94u; f_8017D2AC(c); // 8017DB90
  cmps(c,0,(int32_t)c->r[3],0); // 8017DB94
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DB90; } // 8017DB98
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8017DB9C
  c->lr=0x8017DBA4u; f_8017D2E0(c); // 8017DBA0
L_8017DBA4:;
  c->lr=0x8017DBA8u; f_8017D2AC(c); // 8017DBA4
  cmps(c,0,(int32_t)c->r[3],0); // 8017DBA8
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DBA4; } // 8017DBAC
  c->r[3]=0u+0x80F40000u; // 8017DBB0
  c->r[3]=c->r[3]+0xFFFFC002u; // 8017DBB4
  c->lr=0x8017DBBCu; f_8017D2E0(c); // 8017DBB8
L_8017DBBC:;
  c->lr=0x8017DBC0u; f_8017D2AC(c); // 8017DBBC
  cmps(c,0,(int32_t)c->r[3],0); // 8017DBC0
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DBBC; } // 8017DBC4
  c->r[0]=R32(c->r[30]+0x00000014u); // 8017DBC8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8017DBCC
  c->lr=0x8017DBD4u; f_8017D2E0(c); // 8017DBD0
L_8017DBD4:;
  c->lr=0x8017DBD8u; f_8017D2AC(c); // 8017DBD4
  cmps(c,0,(int32_t)c->r[3],0); // 8017DBD8
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DBD4; } // 8017DBDC
  c->r[3]=0u+0x80F40000u; // 8017DBE0
  c->r[3]=c->r[3]+0xFFFFA002u; // 8017DBE4
  c->lr=0x8017DBECu; f_8017D2E0(c); // 8017DBE8
L_8017DBEC:;
  c->lr=0x8017DBF0u; f_8017D2AC(c); // 8017DBEC
  cmps(c,0,(int32_t)c->r[3],0); // 8017DBF0
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DBEC; } // 8017DBF4
  c->r[3]=R32(c->r[30]+0x00000010u); // 8017DBF8
  c->lr=0x8017DC00u; f_8017D2E0(c); // 8017DBFC
L_8017DC00:;
  c->lr=0x8017DC04u; f_8017D2AC(c); // 8017DC00
  cmps(c,0,(int32_t)c->r[3],0); // 8017DC04
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DC00; } // 8017DC08
  c->r[3]=0u+0x80F40000u; // 8017DC0C
  c->r[3]=c->r[3]+0xFFFFB002u; // 8017DC10
  c->lr=0x8017DC18u; f_8017D2E0(c); // 8017DC14
L_8017DC18:;
  c->lr=0x8017DC1Cu; f_8017D2AC(c); // 8017DC18
  cmps(c,0,(int32_t)c->r[3],0); // 8017DC1C
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DC18; } // 8017DC20
  c->r[3]=0u+0x00000000u; // 8017DC24
  c->lr=0x8017DC2Cu; f_8017D2E0(c); // 8017DC28
L_8017DC2C:;
  c->lr=0x8017DC30u; f_8017D2AC(c); // 8017DC2C
  cmps(c,0,(int32_t)c->r[3],0); // 8017DC30
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DC2C; } // 8017DC34
  c->r[3]=0u+0x80F40000u; // 8017DC38
  c->r[3]=c->r[3]+0xFFFFD001u; // 8017DC3C
  c->lr=0x8017DC44u; f_8017D2E0(c); // 8017DC40
L_8017DC44:;
  c->lr=0x8017DC48u; f_8017D2AC(c); // 8017DC44
  cmps(c,0,(int32_t)c->r[3],0); // 8017DC48
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DC44; } // 8017DC4C
  c->r[3]=R16(c->r[30]+0x00000024u); // 8017DC50
  c->lr=0x8017DC58u; f_8017D2E0(c); // 8017DC54
L_8017DC58:;
  c->lr=0x8017DC5Cu; f_8017D2AC(c); // 8017DC58
  cmps(c,0,(int32_t)c->r[3],0); // 8017DC5C
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DC58; } // 8017DC60
  c->r[4]=c->r[30]|c->r[30]; // 8017DC64
  c->r[3]=c->r[31]+0x00000000u; // 8017DC68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017DC6C
  c->lr=0x8017DC74u; f_8017D528(c); // 8017DC70
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 8017DC74
  c->r[3]=c->r[31]+0x00000020u; // 8017DC78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017DC7C
  c->lr=0x8017DC84u; f_8017D528(c); // 8017DC80
  c->r[4]=R32(c->r[30]+0x00000014u); // 8017DC84
  c->r[3]=c->r[31]+0x00000050u; // 8017DC88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017DC8C
  c->lr=0x8017DC94u; f_8017D528(c); // 8017DC90
  c->r[4]=R32(c->r[30]+0x00000010u); // 8017DC94
  c->r[3]=c->r[31]+0x00000080u; // 8017DC98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017DC9C
  c->lr=0x8017DCA4u; f_8017D528(c); // 8017DCA0
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 8017DCA4
  c->r[3]=c->r[31]+0x000000B0u; // 8017DCA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017DCAC
  c->lr=0x8017DCB4u; f_8017D528(c); // 8017DCB0
  c->r[4]=R16(c->r[30]+0x00000024u); // 8017DCB4
  c->r[3]=c->r[31]+0x000000E0u; // 8017DCB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017DCBC
  c->lr=0x8017DCC4u; f_8017D528(c); // 8017DCC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017DCC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017DCC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017DCCC
  c->lr=c->r[0]; // 8017DCD0
  c->r[1]=c->r[1]+0x00000020u; // 8017DCD4
  return; // 8017DCD8
}

// __DSP_insert_task
void f_8017DCDC(Ctx* __restrict c) {
  trace_call(0x8017DCDCu);
  c->r[5]=R32(c->r[13]+0xFFFFAF00u); // 8017DCDC
  cmps(c,0,(int32_t)c->r[5],0); // 8017DCE0
  if (!crb(c,2)) { goto L_8017DD48; } // 8017DCE4
  W32(c->r[13]+0xFFFFAF04u,c->r[3]); // 8017DCE8
  c->r[0]=0u+0x00000000u; // 8017DCEC
  W32(c->r[13]+0xFFFFAEFCu,c->r[3]); // 8017DCF0
  W32(c->r[13]+0xFFFFAF00u,c->r[3]); // 8017DCF4
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8017DCF8
  W32(c->r[3]+0x00000038u,c->r[0]); // 8017DCFC
  return; // 8017DD00
  goto L_8017DD48; // 8017DD04
L_8017DD08:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8017DD08
  c->r[0]=R32(c->r[5]+0x00000004u); // 8017DD0C
  cmpu(c,0,c->r[4],c->r[0]); // 8017DD10
  if (!crb(c,0)) { goto L_8017DD44; } // 8017DD14
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 8017DD18
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8017DD1C
  W32(c->r[5]+0x0000003Cu,c->r[3]); // 8017DD20
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 8017DD24
  W32(c->r[3]+0x00000038u,c->r[5]); // 8017DD28
  cmps(c,0,(int32_t)c->r[4],0); // 8017DD2C
  if (!crb(c,2)) { goto L_8017DD3C; } // 8017DD30
  W32(c->r[13]+0xFFFFAF00u,c->r[3]); // 8017DD34
  goto L_8017DD50; // 8017DD38
L_8017DD3C:;
  W32(c->r[4]+0x00000038u,c->r[3]); // 8017DD3C
  goto L_8017DD50; // 8017DD40
L_8017DD44:;
  c->r[5]=R32(c->r[5]+0x00000038u); // 8017DD44
L_8017DD48:;
  cmps(c,0,(int32_t)c->r[5],0); // 8017DD48
  if (!crb(c,2)) { IRQCHK(c); goto L_8017DD08; } // 8017DD4C
L_8017DD50:;
  cmps(c,0,(int32_t)c->r[5],0); // 8017DD50
  if (!crb(c,2)) return; // 8017DD54
  c->r[4]=R32(c->r[13]+0xFFFFAEFCu); // 8017DD58
  c->r[0]=0u+0x00000000u; // 8017DD5C
  W32(c->r[4]+0x00000038u,c->r[3]); // 8017DD60
  W32(c->r[3]+0x00000038u,c->r[0]); // 8017DD64
  c->r[0]=R32(c->r[13]+0xFFFFAEFCu); // 8017DD68
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8017DD6C
  W32(c->r[13]+0xFFFFAEFCu,c->r[3]); // 8017DD70
  return; // 8017DD74
}

// __DSP_remove_task
void f_8017DD78(Ctx* __restrict c) {
  trace_call(0x8017DD78u);
  c->r[4]=0u+0x00000000u; // 8017DD78
  c->r[0]=0u+0x00000003u; // 8017DD7C
  W32(c->r[3]+0x00000008u,c->r[4]); // 8017DD80
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017DD84
  c->r[0]=R32(c->r[13]+0xFFFFAF00u); // 8017DD88
  cmpu(c,0,c->r[0],c->r[3]); // 8017DD8C
  if (!crb(c,2)) { goto L_8017DDC0; } // 8017DD90
  c->r[0]=R32(c->r[3]+0x00000038u); // 8017DD94
  cmps(c,0,(int32_t)c->r[0],0); // 8017DD98
  if (crb(c,2)) { goto L_8017DDB0; } // 8017DD9C
  W32(c->r[13]+0xFFFFAF00u,c->r[0]); // 8017DDA0
  c->r[3]=R32(c->r[3]+0x00000038u); // 8017DDA4
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 8017DDA8
  return; // 8017DDAC
L_8017DDB0:;
  W32(c->r[13]+0xFFFFAF04u,c->r[4]); // 8017DDB0
  W32(c->r[13]+0xFFFFAEFCu,c->r[4]); // 8017DDB4
  W32(c->r[13]+0xFFFFAF00u,c->r[4]); // 8017DDB8
  return; // 8017DDBC
L_8017DDC0:;
  c->r[0]=R32(c->r[13]+0xFFFFAEFCu); // 8017DDC0
  cmpu(c,0,c->r[0],c->r[3]); // 8017DDC4
  if (!crb(c,2)) { goto L_8017DDE8; } // 8017DDC8
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017DDCC
  W32(c->r[13]+0xFFFFAEFCu,c->r[0]); // 8017DDD0
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 8017DDD4
  W32(c->r[3]+0x00000038u,c->r[4]); // 8017DDD8
  c->r[0]=R32(c->r[13]+0xFFFFAF00u); // 8017DDDC
  W32(c->r[13]+0xFFFFAF04u,c->r[0]); // 8017DDE0
  return; // 8017DDE4
L_8017DDE8:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 8017DDE8
  W32(c->r[13]+0xFFFFAF04u,c->r[0]); // 8017DDEC
  c->r[0]=R32(c->r[3]+0x00000038u); // 8017DDF0
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 8017DDF4
  W32(c->r[4]+0x00000038u,c->r[0]); // 8017DDF8
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017DDFC
  c->r[3]=R32(c->r[3]+0x00000038u); // 8017DE00
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8017DE04
  return; // 8017DE08
}

// fn_8017DE0C
void f_8017DE0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017DE0C
  c->r[0]=c->lr; // 8017DE10
  W32(c->r[1]+0x00000074u,c->r[0]); // 8017DE14
  c->r[11]=c->r[1]+0x00000070u; // 8017DE18
  c->lr=0x8017DE20u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017DE1C
  c->r[0]=0u+0x00000000u; // 8017DE20
  c->r[27]=c->r[4]|c->r[4]; // 8017DE24
  W32(c->r[1]+0x00000018u,c->r[0]); // 8017DE28
  c->r[4]=c->r[3]|c->r[3]; // 8017DE2C
  c->r[28]=c->r[5]|c->r[5]; // 8017DE30
  c->r[29]=c->r[6]|c->r[6]; // 8017DE34
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017DE38
  c->r[30]=c->r[7]|c->r[7]; // 8017DE3C
  c->r[31]=c->r[8]|c->r[8]; // 8017DE40
  c->r[3]=c->r[1]+0x00000018u; // 8017DE44
  W32(c->r[1]+0x00000020u,c->r[0]); // 8017DE48
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017DE4C
  W32(c->r[1]+0x00000028u,c->r[0]); // 8017DE50
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8017DE54
  W32(c->r[1]+0x00000030u,c->r[0]); // 8017DE58
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017DE5C
  W32(c->r[1]+0x00000038u,c->r[0]); // 8017DE60
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8017DE64
  W32(c->r[1]+0x00000040u,c->r[0]); // 8017DE68
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017DE6C
  W32(c->r[1]+0x00000048u,c->r[0]); // 8017DE70
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8017DE74
  W32(c->r[1]+0x00000050u,c->r[0]); // 8017DE78
  W32(c->r[1]+0x00000054u,c->r[0]); // 8017DE7C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017DE80
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017DE84
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017DE88
  c->lr=0x8017DE90u; f_801802E4(c); // 8017DE8C
  cmps(c,0,(int32_t)c->r[31],0); // 8017DE90
  if (!crb(c,2)) { goto L_8017DEB0; } // 8017DE94
  c->r[3]=c->r[1]+0x00000018u; // 8017DE98
  c->lr=0x8017DEA0u; f_801800E0(c); // 8017DE9C
  cmps(c,0,(int32_t)c->r[3],0); // 8017DEA0
  if (crb(c,2)) { goto L_8017DEB0; } // 8017DEA4
  c->r[3]=0u+0xFFFFFF9Au; // 8017DEA8
  goto L_8017DF1C; // 8017DEAC
L_8017DEB0:;
  c->r[0]=rotl(c->r[27],0)&0x00000010u; cr0(c,c->r[0]); // 8017DEB0
  if (!crb(c,2)) { goto L_8017DEC0; } // 8017DEB4
  c->r[3]=0u+0xFFFFFF9Bu; // 8017DEB8
  goto L_8017DF1C; // 8017DEBC
L_8017DEC0:;
  c->r[3]=c->r[27]|c->r[27]; // 8017DEC0
  c->r[4]=c->r[1]+0x00000010u; // 8017DEC4
  c->r[5]=c->r[1]+0x0000000Cu; // 8017DEC8
  c->r[6]=c->r[1]+0x00000008u; // 8017DECC
  c->lr=0x8017DED4u; f_8017EB90(c); // 8017DED0
  cmps(c,0,(int32_t)c->r[30],0); // 8017DED4
  if (crb(c,2)) { goto L_8017DF04; } // 8017DED8
  c->r[8]=0u+0x80180000u; // 8017DEDC
  c->r[5]=R32(c->r[1]+0x00000010u); // 8017DEE0
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8017DEE4
  c->r[4]=c->r[28]|c->r[28]; // 8017DEE8
  c->r[7]=R32(c->r[1]+0x00000008u); // 8017DEEC
  c->r[9]=c->r[29]|c->r[29]; // 8017DEF0
  c->r[3]=c->r[1]+0x00000018u; // 8017DEF4
  c->r[8]=c->r[8]+0x00000A78u; // 8017DEF8
  c->lr=0x8017DF00u; f_801889C0(c); // 8017DEFC
  goto L_8017DF1C; // 8017DF00
L_8017DF04:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 8017DF04
  c->r[4]=c->r[28]|c->r[28]; // 8017DF08
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8017DF0C
  c->r[3]=c->r[1]+0x00000018u; // 8017DF10
  c->r[7]=R32(c->r[1]+0x00000008u); // 8017DF14
  c->lr=0x8017DF1Cu; f_801888CC(c); // 8017DF18
L_8017DF1C:;
  c->r[11]=c->r[1]+0x00000070u; // 8017DF1C
  c->lr=0x8017DF24u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017DF20
  c->r[0]=R32(c->r[1]+0x00000074u); // 8017DF24
  c->lr=c->r[0]; // 8017DF28
  c->r[1]=c->r[1]+0x00000070u; // 8017DF2C
  return; // 8017DF30
}

// fn_8017DF34
void f_8017DF34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017DF34
  c->r[0]=c->lr; // 8017DF38
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017DF3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017DF40
  c->r[31]=c->r[5]|c->r[5]; // 8017DF44
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017DF48
  c->r[30]=c->r[4]|c->r[4]; // 8017DF4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017DF50
  c->r[29]=c->r[3]|c->r[3]; // 8017DF54
  c->lr=0x8017DF5Cu; f_8018016C(c); // 8017DF58
  cmps(c,0,(int32_t)c->r[3],0); // 8017DF5C
  if (crb(c,2)) { goto L_8017DF88; } // 8017DF60
  c->r[3]=c->r[29]|c->r[29]; // 8017DF64
  c->r[4]=c->r[30]|c->r[30]; // 8017DF68
  c->r[5]=c->r[31]|c->r[31]; // 8017DF6C
  c->r[6]=0u+0x00000000u; // 8017DF70
  c->r[7]=0u+0x00000000u; // 8017DF74
  c->r[8]=0u+0x00000000u; // 8017DF78
  c->lr=0x8017DF80u; f_8017DE0C(c); // 8017DF7C
  c->lr=0x8017DF84u; f_80180184(c); // 8017DF80
  goto L_8017DF8C; // 8017DF84
L_8017DF88:;
  c->r[3]=0u+0xFFFFFF80u; // 8017DF88
L_8017DF8C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017DF8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017DF90
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017DF94
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017DF98
  c->lr=c->r[0]; // 8017DF9C
  c->r[1]=c->r[1]+0x00000020u; // 8017DFA0
  return; // 8017DFA4
}

// fn_8017DFA8
void f_8017DFA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017DFA8
  c->r[0]=c->lr; // 8017DFAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017DFB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017DFB4
  c->r[31]=c->r[5]|c->r[5]; // 8017DFB8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017DFBC
  c->r[30]=c->r[4]|c->r[4]; // 8017DFC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017DFC4
  c->r[29]=c->r[3]|c->r[3]; // 8017DFC8
  c->lr=0x8017DFD0u; f_8018016C(c); // 8017DFCC
  cmps(c,0,(int32_t)c->r[3],0); // 8017DFD0
  if (crb(c,2)) { goto L_8017DFFC; } // 8017DFD4
  c->r[3]=c->r[29]|c->r[29]; // 8017DFD8
  c->r[4]=c->r[30]|c->r[30]; // 8017DFDC
  c->r[5]=c->r[31]|c->r[31]; // 8017DFE0
  c->r[6]=0u+0x00000000u; // 8017DFE4
  c->r[7]=0u+0x00000000u; // 8017DFE8
  c->r[8]=0u+0x00000001u; // 8017DFEC
  c->lr=0x8017DFF4u; f_8017DE0C(c); // 8017DFF0
  c->lr=0x8017DFF8u; f_80180184(c); // 8017DFF4
  goto L_8017E000; // 8017DFF8
L_8017DFFC:;
  c->r[3]=0u+0xFFFFFF80u; // 8017DFFC
L_8017E000:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017E000
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017E004
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017E008
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017E00C
  c->lr=c->r[0]; // 8017E010
  c->r[1]=c->r[1]+0x00000020u; // 8017E014
  return; // 8017E018
}

// fn_8017E01C
void f_8017E01C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E01C
  c->r[0]=c->lr; // 8017E020
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E024
  c->r[11]=c->r[1]+0x00000020u; // 8017E028
  c->lr=0x8017E030u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017E02C
  c->r[27]=c->r[3]|c->r[3]; // 8017E030
  c->r[28]=c->r[4]|c->r[4]; // 8017E034
  c->r[29]=c->r[5]|c->r[5]; // 8017E038
  c->r[30]=c->r[6]|c->r[6]; // 8017E03C
  c->r[31]=c->r[7]|c->r[7]; // 8017E040
  c->lr=0x8017E048u; f_8018016C(c); // 8017E044
  cmps(c,0,(int32_t)c->r[3],0); // 8017E048
  if (!crb(c,2)) { goto L_8017E058; } // 8017E04C
  c->r[3]=0u+0xFFFFFF80u; // 8017E050
  goto L_8017E07C; // 8017E054
L_8017E058:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8017E058
  c->r[3]=c->r[27]|c->r[27]; // 8017E05C
  c->r[4]=c->r[28]|c->r[28]; // 8017E060
  c->r[5]=c->r[29]|c->r[29]; // 8017E064
  c->r[6]=c->r[31]|c->r[31]; // 8017E068
  c->r[7]=0u+0x00000001u; // 8017E06C
  c->r[8]=0u+0x00000000u; // 8017E070
  c->lr=0x8017E078u; f_8017DE0C(c); // 8017E074
  c->lr=0x8017E07Cu; f_80180184(c); // 8017E078
L_8017E07C:;
  c->r[11]=c->r[1]+0x00000020u; // 8017E07C
  c->lr=0x8017E084u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017E080
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017E084
  c->lr=c->r[0]; // 8017E088
  c->r[1]=c->r[1]+0x00000020u; // 8017E08C
  return; // 8017E090
}

// fn_8017E094
void f_8017E094(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E094
  c->r[0]=c->lr; // 8017E098
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E09C
  c->r[11]=c->r[1]+0x00000020u; // 8017E0A0
  c->lr=0x8017E0A8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017E0A4
  c->r[27]=c->r[3]|c->r[3]; // 8017E0A8
  c->r[28]=c->r[4]|c->r[4]; // 8017E0AC
  c->r[29]=c->r[5]|c->r[5]; // 8017E0B0
  c->r[30]=c->r[6]|c->r[6]; // 8017E0B4
  c->r[31]=c->r[7]|c->r[7]; // 8017E0B8
  c->lr=0x8017E0C0u; f_8018016C(c); // 8017E0BC
  cmps(c,0,(int32_t)c->r[3],0); // 8017E0C0
  if (!crb(c,2)) { goto L_8017E0D0; } // 8017E0C4
  c->r[3]=0u+0xFFFFFF80u; // 8017E0C8
  goto L_8017E0F4; // 8017E0CC
L_8017E0D0:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8017E0D0
  c->r[3]=c->r[27]|c->r[27]; // 8017E0D4
  c->r[4]=c->r[28]|c->r[28]; // 8017E0D8
  c->r[5]=c->r[29]|c->r[29]; // 8017E0DC
  c->r[6]=c->r[31]|c->r[31]; // 8017E0E0
  c->r[7]=0u+0x00000001u; // 8017E0E4
  c->r[8]=0u+0x00000001u; // 8017E0E8
  c->lr=0x8017E0F0u; f_8017DE0C(c); // 8017E0EC
  c->lr=0x8017E0F4u; f_80180184(c); // 8017E0F0
L_8017E0F4:;
  c->r[11]=c->r[1]+0x00000020u; // 8017E0F4
  c->lr=0x8017E0FCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017E0F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017E0FC
  c->lr=c->r[0]; // 8017E100
  c->r[1]=c->r[1]+0x00000020u; // 8017E104
  return; // 8017E108
}

// NANDDelete
void f_8017E10C(Ctx* __restrict c) {
  trace_call(0x8017E10Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E10C
  c->r[0]=c->lr; // 8017E110
  W32(c->r[1]+0x00000054u,c->r[0]); // 8017E114
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8017E118
  c->r[31]=c->r[3]|c->r[3]; // 8017E11C
  c->lr=0x8017E124u; f_8018016C(c); // 8017E120
  cmps(c,0,(int32_t)c->r[3],0); // 8017E124
  if (!crb(c,2)) { goto L_8017E134; } // 8017E128
  c->r[3]=0u+0xFFFFFF80u; // 8017E12C
  goto L_8017E1A8; // 8017E130
L_8017E134:;
  c->r[0]=0u+0x00000000u; // 8017E134
  c->r[4]=c->r[31]|c->r[31]; // 8017E138
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017E13C
  c->r[3]=c->r[1]+0x00000008u; // 8017E140
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017E144
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017E148
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017E14C
  W32(c->r[1]+0x00000018u,c->r[0]); // 8017E150
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017E154
  W32(c->r[1]+0x00000020u,c->r[0]); // 8017E158
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E15C
  W32(c->r[1]+0x00000028u,c->r[0]); // 8017E160
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8017E164
  W32(c->r[1]+0x00000030u,c->r[0]); // 8017E168
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017E16C
  W32(c->r[1]+0x00000038u,c->r[0]); // 8017E170
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8017E174
  W32(c->r[1]+0x00000040u,c->r[0]); // 8017E178
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017E17C
  c->lr=0x8017E184u; f_801802E4(c); // 8017E180
  c->r[3]=c->r[1]+0x00000008u; // 8017E184
  c->lr=0x8017E18Cu; f_801800E0(c); // 8017E188
  cmps(c,0,(int32_t)c->r[3],0); // 8017E18C
  if (crb(c,2)) { goto L_8017E19C; } // 8017E190
  c->r[3]=0u+0xFFFFFF9Au; // 8017E194
  goto L_8017E1A4; // 8017E198
L_8017E19C:;
  c->r[3]=c->r[1]+0x00000008u; // 8017E19C
  c->lr=0x8017E1A4u; f_801883E4(c); // 8017E1A0
L_8017E1A4:;
  c->lr=0x8017E1A8u; f_80180184(c); // 8017E1A4
L_8017E1A8:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8017E1A8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8017E1AC
  c->lr=c->r[0]; // 8017E1B0
  c->r[1]=c->r[1]+0x00000050u; // 8017E1B4
  return; // 8017E1B8
}

// NANDPrivateDelete
void f_8017E1BC(Ctx* __restrict c) {
  trace_call(0x8017E1BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E1BC
  c->r[0]=c->lr; // 8017E1C0
  W32(c->r[1]+0x00000054u,c->r[0]); // 8017E1C4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8017E1C8
  c->r[31]=c->r[3]|c->r[3]; // 8017E1CC
  c->lr=0x8017E1D4u; f_8018016C(c); // 8017E1D0
  cmps(c,0,(int32_t)c->r[3],0); // 8017E1D4
  if (!crb(c,2)) { goto L_8017E1E4; } // 8017E1D8
  c->r[3]=0u+0xFFFFFF80u; // 8017E1DC
  goto L_8017E240; // 8017E1E0
L_8017E1E4:;
  c->r[0]=0u+0x00000000u; // 8017E1E4
  c->r[4]=c->r[31]|c->r[31]; // 8017E1E8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017E1EC
  c->r[3]=c->r[1]+0x00000008u; // 8017E1F0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017E1F4
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017E1F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017E1FC
  W32(c->r[1]+0x00000018u,c->r[0]); // 8017E200
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017E204
  W32(c->r[1]+0x00000020u,c->r[0]); // 8017E208
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E20C
  W32(c->r[1]+0x00000028u,c->r[0]); // 8017E210
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8017E214
  W32(c->r[1]+0x00000030u,c->r[0]); // 8017E218
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017E21C
  W32(c->r[1]+0x00000038u,c->r[0]); // 8017E220
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8017E224
  W32(c->r[1]+0x00000040u,c->r[0]); // 8017E228
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017E22C
  c->lr=0x8017E234u; f_801802E4(c); // 8017E230
  c->r[3]=c->r[1]+0x00000008u; // 8017E234
  c->lr=0x8017E23Cu; f_801883E4(c); // 8017E238
  c->lr=0x8017E240u; f_80180184(c); // 8017E23C
L_8017E240:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8017E240
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8017E244
  c->lr=c->r[0]; // 8017E248
  c->r[1]=c->r[1]+0x00000050u; // 8017E24C
  return; // 8017E250
}

// NANDDeleteAsync
void f_8017E254(Ctx* __restrict c) {
  trace_call(0x8017E254u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E254
  c->r[0]=c->lr; // 8017E258
  W32(c->r[1]+0x00000064u,c->r[0]); // 8017E25C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8017E260
  c->r[31]=c->r[5]|c->r[5]; // 8017E264
  W32(c->r[1]+0x00000058u,c->r[30]); // 8017E268
  c->r[30]=c->r[4]|c->r[4]; // 8017E26C
  W32(c->r[1]+0x00000054u,c->r[29]); // 8017E270
  c->r[29]=c->r[3]|c->r[3]; // 8017E274
  c->lr=0x8017E27Cu; f_8018016C(c); // 8017E278
  cmps(c,0,(int32_t)c->r[3],0); // 8017E27C
  if (!crb(c,2)) { goto L_8017E28C; } // 8017E280
  c->r[3]=0u+0xFFFFFF80u; // 8017E284
  goto L_8017E310; // 8017E288
L_8017E28C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8017E28C
  c->r[0]=0u+0x00000000u; // 8017E290
  c->r[4]=c->r[29]|c->r[29]; // 8017E294
  c->r[3]=c->r[1]+0x00000008u; // 8017E298
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017E29C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017E2A0
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017E2A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017E2A8
  W32(c->r[1]+0x00000018u,c->r[0]); // 8017E2AC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017E2B0
  W32(c->r[1]+0x00000020u,c->r[0]); // 8017E2B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E2B8
  W32(c->r[1]+0x00000028u,c->r[0]); // 8017E2BC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8017E2C0
  W32(c->r[1]+0x00000030u,c->r[0]); // 8017E2C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017E2C8
  W32(c->r[1]+0x00000038u,c->r[0]); // 8017E2CC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8017E2D0
  W32(c->r[1]+0x00000040u,c->r[0]); // 8017E2D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017E2D8
  c->lr=0x8017E2E0u; f_801802E4(c); // 8017E2DC
  c->r[3]=c->r[1]+0x00000008u; // 8017E2E0
  c->lr=0x8017E2E8u; f_801800E0(c); // 8017E2E4
  cmps(c,0,(int32_t)c->r[3],0); // 8017E2E8
  if (crb(c,2)) { goto L_8017E2F8; } // 8017E2EC
  c->r[3]=0u+0xFFFFFF9Au; // 8017E2F0
  goto L_8017E30C; // 8017E2F4
L_8017E2F8:;
  c->r[4]=0u+0x80180000u; // 8017E2F8
  c->r[5]=c->r[31]|c->r[31]; // 8017E2FC
  c->r[3]=c->r[1]+0x00000008u; // 8017E300
  c->r[4]=c->r[4]+0x00000A78u; // 8017E304
  c->lr=0x8017E30Cu; f_801884BC(c); // 8017E308
L_8017E30C:;
  c->lr=0x8017E310u; f_80180184(c); // 8017E30C
L_8017E310:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 8017E310
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8017E314
  c->r[30]=R32(c->r[1]+0x00000058u); // 8017E318
  c->r[29]=R32(c->r[1]+0x00000054u); // 8017E31C
  c->lr=c->r[0]; // 8017E320
  c->r[1]=c->r[1]+0x00000060u; // 8017E324
  return; // 8017E328
}

// NANDPrivateDeleteAsync
void f_8017E32C(Ctx* __restrict c) {
  trace_call(0x8017E32Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E32C
  c->r[0]=c->lr; // 8017E330
  W32(c->r[1]+0x00000064u,c->r[0]); // 8017E334
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8017E338
  c->r[31]=c->r[5]|c->r[5]; // 8017E33C
  W32(c->r[1]+0x00000058u,c->r[30]); // 8017E340
  c->r[30]=c->r[4]|c->r[4]; // 8017E344
  W32(c->r[1]+0x00000054u,c->r[29]); // 8017E348
  c->r[29]=c->r[3]|c->r[3]; // 8017E34C
  c->lr=0x8017E354u; f_8018016C(c); // 8017E350
  cmps(c,0,(int32_t)c->r[3],0); // 8017E354
  if (!crb(c,2)) { goto L_8017E364; } // 8017E358
  c->r[3]=0u+0xFFFFFF80u; // 8017E35C
  goto L_8017E3D0; // 8017E360
L_8017E364:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8017E364
  c->r[0]=0u+0x00000000u; // 8017E368
  c->r[4]=c->r[29]|c->r[29]; // 8017E36C
  c->r[3]=c->r[1]+0x00000008u; // 8017E370
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017E374
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017E378
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017E37C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017E380
  W32(c->r[1]+0x00000018u,c->r[0]); // 8017E384
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017E388
  W32(c->r[1]+0x00000020u,c->r[0]); // 8017E38C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E390
  W32(c->r[1]+0x00000028u,c->r[0]); // 8017E394
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8017E398
  W32(c->r[1]+0x00000030u,c->r[0]); // 8017E39C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017E3A0
  W32(c->r[1]+0x00000038u,c->r[0]); // 8017E3A4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8017E3A8
  W32(c->r[1]+0x00000040u,c->r[0]); // 8017E3AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017E3B0
  c->lr=0x8017E3B8u; f_801802E4(c); // 8017E3B4
  c->r[4]=0u+0x80180000u; // 8017E3B8
  c->r[5]=c->r[31]|c->r[31]; // 8017E3BC
  c->r[3]=c->r[1]+0x00000008u; // 8017E3C0
  c->r[4]=c->r[4]+0x00000A78u; // 8017E3C4
  c->lr=0x8017E3CCu; f_801884BC(c); // 8017E3C8
  c->lr=0x8017E3D0u; f_80180184(c); // 8017E3CC
L_8017E3D0:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 8017E3D0
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8017E3D4
  c->r[30]=R32(c->r[1]+0x00000058u); // 8017E3D8
  c->r[29]=R32(c->r[1]+0x00000054u); // 8017E3DC
  c->lr=c->r[0]; // 8017E3E0
  c->r[1]=c->r[1]+0x00000060u; // 8017E3E4
  return; // 8017E3E8
}

// NANDRead
void f_8017E3EC(Ctx* __restrict c) {
  trace_call(0x8017E3ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E3EC
  c->r[0]=c->lr; // 8017E3F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E3F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017E3F8
  c->r[31]=c->r[5]|c->r[5]; // 8017E3FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017E400
  c->r[30]=c->r[4]|c->r[4]; // 8017E404
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017E408
  c->r[29]=c->r[3]|c->r[3]; // 8017E40C
  c->lr=0x8017E414u; f_8018016C(c); // 8017E410
  cmps(c,0,(int32_t)c->r[3],0); // 8017E414
  if (crb(c,2)) { goto L_8017E434; } // 8017E418
  c->r[3]=R32(c->r[29]+0x00000000u); // 8017E41C
  c->r[4]=c->r[30]|c->r[30]; // 8017E420
  c->r[5]=c->r[31]|c->r[31]; // 8017E424
  c->lr=0x8017E42Cu; f_80188CC4(c); // 8017E428
  c->lr=0x8017E430u; f_80180184(c); // 8017E42C
  goto L_8017E438; // 8017E430
L_8017E434:;
  c->r[3]=0u+0xFFFFFF80u; // 8017E434
L_8017E438:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017E438
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017E43C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017E440
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017E444
  c->lr=c->r[0]; // 8017E448
  c->r[1]=c->r[1]+0x00000020u; // 8017E44C
  return; // 8017E450
}

// NANDReadAsync
void f_8017E454(Ctx* __restrict c) {
  trace_call(0x8017E454u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E454
  c->r[0]=c->lr; // 8017E458
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E45C
  c->r[11]=c->r[1]+0x00000020u; // 8017E460
  c->lr=0x8017E468u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017E464
  c->r[27]=c->r[3]|c->r[3]; // 8017E468
  c->r[28]=c->r[4]|c->r[4]; // 8017E46C
  c->r[29]=c->r[5]|c->r[5]; // 8017E470
  c->r[30]=c->r[6]|c->r[6]; // 8017E474
  c->r[31]=c->r[7]|c->r[7]; // 8017E478
  c->lr=0x8017E480u; f_8018016C(c); // 8017E47C
  cmps(c,0,(int32_t)c->r[3],0); // 8017E480
  if (!crb(c,2)) { goto L_8017E490; } // 8017E484
  c->r[3]=0u+0xFFFFFF80u; // 8017E488
  goto L_8017E4B4; // 8017E48C
L_8017E490:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8017E490
  c->r[6]=0u+0x80180000u; // 8017E494
  c->r[4]=c->r[28]|c->r[28]; // 8017E498
  c->r[5]=c->r[29]|c->r[29]; // 8017E49C
  c->r[3]=R32(c->r[27]+0x00000000u); // 8017E4A0
  c->r[7]=c->r[31]|c->r[31]; // 8017E4A4
  c->r[6]=c->r[6]+0x00000A78u; // 8017E4A8
  c->lr=0x8017E4B0u; f_80188CE4(c); // 8017E4AC
  c->lr=0x8017E4B4u; f_80180184(c); // 8017E4B0
L_8017E4B4:;
  c->r[11]=c->r[1]+0x00000020u; // 8017E4B4
  c->lr=0x8017E4BCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017E4B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017E4BC
  c->lr=c->r[0]; // 8017E4C0
  c->r[1]=c->r[1]+0x00000020u; // 8017E4C4
  return; // 8017E4C8
}

// NANDWrite
void f_8017E4CC(Ctx* __restrict c) {
  trace_call(0x8017E4CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E4CC
  c->r[0]=c->lr; // 8017E4D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E4D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017E4D8
  c->r[31]=c->r[5]|c->r[5]; // 8017E4DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017E4E0
  c->r[30]=c->r[4]|c->r[4]; // 8017E4E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017E4E8
  c->r[29]=c->r[3]|c->r[3]; // 8017E4EC
  c->lr=0x8017E4F4u; f_8018016C(c); // 8017E4F0
  cmps(c,0,(int32_t)c->r[3],0); // 8017E4F4
  if (crb(c,2)) { goto L_8017E514; } // 8017E4F8
  c->r[3]=R32(c->r[29]+0x00000000u); // 8017E4FC
  c->r[4]=c->r[30]|c->r[30]; // 8017E500
  c->r[5]=c->r[31]|c->r[31]; // 8017E504
  c->lr=0x8017E50Cu; f_80188D88(c); // 8017E508
  c->lr=0x8017E510u; f_80180184(c); // 8017E50C
  goto L_8017E518; // 8017E510
L_8017E514:;
  c->r[3]=0u+0xFFFFFF80u; // 8017E514
L_8017E518:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017E518
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017E51C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017E520
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017E524
  c->lr=c->r[0]; // 8017E528
  c->r[1]=c->r[1]+0x00000020u; // 8017E52C
  return; // 8017E530
}

// NANDWriteAsync
void f_8017E534(Ctx* __restrict c) {
  trace_call(0x8017E534u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E534
  c->r[0]=c->lr; // 8017E538
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E53C
  c->r[11]=c->r[1]+0x00000020u; // 8017E540
  c->lr=0x8017E548u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017E544
  c->r[27]=c->r[3]|c->r[3]; // 8017E548
  c->r[28]=c->r[4]|c->r[4]; // 8017E54C
  c->r[29]=c->r[5]|c->r[5]; // 8017E550
  c->r[30]=c->r[6]|c->r[6]; // 8017E554
  c->r[31]=c->r[7]|c->r[7]; // 8017E558
  c->lr=0x8017E560u; f_8018016C(c); // 8017E55C
  cmps(c,0,(int32_t)c->r[3],0); // 8017E560
  if (!crb(c,2)) { goto L_8017E570; } // 8017E564
  c->r[3]=0u+0xFFFFFF80u; // 8017E568
  goto L_8017E594; // 8017E56C
L_8017E570:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8017E570
  c->r[6]=0u+0x80180000u; // 8017E574
  c->r[4]=c->r[28]|c->r[28]; // 8017E578
  c->r[5]=c->r[29]|c->r[29]; // 8017E57C
  c->r[3]=R32(c->r[27]+0x00000000u); // 8017E580
  c->r[7]=c->r[31]|c->r[31]; // 8017E584
  c->r[6]=c->r[6]+0x00000A78u; // 8017E588
  c->lr=0x8017E590u; f_80188DA8(c); // 8017E58C
  c->lr=0x8017E594u; f_80180184(c); // 8017E590
L_8017E594:;
  c->r[11]=c->r[1]+0x00000020u; // 8017E594
  c->lr=0x8017E59Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017E598
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017E59C
  c->lr=c->r[0]; // 8017E5A0
  c->r[1]=c->r[1]+0x00000020u; // 8017E5A4
  return; // 8017E5A8
}

// NANDSeek
void f_8017E5AC(Ctx* __restrict c) {
  trace_call(0x8017E5ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E5AC
  c->r[0]=c->lr; // 8017E5B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E5B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017E5B8
  c->r[31]=c->r[5]|c->r[5]; // 8017E5BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017E5C0
  c->r[30]=c->r[4]|c->r[4]; // 8017E5C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017E5C8
  c->r[29]=c->r[3]|c->r[3]; // 8017E5CC
  c->lr=0x8017E5D4u; f_8018016C(c); // 8017E5D0
  cmps(c,0,(int32_t)c->r[3],0); // 8017E5D4
  if (!crb(c,2)) { goto L_8017E5E4; } // 8017E5D8
  c->r[3]=0u+0xFFFFFF80u; // 8017E5DC
  goto L_8017E630; // 8017E5E0
L_8017E5E4:;
  cmps(c,0,(int32_t)c->r[31],1); // 8017E5E4
  c->r[3]=R32(c->r[29]+0x00000000u); // 8017E5E8
  c->r[5]=0u+0xFFFFFFFFu; // 8017E5EC
  if (crb(c,2)) { goto L_8017E618; } // 8017E5F0
  if (!crb(c,0)) { goto L_8017E604; } // 8017E5F4
  cmps(c,0,(int32_t)c->r[31],0); // 8017E5F8
  if (!crb(c,0)) { goto L_8017E610; } // 8017E5FC
  goto L_8017E624; // 8017E600
L_8017E604:;
  cmps(c,0,(int32_t)c->r[31],3); // 8017E604
  if (!crb(c,0)) { goto L_8017E624; } // 8017E608
  goto L_8017E620; // 8017E60C
L_8017E610:;
  c->r[5]=0u+0x00000000u; // 8017E610
  goto L_8017E624; // 8017E614
L_8017E618:;
  c->r[5]=0u+0x00000001u; // 8017E618
  goto L_8017E624; // 8017E61C
L_8017E620:;
  c->r[5]=0u+0x00000002u; // 8017E620
L_8017E624:;
  c->r[4]=c->r[30]|c->r[30]; // 8017E624
  c->lr=0x8017E62Cu; f_80188C34(c); // 8017E628
  c->lr=0x8017E630u; f_80180184(c); // 8017E62C
L_8017E630:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017E630
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017E634
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017E638
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017E63C
  c->lr=c->r[0]; // 8017E640
  c->r[1]=c->r[1]+0x00000020u; // 8017E644
  return; // 8017E648
}

// NANDSeekAsync
void f_8017E64C(Ctx* __restrict c) {
  trace_call(0x8017E64Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E64C
  c->r[0]=c->lr; // 8017E650
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E654
  c->r[11]=c->r[1]+0x00000020u; // 8017E658
  c->lr=0x8017E660u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017E65C
  c->r[27]=c->r[3]|c->r[3]; // 8017E660
  c->r[28]=c->r[4]|c->r[4]; // 8017E664
  c->r[29]=c->r[5]|c->r[5]; // 8017E668
  c->r[30]=c->r[6]|c->r[6]; // 8017E66C
  c->r[31]=c->r[7]|c->r[7]; // 8017E670
  c->lr=0x8017E678u; f_8018016C(c); // 8017E674
  cmps(c,0,(int32_t)c->r[3],0); // 8017E678
  if (!crb(c,2)) { goto L_8017E688; } // 8017E67C
  c->r[3]=0u+0xFFFFFF80u; // 8017E680
  goto L_8017E6E4; // 8017E684
L_8017E688:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8017E688
  cmps(c,0,(int32_t)c->r[29],1); // 8017E68C
  c->r[5]=0u+0xFFFFFFFFu; // 8017E690
  c->r[3]=R32(c->r[27]+0x00000000u); // 8017E694
  if (crb(c,2)) { goto L_8017E6C0; } // 8017E698
  if (!crb(c,0)) { goto L_8017E6AC; } // 8017E69C
  cmps(c,0,(int32_t)c->r[29],0); // 8017E6A0
  if (!crb(c,0)) { goto L_8017E6B8; } // 8017E6A4
  goto L_8017E6CC; // 8017E6A8
L_8017E6AC:;
  cmps(c,0,(int32_t)c->r[29],3); // 8017E6AC
  if (!crb(c,0)) { goto L_8017E6CC; } // 8017E6B0
  goto L_8017E6C8; // 8017E6B4
L_8017E6B8:;
  c->r[5]=0u+0x00000000u; // 8017E6B8
  goto L_8017E6CC; // 8017E6BC
L_8017E6C0:;
  c->r[5]=0u+0x00000001u; // 8017E6C0
  goto L_8017E6CC; // 8017E6C4
L_8017E6C8:;
  c->r[5]=0u+0x00000002u; // 8017E6C8
L_8017E6CC:;
  c->r[6]=0u+0x80180000u; // 8017E6CC
  c->r[4]=c->r[28]|c->r[28]; // 8017E6D0
  c->r[7]=c->r[31]|c->r[31]; // 8017E6D4
  c->r[6]=c->r[6]+0x00000A78u; // 8017E6D8
  c->lr=0x8017E6E0u; f_80188C38(c); // 8017E6DC
  c->lr=0x8017E6E4u; f_80180184(c); // 8017E6E0
L_8017E6E4:;
  c->r[11]=c->r[1]+0x00000020u; // 8017E6E4
  c->lr=0x8017E6ECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017E6E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017E6EC
  c->lr=c->r[0]; // 8017E6F0
  c->r[1]=c->r[1]+0x00000020u; // 8017E6F4
  return; // 8017E6F8
}

// nandCreateDir
void f_8017E6FC(Ctx* __restrict c) {
  trace_call(0x8017E6FCu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E6FC
  c->r[0]=c->lr; // 8017E700
  W32(c->r[1]+0x00000074u,c->r[0]); // 8017E704
  c->r[11]=c->r[1]+0x00000070u; // 8017E708
  c->lr=0x8017E710u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017E70C
  c->r[0]=0u+0x00000000u; // 8017E710
  c->r[27]=c->r[4]|c->r[4]; // 8017E714
  W32(c->r[1]+0x00000018u,c->r[0]); // 8017E718
  c->r[4]=c->r[3]|c->r[3]; // 8017E71C
  c->r[28]=c->r[5]|c->r[5]; // 8017E720
  c->r[29]=c->r[6]|c->r[6]; // 8017E724
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017E728
  c->r[30]=c->r[7]|c->r[7]; // 8017E72C
  c->r[31]=c->r[8]|c->r[8]; // 8017E730
  c->r[3]=c->r[1]+0x00000018u; // 8017E734
  W32(c->r[1]+0x00000020u,c->r[0]); // 8017E738
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E73C
  W32(c->r[1]+0x00000028u,c->r[0]); // 8017E740
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8017E744
  W32(c->r[1]+0x00000030u,c->r[0]); // 8017E748
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017E74C
  W32(c->r[1]+0x00000038u,c->r[0]); // 8017E750
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8017E754
  W32(c->r[1]+0x00000040u,c->r[0]); // 8017E758
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017E75C
  W32(c->r[1]+0x00000048u,c->r[0]); // 8017E760
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8017E764
  W32(c->r[1]+0x00000050u,c->r[0]); // 8017E768
  W32(c->r[1]+0x00000054u,c->r[0]); // 8017E76C
  c->lr=0x8017E774u; f_801802E4(c); // 8017E770
  cmps(c,0,(int32_t)c->r[31],0); // 8017E774
  if (!crb(c,2)) { goto L_8017E794; } // 8017E778
  c->r[3]=c->r[1]+0x00000018u; // 8017E77C
  c->lr=0x8017E784u; f_801800E0(c); // 8017E780
  cmps(c,0,(int32_t)c->r[3],0); // 8017E784
  if (crb(c,2)) { goto L_8017E794; } // 8017E788
  c->r[3]=0u+0xFFFFFF9Au; // 8017E78C
  goto L_8017E810; // 8017E790
L_8017E794:;
  c->r[0]=rotl(c->r[27],0)&0x00000010u; cr0(c,c->r[0]); // 8017E794
  if (!crb(c,2)) { goto L_8017E7A4; } // 8017E798
  c->r[3]=0u+0xFFFFFF9Bu; // 8017E79C
  goto L_8017E810; // 8017E7A0
L_8017E7A4:;
  c->r[0]=0u+0x00000000u; // 8017E7A4
  c->r[3]=c->r[27]|c->r[27]; // 8017E7A8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017E7AC
  c->r[4]=c->r[1]+0x00000010u; // 8017E7B0
  c->r[5]=c->r[1]+0x0000000Cu; // 8017E7B4
  c->r[6]=c->r[1]+0x00000008u; // 8017E7B8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017E7BC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017E7C0
  c->lr=0x8017E7C8u; f_8017EB90(c); // 8017E7C4
  cmps(c,0,(int32_t)c->r[30],0); // 8017E7C8
  if (crb(c,2)) { goto L_8017E7F8; } // 8017E7CC
  c->r[8]=0u+0x80180000u; // 8017E7D0
  c->r[5]=R32(c->r[1]+0x00000010u); // 8017E7D4
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8017E7D8
  c->r[4]=c->r[28]|c->r[28]; // 8017E7DC
  c->r[7]=R32(c->r[1]+0x00000008u); // 8017E7E0
  c->r[9]=c->r[29]|c->r[29]; // 8017E7E4
  c->r[3]=c->r[1]+0x00000018u; // 8017E7E8
  c->r[8]=c->r[8]+0x00000A78u; // 8017E7EC
  c->lr=0x8017E7F4u; f_80187DC8(c); // 8017E7F0
  goto L_8017E810; // 8017E7F4
L_8017E7F8:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 8017E7F8
  c->r[4]=c->r[28]|c->r[28]; // 8017E7FC
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8017E800
  c->r[3]=c->r[1]+0x00000018u; // 8017E804
  c->r[7]=R32(c->r[1]+0x00000008u); // 8017E808
  c->lr=0x8017E810u; f_80187CD4(c); // 8017E80C
L_8017E810:;
  c->r[11]=c->r[1]+0x00000070u; // 8017E810
  c->lr=0x8017E818u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017E814
  c->r[0]=R32(c->r[1]+0x00000074u); // 8017E818
  c->lr=c->r[0]; // 8017E81C
  c->r[1]=c->r[1]+0x00000070u; // 8017E820
  return; // 8017E824
}

// NANDPrivateCreateDir
void f_8017E828(Ctx* __restrict c) {
  trace_call(0x8017E828u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E828
  c->r[0]=c->lr; // 8017E82C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E830
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017E834
  c->r[31]=c->r[5]|c->r[5]; // 8017E838
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017E83C
  c->r[30]=c->r[4]|c->r[4]; // 8017E840
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017E844
  c->r[29]=c->r[3]|c->r[3]; // 8017E848
  c->lr=0x8017E850u; f_8018016C(c); // 8017E84C
  cmps(c,0,(int32_t)c->r[3],0); // 8017E850
  if (crb(c,2)) { goto L_8017E87C; } // 8017E854
  c->r[3]=c->r[29]|c->r[29]; // 8017E858
  c->r[4]=c->r[30]|c->r[30]; // 8017E85C
  c->r[5]=c->r[31]|c->r[31]; // 8017E860
  c->r[6]=0u+0x00000000u; // 8017E864
  c->r[7]=0u+0x00000000u; // 8017E868
  c->r[8]=0u+0x00000000u; // 8017E86C
  c->lr=0x8017E874u; f_8017E6FC(c); // 8017E870
  c->lr=0x8017E878u; f_80180184(c); // 8017E874
  goto L_8017E880; // 8017E878
L_8017E87C:;
  c->r[3]=0u+0xFFFFFF80u; // 8017E87C
L_8017E880:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017E880
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017E884
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017E888
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017E88C
  c->lr=c->r[0]; // 8017E890
  c->r[1]=c->r[1]+0x00000020u; // 8017E894
  return; // 8017E898
}

// NANDPrivateCreateDirAsync
void f_8017E89C(Ctx* __restrict c) {
  trace_call(0x8017E89Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E89C
  c->r[0]=c->lr; // 8017E8A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E8A4
  c->r[11]=c->r[1]+0x00000020u; // 8017E8A8
  c->lr=0x8017E8B0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017E8AC
  c->r[27]=c->r[3]|c->r[3]; // 8017E8B0
  c->r[28]=c->r[4]|c->r[4]; // 8017E8B4
  c->r[29]=c->r[5]|c->r[5]; // 8017E8B8
  c->r[30]=c->r[6]|c->r[6]; // 8017E8BC
  c->r[31]=c->r[7]|c->r[7]; // 8017E8C0
  c->lr=0x8017E8C8u; f_8018016C(c); // 8017E8C4
  cmps(c,0,(int32_t)c->r[3],0); // 8017E8C8
  if (!crb(c,2)) { goto L_8017E8D8; } // 8017E8CC
  c->r[3]=0u+0xFFFFFF80u; // 8017E8D0
  goto L_8017E8FC; // 8017E8D4
L_8017E8D8:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8017E8D8
  c->r[3]=c->r[27]|c->r[27]; // 8017E8DC
  c->r[4]=c->r[28]|c->r[28]; // 8017E8E0
  c->r[5]=c->r[29]|c->r[29]; // 8017E8E4
  c->r[6]=c->r[31]|c->r[31]; // 8017E8E8
  c->r[7]=0u+0x00000001u; // 8017E8EC
  c->r[8]=0u+0x00000001u; // 8017E8F0
  c->lr=0x8017E8F8u; f_8017E6FC(c); // 8017E8F4
  c->lr=0x8017E8FCu; f_80180184(c); // 8017E8F8
L_8017E8FC:;
  c->r[11]=c->r[1]+0x00000020u; // 8017E8FC
  c->lr=0x8017E904u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017E900
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017E904
  c->lr=c->r[0]; // 8017E908
  c->r[1]=c->r[1]+0x00000020u; // 8017E90C
  return; // 8017E910
}

// nandMove
void f_8017E914(Ctx* __restrict c) {
  trace_call(0x8017E914u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E914
  c->r[0]=c->lr; // 8017E918
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8017E91C
  c->r[0]=0u+0x00000000u; // 8017E920
  W32(c->r[1]+0x000000ACu,c->r[31]); // 8017E924
  c->r[31]=c->r[7]|c->r[7]; // 8017E928
  W32(c->r[1]+0x000000A8u,c->r[30]); // 8017E92C
  c->r[30]=c->r[6]|c->r[6]; // 8017E930
  W32(c->r[1]+0x000000A4u,c->r[29]); // 8017E934
  c->r[29]=c->r[5]|c->r[5]; // 8017E938
  W32(c->r[1]+0x000000A0u,c->r[28]); // 8017E93C
  c->r[28]=c->r[4]|c->r[4]; // 8017E940
  c->r[4]=c->r[3]|c->r[3]; // 8017E944
  c->r[3]=c->r[1]+0x00000058u; // 8017E948
  W32(c->r[1]+0x00000058u,c->r[0]); // 8017E94C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8017E950
  W32(c->r[1]+0x00000060u,c->r[0]); // 8017E954
  W32(c->r[1]+0x00000064u,c->r[0]); // 8017E958
  W32(c->r[1]+0x00000068u,c->r[0]); // 8017E95C
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 8017E960
  W32(c->r[1]+0x00000070u,c->r[0]); // 8017E964
  W32(c->r[1]+0x00000074u,c->r[0]); // 8017E968
  W32(c->r[1]+0x00000078u,c->r[0]); // 8017E96C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8017E970
  W32(c->r[1]+0x00000080u,c->r[0]); // 8017E974
  W32(c->r[1]+0x00000084u,c->r[0]); // 8017E978
  W32(c->r[1]+0x00000088u,c->r[0]); // 8017E97C
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 8017E980
  W32(c->r[1]+0x00000090u,c->r[0]); // 8017E984
  W32(c->r[1]+0x00000094u,c->r[0]); // 8017E988
  W32(c->r[1]+0x00000018u,c->r[0]); // 8017E98C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017E990
  W32(c->r[1]+0x00000020u,c->r[0]); // 8017E994
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017E998
  W32(c->r[1]+0x00000028u,c->r[0]); // 8017E99C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8017E9A0
  W32(c->r[1]+0x00000030u,c->r[0]); // 8017E9A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017E9A8
  W32(c->r[1]+0x00000038u,c->r[0]); // 8017E9AC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8017E9B0
  W32(c->r[1]+0x00000040u,c->r[0]); // 8017E9B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017E9B8
  W32(c->r[1]+0x00000048u,c->r[0]); // 8017E9BC
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8017E9C0
  W32(c->r[1]+0x00000050u,c->r[0]); // 8017E9C4
  W32(c->r[1]+0x00000054u,c->r[0]); // 8017E9C8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017E9CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017E9D0
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017E9D4
  W8(c->r[1]+0x00000014u,c->r[0]); // 8017E9D8
  c->lr=0x8017E9E0u; f_801802E4(c); // 8017E9DC
  c->r[3]=c->r[1]+0x00000008u; // 8017E9E0
  c->r[4]=c->r[1]+0x00000058u; // 8017E9E4
  c->lr=0x8017E9ECu; f_8017FF0C(c); // 8017E9E8
  c->r[4]=c->r[28]|c->r[28]; // 8017E9EC
  c->r[3]=c->r[1]+0x00000018u; // 8017E9F0
  c->lr=0x8017E9F8u; f_801802E4(c); // 8017E9F4
  c->r[3]=c->r[1]+0x00000018u; // 8017E9F8
  c->r[4]=c->r[13]+0xFFFF9138u; // 8017E9FC
  c->lr=0x8017EA04u; f_8025C5C0(c); // 8017EA00
  cmps(c,0,(int32_t)c->r[3],0); // 8017EA04
  if (!crb(c,2)) { goto L_8017EA24; } // 8017EA08
  c->r[3]=c->r[1]+0x00000018u; // 8017EA0C
  c->r[5]=c->r[1]+0x00000008u; // 8017EA10
  c->r[4]=c->r[13]+0xFFFF913Cu; // 8017EA14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017EA18
  c->lr=0x8017EA20u; f_8025ABC0(c); // 8017EA1C
  goto L_8017EA3C; // 8017EA20
L_8017EA24:;
  c->r[3]=c->r[1]+0x00000018u; // 8017EA24
  c->r[4]=c->r[13]+0xFFFF9138u; // 8017EA28
  c->lr=0x8017EA30u; f_8025C548(c); // 8017EA2C
  c->r[3]=c->r[1]+0x00000018u; // 8017EA30
  c->r[4]=c->r[1]+0x00000008u; // 8017EA34
  c->lr=0x8017EA3Cu; f_8025C548(c); // 8017EA38
L_8017EA3C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8017EA3C
  if (!crb(c,2)) { goto L_8017EA6C; } // 8017EA40
  c->r[3]=c->r[1]+0x00000058u; // 8017EA44
  c->lr=0x8017EA4Cu; f_801800E0(c); // 8017EA48
  cmps(c,0,(int32_t)c->r[3],0); // 8017EA4C
  if (!crb(c,2)) { goto L_8017EA64; } // 8017EA50
  c->r[3]=c->r[1]+0x00000018u; // 8017EA54
  c->lr=0x8017EA5Cu; f_801800E0(c); // 8017EA58
  cmps(c,0,(int32_t)c->r[3],0); // 8017EA5C
  if (crb(c,2)) { goto L_8017EA6C; } // 8017EA60
L_8017EA64:;
  c->r[3]=0u+0xFFFFFF9Au; // 8017EA64
  goto L_8017EA9C; // 8017EA68
L_8017EA6C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8017EA6C
  if (crb(c,2)) { goto L_8017EA90; } // 8017EA70
  c->r[5]=0u+0x80180000u; // 8017EA74
  c->r[6]=c->r[29]|c->r[29]; // 8017EA78
  c->r[3]=c->r[1]+0x00000058u; // 8017EA7C
  c->r[4]=c->r[1]+0x00000018u; // 8017EA80
  c->r[5]=c->r[5]+0x00000A78u; // 8017EA84
  c->lr=0x8017EA8Cu; f_80188690(c); // 8017EA88
  goto L_8017EA9C; // 8017EA8C
L_8017EA90:;
  c->r[3]=c->r[1]+0x00000058u; // 8017EA90
  c->r[4]=c->r[1]+0x00000018u; // 8017EA94
  c->lr=0x8017EA9Cu; f_8018858C(c); // 8017EA98
L_8017EA9C:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8017EA9C
  c->r[31]=R32(c->r[1]+0x000000ACu); // 8017EAA0
  c->r[30]=R32(c->r[1]+0x000000A8u); // 8017EAA4
  c->r[29]=R32(c->r[1]+0x000000A4u); // 8017EAA8
  c->r[28]=R32(c->r[1]+0x000000A0u); // 8017EAAC
  c->lr=c->r[0]; // 8017EAB0
  c->r[1]=c->r[1]+0x000000B0u; // 8017EAB4
  return; // 8017EAB8
}

// fn_8017EABC
void f_8017EABC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017EABC
  c->r[0]=c->lr; // 8017EAC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017EAC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017EAC8
  c->r[31]=c->r[6]|c->r[6]; // 8017EACC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017EAD0
  c->r[30]=c->r[5]|c->r[5]; // 8017EAD4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017EAD8
  c->r[29]=c->r[4]|c->r[4]; // 8017EADC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8017EAE0
  c->r[28]=c->r[3]|c->r[3]; // 8017EAE4
  c->lr=0x8017EAECu; f_8018016C(c); // 8017EAE8
  cmps(c,0,(int32_t)c->r[3],0); // 8017EAEC
  if (!crb(c,2)) { goto L_8017EAFC; } // 8017EAF0
  c->r[3]=0u+0xFFFFFF80u; // 8017EAF4
  goto L_8017EB1C; // 8017EAF8
L_8017EAFC:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8017EAFC
  c->r[3]=c->r[28]|c->r[28]; // 8017EB00
  c->r[4]=c->r[29]|c->r[29]; // 8017EB04
  c->r[5]=c->r[31]|c->r[31]; // 8017EB08
  c->r[6]=0u+0x00000001u; // 8017EB0C
  c->r[7]=0u+0x00000000u; // 8017EB10
  c->lr=0x8017EB18u; f_8017E914(c); // 8017EB14
  c->lr=0x8017EB1Cu; f_80180184(c); // 8017EB18
L_8017EB1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017EB1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017EB20
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017EB24
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017EB28
  c->r[28]=R32(c->r[1]+0x00000010u); // 8017EB2C
  c->lr=c->r[0]; // 8017EB30
  c->r[1]=c->r[1]+0x00000020u; // 8017EB34
  return; // 8017EB38
}

// nandComposePerm
void f_8017EB3C(Ctx* __restrict c) {
  trace_call(0x8017EB3Cu);
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 8017EB3C
  c->r[7]=0u+0x00000000u; // 8017EB40
  if (crb(c,2)) { goto L_8017EB4C; } // 8017EB44
  c->r[7]=c->r[7]|0x00000010u; // 8017EB48
L_8017EB4C:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 8017EB4C
  if (crb(c,2)) { goto L_8017EB58; } // 8017EB50
  c->r[7]=c->r[7]|0x00000020u; // 8017EB54
L_8017EB58:;
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 8017EB58
  if (crb(c,2)) { goto L_8017EB64; } // 8017EB5C
  c->r[7]=c->r[7]|0x00000004u; // 8017EB60
L_8017EB64:;
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 8017EB64
  if (crb(c,2)) { goto L_8017EB70; } // 8017EB68
  c->r[7]=c->r[7]|0x00000008u; // 8017EB6C
L_8017EB70:;
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 8017EB70
  if (crb(c,2)) { goto L_8017EB7C; } // 8017EB74
  c->r[7]=c->r[7]|0x00000001u; // 8017EB78
L_8017EB7C:;
  c->r[0]=rotl(c->r[6],0)&0x00000002u; cr0(c,c->r[0]); // 8017EB7C
  if (crb(c,2)) { goto L_8017EB88; } // 8017EB80
  c->r[7]=c->r[7]|0x00000002u; // 8017EB84
L_8017EB88:;
  W8(c->r[3]+0x00000000u,c->r[7]); // 8017EB88
  return; // 8017EB8C
}

// nandSplitPerm
void f_8017EB90(Ctx* __restrict c) {
  trace_call(0x8017EB90u);
  c->r[7]=0u+0x00000000u; // 8017EB90
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 8017EB94
  W32(c->r[4]+0x00000000u,c->r[7]); // 8017EB98
  W32(c->r[5]+0x00000000u,c->r[7]); // 8017EB9C
  W32(c->r[6]+0x00000000u,c->r[7]); // 8017EBA0
  if (crb(c,2)) { goto L_8017EBB4; } // 8017EBA4
  c->r[0]=R32(c->r[4]+0x00000000u); // 8017EBA8
  c->r[0]=c->r[0]|0x00000001u; // 8017EBAC
  W32(c->r[4]+0x00000000u,c->r[0]); // 8017EBB0
L_8017EBB4:;
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 8017EBB4
  if (crb(c,2)) { goto L_8017EBC8; } // 8017EBB8
  c->r[0]=R32(c->r[4]+0x00000000u); // 8017EBBC
  c->r[0]=c->r[0]|0x00000002u; // 8017EBC0
  W32(c->r[4]+0x00000000u,c->r[0]); // 8017EBC4
L_8017EBC8:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8017EBC8
  if (crb(c,2)) { goto L_8017EBDC; } // 8017EBCC
  c->r[0]=R32(c->r[5]+0x00000000u); // 8017EBD0
  c->r[0]=c->r[0]|0x00000001u; // 8017EBD4
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017EBD8
L_8017EBDC:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 8017EBDC
  if (crb(c,2)) { goto L_8017EBF0; } // 8017EBE0
  c->r[0]=R32(c->r[5]+0x00000000u); // 8017EBE4
  c->r[0]=c->r[0]|0x00000002u; // 8017EBE8
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017EBEC
L_8017EBF0:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8017EBF0
  if (crb(c,2)) { goto L_8017EC04; } // 8017EBF4
  c->r[0]=R32(c->r[6]+0x00000000u); // 8017EBF8
  c->r[0]=c->r[0]|0x00000001u; // 8017EBFC
  W32(c->r[6]+0x00000000u,c->r[0]); // 8017EC00
L_8017EC04:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 8017EC04
  if (crb(c,2)) return; // 8017EC08
  c->r[0]=R32(c->r[6]+0x00000000u); // 8017EC0C
  c->r[0]=c->r[0]|0x00000002u; // 8017EC10
  W32(c->r[6]+0x00000000u,c->r[0]); // 8017EC14
  return; // 8017EC18
}

// nandGetStatus
void f_8017EC1C(Ctx* __restrict c) {
  trace_call(0x8017EC1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017EC1C
  c->r[0]=c->lr; // 8017EC20
  W32(c->r[1]+0x00000074u,c->r[0]); // 8017EC24
  c->r[0]=0u+0x00000000u; // 8017EC28
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8017EC2C
  c->r[31]=c->r[7]|c->r[7]; // 8017EC30
  W32(c->r[1]+0x00000068u,c->r[30]); // 8017EC34
  c->r[30]=c->r[6]|c->r[6]; // 8017EC38
  W32(c->r[1]+0x00000064u,c->r[29]); // 8017EC3C
  c->r[29]=c->r[5]|c->r[5]; // 8017EC40
  W32(c->r[1]+0x00000060u,c->r[28]); // 8017EC44
  c->r[28]=c->r[4]|c->r[4]; // 8017EC48
  c->r[4]=c->r[3]|c->r[3]; // 8017EC4C
  c->r[3]=c->r[1]+0x00000020u; // 8017EC50
  W32(c->r[1]+0x00000020u,c->r[0]); // 8017EC54
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017EC58
  W32(c->r[1]+0x00000028u,c->r[0]); // 8017EC5C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8017EC60
  W32(c->r[1]+0x00000030u,c->r[0]); // 8017EC64
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017EC68
  W32(c->r[1]+0x00000038u,c->r[0]); // 8017EC6C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8017EC70
  W32(c->r[1]+0x00000040u,c->r[0]); // 8017EC74
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017EC78
  W32(c->r[1]+0x00000048u,c->r[0]); // 8017EC7C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8017EC80
  W32(c->r[1]+0x00000050u,c->r[0]); // 8017EC84
  W32(c->r[1]+0x00000054u,c->r[0]); // 8017EC88
  W32(c->r[1]+0x00000058u,c->r[0]); // 8017EC8C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8017EC90
  c->lr=0x8017EC98u; f_801802E4(c); // 8017EC94
  cmps(c,0,(int32_t)c->r[31],0); // 8017EC98
  if (!crb(c,2)) { goto L_8017ECB8; } // 8017EC9C
  c->r[3]=c->r[1]+0x00000020u; // 8017ECA0
  c->lr=0x8017ECA8u; f_80180114(c); // 8017ECA4
  cmps(c,0,(int32_t)c->r[3],0); // 8017ECA8
  if (crb(c,2)) { goto L_8017ECB8; } // 8017ECAC
  c->r[3]=0u+0xFFFFFF9Au; // 8017ECB0
  goto L_8017ED50; // 8017ECB4
L_8017ECB8:;
  cmps(c,0,(int32_t)c->r[30],0); // 8017ECB8
  if (crb(c,2)) { goto L_8017ECF0; } // 8017ECBC
  c->r[10]=0u+0x80180000u; // 8017ECC0
  W32(c->r[1]+0x00000008u,c->r[29]); // 8017ECC4
  c->r[4]=c->r[28]|c->r[28]; // 8017ECC8
  c->r[3]=c->r[1]+0x00000020u; // 8017ECCC
  c->r[5]=c->r[28]+0x00000004u; // 8017ECD0
  c->r[6]=c->r[29]+0x00000020u; // 8017ECD4
  c->r[7]=c->r[29]+0x00000024u; // 8017ECD8
  c->r[8]=c->r[29]+0x00000028u; // 8017ECDC
  c->r[9]=c->r[29]+0x0000002Cu; // 8017ECE0
  c->r[10]=c->r[10]+0xFFFFED70u; // 8017ECE4
  c->lr=0x8017ECECu; f_801882B0(c); // 8017ECE8
  goto L_8017ED50; // 8017ECEC
L_8017ECF0:;
  c->r[0]=0u+0x00000000u; // 8017ECF0
  c->r[4]=c->r[28]|c->r[28]; // 8017ECF4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017ECF8
  c->r[3]=c->r[1]+0x00000020u; // 8017ECFC
  c->r[5]=c->r[28]+0x00000004u; // 8017ED00
  c->r[6]=c->r[1]+0x0000001Cu; // 8017ED04
  W32(c->r[1]+0x00000018u,c->r[0]); // 8017ED08
  c->r[7]=c->r[1]+0x00000018u; // 8017ED0C
  c->r[8]=c->r[1]+0x00000014u; // 8017ED10
  c->r[9]=c->r[1]+0x00000010u; // 8017ED14
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017ED18
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017ED1C
  c->lr=0x8017ED24u; f_80188158(c); // 8017ED20
  cmps(c,0,(int32_t)c->r[3],0); // 8017ED24
  c->r[31]=c->r[3]|c->r[3]; // 8017ED28
  if (!crb(c,2)) { goto L_8017ED4C; } // 8017ED2C
  c->r[4]=R32(c->r[1]+0x00000018u); // 8017ED30
  c->r[3]=c->r[28]+0x00000007u; // 8017ED34
  c->r[5]=R32(c->r[1]+0x00000014u); // 8017ED38
  c->r[6]=R32(c->r[1]+0x00000010u); // 8017ED3C
  c->lr=0x8017ED44u; f_8017EB3C(c); // 8017ED40
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8017ED44
  W8(c->r[28]+0x00000006u,c->r[0]); // 8017ED48
L_8017ED4C:;
  c->r[3]=c->r[31]|c->r[31]; // 8017ED4C
L_8017ED50:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 8017ED50
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8017ED54
  c->r[30]=R32(c->r[1]+0x00000068u); // 8017ED58
  c->r[29]=R32(c->r[1]+0x00000064u); // 8017ED5C
  c->r[28]=R32(c->r[1]+0x00000060u); // 8017ED60
  c->lr=c->r[0]; // 8017ED64
  c->r[1]=c->r[1]+0x00000070u; // 8017ED68
  return; // 8017ED6C
}

// nandGetStatusCallback
void f_8017ED70(Ctx* __restrict c) {
  trace_call(0x8017ED70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017ED70
  c->r[0]=c->lr; // 8017ED74
  cmps(c,0,(int32_t)c->r[3],0); // 8017ED78
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017ED7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017ED80
  c->r[31]=c->r[4]|c->r[4]; // 8017ED84
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017ED88
  c->r[30]=c->r[3]|c->r[3]; // 8017ED8C
  if (!crb(c,2)) { goto L_8017EDB4; } // 8017ED90
  c->r[5]=R32(c->r[4]+0x00000014u); // 8017ED94
  c->r[0]=R32(c->r[4]+0x00000020u); // 8017ED98
  c->r[3]=c->r[5]+0x00000007u; // 8017ED9C
  W8(c->r[5]+0x00000006u,c->r[0]); // 8017EDA0
  c->r[4]=R32(c->r[4]+0x00000024u); // 8017EDA4
  c->r[5]=R32(c->r[31]+0x00000028u); // 8017EDA8
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 8017EDAC
  c->lr=0x8017EDB4u; f_8017EB3C(c); // 8017EDB0
L_8017EDB4:;
  c->r[3]=c->r[30]|c->r[30]; // 8017EDB4
  c->lr=0x8017EDBCu; f_80180184(c); // 8017EDB8
  c->r[12]=R32(c->r[31]+0x00000004u); // 8017EDBC
  c->r[4]=c->r[31]|c->r[31]; // 8017EDC0
  c->ctr=c->r[12]; // 8017EDC4
  if (true) { c->lr=0x8017EDCCu; dispatch(c,c->ctr); } // 8017EDC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017EDCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017EDD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017EDD4
  c->lr=c->r[0]; // 8017EDD8
  c->r[1]=c->r[1]+0x00000010u; // 8017EDDC
  return; // 8017EDE0
}

// NANDGetStatus
void f_8017EDE4(Ctx* __restrict c) {
  trace_call(0x8017EDE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017EDE4
  c->r[0]=c->lr; // 8017EDE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017EDEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017EDF0
  c->r[31]=c->r[4]|c->r[4]; // 8017EDF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017EDF8
  c->r[30]=c->r[3]|c->r[3]; // 8017EDFC
  c->lr=0x8017EE04u; f_8018016C(c); // 8017EE00
  cmps(c,0,(int32_t)c->r[3],0); // 8017EE04
  if (crb(c,2)) { goto L_8017EE2C; } // 8017EE08
  c->r[3]=c->r[30]|c->r[30]; // 8017EE0C
  c->r[4]=c->r[31]|c->r[31]; // 8017EE10
  c->r[5]=0u+0x00000000u; // 8017EE14
  c->r[6]=0u+0x00000000u; // 8017EE18
  c->r[7]=0u+0x00000000u; // 8017EE1C
  c->lr=0x8017EE24u; f_8017EC1C(c); // 8017EE20
  c->lr=0x8017EE28u; f_80180184(c); // 8017EE24
  goto L_8017EE30; // 8017EE28
L_8017EE2C:;
  c->r[3]=0u+0xFFFFFF80u; // 8017EE2C
L_8017EE30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017EE30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017EE34
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017EE38
  c->lr=c->r[0]; // 8017EE3C
  c->r[1]=c->r[1]+0x00000010u; // 8017EE40
  return; // 8017EE44
}

// NANDPrivateGetStatus
void f_8017EE48(Ctx* __restrict c) {
  trace_call(0x8017EE48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017EE48
  c->r[0]=c->lr; // 8017EE4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017EE50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017EE54
  c->r[31]=c->r[4]|c->r[4]; // 8017EE58
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017EE5C
  c->r[30]=c->r[3]|c->r[3]; // 8017EE60
  c->lr=0x8017EE68u; f_8018016C(c); // 8017EE64
  cmps(c,0,(int32_t)c->r[3],0); // 8017EE68
  if (crb(c,2)) { goto L_8017EE90; } // 8017EE6C
  c->r[3]=c->r[30]|c->r[30]; // 8017EE70
  c->r[4]=c->r[31]|c->r[31]; // 8017EE74
  c->r[5]=0u+0x00000000u; // 8017EE78
  c->r[6]=0u+0x00000000u; // 8017EE7C
  c->r[7]=0u+0x00000001u; // 8017EE80
  c->lr=0x8017EE88u; f_8017EC1C(c); // 8017EE84
  c->lr=0x8017EE8Cu; f_80180184(c); // 8017EE88
  goto L_8017EE94; // 8017EE8C
L_8017EE90:;
  c->r[3]=0u+0xFFFFFF80u; // 8017EE90
L_8017EE94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017EE94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017EE98
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017EE9C
  c->lr=c->r[0]; // 8017EEA0
  c->r[1]=c->r[1]+0x00000010u; // 8017EEA4
  return; // 8017EEA8
}

// NANDPrivateGetStatusAsync
void f_8017EEAC(Ctx* __restrict c) {
  trace_call(0x8017EEACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017EEAC
  c->r[0]=c->lr; // 8017EEB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017EEB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017EEB8
  c->r[31]=c->r[6]|c->r[6]; // 8017EEBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017EEC0
  c->r[30]=c->r[5]|c->r[5]; // 8017EEC4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017EEC8
  c->r[29]=c->r[4]|c->r[4]; // 8017EECC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8017EED0
  c->r[28]=c->r[3]|c->r[3]; // 8017EED4
  c->lr=0x8017EEDCu; f_8018016C(c); // 8017EED8
  cmps(c,0,(int32_t)c->r[3],0); // 8017EEDC
  if (!crb(c,2)) { goto L_8017EEEC; } // 8017EEE0
  c->r[3]=0u+0xFFFFFF80u; // 8017EEE4
  goto L_8017EF10; // 8017EEE8
L_8017EEEC:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8017EEEC
  c->r[3]=c->r[28]|c->r[28]; // 8017EEF0
  c->r[4]=c->r[29]|c->r[29]; // 8017EEF4
  c->r[5]=c->r[31]|c->r[31]; // 8017EEF8
  W32(c->r[31]+0x00000014u,c->r[29]); // 8017EEFC
  c->r[6]=0u+0x00000001u; // 8017EF00
  c->r[7]=0u+0x00000001u; // 8017EF04
  c->lr=0x8017EF0Cu; f_8017EC1C(c); // 8017EF08
  c->lr=0x8017EF10u; f_80180184(c); // 8017EF0C
L_8017EF10:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017EF10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017EF14
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017EF18
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017EF1C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8017EF20
  c->lr=c->r[0]; // 8017EF24
  c->r[1]=c->r[1]+0x00000020u; // 8017EF28
  return; // 8017EF2C
}

// fn_8017EF30
void f_8017EF30(Ctx* __restrict c) {
  W32(c->r[3]+0x00000000u,c->r[4]); // 8017EF30
  return; // 8017EF34
}

// fn_8017EF38
void f_8017EF38(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017EF38
  return; // 8017EF3C
}

// nandOpen
void f_8017EF40(Ctx* __restrict c) {
  trace_call(0x8017EF40u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017EF40
  c->r[0]=c->lr; // 8017EF44
  W32(c->r[1]+0x00000064u,c->r[0]); // 8017EF48
  c->r[11]=c->r[1]+0x00000060u; // 8017EF4C
  c->lr=0x8017EF54u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017EF50
  c->r[0]=0u+0x00000000u; // 8017EF54
  c->r[27]=c->r[4]|c->r[4]; // 8017EF58
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017EF5C
  c->r[4]=c->r[3]|c->r[3]; // 8017EF60
  c->r[28]=c->r[5]|c->r[5]; // 8017EF64
  c->r[29]=c->r[6]|c->r[6]; // 8017EF68
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017EF6C
  c->r[30]=c->r[7]|c->r[7]; // 8017EF70
  c->r[3]=c->r[1]+0x00000008u; // 8017EF74
  c->r[31]=0u+0x00000000u; // 8017EF78
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017EF7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017EF80
  W32(c->r[1]+0x00000018u,c->r[0]); // 8017EF84
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017EF88
  W32(c->r[1]+0x00000020u,c->r[0]); // 8017EF8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017EF90
  W32(c->r[1]+0x00000028u,c->r[0]); // 8017EF94
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8017EF98
  W32(c->r[1]+0x00000030u,c->r[0]); // 8017EF9C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017EFA0
  W32(c->r[1]+0x00000038u,c->r[0]); // 8017EFA4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8017EFA8
  W32(c->r[1]+0x00000040u,c->r[0]); // 8017EFAC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017EFB0
  c->lr=0x8017EFB8u; f_801802E4(c); // 8017EFB4
  cmps(c,0,(int32_t)c->r[30],0); // 8017EFB8
  if (!crb(c,2)) { goto L_8017EFD8; } // 8017EFBC
  c->r[3]=c->r[1]+0x00000008u; // 8017EFC0
  c->lr=0x8017EFC8u; f_801800E0(c); // 8017EFC4
  cmps(c,0,(int32_t)c->r[3],0); // 8017EFC8
  if (crb(c,2)) { goto L_8017EFD8; } // 8017EFCC
  c->r[3]=0u+0xFFFFFF9Au; // 8017EFD0
  goto L_8017F03C; // 8017EFD4
L_8017EFD8:;
  cmps(c,0,(int32_t)c->r[27],2); // 8017EFD8
  if (crb(c,2)) { goto L_8017F008; } // 8017EFDC
  if (!crb(c,0)) { goto L_8017EFF0; } // 8017EFE0
  cmps(c,0,(int32_t)c->r[27],1); // 8017EFE4
  if (!crb(c,0)) { goto L_8017F000; } // 8017EFE8
  goto L_8017F00C; // 8017EFEC
L_8017EFF0:;
  cmps(c,0,(int32_t)c->r[27],4); // 8017EFF0
  if (!crb(c,0)) { goto L_8017F00C; } // 8017EFF4
  c->r[31]=0u+0x00000003u; // 8017EFF8
  goto L_8017F00C; // 8017EFFC
L_8017F000:;
  c->r[31]=0u+0x00000001u; // 8017F000
  goto L_8017F00C; // 8017F004
L_8017F008:;
  c->r[31]=0u+0x00000002u; // 8017F008
L_8017F00C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8017F00C
  if (crb(c,2)) { goto L_8017F030; } // 8017F010
  c->r[5]=0u+0x80180000u; // 8017F014
  c->r[4]=c->r[31]|c->r[31]; // 8017F018
  c->r[6]=c->r[28]|c->r[28]; // 8017F01C
  c->r[3]=c->r[1]+0x00000008u; // 8017F020
  c->r[5]=c->r[5]+0xFFFFF25Cu; // 8017F024
  c->lr=0x8017F02Cu; f_80188B7C(c); // 8017F028
  goto L_8017F03C; // 8017F02C
L_8017F030:;
  c->r[4]=c->r[31]|c->r[31]; // 8017F030
  c->r[3]=c->r[1]+0x00000008u; // 8017F034
  c->lr=0x8017F03Cu; f_80188AB4(c); // 8017F038
L_8017F03C:;
  c->r[11]=c->r[1]+0x00000060u; // 8017F03C
  c->lr=0x8017F044u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017F040
  c->r[0]=R32(c->r[1]+0x00000064u); // 8017F044
  c->lr=c->r[0]; // 8017F048
  c->r[1]=c->r[1]+0x00000060u; // 8017F04C
  return; // 8017F050
}

// NANDOpen
void f_8017F054(Ctx* __restrict c) {
  trace_call(0x8017F054u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F054
  c->r[0]=c->lr; // 8017F058
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017F05C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017F060
  c->r[31]=c->r[5]|c->r[5]; // 8017F064
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017F068
  c->r[30]=c->r[4]|c->r[4]; // 8017F06C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017F070
  c->r[29]=c->r[3]|c->r[3]; // 8017F074
  c->lr=0x8017F07Cu; f_8018016C(c); // 8017F078
  cmps(c,0,(int32_t)c->r[3],0); // 8017F07C
  if (!crb(c,2)) { goto L_8017F08C; } // 8017F080
  c->r[3]=0u+0xFFFFFF80u; // 8017F084
  goto L_8017F0C4; // 8017F088
L_8017F08C:;
  c->r[3]=c->r[29]|c->r[29]; // 8017F08C
  c->r[4]=c->r[31]|c->r[31]; // 8017F090
  c->r[5]=0u+0x00000000u; // 8017F094
  c->r[6]=0u+0x00000000u; // 8017F098
  c->r[7]=0u+0x00000000u; // 8017F09C
  c->lr=0x8017F0A4u; f_8017EF40(c); // 8017F0A0
  cmps(c,0,(int32_t)c->r[3],0); // 8017F0A4
  if (crb(c,0)) { goto L_8017F0C0; } // 8017F0A8
  c->r[0]=0u+0x00000001u; // 8017F0AC
  W32(c->r[30]+0x00000000u,c->r[3]); // 8017F0B0
  c->r[3]=0u+0x00000000u; // 8017F0B4
  W8(c->r[30]+0x0000008Au,c->r[0]); // 8017F0B8
  goto L_8017F0C4; // 8017F0BC
L_8017F0C0:;
  c->lr=0x8017F0C4u; f_80180184(c); // 8017F0C0
L_8017F0C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017F0C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017F0C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017F0CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017F0D0
  c->lr=c->r[0]; // 8017F0D4
  c->r[1]=c->r[1]+0x00000020u; // 8017F0D8
  return; // 8017F0DC
}

// NANDPrivateOpen
void f_8017F0E0(Ctx* __restrict c) {
  trace_call(0x8017F0E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F0E0
  c->r[0]=c->lr; // 8017F0E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017F0E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017F0EC
  c->r[31]=c->r[5]|c->r[5]; // 8017F0F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017F0F4
  c->r[30]=c->r[4]|c->r[4]; // 8017F0F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017F0FC
  c->r[29]=c->r[3]|c->r[3]; // 8017F100
  c->lr=0x8017F108u; f_8018016C(c); // 8017F104
  cmps(c,0,(int32_t)c->r[3],0); // 8017F108
  if (!crb(c,2)) { goto L_8017F118; } // 8017F10C
  c->r[3]=0u+0xFFFFFF80u; // 8017F110
  goto L_8017F150; // 8017F114
L_8017F118:;
  c->r[3]=c->r[29]|c->r[29]; // 8017F118
  c->r[4]=c->r[31]|c->r[31]; // 8017F11C
  c->r[5]=0u+0x00000000u; // 8017F120
  c->r[6]=0u+0x00000000u; // 8017F124
  c->r[7]=0u+0x00000001u; // 8017F128
  c->lr=0x8017F130u; f_8017EF40(c); // 8017F12C
  cmps(c,0,(int32_t)c->r[3],0); // 8017F130
  if (crb(c,0)) { goto L_8017F14C; } // 8017F134
  c->r[0]=0u+0x00000001u; // 8017F138
  W32(c->r[30]+0x00000000u,c->r[3]); // 8017F13C
  c->r[3]=0u+0x00000000u; // 8017F140
  W8(c->r[30]+0x0000008Au,c->r[0]); // 8017F144
  goto L_8017F150; // 8017F148
L_8017F14C:;
  c->lr=0x8017F150u; f_80180184(c); // 8017F14C
L_8017F150:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017F150
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017F154
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017F158
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017F15C
  c->lr=c->r[0]; // 8017F160
  c->r[1]=c->r[1]+0x00000020u; // 8017F164
  return; // 8017F168
}

// NANDOpenAsync
void f_8017F16C(Ctx* __restrict c) {
  trace_call(0x8017F16Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F16C
  c->r[0]=c->lr; // 8017F170
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017F174
  c->r[11]=c->r[1]+0x00000020u; // 8017F178
  c->lr=0x8017F180u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017F17C
  c->r[27]=c->r[3]|c->r[3]; // 8017F180
  c->r[28]=c->r[4]|c->r[4]; // 8017F184
  c->r[29]=c->r[5]|c->r[5]; // 8017F188
  c->r[30]=c->r[6]|c->r[6]; // 8017F18C
  c->r[31]=c->r[7]|c->r[7]; // 8017F190
  c->lr=0x8017F198u; f_8018016C(c); // 8017F194
  cmps(c,0,(int32_t)c->r[3],0); // 8017F198
  if (!crb(c,2)) { goto L_8017F1A8; } // 8017F19C
  c->r[3]=0u+0xFFFFFF80u; // 8017F1A0
  goto L_8017F1CC; // 8017F1A4
L_8017F1A8:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8017F1A8
  c->r[3]=c->r[27]|c->r[27]; // 8017F1AC
  c->r[4]=c->r[29]|c->r[29]; // 8017F1B0
  c->r[5]=c->r[31]|c->r[31]; // 8017F1B4
  W32(c->r[31]+0x00000008u,c->r[28]); // 8017F1B8
  c->r[6]=0u+0x00000001u; // 8017F1BC
  c->r[7]=0u+0x00000000u; // 8017F1C0
  c->lr=0x8017F1C8u; f_8017EF40(c); // 8017F1C4
  c->lr=0x8017F1CCu; f_80180184(c); // 8017F1C8
L_8017F1CC:;
  c->r[11]=c->r[1]+0x00000020u; // 8017F1CC
  c->lr=0x8017F1D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017F1D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017F1D4
  c->lr=c->r[0]; // 8017F1D8
  c->r[1]=c->r[1]+0x00000020u; // 8017F1DC
  return; // 8017F1E0
}

// NANDPrivateOpenAsync
void f_8017F1E4(Ctx* __restrict c) {
  trace_call(0x8017F1E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F1E4
  c->r[0]=c->lr; // 8017F1E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017F1EC
  c->r[11]=c->r[1]+0x00000020u; // 8017F1F0
  c->lr=0x8017F1F8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017F1F4
  c->r[27]=c->r[3]|c->r[3]; // 8017F1F8
  c->r[28]=c->r[4]|c->r[4]; // 8017F1FC
  c->r[29]=c->r[5]|c->r[5]; // 8017F200
  c->r[30]=c->r[6]|c->r[6]; // 8017F204
  c->r[31]=c->r[7]|c->r[7]; // 8017F208
  c->lr=0x8017F210u; f_8018016C(c); // 8017F20C
  cmps(c,0,(int32_t)c->r[3],0); // 8017F210
  if (!crb(c,2)) { goto L_8017F220; } // 8017F214
  c->r[3]=0u+0xFFFFFF80u; // 8017F218
  goto L_8017F244; // 8017F21C
L_8017F220:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8017F220
  c->r[3]=c->r[27]|c->r[27]; // 8017F224
  c->r[4]=c->r[29]|c->r[29]; // 8017F228
  c->r[5]=c->r[31]|c->r[31]; // 8017F22C
  W32(c->r[31]+0x00000008u,c->r[28]); // 8017F230
  c->r[6]=0u+0x00000001u; // 8017F234
  c->r[7]=0u+0x00000001u; // 8017F238
  c->lr=0x8017F240u; f_8017EF40(c); // 8017F23C
  c->lr=0x8017F244u; f_80180184(c); // 8017F240
L_8017F244:;
  c->r[11]=c->r[1]+0x00000020u; // 8017F244
  c->lr=0x8017F24Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017F248
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017F24C
  c->lr=c->r[0]; // 8017F250
  c->r[1]=c->r[1]+0x00000020u; // 8017F254
  return; // 8017F258
}

// nandOpenCallback
void f_8017F25C(Ctx* __restrict c) {
  trace_call(0x8017F25Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F25C
  c->r[0]=c->lr; // 8017F260
  cmps(c,0,(int32_t)c->r[3],0); // 8017F264
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017F268
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017F26C
  c->r[31]=c->r[4]|c->r[4]; // 8017F270
  if (crb(c,0)) { goto L_8017F2AC; } // 8017F274
  c->r[5]=R32(c->r[4]+0x00000008u); // 8017F278
  c->r[6]=0u+0x00000002u; // 8017F27C
  c->r[0]=0u+0x00000001u; // 8017F280
  W32(c->r[5]+0x00000000u,c->r[3]); // 8017F284
  c->r[3]=0u+0x00000000u; // 8017F288
  c->r[5]=R32(c->r[4]+0x00000008u); // 8017F28C
  W8(c->r[5]+0x00000089u,c->r[6]); // 8017F290
  c->r[5]=R32(c->r[4]+0x00000008u); // 8017F294
  W8(c->r[5]+0x0000008Au,c->r[0]); // 8017F298
  c->r[12]=R32(c->r[4]+0x00000004u); // 8017F29C
  c->ctr=c->r[12]; // 8017F2A0
  if (true) { c->lr=0x8017F2A8u; dispatch(c,c->ctr); } // 8017F2A4
  goto L_8017F2C0; // 8017F2A8
L_8017F2AC:;
  c->lr=0x8017F2B0u; f_80180184(c); // 8017F2AC
  c->r[12]=R32(c->r[31]+0x00000004u); // 8017F2B0
  c->r[4]=c->r[31]|c->r[31]; // 8017F2B4
  c->ctr=c->r[12]; // 8017F2B8
  if (true) { c->lr=0x8017F2C0u; dispatch(c,c->ctr); } // 8017F2BC
L_8017F2C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017F2C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017F2C4
  c->lr=c->r[0]; // 8017F2C8
  c->r[1]=c->r[1]+0x00000010u; // 8017F2CC
  return; // 8017F2D0
}

// NANDClose
void f_8017F2D4(Ctx* __restrict c) {
  trace_call(0x8017F2D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F2D4
  c->r[0]=c->lr; // 8017F2D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017F2DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017F2E0
  c->r[31]=c->r[3]|c->r[3]; // 8017F2E4
  c->lr=0x8017F2ECu; f_8018016C(c); // 8017F2E8
  cmps(c,0,(int32_t)c->r[3],0); // 8017F2EC
  if (!crb(c,2)) { goto L_8017F2FC; } // 8017F2F0
  c->r[3]=0u+0xFFFFFF80u; // 8017F2F4
  goto L_8017F32C; // 8017F2F8
L_8017F2FC:;
  c->r[0]=R8(c->r[31]+0x0000008Au); // 8017F2FC
  cmpu(c,0,c->r[0],0x00000001u); // 8017F300
  if (crb(c,2)) { goto L_8017F310; } // 8017F304
  c->r[3]=0u+0xFFFFFFF8u; // 8017F308
  goto L_8017F32C; // 8017F30C
L_8017F310:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8017F310
  c->lr=0x8017F318u; f_80188E4C(c); // 8017F314
  cmps(c,0,(int32_t)c->r[3],0); // 8017F318
  if (!crb(c,2)) { goto L_8017F328; } // 8017F31C
  c->r[0]=0u+0x00000002u; // 8017F320
  W8(c->r[31]+0x0000008Au,c->r[0]); // 8017F324
L_8017F328:;
  c->lr=0x8017F32Cu; f_80180184(c); // 8017F328
L_8017F32C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017F32C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017F330
  c->lr=c->r[0]; // 8017F334
  c->r[1]=c->r[1]+0x00000010u; // 8017F338
  return; // 8017F33C
}

// NANDCloseAsync
void f_8017F340(Ctx* __restrict c) {
  trace_call(0x8017F340u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F340
  c->r[0]=c->lr; // 8017F344
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017F348
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017F34C
  c->r[31]=c->r[5]|c->r[5]; // 8017F350
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017F354
  c->r[30]=c->r[4]|c->r[4]; // 8017F358
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017F35C
  c->r[29]=c->r[3]|c->r[3]; // 8017F360
  c->lr=0x8017F368u; f_8018016C(c); // 8017F364
  cmps(c,0,(int32_t)c->r[3],0); // 8017F368
  if (!crb(c,2)) { goto L_8017F378; } // 8017F36C
  c->r[3]=0u+0xFFFFFF80u; // 8017F370
  goto L_8017F3AC; // 8017F374
L_8017F378:;
  c->r[0]=R8(c->r[29]+0x0000008Au); // 8017F378
  cmpu(c,0,c->r[0],0x00000001u); // 8017F37C
  if (crb(c,2)) { goto L_8017F38C; } // 8017F380
  c->r[3]=0u+0xFFFFFFF8u; // 8017F384
  goto L_8017F3AC; // 8017F388
L_8017F38C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8017F38C
  c->r[4]=0u+0x80180000u; // 8017F390
  c->r[5]=c->r[31]|c->r[31]; // 8017F394
  W32(c->r[31]+0x00000008u,c->r[29]); // 8017F398
  c->r[4]=c->r[4]+0xFFFFFD08u; // 8017F39C
  c->r[3]=R32(c->r[29]+0x00000000u); // 8017F3A0
  c->lr=0x8017F3A8u; f_80188E50(c); // 8017F3A4
  c->lr=0x8017F3ACu; f_80180184(c); // 8017F3A8
L_8017F3AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017F3AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017F3B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017F3B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017F3B8
  c->lr=c->r[0]; // 8017F3BC
  c->r[1]=c->r[1]+0x00000020u; // 8017F3C0
  return; // 8017F3C4
}

// fn_8017F3C8
void f_8017F3C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F3C8
  c->r[0]=c->lr; // 8017F3CC
  c->r[10]=0u+0x00000000u; // 8017F3D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017F3D4
  c->r[0]=0u+0x00000000u; // 8017F3D8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017F3DC
  c->lr=0x8017F3E4u; f_8017F3F4(c); // 8017F3E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017F3E4
  c->lr=c->r[0]; // 8017F3E8
  c->r[1]=c->r[1]+0x00000010u; // 8017F3EC
  return; // 8017F3F0
}

// fn_8017F3F4
void f_8017F3F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F3F4
  c->r[0]=c->lr; // 8017F3F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017F3FC
  c->r[11]=c->r[1]+0x00000030u; // 8017F400
  c->lr=0x8017F408u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017F404
  c->r[31]=R32(c->r[1]+0x00000038u); // 8017F408
  c->r[23]=c->r[3]|c->r[3]; // 8017F40C
  c->r[24]=c->r[4]|c->r[4]; // 8017F410
  c->r[25]=c->r[5]|c->r[5]; // 8017F414
  c->r[26]=c->r[6]|c->r[6]; // 8017F418
  c->r[27]=c->r[7]|c->r[7]; // 8017F41C
  c->r[28]=c->r[8]|c->r[8]; // 8017F420
  c->r[29]=c->r[9]|c->r[9]; // 8017F424
  c->r[30]=c->r[10]|c->r[10]; // 8017F428
  c->lr=0x8017F430u; f_8018016C(c); // 8017F42C
  cmps(c,0,(int32_t)c->r[3],0); // 8017F430
  if (!crb(c,2)) { goto L_8017F440; } // 8017F434
  c->r[3]=0u+0xFFFFFF80u; // 8017F438
  goto L_8017F544; // 8017F43C
L_8017F440:;
  cmps(c,0,(int32_t)c->r[31],0); // 8017F440
  if (crb(c,2)) { goto L_8017F458; } // 8017F444
  c->r[0]=rotl(c->r[27],0)&0x00003FFFu; cr0(c,c->r[0]); // 8017F448
  if (crb(c,2)) { goto L_8017F458; } // 8017F44C
  c->r[3]=0u+0xFFFFFFF8u; // 8017F450
  goto L_8017F544; // 8017F454
L_8017F458:;
  c->r[0]=0u+0x00000000u; // 8017F458
  W8(c->r[24]+0x00000088u,c->r[25]); // 8017F45C
  c->r[4]=c->r[23]|c->r[23]; // 8017F460
  c->r[3]=c->r[24]+0x00000008u; // 8017F464
  W8(c->r[24]+0x00000089u,c->r[0]); // 8017F468
  W32(c->r[29]+0x000000B8u,c->r[31]); // 8017F46C
  c->lr=0x8017F474u; f_801802E4(c); // 8017F470
  cmps(c,0,(int32_t)c->r[30],0); // 8017F474
  if (!crb(c,2)) { goto L_8017F494; } // 8017F478
  c->r[3]=c->r[24]+0x00000008u; // 8017F47C
  c->lr=0x8017F484u; f_801800E0(c); // 8017F480
  cmps(c,0,(int32_t)c->r[3],0); // 8017F484
  if (crb(c,2)) { goto L_8017F494; } // 8017F488
  c->r[3]=0u+0xFFFFFFFFu; // 8017F48C
  goto L_8017F544; // 8017F490
L_8017F494:;
  cmpu(c,0,c->r[25],0x00000001u); // 8017F494
  if (!crb(c,2)) { goto L_8017F4D4; } // 8017F498
  c->r[5]=0u+0x80180000u; // 8017F49C
  W32(c->r[29]+0x00000008u,c->r[24]); // 8017F4A0
  c->r[6]=c->r[29]|c->r[29]; // 8017F4A4
  c->r[3]=c->r[24]+0x00000008u; // 8017F4A8
  W32(c->r[29]+0x00000004u,c->r[28]); // 8017F4AC
  c->r[5]=c->r[5]+0xFFFFF94Cu; // 8017F4B0
  c->r[4]=0u+0x00000001u; // 8017F4B4
  c->lr=0x8017F4BCu; f_80188B7C(c); // 8017F4B8
  cmps(c,0,(int32_t)c->r[3],0); // 8017F4BC
  if (!crb(c,2)) { goto L_8017F4CC; } // 8017F4C0
  c->r[3]=0u+0x00000000u; // 8017F4C4
  goto L_8017F544; // 8017F4C8
L_8017F4CC:;
  c->lr=0x8017F4D0u; f_80180184(c); // 8017F4CC
  goto L_8017F544; // 8017F4D0
L_8017F4D4:;
  c->r[0]=c->r[25]+0x000000FEu; // 8017F4D4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8017F4D8
  cmpu(c,0,c->r[0],0x00000001u); // 8017F4DC
  if (crb(c,1)) { goto L_8017F540; } // 8017F4E0
  c->r[31]=0u+0x00000000u; // 8017F4E4
  c->r[3]=0u+0x802E0000u; // 8017F4E8
  c->r[8]=0u+0x80180000u; // 8017F4EC
  W32(c->r[29]+0x00000008u,c->r[24]); // 8017F4F0
  c->r[9]=c->r[29]|c->r[29]; // 8017F4F4
  c->r[3]=c->r[3]+0xFFFFBE40u; // 8017F4F8
  W32(c->r[29]+0x00000004u,c->r[28]); // 8017F4FC
  c->r[8]=c->r[8]+0xFFFFF55Cu; // 8017F500
  c->r[4]=0u+0x00000000u; // 8017F504
  c->r[5]=0u+0x00000003u; // 8017F508
  W32(c->r[29]+0x0000007Cu,c->r[31]); // 8017F50C
  c->r[6]=0u+0x00000003u; // 8017F510
  c->r[7]=0u+0x00000003u; // 8017F514
  W32(c->r[29]+0x00000080u,c->r[26]); // 8017F518
  W32(c->r[29]+0x00000084u,c->r[27]); // 8017F51C
  c->lr=0x8017F524u; f_80187DC8(c); // 8017F520
  cmps(c,0,(int32_t)c->r[3],0); // 8017F524
  if (!crb(c,2)) { goto L_8017F530; } // 8017F528
  goto L_8017F538; // 8017F52C
L_8017F530:;
  c->lr=0x8017F534u; f_80180184(c); // 8017F530
  c->r[31]=c->r[3]|c->r[3]; // 8017F534
L_8017F538:;
  c->r[3]=c->r[31]|c->r[31]; // 8017F538
  goto L_8017F544; // 8017F53C
L_8017F540:;
  c->r[3]=0u+0xFFFFFFF8u; // 8017F540
L_8017F544:;
  c->r[11]=c->r[1]+0x00000030u; // 8017F544
  c->lr=0x8017F54Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017F548
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017F54C
  c->lr=c->r[0]; // 8017F550
  c->r[1]=c->r[1]+0x00000030u; // 8017F554
  return; // 8017F558
}

// fn_8017F55C
void f_8017F55C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F55C
  c->r[0]=c->lr; // 8017F560
  cmps(c,0,(int32_t)c->r[3],0); // 8017F564
  W32(c->r[1]+0x00000074u,c->r[0]); // 8017F568
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8017F56C
  W32(c->r[1]+0x00000068u,c->r[30]); // 8017F570
  c->r[30]=c->r[4]|c->r[4]; // 8017F574
  if (!crb(c,0)) { goto L_8017F590; } // 8017F578
  cmps(c,0,(int32_t)c->r[3],-105); // 8017F57C
  if (!crb(c,2)) { goto L_8017F920; } // 8017F580
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 8017F584
  cmps(c,0,(int32_t)c->r[0],0); // 8017F588
  if (!crb(c,2)) { goto L_8017F920; } // 8017F58C
L_8017F590:;
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 8017F590
  c->r[6]=0u+0xFFFFFF8Bu; // 8017F594
  c->r[31]=R32(c->r[4]+0x00000008u); // 8017F598
  cmps(c,0,(int32_t)c->r[0],0); // 8017F59C
  if (!crb(c,2)) { goto L_8017F5AC; } // 8017F5A0
  c->r[0]=0u+0x00000001u; // 8017F5A4
  W8(c->r[31]+0x00000089u,c->r[0]); // 8017F5A8
L_8017F5AC:;
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 8017F5AC
  cmps(c,0,(int32_t)c->r[0],2); // 8017F5B0
  if (!crb(c,2)) { goto L_8017F5C4; } // 8017F5B4
  W32(c->r[31]+0x00000004u,c->r[3]); // 8017F5B8
  c->r[0]=0u+0x00000002u; // 8017F5BC
  W8(c->r[31]+0x00000089u,c->r[0]); // 8017F5C0
L_8017F5C4:;
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 8017F5C4
  cmps(c,0,(int32_t)c->r[5],2); // 8017F5C8
  if (!crb(c,2)) { goto L_8017F5E8; } // 8017F5CC
  c->r[0]=R32(c->r[4]+0x000000B8u); // 8017F5D0
  cmps(c,0,(int32_t)c->r[0],0); // 8017F5D4
  if (crb(c,2)) { goto L_8017F5E8; } // 8017F5D8
  c->r[0]=c->r[5]+0x00000002u; // 8017F5DC
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 8017F5E0
  goto L_8017F5F4; // 8017F5E4
L_8017F5E8:;
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 8017F5E8
  c->r[0]=c->r[5]+0x00000001u; // 8017F5EC
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 8017F5F0
L_8017F5F4:;
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 8017F5F4
  cmps(c,0,(int32_t)c->r[0],1); // 8017F5F8
  if (!crb(c,2)) { goto L_8017F634; } // 8017F5FC
  c->r[10]=0u+0x80180000u; // 8017F600
  W32(c->r[1]+0x00000008u,c->r[4]); // 8017F604
  c->r[3]=c->r[31]+0x00000008u; // 8017F608
  c->r[5]=c->r[4]+0x0000001Cu; // 8017F60C
  c->r[6]=c->r[4]+0x00000020u; // 8017F610
  c->r[7]=c->r[4]+0x00000024u; // 8017F614
  c->r[8]=c->r[4]+0x00000028u; // 8017F618
  c->r[9]=c->r[4]+0x0000002Cu; // 8017F61C
  c->r[10]=c->r[10]+0xFFFFF55Cu; // 8017F620
  c->r[4]=c->r[4]+0x00000018u; // 8017F624
  c->lr=0x8017F62Cu; f_801882B0(c); // 8017F628
  c->r[6]=c->r[3]|c->r[3]; // 8017F62C
  goto L_8017F8FC; // 8017F630
L_8017F634:;
  cmps(c,0,(int32_t)c->r[0],2); // 8017F634
  if (!crb(c,2)) { goto L_8017F65C; } // 8017F638
  c->r[5]=0u+0x80180000u; // 8017F63C
  c->r[6]=c->r[30]|c->r[30]; // 8017F640
  c->r[3]=c->r[31]+0x00000008u; // 8017F644
  c->r[4]=0u+0x00000001u; // 8017F648
  c->r[5]=c->r[5]+0xFFFFF55Cu; // 8017F64C
  c->lr=0x8017F654u; f_80188B7C(c); // 8017F650
  c->r[6]=c->r[3]|c->r[3]; // 8017F654
  goto L_8017F8FC; // 8017F658
L_8017F65C:;
  cmps(c,0,(int32_t)c->r[0],3); // 8017F65C
  if (!crb(c,2)) { goto L_8017F6C4; } // 8017F660
  c->lr=0x8017F668u; f_80154410(c); // 8017F664
  c->r[31]=R32(c->r[13]+0xFFFFAF08u); // 8017F668
  c->r[0]=c->r[31]+0x00000001u; // 8017F66C
  W32(c->r[13]+0xFFFFAF08u,c->r[0]); // 8017F670
  c->lr=0x8017F678u; f_80154438(c); // 8017F674
  c->r[5]=0u+0x802E0000u; // 8017F678
  W32(c->r[30]+0x0000008Cu,c->r[31]); // 8017F67C
  c->r[6]=c->r[31]|c->r[31]; // 8017F680
  c->r[3]=c->r[1]+0x00000020u; // 8017F684
  c->r[5]=c->r[5]+0xFFFFBE40u; // 8017F688
  c->r[4]=c->r[13]+0xFFFF9140u; // 8017F68C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017F690
  c->lr=0x8017F698u; f_8025ABC0(c); // 8017F694
  c->r[8]=0u+0x80180000u; // 8017F698
  c->r[9]=c->r[30]|c->r[30]; // 8017F69C
  c->r[3]=c->r[1]+0x00000020u; // 8017F6A0
  c->r[4]=0u+0x00000000u; // 8017F6A4
  c->r[8]=c->r[8]+0xFFFFF55Cu; // 8017F6A8
  c->r[5]=0u+0x00000003u; // 8017F6AC
  c->r[6]=0u+0x00000000u; // 8017F6B0
  c->r[7]=0u+0x00000000u; // 8017F6B4
  c->lr=0x8017F6BCu; f_80187DC8(c); // 8017F6B8
  c->r[6]=c->r[3]|c->r[3]; // 8017F6BC
  goto L_8017F8FC; // 8017F6C0
L_8017F6C4:;
  cmps(c,0,(int32_t)c->r[0],4); // 8017F6C4
  if (!crb(c,2)) { goto L_8017F75C; } // 8017F6C8
  c->r[3]=c->r[1]+0x00000010u; // 8017F6CC
  c->r[4]=c->r[31]+0x00000008u; // 8017F6D0
  c->lr=0x8017F6D8u; f_8017FF0C(c); // 8017F6D4
  c->r[0]=R32(c->r[30]+0x000000B8u); // 8017F6D8
  cmps(c,0,(int32_t)c->r[0],0); // 8017F6DC
  if (!crb(c,2)) { goto L_8017F714; } // 8017F6E0
  c->r[0]=0u+0x00000003u; // 8017F6E4
  c->r[4]=0u+0x802E0000u; // 8017F6E8
  W8(c->r[31]+0x00000089u,c->r[0]); // 8017F6EC
  c->r[5]=0u+0x802E0000u; // 8017F6F0
  c->r[3]=c->r[31]+0x00000048u; // 8017F6F4
  c->r[4]=c->r[4]+0xFFFFBE4Cu; // 8017F6F8
  c->r[6]=R32(c->r[30]+0x0000008Cu); // 8017F6FC
  c->r[5]=c->r[5]+0xFFFFBE40u; // 8017F700
  c->r[7]=c->r[1]+0x00000010u; // 8017F704
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017F708
  c->lr=0x8017F710u; f_8025ABC0(c); // 8017F70C
  goto L_8017F730; // 8017F710
L_8017F714:;
  c->r[5]=0u+0x802E0000u; // 8017F714
  c->r[3]=c->r[31]+0x00000048u; // 8017F718
  c->r[5]=c->r[5]+0xFFFFBE40u; // 8017F71C
  c->r[6]=c->r[1]+0x00000010u; // 8017F720
  c->r[4]=c->r[13]+0xFFFF9148u; // 8017F724
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017F728
  c->lr=0x8017F730u; f_8025ABC0(c); // 8017F72C
L_8017F730:;
  c->r[8]=0u+0x80180000u; // 8017F730
  c->r[4]=R32(c->r[30]+0x00000020u); // 8017F734
  c->r[5]=R32(c->r[30]+0x00000024u); // 8017F738
  c->r[9]=c->r[30]|c->r[30]; // 8017F73C
  c->r[6]=R32(c->r[30]+0x00000028u); // 8017F740
  c->r[3]=c->r[31]+0x00000048u; // 8017F744
  c->r[7]=R32(c->r[30]+0x0000002Cu); // 8017F748
  c->r[8]=c->r[8]+0xFFFFF55Cu; // 8017F74C
  c->lr=0x8017F754u; f_801889C0(c); // 8017F750
  c->r[6]=c->r[3]|c->r[3]; // 8017F754
  goto L_8017F8FC; // 8017F758
L_8017F75C:;
  cmps(c,0,(int32_t)c->r[0],5); // 8017F75C
  if (!crb(c,2)) { goto L_8017F7C8; } // 8017F760
  c->r[0]=0u+0x00000004u; // 8017F764
  W8(c->r[31]+0x00000089u,c->r[0]); // 8017F768
  c->r[0]=R8(c->r[31]+0x00000088u); // 8017F76C
  cmpu(c,0,c->r[0],0x00000002u); // 8017F770
  if (!crb(c,2)) { goto L_8017F798; } // 8017F774
  c->r[5]=0u+0x80180000u; // 8017F778
  c->r[6]=c->r[30]|c->r[30]; // 8017F77C
  c->r[3]=c->r[31]+0x00000048u; // 8017F780
  c->r[4]=0u+0x00000002u; // 8017F784
  c->r[5]=c->r[5]+0xFFFFF55Cu; // 8017F788
  c->lr=0x8017F790u; f_80188B7C(c); // 8017F78C
  c->r[6]=c->r[3]|c->r[3]; // 8017F790
  goto L_8017F8FC; // 8017F794
L_8017F798:;
  cmpu(c,0,c->r[0],0x00000003u); // 8017F798
  if (!crb(c,2)) { goto L_8017F7C0; } // 8017F79C
  c->r[5]=0u+0x80180000u; // 8017F7A0
  c->r[6]=c->r[30]|c->r[30]; // 8017F7A4
  c->r[3]=c->r[31]+0x00000048u; // 8017F7A8
  c->r[4]=0u+0x00000003u; // 8017F7AC
  c->r[5]=c->r[5]+0xFFFFF55Cu; // 8017F7B0
  c->lr=0x8017F7B8u; f_80188B7C(c); // 8017F7B4
  c->r[6]=c->r[3]|c->r[3]; // 8017F7B8
  goto L_8017F8FC; // 8017F7BC
L_8017F7C0:;
  c->r[6]=0u+0xFFFFFF8Bu; // 8017F7C0
  goto L_8017F8FC; // 8017F7C4
L_8017F7C8:;
  cmps(c,0,(int32_t)c->r[0],6); // 8017F7C8
  if (!crb(c,2)) { goto L_8017F808; } // 8017F7CC
  W32(c->r[31]+0x00000000u,c->r[3]); // 8017F7D0
  c->r[3]=0u+0x00000005u; // 8017F7D4
  c->r[6]=0u+0x80180000u; // 8017F7D8
  c->r[0]=0u+0x00000007u; // 8017F7DC
  W8(c->r[31]+0x00000089u,c->r[3]); // 8017F7E0
  c->r[7]=c->r[30]|c->r[30]; // 8017F7E4
  c->r[6]=c->r[6]+0xFFFFF55Cu; // 8017F7E8
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 8017F7EC
  c->r[4]=R32(c->r[4]+0x00000080u); // 8017F7F0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8017F7F4
  c->r[5]=R32(c->r[30]+0x00000084u); // 8017F7F8
  c->lr=0x8017F800u; f_80188CE4(c); // 8017F7FC
  c->r[6]=c->r[3]|c->r[3]; // 8017F800
  goto L_8017F8FC; // 8017F804
L_8017F808:;
  cmps(c,0,(int32_t)c->r[0],7); // 8017F808
  if (!crb(c,2)) { goto L_8017F834; } // 8017F80C
  c->r[6]=0u+0x80180000u; // 8017F810
  c->r[3]=R32(c->r[31]+0x00000004u); // 8017F814
  c->r[4]=R32(c->r[4]+0x00000080u); // 8017F818
  c->r[7]=c->r[30]|c->r[30]; // 8017F81C
  c->r[5]=R32(c->r[30]+0x00000084u); // 8017F820
  c->r[6]=c->r[6]+0xFFFFF55Cu; // 8017F824
  c->lr=0x8017F82Cu; f_80188CE4(c); // 8017F828
  c->r[6]=c->r[3]|c->r[3]; // 8017F82C
  goto L_8017F8FC; // 8017F830
L_8017F834:;
  cmps(c,0,(int32_t)c->r[0],8); // 8017F834
  if (!crb(c,2)) { goto L_8017F898; } // 8017F838
  cmps(c,0,(int32_t)c->r[3],0); // 8017F83C
  if (!crb(c,1)) { goto L_8017F870; } // 8017F840
  c->r[0]=0u+0x00000006u; // 8017F844
  c->r[6]=0u+0x80180000u; // 8017F848
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 8017F84C
  c->r[5]=c->r[3]|c->r[3]; // 8017F850
  c->r[4]=R32(c->r[4]+0x00000080u); // 8017F854
  c->r[7]=c->r[30]|c->r[30]; // 8017F858
  c->r[3]=R32(c->r[31]+0x00000000u); // 8017F85C
  c->r[6]=c->r[6]+0xFFFFF55Cu; // 8017F860
  c->lr=0x8017F868u; f_80188DA8(c); // 8017F864
  c->r[6]=c->r[3]|c->r[3]; // 8017F868
  goto L_8017F8FC; // 8017F86C
L_8017F870:;
  if (!crb(c,2)) { goto L_8017F8FC; } // 8017F870
  c->r[6]=0u+0x80180000u; // 8017F874
  c->r[3]=R32(c->r[31]+0x00000000u); // 8017F878
  c->r[7]=c->r[30]|c->r[30]; // 8017F87C
  c->r[4]=0u+0x00000000u; // 8017F880
  c->r[6]=c->r[6]+0xFFFFF55Cu; // 8017F884
  c->r[5]=0u+0x00000000u; // 8017F888
  c->lr=0x8017F890u; f_80188C38(c); // 8017F88C
  c->r[6]=c->r[3]|c->r[3]; // 8017F890
  goto L_8017F8FC; // 8017F894
L_8017F898:;
  cmps(c,0,(int32_t)c->r[0],9); // 8017F898
  if (!crb(c,2)) { goto L_8017F8FC; } // 8017F89C
  cmps(c,0,(int32_t)c->r[3],0); // 8017F8A0
  if (!crb(c,2)) { goto L_8017F8E4; } // 8017F8A4
  c->r[0]=R32(c->r[4]+0x000000B8u); // 8017F8A8
  cmps(c,0,(int32_t)c->r[0],0); // 8017F8AC
  if (!crb(c,2)) { goto L_8017F8C0; } // 8017F8B0
  c->r[0]=0u+0x00000003u; // 8017F8B4
  W8(c->r[31]+0x0000008Au,c->r[0]); // 8017F8B8
  goto L_8017F8C8; // 8017F8BC
L_8017F8C0:;
  c->r[0]=0u+0x00000005u; // 8017F8C0
  W8(c->r[31]+0x0000008Au,c->r[0]); // 8017F8C4
L_8017F8C8:;
  c->r[3]=0u+0x00000000u; // 8017F8C8
  c->lr=0x8017F8D0u; f_80180184(c); // 8017F8CC
  c->r[12]=R32(c->r[30]+0x00000004u); // 8017F8D0
  c->r[4]=c->r[30]|c->r[30]; // 8017F8D4
  c->ctr=c->r[12]; // 8017F8D8
  if (true) { c->lr=0x8017F8E0u; dispatch(c,c->ctr); } // 8017F8DC
  goto L_8017F934; // 8017F8E0
L_8017F8E4:;
  c->lr=0x8017F8E8u; f_80180184(c); // 8017F8E4
  c->r[12]=R32(c->r[30]+0x00000004u); // 8017F8E8
  c->r[4]=c->r[30]|c->r[30]; // 8017F8EC
  c->ctr=c->r[12]; // 8017F8F0
  if (true) { c->lr=0x8017F8F8u; dispatch(c,c->ctr); } // 8017F8F4
  goto L_8017F934; // 8017F8F8
L_8017F8FC:;
  cmps(c,0,(int32_t)c->r[6],0); // 8017F8FC
  if (crb(c,2)) { goto L_8017F934; } // 8017F900
  c->r[3]=c->r[6]|c->r[6]; // 8017F904
  c->lr=0x8017F90Cu; f_80180184(c); // 8017F908
  c->r[12]=R32(c->r[30]+0x00000004u); // 8017F90C
  c->r[4]=c->r[30]|c->r[30]; // 8017F910
  c->ctr=c->r[12]; // 8017F914
  if (true) { c->lr=0x8017F91Cu; dispatch(c,c->ctr); } // 8017F918
  goto L_8017F934; // 8017F91C
L_8017F920:;
  c->lr=0x8017F924u; f_80180184(c); // 8017F920
  c->r[12]=R32(c->r[30]+0x00000004u); // 8017F924
  c->r[4]=c->r[30]|c->r[30]; // 8017F928
  c->ctr=c->r[12]; // 8017F92C
  if (true) { c->lr=0x8017F934u; dispatch(c,c->ctr); } // 8017F930
L_8017F934:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 8017F934
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8017F938
  c->r[30]=R32(c->r[1]+0x00000068u); // 8017F93C
  c->lr=c->r[0]; // 8017F940
  c->r[1]=c->r[1]+0x00000070u; // 8017F944
  return; // 8017F948
}

// fn_8017F94C
void f_8017F94C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F94C
  c->r[0]=c->lr; // 8017F950
  cmps(c,0,(int32_t)c->r[3],0); // 8017F954
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017F958
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017F95C
  c->r[31]=c->r[4]|c->r[4]; // 8017F960
  if (crb(c,0)) { goto L_8017F9BC; } // 8017F964
  c->r[5]=R32(c->r[4]+0x00000008u); // 8017F968
  c->r[0]=0u+0x00000002u; // 8017F96C
  W32(c->r[5]+0x00000000u,c->r[3]); // 8017F970
  c->r[3]=R32(c->r[4]+0x00000008u); // 8017F974
  W8(c->r[3]+0x00000089u,c->r[0]); // 8017F978
  c->r[0]=R32(c->r[4]+0x000000B8u); // 8017F97C
  cmps(c,0,(int32_t)c->r[0],0); // 8017F980
  if (!crb(c,2)) { goto L_8017F998; } // 8017F984
  c->r[3]=R32(c->r[4]+0x00000008u); // 8017F988
  c->r[0]=0u+0x00000003u; // 8017F98C
  W8(c->r[3]+0x0000008Au,c->r[0]); // 8017F990
  goto L_8017F9A4; // 8017F994
L_8017F998:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 8017F998
  c->r[0]=0u+0x00000005u; // 8017F99C
  W8(c->r[3]+0x0000008Au,c->r[0]); // 8017F9A0
L_8017F9A4:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 8017F9A4
  c->r[4]=c->r[31]|c->r[31]; // 8017F9A8
  c->r[3]=0u+0x00000000u; // 8017F9AC
  c->ctr=c->r[12]; // 8017F9B0
  if (true) { c->lr=0x8017F9B8u; dispatch(c,c->ctr); } // 8017F9B4
  goto L_8017F9D0; // 8017F9B8
L_8017F9BC:;
  c->lr=0x8017F9C0u; f_80180184(c); // 8017F9BC
  c->r[12]=R32(c->r[31]+0x00000004u); // 8017F9C0
  c->r[4]=c->r[31]|c->r[31]; // 8017F9C4
  c->ctr=c->r[12]; // 8017F9C8
  if (true) { c->lr=0x8017F9D0u; dispatch(c,c->ctr); } // 8017F9CC
L_8017F9D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017F9D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017F9D4
  c->lr=c->r[0]; // 8017F9D8
  c->r[1]=c->r[1]+0x00000010u; // 8017F9DC
  return; // 8017F9E0
}

// fn_8017F9E4
void f_8017F9E4(Ctx* __restrict c) {
  c->r[6]=0u+0x00000000u; // 8017F9E4
  f_8017F9EC(c); return; // 8017F9E8
}

// fn_8017F9EC
void f_8017F9EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F9EC
  c->r[0]=c->lr; // 8017F9F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017F9F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017F9F8
  c->r[31]=c->r[6]|c->r[6]; // 8017F9FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017FA00
  c->r[30]=c->r[5]|c->r[5]; // 8017FA04
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017FA08
  c->r[29]=c->r[4]|c->r[4]; // 8017FA0C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8017FA10
  c->r[28]=c->r[3]|c->r[3]; // 8017FA14
  c->lr=0x8017FA1Cu; f_8018016C(c); // 8017FA18
  cmps(c,0,(int32_t)c->r[3],0); // 8017FA1C
  if (!crb(c,2)) { goto L_8017FA2C; } // 8017FA20
  c->r[3]=0u+0xFFFFFF80u; // 8017FA24
  goto L_8017FAC8; // 8017FA28
L_8017FA2C:;
  c->r[0]=R8(c->r[28]+0x0000008Au); // 8017FA2C
  cmpu(c,0,c->r[0],0x00000003u); // 8017FA30
  if (!crb(c,2)) { goto L_8017FA40; } // 8017FA34
  cmps(c,0,(int32_t)c->r[31],0); // 8017FA38
  if (crb(c,2)) { goto L_8017FA58; } // 8017FA3C
L_8017FA40:;
  cmpu(c,0,c->r[0],0x00000005u); // 8017FA40
  if (!crb(c,2)) { goto L_8017FA50; } // 8017FA44
  cmps(c,0,(int32_t)c->r[31],0); // 8017FA48
  if (!crb(c,2)) { goto L_8017FA58; } // 8017FA4C
L_8017FA50:;
  c->r[3]=0u+0xFFFFFFF8u; // 8017FA50
  goto L_8017FAC8; // 8017FA54
L_8017FA58:;
  W32(c->r[30]+0x000000B8u,c->r[31]); // 8017FA58
  c->r[3]=R8(c->r[28]+0x00000088u); // 8017FA5C
  cmpu(c,0,c->r[3],0x00000001u); // 8017FA60
  if (!crb(c,2)) { goto L_8017FA88; } // 8017FA64
  W32(c->r[30]+0x00000008u,c->r[28]); // 8017FA68
  c->r[4]=0u+0x80180000u; // 8017FA6C
  c->r[5]=c->r[30]|c->r[30]; // 8017FA70
  W32(c->r[30]+0x00000004u,c->r[29]); // 8017FA74
  c->r[4]=c->r[4]+0xFFFFFCACu; // 8017FA78
  c->r[3]=R32(c->r[28]+0x00000000u); // 8017FA7C
  c->lr=0x8017FA84u; f_80188E50(c); // 8017FA80
  goto L_8017FAC4; // 8017FA84
L_8017FA88:;
  c->r[0]=c->r[3]+0x000000FEu; // 8017FA88
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8017FA8C
  cmpu(c,0,c->r[0],0x00000001u); // 8017FA90
  if (crb(c,1)) { goto L_8017FAC0; } // 8017FA94
  c->r[0]=0u+0x0000000Au; // 8017FA98
  c->r[4]=0u+0x80180000u; // 8017FA9C
  W32(c->r[30]+0x00000008u,c->r[28]); // 8017FAA0
  c->r[5]=c->r[30]|c->r[30]; // 8017FAA4
  c->r[4]=c->r[4]+0xFFFFFAE8u; // 8017FAA8
  W32(c->r[30]+0x00000004u,c->r[29]); // 8017FAAC
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 8017FAB0
  c->r[3]=R32(c->r[28]+0x00000000u); // 8017FAB4
  c->lr=0x8017FABCu; f_80188E50(c); // 8017FAB8
  goto L_8017FAC4; // 8017FABC
L_8017FAC0:;
  c->r[3]=0u+0xFFFFFF9Bu; // 8017FAC0
L_8017FAC4:;
  c->lr=0x8017FAC8u; f_80180184(c); // 8017FAC4
L_8017FAC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017FAC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017FACC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017FAD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017FAD4
  c->r[28]=R32(c->r[1]+0x00000010u); // 8017FAD8
  c->lr=c->r[0]; // 8017FADC
  c->r[1]=c->r[1]+0x00000020u; // 8017FAE0
  return; // 8017FAE4
}

// fn_8017FAE8
void f_8017FAE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017FAE8
  c->r[0]=c->lr; // 8017FAEC
  cmps(c,0,(int32_t)c->r[3],0); // 8017FAF0
  W32(c->r[1]+0x00000054u,c->r[0]); // 8017FAF4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8017FAF8
  c->r[31]=c->r[4]|c->r[4]; // 8017FAFC
  if (!crb(c,2)) { goto L_8017FC84; } // 8017FB00
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 8017FB04
  c->r[6]=0u+0xFFFFFF8Bu; // 8017FB08
  c->r[7]=R32(c->r[4]+0x00000008u); // 8017FB0C
  cmps(c,0,(int32_t)c->r[0],12); // 8017FB10
  if (!crb(c,2)) { goto L_8017FB20; } // 8017FB14
  c->r[0]=0u+0x00000008u; // 8017FB18
  W8(c->r[7]+0x00000089u,c->r[0]); // 8017FB1C
L_8017FB20:;
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 8017FB20
  cmps(c,0,(int32_t)c->r[5],12); // 8017FB24
  if (!crb(c,2)) { goto L_8017FB44; } // 8017FB28
  c->r[0]=R32(c->r[4]+0x000000B8u); // 8017FB2C
  cmps(c,0,(int32_t)c->r[0],0); // 8017FB30
  if (crb(c,2)) { goto L_8017FB44; } // 8017FB34
  c->r[0]=c->r[5]+0x00000002u; // 8017FB38
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 8017FB3C
  goto L_8017FB50; // 8017FB40
L_8017FB44:;
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 8017FB44
  c->r[0]=c->r[5]+0x00000001u; // 8017FB48
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 8017FB4C
L_8017FB50:;
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 8017FB50
  cmps(c,0,(int32_t)c->r[0],11); // 8017FB54
  if (!crb(c,2)) { goto L_8017FB80; } // 8017FB58
  c->r[0]=0u+0x00000006u; // 8017FB5C
  c->r[4]=0u+0x80180000u; // 8017FB60
  W8(c->r[7]+0x00000089u,c->r[0]); // 8017FB64
  c->r[5]=c->r[31]|c->r[31]; // 8017FB68
  c->r[4]=c->r[4]+0xFFFFFAE8u; // 8017FB6C
  c->r[3]=R32(c->r[7]+0x00000004u); // 8017FB70
  c->lr=0x8017FB78u; f_80188E50(c); // 8017FB74
  c->r[6]=c->r[3]|c->r[3]; // 8017FB78
  goto L_8017FC60; // 8017FB7C
L_8017FB80:;
  cmps(c,0,(int32_t)c->r[0],12); // 8017FB80
  if (!crb(c,2)) { goto L_8017FBB0; } // 8017FB84
  c->r[0]=0u+0x00000007u; // 8017FB88
  c->r[5]=0u+0x80180000u; // 8017FB8C
  W8(c->r[7]+0x00000089u,c->r[0]); // 8017FB90
  c->r[6]=c->r[31]|c->r[31]; // 8017FB94
  c->r[3]=c->r[7]+0x00000048u; // 8017FB98
  c->r[4]=c->r[7]+0x00000008u; // 8017FB9C
  c->r[5]=c->r[5]+0xFFFFFAE8u; // 8017FBA0
  c->lr=0x8017FBA8u; f_80188690(c); // 8017FBA4
  c->r[6]=c->r[3]|c->r[3]; // 8017FBA8
  goto L_8017FC60; // 8017FBAC
L_8017FBB0:;
  cmps(c,0,(int32_t)c->r[0],13); // 8017FBB0
  if (!crb(c,2)) { goto L_8017FC24; } // 8017FBB4
  c->r[0]=0u+0x00000000u; // 8017FBB8
  c->r[3]=c->r[1]+0x00000008u; // 8017FBBC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017FBC0
  c->r[4]=c->r[7]+0x00000048u; // 8017FBC4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017FBC8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017FBCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017FBD0
  W32(c->r[1]+0x00000018u,c->r[0]); // 8017FBD4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017FBD8
  W32(c->r[1]+0x00000020u,c->r[0]); // 8017FBDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017FBE0
  W32(c->r[1]+0x00000028u,c->r[0]); // 8017FBE4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8017FBE8
  W32(c->r[1]+0x00000030u,c->r[0]); // 8017FBEC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017FBF0
  W32(c->r[1]+0x00000038u,c->r[0]); // 8017FBF4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8017FBF8
  W32(c->r[1]+0x00000040u,c->r[0]); // 8017FBFC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8017FC00
  c->lr=0x8017FC08u; f_801803AC(c); // 8017FC04
  c->r[4]=0u+0x80180000u; // 8017FC08
  c->r[5]=c->r[31]|c->r[31]; // 8017FC0C
  c->r[3]=c->r[1]+0x00000008u; // 8017FC10
  c->r[4]=c->r[4]+0xFFFFFAE8u; // 8017FC14
  c->lr=0x8017FC1Cu; f_801884BC(c); // 8017FC18
  c->r[6]=c->r[3]|c->r[3]; // 8017FC1C
  goto L_8017FC60; // 8017FC20
L_8017FC24:;
  cmps(c,0,(int32_t)c->r[0],14); // 8017FC24
  if (!crb(c,2)) { goto L_8017FC60; } // 8017FC28
  c->r[0]=R32(c->r[4]+0x000000B8u); // 8017FC2C
  cmps(c,0,(int32_t)c->r[0],0); // 8017FC30
  if (!crb(c,2)) { goto L_8017FC40; } // 8017FC34
  c->r[0]=0u+0x00000009u; // 8017FC38
  W8(c->r[7]+0x00000089u,c->r[0]); // 8017FC3C
L_8017FC40:;
  c->r[0]=0u+0x00000004u; // 8017FC40
  W8(c->r[7]+0x0000008Au,c->r[0]); // 8017FC44
  c->lr=0x8017FC4Cu; f_80180184(c); // 8017FC48
  c->r[12]=R32(c->r[31]+0x00000004u); // 8017FC4C
  c->r[4]=c->r[31]|c->r[31]; // 8017FC50
  c->ctr=c->r[12]; // 8017FC54
  if (true) { c->lr=0x8017FC5Cu; dispatch(c,c->ctr); } // 8017FC58
  goto L_8017FC98; // 8017FC5C
L_8017FC60:;
  cmps(c,0,(int32_t)c->r[6],0); // 8017FC60
  if (crb(c,2)) { goto L_8017FC98; } // 8017FC64
  c->r[3]=c->r[6]|c->r[6]; // 8017FC68
  c->lr=0x8017FC70u; f_80180184(c); // 8017FC6C
  c->r[12]=R32(c->r[31]+0x00000004u); // 8017FC70
  c->r[4]=c->r[31]|c->r[31]; // 8017FC74
  c->ctr=c->r[12]; // 8017FC78
  if (true) { c->lr=0x8017FC80u; dispatch(c,c->ctr); } // 8017FC7C
  goto L_8017FC98; // 8017FC80
L_8017FC84:;
  c->lr=0x8017FC88u; f_80180184(c); // 8017FC84
  c->r[12]=R32(c->r[31]+0x00000004u); // 8017FC88
  c->r[4]=c->r[31]|c->r[31]; // 8017FC8C
  c->ctr=c->r[12]; // 8017FC90
  if (true) { c->lr=0x8017FC98u; dispatch(c,c->ctr); } // 8017FC94
L_8017FC98:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8017FC98
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8017FC9C
  c->lr=c->r[0]; // 8017FCA0
  c->r[1]=c->r[1]+0x00000050u; // 8017FCA4
  return; // 8017FCA8
}

// fn_8017FCAC
void f_8017FCAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017FCAC
  c->r[0]=c->lr; // 8017FCB0
  cmps(c,0,(int32_t)c->r[3],0); // 8017FCB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017FCB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017FCBC
  c->r[31]=c->r[4]|c->r[4]; // 8017FCC0
  if (!crb(c,2)) { goto L_8017FCE0; } // 8017FCC4
  c->r[5]=R32(c->r[4]+0x00000008u); // 8017FCC8
  c->r[6]=0u+0x00000007u; // 8017FCCC
  c->r[0]=0u+0x00000004u; // 8017FCD0
  W8(c->r[5]+0x00000089u,c->r[6]); // 8017FCD4
  c->r[4]=R32(c->r[4]+0x00000008u); // 8017FCD8
  W8(c->r[4]+0x0000008Au,c->r[0]); // 8017FCDC
L_8017FCE0:;
  c->lr=0x8017FCE4u; f_80180184(c); // 8017FCE0
  c->r[12]=R32(c->r[31]+0x00000004u); // 8017FCE4
  c->r[4]=c->r[31]|c->r[31]; // 8017FCE8
  c->ctr=c->r[12]; // 8017FCEC
  if (true) { c->lr=0x8017FCF4u; dispatch(c,c->ctr); } // 8017FCF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017FCF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017FCF8
  c->lr=c->r[0]; // 8017FCFC
  c->r[1]=c->r[1]+0x00000010u; // 8017FD00
  return; // 8017FD04
}

// fn_8017FD08
void f_8017FD08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017FD08
  c->r[0]=c->lr; // 8017FD0C
  cmps(c,0,(int32_t)c->r[3],0); // 8017FD10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017FD14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017FD18
  c->r[31]=c->r[4]|c->r[4]; // 8017FD1C
  if (!crb(c,2)) { goto L_8017FD3C; } // 8017FD20
  c->r[5]=R32(c->r[4]+0x00000008u); // 8017FD24
  c->r[6]=0u+0x00000007u; // 8017FD28
  c->r[0]=0u+0x00000002u; // 8017FD2C
  W8(c->r[5]+0x00000089u,c->r[6]); // 8017FD30
  c->r[4]=R32(c->r[4]+0x00000008u); // 8017FD34
  W8(c->r[4]+0x0000008Au,c->r[0]); // 8017FD38
L_8017FD3C:;
  c->lr=0x8017FD40u; f_80180184(c); // 8017FD3C
  c->r[12]=R32(c->r[31]+0x00000004u); // 8017FD40
  c->r[4]=c->r[31]|c->r[31]; // 8017FD44
  c->ctr=c->r[12]; // 8017FD48
  if (true) { c->lr=0x8017FD50u; dispatch(c,c->ctr); } // 8017FD4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017FD50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017FD54
  c->lr=c->r[0]; // 8017FD58
  c->r[1]=c->r[1]+0x00000010u; // 8017FD5C
  return; // 8017FD60
}

// nandRemoveTailToken
void f_8017FD64(Ctx* __restrict c) {
  trace_call(0x8017FD64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017FD64
  c->r[0]=c->lr; // 8017FD68
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017FD6C
  c->r[0]=R8(c->r[4]+0x00000000u); // 8017FD70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017FD74
  cmps(c,0,(int32_t)c->r[0],47); // 8017FD78
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017FD7C
  c->r[30]=c->r[4]|c->r[4]; // 8017FD80
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017FD84
  c->r[29]=c->r[3]|c->r[3]; // 8017FD88
  if (!crb(c,2)) { goto L_8017FDB0; } // 8017FD8C
  c->r[0]=R8(c->r[4]+0x00000001u); // 8017FD90
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017FD94
  if (!crb(c,2)) { goto L_8017FDB0; } // 8017FD98
  c->r[4]=0u+0x0000002Fu; // 8017FD9C
  c->r[0]=0u+0x00000000u; // 8017FDA0
  W8(c->r[3]+0x00000000u,c->r[4]); // 8017FDA4
  W8(c->r[3]+0x00000001u,c->r[0]); // 8017FDA8
  goto L_8017FE1C; // 8017FDAC
L_8017FDB0:;
  c->r[3]=c->r[30]|c->r[30]; // 8017FDB0
  c->lr=0x8017FDB8u; f_80252384(c); // 8017FDB4
  c->r[31]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[31]); // 8017FDB8
  c->r[0]=c->r[31]+0x00000001u; // 8017FDBC
  c->r[3]=c->r[30]+c->r[31]; // 8017FDC0
  c->ctr=c->r[0]; // 8017FDC4
  if (crb(c,0)) { goto L_8017FE1C; } // 8017FDC8
L_8017FDCC:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8017FDCC
  cmps(c,0,(int32_t)c->r[0],47); // 8017FDD0
  if (!crb(c,2)) { goto L_8017FE10; } // 8017FDD4
  cmps(c,0,(int32_t)c->r[31],0); // 8017FDD8
  if (crb(c,2)) { goto L_8017FDFC; } // 8017FDDC
  c->r[3]=c->r[29]|c->r[29]; // 8017FDE0
  c->r[4]=c->r[30]|c->r[30]; // 8017FDE4
  c->r[5]=c->r[31]|c->r[31]; // 8017FDE8
  c->lr=0x8017FDF0u; f_8025C504(c); // 8017FDEC
  c->r[0]=0u+0x00000000u; // 8017FDF0
  W8(c->r[29]+c->r[31],c->r[0]); // 8017FDF4
  goto L_8017FE1C; // 8017FDF8
L_8017FDFC:;
  c->r[3]=0u+0x0000002Fu; // 8017FDFC
  c->r[0]=0u+0x00000000u; // 8017FE00
  W8(c->r[29]+0x00000000u,c->r[3]); // 8017FE04
  W8(c->r[29]+0x00000001u,c->r[0]); // 8017FE08
  goto L_8017FE1C; // 8017FE0C
L_8017FE10:;
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 8017FE10
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8017FE14
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017FDCC; } // 8017FE18
L_8017FE1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017FE1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017FE20
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017FE24
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017FE28
  c->lr=c->r[0]; // 8017FE2C
  c->r[1]=c->r[1]+0x00000020u; // 8017FE30
  return; // 8017FE34
}

// nandGetHeadToken
void f_8017FE38(Ctx* __restrict c) {
  trace_call(0x8017FE38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017FE38
  c->r[0]=c->lr; // 8017FE3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017FE40
  c->r[11]=c->r[1]+0x00000020u; // 8017FE44
  c->lr=0x8017FE4Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017FE48
  c->r[27]=c->r[3]|c->r[3]; // 8017FE4C
  c->r[28]=c->r[4]|c->r[4]; // 8017FE50
  c->r[29]=c->r[5]|c->r[5]; // 8017FE54
  c->r[31]=c->r[5]|c->r[5]; // 8017FE58
  c->r[30]=0u+0x00000000u; // 8017FE5C
  goto L_8017FEE4; // 8017FE60
L_8017FE64:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 8017FE64
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8017FE68
  cmps(c,0,(int32_t)c->r[0],47); // 8017FE6C
  if (!crb(c,2)) { goto L_8017FEB4; } // 8017FE70
  c->r[3]=c->r[27]|c->r[27]; // 8017FE74
  c->r[4]=c->r[29]|c->r[29]; // 8017FE78
  c->r[5]=c->r[30]|c->r[30]; // 8017FE7C
  c->lr=0x8017FE84u; f_8025C504(c); // 8017FE80
  c->r[4]=c->r[30]+c->r[29]; // 8017FE84
  c->r[3]=0u+0x00000000u; // 8017FE88
  c->r[0]=R8(c->r[4]+0x00000001u); // 8017FE8C
  W8(c->r[27]+c->r[30],c->r[3]); // 8017FE90
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8017FE94
  if (!crb(c,2)) { goto L_8017FEA4; } // 8017FE98
  W8(c->r[28]+0x00000000u,c->r[3]); // 8017FE9C
  goto L_8017FEF4; // 8017FEA0
L_8017FEA4:;
  c->r[3]=c->r[28]|c->r[28]; // 8017FEA4
  c->r[4]=c->r[4]+0x00000001u; // 8017FEA8
  c->lr=0x8017FEB0u; f_8025C444(c); // 8017FEAC
  goto L_8017FEF4; // 8017FEB0
L_8017FEB4:;
  cmps(c,0,(int32_t)c->r[0],0); // 8017FEB4
  if (!crb(c,2)) { goto L_8017FEDC; } // 8017FEB8
  c->r[3]=c->r[27]|c->r[27]; // 8017FEBC
  c->r[4]=c->r[29]|c->r[29]; // 8017FEC0
  c->r[5]=c->r[30]|c->r[30]; // 8017FEC4
  c->lr=0x8017FECCu; f_8025C504(c); // 8017FEC8
  c->r[0]=0u+0x00000000u; // 8017FECC
  W8(c->r[27]+c->r[30],c->r[0]); // 8017FED0
  W8(c->r[28]+0x00000000u,c->r[0]); // 8017FED4
  goto L_8017FEF4; // 8017FED8
L_8017FEDC:;
  c->r[30]=c->r[30]+0x00000001u; // 8017FEDC
  c->r[31]=c->r[31]+0x00000001u; // 8017FEE0
L_8017FEE4:;
  c->r[3]=c->r[29]|c->r[29]; // 8017FEE4
  c->lr=0x8017FEECu; f_80252384(c); // 8017FEE8
  cmpu(c,0,c->r[30],c->r[3]); // 8017FEEC
  if (!crb(c,1)) { IRQCHK(c); goto L_8017FE64; } // 8017FEF0
L_8017FEF4:;
  c->r[11]=c->r[1]+0x00000020u; // 8017FEF4
  c->lr=0x8017FEFCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017FEF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017FEFC
  c->lr=c->r[0]; // 8017FF00
  c->r[1]=c->r[1]+0x00000020u; // 8017FF04
  return; // 8017FF08
}

// nandGetRelativeName
void f_8017FF0C(Ctx* __restrict c) {
  trace_call(0x8017FF0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017FF0C
  c->r[0]=c->lr; // 8017FF10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017FF14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017FF18
  c->r[31]=c->r[4]|c->r[4]; // 8017FF1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017FF20
  c->r[30]=c->r[3]|c->r[3]; // 8017FF24
  c->r[3]=c->r[13]+0xFFFF9154u; // 8017FF28
  c->lr=0x8017FF30u; f_8025C5C0(c); // 8017FF2C
  cmps(c,0,(int32_t)c->r[3],0); // 8017FF30
  if (!crb(c,2)) { goto L_8017FF48; } // 8017FF34
  c->r[3]=c->r[30]|c->r[30]; // 8017FF38
  c->r[4]=c->r[13]+0xFFFF9158u; // 8017FF3C
  c->lr=0x8017FF44u; f_8025C444(c); // 8017FF40
  goto L_8017FF8C; // 8017FF44
L_8017FF48:;
  c->r[3]=c->r[31]|c->r[31]; // 8017FF48
  c->lr=0x8017FF50u; f_80252384(c); // 8017FF4C
  c->r[4]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 8017FF50
  c->r[0]=c->r[4]+0x00000001u; // 8017FF54
  c->r[3]=c->r[31]+c->r[4]; // 8017FF58
  c->ctr=c->r[0]; // 8017FF5C
  if (crb(c,0)) { goto L_8017FF7C; } // 8017FF60
L_8017FF64:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8017FF64
  cmps(c,0,(int32_t)c->r[0],47); // 8017FF68
  if (crb(c,2)) { goto L_8017FF7C; } // 8017FF6C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8017FF70
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8017FF74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017FF64; } // 8017FF78
L_8017FF7C:;
  c->r[4]=c->r[31]+c->r[4]; // 8017FF7C
  c->r[3]=c->r[30]|c->r[30]; // 8017FF80
  c->r[4]=c->r[4]+0x00000001u; // 8017FF84
  c->lr=0x8017FF8Cu; f_8025C444(c); // 8017FF88
L_8017FF8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017FF8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017FF90
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017FF94
  c->lr=c->r[0]; // 8017FF98
  c->r[1]=c->r[1]+0x00000010u; // 8017FF9C
  return; // 8017FFA0
}

// nandConvertPath
void f_8017FFA4(Ctx* __restrict c) {
  trace_call(0x8017FFA4u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017FFA4
  c->r[0]=c->lr; // 8017FFA8
  W32(c->r[1]+0x00000224u,c->r[0]); // 8017FFAC
  W32(c->r[1]+0x0000021Cu,c->r[31]); // 8017FFB0
  c->r[31]=c->r[5]|c->r[5]; // 8017FFB4
  W32(c->r[1]+0x00000218u,c->r[30]); // 8017FFB8
  c->r[30]=c->r[4]|c->r[4]; // 8017FFBC
  W32(c->r[1]+0x00000214u,c->r[29]); // 8017FFC0
  c->r[29]=c->r[3]|c->r[3]; // 8017FFC4
  c->r[3]=c->r[31]|c->r[31]; // 8017FFC8
  c->lr=0x8017FFD0u; f_80252384(c); // 8017FFCC
  cmps(c,0,(int32_t)c->r[3],0); // 8017FFD0
  if (!crb(c,2)) { goto L_8017FFE8; } // 8017FFD4
  c->r[3]=c->r[29]|c->r[29]; // 8017FFD8
  c->r[4]=c->r[30]|c->r[30]; // 8017FFDC
  c->lr=0x8017FFE4u; f_8025C444(c); // 8017FFE0
  goto L_801800C4; // 8017FFE4
L_8017FFE8:;
  c->r[5]=c->r[31]|c->r[31]; // 8017FFE8
  c->r[3]=c->r[1]+0x00000188u; // 8017FFEC
  c->r[4]=c->r[1]+0x00000108u; // 8017FFF0
  c->lr=0x8017FFF8u; f_8017FE38(c); // 8017FFF4
  c->r[3]=c->r[1]+0x00000188u; // 8017FFF8
  c->r[4]=c->r[13]+0xFFFF915Cu; // 8017FFFC
  c->lr=0x80180004u; f_8025C5C0(c); // 80180000
  cmps(c,0,(int32_t)c->r[3],0); // 80180004
  if (!crb(c,2)) { goto L_80180020; } // 80180008
  c->r[3]=c->r[29]|c->r[29]; // 8018000C
  c->r[4]=c->r[30]|c->r[30]; // 80180010
  c->r[5]=c->r[1]+0x00000108u; // 80180014
  c->lr=0x8018001Cu; f_8017FFA4(c); // 80180018
  goto L_801800C4; // 8018001C
L_80180020:;
  c->r[3]=c->r[1]+0x00000188u; // 80180020
  c->r[4]=c->r[13]+0xFFFF9160u; // 80180024
  c->lr=0x8018002Cu; f_8025C5C0(c); // 80180028
  cmps(c,0,(int32_t)c->r[3],0); // 8018002C
  if (!crb(c,2)) { goto L_80180054; } // 80180030
  c->r[4]=c->r[30]|c->r[30]; // 80180034
  c->r[3]=c->r[1]+0x00000088u; // 80180038
  c->lr=0x80180040u; f_8017FD64(c); // 8018003C
  c->r[3]=c->r[29]|c->r[29]; // 80180040
  c->r[4]=c->r[1]+0x00000088u; // 80180044
  c->r[5]=c->r[1]+0x00000108u; // 80180048
  c->lr=0x80180050u; f_8017FFA4(c); // 8018004C
  goto L_801800C4; // 80180050
L_80180054:;
  c->r[0]=R8(c->r[1]+0x00000188u); // 80180054
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80180058
  if (crb(c,2)) { goto L_801800B8; } // 8018005C
  c->r[3]=c->r[30]|c->r[30]; // 80180060
  c->r[4]=c->r[13]+0xFFFF9154u; // 80180064
  c->lr=0x8018006Cu; f_8025C5C0(c); // 80180068
  cmps(c,0,(int32_t)c->r[3],0); // 8018006C
  if (!crb(c,2)) { goto L_8018008C; } // 80180070
  c->r[3]=c->r[1]+0x00000008u; // 80180074
  c->r[5]=c->r[1]+0x00000188u; // 80180078
  c->r[4]=c->r[13]+0xFFFF9164u; // 8018007C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80180080
  c->lr=0x80180088u; f_8025ABC0(c); // 80180084
  goto L_801800A4; // 80180088
L_8018008C:;
  c->r[5]=c->r[30]|c->r[30]; // 8018008C
  c->r[3]=c->r[1]+0x00000008u; // 80180090
  c->r[6]=c->r[1]+0x00000188u; // 80180094
  c->r[4]=c->r[13]+0xFFFF9168u; // 80180098
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018009C
  c->lr=0x801800A4u; f_8025ABC0(c); // 801800A0
L_801800A4:;
  c->r[3]=c->r[29]|c->r[29]; // 801800A4
  c->r[4]=c->r[1]+0x00000008u; // 801800A8
  c->r[5]=c->r[1]+0x00000108u; // 801800AC
  c->lr=0x801800B4u; f_8017FFA4(c); // 801800B0
  goto L_801800C4; // 801800B4
L_801800B8:;
  c->r[3]=c->r[29]|c->r[29]; // 801800B8
  c->r[4]=c->r[30]|c->r[30]; // 801800BC
  c->lr=0x801800C4u; f_8025C444(c); // 801800C0
L_801800C4:;
  c->r[0]=R32(c->r[1]+0x00000224u); // 801800C4
  c->r[31]=R32(c->r[1]+0x0000021Cu); // 801800C8
  c->r[30]=R32(c->r[1]+0x00000218u); // 801800CC
  c->r[29]=R32(c->r[1]+0x00000214u); // 801800D0
  c->lr=c->r[0]; // 801800D4
  c->r[1]=c->r[1]+0x00000220u; // 801800D8
  return; // 801800DC
}

// nandIsPrivatePath
void f_801800E0(Ctx* __restrict c) {
  trace_call(0x801800E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801800E0
  c->r[0]=c->lr; // 801800E4
  c->r[4]=0u+0x802E0000u; // 801800E8
  c->r[5]=0u+0x00000008u; // 801800EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801800F0
  c->r[4]=c->r[4]+0xFFFFBF10u; // 801800F4
  c->lr=0x801800FCu; f_8025C6DC(c); // 801800F8
  c->r[0]=cntlz(c->r[3]); // 801800FC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80180100
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180104
  c->lr=c->r[0]; // 80180108
  c->r[1]=c->r[1]+0x00000010u; // 8018010C
  return; // 80180110
}

// nandIsUnderPrivatePath
void f_80180114(Ctx* __restrict c) {
  trace_call(0x80180114u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180114
  c->r[0]=c->lr; // 80180118
  c->r[4]=0u+0x802E0000u; // 8018011C
  c->r[5]=0u+0x00000009u; // 80180120
  W32(c->r[1]+0x00000014u,c->r[0]); // 80180124
  c->r[4]=c->r[4]+0xFFFFBF1Cu; // 80180128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018012C
  c->r[31]=c->r[3]|c->r[3]; // 80180130
  c->lr=0x80180138u; f_8025C6DC(c); // 80180134
  cmps(c,0,(int32_t)c->r[3],0); // 80180138
  if (!crb(c,2)) { goto L_80180154; } // 8018013C
  c->r[0]=R8(c->r[31]+0x00000009u); // 80180140
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80180144
  if (crb(c,2)) { goto L_80180154; } // 80180148
  c->r[3]=0u+0x00000001u; // 8018014C
  goto L_80180158; // 80180150
L_80180154:;
  c->r[3]=0u+0x00000000u; // 80180154
L_80180158:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180158
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018015C
  c->lr=c->r[0]; // 80180160
  c->r[1]=c->r[1]+0x00000010u; // 80180164
  return; // 80180168
}

// nandIsInitialized
void f_8018016C(Ctx* __restrict c) {
  trace_call(0x8018016Cu);
  c->r[3]=R32(c->r[13]+0xFFFFAF10u); // 8018016C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80180170
  c->r[0]=cntlz(c->r[0]); // 80180174
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80180178
  return; // 8018017C
}

// nandReportErrorCode
void f_80180180(Ctx* __restrict c) {
  trace_call(0x80180180u);
  return; // 80180180
}

// nandConvertErrorCode
void f_80180184(Ctx* __restrict c) {
  trace_call(0x80180184u);
  c->r[11]=rotl(c->r[1],0)&0x0000003Fu; // 80180184
  c->r[12]=c->r[1]|c->r[1]; // 80180188
  c->r[11]=addc(c,~c->r[11],0xFFFFFD00u,1); // 8018018C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80180190
  c->r[0]=c->lr; // 80180194
  c->r[4]=0u+0x80270000u; // 80180198
  W32(c->r[12]+0x00000004u,c->r[0]); // 8018019C
  c->r[4]=c->r[4]+0x00006638u; // 801801A0
  c->r[0]=0u+0x00000029u; // 801801A4
  c->r[6]=c->r[1]+0x0000013Cu; // 801801A8
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801801AC
  c->r[31]=0u+0x802E0000u; // 801801B0
  c->r[31]=c->r[31]+0xFFFFBE60u; // 801801B4
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 801801B8
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 801801BC
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 801801C0
  c->r[29]=c->r[3]|c->r[3]; // 801801C4
  c->ctr=c->r[0]; // 801801C8
L_801801CC:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 801801CC
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 801801D0
  W32(c->r[6]+0x00000004u,c->r[4]); // 801801D4
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 801801D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801801CC; } // 801801DC
  cmps(c,0,(int32_t)c->r[3],0); // 801801E0
  c->r[30]=0u+0x00000000u; // 801801E4
  c->r[4]=0u+0x00000000u; // 801801E8
  if (crb(c,0)) { goto L_801801F8; } // 801801EC
  c->r[3]=c->r[29]|c->r[29]; // 801801F0
  goto L_801802C4; // 801801F4
L_801801F8:;
  c->r[0]=0u+0x00000029u; // 801801F8
  c->r[5]=c->r[1]+0x00000140u; // 801801FC
  c->ctr=c->r[0]; // 80180200
L_80180204:;
  c->r[0]=R32(c->r[5]+c->r[4]); // 80180204
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80180208
  if (!crb(c,2)) { goto L_80180278; } // 8018020C
  cmps(c,0,(int32_t)c->r[3],-114); // 80180210
  if (crb(c,2)) { goto L_80180238; } // 80180214
  cmps(c,0,(int32_t)c->r[3],-116); // 80180218
  if (crb(c,2)) { goto L_80180238; } // 8018021C
  cmps(c,0,(int32_t)c->r[3],-117); // 80180220
  if (crb(c,2)) { goto L_80180238; } // 80180224
  cmps(c,0,(int32_t)c->r[3],-9); // 80180228
  if (crb(c,2)) { goto L_80180238; } // 8018022C
  cmps(c,0,(int32_t)c->r[3],-12); // 80180230
  if (!crb(c,2)) { goto L_8018025C; } // 80180234
L_80180238:;
  c->r[5]=c->r[29]|c->r[29]; // 80180238
  c->r[3]=c->r[1]+0x000000C0u; // 8018023C
  c->r[4]=c->r[31]+0x000000C8u; // 80180240
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80180244
  c->lr=0x8018024Cu; f_8025ABC0(c); // 80180248
  c->r[4]=c->r[1]+0x000000C0u; // 8018024C
  c->r[3]=0u+0x00000000u; // 80180250
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80180254
  c->lr=0x8018025Cu; f_80181200(c); // 80180258
L_8018025C:;
  c->r[3]=c->r[29]|c->r[29]; // 8018025C
  c->lr=0x80180264u; f_80180180(c); // 80180260
  c->r[0]=c->r[30]+0x00000001u; // 80180264
  c->r[3]=c->r[1]+0x00000140u; // 80180268
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8018026C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80180270
  goto L_801802C4; // 80180274
L_80180278:;
  c->r[30]=c->r[30]+0x00000002u; // 80180278
  c->r[4]=c->r[4]+0x00000008u; // 8018027C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80180204; } // 80180280
  c->r[4]=c->r[29]|c->r[29]; // 80180284
  c->r[3]=c->r[31]+0x000000DCu; // 80180288
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018028C
  c->lr=0x80180294u; f_801506B4(c); // 80180290
  c->r[5]=c->r[29]|c->r[29]; // 80180294
  c->r[3]=c->r[1]+0x00000040u; // 80180298
  c->r[4]=c->r[31]+0x00000110u; // 8018029C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801802A0
  c->lr=0x801802A8u; f_8025ABC0(c); // 801802A4
  c->r[4]=c->r[1]+0x00000040u; // 801802A8
  c->r[3]=0u+0x00000000u; // 801802AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801802B0
  c->lr=0x801802B8u; f_80181200(c); // 801802B4
  c->r[3]=c->r[29]|c->r[29]; // 801802B8
  c->lr=0x801802C0u; f_80180180(c); // 801802BC
  c->r[3]=0u+0xFFFFFFC0u; // 801802C0
L_801802C4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801802C4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801802C8
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801802CC
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 801802D0
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 801802D4
  c->lr=c->r[0]; // 801802D8
  c->r[1]=c->r[10]|c->r[10]; // 801802DC
  return; // 801802E0
}

// nandGenerateAbsPath
void f_801802E4(Ctx* __restrict c) {
  trace_call(0x801802E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801802E4
  c->r[0]=c->lr; // 801802E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801802EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801802F0
  c->r[31]=c->r[4]|c->r[4]; // 801802F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801802F8
  c->r[30]=c->r[3]|c->r[3]; // 801802FC
  c->r[3]=c->r[31]|c->r[31]; // 80180300
  c->lr=0x80180308u; f_80252384(c); // 80180304
  cmps(c,0,(int32_t)c->r[3],0); // 80180308
  if (!crb(c,2)) { goto L_80180320; } // 8018030C
  c->r[3]=c->r[30]|c->r[30]; // 80180310
  c->r[4]=c->r[13]+0xFFFF9158u; // 80180314
  c->lr=0x8018031Cu; f_8025C444(c); // 80180318
  goto L_80180394; // 8018031C
L_80180320:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80180320
  cmps(c,0,(int32_t)c->r[0],47); // 80180324
  if (!crb(c,2)) { goto L_80180334; } // 80180328
  c->r[0]=0u+0x00000000u; // 8018032C
  goto L_80180338; // 80180330
L_80180334:;
  c->r[0]=0u+0x00000001u; // 80180334
L_80180338:;
  cmps(c,0,(int32_t)c->r[0],0); // 80180338
  if (crb(c,2)) { goto L_80180358; } // 8018033C
  c->r[4]=0u+0x802E0000u; // 80180340
  c->r[3]=c->r[30]|c->r[30]; // 80180344
  c->r[5]=c->r[31]|c->r[31]; // 80180348
  c->r[4]=c->r[4]+0xFFFFBEC0u; // 8018034C
  c->lr=0x80180354u; f_8017FFA4(c); // 80180350
  goto L_80180394; // 80180354
L_80180358:;
  c->r[3]=c->r[30]|c->r[30]; // 80180358
  c->r[4]=c->r[31]|c->r[31]; // 8018035C
  c->lr=0x80180364u; f_8025C444(c); // 80180360
  c->r[3]=c->r[30]|c->r[30]; // 80180364
  c->lr=0x8018036Cu; f_80252384(c); // 80180368
  cmps(c,0,(int32_t)c->r[3],0); // 8018036C
  if (crb(c,2)) { goto L_80180394; } // 80180370
  c->r[4]=c->r[3]+c->r[30]; // 80180374
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 80180378
  cmps(c,0,(int32_t)c->r[0],47); // 8018037C
  if (!crb(c,2)) { goto L_80180394; } // 80180380
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80180384
  if (crb(c,2)) { goto L_80180394; } // 80180388
  c->r[0]=0u+0x00000000u; // 8018038C
  W8(c->r[4]+0xFFFFFFFFu,c->r[0]); // 80180390
L_80180394:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180394
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80180398
  c->r[30]=R32(c->r[1]+0x00000008u); // 8018039C
  c->lr=c->r[0]; // 801803A0
  c->r[1]=c->r[1]+0x00000010u; // 801803A4
  return; // 801803A8
}

// fn_801803AC
void f_801803AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801803AC
  c->r[0]=c->lr; // 801803B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801803B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801803B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801803BC
  c->r[30]=c->r[4]|c->r[4]; // 801803C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801803C4
  c->r[29]=c->r[3]|c->r[3]; // 801803C8
  c->r[3]=c->r[30]|c->r[30]; // 801803CC
  c->lr=0x801803D4u; f_80252384(c); // 801803D0
  c->r[0]=c->r[3]+0x00000001u; // 801803D4
  c->r[31]=c->r[3]|c->r[3]; // 801803D8
  c->r[4]=c->r[30]+c->r[3]; // 801803DC
  c->ctr=c->r[0]; // 801803E0
  cmps(c,0,(int32_t)c->r[3],0); // 801803E4
  if (crb(c,0)) { goto L_80180404; } // 801803E8
L_801803EC:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801803EC
  cmps(c,0,(int32_t)c->r[0],47); // 801803F0
  if (crb(c,2)) { goto L_80180404; } // 801803F4
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 801803F8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801803FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801803EC; } // 80180400
L_80180404:;
  cmps(c,0,(int32_t)c->r[31],0); // 80180404
  if (!crb(c,2)) { goto L_8018041C; } // 80180408
  c->r[3]=c->r[29]|c->r[29]; // 8018040C
  c->r[4]=c->r[13]+0xFFFF9154u; // 80180410
  c->lr=0x80180418u; f_8025C444(c); // 80180414
  goto L_80180434; // 80180418
L_8018041C:;
  c->r[3]=c->r[29]|c->r[29]; // 8018041C
  c->r[4]=c->r[30]|c->r[30]; // 80180420
  c->r[5]=c->r[31]|c->r[31]; // 80180424
  c->lr=0x8018042Cu; f_8025C504(c); // 80180428
  c->r[0]=0u+0x00000000u; // 8018042C
  W8(c->r[29]+c->r[31],c->r[0]); // 80180430
L_80180434:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80180434
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80180438
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018043C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80180440
  c->lr=c->r[0]; // 80180444
  c->r[1]=c->r[1]+0x00000020u; // 80180448
  return; // 8018044C
}

// NANDInit
void f_80180450(Ctx* __restrict c) {
  trace_call(0x80180450u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180450
  c->r[0]=c->lr; // 80180454
  W32(c->r[1]+0x00000024u,c->r[0]); // 80180458
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8018045C
  c->r[31]=0u+0x802E0000u; // 80180460
  c->r[31]=c->r[31]+0xFFFFBE60u; // 80180464
  W32(c->r[1]+0x00000018u,c->r[30]); // 80180468
  c->lr=0x80180470u; f_80154410(c); // 8018046C
  c->r[0]=R32(c->r[13]+0xFFFFAF10u); // 80180470
  cmps(c,0,(int32_t)c->r[0],1); // 80180474
  if (!crb(c,2)) { goto L_80180488; } // 80180478
  c->lr=0x80180480u; f_80154438(c); // 8018047C
  c->r[3]=0u+0xFFFFFFFDu; // 80180480
  goto L_80180564; // 80180484
L_80180488:;
  cmps(c,0,(int32_t)c->r[0],2); // 80180488
  if (!crb(c,2)) { goto L_8018049C; } // 8018048C
  c->lr=0x80180494u; f_80154438(c); // 80180490
  c->r[3]=0u+0x00000000u; // 80180494
  goto L_80180564; // 80180498
L_8018049C:;
  c->r[0]=0u+0x00000001u; // 8018049C
  W32(c->r[13]+0xFFFFAF10u,c->r[0]); // 801804A0
  c->lr=0x801804A8u; f_80154438(c); // 801804A4
  c->lr=0x801804ACu; f_80187A2C(c); // 801804A8
  cmps(c,0,(int32_t)c->r[3],0); // 801804AC
  c->r[30]=c->r[3]|c->r[3]; // 801804B0
  if (!crb(c,2)) { goto L_8018054C; } // 801804B4
  c->lr=0x801804BCu; f_80185008(c); // 801804B8
  cmps(c,0,(int32_t)c->r[3],0); // 801804BC
  c->r[30]=c->r[3]|c->r[3]; // 801804C0
  if (!crb(c,2)) { goto L_801804D4; } // 801804C4
  c->r[3]=c->r[1]+0x00000008u; // 801804C8
  c->lr=0x801804D0u; f_8018579C(c); // 801804CC
  c->r[30]=c->r[3]|c->r[3]; // 801804D0
L_801804D4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801804D4
  if (!crb(c,2)) { goto L_801804F4; } // 801804D8
  c->r[5]=0u+0x80460000u; // 801804DC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801804E0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801804E4
  c->r[5]=c->r[5]+0xFFFFEBC0u; // 801804E8
  c->lr=0x801804F0u; f_80185704(c); // 801804EC
  c->r[30]=c->r[3]|c->r[3]; // 801804F0
L_801804F4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801804F4
  if (!crb(c,2)) { goto L_8018050C; } // 801804F8
  c->r[4]=0u+0x80460000u; // 801804FC
  c->r[3]=c->r[31]+0x00000060u; // 80180500
  c->r[4]=c->r[4]+0xFFFFEBC0u; // 80180504
  c->lr=0x8018050Cu; f_8025C444(c); // 80180508
L_8018050C:;
  c->lr=0x80180510u; f_8018505C(c); // 8018050C
  cmps(c,0,(int32_t)c->r[30],0); // 80180510
  if (crb(c,2)) { goto L_80180524; } // 80180514
  c->r[3]=c->r[31]+0x00000130u; // 80180518
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018051C
  c->lr=0x80180524u; f_801506B4(c); // 80180520
L_80180524:;
  c->r[3]=c->r[31]+0x000000A0u; // 80180524
  c->lr=0x8018052Cu; f_80155A40(c); // 80180528
  c->lr=0x80180530u; f_80154410(c); // 8018052C
  c->r[0]=0u+0x00000002u; // 80180530
  W32(c->r[13]+0xFFFFAF10u,c->r[0]); // 80180534
  c->lr=0x8018053Cu; f_80154438(c); // 80180538
  c->r[3]=R32(c->r[13]+0xFFFF9150u); // 8018053C
  c->lr=0x80180544u; f_8014E714(c); // 80180540
  c->r[3]=0u+0x00000000u; // 80180544
  goto L_80180564; // 80180548
L_8018054C:;
  c->lr=0x80180550u; f_80154410(c); // 8018054C
  c->r[0]=0u+0x00000000u; // 80180550
  W32(c->r[13]+0xFFFFAF10u,c->r[0]); // 80180554
  c->lr=0x8018055Cu; f_80154438(c); // 80180558
  c->r[3]=c->r[30]|c->r[30]; // 8018055C
  c->lr=0x80180564u; f_80180184(c); // 80180560
L_80180564:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80180564
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80180568
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018056C
  c->lr=c->r[0]; // 80180570
  c->r[1]=c->r[1]+0x00000020u; // 80180574
  return; // 80180578
}

// fn_8018057C
void f_8018057C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018057C
  c->r[0]=c->lr; // 80180580
  W32(c->r[1]+0x00000034u,c->r[0]); // 80180584
  c->r[11]=c->r[1]+0x00000030u; // 80180588
  c->lr=0x80180590u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018058C
  cmps(c,0,(int32_t)c->r[3],0); // 80180590
  if (!crb(c,2)) { goto L_8018062C; } // 80180594
  cmpu(c,0,c->r[4],0x00000002u); // 80180598
  if (!crb(c,2)) { goto L_80180624; } // 8018059C
  c->r[26]=0u+0x00000000u; // 801805A0
  W32(c->r[1]+0x00000008u,c->r[26]); // 801805A4
  c->lr=0x801805ACu; f_8015848C(c); // 801805A8
  c->r[5]=0u+0x80180000u; // 801805AC
  c->r[27]=c->r[4]|c->r[4]; // 801805B0
  c->r[28]=c->r[3]|c->r[3]; // 801805B4
  c->r[4]=c->r[1]+0x00000008u; // 801805B8
  c->r[3]=c->r[5]+0x00000648u; // 801805BC
  c->lr=0x801805C4u; f_80188ED4(c); // 801805C0
  c->r[3]=0u+0x10620000u; // 801805C4
  c->r[30]=0u+0x80000000u; // 801805C8
  c->r[29]=c->r[3]+0x00004DD3u; // 801805CC
  c->r[31]=0u+0x000001F4u; // 801805D0
  goto L_801805E4; // 801805D4
L_801805D8:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801805D8
  cmps(c,0,(int32_t)c->r[0],0); // 801805DC
  if (!crb(c,2)) { goto L_80180624; } // 801805E0
L_801805E4:;
  c->lr=0x801805E8u; f_8015848C(c); // 801805E4
  c->r[0]=R32(c->r[30]+0x000000F8u); // 801805E8
  c->r[4]=addc(c,~c->r[27],c->r[4],1); // 801805EC
  c->r[3]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 801805F0
  c->r[5]=0u+0x00000000u; // 801805F4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801805F8
  c->r[0]=(uint32_t)(((uint64_t)c->r[29]*(uint64_t)c->r[0])>>32); // 801805FC
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 80180600
  c->lr=0x80180608u; f_80252CF4(c); // 80180604
  c->r[0]=c->r[3]^0x80000000u; // 80180608
  c->r[5]=c->r[26]^0x80000000u; // 8018060C
  c->r[3]=addc(c,~c->r[31],c->r[4],1); // 80180610
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80180614
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80180618
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 8018061C
  if (!crb(c,2)) { IRQCHK(c); goto L_801805D8; } // 80180620
L_80180624:;
  c->r[3]=0u+0x00000001u; // 80180624
  goto L_80180630; // 80180628
L_8018062C:;
  c->r[3]=0u+0x00000001u; // 8018062C
L_80180630:;
  c->r[11]=c->r[1]+0x00000030u; // 80180630
  c->lr=0x80180638u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80180634
  c->r[0]=R32(c->r[1]+0x00000034u); // 80180638
  c->lr=c->r[0]; // 8018063C
  c->r[1]=c->r[1]+0x00000030u; // 80180640
  return; // 80180644
}

// fn_80180648
void f_80180648(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 80180648
  W32(c->r[4]+0x00000000u,c->r[0]); // 8018064C
  return; // 80180650
}

// fn_80180654
void f_80180654(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180654
  c->r[0]=c->lr; // 80180658
  cmps(c,0,(int32_t)c->r[5],0); // 8018065C
  W32(c->r[1]+0x00000064u,c->r[0]); // 80180660
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80180664
  c->r[31]=c->r[6]|c->r[6]; // 80180668
  W32(c->r[1]+0x00000058u,c->r[30]); // 8018066C
  c->r[30]=c->r[4]|c->r[4]; // 80180670
  W32(c->r[1]+0x00000054u,c->r[29]); // 80180674
  c->r[29]=c->r[3]|c->r[3]; // 80180678
  if (crb(c,2)) { goto L_80180770; } // 8018067C
  c->lr=0x80180684u; f_80252384(c); // 80180680
  cmps(c,0,(int32_t)c->r[3],0); // 80180684
  if (!crb(c,2)) { goto L_8018069C; } // 80180688
  c->r[3]=c->r[30]+0x00000034u; // 8018068C
  c->r[4]=c->r[13]+0xFFFF9158u; // 80180690
  c->lr=0x80180698u; f_8025C444(c); // 80180694
  goto L_80180710; // 80180698
L_8018069C:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 8018069C
  cmps(c,0,(int32_t)c->r[0],47); // 801806A0
  if (!crb(c,2)) { goto L_801806B0; } // 801806A4
  c->r[0]=0u+0x00000000u; // 801806A8
  goto L_801806B4; // 801806AC
L_801806B0:;
  c->r[0]=0u+0x00000001u; // 801806B0
L_801806B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801806B4
  if (crb(c,2)) { goto L_801806D4; } // 801806B8
  c->r[4]=0u+0x802E0000u; // 801806BC
  c->r[5]=c->r[29]|c->r[29]; // 801806C0
  c->r[3]=c->r[30]+0x00000034u; // 801806C4
  c->r[4]=c->r[4]+0xFFFFBEC0u; // 801806C8
  c->lr=0x801806D0u; f_8017FFA4(c); // 801806CC
  goto L_80180710; // 801806D0
L_801806D4:;
  c->r[4]=c->r[29]|c->r[29]; // 801806D4
  c->r[3]=c->r[30]+0x00000034u; // 801806D8
  c->lr=0x801806E0u; f_8025C444(c); // 801806DC
  c->r[3]=c->r[30]+0x00000034u; // 801806E0
  c->lr=0x801806E8u; f_80252384(c); // 801806E4
  cmps(c,0,(int32_t)c->r[3],0); // 801806E8
  if (crb(c,2)) { goto L_80180710; } // 801806EC
  c->r[4]=c->r[3]+c->r[30]; // 801806F0
  c->r[0]=R8(c->r[4]+0x00000033u); // 801806F4
  cmps(c,0,(int32_t)c->r[0],47); // 801806F8
  if (!crb(c,2)) { goto L_80180710; } // 801806FC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80180700
  if (crb(c,2)) { goto L_80180710; } // 80180704
  c->r[0]=0u+0x00000000u; // 80180708
  W8(c->r[4]+0x00000033u,c->r[0]); // 8018070C
L_80180710:;
  cmps(c,0,(int32_t)c->r[31],0); // 80180710
  if (!crb(c,2)) { goto L_80180750; } // 80180714
  c->r[4]=0u+0x802E0000u; // 80180718
  c->r[3]=c->r[30]+0x00000034u; // 8018071C
  c->r[4]=c->r[4]+0xFFFFBF10u; // 80180720
  c->r[5]=0u+0x00000008u; // 80180724
  c->lr=0x8018072Cu; f_8025C6DC(c); // 80180728
  cmps(c,0,(int32_t)c->r[3],0); // 8018072C
  if (!crb(c,2)) { goto L_8018073C; } // 80180730
  c->r[0]=0u+0x00000001u; // 80180734
  goto L_80180740; // 80180738
L_8018073C:;
  c->r[0]=0u+0x00000000u; // 8018073C
L_80180740:;
  cmps(c,0,(int32_t)c->r[0],0); // 80180740
  if (crb(c,2)) { goto L_80180750; } // 80180744
  c->r[3]=0u+0xFFFFFF9Au; // 80180748
  goto L_801808CC; // 8018074C
L_80180750:;
  c->r[6]=0u+0x80180000u; // 80180750
  c->r[7]=c->r[30]|c->r[30]; // 80180754
  c->r[3]=c->r[30]+0x00000034u; // 80180758
  c->r[5]=c->r[30]+0x00000030u; // 8018075C
  c->r[6]=c->r[6]+0x0000092Cu; // 80180760
  c->r[4]=0u+0x00000000u; // 80180764
  c->lr=0x8018076Cu; f_80188010(c); // 80180768
  goto L_801808CC; // 8018076C
L_80180770:;
  c->r[0]=0u+0x00000000u; // 80180770
  W32(c->r[1]+0x00000008u,c->r[0]); // 80180774
  W32(c->r[1]+0x00000010u,c->r[0]); // 80180778
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018077C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80180780
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80180784
  W32(c->r[1]+0x00000020u,c->r[0]); // 80180788
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018078C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80180790
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80180794
  W32(c->r[1]+0x00000030u,c->r[0]); // 80180798
  W32(c->r[1]+0x00000034u,c->r[0]); // 8018079C
  W32(c->r[1]+0x00000038u,c->r[0]); // 801807A0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801807A4
  W32(c->r[1]+0x00000040u,c->r[0]); // 801807A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801807AC
  W32(c->r[1]+0x00000048u,c->r[0]); // 801807B0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801807B4
  c->lr=0x801807BCu; f_80252384(c); // 801807B8
  cmps(c,0,(int32_t)c->r[3],0); // 801807BC
  if (!crb(c,2)) { goto L_801807D4; } // 801807C0
  c->r[3]=c->r[1]+0x00000010u; // 801807C4
  c->r[4]=c->r[13]+0xFFFF9158u; // 801807C8
  c->lr=0x801807D0u; f_8025C444(c); // 801807CC
  goto L_8018084C; // 801807D0
L_801807D4:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801807D4
  cmps(c,0,(int32_t)c->r[0],47); // 801807D8
  if (!crb(c,2)) { goto L_801807E8; } // 801807DC
  c->r[0]=0u+0x00000000u; // 801807E0
  goto L_801807EC; // 801807E4
L_801807E8:;
  c->r[0]=0u+0x00000001u; // 801807E8
L_801807EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801807EC
  if (crb(c,2)) { goto L_8018080C; } // 801807F0
  c->r[4]=0u+0x802E0000u; // 801807F4
  c->r[5]=c->r[29]|c->r[29]; // 801807F8
  c->r[3]=c->r[1]+0x00000010u; // 801807FC
  c->r[4]=c->r[4]+0xFFFFBEC0u; // 80180800
  c->lr=0x80180808u; f_8017FFA4(c); // 80180804
  goto L_8018084C; // 80180808
L_8018080C:;
  c->r[4]=c->r[29]|c->r[29]; // 8018080C
  c->r[3]=c->r[1]+0x00000010u; // 80180810
  c->lr=0x80180818u; f_8025C444(c); // 80180814
  c->r[3]=c->r[1]+0x00000010u; // 80180818
  c->lr=0x80180820u; f_80252384(c); // 8018081C
  cmps(c,0,(int32_t)c->r[3],0); // 80180820
  if (crb(c,2)) { goto L_8018084C; } // 80180824
  c->r[0]=c->r[1]+0x00000010u; // 80180828
  c->r[4]=c->r[3]+c->r[0]; // 8018082C
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 80180830
  cmps(c,0,(int32_t)c->r[0],47); // 80180834
  if (!crb(c,2)) { goto L_8018084C; } // 80180838
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8018083C
  if (crb(c,2)) { goto L_8018084C; } // 80180840
  c->r[0]=0u+0x00000000u; // 80180844
  W8(c->r[4]+0xFFFFFFFFu,c->r[0]); // 80180848
L_8018084C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8018084C
  if (!crb(c,2)) { goto L_8018088C; } // 80180850
  c->r[4]=0u+0x802E0000u; // 80180854
  c->r[3]=c->r[1]+0x00000010u; // 80180858
  c->r[4]=c->r[4]+0xFFFFBF10u; // 8018085C
  c->r[5]=0u+0x00000008u; // 80180860
  c->lr=0x80180868u; f_8025C6DC(c); // 80180864
  cmps(c,0,(int32_t)c->r[3],0); // 80180868
  if (!crb(c,2)) { goto L_80180878; } // 8018086C
  c->r[0]=0u+0x00000001u; // 80180870
  goto L_8018087C; // 80180874
L_80180878:;
  c->r[0]=0u+0x00000000u; // 80180878
L_8018087C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018087C
  if (crb(c,2)) { goto L_8018088C; } // 80180880
  c->r[3]=0u+0xFFFFFF9Au; // 80180884
  goto L_801808CC; // 80180888
L_8018088C:;
  c->r[3]=c->r[1]+0x00000010u; // 8018088C
  c->r[5]=c->r[1]+0x00000008u; // 80180890
  c->r[4]=0u+0x00000000u; // 80180894
  c->lr=0x8018089Cu; f_80187EBC(c); // 80180898
  cmps(c,0,(int32_t)c->r[3],0); // 8018089C
  c->r[31]=c->r[3]|c->r[3]; // 801808A0
  if (!crb(c,2)) { goto L_801808C8; } // 801808A4
  c->lr=0x801808ACu; f_80154410(c); // 801808A8
  c->r[4]=0u+0x802E0000u; // 801808AC
  c->r[30]=c->r[3]|c->r[3]; // 801808B0
  c->r[3]=c->r[4]+0xFFFFBEC0u; // 801808B4
  c->r[4]=c->r[1]+0x00000010u; // 801808B8
  c->lr=0x801808C0u; f_8025C444(c); // 801808BC
  c->r[3]=c->r[30]|c->r[30]; // 801808C0
  c->lr=0x801808C8u; f_80154438(c); // 801808C4
L_801808C8:;
  c->r[3]=c->r[31]|c->r[31]; // 801808C8
L_801808CC:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801808CC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801808D0
  c->r[30]=R32(c->r[1]+0x00000058u); // 801808D4
  c->r[29]=R32(c->r[1]+0x00000054u); // 801808D8
  c->lr=c->r[0]; // 801808DC
  c->r[1]=c->r[1]+0x00000060u; // 801808E0
  return; // 801808E4
}

// fn_801808E8
void f_801808E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801808E8
  c->r[0]=c->lr; // 801808EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801808F0
  c->r[0]=R32(c->r[13]+0xFFFFAF10u); // 801808F4
  cmps(c,0,(int32_t)c->r[0],2); // 801808F8
  if (crb(c,2)) { goto L_80180908; } // 801808FC
  c->r[3]=0u+0xFFFFFF80u; // 80180900
  goto L_8018091C; // 80180904
L_80180908:;
  c->r[4]=0u+0x00000000u; // 80180908
  c->r[5]=0u+0x00000000u; // 8018090C
  c->r[6]=0u+0x00000000u; // 80180910
  c->lr=0x80180918u; f_80180654(c); // 80180914
  c->lr=0x8018091Cu; f_80180184(c); // 80180918
L_8018091C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018091C
  c->lr=c->r[0]; // 80180920
  c->r[1]=c->r[1]+0x00000010u; // 80180924
  return; // 80180928
}

// fn_8018092C
void f_8018092C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018092C
  c->r[0]=c->lr; // 80180930
  cmps(c,0,(int32_t)c->r[3],0); // 80180934
  W32(c->r[1]+0x00000024u,c->r[0]); // 80180938
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8018093C
  c->r[31]=c->r[4]|c->r[4]; // 80180940
  W32(c->r[1]+0x00000018u,c->r[30]); // 80180944
  W32(c->r[1]+0x00000014u,c->r[29]); // 80180948
  c->r[29]=c->r[3]|c->r[3]; // 8018094C
  if (!crb(c,2)) { goto L_80180974; } // 80180950
  c->lr=0x80180958u; f_80154410(c); // 80180954
  c->r[4]=0u+0x802E0000u; // 80180958
  c->r[30]=c->r[3]|c->r[3]; // 8018095C
  c->r[3]=c->r[4]+0xFFFFBEC0u; // 80180960
  c->r[4]=c->r[31]+0x00000034u; // 80180964
  c->lr=0x8018096Cu; f_8025C444(c); // 80180968
  c->r[3]=c->r[30]|c->r[30]; // 8018096C
  c->lr=0x80180974u; f_80154438(c); // 80180970
L_80180974:;
  c->r[3]=c->r[29]|c->r[29]; // 80180974
  c->lr=0x8018097Cu; f_80180184(c); // 80180978
  c->r[12]=R32(c->r[31]+0x00000004u); // 8018097C
  c->r[4]=c->r[31]|c->r[31]; // 80180980
  c->ctr=c->r[12]; // 80180984
  if (true) { c->lr=0x8018098Cu; dispatch(c,c->ctr); } // 80180988
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018098C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80180990
  c->r[30]=R32(c->r[1]+0x00000018u); // 80180994
  c->r[29]=R32(c->r[1]+0x00000014u); // 80180998
  c->lr=c->r[0]; // 8018099C
  c->r[1]=c->r[1]+0x00000020u; // 801809A0
  return; // 801809A4
}

// fn_801809A8
void f_801809A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801809A8
  c->r[0]=c->lr; // 801809AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801809B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801809B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801809B8
  c->r[30]=c->r[3]|c->r[3]; // 801809BC
  c->r[0]=R32(c->r[13]+0xFFFFAF10u); // 801809C0
  cmps(c,0,(int32_t)c->r[0],2); // 801809C4
  if (!crb(c,2)) { goto L_801809D4; } // 801809C8
  c->r[0]=0u+0x00000001u; // 801809CC
  goto L_801809D8; // 801809D0
L_801809D4:;
  c->r[0]=0u+0x00000000u; // 801809D4
L_801809D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801809D8
  if (!crb(c,2)) { goto L_801809E8; } // 801809DC
  c->r[3]=0u+0xFFFFFF80u; // 801809E0
  goto L_80180A0C; // 801809E4
L_801809E8:;
  c->lr=0x801809ECu; f_80154410(c); // 801809E8
  c->r[4]=0u+0x802E0000u; // 801809EC
  c->r[31]=c->r[3]|c->r[3]; // 801809F0
  c->r[3]=c->r[30]|c->r[30]; // 801809F4
  c->r[4]=c->r[4]+0xFFFFBEC0u; // 801809F8
  c->lr=0x80180A00u; f_8025C444(c); // 801809FC
  c->r[3]=c->r[31]|c->r[31]; // 80180A00
  c->lr=0x80180A08u; f_80154438(c); // 80180A04
  c->r[3]=0u+0x00000000u; // 80180A08
L_80180A0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180A0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80180A10
  c->r[30]=R32(c->r[1]+0x00000008u); // 80180A14
  c->lr=c->r[0]; // 80180A18
  c->r[1]=c->r[1]+0x00000010u; // 80180A1C
  return; // 80180A20
}

// fn_80180A24
void f_80180A24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180A24
  c->r[0]=c->lr; // 80180A28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80180A2C
  c->r[0]=R32(c->r[13]+0xFFFFAF10u); // 80180A30
  cmps(c,0,(int32_t)c->r[0],2); // 80180A34
  if (!crb(c,2)) { goto L_80180A44; } // 80180A38
  c->r[0]=0u+0x00000001u; // 80180A3C
  goto L_80180A48; // 80180A40
L_80180A44:;
  c->r[0]=0u+0x00000000u; // 80180A44
L_80180A48:;
  cmps(c,0,(int32_t)c->r[0],0); // 80180A48
  if (!crb(c,2)) { goto L_80180A58; } // 80180A4C
  c->r[3]=0u+0xFFFFFF80u; // 80180A50
  goto L_80180A68; // 80180A54
L_80180A58:;
  c->r[4]=0u+0x80460000u; // 80180A58
  c->r[4]=c->r[4]+0xFFFFEBC0u; // 80180A5C
  c->lr=0x80180A64u; f_8025C444(c); // 80180A60
  c->r[3]=0u+0x00000000u; // 80180A64
L_80180A68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180A68
  c->lr=c->r[0]; // 80180A6C
  c->r[1]=c->r[1]+0x00000010u; // 80180A70
  return; // 80180A74
}

// nandCallback
void f_80180A78(Ctx* __restrict c) {
  trace_call(0x80180A78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180A78
  c->r[0]=c->lr; // 80180A7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80180A80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80180A84
  c->r[31]=c->r[4]|c->r[4]; // 80180A88
  c->lr=0x80180A90u; f_80180184(c); // 80180A8C
  c->r[12]=R32(c->r[31]+0x00000004u); // 80180A90
  c->r[4]=c->r[31]|c->r[31]; // 80180A94
  c->ctr=c->r[12]; // 80180A98
  if (true) { c->lr=0x80180AA0u; dispatch(c,c->ctr); } // 80180A9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180AA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80180AA4
  c->lr=c->r[0]; // 80180AA8
  c->r[1]=c->r[1]+0x00000010u; // 80180AAC
  return; // 80180AB0
}

// fn_80180AB4
void f_80180AB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180AB4
  c->r[0]=c->lr; // 80180AB8
  W32(c->r[1]+0x00000074u,c->r[0]); // 80180ABC
  c->r[11]=c->r[1]+0x00000070u; // 80180AC0
  c->lr=0x80180AC8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80180AC4
  c->r[27]=c->r[3]|c->r[3]; // 80180AC8
  c->r[30]=c->r[4]|c->r[4]; // 80180ACC
  c->r[28]=c->r[5]|c->r[5]; // 80180AD0
  c->r[29]=c->r[6]|c->r[6]; // 80180AD4
  c->r[31]=c->r[7]|c->r[7]; // 80180AD8
  c->lr=0x80180AE0u; f_80252384(c); // 80180ADC
  cmps(c,0,(int32_t)c->r[3],0); // 80180AE0
  if (!crb(c,2)) { goto L_80180AF0; } // 80180AE4
  c->r[3]=0u+0xFFFFFF9Bu; // 80180AE8
  goto L_80180D70; // 80180AEC
L_80180AF0:;
  cmps(c,0,(int32_t)c->r[29],0); // 80180AF0
  if (crb(c,2)) { goto L_80180BFC; } // 80180AF4
  c->r[3]=c->r[27]|c->r[27]; // 80180AF8
  c->lr=0x80180B00u; f_80252384(c); // 80180AFC
  cmps(c,0,(int32_t)c->r[3],0); // 80180B00
  if (!crb(c,2)) { goto L_80180B18; } // 80180B04
  c->r[3]=c->r[28]+0x00000034u; // 80180B08
  c->r[4]=c->r[13]+0xFFFF9158u; // 80180B0C
  c->lr=0x80180B14u; f_8025C444(c); // 80180B10
  goto L_80180B8C; // 80180B14
L_80180B18:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 80180B18
  cmps(c,0,(int32_t)c->r[0],47); // 80180B1C
  if (!crb(c,2)) { goto L_80180B2C; } // 80180B20
  c->r[0]=0u+0x00000000u; // 80180B24
  goto L_80180B30; // 80180B28
L_80180B2C:;
  c->r[0]=0u+0x00000001u; // 80180B2C
L_80180B30:;
  cmps(c,0,(int32_t)c->r[0],0); // 80180B30
  if (crb(c,2)) { goto L_80180B50; } // 80180B34
  c->r[4]=0u+0x802E0000u; // 80180B38
  c->r[5]=c->r[27]|c->r[27]; // 80180B3C
  c->r[3]=c->r[28]+0x00000034u; // 80180B40
  c->r[4]=c->r[4]+0xFFFFBEC0u; // 80180B44
  c->lr=0x80180B4Cu; f_8017FFA4(c); // 80180B48
  goto L_80180B8C; // 80180B4C
L_80180B50:;
  c->r[4]=c->r[27]|c->r[27]; // 80180B50
  c->r[3]=c->r[28]+0x00000034u; // 80180B54
  c->lr=0x80180B5Cu; f_8025C444(c); // 80180B58
  c->r[3]=c->r[28]+0x00000034u; // 80180B5C
  c->lr=0x80180B64u; f_80252384(c); // 80180B60
  cmps(c,0,(int32_t)c->r[3],0); // 80180B64
  if (crb(c,2)) { goto L_80180B8C; } // 80180B68
  c->r[4]=c->r[3]+c->r[28]; // 80180B6C
  c->r[0]=R8(c->r[4]+0x00000033u); // 80180B70
  cmps(c,0,(int32_t)c->r[0],47); // 80180B74
  if (!crb(c,2)) { goto L_80180B8C; } // 80180B78
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80180B7C
  if (crb(c,2)) { goto L_80180B8C; } // 80180B80
  c->r[0]=0u+0x00000000u; // 80180B84
  W8(c->r[4]+0x00000033u,c->r[0]); // 80180B88
L_80180B8C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80180B8C
  if (!crb(c,2)) { goto L_80180BD8; } // 80180B90
  c->r[4]=0u+0x802E0000u; // 80180B94
  c->r[3]=c->r[28]+0x00000034u; // 80180B98
  c->r[4]=c->r[4]+0xFFFFBF1Cu; // 80180B9C
  c->r[5]=0u+0x00000009u; // 80180BA0
  c->lr=0x80180BA8u; f_8025C6DC(c); // 80180BA4
  cmps(c,0,(int32_t)c->r[3],0); // 80180BA8
  if (!crb(c,2)) { goto L_80180BC4; } // 80180BAC
  c->r[0]=R8(c->r[28]+0x0000003Du); // 80180BB0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80180BB4
  if (crb(c,2)) { goto L_80180BC4; } // 80180BB8
  c->r[0]=0u+0x00000001u; // 80180BBC
  goto L_80180BC8; // 80180BC0
L_80180BC4:;
  c->r[0]=0u+0x00000000u; // 80180BC4
L_80180BC8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80180BC8
  if (crb(c,2)) { goto L_80180BD8; } // 80180BCC
  c->r[3]=0u+0xFFFFFF9Au; // 80180BD0
  goto L_80180D70; // 80180BD4
L_80180BD8:;
  c->r[6]=0u+0x80180000u; // 80180BD8
  W32(c->r[28]+0x00000088u,c->r[30]); // 80180BDC
  c->r[7]=c->r[28]|c->r[28]; // 80180BE0
  c->r[3]=c->r[28]+0x00000034u; // 80180BE4
  c->r[5]=c->r[28]+0x00000030u; // 80180BE8
  c->r[6]=c->r[6]+0x00000DD0u; // 80180BEC
  c->r[4]=0u+0x00000000u; // 80180BF0
  c->lr=0x80180BF8u; f_80188010(c); // 80180BF4
  goto L_80180D70; // 80180BF8
L_80180BFC:;
  c->r[0]=0u+0x00000000u; // 80180BFC
  c->r[3]=c->r[27]|c->r[27]; // 80180C00
  W32(c->r[1]+0x00000010u,c->r[0]); // 80180C04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80180C08
  W32(c->r[1]+0x00000018u,c->r[0]); // 80180C0C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80180C10
  W32(c->r[1]+0x00000020u,c->r[0]); // 80180C14
  W32(c->r[1]+0x00000024u,c->r[0]); // 80180C18
  W32(c->r[1]+0x00000028u,c->r[0]); // 80180C1C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80180C20
  W32(c->r[1]+0x00000030u,c->r[0]); // 80180C24
  W32(c->r[1]+0x00000034u,c->r[0]); // 80180C28
  W32(c->r[1]+0x00000038u,c->r[0]); // 80180C2C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80180C30
  W32(c->r[1]+0x00000040u,c->r[0]); // 80180C34
  W32(c->r[1]+0x00000044u,c->r[0]); // 80180C38
  W32(c->r[1]+0x00000048u,c->r[0]); // 80180C3C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80180C40
  c->lr=0x80180C48u; f_80252384(c); // 80180C44
  cmps(c,0,(int32_t)c->r[3],0); // 80180C48
  if (!crb(c,2)) { goto L_80180C60; } // 80180C4C
  c->r[3]=c->r[1]+0x00000010u; // 80180C50
  c->r[4]=c->r[13]+0xFFFF9158u; // 80180C54
  c->lr=0x80180C5Cu; f_8025C444(c); // 80180C58
  goto L_80180CD8; // 80180C5C
L_80180C60:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 80180C60
  cmps(c,0,(int32_t)c->r[0],47); // 80180C64
  if (!crb(c,2)) { goto L_80180C74; } // 80180C68
  c->r[0]=0u+0x00000000u; // 80180C6C
  goto L_80180C78; // 80180C70
L_80180C74:;
  c->r[0]=0u+0x00000001u; // 80180C74
L_80180C78:;
  cmps(c,0,(int32_t)c->r[0],0); // 80180C78
  if (crb(c,2)) { goto L_80180C98; } // 80180C7C
  c->r[4]=0u+0x802E0000u; // 80180C80
  c->r[5]=c->r[27]|c->r[27]; // 80180C84
  c->r[3]=c->r[1]+0x00000010u; // 80180C88
  c->r[4]=c->r[4]+0xFFFFBEC0u; // 80180C8C
  c->lr=0x80180C94u; f_8017FFA4(c); // 80180C90
  goto L_80180CD8; // 80180C94
L_80180C98:;
  c->r[4]=c->r[27]|c->r[27]; // 80180C98
  c->r[3]=c->r[1]+0x00000010u; // 80180C9C
  c->lr=0x80180CA4u; f_8025C444(c); // 80180CA0
  c->r[3]=c->r[1]+0x00000010u; // 80180CA4
  c->lr=0x80180CACu; f_80252384(c); // 80180CA8
  cmps(c,0,(int32_t)c->r[3],0); // 80180CAC
  if (crb(c,2)) { goto L_80180CD8; } // 80180CB0
  c->r[0]=c->r[1]+0x00000010u; // 80180CB4
  c->r[4]=c->r[3]+c->r[0]; // 80180CB8
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 80180CBC
  cmps(c,0,(int32_t)c->r[0],47); // 80180CC0
  if (!crb(c,2)) { goto L_80180CD8; } // 80180CC4
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80180CC8
  if (crb(c,2)) { goto L_80180CD8; } // 80180CCC
  c->r[0]=0u+0x00000000u; // 80180CD0
  W8(c->r[4]+0xFFFFFFFFu,c->r[0]); // 80180CD4
L_80180CD8:;
  cmps(c,0,(int32_t)c->r[31],0); // 80180CD8
  if (!crb(c,2)) { goto L_80180D24; } // 80180CDC
  c->r[4]=0u+0x802E0000u; // 80180CE0
  c->r[3]=c->r[1]+0x00000010u; // 80180CE4
  c->r[4]=c->r[4]+0xFFFFBF1Cu; // 80180CE8
  c->r[5]=0u+0x00000009u; // 80180CEC
  c->lr=0x80180CF4u; f_8025C6DC(c); // 80180CF0
  cmps(c,0,(int32_t)c->r[3],0); // 80180CF4
  if (!crb(c,2)) { goto L_80180D10; } // 80180CF8
  c->r[0]=R8(c->r[1]+0x00000019u); // 80180CFC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80180D00
  if (crb(c,2)) { goto L_80180D10; } // 80180D04
  c->r[0]=0u+0x00000001u; // 80180D08
  goto L_80180D14; // 80180D0C
L_80180D10:;
  c->r[0]=0u+0x00000000u; // 80180D10
L_80180D14:;
  cmps(c,0,(int32_t)c->r[0],0); // 80180D14
  if (crb(c,2)) { goto L_80180D24; } // 80180D18
  c->r[3]=0u+0xFFFFFF9Au; // 80180D1C
  goto L_80180D70; // 80180D20
L_80180D24:;
  c->r[0]=0u+0x00000000u; // 80180D24
  c->r[3]=c->r[1]+0x00000010u; // 80180D28
  W32(c->r[1]+0x00000008u,c->r[0]); // 80180D2C
  c->r[5]=c->r[1]+0x00000008u; // 80180D30
  c->r[4]=0u+0x00000000u; // 80180D34
  c->lr=0x80180D3Cu; f_80187EBC(c); // 80180D38
  cmps(c,0,(int32_t)c->r[3],0); // 80180D3C
  if (crb(c,2)) { goto L_80180D4C; } // 80180D40
  cmps(c,0,(int32_t)c->r[3],-102); // 80180D44
  if (!crb(c,2)) { goto L_80180D5C; } // 80180D48
L_80180D4C:;
  c->r[0]=0u+0x00000002u; // 80180D4C
  c->r[3]=0u+0x00000000u; // 80180D50
  W8(c->r[30]+0x00000000u,c->r[0]); // 80180D54
  goto L_80180D70; // 80180D58
L_80180D5C:;
  cmps(c,0,(int32_t)c->r[3],-101); // 80180D5C
  if (!crb(c,2)) { goto L_80180D70; } // 80180D60
  c->r[0]=0u+0x00000001u; // 80180D64
  c->r[3]=0u+0x00000000u; // 80180D68
  W8(c->r[30]+0x00000000u,c->r[0]); // 80180D6C
L_80180D70:;
  c->r[11]=c->r[1]+0x00000070u; // 80180D70
  c->lr=0x80180D78u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80180D74
  c->r[0]=R32(c->r[1]+0x00000074u); // 80180D78
  c->lr=c->r[0]; // 80180D7C
  c->r[1]=c->r[1]+0x00000070u; // 80180D80
  return; // 80180D84
}

// NANDPrivateGetTypeAsync
void f_80180D88(Ctx* __restrict c) {
  trace_call(0x80180D88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180D88
  c->r[0]=c->lr; // 80180D8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80180D90
  c->r[0]=R32(c->r[13]+0xFFFFAF10u); // 80180D94
  cmps(c,0,(int32_t)c->r[0],2); // 80180D98
  if (crb(c,2)) { goto L_80180DA8; } // 80180D9C
  c->r[3]=0u+0xFFFFFF80u; // 80180DA0
  goto L_80180DC0; // 80180DA4
L_80180DA8:;
  W32(c->r[6]+0x00000004u,c->r[5]); // 80180DA8
  c->r[5]=c->r[6]|c->r[6]; // 80180DAC
  c->r[6]=0u+0x00000001u; // 80180DB0
  c->r[7]=0u+0x00000001u; // 80180DB4
  c->lr=0x80180DBCu; f_80180AB4(c); // 80180DB8
  c->lr=0x80180DC0u; f_80180184(c); // 80180DBC
L_80180DC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180DC0
  c->lr=c->r[0]; // 80180DC4
  c->r[1]=c->r[1]+0x00000010u; // 80180DC8
  return; // 80180DCC
}

// nandGetTypeCallback
void f_80180DD0(Ctx* __restrict c) {
  trace_call(0x80180DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180DD0
  c->r[0]=c->lr; // 80180DD4
  cmps(c,0,(int32_t)c->r[3],0); // 80180DD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80180DDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80180DE0
  c->r[31]=c->r[4]|c->r[4]; // 80180DE4
  if (crb(c,2)) { goto L_80180DF4; } // 80180DE8
  cmps(c,0,(int32_t)c->r[3],-102); // 80180DEC
  if (!crb(c,2)) { goto L_80180E08; } // 80180DF0
L_80180DF4:;
  c->r[4]=R32(c->r[4]+0x00000088u); // 80180DF4
  c->r[0]=0u+0x00000002u; // 80180DF8
  c->r[3]=0u+0x00000000u; // 80180DFC
  W8(c->r[4]+0x00000000u,c->r[0]); // 80180E00
  goto L_80180E20; // 80180E04
L_80180E08:;
  cmps(c,0,(int32_t)c->r[3],-101); // 80180E08
  if (!crb(c,2)) { goto L_80180E20; } // 80180E0C
  c->r[4]=R32(c->r[4]+0x00000088u); // 80180E10
  c->r[0]=0u+0x00000001u; // 80180E14
  c->r[3]=0u+0x00000000u; // 80180E18
  W8(c->r[4]+0x00000000u,c->r[0]); // 80180E1C
L_80180E20:;
  c->lr=0x80180E24u; f_80180184(c); // 80180E20
  c->r[12]=R32(c->r[31]+0x00000004u); // 80180E24
  c->r[4]=c->r[31]|c->r[31]; // 80180E28
  c->ctr=c->r[12]; // 80180E2C
  if (true) { c->lr=0x80180E34u; dispatch(c,c->ctr); } // 80180E30
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180E34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80180E38
  c->lr=c->r[0]; // 80180E3C
  c->r[1]=c->r[1]+0x00000010u; // 80180E40
  return; // 80180E44
}

// fn_80180E48
void f_80180E48(Ctx* __restrict c) {
  c->r[3]=0u+0x80460000u; // 80180E48
  c->r[3]=c->r[3]+0xFFFFEBC0u; // 80180E4C
  return; // 80180E50
}

// NANDInitBanner
void f_80180E54(Ctx* __restrict c) {
  trace_call(0x80180E54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180E54
  c->r[0]=c->lr; // 80180E58
  c->r[7]=0u+0x00010000u; // 80180E5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80180E60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80180E64
  c->r[31]=c->r[6]|c->r[6]; // 80180E68
  W32(c->r[1]+0x00000018u,c->r[30]); // 80180E6C
  c->r[30]=c->r[5]|c->r[5]; // 80180E70
  c->r[5]=c->r[7]+0xFFFFF0A0u; // 80180E74
  W32(c->r[1]+0x00000014u,c->r[29]); // 80180E78
  c->r[29]=c->r[4]|c->r[4]; // 80180E7C
  c->r[4]=0u+0x00000000u; // 80180E80
  W32(c->r[1]+0x00000010u,c->r[28]); // 80180E84
  c->r[28]=c->r[3]|c->r[3]; // 80180E88
  c->lr=0x80180E90u; f_8000443C(c); // 80180E8C
  c->r[3]=0u+0x57490000u; // 80180E90
  W32(c->r[28]+0x00000004u,c->r[29]); // 80180E94
  c->r[0]=c->r[3]+0x0000424Eu; // 80180E98
  c->r[4]=c->r[13]+0xFFFF9170u; // 80180E9C
  W32(c->r[28]+0x00000000u,c->r[0]); // 80180EA0
  c->r[3]=c->r[30]|c->r[30]; // 80180EA4
  c->lr=0x80180EACu; f_8025E9A4(c); // 80180EA8
  cmps(c,0,(int32_t)c->r[3],0); // 80180EAC
  if (!crb(c,2)) { goto L_80180EC8; } // 80180EB0
  c->r[3]=c->r[28]+0x00000020u; // 80180EB4
  c->r[4]=c->r[13]+0xFFFF9174u; // 80180EB8
  c->r[5]=0u+0x00000020u; // 80180EBC
  c->lr=0x80180EC4u; f_8025E960(c); // 80180EC0
  goto L_80180ED8; // 80180EC4
L_80180EC8:;
  c->r[4]=c->r[30]|c->r[30]; // 80180EC8
  c->r[3]=c->r[28]+0x00000020u; // 80180ECC
  c->r[5]=0u+0x00000020u; // 80180ED0
  c->lr=0x80180ED8u; f_8025E960(c); // 80180ED4
L_80180ED8:;
  c->r[3]=c->r[31]|c->r[31]; // 80180ED8
  c->r[4]=c->r[13]+0xFFFF9170u; // 80180EDC
  c->lr=0x80180EE4u; f_8025E9A4(c); // 80180EE0
  cmps(c,0,(int32_t)c->r[3],0); // 80180EE4
  if (!crb(c,2)) { goto L_80180F00; } // 80180EE8
  c->r[3]=c->r[28]+0x00000060u; // 80180EEC
  c->r[4]=c->r[13]+0xFFFF9174u; // 80180EF0
  c->r[5]=0u+0x00000020u; // 80180EF4
  c->lr=0x80180EFCu; f_8025E960(c); // 80180EF8
  goto L_80180F10; // 80180EFC
L_80180F00:;
  c->r[4]=c->r[31]|c->r[31]; // 80180F00
  c->r[3]=c->r[28]+0x00000060u; // 80180F04
  c->r[5]=0u+0x00000020u; // 80180F08
  c->lr=0x80180F10u; f_8025E960(c); // 80180F0C
L_80180F10:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80180F10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80180F14
  c->r[30]=R32(c->r[1]+0x00000018u); // 80180F18
  c->r[29]=R32(c->r[1]+0x00000014u); // 80180F1C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80180F20
  c->lr=c->r[0]; // 80180F24
  c->r[1]=c->r[1]+0x00000020u; // 80180F28
  return; // 80180F2C
}

// NANDSecretGetUsage
void f_80180F30(Ctx* __restrict c) {
  trace_call(0x80180F30u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180F30
  c->r[0]=c->lr; // 80180F34
  W32(c->r[1]+0x00000064u,c->r[0]); // 80180F38
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80180F3C
  c->r[31]=c->r[5]|c->r[5]; // 80180F40
  W32(c->r[1]+0x00000058u,c->r[30]); // 80180F44
  c->r[30]=c->r[4]|c->r[4]; // 80180F48
  W32(c->r[1]+0x00000054u,c->r[29]); // 80180F4C
  c->r[29]=c->r[3]|c->r[3]; // 80180F50
  c->lr=0x80180F58u; f_8018016C(c); // 80180F54
  cmps(c,0,(int32_t)c->r[3],0); // 80180F58
  if (!crb(c,2)) { goto L_80180F68; } // 80180F5C
  c->r[3]=0u+0xFFFFFF80u; // 80180F60
  goto L_80180FCC; // 80180F64
L_80180F68:;
  c->r[0]=0u+0x00000000u; // 80180F68
  c->r[4]=c->r[29]|c->r[29]; // 80180F6C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80180F70
  c->r[3]=c->r[1]+0x00000008u; // 80180F74
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80180F78
  W32(c->r[1]+0x00000010u,c->r[0]); // 80180F7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80180F80
  W32(c->r[1]+0x00000018u,c->r[0]); // 80180F84
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80180F88
  W32(c->r[1]+0x00000020u,c->r[0]); // 80180F8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80180F90
  W32(c->r[1]+0x00000028u,c->r[0]); // 80180F94
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80180F98
  W32(c->r[1]+0x00000030u,c->r[0]); // 80180F9C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80180FA0
  W32(c->r[1]+0x00000038u,c->r[0]); // 80180FA4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80180FA8
  W32(c->r[1]+0x00000040u,c->r[0]); // 80180FAC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80180FB0
  c->lr=0x80180FB8u; f_801802E4(c); // 80180FB4
  c->r[4]=c->r[30]|c->r[30]; // 80180FB8
  c->r[5]=c->r[31]|c->r[31]; // 80180FBC
  c->r[3]=c->r[1]+0x00000008u; // 80180FC0
  c->lr=0x80180FC8u; f_80188794(c); // 80180FC4
  c->lr=0x80180FCCu; f_80180184(c); // 80180FC8
L_80180FCC:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 80180FCC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80180FD0
  c->r[30]=R32(c->r[1]+0x00000058u); // 80180FD4
  c->r[29]=R32(c->r[1]+0x00000054u); // 80180FD8
  c->lr=c->r[0]; // 80180FDC
  c->r[1]=c->r[1]+0x00000060u; // 80180FE0
  return; // 80180FE4
}

// nandCalcUsage
void f_80180FE8(Ctx* __restrict c) {
  trace_call(0x80180FE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180FE8
  c->r[0]=c->lr; // 80180FEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80180FF0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80180FF4
  c->r[31]=0u+0x00000000u; // 80180FF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80180FFC
  c->r[30]=c->r[5]|c->r[5]; // 80181000
  W32(c->r[1]+0x00000014u,c->r[29]); // 80181004
  c->r[29]=c->r[4]|c->r[4]; // 80181008
  W32(c->r[1]+0x00000010u,c->r[28]); // 8018100C
  c->r[28]=c->r[3]|c->r[3]; // 80181010
  W32(c->r[3]+0x00000000u,c->r[31]); // 80181014
  c->r[3]=0u+0xFFFFFF8Bu; // 80181018
  W32(c->r[4]+0x00000000u,c->r[31]); // 8018101C
  goto L_80181078; // 80181020
L_80181024:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80181024
  c->r[4]=c->r[1]+0x0000000Cu; // 80181028
  c->r[5]=c->r[1]+0x00000008u; // 8018102C
  W32(c->r[1]+0x00000008u,c->r[31]); // 80181030
  c->r[3]=R32(c->r[30]+0x00000000u); // 80181034
  c->lr=0x8018103Cu; f_80188794(c); // 80181038
  cmps(c,0,(int32_t)c->r[3],0); // 8018103C
  if (!crb(c,2)) { goto L_80181068; } // 80181040
  c->r[4]=R32(c->r[28]+0x00000000u); // 80181044
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80181048
  c->r[0]=c->r[4]+c->r[0]; // 8018104C
  W32(c->r[28]+0x00000000u,c->r[0]); // 80181050
  c->r[4]=R32(c->r[29]+0x00000000u); // 80181054
  c->r[0]=R32(c->r[1]+0x00000008u); // 80181058
  c->r[0]=c->r[4]+c->r[0]; // 8018105C
  W32(c->r[29]+0x00000000u,c->r[0]); // 80181060
  goto L_80181074; // 80181064
L_80181068:;
  cmps(c,0,(int32_t)c->r[3],-106); // 80181068
  if (!crb(c,2)) { goto L_80181084; } // 8018106C
  c->r[3]=0u+0x00000000u; // 80181070
L_80181074:;
  c->r[30]=c->r[30]+0x00000004u; // 80181074
L_80181078:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80181078
  cmps(c,0,(int32_t)c->r[0],0); // 8018107C
  if (!crb(c,2)) { IRQCHK(c); goto L_80181024; } // 80181080
L_80181084:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80181084
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80181088
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018108C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80181090
  c->r[28]=R32(c->r[1]+0x00000010u); // 80181094
  c->lr=c->r[0]; // 80181098
  c->r[1]=c->r[1]+0x00000020u; // 8018109C
  return; // 801810A0
}

// NANDCheck
void f_801810A4(Ctx* __restrict c) {
  trace_call(0x801810A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801810A4
  c->r[0]=c->lr; // 801810A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801810AC
  c->r[0]=0u+0xFFFFFFFFu; // 801810B0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801810B4
  c->r[31]=c->r[5]|c->r[5]; // 801810B8
  W32(c->r[1]+0x00000028u,c->r[30]); // 801810BC
  c->r[30]=c->r[4]|c->r[4]; // 801810C0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801810C4
  c->r[29]=c->r[3]|c->r[3]; // 801810C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801810CC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801810D0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801810D4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801810D8
  c->lr=0x801810E0u; f_8018016C(c); // 801810DC
  cmps(c,0,(int32_t)c->r[3],0); // 801810E0
  if (!crb(c,2)) { goto L_801810F0; } // 801810E4
  c->r[3]=0u+0xFFFFFF80u; // 801810E8
  goto L_80181190; // 801810EC
L_801810F0:;
  c->lr=0x801810F4u; f_80180E48(c); // 801810F0
  c->r[4]=c->r[1]+0x00000014u; // 801810F4
  c->r[5]=c->r[1]+0x00000010u; // 801810F8
  c->lr=0x80181100u; f_80188794(c); // 801810FC
  cmps(c,0,(int32_t)c->r[3],0); // 80181100
  if (crb(c,2)) { goto L_80181110; } // 80181104
  c->lr=0x8018110Cu; f_80180184(c); // 80181108
  goto L_80181190; // 8018110C
L_80181110:;
  c->r[5]=0u+0x802E0000u; // 80181110
  c->r[3]=c->r[1]+0x0000000Cu; // 80181114
  c->r[4]=c->r[1]+0x00000008u; // 80181118
  c->r[5]=c->r[5]+0xFFFFC030u; // 8018111C
  c->lr=0x80181124u; f_80180FE8(c); // 80181120
  cmps(c,0,(int32_t)c->r[3],0); // 80181124
  if (crb(c,2)) { goto L_80181134; } // 80181128
  c->lr=0x80181130u; f_80180184(c); // 8018112C
  goto L_80181190; // 80181130
L_80181134:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80181134
  c->r[5]=0u+0x00000000u; // 80181138
  c->r[4]=R32(c->r[1]+0x00000008u); // 8018113C
  c->r[0]=c->r[0]+c->r[29]; // 80181140
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80181144
  cmpu(c,0,c->r[0],0x00000400u); // 80181148
  c->r[0]=R32(c->r[1]+0x00000010u); // 8018114C
  if (!crb(c,1)) { goto L_80181158; } // 80181150
  c->r[5]=c->r[5]|0x00000001u; // 80181154
L_80181158:;
  c->r[0]=c->r[0]+c->r[30]; // 80181158
  cmpu(c,0,c->r[0],0x00000021u); // 8018115C
  if (!crb(c,1)) { goto L_80181168; } // 80181160
  c->r[5]=c->r[5]|0x00000002u; // 80181164
L_80181168:;
  c->r[0]=c->r[3]+c->r[29]; // 80181168
  cmpu(c,0,c->r[0],0x00004400u); // 8018116C
  if (!crb(c,1)) { goto L_80181178; } // 80181170
  c->r[5]=c->r[5]|0x00000004u; // 80181174
L_80181178:;
  c->r[0]=c->r[4]+c->r[30]; // 80181178
  cmpu(c,0,c->r[0],0x00000FA0u); // 8018117C
  if (!crb(c,1)) { goto L_80181188; } // 80181180
  c->r[5]=c->r[5]|0x00000008u; // 80181184
L_80181188:;
  W32(c->r[31]+0x00000000u,c->r[5]); // 80181188
  c->r[3]=0u+0x00000000u; // 8018118C
L_80181190:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80181190
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80181194
  c->r[30]=R32(c->r[1]+0x00000028u); // 80181198
  c->r[29]=R32(c->r[1]+0x00000024u); // 8018119C
  c->lr=c->r[0]; // 801811A0
  c->r[1]=c->r[1]+0x00000030u; // 801811A4
  return; // 801811A8
}

// reserveFileDescriptor
void f_801811AC(Ctx* __restrict c) {
  trace_call(0x801811ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801811AC
  c->r[0]=c->lr; // 801811B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801811B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801811B8
  c->lr=0x801811C0u; f_80154410(c); // 801811BC
  c->r[0]=R32(c->r[13]+0xFFFF9188u); // 801811C0
  cmps(c,0,(int32_t)c->r[0],-255); // 801811C4
  if (!crb(c,2)) { goto L_801811DC; } // 801811C8
  c->r[0]=0u+0xFFFFFF02u; // 801811CC
  c->r[31]=0u+0x00000000u; // 801811D0
  W32(c->r[13]+0xFFFF9188u,c->r[0]); // 801811D4
  goto L_801811E0; // 801811D8
L_801811DC:;
  c->r[31]=0u+0x00000001u; // 801811DC
L_801811E0:;
  c->lr=0x801811E4u; f_80154438(c); // 801811E0
  c->r[0]=cntlz(c->r[31]); // 801811E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801811E8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801811EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801811F0
  c->lr=c->r[0]; // 801811F4
  c->r[1]=c->r[1]+0x00000010u; // 801811F8
  return; // 801811FC
}

// NANDLoggingAddMessageAsync
void f_80181200(Ctx* __restrict c) {
  trace_call(0x80181200u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181200
  c->r[0]=c->lr; // 80181204
  W32(c->r[1]+0x00000084u,c->r[0]); // 80181208
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8018120C
  c->r[31]=c->r[4]|c->r[4]; // 80181210
  W32(c->r[1]+0x00000078u,c->r[30]); // 80181214
  c->r[30]=c->r[3]|c->r[3]; // 80181218
  if (!crb(c,6)) { goto L_80181240; } // 8018121C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 80181220
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 80181224
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 80181228
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 8018122C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 80181230
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 80181234
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 80181238
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 8018123C
L_80181240:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 80181240
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80181244
  W32(c->r[1]+0x00000010u,c->r[5]); // 80181248
  W32(c->r[1]+0x00000014u,c->r[6]); // 8018124C
  W32(c->r[1]+0x00000018u,c->r[7]); // 80181250
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 80181254
  W32(c->r[1]+0x00000020u,c->r[9]); // 80181258
  W32(c->r[1]+0x00000024u,c->r[10]); // 8018125C
  c->lr=0x80181264u; f_801811AC(c); // 80181260
  cmps(c,0,(int32_t)c->r[3],0); // 80181264
  if (!crb(c,2)) { goto L_80181274; } // 80181268
  c->r[3]=0u+0x00000000u; // 8018126C
  goto L_801812E0; // 80181270
L_80181274:;
  c->r[4]=c->r[1]+0x00000088u; // 80181274
  c->r[0]=c->r[1]+0x00000008u; // 80181278
  c->r[5]=0u+0x02000000u; // 8018127C
  c->r[3]=0u+0x80460000u; // 80181280
  W32(c->r[1]+0x00000068u,c->r[5]); // 80181284
  c->r[6]=c->r[1]+0x00000068u; // 80181288
  c->r[5]=c->r[31]|c->r[31]; // 8018128C
  c->r[3]=c->r[3]+0xFFFFEC00u; // 80181290
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 80181294
  c->r[4]=0u+0x00000100u; // 80181298
  W32(c->r[1]+0x00000070u,c->r[0]); // 8018129C
  c->lr=0x801812A4u; f_8025A9E4(c); // 801812A0
  c->r[0]=0u+0x00000001u; // 801812A4
  c->r[3]=0u+0x802E0000u; // 801812A8
  c->r[5]=0u+0x80180000u; // 801812AC
  W32(c->r[13]+0xFFFFAF18u,c->r[30]); // 801812B0
  c->r[3]=c->r[3]+0xFFFFC060u; // 801812B4
  c->r[4]=0u+0x00000003u; // 801812B8
  W32(c->r[13]+0xFFFFAF1Cu,c->r[0]); // 801812BC
  c->r[5]=c->r[5]+0x000012F8u; // 801812C0
  c->r[6]=0u+0x00000000u; // 801812C4
  c->lr=0x801812CCu; f_80188B7C(c); // 801812C8
  cmps(c,0,(int32_t)c->r[3],0); // 801812CC
  if (!crb(c,2)) { goto L_801812DC; } // 801812D0
  c->r[3]=0u+0x00000001u; // 801812D4
  goto L_801812E0; // 801812D8
L_801812DC:;
  c->r[3]=0u+0x00000000u; // 801812DC
L_801812E0:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 801812E0
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801812E4
  c->r[30]=R32(c->r[1]+0x00000078u); // 801812E8
  c->lr=c->r[0]; // 801812EC
  c->r[1]=c->r[1]+0x00000080u; // 801812F0
  return; // 801812F4
}

// asyncRoutine
void f_801812F8(Ctx* __restrict c) {
  trace_call(0x801812F8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801812F8
  c->r[0]=c->lr; // 801812FC
  W32(c->r[1]+0x00000094u,c->r[0]); // 80181300
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 80181304
  c->r[31]=c->r[3]|c->r[3]; // 80181308
  W32(c->r[1]+0x00000088u,c->r[30]); // 8018130C
  c->r[30]=0u+0x80460000u; // 80181310
  c->r[30]=c->r[30]+0xFFFFEC00u; // 80181314
  c->r[4]=R32(c->r[13]+0xFFFFAF1Cu); // 80181318
  c->r[0]=c->r[4]+0x00000001u; // 8018131C
  cmps(c,0,(int32_t)c->r[0],2); // 80181320
  W32(c->r[13]+0xFFFFAF1Cu,c->r[0]); // 80181324
  if (!crb(c,2)) { goto L_80181390; } // 80181328
  cmps(c,0,(int32_t)c->r[3],0); // 8018132C
  if (crb(c,0)) { goto L_80181374; } // 80181330
  c->r[6]=0u+0x80180000u; // 80181334
  W32(c->r[13]+0xFFFF9188u,c->r[3]); // 80181338
  c->r[6]=c->r[6]+0x000012F8u; // 8018133C
  c->r[4]=0u+0x00000000u; // 80181340
  c->r[5]=0u+0x00000000u; // 80181344
  c->r[7]=0u+0x00000000u; // 80181348
  c->lr=0x80181350u; f_80188C38(c); // 8018134C
  cmps(c,0,(int32_t)c->r[3],0); // 80181350
  if (crb(c,2)) { goto L_80181764; } // 80181354
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 80181358
  cmps(c,0,(int32_t)c->r[12],0); // 8018135C
  if (crb(c,2)) { goto L_80181764; } // 80181360
  c->r[3]=0u+0x00000000u; // 80181364
  c->ctr=c->r[12]; // 80181368
  if (true) { c->lr=0x80181370u; dispatch(c,c->ctr); } // 8018136C
  goto L_80181764; // 80181370
L_80181374:;
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 80181374
  cmps(c,0,(int32_t)c->r[12],0); // 80181378
  if (crb(c,2)) { goto L_80181764; } // 8018137C
  c->r[3]=0u+0x00000000u; // 80181380
  c->ctr=c->r[12]; // 80181384
  if (true) { c->lr=0x8018138Cu; dispatch(c,c->ctr); } // 80181388
  goto L_80181764; // 8018138C
L_80181390:;
  cmps(c,0,(int32_t)c->r[0],3); // 80181390
  if (!crb(c,2)) { goto L_801813FC; } // 80181394
  cmps(c,0,(int32_t)c->r[3],0); // 80181398
  if (!crb(c,2)) { goto L_801813E0; } // 8018139C
  c->r[6]=0u+0x80180000u; // 801813A0
  c->r[3]=R32(c->r[13]+0xFFFF9188u); // 801813A4
  c->r[4]=c->r[30]+0x00000100u; // 801813A8
  c->r[5]=0u+0x00000100u; // 801813AC
  c->r[6]=c->r[6]+0x000012F8u; // 801813B0
  c->r[7]=0u+0x00000000u; // 801813B4
  c->lr=0x801813BCu; f_80188CE4(c); // 801813B8
  cmps(c,0,(int32_t)c->r[3],0); // 801813BC
  if (crb(c,2)) { goto L_80181764; } // 801813C0
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 801813C4
  cmps(c,0,(int32_t)c->r[12],0); // 801813C8
  if (crb(c,2)) { goto L_80181764; } // 801813CC
  c->r[3]=0u+0x00000000u; // 801813D0
  c->ctr=c->r[12]; // 801813D4
  if (true) { c->lr=0x801813DCu; dispatch(c,c->ctr); } // 801813D8
  goto L_80181764; // 801813DC
L_801813E0:;
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 801813E0
  cmps(c,0,(int32_t)c->r[12],0); // 801813E4
  if (crb(c,2)) { goto L_80181764; } // 801813E8
  c->r[3]=0u+0x00000000u; // 801813EC
  c->ctr=c->r[12]; // 801813F0
  if (true) { c->lr=0x801813F8u; dispatch(c,c->ctr); } // 801813F4
  goto L_80181764; // 801813F8
L_801813FC:;
  cmps(c,0,(int32_t)c->r[0],4); // 801813FC
  if (!crb(c,2)) { goto L_80181468; } // 80181400
  cmps(c,0,(int32_t)c->r[3],256); // 80181404
  if (!crb(c,2)) { goto L_8018144C; } // 80181408
  c->r[6]=0u+0x80180000u; // 8018140C
  c->r[3]=R32(c->r[13]+0xFFFF9188u); // 80181410
  c->r[6]=c->r[6]+0x000012F8u; // 80181414
  c->r[4]=0u+0x00000000u; // 80181418
  c->r[5]=0u+0x00000000u; // 8018141C
  c->r[7]=0u+0x00000000u; // 80181420
  c->lr=0x80181428u; f_80188C38(c); // 80181424
  cmps(c,0,(int32_t)c->r[3],0); // 80181428
  if (crb(c,2)) { goto L_80181764; } // 8018142C
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 80181430
  cmps(c,0,(int32_t)c->r[12],0); // 80181434
  if (crb(c,2)) { goto L_80181764; } // 80181438
  c->r[3]=0u+0x00000000u; // 8018143C
  c->ctr=c->r[12]; // 80181440
  if (true) { c->lr=0x80181448u; dispatch(c,c->ctr); } // 80181444
  goto L_80181764; // 80181448
L_8018144C:;
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 8018144C
  cmps(c,0,(int32_t)c->r[12],0); // 80181450
  if (crb(c,2)) { goto L_80181764; } // 80181454
  c->r[3]=0u+0x00000000u; // 80181458
  c->ctr=c->r[12]; // 8018145C
  if (true) { c->lr=0x80181464u; dispatch(c,c->ctr); } // 80181460
  goto L_80181764; // 80181464
L_80181468:;
  cmps(c,0,(int32_t)c->r[0],5); // 80181468
  if (!crb(c,2)) { goto L_801815C4; } // 8018146C
  cmps(c,0,(int32_t)c->r[3],0); // 80181470
  if (!crb(c,2)) { goto L_801815A8; } // 80181474
  c->r[3]=c->r[30]+0x00000100u; // 80181478
  c->r[0]=0u+0x00000000u; // 8018147C
  W8(c->r[3]+0x000000FFu,c->r[0]); // 80181480
  c->lr=0x80181488u; f_8025E880(c); // 80181484
  c->r[31]=c->r[3]|c->r[3]; // 80181488
  c->r[3]=c->r[30]+0x00000200u; // 8018148C
  c->r[4]=0u+0x00000020u; // 80181490
  c->r[5]=0u+0x000000FEu; // 80181494
  c->lr=0x8018149Cu; f_8000443C(c); // 80181498
  c->lr=0x801814A0u; f_8015848C(c); // 8018149C
  c->r[5]=c->r[1]+0x00000058u; // 801814A0
  c->lr=0x801814A8u; f_801586D8(c); // 801814A4
  c->lr=0x801814ACu; f_80180E48(c); // 801814A8
  c->r[4]=c->r[3]|c->r[3]; // 801814AC
  c->r[3]=c->r[1]+0x00000018u; // 801814B0
  c->r[4]=c->r[4]+0x00000007u; // 801814B4
  c->r[5]=0u+0x00000011u; // 801814B8
  c->lr=0x801814C0u; f_8025C504(c); // 801814BC
  c->r[0]=0u+0x0000002Du; // 801814C0
  c->r[4]=0u+0x00000000u; // 801814C4
  W8(c->r[1]+0x00000029u,c->r[4]); // 801814C8
  c->r[3]=0u+0x82080000u; // 801814CC
  c->r[5]=0u+0x802E0000u; // 801814D0
  c->r[4]=c->r[1]+0x00000018u; // 801814D4
  W8(c->r[1]+0x00000020u,c->r[0]); // 801814D8
  c->r[0]=c->r[3]+0x00002083u; // 801814DC
  c->r[3]=R32(c->r[1]+0x0000005Cu); // 801814E0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[31])>>32); // 801814E4
  c->r[6]=c->r[30]+0x00000000u; // 801814E8
  W32(c->r[1]+0x00000008u,c->r[3]); // 801814EC
  c->r[5]=c->r[5]+0xFFFFC07Cu; // 801814F0
  c->r[3]=R32(c->r[1]+0x00000058u); // 801814F4
  c->r[0]=c->r[0]+c->r[31]; // 801814F8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801814FC
  c->r[0]=sraw(c,c->r[0],5); // 80181500
  c->r[3]=c->r[30]+0x00000200u; // 80181504
  W32(c->r[1]+0x00000010u,c->r[4]); // 80181508
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8018150C
  c->r[0]=c->r[0]+c->r[4]; // 80181510
  W32(c->r[1]+0x00000014u,c->r[6]); // 80181514
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)63); // 80181518
  c->r[4]=0u+0x00000100u; // 8018151C
  c->r[8]=R32(c->r[1]+0x00000068u); // 80181520
  c->r[6]=c->r[31]-c->r[0]; // 80181524
  c->r[7]=R32(c->r[1]+0x0000006Cu); // 80181528
  c->r[9]=R32(c->r[1]+0x00000064u); // 8018152C
  c->r[6]=c->r[6]+0x00000001u; // 80181530
  c->r[10]=R32(c->r[1]+0x00000060u); // 80181534
  c->r[8]=c->r[8]+0x00000001u; // 80181538
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018153C
  c->lr=0x80181544u; f_8025AAE8(c); // 80181540
  cmps(c,0,(int32_t)c->r[3],256); // 80181544
  if (!crb(c,0)) { goto L_80181558; } // 80181548
  c->r[4]=c->r[30]+0x00000200u; // 8018154C
  c->r[0]=0u+0x00000020u; // 80181550
  W8(c->r[4]+c->r[3],c->r[0]); // 80181554
L_80181558:;
  c->r[4]=c->r[30]+0x00000200u; // 80181558
  c->r[3]=0u+0x0000000Du; // 8018155C
  c->r[0]=0u+0x0000000Au; // 80181560
  c->r[6]=0u+0x80180000u; // 80181564
  W8(c->r[4]+0x000000FEu,c->r[3]); // 80181568
  c->r[6]=c->r[6]+0x000012F8u; // 8018156C
  c->r[3]=R32(c->r[13]+0xFFFF9188u); // 80181570
  c->r[5]=0u+0x00000100u; // 80181574
  W8(c->r[4]+0x000000FFu,c->r[0]); // 80181578
  c->r[7]=0u+0x00000000u; // 8018157C
  c->lr=0x80181584u; f_80188DA8(c); // 80181580
  cmps(c,0,(int32_t)c->r[3],0); // 80181584
  if (crb(c,2)) { goto L_80181764; } // 80181588
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 8018158C
  cmps(c,0,(int32_t)c->r[12],0); // 80181590
  if (crb(c,2)) { goto L_80181764; } // 80181594
  c->r[3]=0u+0x00000000u; // 80181598
  c->ctr=c->r[12]; // 8018159C
  if (true) { c->lr=0x801815A4u; dispatch(c,c->ctr); } // 801815A0
  goto L_80181764; // 801815A4
L_801815A8:;
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 801815A8
  cmps(c,0,(int32_t)c->r[12],0); // 801815AC
  if (crb(c,2)) { goto L_80181764; } // 801815B0
  c->r[3]=0u+0x00000000u; // 801815B4
  c->ctr=c->r[12]; // 801815B8
  if (true) { c->lr=0x801815C0u; dispatch(c,c->ctr); } // 801815BC
  goto L_80181764; // 801815C0
L_801815C4:;
  cmps(c,0,(int32_t)c->r[0],6); // 801815C4
  if (!crb(c,2)) { goto L_8018163C; } // 801815C8
  cmps(c,0,(int32_t)c->r[3],256); // 801815CC
  if (!crb(c,2)) { goto L_80181620; } // 801815D0
  c->r[3]=c->r[30]+0x00000100u; // 801815D4
  c->lr=0x801815DCu; f_8025E880(c); // 801815D8
  c->r[0]=c->r[3]|c->r[3]; // 801815DC
  c->r[6]=0u+0x80180000u; // 801815E0
  c->r[3]=R32(c->r[13]+0xFFFF9188u); // 801815E4
  c->r[4]=rotl(c->r[0],8)&0xFFFFFF00u; // 801815E8
  c->r[6]=c->r[6]+0x000012F8u; // 801815EC
  c->r[5]=0u+0x00000000u; // 801815F0
  c->r[7]=0u+0x00000000u; // 801815F4
  c->lr=0x801815FCu; f_80188C38(c); // 801815F8
  cmps(c,0,(int32_t)c->r[3],0); // 801815FC
  if (crb(c,2)) { goto L_80181764; } // 80181600
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 80181604
  cmps(c,0,(int32_t)c->r[12],0); // 80181608
  if (crb(c,2)) { goto L_80181764; } // 8018160C
  c->r[3]=0u+0x00000000u; // 80181610
  c->ctr=c->r[12]; // 80181614
  if (true) { c->lr=0x8018161Cu; dispatch(c,c->ctr); } // 80181618
  goto L_80181764; // 8018161C
L_80181620:;
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 80181620
  cmps(c,0,(int32_t)c->r[12],0); // 80181624
  if (crb(c,2)) { goto L_80181764; } // 80181628
  c->r[3]=0u+0x00000000u; // 8018162C
  c->ctr=c->r[12]; // 80181630
  if (true) { c->lr=0x80181638u; dispatch(c,c->ctr); } // 80181634
  goto L_80181764; // 80181638
L_8018163C:;
  cmps(c,0,(int32_t)c->r[0],7); // 8018163C
  if (!crb(c,2)) { goto L_801816B4; } // 80181640
  c->r[3]=c->r[30]+0x00000100u; // 80181644
  c->lr=0x8018164Cu; f_8025E880(c); // 80181648
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 8018164C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80181650
  if (!crb(c,2)) { goto L_80181698; } // 80181654
  c->r[6]=0u+0x80180000u; // 80181658
  c->r[3]=R32(c->r[13]+0xFFFF9188u); // 8018165C
  c->r[4]=c->r[30]+0x00000200u; // 80181660
  c->r[5]=0u+0x00000100u; // 80181664
  c->r[6]=c->r[6]+0x000012F8u; // 80181668
  c->r[7]=0u+0x00000000u; // 8018166C
  c->lr=0x80181674u; f_80188DA8(c); // 80181670
  cmps(c,0,(int32_t)c->r[3],0); // 80181674
  if (crb(c,2)) { goto L_80181764; } // 80181678
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 8018167C
  cmps(c,0,(int32_t)c->r[12],0); // 80181680
  if (crb(c,2)) { goto L_80181764; } // 80181684
  c->r[3]=0u+0x00000000u; // 80181688
  c->ctr=c->r[12]; // 8018168C
  if (true) { c->lr=0x80181694u; dispatch(c,c->ctr); } // 80181690
  goto L_80181764; // 80181694
L_80181698:;
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 80181698
  cmps(c,0,(int32_t)c->r[12],0); // 8018169C
  if (crb(c,2)) { goto L_80181764; } // 801816A0
  c->r[3]=0u+0x00000000u; // 801816A4
  c->ctr=c->r[12]; // 801816A8
  if (true) { c->lr=0x801816B0u; dispatch(c,c->ctr); } // 801816AC
  goto L_80181764; // 801816B0
L_801816B4:;
  cmps(c,0,(int32_t)c->r[0],8); // 801816B4
  if (!crb(c,2)) { goto L_80181718; } // 801816B8
  cmps(c,0,(int32_t)c->r[3],256); // 801816BC
  if (!crb(c,2)) { goto L_801816FC; } // 801816C0
  c->r[4]=0u+0x80180000u; // 801816C4
  c->r[3]=R32(c->r[13]+0xFFFF9188u); // 801816C8
  c->r[4]=c->r[4]+0x000012F8u; // 801816CC
  c->r[5]=0u+0x00000000u; // 801816D0
  c->lr=0x801816D8u; f_80188E50(c); // 801816D4
  cmps(c,0,(int32_t)c->r[3],0); // 801816D8
  if (crb(c,2)) { goto L_80181764; } // 801816DC
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 801816E0
  cmps(c,0,(int32_t)c->r[12],0); // 801816E4
  if (crb(c,2)) { goto L_80181764; } // 801816E8
  c->r[3]=0u+0x00000000u; // 801816EC
  c->ctr=c->r[12]; // 801816F0
  if (true) { c->lr=0x801816F8u; dispatch(c,c->ctr); } // 801816F4
  goto L_80181764; // 801816F8
L_801816FC:;
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 801816FC
  cmps(c,0,(int32_t)c->r[12],0); // 80181700
  if (crb(c,2)) { goto L_80181764; } // 80181704
  c->r[3]=0u+0x00000000u; // 80181708
  c->ctr=c->r[12]; // 8018170C
  if (true) { c->lr=0x80181714u; dispatch(c,c->ctr); } // 80181710
  goto L_80181764; // 80181714
L_80181718:;
  cmps(c,0,(int32_t)c->r[0],9); // 80181718
  if (!crb(c,2)) { goto L_80181764; } // 8018171C
  cmps(c,0,(int32_t)c->r[3],0); // 80181720
  if (!crb(c,2)) { goto L_8018174C; } // 80181724
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 80181728
  c->r[0]=0u+0xFFFFFF01u; // 8018172C
  W32(c->r[13]+0xFFFF9188u,c->r[0]); // 80181730
  cmps(c,0,(int32_t)c->r[12],0); // 80181734
  if (crb(c,2)) { goto L_80181764; } // 80181738
  c->r[3]=0u+0x00000001u; // 8018173C
  c->ctr=c->r[12]; // 80181740
  if (true) { c->lr=0x80181748u; dispatch(c,c->ctr); } // 80181744
  goto L_80181764; // 80181748
L_8018174C:;
  c->r[12]=R32(c->r[13]+0xFFFFAF18u); // 8018174C
  cmps(c,0,(int32_t)c->r[12],0); // 80181750
  if (crb(c,2)) { goto L_80181764; } // 80181754
  c->r[3]=0u+0x00000000u; // 80181758
  c->ctr=c->r[12]; // 8018175C
  if (true) { c->lr=0x80181764u; dispatch(c,c->ctr); } // 80181760
L_80181764:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 80181764
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80181768
  c->r[30]=R32(c->r[1]+0x00000088u); // 8018176C
  c->lr=c->r[0]; // 80181770
  c->r[1]=c->r[1]+0x00000090u; // 80181774
  return; // 80181778
}

// SCInit
void f_8018177C(Ctx* __restrict c) {
  trace_call(0x8018177Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018177C
  c->r[0]=c->lr; // 80181780
  W32(c->r[1]+0x00000014u,c->r[0]); // 80181784
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80181788
  c->lr=0x80181790u; f_80154410(c); // 8018178C
  c->r[0]=R8(c->r[13]+0xFFFFAF36u); // 80181790
  cmps(c,0,(int32_t)c->r[0],0); // 80181794
  if (crb(c,2)) { goto L_801817A4; } // 80181798
  c->lr=0x801817A0u; f_80154438(c); // 8018179C
  goto L_80181808; // 801817A0
L_801817A4:;
  c->r[31]=0u+0x00000001u; // 801817A4
  W8(c->r[13]+0xFFFFAF36u,c->r[31]); // 801817A8
  W8(c->r[13]+0xFFFFAF20u,c->r[31]); // 801817AC
  c->lr=0x801817B4u; f_80154438(c); // 801817B0
  c->r[3]=R32(c->r[13]+0xFFFF9190u); // 801817B4
  c->lr=0x801817BCu; f_8014E714(c); // 801817B8
  c->r[3]=0u+0x80460000u; // 801817BC
  c->r[3]=c->r[3]+0xFFFFEF00u; // 801817C0
  c->lr=0x801817C8u; f_8015715C(c); // 801817C4
  c->lr=0x801817CCu; f_8014D54C(c); // 801817C8
  c->r[0]=rotl(c->r[3],0)&0x10000000u; cr0(c,c->r[0]); // 801817CC
  if (crb(c,2)) { goto L_801817D8; } // 801817D0
  W8(c->r[13]+0xFFFFAF34u,c->r[31]); // 801817D4
L_801817D8:;
  c->lr=0x801817DCu; f_80180450(c); // 801817D8
  cmps(c,0,(int32_t)c->r[3],0); // 801817DC
  if (!crb(c,2)) { goto L_80181800; } // 801817E0
  c->r[3]=0u+0x80460000u; // 801817E4
  c->r[4]=0u+0x00004000u; // 801817E8
  c->r[3]=c->r[3]+0xFFFFF0A0u; // 801817EC
  c->r[5]=0u+0x00000000u; // 801817F0
  c->lr=0x801817F8u; f_80181938(c); // 801817F4
  cmps(c,0,(int32_t)c->r[3],0); // 801817F8
  if (crb(c,2)) { goto L_80181808; } // 801817FC
L_80181800:;
  c->r[0]=0u+0x00000002u; // 80181800
  W8(c->r[13]+0xFFFFAF20u,c->r[0]); // 80181804
L_80181808:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80181808
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018180C
  c->lr=c->r[0]; // 80181810
  c->r[1]=c->r[1]+0x00000010u; // 80181814
  return; // 80181818
}

// SCCheckStatus
void f_8018181C(Ctx* __restrict c) {
  trace_call(0x8018181Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018181C
  c->r[0]=c->lr; // 80181820
  W32(c->r[1]+0x00000024u,c->r[0]); // 80181824
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80181828
  W32(c->r[1]+0x00000018u,c->r[30]); // 8018182C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80181830
  c->lr=0x80181838u; f_80154410(c); // 80181834
  c->r[29]=R8(c->r[13]+0xFFFFAF20u); // 80181838
  cmpu(c,0,c->r[29],0x00000003u); // 8018183C
  if (!crb(c,2)) { goto L_80181914; } // 80181840
  c->r[0]=0u+0x00000001u; // 80181844
  W8(c->r[13]+0xFFFFAF20u,c->r[0]); // 80181848
  c->lr=0x80181850u; f_80154438(c); // 8018184C
  c->r[31]=0u+0x80460000u; // 80181850
  c->r[31]=c->r[31]+0xFFFFEF00u; // 80181854
  c->r[3]=R32(c->r[31]+0x0000016Cu); // 80181858
  c->r[4]=R32(c->r[31]+0x0000017Cu); // 8018185C
  c->lr=0x80181864u; f_80181DD0(c); // 80181860
  cmps(c,0,(int32_t)c->r[3],0); // 80181864
  if (!crb(c,2)) { goto L_801818A8; } // 80181868
  c->lr=0x80181870u; f_80154410(c); // 8018186C
  c->r[5]=0u+0x80460000u; // 80181870
  c->r[4]=R32(c->r[31]+0x0000016Cu); // 80181874
  c->r[5]=c->r[5]+0xFFFFF0A0u; // 80181878
  c->r[29]=c->r[3]|c->r[3]; // 8018187C
  cmpu(c,0,c->r[5],c->r[4]); // 80181880
  if (crb(c,2)) { goto L_80181894; } // 80181884
  c->r[3]=c->r[5]|c->r[5]; // 80181888
  c->r[5]=0u+0x00004000u; // 8018188C
  c->lr=0x80181894u; f_80004338(c); // 80181890
L_80181894:;
  c->r[0]=0u+0x00000000u; // 80181894
  c->r[3]=c->r[29]|c->r[29]; // 80181898
  W8(c->r[13]+0xFFFFAF35u,c->r[0]); // 8018189C
  c->lr=0x801818A4u; f_80154438(c); // 801818A0
  goto L_80181908; // 801818A4
L_801818A8:;
  c->lr=0x801818ACu; f_80154410(c); // 801818A8
  c->r[31]=R32(c->r[31]+0x0000016Cu); // 801818AC
  c->r[29]=c->r[3]|c->r[3]; // 801818B0
  c->r[30]=0u+0x00004000u; // 801818B4
  c->r[4]=0u+0x00000000u; // 801818B8
  c->r[3]=c->r[31]|c->r[31]; // 801818BC
  c->r[5]=0u+0x00004000u; // 801818C0
  c->lr=0x801818C8u; f_8000443C(c); // 801818C4
  cmpu(c,0,c->r[30],0x0000000Cu); // 801818C8
  if (!crb(c,1)) { goto L_801818F8; } // 801818CC
  c->r[3]=c->r[31]|c->r[31]; // 801818D0
  c->r[4]=c->r[13]+0xFFFF9288u; // 801818D4
  c->r[5]=0u+0x00000004u; // 801818D8
  c->lr=0x801818E0u; f_80004338(c); // 801818DC
  c->r[3]=c->r[31]+0x00003FFCu; // 801818E0
  c->r[4]=c->r[13]+0xFFFF9290u; // 801818E4
  c->r[5]=0u+0x00000004u; // 801818E8
  c->lr=0x801818F0u; f_80004338(c); // 801818EC
  c->r[0]=0u+0x00000008u; // 801818F0
  W16(c->r[31]+0x00000006u,c->r[0]); // 801818F4
L_801818F8:;
  c->r[0]=0u+0x00000000u; // 801818F8
  c->r[3]=c->r[29]|c->r[29]; // 801818FC
  W8(c->r[13]+0xFFFFAF35u,c->r[0]); // 80181900
  c->lr=0x80181908u; f_80154438(c); // 80181904
L_80181908:;
  c->r[29]=0u+0x00000000u; // 80181908
  W8(c->r[13]+0xFFFFAF20u,c->r[29]); // 8018190C
  goto L_80181918; // 80181910
L_80181914:;
  c->lr=0x80181918u; f_80154438(c); // 80181914
L_80181918:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80181918
  c->r[3]=c->r[29]|c->r[29]; // 8018191C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80181920
  c->r[29]=R32(c->r[1]+0x00000014u); // 80181924
  c->r[0]=R32(c->r[1]+0x00000024u); // 80181928
  c->lr=c->r[0]; // 8018192C
  c->r[1]=c->r[1]+0x00000020u; // 80181930
  return; // 80181934
}

// SCReloadConfFileAsync
void f_80181938(Ctx* __restrict c) {
  trace_call(0x80181938u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181938
  c->r[0]=c->lr; // 8018193C
  cmpu(c,0,c->r[4],0x00004000u); // 80181940
  W32(c->r[1]+0x00000024u,c->r[0]); // 80181944
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80181948
  W32(c->r[1]+0x00000018u,c->r[30]); // 8018194C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80181950
  c->r[29]=c->r[3]|c->r[3]; // 80181954
  if (!crb(c,0)) { goto L_80181964; } // 80181958
  c->r[3]=0u+0xFFFFFF80u; // 8018195C
  goto L_80181A30; // 80181960
L_80181964:;
  c->r[30]=0u+0x80460000u; // 80181964
  c->r[9]=0u+0x80270000u; // 80181968
  c->r[30]=c->r[30]+0xFFFFEF00u; // 8018196C
  c->r[31]=0u+0x00000000u; // 80181970
  c->r[8]=0u+0x80270000u; // 80181974
  c->r[4]=0u+0x80000000u; // 80181978
  c->r[7]=c->r[4]+0x00003800u; // 8018197C
  c->r[9]=c->r[9]+0x00006790u; // 80181980
  c->r[10]=0u+0x00000001u; // 80181984
  c->r[8]=c->r[8]+0x000067A8u; // 80181988
  c->r[6]=0u+0x00004000u; // 8018198C
  c->r[0]=0u+0x00000100u; // 80181990
  W32(c->r[30]+0x0000015Cu,c->r[5]); // 80181994
  c->r[4]=0u+0x00000000u; // 80181998
  c->r[5]=0u+0x00004000u; // 8018199C
  W8(c->r[13]+0xFFFFAF20u,c->r[10]); // 801819A0
  W32(c->r[30]+0x00000160u,c->r[31]); // 801819A4
  W8(c->r[30]+0x0000015Au,c->r[31]); // 801819A8
  W32(c->r[30]+0x0000017Cu,c->r[31]); // 801819AC
  W32(c->r[30]+0x00000180u,c->r[31]); // 801819B0
  W32(c->r[30]+0x00000164u,c->r[9]); // 801819B4
  W32(c->r[30]+0x00000168u,c->r[8]); // 801819B8
  W32(c->r[30]+0x0000016Cu,c->r[3]); // 801819BC
  W32(c->r[30]+0x00000170u,c->r[7]); // 801819C0
  W32(c->r[30]+0x00000174u,c->r[6]); // 801819C4
  W32(c->r[30]+0x00000178u,c->r[0]); // 801819C8
  c->lr=0x801819D0u; f_8000443C(c); // 801819CC
  c->r[3]=c->r[29]|c->r[29]; // 801819D0
  c->r[4]=c->r[13]+0xFFFF9288u; // 801819D4
  c->r[5]=0u+0x00000004u; // 801819D8
  c->lr=0x801819E0u; f_80004338(c); // 801819DC
  c->r[3]=c->r[29]+0x00003FFCu; // 801819E0
  c->r[4]=c->r[13]+0xFFFF9290u; // 801819E4
  c->r[5]=0u+0x00000004u; // 801819E8
  c->lr=0x801819F0u; f_80004338(c); // 801819EC
  c->r[0]=0u+0x00000008u; // 801819F0
  c->r[6]=0u+0x80180000u; // 801819F4
  W16(c->r[29]+0x00000006u,c->r[0]); // 801819F8
  c->r[4]=c->r[30]+0x00000008u; // 801819FC
  c->r[6]=c->r[6]+0x00001A4Cu; // 80181A00
  c->r[7]=c->r[30]+0x00000094u; // 80181A04
  c->r[0]=R8(c->r[30]+0x0000015Au); // 80181A08
  c->r[5]=0u+0x00000001u; // 80181A0C
  W8(c->r[30]+0x00000159u,c->r[31]); // 80181A10
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181A14
  c->r[3]=c->r[30]+c->r[0]; // 80181A18
  W32(c->r[13]+0xFFFFAF30u,c->r[31]); // 80181A1C
  c->r[3]=R32(c->r[3]+0x00000164u); // 80181A20
  W32(c->r[13]+0xFFFFAF28u,c->r[31]); // 80181A24
  W32(c->r[13]+0xFFFFAF24u,c->r[31]); // 80181A28
  c->lr=0x80181A30u; f_8017F1E4(c); // 80181A2C
L_80181A30:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80181A30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80181A34
  c->r[30]=R32(c->r[1]+0x00000018u); // 80181A38
  c->r[29]=R32(c->r[1]+0x00000014u); // 80181A3C
  c->lr=c->r[0]; // 80181A40
  c->r[1]=c->r[1]+0x00000020u; // 80181A44
  return; // 80181A48
}

// OpenCallbackFromReload
void f_80181A4C(Ctx* __restrict c) {
  trace_call(0x80181A4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181A4C
  c->r[0]=c->lr; // 80181A50
  cmps(c,0,(int32_t)c->r[3],0); // 80181A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80181A58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80181A5C
  c->r[31]=c->r[3]|c->r[3]; // 80181A60
  if (!crb(c,2)) { goto L_80181AA8; } // 80181A64
  c->r[4]=0u+0x80460000u; // 80181A68
  c->r[6]=0u+0x80180000u; // 80181A6C
  c->r[4]=c->r[4]+0xFFFFEF00u; // 80181A70
  c->r[5]=0u+0x00000001u; // 80181A74
  c->r[0]=R8(c->r[4]+0x0000015Au); // 80181A78
  c->r[3]=c->r[4]+0x00000008u; // 80181A7C
  W8(c->r[4]+0x00000159u,c->r[5]); // 80181A80
  c->r[7]=c->r[4]+0x00000094u; // 80181A84
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181A88
  c->r[6]=c->r[6]+0x00001B1Cu; // 80181A8C
  c->r[5]=c->r[4]+c->r[0]; // 80181A90
  c->r[4]=R32(c->r[5]+0x0000016Cu); // 80181A94
  c->r[5]=R32(c->r[5]+0x00000174u); // 80181A98
  c->lr=0x80181AA0u; f_8017E454(c); // 80181A9C
  cmps(c,0,(int32_t)c->r[3],0); // 80181AA0
  if (crb(c,2)) { goto L_80181B08; } // 80181AA4
L_80181AA8:;
  c->r[3]=0u+0x80460000u; // 80181AA8
  c->r[3]=c->r[3]+0xFFFFEF00u; // 80181AAC
  c->r[0]=R8(c->r[3]+0x0000015Au); // 80181AB0
  cmps(c,0,(int32_t)c->r[0],0); // 80181AB4
  if (!crb(c,2)) { goto L_80181AC0; } // 80181AB8
  W32(c->r[3]+0x00000160u,c->r[31]); // 80181ABC
L_80181AC0:;
  c->r[5]=0u+0x80460000u; // 80181AC0
  c->r[4]=0u+0x00000000u; // 80181AC4
  c->r[5]=c->r[5]+0xFFFFEF00u; // 80181AC8
  c->r[0]=R8(c->r[5]+0x0000015Au); // 80181ACC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181AD0
  c->r[3]=c->r[5]+c->r[0]; // 80181AD4
  W32(c->r[3]+0x0000017Cu,c->r[4]); // 80181AD8
  c->r[0]=R8(c->r[5]+0x00000159u); // 80181ADC
  cmps(c,0,(int32_t)c->r[0],0); // 80181AE0
  if (crb(c,2)) { goto L_80181B04; } // 80181AE4
  c->r[4]=0u+0x80180000u; // 80181AE8
  c->r[3]=c->r[5]+0x00000008u; // 80181AEC
  c->r[4]=c->r[4]+0x00001DCCu; // 80181AF0
  c->r[5]=c->r[5]+0x00000094u; // 80181AF4
  c->lr=0x80181AFCu; f_8017F340(c); // 80181AF8
  cmps(c,0,(int32_t)c->r[3],0); // 80181AFC
  if (crb(c,2)) { goto L_80181B08; } // 80181B00
L_80181B04:;
  c->lr=0x80181B08u; f_80181C90(c); // 80181B04
L_80181B08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80181B08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80181B0C
  c->lr=c->r[0]; // 80181B10
  c->r[1]=c->r[1]+0x00000010u; // 80181B14
  return; // 80181B18
}

// ReadCallbackFromReload
void f_80181B1C(Ctx* __restrict c) {
  trace_call(0x80181B1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181B1C
  c->r[0]=c->lr; // 80181B20
  c->r[5]=0u+0x80460000u; // 80181B24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80181B28
  c->r[5]=c->r[5]+0xFFFFEF00u; // 80181B2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80181B30
  c->r[31]=c->r[3]|c->r[3]; // 80181B34
  c->r[0]=R8(c->r[5]+0x0000015Au); // 80181B38
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181B3C
  c->r[4]=c->r[5]+c->r[0]; // 80181B40
  c->r[0]=R32(c->r[4]+0x00000174u); // 80181B44
  cmpu(c,0,c->r[3],c->r[0]); // 80181B48
  if (!crb(c,2)) { goto L_80181B78; } // 80181B4C
  W32(c->r[4]+0x0000017Cu,c->r[3]); // 80181B50
  c->r[0]=0u+0x00000000u; // 80181B54
  c->r[4]=0u+0x80180000u; // 80181B58
  c->r[3]=c->r[5]+0x00000008u; // 80181B5C
  W8(c->r[5]+0x00000159u,c->r[0]); // 80181B60
  c->r[4]=c->r[4]+0x00001C04u; // 80181B64
  c->r[5]=c->r[5]+0x00000094u; // 80181B68
  c->lr=0x80181B70u; f_8017F340(c); // 80181B6C
  cmps(c,0,(int32_t)c->r[3],0); // 80181B70
  if (crb(c,2)) { goto L_80181BF0; } // 80181B74
L_80181B78:;
  c->r[3]=0u+0x80460000u; // 80181B78
  c->r[3]=c->r[3]+0xFFFFEF00u; // 80181B7C
  c->r[0]=R8(c->r[3]+0x0000015Au); // 80181B80
  cmps(c,0,(int32_t)c->r[0],0); // 80181B84
  if (!crb(c,2)) { goto L_80181BA8; } // 80181B88
  cmps(c,0,(int32_t)c->r[31],0); // 80181B8C
  c->r[0]=0u+0xFFFFFF80u; // 80181B90
  if (crb(c,2)) { goto L_80181B9C; } // 80181B94
  c->r[0]=c->r[31]|c->r[31]; // 80181B98
L_80181B9C:;
  c->r[3]=0u+0x80460000u; // 80181B9C
  c->r[3]=c->r[3]+0xFFFFEF00u; // 80181BA0
  W32(c->r[3]+0x00000160u,c->r[0]); // 80181BA4
L_80181BA8:;
  c->r[5]=0u+0x80460000u; // 80181BA8
  c->r[4]=0u+0x00000000u; // 80181BAC
  c->r[5]=c->r[5]+0xFFFFEF00u; // 80181BB0
  c->r[0]=R8(c->r[5]+0x0000015Au); // 80181BB4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181BB8
  c->r[3]=c->r[5]+c->r[0]; // 80181BBC
  W32(c->r[3]+0x0000017Cu,c->r[4]); // 80181BC0
  c->r[0]=R8(c->r[5]+0x00000159u); // 80181BC4
  cmps(c,0,(int32_t)c->r[0],0); // 80181BC8
  if (crb(c,2)) { goto L_80181BEC; } // 80181BCC
  c->r[4]=0u+0x80180000u; // 80181BD0
  c->r[3]=c->r[5]+0x00000008u; // 80181BD4
  c->r[4]=c->r[4]+0x00001DCCu; // 80181BD8
  c->r[5]=c->r[5]+0x00000094u; // 80181BDC
  c->lr=0x80181BE4u; f_8017F340(c); // 80181BE0
  cmps(c,0,(int32_t)c->r[3],0); // 80181BE4
  if (crb(c,2)) { goto L_80181BF0; } // 80181BE8
L_80181BEC:;
  c->lr=0x80181BF0u; f_80181C90(c); // 80181BEC
L_80181BF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80181BF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80181BF4
  c->lr=c->r[0]; // 80181BF8
  c->r[1]=c->r[1]+0x00000010u; // 80181BFC
  return; // 80181C00
}

// CloseCallbackFromReload
void f_80181C04(Ctx* __restrict c) {
  trace_call(0x80181C04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181C04
  c->r[0]=c->lr; // 80181C08
  cmps(c,0,(int32_t)c->r[3],0); // 80181C0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80181C10
  if (!crb(c,2)) { goto L_80181C20; } // 80181C14
  c->lr=0x80181C1Cu; f_80181C90(c); // 80181C18
  goto L_80181C80; // 80181C1C
L_80181C20:;
  c->r[4]=0u+0x80460000u; // 80181C20
  c->r[4]=c->r[4]+0xFFFFEF00u; // 80181C24
  c->r[0]=R8(c->r[4]+0x0000015Au); // 80181C28
  cmps(c,0,(int32_t)c->r[0],0); // 80181C2C
  if (!crb(c,2)) { goto L_80181C38; } // 80181C30
  W32(c->r[4]+0x00000160u,c->r[3]); // 80181C34
L_80181C38:;
  c->r[5]=0u+0x80460000u; // 80181C38
  c->r[4]=0u+0x00000000u; // 80181C3C
  c->r[5]=c->r[5]+0xFFFFEF00u; // 80181C40
  c->r[0]=R8(c->r[5]+0x0000015Au); // 80181C44
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80181C48
  c->r[3]=c->r[5]+c->r[0]; // 80181C4C
  W32(c->r[3]+0x0000017Cu,c->r[4]); // 80181C50
  c->r[0]=R8(c->r[5]+0x00000159u); // 80181C54
  cmps(c,0,(int32_t)c->r[0],0); // 80181C58
  if (crb(c,2)) { goto L_80181C7C; } // 80181C5C
  c->r[4]=0u+0x80180000u; // 80181C60
  c->r[3]=c->r[5]+0x00000008u; // 80181C64
  c->r[4]=c->r[4]+0x00001DCCu; // 80181C68
  c->r[5]=c->r[5]+0x00000094u; // 80181C6C
  c->lr=0x80181C74u; f_8017F340(c); // 80181C70
  cmps(c,0,(int32_t)c->r[3],0); // 80181C74
  if (crb(c,2)) { goto L_80181C80; } // 80181C78
L_80181C7C:;
  c->lr=0x80181C80u; f_80181C90(c); // 80181C7C
L_80181C80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80181C80
  c->lr=c->r[0]; // 80181C84
  c->r[1]=c->r[1]+0x00000010u; // 80181C88
  return; // 80181C8C
}

// FinishFromReload
void f_80181C90(Ctx* __restrict c) {
  trace_call(0x80181C90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181C90
  c->r[0]=c->lr; // 80181C94
  W32(c->r[1]+0x00000024u,c->r[0]); // 80181C98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80181C9C
  c->r[31]=0u+0x00000000u; // 80181CA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80181CA4
  c->r[30]=0u+0x80180000u; // 80181CA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80181CAC
  c->r[29]=0u+0x80460000u; // 80181CB0
  c->r[29]=c->r[29]+0xFFFFEF00u; // 80181CB4
  W32(c->r[1]+0x00000010u,c->r[28]); // 80181CB8
L_80181CBC:;
  c->r[3]=R8(c->r[29]+0x0000015Au); // 80181CBC
  c->r[3]=c->r[3]+0x00000001u; // 80181CC0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80181CC4
  W8(c->r[29]+0x0000015Au,c->r[3]); // 80181CC8
  cmpu(c,0,c->r[0],0x00000002u); // 80181CCC
  if (!crb(c,0)) { goto L_80181D04; } // 80181CD0
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 80181CD4
  W8(c->r[29]+0x00000159u,c->r[31]); // 80181CD8
  c->r[3]=c->r[29]+c->r[0]; // 80181CDC
  c->r[4]=c->r[29]+0x00000008u; // 80181CE0
  c->r[3]=R32(c->r[3]+0x00000164u); // 80181CE4
  c->r[6]=c->r[30]+0x00001A4Cu; // 80181CE8
  c->r[7]=c->r[29]+0x00000094u; // 80181CEC
  c->r[5]=0u+0x00000001u; // 80181CF0
  c->lr=0x80181CF8u; f_8017F1E4(c); // 80181CF4
  cmps(c,0,(int32_t)c->r[3],0); // 80181CF8
  if (!crb(c,2)) { IRQCHK(c); goto L_80181CBC; } // 80181CFC
  goto L_80181DAC; // 80181D00
L_80181D04:;
  c->r[0]=R32(c->r[29]+0x00000160u); // 80181D04
  cmps(c,0,(int32_t)c->r[0],0); // 80181D08
  if (crb(c,2)) { goto L_80181D20; } // 80181D0C
  if (!crb(c,0)) { goto L_80181D28; } // 80181D10
  cmps(c,0,(int32_t)c->r[0],-12); // 80181D14
  if (crb(c,2)) { goto L_80181D28; } // 80181D18
  goto L_80181D28; // 80181D1C
L_80181D20:;
  c->r[28]=0u+0x00000003u; // 80181D20
  goto L_80181D78; // 80181D24
L_80181D28:;
  c->r[30]=0u+0x80460000u; // 80181D28
  c->r[4]=0u+0x00000000u; // 80181D2C
  c->r[30]=c->r[30]+0xFFFFEF00u; // 80181D30
  c->r[5]=0u+0x00004000u; // 80181D34
  c->r[29]=R32(c->r[30]+0x0000016Cu); // 80181D38
  c->r[3]=c->r[29]|c->r[29]; // 80181D3C
  c->lr=0x80181D44u; f_8000443C(c); // 80181D40
  c->r[3]=c->r[29]|c->r[29]; // 80181D44
  c->r[4]=c->r[13]+0xFFFF9288u; // 80181D48
  c->r[5]=0u+0x00000004u; // 80181D4C
  c->lr=0x80181D54u; f_80004338(c); // 80181D50
  c->r[3]=c->r[29]+0x00003FFCu; // 80181D54
  c->r[4]=c->r[13]+0xFFFF9290u; // 80181D58
  c->r[5]=0u+0x00000004u; // 80181D5C
  c->lr=0x80181D64u; f_80004338(c); // 80181D60
  c->r[0]=0u+0x00000008u; // 80181D64
  c->r[28]=0u+0x00000003u; // 80181D68
  W16(c->r[29]+0x00000006u,c->r[0]); // 80181D6C
  c->r[0]=R32(c->r[30]+0x00000174u); // 80181D70
  W32(c->r[30]+0x0000017Cu,c->r[0]); // 80181D74
L_80181D78:;
  c->r[30]=0u+0x00000000u; // 80181D78
  c->r[3]=0u+0x80000000u; // 80181D7C
  c->r[31]=0u+0x80460000u; // 80181D80
  W8(c->r[3]+0x000038FFu,c->r[30]); // 80181D84
  c->r[31]=c->r[31]+0xFFFFEF00u; // 80181D88
  c->r[12]=R32(c->r[31]+0x0000015Cu); // 80181D8C
  cmps(c,0,(int32_t)c->r[12],0); // 80181D90
  if (crb(c,2)) { goto L_80181DA8; } // 80181D94
  c->r[3]=R32(c->r[31]+0x00000160u); // 80181D98
  c->ctr=c->r[12]; // 80181D9C
  if (true) { c->lr=0x80181DA4u; dispatch(c,c->ctr); } // 80181DA0
  W32(c->r[31]+0x0000015Cu,c->r[30]); // 80181DA4
L_80181DA8:;
  W8(c->r[13]+0xFFFFAF20u,c->r[28]); // 80181DA8
L_80181DAC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80181DAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80181DB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80181DB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80181DB8
  c->r[28]=R32(c->r[1]+0x00000010u); // 80181DBC
  c->lr=c->r[0]; // 80181DC0
  c->r[1]=c->r[1]+0x00000020u; // 80181DC4
  return; // 80181DC8
}

// CloseCallbackFromReloadError
void f_80181DCC(Ctx* __restrict c) {
  trace_call(0x80181DCCu);
  f_80181C90(c); return; // 80181DCC
}

// ParseConfBuf
void f_80181DD0(Ctx* __restrict c) {
  trace_call(0x80181DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181DD0
  c->r[0]=c->lr; // 80181DD4
  W32(c->r[1]+0x00000064u,c->r[0]); // 80181DD8
  c->r[11]=c->r[1]+0x00000060u; // 80181DDC
  c->lr=0x80181DE4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80181DE0
  cmpu(c,0,c->r[4],0x0000000Cu); // 80181DE4
  c->r[27]=0u+0x802E0000u; // 80181DE8
  c->r[25]=c->r[3]|c->r[3]; // 80181DEC
  c->r[26]=c->r[4]|c->r[4]; // 80181DF0
  c->r[27]=c->r[27]+0xFFFFC138u; // 80181DF4
  if (crb(c,0)) { goto L_80182000; } // 80181DF8
  cmpu(c,0,c->r[4],0x00004000u); // 80181DFC
  if (crb(c,1)) { goto L_80182000; } // 80181E00
  c->r[0]=0u+0x00000024u; // 80181E04
  c->r[31]=c->r[3]+c->r[4]; // 80181E08
  W32(c->r[13]+0xFFFFAF2Cu,c->r[0]); // 80181E0C
  c->r[4]=c->r[13]+0xFFFF9288u; // 80181E10
  c->r[5]=0u+0x00000004u; // 80181E14
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 80181E18
  c->lr=0x80181E20u; f_802583D8(c); // 80181E1C
  cmps(c,0,(int32_t)c->r[3],0); // 80181E20
  if (!crb(c,2)) { goto L_80182000; } // 80181E24
  c->r[3]=c->r[31]|c->r[31]; // 80181E28
  c->r[4]=c->r[13]+0xFFFF9290u; // 80181E2C
  c->r[5]=0u+0x00000004u; // 80181E30
  c->lr=0x80181E38u; f_802583D8(c); // 80181E34
  cmps(c,0,(int32_t)c->r[3],0); // 80181E38
  if (!crb(c,2)) { goto L_80182000; } // 80181E3C
  cmpu(c,0,c->r[26],0x00004000u); // 80181E40
  if (!crb(c,0)) { goto L_80181E70; } // 80181E44
  c->r[22]=addc(c,~c->r[26],0x00004000u,1); // 80181E48
  c->r[3]=c->r[31]|c->r[31]; // 80181E4C
  c->r[5]=c->r[22]|c->r[22]; // 80181E50
  c->r[4]=0u+0x00000000u; // 80181E54
  c->lr=0x80181E5Cu; f_8000443C(c); // 80181E58
  c->r[31]=c->r[31]+c->r[22]; // 80181E5C
  c->r[4]=c->r[13]+0xFFFF9290u; // 80181E60
  c->r[3]=c->r[31]|c->r[31]; // 80181E64
  c->r[5]=0u+0x00000004u; // 80181E68
  c->lr=0x80181E70u; f_80004338(c); // 80181E6C
L_80181E70:;
  c->r[0]=c->r[25]+0x00000006u; // 80181E70
  cmpu(c,0,c->r[0],c->r[31]); // 80181E74
  if (!crb(c,1)) { goto L_80181E84; } // 80181E78
  c->r[0]=0u+0x00000000u; // 80181E7C
  goto L_80181E94; // 80181E80
L_80181E84:;
  c->r[3]=R8(c->r[25]+0x00000004u); // 80181E84
  c->r[0]=0u+0x00000001u; // 80181E88
  c->r[30]=R8(c->r[25]+0x00000005u); // 80181E8C
  c->r[30]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[30]&~0x0000FF00u); // 80181E90
L_80181E94:;
  cmps(c,0,(int32_t)c->r[0],0); // 80181E94
  if (crb(c,2)) { goto L_80182000; } // 80181E98
  c->r[29]=c->r[25]+0x00000006u; // 80181E9C
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80181EA0
  c->r[3]=c->r[29]+c->r[0]; // 80181EA4
  c->r[23]=0u+0x00000000u; // 80181EA8
  c->r[0]=c->r[3]+0x00000002u; // 80181EAC
  c->r[24]=c->r[29]|c->r[29]; // 80181EB0
  c->r[28]=c->r[0]-c->r[25]; // 80181EB4
  goto L_80181F00; // 80181EB8
L_80181EBC:;
  cmpu(c,0,c->r[28],c->r[26]); // 80181EBC
  if (crb(c,1)) { goto L_80182000; } // 80181EC0
  c->r[0]=c->r[24]-c->r[25]; // 80181EC4
  cmpu(c,0,c->r[0],c->r[26]); // 80181EC8
  if (crb(c,1)) { goto L_80182000; } // 80181ECC
  c->r[0]=R16(c->r[24]+0x00000000u); // 80181ED0
  cmpu(c,0,c->r[28],c->r[0]); // 80181ED4
  if (!crb(c,2)) { goto L_80182000; } // 80181ED8
  c->r[3]=c->r[25]+c->r[28]; // 80181EDC
  c->r[4]=c->r[1]+0x00000008u; // 80181EE0
  c->lr=0x80181EE8u; f_8018201C(c); // 80181EE4
  cmps(c,0,(int32_t)c->r[3],0); // 80181EE8
  if (crb(c,2)) { goto L_80182000; } // 80181EEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80181EF0
  c->r[24]=c->r[24]+0x00000002u; // 80181EF4
  c->r[23]=c->r[23]+0x00000001u; // 80181EF8
  c->r[28]=c->r[28]+c->r[0]; // 80181EFC
L_80181F00:;
  cmpu(c,0,c->r[23],c->r[30]); // 80181F00
  if (crb(c,0)) { IRQCHK(c); goto L_80181EBC; } // 80181F04
  cmpu(c,0,c->r[28],c->r[26]); // 80181F08
  if (crb(c,1)) { goto L_80182000; } // 80181F0C
  c->r[0]=rotl(c->r[23],1)&0xFFFFFFFEu; // 80181F10
  c->r[0]=R16(c->r[29]+c->r[0]); // 80181F14
  cmpu(c,0,c->r[28],c->r[0]); // 80181F18
  if (!crb(c,2)) { goto L_80182000; } // 80181F1C
  c->r[3]=c->r[31]+0xFFFFFFBAu; // 80181F20
  c->r[0]=c->r[25]+c->r[28]; // 80181F24
  cmpu(c,0,c->r[0],c->r[3]); // 80181F28
  if (crb(c,1)) { goto L_80182000; } // 80181F2C
  c->r[28]=c->r[3]-c->r[0]; // 80181F30
  c->r[5]=c->r[31]-c->r[3]; // 80181F34
  c->r[4]=0u+0x00000000u; // 80181F38
  c->lr=0x80181F40u; f_8000443C(c); // 80181F3C
  c->r[0]=R32(c->r[13]+0xFFFFAF2Cu); // 80181F40
  c->r[31]=c->r[31]+0xFFFFFFFEu; // 80181F44
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80181F48
  c->r[26]=c->r[27]+c->r[0]; // 80181F4C
  goto L_80181FD4; // 80181F50
L_80181F54:;
  c->r[3]=c->r[22]|c->r[22]; // 80181F54
  c->lr=0x80181F5Cu; f_80252384(c); // 80181F58
  c->r[21]=c->r[3]|c->r[3]; // 80181F5C
  c->r[24]=c->r[29]|c->r[29]; // 80181F60
  c->r[23]=0u+0x00000000u; // 80181F64
  goto L_80181FC8; // 80181F68
L_80181F6C:;
  c->r[0]=R16(c->r[24]+0x00000000u); // 80181F6C
  c->r[4]=c->r[25]+c->r[0]; // 80181F70
  c->r[0]=R8(c->r[25]+c->r[0]); // 80181F74
  c->r[3]=rotl(c->r[0],0)&0x0000001Fu; // 80181F78
  c->r[0]=c->r[3]+0x00000001u; // 80181F7C
  cmpu(c,0,c->r[21],c->r[0]); // 80181F80
  if (!crb(c,2)) { goto L_80181FC0; } // 80181F84
  c->r[3]=c->r[22]|c->r[22]; // 80181F88
  c->r[5]=c->r[21]|c->r[21]; // 80181F8C
  c->r[4]=c->r[4]+0x00000001u; // 80181F90
  c->lr=0x80181F98u; f_802583D8(c); // 80181F94
  cmps(c,0,(int32_t)c->r[3],0); // 80181F98
  if (!crb(c,2)) { goto L_80181FC0; } // 80181F9C
  c->r[0]=R32(c->r[27]+0x00000004u); // 80181FA0
  c->r[3]=rotl(c->r[23],1)&0xFFFFFFFEu; // 80181FA4
  c->r[3]=c->r[29]+c->r[3]; // 80181FA8
  c->r[0]=0u-c->r[0]; // 80181FAC
  c->r[3]=c->r[3]-c->r[25]; // 80181FB0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80181FB4
  W16(c->r[31]+c->r[0],c->r[3]); // 80181FB8
  goto L_80181FD0; // 80181FBC
L_80181FC0:;
  c->r[24]=c->r[24]+0x00000002u; // 80181FC0
  c->r[23]=c->r[23]+0x00000001u; // 80181FC4
L_80181FC8:;
  cmpu(c,0,c->r[23],c->r[30]); // 80181FC8
  if (crb(c,0)) { IRQCHK(c); goto L_80181F6C; } // 80181FCC
L_80181FD0:;
  c->r[27]=c->r[27]+0x00000008u; // 80181FD0
L_80181FD4:;
  cmpu(c,0,c->r[27],c->r[26]); // 80181FD4
  if (!crb(c,0)) { goto L_80181FE8; } // 80181FD8
  c->r[22]=R32(c->r[27]+0x00000000u); // 80181FDC
  cmps(c,0,(int32_t)c->r[22],0); // 80181FE0
  if (!crb(c,2)) { IRQCHK(c); goto L_80181F54; } // 80181FE4
L_80181FE8:;
  c->r[0]=c->r[31]-c->r[25]; // 80181FE8
  W32(c->r[13]+0xFFFFAF28u,c->r[30]); // 80181FEC
  c->r[3]=0u+0x00000000u; // 80181FF0
  W32(c->r[13]+0xFFFFAF30u,c->r[0]); // 80181FF4
  W32(c->r[13]+0xFFFFAF24u,c->r[28]); // 80181FF8
  goto L_80182004; // 80181FFC
L_80182000:;
  c->r[3]=0u+0x00000002u; // 80182000
L_80182004:;
  c->r[11]=c->r[1]+0x00000060u; // 80182004
  c->lr=0x8018200Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80182008
  c->r[0]=R32(c->r[1]+0x00000064u); // 8018200C
  c->lr=c->r[0]; // 80182010
  c->r[1]=c->r[1]+0x00000060u; // 80182014
  return; // 80182018
}

// UnpackItem
void f_8018201C(Ctx* __restrict c) {
  trace_call(0x8018201Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018201C
  c->r[0]=c->lr; // 80182020
  c->r[5]=0u+0x00000020u; // 80182024
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182028
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018202C
  c->r[31]=c->r[4]|c->r[4]; // 80182030
  c->r[4]=0u+0x00000000u; // 80182034
  W32(c->r[1]+0x00000008u,c->r[30]); // 80182038
  c->r[30]=c->r[3]|c->r[3]; // 8018203C
  c->r[3]=c->r[31]|c->r[31]; // 80182040
  c->lr=0x80182048u; f_8000443C(c); // 80182044
  c->r[4]=R8(c->r[30]+0x00000000u); // 80182048
  c->r[0]=c->r[30]+0x00000001u; // 8018204C
  W32(c->r[31]+0x00000014u,c->r[0]); // 80182050
  c->r[3]=rotl(c->r[4],0)&0x0000001Fu; // 80182054
  c->r[6]=rotl(c->r[4],0)&0x000000E0u; // 80182058
  c->r[0]=c->r[3]+0x00000001u; // 8018205C
  c->r[3]=c->r[30]+c->r[0]; // 80182060
  cmps(c,0,(int32_t)c->r[6],128); // 80182064
  c->r[3]=c->r[3]+0x00000001u; // 80182068
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8018206C
  W32(c->r[31]+0x00000018u,c->r[3]); // 80182070
  if (crb(c,2)) { goto L_801820D0; } // 80182074
  if (!crb(c,0)) { goto L_801820A0; } // 80182078
  cmps(c,0,(int32_t)c->r[6],64); // 8018207C
  if (crb(c,2)) { goto L_801820F4; } // 80182080
  if (!crb(c,0)) { goto L_80182094; } // 80182084
  cmps(c,0,(int32_t)c->r[6],32); // 80182088
  if (crb(c,2)) { goto L_80182118; } // 8018208C
  goto L_8018218C; // 80182090
L_80182094:;
  cmps(c,0,(int32_t)c->r[6],96); // 80182094
  if (crb(c,2)) { goto L_801820C4; } // 80182098
  goto L_8018218C; // 8018209C
L_801820A0:;
  cmps(c,0,(int32_t)c->r[6],192); // 801820A0
  if (crb(c,2)) { goto L_801820E8; } // 801820A4
  if (!crb(c,0)) { goto L_801820B8; } // 801820A8
  cmps(c,0,(int32_t)c->r[6],160); // 801820AC
  if (crb(c,2)) { goto L_801820DC; } // 801820B0
  goto L_8018218C; // 801820B4
L_801820B8:;
  cmps(c,0,(int32_t)c->r[6],224); // 801820B8
  if (crb(c,2)) { goto L_801820C4; } // 801820BC
  goto L_8018218C; // 801820C0
L_801820C4:;
  c->r[0]=0u+0x00000001u; // 801820C4
  W32(c->r[31]+0x00000010u,c->r[0]); // 801820C8
  goto L_80182140; // 801820CC
L_801820D0:;
  c->r[0]=0u+0x00000002u; // 801820D0
  W32(c->r[31]+0x00000010u,c->r[0]); // 801820D4
  goto L_80182140; // 801820D8
L_801820DC:;
  c->r[0]=0u+0x00000004u; // 801820DC
  W32(c->r[31]+0x00000010u,c->r[0]); // 801820E0
  goto L_80182140; // 801820E4
L_801820E8:;
  c->r[0]=0u+0x00000008u; // 801820E8
  W32(c->r[31]+0x00000010u,c->r[0]); // 801820EC
  goto L_80182140; // 801820F0
L_801820F4:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 801820F4
  c->r[0]=c->r[3]+0x00000001u; // 801820F8
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801820FC
  c->r[4]=c->r[4]+0x00000001u; // 80182100
  W32(c->r[31]+0x00000018u,c->r[0]); // 80182104
  c->r[0]=c->r[3]+0x00000001u; // 80182108
  W32(c->r[31]+0x00000010u,c->r[4]); // 8018210C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80182110
  goto L_80182140; // 80182114
L_80182118:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 80182118
  c->r[0]=c->r[3]+0x00000002u; // 8018211C
  c->r[4]=R8(c->r[3]+0x00000001u); // 80182120
  c->r[4]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 80182124
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80182128
  c->r[4]=c->r[4]+0x00000001u; // 8018212C
  W32(c->r[31]+0x00000018u,c->r[0]); // 80182130
  c->r[0]=c->r[3]+0x00000002u; // 80182134
  W32(c->r[31]+0x00000010u,c->r[4]); // 80182138
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8018213C
L_80182140:;
  cmpu(c,0,c->r[6],0x00000040u); // 80182140
  if (crb(c,2)) { goto L_80182150; } // 80182144
  cmpu(c,0,c->r[6],0x00000020u); // 80182148
  if (!crb(c,2)) { goto L_8018215C; } // 8018214C
L_80182150:;
  c->r[0]=0u+0x00000040u; // 80182150
  W8(c->r[31]+0x00000009u,c->r[0]); // 80182154
  goto L_80182170; // 80182158
L_8018215C:;
  W8(c->r[31]+0x00000008u,c->r[6]); // 8018215C
  c->r[3]=c->r[31]|c->r[31]; // 80182160
  c->r[4]=R32(c->r[31]+0x00000018u); // 80182164
  c->r[5]=R32(c->r[31]+0x00000010u); // 80182168
  c->lr=0x80182170u; f_80004338(c); // 8018216C
L_80182170:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80182170
  c->r[0]=R32(c->r[31]+0x00000010u); // 80182174
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 80182178
  c->r[0]=c->r[3]+c->r[0]; // 8018217C
  c->r[3]=c->r[0]+c->r[4]; // 80182180
  c->r[0]=c->r[3]+0x00000001u; // 80182184
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80182188
L_8018218C:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 8018218C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80182190
  c->r[0]=0u-c->r[3]; // 80182194
  c->r[30]=R32(c->r[1]+0x00000008u); // 80182198
  c->r[0]=c->r[0]|c->r[3]; // 8018219C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801821A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801821A4
  c->lr=c->r[0]; // 801821A8
  c->r[1]=c->r[1]+0x00000010u; // 801821AC
  return; // 801821B0
}

// DeleteItemByID
void f_801821B4(Ctx* __restrict c) {
  trace_call(0x801821B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801821B4
  c->r[0]=c->lr; // 801821B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801821BC
  c->r[11]=c->r[1]+0x00000030u; // 801821C0
  c->lr=0x801821C8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801821C4
  c->r[0]=R32(c->r[13]+0xFFFFAF2Cu); // 801821C8
  c->r[31]=0u+0x80460000u; // 801821CC
  c->r[31]=c->r[31]+0xFFFFF0A0u; // 801821D0
  cmpu(c,0,c->r[3],c->r[0]); // 801821D4
  if (!crb(c,0)) { goto L_8018232C; } // 801821D8
  c->r[4]=R32(c->r[13]+0xFFFFAF30u); // 801821DC
  cmps(c,0,(int32_t)c->r[4],0); // 801821E0
  if (crb(c,2)) { goto L_8018232C; } // 801821E4
  c->r[0]=0u-c->r[3]; // 801821E8
  c->r[28]=c->r[31]+c->r[4]; // 801821EC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801821F0
  c->r[30]=R16(c->r[28]+c->r[0]); // 801821F4
  cmps(c,0,(int32_t)c->r[30],0); // 801821F8
  if (crb(c,2)) { goto L_8018232C; } // 801821FC
  c->r[0]=R32(c->r[13]+0xFFFFAF28u); // 80182200
  cmps(c,0,(int32_t)c->r[0],0); // 80182204
  if (crb(c,2)) { goto L_8018232C; } // 80182208
  c->r[27]=c->r[31]+c->r[30]; // 8018220C
  c->r[25]=c->r[31]+0x00000006u; // 80182210
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80182214
  c->r[5]=R16(c->r[31]+c->r[30]); // 80182218
  c->r[24]=c->r[25]+c->r[0]; // 8018221C
  c->r[3]=R16(c->r[27]+0x00000002u); // 80182220
  c->r[4]=c->r[27]|c->r[27]; // 80182224
  c->r[0]=c->r[30]+0x00000002u; // 80182228
  c->r[6]=c->r[3]-c->r[5]; // 8018222C
  c->r[26]=R16(c->r[24]+0x00000000u); // 80182230
  c->r[3]=c->r[27]|c->r[27]; // 80182234
  c->r[5]=c->r[5]-c->r[0]; // 80182238
  c->r[29]=c->r[6]+0x00000002u; // 8018223C
  c->r[4]=c->r[4]+0x00000002u; // 80182240
  c->lr=0x80182248u; f_802582B4(c); // 80182244
  c->r[4]=c->r[24]+0xFFFFFFFEu; // 80182248
  c->r[0]=c->r[4]+0x00000002u; // 8018224C
  c->r[0]=c->r[0]-c->r[25]; // 80182250
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80182254
  c->ctr=c->r[0]; // 80182258
  cmpu(c,0,c->r[4],c->r[25]); // 8018225C
  if (crb(c,0)) { goto L_80182290; } // 80182260
L_80182264:;
  cmpu(c,0,c->r[4],c->r[27]); // 80182264
  if (!crb(c,0)) { goto L_8018227C; } // 80182268
  c->r[3]=R16(c->r[4]+0x00000000u); // 8018226C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80182270
  W16(c->r[4]+0x00000000u,c->r[0]); // 80182274
  goto L_80182288; // 80182278
L_8018227C:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 8018227C
  c->r[0]=c->r[0]-c->r[29]; // 80182280
  W16(c->r[4]+0x00000000u,c->r[0]); // 80182284
L_80182288:;
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 80182288
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80182264; } // 8018228C
L_80182290:;
  c->r[5]=R16(c->r[27]+0x00000000u); // 80182290
  c->r[4]=c->r[31]+c->r[29]; // 80182294
  c->r[0]=c->r[5]+c->r[29]; // 80182298
  c->r[3]=c->r[31]+c->r[5]; // 8018229C
  c->r[4]=c->r[5]+c->r[4]; // 801822A0
  c->r[5]=c->r[26]-c->r[0]; // 801822A4
  c->lr=0x801822ACu; f_802582B4(c); // 801822A8
  c->r[0]=c->r[26]-c->r[29]; // 801822AC
  c->r[5]=c->r[29]|c->r[29]; // 801822B0
  c->r[3]=c->r[31]+c->r[0]; // 801822B4
  c->r[4]=0u+0x00000000u; // 801822B8
  c->lr=0x801822C0u; f_8000443C(c); // 801822BC
  c->r[0]=R32(c->r[13]+0xFFFFAF2Cu); // 801822C0
  c->r[6]=0u+0x00000000u; // 801822C4
  c->r[3]=0u+0x00000000u; // 801822C8
  c->ctr=c->r[0]; // 801822CC
  cmpu(c,0,c->r[0],0x00000000u); // 801822D0
  if (!crb(c,1)) { goto L_80182308; } // 801822D4
L_801822D8:;
  c->r[0]=0u-c->r[6]; // 801822D8
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801822DC
  c->r[4]=R16(c->r[28]+c->r[5]); // 801822E0
  cmpu(c,0,c->r[4],c->r[30]); // 801822E4
  if (crb(c,0)) { goto L_80182300; } // 801822E8
  if (!crb(c,1)) { goto L_801822FC; } // 801822EC
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801822F0
  W16(c->r[28]+c->r[5],c->r[0]); // 801822F4
  goto L_80182300; // 801822F8
L_801822FC:;
  W16(c->r[28]+c->r[5],c->r[3]); // 801822FC
L_80182300:;
  c->r[6]=c->r[6]+0x00000001u; // 80182300
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801822D8; } // 80182304
L_80182308:;
  c->r[4]=R32(c->r[13]+0xFFFFAF24u); // 80182308
  c->r[0]=0u+0x00000001u; // 8018230C
  c->r[3]=R32(c->r[13]+0xFFFFAF28u); // 80182310
  c->r[4]=c->r[4]+c->r[29]; // 80182314
  W8(c->r[13]+0xFFFFAF35u,c->r[0]); // 80182318
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018231C
  W32(c->r[13]+0xFFFFAF24u,c->r[4]); // 80182320
  W32(c->r[13]+0xFFFFAF28u,c->r[0]); // 80182324
  W16(c->r[31]+0x00000004u,c->r[0]); // 80182328
L_8018232C:;
  c->r[11]=c->r[1]+0x00000030u; // 8018232C
  c->lr=0x80182334u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80182330
  c->r[0]=R32(c->r[1]+0x00000034u); // 80182334
  c->lr=c->r[0]; // 80182338
  c->r[1]=c->r[1]+0x00000030u; // 8018233C
  return; // 80182340
}

// CreateItemByID
void f_80182344(Ctx* __restrict c) {
  trace_call(0x80182344u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182344
  c->r[0]=c->lr; // 80182348
  W32(c->r[1]+0x00000034u,c->r[0]); // 8018234C
  c->r[11]=c->r[1]+0x00000030u; // 80182350
  c->lr=0x80182358u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80182354
  c->r[0]=R32(c->r[13]+0xFFFFAF2Cu); // 80182358
  c->r[31]=0u+0x80460000u; // 8018235C
  c->r[7]=0u+0x802E0000u; // 80182360
  c->r[23]=c->r[3]|c->r[3]; // 80182364
  cmpu(c,0,c->r[3],c->r[0]); // 80182368
  c->r[24]=c->r[4]|c->r[4]; // 8018236C
  c->r[25]=c->r[5]|c->r[5]; // 80182370
  c->r[26]=c->r[6]|c->r[6]; // 80182374
  c->r[31]=c->r[31]+0xFFFFF0A0u; // 80182378
  c->r[7]=c->r[7]+0xFFFFC138u; // 8018237C
  c->r[29]=0u+0x00000001u; // 80182380
  if (!crb(c,0)) { goto L_801825A0; } // 80182384
  c->r[0]=0u+0x00000000u; // 80182388
  cmpu(c,0,c->r[5],c->r[0]); // 8018238C
  if (crb(c,2)) { goto L_801825A0; } // 80182390
  c->r[0]=R32(c->r[13]+0xFFFFAF28u); // 80182394
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80182398
  if (!crb(c,0)) { goto L_801825A0; } // 8018239C
  c->r[0]=R32(c->r[13]+0xFFFFAF30u); // 801823A0
  cmps(c,0,(int32_t)c->r[0],0); // 801823A4
  if (crb(c,2)) { goto L_801825A0; } // 801823A8
  cmps(c,0,(int32_t)c->r[4],160); // 801823AC
  if (crb(c,2)) { goto L_80182404; } // 801823B0
  if (!crb(c,0)) { goto L_801823DC; } // 801823B4
  cmps(c,0,(int32_t)c->r[4],96); // 801823B8
  if (crb(c,2)) { goto L_801823F4; } // 801823BC
  if (!crb(c,0)) { goto L_801823D0; } // 801823C0
  cmps(c,0,(int32_t)c->r[4],64); // 801823C4
  if (crb(c,2)) { goto L_80182414; } // 801823C8
  goto L_801825A0; // 801823CC
L_801823D0:;
  cmps(c,0,(int32_t)c->r[4],128); // 801823D0
  if (crb(c,2)) { goto L_801823FC; } // 801823D4
  goto L_801825A0; // 801823D8
L_801823DC:;
  cmps(c,0,(int32_t)c->r[4],224); // 801823DC
  if (crb(c,2)) { goto L_801823F4; } // 801823E0
  if (!crb(c,0)) { goto L_801825A0; } // 801823E4
  cmps(c,0,(int32_t)c->r[4],192); // 801823E8
  if (crb(c,2)) { goto L_8018240C; } // 801823EC
  goto L_801825A0; // 801823F0
L_801823F4:;
  c->r[26]=0u+0x00000001u; // 801823F4
  goto L_80182440; // 801823F8
L_801823FC:;
  c->r[26]=0u+0x00000002u; // 801823FC
  goto L_80182440; // 80182400
L_80182404:;
  c->r[26]=0u+0x00000004u; // 80182404
  goto L_80182440; // 80182408
L_8018240C:;
  c->r[26]=0u+0x00000008u; // 8018240C
  goto L_80182440; // 80182410
L_80182414:;
  cmps(c,0,(int32_t)c->r[6],0); // 80182414
  if (crb(c,2)) { goto L_801825A0; } // 80182418
  c->r[0]=0u+0x00010000u; // 8018241C
  cmpu(c,0,c->r[6],c->r[0]); // 80182420
  if (crb(c,1)) { goto L_801825A0; } // 80182424
  cmpu(c,0,c->r[6],0x00000100u); // 80182428
  if (!crb(c,1)) { goto L_8018243C; } // 8018242C
  c->r[24]=0u+0x00000020u; // 80182430
  c->r[29]=0u+0x00000003u; // 80182434
  goto L_80182440; // 80182438
L_8018243C:;
  c->r[29]=0u+0x00000002u; // 8018243C
L_80182440:;
  c->r[29]=c->r[29]+c->r[26]; // 80182440
  c->r[0]=0u+0x00000000u; // 80182444
  goto L_8018245C; // 80182448
L_8018244C:;
  c->r[4]=R32(c->r[7]+0x00000004u); // 8018244C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 80182450
  if (crb(c,2)) { goto L_80182468; } // 80182454
  c->r[7]=c->r[7]+0x00000008u; // 80182458
L_8018245C:;
  c->r[28]=R32(c->r[7]+0x00000000u); // 8018245C
  cmpu(c,0,c->r[28],c->r[0]); // 80182460
  if (!crb(c,2)) { IRQCHK(c); goto L_8018244C; } // 80182464
L_80182468:;
  c->r[0]=0u+0x00000000u; // 80182468
  cmpu(c,0,c->r[28],c->r[0]); // 8018246C
  if (crb(c,2)) { goto L_801825A0; } // 80182470
  c->r[3]=c->r[28]|c->r[28]; // 80182474
  c->lr=0x8018247Cu; f_80252384(c); // 80182478
  cmpu(c,0,c->r[3],0x00000020u); // 8018247C
  c->r[30]=c->r[3]|c->r[3]; // 80182480
  if (crb(c,1)) { goto L_801825A0; } // 80182484
  c->r[29]=c->r[29]+c->r[3]; // 80182488
  c->r[3]=R32(c->r[13]+0xFFFFAF24u); // 8018248C
  c->r[0]=c->r[29]+0x00000002u; // 80182490
  cmpu(c,0,c->r[3],c->r[0]); // 80182494
  if (crb(c,0)) { goto L_801825A0; } // 80182498
  c->r[3]=R32(c->r[13]+0xFFFFAF28u); // 8018249C
  c->r[22]=c->r[31]+0x00000006u; // 801824A0
  c->r[0]=R16(c->r[31]+0x00000006u); // 801824A4
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801824A8
  c->r[5]=R16(c->r[22]+c->r[3]); // 801824AC
  c->r[4]=c->r[0]+c->r[31]; // 801824B0
  c->r[27]=c->r[22]+c->r[3]; // 801824B4
  c->r[3]=c->r[4]+0x00000002u; // 801824B8
  c->r[5]=c->r[5]-c->r[0]; // 801824BC
  c->lr=0x801824C4u; f_802582B4(c); // 801824C0
L_801824C4:;
  c->r[3]=R16(c->r[22]+0x00000000u); // 801824C4
  c->r[0]=c->r[3]+0x00000002u; // 801824C8
  W16(c->r[22]+0x00000000u,c->r[0]); // 801824CC
  c->r[22]=c->r[22]+0x00000002u; // 801824D0
  cmpu(c,0,c->r[22],c->r[27]); // 801824D4
  if (!crb(c,1)) { IRQCHK(c); goto L_801824C4; } // 801824D8
  c->r[5]=R16(c->r[27]+0x00000000u); // 801824DC
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 801824E0
  c->r[4]=c->r[28]|c->r[28]; // 801824E4
  c->r[28]=c->r[31]+c->r[5]; // 801824E8
  c->r[0]=c->r[24]|c->r[0]; // 801824EC
  W8(c->r[28]+0x00000000u,c->r[0]); // 801824F0
  c->r[5]=c->r[30]|c->r[30]; // 801824F4
  c->r[3]=c->r[28]+0x00000001u; // 801824F8
  c->lr=0x80182500u; f_80004338(c); // 801824FC
  cmpu(c,0,c->r[24],0x00000040u); // 80182500
  c->r[3]=c->r[30]+c->r[28]; // 80182504
  c->r[28]=c->r[3]+0x00000001u; // 80182508
  if (!crb(c,2)) { goto L_80182520; } // 8018250C
  c->r[0]=c->r[26]+0xFFFFFFFFu; // 80182510
  W8(c->r[28]+0x00000000u,c->r[0]); // 80182514
  c->r[28]=c->r[28]+0x00000001u; // 80182518
  goto L_8018253C; // 8018251C
L_80182520:;
  cmpu(c,0,c->r[24],0x00000020u); // 80182520
  if (!crb(c,2)) { goto L_8018253C; } // 80182524
  c->r[3]=c->r[26]+0xFFFFFFFFu; // 80182528
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; // 8018252C
  W8(c->r[28]+0x00000000u,c->r[0]); // 80182530
  W8(c->r[28]+0x00000001u,c->r[3]); // 80182534
  c->r[28]=c->r[28]+0x00000002u; // 80182538
L_8018253C:;
  c->r[3]=c->r[28]|c->r[28]; // 8018253C
  c->r[4]=c->r[25]|c->r[25]; // 80182540
  c->r[5]=c->r[26]|c->r[26]; // 80182544
  c->lr=0x8018254Cu; f_80004338(c); // 80182548
  c->r[5]=R32(c->r[13]+0xFFFFAF30u); // 8018254C
  c->r[0]=0u+0x00000001u; // 80182550
  c->r[4]=0u-c->r[23]; // 80182554
  c->r[6]=c->r[27]-c->r[31]; // 80182558
  c->r[7]=c->r[31]+c->r[5]; // 8018255C
  c->r[3]=R32(c->r[13]+0xFFFFAF28u); // 80182560
  c->r[5]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80182564
  W8(c->r[13]+0xFFFFAF35u,c->r[0]); // 80182568
  c->r[4]=c->r[3]+0x00000001u; // 8018256C
  c->r[3]=0u+0x00000001u; // 80182570
  W16(c->r[7]+c->r[5],c->r[6]); // 80182574
  c->r[6]=c->r[29]+0x00000002u; // 80182578
  c->r[5]=R32(c->r[13]+0xFFFFAF24u); // 8018257C
  c->r[7]=R16(c->r[27]+0x00000000u); // 80182580
  c->r[5]=c->r[5]-c->r[6]; // 80182584
  W32(c->r[13]+0xFFFFAF28u,c->r[4]); // 80182588
  c->r[6]=c->r[7]+c->r[29]; // 8018258C
  W16(c->r[27]+0x00000002u,c->r[6]); // 80182590
  W32(c->r[13]+0xFFFFAF24u,c->r[5]); // 80182594
  W16(c->r[31]+0x00000004u,c->r[4]); // 80182598
  goto L_801825A4; // 8018259C
L_801825A0:;
  c->r[3]=0u+0x00000000u; // 801825A0
L_801825A4:;
  c->r[11]=c->r[1]+0x00000030u; // 801825A4
  c->lr=0x801825ACu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801825A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801825AC
  c->lr=c->r[0]; // 801825B0
  c->r[1]=c->r[1]+0x00000030u; // 801825B4
  return; // 801825B8
}

// SCFindByteArrayItem
void f_801825BC(Ctx* __restrict c) {
  trace_call(0x801825BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801825BC
  c->r[0]=c->lr; // 801825C0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801825C4
  c->r[11]=c->r[1]+0x00000040u; // 801825C8
  c->lr=0x801825D0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801825CC
  c->r[27]=c->r[3]|c->r[3]; // 801825D0
  c->r[28]=c->r[4]|c->r[4]; // 801825D4
  c->r[29]=c->r[5]|c->r[5]; // 801825D8
  c->r[31]=0u+0x00000000u; // 801825DC
  c->lr=0x801825E4u; f_80154410(c); // 801825E0
  c->r[0]=0u+0x00000000u; // 801825E4
  c->r[30]=c->r[3]|c->r[3]; // 801825E8
  cmpu(c,0,c->r[27],c->r[0]); // 801825EC
  if (crb(c,2)) { goto L_80182678; } // 801825F0
  c->r[0]=R32(c->r[13]+0xFFFFAF2Cu); // 801825F4
  c->r[5]=0u+0x80460000u; // 801825F8
  c->r[5]=c->r[5]+0xFFFFF0A0u; // 801825FC
  cmpu(c,0,c->r[29],c->r[0]); // 80182600
  if (!crb(c,0)) { goto L_80182640; } // 80182604
  c->r[3]=R32(c->r[13]+0xFFFFAF30u); // 80182608
  cmps(c,0,(int32_t)c->r[3],0); // 8018260C
  if (crb(c,2)) { goto L_80182640; } // 80182610
  c->r[0]=0u-c->r[29]; // 80182614
  c->r[3]=c->r[5]+c->r[3]; // 80182618
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8018261C
  c->r[0]=R16(c->r[3]+c->r[0]); // 80182620
  cmps(c,0,(int32_t)c->r[0],0); // 80182624
  if (crb(c,2)) { goto L_80182640; } // 80182628
  c->r[0]=R16(c->r[5]+c->r[0]); // 8018262C
  c->r[4]=c->r[1]+0x00000008u; // 80182630
  c->r[3]=c->r[5]+c->r[0]; // 80182634
  c->lr=0x8018263Cu; f_8018201C(c); // 80182638
  goto L_80182644; // 8018263C
L_80182640:;
  c->r[3]=0u+0x00000000u; // 80182640
L_80182644:;
  cmps(c,0,(int32_t)c->r[3],0); // 80182644
  if (crb(c,2)) { goto L_80182678; } // 80182648
  c->r[0]=R8(c->r[1]+0x00000011u); // 8018264C
  cmps(c,0,(int32_t)c->r[0],0); // 80182650
  if (crb(c,2)) { goto L_80182678; } // 80182654
  c->r[0]=R32(c->r[1]+0x00000018u); // 80182658
  cmpu(c,0,c->r[0],c->r[28]); // 8018265C
  if (!crb(c,2)) { goto L_80182678; } // 80182660
  c->r[4]=R32(c->r[1]+0x00000020u); // 80182664
  c->r[3]=c->r[27]|c->r[27]; // 80182668
  c->r[5]=c->r[28]|c->r[28]; // 8018266C
  c->lr=0x80182674u; f_80004338(c); // 80182670
  c->r[31]=0u+0x00000001u; // 80182674
L_80182678:;
  c->r[3]=c->r[30]|c->r[30]; // 80182678
  c->lr=0x80182680u; f_80154438(c); // 8018267C
  c->r[11]=c->r[1]+0x00000040u; // 80182680
  c->r[3]=c->r[31]|c->r[31]; // 80182684
  c->lr=0x8018268Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80182688
  c->r[0]=R32(c->r[1]+0x00000044u); // 8018268C
  c->lr=c->r[0]; // 80182690
  c->r[1]=c->r[1]+0x00000040u; // 80182694
  return; // 80182698
}

// SCReplaceByteArrayItem
void f_8018269C(Ctx* __restrict c) {
  trace_call(0x8018269Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018269C
  c->r[0]=c->lr; // 801826A0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801826A4
  c->r[11]=c->r[1]+0x00000040u; // 801826A8
  c->lr=0x801826B0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801826AC
  c->r[27]=c->r[3]|c->r[3]; // 801826B0
  c->r[28]=c->r[4]|c->r[4]; // 801826B4
  c->r[29]=c->r[5]|c->r[5]; // 801826B8
  c->r[31]=0u+0x00000000u; // 801826BC
  c->lr=0x801826C4u; f_80154410(c); // 801826C0
  c->r[0]=0u+0x00000000u; // 801826C4
  c->r[30]=c->r[3]|c->r[3]; // 801826C8
  cmpu(c,0,c->r[27],c->r[0]); // 801826CC
  if (crb(c,2)) { goto L_8018279C; } // 801826D0
  c->r[0]=R32(c->r[13]+0xFFFFAF2Cu); // 801826D4
  c->r[5]=0u+0x80460000u; // 801826D8
  c->r[5]=c->r[5]+0xFFFFF0A0u; // 801826DC
  cmpu(c,0,c->r[29],c->r[0]); // 801826E0
  if (!crb(c,0)) { goto L_80182720; } // 801826E4
  c->r[3]=R32(c->r[13]+0xFFFFAF30u); // 801826E8
  cmps(c,0,(int32_t)c->r[3],0); // 801826EC
  if (crb(c,2)) { goto L_80182720; } // 801826F0
  c->r[0]=0u-c->r[29]; // 801826F4
  c->r[3]=c->r[5]+c->r[3]; // 801826F8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801826FC
  c->r[0]=R16(c->r[3]+c->r[0]); // 80182700
  cmps(c,0,(int32_t)c->r[0],0); // 80182704
  if (crb(c,2)) { goto L_80182720; } // 80182708
  c->r[0]=R16(c->r[5]+c->r[0]); // 8018270C
  c->r[4]=c->r[1]+0x00000008u; // 80182710
  c->r[3]=c->r[5]+c->r[0]; // 80182714
  c->lr=0x8018271Cu; f_8018201C(c); // 80182718
  goto L_80182724; // 8018271C
L_80182720:;
  c->r[3]=0u+0x00000000u; // 80182720
L_80182724:;
  cmps(c,0,(int32_t)c->r[3],0); // 80182724
  if (crb(c,2)) { goto L_80182784; } // 80182728
  c->r[0]=R8(c->r[1]+0x00000011u); // 8018272C
  cmps(c,0,(int32_t)c->r[0],0); // 80182730
  if (crb(c,2)) { goto L_8018277C; } // 80182734
  c->r[0]=R32(c->r[1]+0x00000018u); // 80182738
  cmpu(c,0,c->r[0],c->r[28]); // 8018273C
  if (!crb(c,2)) { goto L_8018277C; } // 80182740
  c->r[3]=R32(c->r[1]+0x00000020u); // 80182744
  c->r[4]=c->r[27]|c->r[27]; // 80182748
  c->r[5]=c->r[28]|c->r[28]; // 8018274C
  c->lr=0x80182754u; f_802583D8(c); // 80182750
  cmps(c,0,(int32_t)c->r[3],0); // 80182754
  if (crb(c,2)) { goto L_80182774; } // 80182758
  c->r[3]=R32(c->r[1]+0x00000020u); // 8018275C
  c->r[4]=c->r[27]|c->r[27]; // 80182760
  c->r[5]=c->r[28]|c->r[28]; // 80182764
  c->lr=0x8018276Cu; f_80004338(c); // 80182768
  c->r[0]=0u+0x00000001u; // 8018276C
  W8(c->r[13]+0xFFFFAF35u,c->r[0]); // 80182770
L_80182774:;
  c->r[31]=0u+0x00000001u; // 80182774
  goto L_8018279C; // 80182778
L_8018277C:;
  c->r[3]=c->r[29]|c->r[29]; // 8018277C
  c->lr=0x80182784u; f_801821B4(c); // 80182780
L_80182784:;
  c->r[3]=c->r[29]|c->r[29]; // 80182784
  c->r[5]=c->r[27]|c->r[27]; // 80182788
  c->r[6]=c->r[28]|c->r[28]; // 8018278C
  c->r[4]=0u+0x00000040u; // 80182790
  c->lr=0x80182798u; f_80182344(c); // 80182794
  c->r[31]=c->r[3]|c->r[3]; // 80182798
L_8018279C:;
  c->r[3]=c->r[30]|c->r[30]; // 8018279C
  c->lr=0x801827A4u; f_80154438(c); // 801827A0
  c->r[11]=c->r[1]+0x00000040u; // 801827A4
  c->r[3]=c->r[31]|c->r[31]; // 801827A8
  c->lr=0x801827B0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801827AC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801827B0
  c->lr=c->r[0]; // 801827B4
  c->r[1]=c->r[1]+0x00000040u; // 801827B8
  return; // 801827BC
}

// SCReplaceIntegerItem
void f_801827C0(Ctx* __restrict c) {
  trace_call(0x801827C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801827C0
  c->r[0]=c->lr; // 801827C4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801827C8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801827CC
  c->r[31]=c->r[5]|c->r[5]; // 801827D0
  W32(c->r[1]+0x00000038u,c->r[30]); // 801827D4
  W32(c->r[1]+0x00000034u,c->r[29]); // 801827D8
  c->r[29]=c->r[4]|c->r[4]; // 801827DC
  W32(c->r[1]+0x00000030u,c->r[28]); // 801827E0
  c->r[28]=c->r[3]|c->r[3]; // 801827E4
  c->lr=0x801827ECu; f_80154410(c); // 801827E8
  c->r[0]=R32(c->r[13]+0xFFFFAF2Cu); // 801827EC
  c->r[5]=0u+0x80460000u; // 801827F0
  c->r[30]=c->r[3]|c->r[3]; // 801827F4
  cmpu(c,0,c->r[29],c->r[0]); // 801827F8
  c->r[5]=c->r[5]+0xFFFFF0A0u; // 801827FC
  if (!crb(c,0)) { goto L_8018283C; } // 80182800
  c->r[3]=R32(c->r[13]+0xFFFFAF30u); // 80182804
  cmps(c,0,(int32_t)c->r[3],0); // 80182808
  if (crb(c,2)) { goto L_8018283C; } // 8018280C
  c->r[0]=0u-c->r[29]; // 80182810
  c->r[3]=c->r[5]+c->r[3]; // 80182814
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80182818
  c->r[0]=R16(c->r[3]+c->r[0]); // 8018281C
  cmps(c,0,(int32_t)c->r[0],0); // 80182820
  if (crb(c,2)) { goto L_8018283C; } // 80182824
  c->r[0]=R16(c->r[5]+c->r[0]); // 80182828
  c->r[4]=c->r[1]+0x00000008u; // 8018282C
  c->r[3]=c->r[5]+c->r[0]; // 80182830
  c->lr=0x80182838u; f_8018201C(c); // 80182834
  goto L_80182840; // 80182838
L_8018283C:;
  c->r[3]=0u+0x00000000u; // 8018283C
L_80182840:;
  cmps(c,0,(int32_t)c->r[3],0); // 80182840
  if (crb(c,2)) { goto L_80182894; } // 80182844
  c->r[0]=R8(c->r[1]+0x00000010u); // 80182848
  cmpu(c,0,c->r[0],c->r[31]); // 8018284C
  if (!crb(c,2)) { goto L_8018288C; } // 80182850
  c->r[3]=R32(c->r[1]+0x00000020u); // 80182854
  c->r[4]=c->r[28]|c->r[28]; // 80182858
  c->r[5]=R32(c->r[1]+0x00000018u); // 8018285C
  c->lr=0x80182864u; f_802583D8(c); // 80182860
  cmps(c,0,(int32_t)c->r[3],0); // 80182864
  if (crb(c,2)) { goto L_80182884; } // 80182868
  c->r[3]=R32(c->r[1]+0x00000020u); // 8018286C
  c->r[4]=c->r[28]|c->r[28]; // 80182870
  c->r[5]=R32(c->r[1]+0x00000018u); // 80182874
  c->lr=0x8018287Cu; f_80004338(c); // 80182878
  c->r[0]=0u+0x00000001u; // 8018287C
  W8(c->r[13]+0xFFFFAF35u,c->r[0]); // 80182880
L_80182884:;
  c->r[31]=0u+0x00000001u; // 80182884
  goto L_801828AC; // 80182888
L_8018288C:;
  c->r[3]=c->r[29]|c->r[29]; // 8018288C
  c->lr=0x80182894u; f_801821B4(c); // 80182890
L_80182894:;
  c->r[3]=c->r[29]|c->r[29]; // 80182894
  c->r[4]=c->r[31]|c->r[31]; // 80182898
  c->r[5]=c->r[28]|c->r[28]; // 8018289C
  c->r[6]=0u+0x00000000u; // 801828A0
  c->lr=0x801828A8u; f_80182344(c); // 801828A4
  c->r[31]=c->r[3]|c->r[3]; // 801828A8
L_801828AC:;
  c->r[3]=c->r[30]|c->r[30]; // 801828AC
  c->lr=0x801828B4u; f_80154438(c); // 801828B0
  c->r[3]=c->r[31]|c->r[31]; // 801828B4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801828B8
  c->r[30]=R32(c->r[1]+0x00000038u); // 801828BC
  c->r[29]=R32(c->r[1]+0x00000034u); // 801828C0
  c->r[28]=R32(c->r[1]+0x00000030u); // 801828C4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801828C8
  c->lr=c->r[0]; // 801828CC
  c->r[1]=c->r[1]+0x00000040u; // 801828D0
  return; // 801828D4
}

// SCFindU8Item
void f_801828D8(Ctx* __restrict c) {
  trace_call(0x801828D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801828D8
  c->r[0]=c->lr; // 801828DC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801828E0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801828E4
  W32(c->r[1]+0x00000038u,c->r[30]); // 801828E8
  c->r[30]=0u+0x00000000u; // 801828EC
  W32(c->r[1]+0x00000034u,c->r[29]); // 801828F0
  c->r[29]=c->r[4]|c->r[4]; // 801828F4
  W32(c->r[1]+0x00000030u,c->r[28]); // 801828F8
  c->r[28]=c->r[3]|c->r[3]; // 801828FC
  c->lr=0x80182904u; f_80154410(c); // 80182900
  c->r[0]=R32(c->r[13]+0xFFFFAF2Cu); // 80182904
  c->r[5]=0u+0x80460000u; // 80182908
  c->r[31]=c->r[3]|c->r[3]; // 8018290C
  cmpu(c,0,c->r[29],c->r[0]); // 80182910
  c->r[5]=c->r[5]+0xFFFFF0A0u; // 80182914
  if (!crb(c,0)) { goto L_80182954; } // 80182918
  c->r[3]=R32(c->r[13]+0xFFFFAF30u); // 8018291C
  cmps(c,0,(int32_t)c->r[3],0); // 80182920
  if (crb(c,2)) { goto L_80182954; } // 80182924
  c->r[0]=0u-c->r[29]; // 80182928
  c->r[3]=c->r[5]+c->r[3]; // 8018292C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80182930
  c->r[0]=R16(c->r[3]+c->r[0]); // 80182934
  cmps(c,0,(int32_t)c->r[0],0); // 80182938
  if (crb(c,2)) { goto L_80182954; } // 8018293C
  c->r[0]=R16(c->r[5]+c->r[0]); // 80182940
  c->r[4]=c->r[1]+0x00000008u; // 80182944
  c->r[3]=c->r[5]+c->r[0]; // 80182948
  c->lr=0x80182950u; f_8018201C(c); // 8018294C
  goto L_80182958; // 80182950
L_80182954:;
  c->r[3]=0u+0x00000000u; // 80182954
L_80182958:;
  cmps(c,0,(int32_t)c->r[3],0); // 80182958
  if (crb(c,2)) { goto L_80182980; } // 8018295C
  c->r[0]=R8(c->r[1]+0x00000010u); // 80182960
  cmpu(c,0,c->r[0],0x00000060u); // 80182964
  if (!crb(c,2)) { goto L_80182980; } // 80182968
  c->r[4]=R32(c->r[1]+0x00000020u); // 8018296C
  c->r[3]=c->r[28]|c->r[28]; // 80182970
  c->r[5]=R32(c->r[1]+0x00000018u); // 80182974
  c->lr=0x8018297Cu; f_80004338(c); // 80182978
  c->r[30]=0u+0x00000001u; // 8018297C
L_80182980:;
  c->r[3]=c->r[31]|c->r[31]; // 80182980
  c->lr=0x80182988u; f_80154438(c); // 80182984
  c->r[3]=c->r[30]|c->r[30]; // 80182988
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8018298C
  c->r[30]=R32(c->r[1]+0x00000038u); // 80182990
  c->r[29]=R32(c->r[1]+0x00000034u); // 80182994
  c->r[28]=R32(c->r[1]+0x00000030u); // 80182998
  c->r[0]=R32(c->r[1]+0x00000044u); // 8018299C
  c->lr=c->r[0]; // 801829A0
  c->r[1]=c->r[1]+0x00000040u; // 801829A4
  return; // 801829A8
}

// SCFindS8Item
void f_801829AC(Ctx* __restrict c) {
  trace_call(0x801829ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801829AC
  c->r[0]=c->lr; // 801829B0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801829B4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801829B8
  W32(c->r[1]+0x00000038u,c->r[30]); // 801829BC
  c->r[30]=0u+0x00000000u; // 801829C0
  W32(c->r[1]+0x00000034u,c->r[29]); // 801829C4
  c->r[29]=c->r[4]|c->r[4]; // 801829C8
  W32(c->r[1]+0x00000030u,c->r[28]); // 801829CC
  c->r[28]=c->r[3]|c->r[3]; // 801829D0
  c->lr=0x801829D8u; f_80154410(c); // 801829D4
  c->r[0]=R32(c->r[13]+0xFFFFAF2Cu); // 801829D8
  c->r[5]=0u+0x80460000u; // 801829DC
  c->r[31]=c->r[3]|c->r[3]; // 801829E0
  cmpu(c,0,c->r[29],c->r[0]); // 801829E4
  c->r[5]=c->r[5]+0xFFFFF0A0u; // 801829E8
  if (!crb(c,0)) { goto L_80182A28; } // 801829EC
  c->r[3]=R32(c->r[13]+0xFFFFAF30u); // 801829F0
  cmps(c,0,(int32_t)c->r[3],0); // 801829F4
  if (crb(c,2)) { goto L_80182A28; } // 801829F8
  c->r[0]=0u-c->r[29]; // 801829FC
  c->r[3]=c->r[5]+c->r[3]; // 80182A00
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80182A04
  c->r[0]=R16(c->r[3]+c->r[0]); // 80182A08
  cmps(c,0,(int32_t)c->r[0],0); // 80182A0C
  if (crb(c,2)) { goto L_80182A28; } // 80182A10
  c->r[0]=R16(c->r[5]+c->r[0]); // 80182A14
  c->r[4]=c->r[1]+0x00000008u; // 80182A18
  c->r[3]=c->r[5]+c->r[0]; // 80182A1C
  c->lr=0x80182A24u; f_8018201C(c); // 80182A20
  goto L_80182A2C; // 80182A24
L_80182A28:;
  c->r[3]=0u+0x00000000u; // 80182A28
L_80182A2C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80182A2C
  if (crb(c,2)) { goto L_80182A54; } // 80182A30
  c->r[0]=R8(c->r[1]+0x00000010u); // 80182A34
  cmpu(c,0,c->r[0],0x00000060u); // 80182A38
  if (!crb(c,2)) { goto L_80182A54; } // 80182A3C
  c->r[4]=R32(c->r[1]+0x00000020u); // 80182A40
  c->r[3]=c->r[28]|c->r[28]; // 80182A44
  c->r[5]=R32(c->r[1]+0x00000018u); // 80182A48
  c->lr=0x80182A50u; f_80004338(c); // 80182A4C
  c->r[30]=0u+0x00000001u; // 80182A50
L_80182A54:;
  c->r[3]=c->r[31]|c->r[31]; // 80182A54
  c->lr=0x80182A5Cu; f_80154438(c); // 80182A58
  c->r[3]=c->r[30]|c->r[30]; // 80182A5C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80182A60
  c->r[30]=R32(c->r[1]+0x00000038u); // 80182A64
  c->r[29]=R32(c->r[1]+0x00000034u); // 80182A68
  c->r[28]=R32(c->r[1]+0x00000030u); // 80182A6C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80182A70
  c->lr=c->r[0]; // 80182A74
  c->r[1]=c->r[1]+0x00000040u; // 80182A78
  return; // 80182A7C
}

// SCFindU32Item
void f_80182A80(Ctx* __restrict c) {
  trace_call(0x80182A80u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182A80
  c->r[0]=c->lr; // 80182A84
  W32(c->r[1]+0x00000044u,c->r[0]); // 80182A88
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80182A8C
  W32(c->r[1]+0x00000038u,c->r[30]); // 80182A90
  c->r[30]=0u+0x00000000u; // 80182A94
  W32(c->r[1]+0x00000034u,c->r[29]); // 80182A98
  c->r[29]=c->r[4]|c->r[4]; // 80182A9C
  W32(c->r[1]+0x00000030u,c->r[28]); // 80182AA0
  c->r[28]=c->r[3]|c->r[3]; // 80182AA4
  c->lr=0x80182AACu; f_80154410(c); // 80182AA8
  c->r[0]=R32(c->r[13]+0xFFFFAF2Cu); // 80182AAC
  c->r[5]=0u+0x80460000u; // 80182AB0
  c->r[31]=c->r[3]|c->r[3]; // 80182AB4
  cmpu(c,0,c->r[29],c->r[0]); // 80182AB8
  c->r[5]=c->r[5]+0xFFFFF0A0u; // 80182ABC
  if (!crb(c,0)) { goto L_80182AFC; } // 80182AC0
  c->r[3]=R32(c->r[13]+0xFFFFAF30u); // 80182AC4
  cmps(c,0,(int32_t)c->r[3],0); // 80182AC8
  if (crb(c,2)) { goto L_80182AFC; } // 80182ACC
  c->r[0]=0u-c->r[29]; // 80182AD0
  c->r[3]=c->r[5]+c->r[3]; // 80182AD4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80182AD8
  c->r[0]=R16(c->r[3]+c->r[0]); // 80182ADC
  cmps(c,0,(int32_t)c->r[0],0); // 80182AE0
  if (crb(c,2)) { goto L_80182AFC; } // 80182AE4
  c->r[0]=R16(c->r[5]+c->r[0]); // 80182AE8
  c->r[4]=c->r[1]+0x00000008u; // 80182AEC
  c->r[3]=c->r[5]+c->r[0]; // 80182AF0
  c->lr=0x80182AF8u; f_8018201C(c); // 80182AF4
  goto L_80182B00; // 80182AF8
L_80182AFC:;
  c->r[3]=0u+0x00000000u; // 80182AFC
L_80182B00:;
  cmps(c,0,(int32_t)c->r[3],0); // 80182B00
  if (crb(c,2)) { goto L_80182B28; } // 80182B04
  c->r[0]=R8(c->r[1]+0x00000010u); // 80182B08
  cmpu(c,0,c->r[0],0x000000A0u); // 80182B0C
  if (!crb(c,2)) { goto L_80182B28; } // 80182B10
  c->r[4]=R32(c->r[1]+0x00000020u); // 80182B14
  c->r[3]=c->r[28]|c->r[28]; // 80182B18
  c->r[5]=R32(c->r[1]+0x00000018u); // 80182B1C
  c->lr=0x80182B24u; f_80004338(c); // 80182B20
  c->r[30]=0u+0x00000001u; // 80182B24
L_80182B28:;
  c->r[3]=c->r[31]|c->r[31]; // 80182B28
  c->lr=0x80182B30u; f_80154438(c); // 80182B2C
  c->r[3]=c->r[30]|c->r[30]; // 80182B30
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80182B34
  c->r[30]=R32(c->r[1]+0x00000038u); // 80182B38
  c->r[29]=R32(c->r[1]+0x00000034u); // 80182B3C
  c->r[28]=R32(c->r[1]+0x00000030u); // 80182B40
  c->r[0]=R32(c->r[1]+0x00000044u); // 80182B44
  c->lr=c->r[0]; // 80182B48
  c->r[1]=c->r[1]+0x00000040u; // 80182B4C
  return; // 80182B50
}

// SCReplaceU8Item
void f_80182B54(Ctx* __restrict c) {
  trace_call(0x80182B54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182B54
  c->r[0]=c->lr; // 80182B58
  c->r[5]=0u+0x00000060u; // 80182B5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182B60
  W8(c->r[1]+0x00000008u,c->r[3]); // 80182B64
  c->r[3]=c->r[1]+0x00000008u; // 80182B68
  c->lr=0x80182B70u; f_801827C0(c); // 80182B6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182B70
  c->lr=c->r[0]; // 80182B74
  c->r[1]=c->r[1]+0x00000010u; // 80182B78
  return; // 80182B7C
}

// __SCFlushSyncCallback
void f_80182B80(Ctx* __restrict c) {
  trace_call(0x80182B80u);
  c->r[3]=0u+0x80460000u; // 80182B80
  c->r[3]=c->r[3]+0xFFFFEF00u; // 80182B84
  f_801582C0(c); return; // 80182B88
}

// SCFlushAsync
void f_80182B8C(Ctx* __restrict c) {
  trace_call(0x80182B8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182B8C
  c->r[0]=c->lr; // 80182B90
  W32(c->r[1]+0x00000024u,c->r[0]); // 80182B94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80182B98
  W32(c->r[1]+0x00000018u,c->r[30]); // 80182B9C
  c->r[30]=c->r[3]|c->r[3]; // 80182BA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80182BA4
  c->r[29]=0u+0x80460000u; // 80182BA8
  c->r[29]=c->r[29]+0xFFFFEF00u; // 80182BAC
  W32(c->r[1]+0x00000010u,c->r[28]); // 80182BB0
  c->r[28]=c->r[29]+0x00000000u; // 80182BB4
  c->lr=0x80182BBCu; f_80154410(c); // 80182BB8
  c->r[0]=R8(c->r[13]+0xFFFFAF20u); // 80182BBC
  c->r[31]=c->r[3]|c->r[3]; // 80182BC0
  cmps(c,0,(int32_t)c->r[0],0); // 80182BC4
  if (!crb(c,2)) { goto L_80182D58; } // 80182BC8
  c->r[0]=0u+0x00000000u; // 80182BCC
  c->r[3]=0u+0x00000001u; // 80182BD0
  cmpu(c,0,c->r[30],c->r[0]); // 80182BD4
  W8(c->r[13]+0xFFFFAF20u,c->r[3]); // 80182BD8
  if (!crb(c,2)) { goto L_80182BE8; } // 80182BDC
  c->r[30]=0u+0x80180000u; // 80182BE0
  c->r[30]=c->r[30]+0x00002B80u; // 80182BE4
L_80182BE8:;
  c->r[0]=R8(c->r[13]+0xFFFFAF35u); // 80182BE8
  c->r[4]=0u+0x00000000u; // 80182BEC
  c->r[3]=0u+0x00004000u; // 80182BF0
  W32(c->r[28]+0x00000184u,c->r[30]); // 80182BF4
  cmps(c,0,(int32_t)c->r[0],0); // 80182BF8
  W32(c->r[28]+0x00000188u,c->r[4]); // 80182BFC
  W8(c->r[28]+0x00000159u,c->r[4]); // 80182C00
  W32(c->r[28]+0x0000018Cu,c->r[3]); // 80182C04
  if (crb(c,2)) { goto L_80182C14; } // 80182C08
  c->r[0]=0u+0x00000001u; // 80182C0C
  goto L_80182C18; // 80182C10
L_80182C14:;
  c->r[0]=0u+0x00000000u; // 80182C14
L_80182C18:;
  cmps(c,0,(int32_t)c->r[0],0); // 80182C18
  if (!crb(c,2)) { goto L_80182C80; } // 80182C1C
  c->r[3]=c->r[31]|c->r[31]; // 80182C20
  c->lr=0x80182C28u; f_80154438(c); // 80182C24
  c->r[29]=c->r[29]+0x00000000u; // 80182C28
  c->r[0]=R32(c->r[29]+0x00000188u); // 80182C2C
  cmps(c,0,(int32_t)c->r[0],0); // 80182C30
  if (crb(c,2)) { goto L_80182C40; } // 80182C34
  c->r[0]=0u+0x00000001u; // 80182C38
  W8(c->r[13]+0xFFFFAF35u,c->r[0]); // 80182C3C
L_80182C40:;
  c->r[12]=R32(c->r[29]+0x00000184u); // 80182C40
  cmps(c,0,(int32_t)c->r[12],0); // 80182C44
  if (crb(c,2)) { goto L_80182C74; } // 80182C48
  c->r[30]=0u+0x00000000u; // 80182C4C
  c->r[3]=R32(c->r[29]+0x00000188u); // 80182C50
  W32(c->r[29]+0x00000184u,c->r[30]); // 80182C54
  c->ctr=c->r[12]; // 80182C58
  if (true) { c->lr=0x80182C60u; dispatch(c,c->ctr); } // 80182C5C
  c->r[0]=R32(c->r[29]+0x00000000u); // 80182C60
  cmpu(c,0,c->r[0],c->r[30]); // 80182C64
  if (crb(c,2)) { goto L_80182C74; } // 80182C68
  c->r[3]=c->r[29]|c->r[29]; // 80182C6C
  c->lr=0x80182C74u; f_801582C0(c); // 80182C70
L_80182C74:;
  c->r[0]=R32(c->r[29]+0x00000188u); // 80182C74
  W8(c->r[13]+0xFFFFAF20u,c->r[0]); // 80182C78
  goto L_80182D88; // 80182C7C
L_80182C80:;
  c->r[30]=0u+0x00000000u; // 80182C80
  c->r[3]=c->r[29]+0x000041A0u; // 80182C84
  W8(c->r[13]+0xFFFFAF35u,c->r[30]); // 80182C88
  c->r[4]=c->r[29]+0x000001A0u; // 80182C8C
  c->r[5]=0u+0x00004000u; // 80182C90
  c->lr=0x80182C98u; f_80004338(c); // 80182C94
  c->r[3]=c->r[31]|c->r[31]; // 80182C98
  c->lr=0x80182CA0u; f_80154438(c); // 80182C9C
  c->r[3]=0u+0x80270000u; // 80182CA0
  c->r[31]=0u+0x80180000u; // 80182CA4
  W8(c->r[28]+0x00000158u,c->r[30]); // 80182CA8
  c->r[3]=c->r[3]+0x00006790u; // 80182CAC
  c->r[4]=c->r[28]+0x00000150u; // 80182CB0
  c->r[5]=c->r[31]+0x00002DA8u; // 80182CB4
  c->r[6]=c->r[28]+0x00000094u; // 80182CB8
  c->lr=0x80182CC0u; f_80180D88(c); // 80182CBC
  cmps(c,0,(int32_t)c->r[3],0); // 80182CC0
  if (crb(c,2)) { goto L_80182D88; } // 80182CC4
  c->r[5]=c->r[29]+0x00000000u; // 80182CC8
  c->r[3]=0u+0x00000002u; // 80182CCC
  c->r[0]=R8(c->r[5]+0x00000159u); // 80182CD0
  W32(c->r[5]+0x00000188u,c->r[3]); // 80182CD4
  cmps(c,0,(int32_t)c->r[0],0); // 80182CD8
  if (crb(c,2)) { goto L_80182D00; } // 80182CDC
  c->r[0]=0u+0x00000009u; // 80182CE0
  c->r[3]=c->r[5]+0x00000008u; // 80182CE4
  W8(c->r[5]+0x00000158u,c->r[0]); // 80182CE8
  c->r[4]=c->r[31]+0x00002DA8u; // 80182CEC
  c->r[5]=c->r[5]+0x00000094u; // 80182CF0
  c->lr=0x80182CF8u; f_8017F340(c); // 80182CF4
  cmps(c,0,(int32_t)c->r[3],0); // 80182CF8
  if (crb(c,2)) { goto L_80182D88; } // 80182CFC
L_80182D00:;
  c->r[29]=c->r[29]+0x00000000u; // 80182D00
  c->r[0]=R32(c->r[29]+0x00000188u); // 80182D04
  cmps(c,0,(int32_t)c->r[0],0); // 80182D08
  if (crb(c,2)) { goto L_80182D18; } // 80182D0C
  c->r[0]=0u+0x00000001u; // 80182D10
  W8(c->r[13]+0xFFFFAF35u,c->r[0]); // 80182D14
L_80182D18:;
  c->r[12]=R32(c->r[29]+0x00000184u); // 80182D18
  cmps(c,0,(int32_t)c->r[12],0); // 80182D1C
  if (crb(c,2)) { goto L_80182D4C; } // 80182D20
  c->r[31]=0u+0x00000000u; // 80182D24
  c->r[3]=R32(c->r[29]+0x00000188u); // 80182D28
  W32(c->r[29]+0x00000184u,c->r[31]); // 80182D2C
  c->ctr=c->r[12]; // 80182D30
  if (true) { c->lr=0x80182D38u; dispatch(c,c->ctr); } // 80182D34
  c->r[0]=R32(c->r[29]+0x00000000u); // 80182D38
  cmpu(c,0,c->r[0],c->r[31]); // 80182D3C
  if (crb(c,2)) { goto L_80182D4C; } // 80182D40
  c->r[3]=c->r[29]|c->r[29]; // 80182D44
  c->lr=0x80182D4Cu; f_801582C0(c); // 80182D48
L_80182D4C:;
  c->r[0]=R32(c->r[29]+0x00000188u); // 80182D4C
  W8(c->r[13]+0xFFFFAF20u,c->r[0]); // 80182D50
  goto L_80182D88; // 80182D54
L_80182D58:;
  cmps(c,0,(int32_t)c->r[30],0); // 80182D58
  if (crb(c,2)) { goto L_80182D80; } // 80182D5C
  cmpu(c,0,c->r[0],0x00000001u); // 80182D60
  if (!crb(c,2)) { goto L_80182D6C; } // 80182D64
  goto L_80182D70; // 80182D68
L_80182D6C:;
  c->r[0]=0u+0x00000002u; // 80182D6C
L_80182D70:;
  c->r[12]=c->r[30]|c->r[30]; // 80182D70
  c->r[3]=c->r[0]|c->r[0]; // 80182D74
  c->ctr=c->r[12]; // 80182D78
  if (true) { c->lr=0x80182D80u; dispatch(c,c->ctr); } // 80182D7C
L_80182D80:;
  c->r[3]=c->r[31]|c->r[31]; // 80182D80
  c->lr=0x80182D88u; f_80154438(c); // 80182D84
L_80182D88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80182D88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80182D8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80182D90
  c->r[29]=R32(c->r[1]+0x00000014u); // 80182D94
  c->r[28]=R32(c->r[1]+0x00000010u); // 80182D98
  c->lr=c->r[0]; // 80182D9C
  c->r[1]=c->r[1]+0x00000020u; // 80182DA0
  return; // 80182DA4
}

// MyNandCallback
void f_80182DA8(Ctx* __restrict c) {
  trace_call(0x80182DA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182DA8
  c->r[0]=c->lr; // 80182DAC
  c->r[7]=0u+0x80460000u; // 80182DB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182DB4
  c->r[7]=c->r[7]+0xFFFFEF00u; // 80182DB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80182DBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80182DC0
  c->r[0]=R8(c->r[7]+0x00000158u); // 80182DC4
  cmpu(c,0,c->r[0],0x00000009u); // 80182DC8
  if (crb(c,1)) { goto L_801830C8; } // 80182DCC
  c->r[4]=0u+0x802E0000u; // 80182DD0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80182DD4
  c->r[4]=c->r[4]+0xFFFFC258u; // 80182DD8
  c->r[4]=R32(c->r[4]+c->r[0]); // 80182DDC
  c->ctr=c->r[4]; // 80182DE0
  if (true) { switch (c->ctr) { case 0x80182DE8u: goto L_80182DE8; case 0x80182E2Cu: goto L_80182E2C; case 0x80182E6Cu: goto L_80182E6C; case 0x80182E9Cu: goto L_80182E9C; case 0x80182EE4u: goto L_80182EE4; case 0x80182F18u: goto L_80182F18; case 0x80182F4Cu: goto L_80182F4C; case 0x80182F90u: goto L_80182F90; case 0x80182FCCu: goto L_80182FCC; case 0x80182FD4u: goto L_80182FD4; default: break; } dispatch(c,c->ctr); return; } // 80182DE4
L_80182DE8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80182DE8
  if (!crb(c,2)) { goto L_80182E40; } // 80182DEC
  c->r[0]=R8(c->r[7]+0x00000150u); // 80182DF0
  cmpu(c,0,c->r[0],0x00000001u); // 80182DF4
  if (!crb(c,2)) { goto L_80182E40; } // 80182DF8
  c->r[0]=0u+0x00000001u; // 80182DFC
  c->r[3]=0u+0x80270000u; // 80182E00
  c->r[5]=0u+0x80180000u; // 80182E04
  W8(c->r[7]+0x00000158u,c->r[0]); // 80182E08
  c->r[3]=c->r[3]+0x00006790u; // 80182E0C
  c->r[4]=c->r[7]+0x00000150u; // 80182E10
  c->r[5]=c->r[5]+0x00002DA8u; // 80182E14
  c->r[6]=c->r[7]+0x00000094u; // 80182E18
  c->lr=0x80182E20u; f_8017EEAC(c); // 80182E1C
  cmps(c,0,(int32_t)c->r[3],0); // 80182E20
  if (!crb(c,2)) { goto L_80183030; } // 80182E24
  goto L_801830C8; // 80182E28
L_80182E2C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80182E2C
  if (!crb(c,2)) { goto L_80182E40; } // 80182E30
  c->r[0]=R8(c->r[7]+0x00000157u); // 80182E34
  cmpu(c,0,c->r[0],0x0000003Fu); // 80182E38
  if (crb(c,2)) { goto L_80182F18; } // 80182E3C
L_80182E40:;
  c->r[0]=0u+0x00000002u; // 80182E40
  c->r[3]=0u+0x80270000u; // 80182E44
  c->r[4]=0u+0x80180000u; // 80182E48
  W8(c->r[7]+0x00000158u,c->r[0]); // 80182E4C
  c->r[3]=c->r[3]+0x00006790u; // 80182E50
  c->r[5]=c->r[7]+0x00000094u; // 80182E54
  c->r[4]=c->r[4]+0x00002DA8u; // 80182E58
  c->lr=0x80182E60u; f_8017E32C(c); // 80182E5C
  cmps(c,0,(int32_t)c->r[3],0); // 80182E60
  if (!crb(c,2)) { goto L_80183030; } // 80182E64
  goto L_801830C8; // 80182E68
L_80182E6C:;
  c->r[0]=0u+0x00000003u; // 80182E6C
  c->r[3]=0u+0x80270000u; // 80182E70
  c->r[5]=0u+0x80180000u; // 80182E74
  W8(c->r[7]+0x00000158u,c->r[0]); // 80182E78
  c->r[3]=c->r[3]+0x00006780u; // 80182E7C
  c->r[4]=c->r[7]+0x00000150u; // 80182E80
  c->r[5]=c->r[5]+0x00002DA8u; // 80182E84
  c->r[6]=c->r[7]+0x00000094u; // 80182E88
  c->lr=0x80182E90u; f_80180D88(c); // 80182E8C
  cmps(c,0,(int32_t)c->r[3],0); // 80182E90
  if (!crb(c,2)) { goto L_80183030; } // 80182E94
  goto L_801830C8; // 80182E98
L_80182E9C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80182E9C
  if (!crb(c,2)) { goto L_80182EB0; } // 80182EA0
  c->r[0]=R8(c->r[7]+0x00000150u); // 80182EA4
  cmpu(c,0,c->r[0],0x00000002u); // 80182EA8
  if (crb(c,2)) { goto L_80182EE4; } // 80182EAC
L_80182EB0:;
  c->r[0]=0u+0x00000004u; // 80182EB0
  c->r[3]=0u+0x80270000u; // 80182EB4
  c->r[6]=0u+0x80180000u; // 80182EB8
  W8(c->r[7]+0x00000158u,c->r[0]); // 80182EBC
  c->r[3]=c->r[3]+0x00006780u; // 80182EC0
  c->r[7]=c->r[7]+0x00000094u; // 80182EC4
  c->r[6]=c->r[6]+0x00002DA8u; // 80182EC8
  c->r[4]=0u+0x0000003Fu; // 80182ECC
  c->r[5]=0u+0x00000000u; // 80182ED0
  c->lr=0x80182ED8u; f_8017E89C(c); // 80182ED4
  cmps(c,0,(int32_t)c->r[3],0); // 80182ED8
  if (!crb(c,2)) { goto L_80183030; } // 80182EDC
  goto L_801830C8; // 80182EE0
L_80182EE4:;
  c->r[0]=0u+0x00000005u; // 80182EE4
  c->r[3]=0u+0x80270000u; // 80182EE8
  c->r[6]=0u+0x80180000u; // 80182EEC
  W8(c->r[7]+0x00000158u,c->r[0]); // 80182EF0
  c->r[3]=c->r[3]+0x00006790u; // 80182EF4
  c->r[7]=c->r[7]+0x00000094u; // 80182EF8
  c->r[6]=c->r[6]+0x00002DA8u; // 80182EFC
  c->r[4]=0u+0x0000003Fu; // 80182F00
  c->r[5]=0u+0x00000000u; // 80182F04
  c->lr=0x80182F0Cu; f_8017E094(c); // 80182F08
  cmps(c,0,(int32_t)c->r[3],0); // 80182F0C
  if (!crb(c,2)) { goto L_80183030; } // 80182F10
  goto L_801830C8; // 80182F14
L_80182F18:;
  c->r[0]=0u+0x00000006u; // 80182F18
  c->r[3]=0u+0x80270000u; // 80182F1C
  c->r[6]=0u+0x80180000u; // 80182F20
  W8(c->r[7]+0x00000158u,c->r[0]); // 80182F24
  c->r[4]=c->r[7]+0x00000008u; // 80182F28
  c->r[3]=c->r[3]+0x00006790u; // 80182F2C
  c->r[6]=c->r[6]+0x00002DA8u; // 80182F30
  c->r[7]=c->r[7]+0x00000094u; // 80182F34
  c->r[5]=0u+0x00000002u; // 80182F38
  c->lr=0x80182F40u; f_8017F1E4(c); // 80182F3C
  cmps(c,0,(int32_t)c->r[3],0); // 80182F40
  if (!crb(c,2)) { goto L_80183030; } // 80182F44
  goto L_801830C8; // 80182F48
L_80182F4C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80182F4C
  if (!crb(c,2)) { goto L_80183030; } // 80182F50
  c->r[3]=0u+0x00000001u; // 80182F54
  c->r[0]=0u+0x00000007u; // 80182F58
  c->r[4]=0u+0x80460000u; // 80182F5C
  c->r[6]=0u+0x80180000u; // 80182F60
  W8(c->r[7]+0x00000159u,c->r[3]); // 80182F64
  c->r[3]=c->r[7]+0x00000008u; // 80182F68
  c->r[5]=R32(c->r[7]+0x0000018Cu); // 80182F6C
  c->r[4]=c->r[4]+0x000030A0u; // 80182F70
  W8(c->r[7]+0x00000158u,c->r[0]); // 80182F74
  c->r[6]=c->r[6]+0x00002DA8u; // 80182F78
  c->r[7]=c->r[7]+0x00000094u; // 80182F7C
  c->lr=0x80182F84u; f_8017E534(c); // 80182F80
  cmps(c,0,(int32_t)c->r[3],0); // 80182F84
  if (!crb(c,2)) { goto L_80183030; } // 80182F88
  goto L_801830C8; // 80182F8C
L_80182F90:;
  c->r[0]=R32(c->r[7]+0x0000018Cu); // 80182F90
  cmpu(c,0,c->r[3],c->r[0]); // 80182F94
  if (!crb(c,2)) { goto L_80183030; } // 80182F98
  c->r[3]=0u+0x00000000u; // 80182F9C
  c->r[0]=0u+0x00000008u; // 80182FA0
  c->r[4]=0u+0x80180000u; // 80182FA4
  W8(c->r[7]+0x00000159u,c->r[3]); // 80182FA8
  c->r[3]=c->r[7]+0x00000008u; // 80182FAC
  c->r[5]=c->r[7]+0x00000094u; // 80182FB0
  W8(c->r[7]+0x00000158u,c->r[0]); // 80182FB4
  c->r[4]=c->r[4]+0x00002DA8u; // 80182FB8
  c->lr=0x80182FC0u; f_8017F340(c); // 80182FBC
  cmps(c,0,(int32_t)c->r[3],0); // 80182FC0
  if (!crb(c,2)) { goto L_80183030; } // 80182FC4
  goto L_801830C8; // 80182FC8
L_80182FCC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80182FCC
  if (!crb(c,2)) { goto L_80183030; } // 80182FD0
L_80182FD4:;
  c->r[30]=0u+0x80460000u; // 80182FD4
  c->r[30]=c->r[30]+0xFFFFEF00u; // 80182FD8
  c->r[0]=R32(c->r[30]+0x00000188u); // 80182FDC
  cmps(c,0,(int32_t)c->r[0],0); // 80182FE0
  if (crb(c,2)) { goto L_80182FF0; } // 80182FE4
  c->r[0]=0u+0x00000001u; // 80182FE8
  W8(c->r[13]+0xFFFFAF35u,c->r[0]); // 80182FEC
L_80182FF0:;
  c->r[12]=R32(c->r[30]+0x00000184u); // 80182FF0
  cmps(c,0,(int32_t)c->r[12],0); // 80182FF4
  if (crb(c,2)) { goto L_80183024; } // 80182FF8
  c->r[31]=0u+0x00000000u; // 80182FFC
  c->r[3]=R32(c->r[30]+0x00000188u); // 80183000
  W32(c->r[30]+0x00000184u,c->r[31]); // 80183004
  c->ctr=c->r[12]; // 80183008
  if (true) { c->lr=0x80183010u; dispatch(c,c->ctr); } // 8018300C
  c->r[0]=R32(c->r[30]+0x00000000u); // 80183010
  cmpu(c,0,c->r[0],c->r[31]); // 80183014
  if (crb(c,2)) { goto L_80183024; } // 80183018
  c->r[3]=c->r[30]|c->r[30]; // 8018301C
  c->lr=0x80183024u; f_801582C0(c); // 80183020
L_80183024:;
  c->r[0]=R32(c->r[30]+0x00000188u); // 80183024
  W8(c->r[13]+0xFFFFAF20u,c->r[0]); // 80183028
  goto L_801830C8; // 8018302C
L_80183030:;
  c->r[5]=0u+0x80460000u; // 80183030
  c->r[3]=0u+0x00000002u; // 80183034
  c->r[5]=c->r[5]+0xFFFFEF00u; // 80183038
  c->r[0]=R8(c->r[5]+0x00000159u); // 8018303C
  W32(c->r[5]+0x00000188u,c->r[3]); // 80183040
  cmps(c,0,(int32_t)c->r[0],0); // 80183044
  if (crb(c,2)) { goto L_80183070; } // 80183048
  c->r[0]=0u+0x00000009u; // 8018304C
  c->r[4]=0u+0x80180000u; // 80183050
  W8(c->r[5]+0x00000158u,c->r[0]); // 80183054
  c->r[3]=c->r[5]+0x00000008u; // 80183058
  c->r[4]=c->r[4]+0x00002DA8u; // 8018305C
  c->r[5]=c->r[5]+0x00000094u; // 80183060
  c->lr=0x80183068u; f_8017F340(c); // 80183064
  cmps(c,0,(int32_t)c->r[3],0); // 80183068
  if (crb(c,2)) { goto L_801830C8; } // 8018306C
L_80183070:;
  c->r[30]=0u+0x80460000u; // 80183070
  c->r[30]=c->r[30]+0xFFFFEF00u; // 80183074
  c->r[0]=R32(c->r[30]+0x00000188u); // 80183078
  cmps(c,0,(int32_t)c->r[0],0); // 8018307C
  if (crb(c,2)) { goto L_8018308C; } // 80183080
  c->r[0]=0u+0x00000001u; // 80183084
  W8(c->r[13]+0xFFFFAF35u,c->r[0]); // 80183088
L_8018308C:;
  c->r[12]=R32(c->r[30]+0x00000184u); // 8018308C
  cmps(c,0,(int32_t)c->r[12],0); // 80183090
  if (crb(c,2)) { goto L_801830C0; } // 80183094
  c->r[31]=0u+0x00000000u; // 80183098
  c->r[3]=R32(c->r[30]+0x00000188u); // 8018309C
  W32(c->r[30]+0x00000184u,c->r[31]); // 801830A0
  c->ctr=c->r[12]; // 801830A4
  if (true) { c->lr=0x801830ACu; dispatch(c,c->ctr); } // 801830A8
  c->r[0]=R32(c->r[30]+0x00000000u); // 801830AC
  cmpu(c,0,c->r[0],c->r[31]); // 801830B0
  if (crb(c,2)) { goto L_801830C0; } // 801830B4
  c->r[3]=c->r[30]|c->r[30]; // 801830B8
  c->lr=0x801830C0u; f_801582C0(c); // 801830BC
L_801830C0:;
  c->r[0]=R32(c->r[30]+0x00000188u); // 801830C0
  W8(c->r[13]+0xFFFFAF20u,c->r[0]); // 801830C4
L_801830C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801830C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801830CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801830D0
  c->lr=c->r[0]; // 801830D4
  c->r[1]=c->r[1]+0x00000010u; // 801830D8
  return; // 801830DC
}

void hle_SCGetAspectRatio(Ctx*);
// SCGetAspectRatio
void f_801830E0(Ctx* __restrict c) {
  hle_SCGetAspectRatio(c);
}

// SCGetDisplayOffsetH
void f_80183134(Ctx* __restrict c) {
  trace_call(0x80183134u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183134
  c->r[0]=c->lr; // 80183138
  c->r[4]=0u+0x00000005u; // 8018313C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80183140
  c->r[3]=c->r[1]+0x00000008u; // 80183144
  c->lr=0x8018314Cu; f_801829AC(c); // 80183148
  cmps(c,0,(int32_t)c->r[3],0); // 8018314C
  if (!crb(c,2)) { goto L_80183160; } // 80183150
  c->r[0]=0u+0x00000000u; // 80183154
  W8(c->r[1]+0x00000008u,c->r[0]); // 80183158
  goto L_8018318C; // 8018315C
L_80183160:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80183160
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80183164
  cmps(c,0,(int32_t)c->r[0],-32); // 80183168
  if (!crb(c,0)) { goto L_8018317C; } // 8018316C
  c->r[0]=0u+0xFFFFFFE0u; // 80183170
  W8(c->r[1]+0x00000008u,c->r[0]); // 80183174
  goto L_8018318C; // 80183178
L_8018317C:;
  cmps(c,0,(int32_t)c->r[0],32); // 8018317C
  if (!crb(c,1)) { goto L_8018318C; } // 80183180
  c->r[0]=0u+0x00000020u; // 80183184
  W8(c->r[1]+0x00000008u,c->r[0]); // 80183188
L_8018318C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 8018318C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80183190
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80183194
  c->r[0]=R32(c->r[1]+0x00000014u); // 80183198
  c->lr=c->r[0]; // 8018319C
  c->r[1]=c->r[1]+0x00000010u; // 801831A0
  return; // 801831A4
}

// SCGetEuRgb60Mode
void f_801831A8(Ctx* __restrict c) {
  trace_call(0x801831A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801831A8
  c->r[0]=c->lr; // 801831AC
  c->r[4]=0u+0x00000006u; // 801831B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801831B4
  c->r[3]=c->r[1]+0x00000008u; // 801831B8
  c->lr=0x801831C0u; f_801828D8(c); // 801831BC
  cmps(c,0,(int32_t)c->r[3],0); // 801831C0
  if (!crb(c,2)) { goto L_801831D4; } // 801831C4
  c->r[0]=0u+0x00000000u; // 801831C8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801831CC
  goto L_801831E8; // 801831D0
L_801831D4:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801831D4
  cmpu(c,0,c->r[0],0x00000001u); // 801831D8
  if (crb(c,2)) { goto L_801831E8; } // 801831DC
  c->r[0]=0u+0x00000000u; // 801831E0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801831E4
L_801831E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801831E8
  c->r[3]=R8(c->r[1]+0x00000008u); // 801831EC
  c->lr=c->r[0]; // 801831F0
  c->r[1]=c->r[1]+0x00000010u; // 801831F4
  return; // 801831F8
}

// SCGetIdleMode
void f_801831FC(Ctx* __restrict c) {
  trace_call(0x801831FCu);
  c->r[4]=0u+0x00000002u; // 801831FC
  c->r[5]=0u+0x00000009u; // 80183200
  f_801825BC(c); return; // 80183204
}

// SCGetLanguage
void f_80183208(Ctx* __restrict c) {
  trace_call(0x80183208u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183208
  c->r[0]=c->lr; // 8018320C
  c->r[4]=0u+0x0000000Bu; // 80183210
  W32(c->r[1]+0x00000014u,c->r[0]); // 80183214
  c->r[3]=c->r[1]+0x00000008u; // 80183218
  c->lr=0x80183220u; f_801828D8(c); // 8018321C
  cmps(c,0,(int32_t)c->r[3],0); // 80183220
  if (!crb(c,2)) { goto L_8018324C; } // 80183224
  c->lr=0x8018322Cu; f_801837A8(c); // 80183228
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 8018322C
  if (!crb(c,2)) { goto L_80183240; } // 80183230
  c->r[0]=0u+0x00000000u; // 80183234
  W8(c->r[1]+0x00000008u,c->r[0]); // 80183238
  goto L_80183260; // 8018323C
L_80183240:;
  c->r[0]=0u+0x00000001u; // 80183240
  W8(c->r[1]+0x00000008u,c->r[0]); // 80183244
  goto L_80183260; // 80183248
L_8018324C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 8018324C
  cmpu(c,0,c->r[0],0x00000009u); // 80183250
  if (!crb(c,1)) { goto L_80183260; } // 80183254
  c->r[0]=0u+0x00000001u; // 80183258
  W8(c->r[1]+0x00000008u,c->r[0]); // 8018325C
L_80183260:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80183260
  c->r[3]=R8(c->r[1]+0x00000008u); // 80183264
  c->lr=c->r[0]; // 80183268
  c->r[1]=c->r[1]+0x00000010u; // 8018326C
  return; // 80183270
}

// SCGetProgressiveMode
void f_80183274(Ctx* __restrict c) {
  trace_call(0x80183274u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183274
  c->r[0]=c->lr; // 80183278
  c->r[4]=0u+0x0000000Eu; // 8018327C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80183280
  c->r[3]=c->r[1]+0x00000008u; // 80183284
  c->lr=0x8018328Cu; f_801828D8(c); // 80183288
  cmps(c,0,(int32_t)c->r[3],0); // 8018328C
  if (!crb(c,2)) { goto L_801832A0; } // 80183290
  c->r[0]=0u+0x00000000u; // 80183294
  W8(c->r[1]+0x00000008u,c->r[0]); // 80183298
  goto L_801832B4; // 8018329C
L_801832A0:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801832A0
  cmpu(c,0,c->r[0],0x00000001u); // 801832A4
  if (crb(c,2)) { goto L_801832B4; } // 801832A8
  c->r[0]=0u+0x00000000u; // 801832AC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801832B0
L_801832B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801832B4
  c->r[3]=R8(c->r[1]+0x00000008u); // 801832B8
  c->lr=c->r[0]; // 801832BC
  c->r[1]=c->r[1]+0x00000010u; // 801832C0
  return; // 801832C4
}

// SCGetScreenSaverMode
void f_801832C8(Ctx* __restrict c) {
  trace_call(0x801832C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801832C8
  c->r[0]=c->lr; // 801832CC
  c->r[4]=0u+0x0000000Fu; // 801832D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801832D4
  c->r[3]=c->r[1]+0x00000008u; // 801832D8
  c->lr=0x801832E0u; f_801828D8(c); // 801832DC
  cmps(c,0,(int32_t)c->r[3],0); // 801832E0
  if (!crb(c,2)) { goto L_801832F4; } // 801832E4
  c->r[0]=0u+0x00000001u; // 801832E8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801832EC
  goto L_80183308; // 801832F0
L_801832F4:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801832F4
  cmpu(c,0,c->r[0],0x00000001u); // 801832F8
  if (crb(c,2)) { goto L_80183308; } // 801832FC
  c->r[0]=0u+0x00000000u; // 80183300
  W8(c->r[1]+0x00000008u,c->r[0]); // 80183304
L_80183308:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80183308
  c->r[3]=R8(c->r[1]+0x00000008u); // 8018330C
  c->lr=c->r[0]; // 80183310
  c->r[1]=c->r[1]+0x00000010u; // 80183314
  return; // 80183318
}

// SCGetSoundMode
void f_8018331C(Ctx* __restrict c) {
  trace_call(0x8018331Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018331C
  c->r[0]=c->lr; // 80183320
  c->r[4]=0u+0x00000011u; // 80183324
  W32(c->r[1]+0x00000014u,c->r[0]); // 80183328
  c->r[3]=c->r[1]+0x00000008u; // 8018332C
  c->lr=0x80183334u; f_801828D8(c); // 80183330
  cmps(c,0,(int32_t)c->r[3],0); // 80183334
  if (!crb(c,2)) { goto L_80183348; } // 80183338
  c->r[0]=0u+0x00000001u; // 8018333C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80183340
  goto L_8018336C; // 80183344
L_80183348:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80183348
  cmps(c,0,(int32_t)c->r[0],0); // 8018334C
  if (crb(c,2)) { goto L_8018336C; } // 80183350
  cmpu(c,0,c->r[0],0x00000001u); // 80183354
  if (crb(c,2)) { goto L_8018336C; } // 80183358
  cmpu(c,0,c->r[0],0x00000002u); // 8018335C
  if (crb(c,2)) { goto L_8018336C; } // 80183360
  c->r[0]=0u+0x00000001u; // 80183364
  W8(c->r[1]+0x00000008u,c->r[0]); // 80183368
L_8018336C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018336C
  c->r[3]=R8(c->r[1]+0x00000008u); // 80183370
  c->lr=c->r[0]; // 80183374
  c->r[1]=c->r[1]+0x00000010u; // 80183378
  return; // 8018337C
}

// SCGetCounterBias
void f_80183380(Ctx* __restrict c) {
  trace_call(0x80183380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183380
  c->r[0]=c->lr; // 80183384
  c->r[4]=0u+0x00000000u; // 80183388
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018338C
  c->r[3]=c->r[1]+0x00000008u; // 80183390
  c->lr=0x80183398u; f_80182A80(c); // 80183394
  cmps(c,0,(int32_t)c->r[3],0); // 80183398
  if (!crb(c,2)) { goto L_801833AC; } // 8018339C
  c->r[3]=0u+0x0B4A0000u; // 801833A0
  c->r[0]=c->r[3]+0xFFFFD800u; // 801833A4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801833A8
L_801833AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801833AC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801833B0
  c->lr=c->r[0]; // 801833B4
  c->r[1]=c->r[1]+0x00000010u; // 801833B8
  return; // 801833BC
}

// SCGetBtDeviceInfoArray
void f_801833C0(Ctx* __restrict c) {
  trace_call(0x801833C0u);
  c->r[4]=0u+0x00000461u; // 801833C0
  c->r[5]=0u+0x0000001Cu; // 801833C4
  f_801825BC(c); return; // 801833C8
}

// SCSetBtDeviceInfoArray
void f_801833CC(Ctx* __restrict c) {
  trace_call(0x801833CCu);
  c->r[4]=0u+0x00000461u; // 801833CC
  c->r[5]=0u+0x0000001Cu; // 801833D0
  f_8018269C(c); return; // 801833D4
}

// fn_801833D8
void f_801833D8(Ctx* __restrict c) {
  c->r[4]=0u+0x00000205u; // 801833D8
  c->r[5]=0u+0x0000001Du; // 801833DC
  f_801825BC(c); return; // 801833E0
}

// fn_801833E4
void f_801833E4(Ctx* __restrict c) {
  c->r[4]=0u+0x00000205u; // 801833E4
  c->r[5]=0u+0x0000001Du; // 801833E8
  f_8018269C(c); return; // 801833EC
}

// fn_801833F0
void f_801833F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801833F0
  c->r[0]=c->lr; // 801833F4
  c->r[4]=0u+0x0000001Eu; // 801833F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801833FC
  c->r[3]=c->r[1]+0x00000008u; // 80183400
  c->lr=0x80183408u; f_80182A80(c); // 80183404
  cmps(c,0,(int32_t)c->r[3],0); // 80183408
  if (!crb(c,2)) { goto L_8018341C; } // 8018340C
  c->r[0]=0u+0x00000002u; // 80183410
  W32(c->r[1]+0x00000008u,c->r[0]); // 80183414
  goto L_80183444; // 80183418
L_8018341C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 8018341C
  cmpu(c,0,c->r[0],0x00000001u); // 80183420
  if (!crb(c,0)) { goto L_80183434; } // 80183424
  c->r[0]=0u+0x00000001u; // 80183428
  W32(c->r[1]+0x00000008u,c->r[0]); // 8018342C
  goto L_80183444; // 80183430
L_80183434:;
  cmpu(c,0,c->r[0],0x00000005u); // 80183434
  if (!crb(c,1)) { goto L_80183444; } // 80183438
  c->r[0]=0u+0x00000005u; // 8018343C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80183440
L_80183444:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80183444
  c->r[3]=R32(c->r[1]+0x00000008u); // 80183448
  c->lr=c->r[0]; // 8018344C
  c->r[1]=c->r[1]+0x00000010u; // 80183450
  return; // 80183454
}

// fn_80183458
void f_80183458(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183458
  c->r[0]=c->lr; // 8018345C
  c->r[4]=0u+0x00000020u; // 80183460
  W32(c->r[1]+0x00000014u,c->r[0]); // 80183464
  c->r[3]=c->r[1]+0x00000008u; // 80183468
  c->lr=0x80183470u; f_801828D8(c); // 8018346C
  cmps(c,0,(int32_t)c->r[3],0); // 80183470
  if (!crb(c,2)) { goto L_80183484; } // 80183474
  c->r[0]=0u+0x00000001u; // 80183478
  W8(c->r[1]+0x00000008u,c->r[0]); // 8018347C
  goto L_80183498; // 80183480
L_80183484:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80183484
  cmpu(c,0,c->r[0],0x00000001u); // 80183488
  if (crb(c,2)) { goto L_80183498; } // 8018348C
  c->r[0]=0u+0x00000000u; // 80183490
  W8(c->r[1]+0x00000008u,c->r[0]); // 80183494
L_80183498:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80183498
  c->r[3]=R8(c->r[1]+0x00000008u); // 8018349C
  c->lr=c->r[0]; // 801834A0
  c->r[1]=c->r[1]+0x00000010u; // 801834A4
  return; // 801834A8
}

// fn_801834AC
void f_801834AC(Ctx* __restrict c) {
  c->r[4]=0u+0x00000020u; // 801834AC
  f_80182B54(c); return; // 801834B0
}

// fn_801834B4
void f_801834B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801834B4
  c->r[0]=c->lr; // 801834B8
  c->r[4]=0u+0x00000021u; // 801834BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801834C0
  c->r[3]=c->r[1]+0x00000008u; // 801834C4
  c->lr=0x801834CCu; f_801828D8(c); // 801834C8
  cmps(c,0,(int32_t)c->r[3],0); // 801834CC
  if (!crb(c,2)) { goto L_801834E0; } // 801834D0
  c->r[0]=0u+0x00000000u; // 801834D4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801834D8
  goto L_801834F4; // 801834DC
L_801834E0:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801834E0
  cmpu(c,0,c->r[0],0x00000001u); // 801834E4
  if (crb(c,2)) { goto L_801834F4; } // 801834E8
  c->r[0]=0u+0x00000000u; // 801834EC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801834F0
L_801834F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801834F4
  c->r[3]=R8(c->r[1]+0x00000008u); // 801834F8
  c->lr=c->r[0]; // 801834FC
  c->r[1]=c->r[1]+0x00000010u; // 80183500
  return; // 80183504
}

// fn_80183508
void f_80183508(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183508
  c->r[0]=c->lr; // 8018350C
  c->r[4]=0u+0x0000001Fu; // 80183510
  W32(c->r[1]+0x00000014u,c->r[0]); // 80183514
  c->r[3]=c->r[1]+0x00000008u; // 80183518
  c->lr=0x80183520u; f_801828D8(c); // 8018351C
  cmps(c,0,(int32_t)c->r[3],0); // 80183520
  if (!crb(c,2)) { goto L_80183534; } // 80183524
  c->r[0]=0u+0x00000059u; // 80183528
  W8(c->r[1]+0x00000008u,c->r[0]); // 8018352C
  goto L_80183548; // 80183530
L_80183534:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80183534
  cmpu(c,0,c->r[0],0x0000007Fu); // 80183538
  if (!crb(c,1)) { goto L_80183548; } // 8018353C
  c->r[0]=0u+0x0000007Fu; // 80183540
  W8(c->r[1]+0x00000008u,c->r[0]); // 80183544
L_80183548:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80183548
  c->r[3]=R8(c->r[1]+0x00000008u); // 8018354C
  c->lr=c->r[0]; // 80183550
  c->r[1]=c->r[1]+0x00000010u; // 80183554
  return; // 80183558
}

// fn_8018355C
void f_8018355C(Ctx* __restrict c) {
  c->r[4]=0u+0x0000001Fu; // 8018355C
  f_80182B54(c); return; // 80183560
}

// fn_80183564
void f_80183564(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183564
  c->r[0]=c->lr; // 80183568
  c->r[4]=0u+0x00001008u; // 8018356C
  c->r[5]=0u+0x00000010u; // 80183570
  W32(c->r[1]+0x00000024u,c->r[0]); // 80183574
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80183578
  c->r[31]=0u+0x80460000u; // 8018357C
  c->r[3]=c->r[31]+0x000070A0u; // 80183580
  W32(c->r[1]+0x00000018u,c->r[30]); // 80183584
  W32(c->r[1]+0x00000014u,c->r[29]); // 80183588
  c->lr=0x80183590u; f_801825BC(c); // 8018358C
  cmps(c,0,(int32_t)c->r[3],0); // 80183590
  if (crb(c,2)) { goto L_80183604; } // 80183594
  c->r[4]=R32(c->r[31]+0x000070A0u); // 80183598
  c->r[0]=c->r[4]+0x00010000u; // 8018359C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801835A0
  if (crb(c,2)) { goto L_80183604; } // 801835A4
  c->r[3]=rotl(c->r[4],0)&0xFF000000u; cr0(c,c->r[3]); // 801835A8
  if (crb(c,2)) { goto L_80183604; } // 801835AC
  c->r[0]=c->r[3]+0x01000000u; // 801835B0
  cmpu(c,0,c->r[0],0x00000000u); // 801835B4
  if (crb(c,2)) { goto L_80183604; } // 801835B8
  c->r[3]=rotl(c->r[4],0)&0x00FF0000u; // 801835BC
  c->r[0]=c->r[3]+0xFF010000u; // 801835C0
  cmpu(c,0,c->r[0],0x00000000u); // 801835C4
  if (crb(c,2)) { goto L_80183604; } // 801835C8
  c->lr=0x801835D0u; f_80154410(c); // 801835CC
  c->r[29]=R32(c->r[31]+0x000070A0u); // 801835D0
  c->r[30]=c->r[3]|c->r[3]; // 801835D4
  c->r[0]=rotl(c->r[29],0)&0x00FF0000u; cr0(c,c->r[0]); // 801835D8
  if (!crb(c,2)) { goto L_801835F4; } // 801835DC
  c->r[3]=c->r[31]+0x000070A0u; // 801835E0
  c->r[4]=0u+0x00000000u; // 801835E4
  c->r[5]=0u+0x00001008u; // 801835E8
  c->lr=0x801835F0u; f_8000443C(c); // 801835EC
  W32(c->r[31]+0x000070A0u,c->r[29]); // 801835F0
L_801835F4:;
  c->r[3]=c->r[30]|c->r[30]; // 801835F4
  c->lr=0x801835FCu; f_80154438(c); // 801835F8
  c->r[0]=0u+0x00000001u; // 801835FC
  goto L_80183608; // 80183600
L_80183604:;
  c->r[0]=0u+0x00000000u; // 80183604
L_80183608:;
  cmps(c,0,(int32_t)c->r[0],0); // 80183608
  if (crb(c,2)) { goto L_8018361C; } // 8018360C
  c->r[3]=0u+0x80460000u; // 80183610
  c->r[3]=R32(c->r[3]+0x000070A0u); // 80183614
  goto L_80183620; // 80183618
L_8018361C:;
  c->r[3]=0u+0xFFFFFFFFu; // 8018361C
L_80183620:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80183620
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80183624
  c->r[30]=R32(c->r[1]+0x00000018u); // 80183628
  c->r[29]=R32(c->r[1]+0x00000014u); // 8018362C
  c->lr=c->r[0]; // 80183630
  c->r[1]=c->r[1]+0x00000020u; // 80183634
  return; // 80183638
}

// fn_8018363C
void f_8018363C(Ctx* __restrict c) {
  c->r[6]=0u+0x73B60000u; // 8018363C
  c->r[0]=0u+0x00000080u; // 80183640
  c->r[11]=c->r[6]+0xFFFFDBFAu; // 80183644
  c->r[9]=0u+0x00000000u; // 80183648
  c->r[12]=0u+0x00000000u; // 8018364C
  c->r[6]=0u+0x00000000u; // 80183650
  c->r[10]=0u+0x00000000u; // 80183654
  c->ctr=c->r[0]; // 80183658
L_8018365C:;
  c->r[8]=c->r[10]+0x80000000u; // 8018365C
  c->r[8]=R8(c->r[8]+0x00003800u); // 80183660
  cmps(c,0,(int32_t)c->r[8],0); // 80183664
  if (crb(c,2)) { goto L_801836B0; } // 80183668
  c->r[7]=R8(c->r[3]+c->r[12]); // 8018366C
  c->r[0]=c->r[8]^c->r[11]; // 80183670
  c->r[8]=rotl(c->r[0],0)&0x000000FFu; // 80183674
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 80183678
  if (!crb(c,2)) { goto L_80183690; } // 8018367C
  cmpu(c,0,c->r[8],0x0000003Du); // 80183680
  if (!crb(c,2)) { goto L_80183690; } // 80183684
  c->r[9]=0u+0x00000001u; // 80183688
  goto L_80183728; // 8018368C
L_80183690:;
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 80183690
  c->r[0]=c->r[12]+0x00000001u; // 80183694
  c->r[7]=c->r[8]^c->r[7]; // 80183698
  c->r[7]=c->r[7]&0x000000DFu; cr0(c,c->r[7]); // 8018369C
  c->r[7]=cntlz(c->r[7]); // 801836A0
  c->r[7]=rotl(c->r[7],27)&0x00000001u; // 801836A4
  c->r[7]=0u-c->r[7]; // 801836A8
  c->r[12]=c->r[0]&c->r[7]; // 801836AC
L_801836B0:;
  c->r[10]=c->r[10]+0x00000001u; // 801836B0
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 801836B4
  c->r[8]=c->r[10]+0x80000000u; // 801836B8
  c->r[0]=rotl(c->r[11],1)&0xFFFFFFFEu; // 801836BC
  c->r[8]=R8(c->r[8]+0x00003800u); // 801836C0
  c->r[11]=c->r[7]|c->r[0]; // 801836C4
  cmps(c,0,(int32_t)c->r[8],0); // 801836C8
  if (crb(c,2)) { goto L_80183714; } // 801836CC
  c->r[7]=R8(c->r[3]+c->r[12]); // 801836D0
  c->r[0]=c->r[8]^c->r[11]; // 801836D4
  c->r[8]=rotl(c->r[0],0)&0x000000FFu; // 801836D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 801836DC
  if (!crb(c,2)) { goto L_801836F4; } // 801836E0
  cmpu(c,0,c->r[8],0x0000003Du); // 801836E4
  if (!crb(c,2)) { goto L_801836F4; } // 801836E8
  c->r[9]=0u+0x00000001u; // 801836EC
  goto L_80183728; // 801836F0
L_801836F4:;
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801836F4
  c->r[0]=c->r[12]+0x00000001u; // 801836F8
  c->r[7]=c->r[8]^c->r[7]; // 801836FC
  c->r[7]=c->r[7]&0x000000DFu; cr0(c,c->r[7]); // 80183700
  c->r[7]=cntlz(c->r[7]); // 80183704
  c->r[7]=rotl(c->r[7],27)&0x00000001u; // 80183708
  c->r[7]=0u-c->r[7]; // 8018370C
  c->r[12]=c->r[0]&c->r[7]; // 80183710
L_80183714:;
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 80183714
  c->r[0]=rotl(c->r[11],1)&0xFFFFFFFEu; // 80183718
  c->r[11]=c->r[7]|c->r[0]; // 8018371C
  c->r[10]=c->r[10]+0x00000001u; // 80183720
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018365C; } // 80183724
L_80183728:;
  cmps(c,0,(int32_t)c->r[9],0); // 80183728
  if (crb(c,2)) { goto L_801837A0; } // 8018372C
  c->r[10]=c->r[10]+0x00000001u; // 80183730
  goto L_80183790; // 80183734
L_80183738:;
  c->r[3]=c->r[10]+0x80000000u; // 80183738
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 8018373C
  c->r[3]=R8(c->r[3]+0x00003800u); // 80183740
  c->r[0]=rotl(c->r[11],1)&0xFFFFFFFEu; // 80183744
  c->r[11]=c->r[7]|c->r[0]; // 80183748
  cmps(c,0,(int32_t)c->r[3],0); // 8018374C
  if (crb(c,2)) { goto L_80183770; } // 80183750
  c->r[0]=c->r[3]^c->r[11]; // 80183754
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 80183758
  cmpu(c,0,c->r[3],0x0000000Du); // 8018375C
  if (crb(c,2)) { goto L_8018376C; } // 80183760
  cmpu(c,0,c->r[3],0x0000000Au); // 80183764
  if (!crb(c,2)) { goto L_80183770; } // 80183768
L_8018376C:;
  c->r[3]=0u+0x00000000u; // 8018376C
L_80183770:;
  cmps(c,0,(int32_t)c->r[3],0); // 80183770
  W8(c->r[4]+0x00000000u,c->r[3]); // 80183774
  c->r[6]=c->r[6]+0x00000001u; // 80183778
  c->r[4]=c->r[4]+0x00000001u; // 8018377C
  if (!crb(c,2)) { goto L_8018378C; } // 80183780
  c->r[3]=0u+0x00000001u; // 80183784
  return; // 80183788
L_8018378C:;
  c->r[10]=c->r[10]+0x00000001u; // 8018378C
L_80183790:;
  cmpu(c,0,c->r[10],0x00000100u); // 80183790
  if (!crb(c,0)) { goto L_801837A0; } // 80183794
  cmpu(c,0,c->r[6],c->r[5]); // 80183798
  if (crb(c,0)) { IRQCHK(c); goto L_80183738; } // 8018379C
L_801837A0:;
  c->r[3]=0u+0x00000000u; // 801837A0
  return; // 801837A4
}

// fn_801837A8
void f_801837A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801837A8
  c->r[0]=c->lr; // 801837AC
  c->r[3]=c->r[13]+0xFFFF9298u; // 801837B0
  c->r[5]=0u+0x00000004u; // 801837B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801837B8
  c->r[4]=c->r[1]+0x00000008u; // 801837BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801837C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801837C4
  c->r[30]=0u+0x802E0000u; // 801837C8
  c->r[30]=c->r[30]+0xFFFFC280u; // 801837CC
  c->lr=0x801837D4u; f_8018363C(c); // 801837D0
  cmps(c,0,(int32_t)c->r[3],0); // 801837D4
  if (crb(c,2)) { goto L_80183810; } // 801837D8
  goto L_80183800; // 801837DC
L_801837E0:;
  c->r[3]=c->r[30]+0x00000001u; // 801837E0
  c->r[4]=c->r[1]+0x00000008u; // 801837E4
  c->lr=0x801837ECu; f_8025C5C0(c); // 801837E8
  cmps(c,0,(int32_t)c->r[3],0); // 801837EC
  if (!crb(c,2)) { goto L_801837FC; } // 801837F0
  c->r[3]=c->r[31]|c->r[31]; // 801837F4
  goto L_80183814; // 801837F8
L_801837FC:;
  c->r[30]=c->r[30]+0x00000005u; // 801837FC
L_80183800:;
  c->r[31]=R8(c->r[30]+0x00000000u); // 80183800
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80183804
  cmps(c,0,(int32_t)c->r[0],-1); // 80183808
  if (!crb(c,2)) { IRQCHK(c); goto L_801837E0; } // 8018380C
L_80183810:;
  c->r[3]=0u+0xFFFFFFFFu; // 80183810
L_80183814:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80183814
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80183818
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018381C
  c->lr=c->r[0]; // 80183820
  c->r[1]=c->r[1]+0x00000020u; // 80183824
  return; // 80183828
}

// fn_8018382C
void f_8018382C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018382C
  c->r[0]=c->lr; // 80183830
  c->r[3]=c->r[13]+0xFFFF92A0u; // 80183834
  c->r[4]=c->r[13]+0xFFFFAF38u; // 80183838
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018383C
  c->r[5]=0u+0x00000006u; // 80183840
  c->lr=0x80183848u; f_8018363C(c); // 80183844
  cmps(c,0,(int32_t)c->r[3],0); // 80183848
  c->r[3]=0u+0x00000000u; // 8018384C
  if (crb(c,2)) { goto L_80183858; } // 80183850
  c->r[3]=c->r[13]+0xFFFFAF38u; // 80183854
L_80183858:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80183858
  c->lr=c->r[0]; // 8018385C
  c->r[1]=c->r[1]+0x00000010u; // 80183860
  return; // 80183864
}

// fn_80183868
void f_80183868(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183868
  c->r[0]=c->lr; // 8018386C
  c->r[5]=0u+0x0000000Bu; // 80183870
  W32(c->r[1]+0x00000024u,c->r[0]); // 80183874
  c->r[4]=c->r[1]+0x00000008u; // 80183878
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8018387C
  c->r[31]=c->r[3]|c->r[3]; // 80183880
  c->r[3]=c->r[13]+0xFFFF92A8u; // 80183884
  c->lr=0x8018388Cu; f_8018363C(c); // 80183888
  cmps(c,0,(int32_t)c->r[3],0); // 8018388C
  if (crb(c,2)) { goto L_801838B8; } // 80183890
  c->r[5]=c->r[31]|c->r[31]; // 80183894
  c->r[3]=c->r[1]+0x00000008u; // 80183898
  c->r[4]=c->r[13]+0xFFFF92B0u; // 8018389C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801838A0
  c->lr=0x801838A8u; f_8025C2CC(c); // 801838A4
  cmps(c,0,(int32_t)c->r[3],1); // 801838A8
  if (!crb(c,2)) { goto L_801838B8; } // 801838AC
  c->r[3]=0u+0x00000001u; // 801838B0
  goto L_801838BC; // 801838B4
L_801838B8:;
  c->r[3]=0u+0x00000000u; // 801838B8
L_801838BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801838BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801838C0
  c->lr=c->r[0]; // 801838C4
  c->r[1]=c->r[1]+0x00000020u; // 801838C8
  return; // 801838CC
}

// fn_801838D0
void f_801838D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801838D0
  c->r[0]=c->lr; // 801838D4
  c->r[3]=c->r[13]+0xFFFF92B4u; // 801838D8
  c->r[5]=0u+0x00000003u; // 801838DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801838E0
  c->r[4]=c->r[1]+0x00000008u; // 801838E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801838E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801838EC
  c->r[30]=0u+0x802E0000u; // 801838F0
  c->r[30]=c->r[30]+0xFFFFC2C8u; // 801838F4
  c->lr=0x801838FCu; f_8018363C(c); // 801838F8
  cmps(c,0,(int32_t)c->r[3],0); // 801838FC
  if (crb(c,2)) { goto L_80183938; } // 80183900
  goto L_80183928; // 80183904
L_80183908:;
  c->r[3]=c->r[30]+0x00000001u; // 80183908
  c->r[4]=c->r[1]+0x00000008u; // 8018390C
  c->lr=0x80183914u; f_8025C5C0(c); // 80183910
  cmps(c,0,(int32_t)c->r[3],0); // 80183914
  if (!crb(c,2)) { goto L_80183924; } // 80183918
  c->r[3]=c->r[31]|c->r[31]; // 8018391C
  goto L_8018393C; // 80183920
L_80183924:;
  c->r[30]=c->r[30]+0x00000004u; // 80183924
L_80183928:;
  c->r[31]=R8(c->r[30]+0x00000000u); // 80183928
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 8018392C
  cmps(c,0,(int32_t)c->r[0],-1); // 80183930
  if (!crb(c,2)) { IRQCHK(c); goto L_80183908; } // 80183934
L_80183938:;
  c->r[3]=0u+0xFFFFFFFFu; // 80183938
L_8018393C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018393C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80183940
  c->r[30]=R32(c->r[1]+0x00000018u); // 80183944
  c->lr=c->r[0]; // 80183948
  c->r[1]=c->r[1]+0x00000020u; // 8018394C
  return; // 80183950
}

// fn_80183954
void f_80183954(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183954
  c->r[0]=c->lr; // 80183958
  W32(c->r[1]+0x00000094u,c->r[0]); // 8018395C
  c->r[11]=c->r[1]+0x00000090u; // 80183960
  c->lr=0x80183968u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80183964
  c->r[10]=0u+0x80270000u; // 80183968
  {uint32_t ea=c->r[10]+0x000067D8u; c->r[9]=R32(ea); c->r[10]=ea;} // 8018396C
  c->r[11]=c->r[6]+0x00000001u; // 80183970
  c->r[25]=c->r[4]|c->r[4]; // 80183974
  c->r[4]=rotl(c->r[11],1)&0x00000001u; // 80183978
  c->r[8]=R32(c->r[10]+0x00000004u); // 8018397C
  c->r[31]=c->r[7]|c->r[7]; // 80183980
  c->r[0]=R32(c->r[10]+0x00000008u); // 80183984
  c->r[4]=c->r[4]+c->r[11]; // 80183988
  c->r[18]=R32(c->r[10]+0x0000000Cu); // 8018398C
  c->r[27]=R32(c->r[10]+0x00000010u); // 80183990
  c->r[30]=c->r[6]|c->r[6]; // 80183994
  c->r[26]=R32(c->r[10]+0x00000014u); // 80183998
  c->r[28]=c->r[3]|c->r[3]; // 8018399C
  c->r[24]=R32(c->r[10]+0x00000018u); // 801839A0
  c->r[29]=c->r[5]|c->r[5]; // 801839A4
  c->r[23]=R32(c->r[10]+0x0000001Cu); // 801839A8
  c->r[5]=sraw(c,c->r[4],1); // 801839AC
  c->r[22]=R32(c->r[10]+0x00000020u); // 801839B0
  c->r[3]=c->r[31]|c->r[31]; // 801839B4
  c->r[21]=R32(c->r[10]+0x00000024u); // 801839B8
  c->r[4]=0u+0x00000000u; // 801839BC
  c->r[20]=R32(c->r[10]+0x00000028u); // 801839C0
  c->r[19]=R32(c->r[10]+0x0000002Cu); // 801839C4
  c->r[12]=R32(c->r[10]+0x00000030u); // 801839C8
  c->r[11]=R32(c->r[10]+0x00000034u); // 801839CC
  c->r[7]=R32(c->r[10]+0x00000038u); // 801839D0
  c->r[6]=R32(c->r[10]+0x0000003Cu); // 801839D4
  W32(c->r[1]+0x00000008u,c->r[9]); // 801839D8
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 801839DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801839E0
  W32(c->r[1]+0x00000014u,c->r[18]); // 801839E4
  W32(c->r[1]+0x00000018u,c->r[27]); // 801839E8
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 801839EC
  W32(c->r[1]+0x00000020u,c->r[24]); // 801839F0
  W32(c->r[1]+0x00000024u,c->r[23]); // 801839F4
  W32(c->r[1]+0x00000028u,c->r[22]); // 801839F8
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 801839FC
  W32(c->r[1]+0x00000030u,c->r[20]); // 80183A00
  W32(c->r[1]+0x00000034u,c->r[19]); // 80183A04
  W32(c->r[1]+0x00000038u,c->r[12]); // 80183A08
  W32(c->r[1]+0x0000003Cu,c->r[11]); // 80183A0C
  W32(c->r[1]+0x00000040u,c->r[7]); // 80183A10
  W32(c->r[1]+0x00000044u,c->r[6]); // 80183A14
  c->lr=0x80183A1Cu; f_8000443C(c); // 80183A18
  c->r[0]=rotl(c->r[25],0)&0x00000001u; cr0(c,c->r[0]); // 80183A1C
  if (!crb(c,2)) { goto L_80183A40; } // 80183A20
  c->r[11]=0u+0x00000000u; // 80183A24
  c->r[12]=0u+0x0000007Fu; // 80183A28
  c->r[5]=0u+0x00000000u; // 80183A2C
  c->r[27]=0u+0x00000000u; // 80183A30
  c->r[26]=0u+0x00000000u; // 80183A34
  c->r[25]=0u+0x00000000u; // 80183A38
  goto L_80183A58; // 80183A3C
L_80183A40:;
  c->r[11]=R32(c->r[28]+0x00000000u); // 80183A40
  c->r[12]=R32(c->r[28]+0x00000004u); // 80183A44
  c->r[5]=R32(c->r[28]+0x00000008u); // 80183A48
  c->r[27]=R32(c->r[28]+0x0000000Cu); // 80183A4C
  c->r[26]=R32(c->r[28]+0x00000010u); // 80183A50
  c->r[25]=R32(c->r[28]+0x00000014u); // 80183A54
L_80183A58:;
  c->r[3]=0u+0x00010000u; // 80183A58
  c->r[24]=c->r[1]+0x00000008u; // 80183A5C
  {uint32_t ea=c->r[2]+0xFFFFAC18u; c->f[2]=RF64(ea);} // 80183A60
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 80183A64
  c->r[6]=0u+0x00000000u; // 80183A68
  c->r[0]=0u+0xFFFF0000u; // 80183A6C
  c->r[23]=0u+0x43300000u; // 80183A70
  c->ctr=c->r[30]; // 80183A74
  cmps(c,0,(int32_t)c->r[30],0); // 80183A78
  if (!crb(c,1)) { goto L_80183BF8; } // 80183A7C
L_80183A80:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 80183A80
  c->r[10]=0u+0x00000000u; // 80183A84
  c->r[9]=0u+0x00000000u; // 80183A88
  c->r[8]=0u+0x00000000u; // 80183A8C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[11]); // 80183A90
  c->r[7]=0u+0x00000000u; // 80183A94
  c->r[29]=c->r[29]+0x00000002u; // 80183A98
  if (!crb(c,0)) { goto L_80183AA4; } // 80183A9C
  c->r[7]=0u+0x00000001u; // 80183AA0
L_80183AA4:;
  c->r[19]=c->r[5]-c->r[11]; // 80183AA4
  c->r[5]=sraw(c,c->r[19],31); // 80183AA8
  c->r[27]=c->r[5]^c->r[19]; // 80183AAC
  c->r[27]=c->r[27]-c->r[5]; // 80183AB0
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[12]); // 80183AB4
  if (crb(c,0)) { goto L_80183AC4; } // 80183AB8
  c->r[8]=0u+0x00000001u; // 80183ABC
  c->r[27]=c->r[27]-c->r[12]; // 80183AC0
L_80183AC4:;
  c->r[5]=rotl(c->r[12],1)&0x00000001u; // 80183AC4
  c->r[5]=c->r[5]+c->r[12]; // 80183AC8
  c->r[26]=sraw(c,c->r[5],1); // 80183ACC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[26]); // 80183AD0
  if (crb(c,0)) { goto L_80183AE0; } // 80183AD4
  c->r[9]=0u+0x00000001u; // 80183AD8
  c->r[27]=c->r[27]-c->r[26]; // 80183ADC
L_80183AE0:;
  c->r[5]=rotl(c->r[26],1)&0x00000001u; // 80183AE0
  c->r[5]=c->r[5]+c->r[26]; // 80183AE4
  c->r[25]=sraw(c,c->r[5],1); // 80183AE8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[25]); // 80183AEC
  if (crb(c,0)) { goto L_80183AFC; } // 80183AF0
  c->r[10]=0u+0x00000001u; // 80183AF4
  c->r[27]=c->r[27]-c->r[25]; // 80183AF8
L_80183AFC:;
  c->r[20]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[10]); // 80183AFC
  c->r[5]=rotl(c->r[7],1)&0xFFFFFFFEu; // 80183B00
  c->r[19]=rotl(c->r[25],1)&0x00000001u; // 80183B04
  c->r[5]=addc(c,~c->r[5],0x00000001u,1); // 80183B08
  c->r[19]=c->r[19]+c->r[25]; // 80183B0C
  c->r[21]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[8]); // 80183B10
  c->r[19]=sraw(c,c->r[19],1); // 80183B14
  c->r[22]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[9]); // 80183B18
  c->r[21]=c->r[20]+c->r[21]; // 80183B1C
  c->r[22]=c->r[19]+c->r[22]; // 80183B20
  c->r[22]=c->r[21]+c->r[22]; // 80183B24
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[22]); // 80183B28
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 80183B2C
  if (!crb(c,1)) { goto L_80183B38; } // 80183B30
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 80183B34
L_80183B38:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80183B38
  if (!crb(c,0)) { goto L_80183B44; } // 80183B3C
  c->r[5]=0u+0xFFFF0000u; // 80183B40
L_80183B44:;
  c->r[11]=c->r[11]+c->r[5]; // 80183B44
  cmps(c,0,(int32_t)c->r[11],32767); // 80183B48
  if (!crb(c,1)) { goto L_80183B54; } // 80183B4C
  c->r[11]=0u+0x00007FFFu; // 80183B50
L_80183B54:;
  cmps(c,0,(int32_t)c->r[11],-32768); // 80183B54
  if (!crb(c,0)) { goto L_80183B60; } // 80183B58
  c->r[11]=0u+0xFFFF8000u; // 80183B5C
L_80183B60:;
  c->r[12]=c->r[12]^0x80000000u; // 80183B60
  c->r[18]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80183B64
  W32(c->r[1]+0x0000004Cu,c->r[12]); // 80183B68
  c->r[22]=rotl(c->r[6],0)&0x00000001u; // 80183B6C
  c->r[9]=rotl(c->r[9],1)&0xFFFFFFFEu; // 80183B70
  c->r[8]=c->r[10]+c->r[18]; // 80183B74
  W32(c->r[1]+0x00000048u,c->r[23]); // 80183B78
  c->r[8]=c->r[9]+c->r[8]; // 80183B7C
  c->r[8]=rotl(c->r[8],3)&0xFFFFFFF8u; // 80183B80
  c->r[12]=rotl(c->r[6],1)&0x00000001u; // 80183B84
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 80183B88
  c->r[9]=c->r[9]+c->r[18]; // 80183B8C
  {uint32_t ea=c->r[24]+c->r[8]; c->f[0]=RF64(ea);} // 80183B90
  c->r[8]=c->r[12]+c->r[6]; // 80183B94
  c->f[1]=c->f[1]-c->f[2]; // 80183B98
  c->r[12]=sraw(c,c->r[8],1); // 80183B9C
  c->r[8]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80183BA0
  c->r[7]=c->r[10]+c->r[9]; // 80183BA4
  c->r[7]=c->r[8]+c->r[7]; // 80183BA8
  c->r[22]=c->r[22]+0xFFFFFFFFu; // 80183BAC
  c->f[0]=c->f[1]*c->f[0]; // 80183BB0
  c->r[9]=rotl(c->r[22],0)&0x00000004u; // 80183BB4
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 80183BB8
  c->r[8]=R8(c->r[31]+c->r[12]); // 80183BBC
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[7]<<((c->r[9])&31)); // 80183BC0
  c->r[7]=c->r[8]|c->r[7]; // 80183BC4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80183BC8
  W8(c->r[31]+c->r[12],c->r[7]); // 80183BCC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 80183BD0
  c->r[12]=R32(c->r[1]+0x00000054u); // 80183BD4
  cmps(c,0,(int32_t)c->r[12],127); // 80183BD8
  if (crb(c,1)) { goto L_80183BE4; } // 80183BDC
  c->r[12]=0u+0x0000007Fu; // 80183BE0
L_80183BE4:;
  cmps(c,0,(int32_t)c->r[12],24576); // 80183BE4
  if (crb(c,0)) { goto L_80183BF0; } // 80183BE8
  c->r[12]=0u+0x00006000u; // 80183BEC
L_80183BF0:;
  c->r[6]=c->r[6]+0x00000001u; // 80183BF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80183A80; } // 80183BF4
L_80183BF8:;
  W32(c->r[28]+0x00000000u,c->r[11]); // 80183BF8
  c->r[11]=c->r[1]+0x00000090u; // 80183BFC
  c->r[3]=c->r[30]|c->r[30]; // 80183C00
  W32(c->r[28]+0x00000004u,c->r[12]); // 80183C04
  W32(c->r[28]+0x00000008u,c->r[5]); // 80183C08
  W32(c->r[28]+0x0000000Cu,c->r[27]); // 80183C0C
  W32(c->r[28]+0x00000010u,c->r[26]); // 80183C10
  W32(c->r[28]+0x00000014u,c->r[25]); // 80183C14
  c->lr=0x80183C1Cu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80183C18
  c->r[0]=R32(c->r[1]+0x00000094u); // 80183C1C
  c->lr=c->r[0]; // 80183C20
  c->r[1]=c->r[1]+0x00000090u; // 80183C24
  return; // 80183C28
}

// fn_80183C2C
void f_80183C2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183C2C
  c->r[0]=c->lr; // 80183C30
  W32(c->r[1]+0x00000034u,c->r[0]); // 80183C34
  c->r[11]=c->r[1]+0x00000030u; // 80183C38
  c->lr=0x80183C40u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80183C3C
  c->r[0]=R32(c->r[13]+0xFFFFAF40u); // 80183C40
  c->r[23]=c->r[3]|c->r[3]; // 80183C44
  c->r[31]=c->r[4]|c->r[4]; // 80183C48
  c->r[24]=c->r[5]|c->r[5]; // 80183C4C
  cmps(c,0,(int32_t)c->r[0],0); // 80183C50
  c->r[25]=c->r[6]|c->r[6]; // 80183C54
  c->r[26]=c->r[7]|c->r[7]; // 80183C58
  c->r[27]=c->r[8]|c->r[8]; // 80183C5C
  c->r[28]=c->r[9]|c->r[9]; // 80183C60
  c->r[29]=c->r[10]|c->r[10]; // 80183C64
  c->r[30]=0u+0x00000000u; // 80183C68
  if (!crb(c,2)) { goto L_80183C80; } // 80183C6C
  c->r[3]=R32(c->r[13]+0xFFFF92C0u); // 80183C70
  c->lr=0x80183C78u; f_8014E714(c); // 80183C74
  c->r[0]=0u+0x00000001u; // 80183C78
  W32(c->r[13]+0xFFFFAF40u,c->r[0]); // 80183C7C
L_80183C80:;
  cmps(c,0,(int32_t)c->r[27],0); // 80183C80
  if (crb(c,2)) { goto L_80183C94; } // 80183C84
  c->r[0]=R32(c->r[27]+0x00000000u); // 80183C88
  W32(c->r[28]+0x00000000u,c->r[0]); // 80183C8C
  goto L_80183C9C; // 80183C90
L_80183C94:;
  c->r[0]=0u+0xFFFFFFFFu; // 80183C94
  W32(c->r[28]+0x00000000u,c->r[0]); // 80183C98
L_80183C9C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80183C9C
  if (crb(c,2)) { goto L_80183CB0; } // 80183CA0
  c->r[0]=R32(c->r[31]+0x00000000u); // 80183CA4
  W32(c->r[24]+0x00000000u,c->r[0]); // 80183CA8
  goto L_80183CBC; // 80183CAC
L_80183CB0:;
  c->r[0]=0u+0xFFFFFFFFu; // 80183CB0
  c->r[30]=0u+0xFFFFFFFDu; // 80183CB4
  W32(c->r[24]+0x00000000u,c->r[0]); // 80183CB8
L_80183CBC:;
  cmps(c,0,(int32_t)c->r[26],0); // 80183CBC
  if (!crb(c,2)) { goto L_80183CC8; } // 80183CC0
  c->r[30]=0u+0xFFFFFFFDu; // 80183CC4
L_80183CC8:;
  cmps(c,0,(int32_t)c->r[23],0); // 80183CC8
  if (!crb(c,2)) { goto L_80183CE0; } // 80183CCC
  c->r[3]=0u+0x00000000u; // 80183CD0
  c->r[0]=0u+0xFFFFFFFFu; // 80183CD4
  W32(c->r[25]+0x00000000u,c->r[3]); // 80183CD8
  W32(c->r[24]+0x00000000u,c->r[0]); // 80183CDC
L_80183CE0:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 80183CE0
  cmps(c,0,(int32_t)c->r[0],0); // 80183CE4
  if (!crb(c,0)) { goto L_80183CF4; } // 80183CE8
  c->r[0]=0u+0x00000000u; // 80183CEC
  W32(c->r[29]+0x00000000u,c->r[0]); // 80183CF0
L_80183CF4:;
  cmps(c,0,(int32_t)c->r[30],0); // 80183CF4
  if (crb(c,2)) { goto L_80183D08; } // 80183CF8
  c->r[0]=0u+0x00000000u; // 80183CFC
  W32(c->r[31]+0x00000000u,c->r[0]); // 80183D00
  W32(c->r[27]+0x00000000u,c->r[0]); // 80183D04
L_80183D08:;
  c->r[11]=c->r[1]+0x00000030u; // 80183D08
  c->r[3]=c->r[30]|c->r[30]; // 80183D0C
  c->lr=0x80183D14u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80183D10
  c->r[0]=R32(c->r[1]+0x00000034u); // 80183D14
  c->lr=c->r[0]; // 80183D18
  c->r[1]=c->r[1]+0x00000030u; // 80183D1C
  return; // 80183D20
}

// fn_80183D24
void f_80183D24(Ctx* __restrict c) {
  cmpu(c,0,c->r[3],0x0000000Au); // 80183D24
  if (!crb(c,2)) { goto L_80183D34; } // 80183D28
  c->r[3]=0u+0x00000001u; // 80183D2C
  return; // 80183D30
L_80183D34:;
  cmpu(c,0,c->r[3],0x0000000Du); // 80183D34
  if (!crb(c,2)) { goto L_80183D50; } // 80183D38
  c->r[0]=c->r[4]+0xFFFFFFF6u; // 80183D3C
  c->r[0]=cntlz(c->r[0]); // 80183D40
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80183D44
  c->r[3]=c->r[3]+0x00000001u; // 80183D48
  return; // 80183D4C
L_80183D50:;
  c->r[3]=0u+0x00000000u; // 80183D50
  return; // 80183D54
}

// fn_80183D58
void f_80183D58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183D58
  c->r[0]=c->lr; // 80183D5C
  cmps(c,0,(int32_t)c->r[6],0); // 80183D60
  W32(c->r[1]+0x00000024u,c->r[0]); // 80183D64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80183D68
  c->r[31]=c->r[5]|c->r[5]; // 80183D6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80183D70
  c->r[30]=c->r[4]|c->r[4]; // 80183D74
  W32(c->r[1]+0x00000014u,c->r[29]); // 80183D78
  c->r[29]=c->r[3]|c->r[3]; // 80183D7C
  if (crb(c,2)) { goto L_80183E0C; } // 80183D80
  c->r[5]=c->r[30]+0xFFFFFFFFu; // 80183D84
  c->r[4]=0u+0x00000000u; // 80183D88
  c->lr=0x80183D90u; f_8000443C(c); // 80183D8C
  cmps(c,0,(int32_t)c->r[31],2); // 80183D90
  if (crb(c,2)) { goto L_80183DE4; } // 80183D94
  if (!crb(c,0)) { goto L_80183DA8; } // 80183D98
  cmps(c,0,(int32_t)c->r[31],1); // 80183D9C
  if (!crb(c,0)) { goto L_80183DB4; } // 80183DA0
  goto L_80183E48; // 80183DA4
L_80183DA8:;
  cmps(c,0,(int32_t)c->r[31],4); // 80183DA8
  if (!crb(c,0)) { goto L_80183E48; } // 80183DAC
  goto L_80183DF8; // 80183DB0
L_80183DB4:;
  c->r[3]=c->r[29]+c->r[30]; // 80183DB4
  c->r[0]=0u+0x0000000Du; // 80183DB8
  W8(c->r[3]+0xFFFFFFFFu,c->r[0]); // 80183DBC
  c->r[5]=c->r[30]+0xFFFFFFFFu; // 80183DC0
  c->r[4]=0u+0x00000000u; // 80183DC4
  c->lr=0x80183DCCu; f_8000443C(c); // 80183DC8
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80183DCC
  c->r[5]=0u+0x0000000Au; // 80183DD0
  c->r[4]=c->r[29]+c->r[0]; // 80183DD4
  c->r[3]=0u+0x00000002u; // 80183DD8
  W8(c->r[4]+0xFFFFFFFFu,c->r[5]); // 80183DDC
  goto L_80183E4C; // 80183DE0
L_80183DE4:;
  c->r[3]=c->r[29]+c->r[30]; // 80183DE4
  c->r[0]=0u+0x0000000Du; // 80183DE8
  W8(c->r[3]+0xFFFFFFFFu,c->r[0]); // 80183DEC
  c->r[3]=0u+0x00000001u; // 80183DF0
  goto L_80183E4C; // 80183DF4
L_80183DF8:;
  c->r[3]=c->r[29]+c->r[30]; // 80183DF8
  c->r[0]=0u+0x0000000Au; // 80183DFC
  W8(c->r[3]+0xFFFFFFFFu,c->r[0]); // 80183E00
  c->r[3]=0u+0x00000001u; // 80183E04
  goto L_80183E4C; // 80183E08
L_80183E0C:;
  cmps(c,0,(int32_t)c->r[5],2); // 80183E0C
  if (crb(c,2)) { goto L_80183E38; } // 80183E10
  if (!crb(c,0)) { goto L_80183E24; } // 80183E14
  cmps(c,0,(int32_t)c->r[5],1); // 80183E18
  if (!crb(c,0)) { goto L_80183E30; } // 80183E1C
  goto L_80183E48; // 80183E20
L_80183E24:;
  cmps(c,0,(int32_t)c->r[5],4); // 80183E24
  if (!crb(c,0)) { goto L_80183E48; } // 80183E28
  goto L_80183E40; // 80183E2C
L_80183E30:;
  c->r[3]=0u+0x00000002u; // 80183E30
  goto L_80183E4C; // 80183E34
L_80183E38:;
  c->r[3]=0u+0x00000001u; // 80183E38
  goto L_80183E4C; // 80183E3C
L_80183E40:;
  c->r[3]=0u+0x00000001u; // 80183E40
  goto L_80183E4C; // 80183E44
L_80183E48:;
  c->r[3]=0u+0x00000000u; // 80183E48
L_80183E4C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80183E4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80183E50
  c->r[30]=R32(c->r[1]+0x00000018u); // 80183E54
  c->r[29]=R32(c->r[1]+0x00000014u); // 80183E58
  c->lr=c->r[0]; // 80183E5C
  c->r[1]=c->r[1]+0x00000020u; // 80183E60
  return; // 80183E64
}

// fn_80183E68
void f_80183E68(Ctx* __restrict c) {
  c->r[7]=0u+0x00000000u; // 80183E68
  f_80183E78(c); return; // 80183E6C
}

// fn_80183E70
void f_80183E70(Ctx* __restrict c) {
  c->r[7]=0u+0x00000000u; // 80183E70
  f_801841D4(c); return; // 80183E74
}

// fn_80183E78
void f_80183E78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183E78
  c->r[0]=c->lr; // 80183E7C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80183E80
  c->r[11]=c->r[1]+0x00000050u; // 80183E84
  c->lr=0x80183E8Cu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80183E88
  c->r[23]=c->r[5]|c->r[5]; // 80183E8C
  c->r[8]=0u+0xFFFFFFFFu; // 80183E90
  c->r[9]=0u+0x00000001u; // 80183E94
  c->r[5]=0u-c->r[3]; // 80183E98
  c->r[0]=0u-c->r[23]; // 80183E9C
  c->r[24]=c->r[6]|c->r[6]; // 80183EA0
  W32(c->r[1]+0x00000014u,c->r[8]); // 80183EA4
  c->r[5]=c->r[5]|c->r[3]; // 80183EA8
  c->r[21]=c->r[3]|c->r[3]; // 80183EAC
  c->r[0]=c->r[0]|c->r[23]; // 80183EB0
  W32(c->r[1]+0x00000010u,c->r[8]); // 80183EB4
  c->r[25]=c->r[7]|c->r[7]; // 80183EB8
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 80183EBC
  c->r[22]=c->r[4]|c->r[4]; // 80183EC0
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 80183EC4
  c->r[8]=c->r[24]|c->r[24]; // 80183EC8
  c->r[5]=c->r[1]+0x00000010u; // 80183ECC
  c->r[6]=c->r[1]+0x0000000Cu; // 80183ED0
  W32(c->r[1]+0x00000008u,c->r[9]); // 80183ED4
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 80183ED8
  c->r[9]=c->r[1]+0x00000014u; // 80183EDC
  c->r[10]=c->r[1]+0x00000008u; // 80183EE0
  c->r[29]=0u+0x00000000u; // 80183EE4
  c->r[28]=0u+0x00000000u; // 80183EE8
  c->lr=0x80183EF0u; f_80183C2C(c); // 80183EEC
  cmps(c,0,(int32_t)c->r[3],0); // 80183EF0
  c->r[27]=c->r[3]|c->r[3]; // 80183EF4
  if (crb(c,2)) { goto L_80183F00; } // 80183EF8
  goto L_801841BC; // 80183EFC
L_80183F00:;
  c->r[0]=R32(c->r[13]+0xFFFF92C8u); // 80183F00
  cmps(c,0,(int32_t)c->r[0],0); // 80183F04
  if (!crb(c,2)) { goto L_80183F14; } // 80183F08
  c->r[3]=0u+0xFFFFFFF9u; // 80183F0C
  goto L_801841BC; // 80183F10
L_80183F14:;
  c->r[3]=0u+0x80270000u; // 80183F14
  c->r[31]=0u+0x00010000u; // 80183F18
  c->r[30]=c->r[3]+0x00006818u; // 80183F1C
  goto L_8018417C; // 80183F20
L_80183F24:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 80183F24
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80183F28
  if (crb(c,0)) { goto L_80183F44; } // 80183F2C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80183F30
  cmps(c,0,(int32_t)c->r[0],0); // 80183F34
  if (crb(c,2)) { goto L_80183F44; } // 80183F38
  c->r[27]=0u+0xFFFFFFFFu; // 80183F3C
  goto L_801841A0; // 80183F40
L_80183F44:;
  cmps(c,0,(int32_t)c->r[25],0); // 80183F44
  if (!crb(c,1)) { goto L_80183FF0; } // 80183F48
  c->r[0]=c->r[3]-c->r[29]; // 80183F4C
  c->r[3]=c->r[26]|c->r[26]; // 80183F50
  cmps(c,0,(int32_t)c->r[0],1); // 80183F54
  c->r[4]=0u+0x00000000u; // 80183F58
  if (crb(c,1)) { goto L_80183F6C; } // 80183F5C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80183F60
  cmps(c,0,(int32_t)c->r[0],0); // 80183F64
  if (!crb(c,2)) { goto L_80183F70; } // 80183F68
L_80183F6C:;
  c->r[4]=0u+0x00000001u; // 80183F6C
L_80183F70:;
  cmps(c,0,(int32_t)c->r[4],0); // 80183F70
  if (crb(c,2)) { goto L_80183F80; } // 80183F74
  c->r[4]=R8(c->r[23]+0x00000001u); // 80183F78
  goto L_80183F84; // 80183F7C
L_80183F80:;
  c->r[4]=0u+0x00000000u; // 80183F80
L_80183F84:;
  c->lr=0x80183F88u; f_80183D24(c); // 80183F84
  cmps(c,0,(int32_t)c->r[3],0); // 80183F88
  c->r[20]=c->r[3]|c->r[3]; // 80183F8C
  if (!crb(c,1)) { goto L_80183FF0; } // 80183F90
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 80183F94
  c->r[3]=c->r[21]|c->r[21]; // 80183F98
  c->r[5]=c->r[25]|c->r[25]; // 80183F9C
  c->r[4]=0u+0x00000002u; // 80183FA0
  c->lr=0x80183FA8u; f_80183D58(c); // 80183FA4
  c->r[0]=R32(c->r[1]+0x00000010u); // 80183FA8
  c->r[0]=c->r[0]-c->r[28]; // 80183FAC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80183FB0
  if (!crb(c,0)) { goto L_80183FCC; } // 80183FB4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80183FB8
  cmps(c,0,(int32_t)c->r[0],0); // 80183FBC
  if (crb(c,2)) { goto L_80183FCC; } // 80183FC0
  c->r[27]=0u+0xFFFFFFFFu; // 80183FC4
  goto L_801841A0; // 80183FC8
L_80183FCC:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80183FCC
  c->r[23]=c->r[23]+c->r[20]; // 80183FD0
  c->r[29]=c->r[29]+c->r[20]; // 80183FD4
  c->r[28]=c->r[28]+c->r[3]; // 80183FD8
  cmps(c,0,(int32_t)c->r[0],0); // 80183FDC
  if (crb(c,2)) { goto L_8018417C; } // 80183FE0
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80183FE4
  c->r[21]=c->r[21]+c->r[0]; // 80183FE8
  goto L_8018417C; // 80183FEC
L_80183FF0:;
  cmpu(c,0,c->r[26],0x00000081u); // 80183FF0
  if (crb(c,0)) { goto L_80184000; } // 80183FF4
  cmpu(c,0,c->r[26],0x0000009Fu); // 80183FF8
  if (!crb(c,1)) { goto L_80184010; } // 80183FFC
L_80184000:;
  cmpu(c,0,c->r[26],0x000000E0u); // 80184000
  if (crb(c,0)) { goto L_801840F8; } // 80184004
  cmpu(c,0,c->r[26],0x000000FCu); // 80184008
  if (crb(c,1)) { goto L_801840F8; } // 8018400C
L_80184010:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80184010
  c->r[0]=c->r[0]-c->r[29]; // 80184014
  cmps(c,0,(int32_t)c->r[0],2); // 80184018
  if (!crb(c,0)) { goto L_8018402C; } // 8018401C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80184020
  cmps(c,0,(int32_t)c->r[0],0); // 80184024
  if (!crb(c,2)) { goto L_801841A0; } // 80184028
L_8018402C:;
  {uint32_t ea=c->r[23]+0x00000001u; c->r[4]=R8(ea); c->r[23]=ea;} // 8018402C
  cmpu(c,0,c->r[4],0x00000040u); // 80184030
  if (crb(c,0)) { goto L_80184040; } // 80184034
  cmpu(c,0,c->r[4],0x0000007Eu); // 80184038
  if (!crb(c,1)) { goto L_80184050; } // 8018403C
L_80184040:;
  cmpu(c,0,c->r[4],0x00000080u); // 80184040
  if (crb(c,0)) { goto L_801840E8; } // 80184044
  cmpu(c,0,c->r[4],0x000000FCu); // 80184048
  if (crb(c,1)) { goto L_801840E8; } // 8018404C
L_80184050:;
  cmpu(c,0,c->r[26],0x000000F0u); // 80184050
  if (!crb(c,0)) { goto L_8018408C; } // 80184054
  cmpu(c,0,c->r[26],0x000000A0u); // 80184058
  c->r[3]=c->r[26]+0xFFFFFF3Fu; // 8018405C
  if (!crb(c,0)) { goto L_80184068; } // 80184060
  c->r[3]=c->r[26]+0xFFFFFF7Fu; // 80184064
L_80184068:;
  cmpu(c,0,c->r[4],0x0000007Fu); // 80184068
  c->r[0]=c->r[4]+0xFFFFFFBFu; // 8018406C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 80184070
  if (!crb(c,0)) { goto L_8018407C; } // 80184074
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 80184078
L_8018407C:;
  c->r[0]=c->r[3]+c->r[0]; // 8018407C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80184080
  c->r[26]=R16(c->r[30]+c->r[0]); // 80184084
  goto L_801840F0; // 80184088
L_8018408C:;
  cmpu(c,0,c->r[26],0x000000FAu); // 8018408C
  if (crb(c,0)) { goto L_801840BC; } // 80184090
  c->r[0]=c->r[26]+0xFFFFFF35u; // 80184094
  cmpu(c,0,c->r[4],0x0000007Fu); // 80184098
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)188); // 8018409C
  c->r[0]=c->r[4]+0xFFFFFFBFu; // 801840A0
  if (!crb(c,0)) { goto L_801840AC; } // 801840A4
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 801840A8
L_801840AC:;
  c->r[0]=c->r[3]+c->r[0]; // 801840AC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801840B0
  c->r[26]=R16(c->r[30]+c->r[0]); // 801840B4
  goto L_801840F0; // 801840B8
L_801840BC:;
  c->r[0]=c->r[26]+0xFFFFFF10u; // 801840BC
  cmpu(c,0,c->r[4],0x0000007Fu); // 801840C0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)188); // 801840C4
  c->r[0]=c->r[4]+0xFFFFFFBFu; // 801840C8
  if (!crb(c,0)) { goto L_801840D4; } // 801840CC
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 801840D0
L_801840D4:;
  c->r[3]=c->r[3]+c->r[0]; // 801840D4
  c->r[3]=c->r[3]+0x00010000u; // 801840D8
  c->r[0]=c->r[3]+0xFFFFE000u; // 801840DC
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 801840E0
  goto L_801840F0; // 801840E4
L_801840E8:;
  c->r[27]=0u+0xFFFFFFFCu; // 801840E8
  goto L_801841A0; // 801840EC
L_801840F0:;
  c->r[29]=c->r[29]+0x00000001u; // 801840F0
  goto L_8018414C; // 801840F4
L_801840F8:;
  cmpu(c,0,c->r[26],0x00000080u); // 801840F8
  if (crb(c,1)) { goto L_80184104; } // 801840FC
  goto L_8018414C; // 80184100
L_80184104:;
  cmpu(c,0,c->r[26],0x000000A0u); // 80184104
  if (!crb(c,2)) { goto L_80184114; } // 80184108
  c->r[26]=c->r[31]+0xFFFFF8F0u; // 8018410C
  goto L_8018414C; // 80184110
L_80184114:;
  cmpu(c,0,c->r[26],0x000000E0u); // 80184114
  if (!crb(c,0)) { goto L_8018412C; } // 80184118
  c->r[3]=c->r[26]+0x00010000u; // 8018411C
  c->r[0]=c->r[3]+0xFFFFFEC0u; // 80184120
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 80184124
  goto L_8018414C; // 80184128
L_8018412C:;
  cmpu(c,0,c->r[26],0x000000FDu); // 8018412C
  if (crb(c,0)) { goto L_80184144; } // 80184130
  c->r[3]=c->r[26]+0x00010000u; // 80184134
  c->r[0]=c->r[3]+0xFFFFF7F4u; // 80184138
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 8018413C
  goto L_8018414C; // 80184140
L_80184144:;
  c->r[27]=0u+0xFFFFFFFCu; // 80184144
  goto L_801841A0; // 80184148
L_8018414C:;
  c->r[0]=rotl(c->r[26],0)&0x0000FFFFu; cr0(c,c->r[0]); // 8018414C
  if (!crb(c,2)) { goto L_8018415C; } // 80184150
  c->r[27]=0u+0xFFFFFFFEu; // 80184154
  goto L_801841A0; // 80184158
L_8018415C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8018415C
  cmps(c,0,(int32_t)c->r[0],0); // 80184160
  if (crb(c,2)) { goto L_80184170; } // 80184164
  W16(c->r[21]+0x00000000u,c->r[26]); // 80184168
  c->r[21]=c->r[21]+0x00000002u; // 8018416C
L_80184170:;
  c->r[28]=c->r[28]+0x00000001u; // 80184170
  c->r[23]=c->r[23]+0x00000001u; // 80184174
  c->r[29]=c->r[29]+0x00000001u; // 80184178
L_8018417C:;
  c->r[26]=R8(c->r[23]+0x00000000u); // 8018417C
  cmps(c,0,(int32_t)c->r[26],0); // 80184180
  if (crb(c,2)) { goto L_801841A0; } // 80184184
  c->r[3]=R32(c->r[1]+0x00000014u); // 80184188
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 8018418C
  if (crb(c,0)) { IRQCHK(c); goto L_80183F24; } // 80184190
  c->r[0]=R32(c->r[1]+0x00000008u); // 80184194
  cmps(c,0,(int32_t)c->r[0],0); // 80184198
  if (crb(c,2)) { IRQCHK(c); goto L_80183F24; } // 8018419C
L_801841A0:;
  cmps(c,0,(int32_t)c->r[24],0); // 801841A0
  if (crb(c,2)) { goto L_801841AC; } // 801841A4
  W32(c->r[24]+0x00000000u,c->r[29]); // 801841A8
L_801841AC:;
  cmps(c,0,(int32_t)c->r[22],0); // 801841AC
  if (crb(c,2)) { goto L_801841B8; } // 801841B0
  W32(c->r[22]+0x00000000u,c->r[28]); // 801841B4
L_801841B8:;
  c->r[3]=c->r[27]|c->r[27]; // 801841B8
L_801841BC:;
  c->r[11]=c->r[1]+0x00000050u; // 801841BC
  c->lr=0x801841C4u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801841C0
  c->r[0]=R32(c->r[1]+0x00000054u); // 801841C4
  c->lr=c->r[0]; // 801841C8
  c->r[1]=c->r[1]+0x00000050u; // 801841CC
  return; // 801841D0
}

// fn_801841D4
void f_801841D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801841D4
  c->r[0]=c->lr; // 801841D8
  W32(c->r[1]+0x00000054u,c->r[0]); // 801841DC
  c->r[11]=c->r[1]+0x00000050u; // 801841E0
  c->lr=0x801841E8u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801841E4
  c->r[26]=c->r[5]|c->r[5]; // 801841E8
  c->r[8]=0u+0xFFFFFFFFu; // 801841EC
  c->r[9]=0u+0x00000001u; // 801841F0
  c->r[5]=0u-c->r[3]; // 801841F4
  c->r[0]=0u-c->r[26]; // 801841F8
  c->r[27]=c->r[6]|c->r[6]; // 801841FC
  W32(c->r[1]+0x00000018u,c->r[8]); // 80184200
  c->r[5]=c->r[5]|c->r[3]; // 80184204
  c->r[24]=c->r[3]|c->r[3]; // 80184208
  c->r[0]=c->r[0]|c->r[26]; // 8018420C
  W32(c->r[1]+0x00000014u,c->r[8]); // 80184210
  c->r[28]=c->r[7]|c->r[7]; // 80184214
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 80184218
  c->r[25]=c->r[4]|c->r[4]; // 8018421C
  W32(c->r[1]+0x00000010u,c->r[9]); // 80184220
  c->r[8]=c->r[27]|c->r[27]; // 80184224
  c->r[5]=c->r[1]+0x00000014u; // 80184228
  c->r[6]=c->r[1]+0x00000010u; // 8018422C
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 80184230
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 80184234
  c->r[9]=c->r[1]+0x00000018u; // 80184238
  c->r[10]=c->r[1]+0x0000000Cu; // 8018423C
  c->r[31]=0u+0x00000000u; // 80184240
  c->r[30]=0u+0x00000000u; // 80184244
  c->lr=0x8018424Cu; f_80183C2C(c); // 80184248
  cmps(c,0,(int32_t)c->r[3],0); // 8018424C
  c->r[29]=c->r[3]|c->r[3]; // 80184250
  if (crb(c,2)) { goto L_8018425C; } // 80184254
  goto L_80184464; // 80184258
L_8018425C:;
  c->r[0]=R32(c->r[13]+0xFFFF92C8u); // 8018425C
  cmps(c,0,(int32_t)c->r[0],0); // 80184260
  if (!crb(c,2)) { goto L_80184270; } // 80184264
  c->r[3]=0u+0xFFFFFFF9u; // 80184268
  goto L_80184464; // 8018426C
L_80184270:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 80184270
  cmps(c,0,(int32_t)c->r[0],0); // 80184274
  if (!crb(c,1)) { goto L_80184424; } // 80184278
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8018427C
  cmps(c,0,(int32_t)c->r[0],0); // 80184280
  if (crb(c,2)) { goto L_80184424; } // 80184284
  c->r[0]=R16(c->r[26]+0x00000000u); // 80184288
  cmpu(c,0,c->r[0],0x0000FEFFu); // 8018428C
  if (!crb(c,2)) { goto L_801842A0; } // 80184290
  c->r[31]=0u+0x00000001u; // 80184294
  c->r[26]=c->r[26]+0x00000002u; // 80184298
  goto L_80184424; // 8018429C
L_801842A0:;
  cmpu(c,0,c->r[0],0x0000FFFEu); // 801842A0
  if (!crb(c,2)) { goto L_80184424; } // 801842A4
  cmps(c,0,(int32_t)c->r[25],0); // 801842A8
  if (crb(c,2)) { goto L_801842B8; } // 801842AC
  c->r[0]=0u+0x00000000u; // 801842B0
  W32(c->r[25]+0x00000000u,c->r[0]); // 801842B4
L_801842B8:;
  c->r[0]=0u+0x00000000u; // 801842B8
  c->r[3]=0u+0xFFFFFFFCu; // 801842BC
  W32(c->r[27]+0x00000000u,c->r[0]); // 801842C0
  goto L_80184464; // 801842C4
  goto L_80184424; // 801842C8
L_801842CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801842CC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801842D0
  if (crb(c,0)) { goto L_801842EC; } // 801842D4
  c->r[0]=R32(c->r[1]+0x00000010u); // 801842D8
  cmps(c,0,(int32_t)c->r[0],0); // 801842DC
  if (crb(c,2)) { goto L_801842EC; } // 801842E0
  c->r[29]=0u+0xFFFFFFFFu; // 801842E4
  goto L_80184448; // 801842E8
L_801842EC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801842EC
  if (!crb(c,1)) { goto L_80184398; } // 801842F0
  c->r[0]=c->r[3]-c->r[31]; // 801842F4
  c->r[3]=c->r[22]|c->r[22]; // 801842F8
  cmps(c,0,(int32_t)c->r[0],1); // 801842FC
  c->r[4]=0u+0x00000000u; // 80184300
  if (crb(c,1)) { goto L_80184314; } // 80184304
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80184308
  cmps(c,0,(int32_t)c->r[0],0); // 8018430C
  if (!crb(c,2)) { goto L_80184318; } // 80184310
L_80184314:;
  c->r[4]=0u+0x00000001u; // 80184314
L_80184318:;
  cmps(c,0,(int32_t)c->r[4],0); // 80184318
  if (crb(c,2)) { goto L_80184328; } // 8018431C
  c->r[4]=R16(c->r[26]+0x00000002u); // 80184320
  goto L_8018432C; // 80184324
L_80184328:;
  c->r[4]=0u+0x00000000u; // 80184328
L_8018432C:;
  c->lr=0x80184330u; f_80183D24(c); // 8018432C
  cmps(c,0,(int32_t)c->r[3],0); // 80184330
  c->r[23]=c->r[3]|c->r[3]; // 80184334
  if (!crb(c,1)) { goto L_80184398; } // 80184338
  c->r[6]=R32(c->r[1]+0x00000010u); // 8018433C
  c->r[3]=c->r[24]|c->r[24]; // 80184340
  c->r[5]=c->r[28]|c->r[28]; // 80184344
  c->r[4]=0u+0x00000001u; // 80184348
  c->lr=0x80184350u; f_80183D58(c); // 8018434C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80184350
  c->r[0]=c->r[0]-c->r[30]; // 80184354
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80184358
  if (!crb(c,0)) { goto L_80184374; } // 8018435C
  c->r[0]=R32(c->r[1]+0x00000010u); // 80184360
  cmps(c,0,(int32_t)c->r[0],0); // 80184364
  if (crb(c,2)) { goto L_80184374; } // 80184368
  c->r[29]=0u+0xFFFFFFFFu; // 8018436C
  goto L_80184448; // 80184370
L_80184374:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 80184374
  c->r[4]=rotl(c->r[23],1)&0xFFFFFFFEu; // 80184378
  c->r[26]=c->r[26]+c->r[4]; // 8018437C
  c->r[31]=c->r[31]+c->r[23]; // 80184380
  cmps(c,0,(int32_t)c->r[0],0); // 80184384
  c->r[30]=c->r[30]+c->r[3]; // 80184388
  if (crb(c,2)) { goto L_80184424; } // 8018438C
  c->r[24]=c->r[24]+c->r[3]; // 80184390
  goto L_80184424; // 80184394
L_80184398:;
  c->r[4]=c->r[22]|c->r[22]; // 80184398
  c->r[3]=c->r[1]+0x00000008u; // 8018439C
  c->lr=0x801843A4u; f_8018447C(c); // 801843A0
  c->r[3]=R8(c->r[1]+0x00000008u); // 801843A4
  c->r[4]=R8(c->r[1]+0x00000009u); // 801843A8
  cmps(c,0,(int32_t)c->r[3],0); // 801843AC
  if (!crb(c,2)) { goto L_801843BC; } // 801843B0
  c->r[29]=0u+0xFFFFFFFEu; // 801843B4
  goto L_80184448; // 801843B8
L_801843BC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801843BC
  if (!crb(c,2)) { goto L_801843DC; } // 801843C0
  c->r[0]=R32(c->r[1]+0x00000010u); // 801843C4
  cmps(c,0,(int32_t)c->r[0],0); // 801843C8
  if (crb(c,2)) { goto L_80184418; } // 801843CC
  W8(c->r[24]+0x00000000u,c->r[3]); // 801843D0
  c->r[24]=c->r[24]+0x00000001u; // 801843D4
  goto L_80184418; // 801843D8
L_801843DC:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801843DC
  cmps(c,0,(int32_t)c->r[0],0); // 801843E0
  if (crb(c,2)) { goto L_80184414; } // 801843E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801843E8
  c->r[0]=c->r[0]-c->r[30]; // 801843EC
  cmps(c,0,(int32_t)c->r[0],2); // 801843F0
  if (!crb(c,0)) { goto L_80184400; } // 801843F4
  c->r[29]=0u+0xFFFFFFFFu; // 801843F8
  goto L_80184448; // 801843FC
L_80184400:;
  W8(c->r[24]+0x00000000u,c->r[3]); // 80184400
  c->r[30]=c->r[30]+0x00000001u; // 80184404
  W8(c->r[24]+0x00000001u,c->r[4]); // 80184408
  c->r[24]=c->r[24]+0x00000002u; // 8018440C
  goto L_80184418; // 80184410
L_80184414:;
  c->r[30]=c->r[30]+0x00000001u; // 80184414
L_80184418:;
  c->r[30]=c->r[30]+0x00000001u; // 80184418
  c->r[26]=c->r[26]+0x00000002u; // 8018441C
  c->r[31]=c->r[31]+0x00000001u; // 80184420
L_80184424:;
  c->r[22]=R16(c->r[26]+0x00000000u); // 80184424
  cmps(c,0,(int32_t)c->r[22],0); // 80184428
  if (crb(c,2)) { goto L_80184448; } // 8018442C
  c->r[3]=R32(c->r[1]+0x00000018u); // 80184430
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 80184434
  if (crb(c,0)) { IRQCHK(c); goto L_801842CC; } // 80184438
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8018443C
  cmps(c,0,(int32_t)c->r[0],0); // 80184440
  if (crb(c,2)) { IRQCHK(c); goto L_801842CC; } // 80184444
L_80184448:;
  cmps(c,0,(int32_t)c->r[27],0); // 80184448
  if (crb(c,2)) { goto L_80184454; } // 8018444C
  W32(c->r[27]+0x00000000u,c->r[31]); // 80184450
L_80184454:;
  cmps(c,0,(int32_t)c->r[25],0); // 80184454
  if (crb(c,2)) { goto L_80184460; } // 80184458
  W32(c->r[25]+0x00000000u,c->r[30]); // 8018445C
L_80184460:;
  c->r[3]=c->r[29]|c->r[29]; // 80184460
L_80184464:;
  c->r[11]=c->r[1]+0x00000050u; // 80184464
  c->lr=0x8018446Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80184468
  c->r[0]=R32(c->r[1]+0x00000054u); // 8018446C
  c->lr=c->r[0]; // 80184470
  c->r[1]=c->r[1]+0x00000050u; // 80184474
  return; // 80184478
}

// fn_8018447C
void f_8018447C(Ctx* __restrict c) {
  cmpu(c,0,c->r[4],0x00000080u); // 8018447C
  if (!crb(c,0)) { goto L_80184494; } // 80184480
  c->r[0]=0u+0x00000000u; // 80184484
  W8(c->r[3]+0x00000000u,c->r[4]); // 80184488
  W8(c->r[3]+0x00000001u,c->r[0]); // 8018448C
  return; // 80184490
L_80184494:;
  cmpu(c,0,c->r[4],0x0000FF61u); // 80184494
  if (crb(c,0)) { goto L_801844BC; } // 80184498
  cmpu(c,0,c->r[4],0x0000FF9Fu); // 8018449C
  if (crb(c,1)) { goto L_801844BC; } // 801844A0
  c->r[4]=c->r[4]+0xFFFF0000u; // 801844A4
  c->r[0]=0u+0x00000000u; // 801844A8
  c->r[4]=c->r[4]+0x00000140u; // 801844AC
  W8(c->r[3]+0x00000001u,c->r[0]); // 801844B0
  W8(c->r[3]+0x00000000u,c->r[4]); // 801844B4
  return; // 801844B8
L_801844BC:;
  cmpu(c,0,c->r[4],0x0000D800u); // 801844BC
  if (crb(c,0)) { goto L_801844CC; } // 801844C0
  cmpu(c,0,c->r[4],0x0000F900u); // 801844C4
  if (crb(c,0)) { goto L_801844D0; } // 801844C8
L_801844CC:;
  goto L_80184574; // 801844CC
L_801844D0:;
  cmpu(c,0,c->r[4],0x0000E000u); // 801844D0
  if (crb(c,0)) { goto L_8018452C; } // 801844D4
  cmpu(c,0,c->r[4],0x0000E757u); // 801844D8
  if (crb(c,1)) { goto L_8018452C; } // 801844DC
  c->r[5]=c->r[4]+0xFFFF0000u; // 801844E0
  c->r[4]=0u+0xAE4C0000u; // 801844E4
  c->r[4]=c->r[4]+0x0000415Du; // 801844E8
  c->r[5]=c->r[5]+0x00002000u; // 801844EC
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[5])>>32); // 801844F0
  c->r[0]=rotl(c->r[0],25)&0x01FFFFFFu; // 801844F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)188); // 801844F8
  c->r[6]=c->r[5]-c->r[0]; // 801844FC
  c->r[0]=c->r[5]-c->r[6]; // 80184500
  c->r[4]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80184504
  cmpu(c,0,c->r[6],0x0000003Fu); // 80184508
  c->r[0]=c->r[6]+0x00000041u; // 8018450C
  c->r[4]=rotl(c->r[4],25)&0x01FFFFFFu; // 80184510
  c->r[4]=c->r[4]+0x000000F0u; // 80184514
  W8(c->r[3]+0x00000000u,c->r[4]); // 80184518
  if (!crb(c,0)) { goto L_80184524; } // 8018451C
  c->r[0]=c->r[6]+0x00000040u; // 80184520
L_80184524:;
  W8(c->r[3]+0x00000001u,c->r[0]); // 80184524
  return; // 80184528
L_8018452C:;
  cmpu(c,1,c->r[4],0x0000F8F0u); // 8018452C
  if (crb(c,4)) { goto L_80184564; } // 80184530
  cmpu(c,0,c->r[4],0x0000F8F3u); // 80184534
  if (crb(c,1)) { goto L_80184564; } // 80184538
  if (!crb(c,6)) { goto L_8018454C; } // 8018453C
  c->r[0]=0u+0x000000A0u; // 80184540
  W8(c->r[3]+0x00000000u,c->r[0]); // 80184544
  goto L_80184558; // 80184548
L_8018454C:;
  c->r[4]=c->r[4]+0xFFFF0000u; // 8018454C
  c->r[0]=c->r[4]+0x0000080Cu; // 80184550
  W8(c->r[3]+0x00000000u,c->r[0]); // 80184554
L_80184558:;
  c->r[0]=0u+0x00000000u; // 80184558
  W8(c->r[3]+0x00000001u,c->r[0]); // 8018455C
  return; // 80184560
L_80184564:;
  c->r[0]=0u+0x00000000u; // 80184564
  W8(c->r[3]+0x00000001u,c->r[0]); // 80184568
  W8(c->r[3]+0x00000000u,c->r[0]); // 8018456C
  return; // 80184570
L_80184574:;
  c->r[7]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[7]); // 80184574
  c->r[6]=rotl(c->r[4],24)&0x000000FFu; // 80184578
  if (crb(c,2)) { goto L_80184598; } // 8018457C
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 80184580
  c->r[4]=0u+0x80280000u; // 80184584
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80184588
  c->r[4]=c->r[4]+0x00000880u; // 8018458C
  c->r[8]=R16(c->r[4]+c->r[0]); // 80184590
  goto L_8018459C; // 80184594
L_80184598:;
  c->r[8]=0u+0x00000000u; // 80184598
L_8018459C:;
  c->r[5]=0u+0x80280000u; // 8018459C
  c->r[4]=0u+0x80280000u; // 801845A0
  c->r[0]=rotl(c->r[7],1)&0x000001FEu; // 801845A4
  c->r[5]=c->r[5]+0x00000880u; // 801845A8
  c->r[4]=c->r[4]+0xFFFFB188u; // 801845AC
  c->r[5]=R16(c->r[5]+c->r[0]); // 801845B0
  c->r[7]=c->r[5]+0xFFFFFFFFu; // 801845B4
  goto L_80184614; // 801845B8
L_801845BC:;
  c->r[5]=c->r[8]+c->r[7]; // 801845BC
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 801845C0
  c->r[0]=c->r[0]+c->r[5]; // 801845C4
  c->r[9]=sraw(c,c->r[0],1); // 801845C8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFCu; // 801845CC
  c->r[0]=c->r[0]-c->r[9]; // 801845D0
  c->r[5]=c->r[4]+c->r[0]; // 801845D4
  c->r[10]=R8(c->r[4]+c->r[0]); // 801845D8
  c->r[0]=R8(c->r[4]+c->r[0]); // 801845DC
  cmpu(c,0,c->r[0],c->r[6]); // 801845E0
  if (!crb(c,2)) { goto L_801845FC; } // 801845E4
  c->r[4]=R8(c->r[5]+0x00000001u); // 801845E8
  c->r[0]=R8(c->r[5]+0x00000002u); // 801845EC
  W8(c->r[3]+0x00000000u,c->r[4]); // 801845F0
  W8(c->r[3]+0x00000001u,c->r[0]); // 801845F4
  return; // 801845F8
L_801845FC:;
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[6]); // 801845FC
  if (!crb(c,1)) { goto L_8018460C; } // 80184600
  c->r[7]=c->r[9]|c->r[9]; // 80184604
  goto L_80184614; // 80184608
L_8018460C:;
  if (!crb(c,0)) { goto L_80184614; } // 8018460C
  c->r[8]=c->r[9]|c->r[9]; // 80184610
L_80184614:;
  c->r[0]=c->r[7]-c->r[8]; // 80184614
  cmps(c,0,(int32_t)c->r[0],1); // 80184618
  if (crb(c,1)) { IRQCHK(c); goto L_801845BC; } // 8018461C
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80184620
  c->r[4]=0u+0x80280000u; // 80184624
  c->r[0]=c->r[0]-c->r[8]; // 80184628
  c->r[4]=c->r[4]+0xFFFFB188u; // 8018462C
  c->r[5]=c->r[4]+c->r[0]; // 80184630
  c->r[0]=R8(c->r[4]+c->r[0]); // 80184634
  cmpu(c,0,c->r[0],c->r[6]); // 80184638
  if (!crb(c,2)) { goto L_80184654; } // 8018463C
  c->r[4]=R8(c->r[5]+0x00000001u); // 80184640
  c->r[0]=R8(c->r[5]+0x00000002u); // 80184644
  W8(c->r[3]+0x00000000u,c->r[4]); // 80184648
  W8(c->r[3]+0x00000001u,c->r[0]); // 8018464C
  return; // 80184650
L_80184654:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80184654
  c->r[0]=c->r[0]-c->r[7]; // 80184658
  c->r[5]=c->r[4]+c->r[0]; // 8018465C
  c->r[0]=R8(c->r[4]+c->r[0]); // 80184660
  cmpu(c,0,c->r[0],c->r[6]); // 80184664
  if (!crb(c,2)) { goto L_80184680; } // 80184668
  c->r[4]=R8(c->r[5]+0x00000001u); // 8018466C
  c->r[0]=R8(c->r[5]+0x00000002u); // 80184670
  W8(c->r[3]+0x00000000u,c->r[4]); // 80184674
  W8(c->r[3]+0x00000001u,c->r[0]); // 80184678
  return; // 8018467C
L_80184680:;
  c->r[0]=0u+0x00000000u; // 80184680
  W8(c->r[3]+0x00000001u,c->r[0]); // 80184684
  W8(c->r[3]+0x00000000u,c->r[0]); // 80184688
  return; // 8018468C
}

// ARCInitHandle
void f_80184690(Ctx* __restrict c) {
  trace_call(0x80184690u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80184690
  c->r[0]=c->lr; // 80184694
  W32(c->r[1]+0x00000014u,c->r[0]); // 80184698
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018469C
  c->r[31]=c->r[4]|c->r[4]; // 801846A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801846A4
  c->r[30]=c->r[3]|c->r[3]; // 801846A8
  c->r[5]=R32(c->r[3]+0x00000000u); // 801846AC
  c->r[0]=c->r[5]+0xAA560000u; // 801846B0
  cmpu(c,0,c->r[0],0x0000382Du); // 801846B4
  if (crb(c,2)) { goto L_801846D4; } // 801846B8
  c->r[5]=0u+0x802E0000u; // 801846BC
  c->r[3]=c->r[13]+0xFFFF92D0u; // 801846C0
  c->r[5]=c->r[5]+0xFFFFC320u; // 801846C4
  c->r[4]=0u+0x0000004Au; // 801846C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801846CC
  c->lr=0x801846D4u; f_80150744(c); // 801846D0
L_801846D4:;
  W32(c->r[31]+0x00000000u,c->r[30]); // 801846D4
  c->r[0]=0u+0x00000000u; // 801846D8
  c->r[3]=0u+0x00000001u; // 801846DC
  c->r[4]=R32(c->r[30]+0x00000004u); // 801846E0
  c->r[6]=c->r[30]+c->r[4]; // 801846E4
  W32(c->r[31]+0x00000004u,c->r[6]); // 801846E8
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 801846EC
  c->r[4]=c->r[30]+c->r[4]; // 801846F0
  W32(c->r[31]+0x00000008u,c->r[4]); // 801846F4
  c->r[5]=R32(c->r[6]+0x00000008u); // 801846F8
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 801846FC
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 80184700
  c->r[4]=c->r[6]+c->r[4]; // 80184704
  W32(c->r[31]+0x00000010u,c->r[4]); // 80184708
  c->r[4]=R32(c->r[30]+0x00000008u); // 8018470C
  W32(c->r[31]+0x00000014u,c->r[4]); // 80184710
  W32(c->r[31]+0x00000018u,c->r[0]); // 80184714
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80184718
  c->r[30]=R32(c->r[1]+0x00000008u); // 8018471C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80184720
  c->lr=c->r[0]; // 80184724
  c->r[1]=c->r[1]+0x00000010u; // 80184728
  return; // 8018472C
}

// ARCOpen
void f_80184730(Ctx* __restrict c) {
  trace_call(0x80184730u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80184730
  c->r[0]=c->lr; // 80184734
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80184738
  c->r[11]=c->r[1]+0x000000A0u; // 8018473C
  c->lr=0x80184744u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80184740
  c->r[28]=R32(c->r[3]+0x00000004u); // 80184744
  c->r[26]=c->r[3]|c->r[3]; // 80184748
  c->r[27]=c->r[4]|c->r[4]; // 8018474C
  c->r[29]=c->r[5]|c->r[5]; // 80184750
  c->lr=0x80184758u; f_80184A24(c); // 80184754
  cmps(c,0,(int32_t)c->r[3],0); // 80184758
  if (!crb(c,0)) { goto L_80184984; } // 8018475C
  c->r[29]=R32(c->r[26]+0x00000018u); // 80184760
  c->r[28]=R32(c->r[26]+0x00000004u); // 80184764
  cmps(c,0,(int32_t)c->r[29],0); // 80184768
  if (!crb(c,2)) { goto L_80184778; } // 8018476C
  c->r[4]=0u+0x00000000u; // 80184770
  goto L_8018490C; // 80184774
L_80184778:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 80184778
  c->r[7]=R32(c->r[26]+0x00000010u); // 8018477C
  c->r[3]=c->r[28]+c->r[0]; // 80184780
  c->r[0]=R32(c->r[28]+c->r[0]); // 80184784
  c->r[3]=R32(c->r[3]+0x00000004u); // 80184788
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 8018478C
  cmps(c,0,(int32_t)c->r[3],0); // 80184790
  c->r[30]=c->r[7]+c->r[0]; // 80184794
  if (!crb(c,2)) { goto L_801847A4; } // 80184798
  c->r[4]=0u+0x00000000u; // 8018479C
  goto L_801848B0; // 801847A0
L_801847A4:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801847A4
  c->r[3]=c->r[28]+c->r[0]; // 801847A8
  c->r[0]=R32(c->r[28]+c->r[0]); // 801847AC
  c->r[3]=R32(c->r[3]+0x00000004u); // 801847B0
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801847B4
  cmps(c,0,(int32_t)c->r[3],0); // 801847B8
  c->r[31]=c->r[7]+c->r[0]; // 801847BC
  if (!crb(c,2)) { goto L_801847CC; } // 801847C0
  c->r[4]=0u+0x00000000u; // 801847C4
  goto L_80184854; // 801847C8
L_801847CC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801847CC
  c->r[3]=c->r[26]|c->r[26]; // 801847D0
  c->r[5]=c->r[1]+0x00000008u; // 801847D4
  c->r[6]=0u+0x00000080u; // 801847D8
  c->r[0]=R32(c->r[28]+c->r[4]); // 801847DC
  c->r[4]=c->r[28]+c->r[4]; // 801847E0
  c->r[4]=R32(c->r[4]+0x00000004u); // 801847E4
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801847E8
  c->r[26]=c->r[7]+c->r[0]; // 801847EC
  c->lr=0x801847F4u; f_80184C88(c); // 801847F0
  cmpu(c,0,c->r[3],0x00000080u); // 801847F4
  c->r[4]=c->r[3]|c->r[3]; // 801847F8
  if (!crb(c,2)) { goto L_80184804; } // 801847FC
  goto L_80184854; // 80184800
L_80184804:;
  c->r[4]=c->r[3]+0x00000001u; // 80184804
  c->r[5]=c->r[1]+0x00000008u; // 80184808
  c->r[0]=0u+0x0000002Fu; // 8018480C
  W8(c->r[5]+c->r[3],c->r[0]); // 80184810
  c->r[6]=addc(c,~c->r[4],0x00000080u,1); // 80184814
  c->r[3]=c->r[6]|c->r[6]; // 80184818
  c->r[5]=c->r[5]+c->r[4]; // 8018481C
  goto L_80184838; // 80184820
L_80184824:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 80184824
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80184828
  c->r[26]=c->r[26]+0x00000001u; // 8018482C
  W8(c->r[5]+0x00000000u,c->r[0]); // 80184830
  c->r[5]=c->r[5]+0x00000001u; // 80184834
L_80184838:;
  cmps(c,0,(int32_t)c->r[3],0); // 80184838
  if (crb(c,2)) { goto L_8018484C; } // 8018483C
  c->r[0]=R8(c->r[26]+0x00000000u); // 80184840
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80184844
  if (!crb(c,2)) { IRQCHK(c); goto L_80184824; } // 80184848
L_8018484C:;
  c->r[0]=c->r[6]-c->r[3]; // 8018484C
  c->r[4]=c->r[4]+c->r[0]; // 80184850
L_80184854:;
  cmpu(c,0,c->r[4],0x00000080u); // 80184854
  if (!crb(c,2)) { goto L_80184860; } // 80184858
  goto L_801848B0; // 8018485C
L_80184860:;
  c->r[5]=c->r[4]+0x00000001u; // 80184860
  c->r[3]=c->r[1]+0x00000008u; // 80184864
  c->r[0]=0u+0x0000002Fu; // 80184868
  W8(c->r[3]+c->r[4],c->r[0]); // 8018486C
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 80184870
  c->r[4]=c->r[6]|c->r[6]; // 80184874
  c->r[3]=c->r[3]+c->r[5]; // 80184878
  goto L_80184894; // 8018487C
L_80184880:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80184880
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80184884
  c->r[31]=c->r[31]+0x00000001u; // 80184888
  W8(c->r[3]+0x00000000u,c->r[0]); // 8018488C
  c->r[3]=c->r[3]+0x00000001u; // 80184890
L_80184894:;
  cmps(c,0,(int32_t)c->r[4],0); // 80184894
  if (crb(c,2)) { goto L_801848A8; } // 80184898
  c->r[0]=R8(c->r[31]+0x00000000u); // 8018489C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801848A0
  if (!crb(c,2)) { IRQCHK(c); goto L_80184880; } // 801848A4
L_801848A8:;
  c->r[0]=c->r[6]-c->r[4]; // 801848A8
  c->r[4]=c->r[5]+c->r[0]; // 801848AC
L_801848B0:;
  cmpu(c,0,c->r[4],0x00000080u); // 801848B0
  if (!crb(c,2)) { goto L_801848BC; } // 801848B4
  goto L_8018490C; // 801848B8
L_801848BC:;
  c->r[5]=c->r[4]+0x00000001u; // 801848BC
  c->r[3]=c->r[1]+0x00000008u; // 801848C0
  c->r[0]=0u+0x0000002Fu; // 801848C4
  W8(c->r[3]+c->r[4],c->r[0]); // 801848C8
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 801848CC
  c->r[4]=c->r[6]|c->r[6]; // 801848D0
  c->r[3]=c->r[3]+c->r[5]; // 801848D4
  goto L_801848F0; // 801848D8
L_801848DC:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801848DC
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801848E0
  c->r[30]=c->r[30]+0x00000001u; // 801848E4
  W8(c->r[3]+0x00000000u,c->r[0]); // 801848E8
  c->r[3]=c->r[3]+0x00000001u; // 801848EC
L_801848F0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801848F0
  if (crb(c,2)) { goto L_80184904; } // 801848F4
  c->r[0]=R8(c->r[30]+0x00000000u); // 801848F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801848FC
  if (!crb(c,2)) { IRQCHK(c); goto L_801848DC; } // 80184900
L_80184904:;
  c->r[0]=c->r[6]-c->r[4]; // 80184904
  c->r[4]=c->r[5]+c->r[0]; // 80184908
L_8018490C:;
  cmpu(c,0,c->r[4],0x00000080u); // 8018490C
  if (!crb(c,2)) { goto L_80184920; } // 80184910
  c->r[0]=0u+0x00000000u; // 80184914
  W8(c->r[1]+0x00000087u,c->r[0]); // 80184918
  goto L_80184964; // 8018491C
L_80184920:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 80184920
  c->r[0]=R32(c->r[28]+c->r[0]); // 80184924
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 80184928
  if (crb(c,2)) { goto L_80184958; } // 8018492C
  cmpu(c,0,c->r[4],0x0000007Fu); // 80184930
  if (!crb(c,2)) { goto L_80184948; } // 80184934
  c->r[3]=c->r[1]+0x00000008u; // 80184938
  c->r[0]=0u+0x00000000u; // 8018493C
  W8(c->r[3]+c->r[4],c->r[0]); // 80184940
  goto L_80184964; // 80184944
L_80184948:;
  c->r[3]=c->r[1]+0x00000008u; // 80184948
  c->r[0]=0u+0x0000002Fu; // 8018494C
  W8(c->r[3]+c->r[4],c->r[0]); // 80184950
  c->r[4]=c->r[4]+0x00000001u; // 80184954
L_80184958:;
  c->r[3]=c->r[1]+0x00000008u; // 80184958
  c->r[0]=0u+0x00000000u; // 8018495C
  W8(c->r[3]+c->r[4],c->r[0]); // 80184960
L_80184964:;
  c->r[3]=0u+0x802E0000u; // 80184964
  c->r[4]=c->r[27]|c->r[27]; // 80184968
  c->r[3]=c->r[3]+0xFFFFC344u; // 8018496C
  c->r[5]=c->r[1]+0x00000008u; // 80184970
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80184974
  c->lr=0x8018497Cu; f_801506B4(c); // 80184978
  c->r[3]=0u+0x00000000u; // 8018497C
  goto L_801849BC; // 80184980
L_80184984:;
  if (crb(c,0)) { goto L_80184998; } // 80184984
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80184988
  c->r[0]=R32(c->r[28]+c->r[3]); // 8018498C
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 80184990
  if (crb(c,2)) { goto L_801849A0; } // 80184994
L_80184998:;
  c->r[3]=0u+0x00000000u; // 80184998
  goto L_801849BC; // 8018499C
L_801849A0:;
  W32(c->r[29]+0x00000000u,c->r[26]); // 801849A0
  c->r[4]=c->r[28]+c->r[3]; // 801849A4
  c->r[3]=0u+0x00000001u; // 801849A8
  c->r[0]=R32(c->r[4]+0x00000004u); // 801849AC
  W32(c->r[29]+0x00000004u,c->r[0]); // 801849B0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801849B4
  W32(c->r[29]+0x00000008u,c->r[0]); // 801849B8
L_801849BC:;
  c->r[11]=c->r[1]+0x000000A0u; // 801849BC
  c->lr=0x801849C4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801849C0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801849C4
  c->lr=c->r[0]; // 801849C8
  c->r[1]=c->r[1]+0x000000A0u; // 801849CC
  return; // 801849D0
}

// ARCFastOpen
void f_801849D4(Ctx* __restrict c) {
  trace_call(0x801849D4u);
  cmps(c,0,(int32_t)c->r[4],0); // 801849D4
  c->r[6]=R32(c->r[3]+0x00000004u); // 801849D8
  if (crb(c,0)) { goto L_801849FC; } // 801849DC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801849E0
  cmpu(c,0,c->r[4],c->r[0]); // 801849E4
  if (!crb(c,0)) { goto L_801849FC; } // 801849E8
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801849EC
  c->r[0]=R32(c->r[6]+c->r[4]); // 801849F0
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801849F4
  if (crb(c,2)) { goto L_80184A04; } // 801849F8
L_801849FC:;
  c->r[3]=0u+0x00000000u; // 801849FC
  return; // 80184A00
L_80184A04:;
  W32(c->r[5]+0x00000000u,c->r[3]); // 80184A04
  c->r[4]=c->r[6]+c->r[4]; // 80184A08
  c->r[3]=0u+0x00000001u; // 80184A0C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80184A10
  W32(c->r[5]+0x00000004u,c->r[0]); // 80184A14
  c->r[0]=R32(c->r[4]+0x00000008u); // 80184A18
  W32(c->r[5]+0x00000008u,c->r[0]); // 80184A1C
  return; // 80184A20
}

// ARCConvertPathToEntrynum
void f_80184A24(Ctx* __restrict c) {
  trace_call(0x80184A24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80184A24
  c->r[5]=0u+0x802F0000u; // 80184A28
  c->r[5]=c->r[5]+0x00002098u; // 80184A2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80184A30
  W32(c->r[1]+0x00000008u,c->r[30]); // 80184A34
  c->r[8]=R32(c->r[3]+0x00000018u); // 80184A38
  c->r[9]=R32(c->r[3]+0x00000004u); // 80184A3C
  c->r[6]=R32(c->r[5]+0x00000038u); // 80184A40
L_80184A44:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 80184A44
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80184A48
  if (!crb(c,2)) { goto L_80184A58; } // 80184A4C
  c->r[3]=c->r[8]|c->r[8]; // 80184A50
  goto L_80184C78; // 80184A54
L_80184A58:;
  cmps(c,0,(int32_t)c->r[0],47); // 80184A58
  if (!crb(c,2)) { goto L_80184A6C; } // 80184A5C
  c->r[8]=0u+0x00000000u; // 80184A60
  c->r[4]=c->r[4]+0x00000001u; // 80184A64
  IRQCHK(c); goto L_80184A44; // 80184A68
L_80184A6C:;
  cmps(c,0,(int32_t)c->r[0],46); // 80184A6C
  if (!crb(c,2)) { goto L_80184AE0; } // 80184A70
  c->r[0]=R8(c->r[4]+0x00000001u); // 80184A74
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80184A78
  cmps(c,0,(int32_t)c->r[0],46); // 80184A7C
  if (!crb(c,2)) { goto L_80184AC0; } // 80184A80
  c->r[0]=R8(c->r[4]+0x00000002u); // 80184A84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80184A88
  cmps(c,0,(int32_t)c->r[0],47); // 80184A8C
  if (!crb(c,2)) { goto L_80184AA8; } // 80184A90
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 80184A94
  c->r[4]=c->r[4]+0x00000003u; // 80184A98
  c->r[5]=c->r[9]+c->r[0]; // 80184A9C
  c->r[8]=R32(c->r[5]+0x00000004u); // 80184AA0
  IRQCHK(c); goto L_80184A44; // 80184AA4
L_80184AA8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80184AA8
  if (!crb(c,2)) { goto L_80184AE0; } // 80184AAC
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 80184AB0
  c->r[3]=c->r[9]+c->r[0]; // 80184AB4
  c->r[3]=R32(c->r[3]+0x00000004u); // 80184AB8
  goto L_80184C78; // 80184ABC
L_80184AC0:;
  cmps(c,0,(int32_t)c->r[0],47); // 80184AC0
  if (!crb(c,2)) { goto L_80184AD0; } // 80184AC4
  c->r[4]=c->r[4]+0x00000002u; // 80184AC8
  IRQCHK(c); goto L_80184A44; // 80184ACC
L_80184AD0:;
  cmps(c,0,(int32_t)c->r[0],0); // 80184AD0
  if (!crb(c,2)) { goto L_80184AE0; } // 80184AD4
  c->r[3]=c->r[8]|c->r[8]; // 80184AD8
  goto L_80184C78; // 80184ADC
L_80184AE0:;
  c->r[7]=c->r[4]|c->r[4]; // 80184AE0
  goto L_80184AEC; // 80184AE4
L_80184AE8:;
  c->r[7]=c->r[7]+0x00000001u; // 80184AE8
L_80184AEC:;
  c->r[5]=R8(c->r[7]+0x00000000u); // 80184AEC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 80184AF0
  if (crb(c,2)) { goto L_80184B00; } // 80184AF4
  cmps(c,0,(int32_t)c->r[0],47); // 80184AF8
  if (!crb(c,2)) { IRQCHK(c); goto L_80184AE8; } // 80184AFC
L_80184B00:;
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 80184B00
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80184B04
  c->r[7]=c->r[7]-c->r[4]; // 80184B08
  c->r[10]=0u-c->r[11]; // 80184B0C
  c->r[5]=c->r[9]+c->r[0]; // 80184B10
  c->r[8]=c->r[8]+0x00000001u; // 80184B14
  c->r[0]=c->r[10]|c->r[11]; // 80184B18
  c->r[5]=R32(c->r[5]+0x00000008u); // 80184B1C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80184B20
  goto L_80184C4C; // 80184B24
L_80184B28:;
  c->r[10]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 80184B28
  c->r[12]=c->r[9]+c->r[10]; // 80184B2C
L_80184B30:;
  c->r[31]=R32(c->r[12]+0x00000000u); // 80184B30
  c->r[10]=rotl(c->r[31],0)&0xFF000000u; cr0(c,c->r[10]); // 80184B34
  if (!crb(c,2)) { goto L_80184B44; } // 80184B38
  cmps(c,0,(int32_t)c->r[0],1); // 80184B3C
  if (crb(c,2)) { goto L_80184C2C; } // 80184B40
L_80184B44:;
  c->r[11]=R32(c->r[3]+0x00000010u); // 80184B44
  c->r[10]=rotl(c->r[31],0)&0x00FFFFFFu; // 80184B48
  c->r[30]=c->r[11]+c->r[10]; // 80184B4C
  c->r[10]=R8(c->r[11]+c->r[10]); // 80184B50
  cmps(c,0,(int32_t)c->r[10],46); // 80184B54
  if (!crb(c,2)) { goto L_80184B74; } // 80184B58
  c->r[10]=R8(c->r[30]+0x00000001u); // 80184B5C
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; cr0(c,c->r[10]); // 80184B60
  if (!crb(c,2)) { goto L_80184B74; } // 80184B64
  c->r[12]=c->r[12]+0x0000000Cu; // 80184B68
  c->r[8]=c->r[8]+0x00000001u; // 80184B6C
  IRQCHK(c); goto L_80184B30; // 80184B70
L_80184B74:;
  c->r[12]=c->r[4]|c->r[4]; // 80184B74
  goto L_80184BF4; // 80184B78
L_80184B7C:;
  c->r[11]=R8(c->r[30]+0x00000000u); // 80184B7C
  c->r[10]=0u+0x00000000u; // 80184B80
  c->r[30]=c->r[30]+0x00000001u; // 80184B84
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[11]; cr0(c,c->r[31]); // 80184B88
  if (crb(c,0)) { goto L_80184B98; } // 80184B8C
  cmps(c,0,(int32_t)c->r[31],256); // 80184B90
  if (crb(c,0)) { goto L_80184B9C; } // 80184B94
L_80184B98:;
  c->r[10]=0u+0x00000001u; // 80184B98
L_80184B9C:;
  cmps(c,0,(int32_t)c->r[10],0); // 80184B9C
  if (crb(c,2)) { goto L_80184BA8; } // 80184BA0
  goto L_80184BB0; // 80184BA4
L_80184BA8:;
  c->r[10]=R32(c->r[6]+0x00000010u); // 80184BA8
  c->r[31]=R8(c->r[10]+c->r[31]); // 80184BAC
L_80184BB0:;
  c->r[11]=R8(c->r[12]+0x00000000u); // 80184BB0
  c->r[10]=0u+0x00000000u; // 80184BB4
  c->r[12]=c->r[12]+0x00000001u; // 80184BB8
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; cr0(c,c->r[11]); // 80184BBC
  if (crb(c,0)) { goto L_80184BCC; } // 80184BC0
  cmps(c,0,(int32_t)c->r[11],256); // 80184BC4
  if (crb(c,0)) { goto L_80184BD0; } // 80184BC8
L_80184BCC:;
  c->r[10]=0u+0x00000001u; // 80184BCC
L_80184BD0:;
  cmps(c,0,(int32_t)c->r[10],0); // 80184BD0
  if (crb(c,2)) { goto L_80184BDC; } // 80184BD4
  goto L_80184BE4; // 80184BD8
L_80184BDC:;
  c->r[10]=R32(c->r[6]+0x00000010u); // 80184BDC
  c->r[11]=R8(c->r[10]+c->r[11]); // 80184BE0
L_80184BE4:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[31]); // 80184BE4
  if (crb(c,2)) { goto L_80184BF4; } // 80184BE8
  c->r[10]=0u+0x00000000u; // 80184BEC
  goto L_80184C24; // 80184BF0
L_80184BF4:;
  c->r[10]=R8(c->r[30]+0x00000000u); // 80184BF4
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; cr0(c,c->r[10]); // 80184BF8
  if (!crb(c,2)) { IRQCHK(c); goto L_80184B7C; } // 80184BFC
  c->r[10]=R8(c->r[12]+0x00000000u); // 80184C00
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 80184C04
  cmps(c,0,(int32_t)c->r[10],47); // 80184C08
  if (crb(c,2)) { goto L_80184C18; } // 80184C0C
  cmps(c,0,(int32_t)c->r[10],0); // 80184C10
  if (!crb(c,2)) { goto L_80184C20; } // 80184C14
L_80184C18:;
  c->r[10]=0u+0x00000001u; // 80184C18
  goto L_80184C24; // 80184C1C
L_80184C20:;
  c->r[10]=0u+0x00000000u; // 80184C20
L_80184C24:;
  cmps(c,0,(int32_t)c->r[10],1); // 80184C24
  if (crb(c,2)) { goto L_80184C5C; } // 80184C28
L_80184C2C:;
  c->r[10]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 80184C2C
  c->r[11]=c->r[9]+c->r[10]; // 80184C30
  c->r[10]=R32(c->r[9]+c->r[10]); // 80184C34
  c->r[10]=rotl(c->r[10],0)&0xFF000000u; cr0(c,c->r[10]); // 80184C38
  if (crb(c,2)) { goto L_80184C48; } // 80184C3C
  c->r[8]=R32(c->r[11]+0x00000008u); // 80184C40
  goto L_80184C4C; // 80184C44
L_80184C48:;
  c->r[8]=c->r[8]+0x00000001u; // 80184C48
L_80184C4C:;
  cmpu(c,0,c->r[8],c->r[5]); // 80184C4C
  if (crb(c,0)) { IRQCHK(c); goto L_80184B28; } // 80184C50
  c->r[3]=0u+0xFFFFFFFFu; // 80184C54
  goto L_80184C78; // 80184C58
L_80184C5C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80184C5C
  if (!crb(c,2)) { goto L_80184C6C; } // 80184C60
  c->r[3]=c->r[8]|c->r[8]; // 80184C64
  goto L_80184C78; // 80184C68
L_80184C6C:;
  c->r[4]=c->r[7]+c->r[4]; // 80184C6C
  c->r[4]=c->r[4]+0x00000001u; // 80184C70
  IRQCHK(c); goto L_80184A44; // 80184C74
L_80184C78:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80184C78
  c->r[30]=R32(c->r[1]+0x00000008u); // 80184C7C
  c->r[1]=c->r[1]+0x00000010u; // 80184C80
  return; // 80184C84
}

// entryToPath
void f_80184C88(Ctx* __restrict c) {
  trace_call(0x80184C88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80184C88
  c->r[0]=c->lr; // 80184C8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80184C90
  c->r[11]=c->r[1]+0x00000020u; // 80184C94
  c->lr=0x80184C9Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80184C98
  cmps(c,0,(int32_t)c->r[4],0); // 80184C9C
  c->r[7]=R32(c->r[3]+0x00000004u); // 80184CA0
  c->r[28]=c->r[5]|c->r[5]; // 80184CA4
  c->r[29]=c->r[6]|c->r[6]; // 80184CA8
  if (!crb(c,2)) { goto L_80184CB8; } // 80184CAC
  c->r[3]=0u+0x00000000u; // 80184CB0
  goto L_80184E38; // 80184CB4
L_80184CB8:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80184CB8
  c->r[8]=R32(c->r[3]+0x00000010u); // 80184CBC
  c->r[4]=c->r[7]+c->r[0]; // 80184CC0
  c->r[0]=R32(c->r[7]+c->r[0]); // 80184CC4
  c->r[4]=R32(c->r[4]+0x00000004u); // 80184CC8
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 80184CCC
  cmps(c,0,(int32_t)c->r[4],0); // 80184CD0
  c->r[30]=c->r[8]+c->r[0]; // 80184CD4
  if (!crb(c,2)) { goto L_80184CE4; } // 80184CD8
  c->r[4]=0u+0x00000000u; // 80184CDC
  goto L_80184DDC; // 80184CE0
L_80184CE4:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80184CE4
  c->r[4]=c->r[7]+c->r[0]; // 80184CE8
  c->r[0]=R32(c->r[7]+c->r[0]); // 80184CEC
  c->r[4]=R32(c->r[4]+0x00000004u); // 80184CF0
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 80184CF4
  cmps(c,0,(int32_t)c->r[4],0); // 80184CF8
  c->r[31]=c->r[8]+c->r[0]; // 80184CFC
  if (!crb(c,2)) { goto L_80184D0C; } // 80184D00
  c->r[4]=0u+0x00000000u; // 80184D04
  goto L_80184D84; // 80184D08
L_80184D0C:;
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80184D0C
  c->r[0]=R32(c->r[7]+c->r[4]); // 80184D10
  c->r[4]=c->r[7]+c->r[4]; // 80184D14
  c->r[4]=R32(c->r[4]+0x00000004u); // 80184D18
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 80184D1C
  c->r[27]=c->r[8]+c->r[0]; // 80184D20
  c->lr=0x80184D28u; f_80184C88(c); // 80184D24
  cmpu(c,0,c->r[3],c->r[29]); // 80184D28
  c->r[4]=c->r[3]|c->r[3]; // 80184D2C
  if (!crb(c,2)) { goto L_80184D38; } // 80184D30
  goto L_80184D84; // 80184D34
L_80184D38:;
  c->r[4]=c->r[3]+0x00000001u; // 80184D38
  c->r[0]=0u+0x0000002Fu; // 80184D3C
  c->r[6]=c->r[29]-c->r[4]; // 80184D40
  W8(c->r[28]+c->r[3],c->r[0]); // 80184D44
  c->r[3]=c->r[28]+c->r[4]; // 80184D48
  c->r[5]=c->r[6]|c->r[6]; // 80184D4C
  goto L_80184D68; // 80184D50
L_80184D54:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 80184D54
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80184D58
  c->r[27]=c->r[27]+0x00000001u; // 80184D5C
  W8(c->r[3]+0x00000000u,c->r[0]); // 80184D60
  c->r[3]=c->r[3]+0x00000001u; // 80184D64
L_80184D68:;
  cmps(c,0,(int32_t)c->r[5],0); // 80184D68
  if (crb(c,2)) { goto L_80184D7C; } // 80184D6C
  c->r[0]=R8(c->r[27]+0x00000000u); // 80184D70
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80184D74
  if (!crb(c,2)) { IRQCHK(c); goto L_80184D54; } // 80184D78
L_80184D7C:;
  c->r[0]=c->r[6]-c->r[5]; // 80184D7C
  c->r[4]=c->r[4]+c->r[0]; // 80184D80
L_80184D84:;
  cmpu(c,0,c->r[4],c->r[29]); // 80184D84
  if (!crb(c,2)) { goto L_80184D90; } // 80184D88
  goto L_80184DDC; // 80184D8C
L_80184D90:;
  c->r[3]=c->r[4]+0x00000001u; // 80184D90
  c->r[0]=0u+0x0000002Fu; // 80184D94
  c->r[6]=c->r[29]-c->r[3]; // 80184D98
  W8(c->r[28]+c->r[4],c->r[0]); // 80184D9C
  c->r[4]=c->r[28]+c->r[3]; // 80184DA0
  c->r[5]=c->r[6]|c->r[6]; // 80184DA4
  goto L_80184DC0; // 80184DA8
L_80184DAC:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80184DAC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80184DB0
  c->r[31]=c->r[31]+0x00000001u; // 80184DB4
  W8(c->r[4]+0x00000000u,c->r[0]); // 80184DB8
  c->r[4]=c->r[4]+0x00000001u; // 80184DBC
L_80184DC0:;
  cmps(c,0,(int32_t)c->r[5],0); // 80184DC0
  if (crb(c,2)) { goto L_80184DD4; } // 80184DC4
  c->r[0]=R8(c->r[31]+0x00000000u); // 80184DC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80184DCC
  if (!crb(c,2)) { IRQCHK(c); goto L_80184DAC; } // 80184DD0
L_80184DD4:;
  c->r[0]=c->r[6]-c->r[5]; // 80184DD4
  c->r[4]=c->r[3]+c->r[0]; // 80184DD8
L_80184DDC:;
  cmpu(c,0,c->r[4],c->r[29]); // 80184DDC
  if (!crb(c,2)) { goto L_80184DEC; } // 80184DE0
  c->r[3]=c->r[4]|c->r[4]; // 80184DE4
  goto L_80184E38; // 80184DE8
L_80184DEC:;
  c->r[6]=c->r[4]+0x00000001u; // 80184DEC
  c->r[0]=0u+0x0000002Fu; // 80184DF0
  c->r[5]=c->r[29]-c->r[6]; // 80184DF4
  W8(c->r[28]+c->r[4],c->r[0]); // 80184DF8
  c->r[3]=c->r[28]+c->r[6]; // 80184DFC
  c->r[4]=c->r[5]|c->r[5]; // 80184E00
  goto L_80184E1C; // 80184E04
L_80184E08:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 80184E08
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80184E0C
  c->r[30]=c->r[30]+0x00000001u; // 80184E10
  W8(c->r[3]+0x00000000u,c->r[0]); // 80184E14
  c->r[3]=c->r[3]+0x00000001u; // 80184E18
L_80184E1C:;
  cmps(c,0,(int32_t)c->r[4],0); // 80184E1C
  if (crb(c,2)) { goto L_80184E30; } // 80184E20
  c->r[0]=R8(c->r[30]+0x00000000u); // 80184E24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80184E28
  if (!crb(c,2)) { IRQCHK(c); goto L_80184E08; } // 80184E2C
L_80184E30:;
  c->r[0]=c->r[5]-c->r[4]; // 80184E30
  c->r[3]=c->r[6]+c->r[0]; // 80184E34
L_80184E38:;
  c->r[11]=c->r[1]+0x00000020u; // 80184E38
  c->lr=0x80184E40u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80184E3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80184E40
  c->lr=c->r[0]; // 80184E44
  c->r[1]=c->r[1]+0x00000020u; // 80184E48
  return; // 80184E4C
}

// ARCGetStartAddrInMem
void f_80184E50(Ctx* __restrict c) {
  trace_call(0x80184E50u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 80184E50
  c->r[0]=R32(c->r[3]+0x00000004u); // 80184E54
  c->r[3]=R32(c->r[4]+0x00000000u); // 80184E58
  c->r[3]=c->r[3]+c->r[0]; // 80184E5C
  return; // 80184E60
}

// ARCGetStartOffset
void f_80184E64(Ctx* __restrict c) {
  trace_call(0x80184E64u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 80184E64
  return; // 80184E68
}

// ARCGetLength
void f_80184E6C(Ctx* __restrict c) {
  trace_call(0x80184E6Cu);
  c->r[3]=0u+0x00000001u; // 80184E6C
  return; // 80184E70
}

// fn_80184E74
void f_80184E74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80184E74
  c->r[0]=c->lr; // 80184E78
  W32(c->r[1]+0x00000014u,c->r[0]); // 80184E7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80184E80
  c->r[31]=c->r[3]|c->r[3]; // 80184E84
  c->lr=0x80184E8Cu; f_80184A24(c); // 80184E88
  cmps(c,0,(int32_t)c->r[3],0); // 80184E8C
  c->r[4]=R32(c->r[31]+0x00000004u); // 80184E90
  if (crb(c,0)) { goto L_80184EA8; } // 80184E94
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80184E98
  c->r[0]=R32(c->r[4]+c->r[0]); // 80184E9C
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 80184EA0
  if (!crb(c,2)) { goto L_80184EB0; } // 80184EA4
L_80184EA8:;
  c->r[3]=0u+0x00000000u; // 80184EA8
  goto L_80184EB8; // 80184EAC
L_80184EB0:;
  W32(c->r[31]+0x00000018u,c->r[3]); // 80184EB0
  c->r[3]=0u+0x00000001u; // 80184EB4
L_80184EB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80184EB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80184EBC
  c->lr=c->r[0]; // 80184EC0
  c->r[1]=c->r[1]+0x00000010u; // 80184EC4
  return; // 80184EC8
}

// fn_80184ECC
void f_80184ECC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80184ECC
  c->r[0]=c->lr; // 80184ED0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80184ED4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80184ED8
  c->r[31]=c->r[5]|c->r[5]; // 80184EDC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80184EE0
  c->r[30]=c->r[3]|c->r[3]; // 80184EE4
  c->lr=0x80184EECu; f_80184A24(c); // 80184EE8
  cmps(c,0,(int32_t)c->r[3],0); // 80184EEC
  c->r[5]=R32(c->r[30]+0x00000004u); // 80184EF0
  if (crb(c,0)) { goto L_80184F08; } // 80184EF4
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80184EF8
  c->r[0]=R32(c->r[5]+c->r[4]); // 80184EFC
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 80184F00
  if (!crb(c,2)) { goto L_80184F10; } // 80184F04
L_80184F08:;
  c->r[3]=0u+0x00000000u; // 80184F08
  goto L_80184F30; // 80184F0C
L_80184F10:;
  c->r[0]=c->r[3]+0x00000001u; // 80184F10
  W32(c->r[31]+0x00000004u,c->r[3]); // 80184F14
  c->r[4]=c->r[5]+c->r[4]; // 80184F18
  c->r[3]=0u+0x00000001u; // 80184F1C
  W32(c->r[31]+0x00000000u,c->r[30]); // 80184F20
  W32(c->r[31]+0x00000008u,c->r[0]); // 80184F24
  c->r[0]=R32(c->r[4]+0x00000008u); // 80184F28
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80184F2C
L_80184F30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80184F30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80184F34
  c->r[30]=R32(c->r[1]+0x00000008u); // 80184F38
  c->lr=c->r[0]; // 80184F3C
  c->r[1]=c->r[1]+0x00000010u; // 80184F40
  return; // 80184F44
}

// fn_80184F48
void f_80184F48(Ctx* __restrict c) {
  c->r[7]=R32(c->r[3]+0x00000008u); // 80184F48
  c->r[9]=R32(c->r[3]+0x00000000u); // 80184F4C
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 80184F50
  c->r[8]=R32(c->r[9]+0x00000004u); // 80184F54
  c->r[6]=c->r[8]+c->r[0]; // 80184F58
L_80184F5C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80184F5C
  cmpu(c,0,c->r[7],c->r[0]); // 80184F60
  if (!crb(c,1)) { goto L_80184F74; } // 80184F64
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80184F68
  cmpu(c,0,c->r[0],c->r[7]); // 80184F6C
  if (crb(c,1)) { goto L_80184F7C; } // 80184F70
L_80184F74:;
  c->r[3]=0u+0x00000000u; // 80184F74
  return; // 80184F78
L_80184F7C:;
  W32(c->r[4]+0x00000000u,c->r[9]); // 80184F7C
  W32(c->r[4]+0x00000004u,c->r[7]); // 80184F80
  c->r[0]=R32(c->r[6]+0x00000000u); // 80184F84
  c->r[5]=rotl(c->r[0],0)&0xFF000000u; // 80184F88
  c->r[0]=0u-c->r[5]; // 80184F8C
  c->r[0]=c->r[0]|c->r[5]; // 80184F90
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80184F94
  W32(c->r[4]+0x00000008u,c->r[0]); // 80184F98
  c->r[0]=R32(c->r[6]+0x00000000u); // 80184F9C
  c->r[5]=R32(c->r[9]+0x00000010u); // 80184FA0
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 80184FA4
  c->r[5]=c->r[5]+c->r[0]; // 80184FA8
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 80184FAC
  c->r[0]=R8(c->r[5]+0x00000000u); // 80184FB0
  cmps(c,0,(int32_t)c->r[0],46); // 80184FB4
  if (!crb(c,2)) { goto L_80184FD4; } // 80184FB8
  c->r[0]=R8(c->r[5]+0x00000001u); // 80184FBC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80184FC0
  if (!crb(c,2)) { goto L_80184FD4; } // 80184FC4
  c->r[6]=c->r[6]+0x0000000Cu; // 80184FC8
  c->r[7]=c->r[7]+0x00000001u; // 80184FCC
  IRQCHK(c); goto L_80184F5C; // 80184FD0
L_80184FD4:;
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 80184FD4
  c->r[0]=R32(c->r[8]+c->r[4]); // 80184FD8
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 80184FDC
  if (crb(c,2)) { goto L_80184FF0; } // 80184FE0
  c->r[4]=c->r[8]+c->r[4]; // 80184FE4
  c->r[0]=R32(c->r[4]+0x00000008u); // 80184FE8
  goto L_80184FF4; // 80184FEC
L_80184FF0:;
  c->r[0]=c->r[7]+0x00000001u; // 80184FF0
L_80184FF4:;
  W32(c->r[3]+0x00000008u,c->r[0]); // 80184FF4
  c->r[3]=0u+0x00000001u; // 80184FF8
  return; // 80184FFC
}

// fn_80185000
void f_80185000(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 80185000
  return; // 80185004
}

// ESP_InitLib
void f_80185008(Ctx* __restrict c) {
  trace_call(0x80185008u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185008
  c->r[0]=c->lr; // 8018500C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80185010
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80185014
  c->r[31]=0u+0x00000000u; // 80185018
  c->r[0]=R32(c->r[13]+0xFFFF92D8u); // 8018501C
  cmps(c,0,(int32_t)c->r[0],0); // 80185020
  if (!crb(c,0)) { goto L_80185044; } // 80185024
  c->r[3]=c->r[13]+0xFFFF92E0u; // 80185028
  c->r[4]=0u+0x00000000u; // 8018502C
  c->lr=0x80185034u; f_80186284(c); // 80185030
  cmps(c,0,(int32_t)c->r[3],0); // 80185034
  W32(c->r[13]+0xFFFF92D8u,c->r[3]); // 80185038
  if (!crb(c,0)) { goto L_80185044; } // 8018503C
  c->r[31]=c->r[3]|c->r[3]; // 80185040
L_80185044:;
  c->r[3]=c->r[31]|c->r[31]; // 80185044
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80185048
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018504C
  c->lr=c->r[0]; // 80185050
  c->r[1]=c->r[1]+0x00000010u; // 80185054
  return; // 80185058
}

// ESP_CloseLib
void f_8018505C(Ctx* __restrict c) {
  trace_call(0x8018505Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018505C
  c->r[0]=c->lr; // 80185060
  c->r[4]=0u+0x00000000u; // 80185064
  W32(c->r[1]+0x00000014u,c->r[0]); // 80185068
  c->r[3]=R32(c->r[13]+0xFFFF92D8u); // 8018506C
  cmps(c,0,(int32_t)c->r[3],0); // 80185070
  if (crb(c,0)) { goto L_80185090; } // 80185074
  c->lr=0x8018507Cu; f_80186464(c); // 80185078
  cmps(c,0,(int32_t)c->r[3],0); // 8018507C
  c->r[4]=c->r[3]|c->r[3]; // 80185080
  if (!crb(c,2)) { goto L_80185090; } // 80185084
  c->r[0]=0u+0xFFFFFFFFu; // 80185088
  W32(c->r[13]+0xFFFF92D8u,c->r[0]); // 8018508C
L_80185090:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80185090
  c->r[3]=c->r[4]|c->r[4]; // 80185094
  c->lr=c->r[0]; // 80185098
  c->r[1]=c->r[1]+0x00000010u; // 8018509C
  return; // 801850A0
}

// fn_801850A4
void f_801850A4(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801850A4
  c->r[12]=c->r[1]|c->r[1]; // 801850A8
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801850AC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801850B0
  c->r[0]=c->lr; // 801850B4
  W32(c->r[12]+0x00000004u,c->r[0]); // 801850B8
  c->r[7]=c->r[1]+0x000000F0u; // 801850BC
  c->r[10]=c->r[1]+0x00000020u; // 801850C0
  c->r[9]=R32(c->r[13]+0xFFFF92D8u); // 801850C4
  cmps(c,0,(int32_t)c->r[9],0); // 801850C8
  if (!crb(c,0)) { goto L_801850D8; } // 801850CC
  c->r[3]=0u+0xFFFFFC07u; // 801850D0
  goto L_80185124; // 801850D4
L_801850D8:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801850D8
  if (crb(c,2)) { goto L_801850E8; } // 801850DC
  c->r[3]=0u+0xFFFFFC07u; // 801850E0
  goto L_80185124; // 801850E4
L_801850E8:;
  c->r[8]=0u+0x00000008u; // 801850E8
  c->r[0]=0u+0x000000D8u; // 801850EC
  W32(c->r[1]+0x00000024u,c->r[4]); // 801850F0
  c->r[4]=0u+0x00000008u; // 801850F4
  c->r[6]=0u+0x00000000u; // 801850F8
  W32(c->r[1]+0x00000020u,c->r[3]); // 801850FC
  c->r[3]=c->r[9]|c->r[9]; // 80185100
  W32(c->r[1]+0x000000F8u,c->r[5]); // 80185104
  c->r[5]=0u+0x00000002u; // 80185108
  W32(c->r[1]+0x000000F0u,c->r[10]); // 8018510C
  W32(c->r[1]+0x000000F4u,c->r[8]); // 80185110
  W32(c->r[1]+0x000000FCu,c->r[0]); // 80185114
  c->lr=0x8018511Cu; f_80187048(c); // 80185118
  c->r[0]=0u+0xFFFFFFFFu; // 8018511C
  W32(c->r[13]+0xFFFF92D8u,c->r[0]); // 80185120
L_80185124:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80185124
  c->r[0]=R32(c->r[10]+0x00000004u); // 80185128
  c->lr=c->r[0]; // 8018512C
  c->r[1]=c->r[10]|c->r[10]; // 80185130
  return; // 80185134
}

// fn_80185138
void f_80185138(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80185138
  c->r[12]=c->r[1]|c->r[1]; // 8018513C
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 80185140
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80185144
  c->r[0]=c->lr; // 80185148
  W32(c->r[12]+0x00000004u,c->r[0]); // 8018514C
  c->r[7]=c->r[1]+0x000000F0u; // 80185150
  c->r[5]=c->r[1]+0x00000020u; // 80185154
  c->r[4]=R32(c->r[13]+0xFFFF92D8u); // 80185158
  cmps(c,0,(int32_t)c->r[4],0); // 8018515C
  if (!crb(c,0)) { goto L_8018516C; } // 80185160
  c->r[3]=0u+0xFFFFFC07u; // 80185164
  goto L_80185190; // 80185168
L_8018516C:;
  c->r[0]=0u+0x00000004u; // 8018516C
  W32(c->r[1]+0x00000020u,c->r[3]); // 80185170
  c->r[3]=c->r[4]|c->r[4]; // 80185174
  c->r[4]=0u+0x00000009u; // 80185178
  W32(c->r[1]+0x000000F0u,c->r[5]); // 8018517C
  c->r[5]=0u+0x00000001u; // 80185180
  c->r[6]=0u+0x00000000u; // 80185184
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80185188
  c->lr=0x80185190u; f_80186F6C(c); // 8018518C
L_80185190:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80185190
  c->r[0]=R32(c->r[10]+0x00000004u); // 80185194
  c->lr=c->r[0]; // 80185198
  c->r[1]=c->r[10]|c->r[10]; // 8018519C
  return; // 801851A0
}

// fn_801851A4
void f_801851A4(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801851A4
  c->r[12]=c->r[1]|c->r[1]; // 801851A8
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801851AC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801851B0
  c->r[0]=c->lr; // 801851B4
  W32(c->r[12]+0x00000004u,c->r[0]); // 801851B8
  c->r[7]=c->r[1]+0x000000F0u; // 801851BC
  c->r[8]=c->r[1]+0x00000020u; // 801851C0
  c->r[6]=R32(c->r[13]+0xFFFF92D8u); // 801851C4
  cmps(c,0,(int32_t)c->r[6],0); // 801851C8
  if (crb(c,0)) { goto L_801851EC; } // 801851CC
  cmps(c,0,(int32_t)c->r[3],0); // 801851D0
  if (crb(c,0)) { goto L_801851EC; } // 801851D4
  c->r[0]=0u+0x00000000u; // 801851D8
  cmpu(c,0,c->r[4],c->r[0]); // 801851DC
  if (crb(c,2)) { goto L_801851EC; } // 801851E0
  cmps(c,0,(int32_t)c->r[5],0); // 801851E4
  if (!crb(c,2)) { goto L_801851F4; } // 801851E8
L_801851EC:;
  c->r[3]=0u+0xFFFFFC07u; // 801851EC
  goto L_80185230; // 801851F0
L_801851F4:;
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801851F4
  if (crb(c,2)) { goto L_80185204; } // 801851F8
  c->r[3]=0u+0xFFFFFC07u; // 801851FC
  goto L_80185230; // 80185200
L_80185204:;
  c->r[0]=0u+0x00000004u; // 80185204
  W32(c->r[1]+0x00000020u,c->r[3]); // 80185208
  c->r[3]=c->r[6]|c->r[6]; // 8018520C
  c->r[6]=0u+0x00000001u; // 80185210
  W32(c->r[1]+0x000000F8u,c->r[4]); // 80185214
  c->r[4]=0u+0x0000000Au; // 80185218
  W32(c->r[1]+0x000000FCu,c->r[5]); // 8018521C
  c->r[5]=0u+0x00000001u; // 80185220
  W32(c->r[1]+0x000000F0u,c->r[8]); // 80185224
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80185228
  c->lr=0x80185230u; f_80186F6C(c); // 8018522C
L_80185230:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80185230
  c->r[0]=R32(c->r[10]+0x00000004u); // 80185234
  c->lr=c->r[0]; // 80185238
  c->r[1]=c->r[10]|c->r[10]; // 8018523C
  return; // 80185240
}

// fn_80185244
void f_80185244(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80185244
  c->r[12]=c->r[1]|c->r[1]; // 80185248
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 8018524C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80185250
  c->r[0]=c->lr; // 80185254
  W32(c->r[12]+0x00000004u,c->r[0]); // 80185258
  c->r[7]=c->r[1]+0x000000F0u; // 8018525C
  c->r[8]=c->r[1]+0x00000020u; // 80185260
  c->r[9]=c->r[1]+0x00000040u; // 80185264
  c->r[6]=R32(c->r[13]+0xFFFF92D8u); // 80185268
  c->r[10]=c->r[1]+0x00000060u; // 8018526C
  cmps(c,0,(int32_t)c->r[6],0); // 80185270
  if (!crb(c,0)) { goto L_80185280; } // 80185274
  c->r[3]=0u+0xFFFFFC07u; // 80185278
  goto L_801852BC; // 8018527C
L_80185280:;
  c->r[0]=0u+0x00000004u; // 80185280
  W32(c->r[1]+0x00000020u,c->r[3]); // 80185284
  c->r[3]=c->r[6]|c->r[6]; // 80185288
  c->r[6]=0u+0x00000000u; // 8018528C
  W32(c->r[1]+0x00000040u,c->r[4]); // 80185290
  c->r[4]=0u+0x00000023u; // 80185294
  W32(c->r[1]+0x00000060u,c->r[5]); // 80185298
  c->r[5]=0u+0x00000003u; // 8018529C
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801852A0
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801852A4
  W32(c->r[1]+0x000000F8u,c->r[9]); // 801852A8
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801852AC
  W32(c->r[1]+0x00000100u,c->r[10]); // 801852B0
  W32(c->r[1]+0x00000104u,c->r[0]); // 801852B4
  c->lr=0x801852BCu; f_80186F6C(c); // 801852B8
L_801852BC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801852BC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801852C0
  c->lr=c->r[0]; // 801852C4
  c->r[1]=c->r[10]|c->r[10]; // 801852C8
  return; // 801852CC
}

// fn_801852D0
void f_801852D0(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801852D0
  c->r[12]=c->r[1]|c->r[1]; // 801852D4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801852D8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801852DC
  c->r[0]=c->lr; // 801852E0
  W32(c->r[12]+0x00000004u,c->r[0]); // 801852E4
  c->r[7]=c->r[1]+0x000000F0u; // 801852E8
  c->r[5]=c->r[1]+0x00000020u; // 801852EC
  c->r[4]=R32(c->r[13]+0xFFFF92D8u); // 801852F0
  cmps(c,0,(int32_t)c->r[4],0); // 801852F4
  if (crb(c,0)) { goto L_80185304; } // 801852F8
  cmps(c,0,(int32_t)c->r[3],0); // 801852FC
  if (!crb(c,0)) { goto L_8018530C; } // 80185300
L_80185304:;
  c->r[3]=0u+0xFFFFFC07u; // 80185304
  goto L_80185330; // 80185308
L_8018530C:;
  c->r[0]=0u+0x00000004u; // 8018530C
  W32(c->r[1]+0x00000020u,c->r[3]); // 80185310
  c->r[3]=c->r[4]|c->r[4]; // 80185314
  c->r[4]=0u+0x0000000Bu; // 80185318
  W32(c->r[1]+0x000000F0u,c->r[5]); // 8018531C
  c->r[5]=0u+0x00000001u; // 80185320
  c->r[6]=0u+0x00000000u; // 80185324
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80185328
  c->lr=0x80185330u; f_80186F6C(c); // 8018532C
L_80185330:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80185330
  c->r[0]=R32(c->r[10]+0x00000004u); // 80185334
  c->lr=c->r[0]; // 80185338
  c->r[1]=c->r[10]|c->r[10]; // 8018533C
  return; // 80185340
}

// ESP_GetTicketViews
void f_80185344(Ctx* __restrict c) {
  trace_call(0x80185344u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80185344
  c->r[12]=c->r[1]|c->r[1]; // 80185348
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 8018534C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80185350
  c->r[0]=c->lr; // 80185354
  W32(c->r[12]+0x00000004u,c->r[0]); // 80185358
  c->r[7]=c->r[1]+0x000000F0u; // 8018535C
  c->r[11]=c->r[1]+0x00000020u; // 80185360
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80185364
  c->r[31]=c->r[6]|c->r[6]; // 80185368
  c->r[12]=c->r[1]+0x00000040u; // 8018536C
  c->r[10]=R32(c->r[13]+0xFFFF92D8u); // 80185370
  cmps(c,0,(int32_t)c->r[10],0); // 80185374
  if (crb(c,0)) { goto L_80185388; } // 80185378
  c->r[8]=0u+0x00000000u; // 8018537C
  cmpu(c,0,c->r[6],c->r[8]); // 80185380
  if (!crb(c,2)) { goto L_80185390; } // 80185384
L_80185388:;
  c->r[3]=0u+0xFFFFFC07u; // 80185388
  goto L_80185444; // 8018538C
L_80185390:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 80185390
  if (crb(c,2)) { goto L_801853A0; } // 80185394
  c->r[3]=0u+0xFFFFFC07u; // 80185398
  goto L_80185444; // 8018539C
L_801853A0:;
  cmpu(c,0,c->r[5],c->r[8]); // 801853A0
  W32(c->r[1]+0x00000024u,c->r[4]); // 801853A4
  W32(c->r[1]+0x00000020u,c->r[3]); // 801853A8
  if (!crb(c,2)) { goto L_801853F0; } // 801853AC
  c->r[5]=0u+0x00000008u; // 801853B0
  c->r[0]=0u+0x00000004u; // 801853B4
  W32(c->r[1]+0x000000F4u,c->r[5]); // 801853B8
  c->r[3]=c->r[10]|c->r[10]; // 801853BC
  c->r[4]=0u+0x00000012u; // 801853C0
  c->r[5]=0u+0x00000001u; // 801853C4
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801853C8
  c->r[6]=0u+0x00000001u; // 801853CC
  W32(c->r[1]+0x000000F8u,c->r[12]); // 801853D0
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801853D4
  c->lr=0x801853DCu; f_80186F6C(c); // 801853D8
  cmps(c,0,(int32_t)c->r[3],0); // 801853DC
  if (!crb(c,2)) { goto L_80185444; } // 801853E0
  c->r[0]=R32(c->r[1]+0x00000040u); // 801853E4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801853E8
  goto L_80185444; // 801853EC
L_801853F0:;
  c->r[9]=R32(c->r[6]+0x00000000u); // 801853F0
  cmps(c,0,(int32_t)c->r[9],0); // 801853F4
  if (!crb(c,2)) { goto L_80185404; } // 801853F8
  c->r[3]=0u+0xFFFFFC07u; // 801853FC
  goto L_80185444; // 80185400
L_80185404:;
  c->r[8]=0u+0x00000008u; // 80185404
  c->r[0]=0u+0x00000004u; // 80185408
  W32(c->r[1]+0x00000100u,c->r[5]); // 8018540C
  c->r[3]=c->r[10]|c->r[10]; // 80185410
  c->r[4]=0u+0x00000013u; // 80185414
  c->r[5]=0u+0x00000002u; // 80185418
  W32(c->r[1]+0x00000040u,c->r[9]); // 8018541C
  W32(c->r[1]+0x000000F0u,c->r[11]); // 80185420
  W32(c->r[1]+0x000000F4u,c->r[8]); // 80185424
  W32(c->r[1]+0x000000F8u,c->r[12]); // 80185428
  W32(c->r[1]+0x000000FCu,c->r[0]); // 8018542C
  c->r[0]=R32(c->r[6]+0x00000000u); // 80185430
  c->r[6]=0u+0x00000001u; // 80185434
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 80185438
  W32(c->r[1]+0x00000104u,c->r[0]); // 8018543C
  c->lr=0x80185444u; f_80186F6C(c); // 80185440
L_80185444:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80185444
  c->r[0]=R32(c->r[10]+0x00000004u); // 80185448
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8018544C
  c->lr=c->r[0]; // 80185450
  c->r[1]=c->r[10]|c->r[10]; // 80185454
  return; // 80185458
}

// ESP_DiGetTicketView
void f_8018545C(Ctx* __restrict c) {
  trace_call(0x8018545Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8018545C
  c->r[12]=c->r[1]|c->r[1]; // 80185460
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 80185464
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80185468
  c->r[0]=c->lr; // 8018546C
  W32(c->r[12]+0x00000004u,c->r[0]); // 80185470
  c->r[7]=c->r[1]+0x000000F0u; // 80185474
  c->r[0]=R32(c->r[13]+0xFFFF92D8u); // 80185478
  cmps(c,0,(int32_t)c->r[0],0); // 8018547C
  if (crb(c,0)) { goto L_80185490; } // 80185480
  c->r[5]=0u+0x00000000u; // 80185484
  cmpu(c,0,c->r[4],c->r[5]); // 80185488
  if (!crb(c,2)) { goto L_80185498; } // 8018548C
L_80185490:;
  c->r[3]=0u+0xFFFFFC07u; // 80185490
  goto L_801854EC; // 80185494
L_80185498:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 80185498
  if (!crb(c,2)) { goto L_801854A8; } // 8018549C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801854A0
  if (crb(c,2)) { goto L_801854B0; } // 801854A4
L_801854A8:;
  c->r[3]=0u+0xFFFFFC07u; // 801854A8
  goto L_801854EC; // 801854AC
L_801854B0:;
  cmpu(c,0,c->r[3],c->r[5]); // 801854B0
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801854B4
  if (!crb(c,2)) { goto L_801854C4; } // 801854B8
  W32(c->r[1]+0x000000F4u,c->r[5]); // 801854BC
  goto L_801854CC; // 801854C0
L_801854C4:;
  c->r[0]=0u+0x000002A4u; // 801854C4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801854C8
L_801854CC:;
  c->r[0]=0u+0x000000D8u; // 801854CC
  W32(c->r[1]+0x000000F8u,c->r[4]); // 801854D0
  c->r[3]=R32(c->r[13]+0xFFFF92D8u); // 801854D4
  c->r[4]=0u+0x0000001Bu; // 801854D8
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801854DC
  c->r[5]=0u+0x00000001u; // 801854E0
  c->r[6]=0u+0x00000001u; // 801854E4
  c->lr=0x801854ECu; f_80186F6C(c); // 801854E8
L_801854EC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801854EC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801854F0
  c->lr=c->r[0]; // 801854F4
  c->r[1]=c->r[10]|c->r[10]; // 801854F8
  return; // 801854FC
}

// ESP_DiGetTmd
void f_80185500(Ctx* __restrict c) {
  trace_call(0x80185500u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80185500
  c->r[12]=c->r[1]|c->r[1]; // 80185504
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 80185508
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8018550C
  c->r[0]=c->lr; // 80185510
  W32(c->r[12]+0x00000004u,c->r[0]); // 80185514
  c->r[7]=c->r[1]+0x000000F0u; // 80185518
  c->r[8]=c->r[1]+0x00000020u; // 8018551C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80185520
  c->r[31]=c->r[4]|c->r[4]; // 80185524
  c->r[6]=R32(c->r[13]+0xFFFF92D8u); // 80185528
  cmps(c,0,(int32_t)c->r[6],0); // 8018552C
  if (crb(c,0)) { goto L_80185540; } // 80185530
  c->r[5]=0u+0x00000000u; // 80185534
  cmpu(c,0,c->r[4],c->r[5]); // 80185538
  if (!crb(c,2)) { goto L_80185548; } // 8018553C
L_80185540:;
  c->r[3]=0u+0xFFFFFC07u; // 80185540
  goto L_801855D8; // 80185544
L_80185548:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 80185548
  if (crb(c,2)) { goto L_80185558; } // 8018554C
  c->r[3]=0u+0xFFFFFC07u; // 80185550
  goto L_801855D8; // 80185554
L_80185558:;
  cmpu(c,0,c->r[3],c->r[5]); // 80185558
  if (!crb(c,2)) { goto L_80185594; } // 8018555C
  c->r[0]=0u+0x00000004u; // 80185560
  c->r[3]=c->r[6]|c->r[6]; // 80185564
  W32(c->r[1]+0x000000F0u,c->r[8]); // 80185568
  c->r[4]=0u+0x00000039u; // 8018556C
  c->r[5]=0u+0x00000000u; // 80185570
  c->r[6]=0u+0x00000001u; // 80185574
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80185578
  c->lr=0x80185580u; f_80186F6C(c); // 8018557C
  cmps(c,0,(int32_t)c->r[3],0); // 80185580
  if (!crb(c,2)) { goto L_801855D8; } // 80185584
  c->r[0]=R32(c->r[1]+0x00000020u); // 80185588
  W32(c->r[31]+0x00000000u,c->r[0]); // 8018558C
  goto L_801855D8; // 80185590
L_80185594:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 80185594
  cmps(c,0,(int32_t)c->r[5],0); // 80185598
  if (!crb(c,2)) { goto L_801855A8; } // 8018559C
  c->r[3]=0u+0xFFFFFC07u; // 801855A0
  goto L_801855D8; // 801855A4
L_801855A8:;
  c->r[0]=0u+0x00000004u; // 801855A8
  W32(c->r[1]+0x000000F8u,c->r[3]); // 801855AC
  c->r[3]=c->r[6]|c->r[6]; // 801855B0
  c->r[6]=0u+0x00000001u; // 801855B4
  W32(c->r[1]+0x00000020u,c->r[5]); // 801855B8
  c->r[5]=0u+0x00000001u; // 801855BC
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801855C0
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801855C4
  c->r[0]=R32(c->r[4]+0x00000000u); // 801855C8
  c->r[4]=0u+0x0000003Au; // 801855CC
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801855D0
  c->lr=0x801855D8u; f_80186F6C(c); // 801855D4
L_801855D8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801855D8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801855DC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801855E0
  c->lr=c->r[0]; // 801855E4
  c->r[1]=c->r[10]|c->r[10]; // 801855E8
  return; // 801855EC
}

// ESP_GetTmdView
void f_801855F0(Ctx* __restrict c) {
  trace_call(0x801855F0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801855F0
  c->r[12]=c->r[1]|c->r[1]; // 801855F4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801855F8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801855FC
  c->r[0]=c->lr; // 80185600
  W32(c->r[12]+0x00000004u,c->r[0]); // 80185604
  c->r[7]=c->r[1]+0x000000F0u; // 80185608
  c->r[11]=c->r[1]+0x00000020u; // 8018560C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80185610
  c->r[31]=c->r[6]|c->r[6]; // 80185614
  c->r[12]=c->r[1]+0x00000040u; // 80185618
  c->r[10]=R32(c->r[13]+0xFFFF92D8u); // 8018561C
  cmps(c,0,(int32_t)c->r[10],0); // 80185620
  if (crb(c,0)) { goto L_80185634; } // 80185624
  c->r[8]=0u+0x00000000u; // 80185628
  cmpu(c,0,c->r[6],c->r[8]); // 8018562C
  if (!crb(c,2)) { goto L_8018563C; } // 80185630
L_80185634:;
  c->r[3]=0u+0xFFFFFC07u; // 80185634
  goto L_801856EC; // 80185638
L_8018563C:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 8018563C
  if (crb(c,2)) { goto L_8018564C; } // 80185640
  c->r[3]=0u+0xFFFFFC07u; // 80185644
  goto L_801856EC; // 80185648
L_8018564C:;
  cmpu(c,0,c->r[5],c->r[8]); // 8018564C
  W32(c->r[1]+0x00000024u,c->r[4]); // 80185650
  W32(c->r[1]+0x00000020u,c->r[3]); // 80185654
  if (!crb(c,2)) { goto L_8018569C; } // 80185658
  c->r[5]=0u+0x00000008u; // 8018565C
  c->r[0]=0u+0x00000004u; // 80185660
  W32(c->r[1]+0x000000F4u,c->r[5]); // 80185664
  c->r[3]=c->r[10]|c->r[10]; // 80185668
  c->r[4]=0u+0x00000014u; // 8018566C
  c->r[5]=0u+0x00000001u; // 80185670
  W32(c->r[1]+0x000000F0u,c->r[11]); // 80185674
  c->r[6]=0u+0x00000001u; // 80185678
  W32(c->r[1]+0x000000F8u,c->r[12]); // 8018567C
  W32(c->r[1]+0x000000FCu,c->r[0]); // 80185680
  c->lr=0x80185688u; f_80186F6C(c); // 80185684
  cmps(c,0,(int32_t)c->r[3],0); // 80185688
  if (!crb(c,2)) { goto L_801856EC; } // 8018568C
  c->r[0]=R32(c->r[1]+0x00000040u); // 80185690
  W32(c->r[31]+0x00000000u,c->r[0]); // 80185694
  goto L_801856EC; // 80185698
L_8018569C:;
  c->r[9]=R32(c->r[6]+0x00000000u); // 8018569C
  cmps(c,0,(int32_t)c->r[9],0); // 801856A0
  if (!crb(c,2)) { goto L_801856B0; } // 801856A4
  c->r[3]=0u+0xFFFFFC07u; // 801856A8
  goto L_801856EC; // 801856AC
L_801856B0:;
  c->r[8]=0u+0x00000008u; // 801856B0
  c->r[0]=0u+0x00000004u; // 801856B4
  W32(c->r[1]+0x00000100u,c->r[5]); // 801856B8
  c->r[3]=c->r[10]|c->r[10]; // 801856BC
  c->r[4]=0u+0x00000015u; // 801856C0
  c->r[5]=0u+0x00000002u; // 801856C4
  W32(c->r[1]+0x00000040u,c->r[9]); // 801856C8
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801856CC
  W32(c->r[1]+0x000000F4u,c->r[8]); // 801856D0
  W32(c->r[1]+0x000000F8u,c->r[12]); // 801856D4
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801856D8
  c->r[0]=R32(c->r[6]+0x00000000u); // 801856DC
  c->r[6]=0u+0x00000001u; // 801856E0
  W32(c->r[1]+0x00000104u,c->r[0]); // 801856E4
  c->lr=0x801856ECu; f_80186F6C(c); // 801856E8
L_801856EC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801856EC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801856F0
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801856F4
  c->lr=c->r[0]; // 801856F8
  c->r[1]=c->r[10]|c->r[10]; // 801856FC
  return; // 80185700
}

// ESP_GetDataDir
void f_80185704(Ctx* __restrict c) {
  trace_call(0x80185704u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80185704
  c->r[12]=c->r[1]|c->r[1]; // 80185708
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 8018570C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80185710
  c->r[0]=c->lr; // 80185714
  W32(c->r[12]+0x00000004u,c->r[0]); // 80185718
  c->r[7]=c->r[1]+0x000000F0u; // 8018571C
  c->r[10]=c->r[1]+0x00000020u; // 80185720
  c->r[9]=R32(c->r[13]+0xFFFF92D8u); // 80185724
  cmps(c,0,(int32_t)c->r[9],0); // 80185728
  if (crb(c,0)) { goto L_8018573C; } // 8018572C
  c->r[0]=0u+0x00000000u; // 80185730
  cmpu(c,0,c->r[5],c->r[0]); // 80185734
  if (!crb(c,2)) { goto L_80185744; } // 80185738
L_8018573C:;
  c->r[3]=0u+0xFFFFFC07u; // 8018573C
  goto L_80185788; // 80185740
L_80185744:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 80185744
  if (crb(c,2)) { goto L_80185754; } // 80185748
  c->r[3]=0u+0xFFFFFC07u; // 8018574C
  goto L_80185788; // 80185750
L_80185754:;
  c->r[8]=0u+0x00000008u; // 80185754
  c->r[0]=0u+0x0000001Eu; // 80185758
  W32(c->r[1]+0x00000024u,c->r[4]); // 8018575C
  c->r[4]=0u+0x0000001Du; // 80185760
  c->r[6]=0u+0x00000001u; // 80185764
  W32(c->r[1]+0x00000020u,c->r[3]); // 80185768
  c->r[3]=c->r[9]|c->r[9]; // 8018576C
  W32(c->r[1]+0x000000F8u,c->r[5]); // 80185770
  c->r[5]=0u+0x00000001u; // 80185774
  W32(c->r[1]+0x000000F0u,c->r[10]); // 80185778
  W32(c->r[1]+0x000000F4u,c->r[8]); // 8018577C
  W32(c->r[1]+0x000000FCu,c->r[0]); // 80185780
  c->lr=0x80185788u; f_80186F6C(c); // 80185784
L_80185788:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80185788
  c->r[0]=R32(c->r[10]+0x00000004u); // 8018578C
  c->lr=c->r[0]; // 80185790
  c->r[1]=c->r[10]|c->r[10]; // 80185794
  return; // 80185798
}

// ESP_GetTitleId
void f_8018579C(Ctx* __restrict c) {
  trace_call(0x8018579Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8018579C
  c->r[12]=c->r[1]|c->r[1]; // 801857A0
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801857A4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801857A8
  c->r[0]=c->lr; // 801857AC
  W32(c->r[12]+0x00000004u,c->r[0]); // 801857B0
  c->r[7]=c->r[1]+0x000000F0u; // 801857B4
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801857B8
  c->r[31]=c->r[3]|c->r[3]; // 801857BC
  c->r[4]=R32(c->r[13]+0xFFFF92D8u); // 801857C0
  cmps(c,0,(int32_t)c->r[4],0); // 801857C4
  if (crb(c,0)) { goto L_801857D8; } // 801857C8
  c->r[0]=0u+0x00000000u; // 801857CC
  cmpu(c,0,c->r[3],c->r[0]); // 801857D0
  if (!crb(c,2)) { goto L_801857E0; } // 801857D4
L_801857D8:;
  c->r[3]=0u+0xFFFFFC07u; // 801857D8
  goto L_8018581C; // 801857DC
L_801857E0:;
  c->r[3]=c->r[1]+0x00000020u; // 801857E0
  c->r[0]=0u+0x00000008u; // 801857E4
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801857E8
  c->r[3]=c->r[4]|c->r[4]; // 801857EC
  c->r[4]=0u+0x00000020u; // 801857F0
  c->r[5]=0u+0x00000000u; // 801857F4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801857F8
  c->r[6]=0u+0x00000001u; // 801857FC
  c->lr=0x80185804u; f_80186F6C(c); // 80185800
  cmps(c,0,(int32_t)c->r[3],0); // 80185804
  if (!crb(c,2)) { goto L_8018581C; } // 80185808
  c->r[0]=R32(c->r[1]+0x00000020u); // 8018580C
  c->r[4]=R32(c->r[1]+0x00000024u); // 80185810
  W32(c->r[31]+0x00000004u,c->r[4]); // 80185814
  W32(c->r[31]+0x00000000u,c->r[0]); // 80185818
L_8018581C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8018581C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80185820
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80185824
  c->lr=c->r[0]; // 80185828
  c->r[1]=c->r[10]|c->r[10]; // 8018582C
  return; // 80185830
}

// ESP_GetConsumption
void f_80185834(Ctx* __restrict c) {
  trace_call(0x80185834u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80185834
  c->r[12]=c->r[1]|c->r[1]; // 80185838
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 8018583C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80185840
  c->r[0]=c->lr; // 80185844
  W32(c->r[12]+0x00000004u,c->r[0]); // 80185848
  c->r[7]=c->r[1]+0x000000F0u; // 8018584C
  c->r[9]=c->r[1]+0x00000020u; // 80185850
  c->r[10]=c->r[1]+0x00000040u; // 80185854
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80185858
  c->r[31]=c->r[6]|c->r[6]; // 8018585C
  c->r[0]=R32(c->r[13]+0xFFFF92D8u); // 80185860
  cmps(c,0,(int32_t)c->r[0],0); // 80185864
  if (!crb(c,0)) { goto L_80185874; } // 80185868
  c->r[3]=0u+0xFFFFFC07u; // 8018586C
  goto L_801858F0; // 80185870
L_80185874:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 80185874
  if (crb(c,2)) { goto L_80185884; } // 80185878
  c->r[3]=0u+0xFFFFFC07u; // 8018587C
  goto L_801858F0; // 80185880
L_80185884:;
  c->r[0]=0u+0x00000000u; // 80185884
  c->r[8]=0u+0x00000008u; // 80185888
  cmpu(c,0,c->r[5],c->r[0]); // 8018588C
  W32(c->r[1]+0x00000024u,c->r[4]); // 80185890
  W32(c->r[1]+0x00000020u,c->r[3]); // 80185894
  W32(c->r[1]+0x000000F0u,c->r[9]); // 80185898
  W32(c->r[1]+0x000000F4u,c->r[8]); // 8018589C
  if (!crb(c,2)) { goto L_801858B0; } // 801858A0
  W32(c->r[1]+0x000000F8u,c->r[0]); // 801858A4
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801858A8
  goto L_801858C8; // 801858AC
L_801858B0:;
  W32(c->r[1]+0x000000F8u,c->r[5]); // 801858B0
  c->r[0]=R32(c->r[6]+0x00000000u); // 801858B4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801858B8
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801858BC
  c->r[0]=R32(c->r[6]+0x00000000u); // 801858C0
  W32(c->r[1]+0x00000040u,c->r[0]); // 801858C4
L_801858C8:;
  c->r[0]=0u+0x00000004u; // 801858C8
  W32(c->r[1]+0x00000100u,c->r[10]); // 801858CC
  c->r[3]=R32(c->r[13]+0xFFFF92D8u); // 801858D0
  c->r[4]=0u+0x00000016u; // 801858D4
  W32(c->r[1]+0x00000104u,c->r[0]); // 801858D8
  c->r[5]=0u+0x00000001u; // 801858DC
  c->r[6]=0u+0x00000002u; // 801858E0
  c->lr=0x801858E8u; f_80186F6C(c); // 801858E4
  c->r[0]=R32(c->r[1]+0x00000040u); // 801858E8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801858EC
L_801858F0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801858F0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801858F4
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801858F8
  c->lr=c->r[0]; // 801858FC
  c->r[1]=c->r[10]|c->r[10]; // 80185900
  return; // 80185904
}

// IPCInit
void f_80185908(Ctx* __restrict c) {
  trace_call(0x80185908u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185908
  c->r[0]=c->lr; // 8018590C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80185910
  c->r[0]=R8(c->r[13]+0xFFFFAF48u); // 80185914
  cmps(c,0,(int32_t)c->r[0],0); // 80185918
  if (!crb(c,2)) { goto L_80185944; } // 8018591C
  c->lr=0x80185924u; f_80158D78(c); // 80185920
  W32(c->r[13]+0xFFFFAF58u,c->r[3]); // 80185924
  c->lr=0x8018592Cu; f_80158D80(c); // 80185928
  c->r[4]=R32(c->r[13]+0xFFFFAF58u); // 8018592C
  c->r[0]=0u+0x00000001u; // 80185930
  W32(c->r[13]+0xFFFFAF54u,c->r[3]); // 80185934
  W32(c->r[13]+0xFFFFAF50u,c->r[4]); // 80185938
  W32(c->r[13]+0xFFFFAF4Cu,c->r[3]); // 8018593C
  W8(c->r[13]+0xFFFFAF48u,c->r[0]); // 80185940
L_80185944:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80185944
  c->lr=c->r[0]; // 80185948
  c->r[1]=c->r[1]+0x00000010u; // 8018594C
  return; // 80185950
}

// IPCReInit
void f_80185954(Ctx* __restrict c) {
  trace_call(0x80185954u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185954
  c->r[0]=c->lr; // 80185958
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018595C
  c->r[0]=0u+0x00000000u; // 80185960
  W8(c->r[13]+0xFFFFAF48u,c->r[0]); // 80185964
  c->lr=0x8018596Cu; f_80158D78(c); // 80185968
  W32(c->r[13]+0xFFFFAF58u,c->r[3]); // 8018596C
  c->lr=0x80185974u; f_80158D80(c); // 80185970
  c->r[4]=R32(c->r[13]+0xFFFFAF58u); // 80185974
  c->r[0]=0u+0x00000001u; // 80185978
  W32(c->r[13]+0xFFFFAF54u,c->r[3]); // 8018597C
  W32(c->r[13]+0xFFFFAF50u,c->r[4]); // 80185980
  W32(c->r[13]+0xFFFFAF4Cu,c->r[3]); // 80185984
  W8(c->r[13]+0xFFFFAF48u,c->r[0]); // 80185988
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018598C
  c->lr=c->r[0]; // 80185990
  c->r[1]=c->r[1]+0x00000010u; // 80185994
  return; // 80185998
}

// IPCReadReg
void f_8018599C(Ctx* __restrict c) {
  trace_call(0x8018599Cu);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018599C
  c->r[3]=0u+0xCD000000u; // 801859A0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801859A4
  return; // 801859A8
}

// IPCWriteReg
void f_801859AC(Ctx* __restrict c) {
  trace_call(0x801859ACu);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801859AC
  c->r[3]=0u+0xCD000000u; // 801859B0
  W32(c->r[3]+c->r[0],c->r[4]); // 801859B4
  return; // 801859B8
}

// IPCGetBufferHi
void f_801859BC(Ctx* __restrict c) {
  trace_call(0x801859BCu);
  c->r[3]=R32(c->r[13]+0xFFFFAF50u); // 801859BC
  return; // 801859C0
}

// IPCGetBufferLo
void f_801859C4(Ctx* __restrict c) {
  trace_call(0x801859C4u);
  c->r[3]=R32(c->r[13]+0xFFFFAF4Cu); // 801859C4
  return; // 801859C8
}

// IPCSetBufferLo
void f_801859CC(Ctx* __restrict c) {
  trace_call(0x801859CCu);
  W32(c->r[13]+0xFFFFAF4Cu,c->r[3]); // 801859CC
  return; // 801859D0
}

// strnlen
void f_801859D4(Ctx* __restrict c) {
  trace_call(0x801859D4u);
  c->r[5]=c->r[3]|c->r[3]; // 801859D4
  goto L_801859E0; // 801859D8
L_801859DC:;
  c->r[5]=c->r[5]+0x00000001u; // 801859DC
L_801859E0:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801859E0
  cmps(c,0,(int32_t)c->r[0],0); // 801859E4
  if (crb(c,2)) { goto L_801859F8; } // 801859E8
  cmps(c,0,(int32_t)c->r[4],0); // 801859EC
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801859F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801859DC; } // 801859F4
L_801859F8:;
  c->r[3]=c->r[5]-c->r[3]; // 801859F8
  return; // 801859FC
}

// IpcReplyHandler
void f_80185A00(Ctx* __restrict c) {
  trace_call(0x80185A00u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185A00
  c->r[0]=c->lr; // 80185A04
  c->r[3]=0u+0x00000002u; // 80185A08
  W32(c->r[1]+0x000002E4u,c->r[0]); // 80185A0C
  W32(c->r[1]+0x000002DCu,c->r[31]); // 80185A10
  W32(c->r[1]+0x000002D8u,c->r[30]); // 80185A14
  c->r[30]=c->r[4]|c->r[4]; // 80185A18
  W32(c->r[1]+0x000002D4u,c->r[29]); // 80185A1C
  W32(c->r[1]+0x000002D0u,c->r[28]); // 80185A20
  c->lr=0x80185A28u; f_8018599C(c); // 80185A24
  cmps(c,0,(int32_t)c->r[3],0); // 80185A28
  if (crb(c,2)) { goto L_80185C38; } // 80185A2C
  c->r[31]=c->r[3]+0x80000000u; // 80185A30
  c->r[3]=0u+0x00000001u; // 80185A34
  c->lr=0x80185A3Cu; f_8018599C(c); // 80185A38
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 80185A3C
  c->r[3]=0u+0x00000001u; // 80185A40
  c->r[4]=c->r[0]|0x00000004u; // 80185A44
  c->lr=0x80185A4Cu; f_801859AC(c); // 80185A48
  c->r[0]=0u+0x40000000u; // 80185A4C
  c->r[3]=0u+0xCD000000u; // 80185A50
  W32(c->r[3]+0x00000030u,c->r[0]); // 80185A54
  c->r[3]=c->r[31]|c->r[31]; // 80185A58
  c->r[4]=0u+0x00000020u; // 80185A5C
  c->lr=0x80185A64u; f_8014F810(c); // 80185A60
  c->r[0]=R32(c->r[31]+0x00000008u); // 80185A64
  cmps(c,0,(int32_t)c->r[0],6); // 80185A68
  if (crb(c,2)) { goto L_80185AC0; } // 80185A6C
  if (!crb(c,0)) { goto L_80185A80; } // 80185A70
  cmps(c,0,(int32_t)c->r[0],3); // 80185A74
  if (crb(c,2)) { goto L_80185A8C; } // 80185A78
  goto L_80185BBC; // 80185A7C
L_80185A80:;
  cmps(c,0,(int32_t)c->r[0],8); // 80185A80
  if (!crb(c,0)) { goto L_80185BBC; } // 80185A84
  goto L_80185AF8; // 80185A88
L_80185A8C:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80185A8C
  cmps(c,0,(int32_t)c->r[3],0); // 80185A90
  if (crb(c,2)) { goto L_80185AA0; } // 80185A94
  c->r[0]=c->r[3]+0x80000000u; // 80185A98
  goto L_80185AA4; // 80185A9C
L_80185AA0:;
  c->r[0]=0u+0x00000000u; // 80185AA0
L_80185AA4:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80185AA4
  c->r[4]=R32(c->r[31]+0x00000004u); // 80185AA8
  cmps(c,0,(int32_t)c->r[4],0); // 80185AAC
  if (!crb(c,1)) { goto L_80185BBC; } // 80185AB0
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80185AB4
  c->lr=0x80185ABCu; f_8014F810(c); // 80185AB8
  goto L_80185BBC; // 80185ABC
L_80185AC0:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 80185AC0
  cmps(c,0,(int32_t)c->r[3],0); // 80185AC4
  if (crb(c,2)) { goto L_80185AD4; } // 80185AC8
  c->r[0]=c->r[3]+0x80000000u; // 80185ACC
  goto L_80185AD8; // 80185AD0
L_80185AD4:;
  c->r[0]=0u+0x00000000u; // 80185AD4
L_80185AD8:;
  W32(c->r[31]+0x00000018u,c->r[0]); // 80185AD8
  c->r[3]=R32(c->r[31]+0x00000010u); // 80185ADC
  c->r[4]=R32(c->r[31]+0x00000014u); // 80185AE0
  c->lr=0x80185AE8u; f_8014F810(c); // 80185AE4
  c->r[3]=R32(c->r[31]+0x00000018u); // 80185AE8
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 80185AEC
  c->lr=0x80185AF4u; f_8014F810(c); // 80185AF0
  goto L_80185BBC; // 80185AF4
L_80185AF8:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 80185AF8
  cmps(c,0,(int32_t)c->r[3],0); // 80185AFC
  if (crb(c,2)) { goto L_80185B0C; } // 80185B00
  c->r[3]=c->r[3]+0x80000000u; // 80185B04
  goto L_80185B10; // 80185B08
L_80185B0C:;
  c->r[3]=0u+0x00000000u; // 80185B0C
L_80185B10:;
  W32(c->r[31]+0x00000018u,c->r[3]); // 80185B10
  c->r[4]=R32(c->r[31]+0x00000010u); // 80185B14
  c->r[0]=R32(c->r[31]+0x00000014u); // 80185B18
  c->r[0]=c->r[4]+c->r[0]; // 80185B1C
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80185B20
  c->lr=0x80185B28u; f_8014F810(c); // 80185B24
  c->r[28]=0u+0x00000000u; // 80185B28
  c->r[29]=0u+0x00000000u; // 80185B2C
  goto L_80185B74; // 80185B30
L_80185B34:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 80185B34
  c->r[3]=R32(c->r[3]+c->r[29]); // 80185B38
  cmps(c,0,(int32_t)c->r[3],0); // 80185B3C
  if (crb(c,2)) { goto L_80185B4C; } // 80185B40
  c->r[0]=c->r[3]+0x80000000u; // 80185B44
  goto L_80185B50; // 80185B48
L_80185B4C:;
  c->r[0]=0u+0x00000000u; // 80185B4C
L_80185B50:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 80185B50
  W32(c->r[3]+c->r[29],c->r[0]); // 80185B54
  c->r[3]=R32(c->r[31]+0x00000018u); // 80185B58
  c->r[4]=c->r[3]+c->r[29]; // 80185B5C
  c->r[3]=R32(c->r[3]+c->r[29]); // 80185B60
  c->r[4]=R32(c->r[4]+0x00000004u); // 80185B64
  c->lr=0x80185B6Cu; f_8014F810(c); // 80185B68
  c->r[28]=c->r[28]+0x00000001u; // 80185B6C
  c->r[29]=c->r[29]+0x00000008u; // 80185B70
L_80185B74:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 80185B74
  c->r[0]=R32(c->r[31]+0x00000014u); // 80185B78
  c->r[0]=c->r[3]+c->r[0]; // 80185B7C
  cmpu(c,0,c->r[28],c->r[0]); // 80185B80
  if (crb(c,0)) { IRQCHK(c); goto L_80185B34; } // 80185B84
  c->r[0]=R32(c->r[13]+0xFFFFAF60u); // 80185B88
  cmps(c,0,(int32_t)c->r[0],0); // 80185B8C
  if (crb(c,2)) { goto L_80185BBC; } // 80185B90
  c->r[0]=R32(c->r[13]+0xFFFFAF68u); // 80185B94
  cmpu(c,0,c->r[0],c->r[31]); // 80185B98
  if (!crb(c,2)) { goto L_80185BBC; } // 80185B9C
  c->r[3]=R32(c->r[13]+0xFFFF92E8u); // 80185BA0
  c->r[0]=0u+0x00000000u; // 80185BA4
  W32(c->r[13]+0xFFFFAF60u,c->r[0]); // 80185BA8
  cmps(c,0,(int32_t)c->r[3],1); // 80185BAC
  if (!crb(c,0)) { goto L_80185BBC; } // 80185BB0
  c->r[0]=c->r[3]+0x00000001u; // 80185BB4
  W32(c->r[13]+0xFFFF92E8u,c->r[0]); // 80185BB8
L_80185BBC:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 80185BBC
  cmps(c,0,(int32_t)c->r[0],0); // 80185BC0
  if (crb(c,2)) { goto L_80185C0C; } // 80185BC4
  c->r[3]=c->r[1]+0x00000008u; // 80185BC8
  c->lr=0x80185BD0u; f_801502A8(c); // 80185BCC
  c->r[3]=c->r[1]+0x00000008u; // 80185BD0
  c->lr=0x80185BD8u; f_80150080(c); // 80185BD4
  c->r[12]=R32(c->r[31]+0x00000020u); // 80185BD8
  c->r[3]=R32(c->r[31]+0x00000004u); // 80185BDC
  c->r[4]=R32(c->r[31]+0x00000024u); // 80185BE0
  c->ctr=c->r[12]; // 80185BE4
  if (true) { c->lr=0x80185BECu; dispatch(c,c->ctr); } // 80185BE8
  c->r[3]=c->r[1]+0x00000008u; // 80185BEC
  c->lr=0x80185BF4u; f_801502A8(c); // 80185BF0
  c->r[3]=c->r[30]|c->r[30]; // 80185BF4
  c->lr=0x80185BFCu; f_80150080(c); // 80185BF8
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 80185BFC
  c->r[4]=c->r[31]|c->r[31]; // 80185C00
  c->lr=0x80185C08u; f_8018767C(c); // 80185C04
  goto L_80185C14; // 80185C08
L_80185C0C:;
  c->r[3]=c->r[31]+0x0000002Cu; // 80185C0C
  c->lr=0x80185C14u; f_801582C0(c); // 80185C10
L_80185C14:;
  c->r[3]=0u+0x00000001u; // 80185C14
  c->lr=0x80185C1Cu; f_8018599C(c); // 80185C18
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 80185C1C
  c->r[3]=0u+0x00000001u; // 80185C20
  c->r[4]=c->r[0]|0x00000008u; // 80185C24
  c->lr=0x80185C2Cu; f_801859AC(c); // 80185C28
  c->r[4]=R32(c->r[31]+0x00000008u); // 80185C2C
  c->r[3]=c->r[31]|c->r[31]; // 80185C30
  c->lr=0x80185C38u; f_801879B0(c); // 80185C34
L_80185C38:;
  c->r[0]=R32(c->r[1]+0x000002E4u); // 80185C38
  c->r[31]=R32(c->r[1]+0x000002DCu); // 80185C3C
  c->r[30]=R32(c->r[1]+0x000002D8u); // 80185C40
  c->r[29]=R32(c->r[1]+0x000002D4u); // 80185C44
  c->r[28]=R32(c->r[1]+0x000002D0u); // 80185C48
  c->lr=c->r[0]; // 80185C4C
  c->r[1]=c->r[1]+0x000002E0u; // 80185C50
  return; // 80185C54
}

// IPCInterruptHandler
void f_80185C58(Ctx* __restrict c) {
  trace_call(0x80185C58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185C58
  c->r[0]=c->lr; // 80185C5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80185C60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80185C64
  c->r[31]=c->r[4]|c->r[4]; // 80185C68
  W32(c->r[1]+0x00000008u,c->r[30]); // 80185C6C
  c->r[30]=c->r[3]|c->r[3]; // 80185C70
  c->r[3]=0u+0x00000001u; // 80185C74
  c->lr=0x80185C7Cu; f_8018599C(c); // 80185C78
  c->r[0]=c->r[3]&0x00000014u; cr0(c,c->r[0]); // 80185C7C
  cmpu(c,0,c->r[0],0x00000014u); // 80185C80
  if (!crb(c,2)) { goto L_80185C94; } // 80185C84
  c->r[3]=c->r[30]|c->r[30]; // 80185C88
  c->r[4]=c->r[31]|c->r[31]; // 80185C8C
  c->lr=0x80185C94u; f_80185A00(c); // 80185C90
L_80185C94:;
  c->r[3]=0u+0x00000001u; // 80185C94
  c->lr=0x80185C9Cu; f_8018599C(c); // 80185C98
  c->r[0]=c->r[3]&0x00000022u; cr0(c,c->r[0]); // 80185C9C
  cmpu(c,0,c->r[0],0x00000022u); // 80185CA0
  if (!crb(c,2)) { goto L_80185DEC; } // 80185CA4
  c->r[3]=0u+0x00000001u; // 80185CA8
  c->lr=0x80185CB0u; f_8018599C(c); // 80185CAC
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 80185CB0
  c->r[3]=0u+0x00000001u; // 80185CB4
  c->r[4]=c->r[0]|0x00000002u; // 80185CB8
  c->lr=0x80185CC0u; f_801859AC(c); // 80185CBC
  c->r[0]=0u+0x40000000u; // 80185CC0
  c->r[3]=0u+0xCD000000u; // 80185CC4
  W32(c->r[3]+0x00000030u,c->r[0]); // 80185CC8
  c->r[31]=R32(c->r[13]+0xFFFF92E8u); // 80185CCC
  cmps(c,0,(int32_t)c->r[31],1); // 80185CD0
  if (!crb(c,0)) { goto L_80185CE4; } // 80185CD4
  c->r[31]=c->r[31]+0x00000001u; // 80185CD8
  W32(c->r[13]+0xFFFF92E8u,c->r[31]); // 80185CDC
  c->lr=0x80185CE4u; f_801879A0(c); // 80185CE0
L_80185CE4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80185CE4
  if (!crb(c,1)) { goto L_80185DEC; } // 80185CE8
  c->r[0]=R32(c->r[13]+0xFFFFAF60u); // 80185CEC
  cmps(c,0,(int32_t)c->r[0],0); // 80185CF0
  if (crb(c,2)) { goto L_80185D2C; } // 80185CF4
  c->r[3]=R32(c->r[13]+0xFFFFAF64u); // 80185CF8
  c->r[0]=0u+0x00000000u; // 80185CFC
  W32(c->r[3]+0x00000004u,c->r[0]); // 80185D00
  c->r[3]=R32(c->r[13]+0xFFFFAF64u); // 80185D04
  W32(c->r[13]+0xFFFFAF60u,c->r[0]); // 80185D08
  c->r[3]=c->r[3]+0x0000002Cu; // 80185D0C
  c->lr=0x80185D14u; f_801582C0(c); // 80185D10
  c->r[3]=0u+0x00000001u; // 80185D14
  c->lr=0x80185D1Cu; f_8018599C(c); // 80185D18
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 80185D1C
  c->r[3]=0u+0x00000001u; // 80185D20
  c->r[4]=c->r[0]|0x00000008u; // 80185D24
  c->lr=0x80185D2Cu; f_801859AC(c); // 80185D28
L_80185D2C:;
  c->r[4]=0u+0x80470000u; // 80185D2C
  c->r[3]=c->r[4]+0xFFFF80C0u; // 80185D30
  c->r[4]=R32(c->r[4]+0xFFFF80C0u); // 80185D34
  c->r[0]=R32(c->r[3]+0x00000004u); // 80185D38
  cmpu(c,0,c->r[0],c->r[4]); // 80185D3C
  if (!crb(c,0)) { goto L_80185D4C; } // 80185D40
  c->r[0]=c->r[0]-c->r[4]; // 80185D44
  goto L_80185D58; // 80185D48
L_80185D4C:;
  c->r[0]=c->r[0]-c->r[4]; // 80185D4C
  c->r[0]=cntlz(c->r[0]); // 80185D50
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80185D54
L_80185D58:;
  cmps(c,0,(int32_t)c->r[0],0); // 80185D58
  if (!crb(c,2)) { goto L_80185DEC; } // 80185D5C
  c->r[3]=0u+0x80470000u; // 80185D60
  c->r[3]=c->r[3]+0xFFFF80C0u; // 80185D64
  c->r[0]=R32(c->r[3]+0x00000008u); // 80185D68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80185D6C
  c->r[3]=c->r[3]+c->r[0]; // 80185D70
  c->r[4]=R32(c->r[3]+0x00000010u); // 80185D74
  cmps(c,0,(int32_t)c->r[4],0); // 80185D78
  if (crb(c,2)) { goto L_80185DEC; } // 80185D7C
  c->r[0]=R32(c->r[4]+0x00000028u); // 80185D80
  cmps(c,0,(int32_t)c->r[0],0); // 80185D84
  if (crb(c,2)) { goto L_80185D98; } // 80185D88
  c->r[3]=R32(c->r[13]+0xFFFF92E8u); // 80185D8C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80185D90
  W32(c->r[13]+0xFFFF92E8u,c->r[0]); // 80185D94
L_80185D98:;
  c->r[4]=c->r[4]+0x80000000u; // 80185D98
  c->r[3]=0u+0x00000000u; // 80185D9C
  c->lr=0x80185DA4u; f_801859AC(c); // 80185DA0
  c->r[7]=0u+0x80470000u; // 80185DA4
  c->r[3]=R32(c->r[13]+0xFFFF92E8u); // 80185DA8
  c->r[6]=c->r[7]+0xFFFF80C0u; // 80185DAC
  c->r[4]=R32(c->r[7]+0xFFFF80C0u); // 80185DB0
  c->r[5]=R32(c->r[6]+0x00000008u); // 80185DB4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80185DB8
  W32(c->r[13]+0xFFFF92E8u,c->r[0]); // 80185DBC
  c->r[4]=c->r[4]+0x00000001u; // 80185DC0
  c->r[0]=c->r[5]+0x00000001u; // 80185DC4
  c->r[3]=0u+0x00000001u; // 80185DC8
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 80185DCC
  W32(c->r[7]+0xFFFF80C0u,c->r[4]); // 80185DD0
  W32(c->r[6]+0x00000008u,c->r[0]); // 80185DD4
  c->lr=0x80185DDCu; f_8018599C(c); // 80185DD8
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 80185DDC
  c->r[3]=0u+0x00000001u; // 80185DE0
  c->r[4]=c->r[0]|0x00000001u; // 80185DE4
  c->lr=0x80185DECu; f_801859AC(c); // 80185DE8
L_80185DEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80185DEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80185DF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80185DF4
  c->lr=c->r[0]; // 80185DF8
  c->r[1]=c->r[1]+0x00000010u; // 80185DFC
  return; // 80185E00
}

// IPCCltInit
void f_80185E04(Ctx* __restrict c) {
  trace_call(0x80185E04u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185E04
  c->r[0]=c->lr; // 80185E08
  W32(c->r[1]+0x00000024u,c->r[0]); // 80185E0C
  c->r[0]=R32(c->r[13]+0xFFFFAF6Cu); // 80185E10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80185E14
  cmps(c,0,(int32_t)c->r[0],0); // 80185E18
  W32(c->r[1]+0x00000018u,c->r[30]); // 80185E1C
  c->r[30]=0u+0x00000000u; // 80185E20
  W32(c->r[1]+0x00000014u,c->r[29]); // 80185E24
  if (!crb(c,2)) { goto L_80185E98; } // 80185E28
  c->r[0]=0u+0x00000001u; // 80185E2C
  W32(c->r[13]+0xFFFFAF6Cu,c->r[0]); // 80185E30
  c->lr=0x80185E38u; f_80185908(c); // 80185E34
  c->lr=0x80185E3Cu; f_801859C4(c); // 80185E38
  c->r[29]=c->r[3]|c->r[3]; // 80185E3C
  c->r[31]=c->r[3]+0x00001000u; // 80185E40
  c->lr=0x80185E48u; f_801859BC(c); // 80185E44
  cmpu(c,0,c->r[31],c->r[3]); // 80185E48
  if (!crb(c,1)) { goto L_80185E58; } // 80185E4C
  c->r[30]=0u+0xFFFFFFEAu; // 80185E50
  goto L_80185E98; // 80185E54
L_80185E58:;
  c->r[3]=c->r[29]|c->r[29]; // 80185E58
  c->r[4]=0u+0x00001000u; // 80185E5C
  c->lr=0x80185E64u; f_80187344(c); // 80185E60
  W32(c->r[13]+0xFFFF92ECu,c->r[3]); // 80185E64
  c->r[3]=c->r[31]|c->r[31]; // 80185E68
  c->lr=0x80185E70u; f_801859CC(c); // 80185E6C
  c->r[4]=0u+0x80180000u; // 80185E70
  c->r[3]=0u+0x0000001Bu; // 80185E74
  c->r[4]=c->r[4]+0x00005C58u; // 80185E78
  c->lr=0x80185E80u; f_8015445C(c); // 80185E7C
  c->r[3]=0u+0x00000010u; // 80185E80
  c->lr=0x80185E88u; f_80154820(c); // 80185E84
  c->r[3]=0u+0x00000001u; // 80185E88
  c->r[4]=0u+0x00000038u; // 80185E8C
  c->lr=0x80185E94u; f_801859AC(c); // 80185E90
  c->lr=0x80185E98u; f_80187868(c); // 80185E94
L_80185E98:;
  c->r[3]=c->r[30]|c->r[30]; // 80185E98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80185E9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80185EA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80185EA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80185EA8
  c->lr=c->r[0]; // 80185EAC
  c->r[1]=c->r[1]+0x00000020u; // 80185EB0
  return; // 80185EB4
}

// IPCCltReInit
void f_80185EB8(Ctx* __restrict c) {
  trace_call(0x80185EB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185EB8
  c->r[0]=c->lr; // 80185EBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80185EC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80185EC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80185EC8
  c->r[30]=0u+0x00000000u; // 80185ECC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80185ED0
  c->lr=0x80185ED8u; f_801859C4(c); // 80185ED4
  c->r[29]=c->r[3]|c->r[3]; // 80185ED8
  c->r[31]=c->r[3]+0x00000800u; // 80185EDC
  c->lr=0x80185EE4u; f_801859BC(c); // 80185EE0
  cmpu(c,0,c->r[31],c->r[3]); // 80185EE4
  if (!crb(c,1)) { goto L_80185EF4; } // 80185EE8
  c->r[30]=0u+0xFFFFFFEAu; // 80185EEC
  goto L_80185F0C; // 80185EF0
L_80185EF4:;
  c->r[3]=c->r[29]|c->r[29]; // 80185EF4
  c->r[4]=0u+0x00000800u; // 80185EF8
  c->lr=0x80185F00u; f_80187344(c); // 80185EFC
  W32(c->r[13]+0xFFFF92ECu,c->r[3]); // 80185F00
  c->r[3]=c->r[31]|c->r[31]; // 80185F04
  c->lr=0x80185F0Cu; f_801859CC(c); // 80185F08
L_80185F0C:;
  c->r[3]=c->r[30]|c->r[30]; // 80185F0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80185F10
  c->r[30]=R32(c->r[1]+0x00000018u); // 80185F14
  c->r[29]=R32(c->r[1]+0x00000014u); // 80185F18
  c->r[0]=R32(c->r[1]+0x00000024u); // 80185F1C
  c->lr=c->r[0]; // 80185F20
  c->r[1]=c->r[1]+0x00000020u; // 80185F24
  return; // 80185F28
}

void hle___ios_Ipc2(Ctx*);
// __ios_Ipc2
void f_80185F2C(Ctx* __restrict c) {
  hle___ios_Ipc2(c);
}

// IOS_OpenAsync
void f_8018616C(Ctx* __restrict c) {
  trace_call(0x8018616Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018616C
  c->r[0]=c->lr; // 80186170
  W32(c->r[1]+0x00000034u,c->r[0]); // 80186174
  c->r[11]=c->r[1]+0x00000030u; // 80186178
  c->lr=0x80186180u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018617C
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80186180
  c->r[27]=c->r[3]|c->r[3]; // 80186184
  c->r[28]=c->r[4]|c->r[4]; // 80186188
  c->r[29]=c->r[5]|c->r[5]; // 8018618C
  c->r[31]=c->r[6]|c->r[6]; // 80186190
  c->r[30]=0u+0x00000000u; // 80186194
  if (!crb(c,2)) { goto L_801861A4; } // 80186198
  c->r[30]=0u+0xFFFFFFFCu; // 8018619C
  goto L_801861EC; // 801861A0
L_801861A4:;
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 801861A4
  c->r[4]=0u+0x00000040u; // 801861A8
  c->r[5]=0u+0x00000020u; // 801861AC
  c->lr=0x801861B4u; f_80187678(c); // 801861B0
  cmps(c,0,(int32_t)c->r[3],0); // 801861B4
  W32(c->r[1]+0x00000008u,c->r[3]); // 801861B8
  if (!crb(c,2)) { goto L_801861C8; } // 801861BC
  c->r[30]=0u+0xFFFFFFEAu; // 801861C0
  goto L_801861EC; // 801861C4
L_801861C8:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 801861C8
  c->r[5]=0u+0x00000000u; // 801861CC
  c->r[0]=0u+0x00000001u; // 801861D0
  c->r[4]=R32(c->r[1]+0x00000008u); // 801861D4
  W32(c->r[4]+0x00000024u,c->r[31]); // 801861D8
  c->r[4]=R32(c->r[1]+0x00000008u); // 801861DC
  W32(c->r[4]+0x00000028u,c->r[5]); // 801861E0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801861E4
  W32(c->r[3]+0x00000008u,c->r[5]); // 801861E8
L_801861EC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801861EC
  if (!crb(c,2)) { goto L_80186268; } // 801861F0
  c->r[31]=R32(c->r[1]+0x00000008u); // 801861F4
  c->r[30]=0u+0x00000000u; // 801861F8
  cmps(c,0,(int32_t)c->r[31],0); // 801861FC
  if (!crb(c,2)) { goto L_8018620C; } // 80186200
  c->r[30]=0u+0xFFFFFFFCu; // 80186204
  goto L_80186250; // 80186208
L_8018620C:;
  c->r[3]=c->r[27]|c->r[27]; // 8018620C
  c->r[4]=0u+0x00000040u; // 80186210
  goto L_8018621C; // 80186214
L_80186218:;
  c->r[3]=c->r[3]+0x00000001u; // 80186218
L_8018621C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8018621C
  cmps(c,0,(int32_t)c->r[0],0); // 80186220
  if (crb(c,2)) { goto L_80186234; } // 80186224
  cmps(c,0,(int32_t)c->r[4],0); // 80186228
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8018622C
  if (!crb(c,2)) { IRQCHK(c); goto L_80186218; } // 80186230
L_80186234:;
  c->r[4]=c->r[3]-c->r[27]; // 80186234
  c->r[3]=c->r[27]|c->r[27]; // 80186238
  c->r[4]=c->r[4]+0x00000001u; // 8018623C
  c->lr=0x80186244u; f_8014F83C(c); // 80186240
  c->r[0]=c->r[27]+0x80000000u; // 80186244
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80186248
  W32(c->r[31]+0x00000010u,c->r[28]); // 8018624C
L_80186250:;
  cmps(c,0,(int32_t)c->r[30],0); // 80186250
  if (!crb(c,2)) { goto L_80186268; } // 80186254
  c->r[3]=R32(c->r[1]+0x00000008u); // 80186258
  c->r[4]=c->r[29]|c->r[29]; // 8018625C
  c->lr=0x80186264u; f_80185F2C(c); // 80186260
  c->r[30]=c->r[3]|c->r[3]; // 80186264
L_80186268:;
  c->r[11]=c->r[1]+0x00000030u; // 80186268
  c->r[3]=c->r[30]|c->r[30]; // 8018626C
  c->lr=0x80186274u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80186270
  c->r[0]=R32(c->r[1]+0x00000034u); // 80186274
  c->lr=c->r[0]; // 80186278
  c->r[1]=c->r[1]+0x00000030u; // 8018627C
  return; // 80186280
}

// IOS_Open
void f_80186284(Ctx* __restrict c) {
  trace_call(0x80186284u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186284
  c->r[0]=c->lr; // 80186288
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018628C
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80186290
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80186294
  W32(c->r[1]+0x00000018u,c->r[30]); // 80186298
  c->r[30]=0u+0x00000000u; // 8018629C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801862A0
  c->r[29]=c->r[4]|c->r[4]; // 801862A4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801862A8
  c->r[28]=c->r[3]|c->r[3]; // 801862AC
  if (!crb(c,2)) { goto L_801862BC; } // 801862B0
  c->r[30]=0u+0xFFFFFFFCu; // 801862B4
  goto L_80186304; // 801862B8
L_801862BC:;
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 801862BC
  c->r[4]=0u+0x00000040u; // 801862C0
  c->r[5]=0u+0x00000020u; // 801862C4
  c->lr=0x801862CCu; f_80187678(c); // 801862C8
  cmps(c,0,(int32_t)c->r[3],0); // 801862CC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801862D0
  if (!crb(c,2)) { goto L_801862E0; } // 801862D4
  c->r[30]=0u+0xFFFFFFEAu; // 801862D8
  goto L_80186304; // 801862DC
L_801862E0:;
  c->r[5]=0u+0x00000000u; // 801862E0
  c->r[0]=0u+0x00000001u; // 801862E4
  W32(c->r[3]+0x00000020u,c->r[5]); // 801862E8
  c->r[4]=R32(c->r[1]+0x00000008u); // 801862EC
  W32(c->r[4]+0x00000024u,c->r[5]); // 801862F0
  c->r[4]=R32(c->r[1]+0x00000008u); // 801862F4
  W32(c->r[4]+0x00000028u,c->r[5]); // 801862F8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801862FC
  W32(c->r[3]+0x00000008u,c->r[5]); // 80186300
L_80186304:;
  cmps(c,0,(int32_t)c->r[30],0); // 80186304
  if (!crb(c,2)) { goto L_80186380; } // 80186308
  c->r[31]=R32(c->r[1]+0x00000008u); // 8018630C
  c->r[30]=0u+0x00000000u; // 80186310
  cmps(c,0,(int32_t)c->r[31],0); // 80186314
  if (!crb(c,2)) { goto L_80186324; } // 80186318
  c->r[30]=0u+0xFFFFFFFCu; // 8018631C
  goto L_80186368; // 80186320
L_80186324:;
  c->r[3]=c->r[28]|c->r[28]; // 80186324
  c->r[4]=0u+0x00000040u; // 80186328
  goto L_80186334; // 8018632C
L_80186330:;
  c->r[3]=c->r[3]+0x00000001u; // 80186330
L_80186334:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 80186334
  cmps(c,0,(int32_t)c->r[0],0); // 80186338
  if (crb(c,2)) { goto L_8018634C; } // 8018633C
  cmps(c,0,(int32_t)c->r[4],0); // 80186340
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80186344
  if (!crb(c,2)) { IRQCHK(c); goto L_80186330; } // 80186348
L_8018634C:;
  c->r[4]=c->r[3]-c->r[28]; // 8018634C
  c->r[3]=c->r[28]|c->r[28]; // 80186350
  c->r[4]=c->r[4]+0x00000001u; // 80186354
  c->lr=0x8018635Cu; f_8014F83C(c); // 80186358
  c->r[0]=c->r[28]+0x80000000u; // 8018635C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80186360
  W32(c->r[31]+0x00000010u,c->r[29]); // 80186364
L_80186368:;
  cmps(c,0,(int32_t)c->r[30],0); // 80186368
  if (!crb(c,2)) { goto L_80186380; } // 8018636C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80186370
  c->r[4]=0u+0x00000000u; // 80186374
  c->lr=0x8018637Cu; f_80185F2C(c); // 80186378
  c->r[30]=c->r[3]|c->r[3]; // 8018637C
L_80186380:;
  c->r[3]=c->r[30]|c->r[30]; // 80186380
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80186384
  c->r[30]=R32(c->r[1]+0x00000018u); // 80186388
  c->r[29]=R32(c->r[1]+0x00000014u); // 8018638C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80186390
  c->r[0]=R32(c->r[1]+0x00000024u); // 80186394
  c->lr=c->r[0]; // 80186398
  c->r[1]=c->r[1]+0x00000020u; // 8018639C
  return; // 801863A0
}

// IOS_CloseAsync
void f_801863A4(Ctx* __restrict c) {
  trace_call(0x801863A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801863A4
  c->r[0]=c->lr; // 801863A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801863AC
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801863B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801863B4
  c->r[31]=0u+0x00000000u; // 801863B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801863BC
  c->r[30]=c->r[5]|c->r[5]; // 801863C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801863C4
  c->r[29]=c->r[4]|c->r[4]; // 801863C8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801863CC
  c->r[28]=c->r[3]|c->r[3]; // 801863D0
  if (!crb(c,2)) { goto L_801863E0; } // 801863D4
  c->r[31]=0u+0xFFFFFFFCu; // 801863D8
  goto L_80186428; // 801863DC
L_801863E0:;
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 801863E0
  c->r[4]=0u+0x00000040u; // 801863E4
  c->r[5]=0u+0x00000020u; // 801863E8
  c->lr=0x801863F0u; f_80187678(c); // 801863EC
  cmps(c,0,(int32_t)c->r[3],0); // 801863F0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801863F4
  if (!crb(c,2)) { goto L_80186404; } // 801863F8
  c->r[31]=0u+0xFFFFFFEAu; // 801863FC
  goto L_80186428; // 80186400
L_80186404:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 80186404
  c->r[5]=0u+0x00000000u; // 80186408
  c->r[0]=0u+0x00000002u; // 8018640C
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186410
  W32(c->r[4]+0x00000024u,c->r[30]); // 80186414
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186418
  W32(c->r[4]+0x00000028u,c->r[5]); // 8018641C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80186420
  W32(c->r[3]+0x00000008u,c->r[28]); // 80186424
L_80186428:;
  cmps(c,0,(int32_t)c->r[31],0); // 80186428
  if (!crb(c,2)) { goto L_80186440; } // 8018642C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80186430
  c->r[4]=c->r[29]|c->r[29]; // 80186434
  c->lr=0x8018643Cu; f_80185F2C(c); // 80186438
  c->r[31]=c->r[3]|c->r[3]; // 8018643C
L_80186440:;
  c->r[3]=c->r[31]|c->r[31]; // 80186440
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80186444
  c->r[30]=R32(c->r[1]+0x00000018u); // 80186448
  c->r[29]=R32(c->r[1]+0x00000014u); // 8018644C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80186450
  c->r[0]=R32(c->r[1]+0x00000024u); // 80186454
  c->lr=c->r[0]; // 80186458
  c->r[1]=c->r[1]+0x00000020u; // 8018645C
  return; // 80186460
}

// IOS_Close
void f_80186464(Ctx* __restrict c) {
  trace_call(0x80186464u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186464
  c->r[0]=c->lr; // 80186468
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018646C
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80186470
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80186474
  c->r[31]=0u+0x00000000u; // 80186478
  W32(c->r[1]+0x00000018u,c->r[30]); // 8018647C
  c->r[30]=c->r[3]|c->r[3]; // 80186480
  if (!crb(c,2)) { goto L_80186490; } // 80186484
  c->r[31]=0u+0xFFFFFFFCu; // 80186488
  goto L_801864D8; // 8018648C
L_80186490:;
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 80186490
  c->r[4]=0u+0x00000040u; // 80186494
  c->r[5]=0u+0x00000020u; // 80186498
  c->lr=0x801864A0u; f_80187678(c); // 8018649C
  cmps(c,0,(int32_t)c->r[3],0); // 801864A0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801864A4
  if (!crb(c,2)) { goto L_801864B4; } // 801864A8
  c->r[31]=0u+0xFFFFFFEAu; // 801864AC
  goto L_801864D8; // 801864B0
L_801864B4:;
  c->r[5]=0u+0x00000000u; // 801864B4
  c->r[0]=0u+0x00000002u; // 801864B8
  W32(c->r[3]+0x00000020u,c->r[5]); // 801864BC
  c->r[4]=R32(c->r[1]+0x00000008u); // 801864C0
  W32(c->r[4]+0x00000024u,c->r[5]); // 801864C4
  c->r[4]=R32(c->r[1]+0x00000008u); // 801864C8
  W32(c->r[4]+0x00000028u,c->r[5]); // 801864CC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801864D0
  W32(c->r[3]+0x00000008u,c->r[30]); // 801864D4
L_801864D8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801864D8
  if (!crb(c,2)) { goto L_801864F0; } // 801864DC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801864E0
  c->r[4]=0u+0x00000000u; // 801864E4
  c->lr=0x801864ECu; f_80185F2C(c); // 801864E8
  c->r[31]=c->r[3]|c->r[3]; // 801864EC
L_801864F0:;
  c->r[3]=c->r[31]|c->r[31]; // 801864F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801864F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801864F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801864FC
  c->lr=c->r[0]; // 80186500
  c->r[1]=c->r[1]+0x00000020u; // 80186504
  return; // 80186508
}

// IOS_ReadAsync
void f_8018650C(Ctx* __restrict c) {
  trace_call(0x8018650Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018650C
  c->r[0]=c->lr; // 80186510
  W32(c->r[1]+0x00000034u,c->r[0]); // 80186514
  c->r[11]=c->r[1]+0x00000030u; // 80186518
  c->lr=0x80186520u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018651C
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80186520
  c->r[26]=c->r[3]|c->r[3]; // 80186524
  c->r[27]=c->r[4]|c->r[4]; // 80186528
  c->r[28]=c->r[5]|c->r[5]; // 8018652C
  c->r[29]=c->r[6]|c->r[6]; // 80186530
  c->r[31]=c->r[7]|c->r[7]; // 80186534
  c->r[30]=0u+0x00000000u; // 80186538
  if (!crb(c,2)) { goto L_80186548; } // 8018653C
  c->r[30]=0u+0xFFFFFFFCu; // 80186540
  goto L_80186590; // 80186544
L_80186548:;
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 80186548
  c->r[4]=0u+0x00000040u; // 8018654C
  c->r[5]=0u+0x00000020u; // 80186550
  c->lr=0x80186558u; f_80187678(c); // 80186554
  cmps(c,0,(int32_t)c->r[3],0); // 80186558
  W32(c->r[1]+0x00000008u,c->r[3]); // 8018655C
  if (!crb(c,2)) { goto L_8018656C; } // 80186560
  c->r[30]=0u+0xFFFFFFEAu; // 80186564
  goto L_80186590; // 80186568
L_8018656C:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 8018656C
  c->r[5]=0u+0x00000000u; // 80186570
  c->r[0]=0u+0x00000003u; // 80186574
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186578
  W32(c->r[4]+0x00000024u,c->r[31]); // 8018657C
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186580
  W32(c->r[4]+0x00000028u,c->r[5]); // 80186584
  W32(c->r[3]+0x00000000u,c->r[0]); // 80186588
  W32(c->r[3]+0x00000008u,c->r[26]); // 8018658C
L_80186590:;
  cmps(c,0,(int32_t)c->r[30],0); // 80186590
  if (!crb(c,2)) { goto L_801865F0; } // 80186594
  c->r[31]=R32(c->r[1]+0x00000008u); // 80186598
  c->r[30]=0u+0x00000000u; // 8018659C
  cmps(c,0,(int32_t)c->r[31],0); // 801865A0
  if (!crb(c,2)) { goto L_801865B0; } // 801865A4
  c->r[30]=0u+0xFFFFFFFCu; // 801865A8
  goto L_801865D8; // 801865AC
L_801865B0:;
  c->r[3]=c->r[27]|c->r[27]; // 801865B0
  c->r[4]=c->r[28]|c->r[28]; // 801865B4
  c->lr=0x801865BCu; f_8014F810(c); // 801865B8
  cmps(c,0,(int32_t)c->r[27],0); // 801865BC
  if (crb(c,2)) { goto L_801865CC; } // 801865C0
  c->r[0]=c->r[27]+0x80000000u; // 801865C4
  goto L_801865D0; // 801865C8
L_801865CC:;
  c->r[0]=0u+0x00000000u; // 801865CC
L_801865D0:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801865D0
  W32(c->r[31]+0x00000010u,c->r[28]); // 801865D4
L_801865D8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801865D8
  if (!crb(c,2)) { goto L_801865F0; } // 801865DC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801865E0
  c->r[4]=c->r[29]|c->r[29]; // 801865E4
  c->lr=0x801865ECu; f_80185F2C(c); // 801865E8
  c->r[30]=c->r[3]|c->r[3]; // 801865EC
L_801865F0:;
  c->r[11]=c->r[1]+0x00000030u; // 801865F0
  c->r[3]=c->r[30]|c->r[30]; // 801865F4
  c->lr=0x801865FCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801865F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801865FC
  c->lr=c->r[0]; // 80186600
  c->r[1]=c->r[1]+0x00000030u; // 80186604
  return; // 80186608
}

// IOS_Read
void f_8018660C(Ctx* __restrict c) {
  trace_call(0x8018660Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018660C
  c->r[0]=c->lr; // 80186610
  W32(c->r[1]+0x00000024u,c->r[0]); // 80186614
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80186618
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8018661C
  c->r[31]=c->r[3]|c->r[3]; // 80186620
  W32(c->r[1]+0x00000018u,c->r[30]); // 80186624
  c->r[30]=0u+0x00000000u; // 80186628
  W32(c->r[1]+0x00000014u,c->r[29]); // 8018662C
  c->r[29]=c->r[5]|c->r[5]; // 80186630
  W32(c->r[1]+0x00000010u,c->r[28]); // 80186634
  c->r[28]=c->r[4]|c->r[4]; // 80186638
  if (!crb(c,2)) { goto L_80186648; } // 8018663C
  c->r[30]=0u+0xFFFFFFFCu; // 80186640
  goto L_80186690; // 80186644
L_80186648:;
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 80186648
  c->r[4]=0u+0x00000040u; // 8018664C
  c->r[5]=0u+0x00000020u; // 80186650
  c->lr=0x80186658u; f_80187678(c); // 80186654
  cmps(c,0,(int32_t)c->r[3],0); // 80186658
  W32(c->r[1]+0x00000008u,c->r[3]); // 8018665C
  if (!crb(c,2)) { goto L_8018666C; } // 80186660
  c->r[30]=0u+0xFFFFFFEAu; // 80186664
  goto L_80186690; // 80186668
L_8018666C:;
  c->r[5]=0u+0x00000000u; // 8018666C
  c->r[0]=0u+0x00000003u; // 80186670
  W32(c->r[3]+0x00000020u,c->r[5]); // 80186674
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186678
  W32(c->r[4]+0x00000024u,c->r[5]); // 8018667C
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186680
  W32(c->r[4]+0x00000028u,c->r[5]); // 80186684
  W32(c->r[3]+0x00000000u,c->r[0]); // 80186688
  W32(c->r[3]+0x00000008u,c->r[31]); // 8018668C
L_80186690:;
  cmps(c,0,(int32_t)c->r[30],0); // 80186690
  if (!crb(c,2)) { goto L_801866F0; } // 80186694
  c->r[31]=R32(c->r[1]+0x00000008u); // 80186698
  c->r[30]=0u+0x00000000u; // 8018669C
  cmps(c,0,(int32_t)c->r[31],0); // 801866A0
  if (!crb(c,2)) { goto L_801866B0; } // 801866A4
  c->r[30]=0u+0xFFFFFFFCu; // 801866A8
  goto L_801866D8; // 801866AC
L_801866B0:;
  c->r[3]=c->r[28]|c->r[28]; // 801866B0
  c->r[4]=c->r[29]|c->r[29]; // 801866B4
  c->lr=0x801866BCu; f_8014F810(c); // 801866B8
  cmps(c,0,(int32_t)c->r[28],0); // 801866BC
  if (crb(c,2)) { goto L_801866CC; } // 801866C0
  c->r[0]=c->r[28]+0x80000000u; // 801866C4
  goto L_801866D0; // 801866C8
L_801866CC:;
  c->r[0]=0u+0x00000000u; // 801866CC
L_801866D0:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801866D0
  W32(c->r[31]+0x00000010u,c->r[29]); // 801866D4
L_801866D8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801866D8
  if (!crb(c,2)) { goto L_801866F0; } // 801866DC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801866E0
  c->r[4]=0u+0x00000000u; // 801866E4
  c->lr=0x801866ECu; f_80185F2C(c); // 801866E8
  c->r[30]=c->r[3]|c->r[3]; // 801866EC
L_801866F0:;
  c->r[3]=c->r[30]|c->r[30]; // 801866F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801866F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801866F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801866FC
  c->r[28]=R32(c->r[1]+0x00000010u); // 80186700
  c->r[0]=R32(c->r[1]+0x00000024u); // 80186704
  c->lr=c->r[0]; // 80186708
  c->r[1]=c->r[1]+0x00000020u; // 8018670C
  return; // 80186710
}

// IOS_WriteAsync
void f_80186714(Ctx* __restrict c) {
  trace_call(0x80186714u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186714
  c->r[0]=c->lr; // 80186718
  W32(c->r[1]+0x00000034u,c->r[0]); // 8018671C
  c->r[11]=c->r[1]+0x00000030u; // 80186720
  c->lr=0x80186728u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80186724
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80186728
  c->r[26]=c->r[3]|c->r[3]; // 8018672C
  c->r[27]=c->r[4]|c->r[4]; // 80186730
  c->r[28]=c->r[5]|c->r[5]; // 80186734
  c->r[29]=c->r[6]|c->r[6]; // 80186738
  c->r[30]=c->r[7]|c->r[7]; // 8018673C
  c->r[31]=0u+0x00000000u; // 80186740
  if (!crb(c,2)) { goto L_80186750; } // 80186744
  c->r[31]=0u+0xFFFFFFFCu; // 80186748
  goto L_80186798; // 8018674C
L_80186750:;
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 80186750
  c->r[4]=0u+0x00000040u; // 80186754
  c->r[5]=0u+0x00000020u; // 80186758
  c->lr=0x80186760u; f_80187678(c); // 8018675C
  cmps(c,0,(int32_t)c->r[3],0); // 80186760
  W32(c->r[1]+0x00000008u,c->r[3]); // 80186764
  if (!crb(c,2)) { goto L_80186774; } // 80186768
  c->r[31]=0u+0xFFFFFFEAu; // 8018676C
  goto L_80186798; // 80186770
L_80186774:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 80186774
  c->r[5]=0u+0x00000000u; // 80186778
  c->r[0]=0u+0x00000004u; // 8018677C
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186780
  W32(c->r[4]+0x00000024u,c->r[30]); // 80186784
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186788
  W32(c->r[4]+0x00000028u,c->r[5]); // 8018678C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80186790
  W32(c->r[3]+0x00000008u,c->r[26]); // 80186794
L_80186798:;
  cmps(c,0,(int32_t)c->r[31],0); // 80186798
  if (!crb(c,2)) { goto L_801867F8; } // 8018679C
  c->r[5]=R32(c->r[1]+0x00000008u); // 801867A0
  c->r[31]=0u+0x00000000u; // 801867A4
  cmps(c,0,(int32_t)c->r[5],0); // 801867A8
  if (!crb(c,2)) { goto L_801867B8; } // 801867AC
  c->r[31]=0u+0xFFFFFFFCu; // 801867B0
  goto L_801867E0; // 801867B4
L_801867B8:;
  cmps(c,0,(int32_t)c->r[27],0); // 801867B8
  if (crb(c,2)) { goto L_801867C8; } // 801867BC
  c->r[0]=c->r[27]+0x80000000u; // 801867C0
  goto L_801867CC; // 801867C4
L_801867C8:;
  c->r[0]=0u+0x00000000u; // 801867C8
L_801867CC:;
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801867CC
  c->r[3]=c->r[27]|c->r[27]; // 801867D0
  c->r[4]=c->r[28]|c->r[28]; // 801867D4
  W32(c->r[5]+0x00000010u,c->r[28]); // 801867D8
  c->lr=0x801867E0u; f_8014F83C(c); // 801867DC
L_801867E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801867E0
  if (!crb(c,2)) { goto L_801867F8; } // 801867E4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801867E8
  c->r[4]=c->r[29]|c->r[29]; // 801867EC
  c->lr=0x801867F4u; f_80185F2C(c); // 801867F0
  c->r[31]=c->r[3]|c->r[3]; // 801867F4
L_801867F8:;
  c->r[11]=c->r[1]+0x00000030u; // 801867F8
  c->r[3]=c->r[31]|c->r[31]; // 801867FC
  c->lr=0x80186804u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80186800
  c->r[0]=R32(c->r[1]+0x00000034u); // 80186804
  c->lr=c->r[0]; // 80186808
  c->r[1]=c->r[1]+0x00000030u; // 8018680C
  return; // 80186810
}

// IOS_Write
void f_80186814(Ctx* __restrict c) {
  trace_call(0x80186814u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186814
  c->r[0]=c->lr; // 80186818
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018681C
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80186820
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80186824
  c->r[31]=0u+0x00000000u; // 80186828
  W32(c->r[1]+0x00000018u,c->r[30]); // 8018682C
  c->r[30]=c->r[5]|c->r[5]; // 80186830
  W32(c->r[1]+0x00000014u,c->r[29]); // 80186834
  c->r[29]=c->r[4]|c->r[4]; // 80186838
  W32(c->r[1]+0x00000010u,c->r[28]); // 8018683C
  c->r[28]=c->r[3]|c->r[3]; // 80186840
  if (!crb(c,2)) { goto L_80186850; } // 80186844
  c->r[31]=0u+0xFFFFFFFCu; // 80186848
  goto L_80186898; // 8018684C
L_80186850:;
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 80186850
  c->r[4]=0u+0x00000040u; // 80186854
  c->r[5]=0u+0x00000020u; // 80186858
  c->lr=0x80186860u; f_80187678(c); // 8018685C
  cmps(c,0,(int32_t)c->r[3],0); // 80186860
  W32(c->r[1]+0x00000008u,c->r[3]); // 80186864
  if (!crb(c,2)) { goto L_80186874; } // 80186868
  c->r[31]=0u+0xFFFFFFEAu; // 8018686C
  goto L_80186898; // 80186870
L_80186874:;
  c->r[5]=0u+0x00000000u; // 80186874
  c->r[0]=0u+0x00000004u; // 80186878
  W32(c->r[3]+0x00000020u,c->r[5]); // 8018687C
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186880
  W32(c->r[4]+0x00000024u,c->r[5]); // 80186884
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186888
  W32(c->r[4]+0x00000028u,c->r[5]); // 8018688C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80186890
  W32(c->r[3]+0x00000008u,c->r[28]); // 80186894
L_80186898:;
  cmps(c,0,(int32_t)c->r[31],0); // 80186898
  if (!crb(c,2)) { goto L_801868F8; } // 8018689C
  c->r[5]=R32(c->r[1]+0x00000008u); // 801868A0
  c->r[31]=0u+0x00000000u; // 801868A4
  cmps(c,0,(int32_t)c->r[5],0); // 801868A8
  if (!crb(c,2)) { goto L_801868B8; } // 801868AC
  c->r[31]=0u+0xFFFFFFFCu; // 801868B0
  goto L_801868E0; // 801868B4
L_801868B8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801868B8
  if (crb(c,2)) { goto L_801868C8; } // 801868BC
  c->r[0]=c->r[29]+0x80000000u; // 801868C0
  goto L_801868CC; // 801868C4
L_801868C8:;
  c->r[0]=0u+0x00000000u; // 801868C8
L_801868CC:;
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801868CC
  c->r[3]=c->r[29]|c->r[29]; // 801868D0
  c->r[4]=c->r[30]|c->r[30]; // 801868D4
  W32(c->r[5]+0x00000010u,c->r[30]); // 801868D8
  c->lr=0x801868E0u; f_8014F83C(c); // 801868DC
L_801868E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801868E0
  if (!crb(c,2)) { goto L_801868F8; } // 801868E4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801868E8
  c->r[4]=0u+0x00000000u; // 801868EC
  c->lr=0x801868F4u; f_80185F2C(c); // 801868F0
  c->r[31]=c->r[3]|c->r[3]; // 801868F4
L_801868F8:;
  c->r[3]=c->r[31]|c->r[31]; // 801868F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801868FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80186900
  c->r[29]=R32(c->r[1]+0x00000014u); // 80186904
  c->r[28]=R32(c->r[1]+0x00000010u); // 80186908
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018690C
  c->lr=c->r[0]; // 80186910
  c->r[1]=c->r[1]+0x00000020u; // 80186914
  return; // 80186918
}

// IOS_SeekAsync
void f_8018691C(Ctx* __restrict c) {
  trace_call(0x8018691Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018691C
  c->r[0]=c->lr; // 80186920
  W32(c->r[1]+0x00000034u,c->r[0]); // 80186924
  c->r[11]=c->r[1]+0x00000030u; // 80186928
  c->lr=0x80186930u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018692C
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80186930
  c->r[26]=c->r[3]|c->r[3]; // 80186934
  c->r[27]=c->r[4]|c->r[4]; // 80186938
  c->r[28]=c->r[5]|c->r[5]; // 8018693C
  c->r[29]=c->r[6]|c->r[6]; // 80186940
  c->r[30]=c->r[7]|c->r[7]; // 80186944
  c->r[31]=0u+0x00000000u; // 80186948
  if (!crb(c,2)) { goto L_80186958; } // 8018694C
  c->r[31]=0u+0xFFFFFFFCu; // 80186950
  goto L_801869A0; // 80186954
L_80186958:;
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 80186958
  c->r[4]=0u+0x00000040u; // 8018695C
  c->r[5]=0u+0x00000020u; // 80186960
  c->lr=0x80186968u; f_80187678(c); // 80186964
  cmps(c,0,(int32_t)c->r[3],0); // 80186968
  W32(c->r[1]+0x00000008u,c->r[3]); // 8018696C
  if (!crb(c,2)) { goto L_8018697C; } // 80186970
  c->r[31]=0u+0xFFFFFFEAu; // 80186974
  goto L_801869A0; // 80186978
L_8018697C:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 8018697C
  c->r[5]=0u+0x00000000u; // 80186980
  c->r[0]=0u+0x00000005u; // 80186984
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186988
  W32(c->r[4]+0x00000024u,c->r[30]); // 8018698C
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186990
  W32(c->r[4]+0x00000028u,c->r[5]); // 80186994
  W32(c->r[3]+0x00000000u,c->r[0]); // 80186998
  W32(c->r[3]+0x00000008u,c->r[26]); // 8018699C
L_801869A0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801869A0
  if (!crb(c,2)) { goto L_801869E0; } // 801869A4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801869A8
  c->r[31]=0u+0x00000000u; // 801869AC
  cmps(c,0,(int32_t)c->r[3],0); // 801869B0
  if (!crb(c,2)) { goto L_801869C0; } // 801869B4
  c->r[31]=0u+0xFFFFFFFCu; // 801869B8
  goto L_801869C8; // 801869BC
L_801869C0:;
  W32(c->r[3]+0x0000000Cu,c->r[27]); // 801869C0
  W32(c->r[3]+0x00000010u,c->r[28]); // 801869C4
L_801869C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801869C8
  if (!crb(c,2)) { goto L_801869E0; } // 801869CC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801869D0
  c->r[4]=c->r[29]|c->r[29]; // 801869D4
  c->lr=0x801869DCu; f_80185F2C(c); // 801869D8
  c->r[31]=c->r[3]|c->r[3]; // 801869DC
L_801869E0:;
  c->r[11]=c->r[1]+0x00000030u; // 801869E0
  c->r[3]=c->r[31]|c->r[31]; // 801869E4
  c->lr=0x801869ECu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801869E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801869EC
  c->lr=c->r[0]; // 801869F0
  c->r[1]=c->r[1]+0x00000030u; // 801869F4
  return; // 801869F8
}

// IOS_Seek
void f_801869FC(Ctx* __restrict c) {
  trace_call(0x801869FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801869FC
  c->r[0]=c->lr; // 80186A00
  W32(c->r[1]+0x00000024u,c->r[0]); // 80186A04
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80186A08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80186A0C
  c->r[31]=0u+0x00000000u; // 80186A10
  W32(c->r[1]+0x00000018u,c->r[30]); // 80186A14
  c->r[30]=c->r[5]|c->r[5]; // 80186A18
  W32(c->r[1]+0x00000014u,c->r[29]); // 80186A1C
  c->r[29]=c->r[4]|c->r[4]; // 80186A20
  W32(c->r[1]+0x00000010u,c->r[28]); // 80186A24
  c->r[28]=c->r[3]|c->r[3]; // 80186A28
  if (!crb(c,2)) { goto L_80186A38; } // 80186A2C
  c->r[31]=0u+0xFFFFFFFCu; // 80186A30
  goto L_80186A80; // 80186A34
L_80186A38:;
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 80186A38
  c->r[4]=0u+0x00000040u; // 80186A3C
  c->r[5]=0u+0x00000020u; // 80186A40
  c->lr=0x80186A48u; f_80187678(c); // 80186A44
  cmps(c,0,(int32_t)c->r[3],0); // 80186A48
  W32(c->r[1]+0x00000008u,c->r[3]); // 80186A4C
  if (!crb(c,2)) { goto L_80186A5C; } // 80186A50
  c->r[31]=0u+0xFFFFFFEAu; // 80186A54
  goto L_80186A80; // 80186A58
L_80186A5C:;
  c->r[5]=0u+0x00000000u; // 80186A5C
  c->r[0]=0u+0x00000005u; // 80186A60
  W32(c->r[3]+0x00000020u,c->r[5]); // 80186A64
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186A68
  W32(c->r[4]+0x00000024u,c->r[5]); // 80186A6C
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186A70
  W32(c->r[4]+0x00000028u,c->r[5]); // 80186A74
  W32(c->r[3]+0x00000000u,c->r[0]); // 80186A78
  W32(c->r[3]+0x00000008u,c->r[28]); // 80186A7C
L_80186A80:;
  cmps(c,0,(int32_t)c->r[31],0); // 80186A80
  if (!crb(c,2)) { goto L_80186AC0; } // 80186A84
  c->r[3]=R32(c->r[1]+0x00000008u); // 80186A88
  c->r[31]=0u+0x00000000u; // 80186A8C
  cmps(c,0,(int32_t)c->r[3],0); // 80186A90
  if (!crb(c,2)) { goto L_80186AA0; } // 80186A94
  c->r[31]=0u+0xFFFFFFFCu; // 80186A98
  goto L_80186AA8; // 80186A9C
L_80186AA0:;
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 80186AA0
  W32(c->r[3]+0x00000010u,c->r[30]); // 80186AA4
L_80186AA8:;
  cmps(c,0,(int32_t)c->r[31],0); // 80186AA8
  if (!crb(c,2)) { goto L_80186AC0; } // 80186AAC
  c->r[3]=R32(c->r[1]+0x00000008u); // 80186AB0
  c->r[4]=0u+0x00000000u; // 80186AB4
  c->lr=0x80186ABCu; f_80185F2C(c); // 80186AB8
  c->r[31]=c->r[3]|c->r[3]; // 80186ABC
L_80186AC0:;
  c->r[3]=c->r[31]|c->r[31]; // 80186AC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80186AC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80186AC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80186ACC
  c->r[28]=R32(c->r[1]+0x00000010u); // 80186AD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80186AD4
  c->lr=c->r[0]; // 80186AD8
  c->r[1]=c->r[1]+0x00000020u; // 80186ADC
  return; // 80186AE0
}

// IOS_IoctlAsync
void f_80186AE4(Ctx* __restrict c) {
  trace_call(0x80186AE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186AE4
  c->r[0]=c->lr; // 80186AE8
  W32(c->r[1]+0x00000044u,c->r[0]); // 80186AEC
  c->r[11]=c->r[1]+0x00000040u; // 80186AF0
  c->lr=0x80186AF8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80186AF4
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80186AF8
  c->r[23]=c->r[3]|c->r[3]; // 80186AFC
  c->r[24]=c->r[4]|c->r[4]; // 80186B00
  c->r[25]=c->r[5]|c->r[5]; // 80186B04
  c->r[26]=c->r[6]|c->r[6]; // 80186B08
  c->r[27]=c->r[7]|c->r[7]; // 80186B0C
  c->r[28]=c->r[8]|c->r[8]; // 80186B10
  c->r[29]=c->r[9]|c->r[9]; // 80186B14
  c->r[30]=c->r[10]|c->r[10]; // 80186B18
  c->r[31]=0u+0x00000000u; // 80186B1C
  if (!crb(c,2)) { goto L_80186B2C; } // 80186B20
  c->r[31]=0u+0xFFFFFFFCu; // 80186B24
  goto L_80186B74; // 80186B28
L_80186B2C:;
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 80186B2C
  c->r[4]=0u+0x00000040u; // 80186B30
  c->r[5]=0u+0x00000020u; // 80186B34
  c->lr=0x80186B3Cu; f_80187678(c); // 80186B38
  cmps(c,0,(int32_t)c->r[3],0); // 80186B3C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80186B40
  if (!crb(c,2)) { goto L_80186B50; } // 80186B44
  c->r[31]=0u+0xFFFFFFEAu; // 80186B48
  goto L_80186B74; // 80186B4C
L_80186B50:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 80186B50
  c->r[5]=0u+0x00000000u; // 80186B54
  c->r[0]=0u+0x00000006u; // 80186B58
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186B5C
  W32(c->r[4]+0x00000024u,c->r[30]); // 80186B60
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186B64
  W32(c->r[4]+0x00000028u,c->r[5]); // 80186B68
  W32(c->r[3]+0x00000000u,c->r[0]); // 80186B6C
  W32(c->r[3]+0x00000008u,c->r[23]); // 80186B70
L_80186B74:;
  cmps(c,0,(int32_t)c->r[31],0); // 80186B74
  if (!crb(c,2)) { goto L_80186C00; } // 80186B78
  c->r[5]=R32(c->r[1]+0x00000008u); // 80186B7C
  c->r[31]=0u+0x00000000u; // 80186B80
  cmps(c,0,(int32_t)c->r[5],0); // 80186B84
  if (!crb(c,2)) { goto L_80186B94; } // 80186B88
  c->r[31]=0u+0xFFFFFFFCu; // 80186B8C
  goto L_80186BE8; // 80186B90
L_80186B94:;
  cmps(c,0,(int32_t)c->r[27],0); // 80186B94
  W32(c->r[5]+0x0000000Cu,c->r[24]); // 80186B98
  if (crb(c,2)) { goto L_80186BA8; } // 80186B9C
  c->r[0]=c->r[27]+0x80000000u; // 80186BA0
  goto L_80186BAC; // 80186BA4
L_80186BA8:;
  c->r[0]=0u+0x00000000u; // 80186BA8
L_80186BAC:;
  W32(c->r[5]+0x00000018u,c->r[0]); // 80186BAC
  cmps(c,0,(int32_t)c->r[25],0); // 80186BB0
  W32(c->r[5]+0x0000001Cu,c->r[28]); // 80186BB4
  if (crb(c,2)) { goto L_80186BC4; } // 80186BB8
  c->r[0]=c->r[25]+0x80000000u; // 80186BBC
  goto L_80186BC8; // 80186BC0
L_80186BC4:;
  c->r[0]=0u+0x00000000u; // 80186BC4
L_80186BC8:;
  W32(c->r[5]+0x00000010u,c->r[0]); // 80186BC8
  c->r[3]=c->r[25]|c->r[25]; // 80186BCC
  c->r[4]=c->r[26]|c->r[26]; // 80186BD0
  W32(c->r[5]+0x00000014u,c->r[26]); // 80186BD4
  c->lr=0x80186BDCu; f_8014F83C(c); // 80186BD8
  c->r[3]=c->r[27]|c->r[27]; // 80186BDC
  c->r[4]=c->r[28]|c->r[28]; // 80186BE0
  c->lr=0x80186BE8u; f_8014F83C(c); // 80186BE4
L_80186BE8:;
  cmps(c,0,(int32_t)c->r[31],0); // 80186BE8
  if (!crb(c,2)) { goto L_80186C00; } // 80186BEC
  c->r[3]=R32(c->r[1]+0x00000008u); // 80186BF0
  c->r[4]=c->r[29]|c->r[29]; // 80186BF4
  c->lr=0x80186BFCu; f_80185F2C(c); // 80186BF8
  c->r[31]=c->r[3]|c->r[3]; // 80186BFC
L_80186C00:;
  c->r[11]=c->r[1]+0x00000040u; // 80186C00
  c->r[3]=c->r[31]|c->r[31]; // 80186C04
  c->lr=0x80186C0Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80186C08
  c->r[0]=R32(c->r[1]+0x00000044u); // 80186C0C
  c->lr=c->r[0]; // 80186C10
  c->r[1]=c->r[1]+0x00000040u; // 80186C14
  return; // 80186C18
}

// IOS_Ioctl
void f_80186C1C(Ctx* __restrict c) {
  trace_call(0x80186C1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186C1C
  c->r[0]=c->lr; // 80186C20
  W32(c->r[1]+0x00000034u,c->r[0]); // 80186C24
  c->r[11]=c->r[1]+0x00000030u; // 80186C28
  c->lr=0x80186C30u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80186C2C
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80186C30
  c->r[25]=c->r[3]|c->r[3]; // 80186C34
  c->r[26]=c->r[4]|c->r[4]; // 80186C38
  c->r[27]=c->r[5]|c->r[5]; // 80186C3C
  c->r[28]=c->r[6]|c->r[6]; // 80186C40
  c->r[29]=c->r[7]|c->r[7]; // 80186C44
  c->r[30]=c->r[8]|c->r[8]; // 80186C48
  c->r[31]=0u+0x00000000u; // 80186C4C
  if (!crb(c,2)) { goto L_80186C5C; } // 80186C50
  c->r[31]=0u+0xFFFFFFFCu; // 80186C54
  goto L_80186CA4; // 80186C58
L_80186C5C:;
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 80186C5C
  c->r[4]=0u+0x00000040u; // 80186C60
  c->r[5]=0u+0x00000020u; // 80186C64
  c->lr=0x80186C6Cu; f_80187678(c); // 80186C68
  cmps(c,0,(int32_t)c->r[3],0); // 80186C6C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80186C70
  if (!crb(c,2)) { goto L_80186C80; } // 80186C74
  c->r[31]=0u+0xFFFFFFEAu; // 80186C78
  goto L_80186CA4; // 80186C7C
L_80186C80:;
  c->r[5]=0u+0x00000000u; // 80186C80
  c->r[0]=0u+0x00000006u; // 80186C84
  W32(c->r[3]+0x00000020u,c->r[5]); // 80186C88
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186C8C
  W32(c->r[4]+0x00000024u,c->r[5]); // 80186C90
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186C94
  W32(c->r[4]+0x00000028u,c->r[5]); // 80186C98
  W32(c->r[3]+0x00000000u,c->r[0]); // 80186C9C
  W32(c->r[3]+0x00000008u,c->r[25]); // 80186CA0
L_80186CA4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80186CA4
  if (!crb(c,2)) { goto L_80186D30; } // 80186CA8
  c->r[5]=R32(c->r[1]+0x00000008u); // 80186CAC
  c->r[31]=0u+0x00000000u; // 80186CB0
  cmps(c,0,(int32_t)c->r[5],0); // 80186CB4
  if (!crb(c,2)) { goto L_80186CC4; } // 80186CB8
  c->r[31]=0u+0xFFFFFFFCu; // 80186CBC
  goto L_80186D18; // 80186CC0
L_80186CC4:;
  cmps(c,0,(int32_t)c->r[29],0); // 80186CC4
  W32(c->r[5]+0x0000000Cu,c->r[26]); // 80186CC8
  if (crb(c,2)) { goto L_80186CD8; } // 80186CCC
  c->r[0]=c->r[29]+0x80000000u; // 80186CD0
  goto L_80186CDC; // 80186CD4
L_80186CD8:;
  c->r[0]=0u+0x00000000u; // 80186CD8
L_80186CDC:;
  W32(c->r[5]+0x00000018u,c->r[0]); // 80186CDC
  cmps(c,0,(int32_t)c->r[27],0); // 80186CE0
  W32(c->r[5]+0x0000001Cu,c->r[30]); // 80186CE4
  if (crb(c,2)) { goto L_80186CF4; } // 80186CE8
  c->r[0]=c->r[27]+0x80000000u; // 80186CEC
  goto L_80186CF8; // 80186CF0
L_80186CF4:;
  c->r[0]=0u+0x00000000u; // 80186CF4
L_80186CF8:;
  W32(c->r[5]+0x00000010u,c->r[0]); // 80186CF8
  c->r[3]=c->r[27]|c->r[27]; // 80186CFC
  c->r[4]=c->r[28]|c->r[28]; // 80186D00
  W32(c->r[5]+0x00000014u,c->r[28]); // 80186D04
  c->lr=0x80186D0Cu; f_8014F83C(c); // 80186D08
  c->r[3]=c->r[29]|c->r[29]; // 80186D0C
  c->r[4]=c->r[30]|c->r[30]; // 80186D10
  c->lr=0x80186D18u; f_8014F83C(c); // 80186D14
L_80186D18:;
  cmps(c,0,(int32_t)c->r[31],0); // 80186D18
  if (!crb(c,2)) { goto L_80186D30; } // 80186D1C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80186D20
  c->r[4]=0u+0x00000000u; // 80186D24
  c->lr=0x80186D2Cu; f_80185F2C(c); // 80186D28
  c->r[31]=c->r[3]|c->r[3]; // 80186D2C
L_80186D30:;
  c->r[11]=c->r[1]+0x00000030u; // 80186D30
  c->r[3]=c->r[31]|c->r[31]; // 80186D34
  c->lr=0x80186D3Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80186D38
  c->r[0]=R32(c->r[1]+0x00000034u); // 80186D3C
  c->lr=c->r[0]; // 80186D40
  c->r[1]=c->r[1]+0x00000030u; // 80186D44
  return; // 80186D48
}

// __ios_Ioctlv
void f_80186D4C(Ctx* __restrict c) {
  trace_call(0x80186D4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186D4C
  c->r[0]=c->lr; // 80186D50
  W32(c->r[1]+0x00000024u,c->r[0]); // 80186D54
  c->r[11]=c->r[1]+0x00000020u; // 80186D58
  c->lr=0x80186D60u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80186D5C
  cmps(c,0,(int32_t)c->r[3],0); // 80186D60
  c->r[29]=c->r[3]|c->r[3]; // 80186D64
  c->r[30]=c->r[7]|c->r[7]; // 80186D68
  c->r[31]=0u+0x00000000u; // 80186D6C
  if (!crb(c,2)) { goto L_80186D7C; } // 80186D70
  c->r[31]=0u+0xFFFFFFFCu; // 80186D74
  goto L_80186E6C; // 80186D78
L_80186D7C:;
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80186D7C
  c->r[27]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80186D80
  c->r[26]=0u+0x00000000u; // 80186D84
  c->r[28]=0u+0x00000000u; // 80186D88
  W32(c->r[3]+0x00000010u,c->r[5]); // 80186D8C
  W32(c->r[3]+0x00000014u,c->r[6]); // 80186D90
  W32(c->r[3]+0x00000018u,c->r[7]); // 80186D94
  goto L_80186DE0; // 80186D98
L_80186D9C:;
  c->r[3]=R32(c->r[29]+0x00000018u); // 80186D9C
  c->r[0]=c->r[28]+c->r[27]; // 80186DA0
  c->r[4]=c->r[3]+c->r[0]; // 80186DA4
  c->r[3]=R32(c->r[3]+c->r[0]); // 80186DA8
  c->r[4]=R32(c->r[4]+0x00000004u); // 80186DAC
  c->lr=0x80186DB4u; f_8014F83C(c); // 80186DB0
  c->r[4]=R32(c->r[29]+0x00000018u); // 80186DB4
  c->r[3]=c->r[28]+c->r[27]; // 80186DB8
  c->r[5]=R32(c->r[4]+c->r[3]); // 80186DBC
  cmps(c,0,(int32_t)c->r[5],0); // 80186DC0
  if (crb(c,2)) { goto L_80186DD0; } // 80186DC4
  c->r[0]=c->r[5]+0x80000000u; // 80186DC8
  goto L_80186DD4; // 80186DCC
L_80186DD0:;
  c->r[0]=0u+0x00000000u; // 80186DD0
L_80186DD4:;
  W32(c->r[4]+c->r[3],c->r[0]); // 80186DD4
  c->r[28]=c->r[28]+0x00000008u; // 80186DD8
  c->r[26]=c->r[26]+0x00000001u; // 80186DDC
L_80186DE0:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 80186DE0
  cmpu(c,0,c->r[26],c->r[0]); // 80186DE4
  if (crb(c,0)) { IRQCHK(c); goto L_80186D9C; } // 80186DE8
  c->r[27]=0u+0x00000000u; // 80186DEC
  c->r[28]=0u+0x00000000u; // 80186DF0
  goto L_80186E34; // 80186DF4
L_80186DF8:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 80186DF8
  c->r[4]=c->r[0]+c->r[28]; // 80186DFC
  c->r[3]=R32(c->r[28]+c->r[0]); // 80186E00
  c->r[4]=R32(c->r[4]+0x00000004u); // 80186E04
  c->lr=0x80186E0Cu; f_8014F83C(c); // 80186E08
  c->r[3]=R32(c->r[29]+0x00000018u); // 80186E0C
  c->r[4]=R32(c->r[3]+c->r[28]); // 80186E10
  cmps(c,0,(int32_t)c->r[4],0); // 80186E14
  if (crb(c,2)) { goto L_80186E24; } // 80186E18
  c->r[0]=c->r[4]+0x80000000u; // 80186E1C
  goto L_80186E28; // 80186E20
L_80186E24:;
  c->r[0]=0u+0x00000000u; // 80186E24
L_80186E28:;
  W32(c->r[3]+c->r[28],c->r[0]); // 80186E28
  c->r[28]=c->r[28]+0x00000008u; // 80186E2C
  c->r[27]=c->r[27]+0x00000001u; // 80186E30
L_80186E34:;
  c->r[4]=R32(c->r[29]+0x00000010u); // 80186E34
  cmpu(c,0,c->r[27],c->r[4]); // 80186E38
  if (crb(c,0)) { IRQCHK(c); goto L_80186DF8; } // 80186E3C
  c->r[0]=R32(c->r[29]+0x00000014u); // 80186E40
  c->r[3]=R32(c->r[29]+0x00000018u); // 80186E44
  c->r[0]=c->r[4]+c->r[0]; // 80186E48
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80186E4C
  c->lr=0x80186E54u; f_8014F83C(c); // 80186E50
  cmps(c,0,(int32_t)c->r[30],0); // 80186E54
  if (crb(c,2)) { goto L_80186E64; } // 80186E58
  c->r[0]=c->r[30]+0x80000000u; // 80186E5C
  goto L_80186E68; // 80186E60
L_80186E64:;
  c->r[0]=0u+0x00000000u; // 80186E64
L_80186E68:;
  W32(c->r[29]+0x00000018u,c->r[0]); // 80186E68
L_80186E6C:;
  c->r[11]=c->r[1]+0x00000020u; // 80186E6C
  c->r[3]=c->r[31]|c->r[31]; // 80186E70
  c->lr=0x80186E78u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80186E74
  c->r[0]=R32(c->r[1]+0x00000024u); // 80186E78
  c->lr=c->r[0]; // 80186E7C
  c->r[1]=c->r[1]+0x00000020u; // 80186E80
  return; // 80186E84
}

// IOS_IoctlvAsync
void f_80186E88(Ctx* __restrict c) {
  trace_call(0x80186E88u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186E88
  c->r[0]=c->lr; // 80186E8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80186E90
  c->r[11]=c->r[1]+0x00000030u; // 80186E94
  c->lr=0x80186E9Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80186E98
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80186E9C
  c->r[24]=c->r[3]|c->r[3]; // 80186EA0
  c->r[25]=c->r[4]|c->r[4]; // 80186EA4
  c->r[26]=c->r[5]|c->r[5]; // 80186EA8
  c->r[27]=c->r[6]|c->r[6]; // 80186EAC
  c->r[28]=c->r[7]|c->r[7]; // 80186EB0
  c->r[29]=c->r[8]|c->r[8]; // 80186EB4
  c->r[30]=c->r[9]|c->r[9]; // 80186EB8
  c->r[31]=0u+0x00000000u; // 80186EBC
  if (!crb(c,2)) { goto L_80186ECC; } // 80186EC0
  c->r[31]=0u+0xFFFFFFFCu; // 80186EC4
  goto L_80186F14; // 80186EC8
L_80186ECC:;
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 80186ECC
  c->r[4]=0u+0x00000040u; // 80186ED0
  c->r[5]=0u+0x00000020u; // 80186ED4
  c->lr=0x80186EDCu; f_80187678(c); // 80186ED8
  cmps(c,0,(int32_t)c->r[3],0); // 80186EDC
  W32(c->r[1]+0x00000008u,c->r[3]); // 80186EE0
  if (!crb(c,2)) { goto L_80186EF0; } // 80186EE4
  c->r[31]=0u+0xFFFFFFEAu; // 80186EE8
  goto L_80186F14; // 80186EEC
L_80186EF0:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 80186EF0
  c->r[5]=0u+0x00000000u; // 80186EF4
  c->r[0]=0u+0x00000007u; // 80186EF8
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186EFC
  W32(c->r[4]+0x00000024u,c->r[30]); // 80186F00
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186F04
  W32(c->r[4]+0x00000028u,c->r[5]); // 80186F08
  W32(c->r[3]+0x00000000u,c->r[0]); // 80186F0C
  W32(c->r[3]+0x00000008u,c->r[24]); // 80186F10
L_80186F14:;
  cmps(c,0,(int32_t)c->r[31],0); // 80186F14
  if (!crb(c,2)) { goto L_80186F50; } // 80186F18
  c->r[3]=R32(c->r[1]+0x00000008u); // 80186F1C
  c->r[4]=c->r[25]|c->r[25]; // 80186F20
  c->r[5]=c->r[26]|c->r[26]; // 80186F24
  c->r[6]=c->r[27]|c->r[27]; // 80186F28
  c->r[7]=c->r[28]|c->r[28]; // 80186F2C
  c->lr=0x80186F34u; f_80186D4C(c); // 80186F30
  cmps(c,0,(int32_t)c->r[3],0); // 80186F34
  c->r[31]=c->r[3]|c->r[3]; // 80186F38
  if (!crb(c,2)) { goto L_80186F50; } // 80186F3C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80186F40
  c->r[4]=c->r[29]|c->r[29]; // 80186F44
  c->lr=0x80186F4Cu; f_80185F2C(c); // 80186F48
  c->r[31]=c->r[3]|c->r[3]; // 80186F4C
L_80186F50:;
  c->r[11]=c->r[1]+0x00000030u; // 80186F50
  c->r[3]=c->r[31]|c->r[31]; // 80186F54
  c->lr=0x80186F5Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80186F58
  c->r[0]=R32(c->r[1]+0x00000034u); // 80186F5C
  c->lr=c->r[0]; // 80186F60
  c->r[1]=c->r[1]+0x00000030u; // 80186F64
  return; // 80186F68
}

// IOS_Ioctlv
void f_80186F6C(Ctx* __restrict c) {
  trace_call(0x80186F6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186F6C
  c->r[0]=c->lr; // 80186F70
  W32(c->r[1]+0x00000034u,c->r[0]); // 80186F74
  c->r[11]=c->r[1]+0x00000030u; // 80186F78
  c->lr=0x80186F80u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80186F7C
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80186F80
  c->r[26]=c->r[3]|c->r[3]; // 80186F84
  c->r[27]=c->r[4]|c->r[4]; // 80186F88
  c->r[28]=c->r[5]|c->r[5]; // 80186F8C
  c->r[29]=c->r[6]|c->r[6]; // 80186F90
  c->r[30]=c->r[7]|c->r[7]; // 80186F94
  c->r[31]=0u+0x00000000u; // 80186F98
  if (!crb(c,2)) { goto L_80186FA8; } // 80186F9C
  c->r[31]=0u+0xFFFFFFFCu; // 80186FA0
  goto L_80186FF0; // 80186FA4
L_80186FA8:;
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 80186FA8
  c->r[4]=0u+0x00000040u; // 80186FAC
  c->r[5]=0u+0x00000020u; // 80186FB0
  c->lr=0x80186FB8u; f_80187678(c); // 80186FB4
  cmps(c,0,(int32_t)c->r[3],0); // 80186FB8
  W32(c->r[1]+0x00000008u,c->r[3]); // 80186FBC
  if (!crb(c,2)) { goto L_80186FCC; } // 80186FC0
  c->r[31]=0u+0xFFFFFFEAu; // 80186FC4
  goto L_80186FF0; // 80186FC8
L_80186FCC:;
  c->r[5]=0u+0x00000000u; // 80186FCC
  c->r[0]=0u+0x00000007u; // 80186FD0
  W32(c->r[3]+0x00000020u,c->r[5]); // 80186FD4
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186FD8
  W32(c->r[4]+0x00000024u,c->r[5]); // 80186FDC
  c->r[4]=R32(c->r[1]+0x00000008u); // 80186FE0
  W32(c->r[4]+0x00000028u,c->r[5]); // 80186FE4
  W32(c->r[3]+0x00000000u,c->r[0]); // 80186FE8
  W32(c->r[3]+0x00000008u,c->r[26]); // 80186FEC
L_80186FF0:;
  cmps(c,0,(int32_t)c->r[31],0); // 80186FF0
  if (!crb(c,2)) { goto L_8018702C; } // 80186FF4
  c->r[3]=R32(c->r[1]+0x00000008u); // 80186FF8
  c->r[4]=c->r[27]|c->r[27]; // 80186FFC
  c->r[5]=c->r[28]|c->r[28]; // 80187000
  c->r[6]=c->r[29]|c->r[29]; // 80187004
  c->r[7]=c->r[30]|c->r[30]; // 80187008
  c->lr=0x80187010u; f_80186D4C(c); // 8018700C
  cmps(c,0,(int32_t)c->r[3],0); // 80187010
  c->r[31]=c->r[3]|c->r[3]; // 80187014
  if (!crb(c,2)) { goto L_8018702C; } // 80187018
  c->r[3]=R32(c->r[1]+0x00000008u); // 8018701C
  c->r[4]=0u+0x00000000u; // 80187020
  c->lr=0x80187028u; f_80185F2C(c); // 80187024
  c->r[31]=c->r[3]|c->r[3]; // 80187028
L_8018702C:;
  c->r[11]=c->r[1]+0x00000030u; // 8018702C
  c->r[3]=c->r[31]|c->r[31]; // 80187030
  c->lr=0x80187038u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80187034
  c->r[0]=R32(c->r[1]+0x00000034u); // 80187038
  c->lr=c->r[0]; // 8018703C
  c->r[1]=c->r[1]+0x00000030u; // 80187040
  return; // 80187044
}

// IOS_IoctlvReboot
void f_80187048(Ctx* __restrict c) {
  trace_call(0x80187048u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80187048
  c->r[0]=c->lr; // 8018704C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80187050
  c->r[11]=c->r[1]+0x00000030u; // 80187054
  c->lr=0x8018705Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80187058
  c->r[26]=c->r[3]|c->r[3]; // 8018705C
  c->r[27]=c->r[4]|c->r[4]; // 80187060
  c->r[28]=c->r[5]|c->r[5]; // 80187064
  c->r[30]=c->r[6]|c->r[6]; // 80187068
  c->r[29]=c->r[7]|c->r[7]; // 8018706C
  c->lr=0x80187074u; f_80154410(c); // 80187070
  c->r[0]=R32(c->r[13]+0xFFFFAF60u); // 80187074
  cmps(c,0,(int32_t)c->r[0],0); // 80187078
  if (crb(c,2)) { goto L_8018708C; } // 8018707C
  c->lr=0x80187084u; f_80154438(c); // 80187080
  c->r[31]=0u+0xFFFFFFF6u; // 80187084
  goto L_80187328; // 80187088
L_8018708C:;
  c->r[0]=0u+0x00000001u; // 8018708C
  W32(c->r[13]+0xFFFFAF60u,c->r[0]); // 80187090
  c->lr=0x80187098u; f_80154438(c); // 80187094
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 80187098
  c->r[31]=0u+0x00000000u; // 8018709C
  if (!crb(c,2)) { goto L_801870AC; } // 801870A0
  c->r[31]=0u+0xFFFFFFFCu; // 801870A4
  goto L_801870F4; // 801870A8
L_801870AC:;
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 801870AC
  c->r[4]=0u+0x00000040u; // 801870B0
  c->r[5]=0u+0x00000020u; // 801870B4
  c->lr=0x801870BCu; f_80187678(c); // 801870B8
  cmps(c,0,(int32_t)c->r[3],0); // 801870BC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801870C0
  if (!crb(c,2)) { goto L_801870D0; } // 801870C4
  c->r[31]=0u+0xFFFFFFEAu; // 801870C8
  goto L_801870F4; // 801870CC
L_801870D0:;
  c->r[5]=0u+0x00000000u; // 801870D0
  c->r[0]=0u+0x00000007u; // 801870D4
  W32(c->r[3]+0x00000020u,c->r[5]); // 801870D8
  c->r[4]=R32(c->r[1]+0x00000008u); // 801870DC
  W32(c->r[4]+0x00000024u,c->r[5]); // 801870E0
  c->r[4]=R32(c->r[1]+0x00000008u); // 801870E4
  W32(c->r[4]+0x00000028u,c->r[5]); // 801870E8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801870EC
  W32(c->r[3]+0x00000008u,c->r[26]); // 801870F0
L_801870F4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801870F4
  if (!crb(c,2)) { goto L_80187300; } // 801870F8
  c->r[3]=R32(c->r[1]+0x00000008u); // 801870FC
  c->r[0]=0u+0x00000001u; // 80187100
  c->r[4]=c->r[27]|c->r[27]; // 80187104
  c->r[5]=c->r[28]|c->r[28]; // 80187108
  W32(c->r[13]+0xFFFFAF68u,c->r[3]); // 8018710C
  c->r[6]=c->r[30]|c->r[30]; // 80187110
  c->r[7]=c->r[29]|c->r[29]; // 80187114
  W32(c->r[3]+0x00000028u,c->r[0]); // 80187118
  c->r[3]=R32(c->r[1]+0x00000008u); // 8018711C
  c->lr=0x80187124u; f_80186D4C(c); // 80187120
  cmps(c,0,(int32_t)c->r[3],0); // 80187124
  c->r[31]=c->r[3]|c->r[3]; // 80187128
  if (!crb(c,2)) { goto L_80187300; } // 8018712C
  c->r[29]=0u+0x80470000u; // 80187130
  c->r[4]=R32(c->r[1]+0x00000008u); // 80187134
  c->r[3]=c->r[29]+0xFFFF8120u; // 80187138
  c->r[5]=0u+0x00000040u; // 8018713C
  c->lr=0x80187144u; f_80004338(c); // 80187140
  c->r[3]=c->r[29]+0xFFFF8120u; // 80187144
  c->r[29]=R32(c->r[1]+0x00000008u); // 80187148
  W32(c->r[13]+0xFFFFAF64u,c->r[3]); // 8018714C
  c->r[3]=c->r[3]+0x0000002Cu; // 80187150
  c->lr=0x80187158u; f_8015715C(c); // 80187154
  c->r[3]=c->r[29]|c->r[29]; // 80187158
  c->r[4]=0u+0x00000020u; // 8018715C
  c->lr=0x80187164u; f_8014F83C(c); // 80187160
  c->lr=0x80187168u; f_80154410(c); // 80187164
  c->r[4]=0u+0x80470000u; // 80187168
  c->r[30]=c->r[3]|c->r[3]; // 8018716C
  c->r[3]=c->r[4]+0xFFFF80C0u; // 80187170
  c->r[0]=R32(c->r[4]+0xFFFF80C0u); // 80187174
  c->r[3]=R32(c->r[3]+0x00000004u); // 80187178
  c->r[31]=0u+0x00000000u; // 8018717C
  cmpu(c,0,c->r[3],c->r[0]); // 80187180
  if (!crb(c,0)) { goto L_80187194; } // 80187184
  c->r[0]=addc(c,~c->r[0],0x00000000u,1); // 80187188
  c->r[0]=c->r[0]+c->r[3]; // 8018718C
  goto L_801871B0; // 80187190
L_80187194:;
  c->r[4]=c->r[3]-c->r[0]; // 80187194
  c->r[3]=0u+0x00000010u; // 80187198
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 8018719C
  c->r[3]=c->r[4]|~c->r[3]; // 801871A0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801871A4
  c->r[0]=c->r[3]-c->r[0]; // 801871A8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801871AC
L_801871B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801871B0
  if (crb(c,2)) { goto L_801871C0; } // 801871B4
  c->r[31]=0u+0xFFFFFFF8u; // 801871B8
  goto L_80187200; // 801871BC
L_801871C0:;
  c->r[6]=0u+0x80470000u; // 801871C0
  c->r[3]=c->r[29]|c->r[29]; // 801871C4
  c->r[6]=c->r[6]+0xFFFF80C0u; // 801871C8
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 801871CC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801871D0
  c->r[4]=c->r[6]+c->r[0]; // 801871D4
  W32(c->r[4]+0x00000010u,c->r[29]); // 801871D8
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801871DC
  c->r[4]=R32(c->r[6]+0x00000004u); // 801871E0
  c->r[0]=c->r[5]+0x00000001u; // 801871E4
  c->r[5]=rotl(c->r[0],0)&0x0000000Fu; // 801871E8
  c->r[0]=c->r[4]+0x00000001u; // 801871EC
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 801871F0
  W32(c->r[6]+0x00000004u,c->r[0]); // 801871F4
  c->r[4]=R32(c->r[29]+0x00000008u); // 801871F8
  c->lr=0x80187200u; f_80187920(c); // 801871FC
L_80187200:;
  cmps(c,0,(int32_t)c->r[31],0); // 80187200
  if (crb(c,2)) { goto L_80187214; } // 80187204
  c->r[3]=c->r[30]|c->r[30]; // 80187208
  c->lr=0x80187210u; f_80154438(c); // 8018720C
  goto L_80187300; // 80187210
L_80187214:;
  c->r[0]=R32(c->r[13]+0xFFFF92E8u); // 80187214
  cmps(c,0,(int32_t)c->r[0],0); // 80187218
  if (!crb(c,1)) { goto L_801872E4; } // 8018721C
  c->r[4]=0u+0x80470000u; // 80187220
  c->r[3]=c->r[4]+0xFFFF80C0u; // 80187224
  c->r[0]=R32(c->r[4]+0xFFFF80C0u); // 80187228
  c->r[3]=R32(c->r[3]+0x00000004u); // 8018722C
  cmpu(c,0,c->r[3],c->r[0]); // 80187230
  if (!crb(c,0)) { goto L_80187244; } // 80187234
  c->r[0]=addc(c,~c->r[0],0x00000000u,1); // 80187238
  c->r[0]=c->r[0]+c->r[3]; // 8018723C
  goto L_80187250; // 80187240
L_80187244:;
  c->r[0]=c->r[3]-c->r[0]; // 80187244
  c->r[0]=cntlz(c->r[0]); // 80187248
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8018724C
L_80187250:;
  cmps(c,0,(int32_t)c->r[0],0); // 80187250
  if (!crb(c,2)) { goto L_801872E4; } // 80187254
  c->r[3]=0u+0x80470000u; // 80187258
  c->r[3]=c->r[3]+0xFFFF80C0u; // 8018725C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80187260
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80187264
  c->r[3]=c->r[3]+c->r[0]; // 80187268
  c->r[4]=R32(c->r[3]+0x00000010u); // 8018726C
  cmps(c,0,(int32_t)c->r[4],0); // 80187270
  if (crb(c,2)) { goto L_801872E4; } // 80187274
  c->r[0]=R32(c->r[4]+0x00000028u); // 80187278
  cmps(c,0,(int32_t)c->r[0],0); // 8018727C
  if (crb(c,2)) { goto L_80187290; } // 80187280
  c->r[3]=R32(c->r[13]+0xFFFF92E8u); // 80187284
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80187288
  W32(c->r[13]+0xFFFF92E8u,c->r[0]); // 8018728C
L_80187290:;
  c->r[4]=c->r[4]+0x80000000u; // 80187290
  c->r[3]=0u+0x00000000u; // 80187294
  c->lr=0x8018729Cu; f_801859AC(c); // 80187298
  c->r[7]=0u+0x80470000u; // 8018729C
  c->r[3]=R32(c->r[13]+0xFFFF92E8u); // 801872A0
  c->r[6]=c->r[7]+0xFFFF80C0u; // 801872A4
  c->r[4]=R32(c->r[7]+0xFFFF80C0u); // 801872A8
  c->r[5]=R32(c->r[6]+0x00000008u); // 801872AC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801872B0
  W32(c->r[13]+0xFFFF92E8u,c->r[0]); // 801872B4
  c->r[4]=c->r[4]+0x00000001u; // 801872B8
  c->r[0]=c->r[5]+0x00000001u; // 801872BC
  c->r[3]=0u+0x00000001u; // 801872C0
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 801872C4
  W32(c->r[7]+0xFFFF80C0u,c->r[4]); // 801872C8
  W32(c->r[6]+0x00000008u,c->r[0]); // 801872CC
  c->lr=0x801872D4u; f_8018599C(c); // 801872D0
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 801872D4
  c->r[3]=0u+0x00000001u; // 801872D8
  c->r[4]=c->r[0]|0x00000001u; // 801872DC
  c->lr=0x801872E4u; f_801859AC(c); // 801872E0
L_801872E4:;
  c->r[3]=R32(c->r[13]+0xFFFFAF64u); // 801872E4
  c->r[3]=c->r[3]+0x0000002Cu; // 801872E8
  c->lr=0x801872F0u; f_801581D4(c); // 801872EC
  c->r[3]=c->r[30]|c->r[30]; // 801872F0
  c->lr=0x801872F8u; f_80154438(c); // 801872F4
  c->r[3]=R32(c->r[13]+0xFFFFAF64u); // 801872F8
  c->r[31]=R32(c->r[3]+0x00000004u); // 801872FC
L_80187300:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 80187300
  c->r[0]=0u+0x00000000u; // 80187304
  W32(c->r[13]+0xFFFFAF60u,c->r[0]); // 80187308
  cmps(c,0,(int32_t)c->r[4],0); // 8018730C
  W32(c->r[13]+0xFFFFAF68u,c->r[0]); // 80187310
  if (crb(c,2)) { goto L_80187328; } // 80187314
  cmps(c,0,(int32_t)c->r[31],0); // 80187318
  if (crb(c,2)) { goto L_80187328; } // 8018731C
  c->r[3]=R32(c->r[13]+0xFFFF92ECu); // 80187320
  c->lr=0x80187328u; f_8018767C(c); // 80187324
L_80187328:;
  c->r[11]=c->r[1]+0x00000030u; // 80187328
  c->r[3]=c->r[31]|c->r[31]; // 8018732C
  c->lr=0x80187334u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80187330
  c->r[0]=R32(c->r[1]+0x00000034u); // 80187334
  c->lr=c->r[0]; // 80187338
  c->r[1]=c->r[1]+0x00000030u; // 8018733C
  return; // 80187340
}

// iosCreateHeap
void f_80187344(Ctx* __restrict c) {
  trace_call(0x80187344u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80187344
  c->r[0]=c->lr; // 80187348
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018734C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80187350
  c->r[31]=0u+0xFFFFFFFCu; // 80187354
  W32(c->r[1]+0x00000018u,c->r[30]); // 80187358
  c->r[30]=c->r[4]|c->r[4]; // 8018735C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80187360
  c->r[29]=c->r[3]|c->r[3]; // 80187364
  c->lr=0x8018736Cu; f_80154410(c); // 80187368
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; cr0(c,c->r[0]); // 8018736C
  if (!crb(c,2)) { goto L_80187450; } // 80187370
  c->r[4]=0u+0x80470000u; // 80187374
  {uint32_t ea=c->r[4]+0xFFFF8160u; c->r[0]=R32(ea); c->r[4]=ea;} // 80187378
  c->r[31]=0u+0x00000000u; // 8018737C
  cmps(c,0,(int32_t)c->r[0],0); // 80187380
  if (crb(c,2)) { goto L_801873FC; } // 80187384
  c->r[0]=R32(c->r[4]+0x00000010u); // 80187388
  c->r[31]=0u+0x00000001u; // 8018738C
  cmps(c,0,(int32_t)c->r[0],0); // 80187390
  if (crb(c,2)) { goto L_801873FC; } // 80187394
  c->r[0]=R32(c->r[4]+0x00000020u); // 80187398
  c->r[31]=0u+0x00000002u; // 8018739C
  cmps(c,0,(int32_t)c->r[0],0); // 801873A0
  if (crb(c,2)) { goto L_801873FC; } // 801873A4
  c->r[0]=R32(c->r[4]+0x00000030u); // 801873A8
  c->r[31]=0u+0x00000003u; // 801873AC
  cmps(c,0,(int32_t)c->r[0],0); // 801873B0
  if (crb(c,2)) { goto L_801873FC; } // 801873B4
  c->r[0]=R32(c->r[4]+0x00000040u); // 801873B8
  c->r[31]=0u+0x00000004u; // 801873BC
  cmps(c,0,(int32_t)c->r[0],0); // 801873C0
  if (crb(c,2)) { goto L_801873FC; } // 801873C4
  c->r[0]=R32(c->r[4]+0x00000050u); // 801873C8
  c->r[31]=0u+0x00000005u; // 801873CC
  cmps(c,0,(int32_t)c->r[0],0); // 801873D0
  if (crb(c,2)) { goto L_801873FC; } // 801873D4
  c->r[0]=R32(c->r[4]+0x00000060u); // 801873D8
  c->r[31]=0u+0x00000006u; // 801873DC
  cmps(c,0,(int32_t)c->r[0],0); // 801873E0
  if (crb(c,2)) { goto L_801873FC; } // 801873E4
  c->r[0]=R32(c->r[4]+0x00000070u); // 801873E8
  c->r[31]=0u+0x00000007u; // 801873EC
  cmps(c,0,(int32_t)c->r[0],0); // 801873F0
  if (crb(c,2)) { goto L_801873FC; } // 801873F4
  c->r[31]=0u+0x00000008u; // 801873F8
L_801873FC:;
  cmps(c,0,(int32_t)c->r[31],8); // 801873FC
  if (!crb(c,2)) { goto L_8018740C; } // 80187400
  c->r[31]=0u+0xFFFFFFFBu; // 80187404
  goto L_80187450; // 80187408
L_8018740C:;
  c->r[5]=0u+0x80470000u; // 8018740C
  c->r[0]=rotl(c->r[31],4)&0xFFFFFFF0u; // 80187410
  c->r[5]=c->r[5]+0xFFFF8160u; // 80187414
  c->r[4]=0u+0xBABE0000u; // 80187418
  c->r[6]=c->r[5]+c->r[0]; // 8018741C
  c->r[0]=0u+0x00000000u; // 80187420
  W32(c->r[6]+0x00000000u,c->r[29]); // 80187424
  c->r[5]=c->r[30]+0xFFFFFFF0u; // 80187428
  W32(c->r[6]+0x00000008u,c->r[30]); // 8018742C
  W32(c->r[6]+0x0000000Cu,c->r[29]); // 80187430
  W32(c->r[29]+0x00000000u,c->r[4]); // 80187434
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 80187438
  W32(c->r[4]+0x00000004u,c->r[5]); // 8018743C
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 80187440
  W32(c->r[4]+0x00000008u,c->r[0]); // 80187444
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 80187448
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8018744C
L_80187450:;
  c->lr=0x80187454u; f_80154438(c); // 80187450
  c->r[3]=c->r[31]|c->r[31]; // 80187454
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80187458
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018745C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80187460
  c->r[0]=R32(c->r[1]+0x00000024u); // 80187464
  c->lr=c->r[0]; // 80187468
  c->r[1]=c->r[1]+0x00000020u; // 8018746C
  return; // 80187470
}

// __iosAlloc
void f_80187474(Ctx* __restrict c) {
  trace_call(0x80187474u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80187474
  c->r[0]=c->lr; // 80187478
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018747C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80187480
  c->r[31]=0u+0x00000000u; // 80187484
  W32(c->r[1]+0x00000018u,c->r[30]); // 80187488
  c->r[30]=c->r[5]|c->r[5]; // 8018748C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80187490
  c->r[29]=c->r[4]|c->r[4]; // 80187494
  W32(c->r[1]+0x00000010u,c->r[28]); // 80187498
  c->r[28]=c->r[3]|c->r[3]; // 8018749C
  c->lr=0x801874A4u; f_80154410(c); // 801874A0
  cmps(c,0,(int32_t)c->r[29],0); // 801874A4
  if (crb(c,2)) { goto L_80187650; } // 801874A8
  cmps(c,0,(int32_t)c->r[30],0); // 801874AC
  if (crb(c,2)) { goto L_80187650; } // 801874B0
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 801874B4
  c->r[0]=c->r[30]&c->r[0]; cr0(c,c->r[0]); // 801874B8
  if (!crb(c,2)) { goto L_80187650; } // 801874BC
  cmpu(c,0,c->r[30],0x00000020u); // 801874C0
  if (!crb(c,0)) { goto L_801874CC; } // 801874C4
  c->r[30]=0u+0x00000020u; // 801874C8
L_801874CC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801874CC
  c->r[0]=c->r[29]+0x0000001Fu; // 801874D0
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801874D4
  if (crb(c,0)) { goto L_801874FC; } // 801874D8
  cmps(c,0,(int32_t)c->r[28],8); // 801874DC
  if (!crb(c,0)) { goto L_801874FC; } // 801874E0
  c->r[4]=0u+0x80470000u; // 801874E4
  c->r[0]=rotl(c->r[28],4)&0xFFFFFFF0u; // 801874E8
  c->r[4]=c->r[4]+0xFFFF8160u; // 801874EC
  {uint32_t ea=c->r[4]+c->r[0]; c->r[0]=R32(ea); c->r[4]=ea;} // 801874F0
  cmps(c,0,(int32_t)c->r[0],0); // 801874F4
  if (!crb(c,2)) { goto L_80187504; } // 801874F8
L_801874FC:;
  c->r[31]=0u+0x00000000u; // 801874FC
  goto L_80187650; // 80187500
L_80187504:;
  c->r[8]=R32(c->r[4]+0x0000000Cu); // 80187504
  c->r[6]=c->r[30]+0xFFFFFFFFu; // 80187508
  c->r[5]=0u+0x00000000u; // 8018750C
  goto L_80187568; // 80187510
L_80187514:;
  c->r[7]=R32(c->r[8]+0x00000004u); // 80187514
  c->r[0]=c->r[8]+0x00000010u; // 80187518
  c->r[0]=c->r[0]&c->r[6]; // 8018751C
  cmpu(c,0,c->r[7],c->r[29]); // 80187520
  c->r[0]=c->r[30]-c->r[0]; // 80187524
  c->r[0]=c->r[6]&c->r[0]; // 80187528
  if (!crb(c,2)) { goto L_80187540; } // 8018752C
  cmps(c,0,(int32_t)c->r[0],0); // 80187530
  if (!crb(c,2)) { goto L_80187540; } // 80187534
  c->r[5]=c->r[8]|c->r[8]; // 80187538
  goto L_80187570; // 8018753C
L_80187540:;
  c->r[0]=c->r[29]+c->r[0]; // 80187540
  cmpu(c,0,c->r[7],c->r[0]); // 80187544
  if (crb(c,0)) { goto L_80187564; } // 80187548
  cmps(c,0,(int32_t)c->r[5],0); // 8018754C
  if (crb(c,2)) { goto L_80187560; } // 80187550
  c->r[0]=R32(c->r[5]+0x00000004u); // 80187554
  cmpu(c,0,c->r[7],c->r[0]); // 80187558
  if (!crb(c,0)) { goto L_80187564; } // 8018755C
L_80187560:;
  c->r[5]=c->r[8]|c->r[8]; // 80187560
L_80187564:;
  c->r[8]=R32(c->r[8]+0x0000000Cu); // 80187564
L_80187568:;
  cmps(c,0,(int32_t)c->r[8],0); // 80187568
  if (!crb(c,2)) { IRQCHK(c); goto L_80187514; } // 8018756C
L_80187570:;
  cmps(c,0,(int32_t)c->r[5],0); // 80187570
  if (crb(c,2)) { goto L_80187650; } // 80187574
  c->r[7]=c->r[30]+0xFFFFFFFFu; // 80187578
  c->r[0]=c->r[5]+0x00000010u; // 8018757C
  c->r[0]=c->r[0]&c->r[7]; // 80187580
  c->r[6]=R32(c->r[5]+0x00000004u); // 80187584
  c->r[0]=c->r[30]-c->r[0]; // 80187588
  c->r[8]=c->r[7]&c->r[0]; // 8018758C
  c->r[7]=c->r[29]+c->r[8]; // 80187590
  c->r[0]=c->r[7]+0x00000010u; // 80187594
  cmpu(c,0,c->r[6],c->r[0]); // 80187598
  if (!crb(c,1)) { goto L_801875E4; } // 8018759C
  c->r[6]=c->r[5]+c->r[29]; // 801875A0
  c->r[0]=0u+0xBABE0000u; // 801875A4
  c->r[9]=c->r[8]+c->r[6]; // 801875A8
  W32(c->r[9]+0x00000010u,c->r[0]); // 801875AC
  c->r[0]=R32(c->r[5]+0x00000004u); // 801875B0
  c->r[0]=c->r[0]-c->r[29]; // 801875B4
  c->r[6]=c->r[0]-c->r[8]; // 801875B8
  c->r[0]=c->r[6]+0xFFFFFFF0u; // 801875BC
  W32(c->r[9]+0x00000014u,c->r[0]); // 801875C0
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 801875C4
  cmps(c,0,(int32_t)c->r[6],0); // 801875C8
  W32(c->r[9]+0x0000001Cu,c->r[6]); // 801875CC
  c->r[9]=c->r[9]+0x00000010u; // 801875D0
  if (crb(c,2)) { goto L_801875DC; } // 801875D4
  W32(c->r[6]+0x00000008u,c->r[9]); // 801875D8
L_801875DC:;
  W32(c->r[5]+0x0000000Cu,c->r[9]); // 801875DC
  W32(c->r[5]+0x00000004u,c->r[7]); // 801875E0
L_801875E4:;
  c->r[6]=0u+0xBABE0000u; // 801875E4
  c->r[0]=c->r[6]+0x00000001u; // 801875E8
  W32(c->r[5]+0x00000000u,c->r[0]); // 801875EC
  c->r[6]=R32(c->r[5]+0x00000008u); // 801875F0
  cmps(c,0,(int32_t)c->r[6],0); // 801875F4
  if (crb(c,2)) { goto L_80187608; } // 801875F8
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801875FC
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 80187600
  goto L_80187610; // 80187604
L_80187608:;
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80187608
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8018760C
L_80187610:;
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 80187610
  cmps(c,0,(int32_t)c->r[4],0); // 80187614
  if (crb(c,2)) { goto L_80187624; } // 80187618
  c->r[0]=R32(c->r[5]+0x00000008u); // 8018761C
  W32(c->r[4]+0x00000008u,c->r[0]); // 80187620
L_80187624:;
  c->r[0]=0u+0x00000000u; // 80187624
  c->r[31]=c->r[5]+c->r[8]; // 80187628
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8018762C
  cmps(c,0,(int32_t)c->r[8],0); // 80187630
  c->r[31]=c->r[31]+0x00000010u; // 80187634
  W32(c->r[5]+0x00000008u,c->r[0]); // 80187638
  if (crb(c,2)) { goto L_80187650; } // 8018763C
  c->r[4]=0u+0xBABE0000u; // 80187640
  c->r[0]=c->r[4]+0x00000002u; // 80187644
  W32(c->r[31]+0xFFFFFFF0u,c->r[0]); // 80187648
  W32(c->r[31]+0xFFFFFFF8u,c->r[5]); // 8018764C
L_80187650:;
  c->lr=0x80187654u; f_80154438(c); // 80187650
  c->r[3]=c->r[31]|c->r[31]; // 80187654
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80187658
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018765C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80187660
  c->r[28]=R32(c->r[1]+0x00000010u); // 80187664
  c->r[0]=R32(c->r[1]+0x00000024u); // 80187668
  c->lr=c->r[0]; // 8018766C
  c->r[1]=c->r[1]+0x00000020u; // 80187670
  return; // 80187674
}

// iosAllocAligned
void f_80187678(Ctx* __restrict c) {
  trace_call(0x80187678u);
  f_80187474(c); return; // 80187678
}

// iosFree
void f_8018767C(Ctx* __restrict c) {
  trace_call(0x8018767Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018767C
  c->r[0]=c->lr; // 80187680
  W32(c->r[1]+0x00000024u,c->r[0]); // 80187684
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80187688
  c->r[31]=0u+0xFFFFFFFCu; // 8018768C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80187690
  c->r[30]=c->r[4]|c->r[4]; // 80187694
  W32(c->r[1]+0x00000014u,c->r[29]); // 80187698
  c->r[29]=c->r[3]|c->r[3]; // 8018769C
  c->lr=0x801876A4u; f_80154410(c); // 801876A0
  cmps(c,0,(int32_t)c->r[30],0); // 801876A4
  if (crb(c,2)) { goto L_80187844; } // 801876A8
  cmps(c,0,(int32_t)c->r[29],0); // 801876AC
  if (crb(c,0)) { goto L_801876D8; } // 801876B0
  cmps(c,0,(int32_t)c->r[29],8); // 801876B4
  if (!crb(c,0)) { goto L_801876D8; } // 801876B8
  c->r[4]=0u+0x80470000u; // 801876BC
  c->r[0]=rotl(c->r[29],4)&0xFFFFFFF0u; // 801876C0
  c->r[4]=c->r[4]+0xFFFF8160u; // 801876C4
  c->r[5]=c->r[4]+c->r[0]; // 801876C8
  c->r[4]=R32(c->r[4]+c->r[0]); // 801876CC
  cmps(c,0,(int32_t)c->r[4],0); // 801876D0
  if (!crb(c,2)) { goto L_801876E0; } // 801876D4
L_801876D8:;
  c->r[31]=0u+0xFFFFFFFCu; // 801876D8
  goto L_80187844; // 801876DC
L_801876E0:;
  c->r[0]=c->r[4]+0x00000010u; // 801876E0
  cmpu(c,0,c->r[30],c->r[0]); // 801876E4
  if (crb(c,0)) { goto L_80187844; } // 801876E8
  c->r[0]=R32(c->r[5]+0x00000008u); // 801876EC
  c->r[0]=c->r[4]+c->r[0]; // 801876F0
  cmpu(c,0,c->r[30],c->r[0]); // 801876F4
  if (crb(c,1)) { goto L_80187844; } // 801876F8
  c->r[4]=R32(c->r[30]+0xFFFFFFF0u); // 801876FC
  c->r[6]=c->r[30]+0xFFFFFFF0u; // 80187700
  c->r[0]=c->r[4]+0x45420000u; // 80187704
  cmpu(c,0,c->r[0],0x00000002u); // 80187708
  if (!crb(c,2)) { goto L_80187714; } // 8018770C
  c->r[6]=R32(c->r[6]+0x00000008u); // 80187710
L_80187714:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 80187714
  c->r[0]=c->r[4]+0x45420000u; // 80187718
  cmpu(c,0,c->r[0],0x00000001u); // 8018771C
  if (!crb(c,2)) { goto L_80187844; } // 80187720
  c->r[0]=0u+0xBABE0000u; // 80187724
  W32(c->r[6]+0x00000000u,c->r[0]); // 80187728
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 8018772C
  c->r[7]=c->r[4]|c->r[4]; // 80187730
  goto L_80187750; // 80187734
L_80187738:;
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 80187738
  cmps(c,0,(int32_t)c->r[0],0); // 8018773C
  if (crb(c,2)) { goto L_80187758; } // 80187740
  cmpu(c,0,c->r[0],c->r[6]); // 80187744
  if (crb(c,1)) { goto L_80187758; } // 80187748
  c->r[7]=c->r[0]|c->r[0]; // 8018774C
L_80187750:;
  cmps(c,0,(int32_t)c->r[7],0); // 80187750
  if (!crb(c,2)) { IRQCHK(c); goto L_80187738; } // 80187754
L_80187758:;
  cmps(c,0,(int32_t)c->r[7],0); // 80187758
  if (crb(c,2)) { goto L_8018778C; } // 8018775C
  cmpu(c,0,c->r[6],c->r[7]); // 80187760
  if (!crb(c,1)) { goto L_8018778C; } // 80187764
  W32(c->r[6]+0x00000008u,c->r[7]); // 80187768
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 8018776C
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 80187770
  W32(c->r[7]+0x0000000Cu,c->r[6]); // 80187774
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 80187778
  cmps(c,0,(int32_t)c->r[4],0); // 8018777C
  if (crb(c,2)) { goto L_801877AC; } // 80187780
  W32(c->r[4]+0x00000008u,c->r[6]); // 80187784
  goto L_801877AC; // 80187788
L_8018778C:;
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 8018778C
  c->r[0]=0u+0x00000000u; // 80187790
  W32(c->r[5]+0x0000000Cu,c->r[6]); // 80187794
  W32(c->r[6]+0x00000008u,c->r[0]); // 80187798
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 8018779C
  cmps(c,0,(int32_t)c->r[4],0); // 801877A0
  if (crb(c,2)) { goto L_801877AC; } // 801877A4
  W32(c->r[4]+0x00000008u,c->r[6]); // 801877A8
L_801877AC:;
  cmps(c,0,(int32_t)c->r[6],0); // 801877AC
  if (crb(c,2)) { goto L_801877F4; } // 801877B0
  c->r[0]=R32(c->r[6]+0x00000004u); // 801877B4
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801877B8
  c->r[4]=c->r[6]+c->r[0]; // 801877BC
  c->r[0]=c->r[4]+0x00000010u; // 801877C0
  cmpu(c,0,c->r[5],c->r[0]); // 801877C4
  if (!crb(c,2)) { goto L_801877F4; } // 801877C8
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 801877CC
  cmps(c,0,(int32_t)c->r[4],0); // 801877D0
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 801877D4
  if (crb(c,2)) { goto L_801877E0; } // 801877D8
  W32(c->r[4]+0x00000008u,c->r[6]); // 801877DC
L_801877E0:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 801877E0
  c->r[0]=R32(c->r[5]+0x00000004u); // 801877E4
  c->r[4]=c->r[0]+c->r[4]; // 801877E8
  c->r[0]=c->r[4]+0x00000010u; // 801877EC
  W32(c->r[6]+0x00000004u,c->r[0]); // 801877F0
L_801877F4:;
  c->r[5]=R32(c->r[6]+0x00000008u); // 801877F4
  cmps(c,0,(int32_t)c->r[5],0); // 801877F8
  if (crb(c,2)) { goto L_80187840; } // 801877FC
  c->r[0]=R32(c->r[5]+0x00000004u); // 80187800
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 80187804
  c->r[4]=c->r[5]+c->r[0]; // 80187808
  c->r[0]=c->r[4]+0x00000010u; // 8018780C
  cmpu(c,0,c->r[6],c->r[0]); // 80187810
  if (!crb(c,2)) { goto L_80187840; } // 80187814
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 80187818
  cmps(c,0,(int32_t)c->r[4],0); // 8018781C
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 80187820
  if (crb(c,2)) { goto L_8018782C; } // 80187824
  W32(c->r[4]+0x00000008u,c->r[5]); // 80187828
L_8018782C:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 8018782C
  c->r[0]=R32(c->r[6]+0x00000004u); // 80187830
  c->r[4]=c->r[0]+c->r[4]; // 80187834
  c->r[0]=c->r[4]+0x00000010u; // 80187838
  W32(c->r[5]+0x00000004u,c->r[0]); // 8018783C
L_80187840:;
  c->r[31]=0u+0x00000000u; // 80187840
L_80187844:;
  c->lr=0x80187848u; f_80154438(c); // 80187844
  c->r[3]=c->r[31]|c->r[31]; // 80187848
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018784C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80187850
  c->r[29]=R32(c->r[1]+0x00000014u); // 80187854
  c->r[0]=R32(c->r[1]+0x00000024u); // 80187858
  c->lr=c->r[0]; // 8018785C
  c->r[1]=c->r[1]+0x00000020u; // 80187860
  return; // 80187864
}

// IPCiProfInit
void f_80187868(Ctx* __restrict c) {
  trace_call(0x80187868u);
  c->r[4]=0u+0x00000000u; // 80187868
  c->r[5]=0u+0x80470000u; // 8018786C
  c->r[6]=0u+0x80470000u; // 80187870
  c->r[0]=0u+0x00000002u; // 80187874
  W32(c->r[13]+0xFFFFAF70u,c->r[4]); // 80187878
  c->r[5]=c->r[5]+0xFFFF8260u; // 8018787C
  c->r[6]=c->r[6]+0xFFFF81E0u; // 80187880
  c->r[3]=0u+0xFFFFFFFFu; // 80187884
  W32(c->r[13]+0xFFFFAF74u,c->r[4]); // 80187888
  c->ctr=c->r[0]; // 8018788C
L_80187890:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 80187890
  W32(c->r[6]+0x00000000u,c->r[3]); // 80187894
  W32(c->r[5]+0x00000004u,c->r[4]); // 80187898
  W32(c->r[6]+0x00000004u,c->r[3]); // 8018789C
  W32(c->r[5]+0x00000008u,c->r[4]); // 801878A0
  W32(c->r[6]+0x00000008u,c->r[3]); // 801878A4
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801878A8
  W32(c->r[6]+0x0000000Cu,c->r[3]); // 801878AC
  W32(c->r[5]+0x00000010u,c->r[4]); // 801878B0
  W32(c->r[6]+0x00000010u,c->r[3]); // 801878B4
  W32(c->r[5]+0x00000014u,c->r[4]); // 801878B8
  W32(c->r[6]+0x00000014u,c->r[3]); // 801878BC
  W32(c->r[5]+0x00000018u,c->r[4]); // 801878C0
  W32(c->r[6]+0x00000018u,c->r[3]); // 801878C4
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 801878C8
  W32(c->r[6]+0x0000001Cu,c->r[3]); // 801878CC
  W32(c->r[5]+0x00000020u,c->r[4]); // 801878D0
  W32(c->r[6]+0x00000020u,c->r[3]); // 801878D4
  W32(c->r[5]+0x00000024u,c->r[4]); // 801878D8
  W32(c->r[6]+0x00000024u,c->r[3]); // 801878DC
  W32(c->r[5]+0x00000028u,c->r[4]); // 801878E0
  W32(c->r[6]+0x00000028u,c->r[3]); // 801878E4
  W32(c->r[5]+0x0000002Cu,c->r[4]); // 801878E8
  W32(c->r[6]+0x0000002Cu,c->r[3]); // 801878EC
  W32(c->r[5]+0x00000030u,c->r[4]); // 801878F0
  W32(c->r[6]+0x00000030u,c->r[3]); // 801878F4
  W32(c->r[5]+0x00000034u,c->r[4]); // 801878F8
  W32(c->r[6]+0x00000034u,c->r[3]); // 801878FC
  W32(c->r[5]+0x00000038u,c->r[4]); // 80187900
  W32(c->r[6]+0x00000038u,c->r[3]); // 80187904
  W32(c->r[5]+0x0000003Cu,c->r[4]); // 80187908
  c->r[5]=c->r[5]+0x00000040u; // 8018790C
  W32(c->r[6]+0x0000003Cu,c->r[3]); // 80187910
  c->r[6]=c->r[6]+0x00000040u; // 80187914
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80187890; } // 80187918
  return; // 8018791C
}

// IPCiProfQueueReq
void f_80187920(Ctx* __restrict c) {
  trace_call(0x80187920u);
  c->r[6]=R32(c->r[13]+0xFFFFAF70u); // 80187920
  c->r[8]=0u+0x80470000u; // 80187924
  c->r[5]=R32(c->r[13]+0xFFFFAF74u); // 80187928
  c->r[9]=0u+0x80470000u; // 8018792C
  c->r[6]=c->r[6]+0x00000001u; // 80187930
  c->r[0]=0u+0x00000020u; // 80187934
  c->r[5]=c->r[5]+0x00000001u; // 80187938
  W32(c->r[13]+0xFFFFAF70u,c->r[6]); // 8018793C
  c->r[8]=c->r[8]+0xFFFF8260u; // 80187940
  c->r[9]=c->r[9]+0xFFFF81E0u; // 80187944
  W32(c->r[13]+0xFFFFAF74u,c->r[5]); // 80187948
  c->r[7]=0u+0x00000000u; // 8018794C
  c->ctr=c->r[0]; // 80187950
L_80187954:;
  c->r[0]=R32(c->r[8]+0x00000000u); // 80187954
  cmps(c,0,(int32_t)c->r[0],0); // 80187958
  if (!crb(c,2)) { goto L_8018798C; } // 8018795C
  c->r[0]=R32(c->r[9]+0x00000000u); // 80187960
  cmps(c,0,(int32_t)c->r[0],-1); // 80187964
  if (!crb(c,2)) { goto L_8018798C; } // 80187968
  c->r[6]=0u+0x80470000u; // 8018796C
  c->r[5]=0u+0x80470000u; // 80187970
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80187974
  c->r[6]=c->r[6]+0xFFFF8260u; // 80187978
  c->r[5]=c->r[5]+0xFFFF81E0u; // 8018797C
  W32(c->r[6]+c->r[0],c->r[3]); // 80187980
  W32(c->r[5]+c->r[0],c->r[4]); // 80187984
  return; // 80187988
L_8018798C:;
  c->r[8]=c->r[8]+0x00000004u; // 8018798C
  c->r[9]=c->r[9]+0x00000004u; // 80187990
  c->r[7]=c->r[7]+0x00000001u; // 80187994
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80187954; } // 80187998
  return; // 8018799C
}

// IPCiProfAck
void f_801879A0(Ctx* __restrict c) {
  trace_call(0x801879A0u);
  c->r[3]=R32(c->r[13]+0xFFFFAF74u); // 801879A0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801879A4
  W32(c->r[13]+0xFFFFAF74u,c->r[0]); // 801879A8
  return; // 801879AC
}

// IPCiProfReply
void f_801879B0(Ctx* __restrict c) {
  trace_call(0x801879B0u);
  c->r[5]=R32(c->r[13]+0xFFFFAF70u); // 801879B0
  c->r[6]=0u+0x80470000u; // 801879B4
  c->r[7]=0u+0x80470000u; // 801879B8
  c->r[0]=0u+0x00000020u; // 801879BC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801879C0
  c->r[6]=c->r[6]+0xFFFF8260u; // 801879C4
  W32(c->r[13]+0xFFFFAF70u,c->r[5]); // 801879C8
  c->r[7]=c->r[7]+0xFFFF81E0u; // 801879CC
  c->r[5]=0u+0x00000000u; // 801879D0
  c->ctr=c->r[0]; // 801879D4
L_801879D8:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 801879D8
  cmpu(c,0,c->r[3],c->r[0]); // 801879DC
  if (!crb(c,2)) { goto L_80187A18; } // 801879E0
  c->r[0]=R32(c->r[7]+0x00000000u); // 801879E4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801879E8
  if (!crb(c,2)) { goto L_80187A18; } // 801879EC
  c->r[4]=0u+0x80470000u; // 801879F0
  c->r[3]=0u+0x80470000u; // 801879F4
  c->r[6]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801879F8
  c->r[5]=0u+0x00000000u; // 801879FC
  c->r[4]=c->r[4]+0xFFFF8260u; // 80187A00
  c->r[3]=c->r[3]+0xFFFF81E0u; // 80187A04
  c->r[0]=0u+0xFFFFFFFFu; // 80187A08
  W32(c->r[4]+c->r[6],c->r[5]); // 80187A0C
  W32(c->r[3]+c->r[6],c->r[0]); // 80187A10
  return; // 80187A14
L_80187A18:;
  c->r[6]=c->r[6]+0x00000004u; // 80187A18
  c->r[7]=c->r[7]+0x00000004u; // 80187A1C
  c->r[5]=c->r[5]+0x00000001u; // 80187A20
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801879D8; } // 80187A24
  return; // 80187A28
}

// ISFS_OpenLib
void f_80187A2C(Ctx* __restrict c) {
  trace_call(0x80187A2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80187A2C
  c->r[0]=c->lr; // 80187A30
  W32(c->r[1]+0x00000014u,c->r[0]); // 80187A34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80187A38
  c->r[31]=0u+0x00000000u; // 80187A3C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80187A40
  c->r[0]=R32(c->r[13]+0xFFFFAF78u); // 80187A44
  cmps(c,0,(int32_t)c->r[0],0); // 80187A48
  if (!crb(c,2)) { goto L_80187A60; } // 80187A4C
  c->lr=0x80187A54u; f_801859C4(c); // 80187A50
  W32(c->r[13]+0xFFFFAF84u,c->r[3]); // 80187A54
  c->lr=0x80187A5Cu; f_801859BC(c); // 80187A58
  W32(c->r[13]+0xFFFFAF88u,c->r[3]); // 80187A5C
L_80187A60:;
  c->r[3]=R32(c->r[13]+0xFFFFAF84u); // 80187A60
  c->r[0]=R32(c->r[13]+0xFFFFAF78u); // 80187A64
  c->r[3]=c->r[3]+0x0000001Fu; // 80187A68
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFE0u; // 80187A6C
  cmps(c,0,(int32_t)c->r[0],0); // 80187A70
  W32(c->r[13]+0xFFFFAF7Cu,c->r[3]); // 80187A74
  if (!crb(c,2)) { goto L_80187AA4; } // 80187A78
  c->r[0]=R32(c->r[13]+0xFFFFAF88u); // 80187A7C
  c->r[4]=c->r[3]+0x00000040u; // 80187A80
  cmpu(c,0,c->r[4],c->r[0]); // 80187A84
  if (!crb(c,1)) { goto L_80187AA4; } // 80187A88
  c->r[3]=0u+0x802E0000u; // 80187A8C
  c->r[3]=c->r[3]+0xFFFFC390u; // 80187A90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80187A94
  c->lr=0x80187A9Cu; f_801506B4(c); // 80187A98
  c->r[31]=0u+0xFFFFFFEAu; // 80187A9C
  goto L_80187B38; // 80187AA0
L_80187AA4:;
  c->r[4]=c->r[13]+0xFFFF92F8u; // 80187AA4
  c->lr=0x80187AACu; f_8025C444(c); // 80187AA8
  c->r[3]=R32(c->r[13]+0xFFFFAF7Cu); // 80187AAC
  c->r[4]=0u+0x00000000u; // 80187AB0
  c->lr=0x80187AB8u; f_80186284(c); // 80187AB4
  cmps(c,0,(int32_t)c->r[3],0); // 80187AB8
  W32(c->r[13]+0xFFFF92F0u,c->r[3]); // 80187ABC
  if (!crb(c,0)) { goto L_80187ACC; } // 80187AC0
  c->r[31]=c->r[3]|c->r[3]; // 80187AC4
  goto L_80187B38; // 80187AC8
L_80187ACC:;
  c->r[4]=R32(c->r[13]+0xFFFFAF78u); // 80187ACC
  c->r[30]=R32(c->r[13]+0xFFFFAF7Cu); // 80187AD0
  cmps(c,0,(int32_t)c->r[4],0); // 80187AD4
  if (!crb(c,2)) { goto L_80187B04; } // 80187AD8
  c->r[0]=R32(c->r[13]+0xFFFFAF88u); // 80187ADC
  c->r[3]=c->r[30]+0x00001540u; // 80187AE0
  cmpu(c,0,c->r[3],c->r[0]); // 80187AE4
  if (!crb(c,1)) { goto L_80187B04; } // 80187AE8
  c->r[3]=0u+0x802E0000u; // 80187AEC
  c->r[3]=c->r[3]+0xFFFFC390u; // 80187AF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80187AF4
  c->lr=0x80187AFCu; f_801506B4(c); // 80187AF8
  c->r[31]=0u+0xFFFFFFEAu; // 80187AFC
  goto L_80187B38; // 80187B00
L_80187B04:;
  cmps(c,0,(int32_t)c->r[4],0); // 80187B04
  if (!crb(c,2)) { goto L_80187B1C; } // 80187B08
  c->r[3]=c->r[30]+0x00001540u; // 80187B0C
  c->lr=0x80187B14u; f_801859CC(c); // 80187B10
  c->r[0]=0u+0x00000001u; // 80187B14
  W32(c->r[13]+0xFFFFAF78u,c->r[0]); // 80187B18
L_80187B1C:;
  c->r[3]=c->r[30]|c->r[30]; // 80187B1C
  c->r[4]=0u+0x00001540u; // 80187B20
  c->lr=0x80187B28u; f_80187344(c); // 80187B24
  cmps(c,0,(int32_t)c->r[3],0); // 80187B28
  W32(c->r[13]+0xFFFFAF8Cu,c->r[3]); // 80187B2C
  if (!crb(c,0)) { goto L_80187B38; } // 80187B30
  c->r[31]=0u+0xFFFFFFEAu; // 80187B34
L_80187B38:;
  c->r[3]=c->r[31]|c->r[31]; // 80187B38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80187B3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80187B40
  c->r[0]=R32(c->r[1]+0x00000014u); // 80187B44
  c->lr=c->r[0]; // 80187B48
  c->r[1]=c->r[1]+0x00000010u; // 80187B4C
  return; // 80187B50
}

// _isfsFuncCb
void f_80187B54(Ctx* __restrict c) {
  trace_call(0x80187B54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80187B54
  c->r[0]=c->lr; // 80187B58
  cmps(c,1,(int32_t)c->r[3],0); // 80187B5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80187B60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80187B64
  c->r[31]=c->r[4]|c->r[4]; // 80187B68
  W32(c->r[1]+0x00000008u,c->r[30]); // 80187B6C
  c->r[30]=c->r[3]|c->r[3]; // 80187B70
  if (crb(c,4)) { goto L_80187C80; } // 80187B74
  c->r[0]=R32(c->r[4]+0x00000108u); // 80187B78
  cmps(c,0,(int32_t)c->r[0],3); // 80187B7C
  if (crb(c,2)) { goto L_80187BE0; } // 80187B80
  if (!crb(c,0)) { goto L_80187B98; } // 80187B84
  cmps(c,0,(int32_t)c->r[0],1); // 80187B88
  if (crb(c,2)) { goto L_80187BA8; } // 80187B8C
  if (!crb(c,0)) { goto L_80187BBC; } // 80187B90
  goto L_80187C80; // 80187B94
L_80187B98:;
  cmps(c,0,(int32_t)c->r[0],5); // 80187B98
  if (crb(c,2)) { goto L_80187C70; } // 80187B9C
  if (!crb(c,0)) { goto L_80187C80; } // 80187BA0
  goto L_80187C38; // 80187BA4
L_80187BA8:;
  if (!crb(c,6)) { goto L_80187C80; } // 80187BA8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 80187BAC
  c->r[5]=0u+0x0000001Cu; // 80187BB0
  c->lr=0x80187BB8u; f_80004338(c); // 80187BB4
  goto L_80187C80; // 80187BB8
L_80187BBC:;
  if (!crb(c,6)) { goto L_80187C80; } // 80187BBC
  c->r[0]=c->r[4]+0x0000003Fu; // 80187BC0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 80187BC4
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80187BC8
  c->r[0]=c->r[4]+0x0000005Fu; // 80187BCC
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80187BD0
  c->r[0]=R32(c->r[4]+0x00000000u); // 80187BD4
  W32(c->r[3]+0x00000000u,c->r[0]); // 80187BD8
  goto L_80187C80; // 80187BDC
L_80187BE0:;
  if (!crb(c,6)) { goto L_80187C80; } // 80187BE0
  c->r[0]=c->r[4]+0x0000005Fu; // 80187BE4
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 80187BE8
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80187BEC
  c->r[0]=R32(c->r[5]+0x00000000u); // 80187BF0
  W32(c->r[3]+0x00000000u,c->r[0]); // 80187BF4
  c->r[0]=R16(c->r[5]+0x00000004u); // 80187BF8
  c->r[3]=R32(c->r[4]+0x00000110u); // 80187BFC
  W16(c->r[3]+0x00000000u,c->r[0]); // 80187C00
  c->r[0]=R8(c->r[5]+0x00000049u); // 80187C04
  c->r[3]=R32(c->r[4]+0x00000114u); // 80187C08
  W32(c->r[3]+0x00000000u,c->r[0]); // 80187C0C
  c->r[0]=R8(c->r[5]+0x00000046u); // 80187C10
  c->r[3]=R32(c->r[4]+0x00000118u); // 80187C14
  W32(c->r[3]+0x00000000u,c->r[0]); // 80187C18
  c->r[0]=R8(c->r[5]+0x00000047u); // 80187C1C
  c->r[3]=R32(c->r[4]+0x0000011Cu); // 80187C20
  W32(c->r[3]+0x00000000u,c->r[0]); // 80187C24
  c->r[0]=R8(c->r[5]+0x00000048u); // 80187C28
  c->r[3]=R32(c->r[4]+0x00000120u); // 80187C2C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80187C30
  goto L_80187C80; // 80187C34
L_80187C38:;
  if (!crb(c,6)) { goto L_80187C80; } // 80187C38
  c->r[0]=c->r[4]+0x0000003Fu; // 80187C3C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 80187C40
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80187C44
  c->r[0]=c->r[5]+0x0000005Fu; // 80187C48
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80187C4C
  c->r[5]=R32(c->r[6]+0x00000000u); // 80187C50
  c->r[0]=c->r[6]+0x00000023u; // 80187C54
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80187C58
  W32(c->r[3]+0x00000000u,c->r[5]); // 80187C5C
  c->r[0]=R32(c->r[6]+0x00000000u); // 80187C60
  c->r[3]=R32(c->r[4]+0x00000110u); // 80187C64
  W32(c->r[3]+0x00000000u,c->r[0]); // 80187C68
  goto L_80187C80; // 80187C6C
L_80187C70:;
  if (!crb(c,6)) { goto L_80187C80; } // 80187C70
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 80187C74
  c->r[5]=0u+0x00000008u; // 80187C78
  c->lr=0x80187C80u; f_80004338(c); // 80187C7C
L_80187C80:;
  c->r[0]=0u+0x00000000u; // 80187C80
  W32(c->r[13]+0xFFFFAF80u,c->r[0]); // 80187C84
  c->r[12]=R32(c->r[31]+0x00000100u); // 80187C88
  cmps(c,0,(int32_t)c->r[12],0); // 80187C8C
  if (crb(c,2)) { goto L_80187CA4; } // 80187C90
  c->r[3]=c->r[30]|c->r[30]; // 80187C94
  c->r[4]=R32(c->r[31]+0x00000104u); // 80187C98
  c->ctr=c->r[12]; // 80187C9C
  if (true) { c->lr=0x80187CA4u; dispatch(c,c->ctr); } // 80187CA0
L_80187CA4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80187CA4
  if (crb(c,2)) { goto L_80187CB8; } // 80187CA8
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80187CAC
  c->r[4]=c->r[31]|c->r[31]; // 80187CB0
  c->lr=0x80187CB8u; f_8018767C(c); // 80187CB4
L_80187CB8:;
  c->r[3]=c->r[30]|c->r[30]; // 80187CB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80187CBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80187CC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80187CC4
  c->lr=c->r[0]; // 80187CC8
  c->r[1]=c->r[1]+0x00000010u; // 80187CCC
  return; // 80187CD0
}

// ISFS_CreateDir
void f_80187CD4(Ctx* __restrict c) {
  trace_call(0x80187CD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80187CD4
  c->r[0]=c->lr; // 80187CD8
  W32(c->r[1]+0x00000034u,c->r[0]); // 80187CDC
  c->r[11]=c->r[1]+0x00000030u; // 80187CE0
  c->lr=0x80187CE8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80187CE4
  cmps(c,0,(int32_t)c->r[3],0); // 80187CE8
  c->r[25]=c->r[3]|c->r[3]; // 80187CEC
  c->r[26]=c->r[4]|c->r[4]; // 80187CF0
  c->r[27]=c->r[5]|c->r[5]; // 80187CF4
  c->r[28]=c->r[6]|c->r[6]; // 80187CF8
  c->r[29]=c->r[7]|c->r[7]; // 80187CFC
  c->r[30]=0u+0x00000000u; // 80187D00
  if (crb(c,2)) { goto L_80187D28; } // 80187D04
  c->r[0]=R32(c->r[13]+0xFFFF92F0u); // 80187D08
  cmps(c,0,(int32_t)c->r[0],0); // 80187D0C
  if (crb(c,0)) { goto L_80187D28; } // 80187D10
  c->r[4]=0u+0x00000040u; // 80187D14
  c->lr=0x80187D1Cu; f_801859D4(c); // 80187D18
  cmpu(c,0,c->r[3],0x00000040u); // 80187D1C
  c->r[31]=c->r[3]|c->r[3]; // 80187D20
  if (!crb(c,2)) { goto L_80187D30; } // 80187D24
L_80187D28:;
  c->r[31]=0u+0xFFFFFF9Bu; // 80187D28
  goto L_80187D94; // 80187D2C
L_80187D30:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80187D30
  c->r[4]=0u+0x00000140u; // 80187D34
  c->r[5]=0u+0x00000020u; // 80187D38
  c->lr=0x80187D40u; f_80187678(c); // 80187D3C
  cmps(c,0,(int32_t)c->r[3],0); // 80187D40
  c->r[30]=c->r[3]|c->r[3]; // 80187D44
  if (!crb(c,2)) { goto L_80187D54; } // 80187D48
  c->r[31]=0u+0xFFFFFFEAu; // 80187D4C
  goto L_80187D94; // 80187D50
L_80187D54:;
  c->r[4]=c->r[25]|c->r[25]; // 80187D54
  c->r[5]=c->r[31]+0x00000001u; // 80187D58
  c->r[3]=c->r[3]+0x00000006u; // 80187D5C
  c->lr=0x80187D64u; f_80004338(c); // 80187D60
  W8(c->r[30]+0x00000049u,c->r[26]); // 80187D64
  c->r[5]=c->r[30]|c->r[30]; // 80187D68
  c->r[4]=0u+0x00000003u; // 80187D6C
  c->r[6]=0u+0x0000004Cu; // 80187D70
  W8(c->r[30]+0x00000046u,c->r[27]); // 80187D74
  c->r[7]=0u+0x00000000u; // 80187D78
  c->r[8]=0u+0x00000000u; // 80187D7C
  W8(c->r[30]+0x00000047u,c->r[28]); // 80187D80
  W8(c->r[30]+0x00000048u,c->r[29]); // 80187D84
  c->r[3]=R32(c->r[13]+0xFFFF92F0u); // 80187D88
  c->lr=0x80187D90u; f_80186C1C(c); // 80187D8C
  c->r[31]=c->r[3]|c->r[3]; // 80187D90
L_80187D94:;
  cmps(c,0,(int32_t)c->r[30],0); // 80187D94
  if (crb(c,2)) { goto L_80187DAC; } // 80187D98
  if (crb(c,2)) { goto L_80187DAC; } // 80187D9C
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80187DA0
  c->r[4]=c->r[30]|c->r[30]; // 80187DA4
  c->lr=0x80187DACu; f_8018767C(c); // 80187DA8
L_80187DAC:;
  c->r[11]=c->r[1]+0x00000030u; // 80187DAC
  c->r[3]=c->r[31]|c->r[31]; // 80187DB0
  c->lr=0x80187DB8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80187DB4
  c->r[0]=R32(c->r[1]+0x00000034u); // 80187DB8
  c->lr=c->r[0]; // 80187DBC
  c->r[1]=c->r[1]+0x00000030u; // 80187DC0
  return; // 80187DC4
}

// ISFS_CreateDirAsync
void f_80187DC8(Ctx* __restrict c) {
  trace_call(0x80187DC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80187DC8
  c->r[0]=c->lr; // 80187DCC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80187DD0
  c->r[11]=c->r[1]+0x00000030u; // 80187DD4
  c->lr=0x80187DDCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80187DD8
  cmps(c,0,(int32_t)c->r[3],0); // 80187DDC
  c->r[23]=c->r[3]|c->r[3]; // 80187DE0
  c->r[24]=c->r[4]|c->r[4]; // 80187DE4
  c->r[25]=c->r[5]|c->r[5]; // 80187DE8
  c->r[26]=c->r[6]|c->r[6]; // 80187DEC
  c->r[27]=c->r[7]|c->r[7]; // 80187DF0
  c->r[28]=c->r[8]|c->r[8]; // 80187DF4
  c->r[29]=c->r[9]|c->r[9]; // 80187DF8
  if (crb(c,2)) { goto L_80187E20; } // 80187DFC
  c->r[0]=R32(c->r[13]+0xFFFF92F0u); // 80187E00
  cmps(c,0,(int32_t)c->r[0],0); // 80187E04
  if (crb(c,0)) { goto L_80187E20; } // 80187E08
  c->r[4]=0u+0x00000040u; // 80187E0C
  c->lr=0x80187E14u; f_801859D4(c); // 80187E10
  cmpu(c,0,c->r[3],0x00000040u); // 80187E14
  c->r[31]=c->r[3]|c->r[3]; // 80187E18
  if (!crb(c,2)) { goto L_80187E28; } // 80187E1C
L_80187E20:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80187E20
  goto L_80187EA4; // 80187E24
L_80187E28:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80187E28
  c->r[4]=0u+0x00000140u; // 80187E2C
  c->r[5]=0u+0x00000020u; // 80187E30
  c->lr=0x80187E38u; f_80187678(c); // 80187E34
  cmps(c,0,(int32_t)c->r[3],0); // 80187E38
  c->r[30]=c->r[3]|c->r[3]; // 80187E3C
  if (!crb(c,2)) { goto L_80187E4C; } // 80187E40
  c->r[3]=0u+0xFFFFFF8Au; // 80187E44
  goto L_80187EA4; // 80187E48
L_80187E4C:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 80187E4C
  c->r[0]=0u+0x00000000u; // 80187E50
  c->r[4]=c->r[23]|c->r[23]; // 80187E54
  c->r[5]=c->r[31]+0x00000001u; // 80187E58
  W32(c->r[3]+0x00000104u,c->r[29]); // 80187E5C
  W32(c->r[3]+0x00000108u,c->r[0]); // 80187E60
  c->r[3]=c->r[3]+0x00000006u; // 80187E64
  c->lr=0x80187E6Cu; f_80004338(c); // 80187E68
  W8(c->r[30]+0x00000049u,c->r[24]); // 80187E6C
  c->r[9]=0u+0x80180000u; // 80187E70
  c->r[5]=c->r[30]|c->r[30]; // 80187E74
  c->r[10]=c->r[30]|c->r[30]; // 80187E78
  W8(c->r[30]+0x00000046u,c->r[25]); // 80187E7C
  c->r[9]=c->r[9]+0x00007B54u; // 80187E80
  c->r[4]=0u+0x00000003u; // 80187E84
  c->r[6]=0u+0x0000004Cu; // 80187E88
  W8(c->r[30]+0x00000047u,c->r[26]); // 80187E8C
  c->r[7]=0u+0x00000000u; // 80187E90
  c->r[8]=0u+0x00000000u; // 80187E94
  W8(c->r[30]+0x00000048u,c->r[27]); // 80187E98
  c->r[3]=R32(c->r[13]+0xFFFF92F0u); // 80187E9C
  c->lr=0x80187EA4u; f_80186AE4(c); // 80187EA0
L_80187EA4:;
  c->r[11]=c->r[1]+0x00000030u; // 80187EA4
  c->lr=0x80187EACu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80187EA8
  c->r[0]=R32(c->r[1]+0x00000034u); // 80187EAC
  c->lr=c->r[0]; // 80187EB0
  c->r[1]=c->r[1]+0x00000030u; // 80187EB4
  return; // 80187EB8
}

// ISFS_ReadDir
void f_80187EBC(Ctx* __restrict c) {
  trace_call(0x80187EBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80187EBC
  c->r[0]=c->lr; // 80187EC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80187EC4
  c->r[11]=c->r[1]+0x00000020u; // 80187EC8
  c->lr=0x80187ED0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80187ECC
  cmps(c,0,(int32_t)c->r[3],0); // 80187ED0
  c->r[26]=c->r[3]|c->r[3]; // 80187ED4
  c->r[27]=c->r[4]|c->r[4]; // 80187ED8
  c->r[28]=c->r[5]|c->r[5]; // 80187EDC
  c->r[29]=0u+0x00000000u; // 80187EE0
  if (crb(c,2)) { goto L_80187F18; } // 80187EE4
  cmps(c,0,(int32_t)c->r[5],0); // 80187EE8
  if (crb(c,2)) { goto L_80187F18; } // 80187EEC
  c->r[0]=R32(c->r[13]+0xFFFF92F0u); // 80187EF0
  cmps(c,0,(int32_t)c->r[0],0); // 80187EF4
  if (crb(c,0)) { goto L_80187F18; } // 80187EF8
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 80187EFC
  if (!crb(c,2)) { goto L_80187F18; } // 80187F00
  c->r[4]=0u+0x00000040u; // 80187F04
  c->lr=0x80187F0Cu; f_801859D4(c); // 80187F08
  cmpu(c,0,c->r[3],0x00000040u); // 80187F0C
  c->r[31]=c->r[3]|c->r[3]; // 80187F10
  if (!crb(c,2)) { goto L_80187F20; } // 80187F14
L_80187F18:;
  c->r[31]=0u+0xFFFFFF9Bu; // 80187F18
  goto L_80187FDC; // 80187F1C
L_80187F20:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80187F20
  c->r[4]=0u+0x00000140u; // 80187F24
  c->r[5]=0u+0x00000020u; // 80187F28
  c->lr=0x80187F30u; f_80187678(c); // 80187F2C
  cmps(c,0,(int32_t)c->r[3],0); // 80187F30
  c->r[29]=c->r[3]|c->r[3]; // 80187F34
  if (!crb(c,2)) { goto L_80187F44; } // 80187F38
  c->r[31]=0u+0xFFFFFFEAu; // 80187F3C
  goto L_80187FDC; // 80187F40
L_80187F44:;
  c->r[0]=c->r[3]+0x0000003Fu; // 80187F44
  c->r[4]=c->r[26]|c->r[26]; // 80187F48
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80187F4C
  c->r[5]=c->r[31]+0x00000001u; // 80187F50
  c->r[3]=c->r[30]|c->r[30]; // 80187F54
  c->lr=0x80187F5Cu; f_80004338(c); // 80187F58
  W32(c->r[29]+0x00000000u,c->r[30]); // 80187F5C
  c->r[3]=0u+0x00000040u; // 80187F60
  c->r[0]=c->r[30]+0x0000005Fu; // 80187F64
  cmps(c,0,(int32_t)c->r[27],0); // 80187F68
  W32(c->r[29]+0x00000004u,c->r[3]); // 80187F6C
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80187F70
  c->r[3]=0u+0x00000004u; // 80187F74
  W32(c->r[29]+0x00000008u,c->r[30]); // 80187F78
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 80187F7C
  if (crb(c,2)) { goto L_80187FB0; } // 80187F80
  c->r[0]=R32(c->r[28]+0x00000000u); // 80187F84
  c->r[5]=0u+0x00000002u; // 80187F88
  c->r[6]=0u+0x00000002u; // 80187F8C
  W32(c->r[30]+0x00000000u,c->r[0]); // 80187F90
  W32(c->r[29]+0x00000010u,c->r[27]); // 80187F94
  c->r[0]=R32(c->r[28]+0x00000000u); // 80187F98
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)13); // 80187F9C
  W32(c->r[29]+0x00000014u,c->r[0]); // 80187FA0
  W32(c->r[29]+0x00000018u,c->r[30]); // 80187FA4
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 80187FA8
  goto L_80187FB8; // 80187FAC
L_80187FB0:;
  c->r[5]=0u+0x00000001u; // 80187FB0
  c->r[6]=0u+0x00000001u; // 80187FB4
L_80187FB8:;
  c->r[3]=R32(c->r[13]+0xFFFF92F0u); // 80187FB8
  c->r[7]=c->r[29]|c->r[29]; // 80187FBC
  c->r[4]=0u+0x00000004u; // 80187FC0
  c->lr=0x80187FC8u; f_80186F6C(c); // 80187FC4
  cmps(c,0,(int32_t)c->r[3],0); // 80187FC8
  c->r[31]=c->r[3]|c->r[3]; // 80187FCC
  if (!crb(c,2)) { goto L_80187FDC; } // 80187FD0
  c->r[0]=R32(c->r[30]+0x00000000u); // 80187FD4
  W32(c->r[28]+0x00000000u,c->r[0]); // 80187FD8
L_80187FDC:;
  cmps(c,0,(int32_t)c->r[29],0); // 80187FDC
  if (crb(c,2)) { goto L_80187FF4; } // 80187FE0
  if (crb(c,2)) { goto L_80187FF4; } // 80187FE4
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80187FE8
  c->r[4]=c->r[29]|c->r[29]; // 80187FEC
  c->lr=0x80187FF4u; f_8018767C(c); // 80187FF0
L_80187FF4:;
  c->r[11]=c->r[1]+0x00000020u; // 80187FF4
  c->r[3]=c->r[31]|c->r[31]; // 80187FF8
  c->lr=0x80188000u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80187FFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80188000
  c->lr=c->r[0]; // 80188004
  c->r[1]=c->r[1]+0x00000020u; // 80188008
  return; // 8018800C
}

// ISFS_ReadDirAsync
void f_80188010(Ctx* __restrict c) {
  trace_call(0x80188010u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188010
  c->r[0]=c->lr; // 80188014
  W32(c->r[1]+0x00000034u,c->r[0]); // 80188018
  c->r[11]=c->r[1]+0x00000030u; // 8018801C
  c->lr=0x80188024u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80188020
  cmps(c,0,(int32_t)c->r[3],0); // 80188024
  c->r[25]=c->r[3]|c->r[3]; // 80188028
  c->r[26]=c->r[4]|c->r[4]; // 8018802C
  c->r[27]=c->r[5]|c->r[5]; // 80188030
  c->r[28]=c->r[6]|c->r[6]; // 80188034
  c->r[29]=c->r[7]|c->r[7]; // 80188038
  if (crb(c,2)) { goto L_80188070; } // 8018803C
  cmps(c,0,(int32_t)c->r[5],0); // 80188040
  if (crb(c,2)) { goto L_80188070; } // 80188044
  c->r[0]=R32(c->r[13]+0xFFFF92F0u); // 80188048
  cmps(c,0,(int32_t)c->r[0],0); // 8018804C
  if (crb(c,0)) { goto L_80188070; } // 80188050
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 80188054
  if (!crb(c,2)) { goto L_80188070; } // 80188058
  c->r[4]=0u+0x00000040u; // 8018805C
  c->lr=0x80188064u; f_801859D4(c); // 80188060
  cmpu(c,0,c->r[3],0x00000040u); // 80188064
  c->r[31]=c->r[3]|c->r[3]; // 80188068
  if (!crb(c,2)) { goto L_80188078; } // 8018806C
L_80188070:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80188070
  goto L_80188140; // 80188074
L_80188078:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188078
  c->r[4]=0u+0x00000140u; // 8018807C
  c->r[5]=0u+0x00000020u; // 80188080
  c->lr=0x80188088u; f_80187678(c); // 80188084
  cmps(c,0,(int32_t)c->r[3],0); // 80188088
  c->r[30]=c->r[3]|c->r[3]; // 8018808C
  if (!crb(c,2)) { goto L_8018809C; } // 80188090
  c->r[3]=0u+0xFFFFFF8Au; // 80188094
  goto L_80188140; // 80188098
L_8018809C:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 8018809C
  c->r[6]=0u+0x00000002u; // 801880A0
  c->r[0]=c->r[3]+0x0000003Fu; // 801880A4
  c->r[4]=c->r[25]|c->r[25]; // 801880A8
  W32(c->r[3]+0x00000104u,c->r[29]); // 801880AC
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801880B0
  c->r[5]=c->r[31]+0x00000001u; // 801880B4
  W32(c->r[3]+0x00000108u,c->r[6]); // 801880B8
  W32(c->r[3]+0x0000010Cu,c->r[27]); // 801880BC
  c->r[3]=c->r[29]|c->r[29]; // 801880C0
  c->lr=0x801880C8u; f_80004338(c); // 801880C4
  W32(c->r[30]+0x00000000u,c->r[29]); // 801880C8
  c->r[3]=0u+0x00000040u; // 801880CC
  c->r[0]=c->r[29]+0x0000005Fu; // 801880D0
  cmps(c,0,(int32_t)c->r[26],0); // 801880D4
  W32(c->r[30]+0x00000004u,c->r[3]); // 801880D8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801880DC
  c->r[3]=0u+0x00000004u; // 801880E0
  W32(c->r[30]+0x00000008u,c->r[4]); // 801880E4
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 801880E8
  if (crb(c,2)) { goto L_8018811C; } // 801880EC
  c->r[0]=R32(c->r[27]+0x00000000u); // 801880F0
  c->r[5]=0u+0x00000002u; // 801880F4
  c->r[6]=0u+0x00000002u; // 801880F8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801880FC
  W32(c->r[30]+0x00000010u,c->r[26]); // 80188100
  c->r[0]=R32(c->r[27]+0x00000000u); // 80188104
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)13); // 80188108
  W32(c->r[30]+0x00000014u,c->r[0]); // 8018810C
  W32(c->r[30]+0x00000018u,c->r[4]); // 80188110
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 80188114
  goto L_80188124; // 80188118
L_8018811C:;
  c->r[5]=0u+0x00000001u; // 8018811C
  c->r[6]=0u+0x00000001u; // 80188120
L_80188124:;
  c->r[8]=0u+0x80180000u; // 80188124
  c->r[3]=R32(c->r[13]+0xFFFF92F0u); // 80188128
  c->r[7]=c->r[30]|c->r[30]; // 8018812C
  c->r[9]=c->r[30]|c->r[30]; // 80188130
  c->r[8]=c->r[8]+0x00007B54u; // 80188134
  c->r[4]=0u+0x00000004u; // 80188138
  c->lr=0x80188140u; f_80186E88(c); // 8018813C
L_80188140:;
  c->r[11]=c->r[1]+0x00000030u; // 80188140
  c->lr=0x80188148u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80188144
  c->r[0]=R32(c->r[1]+0x00000034u); // 80188148
  c->lr=c->r[0]; // 8018814C
  c->r[1]=c->r[1]+0x00000030u; // 80188150
  return; // 80188154
}

// ISFS_GetAttr
void f_80188158(Ctx* __restrict c) {
  trace_call(0x80188158u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188158
  c->r[0]=c->lr; // 8018815C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80188160
  c->r[11]=c->r[1]+0x00000030u; // 80188164
  c->lr=0x8018816Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80188168
  cmps(c,0,(int32_t)c->r[3],0); // 8018816C
  c->r[30]=c->r[3]|c->r[3]; // 80188170
  c->r[23]=c->r[4]|c->r[4]; // 80188174
  c->r[24]=c->r[5]|c->r[5]; // 80188178
  c->r[25]=c->r[6]|c->r[6]; // 8018817C
  c->r[26]=c->r[7]|c->r[7]; // 80188180
  c->r[27]=c->r[8]|c->r[8]; // 80188184
  c->r[28]=c->r[9]|c->r[9]; // 80188188
  c->r[29]=0u+0x00000000u; // 8018818C
  if (crb(c,2)) { goto L_801881E4; } // 80188190
  c->r[0]=R32(c->r[13]+0xFFFF92F0u); // 80188194
  cmps(c,0,(int32_t)c->r[0],0); // 80188198
  if (crb(c,0)) { goto L_801881E4; } // 8018819C
  c->r[4]=0u+0x00000040u; // 801881A0
  c->lr=0x801881A8u; f_801859D4(c); // 801881A4
  cmpu(c,0,c->r[3],0x00000040u); // 801881A8
  c->r[31]=c->r[3]|c->r[3]; // 801881AC
  if (crb(c,2)) { goto L_801881E4; } // 801881B0
  cmps(c,0,(int32_t)c->r[23],0); // 801881B4
  if (crb(c,2)) { goto L_801881E4; } // 801881B8
  cmps(c,0,(int32_t)c->r[24],0); // 801881BC
  if (crb(c,2)) { goto L_801881E4; } // 801881C0
  cmps(c,0,(int32_t)c->r[25],0); // 801881C4
  if (crb(c,2)) { goto L_801881E4; } // 801881C8
  cmps(c,0,(int32_t)c->r[26],0); // 801881CC
  if (crb(c,2)) { goto L_801881E4; } // 801881D0
  cmps(c,0,(int32_t)c->r[27],0); // 801881D4
  if (crb(c,2)) { goto L_801881E4; } // 801881D8
  cmps(c,0,(int32_t)c->r[28],0); // 801881DC
  if (!crb(c,2)) { goto L_801881EC; } // 801881E0
L_801881E4:;
  c->r[31]=0u+0xFFFFFF9Bu; // 801881E4
  goto L_8018827C; // 801881E8
L_801881EC:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 801881EC
  c->r[4]=0u+0x00000140u; // 801881F0
  c->r[5]=0u+0x00000020u; // 801881F4
  c->lr=0x801881FCu; f_80187678(c); // 801881F8
  cmps(c,0,(int32_t)c->r[3],0); // 801881FC
  c->r[29]=c->r[3]|c->r[3]; // 80188200
  if (!crb(c,2)) { goto L_80188210; } // 80188204
  c->r[31]=0u+0xFFFFFFEAu; // 80188208
  goto L_8018827C; // 8018820C
L_80188210:;
  c->r[4]=c->r[30]|c->r[30]; // 80188210
  c->r[5]=c->r[31]+0x00000001u; // 80188214
  c->lr=0x8018821Cu; f_80004338(c); // 80188218
  c->r[0]=c->r[29]+0x0000005Fu; // 8018821C
  c->r[3]=R32(c->r[13]+0xFFFF92F0u); // 80188220
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80188224
  c->r[5]=c->r[29]|c->r[29]; // 80188228
  c->r[7]=c->r[30]|c->r[30]; // 8018822C
  c->r[4]=0u+0x00000006u; // 80188230
  c->r[6]=0u+0x00000040u; // 80188234
  c->r[8]=0u+0x0000004Cu; // 80188238
  c->lr=0x80188240u; f_80186C1C(c); // 8018823C
  cmps(c,0,(int32_t)c->r[3],0); // 80188240
  c->r[31]=c->r[3]|c->r[3]; // 80188244
  if (!crb(c,2)) { goto L_8018827C; } // 80188248
  c->r[0]=R32(c->r[30]+0x00000000u); // 8018824C
  W32(c->r[23]+0x00000000u,c->r[0]); // 80188250
  c->r[0]=R16(c->r[30]+0x00000004u); // 80188254
  W16(c->r[24]+0x00000000u,c->r[0]); // 80188258
  c->r[0]=R8(c->r[30]+0x00000049u); // 8018825C
  W32(c->r[25]+0x00000000u,c->r[0]); // 80188260
  c->r[0]=R8(c->r[30]+0x00000046u); // 80188264
  W32(c->r[26]+0x00000000u,c->r[0]); // 80188268
  c->r[0]=R8(c->r[30]+0x00000047u); // 8018826C
  W32(c->r[27]+0x00000000u,c->r[0]); // 80188270
  c->r[0]=R8(c->r[30]+0x00000048u); // 80188274
  W32(c->r[28]+0x00000000u,c->r[0]); // 80188278
L_8018827C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8018827C
  if (crb(c,2)) { goto L_80188294; } // 80188280
  if (crb(c,2)) { goto L_80188294; } // 80188284
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188288
  c->r[4]=c->r[29]|c->r[29]; // 8018828C
  c->lr=0x80188294u; f_8018767C(c); // 80188290
L_80188294:;
  c->r[11]=c->r[1]+0x00000030u; // 80188294
  c->r[3]=c->r[31]|c->r[31]; // 80188298
  c->lr=0x801882A0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018829C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801882A0
  c->lr=c->r[0]; // 801882A4
  c->r[1]=c->r[1]+0x00000030u; // 801882A8
  return; // 801882AC
}

// ISFS_GetAttrAsync
void f_801882B0(Ctx* __restrict c) {
  trace_call(0x801882B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801882B0
  c->r[0]=c->lr; // 801882B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801882B8
  c->r[11]=c->r[1]+0x00000040u; // 801882BC
  c->lr=0x801882C4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801882C0
  cmps(c,0,(int32_t)c->r[3],0); // 801882C4
  c->r[29]=R32(c->r[1]+0x00000048u); // 801882C8
  c->r[21]=c->r[3]|c->r[3]; // 801882CC
  c->r[22]=c->r[4]|c->r[4]; // 801882D0
  c->r[23]=c->r[5]|c->r[5]; // 801882D4
  c->r[24]=c->r[6]|c->r[6]; // 801882D8
  c->r[25]=c->r[7]|c->r[7]; // 801882DC
  c->r[26]=c->r[8]|c->r[8]; // 801882E0
  c->r[27]=c->r[9]|c->r[9]; // 801882E4
  c->r[28]=c->r[10]|c->r[10]; // 801882E8
  if (crb(c,2)) { goto L_80188340; } // 801882EC
  c->r[0]=R32(c->r[13]+0xFFFF92F0u); // 801882F0
  cmps(c,0,(int32_t)c->r[0],0); // 801882F4
  if (crb(c,0)) { goto L_80188340; } // 801882F8
  c->r[4]=0u+0x00000040u; // 801882FC
  c->lr=0x80188304u; f_801859D4(c); // 80188300
  cmpu(c,0,c->r[3],0x00000040u); // 80188304
  c->r[31]=c->r[3]|c->r[3]; // 80188308
  if (crb(c,2)) { goto L_80188340; } // 8018830C
  cmps(c,0,(int32_t)c->r[22],0); // 80188310
  if (crb(c,2)) { goto L_80188340; } // 80188314
  cmps(c,0,(int32_t)c->r[23],0); // 80188318
  if (crb(c,2)) { goto L_80188340; } // 8018831C
  cmps(c,0,(int32_t)c->r[24],0); // 80188320
  if (crb(c,2)) { goto L_80188340; } // 80188324
  cmps(c,0,(int32_t)c->r[25],0); // 80188328
  if (crb(c,2)) { goto L_80188340; } // 8018832C
  cmps(c,0,(int32_t)c->r[26],0); // 80188330
  if (crb(c,2)) { goto L_80188340; } // 80188334
  cmps(c,0,(int32_t)c->r[27],0); // 80188338
  if (!crb(c,2)) { goto L_80188348; } // 8018833C
L_80188340:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80188340
  goto L_801883CC; // 80188344
L_80188348:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188348
  c->r[4]=0u+0x00000140u; // 8018834C
  c->r[5]=0u+0x00000020u; // 80188350
  c->lr=0x80188358u; f_80187678(c); // 80188354
  cmps(c,0,(int32_t)c->r[3],0); // 80188358
  c->r[30]=c->r[3]|c->r[3]; // 8018835C
  if (!crb(c,2)) { goto L_8018836C; } // 80188360
  c->r[3]=0u+0xFFFFFF8Au; // 80188364
  goto L_801883CC; // 80188368
L_8018836C:;
  W32(c->r[3]+0x0000010Cu,c->r[22]); // 8018836C
  c->r[0]=0u+0x00000003u; // 80188370
  c->r[4]=c->r[21]|c->r[21]; // 80188374
  c->r[5]=c->r[31]+0x00000001u; // 80188378
  W32(c->r[3]+0x00000110u,c->r[23]); // 8018837C
  W32(c->r[3]+0x00000114u,c->r[24]); // 80188380
  W32(c->r[3]+0x00000118u,c->r[25]); // 80188384
  W32(c->r[3]+0x0000011Cu,c->r[26]); // 80188388
  W32(c->r[3]+0x00000120u,c->r[27]); // 8018838C
  W32(c->r[3]+0x00000100u,c->r[28]); // 80188390
  W32(c->r[3]+0x00000104u,c->r[29]); // 80188394
  W32(c->r[3]+0x00000108u,c->r[0]); // 80188398
  c->lr=0x801883A0u; f_80004338(c); // 8018839C
  c->r[0]=c->r[30]+0x0000005Fu; // 801883A0
  c->r[9]=0u+0x80180000u; // 801883A4
  c->r[3]=R32(c->r[13]+0xFFFF92F0u); // 801883A8
  c->r[5]=c->r[30]|c->r[30]; // 801883AC
  c->r[10]=c->r[30]|c->r[30]; // 801883B0
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801883B4
  c->r[9]=c->r[9]+0x00007B54u; // 801883B8
  c->r[4]=0u+0x00000006u; // 801883BC
  c->r[6]=0u+0x00000040u; // 801883C0
  c->r[8]=0u+0x0000004Cu; // 801883C4
  c->lr=0x801883CCu; f_80186AE4(c); // 801883C8
L_801883CC:;
  c->r[11]=c->r[1]+0x00000040u; // 801883CC
  c->lr=0x801883D4u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801883D0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801883D4
  c->lr=c->r[0]; // 801883D8
  c->r[1]=c->r[1]+0x00000040u; // 801883DC
  return; // 801883E0
}

// ISFS_Delete
void f_801883E4(Ctx* __restrict c) {
  trace_call(0x801883E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801883E4
  c->r[0]=c->lr; // 801883E8
  cmps(c,0,(int32_t)c->r[3],0); // 801883EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801883F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801883F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801883F8
  c->r[30]=0u+0x00000000u; // 801883FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80188400
  c->r[29]=c->r[3]|c->r[3]; // 80188404
  if (crb(c,2)) { goto L_8018842C; } // 80188408
  c->r[0]=R32(c->r[13]+0xFFFF92F0u); // 8018840C
  cmps(c,0,(int32_t)c->r[0],0); // 80188410
  if (crb(c,0)) { goto L_8018842C; } // 80188414
  c->r[4]=0u+0x00000040u; // 80188418
  c->lr=0x80188420u; f_801859D4(c); // 8018841C
  cmpu(c,0,c->r[3],0x00000040u); // 80188420
  c->r[31]=c->r[3]|c->r[3]; // 80188424
  if (!crb(c,2)) { goto L_80188434; } // 80188428
L_8018842C:;
  c->r[31]=0u+0xFFFFFF9Bu; // 8018842C
  goto L_80188484; // 80188430
L_80188434:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188434
  c->r[4]=0u+0x00000140u; // 80188438
  c->r[5]=0u+0x00000020u; // 8018843C
  c->lr=0x80188444u; f_80187678(c); // 80188440
  cmps(c,0,(int32_t)c->r[3],0); // 80188444
  c->r[30]=c->r[3]|c->r[3]; // 80188448
  if (!crb(c,2)) { goto L_80188458; } // 8018844C
  c->r[31]=0u+0xFFFFFFEAu; // 80188450
  goto L_80188484; // 80188454
L_80188458:;
  c->r[4]=c->r[29]|c->r[29]; // 80188458
  c->r[5]=c->r[31]+0x00000001u; // 8018845C
  c->lr=0x80188464u; f_80004338(c); // 80188460
  c->r[3]=R32(c->r[13]+0xFFFF92F0u); // 80188464
  c->r[5]=c->r[30]|c->r[30]; // 80188468
  c->r[4]=0u+0x00000007u; // 8018846C
  c->r[6]=0u+0x00000040u; // 80188470
  c->r[7]=0u+0x00000000u; // 80188474
  c->r[8]=0u+0x00000000u; // 80188478
  c->lr=0x80188480u; f_80186C1C(c); // 8018847C
  c->r[31]=c->r[3]|c->r[3]; // 80188480
L_80188484:;
  cmps(c,0,(int32_t)c->r[30],0); // 80188484
  if (crb(c,2)) { goto L_8018849C; } // 80188488
  if (crb(c,2)) { goto L_8018849C; } // 8018848C
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188490
  c->r[4]=c->r[30]|c->r[30]; // 80188494
  c->lr=0x8018849Cu; f_8018767C(c); // 80188498
L_8018849C:;
  c->r[3]=c->r[31]|c->r[31]; // 8018849C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801884A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801884A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801884A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801884AC
  c->lr=c->r[0]; // 801884B0
  c->r[1]=c->r[1]+0x00000020u; // 801884B4
  return; // 801884B8
}

// ISFS_DeleteAsync
void f_801884BC(Ctx* __restrict c) {
  trace_call(0x801884BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801884BC
  c->r[0]=c->lr; // 801884C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801884C4
  c->r[11]=c->r[1]+0x00000020u; // 801884C8
  c->lr=0x801884D0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801884CC
  cmps(c,0,(int32_t)c->r[3],0); // 801884D0
  c->r[27]=c->r[3]|c->r[3]; // 801884D4
  c->r[28]=c->r[4]|c->r[4]; // 801884D8
  c->r[29]=c->r[5]|c->r[5]; // 801884DC
  if (crb(c,2)) { goto L_80188504; } // 801884E0
  c->r[0]=R32(c->r[13]+0xFFFF92F0u); // 801884E4
  cmps(c,0,(int32_t)c->r[0],0); // 801884E8
  if (crb(c,0)) { goto L_80188504; } // 801884EC
  c->r[4]=0u+0x00000040u; // 801884F0
  c->lr=0x801884F8u; f_801859D4(c); // 801884F4
  cmpu(c,0,c->r[3],0x00000040u); // 801884F8
  c->r[31]=c->r[3]|c->r[3]; // 801884FC
  if (!crb(c,2)) { goto L_8018850C; } // 80188500
L_80188504:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80188504
  goto L_80188574; // 80188508
L_8018850C:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 8018850C
  c->r[4]=0u+0x00000140u; // 80188510
  c->r[5]=0u+0x00000020u; // 80188514
  c->lr=0x8018851Cu; f_80187678(c); // 80188518
  cmps(c,0,(int32_t)c->r[3],0); // 8018851C
  c->r[30]=c->r[3]|c->r[3]; // 80188520
  if (!crb(c,2)) { goto L_80188530; } // 80188524
  c->r[3]=0u+0xFFFFFF8Au; // 80188528
  goto L_80188574; // 8018852C
L_80188530:;
  c->r[4]=c->r[27]|c->r[27]; // 80188530
  c->r[5]=c->r[31]+0x00000001u; // 80188534
  c->lr=0x8018853Cu; f_80004338(c); // 80188538
  W32(c->r[30]+0x00000100u,c->r[28]); // 8018853C
  c->r[9]=0u+0x80180000u; // 80188540
  c->r[0]=0u+0x00000000u; // 80188544
  c->r[5]=c->r[30]|c->r[30]; // 80188548
  W32(c->r[30]+0x00000104u,c->r[29]); // 8018854C
  c->r[10]=c->r[30]|c->r[30]; // 80188550
  c->r[9]=c->r[9]+0x00007B54u; // 80188554
  c->r[4]=0u+0x00000007u; // 80188558
  W32(c->r[30]+0x00000108u,c->r[0]); // 8018855C
  c->r[6]=0u+0x00000040u; // 80188560
  c->r[7]=0u+0x00000000u; // 80188564
  c->r[8]=0u+0x00000000u; // 80188568
  c->r[3]=R32(c->r[13]+0xFFFF92F0u); // 8018856C
  c->lr=0x80188574u; f_80186AE4(c); // 80188570
L_80188574:;
  c->r[11]=c->r[1]+0x00000020u; // 80188574
  c->lr=0x8018857Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80188578
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018857C
  c->lr=c->r[0]; // 80188580
  c->r[1]=c->r[1]+0x00000020u; // 80188584
  return; // 80188588
}

// ISFS_Rename
void f_8018858C(Ctx* __restrict c) {
  trace_call(0x8018858Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018858C
  c->r[0]=c->lr; // 80188590
  W32(c->r[1]+0x00000024u,c->r[0]); // 80188594
  c->r[11]=c->r[1]+0x00000020u; // 80188598
  c->lr=0x801885A0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018859C
  cmps(c,0,(int32_t)c->r[3],0); // 801885A0
  c->r[27]=c->r[3]|c->r[3]; // 801885A4
  c->r[28]=c->r[4]|c->r[4]; // 801885A8
  c->r[29]=0u+0x00000000u; // 801885AC
  if (crb(c,2)) { goto L_801885F4; } // 801885B0
  cmps(c,0,(int32_t)c->r[4],0); // 801885B4
  if (crb(c,2)) { goto L_801885F4; } // 801885B8
  c->r[0]=R32(c->r[13]+0xFFFF92F0u); // 801885BC
  cmps(c,0,(int32_t)c->r[0],0); // 801885C0
  if (crb(c,0)) { goto L_801885F4; } // 801885C4
  c->r[4]=0u+0x00000040u; // 801885C8
  c->lr=0x801885D0u; f_801859D4(c); // 801885CC
  cmpu(c,0,c->r[3],0x00000040u); // 801885D0
  c->r[30]=c->r[3]|c->r[3]; // 801885D4
  if (crb(c,2)) { goto L_801885F4; } // 801885D8
  c->r[3]=c->r[28]|c->r[28]; // 801885DC
  c->r[4]=0u+0x00000040u; // 801885E0
  c->lr=0x801885E8u; f_801859D4(c); // 801885E4
  cmpu(c,0,c->r[3],0x00000040u); // 801885E8
  c->r[31]=c->r[3]|c->r[3]; // 801885EC
  if (!crb(c,2)) { goto L_801885FC; } // 801885F0
L_801885F4:;
  c->r[30]=0u+0xFFFFFF9Bu; // 801885F4
  goto L_8018865C; // 801885F8
L_801885FC:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 801885FC
  c->r[4]=0u+0x00000140u; // 80188600
  c->r[5]=0u+0x00000020u; // 80188604
  c->lr=0x8018860Cu; f_80187678(c); // 80188608
  cmps(c,0,(int32_t)c->r[3],0); // 8018860C
  c->r[29]=c->r[3]|c->r[3]; // 80188610
  if (!crb(c,2)) { goto L_80188620; } // 80188614
  c->r[30]=0u+0xFFFFFFEAu; // 80188618
  goto L_8018865C; // 8018861C
L_80188620:;
  c->r[4]=c->r[27]|c->r[27]; // 80188620
  c->r[5]=c->r[30]+0x00000001u; // 80188624
  c->lr=0x8018862Cu; f_80004338(c); // 80188628
  c->r[4]=c->r[28]|c->r[28]; // 8018862C
  c->r[3]=c->r[29]+0x00000040u; // 80188630
  c->r[5]=c->r[31]+0x00000001u; // 80188634
  c->lr=0x8018863Cu; f_80004338(c); // 80188638
  c->r[3]=R32(c->r[13]+0xFFFF92F0u); // 8018863C
  c->r[5]=c->r[29]|c->r[29]; // 80188640
  c->r[4]=0u+0x00000008u; // 80188644
  c->r[6]=0u+0x00000080u; // 80188648
  c->r[7]=0u+0x00000000u; // 8018864C
  c->r[8]=0u+0x00000000u; // 80188650
  c->lr=0x80188658u; f_80186C1C(c); // 80188654
  c->r[30]=c->r[3]|c->r[3]; // 80188658
L_8018865C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8018865C
  if (crb(c,2)) { goto L_80188674; } // 80188660
  if (crb(c,2)) { goto L_80188674; } // 80188664
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188668
  c->r[4]=c->r[29]|c->r[29]; // 8018866C
  c->lr=0x80188674u; f_8018767C(c); // 80188670
L_80188674:;
  c->r[11]=c->r[1]+0x00000020u; // 80188674
  c->r[3]=c->r[30]|c->r[30]; // 80188678
  c->lr=0x80188680u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018867C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80188680
  c->lr=c->r[0]; // 80188684
  c->r[1]=c->r[1]+0x00000020u; // 80188688
  return; // 8018868C
}

// ISFS_RenameAsync
void f_80188690(Ctx* __restrict c) {
  trace_call(0x80188690u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188690
  c->r[0]=c->lr; // 80188694
  W32(c->r[1]+0x00000034u,c->r[0]); // 80188698
  c->r[11]=c->r[1]+0x00000030u; // 8018869C
  c->lr=0x801886A4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801886A0
  cmps(c,0,(int32_t)c->r[3],0); // 801886A4
  c->r[25]=c->r[3]|c->r[3]; // 801886A8
  c->r[26]=c->r[4]|c->r[4]; // 801886AC
  c->r[27]=c->r[5]|c->r[5]; // 801886B0
  c->r[28]=c->r[6]|c->r[6]; // 801886B4
  if (crb(c,2)) { goto L_801886FC; } // 801886B8
  cmps(c,0,(int32_t)c->r[4],0); // 801886BC
  if (crb(c,2)) { goto L_801886FC; } // 801886C0
  c->r[0]=R32(c->r[13]+0xFFFF92F0u); // 801886C4
  cmps(c,0,(int32_t)c->r[0],0); // 801886C8
  if (crb(c,0)) { goto L_801886FC; } // 801886CC
  c->r[4]=0u+0x00000040u; // 801886D0
  c->lr=0x801886D8u; f_801859D4(c); // 801886D4
  cmpu(c,0,c->r[3],0x00000040u); // 801886D8
  c->r[30]=c->r[3]|c->r[3]; // 801886DC
  if (crb(c,2)) { goto L_801886FC; } // 801886E0
  c->r[3]=c->r[26]|c->r[26]; // 801886E4
  c->r[4]=0u+0x00000040u; // 801886E8
  c->lr=0x801886F0u; f_801859D4(c); // 801886EC
  cmpu(c,0,c->r[3],0x00000040u); // 801886F0
  c->r[31]=c->r[3]|c->r[3]; // 801886F4
  if (!crb(c,2)) { goto L_80188704; } // 801886F8
L_801886FC:;
  c->r[3]=0u+0xFFFFFF9Bu; // 801886FC
  goto L_8018877C; // 80188700
L_80188704:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188704
  c->r[4]=0u+0x00000140u; // 80188708
  c->r[5]=0u+0x00000020u; // 8018870C
  c->lr=0x80188714u; f_80187678(c); // 80188710
  cmps(c,0,(int32_t)c->r[3],0); // 80188714
  c->r[29]=c->r[3]|c->r[3]; // 80188718
  if (!crb(c,2)) { goto L_80188728; } // 8018871C
  c->r[3]=0u+0xFFFFFF8Au; // 80188720
  goto L_8018877C; // 80188724
L_80188728:;
  W32(c->r[3]+0x00000100u,c->r[27]); // 80188728
  c->r[0]=0u+0x00000000u; // 8018872C
  c->r[4]=c->r[25]|c->r[25]; // 80188730
  c->r[5]=c->r[30]+0x00000001u; // 80188734
  W32(c->r[3]+0x00000104u,c->r[28]); // 80188738
  W32(c->r[3]+0x00000108u,c->r[0]); // 8018873C
  c->lr=0x80188744u; f_80004338(c); // 80188740
  c->r[4]=c->r[26]|c->r[26]; // 80188744
  c->r[3]=c->r[29]+0x00000040u; // 80188748
  c->r[5]=c->r[31]+0x00000001u; // 8018874C
  c->lr=0x80188754u; f_80004338(c); // 80188750
  c->r[9]=0u+0x80180000u; // 80188754
  c->r[3]=R32(c->r[13]+0xFFFF92F0u); // 80188758
  c->r[5]=c->r[29]|c->r[29]; // 8018875C
  c->r[10]=c->r[29]|c->r[29]; // 80188760
  c->r[9]=c->r[9]+0x00007B54u; // 80188764
  c->r[4]=0u+0x00000008u; // 80188768
  c->r[6]=0u+0x00000080u; // 8018876C
  c->r[7]=0u+0x00000000u; // 80188770
  c->r[8]=0u+0x00000000u; // 80188774
  c->lr=0x8018877Cu; f_80186AE4(c); // 80188778
L_8018877C:;
  c->r[11]=c->r[1]+0x00000030u; // 8018877C
  c->lr=0x80188784u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80188780
  c->r[0]=R32(c->r[1]+0x00000034u); // 80188784
  c->lr=c->r[0]; // 80188788
  c->r[1]=c->r[1]+0x00000030u; // 8018878C
  return; // 80188790
}

// ISFS_GetUsage
void f_80188794(Ctx* __restrict c) {
  trace_call(0x80188794u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188794
  c->r[0]=c->lr; // 80188798
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018879C
  c->r[11]=c->r[1]+0x00000020u; // 801887A0
  c->lr=0x801887A8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801887A4
  cmps(c,0,(int32_t)c->r[3],0); // 801887A8
  c->r[30]=c->r[3]|c->r[3]; // 801887AC
  c->r[26]=c->r[4]|c->r[4]; // 801887B0
  c->r[27]=c->r[5]|c->r[5]; // 801887B4
  c->r[28]=0u+0x00000000u; // 801887B8
  if (crb(c,2)) { goto L_801887F0; } // 801887BC
  c->r[0]=R32(c->r[13]+0xFFFF92F0u); // 801887C0
  cmps(c,0,(int32_t)c->r[0],0); // 801887C4
  if (crb(c,0)) { goto L_801887F0; } // 801887C8
  cmps(c,0,(int32_t)c->r[4],0); // 801887CC
  if (crb(c,2)) { goto L_801887F0; } // 801887D0
  cmps(c,0,(int32_t)c->r[5],0); // 801887D4
  if (crb(c,2)) { goto L_801887F0; } // 801887D8
  c->r[4]=0u+0x00000040u; // 801887DC
  c->lr=0x801887E4u; f_801859D4(c); // 801887E0
  cmpu(c,0,c->r[3],0x00000040u); // 801887E4
  c->r[31]=c->r[3]|c->r[3]; // 801887E8
  if (!crb(c,2)) { goto L_801887F8; } // 801887EC
L_801887F0:;
  c->r[31]=0u+0xFFFFFF9Bu; // 801887F0
  goto L_80188898; // 801887F4
L_801887F8:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 801887F8
  c->r[4]=0u+0x00000140u; // 801887FC
  c->r[5]=0u+0x00000020u; // 80188800
  c->lr=0x80188808u; f_80187678(c); // 80188804
  cmps(c,0,(int32_t)c->r[3],0); // 80188808
  c->r[28]=c->r[3]|c->r[3]; // 8018880C
  if (!crb(c,2)) { goto L_8018881C; } // 80188810
  c->r[31]=0u+0xFFFFFFEAu; // 80188814
  goto L_80188898; // 80188818
L_8018881C:;
  c->r[0]=c->r[3]+0x00000037u; // 8018881C
  c->r[4]=c->r[30]|c->r[30]; // 80188820
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80188824
  c->r[5]=c->r[31]+0x00000001u; // 80188828
  c->r[3]=c->r[29]|c->r[29]; // 8018882C
  c->lr=0x80188834u; f_80004338(c); // 80188830
  W32(c->r[28]+0x00000000u,c->r[29]); // 80188834
  c->r[4]=0u+0x00000040u; // 80188838
  c->r[3]=c->r[29]+0x0000005Fu; // 8018883C
  c->r[0]=0u+0x00000004u; // 80188840
  W32(c->r[28]+0x00000004u,c->r[4]); // 80188844
  c->r[30]=rotl(c->r[3],0)&0xFFFFFFE0u; // 80188848
  c->r[3]=c->r[30]+0x00000023u; // 8018884C
  c->r[7]=c->r[28]|c->r[28]; // 80188850
  W32(c->r[28]+0x00000008u,c->r[30]); // 80188854
  c->r[29]=rotl(c->r[3],0)&0xFFFFFFE0u; // 80188858
  c->r[4]=0u+0x0000000Cu; // 8018885C
  c->r[5]=0u+0x00000001u; // 80188860
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80188864
  c->r[6]=0u+0x00000002u; // 80188868
  W32(c->r[28]+0x00000010u,c->r[29]); // 8018886C
  W32(c->r[28]+0x00000014u,c->r[0]); // 80188870
  c->r[3]=R32(c->r[13]+0xFFFF92F0u); // 80188874
  c->lr=0x8018887Cu; f_80186F6C(c); // 80188878
  cmps(c,0,(int32_t)c->r[3],0); // 8018887C
  c->r[31]=c->r[3]|c->r[3]; // 80188880
  if (!crb(c,2)) { goto L_80188898; } // 80188884
  c->r[0]=R32(c->r[30]+0x00000000u); // 80188888
  W32(c->r[26]+0x00000000u,c->r[0]); // 8018888C
  c->r[0]=R32(c->r[29]+0x00000000u); // 80188890
  W32(c->r[27]+0x00000000u,c->r[0]); // 80188894
L_80188898:;
  cmps(c,0,(int32_t)c->r[28],0); // 80188898
  if (crb(c,2)) { goto L_801888B0; } // 8018889C
  if (crb(c,2)) { goto L_801888B0; } // 801888A0
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 801888A4
  c->r[4]=c->r[28]|c->r[28]; // 801888A8
  c->lr=0x801888B0u; f_8018767C(c); // 801888AC
L_801888B0:;
  c->r[11]=c->r[1]+0x00000020u; // 801888B0
  c->r[3]=c->r[31]|c->r[31]; // 801888B4
  c->lr=0x801888BCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801888B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801888BC
  c->lr=c->r[0]; // 801888C0
  c->r[1]=c->r[1]+0x00000020u; // 801888C4
  return; // 801888C8
}

// ISFS_CreateFile
void f_801888CC(Ctx* __restrict c) {
  trace_call(0x801888CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801888CC
  c->r[0]=c->lr; // 801888D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801888D4
  c->r[11]=c->r[1]+0x00000030u; // 801888D8
  c->lr=0x801888E0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801888DC
  cmps(c,0,(int32_t)c->r[3],0); // 801888E0
  c->r[25]=c->r[3]|c->r[3]; // 801888E4
  c->r[26]=c->r[4]|c->r[4]; // 801888E8
  c->r[27]=c->r[5]|c->r[5]; // 801888EC
  c->r[28]=c->r[6]|c->r[6]; // 801888F0
  c->r[29]=c->r[7]|c->r[7]; // 801888F4
  c->r[30]=0u+0x00000000u; // 801888F8
  if (crb(c,2)) { goto L_80188920; } // 801888FC
  c->r[0]=R32(c->r[13]+0xFFFF92F0u); // 80188900
  cmps(c,0,(int32_t)c->r[0],0); // 80188904
  if (crb(c,0)) { goto L_80188920; } // 80188908
  c->r[4]=0u+0x00000040u; // 8018890C
  c->lr=0x80188914u; f_801859D4(c); // 80188910
  cmpu(c,0,c->r[3],0x00000040u); // 80188914
  c->r[31]=c->r[3]|c->r[3]; // 80188918
  if (!crb(c,2)) { goto L_80188928; } // 8018891C
L_80188920:;
  c->r[31]=0u+0xFFFFFF9Bu; // 80188920
  goto L_8018898C; // 80188924
L_80188928:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188928
  c->r[4]=0u+0x00000140u; // 8018892C
  c->r[5]=0u+0x00000020u; // 80188930
  c->lr=0x80188938u; f_80187678(c); // 80188934
  cmps(c,0,(int32_t)c->r[3],0); // 80188938
  c->r[30]=c->r[3]|c->r[3]; // 8018893C
  if (!crb(c,2)) { goto L_8018894C; } // 80188940
  c->r[31]=0u+0xFFFFFFEAu; // 80188944
  goto L_8018898C; // 80188948
L_8018894C:;
  c->r[4]=c->r[25]|c->r[25]; // 8018894C
  c->r[5]=c->r[31]+0x00000001u; // 80188950
  c->r[3]=c->r[3]+0x00000006u; // 80188954
  c->lr=0x8018895Cu; f_80004338(c); // 80188958
  W8(c->r[30]+0x00000049u,c->r[26]); // 8018895C
  c->r[5]=c->r[30]|c->r[30]; // 80188960
  c->r[4]=0u+0x00000009u; // 80188964
  c->r[6]=0u+0x0000004Cu; // 80188968
  W8(c->r[30]+0x00000046u,c->r[27]); // 8018896C
  c->r[7]=0u+0x00000000u; // 80188970
  c->r[8]=0u+0x00000000u; // 80188974
  W8(c->r[30]+0x00000047u,c->r[28]); // 80188978
  W8(c->r[30]+0x00000048u,c->r[29]); // 8018897C
  c->r[3]=R32(c->r[13]+0xFFFF92F0u); // 80188980
  c->lr=0x80188988u; f_80186C1C(c); // 80188984
  c->r[31]=c->r[3]|c->r[3]; // 80188988
L_8018898C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8018898C
  if (crb(c,2)) { goto L_801889A4; } // 80188990
  if (crb(c,2)) { goto L_801889A4; } // 80188994
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188998
  c->r[4]=c->r[30]|c->r[30]; // 8018899C
  c->lr=0x801889A4u; f_8018767C(c); // 801889A0
L_801889A4:;
  c->r[11]=c->r[1]+0x00000030u; // 801889A4
  c->r[3]=c->r[31]|c->r[31]; // 801889A8
  c->lr=0x801889B0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801889AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801889B0
  c->lr=c->r[0]; // 801889B4
  c->r[1]=c->r[1]+0x00000030u; // 801889B8
  return; // 801889BC
}

// ISFS_CreateFileAsync
void f_801889C0(Ctx* __restrict c) {
  trace_call(0x801889C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801889C0
  c->r[0]=c->lr; // 801889C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801889C8
  c->r[11]=c->r[1]+0x00000030u; // 801889CC
  c->lr=0x801889D4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801889D0
  cmps(c,0,(int32_t)c->r[3],0); // 801889D4
  c->r[23]=c->r[3]|c->r[3]; // 801889D8
  c->r[24]=c->r[4]|c->r[4]; // 801889DC
  c->r[25]=c->r[5]|c->r[5]; // 801889E0
  c->r[26]=c->r[6]|c->r[6]; // 801889E4
  c->r[27]=c->r[7]|c->r[7]; // 801889E8
  c->r[28]=c->r[8]|c->r[8]; // 801889EC
  c->r[29]=c->r[9]|c->r[9]; // 801889F0
  if (crb(c,2)) { goto L_80188A18; } // 801889F4
  c->r[0]=R32(c->r[13]+0xFFFF92F0u); // 801889F8
  cmps(c,0,(int32_t)c->r[0],0); // 801889FC
  if (crb(c,0)) { goto L_80188A18; } // 80188A00
  c->r[4]=0u+0x00000040u; // 80188A04
  c->lr=0x80188A0Cu; f_801859D4(c); // 80188A08
  cmpu(c,0,c->r[3],0x00000040u); // 80188A0C
  c->r[31]=c->r[3]|c->r[3]; // 80188A10
  if (!crb(c,2)) { goto L_80188A20; } // 80188A14
L_80188A18:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80188A18
  goto L_80188A9C; // 80188A1C
L_80188A20:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188A20
  c->r[4]=0u+0x00000140u; // 80188A24
  c->r[5]=0u+0x00000020u; // 80188A28
  c->lr=0x80188A30u; f_80187678(c); // 80188A2C
  cmps(c,0,(int32_t)c->r[3],0); // 80188A30
  c->r[30]=c->r[3]|c->r[3]; // 80188A34
  if (!crb(c,2)) { goto L_80188A44; } // 80188A38
  c->r[3]=0u+0xFFFFFF8Au; // 80188A3C
  goto L_80188A9C; // 80188A40
L_80188A44:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 80188A44
  c->r[0]=0u+0x00000000u; // 80188A48
  c->r[4]=c->r[23]|c->r[23]; // 80188A4C
  c->r[5]=c->r[31]+0x00000001u; // 80188A50
  W32(c->r[3]+0x00000104u,c->r[29]); // 80188A54
  W32(c->r[3]+0x00000108u,c->r[0]); // 80188A58
  c->r[3]=c->r[3]+0x00000006u; // 80188A5C
  c->lr=0x80188A64u; f_80004338(c); // 80188A60
  W8(c->r[30]+0x00000049u,c->r[24]); // 80188A64
  c->r[9]=0u+0x80180000u; // 80188A68
  c->r[5]=c->r[30]|c->r[30]; // 80188A6C
  c->r[10]=c->r[30]|c->r[30]; // 80188A70
  W8(c->r[30]+0x00000046u,c->r[25]); // 80188A74
  c->r[9]=c->r[9]+0x00007B54u; // 80188A78
  c->r[4]=0u+0x00000009u; // 80188A7C
  c->r[6]=0u+0x0000004Cu; // 80188A80
  W8(c->r[30]+0x00000047u,c->r[26]); // 80188A84
  c->r[7]=0u+0x00000000u; // 80188A88
  c->r[8]=0u+0x00000000u; // 80188A8C
  W8(c->r[30]+0x00000048u,c->r[27]); // 80188A90
  c->r[3]=R32(c->r[13]+0xFFFF92F0u); // 80188A94
  c->lr=0x80188A9Cu; f_80186AE4(c); // 80188A98
L_80188A9C:;
  c->r[11]=c->r[1]+0x00000030u; // 80188A9C
  c->lr=0x80188AA4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80188AA0
  c->r[0]=R32(c->r[1]+0x00000034u); // 80188AA4
  c->lr=c->r[0]; // 80188AA8
  c->r[1]=c->r[1]+0x00000030u; // 80188AAC
  return; // 80188AB0
}

// ISFS_Open
void f_80188AB4(Ctx* __restrict c) {
  trace_call(0x80188AB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188AB4
  c->r[0]=c->lr; // 80188AB8
  cmps(c,0,(int32_t)c->r[3],0); // 80188ABC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80188AC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80188AC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80188AC8
  c->r[30]=0u+0x00000000u; // 80188ACC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80188AD0
  c->r[29]=c->r[4]|c->r[4]; // 80188AD4
  W32(c->r[1]+0x00000010u,c->r[28]); // 80188AD8
  c->r[28]=c->r[3]|c->r[3]; // 80188ADC
  if (crb(c,2)) { goto L_80188AF8; } // 80188AE0
  c->r[4]=0u+0x00000040u; // 80188AE4
  c->lr=0x80188AECu; f_801859D4(c); // 80188AE8
  cmpu(c,0,c->r[3],0x00000040u); // 80188AEC
  c->r[31]=c->r[3]|c->r[3]; // 80188AF0
  if (!crb(c,2)) { goto L_80188B00; } // 80188AF4
L_80188AF8:;
  c->r[31]=0u+0xFFFFFF9Bu; // 80188AF8
  goto L_80188B40; // 80188AFC
L_80188B00:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188B00
  c->r[4]=0u+0x00000140u; // 80188B04
  c->r[5]=0u+0x00000020u; // 80188B08
  c->lr=0x80188B10u; f_80187678(c); // 80188B0C
  cmps(c,0,(int32_t)c->r[3],0); // 80188B10
  c->r[30]=c->r[3]|c->r[3]; // 80188B14
  if (!crb(c,2)) { goto L_80188B24; } // 80188B18
  c->r[31]=0u+0xFFFFFFEAu; // 80188B1C
  goto L_80188B40; // 80188B20
L_80188B24:;
  c->r[4]=c->r[28]|c->r[28]; // 80188B24
  c->r[5]=c->r[31]+0x00000001u; // 80188B28
  c->lr=0x80188B30u; f_80004338(c); // 80188B2C
  c->r[3]=c->r[30]|c->r[30]; // 80188B30
  c->r[4]=c->r[29]|c->r[29]; // 80188B34
  c->lr=0x80188B3Cu; f_80186284(c); // 80188B38
  c->r[31]=c->r[3]|c->r[3]; // 80188B3C
L_80188B40:;
  cmps(c,0,(int32_t)c->r[30],0); // 80188B40
  if (crb(c,2)) { goto L_80188B58; } // 80188B44
  if (crb(c,2)) { goto L_80188B58; } // 80188B48
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188B4C
  c->r[4]=c->r[30]|c->r[30]; // 80188B50
  c->lr=0x80188B58u; f_8018767C(c); // 80188B54
L_80188B58:;
  c->r[3]=c->r[31]|c->r[31]; // 80188B58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80188B5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80188B60
  c->r[29]=R32(c->r[1]+0x00000014u); // 80188B64
  c->r[28]=R32(c->r[1]+0x00000010u); // 80188B68
  c->r[0]=R32(c->r[1]+0x00000024u); // 80188B6C
  c->lr=c->r[0]; // 80188B70
  c->r[1]=c->r[1]+0x00000020u; // 80188B74
  return; // 80188B78
}

// ISFS_OpenAsync
void f_80188B7C(Ctx* __restrict c) {
  trace_call(0x80188B7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188B7C
  c->r[0]=c->lr; // 80188B80
  W32(c->r[1]+0x00000024u,c->r[0]); // 80188B84
  c->r[11]=c->r[1]+0x00000020u; // 80188B88
  c->lr=0x80188B90u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80188B8C
  cmps(c,0,(int32_t)c->r[3],0); // 80188B90
  c->r[26]=c->r[3]|c->r[3]; // 80188B94
  c->r[27]=c->r[4]|c->r[4]; // 80188B98
  c->r[28]=c->r[5]|c->r[5]; // 80188B9C
  c->r[29]=c->r[6]|c->r[6]; // 80188BA0
  if (crb(c,2)) { goto L_80188BBC; } // 80188BA4
  c->r[4]=0u+0x00000040u; // 80188BA8
  c->lr=0x80188BB0u; f_801859D4(c); // 80188BAC
  cmpu(c,0,c->r[3],0x00000040u); // 80188BB0
  c->r[31]=c->r[3]|c->r[3]; // 80188BB4
  if (!crb(c,2)) { goto L_80188BC4; } // 80188BB8
L_80188BBC:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80188BBC
  goto L_80188C1C; // 80188BC0
L_80188BC4:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188BC4
  c->r[4]=0u+0x00000140u; // 80188BC8
  c->r[5]=0u+0x00000020u; // 80188BCC
  c->lr=0x80188BD4u; f_80187678(c); // 80188BD0
  cmps(c,0,(int32_t)c->r[3],0); // 80188BD4
  c->r[30]=c->r[3]|c->r[3]; // 80188BD8
  if (!crb(c,2)) { goto L_80188BE8; } // 80188BDC
  c->r[3]=0u+0xFFFFFF8Au; // 80188BE0
  goto L_80188C1C; // 80188BE4
L_80188BE8:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 80188BE8
  c->r[0]=0u+0x00000000u; // 80188BEC
  c->r[4]=c->r[26]|c->r[26]; // 80188BF0
  c->r[5]=c->r[31]+0x00000001u; // 80188BF4
  W32(c->r[3]+0x00000104u,c->r[29]); // 80188BF8
  W32(c->r[3]+0x00000108u,c->r[0]); // 80188BFC
  c->lr=0x80188C04u; f_80004338(c); // 80188C00
  c->r[5]=0u+0x80180000u; // 80188C04
  c->r[3]=c->r[30]|c->r[30]; // 80188C08
  c->r[4]=c->r[27]|c->r[27]; // 80188C0C
  c->r[6]=c->r[30]|c->r[30]; // 80188C10
  c->r[5]=c->r[5]+0x00007B54u; // 80188C14
  c->lr=0x80188C1Cu; f_8018616C(c); // 80188C18
L_80188C1C:;
  c->r[11]=c->r[1]+0x00000020u; // 80188C1C
  c->lr=0x80188C24u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80188C20
  c->r[0]=R32(c->r[1]+0x00000024u); // 80188C24
  c->lr=c->r[0]; // 80188C28
  c->r[1]=c->r[1]+0x00000020u; // 80188C2C
  return; // 80188C30
}

// fn_80188C34
void f_80188C34(Ctx* __restrict c) {
  f_801869FC(c); return; // 80188C34
}

// fn_80188C38
void f_80188C38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188C38
  c->r[0]=c->lr; // 80188C3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80188C40
  c->r[11]=c->r[1]+0x00000020u; // 80188C44
  c->lr=0x80188C4Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80188C48
  c->r[27]=c->r[3]|c->r[3]; // 80188C4C
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188C50
  c->r[28]=c->r[4]|c->r[4]; // 80188C54
  c->r[29]=c->r[5]|c->r[5]; // 80188C58
  c->r[30]=c->r[6]|c->r[6]; // 80188C5C
  c->r[31]=c->r[7]|c->r[7]; // 80188C60
  c->r[4]=0u+0x00000140u; // 80188C64
  c->r[5]=0u+0x00000020u; // 80188C68
  c->lr=0x80188C70u; f_80187678(c); // 80188C6C
  cmps(c,0,(int32_t)c->r[3],0); // 80188C70
  if (!crb(c,2)) { goto L_80188C80; } // 80188C74
  c->r[3]=0u+0xFFFFFF8Au; // 80188C78
  goto L_80188CAC; // 80188C7C
L_80188C80:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 80188C80
  c->r[6]=0u+0x80180000u; // 80188C84
  c->r[0]=0u+0x00000000u; // 80188C88
  c->r[4]=c->r[28]|c->r[28]; // 80188C8C
  W32(c->r[3]+0x00000104u,c->r[31]); // 80188C90
  c->r[5]=c->r[29]|c->r[29]; // 80188C94
  c->r[7]=c->r[3]|c->r[3]; // 80188C98
  c->r[6]=c->r[6]+0x00007B54u; // 80188C9C
  W32(c->r[3]+0x00000108u,c->r[0]); // 80188CA0
  c->r[3]=c->r[27]|c->r[27]; // 80188CA4
  c->lr=0x80188CACu; f_8018691C(c); // 80188CA8
L_80188CAC:;
  c->r[11]=c->r[1]+0x00000020u; // 80188CAC
  c->lr=0x80188CB4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80188CB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80188CB4
  c->lr=c->r[0]; // 80188CB8
  c->r[1]=c->r[1]+0x00000020u; // 80188CBC
  return; // 80188CC0
}

// fn_80188CC4
void f_80188CC4(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 80188CC4
  if (crb(c,2)) { goto L_80188CD4; } // 80188CC8
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 80188CCC
  if (crb(c,2)) { goto L_80188CDC; } // 80188CD0
L_80188CD4:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80188CD4
  return; // 80188CD8
L_80188CDC:;
  f_8018660C(c); return; // 80188CDC
  return; // 80188CE0
}

// fn_80188CE4
void f_80188CE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188CE4
  c->r[0]=c->lr; // 80188CE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80188CEC
  c->r[11]=c->r[1]+0x00000020u; // 80188CF0
  c->lr=0x80188CF8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80188CF4
  cmps(c,0,(int32_t)c->r[4],0); // 80188CF8
  c->r[27]=c->r[3]|c->r[3]; // 80188CFC
  c->r[28]=c->r[4]|c->r[4]; // 80188D00
  c->r[29]=c->r[5]|c->r[5]; // 80188D04
  c->r[30]=c->r[6]|c->r[6]; // 80188D08
  c->r[31]=c->r[7]|c->r[7]; // 80188D0C
  if (crb(c,2)) { goto L_80188D1C; } // 80188D10
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 80188D14
  if (crb(c,2)) { goto L_80188D24; } // 80188D18
L_80188D1C:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80188D1C
  goto L_80188D70; // 80188D20
L_80188D24:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188D24
  c->r[4]=0u+0x00000140u; // 80188D28
  c->r[5]=0u+0x00000020u; // 80188D2C
  c->lr=0x80188D34u; f_80187678(c); // 80188D30
  cmps(c,0,(int32_t)c->r[3],0); // 80188D34
  if (!crb(c,2)) { goto L_80188D44; } // 80188D38
  c->r[3]=0u+0xFFFFFF8Au; // 80188D3C
  goto L_80188D70; // 80188D40
L_80188D44:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 80188D44
  c->r[6]=0u+0x80180000u; // 80188D48
  c->r[0]=0u+0x00000000u; // 80188D4C
  c->r[4]=c->r[28]|c->r[28]; // 80188D50
  W32(c->r[3]+0x00000104u,c->r[31]); // 80188D54
  c->r[5]=c->r[29]|c->r[29]; // 80188D58
  c->r[7]=c->r[3]|c->r[3]; // 80188D5C
  c->r[6]=c->r[6]+0x00007B54u; // 80188D60
  W32(c->r[3]+0x00000108u,c->r[0]); // 80188D64
  c->r[3]=c->r[27]|c->r[27]; // 80188D68
  c->lr=0x80188D70u; f_8018650C(c); // 80188D6C
L_80188D70:;
  c->r[11]=c->r[1]+0x00000020u; // 80188D70
  c->lr=0x80188D78u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80188D74
  c->r[0]=R32(c->r[1]+0x00000024u); // 80188D78
  c->lr=c->r[0]; // 80188D7C
  c->r[1]=c->r[1]+0x00000020u; // 80188D80
  return; // 80188D84
}

// fn_80188D88
void f_80188D88(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 80188D88
  if (crb(c,2)) { goto L_80188D98; } // 80188D8C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 80188D90
  if (crb(c,2)) { goto L_80188DA0; } // 80188D94
L_80188D98:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80188D98
  return; // 80188D9C
L_80188DA0:;
  f_80186814(c); return; // 80188DA0
  return; // 80188DA4
}

// fn_80188DA8
void f_80188DA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188DA8
  c->r[0]=c->lr; // 80188DAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80188DB0
  c->r[11]=c->r[1]+0x00000020u; // 80188DB4
  c->lr=0x80188DBCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80188DB8
  cmps(c,0,(int32_t)c->r[4],0); // 80188DBC
  c->r[27]=c->r[3]|c->r[3]; // 80188DC0
  c->r[28]=c->r[4]|c->r[4]; // 80188DC4
  c->r[29]=c->r[5]|c->r[5]; // 80188DC8
  c->r[30]=c->r[6]|c->r[6]; // 80188DCC
  c->r[31]=c->r[7]|c->r[7]; // 80188DD0
  if (crb(c,2)) { goto L_80188DE0; } // 80188DD4
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 80188DD8
  if (crb(c,2)) { goto L_80188DE8; } // 80188DDC
L_80188DE0:;
  c->r[3]=0u+0xFFFFFF9Bu; // 80188DE0
  goto L_80188E34; // 80188DE4
L_80188DE8:;
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188DE8
  c->r[4]=0u+0x00000140u; // 80188DEC
  c->r[5]=0u+0x00000020u; // 80188DF0
  c->lr=0x80188DF8u; f_80187678(c); // 80188DF4
  cmps(c,0,(int32_t)c->r[3],0); // 80188DF8
  if (!crb(c,2)) { goto L_80188E08; } // 80188DFC
  c->r[3]=0u+0xFFFFFF8Au; // 80188E00
  goto L_80188E34; // 80188E04
L_80188E08:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 80188E08
  c->r[6]=0u+0x80180000u; // 80188E0C
  c->r[0]=0u+0x00000000u; // 80188E10
  c->r[4]=c->r[28]|c->r[28]; // 80188E14
  W32(c->r[3]+0x00000104u,c->r[31]); // 80188E18
  c->r[5]=c->r[29]|c->r[29]; // 80188E1C
  c->r[7]=c->r[3]|c->r[3]; // 80188E20
  c->r[6]=c->r[6]+0x00007B54u; // 80188E24
  W32(c->r[3]+0x00000108u,c->r[0]); // 80188E28
  c->r[3]=c->r[27]|c->r[27]; // 80188E2C
  c->lr=0x80188E34u; f_80186714(c); // 80188E30
L_80188E34:;
  c->r[11]=c->r[1]+0x00000020u; // 80188E34
  c->lr=0x80188E3Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80188E38
  c->r[0]=R32(c->r[1]+0x00000024u); // 80188E3C
  c->lr=c->r[0]; // 80188E40
  c->r[1]=c->r[1]+0x00000020u; // 80188E44
  return; // 80188E48
}

// fn_80188E4C
void f_80188E4C(Ctx* __restrict c) {
  f_80186464(c); return; // 80188E4C
}

// fn_80188E50
void f_80188E50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188E50
  c->r[0]=c->lr; // 80188E54
  W32(c->r[1]+0x00000024u,c->r[0]); // 80188E58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80188E5C
  c->r[31]=c->r[5]|c->r[5]; // 80188E60
  c->r[5]=0u+0x00000020u; // 80188E64
  W32(c->r[1]+0x00000018u,c->r[30]); // 80188E68
  c->r[30]=c->r[4]|c->r[4]; // 80188E6C
  c->r[4]=0u+0x00000140u; // 80188E70
  W32(c->r[1]+0x00000014u,c->r[29]); // 80188E74
  c->r[29]=c->r[3]|c->r[3]; // 80188E78
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188E7C
  c->lr=0x80188E84u; f_80187678(c); // 80188E80
  cmps(c,0,(int32_t)c->r[3],0); // 80188E84
  if (!crb(c,2)) { goto L_80188E94; } // 80188E88
  c->r[3]=0u+0xFFFFFF8Au; // 80188E8C
  goto L_80188EB8; // 80188E90
L_80188E94:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 80188E94
  c->r[4]=0u+0x80180000u; // 80188E98
  c->r[0]=0u+0x00000000u; // 80188E9C
  c->r[5]=c->r[3]|c->r[3]; // 80188EA0
  W32(c->r[3]+0x00000104u,c->r[31]); // 80188EA4
  c->r[4]=c->r[4]+0x00007B54u; // 80188EA8
  W32(c->r[3]+0x00000108u,c->r[0]); // 80188EAC
  c->r[3]=c->r[29]|c->r[29]; // 80188EB0
  c->lr=0x80188EB8u; f_801863A4(c); // 80188EB4
L_80188EB8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80188EB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80188EBC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80188EC0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80188EC4
  c->lr=c->r[0]; // 80188EC8
  c->r[1]=c->r[1]+0x00000020u; // 80188ECC
  return; // 80188ED0
}

// fn_80188ED4
void f_80188ED4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188ED4
  c->r[0]=c->lr; // 80188ED8
  c->r[5]=0u+0x00000020u; // 80188EDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80188EE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80188EE4
  c->r[31]=c->r[4]|c->r[4]; // 80188EE8
  c->r[4]=0u+0x00000140u; // 80188EEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80188EF0
  c->r[30]=c->r[3]|c->r[3]; // 80188EF4
  c->r[3]=R32(c->r[13]+0xFFFFAF8Cu); // 80188EF8
  c->lr=0x80188F00u; f_80187678(c); // 80188EFC
  c->r[0]=R32(c->r[13]+0xFFFF92F0u); // 80188F00
  cmps(c,0,(int32_t)c->r[0],0); // 80188F04
  if (!crb(c,0)) { goto L_80188F14; } // 80188F08
  c->r[3]=0u+0xFFFFFF9Bu; // 80188F0C
  goto L_80188F4C; // 80188F10
L_80188F14:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 80188F14
  c->r[9]=0u+0x80180000u; // 80188F18
  c->r[0]=0u+0x00000000u; // 80188F1C
  c->r[10]=c->r[3]|c->r[3]; // 80188F20
  W32(c->r[3]+0x00000104u,c->r[31]); // 80188F24
  c->r[9]=c->r[9]+0x00007B54u; // 80188F28
  c->r[4]=0u+0x0000000Du; // 80188F2C
  c->r[5]=0u+0x00000000u; // 80188F30
  W32(c->r[3]+0x00000108u,c->r[0]); // 80188F34
  c->r[6]=0u+0x00000000u; // 80188F38
  c->r[7]=0u+0x00000000u; // 80188F3C
  c->r[8]=0u+0x00000000u; // 80188F40
  c->r[3]=R32(c->r[13]+0xFFFF92F0u); // 80188F44
  c->lr=0x80188F4Cu; f_80186AE4(c); // 80188F48
L_80188F4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80188F4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80188F50
  c->r[30]=R32(c->r[1]+0x00000008u); // 80188F54
  c->lr=c->r[0]; // 80188F58
  c->r[1]=c->r[1]+0x00000010u; // 80188F5C
  return; // 80188F60
}

// fn_80188F64
void f_80188F64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188F64
  c->r[0]=c->lr; // 80188F68
  W32(c->r[1]+0x00000034u,c->r[0]); // 80188F6C
  c->r[11]=c->r[1]+0x00000030u; // 80188F70
  c->lr=0x80188F78u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80188F74
  c->r[31]=R8(c->r[3]+0x00000000u); // 80188F78
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80188F7C
  c->r[30]=R8(c->r[4]+0x00000000u); // 80188F80
  c->r[7]=0u-c->r[0]; // 80188F84
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80188F88
  c->r[27]=c->r[3]|c->r[3]; // 80188F8C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[31]); // 80188F90
  c->r[28]=c->r[4]|c->r[4]; // 80188F94
  c->r[29]=c->r[5]|c->r[5]; // 80188F98
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 80188F9C
  if (!crb(c,0)) { goto L_80188FB4; } // 80188FA0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80188FA4
  if (!crb(c,0)) { goto L_80188FB4; } // 80188FA8
  c->r[31]=0u+0x00000000u; // 80188FAC
  goto L_80188FCC; // 80188FB0
L_80188FB4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80188FB4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80188FB8
  c->r[3]=c->r[31]+c->r[0]; // 80188FBC
  if (!crb(c,1)) { goto L_80188FC8; } // 80188FC0
  c->r[3]=c->r[31]-c->r[0]; // 80188FC4
L_80188FC8:;
  c->r[31]=c->r[3]|c->r[3]; // 80188FC8
L_80188FCC:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[30]); // 80188FCC
  if (!crb(c,0)) { goto L_80188FE8; } // 80188FD0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80188FD4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80188FD8
  if (!crb(c,0)) { goto L_80188FE8; } // 80188FDC
  c->r[30]=0u+0x00000000u; // 80188FE0
  goto L_80189000; // 80188FE4
L_80188FE8:;
  cmps(c,0,(int32_t)c->r[30],0); // 80188FE8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80188FEC
  c->r[3]=c->r[30]+c->r[0]; // 80188FF0
  if (!crb(c,1)) { goto L_80188FFC; } // 80188FF4
  c->r[3]=c->r[30]-c->r[0]; // 80188FF8
L_80188FFC:;
  c->r[30]=c->r[3]|c->r[3]; // 80188FFC
L_80189000:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80189000
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[31]); // 80189004
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[30]); // 80189008
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[0]); // 8018900C
  c->r[3]=c->r[4]+c->r[3]; // 80189010
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80189014
  if (!crb(c,0)) { goto L_80189060; } // 80189018
  c->r[3]=c->r[3]^0x80000000u; // 8018901C
  c->r[0]=0u+0x43300000u; // 80189020
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80189024
  {uint32_t ea=c->r[2]+0xFFFFAC20u; c->f[1]=RF64(ea);} // 80189028
  W32(c->r[1]+0x00000008u,c->r[0]); // 8018902C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80189030
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80189034
  c->lr=0x8018903Cu; f_80262DFC(c); // 80189038
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8018903C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 80189040
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 80189044
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80189048
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8018904C
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 80189050
  c->r[4]=R32(c->r[1]+0x00000014u); // 80189054
  c->r[31]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 80189058
  c->r[30]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 8018905C
L_80189060:;
  W8(c->r[27]+0x00000000u,c->r[31]); // 80189060
  c->r[11]=c->r[1]+0x00000030u; // 80189064
  W8(c->r[28]+0x00000000u,c->r[30]); // 80189068
  c->lr=0x80189070u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018906C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80189070
  c->lr=c->r[0]; // 80189074
  c->r[1]=c->r[1]+0x00000030u; // 80189078
  return; // 8018907C
}

// fn_80189080
void f_80189080(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80189080
  c->r[0]=c->lr; // 80189084
  W32(c->r[1]+0x00000024u,c->r[0]); // 80189088
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8018908C
  c->r[31]=0u+0x000000B4u; // 80189090
  W32(c->r[1]+0x00000018u,c->r[30]); // 80189094
  c->r[30]=0u+0x00000000u; // 80189098
  W32(c->r[1]+0x00000014u,c->r[29]); // 8018909C
  c->r[29]=0u+0x00000000u; // 801890A0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801890A4
  c->r[28]=c->r[3]|c->r[3]; // 801890A8
L_801890AC:;
  c->r[0]=R8(c->r[28]+0x0000000Au); // 801890AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801890B0
  if (!crb(c,2)) { goto L_80189138; } // 801890B4
  c->r[3]=c->r[28]+0x00000002u; // 801890B8
  c->r[4]=c->r[28]+0x00000003u; // 801890BC
  c->r[5]=0u+0x00000038u; // 801890C0
  c->r[6]=0u+0x0000000Fu; // 801890C4
  c->lr=0x801890CCu; f_80188F64(c); // 801890C8
  c->r[3]=c->r[28]+0x00000004u; // 801890CC
  c->r[4]=c->r[28]+0x00000005u; // 801890D0
  c->r[5]=0u+0x0000002Cu; // 801890D4
  c->r[6]=0u+0x0000000Fu; // 801890D8
  c->lr=0x801890E0u; f_80188F64(c); // 801890DC
  c->r[0]=R8(c->r[28]+0x00000006u); // 801890E0
  cmpu(c,0,c->r[0],0x0000001Eu); // 801890E4
  if (crb(c,1)) { goto L_801890F4; } // 801890E8
  W8(c->r[28]+0x00000006u,c->r[30]); // 801890EC
  goto L_8018910C; // 801890F0
L_801890F4:;
  cmpu(c,0,c->r[0],0x000000B4u); // 801890F4
  if (!crb(c,1)) { goto L_80189100; } // 801890F8
  W8(c->r[28]+0x00000006u,c->r[31]); // 801890FC
L_80189100:;
  c->r[3]=R8(c->r[28]+0x00000006u); // 80189100
  c->r[0]=c->r[3]+0xFFFFFFE2u; // 80189104
  W8(c->r[28]+0x00000006u,c->r[0]); // 80189108
L_8018910C:;
  c->r[0]=R8(c->r[28]+0x00000007u); // 8018910C
  cmpu(c,0,c->r[0],0x0000001Eu); // 80189110
  if (crb(c,1)) { goto L_80189120; } // 80189114
  W8(c->r[28]+0x00000007u,c->r[30]); // 80189118
  goto L_80189138; // 8018911C
L_80189120:;
  cmpu(c,0,c->r[0],0x000000B4u); // 80189120
  if (!crb(c,1)) { goto L_8018912C; } // 80189124
  W8(c->r[28]+0x00000007u,c->r[31]); // 80189128
L_8018912C:;
  c->r[3]=R8(c->r[28]+0x00000007u); // 8018912C
  c->r[0]=c->r[3]+0xFFFFFFE2u; // 80189130
  W8(c->r[28]+0x00000007u,c->r[0]); // 80189134
L_80189138:;
  c->r[29]=c->r[29]+0x00000001u; // 80189138
  c->r[28]=c->r[28]+0x0000000Cu; // 8018913C
  cmps(c,0,(int32_t)c->r[29],4); // 80189140
  if (crb(c,0)) { IRQCHK(c); goto L_801890AC; } // 80189144
  c->r[0]=R32(c->r[1]+0x00000024u); // 80189148
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018914C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80189150
  c->r[29]=R32(c->r[1]+0x00000014u); // 80189154
  c->r[28]=R32(c->r[1]+0x00000010u); // 80189158
  c->lr=c->r[0]; // 8018915C
  c->r[1]=c->r[1]+0x00000020u; // 80189160
  return; // 80189164
}

// PAD_UpdateOrigin
void f_80189168(Ctx* __restrict c) {
  trace_call(0x80189168u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80189168
  c->r[0]=c->lr; // 8018916C
  c->r[5]=0u+0x80470000u; // 80189170
  c->r[7]=0u+0x80000000u; // 80189174
  W32(c->r[1]+0x00000014u,c->r[0]); // 80189178
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8018917C
  c->r[5]=c->r[5]+0xFFFF82E0u; // 80189180
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80189184
  c->r[31]=c->r[5]+c->r[6]; // 80189188
  c->r[0]=R32(c->r[13]+0xFFFF930Cu); // 8018918C
  c->r[4]=rotl(c->r[0],0)&0x00000700u; // 80189190
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[7]>>((c->r[3])&31)); // 80189194
  cmps(c,0,(int32_t)c->r[4],1024); // 80189198
  if (crb(c,2)) { goto L_80189290; } // 8018919C
  if (!crb(c,0)) { goto L_801891D4; } // 801891A0
  cmps(c,0,(int32_t)c->r[4],512); // 801891A4
  if (crb(c,2)) { goto L_80189260; } // 801891A8
  if (!crb(c,0)) { goto L_801891C8; } // 801891AC
  cmps(c,0,(int32_t)c->r[4],256); // 801891B0
  if (crb(c,2)) { goto L_8018922C; } // 801891B4
  if (!crb(c,0)) { goto L_80189290; } // 801891B8
  cmps(c,0,(int32_t)c->r[4],0); // 801891BC
  if (crb(c,2)) { goto L_801891F8; } // 801891C0
  goto L_80189290; // 801891C4
L_801891C8:;
  cmps(c,0,(int32_t)c->r[4],768); // 801891C8
  if (crb(c,2)) { goto L_80189290; } // 801891CC
  goto L_80189290; // 801891D0
L_801891D4:;
  cmps(c,0,(int32_t)c->r[4],1536); // 801891D4
  if (crb(c,2)) { goto L_801891F8; } // 801891D8
  if (!crb(c,0)) { goto L_801891EC; } // 801891DC
  cmps(c,0,(int32_t)c->r[4],1280); // 801891E0
  if (crb(c,2)) { goto L_801891F8; } // 801891E4
  goto L_80189290; // 801891E8
L_801891EC:;
  cmps(c,0,(int32_t)c->r[4],1792); // 801891EC
  if (crb(c,2)) { goto L_801891F8; } // 801891F0
  goto L_80189290; // 801891F4
L_801891F8:;
  c->r[4]=R8(c->r[31]+0x00000006u); // 801891F8
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 801891FC
  W8(c->r[31]+0x00000006u,c->r[4]); // 80189200
  c->r[4]=R8(c->r[31]+0x00000007u); // 80189204
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 80189208
  W8(c->r[31]+0x00000007u,c->r[4]); // 8018920C
  c->r[4]=R8(c->r[31]+0x00000008u); // 80189210
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 80189214
  W8(c->r[31]+0x00000008u,c->r[4]); // 80189218
  c->r[4]=R8(c->r[31]+0x00000009u); // 8018921C
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 80189220
  W8(c->r[31]+0x00000009u,c->r[4]); // 80189224
  goto L_80189290; // 80189228
L_8018922C:;
  c->r[4]=R8(c->r[31]+0x00000004u); // 8018922C
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF0u; // 80189230
  W8(c->r[31]+0x00000004u,c->r[4]); // 80189234
  c->r[4]=R8(c->r[31]+0x00000005u); // 80189238
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF0u; // 8018923C
  W8(c->r[31]+0x00000005u,c->r[4]); // 80189240
  c->r[4]=R8(c->r[31]+0x00000008u); // 80189244
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 80189248
  W8(c->r[31]+0x00000008u,c->r[4]); // 8018924C
  c->r[4]=R8(c->r[31]+0x00000009u); // 80189250
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 80189254
  W8(c->r[31]+0x00000009u,c->r[4]); // 80189258
  goto L_80189290; // 8018925C
L_80189260:;
  c->r[4]=R8(c->r[31]+0x00000004u); // 80189260
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF0u; // 80189264
  W8(c->r[31]+0x00000004u,c->r[4]); // 80189268
  c->r[4]=R8(c->r[31]+0x00000005u); // 8018926C
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF0u; // 80189270
  W8(c->r[31]+0x00000005u,c->r[4]); // 80189274
  c->r[4]=R8(c->r[31]+0x00000006u); // 80189278
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 8018927C
  W8(c->r[31]+0x00000006u,c->r[4]); // 80189280
  c->r[4]=R8(c->r[31]+0x00000007u); // 80189284
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 80189288
  W8(c->r[31]+0x00000007u,c->r[4]); // 8018928C
L_80189290:;
  c->r[5]=R8(c->r[31]+0x00000002u); // 80189290
  c->r[4]=R32(c->r[13]+0xFFFF9308u); // 80189294
  c->r[5]=c->r[5]+0xFFFFFF80u; // 80189298
  W8(c->r[31]+0x00000002u,c->r[5]); // 8018929C
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 801892A0
  c->r[4]=R8(c->r[31]+0x00000003u); // 801892A4
  c->r[0]=c->r[4]+0xFFFFFF80u; // 801892A8
  W8(c->r[31]+0x00000003u,c->r[0]); // 801892AC
  c->r[4]=R8(c->r[31]+0x00000004u); // 801892B0
  c->r[0]=c->r[4]+0xFFFFFF80u; // 801892B4
  W8(c->r[31]+0x00000004u,c->r[0]); // 801892B8
  c->r[4]=R8(c->r[31]+0x00000005u); // 801892BC
  c->r[0]=c->r[4]+0xFFFFFF80u; // 801892C0
  W8(c->r[31]+0x00000005u,c->r[0]); // 801892C4
  if (crb(c,2)) { goto L_801892F8; } // 801892C8
  c->r[0]=R8(c->r[31]+0x00000002u); // 801892CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801892D0
  cmps(c,0,(int32_t)c->r[0],64); // 801892D4
  if (!crb(c,1)) { goto L_801892F8; } // 801892D8
  c->lr=0x801892E0u; f_8015E834(c); // 801892DC
  c->r[3]=rotl(c->r[3],0)&0xFFFF0000u; // 801892E0
  c->r[0]=c->r[3]+0xF7000000u; // 801892E4
  cmpu(c,0,c->r[0],0x00000000u); // 801892E8
  if (!crb(c,2)) { goto L_801892F8; } // 801892EC
  c->r[0]=0u+0x00000000u; // 801892F0
  W8(c->r[31]+0x00000002u,c->r[0]); // 801892F4
L_801892F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801892F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801892FC
  c->lr=c->r[0]; // 80189300
  c->r[1]=c->r[1]+0x00000010u; // 80189304
  return; // 80189308
}

// PADOriginCallback
void f_8018930C(Ctx* __restrict c) {
  trace_call(0x8018930Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018930C
  c->r[0]=c->lr; // 80189310
  W32(c->r[1]+0x00000024u,c->r[0]); // 80189314
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; cr0(c,c->r[0]); // 80189318
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8018931C
  if (!crb(c,2)) { goto L_80189368; } // 80189320
  c->r[3]=R32(c->r[13]+0xFFFF9304u); // 80189324
  c->lr=0x8018932Cu; f_80189168(c); // 80189328
  c->r[31]=R32(c->r[13]+0xFFFF9304u); // 8018932C
  c->r[0]=0u+0x80000000u; // 80189330
  c->r[5]=R32(c->r[13]+0xFFFFAFB4u); // 80189334
  c->r[4]=c->r[1]+0x00000008u; // 80189338
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[0]>>((c->r[31])&31)); // 8018933C
  c->r[3]=c->r[31]|c->r[31]; // 80189340
  c->r[0]=c->r[5]|c->r[0]; // 80189344
  W32(c->r[13]+0xFFFFAFB4u,c->r[0]); // 80189348
  c->lr=0x80189350u; f_8015E268(c); // 8018934C
  c->r[0]=R32(c->r[13]+0xFFFF930Cu); // 80189350
  c->r[3]=c->r[31]|c->r[31]; // 80189354
  c->r[4]=c->r[0]|0x00400000u; // 80189358
  c->lr=0x80189360u; f_8015E0F4(c); // 8018935C
  c->r[3]=R32(c->r[13]+0xFFFFAFB4u); // 80189360
  c->lr=0x80189368u; f_8015E174(c); // 80189364
L_80189368:;
  c->r[5]=R32(c->r[13]+0xFFFFAFB0u); // 80189368
  c->r[6]=cntlz(c->r[5]); // 8018936C
  cmps(c,0,(int32_t)c->r[6],32); // 80189370
  W32(c->r[13]+0xFFFF9304u,c->r[6]); // 80189374
  if (crb(c,2)) { goto L_801893B8; } // 80189378
  c->r[0]=0u+0x80000000u; // 8018937C
  c->r[3]=0u+0x80470000u; // 80189380
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80189384
  c->r[4]=0u+0x00000000u; // 80189388
  c->r[5]=c->r[5]&~c->r[0]; // 8018938C
  c->r[3]=c->r[3]+0xFFFF82E0u; // 80189390
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 80189394
  W32(c->r[13]+0xFFFFAFB0u,c->r[5]); // 80189398
  c->r[5]=0u+0x0000000Cu; // 8018939C
  c->r[3]=c->r[3]+c->r[0]; // 801893A0
  c->lr=0x801893A8u; f_8000443C(c); // 801893A4
  c->r[4]=0u+0x80190000u; // 801893A8
  c->r[3]=R32(c->r[13]+0xFFFF9304u); // 801893AC
  c->r[4]=c->r[4]+0xFFFF9568u; // 801893B0
  c->lr=0x801893B8u; f_8015E9E8(c); // 801893B4
L_801893B8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801893B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801893BC
  c->lr=c->r[0]; // 801893C0
  c->r[1]=c->r[1]+0x00000020u; // 801893C4
  return; // 801893C8
}

// PADOriginUpdateCallback
void f_801893CC(Ctx* __restrict c) {
  trace_call(0x801893CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801893CC
  c->r[0]=c->lr; // 801893D0
  c->r[5]=0u+0x80000000u; // 801893D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801893D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801893DC
  c->r[31]=c->r[4]|c->r[4]; // 801893E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801893E4
  c->r[30]=((c->r[3])&0x20)?0u:(c->r[5]>>((c->r[3])&31)); // 801893E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801893EC
  c->r[29]=c->r[3]|c->r[3]; // 801893F0
  c->r[0]=R32(c->r[13]+0xFFFFAFB4u); // 801893F4
  c->r[0]=c->r[0]&c->r[30]; cr0(c,c->r[0]); // 801893F8
  if (crb(c,2)) { goto L_80189478; } // 801893FC
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; cr0(c,c->r[0]); // 80189400
  if (!crb(c,2)) { goto L_8018940C; } // 80189404
  c->lr=0x8018940Cu; f_80189168(c); // 80189408
L_8018940C:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 8018940C
  if (crb(c,2)) { goto L_80189478; } // 80189410
  c->lr=0x80189418u; f_80154410(c); // 80189414
  c->r[31]=c->r[3]|c->r[3]; // 80189418
  c->r[3]=c->r[30]|c->r[30]; // 8018941C
  c->lr=0x80189424u; f_8015E1FC(c); // 80189420
  c->r[4]=R32(c->r[13]+0xFFFFAFB4u); // 80189424
  c->r[9]=~(c->r[30]|c->r[30]); // 80189428
  c->r[0]=R32(c->r[13]+0xFFFFAFA8u); // 8018942C
  c->r[3]=c->r[29]|c->r[29]; // 80189430
  c->r[8]=c->r[4]&c->r[9]; // 80189434
  c->r[5]=R32(c->r[13]+0xFFFFAFA4u); // 80189438
  c->r[7]=c->r[0]&c->r[9]; // 8018943C
  c->r[0]=R32(c->r[13]+0xFFFFAF9Cu); // 80189440
  c->r[6]=c->r[5]&c->r[9]; // 80189444
  c->r[4]=R32(c->r[13]+0xFFFFAFA0u); // 80189448
  c->r[0]=c->r[0]&c->r[9]; // 8018944C
  W32(c->r[13]+0xFFFFAFB4u,c->r[8]); // 80189450
  c->r[5]=c->r[4]&c->r[9]; // 80189454
  c->r[4]=0u+0x00000000u; // 80189458
  W32(c->r[13]+0xFFFFAFA8u,c->r[7]); // 8018945C
  W32(c->r[13]+0xFFFFAFA4u,c->r[6]); // 80189460
  W32(c->r[13]+0xFFFFAFA0u,c->r[5]); // 80189464
  W32(c->r[13]+0xFFFFAF9Cu,c->r[0]); // 80189468
  c->lr=0x80189470u; f_80156B8C(c); // 8018946C
  c->r[3]=c->r[31]|c->r[31]; // 80189470
  c->lr=0x80189478u; f_80154438(c); // 80189474
L_80189478:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80189478
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018947C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80189480
  c->r[29]=R32(c->r[1]+0x00000014u); // 80189484
  c->lr=c->r[0]; // 80189488
  c->r[1]=c->r[1]+0x00000020u; // 8018948C
  return; // 80189490
}

// PADProbeCallback
void f_80189494(Ctx* __restrict c) {
  trace_call(0x80189494u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80189494
  c->r[0]=c->lr; // 80189498
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018949C
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; cr0(c,c->r[0]); // 801894A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801894A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801894A8
  if (!crb(c,2)) { goto L_80189500; } // 801894AC
  c->r[30]=R32(c->r[13]+0xFFFF9304u); // 801894B0
  c->r[31]=0u+0x80000000u; // 801894B4
  c->r[5]=R32(c->r[13]+0xFFFFAFB4u); // 801894B8
  c->r[4]=c->r[1]+0x00000008u; // 801894BC
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[31]>>((c->r[30])&31)); // 801894C0
  c->r[3]=c->r[30]|c->r[30]; // 801894C4
  c->r[0]=c->r[5]|c->r[0]; // 801894C8
  W32(c->r[13]+0xFFFFAFB4u,c->r[0]); // 801894CC
  c->lr=0x801894D4u; f_8015E268(c); // 801894D0
  c->r[0]=R32(c->r[13]+0xFFFF930Cu); // 801894D4
  c->r[3]=c->r[30]|c->r[30]; // 801894D8
  c->r[4]=c->r[0]|0x00400000u; // 801894DC
  c->lr=0x801894E4u; f_8015E0F4(c); // 801894E0
  c->r[3]=R32(c->r[13]+0xFFFFAFB4u); // 801894E4
  c->lr=0x801894ECu; f_8015E174(c); // 801894E8
  c->r[0]=R32(c->r[13]+0xFFFF9304u); // 801894EC
  c->r[3]=R32(c->r[13]+0xFFFFAFA8u); // 801894F0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[31]>>((c->r[0])&31)); // 801894F4
  c->r[0]=c->r[3]|c->r[0]; // 801894F8
  W32(c->r[13]+0xFFFFAFA8u,c->r[0]); // 801894FC
L_80189500:;
  c->r[5]=R32(c->r[13]+0xFFFFAFB0u); // 80189500
  c->r[6]=cntlz(c->r[5]); // 80189504
  cmps(c,0,(int32_t)c->r[6],32); // 80189508
  W32(c->r[13]+0xFFFF9304u,c->r[6]); // 8018950C
  if (crb(c,2)) { goto L_80189550; } // 80189510
  c->r[0]=0u+0x80000000u; // 80189514
  c->r[3]=0u+0x80470000u; // 80189518
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 8018951C
  c->r[4]=0u+0x00000000u; // 80189520
  c->r[5]=c->r[5]&~c->r[0]; // 80189524
  c->r[3]=c->r[3]+0xFFFF82E0u; // 80189528
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 8018952C
  W32(c->r[13]+0xFFFFAFB0u,c->r[5]); // 80189530
  c->r[5]=0u+0x0000000Cu; // 80189534
  c->r[3]=c->r[3]+c->r[0]; // 80189538
  c->lr=0x80189540u; f_8000443C(c); // 8018953C
  c->r[4]=0u+0x80190000u; // 80189540
  c->r[3]=R32(c->r[13]+0xFFFF9304u); // 80189544
  c->r[4]=c->r[4]+0xFFFF9568u; // 80189548
  c->lr=0x80189550u; f_8015E9E8(c); // 8018954C
L_80189550:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80189550
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80189554
  c->r[30]=R32(c->r[1]+0x00000018u); // 80189558
  c->lr=c->r[0]; // 8018955C
  c->r[1]=c->r[1]+0x00000020u; // 80189560
  return; // 80189564
}

// PADTypeAndStatusCallback
void f_80189568(Ctx* __restrict c) {
  trace_call(0x80189568u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80189568
  c->r[0]=c->lr; // 8018956C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80189570
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; cr0(c,c->r[0]); // 80189574
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80189578
  c->r[31]=0u+0x80000000u; // 8018957C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80189580
  c->r[30]=0u+0x80470000u; // 80189584
  c->r[30]=c->r[30]+0xFFFF82E0u; // 80189588
  W32(c->r[1]+0x00000014u,c->r[29]); // 8018958C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80189590
  c->r[28]=R32(c->r[13]+0xFFFF9304u); // 80189594
  c->r[3]=R32(c->r[13]+0xFFFFAFACu); // 80189598
  c->r[29]=((c->r[28])&0x20)?0u:(c->r[31]>>((c->r[28])&31)); // 8018959C
  c->r[0]=c->r[3]&~c->r[29]; // 801895A0
  W32(c->r[13]+0xFFFFAFACu,c->r[0]); // 801895A4
  c->r[7]=c->r[3]&c->r[29]; // 801895A8
  c->r[3]=0u+0x00000001u; // 801895AC
  if (crb(c,2)) { goto L_80189600; } // 801895B0
  c->r[5]=R32(c->r[13]+0xFFFFAFB0u); // 801895B4
  c->r[3]=cntlz(c->r[5]); // 801895B8
  cmps(c,0,(int32_t)c->r[3],32); // 801895BC
  W32(c->r[13]+0xFFFF9304u,c->r[3]); // 801895C0
  if (crb(c,2)) { goto L_80189868; } // 801895C4
  c->r[4]=((c->r[3])&0x20)?0u:(c->r[31]>>((c->r[3])&31)); // 801895C8
  c->r[0]=c->r[30]+0x00000000u; // 801895CC
  c->r[4]=c->r[5]&~c->r[4]; // 801895D0
  c->r[5]=0u+0x0000000Cu; // 801895D4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801895D8
  W32(c->r[13]+0xFFFFAFB0u,c->r[4]); // 801895DC
  c->r[4]=0u+0x00000000u; // 801895E0
  c->r[3]=c->r[0]+c->r[3]; // 801895E4
  c->lr=0x801895ECu; f_8000443C(c); // 801895E8
  c->r[4]=0u+0x80190000u; // 801895EC
  c->r[3]=R32(c->r[13]+0xFFFF9304u); // 801895F0
  c->r[4]=c->r[4]+0xFFFF9568u; // 801895F4
  c->lr=0x801895FCu; f_8015E9E8(c); // 801895F8
  goto L_80189868; // 801895FC
L_80189600:;
  c->r[5]=rotl(c->r[4],0)&0x18000000u; // 80189600
  c->r[8]=rotl(c->r[4],0)&0xFFFFFF00u; // 80189604
  c->r[0]=c->r[5]+0xF8000000u; // 80189608
  c->r[6]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8018960C
  c->r[4]=c->r[30]+0x00000030u; // 80189610
  cmpu(c,0,c->r[0],0x00000000u); // 80189614
  W32(c->r[4]+c->r[6],c->r[8]); // 80189618
  if (!crb(c,2)) { goto L_80189628; } // 8018961C
  c->r[0]=rotl(c->r[8],0)&0x01000000u; cr0(c,c->r[0]); // 80189620
  if (!crb(c,2)) { goto L_80189678; } // 80189624
L_80189628:;
  c->r[7]=R32(c->r[13]+0xFFFFAFB0u); // 80189628
  c->r[5]=cntlz(c->r[7]); // 8018962C
  cmps(c,0,(int32_t)c->r[5],32); // 80189630
  W32(c->r[13]+0xFFFF9304u,c->r[5]); // 80189634
  if (crb(c,2)) { goto L_80189868; } // 80189638
  c->r[3]=0u+0x80000000u; // 8018963C
  c->r[0]=c->r[30]+0x00000000u; // 80189640
  c->r[6]=((c->r[5])&0x20)?0u:(c->r[3]>>((c->r[5])&31)); // 80189644
  c->r[4]=0u+0x00000000u; // 80189648
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8018964C
  c->r[5]=0u+0x0000000Cu; // 80189650
  c->r[6]=c->r[7]&~c->r[6]; // 80189654
  W32(c->r[13]+0xFFFFAFB0u,c->r[6]); // 80189658
  c->r[3]=c->r[0]+c->r[3]; // 8018965C
  c->lr=0x80189664u; f_8000443C(c); // 80189660
  c->r[4]=0u+0x80190000u; // 80189664
  c->r[3]=R32(c->r[13]+0xFFFF9304u); // 80189668
  c->r[4]=c->r[4]+0xFFFF9568u; // 8018966C
  c->lr=0x80189674u; f_8015E9E8(c); // 80189670
  goto L_80189868; // 80189674
L_80189678:;
  c->r[0]=R32(c->r[13]+0xFFFF9310u); // 80189678
  cmpu(c,0,c->r[0],0x00000002u); // 8018967C
  if (!crb(c,0)) { goto L_80189700; } // 80189680
  c->r[0]=R32(c->r[13]+0xFFFFAFB4u); // 80189684
  c->r[3]=c->r[28]|c->r[28]; // 80189688
  c->r[4]=c->r[1]+0x00000008u; // 8018968C
  c->r[0]=c->r[0]|c->r[29]; // 80189690
  W32(c->r[13]+0xFFFFAFB4u,c->r[0]); // 80189694
  c->lr=0x8018969Cu; f_8015E268(c); // 80189698
  c->r[0]=R32(c->r[13]+0xFFFF930Cu); // 8018969C
  c->r[3]=c->r[28]|c->r[28]; // 801896A0
  c->r[4]=c->r[0]|0x00400000u; // 801896A4
  c->lr=0x801896ACu; f_8015E0F4(c); // 801896A8
  c->r[3]=R32(c->r[13]+0xFFFFAFB4u); // 801896AC
  c->lr=0x801896B4u; f_8015E174(c); // 801896B0
  c->r[5]=R32(c->r[13]+0xFFFFAFB0u); // 801896B4
  c->r[3]=cntlz(c->r[5]); // 801896B8
  cmps(c,0,(int32_t)c->r[3],32); // 801896BC
  W32(c->r[13]+0xFFFF9304u,c->r[3]); // 801896C0
  if (crb(c,2)) { goto L_80189868; } // 801896C4
  c->r[4]=((c->r[3])&0x20)?0u:(c->r[31]>>((c->r[3])&31)); // 801896C8
  c->r[0]=c->r[30]+0x00000000u; // 801896CC
  c->r[4]=c->r[5]&~c->r[4]; // 801896D0
  c->r[5]=0u+0x0000000Cu; // 801896D4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801896D8
  W32(c->r[13]+0xFFFFAFB0u,c->r[4]); // 801896DC
  c->r[4]=0u+0x00000000u; // 801896E0
  c->r[3]=c->r[0]+c->r[3]; // 801896E4
  c->lr=0x801896ECu; f_8000443C(c); // 801896E8
  c->r[4]=0u+0x80190000u; // 801896EC
  c->r[3]=R32(c->r[13]+0xFFFF9304u); // 801896F0
  c->r[4]=c->r[4]+0xFFFF9568u; // 801896F4
  c->lr=0x801896FCu; f_8015E9E8(c); // 801896F8
  goto L_80189868; // 801896FC
L_80189700:;
  c->r[0]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[0]); // 80189700
  if (crb(c,2)) { goto L_80189710; } // 80189704
  c->r[0]=rotl(c->r[8],0)&0x04000000u; cr0(c,c->r[0]); // 80189708
  if (crb(c,2)) { goto L_80189780; } // 8018970C
L_80189710:;
  cmps(c,0,(int32_t)c->r[7],0); // 80189710
  if (crb(c,2)) { goto L_8018974C; } // 80189714
  c->r[3]=R32(c->r[13]+0xFFFF9304u); // 80189718
  c->r[8]=0u+0x80190000u; // 8018971C
  c->r[0]=c->r[30]+0x00000000u; // 80189720
  c->r[4]=c->r[13]+0xFFFF931Cu; // 80189724
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80189728
  c->r[8]=c->r[8]+0xFFFF930Cu; // 8018972C
  c->r[5]=0u+0x00000003u; // 80189730
  c->r[7]=0u+0x0000000Au; // 80189734
  c->r[6]=c->r[0]+c->r[6]; // 80189738
  c->r[10]=0u+0x00000000u; // 8018973C
  c->r[9]=0u+0x00000000u; // 80189740
  c->lr=0x80189748u; f_8015E418(c); // 80189744
  goto L_80189808; // 80189748
L_8018974C:;
  c->r[3]=R32(c->r[13]+0xFFFF9304u); // 8018974C
  c->r[8]=0u+0x80190000u; // 80189750
  c->r[0]=c->r[30]+0x00000000u; // 80189754
  c->r[4]=c->r[13]+0xFFFF9318u; // 80189758
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8018975C
  c->r[8]=c->r[8]+0xFFFF930Cu; // 80189760
  c->r[5]=0u+0x00000001u; // 80189764
  c->r[7]=0u+0x0000000Au; // 80189768
  c->r[6]=c->r[0]+c->r[6]; // 8018976C
  c->r[10]=0u+0x00000000u; // 80189770
  c->r[9]=0u+0x00000000u; // 80189774
  c->lr=0x8018977Cu; f_8015E418(c); // 80189778
  goto L_80189808; // 8018977C
L_80189780:;
  c->r[0]=rotl(c->r[8],0)&0x00100000u; cr0(c,c->r[0]); // 80189780
  if (crb(c,2)) { goto L_80189808; } // 80189784
  c->r[0]=rotl(c->r[8],0)&0x00080000u; cr0(c,c->r[0]); // 80189788
  if (!crb(c,2)) { goto L_80189808; } // 8018978C
  c->r[0]=rotl(c->r[8],0)&0x00040000u; cr0(c,c->r[0]); // 80189790
  if (!crb(c,2)) { goto L_80189808; } // 80189794
  c->r[0]=rotl(c->r[8],0)&0x40000000u; cr0(c,c->r[0]); // 80189798
  if (crb(c,2)) { goto L_801897D4; } // 8018979C
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)12); // 801897A0
  c->r[0]=c->r[30]+0x00000000u; // 801897A4
  c->r[8]=0u+0x80190000u; // 801897A8
  c->r[3]=c->r[28]|c->r[28]; // 801897AC
  c->r[6]=c->r[0]+c->r[4]; // 801897B0
  c->r[8]=c->r[8]+0xFFFF930Cu; // 801897B4
  c->r[4]=c->r[13]+0xFFFF9318u; // 801897B8
  c->r[5]=0u+0x00000001u; // 801897BC
  c->r[7]=0u+0x0000000Au; // 801897C0
  c->r[10]=0u+0x00000000u; // 801897C4
  c->r[9]=0u+0x00000000u; // 801897C8
  c->lr=0x801897D0u; f_8015E418(c); // 801897CC
  goto L_80189808; // 801897D0
L_801897D4:;
  c->r[5]=(uint32_t)((int32_t)c->r[28]*(int32_t)12); // 801897D4
  c->r[4]=c->r[30]+0x00000040u; // 801897D8
  c->r[8]=0u+0x80190000u; // 801897DC
  c->r[0]=c->r[30]+0x00000000u; // 801897E0
  c->r[4]=c->r[4]+c->r[6]; // 801897E4
  c->r[3]=c->r[28]|c->r[28]; // 801897E8
  c->r[6]=c->r[0]+c->r[5]; // 801897EC
  c->r[8]=c->r[8]+0xFFFF9494u; // 801897F0
  c->r[5]=0u+0x00000003u; // 801897F4
  c->r[7]=0u+0x00000008u; // 801897F8
  c->r[10]=0u+0x00000000u; // 801897FC
  c->r[9]=0u+0x00000000u; // 80189800
  c->lr=0x80189808u; f_8015E418(c); // 80189804
L_80189808:;
  cmps(c,0,(int32_t)c->r[3],0); // 80189808
  if (!crb(c,2)) { goto L_80189868; } // 8018980C
  c->r[7]=R32(c->r[13]+0xFFFFAFB0u); // 80189810
  c->r[0]=R32(c->r[13]+0xFFFFAFA0u); // 80189814
  c->r[5]=cntlz(c->r[7]); // 80189818
  c->r[0]=c->r[0]|c->r[29]; // 8018981C
  W32(c->r[13]+0xFFFF9304u,c->r[5]); // 80189820
  cmps(c,0,(int32_t)c->r[5],32); // 80189824
  W32(c->r[13]+0xFFFFAFA0u,c->r[0]); // 80189828
  if (crb(c,2)) { goto L_80189868; } // 8018982C
  c->r[3]=0u+0x80000000u; // 80189830
  c->r[0]=c->r[30]+0x00000000u; // 80189834
  c->r[6]=((c->r[5])&0x20)?0u:(c->r[3]>>((c->r[5])&31)); // 80189838
  c->r[4]=0u+0x00000000u; // 8018983C
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 80189840
  c->r[5]=0u+0x0000000Cu; // 80189844
  c->r[6]=c->r[7]&~c->r[6]; // 80189848
  W32(c->r[13]+0xFFFFAFB0u,c->r[6]); // 8018984C
  c->r[3]=c->r[0]+c->r[3]; // 80189850
  c->lr=0x80189858u; f_8000443C(c); // 80189854
  c->r[4]=0u+0x80190000u; // 80189858
  c->r[3]=R32(c->r[13]+0xFFFF9304u); // 8018985C
  c->r[4]=c->r[4]+0xFFFF9568u; // 80189860
  c->lr=0x80189868u; f_8015E9E8(c); // 80189864
L_80189868:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80189868
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018986C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80189870
  c->r[29]=R32(c->r[1]+0x00000014u); // 80189874
  c->r[28]=R32(c->r[1]+0x00000010u); // 80189878
  c->lr=c->r[0]; // 8018987C
  c->r[1]=c->r[1]+0x00000020u; // 80189880
  return; // 80189884
}

// PADReceiveCheckCallback
void f_80189888(Ctx* __restrict c) {
  trace_call(0x80189888u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80189888
  c->r[0]=c->lr; // 8018988C
  c->r[5]=0u+0x80000000u; // 80189890
  W32(c->r[1]+0x00000024u,c->r[0]); // 80189894
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80189898
  c->r[31]=((c->r[3])&0x20)?0u:(c->r[5]>>((c->r[3])&31)); // 8018989C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801898A0
  c->r[30]=c->r[3]|c->r[3]; // 801898A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801898A8
  c->r[0]=R32(c->r[13]+0xFFFFAFB4u); // 801898AC
  c->r[0]=c->r[0]&c->r[31]; cr0(c,c->r[0]); // 801898B0
  if (crb(c,2)) { goto L_801899A8; } // 801898B4
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; cr0(c,c->r[0]); // 801898B8
  c->r[6]=R32(c->r[13]+0xFFFFAFA8u); // 801898BC
  c->r[7]=~(c->r[31]|c->r[31]); // 801898C0
  c->r[5]=R32(c->r[13]+0xFFFFAFA4u); // 801898C4
  c->r[6]=c->r[6]&c->r[7]; // 801898C8
  c->r[4]=rotl(c->r[4],0)&0xFFFFFF00u; // 801898CC
  c->r[0]=c->r[5]&c->r[7]; // 801898D0
  W32(c->r[13]+0xFFFFAFA8u,c->r[6]); // 801898D4
  W32(c->r[13]+0xFFFFAFA4u,c->r[0]); // 801898D8
  if (!crb(c,2)) { goto L_80189944; } // 801898DC
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 801898E0
  if (crb(c,2)) { goto L_80189944; } // 801898E4
  c->r[0]=rotl(c->r[4],0)&0x00100000u; cr0(c,c->r[0]); // 801898E8
  if (crb(c,2)) { goto L_80189944; } // 801898EC
  c->r[0]=rotl(c->r[4],0)&0x40000000u; cr0(c,c->r[0]); // 801898F0
  if (crb(c,2)) { goto L_80189944; } // 801898F4
  c->r[0]=rotl(c->r[4],0)&0x04000000u; cr0(c,c->r[0]); // 801898F8
  if (!crb(c,2)) { goto L_80189944; } // 801898FC
  c->r[0]=rotl(c->r[4],0)&0x00080000u; cr0(c,c->r[0]); // 80189900
  if (!crb(c,2)) { goto L_80189944; } // 80189904
  c->r[0]=rotl(c->r[4],0)&0x00040000u; cr0(c,c->r[0]); // 80189908
  if (!crb(c,2)) { goto L_80189944; } // 8018990C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80189910
  c->r[4]=0u+0x80470000u; // 80189914
  c->r[8]=0u+0x80190000u; // 80189918
  c->r[4]=c->r[4]+0xFFFF82E0u; // 8018991C
  c->r[6]=c->r[4]+c->r[0]; // 80189920
  c->r[8]=c->r[8]+0xFFFF93CCu; // 80189924
  c->r[4]=c->r[13]+0xFFFF9318u; // 80189928
  c->r[5]=0u+0x00000001u; // 8018992C
  c->r[7]=0u+0x0000000Au; // 80189930
  c->r[10]=0u+0x00000000u; // 80189934
  c->r[9]=0u+0x00000000u; // 80189938
  c->lr=0x80189940u; f_8015E418(c); // 8018993C
  goto L_801899A8; // 80189940
L_80189944:;
  c->lr=0x80189948u; f_80154410(c); // 80189944
  c->r[29]=c->r[3]|c->r[3]; // 80189948
  c->r[3]=c->r[31]|c->r[31]; // 8018994C
  c->lr=0x80189954u; f_8015E1FC(c); // 80189950
  c->r[4]=R32(c->r[13]+0xFFFFAFB4u); // 80189954
  c->r[9]=~(c->r[31]|c->r[31]); // 80189958
  c->r[0]=R32(c->r[13]+0xFFFFAFA8u); // 8018995C
  c->r[3]=c->r[30]|c->r[30]; // 80189960
  c->r[8]=c->r[4]&c->r[9]; // 80189964
  c->r[5]=R32(c->r[13]+0xFFFFAFA4u); // 80189968
  c->r[7]=c->r[0]&c->r[9]; // 8018996C
  c->r[0]=R32(c->r[13]+0xFFFFAF9Cu); // 80189970
  c->r[6]=c->r[5]&c->r[9]; // 80189974
  c->r[4]=R32(c->r[13]+0xFFFFAFA0u); // 80189978
  c->r[0]=c->r[0]&c->r[9]; // 8018997C
  W32(c->r[13]+0xFFFFAFB4u,c->r[8]); // 80189980
  c->r[5]=c->r[4]&c->r[9]; // 80189984
  c->r[4]=0u+0x00000000u; // 80189988
  W32(c->r[13]+0xFFFFAFA8u,c->r[7]); // 8018998C
  W32(c->r[13]+0xFFFFAFA4u,c->r[6]); // 80189990
  W32(c->r[13]+0xFFFFAFA0u,c->r[5]); // 80189994
  W32(c->r[13]+0xFFFFAF9Cu,c->r[0]); // 80189998
  c->lr=0x801899A0u; f_80156B8C(c); // 8018999C
  c->r[3]=c->r[29]|c->r[29]; // 801899A0
  c->lr=0x801899A8u; f_80154438(c); // 801899A4
L_801899A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801899A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801899AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801899B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801899B4
  c->lr=c->r[0]; // 801899B8
  c->r[1]=c->r[1]+0x00000020u; // 801899BC
  return; // 801899C0
}

// PADReset
void f_801899C4(Ctx* __restrict c) {
  trace_call(0x801899C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801899C4
  c->r[0]=c->lr; // 801899C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801899CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801899D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801899D4
  c->r[30]=c->r[3]|c->r[3]; // 801899D8
  c->lr=0x801899E0u; f_80154410(c); // 801899DC
  c->r[0]=R32(c->r[13]+0xFFFFAFA0u); // 801899E0
  c->r[31]=c->r[3]|c->r[3]; // 801899E4
  c->r[4]=R32(c->r[13]+0xFFFFAFA8u); // 801899E8
  c->r[7]=0u+0x00000000u; // 801899EC
  c->r[3]=R32(c->r[13]+0xFFFFAFA4u); // 801899F0
  c->r[30]=c->r[30]|c->r[0]; // 801899F4
  c->r[0]=R32(c->r[13]+0xFFFF9310u); // 801899F8
  c->r[4]=c->r[4]|c->r[3]; // 801899FC
  c->r[3]=R32(c->r[13]+0xFFFFAFB0u); // 80189A00
  c->r[30]=c->r[30]&~c->r[4]; // 80189A04
  c->r[5]=R32(c->r[13]+0xFFFFAFB4u); // 80189A08
  c->r[6]=c->r[3]|c->r[30]; // 80189A0C
  c->r[3]=R32(c->r[13]+0xFFFFAF9Cu); // 80189A10
  c->r[8]=~(c->r[30]|c->r[30]); // 80189A14
  cmpu(c,0,c->r[0],0x00000004u); // 80189A18
  c->r[0]=c->r[3]&c->r[8]; // 80189A1C
  W32(c->r[13]+0xFFFFAFA0u,c->r[7]); // 80189A20
  c->r[4]=c->r[5]&c->r[8]; // 80189A24
  c->r[3]=c->r[6]&c->r[5]; // 80189A28
  W32(c->r[13]+0xFFFFAFB0u,c->r[6]); // 80189A2C
  W32(c->r[13]+0xFFFFAFB4u,c->r[4]); // 80189A30
  W32(c->r[13]+0xFFFFAF9Cu,c->r[0]); // 80189A34
  if (!crb(c,2)) { goto L_80189A48; } // 80189A38
  c->r[0]=R32(c->r[13]+0xFFFFAFACu); // 80189A3C
  c->r[0]=c->r[0]|c->r[30]; // 80189A40
  W32(c->r[13]+0xFFFFAFACu,c->r[0]); // 80189A44
L_80189A48:;
  c->lr=0x80189A4Cu; f_8015E1FC(c); // 80189A48
  c->r[0]=R32(c->r[13]+0xFFFF9304u); // 80189A4C
  cmps(c,0,(int32_t)c->r[0],32); // 80189A50
  if (!crb(c,2)) { goto L_80189AA8; } // 80189A54
  c->r[5]=R32(c->r[13]+0xFFFFAFB0u); // 80189A58
  c->r[6]=cntlz(c->r[5]); // 80189A5C
  cmps(c,0,(int32_t)c->r[6],32); // 80189A60
  W32(c->r[13]+0xFFFF9304u,c->r[6]); // 80189A64
  if (crb(c,2)) { goto L_80189AA8; } // 80189A68
  c->r[0]=0u+0x80000000u; // 80189A6C
  c->r[3]=0u+0x80470000u; // 80189A70
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80189A74
  c->r[4]=0u+0x00000000u; // 80189A78
  c->r[5]=c->r[5]&~c->r[0]; // 80189A7C
  c->r[3]=c->r[3]+0xFFFF82E0u; // 80189A80
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 80189A84
  W32(c->r[13]+0xFFFFAFB0u,c->r[5]); // 80189A88
  c->r[5]=0u+0x0000000Cu; // 80189A8C
  c->r[3]=c->r[3]+c->r[0]; // 80189A90
  c->lr=0x80189A98u; f_8000443C(c); // 80189A94
  c->r[4]=0u+0x80190000u; // 80189A98
  c->r[3]=R32(c->r[13]+0xFFFF9304u); // 80189A9C
  c->r[4]=c->r[4]+0xFFFF9568u; // 80189AA0
  c->lr=0x80189AA8u; f_8015E9E8(c); // 80189AA4
L_80189AA8:;
  c->r[3]=c->r[31]|c->r[31]; // 80189AA8
  c->lr=0x80189AB0u; f_80154438(c); // 80189AAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80189AB0
  c->r[3]=0u+0x00000001u; // 80189AB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80189AB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80189ABC
  c->lr=c->r[0]; // 80189AC0
  c->r[1]=c->r[1]+0x00000010u; // 80189AC4
  return; // 80189AC8
}

// PADRecalibrate
void f_80189ACC(Ctx* __restrict c) {
  trace_call(0x80189ACCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80189ACC
  c->r[0]=c->lr; // 80189AD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80189AD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80189AD8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80189ADC
  c->r[30]=c->r[3]|c->r[3]; // 80189AE0
  c->lr=0x80189AE8u; f_80154410(c); // 80189AE4
  c->r[5]=R32(c->r[13]+0xFFFFAFA0u); // 80189AE8
  c->r[31]=c->r[3]|c->r[3]; // 80189AEC
  c->r[6]=R32(c->r[13]+0xFFFFAFA8u); // 80189AF0
  c->r[7]=0u+0x00000000u; // 80189AF4
  c->r[0]=R32(c->r[13]+0xFFFFAFA4u); // 80189AF8
  c->r[30]=c->r[30]|c->r[5]; // 80189AFC
  c->r[5]=R32(c->r[13]+0xFFFFAFB0u); // 80189B00
  c->r[4]=0u+0x80000000u; // 80189B04
  c->r[0]=c->r[6]|c->r[0]; // 80189B08
  c->r[3]=R32(c->r[13]+0xFFFFAFB4u); // 80189B0C
  c->r[30]=c->r[30]&~c->r[0]; // 80189B10
  c->r[0]=R32(c->r[13]+0xFFFFAF9Cu); // 80189B14
  c->r[8]=~(c->r[30]|c->r[30]); // 80189B18
  W32(c->r[13]+0xFFFFAFA0u,c->r[7]); // 80189B1C
  c->r[6]=c->r[5]|c->r[30]; // 80189B20
  c->r[5]=c->r[3]&c->r[8]; // 80189B24
  c->r[0]=c->r[0]&c->r[8]; // 80189B28
  W32(c->r[13]+0xFFFFAFB0u,c->r[6]); // 80189B2C
  c->r[3]=c->r[6]&c->r[3]; // 80189B30
  W32(c->r[13]+0xFFFFAFB4u,c->r[5]); // 80189B34
  W32(c->r[13]+0xFFFFAF9Cu,c->r[0]); // 80189B38
  c->r[0]=R8(c->r[4]+0x000030E3u); // 80189B3C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80189B40
  if (!crb(c,2)) { goto L_80189B54; } // 80189B44
  c->r[0]=R32(c->r[13]+0xFFFFAFACu); // 80189B48
  c->r[0]=c->r[0]|c->r[30]; // 80189B4C
  W32(c->r[13]+0xFFFFAFACu,c->r[0]); // 80189B50
L_80189B54:;
  c->lr=0x80189B58u; f_8015E1FC(c); // 80189B54
  c->r[0]=R32(c->r[13]+0xFFFF9304u); // 80189B58
  cmps(c,0,(int32_t)c->r[0],32); // 80189B5C
  if (!crb(c,2)) { goto L_80189BB4; } // 80189B60
  c->r[5]=R32(c->r[13]+0xFFFFAFB0u); // 80189B64
  c->r[6]=cntlz(c->r[5]); // 80189B68
  cmps(c,0,(int32_t)c->r[6],32); // 80189B6C
  W32(c->r[13]+0xFFFF9304u,c->r[6]); // 80189B70
  if (crb(c,2)) { goto L_80189BB4; } // 80189B74
  c->r[0]=0u+0x80000000u; // 80189B78
  c->r[3]=0u+0x80470000u; // 80189B7C
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80189B80
  c->r[4]=0u+0x00000000u; // 80189B84
  c->r[5]=c->r[5]&~c->r[0]; // 80189B88
  c->r[3]=c->r[3]+0xFFFF82E0u; // 80189B8C
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 80189B90
  W32(c->r[13]+0xFFFFAFB0u,c->r[5]); // 80189B94
  c->r[5]=0u+0x0000000Cu; // 80189B98
  c->r[3]=c->r[3]+c->r[0]; // 80189B9C
  c->lr=0x80189BA4u; f_8000443C(c); // 80189BA0
  c->r[4]=0u+0x80190000u; // 80189BA4
  c->r[3]=R32(c->r[13]+0xFFFF9304u); // 80189BA8
  c->r[4]=c->r[4]+0xFFFF9568u; // 80189BAC
  c->lr=0x80189BB4u; f_8015E9E8(c); // 80189BB0
L_80189BB4:;
  c->r[3]=c->r[31]|c->r[31]; // 80189BB4
  c->lr=0x80189BBCu; f_80154438(c); // 80189BB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80189BBC
  c->r[3]=0u+0x00000001u; // 80189BC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80189BC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80189BC8
  c->lr=c->r[0]; // 80189BCC
  c->r[1]=c->r[1]+0x00000010u; // 80189BD0
  return; // 80189BD4
}

// PADInit
void f_80189BD8(Ctx* __restrict c) {
  trace_call(0x80189BD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80189BD8
  c->r[0]=c->lr; // 80189BDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80189BE0
  c->r[0]=R32(c->r[13]+0xFFFFAFB8u); // 80189BE4
  cmps(c,0,(int32_t)c->r[0],0); // 80189BE8
  if (crb(c,2)) { goto L_80189BF8; } // 80189BEC
  c->r[3]=0u+0x00000001u; // 80189BF0
  goto L_80189D24; // 80189BF4
L_80189BF8:;
  c->r[3]=R32(c->r[13]+0xFFFF9300u); // 80189BF8
  c->lr=0x80189C00u; f_8014E714(c); // 80189BFC
  c->r[4]=R32(c->r[13]+0xFFFFAF98u); // 80189C00
  cmps(c,1,(int32_t)c->r[4],0); // 80189C04
  if (crb(c,6)) { goto L_80189C64; } // 80189C08
  c->r[0]=0u+0x00000000u; // 80189C0C
  cmps(c,0,(int32_t)c->r[4],1); // 80189C10
  W32(c->r[13]+0xFFFFAF98u,c->r[0]); // 80189C14
  if (crb(c,2)) { goto L_80189C44; } // 80189C18
  if (!crb(c,0)) { goto L_80189C28; } // 80189C1C
  if (!crb(c,4)) { goto L_80189C34; } // 80189C20
  goto L_80189C60; // 80189C24
L_80189C28:;
  cmps(c,0,(int32_t)c->r[4],6); // 80189C28
  if (!crb(c,0)) { goto L_80189C60; } // 80189C2C
  goto L_80189C54; // 80189C30
L_80189C34:;
  c->r[3]=0u+0x80190000u; // 80189C34
  c->r[3]=c->r[3]+0xFFFFA2A8u; // 80189C38
  W32(c->r[13]+0xFFFF9314u,c->r[3]); // 80189C3C
  goto L_80189C60; // 80189C40
L_80189C44:;
  c->r[3]=0u+0x80190000u; // 80189C44
  c->r[3]=c->r[3]+0xFFFFA3C0u; // 80189C48
  W32(c->r[13]+0xFFFF9314u,c->r[3]); // 80189C4C
  goto L_80189C60; // 80189C50
L_80189C54:;
  c->r[3]=0u+0x80190000u; // 80189C54
  c->r[3]=c->r[3]+0xFFFFA4D8u; // 80189C58
  W32(c->r[13]+0xFFFF9314u,c->r[3]); // 80189C5C
L_80189C60:;
  W32(c->r[13]+0xFFFF9310u,c->r[4]); // 80189C60
L_80189C64:;
  c->r[0]=R32(c->r[13]+0xFFFFAAF4u); // 80189C64
  c->r[3]=0u+0x00000001u; // 80189C68
  W32(c->r[13]+0xFFFFAFB8u,c->r[3]); // 80189C6C
  cmps(c,0,(int32_t)c->r[0],0); // 80189C70
  if (crb(c,2)) { goto L_80189CD8; } // 80189C74
  c->lr=0x80189C7Cu; f_8015848C(c); // 80189C78
  c->r[8]=sraw(c,c->r[3],16); // 80189C7C
  c->r[5]=0u+0x00010000u; // 80189C80
  c->r[0]=sraw(c,c->r[3],31); // 80189C84
  c->r[6]=0u+0x00000000u; // 80189C88
  c->r[7]=c->r[5]+0xFFFFFFFFu; // 80189C8C
  c->r[5]=rotl(c->r[4],16)&0xFFFFFFFFu; // 80189C90
  c->r[0]=sraw(c,c->r[3],31); // 80189C94
  c->r[5]=(rotl(c->r[3],16)&0xFFFF0000u)|(c->r[5]&~0xFFFF0000u); // 80189C98
  c->r[4]=c->r[4]&c->r[7]; // 80189C9C
  c->r[0]=sraw(c,c->r[3],16); // 80189CA0
  c->r[0]=c->r[5]&c->r[7]; // 80189CA4
  c->r[5]=c->r[3]&c->r[7]; // 80189CA8
  c->r[0]=addc(c,c->r[4],c->r[0],0); // 80189CAC
  c->r[7]=c->r[8]&c->r[7]; // 80189CB0
  c->r[4]=addc(c,c->r[6],c->r[6],c->xer_ca); // 80189CB4
  c->r[3]=0u+0x80000000u; // 80189CB8
  c->r[5]=addc(c,c->r[5],c->r[0],0); // 80189CBC
  c->r[0]=0u+0xF0000000u; // 80189CC0
  c->r[4]=addc(c,c->r[6],c->r[4],c->xer_ca); // 80189CC4
  c->r[4]=addc(c,c->r[7],c->r[5],0); // 80189CC8
  c->r[4]=rotl(c->r[4],0)&0x00003FFFu; // 80189CCC
  W16(c->r[3]+0x000030E0u,c->r[4]); // 80189CD0
  W32(c->r[13]+0xFFFFAFACu,c->r[0]); // 80189CD4
L_80189CD8:;
  c->r[3]=0u+0x80000000u; // 80189CD8
  c->r[6]=0u+0x80470000u; // 80189CDC
  c->r[0]=R16(c->r[3]+0x000030E0u); // 80189CE0
  c->r[4]=c->r[6]+0xFFFF8320u; // 80189CE4
  c->r[0]=rotl(c->r[0],8)&0x003FFF00u; // 80189CE8
  c->r[7]=c->r[0]|0x4D000000u; // 80189CEC
  c->r[5]=c->r[0]|0x4D400000u; // 80189CF0
  c->r[3]=c->r[0]|0x4D800000u; // 80189CF4
  c->r[0]=c->r[0]|0x4DC00000u; // 80189CF8
  W32(c->r[6]+0xFFFF8320u,c->r[7]); // 80189CFC
  W32(c->r[4]+0x00000004u,c->r[5]); // 80189D00
  W32(c->r[4]+0x00000008u,c->r[3]); // 80189D04
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80189D08
  c->lr=0x80189D10u; f_8015ED3C(c); // 80189D0C
  c->r[3]=0u+0x802E0000u; // 80189D10
  c->r[3]=c->r[3]+0xFFFFC400u; // 80189D14
  c->lr=0x80189D1Cu; f_80155A40(c); // 80189D18
  c->r[3]=0u+0xF0000000u; // 80189D1C
  c->lr=0x80189D24u; f_801899C4(c); // 80189D20
L_80189D24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80189D24
  c->lr=c->r[0]; // 80189D28
  c->r[1]=c->r[1]+0x00000010u; // 80189D2C
  return; // 80189D30
}

// PADRead
void f_80189D34(Ctx* __restrict c) {
  trace_call(0x80189D34u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80189D34
  c->r[0]=c->lr; // 80189D38
  W32(c->r[1]+0x00000054u,c->r[0]); // 80189D3C
  c->r[11]=c->r[1]+0x00000050u; // 80189D40
  c->lr=0x80189D48u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80189D44
  c->r[17]=0u+0x80470000u; // 80189D48
  c->r[16]=c->r[3]|c->r[3]; // 80189D4C
  c->r[17]=c->r[17]+0xFFFF82E0u; // 80189D50
  c->lr=0x80189D58u; f_80154410(c); // 80189D54
  c->r[19]=c->r[3]|c->r[3]; // 80189D58
  c->r[23]=c->r[17]+0x00000030u; // 80189D5C
  c->r[22]=c->r[17]+0x00000050u; // 80189D60
  c->r[21]=c->r[17]+0x00000000u; // 80189D64
  c->r[17]=0u+0x00000000u; // 80189D68
  c->r[18]=0u+0x00000000u; // 80189D6C
  c->r[26]=0u+0xFFFFFFFEu; // 80189D70
  c->r[27]=0u+0xFFFFFFFFu; // 80189D74
  c->r[28]=0u+0xFFFFFFFDu; // 80189D78
  c->r[29]=0u+0x00000000u; // 80189D7C
  c->r[30]=0u+0x80190000u; // 80189D80
  c->r[31]=0u+0x80190000u; // 80189D84
  c->r[25]=0u+0x80000000u; // 80189D88
L_80189D8C:;
  c->r[0]=R32(c->r[13]+0xFFFFAFA0u); // 80189D8C
  c->r[20]=((c->r[18])&0x20)?0u:(c->r[25]>>((c->r[18])&31)); // 80189D90
  c->r[0]=c->r[0]&c->r[20]; cr0(c,c->r[0]); // 80189D94
  if (crb(c,2)) { goto L_80189DBC; } // 80189D98
  c->r[3]=0u+0x00000000u; // 80189D9C
  c->lr=0x80189DA4u; f_801899C4(c); // 80189DA0
  W8(c->r[16]+0x0000000Au,c->r[26]); // 80189DA4
  c->r[3]=c->r[16]|c->r[16]; // 80189DA8
  c->r[4]=0u+0x00000000u; // 80189DAC
  c->r[5]=0u+0x0000000Au; // 80189DB0
  c->lr=0x80189DB8u; f_8000443C(c); // 80189DB4
  goto L_8018A1B0; // 80189DB8
L_80189DBC:;
  c->r[0]=R32(c->r[13]+0xFFFFAFB0u); // 80189DBC
  c->r[0]=c->r[0]&c->r[20]; cr0(c,c->r[0]); // 80189DC0
  if (!crb(c,2)) { goto L_80189DD4; } // 80189DC4
  c->r[0]=R32(c->r[13]+0xFFFF9304u); // 80189DC8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[18]); // 80189DCC
  if (!crb(c,2)) { goto L_80189DEC; } // 80189DD0
L_80189DD4:;
  W8(c->r[16]+0x0000000Au,c->r[26]); // 80189DD4
  c->r[3]=c->r[16]|c->r[16]; // 80189DD8
  c->r[4]=0u+0x00000000u; // 80189DDC
  c->r[5]=0u+0x0000000Au; // 80189DE0
  c->lr=0x80189DE8u; f_8000443C(c); // 80189DE4
  goto L_8018A1B0; // 80189DE8
L_80189DEC:;
  c->r[0]=R32(c->r[13]+0xFFFFAFB4u); // 80189DEC
  c->r[0]=c->r[0]&c->r[20]; cr0(c,c->r[0]); // 80189DF0
  if (!crb(c,2)) { goto L_80189E10; } // 80189DF4
  W8(c->r[16]+0x0000000Au,c->r[27]); // 80189DF8
  c->r[3]=c->r[16]|c->r[16]; // 80189DFC
  c->r[4]=0u+0x00000000u; // 80189E00
  c->r[5]=0u+0x0000000Au; // 80189E04
  c->lr=0x80189E0Cu; f_8000443C(c); // 80189E08
  goto L_8018A1B0; // 80189E0C
L_80189E10:;
  c->r[3]=c->r[18]|c->r[18]; // 80189E10
  c->lr=0x80189E18u; f_8015D594(c); // 80189E14
  cmps(c,0,(int32_t)c->r[3],0); // 80189E18
  if (crb(c,2)) { goto L_80189E38; } // 80189E1C
  W8(c->r[16]+0x0000000Au,c->r[28]); // 80189E20
  c->r[3]=c->r[16]|c->r[16]; // 80189E24
  c->r[4]=0u+0x00000000u; // 80189E28
  c->r[5]=0u+0x0000000Au; // 80189E2C
  c->lr=0x80189E34u; f_8000443C(c); // 80189E30
  goto L_8018A1B0; // 80189E34
L_80189E38:;
  c->r[3]=c->r[18]|c->r[18]; // 80189E38
  c->lr=0x80189E40u; f_8015E07C(c); // 80189E3C
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 80189E40
  if (crb(c,2)) { goto L_80189F14; } // 80189E44
  c->r[3]=c->r[18]|c->r[18]; // 80189E48
  c->r[4]=c->r[1]+0x00000008u; // 80189E4C
  c->lr=0x80189E54u; f_8015E268(c); // 80189E50
  c->r[0]=R32(c->r[13]+0xFFFFAFA8u); // 80189E54
  c->r[0]=c->r[0]&c->r[20]; cr0(c,c->r[0]); // 80189E58
  if (crb(c,2)) { goto L_80189E98; } // 80189E5C
  W8(c->r[16]+0x0000000Au,c->r[29]); // 80189E60
  c->r[3]=c->r[16]|c->r[16]; // 80189E64
  c->r[4]=0u+0x00000000u; // 80189E68
  c->r[5]=0u+0x0000000Au; // 80189E6C
  c->lr=0x80189E74u; f_8000443C(c); // 80189E70
  c->r[3]=R32(c->r[13]+0xFFFFAFA4u); // 80189E74
  c->r[0]=c->r[3]&c->r[20]; cr0(c,c->r[0]); // 80189E78
  if (!crb(c,2)) { goto L_8018A1B0; } // 80189E7C
  c->r[0]=c->r[3]|c->r[20]; // 80189E80
  c->r[3]=c->r[18]|c->r[18]; // 80189E84
  W32(c->r[13]+0xFFFFAFA4u,c->r[0]); // 80189E88
  c->r[4]=c->r[30]+0xFFFF9888u; // 80189E8C
  c->lr=0x80189E94u; f_8015E9E8(c); // 80189E90
  goto L_8018A1B0; // 80189E94
L_80189E98:;
  c->lr=0x80189E9Cu; f_80154410(c); // 80189E98
  c->r[24]=c->r[3]|c->r[3]; // 80189E9C
  c->r[3]=c->r[20]|c->r[20]; // 80189EA0
  c->lr=0x80189EA8u; f_8015E1FC(c); // 80189EA4
  c->r[4]=R32(c->r[13]+0xFFFFAFB4u); // 80189EA8
  c->r[9]=~(c->r[20]|c->r[20]); // 80189EAC
  c->r[0]=R32(c->r[13]+0xFFFFAFA8u); // 80189EB0
  c->r[3]=c->r[18]|c->r[18]; // 80189EB4
  c->r[8]=c->r[4]&c->r[9]; // 80189EB8
  c->r[5]=R32(c->r[13]+0xFFFFAFA4u); // 80189EBC
  c->r[7]=c->r[0]&c->r[9]; // 80189EC0
  c->r[0]=R32(c->r[13]+0xFFFFAF9Cu); // 80189EC4
  c->r[6]=c->r[5]&c->r[9]; // 80189EC8
  c->r[4]=R32(c->r[13]+0xFFFFAFA0u); // 80189ECC
  c->r[0]=c->r[0]&c->r[9]; // 80189ED0
  W32(c->r[13]+0xFFFFAFB4u,c->r[8]); // 80189ED4
  c->r[5]=c->r[4]&c->r[9]; // 80189ED8
  c->r[4]=0u+0x00000000u; // 80189EDC
  W32(c->r[13]+0xFFFFAFA8u,c->r[7]); // 80189EE0
  W32(c->r[13]+0xFFFFAFA4u,c->r[6]); // 80189EE4
  W32(c->r[13]+0xFFFFAFA0u,c->r[5]); // 80189EE8
  W32(c->r[13]+0xFFFFAF9Cu,c->r[0]); // 80189EEC
  c->lr=0x80189EF4u; f_80156B8C(c); // 80189EF0
  c->r[3]=c->r[24]|c->r[24]; // 80189EF4
  c->lr=0x80189EFCu; f_80154438(c); // 80189EF8
  W8(c->r[16]+0x0000000Au,c->r[27]); // 80189EFC
  c->r[3]=c->r[16]|c->r[16]; // 80189F00
  c->r[4]=0u+0x00000000u; // 80189F04
  c->r[5]=0u+0x0000000Au; // 80189F08
  c->lr=0x80189F10u; f_8000443C(c); // 80189F0C
  goto L_8018A1B0; // 80189F10
L_80189F14:;
  c->r[3]=c->r[18]|c->r[18]; // 80189F14
  c->lr=0x80189F1Cu; f_8015E834(c); // 80189F18
  c->r[0]=rotl(c->r[3],0)&0x20000000u; cr0(c,c->r[0]); // 80189F1C
  if (!crb(c,2)) { goto L_80189F28; } // 80189F20
  c->r[17]=c->r[17]|c->r[20]; // 80189F24
L_80189F28:;
  c->r[3]=c->r[18]|c->r[18]; // 80189F28
  c->r[4]=c->r[1]+0x00000008u; // 80189F2C
  c->lr=0x80189F34u; f_8015E268(c); // 80189F30
  cmps(c,0,(int32_t)c->r[3],0); // 80189F34
  if (!crb(c,2)) { goto L_80189F54; } // 80189F38
  W8(c->r[16]+0x0000000Au,c->r[28]); // 80189F3C
  c->r[3]=c->r[16]|c->r[16]; // 80189F40
  c->r[4]=0u+0x00000000u; // 80189F44
  c->r[5]=0u+0x0000000Au; // 80189F48
  c->lr=0x80189F50u; f_8000443C(c); // 80189F4C
  goto L_8018A1B0; // 80189F50
L_80189F54:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80189F54
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 80189F58
  if (crb(c,2)) { goto L_80189F78; } // 80189F5C
  W8(c->r[16]+0x0000000Au,c->r[28]); // 80189F60
  c->r[3]=c->r[16]|c->r[16]; // 80189F64
  c->r[4]=0u+0x00000000u; // 80189F68
  c->r[5]=0u+0x0000000Au; // 80189F6C
  c->lr=0x80189F74u; f_8000443C(c); // 80189F70
  goto L_8018A1B0; // 80189F74
L_80189F78:;
  c->r[12]=R32(c->r[13]+0xFFFF9314u); // 80189F78
  c->r[3]=c->r[18]|c->r[18]; // 80189F7C
  c->r[4]=c->r[16]|c->r[16]; // 80189F80
  c->r[5]=c->r[1]+0x00000008u; // 80189F84
  c->ctr=c->r[12]; // 80189F88
  if (true) { c->lr=0x80189F90u; dispatch(c,c->ctr); } // 80189F8C
  c->r[0]=R32(c->r[23]+0x00000000u); // 80189F90
  c->r[3]=rotl(c->r[0],0)&0xFFFF0000u; // 80189F94
  c->r[0]=c->r[3]+0xF7000000u; // 80189F98
  cmpu(c,0,c->r[0],0x00000000u); // 80189F9C
  if (!crb(c,2)) { goto L_80189FC0; } // 80189FA0
  c->r[0]=R16(c->r[16]+0x00000000u); // 80189FA4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 80189FA8
  c->r[0]=c->r[0]^0x00000080u; // 80189FAC
  cmps(c,0,(int32_t)c->r[0],0); // 80189FB0
  if (crb(c,2)) { goto L_80189FC0; } // 80189FB4
  c->r[0]=0u+0x0000000Au; // 80189FB8
  goto L_80189FC4; // 80189FBC
L_80189FC0:;
  c->r[0]=0u+0x00000003u; // 80189FC0
L_80189FC4:;
  c->r[4]=R8(c->r[22]+0x00000002u); // 80189FC4
  c->r[3]=R8(c->r[16]+0x00000002u); // 80189FC8
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80189FCC
  c->r[6]=sraw(c,c->r[5],31); // 80189FD0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80189FD4
  c->r[4]=sraw(c,c->r[3],31); // 80189FD8
  c->r[5]=c->r[6]^c->r[5]; // 80189FDC
  c->r[3]=c->r[4]^c->r[3]; // 80189FE0
  c->r[5]=c->r[5]-c->r[6]; // 80189FE4
  c->r[3]=c->r[3]-c->r[4]; // 80189FE8
  c->r[3]=c->r[3]-c->r[5]; // 80189FEC
  c->r[4]=sraw(c,c->r[3],31); // 80189FF0
  c->r[3]=c->r[4]^c->r[3]; // 80189FF4
  c->r[3]=c->r[3]-c->r[4]; // 80189FF8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80189FFC
  if (!crb(c,0)) { goto L_8018A144; } // 8018A000
  c->r[4]=R8(c->r[22]+0x00000003u); // 8018A004
  c->r[3]=R8(c->r[16]+0x00000003u); // 8018A008
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8018A00C
  c->r[6]=sraw(c,c->r[5],31); // 8018A010
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018A014
  c->r[4]=sraw(c,c->r[3],31); // 8018A018
  c->r[5]=c->r[6]^c->r[5]; // 8018A01C
  c->r[3]=c->r[4]^c->r[3]; // 8018A020
  c->r[5]=c->r[5]-c->r[6]; // 8018A024
  c->r[3]=c->r[3]-c->r[4]; // 8018A028
  c->r[3]=c->r[3]-c->r[5]; // 8018A02C
  c->r[4]=sraw(c,c->r[3],31); // 8018A030
  c->r[3]=c->r[4]^c->r[3]; // 8018A034
  c->r[3]=c->r[3]-c->r[4]; // 8018A038
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8018A03C
  if (!crb(c,0)) { goto L_8018A144; } // 8018A040
  c->r[4]=R8(c->r[22]+0x00000004u); // 8018A044
  c->r[3]=R8(c->r[16]+0x00000004u); // 8018A048
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8018A04C
  c->r[6]=sraw(c,c->r[5],31); // 8018A050
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018A054
  c->r[4]=sraw(c,c->r[3],31); // 8018A058
  c->r[5]=c->r[6]^c->r[5]; // 8018A05C
  c->r[3]=c->r[4]^c->r[3]; // 8018A060
  c->r[5]=c->r[5]-c->r[6]; // 8018A064
  c->r[3]=c->r[3]-c->r[4]; // 8018A068
  c->r[3]=c->r[3]-c->r[5]; // 8018A06C
  c->r[4]=sraw(c,c->r[3],31); // 8018A070
  c->r[3]=c->r[4]^c->r[3]; // 8018A074
  c->r[3]=c->r[3]-c->r[4]; // 8018A078
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8018A07C
  if (!crb(c,0)) { goto L_8018A144; } // 8018A080
  c->r[4]=R8(c->r[22]+0x00000005u); // 8018A084
  c->r[3]=R8(c->r[16]+0x00000005u); // 8018A088
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8018A08C
  c->r[6]=sraw(c,c->r[5],31); // 8018A090
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018A094
  c->r[4]=sraw(c,c->r[3],31); // 8018A098
  c->r[5]=c->r[6]^c->r[5]; // 8018A09C
  c->r[3]=c->r[4]^c->r[3]; // 8018A0A0
  c->r[5]=c->r[5]-c->r[6]; // 8018A0A4
  c->r[3]=c->r[3]-c->r[4]; // 8018A0A8
  c->r[3]=c->r[3]-c->r[5]; // 8018A0AC
  c->r[4]=sraw(c,c->r[3],31); // 8018A0B0
  c->r[3]=c->r[4]^c->r[3]; // 8018A0B4
  c->r[3]=c->r[3]-c->r[4]; // 8018A0B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8018A0BC
  if (!crb(c,0)) { goto L_8018A144; } // 8018A0C0
  c->r[5]=R8(c->r[22]+0x00000006u); // 8018A0C4
  c->r[3]=R8(c->r[16]+0x00000006u); // 8018A0C8
  c->r[6]=sraw(c,c->r[5],31); // 8018A0CC
  c->r[4]=sraw(c,c->r[3],31); // 8018A0D0
  c->r[5]=c->r[6]^c->r[5]; // 8018A0D4
  c->r[3]=c->r[4]^c->r[3]; // 8018A0D8
  c->r[5]=c->r[5]-c->r[6]; // 8018A0DC
  c->r[3]=c->r[3]-c->r[4]; // 8018A0E0
  c->r[3]=c->r[3]-c->r[5]; // 8018A0E4
  c->r[4]=sraw(c,c->r[3],31); // 8018A0E8
  c->r[3]=c->r[4]^c->r[3]; // 8018A0EC
  c->r[3]=c->r[3]-c->r[4]; // 8018A0F0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8018A0F4
  if (!crb(c,0)) { goto L_8018A144; } // 8018A0F8
  c->r[5]=R8(c->r[22]+0x00000007u); // 8018A0FC
  c->r[3]=R8(c->r[16]+0x00000007u); // 8018A100
  c->r[6]=sraw(c,c->r[5],31); // 8018A104
  c->r[4]=sraw(c,c->r[3],31); // 8018A108
  c->r[5]=c->r[6]^c->r[5]; // 8018A10C
  c->r[3]=c->r[4]^c->r[3]; // 8018A110
  c->r[5]=c->r[5]-c->r[6]; // 8018A114
  c->r[3]=c->r[3]-c->r[4]; // 8018A118
  c->r[3]=c->r[3]-c->r[5]; // 8018A11C
  c->r[4]=sraw(c,c->r[3],31); // 8018A120
  c->r[3]=c->r[4]^c->r[3]; // 8018A124
  c->r[3]=c->r[3]-c->r[4]; // 8018A128
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8018A12C
  if (!crb(c,0)) { goto L_8018A144; } // 8018A130
  c->r[3]=R16(c->r[16]+0x00000000u); // 8018A134
  c->r[0]=R16(c->r[22]+0x00000000u); // 8018A138
  cmpu(c,0,c->r[3],c->r[0]); // 8018A13C
  if (crb(c,2)) { goto L_8018A148; } // 8018A140
L_8018A144:;
  c->lr=0x8018A148u; f_80161768(c); // 8018A144
L_8018A148:;
  c->r[3]=c->r[22]|c->r[22]; // 8018A148
  c->r[4]=c->r[16]|c->r[16]; // 8018A14C
  c->r[5]=0u+0x0000000Cu; // 8018A150
  c->lr=0x8018A158u; f_80004338(c); // 8018A154
  c->r[0]=R16(c->r[16]+0x00000000u); // 8018A158
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 8018A15C
  if (crb(c,2)) { goto L_8018A1A0; } // 8018A160
  W8(c->r[16]+0x0000000Au,c->r[28]); // 8018A164
  c->r[3]=c->r[16]|c->r[16]; // 8018A168
  c->r[4]=0u+0x00000000u; // 8018A16C
  c->r[5]=0u+0x0000000Au; // 8018A170
  c->lr=0x8018A178u; f_8000443C(c); // 8018A174
  c->r[3]=c->r[18]|c->r[18]; // 8018A178
  c->r[6]=c->r[21]|c->r[21]; // 8018A17C
  c->r[8]=c->r[31]+0xFFFF93CCu; // 8018A180
  c->r[4]=c->r[13]+0xFFFF9318u; // 8018A184
  c->r[5]=0u+0x00000001u; // 8018A188
  c->r[7]=0u+0x0000000Au; // 8018A18C
  c->r[10]=0u+0x00000000u; // 8018A190
  c->r[9]=0u+0x00000000u; // 8018A194
  c->lr=0x8018A19Cu; f_8015E418(c); // 8018A198
  goto L_8018A1B0; // 8018A19C
L_8018A1A0:;
  W8(c->r[16]+0x0000000Au,c->r[29]); // 8018A1A0
  c->r[0]=R16(c->r[16]+0x00000000u); // 8018A1A4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 8018A1A8
  W16(c->r[16]+0x00000000u,c->r[0]); // 8018A1AC
L_8018A1B0:;
  c->r[18]=c->r[18]+0x00000001u; // 8018A1B0
  c->r[22]=c->r[22]+0x0000000Cu; // 8018A1B4
  cmps(c,0,(int32_t)c->r[18],4); // 8018A1B8
  c->r[21]=c->r[21]+0x0000000Cu; // 8018A1BC
  c->r[16]=c->r[16]+0x0000000Cu; // 8018A1C0
  c->r[23]=c->r[23]+0x00000004u; // 8018A1C4
  if (crb(c,0)) { IRQCHK(c); goto L_80189D8C; } // 8018A1C8
  c->r[3]=c->r[19]|c->r[19]; // 8018A1CC
  c->lr=0x8018A1D4u; f_80154438(c); // 8018A1D0
  c->r[11]=c->r[1]+0x00000050u; // 8018A1D4
  c->r[3]=c->r[17]|c->r[17]; // 8018A1D8
  c->lr=0x8018A1E0u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018A1DC
  c->r[0]=R32(c->r[1]+0x00000054u); // 8018A1E0
  c->lr=c->r[0]; // 8018A1E4
  c->r[1]=c->r[1]+0x00000050u; // 8018A1E8
  return; // 8018A1EC
}

// PADControlMotor
void f_8018A1F0(Ctx* __restrict c) {
  trace_call(0x8018A1F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018A1F0
  c->r[0]=c->lr; // 8018A1F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018A1F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8018A1FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8018A200
  c->r[30]=c->r[4]|c->r[4]; // 8018A204
  W32(c->r[1]+0x00000014u,c->r[29]); // 8018A208
  c->r[29]=c->r[3]|c->r[3]; // 8018A20C
  c->lr=0x8018A214u; f_80154410(c); // 8018A210
  c->r[0]=0u+0x80000000u; // 8018A214
  c->r[4]=R32(c->r[13]+0xFFFFAFB4u); // 8018A218
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[0]>>((c->r[29])&31)); // 8018A21C
  c->r[31]=c->r[3]|c->r[3]; // 8018A220
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 8018A224
  if (crb(c,2)) { goto L_8018A284; } // 8018A228
  c->r[3]=c->r[29]|c->r[29]; // 8018A22C
  c->lr=0x8018A234u; f_8015E834(c); // 8018A230
  c->r[0]=rotl(c->r[3],0)&0x20000000u; cr0(c,c->r[0]); // 8018A234
  if (!crb(c,2)) { goto L_8018A284; } // 8018A238
  c->r[0]=R32(c->r[13]+0xFFFF9310u); // 8018A23C
  cmpu(c,0,c->r[0],0x00000002u); // 8018A240
  if (!crb(c,0)) { goto L_8018A254; } // 8018A244
  cmpu(c,0,c->r[30],0x00000002u); // 8018A248
  if (!crb(c,2)) { goto L_8018A254; } // 8018A24C
  c->r[30]=0u+0x00000000u; // 8018A250
L_8018A254:;
  c->r[3]=0u+0x80000000u; // 8018A254
  c->r[0]=R8(c->r[3]+0x000030E3u); // 8018A258
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 8018A25C
  if (crb(c,2)) { goto L_8018A268; } // 8018A260
  c->r[30]=0u+0x00000000u; // 8018A264
L_8018A268:;
  c->r[4]=R32(c->r[13]+0xFFFF930Cu); // 8018A268
  c->r[0]=rotl(c->r[30],0)&0x00000003u; // 8018A26C
  c->r[3]=c->r[29]|c->r[29]; // 8018A270
  c->r[4]=c->r[4]|0x00400000u; // 8018A274
  c->r[4]=c->r[4]|c->r[0]; // 8018A278
  c->lr=0x8018A280u; f_8015E0F4(c); // 8018A27C
  c->lr=0x8018A284u; f_8015E108(c); // 8018A280
L_8018A284:;
  c->r[3]=c->r[31]|c->r[31]; // 8018A284
  c->lr=0x8018A28Cu; f_80154438(c); // 8018A288
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018A28C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018A290
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018A294
  c->r[29]=R32(c->r[1]+0x00000014u); // 8018A298
  c->lr=c->r[0]; // 8018A29C
  c->r[1]=c->r[1]+0x00000020u; // 8018A2A0
  return; // 8018A2A4
}

// SPEC0_MakeStatus
void f_8018A2A8(Ctx* __restrict c) {
  trace_call(0x8018A2A8u);
  c->r[0]=0u+0x00000000u; // 8018A2A8
  W16(c->r[4]+0x00000000u,c->r[0]); // 8018A2AC
  c->r[3]=R32(c->r[5]+0x00000000u); // 8018A2B0
  c->r[3]=rotl(c->r[3],13)&0x00000001u; // 8018A2B4
  c->r[7]=0u-c->r[3]; // 8018A2B8
  c->r[3]=rotl(c->r[7],0)&0x00000100u; // 8018A2BC
  W16(c->r[4]+0x00000000u,c->r[3]); // 8018A2C0
  c->r[3]=R32(c->r[5]+0x00000000u); // 8018A2C4
  c->r[3]=rotl(c->r[3],11)&0x00000001u; // 8018A2C8
  c->r[3]=0u-c->r[3]; // 8018A2CC
  c->r[6]=rotl(c->r[3],0)&0x00000200u; // 8018A2D0
  c->r[6]=(rotl(c->r[7],0)&0x00000100u)|(c->r[6]&~0x00000100u); // 8018A2D4
  W16(c->r[4]+0x00000000u,c->r[6]); // 8018A2D8
  c->r[3]=R32(c->r[5]+0x00000000u); // 8018A2DC
  c->r[3]=rotl(c->r[3],8)&0x00000001u; // 8018A2E0
  c->r[3]=0u-c->r[3]; // 8018A2E4
  c->r[6]=(rotl(c->r[3],0)&0x00000400u)|(c->r[6]&~0x00000400u); // 8018A2E8
  W16(c->r[4]+0x00000000u,c->r[6]); // 8018A2EC
  c->r[3]=R32(c->r[5]+0x00000000u); // 8018A2F0
  c->r[3]=rotl(c->r[3],16)&0x00000001u; // 8018A2F4
  c->r[3]=0u-c->r[3]; // 8018A2F8
  c->r[6]=(rotl(c->r[3],0)&0x00000800u)|(c->r[6]&~0x00000800u); // 8018A2FC
  W16(c->r[4]+0x00000000u,c->r[6]); // 8018A300
  c->r[3]=R32(c->r[5]+0x00000000u); // 8018A304
  c->r[3]=rotl(c->r[3],12)&0x00000001u; // 8018A308
  c->r[3]=0u-c->r[3]; // 8018A30C
  c->r[6]=(rotl(c->r[3],0)&0x00001000u)|(c->r[6]&~0x00001000u); // 8018A310
  W16(c->r[4]+0x00000000u,c->r[6]); // 8018A314
  c->r[3]=R32(c->r[5]+0x00000004u); // 8018A318
  c->r[3]=rotl(c->r[3],16)&0x0000FFFFu; // 8018A31C
  W8(c->r[4]+0x00000002u,c->r[3]); // 8018A320
  c->r[3]=R32(c->r[5]+0x00000004u); // 8018A324
  c->r[3]=rotl(c->r[3],8)&0x000000FFu; // 8018A328
  W8(c->r[4]+0x00000003u,c->r[3]); // 8018A32C
  c->r[3]=R32(c->r[5]+0x00000004u); // 8018A330
  W8(c->r[4]+0x00000004u,c->r[3]); // 8018A334
  c->r[3]=R32(c->r[5]+0x00000004u); // 8018A338
  c->r[3]=rotl(c->r[3],24)&0x00FFFFFFu; // 8018A33C
  W8(c->r[4]+0x00000005u,c->r[3]); // 8018A340
  c->r[3]=R32(c->r[5]+0x00000000u); // 8018A344
  c->r[3]=rotl(c->r[3],24)&0x000000FFu; // 8018A348
  W8(c->r[4]+0x00000006u,c->r[3]); // 8018A34C
  cmpu(c,0,c->r[3],0x000000AAu); // 8018A350
  c->r[3]=R32(c->r[5]+0x00000000u); // 8018A354
  W8(c->r[4]+0x00000007u,c->r[3]); // 8018A358
  W8(c->r[4]+0x00000008u,c->r[0]); // 8018A35C
  W8(c->r[4]+0x00000009u,c->r[0]); // 8018A360
  if (crb(c,0)) { goto L_8018A374; } // 8018A364
  c->r[0]=rotl(c->r[6],0)&0x0000FFFFu; // 8018A368
  c->r[0]=c->r[0]|0x00000040u; // 8018A36C
  W16(c->r[4]+0x00000000u,c->r[0]); // 8018A370
L_8018A374:;
  c->r[0]=R8(c->r[4]+0x00000007u); // 8018A374
  cmpu(c,0,c->r[0],0x000000AAu); // 8018A378
  if (crb(c,0)) { goto L_8018A38C; } // 8018A37C
  c->r[0]=R16(c->r[4]+0x00000000u); // 8018A380
  c->r[0]=c->r[0]|0x00000020u; // 8018A384
  W16(c->r[4]+0x00000000u,c->r[0]); // 8018A388
L_8018A38C:;
  c->r[3]=R8(c->r[4]+0x00000002u); // 8018A38C
  c->r[6]=R8(c->r[4]+0x00000003u); // 8018A390
  c->r[0]=c->r[3]+0xFFFFFF80u; // 8018A394
  c->r[5]=R8(c->r[4]+0x00000004u); // 8018A398
  c->r[3]=R8(c->r[4]+0x00000005u); // 8018A39C
  c->r[6]=c->r[6]+0xFFFFFF80u; // 8018A3A0
  c->r[5]=c->r[5]+0xFFFFFF80u; // 8018A3A4
  W8(c->r[4]+0x00000002u,c->r[0]); // 8018A3A8
  c->r[0]=c->r[3]+0xFFFFFF80u; // 8018A3AC
  W8(c->r[4]+0x00000003u,c->r[6]); // 8018A3B0
  W8(c->r[4]+0x00000004u,c->r[5]); // 8018A3B4
  W8(c->r[4]+0x00000005u,c->r[0]); // 8018A3B8
  return; // 8018A3BC
}

// SPEC1_MakeStatus
void f_8018A3C0(Ctx* __restrict c) {
  trace_call(0x8018A3C0u);
  c->r[0]=0u+0x00000000u; // 8018A3C0
  W16(c->r[4]+0x00000000u,c->r[0]); // 8018A3C4
  c->r[3]=R32(c->r[5]+0x00000000u); // 8018A3C8
  c->r[3]=rotl(c->r[3],9)&0x00000001u; // 8018A3CC
  c->r[7]=0u-c->r[3]; // 8018A3D0
  c->r[3]=rotl(c->r[7],0)&0x00000100u; // 8018A3D4
  W16(c->r[4]+0x00000000u,c->r[3]); // 8018A3D8
  c->r[3]=R32(c->r[5]+0x00000000u); // 8018A3DC
  c->r[3]=rotl(c->r[3],8)&0x00000001u; // 8018A3E0
  c->r[3]=0u-c->r[3]; // 8018A3E4
  c->r[6]=rotl(c->r[3],0)&0x00000200u; // 8018A3E8
  c->r[6]=(rotl(c->r[7],0)&0x00000100u)|(c->r[6]&~0x00000100u); // 8018A3EC
  W16(c->r[4]+0x00000000u,c->r[6]); // 8018A3F0
  c->r[3]=R32(c->r[5]+0x00000000u); // 8018A3F4
  c->r[3]=rotl(c->r[3],11)&0x00000001u; // 8018A3F8
  c->r[3]=0u-c->r[3]; // 8018A3FC
  c->r[6]=(rotl(c->r[3],0)&0x00000400u)|(c->r[6]&~0x00000400u); // 8018A400
  W16(c->r[4]+0x00000000u,c->r[6]); // 8018A404
  c->r[3]=R32(c->r[5]+0x00000000u); // 8018A408
  c->r[3]=rotl(c->r[3],12)&0x00000001u; // 8018A40C
  c->r[3]=0u-c->r[3]; // 8018A410
  c->r[6]=(rotl(c->r[3],0)&0x00000800u)|(c->r[6]&~0x00000800u); // 8018A414
  W16(c->r[4]+0x00000000u,c->r[6]); // 8018A418
  c->r[3]=R32(c->r[5]+0x00000000u); // 8018A41C
  c->r[3]=rotl(c->r[3],7)&0x00000001u; // 8018A420
  c->r[3]=0u-c->r[3]; // 8018A424
  c->r[6]=(rotl(c->r[3],0)&0x00001000u)|(c->r[6]&~0x00001000u); // 8018A428
  W16(c->r[4]+0x00000000u,c->r[6]); // 8018A42C
  c->r[3]=R32(c->r[5]+0x00000004u); // 8018A430
  c->r[3]=rotl(c->r[3],16)&0x0000FFFFu; // 8018A434
  W8(c->r[4]+0x00000002u,c->r[3]); // 8018A438
  c->r[3]=R32(c->r[5]+0x00000004u); // 8018A43C
  c->r[3]=rotl(c->r[3],8)&0x000000FFu; // 8018A440
  W8(c->r[4]+0x00000003u,c->r[3]); // 8018A444
  c->r[3]=R32(c->r[5]+0x00000004u); // 8018A448
  W8(c->r[4]+0x00000004u,c->r[3]); // 8018A44C
  c->r[3]=R32(c->r[5]+0x00000004u); // 8018A450
  c->r[3]=rotl(c->r[3],24)&0x00FFFFFFu; // 8018A454
  W8(c->r[4]+0x00000005u,c->r[3]); // 8018A458
  c->r[3]=R32(c->r[5]+0x00000000u); // 8018A45C
  c->r[3]=rotl(c->r[3],24)&0x000000FFu; // 8018A460
  W8(c->r[4]+0x00000006u,c->r[3]); // 8018A464
  cmpu(c,0,c->r[3],0x000000AAu); // 8018A468
  c->r[3]=R32(c->r[5]+0x00000000u); // 8018A46C
  W8(c->r[4]+0x00000007u,c->r[3]); // 8018A470
  W8(c->r[4]+0x00000008u,c->r[0]); // 8018A474
  W8(c->r[4]+0x00000009u,c->r[0]); // 8018A478
  if (crb(c,0)) { goto L_8018A48C; } // 8018A47C
  c->r[0]=rotl(c->r[6],0)&0x0000FFFFu; // 8018A480
  c->r[0]=c->r[0]|0x00000040u; // 8018A484
  W16(c->r[4]+0x00000000u,c->r[0]); // 8018A488
L_8018A48C:;
  c->r[0]=R8(c->r[4]+0x00000007u); // 8018A48C
  cmpu(c,0,c->r[0],0x000000AAu); // 8018A490
  if (crb(c,0)) { goto L_8018A4A4; } // 8018A494
  c->r[0]=R16(c->r[4]+0x00000000u); // 8018A498
  c->r[0]=c->r[0]|0x00000020u; // 8018A49C
  W16(c->r[4]+0x00000000u,c->r[0]); // 8018A4A0
L_8018A4A4:;
  c->r[3]=R8(c->r[4]+0x00000002u); // 8018A4A4
  c->r[6]=R8(c->r[4]+0x00000003u); // 8018A4A8
  c->r[0]=c->r[3]+0xFFFFFF80u; // 8018A4AC
  c->r[5]=R8(c->r[4]+0x00000004u); // 8018A4B0
  c->r[3]=R8(c->r[4]+0x00000005u); // 8018A4B4
  c->r[6]=c->r[6]+0xFFFFFF80u; // 8018A4B8
  c->r[5]=c->r[5]+0xFFFFFF80u; // 8018A4BC
  W8(c->r[4]+0x00000002u,c->r[0]); // 8018A4C0
  c->r[0]=c->r[3]+0xFFFFFF80u; // 8018A4C4
  W8(c->r[4]+0x00000003u,c->r[6]); // 8018A4C8
  W8(c->r[4]+0x00000004u,c->r[5]); // 8018A4CC
  W8(c->r[4]+0x00000005u,c->r[0]); // 8018A4D0
  return; // 8018A4D4
}

// SPEC2_MakeStatus
void f_8018A4D8(Ctx* __restrict c) {
  trace_call(0x8018A4D8u);
  c->r[0]=R32(c->r[5]+0x00000000u); // 8018A4D8
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 8018A4DC
  W16(c->r[4]+0x00000000u,c->r[0]); // 8018A4E0
  c->r[0]=R32(c->r[5]+0x00000000u); // 8018A4E4
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 8018A4E8
  W8(c->r[4]+0x00000002u,c->r[0]); // 8018A4EC
  c->r[0]=R32(c->r[5]+0x00000000u); // 8018A4F0
  W8(c->r[4]+0x00000003u,c->r[0]); // 8018A4F4
  c->r[0]=R32(c->r[13]+0xFFFF930Cu); // 8018A4F8
  c->r[0]=rotl(c->r[0],0)&0x00000700u; // 8018A4FC
  cmps(c,0,(int32_t)c->r[0],1024); // 8018A500
  if (crb(c,2)) { goto L_8018A67C; } // 8018A504
  if (!crb(c,0)) { goto L_8018A53C; } // 8018A508
  cmps(c,0,(int32_t)c->r[0],512); // 8018A50C
  if (crb(c,2)) { goto L_8018A5F8; } // 8018A510
  if (!crb(c,0)) { goto L_8018A530; } // 8018A514
  cmps(c,0,(int32_t)c->r[0],256); // 8018A518
  if (crb(c,2)) { goto L_8018A5AC; } // 8018A51C
  if (!crb(c,0)) { goto L_8018A6B4; } // 8018A520
  cmps(c,0,(int32_t)c->r[0],0); // 8018A524
  if (crb(c,2)) { goto L_8018A560; } // 8018A528
  goto L_8018A6B4; // 8018A52C
L_8018A530:;
  cmps(c,0,(int32_t)c->r[0],768); // 8018A530
  if (crb(c,2)) { goto L_8018A640; } // 8018A534
  goto L_8018A6B4; // 8018A538
L_8018A53C:;
  cmps(c,0,(int32_t)c->r[0],1536); // 8018A53C
  if (crb(c,2)) { goto L_8018A560; } // 8018A540
  if (!crb(c,0)) { goto L_8018A554; } // 8018A544
  cmps(c,0,(int32_t)c->r[0],1280); // 8018A548
  if (crb(c,2)) { goto L_8018A560; } // 8018A54C
  goto L_8018A6B4; // 8018A550
L_8018A554:;
  cmps(c,0,(int32_t)c->r[0],1792); // 8018A554
  if (crb(c,2)) { goto L_8018A560; } // 8018A558
  goto L_8018A6B4; // 8018A55C
L_8018A560:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A560
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 8018A564
  W8(c->r[4]+0x00000004u,c->r[0]); // 8018A568
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A56C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 8018A570
  W8(c->r[4]+0x00000005u,c->r[0]); // 8018A574
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A578
  c->r[0]=rotl(c->r[0],24)&0x000000F0u; // 8018A57C
  W8(c->r[4]+0x00000006u,c->r[0]); // 8018A580
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A584
  c->r[0]=rotl(c->r[0],28)&0x000000F0u; // 8018A588
  W8(c->r[4]+0x00000007u,c->r[0]); // 8018A58C
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A590
  c->r[0]=rotl(c->r[0],0)&0x000000F0u; // 8018A594
  W8(c->r[4]+0x00000008u,c->r[0]); // 8018A598
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A59C
  c->r[0]=rotl(c->r[0],4)&0x000000F0u; // 8018A5A0
  W8(c->r[4]+0x00000009u,c->r[0]); // 8018A5A4
  goto L_8018A6B4; // 8018A5A8
L_8018A5AC:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A5AC
  c->r[0]=rotl(c->r[0],8)&0x000000F0u; // 8018A5B0
  W8(c->r[4]+0x00000004u,c->r[0]); // 8018A5B4
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A5B8
  c->r[0]=rotl(c->r[0],12)&0x000000F0u; // 8018A5BC
  W8(c->r[4]+0x00000005u,c->r[0]); // 8018A5C0
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A5C4
  c->r[0]=rotl(c->r[0],16)&0x000000FFu; // 8018A5C8
  W8(c->r[4]+0x00000006u,c->r[0]); // 8018A5CC
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A5D0
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 8018A5D4
  W8(c->r[4]+0x00000007u,c->r[0]); // 8018A5D8
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A5DC
  c->r[0]=rotl(c->r[0],0)&0x000000F0u; // 8018A5E0
  W8(c->r[4]+0x00000008u,c->r[0]); // 8018A5E4
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A5E8
  c->r[0]=rotl(c->r[0],4)&0x000000F0u; // 8018A5EC
  W8(c->r[4]+0x00000009u,c->r[0]); // 8018A5F0
  goto L_8018A6B4; // 8018A5F4
L_8018A5F8:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A5F8
  c->r[0]=rotl(c->r[0],8)&0x000000F0u; // 8018A5FC
  W8(c->r[4]+0x00000004u,c->r[0]); // 8018A600
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A604
  c->r[0]=rotl(c->r[0],12)&0x000000F0u; // 8018A608
  W8(c->r[4]+0x00000005u,c->r[0]); // 8018A60C
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A610
  c->r[0]=rotl(c->r[0],16)&0x000000F0u; // 8018A614
  W8(c->r[4]+0x00000006u,c->r[0]); // 8018A618
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A61C
  c->r[0]=rotl(c->r[0],20)&0x000000F0u; // 8018A620
  W8(c->r[4]+0x00000007u,c->r[0]); // 8018A624
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A628
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 8018A62C
  W8(c->r[4]+0x00000008u,c->r[0]); // 8018A630
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A634
  W8(c->r[4]+0x00000009u,c->r[0]); // 8018A638
  goto L_8018A6B4; // 8018A63C
L_8018A640:;
  c->r[6]=R32(c->r[5]+0x00000004u); // 8018A640
  c->r[0]=0u+0x00000000u; // 8018A644
  c->r[6]=rotl(c->r[6],8)&0x000000FFu; // 8018A648
  W8(c->r[4]+0x00000004u,c->r[6]); // 8018A64C
  c->r[6]=R32(c->r[5]+0x00000004u); // 8018A650
  c->r[6]=rotl(c->r[6],16)&0x0000FFFFu; // 8018A654
  W8(c->r[4]+0x00000005u,c->r[6]); // 8018A658
  c->r[6]=R32(c->r[5]+0x00000004u); // 8018A65C
  c->r[6]=rotl(c->r[6],24)&0x000000FFu; // 8018A660
  W8(c->r[4]+0x00000006u,c->r[6]); // 8018A664
  c->r[5]=R32(c->r[5]+0x00000004u); // 8018A668
  W8(c->r[4]+0x00000007u,c->r[5]); // 8018A66C
  W8(c->r[4]+0x00000008u,c->r[0]); // 8018A670
  W8(c->r[4]+0x00000009u,c->r[0]); // 8018A674
  goto L_8018A6B4; // 8018A678
L_8018A67C:;
  c->r[6]=R32(c->r[5]+0x00000004u); // 8018A67C
  c->r[0]=0u+0x00000000u; // 8018A680
  c->r[6]=rotl(c->r[6],8)&0x000000FFu; // 8018A684
  W8(c->r[4]+0x00000004u,c->r[6]); // 8018A688
  c->r[6]=R32(c->r[5]+0x00000004u); // 8018A68C
  c->r[6]=rotl(c->r[6],16)&0x0000FFFFu; // 8018A690
  W8(c->r[4]+0x00000006u,c->r[0]); // 8018A694
  W8(c->r[4]+0x00000005u,c->r[6]); // 8018A698
  W8(c->r[4]+0x00000007u,c->r[0]); // 8018A69C
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A6A0
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 8018A6A4
  W8(c->r[4]+0x00000008u,c->r[0]); // 8018A6A8
  c->r[0]=R32(c->r[5]+0x00000004u); // 8018A6AC
  W8(c->r[4]+0x00000009u,c->r[0]); // 8018A6B0
L_8018A6B4:;
  c->r[6]=R8(c->r[4]+0x00000002u); // 8018A6B4
  c->r[5]=0u+0x80470000u; // 8018A6B8
  c->r[8]=R8(c->r[4]+0x00000003u); // 8018A6BC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018A6C0
  c->r[9]=c->r[6]+0xFFFFFF80u; // 8018A6C4
  c->r[7]=R8(c->r[4]+0x00000004u); // 8018A6C8
  c->r[6]=R8(c->r[4]+0x00000005u); // 8018A6CC
  c->r[8]=c->r[8]+0xFFFFFF80u; // 8018A6D0
  c->r[7]=c->r[7]+0xFFFFFF80u; // 8018A6D4
  W8(c->r[4]+0x00000002u,c->r[9]); // 8018A6D8
  c->r[6]=c->r[6]+0xFFFFFF80u; // 8018A6DC
  c->r[5]=c->r[5]+0xFFFF8310u; // 8018A6E0
  W8(c->r[4]+0x00000003u,c->r[8]); // 8018A6E4
  W8(c->r[4]+0x00000004u,c->r[7]); // 8018A6E8
  W8(c->r[4]+0x00000005u,c->r[6]); // 8018A6EC
  c->r[0]=R32(c->r[5]+c->r[0]); // 8018A6F0
  c->r[5]=rotl(c->r[0],0)&0xFFFF0000u; // 8018A6F4
  c->r[0]=c->r[5]+0xF7000000u; // 8018A6F8
  cmpu(c,0,c->r[0],0x00000000u); // 8018A6FC
  if (!crb(c,2)) { goto L_8018A744; } // 8018A700
  c->r[0]=R16(c->r[4]+0x00000000u); // 8018A704
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 8018A708
  c->r[0]=c->r[0]^0x00000080u; // 8018A70C
  cmps(c,0,(int32_t)c->r[0],0); // 8018A710
  if (crb(c,2)) { goto L_8018A744; } // 8018A714
  c->r[0]=0u+0x80000000u; // 8018A718
  c->r[5]=R32(c->r[13]+0xFFFFAF9Cu); // 8018A71C
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[0]>>((c->r[3])&31)); // 8018A720
  c->r[3]=c->r[5]|c->r[3]; // 8018A724
  c->r[0]=0u+0x00000000u; // 8018A728
  W32(c->r[13]+0xFFFFAF9Cu,c->r[3]); // 8018A72C
  W8(c->r[4]+0x00000002u,c->r[0]); // 8018A730
  W8(c->r[4]+0x00000003u,c->r[0]); // 8018A734
  W8(c->r[4]+0x00000004u,c->r[0]); // 8018A738
  W8(c->r[4]+0x00000005u,c->r[0]); // 8018A73C
  return; // 8018A740
L_8018A744:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8018A744
  c->r[5]=0u+0x80470000u; // 8018A748
  c->r[6]=0u+0x80000000u; // 8018A74C
  c->r[7]=R32(c->r[13]+0xFFFFAF9Cu); // 8018A750
  c->r[5]=c->r[5]+0xFFFF82E0u; // 8018A754
  c->r[5]=c->r[5]+c->r[0]; // 8018A758
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[6]>>((c->r[3])&31)); // 8018A75C
  c->r[8]=R8(c->r[5]+0x00000002u); // 8018A760
  c->r[0]=c->r[7]&~c->r[0]; // 8018A764
  W32(c->r[13]+0xFFFFAF9Cu,c->r[0]); // 8018A768
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[8]; cr0(c,c->r[0]); // 8018A76C
  c->r[6]=R8(c->r[4]+0x00000002u); // 8018A770
  if (!crb(c,1)) { goto L_8018A794; } // 8018A774
  c->r[3]=c->r[8]+0xFFFFFF80u; // 8018A778
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018A77C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018A780
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 8018A784
  if (!crb(c,0)) { goto L_8018A7B0; } // 8018A788
  c->r[6]=c->r[3]|c->r[3]; // 8018A78C
  goto L_8018A7B0; // 8018A790
L_8018A794:;
  if (!crb(c,0)) { goto L_8018A7B0; } // 8018A794
  c->r[3]=c->r[8]+0x0000007Fu; // 8018A798
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018A79C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018A7A0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8018A7A4
  if (!crb(c,0)) { goto L_8018A7B0; } // 8018A7A8
  c->r[6]=c->r[3]|c->r[3]; // 8018A7AC
L_8018A7B0:;
  c->r[0]=c->r[6]-c->r[8]; // 8018A7B0
  c->r[6]=R8(c->r[4]+0x00000003u); // 8018A7B4
  W8(c->r[4]+0x00000002u,c->r[0]); // 8018A7B8
  c->r[7]=R8(c->r[5]+0x00000003u); // 8018A7BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 8018A7C0
  if (!crb(c,1)) { goto L_8018A7E4; } // 8018A7C4
  c->r[3]=c->r[7]+0xFFFFFF80u; // 8018A7C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018A7CC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018A7D0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 8018A7D4
  if (!crb(c,0)) { goto L_8018A800; } // 8018A7D8
  c->r[6]=c->r[3]|c->r[3]; // 8018A7DC
  goto L_8018A800; // 8018A7E0
L_8018A7E4:;
  if (!crb(c,0)) { goto L_8018A800; } // 8018A7E4
  c->r[3]=c->r[7]+0x0000007Fu; // 8018A7E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018A7EC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018A7F0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8018A7F4
  if (!crb(c,0)) { goto L_8018A800; } // 8018A7F8
  c->r[6]=c->r[3]|c->r[3]; // 8018A7FC
L_8018A800:;
  c->r[0]=c->r[6]-c->r[7]; // 8018A800
  c->r[6]=R8(c->r[4]+0x00000004u); // 8018A804
  W8(c->r[4]+0x00000003u,c->r[0]); // 8018A808
  c->r[7]=R8(c->r[5]+0x00000004u); // 8018A80C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 8018A810
  if (!crb(c,1)) { goto L_8018A834; } // 8018A814
  c->r[3]=c->r[7]+0xFFFFFF80u; // 8018A818
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018A81C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018A820
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 8018A824
  if (!crb(c,0)) { goto L_8018A850; } // 8018A828
  c->r[6]=c->r[3]|c->r[3]; // 8018A82C
  goto L_8018A850; // 8018A830
L_8018A834:;
  if (!crb(c,0)) { goto L_8018A850; } // 8018A834
  c->r[3]=c->r[7]+0x0000007Fu; // 8018A838
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018A83C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018A840
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8018A844
  if (!crb(c,0)) { goto L_8018A850; } // 8018A848
  c->r[6]=c->r[3]|c->r[3]; // 8018A84C
L_8018A850:;
  c->r[0]=c->r[6]-c->r[7]; // 8018A850
  c->r[6]=R8(c->r[4]+0x00000005u); // 8018A854
  W8(c->r[4]+0x00000004u,c->r[0]); // 8018A858
  c->r[7]=R8(c->r[5]+0x00000005u); // 8018A85C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 8018A860
  if (!crb(c,1)) { goto L_8018A884; } // 8018A864
  c->r[3]=c->r[7]+0xFFFFFF80u; // 8018A868
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018A86C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018A870
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 8018A874
  if (!crb(c,0)) { goto L_8018A8A0; } // 8018A878
  c->r[6]=c->r[3]|c->r[3]; // 8018A87C
  goto L_8018A8A0; // 8018A880
L_8018A884:;
  if (!crb(c,0)) { goto L_8018A8A0; } // 8018A884
  c->r[3]=c->r[7]+0x0000007Fu; // 8018A888
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018A88C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018A890
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8018A894
  if (!crb(c,0)) { goto L_8018A8A0; } // 8018A898
  c->r[6]=c->r[3]|c->r[3]; // 8018A89C
L_8018A8A0:;
  c->r[0]=c->r[6]-c->r[7]; // 8018A8A0
  c->r[3]=R8(c->r[4]+0x00000006u); // 8018A8A4
  W8(c->r[4]+0x00000005u,c->r[0]); // 8018A8A8
  c->r[0]=R8(c->r[5]+0x00000006u); // 8018A8AC
  cmpu(c,0,c->r[3],c->r[0]); // 8018A8B0
  if (!crb(c,0)) { goto L_8018A8BC; } // 8018A8B4
  c->r[3]=c->r[0]|c->r[0]; // 8018A8B8
L_8018A8BC:;
  c->r[0]=c->r[3]-c->r[0]; // 8018A8BC
  c->r[3]=R8(c->r[4]+0x00000007u); // 8018A8C0
  W8(c->r[4]+0x00000006u,c->r[0]); // 8018A8C4
  c->r[0]=R8(c->r[5]+0x00000007u); // 8018A8C8
  cmpu(c,0,c->r[3],c->r[0]); // 8018A8CC
  if (!crb(c,0)) { goto L_8018A8D8; } // 8018A8D0
  c->r[3]=c->r[0]|c->r[0]; // 8018A8D4
L_8018A8D8:;
  c->r[0]=c->r[3]-c->r[0]; // 8018A8D8
  W8(c->r[4]+0x00000007u,c->r[0]); // 8018A8DC
  return; // 8018A8E0
}

// PAD_OnReset
void f_8018A8E4(Ctx* __restrict c) {
  trace_call(0x8018A8E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018A8E4
  c->r[0]=c->lr; // 8018A8E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018A8EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018A8F0
  c->r[31]=c->r[3]|c->r[3]; // 8018A8F4
  c->r[0]=R32(c->r[13]+0xFFFFAF94u); // 8018A8F8
  cmps(c,0,(int32_t)c->r[0],0); // 8018A8FC
  if (crb(c,2)) { goto L_8018A918; } // 8018A900
  c->r[0]=0u+0x00000000u; // 8018A904
  c->r[3]=0u+0x80190000u; // 8018A908
  W32(c->r[13]+0xFFFFAF94u,c->r[0]); // 8018A90C
  c->r[3]=c->r[3]+0xFFFFA9ACu; // 8018A910
  c->lr=0x8018A918u; f_8015DD24(c); // 8018A914
L_8018A918:;
  cmps(c,0,(int32_t)c->r[31],0); // 8018A918
  if (!crb(c,2)) { goto L_8018A98C; } // 8018A91C
  c->r[0]=R32(c->r[13]+0xFFFFAFB0u); // 8018A920
  c->r[31]=0u+0x00000000u; // 8018A924
  c->r[3]=0u+0x00000000u; // 8018A928
  cmps(c,0,(int32_t)c->r[0],0); // 8018A92C
  if (!crb(c,2)) { goto L_8018A944; } // 8018A930
  c->r[0]=R32(c->r[13]+0xFFFF9304u); // 8018A934
  cmps(c,0,(int32_t)c->r[0],32); // 8018A938
  if (!crb(c,2)) { goto L_8018A944; } // 8018A93C
  c->r[3]=0u+0x00000001u; // 8018A940
L_8018A944:;
  cmps(c,0,(int32_t)c->r[3],0); // 8018A944
  if (crb(c,2)) { goto L_8018A95C; } // 8018A948
  c->lr=0x8018A950u; f_8015D578(c); // 8018A94C
  cmps(c,0,(int32_t)c->r[3],0); // 8018A950
  if (!crb(c,2)) { goto L_8018A95C; } // 8018A954
  c->r[31]=0u+0x00000001u; // 8018A958
L_8018A95C:;
  c->r[0]=R32(c->r[13]+0xFFFFAF90u); // 8018A95C
  cmps(c,0,(int32_t)c->r[0],0); // 8018A960
  if (!crb(c,2)) { goto L_8018A984; } // 8018A964
  cmps(c,0,(int32_t)c->r[31],0); // 8018A968
  if (crb(c,2)) { goto L_8018A984; } // 8018A96C
  c->r[3]=0u+0xF0000000u; // 8018A970
  c->lr=0x8018A978u; f_80189ACC(c); // 8018A974
  W32(c->r[13]+0xFFFFAF90u,c->r[3]); // 8018A978
  c->r[3]=0u+0x00000000u; // 8018A97C
  goto L_8018A998; // 8018A980
L_8018A984:;
  c->r[3]=c->r[31]|c->r[31]; // 8018A984
  goto L_8018A998; // 8018A988
L_8018A98C:;
  c->r[0]=0u+0x00000000u; // 8018A98C
  c->r[3]=0u+0x00000001u; // 8018A990
  W32(c->r[13]+0xFFFFAF90u,c->r[0]); // 8018A994
L_8018A998:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018A998
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018A99C
  c->lr=c->r[0]; // 8018A9A0
  c->r[1]=c->r[1]+0x00000010u; // 8018A9A4
  return; // 8018A9A8
}

// PAD_SamplingHandler
void f_8018A9AC(Ctx* __restrict c) {
  trace_call(0x8018A9ACu);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018A9AC
  c->r[0]=c->lr; // 8018A9B0
  W32(c->r[1]+0x000002E4u,c->r[0]); // 8018A9B4
  W32(c->r[1]+0x000002DCu,c->r[31]); // 8018A9B8
  c->r[31]=c->r[4]|c->r[4]; // 8018A9BC
  c->r[0]=R32(c->r[13]+0xFFFFAF94u); // 8018A9C0
  cmps(c,0,(int32_t)c->r[0],0); // 8018A9C4
  if (crb(c,2)) { goto L_8018A9F8; } // 8018A9C8
  c->r[3]=c->r[1]+0x00000008u; // 8018A9CC
  c->lr=0x8018A9D4u; f_801502A8(c); // 8018A9D0
  c->r[3]=c->r[1]+0x00000008u; // 8018A9D4
  c->lr=0x8018A9DCu; f_80150080(c); // 8018A9D8
  c->r[12]=R32(c->r[13]+0xFFFFAF94u); // 8018A9DC
  c->ctr=c->r[12]; // 8018A9E0
  if (true) { c->lr=0x8018A9E8u; dispatch(c,c->ctr); } // 8018A9E4
  c->r[3]=c->r[1]+0x00000008u; // 8018A9E8
  c->lr=0x8018A9F0u; f_801502A8(c); // 8018A9EC
  c->r[3]=c->r[31]|c->r[31]; // 8018A9F0
  c->lr=0x8018A9F8u; f_80150080(c); // 8018A9F4
L_8018A9F8:;
  c->r[0]=R32(c->r[1]+0x000002E4u); // 8018A9F8
  c->r[31]=R32(c->r[1]+0x000002DCu); // 8018A9FC
  c->lr=c->r[0]; // 8018AA00
  c->r[1]=c->r[1]+0x000002E0u; // 8018AA04
  return; // 8018AA08
}

// __PADDisableRecalibration
void f_8018AA0C(Ctx* __restrict c) {
  trace_call(0x8018AA0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018AA0C
  c->r[0]=c->lr; // 8018AA10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018AA14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018AA18
  c->r[31]=c->r[3]|c->r[3]; // 8018AA1C
  c->lr=0x8018AA24u; f_80154410(c); // 8018AA20
  c->r[5]=0u+0x80000000u; // 8018AA24
  cmps(c,0,(int32_t)c->r[31],0); // 8018AA28
  c->r[4]=R8(c->r[5]+0x000030E3u); // 8018AA2C
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFBFu; // 8018AA30
  c->r[31]=rotl(c->r[4],26)&0x00000001u; // 8018AA34
  W8(c->r[5]+0x000030E3u,c->r[0]); // 8018AA38
  if (crb(c,2)) { goto L_8018AA4C; } // 8018AA3C
  c->r[0]=R8(c->r[5]+0x000030E3u); // 8018AA40
  c->r[0]=c->r[0]|0x00000040u; // 8018AA44
  W8(c->r[5]+0x000030E3u,c->r[0]); // 8018AA48
L_8018AA4C:;
  c->lr=0x8018AA50u; f_80154438(c); // 8018AA4C
  c->r[3]=c->r[31]|c->r[31]; // 8018AA50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018AA54
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018AA58
  c->lr=c->r[0]; // 8018AA5C
  c->r[1]=c->r[1]+0x00000010u; // 8018AA60
  return; // 8018AA64
}

// noAlloc
void f_8018AA68(Ctx* __restrict c) {
  trace_call(0x8018AA68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018AA68
  c->r[0]=c->lr; // 8018AA6C
  c->r[3]=0u+0x802E0000u; // 8018AA70
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018AA74
  c->r[3]=c->r[3]+0xFFFFC45Cu; // 8018AA78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018AA7C
  c->lr=0x8018AA84u; f_801987DC(c); // 8018AA80
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018AA84
  c->r[3]=0u+0x00000000u; // 8018AA88
  c->lr=c->r[0]; // 8018AA8C
  c->r[1]=c->r[1]+0x00000010u; // 8018AA90
  return; // 8018AA94
}

// noFree
void f_8018AA98(Ctx* __restrict c) {
  trace_call(0x8018AA98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018AA98
  c->r[0]=c->lr; // 8018AA9C
  c->r[3]=0u+0x802E0000u; // 8018AAA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018AAA4
  c->r[3]=c->r[3]+0xFFFFC478u; // 8018AAA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018AAAC
  c->lr=0x8018AAB4u; f_801987DC(c); // 8018AAB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018AAB4
  c->r[3]=0u+0x00000000u; // 8018AAB8
  c->lr=c->r[0]; // 8018AABC
  c->r[1]=c->r[1]+0x00000010u; // 8018AAC0
  return; // 8018AAC4
}

// fn_8018AAC8
void f_8018AAC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018AAC8
  c->r[0]=c->lr; // 8018AACC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018AAD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8018AAD4
  c->r[31]=c->r[3]|c->r[3]; // 8018AAD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8018AADC
  c->r[30]=c->r[4]|c->r[4]; // 8018AAE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8018AAE4
  c->r[29]=0u+0x00000000u; // 8018AAE8
  c->lr=0x8018AAF0u; f_8019F028(c); // 8018AAEC
  cmps(c,0,(int32_t)c->r[31],0); // 8018AAF0
  if (!crb(c,2)) { goto L_8018ADF0; } // 8018AAF4
  cmps(c,0,(int32_t)c->r[3],3); // 8018AAF8
  if (!crb(c,2)) { goto L_8018ADB0; } // 8018AAFC
  c->lr=0x8018AB04u; f_801A0778(c); // 8018AB00
  cmps(c,0,(int32_t)c->r[3],0); // 8018AB04
  if (crb(c,2)) { goto L_8018AB18; } // 8018AB08
  c->lr=0x8018AB10u; f_8019F300(c); // 8018AB0C
  c->r[29]=0u+0x00000000u; // 8018AB10
  goto L_8018ADF4; // 8018AB14
L_8018AB18:;
  cmps(c,0,(int32_t)c->r[30],4); // 8018AB18
  if (crb(c,2)) { goto L_8018ACF0; } // 8018AB1C
  if (!crb(c,0)) { goto L_8018AB3C; } // 8018AB20
  cmps(c,0,(int32_t)c->r[30],1); // 8018AB24
  if (crb(c,2)) { goto L_8018ACF0; } // 8018AB28
  if (!crb(c,0)) { goto L_8018AB70; } // 8018AB2C
  cmps(c,0,(int32_t)c->r[30],0); // 8018AB30
  if (!crb(c,0)) { goto L_8018AB4C; } // 8018AB34
  goto L_8018ADF4; // 8018AB38
L_8018AB3C:;
  cmps(c,0,(int32_t)c->r[30],6); // 8018AB3C
  if (crb(c,2)) { goto L_8018AD50; } // 8018AB40
  if (!crb(c,0)) { goto L_8018ADF4; } // 8018AB44
  goto L_8018ABFC; // 8018AB48
L_8018AB4C:;
  c->r[3]=0u+0x802E0000u; // 8018AB4C
  c->r[3]=c->r[3]+0xFFFFC494u; // 8018AB50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018AB54
  c->lr=0x8018AB5Cu; f_801987DC(c); // 8018AB58
  c->r[3]=0u+0x80190000u; // 8018AB5C
  c->r[4]=0u+0x80190000u; // 8018AB60
  c->r[3]=c->r[3]+0xFFFFAA68u; // 8018AB64
  c->r[4]=c->r[4]+0xFFFFAA98u; // 8018AB68
  c->lr=0x8018AB70u; f_8019EDB8(c); // 8018AB6C
L_8018AB70:;
  c->lr=0x8018AB74u; f_80154410(c); // 8018AB70
  c->r[0]=R8(c->r[13]+0xFFFFAFDDu); // 8018AB74
  c->r[30]=c->r[3]|c->r[3]; // 8018AB78
  cmps(c,0,(int32_t)c->r[0],0); // 8018AB7C
  if (crb(c,2)) { goto L_8018AB8C; } // 8018AB80
  c->lr=0x8018AB88u; f_80154438(c); // 8018AB84
  goto L_8018ABF4; // 8018AB88
L_8018AB8C:;
  c->r[0]=0u+0x00000001u; // 8018AB8C
  c->r[3]=0u+0x00000000u; // 8018AB90
  W8(c->r[13]+0xFFFFAFDDu,c->r[0]); // 8018AB94
  c->r[4]=0u+0x00000000u; // 8018AB98
  c->lr=0x8018ABA0u; f_8019F5DC(c); // 8018AB9C
  c->r[3]=0u+0x80470000u; // 8018ABA0
  c->r[31]=0u+0x0000000Au; // 8018ABA4
  c->r[3]=c->r[3]+0xFFFFD7F0u; // 8018ABA8
  c->r[29]=c->r[3]+0x000002BDu; // 8018ABAC
L_8018ABB0:;
  c->r[3]=c->r[29]|c->r[29]; // 8018ABB0
  c->r[4]=0u+0x00000000u; // 8018ABB4
  c->r[5]=0u+0x00000046u; // 8018ABB8
  c->lr=0x8018ABC0u; f_8000443C(c); // 8018ABBC
  c->r[31]=c->r[31]+0x00000001u; // 8018ABC0
  c->r[29]=c->r[29]+0x00000046u; // 8018ABC4
  cmps(c,0,(int32_t)c->r[31],14); // 8018ABC8
  if (crb(c,0)) { IRQCHK(c); goto L_8018ABB0; } // 8018ABCC
  c->r[3]=0u+0x80470000u; // 8018ABD0
  c->r[3]=c->r[3]+0xFFFF83A0u; // 8018ABD4
  c->lr=0x8018ABDCu; f_8014EB74(c); // 8018ABD8
  c->r[3]=0u+0x00000000u; // 8018ABDC
  c->lr=0x8018ABE4u; f_8019F524(c); // 8018ABE0
  c->r[3]=0u+0x00000000u; // 8018ABE4
  c->lr=0x8018ABECu; f_8019EE08(c); // 8018ABE8
  c->r[3]=c->r[30]|c->r[30]; // 8018ABEC
  c->lr=0x8018ABF4u; f_80154438(c); // 8018ABF0
L_8018ABF4:;
  c->r[29]=0u+0x00000000u; // 8018ABF4
  goto L_8018ADF4; // 8018ABF8
L_8018ABFC:;
  c->r[0]=R32(c->r[13]+0xFFFFAA44u); // 8018ABFC
  cmps(c,0,(int32_t)c->r[0],0); // 8018AC00
  if (crb(c,2)) { goto L_8018AC90; } // 8018AC04
  c->lr=0x8018AC0Cu; f_80154410(c); // 8018AC08
  c->r[0]=R8(c->r[13]+0xFFFFAFDDu); // 8018AC0C
  c->r[31]=c->r[3]|c->r[3]; // 8018AC10
  cmps(c,0,(int32_t)c->r[0],0); // 8018AC14
  if (crb(c,2)) { goto L_8018AC24; } // 8018AC18
  c->lr=0x8018AC20u; f_80154438(c); // 8018AC1C
  goto L_8018ACE8; // 8018AC20
L_8018AC24:;
  c->r[0]=0u+0x00000001u; // 8018AC24
  c->r[3]=0u+0x00000000u; // 8018AC28
  W8(c->r[13]+0xFFFFAFDDu,c->r[0]); // 8018AC2C
  c->r[4]=0u+0x00000000u; // 8018AC30
  c->lr=0x8018AC38u; f_8019F5DC(c); // 8018AC34
  c->r[3]=0u+0x80470000u; // 8018AC38
  c->r[30]=0u+0x0000000Au; // 8018AC3C
  c->r[3]=c->r[3]+0xFFFFD7F0u; // 8018AC40
  c->r[29]=c->r[3]+0x000002BDu; // 8018AC44
L_8018AC48:;
  c->r[3]=c->r[29]|c->r[29]; // 8018AC48
  c->r[4]=0u+0x00000000u; // 8018AC4C
  c->r[5]=0u+0x00000046u; // 8018AC50
  c->lr=0x8018AC58u; f_8000443C(c); // 8018AC54
  c->r[30]=c->r[30]+0x00000001u; // 8018AC58
  c->r[29]=c->r[29]+0x00000046u; // 8018AC5C
  cmps(c,0,(int32_t)c->r[30],14); // 8018AC60
  if (crb(c,0)) { IRQCHK(c); goto L_8018AC48; } // 8018AC64
  c->r[3]=0u+0x80470000u; // 8018AC68
  c->r[3]=c->r[3]+0xFFFF83A0u; // 8018AC6C
  c->lr=0x8018AC74u; f_8014EB74(c); // 8018AC70
  c->r[3]=0u+0x00000000u; // 8018AC74
  c->lr=0x8018AC7Cu; f_8019F524(c); // 8018AC78
  c->r[3]=0u+0x00000000u; // 8018AC7C
  c->lr=0x8018AC84u; f_8019EE08(c); // 8018AC80
  c->r[3]=c->r[31]|c->r[31]; // 8018AC84
  c->lr=0x8018AC8Cu; f_80154438(c); // 8018AC88
  goto L_8018ACE8; // 8018AC8C
L_8018AC90:;
  c->lr=0x8018AC94u; f_80154410(c); // 8018AC90
  c->r[0]=R32(c->r[13]+0xFFFFAFD0u); // 8018AC94
  c->r[30]=c->r[3]|c->r[3]; // 8018AC98
  cmps(c,0,(int32_t)c->r[0],0); // 8018AC9C
  if (!crb(c,2)) { goto L_8018ACAC; } // 8018ACA0
  c->lr=0x8018ACA8u; f_80154438(c); // 8018ACA4
  goto L_8018ACE8; // 8018ACA8
L_8018ACAC:;
  c->r[0]=R8(c->r[13]+0xFFFFAFDDu); // 8018ACAC
  cmps(c,0,(int32_t)c->r[0],0); // 8018ACB0
  if (crb(c,2)) { goto L_8018ACC0; } // 8018ACB4
  c->lr=0x8018ACBCu; f_80154438(c); // 8018ACB8
  goto L_8018ACE8; // 8018ACBC
L_8018ACC0:;
  c->r[0]=0u+0x00000001u; // 8018ACC0
  c->r[3]=0u+0x802E0000u; // 8018ACC4
  W8(c->r[13]+0xFFFFAFDDu,c->r[0]); // 8018ACC8
  c->r[3]=c->r[3]+0xFFFFC4C4u; // 8018ACCC
  c->r[4]=R32(c->r[13]+0xFFFFAFD4u); // 8018ACD0
  W32(c->r[13]+0xFFFF9324u,c->r[0]); // 8018ACD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018ACD8
  c->lr=0x8018ACE0u; f_801987DC(c); // 8018ACDC
  c->r[3]=c->r[30]|c->r[30]; // 8018ACE0
  c->lr=0x8018ACE8u; f_80154438(c); // 8018ACE4
L_8018ACE8:;
  c->r[29]=0u+0x00000000u; // 8018ACE8
  goto L_8018ADF4; // 8018ACEC
L_8018ACF0:;
  c->lr=0x8018ACF4u; f_80154410(c); // 8018ACF0
  c->r[0]=R32(c->r[13]+0xFFFFAFD0u); // 8018ACF4
  c->r[30]=c->r[3]|c->r[3]; // 8018ACF8
  cmps(c,0,(int32_t)c->r[0],0); // 8018ACFC
  if (!crb(c,2)) { goto L_8018AD0C; } // 8018AD00
  c->lr=0x8018AD08u; f_80154438(c); // 8018AD04
  goto L_8018AD48; // 8018AD08
L_8018AD0C:;
  c->r[0]=R8(c->r[13]+0xFFFFAFDDu); // 8018AD0C
  cmps(c,0,(int32_t)c->r[0],0); // 8018AD10
  if (crb(c,2)) { goto L_8018AD20; } // 8018AD14
  c->lr=0x8018AD1Cu; f_80154438(c); // 8018AD18
  goto L_8018AD48; // 8018AD1C
L_8018AD20:;
  c->r[0]=0u+0x00000001u; // 8018AD20
  c->r[3]=0u+0x802E0000u; // 8018AD24
  W8(c->r[13]+0xFFFFAFDDu,c->r[0]); // 8018AD28
  c->r[3]=c->r[3]+0xFFFFC4C4u; // 8018AD2C
  c->r[4]=R32(c->r[13]+0xFFFFAFD4u); // 8018AD30
  W32(c->r[13]+0xFFFF9324u,c->r[0]); // 8018AD34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018AD38
  c->lr=0x8018AD40u; f_801987DC(c); // 8018AD3C
  c->r[3]=c->r[30]|c->r[30]; // 8018AD40
  c->lr=0x8018AD48u; f_80154438(c); // 8018AD44
L_8018AD48:;
  c->r[29]=0u+0x00000000u; // 8018AD48
  goto L_8018ADF4; // 8018AD4C
L_8018AD50:;
  c->lr=0x8018AD54u; f_80154410(c); // 8018AD50
  c->r[0]=R32(c->r[13]+0xFFFFAFD0u); // 8018AD54
  c->r[30]=c->r[3]|c->r[3]; // 8018AD58
  cmps(c,0,(int32_t)c->r[0],0); // 8018AD5C
  if (!crb(c,2)) { goto L_8018AD6C; } // 8018AD60
  c->lr=0x8018AD68u; f_80154438(c); // 8018AD64
  goto L_8018ADA8; // 8018AD68
L_8018AD6C:;
  c->r[0]=R8(c->r[13]+0xFFFFAFDDu); // 8018AD6C
  cmps(c,0,(int32_t)c->r[0],0); // 8018AD70
  if (crb(c,2)) { goto L_8018AD80; } // 8018AD74
  c->lr=0x8018AD7Cu; f_80154438(c); // 8018AD78
  goto L_8018ADA8; // 8018AD7C
L_8018AD80:;
  c->r[0]=0u+0x00000001u; // 8018AD80
  c->r[3]=0u+0x802E0000u; // 8018AD84
  W8(c->r[13]+0xFFFFAFDDu,c->r[0]); // 8018AD88
  c->r[3]=c->r[3]+0xFFFFC4C4u; // 8018AD8C
  c->r[4]=R32(c->r[13]+0xFFFFAFD4u); // 8018AD90
  W32(c->r[13]+0xFFFF9324u,c->r[0]); // 8018AD94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018AD98
  c->lr=0x8018ADA0u; f_801987DC(c); // 8018AD9C
  c->r[3]=c->r[30]|c->r[30]; // 8018ADA0
  c->lr=0x8018ADA8u; f_80154438(c); // 8018ADA4
L_8018ADA8:;
  c->r[29]=0u+0x00000000u; // 8018ADA8
  goto L_8018ADF4; // 8018ADAC
L_8018ADB0:;
  cmps(c,0,(int32_t)c->r[3],5); // 8018ADB0
  if (!crb(c,2)) { goto L_8018ADC4; } // 8018ADB4
  c->lr=0x8018ADBCu; f_8019F3A0(c); // 8018ADB8
  c->r[29]=0u+0x00000000u; // 8018ADBC
  goto L_8018ADF4; // 8018ADC0
L_8018ADC4:;
  cmps(c,0,(int32_t)c->r[3],4); // 8018ADC4
  if (crb(c,2)) { goto L_8018ADD8; } // 8018ADC8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018ADCC
  cmpu(c,0,c->r[0],0x00000001u); // 8018ADD0
  if (crb(c,1)) { goto L_8018ADE0; } // 8018ADD4
L_8018ADD8:;
  c->r[29]=0u+0x00000000u; // 8018ADD8
  goto L_8018ADF4; // 8018ADDC
L_8018ADE0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8018ADE0
  if (!crb(c,2)) { goto L_8018ADF4; } // 8018ADE4
  c->r[29]=0u+0x00000001u; // 8018ADE8
  goto L_8018ADF4; // 8018ADEC
L_8018ADF0:;
  c->r[29]=0u+0x00000001u; // 8018ADF0
L_8018ADF4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018ADF4
  c->r[3]=c->r[29]|c->r[29]; // 8018ADF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018ADFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8018AE00
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018AE04
  c->lr=c->r[0]; // 8018AE08
  c->r[1]=c->r[1]+0x00000020u; // 8018AE0C
  return; // 8018AE10
}

// WPADiSendData
void f_8018AE14(Ctx* __restrict c) {
  trace_call(0x8018AE14u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018AE14
  c->r[0]=c->lr; // 8018AE18
  W32(c->r[1]+0x00000064u,c->r[0]); // 8018AE1C
  c->r[11]=c->r[1]+0x00000060u; // 8018AE20
  c->lr=0x8018AE28u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018AE24
  c->r[31]=0u+0x80470000u; // 8018AE28
  c->r[30]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018AE2C
  c->r[31]=c->r[31]+0xFFFF83D0u; // 8018AE30
  c->r[26]=c->r[3]|c->r[3]; // 8018AE34
  c->r[29]=R32(c->r[31]+c->r[30]); // 8018AE38
  c->r[24]=c->r[4]|c->r[4]; // 8018AE3C
  c->lr=0x8018AE44u; f_80154410(c); // 8018AE40
  c->r[28]=R32(c->r[29]+0x000008BCu); // 8018AE44
  c->lr=0x8018AE4Cu; f_80154438(c); // 8018AE48
  cmps(c,0,(int32_t)c->r[28],0); // 8018AE4C
  if (!crb(c,2)) { goto L_8018AEE0; } // 8018AE50
  c->lr=0x8018AE58u; f_80154410(c); // 8018AE54
  c->r[25]=R8(c->r[29]+0x000008C0u); // 8018AE58
  c->lr=0x8018AE60u; f_80154438(c); // 8018AE5C
  cmps(c,0,(int32_t)c->r[25],0); // 8018AE60
  if (crb(c,2)) { goto L_8018AE70; } // 8018AE64
  c->r[28]=0u+0xFFFFFFFEu; // 8018AE68
  goto L_8018AF00; // 8018AE6C
L_8018AE70:;
  c->r[25]=R32(c->r[24]+0x00000000u); // 8018AE70
  c->r[3]=c->r[26]|c->r[26]; // 8018AE74
  c->r[26]=R32(c->r[24]+0x00000004u); // 8018AE78
  c->r[4]=c->r[1]+0x00000010u; // 8018AE7C
  c->r[27]=R32(c->r[24]+0x00000008u); // 8018AE80
  c->r[12]=R32(c->r[24]+0x0000000Cu); // 8018AE84
  c->r[11]=R32(c->r[24]+0x00000010u); // 8018AE88
  c->r[10]=R32(c->r[24]+0x00000014u); // 8018AE8C
  c->r[9]=R32(c->r[24]+0x00000018u); // 8018AE90
  c->r[8]=R32(c->r[24]+0x0000001Cu); // 8018AE94
  c->r[7]=R32(c->r[24]+0x00000020u); // 8018AE98
  c->r[6]=R32(c->r[24]+0x00000024u); // 8018AE9C
  c->r[5]=R32(c->r[24]+0x00000028u); // 8018AEA0
  c->r[0]=R32(c->r[24]+0x0000002Cu); // 8018AEA4
  W32(c->r[1]+0x00000010u,c->r[25]); // 8018AEA8
  W32(c->r[1]+0x00000014u,c->r[26]); // 8018AEAC
  W32(c->r[1]+0x00000018u,c->r[27]); // 8018AEB0
  W32(c->r[1]+0x0000001Cu,c->r[12]); // 8018AEB4
  W32(c->r[1]+0x00000020u,c->r[11]); // 8018AEB8
  W32(c->r[1]+0x00000024u,c->r[10]); // 8018AEBC
  W32(c->r[1]+0x00000028u,c->r[9]); // 8018AEC0
  W32(c->r[1]+0x0000002Cu,c->r[8]); // 8018AEC4
  W32(c->r[1]+0x00000030u,c->r[7]); // 8018AEC8
  W32(c->r[1]+0x00000034u,c->r[6]); // 8018AECC
  W32(c->r[1]+0x00000038u,c->r[5]); // 8018AED0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8018AED4
  c->lr=0x8018AEDCu; f_801918C8(c); // 8018AED8
  goto L_8018AF00; // 8018AEDC
L_8018AEE0:;
  cmps(c,0,(int32_t)c->r[28],-2); // 8018AEE0
  if (crb(c,2)) { goto L_8018AF00; } // 8018AEE4
  cmps(c,0,(int32_t)c->r[28],-3); // 8018AEE8
  if (!crb(c,2)) { goto L_8018AF00; } // 8018AEEC
  c->lr=0x8018AEF4u; f_80154410(c); // 8018AEF0
  c->r[0]=0u+0x00000000u; // 8018AEF4
  W32(c->r[29]+0x000008BCu,c->r[0]); // 8018AEF8
  c->lr=0x8018AF00u; f_80154438(c); // 8018AEFC
L_8018AF00:;
  cmps(c,0,(int32_t)c->r[28],-2); // 8018AF00
  if (!crb(c,2)) { goto L_8018AFD4; } // 8018AF04
  c->lr=0x8018AF0Cu; f_801584AC(c); // 8018AF08
  c->r[6]=R32(c->r[29]+0x0000090Cu); // 8018AF0C
  c->r[5]=0u+0x80000000u; // 8018AF10
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8018AF14
  c->r[5]=0u+0x00000000u; // 8018AF18
  c->r[4]=addc(c,~c->r[6],c->r[4],1); // 8018AF1C
  c->r[7]=R32(c->r[29]+0x00000908u); // 8018AF20
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8018AF24
  c->r[3]=addc(c,~c->r[7],c->r[3],c->xer_ca); // 8018AF28
  c->lr=0x8018AF30u; f_80252CF4(c); // 8018AF2C
  cmps(c,0,(int32_t)c->r[4],1); // 8018AF30
  if (!crb(c,1)) { goto L_8018AFD4; } // 8018AF34
  c->r[0]=R8(c->r[13]+0xFFFFAFF2u); // 8018AF38
  cmps(c,0,(int32_t)c->r[0],0); // 8018AF3C
  if (crb(c,2)) { goto L_8018AFD4; } // 8018AF40
  c->r[0]=R8(c->r[29]+0x00000910u); // 8018AF44
  cmps(c,0,(int32_t)c->r[0],0); // 8018AF48
  if (!crb(c,2)) { goto L_8018AFC4; } // 8018AF4C
  c->lr=0x8018AF54u; f_801584AC(c); // 8018AF50
  W32(c->r[29]+0x0000090Cu,c->r[4]); // 8018AF54
  W32(c->r[29]+0x00000908u,c->r[3]); // 8018AF58
  c->r[25]=R32(c->r[31]+c->r[30]); // 8018AF5C
  c->lr=0x8018AF64u; f_80154410(c); // 8018AF60
  c->r[25]=R32(c->r[25]+0x000008BCu); // 8018AF64
  c->lr=0x8018AF6Cu; f_80154438(c); // 8018AF68
  cmps(c,0,(int32_t)c->r[25],-1); // 8018AF6C
  if (crb(c,2)) { goto L_8018AFD4; } // 8018AF70
  c->r[25]=R32(c->r[31]+c->r[30]); // 8018AF74
  c->lr=0x8018AF7Cu; f_80154410(c); // 8018AF78
  c->r[25]=R8(c->r[25]+0x000008C3u); // 8018AF7C
  c->lr=0x8018AF84u; f_80154438(c); // 8018AF80
  c->r[3]=c->r[25]|c->r[25]; // 8018AF84
  c->lr=0x8018AF8Cu; f_801A16EC(c); // 8018AF88
  cmps(c,0,(int32_t)c->r[3],0); // 8018AF8C
  if (crb(c,2)) { goto L_8018AFA8; } // 8018AF90
  c->r[4]=c->r[3]|c->r[3]; // 8018AF94
  c->r[3]=c->r[1]+0x00000008u; // 8018AF98
  c->r[5]=0u+0x00000006u; // 8018AF9C
  c->lr=0x8018AFA4u; f_80004338(c); // 8018AFA0
  goto L_8018AFB8; // 8018AFA4
L_8018AFA8:;
  c->r[3]=c->r[1]+0x00000008u; // 8018AFA8
  c->r[4]=0u+0x00000000u; // 8018AFAC
  c->r[5]=0u+0x00000006u; // 8018AFB0
  c->lr=0x8018AFB8u; f_8000443C(c); // 8018AFB4
L_8018AFB8:;
  c->r[3]=c->r[1]+0x00000008u; // 8018AFB8
  c->lr=0x8018AFC0u; f_801ACE70(c); // 8018AFBC
  goto L_8018AFD4; // 8018AFC0
L_8018AFC4:;
  c->lr=0x8018AFC8u; f_80154410(c); // 8018AFC4
  c->r[0]=0u+0xFFFFFFFDu; // 8018AFC8
  W32(c->r[29]+0x000008BCu,c->r[0]); // 8018AFCC
  c->lr=0x8018AFD4u; f_80154438(c); // 8018AFD0
L_8018AFD4:;
  c->r[11]=c->r[1]+0x00000060u; // 8018AFD4
  c->r[3]=c->r[28]|c->r[28]; // 8018AFD8
  c->lr=0x8018AFE0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018AFDC
  c->r[0]=R32(c->r[1]+0x00000064u); // 8018AFE0
  c->lr=c->r[0]; // 8018AFE4
  c->r[1]=c->r[1]+0x00000060u; // 8018AFE8
  return; // 8018AFEC
}

// WPADiRadioSensitivity
void f_8018AFF0(Ctx* __restrict c) {
  trace_call(0x8018AFF0u);
  c->r[5]=0u+0x80470000u; // 8018AFF0
  c->r[4]=0u+0x66660000u; // 8018AFF4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018AFF8
  c->r[0]=0u+0x00000064u; // 8018AFFC
  c->r[5]=c->r[5]+0xFFFF83D0u; // 8018B000
  c->r[4]=c->r[4]+0x00006667u; // 8018B004
  c->r[7]=R32(c->r[5]+c->r[3]); // 8018B008
  c->r[3]=R16(c->r[7]+0x00000984u); // 8018B00C
  c->r[6]=R8(c->r[7]+0x00000983u); // 8018B010
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 8018B014
  c->r[5]=rotl(c->r[6],3)&0xFFFFFFF8u; // 8018B018
  c->r[5]=c->r[5]+c->r[6]; // 8018B01C
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 8018B020
  c->r[3]=rotl(c->r[3],31)&0x0000FFFFu; // 8018B024
  c->r[5]=c->r[5]+c->r[3]; // 8018B028
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 8018B02C
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[3])>>32); // 8018B030
  c->r[3]=sraw(c,c->r[3],2); // 8018B034
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 8018B038
  c->r[3]=c->r[3]+c->r[4]; // 8018B03C
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; // 8018B040
  cmpu(c,0,c->r[5],0x00000064u); // 8018B044
  if (crb(c,1)) { goto L_8018B050; } // 8018B048
  c->r[0]=c->r[5]|c->r[5]; // 8018B04C
L_8018B050:;
  W8(c->r[7]+0x00000983u,c->r[0]); // 8018B050
  c->r[4]=0u+0x00000000u; // 8018B054
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8018B058
  W16(c->r[7]+0x00000984u,c->r[4]); // 8018B05C
  c->r[0]=R8(c->r[7]+0x000008CDu); // 8018B060
  cmps(c,0,(int32_t)c->r[0],0); // 8018B064
  if (crb(c,2)) { goto L_8018B0AC; } // 8018B068
  cmpu(c,0,c->r[3],0x00000055u); // 8018B06C
  if (!crb(c,1)) { goto L_8018B080; } // 8018B070
  W8(c->r[7]+0x000008CDu,c->r[4]); // 8018B074
  W8(c->r[7]+0x000008CEu,c->r[4]); // 8018B078
  return; // 8018B07C
L_8018B080:;
  cmpu(c,0,c->r[3],0x00000050u); // 8018B080
  if (!crb(c,1)) return; // 8018B084
  c->r[3]=R8(c->r[7]+0x000008CEu); // 8018B088
  c->r[3]=c->r[3]+0x00000001u; // 8018B08C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8018B090
  W8(c->r[7]+0x000008CEu,c->r[3]); // 8018B094
  cmpu(c,0,c->r[0],0x00000014u); // 8018B098
  if (crb(c,0)) return; // 8018B09C
  W8(c->r[7]+0x000008CDu,c->r[4]); // 8018B0A0
  W8(c->r[7]+0x000008CEu,c->r[4]); // 8018B0A4
  return; // 8018B0A8
L_8018B0AC:;
  cmpu(c,0,c->r[3],0x0000004Bu); // 8018B0AC
  if (!crb(c,0)) { goto L_8018B0C4; } // 8018B0B0
  c->r[0]=0u+0x00000001u; // 8018B0B4
  W8(c->r[7]+0x000008CDu,c->r[0]); // 8018B0B8
  W8(c->r[7]+0x000008CEu,c->r[4]); // 8018B0BC
  return; // 8018B0C0
L_8018B0C4:;
  cmpu(c,0,c->r[3],0x00000050u); // 8018B0C4
  if (!crb(c,0)) return; // 8018B0C8
  c->r[3]=R8(c->r[7]+0x000008CEu); // 8018B0CC
  c->r[3]=c->r[3]+0x00000001u; // 8018B0D0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8018B0D4
  W8(c->r[7]+0x000008CEu,c->r[3]); // 8018B0D8
  cmpu(c,0,c->r[0],0x00000001u); // 8018B0DC
  if (crb(c,0)) return; // 8018B0E0
  c->r[0]=0u+0x00000001u; // 8018B0E4
  W8(c->r[7]+0x000008CDu,c->r[0]); // 8018B0E8
  W8(c->r[7]+0x000008CEu,c->r[4]); // 8018B0EC
  return; // 8018B0F0
}

// IsControllerDataChanged
void f_8018B0F4(Ctx* __restrict c) {
  trace_call(0x8018B0F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018B0F4
  c->r[0]=c->lr; // 8018B0F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018B0FC
  c->r[11]=c->r[1]+0x00000020u; // 8018B100
  c->lr=0x8018B108u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018B104
  c->r[6]=R32(c->r[3]+0x000008B8u); // 8018B108
  c->r[8]=R8(c->r[3]+0x000008C2u); // 8018B10C
  cmpu(c,0,c->r[6],0x00000002u); // 8018B110
  if (crb(c,1)) { goto L_8018B328; } // 8018B114
  c->r[0]=R8(c->r[4]+0x00000029u); // 8018B118
  c->r[8]=R16(c->r[4]+0x00000000u); // 8018B11C
  c->r[7]=R16(c->r[5]+0x00000000u); // 8018B120
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018B124
  c->r[6]=c->r[7]-c->r[8]; // 8018B128
  c->r[0]=c->r[8]-c->r[7]; // 8018B12C
  c->r[0]=c->r[6]|c->r[0]; // 8018B130
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8018B134
  if (!crb(c,2)) { goto L_8018BC84; } // 8018B138
  c->r[6]=R8(c->r[5]+0x00000029u); // 8018B13C
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[6]); // 8018B140
  if (!crb(c,2)) { goto L_8018BC84; } // 8018B144
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000004u); // 8018B148
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 8018B14C
  c->r[10]=c->r[6]-c->r[7]; cr0(c,c->r[10]); // 8018B150
  if (!crb(c,0)) { goto L_8018B15C; } // 8018B154
  c->r[10]=c->r[7]-c->r[6]; // 8018B158
L_8018B15C:;
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 8018B15C
  c->r[6]=c->r[10]^0x0000000Cu; // 8018B160
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 8018B164
  c->r[7]=sraw(c,c->r[6],1); // 8018B168
  c->r[6]=c->r[6]&c->r[10]; // 8018B16C
  c->r[6]=c->r[7]-c->r[6]; // 8018B170
  c->r[11]=c->r[8]-c->r[9]; cr0(c,c->r[11]); // 8018B174
  c->r[10]=rotl(c->r[6],1)&0x00000001u; // 8018B178
  if (!crb(c,0)) { goto L_8018B184; } // 8018B17C
  c->r[11]=c->r[9]-c->r[8]; // 8018B180
L_8018B184:;
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000006u); // 8018B184
  c->r[6]=c->r[11]^0x0000000Cu; // 8018B188
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 8018B18C
  c->r[7]=sraw(c,c->r[6],1); // 8018B190
  c->r[6]=c->r[6]&c->r[11]; // 8018B194
  c->r[6]=c->r[7]-c->r[6]; // 8018B198
  c->r[11]=c->r[8]-c->r[9]; cr0(c,c->r[11]); // 8018B19C
  c->r[6]=rotl(c->r[6],1)&0x00000001u; // 8018B1A0
  if (!crb(c,0)) { goto L_8018B1AC; } // 8018B1A4
  c->r[11]=c->r[9]-c->r[8]; // 8018B1A8
L_8018B1AC:;
  c->r[7]=c->r[11]^0x0000000Cu; // 8018B1AC
  c->r[6]=c->r[6]|c->r[10]; // 8018B1B0
  c->r[8]=sraw(c,c->r[7],1); // 8018B1B4
  c->r[7]=c->r[7]&c->r[11]; // 8018B1B8
  c->r[7]=c->r[8]-c->r[7]; // 8018B1BC
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 8018B1C0
  c->r[6]=c->r[7]|c->r[6]; cr0(c,c->r[6]); // 8018B1C4
  if (crb(c,2)) { goto L_8018B200; } // 8018B1C8
  c->r[6]=R16(c->r[3]+0x000008FCu); // 8018B1CC
  c->r[6]=c->r[6]+0x00000001u; // 8018B1D0
  W16(c->r[3]+0x000008FCu,c->r[6]); // 8018B1D4
  c->r[7]=rotl(c->r[6],0)&0x0000FFFFu; // 8018B1D8
  c->r[6]=R16(c->r[13]+0xFFFF9328u); // 8018B1DC
  cmpu(c,0,c->r[7],c->r[6]); // 8018B1E0
  if (!crb(c,1)) { goto L_8018B244; } // 8018B1E4
  c->r[6]=0u+0x00000000u; // 8018B1E8
  c->r[0]=c->r[0]|0x00000001u; // 8018B1EC
  W16(c->r[3]+0x000008FCu,c->r[6]); // 8018B1F0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018B1F4
  W16(c->r[3]+0x000008FEu,c->r[6]); // 8018B1F8
  goto L_8018B244; // 8018B1FC
L_8018B200:;
  c->r[6]=R16(c->r[3]+0x000008FEu); // 8018B200
  c->r[7]=R16(c->r[13]+0xFFFF932Cu); // 8018B204
  c->r[8]=c->r[6]+0x00000001u; // 8018B208
  c->r[6]=divw((int32_t)c->r[8],(int32_t)c->r[7]); // 8018B20C
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 8018B210
  c->r[6]=c->r[8]-c->r[6]; // 8018B214
  W16(c->r[3]+0x000008FEu,c->r[6]); // 8018B218
  c->r[7]=rotl(c->r[6],0)&0x0000FFFFu; // 8018B21C
  c->r[6]=R16(c->r[13]+0xFFFF932Cu); // 8018B220
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8018B224
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 8018B228
  if (!crb(c,2)) { goto L_8018B244; } // 8018B22C
  c->r[6]=R16(c->r[3]+0x000008FCu); // 8018B230
  cmps(c,0,(int32_t)c->r[6],0); // 8018B234
  if (crb(c,2)) { goto L_8018B244; } // 8018B238
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8018B23C
  W16(c->r[3]+0x000008FCu,c->r[6]); // 8018B240
L_8018B244:;
  c->r[6]=0u+0x00000004u; // 8018B244
  c->r[9]=0u+0x00000000u; // 8018B248
  c->ctr=c->r[6]; // 8018B24C
L_8018B250:;
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000000Au); // 8018B250
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000000Au); // 8018B254
  c->r[11]=c->r[6]-c->r[7]; cr0(c,c->r[11]); // 8018B258
  if (!crb(c,0)) { goto L_8018B264; } // 8018B25C
  c->r[11]=c->r[7]-c->r[6]; // 8018B260
L_8018B264:;
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000008u); // 8018B264
  c->r[6]=c->r[11]^0x00000002u; // 8018B268
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000008u); // 8018B26C
  c->r[7]=sraw(c,c->r[6],1); // 8018B270
  c->r[6]=c->r[6]&c->r[11]; // 8018B274
  c->r[6]=c->r[7]-c->r[6]; // 8018B278
  c->r[12]=c->r[8]-c->r[10]; cr0(c,c->r[12]); // 8018B27C
  c->r[11]=rotl(c->r[6],1)&0x00000001u; // 8018B280
  if (!crb(c,0)) { goto L_8018B28C; } // 8018B284
  c->r[12]=c->r[10]-c->r[8]; // 8018B288
L_8018B28C:;
  c->r[6]=c->r[12]^0x00000002u; // 8018B28C
  c->r[7]=sraw(c,c->r[6],1); // 8018B290
  c->r[6]=c->r[6]&c->r[12]; // 8018B294
  c->r[6]=c->r[7]-c->r[6]; // 8018B298
  c->r[6]=rotl(c->r[6],1)&0x00000001u; // 8018B29C
  c->r[6]=c->r[6]|c->r[11]; cr0(c,c->r[6]); // 8018B2A0
  if (crb(c,2)) { goto L_8018B2D4; } // 8018B2A4
  c->r[6]=R16(c->r[3]+0x000008F8u); // 8018B2A8
  c->r[6]=c->r[6]+0x00000001u; // 8018B2AC
  W16(c->r[3]+0x000008F8u,c->r[6]); // 8018B2B0
  c->r[7]=rotl(c->r[6],0)&0x0000FFFFu; // 8018B2B4
  c->r[6]=R16(c->r[13]+0xFFFF932Au); // 8018B2B8
  cmpu(c,0,c->r[7],c->r[6]); // 8018B2BC
  if (!crb(c,1)) { goto L_8018B318; } // 8018B2C0
  c->r[0]=c->r[0]|0x00000001u; // 8018B2C4
  W16(c->r[3]+0x000008F8u,c->r[9]); // 8018B2C8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018B2CC
  goto L_8018B318; // 8018B2D0
L_8018B2D4:;
  c->r[6]=R16(c->r[3]+0x000008FAu); // 8018B2D4
  c->r[7]=R16(c->r[13]+0xFFFF932Eu); // 8018B2D8
  c->r[8]=c->r[6]+0x00000001u; // 8018B2DC
  c->r[6]=divw((int32_t)c->r[8],(int32_t)c->r[7]); // 8018B2E0
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 8018B2E4
  c->r[6]=c->r[8]-c->r[6]; // 8018B2E8
  W16(c->r[3]+0x000008FAu,c->r[6]); // 8018B2EC
  c->r[7]=rotl(c->r[6],0)&0x0000FFFFu; // 8018B2F0
  c->r[6]=R16(c->r[13]+0xFFFF932Eu); // 8018B2F4
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8018B2F8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 8018B2FC
  if (!crb(c,2)) { goto L_8018B318; } // 8018B300
  c->r[6]=R16(c->r[3]+0x000008F8u); // 8018B304
  cmps(c,0,(int32_t)c->r[6],0); // 8018B308
  if (crb(c,2)) { goto L_8018B318; } // 8018B30C
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8018B310
  W16(c->r[3]+0x000008F8u,c->r[6]); // 8018B314
L_8018B318:;
  c->r[5]=c->r[5]+0x00000008u; // 8018B318
  c->r[4]=c->r[4]+0x00000008u; // 8018B31C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018B250; } // 8018B320
  goto L_8018BC84; // 8018B324
L_8018B328:;
  c->r[0]=c->r[6]+0xFFFFFFFDu; // 8018B328
  cmpu(c,0,c->r[0],0x00000002u); // 8018B32C
  if (crb(c,1)) { goto L_8018B6B0; } // 8018B330
  c->r[0]=R8(c->r[4]+0x00000029u); // 8018B334
  c->r[6]=c->r[4]|c->r[4]; // 8018B338
  c->r[10]=R16(c->r[4]+0x00000000u); // 8018B33C
  c->r[7]=c->r[5]|c->r[5]; // 8018B340
  c->r[9]=R16(c->r[5]+0x00000000u); // 8018B344
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018B348
  c->r[8]=c->r[9]-c->r[10]; // 8018B34C
  c->r[0]=c->r[10]-c->r[9]; // 8018B350
  c->r[0]=c->r[8]|c->r[0]; // 8018B354
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8018B358
  if (!crb(c,2)) { goto L_8018BC84; } // 8018B35C
  c->r[8]=R8(c->r[5]+0x00000029u); // 8018B360
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; cr0(c,c->r[8]); // 8018B364
  if (!crb(c,2)) { goto L_8018BC84; } // 8018B368
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000004u); // 8018B36C
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 8018B370
  c->r[12]=c->r[8]-c->r[9]; cr0(c,c->r[12]); // 8018B374
  if (!crb(c,0)) { goto L_8018B380; } // 8018B378
  c->r[12]=c->r[9]-c->r[8]; // 8018B37C
L_8018B380:;
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 8018B380
  c->r[8]=c->r[12]^0x0000000Cu; // 8018B384
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 8018B388
  c->r[9]=sraw(c,c->r[8],1); // 8018B38C
  c->r[8]=c->r[8]&c->r[12]; // 8018B390
  c->r[8]=c->r[9]-c->r[8]; // 8018B394
  c->r[28]=c->r[10]-c->r[11]; cr0(c,c->r[28]); // 8018B398
  c->r[12]=rotl(c->r[8],1)&0x00000001u; // 8018B39C
  if (!crb(c,0)) { goto L_8018B3A8; } // 8018B3A0
  c->r[28]=c->r[11]-c->r[10]; // 8018B3A4
L_8018B3A8:;
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000006u); // 8018B3A8
  c->r[8]=c->r[28]^0x0000000Cu; // 8018B3AC
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 8018B3B0
  c->r[9]=sraw(c,c->r[8],1); // 8018B3B4
  c->r[8]=c->r[8]&c->r[28]; // 8018B3B8
  c->r[8]=c->r[9]-c->r[8]; // 8018B3BC
  c->r[28]=c->r[10]-c->r[11]; cr0(c,c->r[28]); // 8018B3C0
  c->r[8]=rotl(c->r[8],1)&0x00000001u; // 8018B3C4
  if (!crb(c,0)) { goto L_8018B3D0; } // 8018B3C8
  c->r[28]=c->r[11]-c->r[10]; // 8018B3CC
L_8018B3D0:;
  c->r[9]=c->r[28]^0x0000000Cu; // 8018B3D0
  c->r[8]=c->r[8]|c->r[12]; // 8018B3D4
  c->r[10]=sraw(c,c->r[9],1); // 8018B3D8
  c->r[9]=c->r[9]&c->r[28]; // 8018B3DC
  c->r[9]=c->r[10]-c->r[9]; // 8018B3E0
  c->r[9]=rotl(c->r[9],1)&0x00000001u; // 8018B3E4
  c->r[8]=c->r[9]|c->r[8]; cr0(c,c->r[8]); // 8018B3E8
  if (crb(c,2)) { goto L_8018B424; } // 8018B3EC
  c->r[8]=R16(c->r[3]+0x000008FCu); // 8018B3F0
  c->r[8]=c->r[8]+0x00000001u; // 8018B3F4
  W16(c->r[3]+0x000008FCu,c->r[8]); // 8018B3F8
  c->r[9]=rotl(c->r[8],0)&0x0000FFFFu; // 8018B3FC
  c->r[8]=R16(c->r[13]+0xFFFF9328u); // 8018B400
  cmpu(c,0,c->r[9],c->r[8]); // 8018B404
  if (!crb(c,1)) { goto L_8018B468; } // 8018B408
  c->r[8]=0u+0x00000000u; // 8018B40C
  c->r[0]=c->r[0]|0x00000001u; // 8018B410
  W16(c->r[3]+0x000008FCu,c->r[8]); // 8018B414
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018B418
  W16(c->r[3]+0x000008FEu,c->r[8]); // 8018B41C
  goto L_8018B468; // 8018B420
L_8018B424:;
  c->r[8]=R16(c->r[3]+0x000008FEu); // 8018B424
  c->r[9]=R16(c->r[13]+0xFFFF932Cu); // 8018B428
  c->r[10]=c->r[8]+0x00000001u; // 8018B42C
  c->r[8]=divw((int32_t)c->r[10],(int32_t)c->r[9]); // 8018B430
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[9]); // 8018B434
  c->r[8]=c->r[10]-c->r[8]; // 8018B438
  W16(c->r[3]+0x000008FEu,c->r[8]); // 8018B43C
  c->r[9]=rotl(c->r[8],0)&0x0000FFFFu; // 8018B440
  c->r[8]=R16(c->r[13]+0xFFFF932Cu); // 8018B444
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 8018B448
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[8]); // 8018B44C
  if (!crb(c,2)) { goto L_8018B468; } // 8018B450
  c->r[8]=R16(c->r[3]+0x000008FCu); // 8018B454
  cmps(c,0,(int32_t)c->r[8],0); // 8018B458
  if (crb(c,2)) { goto L_8018B468; } // 8018B45C
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 8018B460
  W16(c->r[3]+0x000008FCu,c->r[8]); // 8018B464
L_8018B468:;
  c->r[8]=0u+0x00000004u; // 8018B468
  c->r[11]=0u+0x00000000u; // 8018B46C
  c->ctr=c->r[8]; // 8018B470
L_8018B474:;
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x0000000Au); // 8018B474
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x0000000Au); // 8018B478
  c->r[28]=c->r[8]-c->r[9]; cr0(c,c->r[28]); // 8018B47C
  if (!crb(c,0)) { goto L_8018B488; } // 8018B480
  c->r[28]=c->r[9]-c->r[8]; // 8018B484
L_8018B488:;
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000008u); // 8018B488
  c->r[8]=c->r[28]^0x00000002u; // 8018B48C
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000008u); // 8018B490
  c->r[9]=sraw(c,c->r[8],1); // 8018B494
  c->r[8]=c->r[8]&c->r[28]; // 8018B498
  c->r[8]=c->r[9]-c->r[8]; // 8018B49C
  c->r[28]=c->r[10]-c->r[12]; cr0(c,c->r[28]); // 8018B4A0
  c->r[29]=rotl(c->r[8],1)&0x00000001u; // 8018B4A4
  if (!crb(c,0)) { goto L_8018B4B0; } // 8018B4A8
  c->r[28]=c->r[12]-c->r[10]; // 8018B4AC
L_8018B4B0:;
  c->r[8]=c->r[28]^0x00000002u; // 8018B4B0
  c->r[9]=sraw(c,c->r[8],1); // 8018B4B4
  c->r[8]=c->r[8]&c->r[28]; // 8018B4B8
  c->r[8]=c->r[9]-c->r[8]; // 8018B4BC
  c->r[8]=rotl(c->r[8],1)&0x00000001u; // 8018B4C0
  c->r[8]=c->r[8]|c->r[29]; cr0(c,c->r[8]); // 8018B4C4
  if (crb(c,2)) { goto L_8018B4F8; } // 8018B4C8
  c->r[8]=R16(c->r[3]+0x000008F8u); // 8018B4CC
  c->r[8]=c->r[8]+0x00000001u; // 8018B4D0
  W16(c->r[3]+0x000008F8u,c->r[8]); // 8018B4D4
  c->r[9]=rotl(c->r[8],0)&0x0000FFFFu; // 8018B4D8
  c->r[8]=R16(c->r[13]+0xFFFF932Au); // 8018B4DC
  cmpu(c,0,c->r[9],c->r[8]); // 8018B4E0
  if (!crb(c,1)) { goto L_8018B53C; } // 8018B4E4
  c->r[0]=c->r[0]|0x00000001u; // 8018B4E8
  W16(c->r[3]+0x000008F8u,c->r[11]); // 8018B4EC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018B4F0
  goto L_8018B53C; // 8018B4F4
L_8018B4F8:;
  c->r[8]=R16(c->r[3]+0x000008FAu); // 8018B4F8
  c->r[9]=R16(c->r[13]+0xFFFF932Eu); // 8018B4FC
  c->r[10]=c->r[8]+0x00000001u; // 8018B500
  c->r[8]=divw((int32_t)c->r[10],(int32_t)c->r[9]); // 8018B504
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[9]); // 8018B508
  c->r[8]=c->r[10]-c->r[8]; // 8018B50C
  W16(c->r[3]+0x000008FAu,c->r[8]); // 8018B510
  c->r[9]=rotl(c->r[8],0)&0x0000FFFFu; // 8018B514
  c->r[8]=R16(c->r[13]+0xFFFF932Eu); // 8018B518
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 8018B51C
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[8]); // 8018B520
  if (!crb(c,2)) { goto L_8018B53C; } // 8018B524
  c->r[8]=R16(c->r[3]+0x000008F8u); // 8018B528
  cmps(c,0,(int32_t)c->r[8],0); // 8018B52C
  if (crb(c,2)) { goto L_8018B53C; } // 8018B530
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 8018B534
  W16(c->r[3]+0x000008F8u,c->r[8]); // 8018B538
L_8018B53C:;
  c->r[7]=c->r[7]+0x00000008u; // 8018B53C
  c->r[6]=c->r[6]+0x00000008u; // 8018B540
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018B474; } // 8018B544
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000002Cu); // 8018B548
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Cu); // 8018B54C
  c->r[10]=c->r[6]-c->r[7]; cr0(c,c->r[10]); // 8018B550
  if (!crb(c,0)) { goto L_8018B55C; } // 8018B554
  c->r[10]=c->r[7]-c->r[6]; // 8018B558
L_8018B55C:;
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000002Au); // 8018B55C
  c->r[6]=c->r[10]^0x0000000Cu; // 8018B560
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Au); // 8018B564
  c->r[7]=sraw(c,c->r[6],1); // 8018B568
  c->r[6]=c->r[6]&c->r[10]; // 8018B56C
  c->r[6]=c->r[7]-c->r[6]; // 8018B570
  c->r[11]=c->r[8]-c->r[9]; cr0(c,c->r[11]); // 8018B574
  c->r[10]=rotl(c->r[6],1)&0x00000001u; // 8018B578
  if (!crb(c,0)) { goto L_8018B584; } // 8018B57C
  c->r[11]=c->r[9]-c->r[8]; // 8018B580
L_8018B584:;
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000002Eu); // 8018B584
  c->r[6]=c->r[11]^0x0000000Cu; // 8018B588
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Eu); // 8018B58C
  c->r[7]=sraw(c,c->r[6],1); // 8018B590
  c->r[6]=c->r[6]&c->r[11]; // 8018B594
  c->r[6]=c->r[7]-c->r[6]; // 8018B598
  c->r[11]=c->r[8]-c->r[9]; cr0(c,c->r[11]); // 8018B59C
  c->r[6]=rotl(c->r[6],1)&0x00000001u; // 8018B5A0
  if (!crb(c,0)) { goto L_8018B5AC; } // 8018B5A4
  c->r[11]=c->r[9]-c->r[8]; // 8018B5A8
L_8018B5AC:;
  c->r[7]=c->r[11]^0x0000000Cu; // 8018B5AC
  c->r[6]=c->r[6]|c->r[10]; // 8018B5B0
  c->r[8]=sraw(c,c->r[7],1); // 8018B5B4
  c->r[7]=c->r[7]&c->r[11]; // 8018B5B8
  c->r[7]=c->r[8]-c->r[7]; // 8018B5BC
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 8018B5C0
  c->r[6]=c->r[7]|c->r[6]; cr0(c,c->r[6]); // 8018B5C4
  if (crb(c,2)) { goto L_8018B600; } // 8018B5C8
  c->r[6]=R16(c->r[3]+0x00000900u); // 8018B5CC
  c->r[6]=c->r[6]+0x00000001u; // 8018B5D0
  W16(c->r[3]+0x00000900u,c->r[6]); // 8018B5D4
  c->r[7]=rotl(c->r[6],0)&0x0000FFFFu; // 8018B5D8
  c->r[6]=R16(c->r[13]+0xFFFF9328u); // 8018B5DC
  cmpu(c,0,c->r[7],c->r[6]); // 8018B5E0
  if (!crb(c,1)) { goto L_8018B644; } // 8018B5E4
  c->r[6]=0u+0x00000000u; // 8018B5E8
  c->r[0]=c->r[0]|0x00000001u; // 8018B5EC
  W16(c->r[3]+0x00000900u,c->r[6]); // 8018B5F0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018B5F4
  W16(c->r[3]+0x00000902u,c->r[6]); // 8018B5F8
  goto L_8018B644; // 8018B5FC
L_8018B600:;
  c->r[6]=R16(c->r[3]+0x00000902u); // 8018B600
  c->r[7]=R16(c->r[13]+0xFFFF932Cu); // 8018B604
  c->r[8]=c->r[6]+0x00000001u; // 8018B608
  c->r[6]=divw((int32_t)c->r[8],(int32_t)c->r[7]); // 8018B60C
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 8018B610
  c->r[6]=c->r[8]-c->r[6]; // 8018B614
  W16(c->r[3]+0x00000902u,c->r[6]); // 8018B618
  c->r[7]=rotl(c->r[6],0)&0x0000FFFFu; // 8018B61C
  c->r[6]=R16(c->r[13]+0xFFFF932Cu); // 8018B620
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8018B624
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 8018B628
  if (!crb(c,2)) { goto L_8018B644; } // 8018B62C
  c->r[6]=R16(c->r[3]+0x00000900u); // 8018B630
  cmps(c,0,(int32_t)c->r[6],0); // 8018B634
  if (crb(c,2)) { goto L_8018B644; } // 8018B638
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8018B63C
  W16(c->r[3]+0x00000900u,c->r[6]); // 8018B640
L_8018B644:;
  c->r[6]=R8(c->r[5]+0x00000030u); // 8018B644
  c->r[3]=R8(c->r[4]+0x00000030u); // 8018B648
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018B64C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018B650
  c->r[7]=c->r[3]-c->r[6]; cr0(c,c->r[7]); // 8018B654
  if (!crb(c,0)) { goto L_8018B660; } // 8018B658
  c->r[7]=c->r[6]-c->r[3]; // 8018B65C
L_8018B660:;
  c->r[6]=R8(c->r[5]+0x00000031u); // 8018B660
  c->r[3]=c->r[7]^0x00000001u; // 8018B664
  c->r[5]=R8(c->r[4]+0x00000031u); // 8018B668
  c->r[4]=sraw(c,c->r[3],1); // 8018B66C
  c->r[3]=c->r[3]&c->r[7]; // 8018B670
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018B674
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8018B678
  c->r[3]=c->r[4]-c->r[3]; // 8018B67C
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 8018B680
  c->r[7]=c->r[5]-c->r[6]; cr0(c,c->r[7]); // 8018B684
  c->r[0]=c->r[0]|c->r[3]; // 8018B688
  if (!crb(c,0)) { goto L_8018B694; } // 8018B68C
  c->r[7]=c->r[6]-c->r[5]; // 8018B690
L_8018B694:;
  c->r[3]=c->r[7]^0x00000001u; // 8018B694
  c->r[4]=sraw(c,c->r[3],1); // 8018B698
  c->r[3]=c->r[3]&c->r[7]; // 8018B69C
  c->r[3]=c->r[4]-c->r[3]; // 8018B6A0
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 8018B6A4
  c->r[0]=c->r[0]|c->r[3]; // 8018B6A8
  goto L_8018BC84; // 8018B6AC
L_8018B6B0:;
  c->r[0]=c->r[6]+0xFFFFFFFAu; // 8018B6B0
  cmpu(c,0,c->r[0],0x00000002u); // 8018B6B4
  if (crb(c,1)) { goto L_8018BA78; } // 8018B6B8
  cmps(c,0,(int32_t)c->r[8],2); // 8018B6BC
  c->r[6]=c->r[4]|c->r[4]; // 8018B6C0
  c->r[7]=c->r[5]|c->r[5]; // 8018B6C4
  if (crb(c,2)) { goto L_8018B708; } // 8018B6C8
  if (!crb(c,0)) { goto L_8018B6DC; } // 8018B6CC
  cmps(c,0,(int32_t)c->r[8],1); // 8018B6D0
  if (!crb(c,0)) { goto L_8018B6E8; } // 8018B6D4
  goto L_8018B708; // 8018B6D8
L_8018B6DC:;
  cmps(c,0,(int32_t)c->r[8],4); // 8018B6DC
  if (!crb(c,0)) { goto L_8018B708; } // 8018B6E0
  goto L_8018B6F8; // 8018B6E4
L_8018B6E8:;
  c->r[8]=0u+0x00000010u; // 8018B6E8
  c->r[9]=0u+0x00000020u; // 8018B6EC
  c->r[10]=0u+0x00000008u; // 8018B6F0
  goto L_8018B714; // 8018B6F4
L_8018B6F8:;
  c->r[8]=0u+0x00000004u; // 8018B6F8
  c->r[9]=0u+0x00000004u; // 8018B6FC
  c->r[10]=0u+0x00000001u; // 8018B700
  goto L_8018B714; // 8018B704
L_8018B708:;
  c->r[8]=0u+0x00000001u; // 8018B708
  c->r[9]=0u+0x00000001u; // 8018B70C
  c->r[10]=0u+0x00000001u; // 8018B710
L_8018B714:;
  c->r[0]=R8(c->r[4]+0x00000029u); // 8018B714
  c->r[30]=R16(c->r[4]+0x00000000u); // 8018B718
  c->r[12]=R16(c->r[5]+0x00000000u); // 8018B71C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018B720
  c->r[11]=c->r[12]-c->r[30]; // 8018B724
  c->r[0]=c->r[30]-c->r[12]; // 8018B728
  c->r[0]=c->r[11]|c->r[0]; // 8018B72C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8018B730
  if (!crb(c,2)) { goto L_8018BC84; } // 8018B734
  c->r[11]=R8(c->r[5]+0x00000029u); // 8018B738
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; cr0(c,c->r[11]); // 8018B73C
  if (!crb(c,2)) { goto L_8018BC84; } // 8018B740
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000004u); // 8018B744
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 8018B748
  c->r[28]=c->r[11]-c->r[12]; cr0(c,c->r[28]); // 8018B74C
  if (!crb(c,0)) { goto L_8018B758; } // 8018B750
  c->r[28]=c->r[12]-c->r[11]; // 8018B754
L_8018B758:;
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 8018B758
  c->r[11]=c->r[28]^0x0000000Cu; // 8018B75C
  c->r[30]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 8018B760
  c->r[12]=sraw(c,c->r[11],1); // 8018B764
  c->r[11]=c->r[11]&c->r[28]; // 8018B768
  c->r[11]=c->r[12]-c->r[11]; // 8018B76C
  c->r[28]=c->r[30]-c->r[31]; cr0(c,c->r[28]); // 8018B770
  c->r[29]=rotl(c->r[11],1)&0x00000001u; // 8018B774
  if (!crb(c,0)) { goto L_8018B780; } // 8018B778
  c->r[28]=c->r[31]-c->r[30]; // 8018B77C
L_8018B780:;
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000006u); // 8018B780
  c->r[11]=c->r[28]^0x0000000Cu; // 8018B784
  c->r[30]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 8018B788
  c->r[12]=sraw(c,c->r[11],1); // 8018B78C
  c->r[11]=c->r[11]&c->r[28]; // 8018B790
  c->r[11]=c->r[12]-c->r[11]; // 8018B794
  c->r[28]=c->r[30]-c->r[31]; cr0(c,c->r[28]); // 8018B798
  c->r[11]=rotl(c->r[11],1)&0x00000001u; // 8018B79C
  if (!crb(c,0)) { goto L_8018B7A8; } // 8018B7A0
  c->r[28]=c->r[31]-c->r[30]; // 8018B7A4
L_8018B7A8:;
  c->r[12]=c->r[28]^0x0000000Cu; // 8018B7A8
  c->r[11]=c->r[11]|c->r[29]; // 8018B7AC
  c->r[30]=sraw(c,c->r[12],1); // 8018B7B0
  c->r[12]=c->r[12]&c->r[28]; // 8018B7B4
  c->r[12]=c->r[30]-c->r[12]; // 8018B7B8
  c->r[12]=rotl(c->r[12],1)&0x00000001u; // 8018B7BC
  c->r[11]=c->r[12]|c->r[11]; cr0(c,c->r[11]); // 8018B7C0
  if (crb(c,2)) { goto L_8018B7FC; } // 8018B7C4
  c->r[11]=R16(c->r[3]+0x000008FCu); // 8018B7C8
  c->r[11]=c->r[11]+0x00000001u; // 8018B7CC
  W16(c->r[3]+0x000008FCu,c->r[11]); // 8018B7D0
  c->r[12]=rotl(c->r[11],0)&0x0000FFFFu; // 8018B7D4
  c->r[11]=R16(c->r[13]+0xFFFF9328u); // 8018B7D8
  cmpu(c,0,c->r[12],c->r[11]); // 8018B7DC
  if (!crb(c,1)) { goto L_8018B840; } // 8018B7E0
  c->r[11]=0u+0x00000000u; // 8018B7E4
  c->r[0]=c->r[0]|0x00000001u; // 8018B7E8
  W16(c->r[3]+0x000008FCu,c->r[11]); // 8018B7EC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018B7F0
  W16(c->r[3]+0x000008FEu,c->r[11]); // 8018B7F4
  goto L_8018B840; // 8018B7F8
L_8018B7FC:;
  c->r[11]=R16(c->r[3]+0x000008FEu); // 8018B7FC
  c->r[12]=R16(c->r[13]+0xFFFF932Cu); // 8018B800
  c->r[30]=c->r[11]+0x00000001u; // 8018B804
  c->r[11]=divw((int32_t)c->r[30],(int32_t)c->r[12]); // 8018B808
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[12]); // 8018B80C
  c->r[11]=c->r[30]-c->r[11]; // 8018B810
  W16(c->r[3]+0x000008FEu,c->r[11]); // 8018B814
  c->r[12]=rotl(c->r[11],0)&0x0000FFFFu; // 8018B818
  c->r[11]=R16(c->r[13]+0xFFFF932Cu); // 8018B81C
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 8018B820
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[11]); // 8018B824
  if (!crb(c,2)) { goto L_8018B840; } // 8018B828
  c->r[11]=R16(c->r[3]+0x000008FCu); // 8018B82C
  cmps(c,0,(int32_t)c->r[11],0); // 8018B830
  if (crb(c,2)) { goto L_8018B840; } // 8018B834
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 8018B838
  W16(c->r[3]+0x000008FCu,c->r[11]); // 8018B83C
L_8018B840:;
  c->r[11]=0u+0x00000004u; // 8018B840
  c->r[30]=0u+0x00000000u; // 8018B844
  c->ctr=c->r[11]; // 8018B848
L_8018B84C:;
  c->r[12]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x0000000Au); // 8018B84C
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x0000000Au); // 8018B850
  c->r[28]=c->r[11]-c->r[12]; cr0(c,c->r[28]); // 8018B854
  if (!crb(c,0)) { goto L_8018B860; } // 8018B858
  c->r[28]=c->r[12]-c->r[11]; // 8018B85C
L_8018B860:;
  c->r[29]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000008u); // 8018B860
  c->r[11]=c->r[28]^0x00000002u; // 8018B864
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000008u); // 8018B868
  c->r[12]=sraw(c,c->r[11],1); // 8018B86C
  c->r[11]=c->r[11]&c->r[28]; // 8018B870
  c->r[11]=c->r[12]-c->r[11]; // 8018B874
  c->r[27]=c->r[31]-c->r[29]; cr0(c,c->r[27]); // 8018B878
  c->r[28]=rotl(c->r[11],1)&0x00000001u; // 8018B87C
  if (!crb(c,0)) { goto L_8018B888; } // 8018B880
  c->r[27]=c->r[29]-c->r[31]; // 8018B884
L_8018B888:;
  c->r[11]=c->r[27]^0x00000002u; // 8018B888
  c->r[12]=sraw(c,c->r[11],1); // 8018B88C
  c->r[11]=c->r[11]&c->r[27]; // 8018B890
  c->r[11]=c->r[12]-c->r[11]; // 8018B894
  c->r[11]=rotl(c->r[11],1)&0x00000001u; // 8018B898
  c->r[11]=c->r[11]|c->r[28]; cr0(c,c->r[11]); // 8018B89C
  if (crb(c,2)) { goto L_8018B8D0; } // 8018B8A0
  c->r[11]=R16(c->r[3]+0x000008F8u); // 8018B8A4
  c->r[11]=c->r[11]+0x00000001u; // 8018B8A8
  W16(c->r[3]+0x000008F8u,c->r[11]); // 8018B8AC
  c->r[12]=rotl(c->r[11],0)&0x0000FFFFu; // 8018B8B0
  c->r[11]=R16(c->r[13]+0xFFFF932Au); // 8018B8B4
  cmpu(c,0,c->r[12],c->r[11]); // 8018B8B8
  if (!crb(c,1)) { goto L_8018B914; } // 8018B8BC
  c->r[0]=c->r[0]|0x00000001u; // 8018B8C0
  W16(c->r[3]+0x000008F8u,c->r[30]); // 8018B8C4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018B8C8
  goto L_8018B914; // 8018B8CC
L_8018B8D0:;
  c->r[11]=R16(c->r[3]+0x000008FAu); // 8018B8D0
  c->r[12]=R16(c->r[13]+0xFFFF932Eu); // 8018B8D4
  c->r[31]=c->r[11]+0x00000001u; // 8018B8D8
  c->r[11]=divw((int32_t)c->r[31],(int32_t)c->r[12]); // 8018B8DC
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[12]); // 8018B8E0
  c->r[11]=c->r[31]-c->r[11]; // 8018B8E4
  W16(c->r[3]+0x000008FAu,c->r[11]); // 8018B8E8
  c->r[12]=rotl(c->r[11],0)&0x0000FFFFu; // 8018B8EC
  c->r[11]=R16(c->r[13]+0xFFFF932Eu); // 8018B8F0
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 8018B8F4
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[11]); // 8018B8F8
  if (!crb(c,2)) { goto L_8018B914; } // 8018B8FC
  c->r[11]=R16(c->r[3]+0x000008F8u); // 8018B900
  cmps(c,0,(int32_t)c->r[11],0); // 8018B904
  if (crb(c,2)) { goto L_8018B914; } // 8018B908
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 8018B90C
  W16(c->r[3]+0x000008F8u,c->r[11]); // 8018B910
L_8018B914:;
  c->r[7]=c->r[7]+0x00000008u; // 8018B914
  c->r[6]=c->r[6]+0x00000008u; // 8018B918
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018B84C; } // 8018B91C
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000002Cu); // 8018B920
  c->r[11]=R16(c->r[4]+0x0000002Au); // 8018B924
  c->r[12]=divw((int32_t)c->r[6],(int32_t)c->r[8]); // 8018B928
  c->r[6]=R16(c->r[5]+0x0000002Au); // 8018B92C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Cu); // 8018B930
  c->r[7]=c->r[6]-c->r[11]; // 8018B934
  c->r[6]=c->r[11]-c->r[6]; // 8018B938
  c->r[6]=c->r[7]|c->r[6]; // 8018B93C
  c->r[7]=divw((int32_t)c->r[3],(int32_t)c->r[8]); // 8018B940
  c->r[3]=rotl(c->r[6],1)&0x00000001u; // 8018B944
  c->r[0]=c->r[0]|c->r[3]; // 8018B948
  c->r[27]=c->r[7]-c->r[12]; cr0(c,c->r[27]); // 8018B94C
  if (!crb(c,0)) { goto L_8018B958; } // 8018B950
  c->r[27]=c->r[12]-c->r[7]; // 8018B954
L_8018B958:;
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000002Eu); // 8018B958
  c->r[11]=c->r[27]^0x00000001u; // 8018B95C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Eu); // 8018B960
  c->r[7]=sraw(c,c->r[11],1); // 8018B964
  c->r[12]=divw((int32_t)c->r[6],(int32_t)c->r[8]); // 8018B968
  c->r[6]=c->r[11]&c->r[27]; // 8018B96C
  c->r[6]=c->r[7]-c->r[6]; // 8018B970
  c->r[6]=rotl(c->r[6],1)&0x00000001u; // 8018B974
  c->r[0]=c->r[0]|c->r[6]; // 8018B978
  c->r[3]=divw((int32_t)c->r[3],(int32_t)c->r[8]); // 8018B97C
  c->r[27]=c->r[3]-c->r[12]; cr0(c,c->r[27]); // 8018B980
  if (!crb(c,0)) { goto L_8018B98C; } // 8018B984
  c->r[27]=c->r[12]-c->r[3]; // 8018B988
L_8018B98C:;
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000030u); // 8018B98C
  c->r[8]=c->r[27]^0x00000001u; // 8018B990
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000030u); // 8018B994
  c->r[7]=sraw(c,c->r[8],1); // 8018B998
  c->r[11]=divw((int32_t)c->r[6],(int32_t)c->r[9]); // 8018B99C
  c->r[6]=c->r[8]&c->r[27]; // 8018B9A0
  c->r[6]=c->r[7]-c->r[6]; // 8018B9A4
  c->r[6]=rotl(c->r[6],1)&0x00000001u; // 8018B9A8
  c->r[0]=c->r[0]|c->r[6]; // 8018B9AC
  c->r[3]=divw((int32_t)c->r[3],(int32_t)c->r[9]); // 8018B9B0
  c->r[12]=c->r[3]-c->r[11]; cr0(c,c->r[12]); // 8018B9B4
  if (!crb(c,0)) { goto L_8018B9C0; } // 8018B9B8
  c->r[12]=c->r[11]-c->r[3]; // 8018B9BC
L_8018B9C0:;
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000032u); // 8018B9C0
  c->r[8]=c->r[12]^0x00000001u; // 8018B9C4
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000032u); // 8018B9C8
  c->r[7]=sraw(c,c->r[8],1); // 8018B9CC
  c->r[11]=divw((int32_t)c->r[6],(int32_t)c->r[9]); // 8018B9D0
  c->r[6]=c->r[8]&c->r[12]; // 8018B9D4
  c->r[6]=c->r[7]-c->r[6]; // 8018B9D8
  c->r[6]=rotl(c->r[6],1)&0x00000001u; // 8018B9DC
  c->r[0]=c->r[0]|c->r[6]; // 8018B9E0
  c->r[3]=divw((int32_t)c->r[3],(int32_t)c->r[9]); // 8018B9E4
  c->r[12]=c->r[3]-c->r[11]; cr0(c,c->r[12]); // 8018B9E8
  if (!crb(c,0)) { goto L_8018B9F4; } // 8018B9EC
  c->r[12]=c->r[11]-c->r[3]; // 8018B9F0
L_8018B9F4:;
  c->r[6]=R8(c->r[5]+0x00000034u); // 8018B9F4
  c->r[8]=c->r[12]^0x00000001u; // 8018B9F8
  c->r[3]=R8(c->r[4]+0x00000034u); // 8018B9FC
  c->r[7]=sraw(c,c->r[8],1); // 8018BA00
  c->r[9]=divw((int32_t)c->r[6],(int32_t)c->r[10]); // 8018BA04
  c->r[6]=c->r[8]&c->r[12]; // 8018BA08
  c->r[6]=c->r[7]-c->r[6]; // 8018BA0C
  c->r[6]=rotl(c->r[6],1)&0x00000001u; // 8018BA10
  c->r[0]=c->r[0]|c->r[6]; // 8018BA14
  c->r[3]=divw((int32_t)c->r[3],(int32_t)c->r[10]); // 8018BA18
  c->r[8]=c->r[3]-c->r[9]; cr0(c,c->r[8]); // 8018BA1C
  if (!crb(c,0)) { goto L_8018BA28; } // 8018BA20
  c->r[8]=c->r[9]-c->r[3]; // 8018BA24
L_8018BA28:;
  c->r[5]=R8(c->r[5]+0x00000035u); // 8018BA28
  c->r[7]=c->r[8]^0x00000001u; // 8018BA2C
  c->r[3]=R8(c->r[4]+0x00000035u); // 8018BA30
  c->r[6]=sraw(c,c->r[7],1); // 8018BA34
  c->r[5]=divw((int32_t)c->r[5],(int32_t)c->r[10]); // 8018BA38
  c->r[4]=c->r[7]&c->r[8]; // 8018BA3C
  c->r[4]=c->r[6]-c->r[4]; // 8018BA40
  c->r[4]=rotl(c->r[4],1)&0x00000001u; // 8018BA44
  c->r[0]=c->r[0]|c->r[4]; // 8018BA48
  c->r[3]=divw((int32_t)c->r[3],(int32_t)c->r[10]); // 8018BA4C
  c->r[6]=c->r[3]-c->r[5]; cr0(c,c->r[6]); // 8018BA50
  if (!crb(c,0)) { goto L_8018BA5C; } // 8018BA54
  c->r[6]=c->r[5]-c->r[3]; // 8018BA58
L_8018BA5C:;
  c->r[3]=c->r[6]^0x00000001u; // 8018BA5C
  c->r[4]=sraw(c,c->r[3],1); // 8018BA60
  c->r[3]=c->r[3]&c->r[6]; // 8018BA64
  c->r[3]=c->r[4]-c->r[3]; // 8018BA68
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 8018BA6C
  c->r[0]=c->r[0]|c->r[3]; // 8018BA70
  goto L_8018BC84; // 8018BA74
L_8018BA78:;
  c->r[0]=R8(c->r[4]+0x00000029u); // 8018BA78
  c->r[8]=R16(c->r[4]+0x00000000u); // 8018BA7C
  c->r[7]=R16(c->r[5]+0x00000000u); // 8018BA80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018BA84
  c->r[6]=c->r[7]-c->r[8]; // 8018BA88
  c->r[0]=c->r[8]-c->r[7]; // 8018BA8C
  c->r[0]=c->r[6]|c->r[0]; // 8018BA90
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8018BA94
  if (!crb(c,2)) { goto L_8018BC84; } // 8018BA98
  c->r[6]=R8(c->r[5]+0x00000029u); // 8018BA9C
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[6]); // 8018BAA0
  if (!crb(c,2)) { goto L_8018BC84; } // 8018BAA4
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000004u); // 8018BAA8
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 8018BAAC
  c->r[10]=c->r[6]-c->r[7]; cr0(c,c->r[10]); // 8018BAB0
  if (!crb(c,0)) { goto L_8018BABC; } // 8018BAB4
  c->r[10]=c->r[7]-c->r[6]; // 8018BAB8
L_8018BABC:;
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 8018BABC
  c->r[6]=c->r[10]^0x0000000Cu; // 8018BAC0
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 8018BAC4
  c->r[7]=sraw(c,c->r[6],1); // 8018BAC8
  c->r[6]=c->r[6]&c->r[10]; // 8018BACC
  c->r[6]=c->r[7]-c->r[6]; // 8018BAD0
  c->r[11]=c->r[8]-c->r[9]; cr0(c,c->r[11]); // 8018BAD4
  c->r[10]=rotl(c->r[6],1)&0x00000001u; // 8018BAD8
  if (!crb(c,0)) { goto L_8018BAE4; } // 8018BADC
  c->r[11]=c->r[9]-c->r[8]; // 8018BAE0
L_8018BAE4:;
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000006u); // 8018BAE4
  c->r[6]=c->r[11]^0x0000000Cu; // 8018BAE8
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 8018BAEC
  c->r[7]=sraw(c,c->r[6],1); // 8018BAF0
  c->r[6]=c->r[6]&c->r[11]; // 8018BAF4
  c->r[6]=c->r[7]-c->r[6]; // 8018BAF8
  c->r[11]=c->r[8]-c->r[9]; cr0(c,c->r[11]); // 8018BAFC
  c->r[6]=rotl(c->r[6],1)&0x00000001u; // 8018BB00
  if (!crb(c,0)) { goto L_8018BB0C; } // 8018BB04
  c->r[11]=c->r[9]-c->r[8]; // 8018BB08
L_8018BB0C:;
  c->r[7]=c->r[11]^0x0000000Cu; // 8018BB0C
  c->r[6]=c->r[6]|c->r[10]; // 8018BB10
  c->r[8]=sraw(c,c->r[7],1); // 8018BB14
  c->r[7]=c->r[7]&c->r[11]; // 8018BB18
  c->r[7]=c->r[8]-c->r[7]; // 8018BB1C
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 8018BB20
  c->r[6]=c->r[7]|c->r[6]; cr0(c,c->r[6]); // 8018BB24
  if (crb(c,2)) { goto L_8018BB60; } // 8018BB28
  c->r[6]=R16(c->r[3]+0x000008FCu); // 8018BB2C
  c->r[6]=c->r[6]+0x00000001u; // 8018BB30
  W16(c->r[3]+0x000008FCu,c->r[6]); // 8018BB34
  c->r[7]=rotl(c->r[6],0)&0x0000FFFFu; // 8018BB38
  c->r[6]=R16(c->r[13]+0xFFFF9328u); // 8018BB3C
  cmpu(c,0,c->r[7],c->r[6]); // 8018BB40
  if (!crb(c,1)) { goto L_8018BBA4; } // 8018BB44
  c->r[6]=0u+0x00000000u; // 8018BB48
  c->r[0]=c->r[0]|0x00000001u; // 8018BB4C
  W16(c->r[3]+0x000008FCu,c->r[6]); // 8018BB50
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018BB54
  W16(c->r[3]+0x000008FEu,c->r[6]); // 8018BB58
  goto L_8018BBA4; // 8018BB5C
L_8018BB60:;
  c->r[6]=R16(c->r[3]+0x000008FEu); // 8018BB60
  c->r[7]=R16(c->r[13]+0xFFFF932Cu); // 8018BB64
  c->r[8]=c->r[6]+0x00000001u; // 8018BB68
  c->r[6]=divw((int32_t)c->r[8],(int32_t)c->r[7]); // 8018BB6C
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 8018BB70
  c->r[6]=c->r[8]-c->r[6]; // 8018BB74
  W16(c->r[3]+0x000008FEu,c->r[6]); // 8018BB78
  c->r[7]=rotl(c->r[6],0)&0x0000FFFFu; // 8018BB7C
  c->r[6]=R16(c->r[13]+0xFFFF932Cu); // 8018BB80
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8018BB84
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 8018BB88
  if (!crb(c,2)) { goto L_8018BBA4; } // 8018BB8C
  c->r[6]=R16(c->r[3]+0x000008FCu); // 8018BB90
  cmps(c,0,(int32_t)c->r[6],0); // 8018BB94
  if (crb(c,2)) { goto L_8018BBA4; } // 8018BB98
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8018BB9C
  W16(c->r[3]+0x000008FCu,c->r[6]); // 8018BBA0
L_8018BBA4:;
  c->r[6]=0u+0x00000004u; // 8018BBA4
  c->r[9]=0u+0x00000000u; // 8018BBA8
  c->ctr=c->r[6]; // 8018BBAC
L_8018BBB0:;
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000000Au); // 8018BBB0
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000000Au); // 8018BBB4
  c->r[11]=c->r[6]-c->r[7]; cr0(c,c->r[11]); // 8018BBB8
  if (!crb(c,0)) { goto L_8018BBC4; } // 8018BBBC
  c->r[11]=c->r[7]-c->r[6]; // 8018BBC0
L_8018BBC4:;
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000008u); // 8018BBC4
  c->r[6]=c->r[11]^0x00000002u; // 8018BBC8
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000008u); // 8018BBCC
  c->r[7]=sraw(c,c->r[6],1); // 8018BBD0
  c->r[6]=c->r[6]&c->r[11]; // 8018BBD4
  c->r[6]=c->r[7]-c->r[6]; // 8018BBD8
  c->r[12]=c->r[8]-c->r[10]; cr0(c,c->r[12]); // 8018BBDC
  c->r[11]=rotl(c->r[6],1)&0x00000001u; // 8018BBE0
  if (!crb(c,0)) { goto L_8018BBEC; } // 8018BBE4
  c->r[12]=c->r[10]-c->r[8]; // 8018BBE8
L_8018BBEC:;
  c->r[6]=c->r[12]^0x00000002u; // 8018BBEC
  c->r[7]=sraw(c,c->r[6],1); // 8018BBF0
  c->r[6]=c->r[6]&c->r[12]; // 8018BBF4
  c->r[6]=c->r[7]-c->r[6]; // 8018BBF8
  c->r[6]=rotl(c->r[6],1)&0x00000001u; // 8018BBFC
  c->r[6]=c->r[6]|c->r[11]; cr0(c,c->r[6]); // 8018BC00
  if (crb(c,2)) { goto L_8018BC34; } // 8018BC04
  c->r[6]=R16(c->r[3]+0x000008F8u); // 8018BC08
  c->r[6]=c->r[6]+0x00000001u; // 8018BC0C
  W16(c->r[3]+0x000008F8u,c->r[6]); // 8018BC10
  c->r[7]=rotl(c->r[6],0)&0x0000FFFFu; // 8018BC14
  c->r[6]=R16(c->r[13]+0xFFFF932Au); // 8018BC18
  cmpu(c,0,c->r[7],c->r[6]); // 8018BC1C
  if (!crb(c,1)) { goto L_8018BC78; } // 8018BC20
  c->r[0]=c->r[0]|0x00000001u; // 8018BC24
  W16(c->r[3]+0x000008F8u,c->r[9]); // 8018BC28
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018BC2C
  goto L_8018BC78; // 8018BC30
L_8018BC34:;
  c->r[6]=R16(c->r[3]+0x000008FAu); // 8018BC34
  c->r[7]=R16(c->r[13]+0xFFFF932Eu); // 8018BC38
  c->r[8]=c->r[6]+0x00000001u; // 8018BC3C
  c->r[6]=divw((int32_t)c->r[8],(int32_t)c->r[7]); // 8018BC40
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 8018BC44
  c->r[6]=c->r[8]-c->r[6]; // 8018BC48
  W16(c->r[3]+0x000008FAu,c->r[6]); // 8018BC4C
  c->r[7]=rotl(c->r[6],0)&0x0000FFFFu; // 8018BC50
  c->r[6]=R16(c->r[13]+0xFFFF932Eu); // 8018BC54
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8018BC58
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 8018BC5C
  if (!crb(c,2)) { goto L_8018BC78; } // 8018BC60
  c->r[6]=R16(c->r[3]+0x000008F8u); // 8018BC64
  cmps(c,0,(int32_t)c->r[6],0); // 8018BC68
  if (crb(c,2)) { goto L_8018BC78; } // 8018BC6C
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8018BC70
  W16(c->r[3]+0x000008F8u,c->r[6]); // 8018BC74
L_8018BC78:;
  c->r[5]=c->r[5]+0x00000008u; // 8018BC78
  c->r[4]=c->r[4]+0x00000008u; // 8018BC7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018BBB0; } // 8018BC80
L_8018BC84:;
  c->r[11]=c->r[1]+0x00000020u; // 8018BC84
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8018BC88
  c->lr=0x8018BC90u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018BC8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018BC90
  c->lr=c->r[0]; // 8018BC94
  c->r[1]=c->r[1]+0x00000020u; // 8018BC98
  return; // 8018BC9C
}

// CheckButtonCombination
void f_8018BCA0(Ctx* __restrict c) {
  trace_call(0x8018BCA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018BCA0
  c->r[0]=c->lr; // 8018BCA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018BCA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8018BCAC
  c->r[31]=0u+0x80470000u; // 8018BCB0
  c->r[31]=c->r[31]+0xFFFF83D0u; // 8018BCB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8018BCB8
  c->r[30]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018BCBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8018BCC0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8018BCC4
  c->r[28]=0u+0xFFFFFFFFu; // 8018BCC8
  c->r[29]=R32(c->r[31]+c->r[30]); // 8018BCCC
  c->lr=0x8018BCD4u; f_80154410(c); // 8018BCD0
  c->r[0]=R8(c->r[29]+0x000008C8u); // 8018BCD4
  c->r[5]=R32(c->r[29]+0x000008B8u); // 8018BCD8
  c->r[0]=cntlz(c->r[0]); // 8018BCDC
  c->r[4]=rotl(c->r[0],27)&0x000000FFu; // 8018BCE0
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 8018BCE4
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)96); // 8018BCE8
  cmpu(c,0,c->r[0],0x00000002u); // 8018BCEC
  c->r[4]=c->r[29]+c->r[4]; // 8018BCF0
  if (crb(c,1)) { goto L_8018BD08; } // 8018BCF4
  c->r[0]=R16(c->r[4]+0x000000A0u); // 8018BCF8
  cmpu(c,0,c->r[0],0x00001C10u); // 8018BCFC
  if (!crb(c,2)) { goto L_8018BD08; } // 8018BD00
  c->r[28]=0u+0x00000001u; // 8018BD04
L_8018BD08:;
  c->r[0]=c->r[5]+0xFFFFFFFAu; // 8018BD08
  cmpu(c,0,c->r[0],0x00000002u); // 8018BD0C
  if (crb(c,1)) { goto L_8018BD48; } // 8018BD10
  c->r[0]=R16(c->r[4]+0x000000A0u); // 8018BD14
  cmpu(c,0,c->r[0],0x00001C10u); // 8018BD18
  if (!crb(c,2)) { goto L_8018BD24; } // 8018BD1C
  c->r[28]=0u+0x00000001u; // 8018BD20
L_8018BD24:;
  c->r[0]=R8(c->r[4]+0x000000C9u); // 8018BD24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018BD28
  if (crb(c,2)) { goto L_8018BD38; } // 8018BD2C
  c->r[28]=0u+0x00000000u; // 8018BD30
  goto L_8018BD48; // 8018BD34
L_8018BD38:;
  c->r[0]=R16(c->r[4]+0x000000CAu); // 8018BD38
  cmpu(c,0,c->r[0],0x00001450u); // 8018BD3C
  if (!crb(c,2)) { goto L_8018BD48; } // 8018BD40
  c->r[28]=0u+0x00000001u; // 8018BD44
L_8018BD48:;
  cmps(c,0,(int32_t)c->r[28],0); // 8018BD48
  if (!crb(c,0)) { goto L_8018BD5C; } // 8018BD4C
  c->r[0]=0u+0x00000000u; // 8018BD50
  W16(c->r[29]+0x00000912u,c->r[0]); // 8018BD54
  goto L_8018BD68; // 8018BD58
L_8018BD5C:;
  c->r[0]=R16(c->r[29]+0x00000912u); // 8018BD5C
  c->r[0]=c->r[0]+c->r[28]; // 8018BD60
  W16(c->r[29]+0x00000912u,c->r[0]); // 8018BD64
L_8018BD68:;
  c->lr=0x8018BD6Cu; f_80154438(c); // 8018BD68
  c->r[0]=R16(c->r[29]+0x00000912u); // 8018BD6C
  cmpu(c,0,c->r[0],0x00000258u); // 8018BD70
  if (!crb(c,1)) { goto L_8018BD8C; } // 8018BD74
  c->r[28]=R32(c->r[31]+c->r[30]); // 8018BD78
  c->lr=0x8018BD80u; f_80154410(c); // 8018BD7C
  c->r[0]=0u+0x00000000u; // 8018BD80
  W8(c->r[28]+0x00000911u,c->r[0]); // 8018BD84
  c->lr=0x8018BD8Cu; f_80154438(c); // 8018BD88
L_8018BD8C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018BD8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018BD90
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018BD94
  c->r[29]=R32(c->r[1]+0x00000014u); // 8018BD98
  c->r[28]=R32(c->r[1]+0x00000010u); // 8018BD9C
  c->lr=c->r[0]; // 8018BDA0
  c->r[1]=c->r[1]+0x00000020u; // 8018BDA4
  return; // 8018BDA8
}

// WPADiCheckContInputs
void f_8018BDAC(Ctx* __restrict c) {
  trace_call(0x8018BDACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018BDAC
  c->r[0]=c->lr; // 8018BDB0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8018BDB4
  c->r[11]=c->r[1]+0x00000030u; // 8018BDB8
  c->lr=0x8018BDC0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018BDBC
  c->r[31]=0u+0x80470000u; // 8018BDC0
  c->r[30]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018BDC4
  c->r[31]=c->r[31]+0xFFFF83D0u; // 8018BDC8
  c->r[27]=c->r[3]|c->r[3]; // 8018BDCC
  c->r[29]=R32(c->r[31]+c->r[30]); // 8018BDD0
  c->r[28]=0u+0x00000000u; // 8018BDD4
  c->r[0]=R32(c->r[29]+0x000008BCu); // 8018BDD8
  cmps(c,0,(int32_t)c->r[0],-1); // 8018BDDC
  if (crb(c,2)) { goto L_8018BF18; } // 8018BDE0
  c->lr=0x8018BDE8u; f_80154410(c); // 8018BDE4
  c->r[0]=R8(c->r[29]+0x000008C8u); // 8018BDE8
  c->r[25]=c->r[3]|c->r[3]; // 8018BDEC
  c->r[3]=c->r[29]|c->r[29]; // 8018BDF0
  c->r[5]=c->r[29]+0x00000040u; // 8018BDF4
  c->r[0]=cntlz(c->r[0]); // 8018BDF8
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 8018BDFC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 8018BE00
  c->r[4]=c->r[29]+c->r[0]; // 8018BE04
  c->r[24]=c->r[4]+0x000000A0u; // 8018BE08
  c->r[4]=c->r[24]|c->r[24]; // 8018BE0C
  c->lr=0x8018BE14u; f_8018B0F4(c); // 8018BE10
  cmps(c,0,(int32_t)c->r[3],0); // 8018BE14
  c->r[26]=c->r[3]|c->r[3]; // 8018BE18
  if (crb(c,2)) { goto L_8018BE30; } // 8018BE1C
  c->r[4]=c->r[24]|c->r[24]; // 8018BE20
  c->r[3]=c->r[29]+0x00000040u; // 8018BE24
  c->r[5]=0u+0x00000060u; // 8018BE28
  c->lr=0x8018BE30u; f_80004338(c); // 8018BE2C
L_8018BE30:;
  c->r[0]=R8(c->r[29]+0x00000069u); // 8018BE30
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018BE34
  if (crb(c,2)) { goto L_8018BE4C; } // 8018BE38
  c->r[3]=c->r[29]+0x00000040u; // 8018BE3C
  c->r[4]=0u+0x00000000u; // 8018BE40
  c->r[5]=0u+0x00000060u; // 8018BE44
  c->lr=0x8018BE4Cu; f_8000443C(c); // 8018BE48
L_8018BE4C:;
  c->r[3]=c->r[25]|c->r[25]; // 8018BE4C
  c->lr=0x8018BE54u; f_80154438(c); // 8018BE50
  c->r[3]=c->r[27]|c->r[27]; // 8018BE54
  c->lr=0x8018BE5Cu; f_8018BCA0(c); // 8018BE58
  cmps(c,0,(int32_t)c->r[26],0); // 8018BE5C
  if (crb(c,2)) { goto L_8018BE78; } // 8018BE60
  c->r[28]=0u+0x00000001u; // 8018BE64
  c->lr=0x8018BE6Cu; f_801584AC(c); // 8018BE68
  W32(c->r[29]+0x000008F4u,c->r[4]); // 8018BE6C
  W32(c->r[29]+0x000008F0u,c->r[3]); // 8018BE70
  goto L_8018BF0C; // 8018BE74
L_8018BE78:;
  c->r[0]=R8(c->r[13]+0xFFFFAFF2u); // 8018BE78
  cmps(c,0,(int32_t)c->r[0],0); // 8018BE7C
  if (crb(c,2)) { goto L_8018BF0C; } // 8018BE80
  c->lr=0x8018BE88u; f_801584AC(c); // 8018BE84
  c->r[6]=R32(c->r[29]+0x000008F4u); // 8018BE88
  c->r[5]=0u+0x80000000u; // 8018BE8C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8018BE90
  c->r[5]=0u+0x00000000u; // 8018BE94
  c->r[4]=addc(c,~c->r[6],c->r[4],1); // 8018BE98
  c->r[7]=R32(c->r[29]+0x000008F0u); // 8018BE9C
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8018BEA0
  c->r[3]=addc(c,~c->r[7],c->r[3],c->xer_ca); // 8018BEA4
  c->lr=0x8018BEACu; f_80252CF4(c); // 8018BEA8
  c->r[0]=R8(c->r[13]+0xFFFFAFF2u); // 8018BEAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 8018BEB0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8018BEB4
  if (!crb(c,1)) { goto L_8018BF0C; } // 8018BEB8
  c->r[29]=R32(c->r[31]+c->r[30]); // 8018BEBC
  c->lr=0x8018BEC4u; f_80154410(c); // 8018BEC0
  c->r[26]=R32(c->r[29]+0x000008BCu); // 8018BEC4
  c->lr=0x8018BECCu; f_80154438(c); // 8018BEC8
  cmps(c,0,(int32_t)c->r[26],-1); // 8018BECC
  if (crb(c,2)) { goto L_8018BF0C; } // 8018BED0
  c->lr=0x8018BED8u; f_80154410(c); // 8018BED4
  c->r[0]=R8(c->r[29]+0x00000986u); // 8018BED8
  cmps(c,0,(int32_t)c->r[0],0); // 8018BEDC
  if (crb(c,2)) { goto L_8018BEEC; } // 8018BEE0
  c->lr=0x8018BEE8u; f_80154438(c); // 8018BEE4
  goto L_8018BF0C; // 8018BEE8
L_8018BEEC:;
  c->r[0]=0u+0x00000001u; // 8018BEEC
  W8(c->r[29]+0x00000986u,c->r[0]); // 8018BEF0
  c->lr=0x8018BEF8u; f_80154438(c); // 8018BEF4
  c->r[5]=0u+0x80190000u; // 8018BEF8
  c->r[3]=c->r[27]|c->r[27]; // 8018BEFC
  c->r[5]=c->r[5]+0xFFFFDDA8u; // 8018BF00
  c->r[4]=0u+0x00000000u; // 8018BF04
  c->lr=0x8018BF0Cu; f_8018E52C(c); // 8018BF08
L_8018BF0C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8018BF0C
  if (crb(c,2)) { goto L_8018BF18; } // 8018BF10
  c->lr=0x8018BF18u; f_80161758(c); // 8018BF14
L_8018BF18:;
  c->r[11]=c->r[1]+0x00000030u; // 8018BF18
  c->lr=0x8018BF20u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018BF1C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8018BF20
  c->lr=c->r[0]; // 8018BF24
  c->r[1]=c->r[1]+0x00000030u; // 8018BF28
  return; // 8018BF2C
}

// fn_8018BF30
void f_8018BF30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018BF30
  c->r[0]=c->lr; // 8018BF34
  W32(c->r[1]+0x00000164u,c->r[0]); // 8018BF38
  c->r[11]=c->r[1]+0x00000160u; // 8018BF3C
  c->lr=0x8018BF44u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018BF40
  c->r[28]=0u+0x802E0000u; // 8018BF44
  c->r[28]=c->r[28]+0xFFFFC410u; // 8018BF48
  c->lr=0x8018BF50u; f_8019F028(c); // 8018BF4C
  cmps(c,0,(int32_t)c->r[3],3); // 8018BF50
  if (crb(c,2)) { goto L_8018BF98; } // 8018BF54
  cmps(c,0,(int32_t)c->r[3],2); // 8018BF58
  if (!crb(c,2)) { goto L_8018C694; } // 8018BF5C
  c->r[0]=R32(c->r[13]+0xFFFFAFD8u); // 8018BF60
  cmps(c,0,(int32_t)c->r[0],0); // 8018BF64
  if (!crb(c,2)) { goto L_8018C694; } // 8018BF68
  c->r[0]=0u+0x00000001u; // 8018BF6C
  c->r[3]=0u+0x80190000u; // 8018BF70
  W32(c->r[13]+0xFFFFAFD8u,c->r[0]); // 8018BF74
  c->r[3]=c->r[3]+0xFFFFD7F0u; // 8018BF78
  c->lr=0x8018BF80u; f_8019F580(c); // 8018BF7C
  c->r[3]=0u+0x80190000u; // 8018BF80
  c->r[3]=c->r[3]+0xFFFFDC64u; // 8018BF84
  c->lr=0x8018BF8Cu; f_8019F524(c); // 8018BF88
  c->r[0]=0u+0x00000032u; // 8018BF8C
  W32(c->r[13]+0xFFFFAFD4u,c->r[0]); // 8018BF90
  goto L_8018C694; // 8018BF94
L_8018BF98:;
  c->r[19]=R32(c->r[13]+0xFFFF9324u); // 8018BF98
  cmps(c,0,(int32_t)c->r[19],0); // 8018BF9C
  if (crb(c,0)) { goto L_8018BFE4; } // 8018BFA0
  c->r[3]=R32(c->r[13]+0xFFFFAFD4u); // 8018BFA4
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8018BFA8
  W32(c->r[13]+0xFFFFAFD4u,c->r[0]); // 8018BFAC
  if (crb(c,1)) { goto L_8018C694; } // 8018BFB0
  c->r[3]=c->r[28]+0x000000F0u; // 8018BFB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018BFB8
  c->lr=0x8018BFC0u; f_801987DC(c); // 8018BFBC
  c->lr=0x8018BFC4u; f_801A843C(c); // 8018BFC0
  c->r[3]=0u+0x80470000u; // 8018BFC4
  c->r[3]=c->r[3]+0xFFFF83A0u; // 8018BFC8
  c->lr=0x8018BFD0u; f_8014EB74(c); // 8018BFCC
  c->r[3]=0u+0x00000000u; // 8018BFD0
  c->lr=0x8018BFD8u; f_8019F524(c); // 8018BFD4
  c->r[3]=c->r[19]|c->r[19]; // 8018BFD8
  c->lr=0x8018BFE0u; f_8019EE08(c); // 8018BFDC
  goto L_8018C694; // 8018BFE0
L_8018BFE4:;
  c->r[24]=0u+0x80470000u; // 8018BFE4
  c->r[22]=0u+0x00000000u; // 8018BFE8
  c->r[24]=c->r[24]+0xFFFF83D0u; // 8018BFEC
  c->r[25]=c->r[13]+0xFFFFAFC8u; // 8018BFF0
  c->r[23]=c->r[13]+0xFFFFAFCCu; // 8018BFF4
  c->r[29]=0u+0x00000000u; // 8018BFF8
  c->r[30]=0u+0x00000010u; // 8018BFFC
  c->r[31]=0u+0x00000001u; // 8018C000
L_8018C004:;
  c->r[0]=R8(c->r[25]+0x00000000u); // 8018C004
  c->r[21]=0u+0x00000000u; // 8018C008
  cmpu(c,0,c->r[0],0x00000005u); // 8018C00C
  if (!crb(c,2)) { goto L_8018C1DC; } // 8018C010
  c->r[26]=R32(c->r[24]+0x00000000u); // 8018C014
  c->r[0]=R32(c->r[26]+0x000008D8u); // 8018C018
  cmps(c,0,(int32_t)c->r[0],0); // 8018C01C
  if (crb(c,2)) { goto L_8018C1CC; } // 8018C020
  c->lr=0x8018C028u; f_80154410(c); // 8018C024
  c->r[27]=c->r[3]|c->r[3]; // 8018C028
  c->lr=0x8018C030u; f_80154410(c); // 8018C02C
  c->r[4]=R8(c->r[26]+0x000005ECu); // 8018C030
  c->r[0]=R8(c->r[26]+0x000005EDu); // 8018C034
  c->r[0]=c->r[0]-c->r[4]; // 8018C038
  c->r[19]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[19]); // 8018C03C
  if (!crb(c,0)) { goto L_8018C050; } // 8018C040
  c->r[0]=R32(c->r[26]+0x000005F4u); // 8018C044
  c->r[0]=c->r[19]+c->r[0]; // 8018C048
  c->r[19]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018C04C
L_8018C050:;
  c->lr=0x8018C054u; f_80154438(c); // 8018C050
  cmps(c,0,(int32_t)c->r[19],0); // 8018C054
  if (!crb(c,2)) { goto L_8018C06C; } // 8018C058
  c->r[3]=c->r[27]|c->r[27]; // 8018C05C
  c->lr=0x8018C064u; f_80154438(c); // 8018C060
  c->r[0]=0u+0x00000000u; // 8018C064
  goto L_8018C098; // 8018C068
L_8018C06C:;
  c->r[0]=R8(c->r[26]+0x000005ECu); // 8018C06C
  c->r[3]=c->r[1]+0x000000C8u; // 8018C070
  c->r[4]=R32(c->r[26]+0x000005F0u); // 8018C074
  c->r[5]=0u+0x00000030u; // 8018C078
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018C07C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018C080
  c->r[4]=c->r[4]+c->r[0]; // 8018C084
  c->lr=0x8018C08Cu; f_80004338(c); // 8018C088
  c->r[3]=c->r[27]|c->r[27]; // 8018C08C
  c->lr=0x8018C094u; f_80154438(c); // 8018C090
  c->r[0]=0u+0x00000001u; // 8018C094
L_8018C098:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018C098
  if (crb(c,2)) { goto L_8018C1CC; } // 8018C09C
  c->r[0]=R32(c->r[1]+0x000000C8u); // 8018C0A0
  cmpu(c,0,c->r[0],0x00000012u); // 8018C0A4
  if (crb(c,2)) { goto L_8018C0B8; } // 8018C0A8
  c->r[0]=R32(c->r[26]+0x00000840u); // 8018C0AC
  cmps(c,0,(int32_t)c->r[0],0); // 8018C0B0
  if (crb(c,2)) { goto L_8018C1CC; } // 8018C0B4
L_8018C0B8:;
  c->r[21]=R32(c->r[1]+0x000000C8u); // 8018C0B8
  c->r[3]=c->r[22]|c->r[22]; // 8018C0BC
  c->r[20]=R32(c->r[1]+0x000000CCu); // 8018C0C0
  c->r[4]=c->r[1]+0x000000F8u; // 8018C0C4
  c->r[19]=R32(c->r[1]+0x000000D0u); // 8018C0C8
  c->r[12]=R32(c->r[1]+0x000000D4u); // 8018C0CC
  c->r[11]=R32(c->r[1]+0x000000D8u); // 8018C0D0
  c->r[10]=R32(c->r[1]+0x000000DCu); // 8018C0D4
  c->r[9]=R32(c->r[1]+0x000000E0u); // 8018C0D8
  c->r[8]=R32(c->r[1]+0x000000E4u); // 8018C0DC
  c->r[7]=R32(c->r[1]+0x000000E8u); // 8018C0E0
  c->r[6]=R32(c->r[1]+0x000000ECu); // 8018C0E4
  c->r[5]=R32(c->r[1]+0x000000F0u); // 8018C0E8
  c->r[0]=R32(c->r[1]+0x000000F4u); // 8018C0EC
  W32(c->r[1]+0x000000F8u,c->r[21]); // 8018C0F0
  W32(c->r[1]+0x000000FCu,c->r[20]); // 8018C0F4
  W32(c->r[1]+0x00000100u,c->r[19]); // 8018C0F8
  W32(c->r[1]+0x00000104u,c->r[12]); // 8018C0FC
  W32(c->r[1]+0x00000108u,c->r[11]); // 8018C100
  W32(c->r[1]+0x0000010Cu,c->r[10]); // 8018C104
  W32(c->r[1]+0x00000110u,c->r[9]); // 8018C108
  W32(c->r[1]+0x00000114u,c->r[8]); // 8018C10C
  W32(c->r[1]+0x00000118u,c->r[7]); // 8018C110
  W32(c->r[1]+0x0000011Cu,c->r[6]); // 8018C114
  W32(c->r[1]+0x00000120u,c->r[5]); // 8018C118
  W32(c->r[1]+0x00000124u,c->r[0]); // 8018C11C
  c->lr=0x8018C124u; f_8018AE14(c); // 8018C120
  cmps(c,0,(int32_t)c->r[3],0); // 8018C124
  if (!crb(c,2)) { goto L_8018C1CC; } // 8018C128
  c->lr=0x8018C130u; f_80154410(c); // 8018C12C
  c->r[27]=c->r[3]|c->r[3]; // 8018C130
  c->lr=0x8018C138u; f_80154410(c); // 8018C134
  c->r[4]=R8(c->r[26]+0x000005ECu); // 8018C138
  c->r[0]=R8(c->r[26]+0x000005EDu); // 8018C13C
  c->r[0]=c->r[0]-c->r[4]; // 8018C140
  c->r[19]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[19]); // 8018C144
  if (!crb(c,0)) { goto L_8018C158; } // 8018C148
  c->r[0]=R32(c->r[26]+0x000005F4u); // 8018C14C
  c->r[0]=c->r[19]+c->r[0]; // 8018C150
  c->r[19]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018C154
L_8018C158:;
  c->lr=0x8018C15Cu; f_80154438(c); // 8018C158
  cmps(c,0,(int32_t)c->r[19],0); // 8018C15C
  if (!crb(c,2)) { goto L_8018C170; } // 8018C160
  c->r[3]=c->r[27]|c->r[27]; // 8018C164
  c->lr=0x8018C16Cu; f_80154438(c); // 8018C168
  goto L_8018C1C4; // 8018C16C
L_8018C170:;
  c->r[0]=R8(c->r[26]+0x000005ECu); // 8018C170
  c->r[4]=0u+0x00000000u; // 8018C174
  c->r[3]=R32(c->r[26]+0x000005F0u); // 8018C178
  c->r[5]=0u+0x00000030u; // 8018C17C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018C180
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018C184
  c->r[3]=c->r[3]+c->r[0]; // 8018C188
  c->lr=0x8018C190u; f_8000443C(c); // 8018C18C
  c->r[0]=R8(c->r[26]+0x000005ECu); // 8018C190
  c->r[3]=c->r[27]|c->r[27]; // 8018C194
  c->r[4]=R32(c->r[26]+0x000005F4u); // 8018C198
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018C19C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8018C1A0
  c->r[5]=c->r[6]-c->r[4]; // 8018C1A4
  c->r[0]=c->r[6]+0x00000001u; // 8018C1A8
  c->r[4]=c->r[4]-c->r[6]; // 8018C1AC
  c->r[4]=~(c->r[5]|c->r[4]); // 8018C1B0
  c->r[4]=sraw(c,c->r[4],31); // 8018C1B4
  c->r[0]=c->r[0]&~c->r[4]; // 8018C1B8
  W8(c->r[26]+0x000005ECu,c->r[0]); // 8018C1BC
  c->lr=0x8018C1C4u; f_80154438(c); // 8018C1C0
L_8018C1C4:;
  c->r[21]=0u+0x00000001u; // 8018C1C4
  goto L_8018C1D0; // 8018C1C8
L_8018C1CC:;
  c->r[21]=0u+0x00000000u; // 8018C1CC
L_8018C1D0:;
  cmps(c,0,(int32_t)c->r[21],0); // 8018C1D0
  if (crb(c,2)) { goto L_8018C1DC; } // 8018C1D4
  W8(c->r[25]+0x00000000u,c->r[29]); // 8018C1D8
L_8018C1DC:;
  cmps(c,0,(int32_t)c->r[21],0); // 8018C1DC
  if (!crb(c,2)) { goto L_8018C38C; } // 8018C1E0
  c->r[27]=R32(c->r[24]+0x00000000u); // 8018C1E4
  c->r[0]=R32(c->r[27]+0x000008D8u); // 8018C1E8
  cmps(c,0,(int32_t)c->r[0],0); // 8018C1EC
  if (crb(c,2)) { goto L_8018C384; } // 8018C1F0
  c->lr=0x8018C1F8u; f_80154410(c); // 8018C1F4
  c->r[26]=c->r[3]|c->r[3]; // 8018C1F8
  c->lr=0x8018C200u; f_80154410(c); // 8018C1FC
  c->r[4]=R8(c->r[27]+0x00000160u); // 8018C200
  c->r[0]=R8(c->r[27]+0x00000161u); // 8018C204
  c->r[0]=c->r[0]-c->r[4]; // 8018C208
  c->r[19]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[19]); // 8018C20C
  if (!crb(c,0)) { goto L_8018C220; } // 8018C210
  c->r[0]=R32(c->r[27]+0x00000168u); // 8018C214
  c->r[0]=c->r[19]+c->r[0]; // 8018C218
  c->r[19]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018C21C
L_8018C220:;
  c->lr=0x8018C224u; f_80154438(c); // 8018C220
  cmps(c,0,(int32_t)c->r[19],0); // 8018C224
  if (!crb(c,2)) { goto L_8018C23C; } // 8018C228
  c->r[3]=c->r[26]|c->r[26]; // 8018C22C
  c->lr=0x8018C234u; f_80154438(c); // 8018C230
  c->r[0]=0u+0x00000000u; // 8018C234
  goto L_8018C268; // 8018C238
L_8018C23C:;
  c->r[0]=R8(c->r[27]+0x00000160u); // 8018C23C
  c->r[3]=c->r[1]+0x00000068u; // 8018C240
  c->r[4]=R32(c->r[27]+0x00000164u); // 8018C244
  c->r[5]=0u+0x00000030u; // 8018C248
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018C24C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018C250
  c->r[4]=c->r[4]+c->r[0]; // 8018C254
  c->lr=0x8018C25Cu; f_80004338(c); // 8018C258
  c->r[3]=c->r[26]|c->r[26]; // 8018C25C
  c->lr=0x8018C264u; f_80154438(c); // 8018C260
  c->r[0]=0u+0x00000001u; // 8018C264
L_8018C268:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018C268
  if (crb(c,2)) { goto L_8018C384; } // 8018C26C
  c->r[19]=R32(c->r[1]+0x00000068u); // 8018C270
  c->r[3]=c->r[22]|c->r[22]; // 8018C274
  c->r[20]=R32(c->r[1]+0x0000006Cu); // 8018C278
  c->r[4]=c->r[1]+0x00000098u; // 8018C27C
  c->r[26]=R32(c->r[1]+0x00000070u); // 8018C280
  c->r[12]=R32(c->r[1]+0x00000074u); // 8018C284
  c->r[11]=R32(c->r[1]+0x00000078u); // 8018C288
  c->r[10]=R32(c->r[1]+0x0000007Cu); // 8018C28C
  c->r[9]=R32(c->r[1]+0x00000080u); // 8018C290
  c->r[8]=R32(c->r[1]+0x00000084u); // 8018C294
  c->r[7]=R32(c->r[1]+0x00000088u); // 8018C298
  c->r[6]=R32(c->r[1]+0x0000008Cu); // 8018C29C
  c->r[5]=R32(c->r[1]+0x00000090u); // 8018C2A0
  c->r[0]=R32(c->r[1]+0x00000094u); // 8018C2A4
  W32(c->r[1]+0x00000098u,c->r[19]); // 8018C2A8
  W32(c->r[1]+0x0000009Cu,c->r[20]); // 8018C2AC
  W32(c->r[1]+0x000000A0u,c->r[26]); // 8018C2B0
  W32(c->r[1]+0x000000A4u,c->r[12]); // 8018C2B4
  W32(c->r[1]+0x000000A8u,c->r[11]); // 8018C2B8
  W32(c->r[1]+0x000000ACu,c->r[10]); // 8018C2BC
  W32(c->r[1]+0x000000B0u,c->r[9]); // 8018C2C0
  W32(c->r[1]+0x000000B4u,c->r[8]); // 8018C2C4
  W32(c->r[1]+0x000000B8u,c->r[7]); // 8018C2C8
  W32(c->r[1]+0x000000BCu,c->r[6]); // 8018C2CC
  W32(c->r[1]+0x000000C0u,c->r[5]); // 8018C2D0
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8018C2D4
  c->lr=0x8018C2DCu; f_8018AE14(c); // 8018C2D8
  cmps(c,0,(int32_t)c->r[3],0); // 8018C2DC
  if (!crb(c,2)) { goto L_8018C384; } // 8018C2E0
  c->lr=0x8018C2E8u; f_80154410(c); // 8018C2E4
  c->r[26]=c->r[3]|c->r[3]; // 8018C2E8
  c->lr=0x8018C2F0u; f_80154410(c); // 8018C2EC
  c->r[4]=R8(c->r[27]+0x00000160u); // 8018C2F0
  c->r[0]=R8(c->r[27]+0x00000161u); // 8018C2F4
  c->r[0]=c->r[0]-c->r[4]; // 8018C2F8
  c->r[19]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[19]); // 8018C2FC
  if (!crb(c,0)) { goto L_8018C310; } // 8018C300
  c->r[0]=R32(c->r[27]+0x00000168u); // 8018C304
  c->r[0]=c->r[19]+c->r[0]; // 8018C308
  c->r[19]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018C30C
L_8018C310:;
  c->lr=0x8018C314u; f_80154438(c); // 8018C310
  cmps(c,0,(int32_t)c->r[19],0); // 8018C314
  if (!crb(c,2)) { goto L_8018C328; } // 8018C318
  c->r[3]=c->r[26]|c->r[26]; // 8018C31C
  c->lr=0x8018C324u; f_80154438(c); // 8018C320
  goto L_8018C37C; // 8018C324
L_8018C328:;
  c->r[0]=R8(c->r[27]+0x00000160u); // 8018C328
  c->r[4]=0u+0x00000000u; // 8018C32C
  c->r[3]=R32(c->r[27]+0x00000164u); // 8018C330
  c->r[5]=0u+0x00000030u; // 8018C334
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018C338
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018C33C
  c->r[3]=c->r[3]+c->r[0]; // 8018C340
  c->lr=0x8018C348u; f_8000443C(c); // 8018C344
  c->r[0]=R8(c->r[27]+0x00000160u); // 8018C348
  c->r[3]=c->r[26]|c->r[26]; // 8018C34C
  c->r[4]=R32(c->r[27]+0x00000168u); // 8018C350
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018C354
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8018C358
  c->r[5]=c->r[6]-c->r[4]; // 8018C35C
  c->r[0]=c->r[6]+0x00000001u; // 8018C360
  c->r[4]=c->r[4]-c->r[6]; // 8018C364
  c->r[4]=~(c->r[5]|c->r[4]); // 8018C368
  c->r[4]=sraw(c,c->r[4],31); // 8018C36C
  c->r[0]=c->r[0]&~c->r[4]; // 8018C370
  W8(c->r[27]+0x00000160u,c->r[0]); // 8018C374
  c->lr=0x8018C37Cu; f_80154438(c); // 8018C378
L_8018C37C:;
  c->r[0]=0u+0x00000001u; // 8018C37C
  goto L_8018C388; // 8018C380
L_8018C384:;
  c->r[0]=0u+0x00000000u; // 8018C384
L_8018C388:;
  c->r[21]=c->r[21]|c->r[0]; // 8018C388
L_8018C38C:;
  c->r[20]=R32(c->r[24]+0x00000000u); // 8018C38C
  c->r[0]=R32(c->r[20]+0x000008BCu); // 8018C390
  cmps(c,0,(int32_t)c->r[0],-1); // 8018C394
  if (crb(c,2)) { goto L_8018C48C; } // 8018C398
  cmps(c,0,(int32_t)c->r[21],1); // 8018C39C
  if (crb(c,2)) { goto L_8018C3D4; } // 8018C3A0
  c->lr=0x8018C3A8u; f_80154410(c); // 8018C3A4
  c->r[4]=R8(c->r[20]+0x00000160u); // 8018C3A8
  c->r[0]=R8(c->r[20]+0x00000161u); // 8018C3AC
  c->r[0]=c->r[0]-c->r[4]; // 8018C3B0
  c->r[19]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[19]); // 8018C3B4
  if (!crb(c,0)) { goto L_8018C3C8; } // 8018C3B8
  c->r[0]=R32(c->r[20]+0x00000168u); // 8018C3BC
  c->r[0]=c->r[19]+c->r[0]; // 8018C3C0
  c->r[19]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018C3C4
L_8018C3C8:;
  c->lr=0x8018C3CCu; f_80154438(c); // 8018C3C8
  cmps(c,0,(int32_t)c->r[19],0); // 8018C3CC
  if (!crb(c,1)) { goto L_8018C3E0; } // 8018C3D0
L_8018C3D4:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 8018C3D4
  W32(c->r[3]+0x000008D0u,c->r[29]); // 8018C3D8
  goto L_8018C468; // 8018C3DC
L_8018C3E0:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 8018C3E0
  cmpu(c,0,c->r[0],0x00000005u); // 8018C3E4
  if (!crb(c,2)) { goto L_8018C468; } // 8018C3E8
  W16(c->r[1]+0x00000022u,c->r[31]); // 8018C3EC
  c->r[3]=c->r[22]|c->r[22]; // 8018C3F0
  c->r[5]=R32(c->r[24]+0x00000000u); // 8018C3F4
  c->r[4]=c->r[1]+0x00000038u; // 8018C3F8
  W8(c->r[1]+0x0000000Cu,c->r[29]); // 8018C3FC
  c->r[12]=R32(c->r[1]+0x00000010u); // 8018C400
  W32(c->r[5]+0x000008D0u,c->r[29]); // 8018C404
  c->r[21]=R32(c->r[1]+0x0000000Cu); // 8018C408
  c->r[11]=R32(c->r[1]+0x00000014u); // 8018C40C
  c->r[10]=R32(c->r[1]+0x00000018u); // 8018C410
  c->r[9]=R32(c->r[1]+0x0000001Cu); // 8018C414
  c->r[8]=R32(c->r[1]+0x00000020u); // 8018C418
  c->r[7]=R32(c->r[1]+0x00000024u); // 8018C41C
  c->r[6]=R32(c->r[1]+0x00000028u); // 8018C420
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 8018C424
  c->r[0]=R32(c->r[1]+0x00000030u); // 8018C428
  W32(c->r[1]+0x00000008u,c->r[30]); // 8018C42C
  W32(c->r[1]+0x00000034u,c->r[29]); // 8018C430
  W32(c->r[1]+0x00000038u,c->r[30]); // 8018C434
  W32(c->r[1]+0x0000003Cu,c->r[21]); // 8018C438
  W32(c->r[1]+0x00000040u,c->r[12]); // 8018C43C
  W32(c->r[1]+0x00000044u,c->r[11]); // 8018C440
  W32(c->r[1]+0x00000048u,c->r[10]); // 8018C444
  W32(c->r[1]+0x0000004Cu,c->r[9]); // 8018C448
  W32(c->r[1]+0x00000050u,c->r[8]); // 8018C44C
  W32(c->r[1]+0x00000054u,c->r[7]); // 8018C450
  W32(c->r[1]+0x00000058u,c->r[6]); // 8018C454
  W32(c->r[1]+0x0000005Cu,c->r[5]); // 8018C458
  W32(c->r[1]+0x00000060u,c->r[0]); // 8018C45C
  W32(c->r[1]+0x00000064u,c->r[29]); // 8018C460
  c->lr=0x8018C468u; f_801918C8(c); // 8018C464
L_8018C468:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 8018C468
  c->r[0]=R32(c->r[3]+0x000008D0u); // 8018C46C
  cmps(c,0,(int32_t)c->r[0],0); // 8018C470
  if (crb(c,2)) { goto L_8018C484; } // 8018C474
  c->r[3]=R8(c->r[23]+0x00000000u); // 8018C478
  c->r[0]=c->r[3]+0x00000001u; // 8018C47C
  goto L_8018C488; // 8018C480
L_8018C484:;
  c->r[0]=0u+0x00000000u; // 8018C484
L_8018C488:;
  W8(c->r[23]+0x00000000u,c->r[0]); // 8018C488
L_8018C48C:;
  c->r[0]=R8(c->r[13]+0xFFFFAFC4u); // 8018C48C
  cmpu(c,0,c->r[0],0x00000005u); // 8018C490
  if (!crb(c,2)) { goto L_8018C4A0; } // 8018C494
  c->r[3]=c->r[22]|c->r[22]; // 8018C498
  c->lr=0x8018C4A0u; f_8018BDAC(c); // 8018C49C
L_8018C4A0:;
  c->r[0]=R16(c->r[13]+0xFFFFAFC2u); // 8018C4A0
  cmpu(c,0,c->r[0],0x0000000Au); // 8018C4A4
  if (!crb(c,2)) { goto L_8018C4B4; } // 8018C4A8
  c->r[3]=c->r[22]|c->r[22]; // 8018C4AC
  c->lr=0x8018C4B4u; f_8018AFF0(c); // 8018C4B0
L_8018C4B4:;
  c->r[3]=R8(c->r[25]+0x00000000u); // 8018C4B4
  cmpu(c,0,c->r[3],0x00000005u); // 8018C4B8
  c->r[0]=c->r[3]+0x00000001u; // 8018C4BC
  if (!crb(c,2)) { goto L_8018C4C8; } // 8018C4C0
  c->r[0]=c->r[3]|c->r[3]; // 8018C4C4
L_8018C4C8:;
  c->r[22]=c->r[22]+0x00000001u; // 8018C4C8
  W8(c->r[25]+0x00000000u,c->r[0]); // 8018C4CC
  cmps(c,0,(int32_t)c->r[22],4); // 8018C4D0
  c->r[25]=c->r[25]+0x00000001u; // 8018C4D4
  c->r[24]=c->r[24]+0x00000004u; // 8018C4D8
  c->r[23]=c->r[23]+0x00000001u; // 8018C4DC
  if (crb(c,0)) { IRQCHK(c); goto L_8018C004; } // 8018C4E0
  c->r[0]=R16(c->r[13]+0xFFFFAFC6u); // 8018C4E4
  cmpu(c,0,c->r[0],0x0000EA60u); // 8018C4E8
  if (!crb(c,2)) { goto L_8018C54C; } // 8018C4EC
  c->r[21]=0u+0x80000000u; // 8018C4F0
  c->r[4]=0u+0x00000001u; // 8018C4F4
  c->r[3]=c->r[21]+0x000031A2u; // 8018C4F8
  c->lr=0x8018C500u; f_8014F810(c); // 8018C4FC
  c->r[3]=c->r[28]+0x00000108u; // 8018C500
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018C504
  c->lr=0x8018C50Cu; f_801987DC(c); // 8018C508
  c->r[3]=R8(c->r[13]+0xFFFFAFDCu); // 8018C50C
  c->r[0]=R8(c->r[21]+0x000031A2u); // 8018C510
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018C514
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8018C518
  if (crb(c,2)) { goto L_8018C54C; } // 8018C51C
  c->lr=0x8018C524u; f_80154410(c); // 8018C520
  c->r[0]=R8(c->r[21]+0x000031A2u); // 8018C524
  W8(c->r[13]+0xFFFFAFDCu,c->r[0]); // 8018C528
  c->lr=0x8018C530u; f_80154438(c); // 8018C52C
  c->r[4]=R8(c->r[21]+0x000031A2u); // 8018C530
  c->r[3]=c->r[28]+0x00000130u; // 8018C534
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018C538
  c->lr=0x8018C540u; f_801987DC(c); // 8018C53C
  c->r[0]=R8(c->r[13]+0xFFFFAFDCu); // 8018C540
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018C544
  c->lr=0x8018C54Cu; f_8019F438(c); // 8018C548
L_8018C54C:;
  c->r[6]=R16(c->r[13]+0xFFFFAFC2u); // 8018C54C
  c->r[3]=0u+0x00010000u; // 8018C550
  c->r[0]=c->r[3]+0xFFFFEA60u; // 8018C554
  c->r[9]=R8(c->r[13]+0xFFFFAFC4u); // 8018C558
  c->r[4]=c->r[6]+0xFFFFFFF6u; // 8018C55C
  c->r[3]=addc(c,~c->r[6],0x0000000Au,1); // 8018C560
  c->r[3]=~(c->r[4]|c->r[3]); // 8018C564
  c->r[10]=R16(c->r[13]+0xFFFFAFC6u); // 8018C568
  c->r[8]=sraw(c,c->r[3],31); // 8018C56C
  c->r[7]=c->r[6]+0x00000001u; // 8018C570
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8018C574
  c->r[4]=c->r[9]+0xFFFFFFFBu; // 8018C578
  c->r[3]=addc(c,~c->r[9],0x00000005u,1); // 8018C57C
  c->r[7]=c->r[7]&~c->r[8]; // 8018C580
  c->r[5]=~(c->r[4]|c->r[3]); // 8018C584
  c->r[4]=c->r[10]-c->r[0]; // 8018C588
  c->r[3]=c->r[0]-c->r[10]; // 8018C58C
  c->r[0]=R8(c->r[13]+0xFFFFAFE9u); // 8018C590
  c->r[6]=sraw(c,c->r[5],31); // 8018C594
  c->r[5]=c->r[9]+0x00000001u; // 8018C598
  c->r[4]=~(c->r[4]|c->r[3]); // 8018C59C
  c->r[3]=c->r[10]+0x00000001u; // 8018C5A0
  c->r[4]=sraw(c,c->r[4],31); // 8018C5A4
  c->r[5]=c->r[5]&~c->r[6]; // 8018C5A8
  c->r[3]=c->r[3]&~c->r[4]; // 8018C5AC
  cmps(c,0,(int32_t)c->r[0],0); // 8018C5B0
  W16(c->r[13]+0xFFFFAFC2u,c->r[7]); // 8018C5B4
  W8(c->r[13]+0xFFFFAFC4u,c->r[5]); // 8018C5B8
  W16(c->r[13]+0xFFFFAFC6u,c->r[3]); // 8018C5BC
  if (crb(c,2)) { goto L_8018C5F4; } // 8018C5C0
  c->lr=0x8018C5C8u; f_8018181C(c); // 8018C5C4
  cmps(c,0,(int32_t)c->r[3],0); // 8018C5C8
  if (!crb(c,2)) { goto L_8018C5F4; } // 8018C5CC
  c->r[3]=0u+0x80470000u; // 8018C5D0
  c->r[3]=c->r[3]+0xFFFFD7F0u; // 8018C5D4
  c->lr=0x8018C5DCu; f_801833CC(c); // 8018C5D8
  cmps(c,0,(int32_t)c->r[3],1); // 8018C5DC
  if (!crb(c,2)) { goto L_8018C5F4; } // 8018C5E0
  c->r[3]=0u+0x00000000u; // 8018C5E4
  c->lr=0x8018C5ECu; f_80182B8C(c); // 8018C5E8
  c->r[0]=0u+0x00000000u; // 8018C5EC
  W8(c->r[13]+0xFFFFAFE9u,c->r[0]); // 8018C5F0
L_8018C5F4:;
  c->r[0]=R8(c->r[13]+0xFFFFAFDEu); // 8018C5F4
  cmps(c,0,(int32_t)c->r[0],0); // 8018C5F8
  if (crb(c,2)) { goto L_8018C690; } // 8018C5FC
  c->lr=0x8018C604u; f_8018181C(c); // 8018C600
  cmps(c,0,(int32_t)c->r[3],0); // 8018C604
  if (!crb(c,2)) { goto L_8018C690; } // 8018C608
  c->lr=0x8018C610u; f_801833F0(c); // 8018C60C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8018C610
  cmpu(c,0,c->r[0],0x00000001u); // 8018C614
  if (!crb(c,0)) { goto L_8018C620; } // 8018C618
  c->r[0]=0u+0x00000001u; // 8018C61C
L_8018C620:;
  cmpu(c,0,c->r[0],0x00000005u); // 8018C620
  if (!crb(c,1)) { goto L_8018C62C; } // 8018C624
  c->r[0]=0u+0x00000005u; // 8018C628
L_8018C62C:;
  W8(c->r[13]+0xFFFFAFF1u,c->r[0]); // 8018C62C
  c->lr=0x8018C634u; f_801834B4(c); // 8018C630
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8018C634
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018C638
  c->r[0]=cntlz(c->r[0]); // 8018C63C
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 8018C640
  W8(c->r[13]+0xFFFFAFF0u,c->r[0]); // 8018C644
  c->lr=0x8018C64Cu; f_80183458(c); // 8018C648
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8018C64C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018C650
  c->r[0]=cntlz(c->r[0]); // 8018C654
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8018C658
  W32(c->r[13]+0xFFFFAFECu,c->r[0]); // 8018C65C
  c->lr=0x8018C664u; f_80183508(c); // 8018C660
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8018C664
  c->r[4]=c->r[3]|c->r[3]; // 8018C668
  if (!crb(c,2)) { goto L_8018C674; } // 8018C66C
  c->r[4]=0u+0x00000000u; // 8018C670
L_8018C674:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8018C674
  cmpu(c,0,c->r[0],0x0000007Fu); // 8018C678
  if (crb(c,0)) { goto L_8018C684; } // 8018C67C
  c->r[4]=0u+0x0000007Fu; // 8018C680
L_8018C684:;
  c->r[0]=0u+0x00000000u; // 8018C684
  W8(c->r[13]+0xFFFFAFEAu,c->r[4]); // 8018C688
  W8(c->r[13]+0xFFFFAFDEu,c->r[0]); // 8018C68C
L_8018C690:;
  c->lr=0x8018C694u; f_801AAAB4(c); // 8018C690
L_8018C694:;
  c->r[11]=c->r[1]+0x00000160u; // 8018C694
  c->lr=0x8018C69Cu; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018C698
  c->r[0]=R32(c->r[1]+0x00000164u); // 8018C69C
  c->lr=c->r[0]; // 8018C6A0
  c->r[1]=c->r[1]+0x00000160u; // 8018C6A4
  return; // 8018C6A8
}

// fn_8018C6AC
void f_8018C6AC(Ctx* __restrict c) {
  c->r[8]=0u+0x80470000u; // 8018C6AC
  c->r[7]=0u+0x80190000u; // 8018C6B0
  c->r[8]=c->r[8]+0xFFFF83E0u; // 8018C6B4
  c->r[5]=0u+0x00000000u; // 8018C6B8
  c->r[7]=c->r[7]+0xFFFFBF30u; // 8018C6BC
  c->r[6]=0u+0x00000000u; // 8018C6C0
  c->r[8]=c->r[8]+0x00001000u; // 8018C6C4
  f_80150278(c); return; // 8018C6C8
}

// fn_8018C6CC
void f_8018C6CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018C6CC
  c->r[0]=c->lr; // 8018C6D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018C6D4
  c->r[11]=c->r[1]+0x00000020u; // 8018C6D8
  c->lr=0x8018C6E0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018C6DC
  c->r[4]=0u+0x80470000u; // 8018C6E0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018C6E4
  c->r[4]=c->r[4]+0xFFFF83D0u; // 8018C6E8
  c->r[28]=0u+0x00000000u; // 8018C6EC
  c->r[27]=R32(c->r[4]+c->r[0]); // 8018C6F0
  c->r[29]=0u+0xFFFFFFFFu; // 8018C6F4
  c->r[0]=0u+0x000000FDu; // 8018C6F8
  c->r[30]=0u+0x0000000Cu; // 8018C6FC
  W8(c->r[27]+0x000008C8u,c->r[28]); // 8018C700
  c->r[31]=c->r[3]|c->r[3]; // 8018C704
  W32(c->r[27]+0x00000850u,c->r[28]); // 8018C708
  W32(c->r[27]+0x000008D4u,c->r[28]); // 8018C70C
  W32(c->r[27]+0x0000089Cu,c->r[28]); // 8018C710
  W32(c->r[27]+0x000008A0u,c->r[28]); // 8018C714
  W32(c->r[27]+0x000008A8u,c->r[28]); // 8018C718
  W32(c->r[27]+0x000008ACu,c->r[28]); // 8018C71C
  W32(c->r[27]+0x000008B0u,c->r[28]); // 8018C720
  W32(c->r[27]+0x000008B4u,c->r[28]); // 8018C724
  W32(c->r[27]+0x000008B8u,c->r[28]); // 8018C728
  W32(c->r[27]+0x000008BCu,c->r[29]); // 8018C72C
  W8(c->r[27]+0x000008C1u,c->r[0]); // 8018C730
  W8(c->r[27]+0x000008C2u,c->r[28]); // 8018C734
  W8(c->r[27]+0x00000911u,c->r[28]); // 8018C738
  W16(c->r[27]+0x00000912u,c->r[28]); // 8018C73C
  W8(c->r[27]+0x000008C0u,c->r[28]); // 8018C740
  W8(c->r[27]+0x000008CAu,c->r[30]); // 8018C744
  W8(c->r[27]+0x000008CBu,c->r[28]); // 8018C748
  W8(c->r[27]+0x000008CCu,c->r[28]); // 8018C74C
  W16(c->r[27]+0x000008F8u,c->r[28]); // 8018C750
  W16(c->r[27]+0x000008FAu,c->r[28]); // 8018C754
  W16(c->r[27]+0x000008FCu,c->r[28]); // 8018C758
  W16(c->r[27]+0x000008FEu,c->r[28]); // 8018C75C
  W16(c->r[27]+0x00000900u,c->r[28]); // 8018C760
  W16(c->r[27]+0x00000902u,c->r[28]); // 8018C764
  c->lr=0x8018C76Cu; f_801584AC(c); // 8018C768
  W32(c->r[27]+0x000008F4u,c->r[4]); // 8018C76C
  W32(c->r[27]+0x000008F0u,c->r[3]); // 8018C770
  c->lr=0x8018C778u; f_801584AC(c); // 8018C774
  W32(c->r[27]+0x0000090Cu,c->r[4]); // 8018C778
  c->r[0]=0u+0x00000001u; // 8018C77C
  c->r[4]=0u+0x00000000u; // 8018C780
  c->r[5]=0u+0x00000018u; // 8018C784
  W32(c->r[27]+0x00000908u,c->r[3]); // 8018C788
  c->r[3]=c->r[27]+0x00000838u; // 8018C78C
  W8(c->r[27]+0x00000910u,c->r[28]); // 8018C790
  W8(c->r[27]+0x000008C9u,c->r[28]); // 8018C794
  W32(c->r[27]+0x000008C4u,c->r[28]); // 8018C798
  W32(c->r[27]+0x00000974u,c->r[28]); // 8018C79C
  W32(c->r[27]+0x00000978u,c->r[28]); // 8018C7A0
  W16(c->r[27]+0x00000980u,c->r[28]); // 8018C7A4
  W32(c->r[27]+0x0000097Cu,c->r[28]); // 8018C7A8
  W8(c->r[27]+0x000008C3u,c->r[29]); // 8018C7AC
  W32(c->r[27]+0x000008D8u,c->r[28]); // 8018C7B0
  W32(c->r[27]+0x000008DCu,c->r[28]); // 8018C7B4
  W32(c->r[27]+0x000008E0u,c->r[28]); // 8018C7B8
  W8(c->r[27]+0x000008CDu,c->r[0]); // 8018C7BC
  W8(c->r[27]+0x000008CEu,c->r[28]); // 8018C7C0
  W8(c->r[27]+0x000008CFu,c->r[28]); // 8018C7C4
  W8(c->r[27]+0x00000982u,c->r[28]); // 8018C7C8
  W8(c->r[27]+0x00000983u,c->r[28]); // 8018C7CC
  W16(c->r[27]+0x00000984u,c->r[28]); // 8018C7D0
  W8(c->r[27]+0x00000986u,c->r[0]); // 8018C7D4
  W8(c->r[27]+0x0000098Cu,c->r[28]); // 8018C7D8
  W32(c->r[27]+0x00000988u,c->r[28]); // 8018C7DC
  W8(c->r[27]+0x0000098Eu,c->r[28]); // 8018C7E0
  c->lr=0x8018C7E8u; f_8000443C(c); // 8018C7E4
  c->r[3]=c->r[27]+0x00000934u; // 8018C7E8
  c->r[4]=0u+0x00000000u; // 8018C7EC
  c->r[5]=0u+0x00000040u; // 8018C7F0
  c->lr=0x8018C7F8u; f_8000443C(c); // 8018C7F4
  c->r[3]=c->r[27]+0x000000A0u; // 8018C7F8
  c->r[4]=0u+0x00000000u; // 8018C7FC
  c->r[5]=0u+0x000000C0u; // 8018C800
  c->lr=0x8018C808u; f_8000443C(c); // 8018C804
  c->r[3]=c->r[27]+0x00000040u; // 8018C808
  c->r[4]=0u+0x00000000u; // 8018C80C
  c->r[5]=0u+0x00000060u; // 8018C810
  c->lr=0x8018C818u; f_8000443C(c); // 8018C814
  c->r[3]=c->r[27]+0x00000854u; // 8018C818
  c->r[4]=0u+0x00000000u; // 8018C81C
  c->r[5]=0u+0x0000002Eu; // 8018C820
  c->lr=0x8018C828u; f_8000443C(c); // 8018C824
  c->r[3]=c->r[27]+0x00000882u; // 8018C828
  c->r[4]=0u+0x00000000u; // 8018C82C
  c->r[5]=0u+0x0000001Au; // 8018C830
  c->lr=0x8018C838u; f_8000443C(c); // 8018C834
  c->r[3]=c->r[27]+0x00000914u; // 8018C838
  c->r[4]=0u+0x00000000u; // 8018C83C
  c->r[5]=0u+0x00000010u; // 8018C840
  c->lr=0x8018C848u; f_8000443C(c); // 8018C844
  c->r[3]=c->r[27]+0x00000924u; // 8018C848
  c->r[4]=0u+0x00000000u; // 8018C84C
  c->r[5]=0u+0x00000008u; // 8018C850
  c->lr=0x8018C858u; f_8000443C(c); // 8018C854
  c->r[3]=c->r[27]+0x0000092Cu; // 8018C858
  c->r[4]=0u+0x00000000u; // 8018C85C
  c->r[5]=0u+0x00000008u; // 8018C860
  c->lr=0x8018C868u; f_8000443C(c); // 8018C864
  c->r[3]=c->r[27]|c->r[27]; // 8018C868
  c->r[4]=0u+0x00000000u; // 8018C86C
  c->r[5]=0u+0x00000038u; // 8018C870
  c->lr=0x8018C878u; f_8000443C(c); // 8018C874
  W32(c->r[27]+0x00000038u,c->r[29]); // 8018C878
  c->r[4]=c->r[27]+0x0000016Cu; // 8018C87C
  c->r[3]=0u+0x00000018u; // 8018C880
  c->r[0]=c->r[27]+0x000005F8u; // 8018C884
  W32(c->r[27]+0x0000003Cu,c->r[29]); // 8018C888
  W32(c->r[27]+0x00000164u,c->r[4]); // 8018C88C
  W32(c->r[27]+0x00000168u,c->r[3]); // 8018C890
  W32(c->r[27]+0x000005F0u,c->r[0]); // 8018C894
  W32(c->r[27]+0x000005F4u,c->r[30]); // 8018C898
  c->lr=0x8018C8A0u; f_80154410(c); // 8018C89C
  W8(c->r[27]+0x00000160u,c->r[28]); // 8018C8A0
  c->r[29]=c->r[3]|c->r[3]; // 8018C8A4
  c->r[4]=0u+0x00000000u; // 8018C8A8
  W8(c->r[27]+0x00000161u,c->r[28]); // 8018C8AC
  c->r[0]=R32(c->r[27]+0x00000168u); // 8018C8B0
  c->r[3]=R32(c->r[27]+0x00000164u); // 8018C8B4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018C8B8
  c->lr=0x8018C8C0u; f_8000443C(c); // 8018C8BC
  c->r[3]=c->r[29]|c->r[29]; // 8018C8C0
  c->lr=0x8018C8C8u; f_80154438(c); // 8018C8C4
  c->lr=0x8018C8CCu; f_80154410(c); // 8018C8C8
  W8(c->r[27]+0x000005ECu,c->r[28]); // 8018C8CC
  c->r[29]=c->r[3]|c->r[3]; // 8018C8D0
  c->r[4]=0u+0x00000000u; // 8018C8D4
  W8(c->r[27]+0x000005EDu,c->r[28]); // 8018C8D8
  c->r[0]=R32(c->r[27]+0x000005F4u); // 8018C8DC
  c->r[3]=R32(c->r[27]+0x000005F0u); // 8018C8E0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018C8E4
  c->lr=0x8018C8ECu; f_8000443C(c); // 8018C8E8
  c->r[3]=c->r[29]|c->r[29]; // 8018C8EC
  c->lr=0x8018C8F4u; f_80154438(c); // 8018C8F0
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)20); // 8018C8F4
  c->r[4]=0u+0x80470000u; // 8018C8F8
  c->r[3]=c->r[13]+0xFFFFAFC8u; // 8018C8FC
  c->r[4]=c->r[4]+0xFFFFBB30u; // 8018C900
  W8(c->r[3]+c->r[31],c->r[28]); // 8018C904
  c->r[3]=c->r[13]+0xFFFFAFCCu; // 8018C908
  W32(c->r[4]+c->r[0],c->r[28]); // 8018C90C
  c->r[4]=c->r[4]+c->r[0]; // 8018C910
  c->r[11]=c->r[1]+0x00000020u; // 8018C914
  W32(c->r[4]+0x00000004u,c->r[28]); // 8018C918
  W16(c->r[4]+0x00000008u,c->r[28]); // 8018C91C
  W32(c->r[4]+0x0000000Cu,c->r[28]); // 8018C920
  W32(c->r[4]+0x00000010u,c->r[28]); // 8018C924
  W8(c->r[3]+c->r[31],c->r[28]); // 8018C928
  c->lr=0x8018C930u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018C92C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018C930
  c->lr=c->r[0]; // 8018C934
  c->r[1]=c->r[1]+0x00000020u; // 8018C938
  return; // 8018C93C
}

// fn_8018C940
void f_8018C940(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018C940
  c->r[0]=c->lr; // 8018C944
  W32(c->r[1]+0x00000034u,c->r[0]); // 8018C948
  c->r[11]=c->r[1]+0x00000030u; // 8018C94C
  c->lr=0x8018C954u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018C950
  c->r[31]=0u+0x80470000u; // 8018C954
  c->r[31]=c->r[31]+0xFFFF83A0u; // 8018C958
  c->lr=0x8018C960u; f_80154410(c); // 8018C95C
  c->r[4]=0u+0xCD000000u; // 8018C960
  c->r[0]=R32(c->r[4]+0x000000C0u); // 8018C964
  c->r[0]=c->r[0]|0x00000100u; // 8018C968
  W32(c->r[4]+0x000000C0u,c->r[0]); // 8018C96C
  c->lr=0x8018C974u; f_80154438(c); // 8018C970
  c->r[4]=c->r[31]+0x00001040u; // 8018C974
  c->r[0]=0u+0xFFFFFFFFu; // 8018C978
  W8(c->r[4]+0x00000000u,c->r[0]); // 8018C97C
  c->r[3]=0u+0x802E0000u; // 8018C980
  c->r[3]=c->r[3]+0xFFFFC558u; // 8018C984
  W8(c->r[4]+0x00000001u,c->r[0]); // 8018C988
  W8(c->r[4]+0x00000002u,c->r[0]); // 8018C98C
  W8(c->r[4]+0x00000003u,c->r[0]); // 8018C990
  W8(c->r[4]+0x00000004u,c->r[0]); // 8018C994
  W8(c->r[4]+0x00000005u,c->r[0]); // 8018C998
  W8(c->r[4]+0x00000006u,c->r[0]); // 8018C99C
  W8(c->r[4]+0x00000007u,c->r[0]); // 8018C9A0
  W8(c->r[4]+0x00000008u,c->r[0]); // 8018C9A4
  W8(c->r[4]+0x00000009u,c->r[0]); // 8018C9A8
  W8(c->r[4]+0x0000000Au,c->r[0]); // 8018C9AC
  W8(c->r[4]+0x0000000Bu,c->r[0]); // 8018C9B0
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 8018C9B4
  W8(c->r[4]+0x0000000Du,c->r[0]); // 8018C9B8
  W8(c->r[4]+0x0000000Eu,c->r[0]); // 8018C9BC
  W8(c->r[4]+0x0000000Fu,c->r[0]); // 8018C9C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018C9C4
  c->lr=0x8018C9CCu; f_801987DC(c); // 8018C9C8
  c->r[29]=c->r[31]+0x00001060u; // 8018C9CC
  c->r[28]=c->r[31]+0x00000030u; // 8018C9D0
  c->r[24]=0u+0x00000000u; // 8018C9D4
  c->r[27]=c->r[13]+0xFFFFAFE0u; // 8018C9D8
  c->r[26]=c->r[13]+0xFFFFAFC8u; // 8018C9DC
  c->r[25]=c->r[13]+0xFFFFAFCCu; // 8018C9E0
  c->r[30]=0u+0x00000000u; // 8018C9E4
L_8018C9E8:;
  W32(c->r[28]+0x00000000u,c->r[29]); // 8018C9E8
  c->r[3]=c->r[24]|c->r[24]; // 8018C9EC
  W8(c->r[27]+0x00000000u,c->r[30]); // 8018C9F0
  c->r[4]=R32(c->r[28]+0x00000000u); // 8018C9F4
  W32(c->r[4]+0x000008A4u,c->r[30]); // 8018C9F8
  c->lr=0x8018CA00u; f_8018C6CC(c); // 8018C9FC
  c->r[3]=c->r[29]+0x000008E4u; // 8018CA00
  c->lr=0x8018CA08u; f_8015715C(c); // 8018CA04
  c->r[24]=c->r[24]+0x00000001u; // 8018CA08
  W8(c->r[26]+0x00000000u,c->r[30]); // 8018CA0C
  cmps(c,0,(int32_t)c->r[24],4); // 8018CA10
  c->r[28]=c->r[28]+0x00000004u; // 8018CA14
  W8(c->r[25]+0x00000000u,c->r[30]); // 8018CA18
  c->r[27]=c->r[27]+0x00000001u; // 8018CA1C
  c->r[26]=c->r[26]+0x00000001u; // 8018CA20
  c->r[25]=c->r[25]+0x00000001u; // 8018CA24
  c->r[29]=c->r[29]+0x000009A0u; // 8018CA28
  if (crb(c,0)) { IRQCHK(c); goto L_8018C9E8; } // 8018CA2C
  c->r[0]=0u+0x00000005u; // 8018CA30
  W8(c->r[13]+0xFFFFAFF2u,c->r[0]); // 8018CA34
  c->lr=0x8018CA3Cu; f_8014E724(c); // 8018CA38
  W32(c->r[13]+0xFFFFAFE4u,c->r[3]); // 8018CA3C
  c->lr=0x8018CA44u; f_8014E7A8(c); // 8018CA40
  W8(c->r[13]+0xFFFFAFE8u,c->r[3]); // 8018CA44
  c->lr=0x8018CA4Cu; f_801833F0(c); // 8018CA48
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8018CA4C
  cmpu(c,0,c->r[0],0x00000001u); // 8018CA50
  if (!crb(c,0)) { goto L_8018CA5C; } // 8018CA54
  c->r[0]=0u+0x00000001u; // 8018CA58
L_8018CA5C:;
  cmpu(c,0,c->r[0],0x00000005u); // 8018CA5C
  if (!crb(c,1)) { goto L_8018CA68; } // 8018CA60
  c->r[0]=0u+0x00000005u; // 8018CA64
L_8018CA68:;
  W8(c->r[13]+0xFFFFAFF1u,c->r[0]); // 8018CA68
  c->lr=0x8018CA70u; f_801834B4(c); // 8018CA6C
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8018CA70
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018CA74
  c->r[0]=cntlz(c->r[0]); // 8018CA78
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 8018CA7C
  W8(c->r[13]+0xFFFFAFF0u,c->r[0]); // 8018CA80
  c->lr=0x8018CA88u; f_80183458(c); // 8018CA84
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8018CA88
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018CA8C
  c->r[0]=cntlz(c->r[0]); // 8018CA90
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8018CA94
  W32(c->r[13]+0xFFFFAFECu,c->r[0]); // 8018CA98
  c->lr=0x8018CAA0u; f_80183508(c); // 8018CA9C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8018CAA0
  c->r[6]=c->r[3]|c->r[3]; // 8018CAA4
  if (!crb(c,2)) { goto L_8018CAB0; } // 8018CAA8
  c->r[6]=0u+0x00000000u; // 8018CAAC
L_8018CAB0:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8018CAB0
  cmpu(c,0,c->r[0],0x0000007Fu); // 8018CAB4
  if (crb(c,0)) { goto L_8018CAC0; } // 8018CAB8
  c->r[6]=0u+0x0000007Fu; // 8018CABC
L_8018CAC0:;
  c->r[5]=0u+0x00000000u; // 8018CAC0
  c->r[4]=0u+0x00000001u; // 8018CAC4
  c->r[0]=0u+0xFFFFFFFFu; // 8018CAC8
  W8(c->r[13]+0xFFFFAFEAu,c->r[6]); // 8018CACC
  c->r[3]=R32(c->r[13]+0xFFFF9320u); // 8018CAD0
  W16(c->r[13]+0xFFFFAFC2u,c->r[5]); // 8018CAD4
  W8(c->r[13]+0xFFFFAFC4u,c->r[5]); // 8018CAD8
  W16(c->r[13]+0xFFFFAFC6u,c->r[5]); // 8018CADC
  W8(c->r[13]+0xFFFFAFDDu,c->r[5]); // 8018CAE0
  W8(c->r[13]+0xFFFFAFE9u,c->r[5]); // 8018CAE4
  W8(c->r[13]+0xFFFFAFDEu,c->r[4]); // 8018CAE8
  W8(c->r[13]+0xFFFFAFDCu,c->r[0]); // 8018CAEC
  c->lr=0x8018CAF4u; f_8014E714(c); // 8018CAF0
  c->r[3]=c->r[31]+0x00000000u; // 8018CAF4
  c->lr=0x8018CAFCu; f_8014E820(c); // 8018CAF8
  c->lr=0x8018CB00u; f_8015848C(c); // 8018CAFC
  c->r[5]=0u+0x80000000u; // 8018CB00
  c->r[9]=0u+0x80190000u; // 8018CB04
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8018CB08
  c->r[6]=0u+0x10620000u; // 8018CB0C
  c->r[5]=c->r[3]|c->r[3]; // 8018CB10
  c->r[9]=c->r[9]+0xFFFFC6ACu; // 8018CB14
  c->r[3]=c->r[6]+0x00004DD3u; // 8018CB18
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8018CB1C
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 8018CB20
  c->r[6]=c->r[4]|c->r[4]; // 8018CB24
  c->r[3]=c->r[31]+0x00000000u; // 8018CB28
  c->r[7]=0u+0x00000000u; // 8018CB2C
  c->r[8]=rotl(c->r[0],26)&0x03FFFFFFu; // 8018CB30
  c->lr=0x8018CB38u; f_8014EAF0(c); // 8018CB34
  c->r[11]=c->r[1]+0x00000030u; // 8018CB38
  c->lr=0x8018CB40u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018CB3C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8018CB40
  c->lr=c->r[0]; // 8018CB44
  c->r[1]=c->r[1]+0x00000030u; // 8018CB48
  return; // 8018CB4C
}

// WPADInit
void f_8018CB50(Ctx* __restrict c) {
  trace_call(0x8018CB50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018CB50
  c->r[0]=c->lr; // 8018CB54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018CB58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018CB5C
  c->r[31]=0u+0x00000001u; // 8018CB60
  c->r[0]=R8(c->r[13]+0xFFFFAFC0u); // 8018CB64
  W32(c->r[13]+0xFFFFAFD0u,c->r[31]); // 8018CB68
  cmps(c,0,(int32_t)c->r[0],0); // 8018CB6C
  if (!crb(c,2)) { goto L_8018CB84; } // 8018CB70
  c->r[3]=0u+0x802E0000u; // 8018CB74
  c->r[3]=c->r[3]+0xFFFFC4F0u; // 8018CB78
  c->lr=0x8018CB80u; f_80155A40(c); // 8018CB7C
  W8(c->r[13]+0xFFFFAFC0u,c->r[31]); // 8018CB80
L_8018CB84:;
  c->lr=0x8018CB88u; f_8019ECC0(c); // 8018CB84
  cmps(c,0,(int32_t)c->r[3],0); // 8018CB88
  if (crb(c,2)) { goto L_8018CBAC; } // 8018CB8C
  c->r[4]=0u+0x00000000u; // 8018CB90
  c->r[3]=0u+0xFFFFFFFFu; // 8018CB94
  c->r[0]=0u+0x00000032u; // 8018CB98
  W32(c->r[13]+0xFFFFAFD8u,c->r[4]); // 8018CB9C
  W32(c->r[13]+0xFFFF9324u,c->r[3]); // 8018CBA0
  W32(c->r[13]+0xFFFFAFD4u,c->r[0]); // 8018CBA4
  c->lr=0x8018CBACu; f_8018C940(c); // 8018CBA8
L_8018CBAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018CBAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018CBB0
  c->lr=c->r[0]; // 8018CBB4
  c->r[1]=c->r[1]+0x00000010u; // 8018CBB8
  return; // 8018CBBC
}

// WPADStartSimpleSync
void f_8018CBC0(Ctx* __restrict c) {
  stub_log(0x8018CBC0u); c->r[3]=0; return;
}

// WPADStopSimpleSync
void f_8018CBC4(Ctx* __restrict c) {
  stub_log(0x8018CBC4u); c->r[3]=0; return;
}

// WPADSetSimpleSyncCallback
void f_8018CBC8(Ctx* __restrict c) {
  trace_call(0x8018CBC8u);
  f_8019F118(c); return; // 8018CBC8
}

// WPADRegisterAllocator
void f_8018CBCC(Ctx* __restrict c) {
  trace_call(0x8018CBCCu);
  f_8019EDB8(c); return; // 8018CBCC
}

// fn_8018CBD0
void f_8018CBD0(Ctx* __restrict c) {
  f_8019EE04(c); return; // 8018CBD0
}

// WPADGetStatus
void f_8018CBD4(Ctx* __restrict c) {
  trace_call(0x8018CBD4u);
  f_8019F028(c); return; // 8018CBD4
}

// WPADGetRadioSensitivity
void f_8018CBD8(Ctx* __restrict c) {
  stub_log(0x8018CBD8u); c->r[3]=0; return;
}

// fn_8018CC1C
void f_8018CC1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018CC1C
  c->r[0]=c->lr; // 8018CC20
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018CC24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018CC28
  c->lr=0x8018CC30u; f_80154410(c); // 8018CC2C
  c->r[31]=R8(c->r[13]+0xFFFFAFF0u); // 8018CC30
  c->lr=0x8018CC38u; f_80154438(c); // 8018CC34
  c->r[3]=c->r[31]|c->r[31]; // 8018CC38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018CC3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018CC40
  c->lr=c->r[0]; // 8018CC44
  c->r[1]=c->r[1]+0x00000010u; // 8018CC48
  return; // 8018CC4C
}

// setupCallback
void f_8018CC50(Ctx* __restrict c) {
  trace_call(0x8018CC50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018CC50
  c->r[0]=c->lr; // 8018CC54
  cmps(c,0,(int32_t)c->r[4],-1); // 8018CC58
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018CC5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8018CC60
  c->r[31]=0u+0x80470000u; // 8018CC64
  c->r[31]=c->r[31]+0xFFFF83D0u; // 8018CC68
  W32(c->r[1]+0x00000018u,c->r[30]); // 8018CC6C
  c->r[30]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018CC70
  W32(c->r[1]+0x00000014u,c->r[29]); // 8018CC74
  c->r[29]=R32(c->r[31]+c->r[30]); // 8018CC78
  if (crb(c,2)) { goto L_8018CD08; } // 8018CC7C
  cmps(c,0,(int32_t)c->r[4],0); // 8018CC80
  if (!crb(c,2)) { goto L_8018CCA8; } // 8018CC84
  c->r[0]=0u+0x00000001u; // 8018CC88
  W32(c->r[29]+0x000008DCu,c->r[0]); // 8018CC8C
  c->r[12]=R32(c->r[29]+0x000008A4u); // 8018CC90
  cmps(c,0,(int32_t)c->r[12],0); // 8018CC94
  if (crb(c,2)) { goto L_8018CD08; } // 8018CC98
  c->ctr=c->r[12]; // 8018CC9C
  if (true) { c->lr=0x8018CCA4u; dispatch(c,c->ctr); } // 8018CCA0
  goto L_8018CD08; // 8018CCA4
L_8018CCA8:;
  c->lr=0x8018CCACu; f_80154410(c); // 8018CCA8
  c->r[29]=R32(c->r[29]+0x000008BCu); // 8018CCAC
  c->lr=0x8018CCB4u; f_80154438(c); // 8018CCB0
  cmps(c,0,(int32_t)c->r[29],-1); // 8018CCB4
  if (crb(c,2)) { goto L_8018CD08; } // 8018CCB8
  c->r[30]=R32(c->r[31]+c->r[30]); // 8018CCBC
  c->lr=0x8018CCC4u; f_80154410(c); // 8018CCC0
  c->r[30]=R8(c->r[30]+0x000008C3u); // 8018CCC4
  c->lr=0x8018CCCCu; f_80154438(c); // 8018CCC8
  c->r[3]=c->r[30]|c->r[30]; // 8018CCCC
  c->lr=0x8018CCD4u; f_801A16EC(c); // 8018CCD0
  cmps(c,0,(int32_t)c->r[3],0); // 8018CCD4
  if (crb(c,2)) { goto L_8018CCF0; } // 8018CCD8
  c->r[4]=c->r[3]|c->r[3]; // 8018CCDC
  c->r[3]=c->r[1]+0x00000008u; // 8018CCE0
  c->r[5]=0u+0x00000006u; // 8018CCE4
  c->lr=0x8018CCECu; f_80004338(c); // 8018CCE8
  goto L_8018CD00; // 8018CCEC
L_8018CCF0:;
  c->r[3]=c->r[1]+0x00000008u; // 8018CCF0
  c->r[4]=0u+0x00000000u; // 8018CCF4
  c->r[5]=0u+0x00000006u; // 8018CCF8
  c->lr=0x8018CD00u; f_8000443C(c); // 8018CCFC
L_8018CD00:;
  c->r[3]=c->r[1]+0x00000008u; // 8018CD00
  c->lr=0x8018CD08u; f_801ACE70(c); // 8018CD04
L_8018CD08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018CD08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018CD0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018CD10
  c->r[29]=R32(c->r[1]+0x00000014u); // 8018CD14
  c->lr=c->r[0]; // 8018CD18
  c->r[1]=c->r[1]+0x00000020u; // 8018CD1C
  return; // 8018CD20
}

// abortConnCallback
void f_8018CD24(Ctx* __restrict c) {
  trace_call(0x8018CD24u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018CD24
  c->r[0]=c->lr; // 8018CD28
  W32(c->r[1]+0x00000034u,c->r[0]); // 8018CD2C
  c->r[11]=c->r[1]+0x00000030u; // 8018CD30
  c->lr=0x8018CD38u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018CD34
  c->r[31]=0u+0x80470000u; // 8018CD38
  cmps(c,0,(int32_t)c->r[4],0); // 8018CD3C
  c->r[30]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018CD40
  c->r[27]=c->r[4]|c->r[4]; // 8018CD44
  c->r[31]=c->r[31]+0xFFFF83D0u; // 8018CD48
  c->r[28]=R32(c->r[31]+c->r[30]); // 8018CD4C
  if (crb(c,2)) { goto L_8018CDF0; } // 8018CD50
  c->lr=0x8018CD58u; f_80154410(c); // 8018CD54
  c->r[0]=0u+0x00000000u; // 8018CD58
  c->r[29]=c->r[3]|c->r[3]; // 8018CD5C
  W8(c->r[28]+0x00000160u,c->r[0]); // 8018CD60
  c->r[4]=0u+0x00000000u; // 8018CD64
  W8(c->r[28]+0x00000161u,c->r[0]); // 8018CD68
  c->r[0]=R32(c->r[28]+0x00000168u); // 8018CD6C
  c->r[3]=R32(c->r[28]+0x00000164u); // 8018CD70
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018CD74
  c->lr=0x8018CD7Cu; f_8000443C(c); // 8018CD78
  c->r[3]=c->r[29]|c->r[29]; // 8018CD7C
  c->lr=0x8018CD84u; f_80154438(c); // 8018CD80
  cmps(c,0,(int32_t)c->r[27],-1); // 8018CD84
  if (crb(c,2)) { goto L_8018CDF0; } // 8018CD88
  c->r[29]=R32(c->r[31]+c->r[30]); // 8018CD8C
  c->lr=0x8018CD94u; f_80154410(c); // 8018CD90
  c->r[29]=R32(c->r[29]+0x000008BCu); // 8018CD94
  c->lr=0x8018CD9Cu; f_80154438(c); // 8018CD98
  cmps(c,0,(int32_t)c->r[29],-1); // 8018CD9C
  if (crb(c,2)) { goto L_8018CDF0; } // 8018CDA0
  c->r[29]=R32(c->r[31]+c->r[30]); // 8018CDA4
  c->lr=0x8018CDACu; f_80154410(c); // 8018CDA8
  c->r[29]=R8(c->r[29]+0x000008C3u); // 8018CDAC
  c->lr=0x8018CDB4u; f_80154438(c); // 8018CDB0
  c->r[3]=c->r[29]|c->r[29]; // 8018CDB4
  c->lr=0x8018CDBCu; f_801A16EC(c); // 8018CDB8
  cmps(c,0,(int32_t)c->r[3],0); // 8018CDBC
  if (crb(c,2)) { goto L_8018CDD8; } // 8018CDC0
  c->r[4]=c->r[3]|c->r[3]; // 8018CDC4
  c->r[3]=c->r[1]+0x00000008u; // 8018CDC8
  c->r[5]=0u+0x00000006u; // 8018CDCC
  c->lr=0x8018CDD4u; f_80004338(c); // 8018CDD0
  goto L_8018CDE8; // 8018CDD4
L_8018CDD8:;
  c->r[3]=c->r[1]+0x00000008u; // 8018CDD8
  c->r[4]=0u+0x00000000u; // 8018CDDC
  c->r[5]=0u+0x00000006u; // 8018CDE0
  c->lr=0x8018CDE8u; f_8000443C(c); // 8018CDE4
L_8018CDE8:;
  c->r[3]=c->r[1]+0x00000008u; // 8018CDE8
  c->lr=0x8018CDF0u; f_801ACE70(c); // 8018CDEC
L_8018CDF0:;
  c->r[11]=c->r[1]+0x00000030u; // 8018CDF0
  c->lr=0x8018CDF8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018CDF4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8018CDF8
  c->lr=c->r[0]; // 8018CDFC
  c->r[1]=c->r[1]+0x00000030u; // 8018CE00
  return; // 8018CE04
}

// fn_8018CE08
void f_8018CE08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFD80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018CE08
  c->r[0]=c->lr; // 8018CE0C
  W32(c->r[1]+0x00000284u,c->r[0]); // 8018CE10
  c->r[11]=c->r[1]+0x00000280u; // 8018CE14
  c->lr=0x8018CE1Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018CE18
  c->r[5]=0u+0x80470000u; // 8018CE1C
  cmps(c,0,(int32_t)c->r[4],-1); // 8018CE20
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018CE24
  c->r[27]=c->r[3]|c->r[3]; // 8018CE28
  c->r[5]=c->r[5]+0xFFFF83D0u; // 8018CE2C
  c->r[26]=c->r[4]|c->r[4]; // 8018CE30
  c->r[29]=R32(c->r[5]+c->r[0]); // 8018CE34
  if (crb(c,2)) { goto L_8018D6D8; } // 8018CE38
  c->lr=0x8018CE40u; f_80154410(c); // 8018CE3C
  c->r[4]=cntlz(c->r[26]); // 8018CE40
  c->r[0]=0u+0x00000000u; // 8018CE44
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8018CE48
  W32(c->r[29]+0x000008E0u,c->r[4]); // 8018CE4C
  W32(c->r[29]+0x000008BCu,c->r[0]); // 8018CE50
  c->lr=0x8018CE58u; f_80154438(c); // 8018CE54
  cmps(c,0,(int32_t)c->r[26],0); // 8018CE58
  c->r[31]=0u+0x0000002Au; // 8018CE5C
  if (!crb(c,2)) { goto L_8018CE68; } // 8018CE60
  c->r[31]=0u+0x00000014u; // 8018CE64
L_8018CE68:;
  c->r[3]=cntlz(c->r[26]); // 8018CE68
  c->r[0]=R32(c->r[29]+0x000008E0u); // 8018CE6C
  c->r[3]=rotl(c->r[3],27)&0x00000001u; // 8018CE70
  c->r[4]=0u+0x00000001u; // 8018CE74
  c->r[5]=0u-c->r[3]; // 8018CE78
  cmps(c,6,(int32_t)c->r[0],0); // 8018CE7C
  c->r[28]=c->r[5]&0x0000176Cu; cr0(c,c->r[28]); // 8018CE80
  c->r[0]=((c->r[27])&0x20)?0u:(c->r[4]<<((c->r[27])&31)); // 8018CE84
  c->r[3]=0u+0x802E0000u; // 8018CE88
  c->r[4]=0u+0x802E0000u; // 8018CE8C
  c->r[27]=rotl(c->r[0],0)&0x000000FFu; // 8018CE90
  c->r[3]=c->r[3]+0xFFFFC564u; // 8018CE94
  c->r[4]=c->r[4]+0xFFFFC59Cu; // 8018CE98
  if (crb(c,26)) { goto L_8018CEA4; } // 8018CE9C
  c->r[4]=c->r[13]+0xFFFF9330u; // 8018CEA0
L_8018CEA4:;
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018CEA4
  c->lr=0x8018CEACu; f_801987DC(c); // 8018CEA8
  c->r[30]=0u+0x80190000u; // 8018CEAC
  c->r[5]=R8(c->r[29]+0x0000098Eu); // 8018CEB0
  c->r[3]=c->r[29]+0x00000160u; // 8018CEB4
  c->r[4]=0u+0x00000000u; // 8018CEB8
  c->r[6]=c->r[30]+0xFFFFCD24u; // 8018CEBC
  c->lr=0x8018CEC4u; f_80191AFC(c); // 8018CEC0
  c->r[3]=0u+0x00000001u; // 8018CEC4
  c->r[0]=0u+0x00000000u; // 8018CEC8
  W16(c->r[1]+0x0000021Au,c->r[3]); // 8018CECC
  c->r[12]=c->r[30]+0xFFFFCD24u; // 8018CED0
  c->r[30]=0u+0x0000001Au; // 8018CED4
  c->r[10]=R32(c->r[1]+0x00000208u); // 8018CED8
  W8(c->r[1]+0x00000204u,c->r[0]); // 8018CEDC
  c->r[9]=R32(c->r[1]+0x0000020Cu); // 8018CEE0
  c->r[11]=R32(c->r[1]+0x00000204u); // 8018CEE4
  c->r[8]=R32(c->r[1]+0x00000210u); // 8018CEE8
  c->r[7]=R32(c->r[1]+0x00000214u); // 8018CEEC
  c->r[6]=R32(c->r[1]+0x00000218u); // 8018CEF0
  c->r[5]=R32(c->r[1]+0x0000021Cu); // 8018CEF4
  c->r[4]=R32(c->r[1]+0x00000220u); // 8018CEF8
  c->r[3]=R32(c->r[1]+0x00000224u); // 8018CEFC
  c->r[0]=R32(c->r[1]+0x00000228u); // 8018CF00
  W32(c->r[1]+0x00000200u,c->r[30]); // 8018CF04
  W32(c->r[1]+0x0000022Cu,c->r[12]); // 8018CF08
  W32(c->r[1]+0x00000230u,c->r[30]); // 8018CF0C
  W32(c->r[1]+0x00000234u,c->r[11]); // 8018CF10
  W32(c->r[1]+0x00000238u,c->r[10]); // 8018CF14
  W32(c->r[1]+0x0000023Cu,c->r[9]); // 8018CF18
  W32(c->r[1]+0x00000240u,c->r[8]); // 8018CF1C
  W32(c->r[1]+0x00000244u,c->r[7]); // 8018CF20
  W32(c->r[1]+0x00000248u,c->r[6]); // 8018CF24
  W32(c->r[1]+0x0000024Cu,c->r[5]); // 8018CF28
  W32(c->r[1]+0x00000250u,c->r[4]); // 8018CF2C
  W32(c->r[1]+0x00000254u,c->r[3]); // 8018CF30
  W32(c->r[1]+0x00000258u,c->r[0]); // 8018CF34
  W32(c->r[1]+0x0000025Cu,c->r[12]); // 8018CF38
  c->lr=0x8018CF40u; f_80154410(c); // 8018CF3C
  c->r[30]=c->r[3]|c->r[3]; // 8018CF40
  c->lr=0x8018CF48u; f_80154410(c); // 8018CF44
  c->r[4]=R8(c->r[29]+0x00000160u); // 8018CF48
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018CF4C
  c->r[0]=c->r[0]-c->r[4]; // 8018CF50
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[26]); // 8018CF54
  if (!crb(c,0)) { goto L_8018CF68; } // 8018CF58
  c->r[0]=R32(c->r[29]+0x00000168u); // 8018CF5C
  c->r[0]=c->r[26]+c->r[0]; // 8018CF60
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018CF64
L_8018CF68:;
  c->lr=0x8018CF6Cu; f_80154438(c); // 8018CF68
  c->r[3]=R32(c->r[29]+0x00000168u); // 8018CF6C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018CF70
  cmpu(c,0,c->r[0],c->r[26]); // 8018CF74
  if (!crb(c,2)) { goto L_8018CF88; } // 8018CF78
  c->r[3]=c->r[30]|c->r[30]; // 8018CF7C
  c->lr=0x8018CF84u; f_80154438(c); // 8018CF80
  goto L_8018CFFC; // 8018CF84
L_8018CF88:;
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018CF88
  c->r[4]=0u+0x00000000u; // 8018CF8C
  c->r[3]=R32(c->r[29]+0x00000164u); // 8018CF90
  c->r[5]=0u+0x00000030u; // 8018CF94
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018CF98
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018CF9C
  c->r[3]=c->r[3]+c->r[0]; // 8018CFA0
  c->lr=0x8018CFA8u; f_8000443C(c); // 8018CFA4
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018CFA8
  c->r[4]=c->r[1]+0x00000230u; // 8018CFAC
  c->r[3]=R32(c->r[29]+0x00000164u); // 8018CFB0
  c->r[5]=0u+0x00000030u; // 8018CFB4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018CFB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018CFBC
  c->r[3]=c->r[3]+c->r[0]; // 8018CFC0
  c->lr=0x8018CFC8u; f_80004338(c); // 8018CFC4
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018CFC8
  c->r[3]=c->r[30]|c->r[30]; // 8018CFCC
  c->r[4]=R32(c->r[29]+0x00000168u); // 8018CFD0
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018CFD4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8018CFD8
  c->r[5]=c->r[6]-c->r[4]; // 8018CFDC
  c->r[0]=c->r[6]+0x00000001u; // 8018CFE0
  c->r[4]=c->r[4]-c->r[6]; // 8018CFE4
  c->r[4]=~(c->r[5]|c->r[4]); // 8018CFE8
  c->r[4]=sraw(c,c->r[4],31); // 8018CFEC
  c->r[0]=c->r[0]&~c->r[4]; // 8018CFF0
  W8(c->r[29]+0x00000161u,c->r[0]); // 8018CFF4
  c->lr=0x8018CFFCu; f_80154438(c); // 8018CFF8
L_8018CFFC:;
  c->r[0]=rotl(c->r[27],4)&0x000000F0u; // 8018CFFC
  c->r[3]=0u+0x00000001u; // 8018D000
  W16(c->r[1]+0x000001BAu,c->r[3]); // 8018D004
  c->r[27]=0u+0x00000011u; // 8018D008
  c->r[10]=R32(c->r[1]+0x000001A8u); // 8018D00C
  c->r[12]=0u+0x80190000u; // 8018D010
  W8(c->r[1]+0x000001A4u,c->r[0]); // 8018D014
  c->r[12]=c->r[12]+0xFFFFCD24u; // 8018D018
  c->r[9]=R32(c->r[1]+0x000001ACu); // 8018D01C
  c->r[11]=R32(c->r[1]+0x000001A4u); // 8018D020
  c->r[8]=R32(c->r[1]+0x000001B0u); // 8018D024
  c->r[7]=R32(c->r[1]+0x000001B4u); // 8018D028
  c->r[6]=R32(c->r[1]+0x000001B8u); // 8018D02C
  c->r[5]=R32(c->r[1]+0x000001BCu); // 8018D030
  c->r[4]=R32(c->r[1]+0x000001C0u); // 8018D034
  c->r[3]=R32(c->r[1]+0x000001C4u); // 8018D038
  c->r[0]=R32(c->r[1]+0x000001C8u); // 8018D03C
  W32(c->r[1]+0x000001A0u,c->r[27]); // 8018D040
  W32(c->r[1]+0x000001CCu,c->r[12]); // 8018D044
  W32(c->r[1]+0x000001D0u,c->r[27]); // 8018D048
  W32(c->r[1]+0x000001D4u,c->r[11]); // 8018D04C
  W32(c->r[1]+0x000001D8u,c->r[10]); // 8018D050
  W32(c->r[1]+0x000001DCu,c->r[9]); // 8018D054
  W32(c->r[1]+0x000001E0u,c->r[8]); // 8018D058
  W32(c->r[1]+0x000001E4u,c->r[7]); // 8018D05C
  W32(c->r[1]+0x000001E8u,c->r[6]); // 8018D060
  W32(c->r[1]+0x000001ECu,c->r[5]); // 8018D064
  W32(c->r[1]+0x000001F0u,c->r[4]); // 8018D068
  W32(c->r[1]+0x000001F4u,c->r[3]); // 8018D06C
  W32(c->r[1]+0x000001F8u,c->r[0]); // 8018D070
  W32(c->r[1]+0x000001FCu,c->r[12]); // 8018D074
  c->lr=0x8018D07Cu; f_80154410(c); // 8018D078
  c->r[30]=c->r[3]|c->r[3]; // 8018D07C
  c->lr=0x8018D084u; f_80154410(c); // 8018D080
  c->r[4]=R8(c->r[29]+0x00000160u); // 8018D084
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D088
  c->r[0]=c->r[0]-c->r[4]; // 8018D08C
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[26]); // 8018D090
  if (!crb(c,0)) { goto L_8018D0A4; } // 8018D094
  c->r[0]=R32(c->r[29]+0x00000168u); // 8018D098
  c->r[0]=c->r[26]+c->r[0]; // 8018D09C
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D0A0
L_8018D0A4:;
  c->lr=0x8018D0A8u; f_80154438(c); // 8018D0A4
  c->r[3]=R32(c->r[29]+0x00000168u); // 8018D0A8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018D0AC
  cmpu(c,0,c->r[0],c->r[26]); // 8018D0B0
  if (!crb(c,2)) { goto L_8018D0C4; } // 8018D0B4
  c->r[3]=c->r[30]|c->r[30]; // 8018D0B8
  c->lr=0x8018D0C0u; f_80154438(c); // 8018D0BC
  goto L_8018D138; // 8018D0C0
L_8018D0C4:;
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D0C4
  c->r[4]=0u+0x00000000u; // 8018D0C8
  c->r[3]=R32(c->r[29]+0x00000164u); // 8018D0CC
  c->r[5]=0u+0x00000030u; // 8018D0D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D0D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018D0D8
  c->r[3]=c->r[3]+c->r[0]; // 8018D0DC
  c->lr=0x8018D0E4u; f_8000443C(c); // 8018D0E0
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D0E4
  c->r[4]=c->r[1]+0x000001D0u; // 8018D0E8
  c->r[3]=R32(c->r[29]+0x00000164u); // 8018D0EC
  c->r[5]=0u+0x00000030u; // 8018D0F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D0F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018D0F8
  c->r[3]=c->r[3]+c->r[0]; // 8018D0FC
  c->lr=0x8018D104u; f_80004338(c); // 8018D100
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D104
  c->r[3]=c->r[30]|c->r[30]; // 8018D108
  c->r[4]=R32(c->r[29]+0x00000168u); // 8018D10C
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D110
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8018D114
  c->r[5]=c->r[6]-c->r[4]; // 8018D118
  c->r[0]=c->r[6]+0x00000001u; // 8018D11C
  c->r[4]=c->r[4]-c->r[6]; // 8018D120
  c->r[4]=~(c->r[5]|c->r[4]); // 8018D124
  c->r[4]=sraw(c,c->r[4],31); // 8018D128
  c->r[0]=c->r[0]&~c->r[4]; // 8018D12C
  W8(c->r[29]+0x00000161u,c->r[0]); // 8018D130
  c->lr=0x8018D138u; f_80154438(c); // 8018D134
L_8018D138:;
  c->r[6]=0u+0x80190000u; // 8018D138
  c->r[3]=0u+0x0000002Au; // 8018D13C
  c->r[6]=c->r[6]+0xFFFFCD24u; // 8018D140
  c->r[8]=0u+0x00000038u; // 8018D144
  c->r[7]=0u+0x00000017u; // 8018D148
  c->r[0]=0u+0x00000006u; // 8018D14C
  W32(c->r[1]+0x00000018u,c->r[3]); // 8018D150
  c->r[3]=c->r[1]+0x00000144u; // 8018D154
  c->r[4]=c->r[1]+0x00000018u; // 8018D158
  c->r[5]=0u+0x00000004u; // 8018D15C
  W16(c->r[1]+0x0000000Cu,c->r[8]); // 8018D160
  W32(c->r[1]+0x00000140u,c->r[7]); // 8018D164
  W16(c->r[1]+0x0000015Au,c->r[0]); // 8018D168
  W32(c->r[1]+0x0000016Cu,c->r[6]); // 8018D16C
  c->lr=0x8018D174u; f_80004338(c); // 8018D170
  c->r[3]=c->r[1]+0x00000148u; // 8018D174
  c->r[4]=c->r[1]+0x0000000Cu; // 8018D178
  c->r[5]=0u+0x00000002u; // 8018D17C
  c->lr=0x8018D184u; f_80004338(c); // 8018D180
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 8018D184
  c->r[27]=c->r[29]+0x00000934u; // 8018D188
  c->r[12]=R32(c->r[1]+0x00000018u); // 8018D18C
  W16(c->r[1]+0x00000160u,c->r[0]); // 8018D190
  c->r[11]=R32(c->r[1]+0x00000140u); // 8018D194
  c->r[10]=R32(c->r[1]+0x00000144u); // 8018D198
  c->r[9]=R32(c->r[1]+0x00000148u); // 8018D19C
  c->r[8]=R32(c->r[1]+0x0000014Cu); // 8018D1A0
  c->r[7]=R32(c->r[1]+0x00000150u); // 8018D1A4
  c->r[6]=R32(c->r[1]+0x00000154u); // 8018D1A8
  c->r[5]=R32(c->r[1]+0x00000158u); // 8018D1AC
  c->r[4]=R32(c->r[1]+0x00000160u); // 8018D1B0
  c->r[3]=R32(c->r[1]+0x00000168u); // 8018D1B4
  c->r[0]=R32(c->r[1]+0x0000016Cu); // 8018D1B8
  W32(c->r[1]+0x0000015Cu,c->r[27]); // 8018D1BC
  W32(c->r[1]+0x00000164u,c->r[12]); // 8018D1C0
  W32(c->r[1]+0x00000170u,c->r[11]); // 8018D1C4
  W32(c->r[1]+0x00000174u,c->r[10]); // 8018D1C8
  W32(c->r[1]+0x00000178u,c->r[9]); // 8018D1CC
  W32(c->r[1]+0x0000017Cu,c->r[8]); // 8018D1D0
  W32(c->r[1]+0x00000180u,c->r[7]); // 8018D1D4
  W32(c->r[1]+0x00000184u,c->r[6]); // 8018D1D8
  W32(c->r[1]+0x00000188u,c->r[5]); // 8018D1DC
  W32(c->r[1]+0x0000018Cu,c->r[27]); // 8018D1E0
  W32(c->r[1]+0x00000190u,c->r[4]); // 8018D1E4
  W32(c->r[1]+0x00000194u,c->r[12]); // 8018D1E8
  W32(c->r[1]+0x00000198u,c->r[3]); // 8018D1EC
  W32(c->r[1]+0x0000019Cu,c->r[0]); // 8018D1F0
  c->lr=0x8018D1F8u; f_80154410(c); // 8018D1F4
  c->r[30]=c->r[3]|c->r[3]; // 8018D1F8
  c->lr=0x8018D200u; f_80154410(c); // 8018D1FC
  c->r[4]=R8(c->r[29]+0x00000160u); // 8018D200
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D204
  c->r[0]=c->r[0]-c->r[4]; // 8018D208
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[26]); // 8018D20C
  if (!crb(c,0)) { goto L_8018D220; } // 8018D210
  c->r[0]=R32(c->r[29]+0x00000168u); // 8018D214
  c->r[0]=c->r[26]+c->r[0]; // 8018D218
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D21C
L_8018D220:;
  c->lr=0x8018D224u; f_80154438(c); // 8018D220
  c->r[3]=R32(c->r[29]+0x00000168u); // 8018D224
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018D228
  cmpu(c,0,c->r[0],c->r[26]); // 8018D22C
  if (!crb(c,2)) { goto L_8018D240; } // 8018D230
  c->r[3]=c->r[30]|c->r[30]; // 8018D234
  c->lr=0x8018D23Cu; f_80154438(c); // 8018D238
  goto L_8018D2B4; // 8018D23C
L_8018D240:;
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D240
  c->r[4]=0u+0x00000000u; // 8018D244
  c->r[3]=R32(c->r[29]+0x00000164u); // 8018D248
  c->r[5]=0u+0x00000030u; // 8018D24C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D250
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018D254
  c->r[3]=c->r[3]+c->r[0]; // 8018D258
  c->lr=0x8018D260u; f_8000443C(c); // 8018D25C
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D260
  c->r[4]=c->r[1]+0x00000170u; // 8018D264
  c->r[3]=R32(c->r[29]+0x00000164u); // 8018D268
  c->r[5]=0u+0x00000030u; // 8018D26C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D270
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018D274
  c->r[3]=c->r[3]+c->r[0]; // 8018D278
  c->lr=0x8018D280u; f_80004338(c); // 8018D27C
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D280
  c->r[3]=c->r[30]|c->r[30]; // 8018D284
  c->r[4]=R32(c->r[29]+0x00000168u); // 8018D288
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D28C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8018D290
  c->r[5]=c->r[6]-c->r[4]; // 8018D294
  c->r[0]=c->r[6]+0x00000001u; // 8018D298
  c->r[4]=c->r[4]-c->r[6]; // 8018D29C
  c->r[4]=~(c->r[5]|c->r[4]); // 8018D2A0
  c->r[4]=sraw(c,c->r[4],31); // 8018D2A4
  c->r[0]=c->r[0]&~c->r[4]; // 8018D2A8
  W8(c->r[29]+0x00000161u,c->r[0]); // 8018D2AC
  c->lr=0x8018D2B4u; f_80154438(c); // 8018D2B0
L_8018D2B4:;
  c->r[6]=0u+0x80190000u; // 8018D2B4
  c->r[3]=0u+0x00000062u; // 8018D2B8
  c->r[6]=c->r[6]+0xFFFFCD24u; // 8018D2BC
  c->r[8]=0u+0x00000038u; // 8018D2C0
  c->r[7]=0u+0x00000017u; // 8018D2C4
  c->r[0]=0u+0x00000006u; // 8018D2C8
  W32(c->r[1]+0x00000014u,c->r[3]); // 8018D2CC
  c->r[3]=c->r[1]+0x000000E4u; // 8018D2D0
  c->r[4]=c->r[1]+0x00000014u; // 8018D2D4
  c->r[5]=0u+0x00000004u; // 8018D2D8
  W16(c->r[1]+0x0000000Au,c->r[8]); // 8018D2DC
  W32(c->r[1]+0x000000E0u,c->r[7]); // 8018D2E0
  W16(c->r[1]+0x000000FAu,c->r[0]); // 8018D2E4
  W32(c->r[1]+0x0000010Cu,c->r[6]); // 8018D2E8
  c->lr=0x8018D2F0u; f_80004338(c); // 8018D2EC
  c->r[3]=c->r[1]+0x000000E8u; // 8018D2F0
  c->r[4]=c->r[1]+0x0000000Au; // 8018D2F4
  c->r[5]=0u+0x00000002u; // 8018D2F8
  c->lr=0x8018D300u; f_80004338(c); // 8018D2FC
  c->r[0]=R16(c->r[1]+0x0000000Au); // 8018D300
  c->r[27]=c->r[29]+0x00000934u; // 8018D304
  c->r[12]=R32(c->r[1]+0x00000014u); // 8018D308
  W16(c->r[1]+0x00000100u,c->r[0]); // 8018D30C
  c->r[11]=R32(c->r[1]+0x000000E0u); // 8018D310
  c->r[10]=R32(c->r[1]+0x000000E4u); // 8018D314
  c->r[9]=R32(c->r[1]+0x000000E8u); // 8018D318
  c->r[8]=R32(c->r[1]+0x000000ECu); // 8018D31C
  c->r[7]=R32(c->r[1]+0x000000F0u); // 8018D320
  c->r[6]=R32(c->r[1]+0x000000F4u); // 8018D324
  c->r[5]=R32(c->r[1]+0x000000F8u); // 8018D328
  c->r[4]=R32(c->r[1]+0x00000100u); // 8018D32C
  c->r[3]=R32(c->r[1]+0x00000108u); // 8018D330
  c->r[0]=R32(c->r[1]+0x0000010Cu); // 8018D334
  W32(c->r[1]+0x000000FCu,c->r[27]); // 8018D338
  W32(c->r[1]+0x00000104u,c->r[12]); // 8018D33C
  W32(c->r[1]+0x00000110u,c->r[11]); // 8018D340
  W32(c->r[1]+0x00000114u,c->r[10]); // 8018D344
  W32(c->r[1]+0x00000118u,c->r[9]); // 8018D348
  W32(c->r[1]+0x0000011Cu,c->r[8]); // 8018D34C
  W32(c->r[1]+0x00000120u,c->r[7]); // 8018D350
  W32(c->r[1]+0x00000124u,c->r[6]); // 8018D354
  W32(c->r[1]+0x00000128u,c->r[5]); // 8018D358
  W32(c->r[1]+0x0000012Cu,c->r[27]); // 8018D35C
  W32(c->r[1]+0x00000130u,c->r[4]); // 8018D360
  W32(c->r[1]+0x00000134u,c->r[12]); // 8018D364
  W32(c->r[1]+0x00000138u,c->r[3]); // 8018D368
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 8018D36C
  c->lr=0x8018D374u; f_80154410(c); // 8018D370
  c->r[30]=c->r[3]|c->r[3]; // 8018D374
  c->lr=0x8018D37Cu; f_80154410(c); // 8018D378
  c->r[4]=R8(c->r[29]+0x00000160u); // 8018D37C
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D380
  c->r[0]=c->r[0]-c->r[4]; // 8018D384
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[26]); // 8018D388
  if (!crb(c,0)) { goto L_8018D39C; } // 8018D38C
  c->r[0]=R32(c->r[29]+0x00000168u); // 8018D390
  c->r[0]=c->r[26]+c->r[0]; // 8018D394
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D398
L_8018D39C:;
  c->lr=0x8018D3A0u; f_80154438(c); // 8018D39C
  c->r[3]=R32(c->r[29]+0x00000168u); // 8018D3A0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018D3A4
  cmpu(c,0,c->r[0],c->r[26]); // 8018D3A8
  if (!crb(c,2)) { goto L_8018D3BC; } // 8018D3AC
  c->r[3]=c->r[30]|c->r[30]; // 8018D3B0
  c->lr=0x8018D3B8u; f_80154438(c); // 8018D3B4
  goto L_8018D430; // 8018D3B8
L_8018D3BC:;
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D3BC
  c->r[4]=0u+0x00000000u; // 8018D3C0
  c->r[3]=R32(c->r[29]+0x00000164u); // 8018D3C4
  c->r[5]=0u+0x00000030u; // 8018D3C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D3CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018D3D0
  c->r[3]=c->r[3]+c->r[0]; // 8018D3D4
  c->lr=0x8018D3DCu; f_8000443C(c); // 8018D3D8
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D3DC
  c->r[4]=c->r[1]+0x00000110u; // 8018D3E0
  c->r[3]=R32(c->r[29]+0x00000164u); // 8018D3E4
  c->r[5]=0u+0x00000030u; // 8018D3E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D3EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018D3F0
  c->r[3]=c->r[3]+c->r[0]; // 8018D3F4
  c->lr=0x8018D3FCu; f_80004338(c); // 8018D3F8
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D3FC
  c->r[3]=c->r[30]|c->r[30]; // 8018D400
  c->r[4]=R32(c->r[29]+0x00000168u); // 8018D404
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D408
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8018D40C
  c->r[5]=c->r[6]-c->r[4]; // 8018D410
  c->r[0]=c->r[6]+0x00000001u; // 8018D414
  c->r[4]=c->r[4]-c->r[6]; // 8018D418
  c->r[4]=~(c->r[5]|c->r[4]); // 8018D41C
  c->r[4]=sraw(c,c->r[4],31); // 8018D420
  c->r[0]=c->r[0]&~c->r[4]; // 8018D424
  W8(c->r[29]+0x00000161u,c->r[0]); // 8018D428
  c->lr=0x8018D430u; f_80154438(c); // 8018D42C
L_8018D430:;
  c->r[6]=0u+0x80190000u; // 8018D430
  c->r[7]=0u+0x00000017u; // 8018D434
  c->r[6]=c->r[6]+0xFFFFCC50u; // 8018D438
  c->r[0]=0u+0x00000006u; // 8018D43C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8018D440
  c->r[3]=c->r[1]+0x00000084u; // 8018D444
  c->r[4]=c->r[1]+0x00000010u; // 8018D448
  c->r[5]=0u+0x00000004u; // 8018D44C
  W16(c->r[1]+0x00000008u,c->r[31]); // 8018D450
  W32(c->r[1]+0x00000080u,c->r[7]); // 8018D454
  W16(c->r[1]+0x0000009Au,c->r[0]); // 8018D458
  W32(c->r[1]+0x000000ACu,c->r[6]); // 8018D45C
  c->lr=0x8018D464u; f_80004338(c); // 8018D460
  c->r[3]=c->r[1]+0x00000088u; // 8018D464
  c->r[4]=c->r[1]+0x00000008u; // 8018D468
  c->r[5]=0u+0x00000002u; // 8018D46C
  c->lr=0x8018D474u; f_80004338(c); // 8018D470
  c->r[0]=R16(c->r[1]+0x00000008u); // 8018D474
  c->r[27]=c->r[29]+0x00000934u; // 8018D478
  c->r[12]=R32(c->r[1]+0x00000010u); // 8018D47C
  W16(c->r[1]+0x000000A0u,c->r[0]); // 8018D480
  c->r[11]=R32(c->r[1]+0x00000080u); // 8018D484
  c->r[10]=R32(c->r[1]+0x00000084u); // 8018D488
  c->r[9]=R32(c->r[1]+0x00000088u); // 8018D48C
  c->r[8]=R32(c->r[1]+0x0000008Cu); // 8018D490
  c->r[7]=R32(c->r[1]+0x00000090u); // 8018D494
  c->r[6]=R32(c->r[1]+0x00000094u); // 8018D498
  c->r[5]=R32(c->r[1]+0x00000098u); // 8018D49C
  c->r[4]=R32(c->r[1]+0x000000A0u); // 8018D4A0
  c->r[3]=R32(c->r[1]+0x000000A8u); // 8018D4A4
  c->r[0]=R32(c->r[1]+0x000000ACu); // 8018D4A8
  W32(c->r[1]+0x0000009Cu,c->r[27]); // 8018D4AC
  W32(c->r[1]+0x000000A4u,c->r[12]); // 8018D4B0
  W32(c->r[1]+0x000000B0u,c->r[11]); // 8018D4B4
  W32(c->r[1]+0x000000B4u,c->r[10]); // 8018D4B8
  W32(c->r[1]+0x000000B8u,c->r[9]); // 8018D4BC
  W32(c->r[1]+0x000000BCu,c->r[8]); // 8018D4C0
  W32(c->r[1]+0x000000C0u,c->r[7]); // 8018D4C4
  W32(c->r[1]+0x000000C4u,c->r[6]); // 8018D4C8
  W32(c->r[1]+0x000000C8u,c->r[5]); // 8018D4CC
  W32(c->r[1]+0x000000CCu,c->r[27]); // 8018D4D0
  W32(c->r[1]+0x000000D0u,c->r[4]); // 8018D4D4
  W32(c->r[1]+0x000000D4u,c->r[12]); // 8018D4D8
  W32(c->r[1]+0x000000D8u,c->r[3]); // 8018D4DC
  W32(c->r[1]+0x000000DCu,c->r[0]); // 8018D4E0
  c->lr=0x8018D4E8u; f_80154410(c); // 8018D4E4
  c->r[26]=c->r[3]|c->r[3]; // 8018D4E8
  c->lr=0x8018D4F0u; f_80154410(c); // 8018D4EC
  c->r[4]=R8(c->r[29]+0x00000160u); // 8018D4F0
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D4F4
  c->r[0]=c->r[0]-c->r[4]; // 8018D4F8
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[27]); // 8018D4FC
  if (!crb(c,0)) { goto L_8018D510; } // 8018D500
  c->r[0]=R32(c->r[29]+0x00000168u); // 8018D504
  c->r[0]=c->r[27]+c->r[0]; // 8018D508
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D50C
L_8018D510:;
  c->lr=0x8018D514u; f_80154438(c); // 8018D510
  c->r[3]=R32(c->r[29]+0x00000168u); // 8018D514
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018D518
  cmpu(c,0,c->r[0],c->r[27]); // 8018D51C
  if (!crb(c,2)) { goto L_8018D530; } // 8018D520
  c->r[3]=c->r[26]|c->r[26]; // 8018D524
  c->lr=0x8018D52Cu; f_80154438(c); // 8018D528
  goto L_8018D5A4; // 8018D52C
L_8018D530:;
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D530
  c->r[4]=0u+0x00000000u; // 8018D534
  c->r[3]=R32(c->r[29]+0x00000164u); // 8018D538
  c->r[5]=0u+0x00000030u; // 8018D53C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D540
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018D544
  c->r[3]=c->r[3]+c->r[0]; // 8018D548
  c->lr=0x8018D550u; f_8000443C(c); // 8018D54C
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D550
  c->r[4]=c->r[1]+0x000000B0u; // 8018D554
  c->r[3]=R32(c->r[29]+0x00000164u); // 8018D558
  c->r[5]=0u+0x00000030u; // 8018D55C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D560
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018D564
  c->r[3]=c->r[3]+c->r[0]; // 8018D568
  c->lr=0x8018D570u; f_80004338(c); // 8018D56C
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D570
  c->r[3]=c->r[26]|c->r[26]; // 8018D574
  c->r[4]=R32(c->r[29]+0x00000168u); // 8018D578
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D57C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8018D580
  c->r[5]=c->r[6]-c->r[4]; // 8018D584
  c->r[0]=c->r[6]+0x00000001u; // 8018D588
  c->r[4]=c->r[4]-c->r[6]; // 8018D58C
  c->r[4]=~(c->r[5]|c->r[4]); // 8018D590
  c->r[4]=sraw(c,c->r[4],31); // 8018D594
  c->r[0]=c->r[0]&~c->r[4]; // 8018D598
  W8(c->r[29]+0x00000161u,c->r[0]); // 8018D59C
  c->lr=0x8018D5A4u; f_80154438(c); // 8018D5A0
L_8018D5A4:;
  c->r[11]=0u+0x00000000u; // 8018D5A4
  c->r[0]=0u+0x00000001u; // 8018D5A8
  W16(c->r[1]+0x0000003Au,c->r[0]); // 8018D5AC
  c->r[12]=0u+0x00000015u; // 8018D5B0
  c->r[9]=R32(c->r[1]+0x00000028u); // 8018D5B4
  W8(c->r[1]+0x00000024u,c->r[11]); // 8018D5B8
  c->r[8]=R32(c->r[1]+0x0000002Cu); // 8018D5BC
  c->r[10]=R32(c->r[1]+0x00000024u); // 8018D5C0
  c->r[7]=R32(c->r[1]+0x00000030u); // 8018D5C4
  c->r[6]=R32(c->r[1]+0x00000034u); // 8018D5C8
  c->r[5]=R32(c->r[1]+0x00000038u); // 8018D5CC
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 8018D5D0
  c->r[3]=R32(c->r[1]+0x00000040u); // 8018D5D4
  c->r[0]=R32(c->r[1]+0x00000044u); // 8018D5D8
  W32(c->r[1]+0x00000020u,c->r[12]); // 8018D5DC
  W32(c->r[1]+0x0000004Cu,c->r[11]); // 8018D5E0
  W32(c->r[1]+0x00000048u,c->r[11]); // 8018D5E4
  W32(c->r[1]+0x00000050u,c->r[12]); // 8018D5E8
  W32(c->r[1]+0x00000054u,c->r[10]); // 8018D5EC
  W32(c->r[1]+0x00000058u,c->r[9]); // 8018D5F0
  W32(c->r[1]+0x0000005Cu,c->r[8]); // 8018D5F4
  W32(c->r[1]+0x00000060u,c->r[7]); // 8018D5F8
  W32(c->r[1]+0x00000064u,c->r[6]); // 8018D5FC
  W32(c->r[1]+0x00000068u,c->r[5]); // 8018D600
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 8018D604
  W32(c->r[1]+0x00000070u,c->r[3]); // 8018D608
  W32(c->r[1]+0x00000074u,c->r[0]); // 8018D60C
  W32(c->r[1]+0x00000078u,c->r[11]); // 8018D610
  W32(c->r[1]+0x0000007Cu,c->r[11]); // 8018D614
  c->lr=0x8018D61Cu; f_80154410(c); // 8018D618
  c->r[26]=c->r[3]|c->r[3]; // 8018D61C
  c->lr=0x8018D624u; f_80154410(c); // 8018D620
  c->r[4]=R8(c->r[29]+0x00000160u); // 8018D624
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D628
  c->r[0]=c->r[0]-c->r[4]; // 8018D62C
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[27]); // 8018D630
  if (!crb(c,0)) { goto L_8018D644; } // 8018D634
  c->r[0]=R32(c->r[29]+0x00000168u); // 8018D638
  c->r[0]=c->r[27]+c->r[0]; // 8018D63C
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D640
L_8018D644:;
  c->lr=0x8018D648u; f_80154438(c); // 8018D644
  c->r[3]=R32(c->r[29]+0x00000168u); // 8018D648
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018D64C
  cmpu(c,0,c->r[0],c->r[27]); // 8018D650
  if (!crb(c,2)) { goto L_8018D664; } // 8018D654
  c->r[3]=c->r[26]|c->r[26]; // 8018D658
  c->lr=0x8018D660u; f_80154438(c); // 8018D65C
  goto L_8018D6D8; // 8018D660
L_8018D664:;
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D664
  c->r[4]=0u+0x00000000u; // 8018D668
  c->r[3]=R32(c->r[29]+0x00000164u); // 8018D66C
  c->r[5]=0u+0x00000030u; // 8018D670
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D674
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018D678
  c->r[3]=c->r[3]+c->r[0]; // 8018D67C
  c->lr=0x8018D684u; f_8000443C(c); // 8018D680
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D684
  c->r[4]=c->r[1]+0x00000050u; // 8018D688
  c->r[3]=R32(c->r[29]+0x00000164u); // 8018D68C
  c->r[5]=0u+0x00000030u; // 8018D690
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D694
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018D698
  c->r[3]=c->r[3]+c->r[0]; // 8018D69C
  c->lr=0x8018D6A4u; f_80004338(c); // 8018D6A0
  c->r[0]=R8(c->r[29]+0x00000161u); // 8018D6A4
  c->r[3]=c->r[26]|c->r[26]; // 8018D6A8
  c->r[4]=R32(c->r[29]+0x00000168u); // 8018D6AC
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D6B0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8018D6B4
  c->r[5]=c->r[6]-c->r[4]; // 8018D6B8
  c->r[0]=c->r[6]+0x00000001u; // 8018D6BC
  c->r[4]=c->r[4]-c->r[6]; // 8018D6C0
  c->r[4]=~(c->r[5]|c->r[4]); // 8018D6C4
  c->r[4]=sraw(c,c->r[4],31); // 8018D6C8
  c->r[0]=c->r[0]&~c->r[4]; // 8018D6CC
  W8(c->r[29]+0x00000161u,c->r[0]); // 8018D6D0
  c->lr=0x8018D6D8u; f_80154438(c); // 8018D6D4
L_8018D6D8:;
  c->r[11]=c->r[1]+0x00000280u; // 8018D6D8
  c->lr=0x8018D6E0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018D6DC
  c->r[0]=R32(c->r[1]+0x00000284u); // 8018D6E0
  c->lr=c->r[0]; // 8018D6E4
  c->r[1]=c->r[1]+0x00000280u; // 8018D6E8
  return; // 8018D6EC
}

// WPADiRetrieveChannel
void f_8018D6F0(Ctx* __restrict c) {
  trace_call(0x8018D6F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018D6F0
  c->r[0]=c->lr; // 8018D6F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018D6F8
  c->r[11]=c->r[1]+0x00000020u; // 8018D6FC
  c->lr=0x8018D704u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018D700
  c->lr=0x8018D708u; f_801A16EC(c); // 8018D704
  c->r[31]=0u+0x80470000u; // 8018D708
  c->r[28]=c->r[3]|c->r[3]; // 8018D70C
  c->r[31]=c->r[31]+0xFFFFD7F0u; // 8018D710
  c->r[27]=0u+0x00000000u; // 8018D714
  c->r[30]=0u+0x00000000u; // 8018D718
  c->r[29]=c->r[13]+0xFFFFAFE0u; // 8018D71C
L_8018D720:;
  c->r[3]=c->r[30]+c->r[31]; // 8018D720
  c->r[4]=c->r[28]|c->r[28]; // 8018D724
  c->r[3]=c->r[3]+0x000002BDu; // 8018D728
  c->r[5]=0u+0x00000006u; // 8018D72C
  c->lr=0x8018D734u; f_802583D8(c); // 8018D730
  cmps(c,0,(int32_t)c->r[3],0); // 8018D734
  if (!crb(c,2)) { goto L_8018D75C; } // 8018D738
  c->r[0]=R8(c->r[29]+0x00000000u); // 8018D73C
  cmps(c,0,(int32_t)c->r[0],0); // 8018D740
  if (!crb(c,2)) { goto L_8018D75C; } // 8018D744
  c->r[0]=0u+0x00000001u; // 8018D748
  c->r[3]=c->r[13]+0xFFFFAFE0u; // 8018D74C
  W8(c->r[3]+c->r[27],c->r[0]); // 8018D750
  c->r[3]=c->r[27]|c->r[27]; // 8018D754
  goto L_8018D7D8; // 8018D758
L_8018D75C:;
  c->r[27]=c->r[27]+0x00000001u; // 8018D75C
  c->r[29]=c->r[29]+0x00000001u; // 8018D760
  cmps(c,0,(int32_t)c->r[27],4); // 8018D764
  c->r[30]=c->r[30]+0x00000046u; // 8018D768
  if (crb(c,0)) { IRQCHK(c); goto L_8018D720; } // 8018D76C
  c->r[0]=0u+0x00000004u; // 8018D770
  c->r[29]=0u+0x00000000u; // 8018D774
  c->r[3]=c->r[13]+0xFFFFAFE0u; // 8018D778
  c->ctr=c->r[0]; // 8018D77C
L_8018D780:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8018D780
  cmps(c,0,(int32_t)c->r[0],0); // 8018D784
  if (!crb(c,2)) { goto L_8018D7C8; } // 8018D788
  c->r[0]=c->r[29]+0x0000000Au; // 8018D78C
  c->r[3]=0u+0x80470000u; // 8018D790
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)70); // 8018D794
  c->r[31]=0u+0x00000001u; // 8018D798
  c->r[3]=c->r[3]+0xFFFFD7F0u; // 8018D79C
  c->r[4]=c->r[13]+0xFFFFAFE0u; // 8018D7A0
  c->r[3]=c->r[3]+c->r[0]; // 8018D7A4
  W8(c->r[4]+c->r[29],c->r[31]); // 8018D7A8
  c->r[4]=c->r[28]|c->r[28]; // 8018D7AC
  c->r[5]=0u+0x00000006u; // 8018D7B0
  c->r[3]=c->r[3]+0x00000001u; // 8018D7B4
  c->lr=0x8018D7BCu; f_80004338(c); // 8018D7B8
  W8(c->r[13]+0xFFFFAFE9u,c->r[31]); // 8018D7BC
  c->r[3]=c->r[29]|c->r[29]; // 8018D7C0
  goto L_8018D7D8; // 8018D7C4
L_8018D7C8:;
  c->r[3]=c->r[3]+0x00000001u; // 8018D7C8
  c->r[29]=c->r[29]+0x00000001u; // 8018D7CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018D780; } // 8018D7D0
  c->r[3]=0u+0xFFFFFFFFu; // 8018D7D4
L_8018D7D8:;
  c->r[11]=c->r[1]+0x00000020u; // 8018D7D8
  c->lr=0x8018D7E0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018D7DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018D7E0
  c->lr=c->r[0]; // 8018D7E4
  c->r[1]=c->r[1]+0x00000020u; // 8018D7E8
  return; // 8018D7EC
}

// fn_8018D7F0
void f_8018D7F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018D7F0
  c->r[0]=c->lr; // 8018D7F4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8018D7F8
  c->r[11]=c->r[1]+0x000000C0u; // 8018D7FC
  c->lr=0x8018D804u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018D800
  cmps(c,0,(int32_t)c->r[4],0); // 8018D804
  c->r[31]=0u+0x802E0000u; // 8018D808
  c->r[26]=R8(c->r[3]+0x00000056u); // 8018D80C
  c->r[27]=c->r[3]|c->r[3]; // 8018D810
  c->r[31]=c->r[31]+0xFFFFC410u; // 8018D814
  if (crb(c,2)) { goto L_8018DA24; } // 8018D818
  c->r[3]=c->r[31]+0x0000019Cu; // 8018D81C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018D820
  c->lr=0x8018D828u; f_801987DC(c); // 8018D824
  c->r[3]=c->r[26]|c->r[26]; // 8018D828
  c->lr=0x8018D830u; f_8018D6F0(c); // 8018D82C
  c->r[5]=0u+0x80470000u; // 8018D830
  c->r[4]=0u+0x80470000u; // 8018D834
  c->r[4]=c->r[4]+0xFFFF93E0u; // 8018D838
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018D83C
  c->r[5]=c->r[5]+0xFFFF83D0u; // 8018D840
  W8(c->r[4]+c->r[26],c->r[3]); // 8018D844
  c->r[28]=R32(c->r[5]+c->r[0]); // 8018D848
  c->lr=0x8018D850u; f_8018C6CC(c); // 8018D84C
  c->r[3]=c->r[27]|c->r[27]; // 8018D850
  c->r[4]=c->r[31]+0x000001B4u; // 8018D854
  c->r[5]=0u+0x00000010u; // 8018D858
  c->lr=0x8018D860u; f_802583D8(c); // 8018D85C
  cmps(c,0,(int32_t)c->r[3],0); // 8018D860
  if (!crb(c,2)) { goto L_8018D874; } // 8018D864
  c->r[0]=0u+0x00000000u; // 8018D868
  W8(c->r[28]+0x000008C1u,c->r[0]); // 8018D86C
  goto L_8018D87C; // 8018D870
L_8018D874:;
  c->r[0]=0u+0x000000FBu; // 8018D874
  W8(c->r[28]+0x000008C1u,c->r[0]); // 8018D878
L_8018D87C:;
  W8(c->r[28]+0x000008C3u,c->r[26]); // 8018D87C
  c->r[11]=0u+0x00000000u; // 8018D880
  c->r[6]=0u+0x80190000u; // 8018D884
  c->r[10]=0u+0x00000001u; // 8018D888
  W32(c->r[28]+0x000008B8u,c->r[11]); // 8018D88C
  c->r[9]=0u+0x00000064u; // 8018D890
  c->r[6]=c->r[6]+0xFFFFCE08u; // 8018D894
  c->r[8]=0u+0x00001770u; // 8018D898
  W32(c->r[28]+0x000008D8u,c->r[10]); // 8018D89C
  c->r[7]=0u+0x00000017u; // 8018D8A0
  c->r[0]=0u+0x00000006u; // 8018D8A4
  c->r[3]=c->r[1]+0x00000014u; // 8018D8A8
  W32(c->r[28]+0x000008BCu,c->r[11]); // 8018D8AC
  c->r[4]=c->r[1]+0x0000000Cu; // 8018D8B0
  c->r[5]=0u+0x00000004u; // 8018D8B4
  W8(c->r[28]+0x00000983u,c->r[9]); // 8018D8B8
  W8(c->r[28]+0x00000986u,c->r[11]); // 8018D8BC
  W8(c->r[28]+0x0000098Du,c->r[11]); // 8018D8C0
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 8018D8C4
  W16(c->r[1]+0x00000008u,c->r[10]); // 8018D8C8
  W32(c->r[1]+0x00000010u,c->r[7]); // 8018D8CC
  W16(c->r[1]+0x0000002Au,c->r[0]); // 8018D8D0
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 8018D8D4
  c->lr=0x8018D8DCu; f_80004338(c); // 8018D8D8
  c->r[3]=c->r[1]+0x00000018u; // 8018D8DC
  c->r[4]=c->r[1]+0x00000008u; // 8018D8E0
  c->r[5]=0u+0x00000002u; // 8018D8E4
  c->lr=0x8018D8ECu; f_80004338(c); // 8018D8E8
  c->r[0]=R16(c->r[1]+0x00000008u); // 8018D8EC
  c->r[29]=c->r[28]+0x00000934u; // 8018D8F0
  c->r[12]=R32(c->r[1]+0x0000000Cu); // 8018D8F4
  W16(c->r[1]+0x00000030u,c->r[0]); // 8018D8F8
  c->r[11]=R32(c->r[1]+0x00000010u); // 8018D8FC
  c->r[10]=R32(c->r[1]+0x00000014u); // 8018D900
  c->r[9]=R32(c->r[1]+0x00000018u); // 8018D904
  c->r[8]=R32(c->r[1]+0x0000001Cu); // 8018D908
  c->r[7]=R32(c->r[1]+0x00000020u); // 8018D90C
  c->r[6]=R32(c->r[1]+0x00000024u); // 8018D910
  c->r[5]=R32(c->r[1]+0x00000028u); // 8018D914
  c->r[4]=R32(c->r[1]+0x00000030u); // 8018D918
  c->r[3]=R32(c->r[1]+0x00000038u); // 8018D91C
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8018D920
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 8018D924
  W32(c->r[1]+0x00000034u,c->r[12]); // 8018D928
  W32(c->r[1]+0x00000040u,c->r[11]); // 8018D92C
  W32(c->r[1]+0x00000044u,c->r[10]); // 8018D930
  W32(c->r[1]+0x00000048u,c->r[9]); // 8018D934
  W32(c->r[1]+0x0000004Cu,c->r[8]); // 8018D938
  W32(c->r[1]+0x00000050u,c->r[7]); // 8018D93C
  W32(c->r[1]+0x00000054u,c->r[6]); // 8018D940
  W32(c->r[1]+0x00000058u,c->r[5]); // 8018D944
  W32(c->r[1]+0x0000005Cu,c->r[29]); // 8018D948
  W32(c->r[1]+0x00000060u,c->r[4]); // 8018D94C
  W32(c->r[1]+0x00000064u,c->r[12]); // 8018D950
  W32(c->r[1]+0x00000068u,c->r[3]); // 8018D954
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 8018D958
  c->lr=0x8018D960u; f_80154410(c); // 8018D95C
  c->r[29]=c->r[3]|c->r[3]; // 8018D960
  c->lr=0x8018D968u; f_80154410(c); // 8018D964
  c->r[4]=R8(c->r[28]+0x00000160u); // 8018D968
  c->r[0]=R8(c->r[28]+0x00000161u); // 8018D96C
  c->r[0]=c->r[0]-c->r[4]; // 8018D970
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[30]); // 8018D974
  if (!crb(c,0)) { goto L_8018D988; } // 8018D978
  c->r[0]=R32(c->r[28]+0x00000168u); // 8018D97C
  c->r[0]=c->r[30]+c->r[0]; // 8018D980
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D984
L_8018D988:;
  c->lr=0x8018D98Cu; f_80154438(c); // 8018D988
  c->r[3]=R32(c->r[28]+0x00000168u); // 8018D98C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018D990
  cmpu(c,0,c->r[0],c->r[30]); // 8018D994
  if (!crb(c,2)) { goto L_8018D9A8; } // 8018D998
  c->r[3]=c->r[29]|c->r[29]; // 8018D99C
  c->lr=0x8018D9A4u; f_80154438(c); // 8018D9A0
  goto L_8018DA1C; // 8018D9A4
L_8018D9A8:;
  c->r[0]=R8(c->r[28]+0x00000161u); // 8018D9A8
  c->r[4]=0u+0x00000000u; // 8018D9AC
  c->r[3]=R32(c->r[28]+0x00000164u); // 8018D9B0
  c->r[5]=0u+0x00000030u; // 8018D9B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D9B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018D9BC
  c->r[3]=c->r[3]+c->r[0]; // 8018D9C0
  c->lr=0x8018D9C8u; f_8000443C(c); // 8018D9C4
  c->r[0]=R8(c->r[28]+0x00000161u); // 8018D9C8
  c->r[4]=c->r[1]+0x00000040u; // 8018D9CC
  c->r[3]=R32(c->r[28]+0x00000164u); // 8018D9D0
  c->r[5]=0u+0x00000030u; // 8018D9D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D9D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018D9DC
  c->r[3]=c->r[3]+c->r[0]; // 8018D9E0
  c->lr=0x8018D9E8u; f_80004338(c); // 8018D9E4
  c->r[0]=R8(c->r[28]+0x00000161u); // 8018D9E8
  c->r[3]=c->r[29]|c->r[29]; // 8018D9EC
  c->r[4]=R32(c->r[28]+0x00000168u); // 8018D9F0
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D9F4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8018D9F8
  c->r[5]=c->r[6]-c->r[4]; // 8018D9FC
  c->r[0]=c->r[6]+0x00000001u; // 8018DA00
  c->r[4]=c->r[4]-c->r[6]; // 8018DA04
  c->r[4]=~(c->r[5]|c->r[4]); // 8018DA08
  c->r[4]=sraw(c,c->r[4],31); // 8018DA0C
  c->r[0]=c->r[0]&~c->r[4]; // 8018DA10
  W8(c->r[28]+0x00000161u,c->r[0]); // 8018DA14
  c->lr=0x8018DA1Cu; f_80154438(c); // 8018DA18
L_8018DA1C:;
  c->lr=0x8018DA20u; f_80161758(c); // 8018DA1C
  goto L_8018DC4C; // 8018DA20
L_8018DA24:;
  c->r[3]=c->r[31]+0x000001C8u; // 8018DA24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018DA28
  c->lr=0x8018DA30u; f_801987DC(c); // 8018DA2C
  c->r[3]=0u+0x80470000u; // 8018DA30
  c->r[4]=0u+0xFFFFFFFFu; // 8018DA34
  c->r[3]=c->r[3]+0xFFFF93E0u; // 8018DA38
  c->r[29]=R8(c->r[3]+c->r[26]); // 8018DA3C
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 8018DA40
  W8(c->r[3]+c->r[26],c->r[4]); // 8018DA44
  cmps(c,0,(int32_t)c->r[29],-1); // 8018DA48
  if (crb(c,2)) { goto L_8018DC40; } // 8018DA4C
  c->r[3]=0u+0x80470000u; // 8018DA50
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8018DA54
  c->r[3]=c->r[3]+0xFFFF83D0u; // 8018DA58
  c->r[28]=R32(c->r[3]+c->r[0]); // 8018DA5C
  W32(c->r[28]+0x000008BCu,c->r[4]); // 8018DA60
  c->r[12]=R32(c->r[28]+0x0000089Cu); // 8018DA64
  cmps(c,0,(int32_t)c->r[12],0); // 8018DA68
  if (crb(c,2)) { goto L_8018DA84; } // 8018DA6C
  c->r[3]=c->r[29]|c->r[29]; // 8018DA70
  c->r[4]=0u+0xFFFFFFFFu; // 8018DA74
  c->ctr=c->r[12]; // 8018DA78
  if (true) { c->lr=0x8018DA80u; dispatch(c,c->ctr); } // 8018DA7C
  goto L_8018DAB0; // 8018DA80
L_8018DA84:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)20); // 8018DA84
  c->r[3]=0u+0x80470000u; // 8018DA88
  c->r[3]=c->r[3]+0xFFFFBB30u; // 8018DA8C
  c->r[3]=c->r[3]+c->r[0]; // 8018DA90
  c->r[12]=R32(c->r[3]+0x00000010u); // 8018DA94
  cmps(c,0,(int32_t)c->r[12],0); // 8018DA98
  if (crb(c,2)) { goto L_8018DAB0; } // 8018DA9C
  c->r[3]=c->r[29]|c->r[29]; // 8018DAA0
  c->r[4]=0u+0xFFFFFFFFu; // 8018DAA4
  c->ctr=c->r[12]; // 8018DAA8
  if (true) { c->lr=0x8018DAB0u; dispatch(c,c->ctr); } // 8018DAAC
L_8018DAB0:;
  c->lr=0x8018DAB4u; f_80154410(c); // 8018DAB0
  c->r[27]=c->r[3]|c->r[3]; // 8018DAB4
  c->lr=0x8018DABCu; f_80154410(c); // 8018DAB8
  c->r[4]=R8(c->r[28]+0x00000160u); // 8018DABC
  c->r[0]=R8(c->r[28]+0x00000161u); // 8018DAC0
  c->r[0]=c->r[0]-c->r[4]; // 8018DAC4
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[30]); // 8018DAC8
  if (!crb(c,0)) { goto L_8018DADC; } // 8018DACC
  c->r[0]=R32(c->r[28]+0x00000168u); // 8018DAD0
  c->r[0]=c->r[30]+c->r[0]; // 8018DAD4
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018DAD8
L_8018DADC:;
  c->lr=0x8018DAE0u; f_80154438(c); // 8018DADC
  cmps(c,0,(int32_t)c->r[30],0); // 8018DAE0
  if (!crb(c,2)) { goto L_8018DAF8; } // 8018DAE4
  c->r[3]=c->r[27]|c->r[27]; // 8018DAE8
  c->lr=0x8018DAF0u; f_80154438(c); // 8018DAEC
  c->r[30]=0u+0x00000000u; // 8018DAF0
  goto L_8018DB24; // 8018DAF4
L_8018DAF8:;
  c->r[0]=R8(c->r[28]+0x00000160u); // 8018DAF8
  c->r[3]=c->r[1]+0x00000070u; // 8018DAFC
  c->r[4]=R32(c->r[28]+0x00000164u); // 8018DB00
  c->r[5]=0u+0x00000030u; // 8018DB04
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018DB08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018DB0C
  c->r[4]=c->r[4]+c->r[0]; // 8018DB10
  c->lr=0x8018DB18u; f_80004338(c); // 8018DB14
  c->r[3]=c->r[27]|c->r[27]; // 8018DB18
  c->lr=0x8018DB20u; f_80154438(c); // 8018DB1C
  c->r[30]=0u+0x00000001u; // 8018DB20
L_8018DB24:;
  cmps(c,0,(int32_t)c->r[30],0); // 8018DB24
  if (crb(c,2)) { goto L_8018DBE0; } // 8018DB28
  c->r[12]=R32(c->r[1]+0x0000009Cu); // 8018DB2C
  cmps(c,0,(int32_t)c->r[12],0); // 8018DB30
  if (crb(c,2)) { goto L_8018DB48; } // 8018DB34
  c->r[3]=c->r[29]|c->r[29]; // 8018DB38
  c->r[4]=0u+0xFFFFFFFFu; // 8018DB3C
  c->ctr=c->r[12]; // 8018DB40
  if (true) { c->lr=0x8018DB48u; dispatch(c,c->ctr); } // 8018DB44
L_8018DB48:;
  c->lr=0x8018DB4Cu; f_80154410(c); // 8018DB48
  c->r[26]=c->r[3]|c->r[3]; // 8018DB4C
  c->lr=0x8018DB54u; f_80154410(c); // 8018DB50
  c->r[4]=R8(c->r[28]+0x00000160u); // 8018DB54
  c->r[0]=R8(c->r[28]+0x00000161u); // 8018DB58
  c->r[0]=c->r[0]-c->r[4]; // 8018DB5C
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[27]); // 8018DB60
  if (!crb(c,0)) { goto L_8018DB74; } // 8018DB64
  c->r[0]=R32(c->r[28]+0x00000168u); // 8018DB68
  c->r[0]=c->r[27]+c->r[0]; // 8018DB6C
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018DB70
L_8018DB74:;
  c->lr=0x8018DB78u; f_80154438(c); // 8018DB74
  cmps(c,0,(int32_t)c->r[27],0); // 8018DB78
  if (!crb(c,2)) { goto L_8018DB8C; } // 8018DB7C
  c->r[3]=c->r[26]|c->r[26]; // 8018DB80
  c->lr=0x8018DB88u; f_80154438(c); // 8018DB84
  goto L_8018DBE0; // 8018DB88
L_8018DB8C:;
  c->r[0]=R8(c->r[28]+0x00000160u); // 8018DB8C
  c->r[4]=0u+0x00000000u; // 8018DB90
  c->r[3]=R32(c->r[28]+0x00000164u); // 8018DB94
  c->r[5]=0u+0x00000030u; // 8018DB98
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018DB9C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8018DBA0
  c->r[3]=c->r[3]+c->r[0]; // 8018DBA4
  c->lr=0x8018DBACu; f_8000443C(c); // 8018DBA8
  c->r[0]=R8(c->r[28]+0x00000160u); // 8018DBAC
  c->r[3]=c->r[26]|c->r[26]; // 8018DBB0
  c->r[4]=R32(c->r[28]+0x00000168u); // 8018DBB4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018DBB8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8018DBBC
  c->r[5]=c->r[6]-c->r[4]; // 8018DBC0
  c->r[0]=c->r[6]+0x00000001u; // 8018DBC4
  c->r[4]=c->r[4]-c->r[6]; // 8018DBC8
  c->r[4]=~(c->r[5]|c->r[4]); // 8018DBCC
  c->r[4]=sraw(c,c->r[4],31); // 8018DBD0
  c->r[0]=c->r[0]&~c->r[4]; // 8018DBD4
  W8(c->r[28]+0x00000160u,c->r[0]); // 8018DBD8
  c->lr=0x8018DBE0u; f_80154438(c); // 8018DBDC
L_8018DBE0:;
  cmps(c,0,(int32_t)c->r[30],0); // 8018DBE0
  if (!crb(c,2)) { IRQCHK(c); goto L_8018DAB0; } // 8018DBE4
  c->r[3]=c->r[31]+0x000001E0u; // 8018DBE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018DBEC
  c->lr=0x8018DBF4u; f_801987DC(c); // 8018DBF0
  c->r[4]=R32(c->r[28]+0x000008ACu); // 8018DBF4
  cmps(c,0,(int32_t)c->r[4],0); // 8018DBF8
  if (crb(c,2)) { goto L_8018DC0C; } // 8018DBFC
  c->r[5]=R32(c->r[28]+0x000008B4u); // 8018DC00
  c->r[3]=c->r[29]|c->r[29]; // 8018DC04
  c->lr=0x8018DC0Cu; f_8018E960(c); // 8018DC08
L_8018DC0C:;
  c->r[3]=c->r[29]|c->r[29]; // 8018DC0C
  c->lr=0x8018DC14u; f_8018C6CC(c); // 8018DC10
  c->r[0]=0u+0x00000000u; // 8018DC14
  c->r[3]=c->r[13]+0xFFFFAFE0u; // 8018DC18
  W8(c->r[3]+c->r[29],c->r[0]); // 8018DC1C
  c->r[12]=R32(c->r[28]+0x000008A4u); // 8018DC20
  cmps(c,0,(int32_t)c->r[12],0); // 8018DC24
  if (crb(c,2)) { goto L_8018DC4C; } // 8018DC28
  c->r[3]=c->r[29]|c->r[29]; // 8018DC2C
  c->r[4]=0u+0xFFFFFFFFu; // 8018DC30
  c->ctr=c->r[12]; // 8018DC34
  if (true) { c->lr=0x8018DC3Cu; dispatch(c,c->ctr); } // 8018DC38
  goto L_8018DC4C; // 8018DC3C
L_8018DC40:;
  c->r[3]=c->r[31]+0x000001F8u; // 8018DC40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018DC44
  c->lr=0x8018DC4Cu; f_801987DC(c); // 8018DC48
L_8018DC4C:;
  c->r[11]=c->r[1]+0x000000C0u; // 8018DC4C
  c->lr=0x8018DC54u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018DC50
  c->r[0]=R32(c->r[1]+0x000000C4u); // 8018DC54
  c->lr=c->r[0]; // 8018DC58
  c->r[1]=c->r[1]+0x000000C0u; // 8018DC5C
  return; // 8018DC60
}

// WPADiRecvCallback
void f_8018DC64(Ctx* __restrict c) {
  trace_call(0x8018DC64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018DC64
  c->r[0]=c->lr; // 8018DC68
  c->r[5]=0u+0x80470000u; // 8018DC6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018DC70
  c->r[5]=c->r[5]+0xFFFF93E0u; // 8018DC74
  c->r[0]=R8(c->r[5]+c->r[3]); // 8018DC78
  cmpu(c,0,c->r[0],0x00000004u); // 8018DC7C
  if (crb(c,1)) { goto L_8018DCAC; } // 8018DC80
  c->r[3]=c->r[0]|c->r[0]; // 8018DC84
  c->lr=0x8018DC8Cu; f_80193838(c); // 8018DC88
  cmps(c,0,(int32_t)c->r[3],0); // 8018DC8C
  c->r[4]=c->r[3]|c->r[3]; // 8018DC90
  if (crb(c,2)) { goto L_8018DCC0; } // 8018DC94
  c->r[3]=0u+0x802E0000u; // 8018DC98
  c->r[3]=c->r[3]+0xFFFFC650u; // 8018DC9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018DCA0
  c->lr=0x8018DCA8u; f_801987DC(c); // 8018DCA4
  goto L_8018DCC0; // 8018DCA8
L_8018DCAC:;
  c->r[3]=0u+0x802E0000u; // 8018DCAC
  c->r[4]=c->r[0]|c->r[0]; // 8018DCB0
  c->r[3]=c->r[3]+0xFFFFC668u; // 8018DCB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018DCB8
  c->lr=0x8018DCC0u; f_801987DC(c); // 8018DCBC
L_8018DCC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018DCC0
  c->lr=c->r[0]; // 8018DCC4
  c->r[1]=c->r[1]+0x00000010u; // 8018DCC8
  return; // 8018DCCC
}

// WPADGetAccGravityUnit
void f_8018DCD0(Ctx* __restrict c) {
  trace_call(0x8018DCD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018DCD0
  c->r[0]=c->lr; // 8018DCD4
  c->r[6]=0u+0x80470000u; // 8018DCD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018DCDC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018DCE0
  c->r[6]=c->r[6]+0xFFFF83D0u; // 8018DCE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8018DCE8
  c->r[31]=c->r[5]|c->r[5]; // 8018DCEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8018DCF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8018DCF4
  c->r[29]=c->r[4]|c->r[4]; // 8018DCF8
  c->r[30]=R32(c->r[6]+c->r[0]); // 8018DCFC
  c->lr=0x8018DD04u; f_80154410(c); // 8018DD00
  cmps(c,0,(int32_t)c->r[31],0); // 8018DD04
  if (crb(c,2)) { goto L_8018DD88; } // 8018DD08
  cmps(c,0,(int32_t)c->r[29],1); // 8018DD0C
  if (crb(c,2)) { goto L_8018DD58; } // 8018DD10
  if (!crb(c,0)) { goto L_8018DD88; } // 8018DD14
  cmps(c,0,(int32_t)c->r[29],0); // 8018DD18
  if (!crb(c,0)) { goto L_8018DD24; } // 8018DD1C
  goto L_8018DD88; // 8018DD20
L_8018DD24:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000874u); // 8018DD24
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000087Au); // 8018DD28
  c->r[0]=c->r[0]-c->r[4]; // 8018DD2C
  W16(c->r[31]+0x00000000u,c->r[0]); // 8018DD30
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000876u); // 8018DD34
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000087Cu); // 8018DD38
  c->r[0]=c->r[0]-c->r[4]; // 8018DD3C
  W16(c->r[31]+0x00000002u,c->r[0]); // 8018DD40
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000878u); // 8018DD44
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000087Eu); // 8018DD48
  c->r[0]=c->r[0]-c->r[4]; // 8018DD4C
  W16(c->r[31]+0x00000004u,c->r[0]); // 8018DD50
  goto L_8018DD88; // 8018DD54
L_8018DD58:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000088Eu); // 8018DD58
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000894u); // 8018DD5C
  c->r[0]=c->r[0]-c->r[4]; // 8018DD60
  W16(c->r[31]+0x00000000u,c->r[0]); // 8018DD64
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000890u); // 8018DD68
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000896u); // 8018DD6C
  c->r[0]=c->r[0]-c->r[4]; // 8018DD70
  W16(c->r[31]+0x00000002u,c->r[0]); // 8018DD74
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000892u); // 8018DD78
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000898u); // 8018DD7C
  c->r[0]=c->r[0]-c->r[4]; // 8018DD80
  W16(c->r[31]+0x00000004u,c->r[0]); // 8018DD84
L_8018DD88:;
  c->lr=0x8018DD8Cu; f_80154438(c); // 8018DD88
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018DD8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018DD90
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018DD94
  c->r[29]=R32(c->r[1]+0x00000014u); // 8018DD98
  c->lr=c->r[0]; // 8018DD9C
  c->r[1]=c->r[1]+0x00000020u; // 8018DDA0
  return; // 8018DDA4
}

// DisconnectCallback
void f_8018DDA8(Ctx* __restrict c) {
  trace_call(0x8018DDA8u);
  c->r[5]=0u+0x80470000u; // 8018DDA8
  cmps(c,0,(int32_t)c->r[4],-1); // 8018DDAC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8018DDB0
  c->r[5]=c->r[5]+0xFFFF83D0u; // 8018DDB4
  c->r[3]=R32(c->r[5]+c->r[0]); // 8018DDB8
  if (crb(c,2)) return; // 8018DDBC
  c->r[3]=R8(c->r[3]+0x000008C3u); // 8018DDC0
  f_801AA7F8(c); return; // 8018DDC4
  return; // 8018DDC8
}

// WPADDisconnect
void f_8018DDCC(Ctx* __restrict c) {
  stub_log(0x8018DDCCu);  return;
}

// fn_8018DE90
void f_8018DE90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018DE90
  c->r[0]=c->lr; // 8018DE94
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018DE98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018DE9C
  c->r[31]=c->r[3]|c->r[3]; // 8018DEA0
  c->lr=0x8018DEA8u; f_80154410(c); // 8018DEA4
  W8(c->r[13]+0xFFFFAFF2u,c->r[31]); // 8018DEA8
  c->lr=0x8018DEB0u; f_80154438(c); // 8018DEAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018DEB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018DEB4
  c->lr=c->r[0]; // 8018DEB8
  c->r[1]=c->r[1]+0x00000010u; // 8018DEBC
  return; // 8018DEC0
}

void hle_WPADProbe(Ctx*);
// WPADProbe
void f_8018DEC4(Ctx* __restrict c) {
  hle_WPADProbe(c);
}

// WPADSetSamplingCallback
void f_8018DF50(Ctx* __restrict c) {
  trace_call(0x8018DF50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018DF50
  c->r[0]=c->lr; // 8018DF54
  c->r[5]=0u+0x802E0000u; // 8018DF58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018DF5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018DF60
  c->r[31]=c->r[3]|c->r[3]; // 8018DF64
  c->r[3]=c->r[5]+0xFFFFC694u; // 8018DF68
  W32(c->r[1]+0x00000008u,c->r[30]); // 8018DF6C
  c->r[30]=c->r[4]|c->r[4]; // 8018DF70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018DF74
  c->lr=0x8018DF7Cu; f_801987DC(c); // 8018DF78
  c->lr=0x8018DF80u; f_80154410(c); // 8018DF7C
  c->r[4]=0u+0x80470000u; // 8018DF80
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8018DF84
  c->r[4]=c->r[4]+0xFFFF83D0u; // 8018DF88
  c->r[4]=R32(c->r[4]+c->r[0]); // 8018DF8C
  c->r[31]=R32(c->r[4]+0x000008A8u); // 8018DF90
  W32(c->r[4]+0x000008A8u,c->r[30]); // 8018DF94
  c->lr=0x8018DF9Cu; f_80154438(c); // 8018DF98
  c->r[3]=c->r[31]|c->r[31]; // 8018DF9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018DFA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8018DFA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018DFA8
  c->lr=c->r[0]; // 8018DFAC
  c->r[1]=c->r[1]+0x00000010u; // 8018DFB0
  return; // 8018DFB4
}

