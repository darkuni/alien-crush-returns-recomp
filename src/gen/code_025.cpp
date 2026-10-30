#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801FA230
void f_801FA230(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA230
  c->r[0]=c->lr; // 801FA234
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FA238
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FA23C
  c->r[31]=0u+0x00000000u; // 801FA240
  cmpu(c,0,c->r[3],c->r[31]); // 801FA244
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FA248
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FA24C
  c->r[29]=c->r[3]|c->r[3]; // 801FA250
  if (!crb(c,2)) { goto L_801FA260; } // 801FA254
  c->r[3]=0u+0xFFFFFFFDu; // 801FA258
  goto L_801FA30C; // 801FA25C
L_801FA260:;
  c->lr=0x801FA264u; f_801FA9BC(c); // 801FA260
  c->r[3]=0u+0x802F0000u; // 801FA264
  c->r[4]=0u+0x00000000u; // 801FA268
  c->r[3]=c->r[3]+0xFFFF95D8u; // 801FA26C
  c->r[5]=0u+0x00000003u; // 801FA270
  c->lr=0x801FA278u; f_801FA828(c); // 801FA274
  cmps(c,0,(int32_t)c->r[3],0); // 801FA278
  c->r[31]=c->r[3]|c->r[3]; // 801FA27C
  if (!crb(c,2)) { goto L_801FA2FC; } // 801FA280
  c->r[3]=0u+0x804A0000u; // 801FA284
  c->r[30]=R32(c->r[13]+0xFFFFB0C4u); // 801FA288
  c->r[3]=c->r[3]+0x00004A40u; // 801FA28C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801FA290
  cmps(c,0,(int32_t)c->r[0],0); // 801FA294
  if (crb(c,0)) { goto L_801FA2A4; } // 801FA298
  cmps(c,0,(int32_t)c->r[0],3); // 801FA29C
  if (crb(c,0)) { goto L_801FA2AC; } // 801FA2A0
L_801FA2A4:;
  c->r[31]=0u+0xFFFFFFF9u; // 801FA2A4
  goto L_801FA2FC; // 801FA2A8
L_801FA2AC:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)2332); // 801FA2AC
  c->r[4]=c->r[30]+c->r[0]; // 801FA2B0
  c->r[0]=R8(c->r[4]+0x00000008u); // 801FA2B4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801FA2B8
  if (crb(c,2)) { goto L_801FA2DC; } // 801FA2BC
  c->r[0]=0u+0x00000002u; // 801FA2C0
  c->r[3]=c->r[29]+0x00000002u; // 801FA2C4
  W8(c->r[29]+0x00000000u,c->r[0]); // 801FA2C8
  c->r[4]=c->r[4]+0x000007C8u; // 801FA2CC
  c->r[5]=0u+0x00000004u; // 801FA2D0
  c->lr=0x801FA2D8u; f_80004338(c); // 801FA2D4
  goto L_801FA2F4; // 801FA2D8
L_801FA2DC:;
  c->r[0]=0u+0x00000001u; // 801FA2DC
  c->r[3]=c->r[29]+0x00000002u; // 801FA2E0
  W8(c->r[29]+0x00000000u,c->r[0]); // 801FA2E4
  c->r[4]=c->r[4]+0x000007C8u; // 801FA2E8
  c->r[5]=0u+0x0000015Cu; // 801FA2EC
  c->lr=0x801FA2F4u; f_80004338(c); // 801FA2F0
L_801FA2F4:;
  c->r[0]=R8(c->r[30]+0x00000006u); // 801FA2F4
  W8(c->r[29]+0x00000001u,c->r[0]); // 801FA2F8
L_801FA2FC:;
  c->r[3]=0u+0x804A0000u; // 801FA2FC
  c->r[3]=c->r[3]+0x00004A20u; // 801FA300
  c->lr=0x801FA308u; f_801557A8(c); // 801FA304
  c->r[3]=c->r[31]|c->r[31]; // 801FA308
L_801FA30C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FA30C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FA310
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FA314
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FA318
  c->lr=c->r[0]; // 801FA31C
  c->r[1]=c->r[1]+0x00000020u; // 801FA320
  return; // 801FA324
}

// fn_801FA328
void f_801FA328(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA328
  c->r[0]=c->lr; // 801FA32C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FA330
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FA334
  c->r[31]=c->r[3]|c->r[3]; // 801FA338
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FA33C
  c->r[30]=0u+0x00000000u; // 801FA340
  cmpu(c,0,c->r[3],c->r[30]); // 801FA344
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FA348
  W32(c->r[1]+0x00000010u,c->r[28]); // 801FA34C
  if (!crb(c,2)) { goto L_801FA35C; } // 801FA350
  c->r[3]=0u+0xFFFFFFFDu; // 801FA354
  goto L_801FA460; // 801FA358
L_801FA35C:;
  c->lr=0x801FA360u; f_801FA9BC(c); // 801FA35C
  c->r[3]=0u+0x802F0000u; // 801FA360
  c->r[4]=0u+0x00000000u; // 801FA364
  c->r[3]=c->r[3]+0xFFFF95F0u; // 801FA368
  c->r[5]=0u+0x00000003u; // 801FA36C
  c->lr=0x801FA374u; f_801FA828(c); // 801FA370
  cmps(c,0,(int32_t)c->r[3],0); // 801FA374
  c->r[30]=c->r[3]|c->r[3]; // 801FA378
  if (!crb(c,2)) { goto L_801FA450; } // 801FA37C
  c->r[3]=0u+0x804A0000u; // 801FA380
  c->r[29]=R32(c->r[13]+0xFFFFB0C4u); // 801FA384
  c->r[3]=c->r[3]+0x00004A40u; // 801FA388
  c->r[28]=R32(c->r[3]+0x00000004u); // 801FA38C
  cmps(c,0,(int32_t)c->r[28],0); // 801FA390
  if (crb(c,0)) { goto L_801FA3A0; } // 801FA394
  cmps(c,0,(int32_t)c->r[28],3); // 801FA398
  if (crb(c,0)) { goto L_801FA3A8; } // 801FA39C
L_801FA3A0:;
  c->r[30]=0u+0xFFFFFFF9u; // 801FA3A0
  goto L_801FA450; // 801FA3A4
L_801FA3A8:;
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)2332); // 801FA3A8
  c->r[3]=c->r[31]+0x0000001Cu; // 801FA3AC
  c->r[5]=0u+0x0000000Cu; // 801FA3B0
  c->r[4]=c->r[29]+c->r[0]; // 801FA3B4
  c->r[4]=c->r[4]+0x00000020u; // 801FA3B8
  c->lr=0x801FA3C0u; f_80004338(c); // 801FA3BC
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)2332); // 801FA3C0
  c->r[4]=c->r[29]+c->r[0]; // 801FA3C4
  c->r[0]=R8(c->r[4]+0x00000008u); // 801FA3C8
  c->r[0]=rotl(c->r[0],0)&0x00000006u; cr0(c,c->r[0]); // 801FA3CC
  if (crb(c,2)) { goto L_801FA3F0; } // 801FA3D0
  c->r[0]=0u+0x00000001u; // 801FA3D4
  c->r[3]=c->r[31]+0x00000008u; // 801FA3D8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801FA3DC
  c->r[4]=c->r[4]+0x0000000Cu; // 801FA3E0
  c->r[5]=0u+0x00000014u; // 801FA3E4
  c->lr=0x801FA3ECu; f_80004338(c); // 801FA3E8
  goto L_801FA408; // 801FA3EC
L_801FA3F0:;
  c->r[0]=0u+0x00000000u; // 801FA3F0
  c->r[3]=c->r[31]+0x00000008u; // 801FA3F4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801FA3F8
  c->r[4]=c->r[4]+0x0000000Cu; // 801FA3FC
  c->r[5]=0u+0x00000014u; // 801FA400
  c->lr=0x801FA408u; f_80004338(c); // 801FA404
L_801FA408:;
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)2332); // 801FA408
  c->r[4]=c->r[29]+c->r[0]; // 801FA40C
  c->r[0]=R8(c->r[4]+0x00000008u); // 801FA410
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801FA414
  if (crb(c,2)) { goto L_801FA438; } // 801FA418
  c->r[0]=0u+0x00000001u; // 801FA41C
  c->r[3]=c->r[31]+0x00000028u; // 801FA420
  W32(c->r[31]+0x00000004u,c->r[0]); // 801FA424
  c->r[4]=c->r[4]+0x0000002Cu; // 801FA428
  c->r[5]=0u+0x0000079Cu; // 801FA42C
  c->lr=0x801FA434u; f_80004338(c); // 801FA430
  goto L_801FA450; // 801FA434
L_801FA438:;
  c->r[0]=0u+0x00000000u; // 801FA438
  c->r[3]=c->r[31]+0x00000028u; // 801FA43C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801FA440
  c->r[4]=0u+0x00000000u; // 801FA444
  c->r[5]=0u+0x0000079Cu; // 801FA448
  c->lr=0x801FA450u; f_8000443C(c); // 801FA44C
L_801FA450:;
  c->r[3]=0u+0x804A0000u; // 801FA450
  c->r[3]=c->r[3]+0x00004A20u; // 801FA454
  c->lr=0x801FA45Cu; f_801557A8(c); // 801FA458
  c->r[3]=c->r[30]|c->r[30]; // 801FA45C
L_801FA460:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FA460
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FA464
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FA468
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FA46C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801FA470
  c->lr=c->r[0]; // 801FA474
  c->r[1]=c->r[1]+0x00000020u; // 801FA478
  return; // 801FA47C
}

// fn_801FA480
void f_801FA480(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA480
  c->r[0]=c->lr; // 801FA484
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FA488
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FA48C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FA490
  c->r[30]=0u+0x804A0000u; // 801FA494
  c->r[30]=c->r[30]+0x00004A20u; // 801FA498
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FA49C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801FA4A0
  c->lr=0x801FA4A8u; f_8015716C(c); // 801FA4A4
  cmps(c,0,(int32_t)c->r[3],0); // 801FA4A8
  if (!crb(c,2)) { goto L_801FA4B8; } // 801FA4AC
  c->r[3]=0u+0xFFFFFFFBu; // 801FA4B0
  goto L_801FA564; // 801FA4B4
L_801FA4B8:;
  c->lr=0x801FA4BCu; f_801FA9BC(c); // 801FA4B8
  c->r[3]=0u+0x802F0000u; // 801FA4BC
  c->r[4]=0u+0x00000000u; // 801FA4C0
  c->r[3]=c->r[3]+0xFFFF9608u; // 801FA4C4
  c->lr=0x801FA4CCu; f_80186284(c); // 801FA4C8
  cmps(c,0,(int32_t)c->r[3],0); // 801FA4CC
  c->r[28]=c->r[3]|c->r[3]; // 801FA4D0
  if (!crb(c,0)) { goto L_801FA4F0; } // 801FA4D4
  cmps(c,0,(int32_t)c->r[3],-6); // 801FA4D8
  if (!crb(c,2)) { goto L_801FA4E8; } // 801FA4DC
  c->r[29]=0u+0xFFFFFFF8u; // 801FA4E0
  goto L_801FA558; // 801FA4E4
L_801FA4E8:;
  c->r[29]=0u+0xFFFFFFFEu; // 801FA4E8
  goto L_801FA558; // 801FA4EC
L_801FA4F0:;
  c->r[31]=c->r[30]+0x00000020u; // 801FA4F0
  c->r[7]=c->r[30]+0x00000040u; // 801FA4F4
  c->r[0]=0u+0x00000020u; // 801FA4F8
  W32(c->r[30]+0x00000040u,c->r[31]); // 801FA4FC
  c->r[4]=0u+0x00000007u; // 801FA500
  c->r[5]=0u+0x00000000u; // 801FA504
  W32(c->r[7]+0x00000004u,c->r[0]); // 801FA508
  c->r[6]=0u+0x00000001u; // 801FA50C
  c->lr=0x801FA514u; f_80186F6C(c); // 801FA510
  cmps(c,0,(int32_t)c->r[3],0); // 801FA514
  if (!crb(c,0)) { goto L_801FA524; } // 801FA518
  c->r[29]=0u+0xFFFFFFFEu; // 801FA51C
  goto L_801FA544; // 801FA520
L_801FA524:;
  c->r[29]=R32(c->r[30]+0x00000020u); // 801FA524
  cmps(c,0,(int32_t)c->r[29],0); // 801FA528
  if (!crb(c,2)) { goto L_801FA544; } // 801FA52C
  c->r[29]=R32(c->r[31]+0x00000004u); // 801FA530
  cmps(c,0,(int32_t)c->r[29],0); // 801FA534
  if (crb(c,0)) { goto L_801FA540; } // 801FA538
  goto L_801FA544; // 801FA53C
L_801FA540:;
  c->r[29]=0u+0xFFFFFFFFu; // 801FA540
L_801FA544:;
  c->r[3]=c->r[28]|c->r[28]; // 801FA544
  c->lr=0x801FA54Cu; f_80186464(c); // 801FA548
  cmps(c,0,(int32_t)c->r[3],0); // 801FA54C
  if (!crb(c,0)) { goto L_801FA558; } // 801FA550
  c->r[29]=0u+0xFFFFFFFFu; // 801FA554
L_801FA558:;
  c->r[3]=c->r[30]+0x00000000u; // 801FA558
  c->lr=0x801FA560u; f_801557A8(c); // 801FA55C
  c->r[3]=c->r[29]|c->r[29]; // 801FA560
L_801FA564:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FA564
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FA568
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FA56C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FA570
  c->r[28]=R32(c->r[1]+0x00000010u); // 801FA574
  c->lr=c->r[0]; // 801FA578
  c->r[1]=c->r[1]+0x00000020u; // 801FA57C
  return; // 801FA580
}

// fn_801FA584
void f_801FA584(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA584
  c->r[0]=c->lr; // 801FA588
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FA58C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FA590
  c->r[31]=0u+0x804A0000u; // 801FA594
  c->r[31]=c->r[31]+0x00004A20u; // 801FA598
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FA59C
  c->r[30]=0u+0x00000000u; // 801FA5A0
  cmpu(c,0,c->r[3],c->r[30]); // 801FA5A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FA5A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801FA5AC
  c->r[28]=c->r[3]|c->r[3]; // 801FA5B0
  if (!crb(c,2)) { goto L_801FA5C0; } // 801FA5B4
  c->r[3]=0u+0xFFFFFFFDu; // 801FA5B8
  goto L_801FA68C; // 801FA5BC
L_801FA5C0:;
  c->lr=0x801FA5C4u; f_8015716C(c); // 801FA5C0
  cmps(c,0,(int32_t)c->r[3],0); // 801FA5C4
  if (!crb(c,2)) { goto L_801FA5D4; } // 801FA5C8
  c->r[3]=0u+0xFFFFFFFBu; // 801FA5CC
  goto L_801FA68C; // 801FA5D0
L_801FA5D4:;
  c->lr=0x801FA5D8u; f_801FA9BC(c); // 801FA5D4
  c->r[3]=0u+0x802F0000u; // 801FA5D8
  c->r[4]=0u+0x00000000u; // 801FA5DC
  c->r[3]=c->r[3]+0xFFFF9608u; // 801FA5E0
  c->lr=0x801FA5E8u; f_80186284(c); // 801FA5E4
  cmps(c,0,(int32_t)c->r[3],0); // 801FA5E8
  c->r[29]=c->r[3]|c->r[3]; // 801FA5EC
  if (!crb(c,0)) { goto L_801FA60C; } // 801FA5F0
  cmps(c,0,(int32_t)c->r[3],-6); // 801FA5F4
  if (!crb(c,2)) { goto L_801FA604; } // 801FA5F8
  c->r[30]=0u+0xFFFFFFF8u; // 801FA5FC
  goto L_801FA680; // 801FA600
L_801FA604:;
  c->r[30]=0u+0xFFFFFFFEu; // 801FA604
  goto L_801FA680; // 801FA608
L_801FA60C:;
  c->r[8]=R32(c->r[13]+0xFFFFB0C4u); // 801FA60C
  c->r[7]=c->r[31]+0x00000040u; // 801FA610
  c->r[4]=c->r[31]+0x00000020u; // 801FA614
  c->r[5]=0u+0x00000020u; // 801FA618
  c->r[0]=0u+0x00000006u; // 801FA61C
  W32(c->r[31]+0x00000040u,c->r[4]); // 801FA620
  c->r[4]=0u+0x00000008u; // 801FA624
  c->r[6]=0u+0x00000002u; // 801FA628
  W32(c->r[7]+0x00000004u,c->r[5]); // 801FA62C
  c->r[5]=0u+0x00000000u; // 801FA630
  W32(c->r[7]+0x00000008u,c->r[8]); // 801FA634
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 801FA638
  c->lr=0x801FA640u; f_80186F6C(c); // 801FA63C
  cmps(c,0,(int32_t)c->r[3],0); // 801FA640
  if (!crb(c,0)) { goto L_801FA650; } // 801FA644
  c->r[30]=0u+0xFFFFFFFEu; // 801FA648
  goto L_801FA66C; // 801FA64C
L_801FA650:;
  c->r[30]=R32(c->r[31]+0x00000020u); // 801FA650
  cmps(c,0,(int32_t)c->r[30],0); // 801FA654
  if (!crb(c,2)) { goto L_801FA66C; } // 801FA658
  c->r[4]=R32(c->r[13]+0xFFFFB0C4u); // 801FA65C
  c->r[3]=c->r[28]|c->r[28]; // 801FA660
  c->r[5]=0u+0x00000006u; // 801FA664
  c->lr=0x801FA66Cu; f_80004338(c); // 801FA668
L_801FA66C:;
  c->r[3]=c->r[29]|c->r[29]; // 801FA66C
  c->lr=0x801FA674u; f_80186464(c); // 801FA670
  cmps(c,0,(int32_t)c->r[3],0); // 801FA674
  if (!crb(c,0)) { goto L_801FA680; } // 801FA678
  c->r[30]=0u+0xFFFFFFFFu; // 801FA67C
L_801FA680:;
  c->r[3]=c->r[31]+0x00000000u; // 801FA680
  c->lr=0x801FA688u; f_801557A8(c); // 801FA684
  c->r[3]=c->r[30]|c->r[30]; // 801FA688
L_801FA68C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FA68C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FA690
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FA694
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FA698
  c->r[28]=R32(c->r[1]+0x00000010u); // 801FA69C
  c->lr=c->r[0]; // 801FA6A0
  c->r[1]=c->r[1]+0x00000020u; // 801FA6A4
  return; // 801FA6A8
}

// fn_801FA6AC
void f_801FA6AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA6AC
  c->r[0]=c->lr; // 801FA6B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FA6B4
  c->r[11]=c->r[1]+0x00000030u; // 801FA6B8
  c->lr=0x801FA6C0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FA6BC
  c->r[29]=c->r[3]|c->r[3]; // 801FA6C0
  c->r[30]=c->r[4]|c->r[4]; // 801FA6C4
  c->r[31]=c->r[5]|c->r[5]; // 801FA6C8
  c->r[27]=0u+0x00000000u; // 801FA6CC
  c->r[26]=0u+0x00000000u; // 801FA6D0
  c->r[25]=0u+0x00000000u; // 801FA6D4
  c->lr=0x801FA6DCu; f_801FA9BC(c); // 801FA6D8
  c->r[3]=0u+0x802F0000u; // 801FA6DC
  c->r[4]=0u+0x00000000u; // 801FA6E0
  c->r[3]=c->r[3]+0xFFFF961Cu; // 801FA6E4
  c->r[5]=0u+0x00000003u; // 801FA6E8
  c->lr=0x801FA6F0u; f_801FA828(c); // 801FA6EC
  cmps(c,0,(int32_t)c->r[3],0); // 801FA6F0
  c->r[28]=c->r[3]|c->r[3]; // 801FA6F4
  if (!crb(c,2)) { goto L_801FA7DC; } // 801FA6F8
  c->r[4]=R32(c->r[13]+0xFFFFB0C4u); // 801FA6FC
  c->r[6]=0u+0x00000000u; // 801FA700
  c->r[3]=0u+0x00000001u; // 801FA704
  c->r[5]=R8(c->r[4]+0x00000008u); // 801FA708
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801FA70C
  if (crb(c,2)) { goto L_801FA744; } // 801FA710
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801FA714
  if (crb(c,2)) { goto L_801FA724; } // 801FA718
  c->r[27]=((c->r[6])&0x20)?0u:(c->r[3]<<((c->r[6])&31)); // 801FA71C
  goto L_801FA744; // 801FA720
L_801FA724:;
  c->r[0]=R8(c->r[4]+0x000007CAu); // 801FA724
  cmpu(c,0,c->r[0],0x00000001u); // 801FA728
  if (crb(c,2)) { goto L_801FA734; } // 801FA72C
  c->r[26]=((c->r[6])&0x20)?0u:(c->r[3]<<((c->r[6])&31)); // 801FA730
L_801FA734:;
  c->r[0]=R8(c->r[4]+0x000007CAu); // 801FA734
  cmpu(c,0,c->r[0],0x00000001u); // 801FA738
  if (!crb(c,2)) { goto L_801FA744; } // 801FA73C
  c->r[25]=((c->r[6])&0x20)?0u:(c->r[3]<<((c->r[6])&31)); // 801FA740
L_801FA744:;
  c->r[5]=R8(c->r[4]+0x00000924u); // 801FA744
  c->r[6]=0u+0x00000001u; // 801FA748
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801FA74C
  if (crb(c,2)) { goto L_801FA790; } // 801FA750
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801FA754
  if (crb(c,2)) { goto L_801FA768; } // 801FA758
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[3]<<((c->r[6])&31)); // 801FA75C
  c->r[27]=c->r[27]|c->r[0]; // 801FA760
  goto L_801FA790; // 801FA764
L_801FA768:;
  c->r[0]=R8(c->r[4]+0x000010E6u); // 801FA768
  cmpu(c,0,c->r[0],0x00000001u); // 801FA76C
  if (crb(c,2)) { goto L_801FA77C; } // 801FA770
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[3]<<((c->r[6])&31)); // 801FA774
  c->r[26]=c->r[26]|c->r[0]; // 801FA778
L_801FA77C:;
  c->r[0]=R8(c->r[4]+0x000010E6u); // 801FA77C
  cmpu(c,0,c->r[0],0x00000001u); // 801FA780
  if (!crb(c,2)) { goto L_801FA790; } // 801FA784
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[3]<<((c->r[6])&31)); // 801FA788
  c->r[25]=c->r[25]|c->r[0]; // 801FA78C
L_801FA790:;
  c->r[5]=R8(c->r[4]+0x00001240u); // 801FA790
  c->r[6]=0u+0x00000002u; // 801FA794
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801FA798
  if (crb(c,2)) { goto L_801FA7DC; } // 801FA79C
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801FA7A0
  if (crb(c,2)) { goto L_801FA7B4; } // 801FA7A4
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[3]<<((c->r[6])&31)); // 801FA7A8
  c->r[27]=c->r[27]|c->r[0]; // 801FA7AC
  goto L_801FA7DC; // 801FA7B0
L_801FA7B4:;
  c->r[0]=R8(c->r[4]+0x00001A02u); // 801FA7B4
  cmpu(c,0,c->r[0],0x00000001u); // 801FA7B8
  if (crb(c,2)) { goto L_801FA7C8; } // 801FA7BC
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[3]<<((c->r[6])&31)); // 801FA7C0
  c->r[26]=c->r[26]|c->r[0]; // 801FA7C4
L_801FA7C8:;
  c->r[0]=R8(c->r[4]+0x00001A02u); // 801FA7C8
  cmpu(c,0,c->r[0],0x00000001u); // 801FA7CC
  if (!crb(c,2)) { goto L_801FA7DC; } // 801FA7D0
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[3]<<((c->r[6])&31)); // 801FA7D4
  c->r[25]=c->r[25]|c->r[0]; // 801FA7D8
L_801FA7DC:;
  c->r[3]=0u+0x804A0000u; // 801FA7DC
  c->r[3]=c->r[3]+0x00004A20u; // 801FA7E0
  c->lr=0x801FA7E8u; f_801557A8(c); // 801FA7E4
  cmps(c,0,(int32_t)c->r[29],0); // 801FA7E8
  if (crb(c,2)) { goto L_801FA7F4; } // 801FA7EC
  W32(c->r[29]+0x00000000u,c->r[27]); // 801FA7F0
L_801FA7F4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FA7F4
  if (crb(c,2)) { goto L_801FA800; } // 801FA7F8
  W32(c->r[30]+0x00000000u,c->r[26]); // 801FA7FC
L_801FA800:;
  cmps(c,0,(int32_t)c->r[31],0); // 801FA800
  if (crb(c,2)) { goto L_801FA80C; } // 801FA804
  W32(c->r[31]+0x00000000u,c->r[25]); // 801FA808
L_801FA80C:;
  c->r[11]=c->r[1]+0x00000030u; // 801FA80C
  c->r[3]=c->r[28]|c->r[28]; // 801FA810
  c->lr=0x801FA818u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FA814
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FA818
  c->lr=c->r[0]; // 801FA81C
  c->r[1]=c->r[1]+0x00000030u; // 801FA820
  return; // 801FA824
}

// fn_801FA828
void f_801FA828(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA828
  c->r[0]=c->lr; // 801FA82C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FA830
  c->r[11]=c->r[1]+0x00000020u; // 801FA834
  c->lr=0x801FA83Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FA838
  c->r[31]=0u+0x804A0000u; // 801FA83C
  c->r[27]=c->r[4]|c->r[4]; // 801FA840
  c->r[28]=c->r[5]|c->r[5]; // 801FA844
  c->r[30]=0u+0x00000000u; // 801FA848
  c->r[31]=c->r[31]+0x00004A20u; // 801FA84C
  c->lr=0x801FA854u; f_8015716C(c); // 801FA850
  cmps(c,0,(int32_t)c->r[3],0); // 801FA854
  if (!crb(c,2)) { goto L_801FA864; } // 801FA858
  c->r[3]=0u+0xFFFFFFFBu; // 801FA85C
  goto L_801FA9A4; // 801FA860
L_801FA864:;
  c->lr=0x801FA868u; f_801FA9BC(c); // 801FA864
  c->r[3]=0u+0x802F0000u; // 801FA868
  c->r[4]=0u+0x00000000u; // 801FA86C
  c->r[3]=c->r[3]+0xFFFF9608u; // 801FA870
  c->lr=0x801FA878u; f_80186284(c); // 801FA874
  cmps(c,0,(int32_t)c->r[3],0); // 801FA878
  c->r[29]=c->r[3]|c->r[3]; // 801FA87C
  if (!crb(c,0)) { goto L_801FA89C; } // 801FA880
  cmps(c,0,(int32_t)c->r[3],-6); // 801FA884
  if (!crb(c,2)) { goto L_801FA894; } // 801FA888
  c->r[30]=0u+0xFFFFFFF8u; // 801FA88C
  goto L_801FA998; // 801FA890
L_801FA894:;
  c->r[30]=0u+0xFFFFFFFEu; // 801FA894
  goto L_801FA998; // 801FA898
L_801FA89C:;
  c->r[6]=R32(c->r[13]+0xFFFFB0C4u); // 801FA89C
  cmps(c,0,(int32_t)c->r[28],5); // 801FA8A0
  c->r[4]=c->r[31]+0x00000040u; // 801FA8A4
  c->r[3]=c->r[31]+0x00000020u; // 801FA8A8
  c->r[5]=0u+0x00001B5Cu; // 801FA8AC
  c->r[0]=0u+0x00000020u; // 801FA8B0
  W32(c->r[31]+0x00000040u,c->r[6]); // 801FA8B4
  W32(c->r[4]+0x00000004u,c->r[5]); // 801FA8B8
  W32(c->r[4]+0x00000008u,c->r[3]); // 801FA8BC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801FA8C0
  if (crb(c,2)) { goto L_801FA8E8; } // 801FA8C4
  if (!crb(c,0)) { goto L_801FA8DC; } // 801FA8C8
  cmps(c,0,(int32_t)c->r[28],3); // 801FA8CC
  if (crb(c,2)) { goto L_801FA8E8; } // 801FA8D0
  if (!crb(c,0)) { goto L_801FA93C; } // 801FA8D4
  goto L_801FA984; // 801FA8D8
L_801FA8DC:;
  cmps(c,0,(int32_t)c->r[28],7); // 801FA8DC
  if (!crb(c,0)) { goto L_801FA984; } // 801FA8E0
  goto L_801FA93C; // 801FA8E4
L_801FA8E8:;
  c->r[3]=c->r[29]|c->r[29]; // 801FA8E8
  c->r[4]=c->r[28]|c->r[28]; // 801FA8EC
  c->r[7]=c->r[31]+0x00000040u; // 801FA8F0
  c->r[5]=0u+0x00000000u; // 801FA8F4
  c->r[6]=0u+0x00000002u; // 801FA8F8
  c->lr=0x801FA900u; f_80186F6C(c); // 801FA8FC
  cmps(c,0,(int32_t)c->r[3],0); // 801FA900
  if (!crb(c,0)) { goto L_801FA910; } // 801FA904
  c->r[30]=0u+0xFFFFFFFEu; // 801FA908
  goto L_801FA984; // 801FA90C
L_801FA910:;
  c->r[30]=R32(c->r[31]+0x00000020u); // 801FA910
  cmps(c,0,(int32_t)c->r[30],0); // 801FA914
  if (!crb(c,2)) { goto L_801FA984; } // 801FA918
  c->r[0]=0u+0x00000000u; // 801FA91C
  cmpu(c,0,c->r[27],c->r[0]); // 801FA920
  if (crb(c,2)) { goto L_801FA984; } // 801FA924
  c->r[4]=R32(c->r[13]+0xFFFFB0C4u); // 801FA928
  c->r[3]=c->r[27]|c->r[27]; // 801FA92C
  c->r[5]=0u+0x00001B5Cu; // 801FA930
  c->lr=0x801FA938u; f_80004338(c); // 801FA934
  goto L_801FA984; // 801FA938
L_801FA93C:;
  c->r[0]=0u+0x00000000u; // 801FA93C
  cmpu(c,0,c->r[27],c->r[0]); // 801FA940
  if (crb(c,2)) { goto L_801FA958; } // 801FA944
  c->r[3]=R32(c->r[13]+0xFFFFB0C4u); // 801FA948
  c->r[4]=c->r[27]|c->r[27]; // 801FA94C
  c->r[5]=0u+0x00001B5Cu; // 801FA950
  c->lr=0x801FA958u; f_80004338(c); // 801FA954
L_801FA958:;
  c->r[3]=c->r[29]|c->r[29]; // 801FA958
  c->r[4]=c->r[28]|c->r[28]; // 801FA95C
  c->r[7]=c->r[31]+0x00000040u; // 801FA960
  c->r[5]=0u+0x00000001u; // 801FA964
  c->r[6]=0u+0x00000001u; // 801FA968
  c->lr=0x801FA970u; f_80186F6C(c); // 801FA96C
  cmps(c,0,(int32_t)c->r[3],0); // 801FA970
  if (!crb(c,0)) { goto L_801FA980; } // 801FA974
  c->r[30]=0u+0xFFFFFFFEu; // 801FA978
  goto L_801FA984; // 801FA97C
L_801FA980:;
  c->r[30]=R32(c->r[31]+0x00000020u); // 801FA980
L_801FA984:;
  c->r[3]=c->r[29]|c->r[29]; // 801FA984
  c->lr=0x801FA98Cu; f_80186464(c); // 801FA988
  cmps(c,0,(int32_t)c->r[3],0); // 801FA98C
  if (!crb(c,0)) { goto L_801FA998; } // 801FA990
  c->r[30]=0u+0xFFFFFFFFu; // 801FA994
L_801FA998:;
  c->r[3]=c->r[31]+0x00000000u; // 801FA998
  c->lr=0x801FA9A0u; f_801557A8(c); // 801FA99C
  c->r[3]=c->r[30]|c->r[30]; // 801FA9A0
L_801FA9A4:;
  c->r[11]=c->r[1]+0x00000020u; // 801FA9A4
  c->lr=0x801FA9ACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FA9A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FA9AC
  c->lr=c->r[0]; // 801FA9B0
  c->r[1]=c->r[1]+0x00000020u; // 801FA9B4
  return; // 801FA9B8
}

// fn_801FA9BC
void f_801FA9BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA9BC
  c->r[0]=c->lr; // 801FA9C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FA9C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FA9C8
  c->r[31]=0u+0x804A0000u; // 801FA9CC
  c->r[31]=c->r[31]+0x00004A20u; // 801FA9D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FA9D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FA9D8
  c->lr=0x801FA9E0u; f_80154410(c); // 801FA9DC
  c->r[0]=R32(c->r[13]+0xFFFFB0C0u); // 801FA9E0
  c->r[30]=c->r[3]|c->r[3]; // 801FA9E4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801FA9E8
  if (!crb(c,2)) { goto L_801FAA80; } // 801FA9EC
  c->r[3]=R32(c->r[13]+0xFFFF9478u); // 801FA9F0
  c->lr=0x801FA9F8u; f_8014E714(c); // 801FA9F4
  c->r[3]=c->r[31]+0x00000000u; // 801FA9F8
  c->lr=0x801FAA00u; f_80155694(c); // 801FA9FC
  c->lr=0x801FAA04u; f_801859C4(c); // 801FAA00
  c->r[0]=c->r[3]+0x0000001Fu; // 801FAA04
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801FAA08
  c->lr=0x801FAA10u; f_801859BC(c); // 801FAA0C
  c->r[0]=c->r[3]-c->r[29]; // 801FAA10
  cmpu(c,0,c->r[0],0x00001B60u); // 801FAA14
  if (!crb(c,0)) { goto L_801FAA38; } // 801FAA18
  c->r[3]=0u+0x802F0000u; // 801FAA1C
  c->r[5]=0u+0x802F0000u; // 801FAA20
  c->r[3]=c->r[3]+0xFFFF9638u; // 801FAA24
  c->r[4]=0u+0x000005B1u; // 801FAA28
  c->r[5]=c->r[5]+0xFFFF9644u; // 801FAA2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FAA30
  c->lr=0x801FAA38u; f_80150744(c); // 801FAA34
L_801FAA38:;
  c->r[3]=c->r[29]+0x00001B60u; // 801FAA38
  c->lr=0x801FAA40u; f_801859CC(c); // 801FAA3C
  W32(c->r[13]+0xFFFFB0C4u,c->r[29]); // 801FAA40
  c->r[3]=c->r[29]|c->r[29]; // 801FAA44
  c->r[4]=0u+0x00000000u; // 801FAA48
  c->r[5]=0u+0x00001B60u; // 801FAA4C
  c->lr=0x801FAA54u; f_8000443C(c); // 801FAA50
  c->r[3]=c->r[31]+0x00000020u; // 801FAA54
  c->r[4]=0u+0x00000000u; // 801FAA58
  c->r[5]=0u+0x00000020u; // 801FAA5C
  c->lr=0x801FAA64u; f_8000443C(c); // 801FAA60
  c->r[3]=c->r[31]+0x00000040u; // 801FAA64
  c->r[4]=0u+0x00000000u; // 801FAA68
  c->r[5]=0u+0x00000020u; // 801FAA6C
  c->lr=0x801FAA74u; f_8000443C(c); // 801FAA70
  c->r[0]=R32(c->r[13]+0xFFFFB0C0u); // 801FAA74
  c->r[0]=c->r[0]|0x00000001u; // 801FAA78
  W32(c->r[13]+0xFFFFB0C0u,c->r[0]); // 801FAA7C
L_801FAA80:;
  c->r[3]=c->r[30]|c->r[30]; // 801FAA80
  c->lr=0x801FAA88u; f_80154438(c); // 801FAA84
  c->r[3]=c->r[31]+0x00000000u; // 801FAA88
  c->lr=0x801FAA90u; f_801556CC(c); // 801FAA8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FAA90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FAA94
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FAA98
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FAA9C
  c->lr=c->r[0]; // 801FAAA0
  c->r[1]=c->r[1]+0x00000020u; // 801FAAA4
  return; // 801FAAA8
}

// fn_801FAAAC
void f_801FAAAC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000100u; // 801FAAAC
  c->r[6]=0u+0x00000000u; // 801FAAB0
  c->ctr=c->r[0]; // 801FAAB4
L_801FAAB8:;
  c->r[0]=rotl(c->r[6],0)&0x00000080u; cr0(c,c->r[0]); // 801FAAB8
  c->r[5]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801FAABC
  if (crb(c,2)) { goto L_801FAAC8; } // 801FAAC0
  c->r[5]=c->r[5]^c->r[4]; // 801FAAC4
L_801FAAC8:;
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801FAAC8
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801FAACC
  if (crb(c,2)) { goto L_801FAAD8; } // 801FAAD0
  c->r[5]=c->r[5]^c->r[4]; // 801FAAD4
L_801FAAD8:;
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801FAAD8
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801FAADC
  if (crb(c,2)) { goto L_801FAAE8; } // 801FAAE0
  c->r[5]=c->r[5]^c->r[4]; // 801FAAE4
L_801FAAE8:;
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801FAAE8
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801FAAEC
  if (crb(c,2)) { goto L_801FAAF8; } // 801FAAF0
  c->r[5]=c->r[5]^c->r[4]; // 801FAAF4
L_801FAAF8:;
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801FAAF8
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801FAAFC
  if (crb(c,2)) { goto L_801FAB08; } // 801FAB00
  c->r[5]=c->r[5]^c->r[4]; // 801FAB04
L_801FAB08:;
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801FAB08
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801FAB0C
  if (crb(c,2)) { goto L_801FAB18; } // 801FAB10
  c->r[5]=c->r[5]^c->r[4]; // 801FAB14
L_801FAB18:;
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801FAB18
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801FAB1C
  if (crb(c,2)) { goto L_801FAB28; } // 801FAB20
  c->r[5]=c->r[5]^c->r[4]; // 801FAB24
L_801FAB28:;
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801FAB28
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801FAB2C
  if (crb(c,2)) { goto L_801FAB38; } // 801FAB30
  c->r[5]=c->r[5]^c->r[4]; // 801FAB34
L_801FAB38:;
  W8(c->r[3]+0x00000000u,c->r[5]); // 801FAB38
  c->r[6]=c->r[6]+0x00000001u; // 801FAB3C
  c->r[3]=c->r[3]+0x00000001u; // 801FAB40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FAAB8; } // 801FAB44
  return; // 801FAB48
}

// fn_801FAB4C
void f_801FAB4C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000100u; // 801FAB4C
  c->r[6]=0u+0x00000000u; // 801FAB50
  c->ctr=c->r[0]; // 801FAB54
L_801FAB58:;
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 801FAB58
  c->r[5]=rotl(c->r[6],31)&0x7FFFFFFFu; // 801FAB5C
  if (crb(c,2)) { goto L_801FAB68; } // 801FAB60
  c->r[5]=c->r[5]^c->r[4]; // 801FAB64
L_801FAB68:;
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801FAB68
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 801FAB6C
  if (crb(c,2)) { goto L_801FAB78; } // 801FAB70
  c->r[5]=c->r[5]^c->r[4]; // 801FAB74
L_801FAB78:;
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801FAB78
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 801FAB7C
  if (crb(c,2)) { goto L_801FAB88; } // 801FAB80
  c->r[5]=c->r[5]^c->r[4]; // 801FAB84
L_801FAB88:;
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801FAB88
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 801FAB8C
  if (crb(c,2)) { goto L_801FAB98; } // 801FAB90
  c->r[5]=c->r[5]^c->r[4]; // 801FAB94
L_801FAB98:;
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801FAB98
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 801FAB9C
  if (crb(c,2)) { goto L_801FABA8; } // 801FABA0
  c->r[5]=c->r[5]^c->r[4]; // 801FABA4
L_801FABA8:;
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801FABA8
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 801FABAC
  if (crb(c,2)) { goto L_801FABB8; } // 801FABB0
  c->r[5]=c->r[5]^c->r[4]; // 801FABB4
L_801FABB8:;
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801FABB8
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 801FABBC
  if (crb(c,2)) { goto L_801FABC8; } // 801FABC0
  c->r[5]=c->r[5]^c->r[4]; // 801FABC4
L_801FABC8:;
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801FABC8
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 801FABCC
  if (crb(c,2)) { goto L_801FABD8; } // 801FABD0
  c->r[5]=c->r[5]^c->r[4]; // 801FABD4
L_801FABD8:;
  W32(c->r[3]+0x00000000u,c->r[5]); // 801FABD8
  c->r[3]=c->r[3]+0x00000004u; // 801FABDC
  c->r[6]=c->r[6]+0x00000001u; // 801FABE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FAB58; } // 801FABE4
  return; // 801FABE8
}

// fn_801FABEC
void f_801FABEC(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[5],0); // 801FABEC
  c->r[7]=0u+0x00000000u; // 801FABF0
  c->r[11]=0u+0x00000000u; // 801FABF4
  if (crb(c,2)) { goto L_801FACB4; } // 801FABF8
  cmpu(c,0,c->r[5],0x00000008u); // 801FABFC
  c->r[6]=c->r[5]+0xFFFFFFF8u; // 801FAC00
  if (!crb(c,1)) { goto L_801FAC8C; } // 801FAC04
  c->r[0]=c->r[6]+0x00000007u; // 801FAC08
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801FAC0C
  c->ctr=c->r[0]; // 801FAC10
  cmpu(c,0,c->r[6],0x00000000u); // 801FAC14
  if (!crb(c,1)) { goto L_801FAC8C; } // 801FAC18
L_801FAC1C:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801FAC1C
  c->r[11]=c->r[11]+0x00000008u; // 801FAC20
  c->r[6]=R8(c->r[4]+0x00000001u); // 801FAC24
  c->r[7]=c->r[7]^c->r[0]; // 801FAC28
  c->r[0]=R8(c->r[4]+0x00000002u); // 801FAC2C
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 801FAC30
  c->r[9]=R8(c->r[4]+0x00000003u); // 801FAC34
  c->r[7]=R8(c->r[3]+c->r[7]); // 801FAC38
  c->r[8]=R8(c->r[4]+0x00000004u); // 801FAC3C
  c->r[6]=c->r[7]^c->r[6]; // 801FAC40
  c->r[7]=R8(c->r[4]+0x00000005u); // 801FAC44
  c->r[10]=R8(c->r[3]+c->r[6]); // 801FAC48
  c->r[6]=R8(c->r[4]+0x00000006u); // 801FAC4C
  c->r[10]=c->r[10]^c->r[0]; // 801FAC50
  c->r[0]=R8(c->r[4]+0x00000007u); // 801FAC54
  c->r[10]=R8(c->r[3]+c->r[10]); // 801FAC58
  c->r[4]=c->r[4]+0x00000008u; // 801FAC5C
  c->r[9]=c->r[10]^c->r[9]; // 801FAC60
  c->r[9]=R8(c->r[3]+c->r[9]); // 801FAC64
  c->r[8]=c->r[9]^c->r[8]; // 801FAC68
  c->r[8]=R8(c->r[3]+c->r[8]); // 801FAC6C
  c->r[7]=c->r[8]^c->r[7]; // 801FAC70
  c->r[7]=R8(c->r[3]+c->r[7]); // 801FAC74
  c->r[6]=c->r[7]^c->r[6]; // 801FAC78
  c->r[6]=R8(c->r[3]+c->r[6]); // 801FAC7C
  c->r[0]=c->r[6]^c->r[0]; // 801FAC80
  c->r[7]=R8(c->r[3]+c->r[0]); // 801FAC84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FAC1C; } // 801FAC88
L_801FAC8C:;
  c->r[0]=c->r[5]-c->r[11]; // 801FAC8C
  c->ctr=c->r[0]; // 801FAC90
  cmpu(c,0,c->r[11],c->r[5]); // 801FAC94
  if (!crb(c,0)) { goto L_801FACB4; } // 801FAC98
L_801FAC9C:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801FAC9C
  c->r[4]=c->r[4]+0x00000001u; // 801FACA0
  c->r[0]=c->r[7]^c->r[0]; // 801FACA4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801FACA8
  c->r[7]=R8(c->r[3]+c->r[0]); // 801FACAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FAC9C; } // 801FACB0
L_801FACB4:;
  c->r[3]=c->r[7]|c->r[7]; // 801FACB4
  return; // 801FACB8
}

// fn_801FACBC
void f_801FACBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FACBC
  cmps(c,0,(int32_t)c->r[5],0); // 801FACC0
  c->r[9]=0u+0xFFFFFFFFu; // 801FACC4
  c->r[6]=0u+0x00000000u; // 801FACC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FACCC
  if (crb(c,2)) { goto L_801FADF0; } // 801FACD0
  cmpu(c,0,c->r[5],0x00000008u); // 801FACD4
  c->r[7]=c->r[5]+0xFFFFFFF8u; // 801FACD8
  if (!crb(c,1)) { goto L_801FADC0; } // 801FACDC
  c->r[0]=c->r[7]+0x00000007u; // 801FACE0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801FACE4
  c->ctr=c->r[0]; // 801FACE8
  cmpu(c,0,c->r[7],0x00000000u); // 801FACEC
  if (!crb(c,1)) { goto L_801FADC0; } // 801FACF0
L_801FACF4:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 801FACF4
  c->r[8]=rotl(c->r[9],24)&0x00FFFFFFu; // 801FACF8
  c->r[0]=R8(c->r[4]+0x00000001u); // 801FACFC
  c->r[6]=c->r[6]+0x00000008u; // 801FAD00
  c->r[7]=c->r[9]^c->r[7]; // 801FAD04
  c->r[11]=R8(c->r[4]+0x00000002u); // 801FAD08
  c->r[7]=rotl(c->r[7],2)&0x000003FCu; // 801FAD0C
  c->r[10]=R8(c->r[4]+0x00000003u); // 801FAD10
  c->r[7]=R32(c->r[3]+c->r[7]); // 801FAD14
  c->r[9]=R8(c->r[4]+0x00000004u); // 801FAD18
  c->r[31]=c->r[8]^c->r[7]; // 801FAD1C
  c->r[8]=R8(c->r[4]+0x00000005u); // 801FAD20
  c->r[0]=c->r[31]^c->r[0]; // 801FAD24
  c->r[7]=R8(c->r[4]+0x00000006u); // 801FAD28
  c->r[12]=rotl(c->r[0],2)&0x000003FCu; // 801FAD2C
  c->r[0]=R8(c->r[4]+0x00000007u); // 801FAD30
  c->r[12]=R32(c->r[3]+c->r[12]); // 801FAD34
  c->r[31]=rotl(c->r[31],24)&0x00FFFFFFu; // 801FAD38
  c->r[4]=c->r[4]+0x00000008u; // 801FAD3C
  c->r[12]=c->r[31]^c->r[12]; // 801FAD40
  c->r[11]=c->r[12]^c->r[11]; // 801FAD44
  c->r[11]=rotl(c->r[11],2)&0x000003FCu; // 801FAD48
  c->r[12]=rotl(c->r[12],24)&0x00FFFFFFu; // 801FAD4C
  c->r[11]=R32(c->r[3]+c->r[11]); // 801FAD50
  c->r[11]=c->r[12]^c->r[11]; // 801FAD54
  c->r[10]=c->r[11]^c->r[10]; // 801FAD58
  c->r[10]=rotl(c->r[10],2)&0x000003FCu; // 801FAD5C
  c->r[11]=rotl(c->r[11],24)&0x00FFFFFFu; // 801FAD60
  c->r[10]=R32(c->r[3]+c->r[10]); // 801FAD64
  c->r[10]=c->r[11]^c->r[10]; // 801FAD68
  c->r[9]=c->r[10]^c->r[9]; // 801FAD6C
  c->r[9]=rotl(c->r[9],2)&0x000003FCu; // 801FAD70
  c->r[10]=rotl(c->r[10],24)&0x00FFFFFFu; // 801FAD74
  c->r[9]=R32(c->r[3]+c->r[9]); // 801FAD78
  c->r[9]=c->r[10]^c->r[9]; // 801FAD7C
  c->r[8]=c->r[9]^c->r[8]; // 801FAD80
  c->r[8]=rotl(c->r[8],2)&0x000003FCu; // 801FAD84
  c->r[9]=rotl(c->r[9],24)&0x00FFFFFFu; // 801FAD88
  c->r[8]=R32(c->r[3]+c->r[8]); // 801FAD8C
  c->r[8]=c->r[9]^c->r[8]; // 801FAD90
  c->r[7]=c->r[8]^c->r[7]; // 801FAD94
  c->r[7]=rotl(c->r[7],2)&0x000003FCu; // 801FAD98
  c->r[8]=rotl(c->r[8],24)&0x00FFFFFFu; // 801FAD9C
  c->r[7]=R32(c->r[3]+c->r[7]); // 801FADA0
  c->r[7]=c->r[8]^c->r[7]; // 801FADA4
  c->r[0]=c->r[7]^c->r[0]; // 801FADA8
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801FADAC
  c->r[7]=rotl(c->r[7],24)&0x00FFFFFFu; // 801FADB0
  c->r[0]=R32(c->r[3]+c->r[0]); // 801FADB4
  c->r[9]=c->r[7]^c->r[0]; // 801FADB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FACF4; } // 801FADBC
L_801FADC0:;
  c->r[0]=c->r[5]-c->r[6]; // 801FADC0
  c->ctr=c->r[0]; // 801FADC4
  cmpu(c,0,c->r[6],c->r[5]); // 801FADC8
  if (!crb(c,0)) { goto L_801FADF0; } // 801FADCC
L_801FADD0:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801FADD0
  c->r[5]=rotl(c->r[9],24)&0x00FFFFFFu; // 801FADD4
  c->r[4]=c->r[4]+0x00000001u; // 801FADD8
  c->r[0]=c->r[9]^c->r[0]; // 801FADDC
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801FADE0
  c->r[0]=R32(c->r[3]+c->r[0]); // 801FADE4
  c->r[9]=c->r[5]^c->r[0]; // 801FADE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FADD0; } // 801FADEC
L_801FADF0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FADF0
  c->r[3]=~(c->r[9]|c->r[9]); // 801FADF4
  c->r[1]=c->r[1]+0x00000010u; // 801FADF8
  return; // 801FADFC
}

// fn_801FAE00
void f_801FAE00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAE00
  c->r[0]=c->lr; // 801FAE04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FAE08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FAE0C
  c->r[31]=0u+0x00000000u; // 801FAE10
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FAE14
  c->r[30]=c->r[3]|c->r[3]; // 801FAE18
  c->lr=0x801FAE20u; f_801FAFA0(c); // 801FAE1C
  cmps(c,0,(int32_t)c->r[3],0); // 801FAE20
  if (!crb(c,2)) { goto L_801FAE34; } // 801FAE24
  c->lr=0x801FAE2Cu; f_801FAFB4(c); // 801FAE28
  cmps(c,0,(int32_t)c->r[3],0); // 801FAE2C
  if (crb(c,2)) { goto L_801FAE4C; } // 801FAE30
L_801FAE34:;
  c->r[3]=R32(c->r[13]+0xFFFFB0C8u); // 801FAE34
  c->r[0]=R32(c->r[3]+0x00000008u); // 801FAE38
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801FAE3C
  W32(c->r[30]+0x00000004u,c->r[3]); // 801FAE40
  W32(c->r[30]+0x00000000u,c->r[0]); // 801FAE44
  goto L_801FAF4C; // 801FAE48
L_801FAE4C:;
  c->r[4]=0u+0x80000000u; // 801FAE4C
  c->r[3]=R32(c->r[4]+0x000031C0u); // 801FAE50
  c->r[4]=R32(c->r[4]+0x000031C4u); // 801FAE54
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 801FAE58
  W32(c->r[30]+0x00000004u,c->r[4]); // 801FAE5C
  W32(c->r[30]+0x00000000u,c->r[3]); // 801FAE60
  if (!crb(c,2)) { goto L_801FAE70; } // 801FAE64
  c->r[3]=0u+0xFFFFFFFBu; // 801FAE68
  goto L_801FAE74; // 801FAE6C
L_801FAE70:;
  c->lr=0x801FAE74u; f_801FB758(c); // 801FAE70
L_801FAE74:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FAE74
  if (!crb(c,2)) { goto L_801FAE80; } // 801FAE78
  goto L_801FAF50; // 801FAE7C
L_801FAE80:;
  c->lr=0x801FAE84u; f_801FB07C(c); // 801FAE80
  cmps(c,0,(int32_t)c->r[3],0); // 801FAE84
  if (!crb(c,0)) { goto L_801FAE90; } // 801FAE88
  goto L_801FAF50; // 801FAE8C
L_801FAE90:;
  c->r[3]=0u+0x00000001u; // 801FAE90
  c->lr=0x801FAE98u; f_801FAFDC(c); // 801FAE94
  cmps(c,0,(int32_t)c->r[3],0); // 801FAE98
  if (!crb(c,0)) { goto L_801FAEA4; } // 801FAE9C
  goto L_801FAF1C; // 801FAEA0
L_801FAEA4:;
  c->r[0]=0u+0x00000000u; // 801FAEA4
  cmps(c,0,(int32_t)c->r[30],0); // 801FAEA8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801FAEAC
  if (!crb(c,2)) { goto L_801FAEBC; } // 801FAEB0
  c->r[31]=0u+0xFFFFFFFDu; // 801FAEB4
  goto L_801FAF04; // 801FAEB8
L_801FAEBC:;
  c->r[3]=0u+0x6FC10000u; // 801FAEBC
  c->r[4]=0u+0x00240000u; // 801FAEC0
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 801FAEC4
  c->r[0]=c->r[4]+0xFFFF86F2u; // 801FAEC8
  W32(c->r[30]+0x00000004u,c->r[5]); // 801FAECC
  c->r[3]=c->r[30]|c->r[30]; // 801FAED0
  c->r[4]=c->r[1]+0x00000008u; // 801FAED4
  W32(c->r[30]+0x00000000u,c->r[0]); // 801FAED8
  c->lr=0x801FAEE0u; f_801FB3DC(c); // 801FAEDC
  c->r[0]=R32(c->r[30]+0x00000000u); // 801FAEE0
  c->r[5]=0u+0x80000000u; // 801FAEE4
  c->r[6]=R32(c->r[30]+0x00000004u); // 801FAEE8
  c->r[31]=c->r[3]|c->r[3]; // 801FAEEC
  c->r[3]=c->r[5]+0x000031C0u; // 801FAEF0
  c->r[4]=0u+0x00000020u; // 801FAEF4
  W32(c->r[5]+0x000031C4u,c->r[6]); // 801FAEF8
  W32(c->r[5]+0x000031C0u,c->r[0]); // 801FAEFC
  c->lr=0x801FAF04u; f_8014F86C(c); // 801FAF00
L_801FAF04:;
  c->r[3]=0u+0x00000000u; // 801FAF04
  c->lr=0x801FAF0Cu; f_801FAFDC(c); // 801FAF08
  cmps(c,0,(int32_t)c->r[31],0); // 801FAF0C
  if (crb(c,0)) { goto L_801FAF18; } // 801FAF10
  c->r[31]=c->r[3]|c->r[3]; // 801FAF14
L_801FAF18:;
  c->r[3]=c->r[31]|c->r[31]; // 801FAF18
L_801FAF1C:;
  c->r[0]=c->r[3]+0x00000024u; // 801FAF1C
  c->r[31]=c->r[3]|c->r[3]; // 801FAF20
  cmpu(c,0,c->r[0],0x00000001u); // 801FAF24
  if (crb(c,1)) { goto L_801FAF30; } // 801FAF28
  c->r[31]=0u+0x00000000u; // 801FAF2C
L_801FAF30:;
  c->lr=0x801FAF34u; f_801FB14C(c); // 801FAF30
  cmps(c,0,(int32_t)c->r[3],0); // 801FAF34
  if (!crb(c,0)) { goto L_801FAF4C; } // 801FAF38
  cmps(c,0,(int32_t)c->r[31],0); // 801FAF3C
  if (crb(c,2)) { goto L_801FAF48; } // 801FAF40
  c->r[3]=c->r[31]|c->r[31]; // 801FAF44
L_801FAF48:;
  c->r[31]=c->r[3]|c->r[3]; // 801FAF48
L_801FAF4C:;
  c->r[3]=c->r[31]|c->r[31]; // 801FAF4C
L_801FAF50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FAF50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FAF54
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FAF58
  c->lr=c->r[0]; // 801FAF5C
  c->r[1]=c->r[1]+0x00000020u; // 801FAF60
  return; // 801FAF64
}

// fn_801FAF68
void f_801FAF68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAF68
  c->r[0]=c->lr; // 801FAF6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAF70
  c->r[0]=R32(c->r[13]+0xFFFFB0D4u); // 801FAF74
  cmps(c,0,(int32_t)c->r[0],0); // 801FAF78
  if (!crb(c,2)) { goto L_801FAF90; } // 801FAF7C
  c->r[3]=R32(c->r[13]+0xFFFF9480u); // 801FAF80
  c->lr=0x801FAF88u; f_8014E714(c); // 801FAF84
  c->r[0]=0u+0x00000001u; // 801FAF88
  W32(c->r[13]+0xFFFFB0D4u,c->r[0]); // 801FAF8C
L_801FAF90:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAF90
  c->lr=c->r[0]; // 801FAF94
  c->r[1]=c->r[1]+0x00000010u; // 801FAF98
  return; // 801FAF9C
}

// fn_801FAFA0
void f_801FAFA0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFB0D0u); // 801FAFA0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801FAFA4
  c->r[0]=cntlz(c->r[0]); // 801FAFA8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801FAFAC
  return; // 801FAFB0
}

// fn_801FAFB4
void f_801FAFB4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFB0D0u); // 801FAFB4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801FAFB8
  c->r[0]=cntlz(c->r[0]); // 801FAFBC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801FAFC0
  return; // 801FAFC4
}

// fn_801FAFC8
void f_801FAFC8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFB0D0u); // 801FAFC8
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801FAFCC
  c->r[0]=cntlz(c->r[0]); // 801FAFD0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801FAFD4
  return; // 801FAFD8
}

// fn_801FAFDC
void f_801FAFDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAFDC
  c->r[0]=c->lr; // 801FAFE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAFE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FAFE8
  c->r[31]=0u+0x00000000u; // 801FAFEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FAFF0
  c->r[30]=c->r[3]|c->r[3]; // 801FAFF4
  c->lr=0x801FAFFCu; f_80154410(c); // 801FAFF8
  cmps(c,0,(int32_t)c->r[30],0); // 801FAFFC
  if (crb(c,2)) { goto L_801FB034; } // 801FB000
  c->r[0]=R32(c->r[13]+0xFFFFB0D0u); // 801FB004
  cmps(c,0,(int32_t)c->r[0],0); // 801FB008
  if (!crb(c,2)) { goto L_801FB01C; } // 801FB00C
  c->r[0]=0u+0x00000003u; // 801FB010
  W32(c->r[13]+0xFFFFB0D0u,c->r[0]); // 801FB014
  goto L_801FB05C; // 801FB018
L_801FB01C:;
  cmps(c,0,(int32_t)c->r[0],1); // 801FB01C
  if (!crb(c,2)) { goto L_801FB02C; } // 801FB020
  c->r[31]=0u+0xFFFFFFF6u; // 801FB024
  goto L_801FB05C; // 801FB028
L_801FB02C:;
  c->r[31]=0u+0xFFFFFFE6u; // 801FB02C
  goto L_801FB05C; // 801FB030
L_801FB034:;
  c->r[4]=R32(c->r[13]+0xFFFFB0D0u); // 801FB034
  c->r[0]=c->r[4]+0xFFFFFFFDu; // 801FB038
  c->r[0]=cntlz(c->r[0]); // 801FB03C
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[4]); // 801FB040
  if (crb(c,2)) { goto L_801FB050; } // 801FB044
  c->r[0]=0u+0x00000000u; // 801FB048
  W32(c->r[13]+0xFFFFB0D0u,c->r[0]); // 801FB04C
L_801FB050:;
  cmps(c,0,(int32_t)c->r[4],0); // 801FB050
  if (!crb(c,2)) { goto L_801FB05C; } // 801FB054
  c->r[31]=0u+0xFFFFFFF7u; // 801FB058
L_801FB05C:;
  c->lr=0x801FB060u; f_80154438(c); // 801FB05C
  c->r[3]=c->r[31]|c->r[31]; // 801FB060
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FB064
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FB068
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB06C
  c->lr=c->r[0]; // 801FB070
  c->r[1]=c->r[1]+0x00000010u; // 801FB074
  return; // 801FB078
}

// NWC24SuspendScheduler
void f_801FB07C(Ctx* __restrict c) {
  trace_call(0x801FB07Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB07C
  c->r[0]=c->lr; // 801FB080
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB084
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FB088
  c->r[31]=0u+0x804A0000u; // 801FB08C
  c->r[31]=c->r[31]+0x00004A80u; // 801FB090
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FB094
  c->r[0]=R32(c->r[13]+0xFFFFB0D8u); // 801FB098
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801FB09C
  if (!crb(c,2)) { goto L_801FB0FC; } // 801FB0A0
  c->lr=0x801FB0A8u; f_80154410(c); // 801FB0A4
  c->r[0]=R32(c->r[13]+0xFFFFB0D8u); // 801FB0A8
  c->r[30]=c->r[3]|c->r[3]; // 801FB0AC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801FB0B0
  if (!crb(c,2)) { goto L_801FB0F4; } // 801FB0B4
  c->r[3]=c->r[31]+0x00000000u; // 801FB0B8
  c->lr=0x801FB0C0u; f_80155694(c); // 801FB0BC
  c->r[3]=c->r[31]+0x00000018u; // 801FB0C0
  c->lr=0x801FB0C8u; f_80155694(c); // 801FB0C4
  c->r[3]=c->r[31]+0x00000040u; // 801FB0C8
  c->r[4]=0u+0x00000000u; // 801FB0CC
  c->r[5]=0u+0x00000020u; // 801FB0D0
  c->lr=0x801FB0D8u; f_8000443C(c); // 801FB0D4
  c->r[3]=c->r[31]+0x00000060u; // 801FB0D8
  c->r[4]=0u+0x00000000u; // 801FB0DC
  c->r[5]=0u+0x00000020u; // 801FB0E0
  c->lr=0x801FB0E8u; f_8000443C(c); // 801FB0E4
  c->r[0]=R32(c->r[13]+0xFFFFB0D8u); // 801FB0E8
  c->r[0]=c->r[0]|0x00000001u; // 801FB0EC
  W32(c->r[13]+0xFFFFB0D8u,c->r[0]); // 801FB0F0
L_801FB0F4:;
  c->r[3]=c->r[30]|c->r[30]; // 801FB0F4
  c->lr=0x801FB0FCu; f_80154438(c); // 801FB0F8
L_801FB0FC:;
  c->r[3]=c->r[31]+0x00000018u; // 801FB0FC
  c->lr=0x801FB104u; f_801556CC(c); // 801FB100
  c->lr=0x801FB108u; f_801FB5D8(c); // 801FB104
  cmps(c,0,(int32_t)c->r[3],0); // 801FB108
  c->r[30]=c->r[3]|c->r[3]; // 801FB10C
  if (crb(c,0)) { goto L_801FB128; } // 801FB110
  c->r[4]=R32(c->r[13]+0xFFFFB0DCu); // 801FB114
  c->r[0]=R32(c->r[13]+0xFFFFB0E0u); // 801FB118
  c->r[4]=c->r[4]+0x00000001u; // 801FB11C
  W32(c->r[13]+0xFFFFB0DCu,c->r[4]); // 801FB120
  c->r[30]=c->r[3]-c->r[0]; // 801FB124
L_801FB128:;
  c->r[3]=c->r[31]+0x00000018u; // 801FB128
  c->lr=0x801FB130u; f_801557A8(c); // 801FB12C
  c->r[3]=c->r[30]|c->r[30]; // 801FB130
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FB134
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FB138
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB13C
  c->lr=c->r[0]; // 801FB140
  c->r[1]=c->r[1]+0x00000010u; // 801FB144
  return; // 801FB148
}

// fn_801FB14C
void f_801FB14C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB14C
  c->r[0]=c->lr; // 801FB150
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB154
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FB158
  c->r[31]=0u+0x804A0000u; // 801FB15C
  c->r[31]=c->r[31]+0x00004A80u; // 801FB160
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FB164
  c->r[0]=R32(c->r[13]+0xFFFFB0D8u); // 801FB168
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801FB16C
  if (!crb(c,2)) { goto L_801FB1CC; } // 801FB170
  c->lr=0x801FB178u; f_80154410(c); // 801FB174
  c->r[0]=R32(c->r[13]+0xFFFFB0D8u); // 801FB178
  c->r[30]=c->r[3]|c->r[3]; // 801FB17C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801FB180
  if (!crb(c,2)) { goto L_801FB1C4; } // 801FB184
  c->r[3]=c->r[31]+0x00000000u; // 801FB188
  c->lr=0x801FB190u; f_80155694(c); // 801FB18C
  c->r[3]=c->r[31]+0x00000018u; // 801FB190
  c->lr=0x801FB198u; f_80155694(c); // 801FB194
  c->r[3]=c->r[31]+0x00000040u; // 801FB198
  c->r[4]=0u+0x00000000u; // 801FB19C
  c->r[5]=0u+0x00000020u; // 801FB1A0
  c->lr=0x801FB1A8u; f_8000443C(c); // 801FB1A4
  c->r[3]=c->r[31]+0x00000060u; // 801FB1A8
  c->r[4]=0u+0x00000000u; // 801FB1AC
  c->r[5]=0u+0x00000020u; // 801FB1B0
  c->lr=0x801FB1B8u; f_8000443C(c); // 801FB1B4
  c->r[0]=R32(c->r[13]+0xFFFFB0D8u); // 801FB1B8
  c->r[0]=c->r[0]|0x00000001u; // 801FB1BC
  W32(c->r[13]+0xFFFFB0D8u,c->r[0]); // 801FB1C0
L_801FB1C4:;
  c->r[3]=c->r[30]|c->r[30]; // 801FB1C4
  c->lr=0x801FB1CCu; f_80154438(c); // 801FB1C8
L_801FB1CC:;
  c->r[3]=c->r[31]+0x00000018u; // 801FB1CC
  c->lr=0x801FB1D4u; f_801556CC(c); // 801FB1D0
  c->r[0]=R32(c->r[13]+0xFFFFB0E0u); // 801FB1D4
  cmps(c,0,(int32_t)c->r[0],0); // 801FB1D8
  if (!crb(c,1)) { goto L_801FB1F4; } // 801FB1DC
  c->r[0]=R32(c->r[13]+0xFFFFB0DCu); // 801FB1E0
  cmps(c,0,(int32_t)c->r[0],0); // 801FB1E4
  if (!crb(c,2)) { goto L_801FB1F4; } // 801FB1E8
  c->r[30]=0u+0x00000000u; // 801FB1EC
  goto L_801FB218; // 801FB1F0
L_801FB1F4:;
  c->lr=0x801FB1F8u; f_801FB5E8(c); // 801FB1F4
  c->r[4]=R32(c->r[13]+0xFFFFB0DCu); // 801FB1F8
  c->r[30]=c->r[3]|c->r[3]; // 801FB1FC
  cmps(c,0,(int32_t)c->r[4],0); // 801FB200
  if (!crb(c,1)) { goto L_801FB218; } // 801FB204
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801FB208
  c->r[0]=R32(c->r[13]+0xFFFFB0E0u); // 801FB20C
  W32(c->r[13]+0xFFFFB0DCu,c->r[4]); // 801FB210
  c->r[30]=c->r[3]-c->r[0]; // 801FB214
L_801FB218:;
  c->r[3]=c->r[31]+0x00000018u; // 801FB218
  c->lr=0x801FB220u; f_801557A8(c); // 801FB21C
  c->r[3]=c->r[30]|c->r[30]; // 801FB220
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FB224
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FB228
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB22C
  c->lr=c->r[0]; // 801FB230
  c->r[1]=c->r[1]+0x00000010u; // 801FB234
  return; // 801FB238
}

// fn_801FB23C
void f_801FB23C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB23C
  c->r[0]=c->lr; // 801FB240
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FB244
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FB248
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FB24C
  c->r[30]=0u+0x804A0000u; // 801FB250
  c->r[30]=c->r[30]+0x00004A80u; // 801FB254
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FB258
  W32(c->r[1]+0x00000010u,c->r[28]); // 801FB25C
  c->r[28]=c->r[3]|c->r[3]; // 801FB260
  c->lr=0x801FB268u; f_8015716C(c); // 801FB264
  cmps(c,0,(int32_t)c->r[3],0); // 801FB268
  if (!crb(c,2)) { goto L_801FB278; } // 801FB26C
  c->r[3]=0u+0xFFFFFFFFu; // 801FB270
  goto L_801FB2B0; // 801FB274
L_801FB278:;
  c->lr=0x801FB27Cu; f_801FAFA0(c); // 801FB278
  cmps(c,0,(int32_t)c->r[3],0); // 801FB27C
  if (!crb(c,2)) { goto L_801FB290; } // 801FB280
  c->lr=0x801FB288u; f_801FAFB4(c); // 801FB284
  cmps(c,0,(int32_t)c->r[3],0); // 801FB288
  if (crb(c,2)) { goto L_801FB298; } // 801FB28C
L_801FB290:;
  c->r[3]=0u+0xFFFFFFF6u; // 801FB290
  goto L_801FB2B0; // 801FB294
L_801FB298:;
  c->lr=0x801FB29Cu; f_801FAFC8(c); // 801FB298
  cmps(c,0,(int32_t)c->r[3],0); // 801FB29C
  if (crb(c,2)) { goto L_801FB2AC; } // 801FB2A0
  c->r[3]=0u+0xFFFFFFE6u; // 801FB2A4
  goto L_801FB2B0; // 801FB2A8
L_801FB2AC:;
  c->r[3]=0u+0x00000000u; // 801FB2AC
L_801FB2B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FB2B0
  if (!crb(c,0)) { goto L_801FB2BC; } // 801FB2B4
  goto L_801FB3BC; // 801FB2B8
L_801FB2BC:;
  c->r[0]=R32(c->r[13]+0xFFFFB0D8u); // 801FB2BC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801FB2C0
  if (!crb(c,2)) { goto L_801FB320; } // 801FB2C4
  c->lr=0x801FB2CCu; f_80154410(c); // 801FB2C8
  c->r[0]=R32(c->r[13]+0xFFFFB0D8u); // 801FB2CC
  c->r[31]=c->r[3]|c->r[3]; // 801FB2D0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801FB2D4
  if (!crb(c,2)) { goto L_801FB318; } // 801FB2D8
  c->r[3]=c->r[30]+0x00000000u; // 801FB2DC
  c->lr=0x801FB2E4u; f_80155694(c); // 801FB2E0
  c->r[3]=c->r[30]+0x00000018u; // 801FB2E4
  c->lr=0x801FB2ECu; f_80155694(c); // 801FB2E8
  c->r[3]=c->r[30]+0x00000040u; // 801FB2EC
  c->r[4]=0u+0x00000000u; // 801FB2F0
  c->r[5]=0u+0x00000020u; // 801FB2F4
  c->lr=0x801FB2FCu; f_8000443C(c); // 801FB2F8
  c->r[3]=c->r[30]+0x00000060u; // 801FB2FC
  c->r[4]=0u+0x00000000u; // 801FB300
  c->r[5]=0u+0x00000020u; // 801FB304
  c->lr=0x801FB30Cu; f_8000443C(c); // 801FB308
  c->r[0]=R32(c->r[13]+0xFFFFB0D8u); // 801FB30C
  c->r[0]=c->r[0]|0x00000001u; // 801FB310
  W32(c->r[13]+0xFFFFB0D8u,c->r[0]); // 801FB314
L_801FB318:;
  c->r[3]=c->r[31]|c->r[31]; // 801FB318
  c->lr=0x801FB320u; f_80154438(c); // 801FB31C
L_801FB320:;
  c->r[3]=c->r[30]+0x00000000u; // 801FB320
  c->lr=0x801FB328u; f_801556CC(c); // 801FB324
  c->r[3]=c->r[30]+0x00000040u; // 801FB328
  c->r[4]=0u+0x00000000u; // 801FB32C
  c->r[5]=0u+0x00000020u; // 801FB330
  c->lr=0x801FB338u; f_8000443C(c); // 801FB334
  c->r[31]=0u+0x802F0000u; // 801FB338
  c->r[4]=0u+0x802F0000u; // 801FB33C
  c->r[3]=c->r[31]+0xFFFF96E4u; // 801FB340
  c->r[5]=c->r[1]+0x00000008u; // 801FB344
  c->r[4]=c->r[4]+0xFFFF96D0u; // 801FB348
  c->r[6]=0u+0x00000000u; // 801FB34C
  c->lr=0x801FB354u; f_801FBC50(c); // 801FB350
  cmps(c,0,(int32_t)c->r[3],0); // 801FB354
  c->r[29]=c->r[3]|c->r[3]; // 801FB358
  if (crb(c,0)) { goto L_801FB3B0; } // 801FB35C
  W32(c->r[30]+0x00000040u,c->r[28]); // 801FB360
  c->r[3]=c->r[31]+0xFFFF96E4u; // 801FB364
  c->r[4]=R32(c->r[1]+0x00000008u); // 801FB368
  c->r[6]=c->r[30]+0x00000040u; // 801FB36C
  c->r[8]=c->r[30]+0x00000060u; // 801FB370
  c->r[5]=0u+0x00000022u; // 801FB374
  c->r[7]=0u+0x00000020u; // 801FB378
  c->r[9]=0u+0x00000020u; // 801FB37C
  c->lr=0x801FB384u; f_801FBCFC(c); // 801FB380
  cmps(c,0,(int32_t)c->r[3],0); // 801FB384
  c->r[29]=c->r[3]|c->r[3]; // 801FB388
  if (crb(c,0)) { goto L_801FB394; } // 801FB38C
  c->r[29]=R32(c->r[30]+0x00000060u); // 801FB390
L_801FB394:;
  c->r[3]=0u+0x802F0000u; // 801FB394
  c->r[4]=R32(c->r[1]+0x00000008u); // 801FB398
  c->r[3]=c->r[3]+0xFFFF96E4u; // 801FB39C
  c->lr=0x801FB3A4u; f_801FBCC8(c); // 801FB3A0
  cmps(c,0,(int32_t)c->r[29],0); // 801FB3A4
  if (crb(c,0)) { goto L_801FB3B0; } // 801FB3A8
  c->r[29]=c->r[3]|c->r[3]; // 801FB3AC
L_801FB3B0:;
  c->r[3]=c->r[30]+0x00000000u; // 801FB3B0
  c->lr=0x801FB3B8u; f_801557A8(c); // 801FB3B4
  c->r[3]=c->r[29]|c->r[29]; // 801FB3B8
L_801FB3BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FB3BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FB3C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FB3C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FB3C8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801FB3CC
  c->lr=c->r[0]; // 801FB3D0
  c->r[1]=c->r[1]+0x00000020u; // 801FB3D4
  return; // 801FB3D8
}

// fn_801FB3DC
void f_801FB3DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB3DC
  c->r[0]=c->lr; // 801FB3E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FB3E4
  c->r[11]=c->r[1]+0x00000030u; // 801FB3E8
  c->lr=0x801FB3F0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FB3EC
  c->r[29]=0u+0x804A0000u; // 801FB3F0
  c->r[27]=c->r[3]|c->r[3]; // 801FB3F4
  c->r[31]=c->r[4]|c->r[4]; // 801FB3F8
  c->r[29]=c->r[29]+0x00004A80u; // 801FB3FC
  c->lr=0x801FB404u; f_8015716C(c); // 801FB400
  cmps(c,0,(int32_t)c->r[3],0); // 801FB404
  if (!crb(c,2)) { goto L_801FB414; } // 801FB408
  c->r[3]=0u+0xFFFFFFFFu; // 801FB40C
  goto L_801FB438; // 801FB410
L_801FB414:;
  c->lr=0x801FB418u; f_801FAFA0(c); // 801FB414
  cmps(c,0,(int32_t)c->r[3],0); // 801FB418
  if (!crb(c,2)) { goto L_801FB42C; } // 801FB41C
  c->lr=0x801FB424u; f_801FAFB4(c); // 801FB420
  cmps(c,0,(int32_t)c->r[3],0); // 801FB424
  if (crb(c,2)) { goto L_801FB434; } // 801FB428
L_801FB42C:;
  c->r[3]=0u+0xFFFFFFF6u; // 801FB42C
  goto L_801FB438; // 801FB430
L_801FB434:;
  c->r[3]=0u+0x00000000u; // 801FB434
L_801FB438:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FB438
  if (!crb(c,0)) { goto L_801FB444; } // 801FB43C
  goto L_801FB580; // 801FB440
L_801FB444:;
  c->r[0]=R32(c->r[13]+0xFFFFB0D8u); // 801FB444
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801FB448
  if (!crb(c,2)) { goto L_801FB4A8; } // 801FB44C
  c->lr=0x801FB454u; f_80154410(c); // 801FB450
  c->r[0]=R32(c->r[13]+0xFFFFB0D8u); // 801FB454
  c->r[30]=c->r[3]|c->r[3]; // 801FB458
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801FB45C
  if (!crb(c,2)) { goto L_801FB4A0; } // 801FB460
  c->r[3]=c->r[29]+0x00000000u; // 801FB464
  c->lr=0x801FB46Cu; f_80155694(c); // 801FB468
  c->r[3]=c->r[29]+0x00000018u; // 801FB46C
  c->lr=0x801FB474u; f_80155694(c); // 801FB470
  c->r[3]=c->r[29]+0x00000040u; // 801FB474
  c->r[4]=0u+0x00000000u; // 801FB478
  c->r[5]=0u+0x00000020u; // 801FB47C
  c->lr=0x801FB484u; f_8000443C(c); // 801FB480
  c->r[3]=c->r[29]+0x00000060u; // 801FB484
  c->r[4]=0u+0x00000000u; // 801FB488
  c->r[5]=0u+0x00000020u; // 801FB48C
  c->lr=0x801FB494u; f_8000443C(c); // 801FB490
  c->r[0]=R32(c->r[13]+0xFFFFB0D8u); // 801FB494
  c->r[0]=c->r[0]|0x00000001u; // 801FB498
  W32(c->r[13]+0xFFFFB0D8u,c->r[0]); // 801FB49C
L_801FB4A0:;
  c->r[3]=c->r[30]|c->r[30]; // 801FB4A0
  c->lr=0x801FB4A8u; f_80154438(c); // 801FB4A4
L_801FB4A8:;
  c->r[3]=c->r[29]+0x00000000u; // 801FB4A8
  c->lr=0x801FB4B0u; f_801556CC(c); // 801FB4AC
  c->r[30]=0u+0x802F0000u; // 801FB4B0
  c->r[4]=0u+0x802F0000u; // 801FB4B4
  c->r[3]=c->r[30]+0xFFFF96F8u; // 801FB4B8
  c->r[5]=c->r[1]+0x00000008u; // 801FB4BC
  c->r[4]=c->r[4]+0xFFFF96D0u; // 801FB4C0
  c->r[6]=0u+0x00000000u; // 801FB4C4
  c->lr=0x801FB4CCu; f_801FBC50(c); // 801FB4C8
  cmps(c,0,(int32_t)c->r[3],0); // 801FB4CC
  c->r[28]=c->r[3]|c->r[3]; // 801FB4D0
  if (crb(c,0)) { goto L_801FB574; } // 801FB4D4
  c->r[4]=R32(c->r[1]+0x00000008u); // 801FB4D8
  c->r[3]=c->r[30]+0xFFFF96F8u; // 801FB4DC
  c->r[8]=c->r[29]+0x00000060u; // 801FB4E0
  c->r[5]=0u+0x0000000Fu; // 801FB4E4
  c->r[6]=0u+0x00000000u; // 801FB4E8
  c->r[7]=0u+0x00000000u; // 801FB4EC
  c->r[9]=0u+0x00000020u; // 801FB4F0
  c->lr=0x801FB4F8u; f_801FBCFC(c); // 801FB4F4
  cmps(c,0,(int32_t)c->r[3],0); // 801FB4F8
  c->r[28]=c->r[3]|c->r[3]; // 801FB4FC
  if (crb(c,0)) { goto L_801FB558; } // 801FB500
  c->r[28]=R32(c->r[29]+0x00000060u); // 801FB504
  cmps(c,0,(int32_t)c->r[28],0); // 801FB508
  if (crb(c,2)) { goto L_801FB520; } // 801FB50C
  cmps(c,0,(int32_t)c->r[28],-35); // 801FB510
  if (crb(c,2)) { goto L_801FB520; } // 801FB514
  cmps(c,0,(int32_t)c->r[28],-36); // 801FB518
  if (!crb(c,2)) { goto L_801FB558; } // 801FB51C
L_801FB520:;
  c->r[0]=0u+0x00000000u; // 801FB520
  cmpu(c,0,c->r[27],c->r[0]); // 801FB524
  if (crb(c,2)) { goto L_801FB540; } // 801FB528
  c->r[3]=c->r[29]+0x00000060u; // 801FB52C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801FB530
  c->r[3]=R32(c->r[3]+0x00000008u); // 801FB534
  W32(c->r[27]+0x00000004u,c->r[3]); // 801FB538
  W32(c->r[27]+0x00000000u,c->r[0]); // 801FB53C
L_801FB540:;
  c->r[0]=0u+0x00000000u; // 801FB540
  cmpu(c,0,c->r[31],c->r[0]); // 801FB544
  if (crb(c,2)) { goto L_801FB558; } // 801FB548
  c->r[3]=c->r[29]+0x00000060u; // 801FB54C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801FB550
  W32(c->r[31]+0x00000000u,c->r[0]); // 801FB554
L_801FB558:;
  c->r[3]=0u+0x802F0000u; // 801FB558
  c->r[4]=R32(c->r[1]+0x00000008u); // 801FB55C
  c->r[3]=c->r[3]+0xFFFF96F8u; // 801FB560
  c->lr=0x801FB568u; f_801FBCC8(c); // 801FB564
  cmps(c,0,(int32_t)c->r[28],0); // 801FB568
  if (crb(c,0)) { goto L_801FB574; } // 801FB56C
  c->r[28]=c->r[3]|c->r[3]; // 801FB570
L_801FB574:;
  c->r[3]=c->r[29]+0x00000000u; // 801FB574
  c->lr=0x801FB57Cu; f_801557A8(c); // 801FB578
  c->r[3]=c->r[28]|c->r[28]; // 801FB57C
L_801FB580:;
  c->r[11]=c->r[1]+0x00000030u; // 801FB580
  c->lr=0x801FB588u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FB584
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FB588
  c->lr=c->r[0]; // 801FB58C
  c->r[1]=c->r[1]+0x00000030u; // 801FB590
  return; // 801FB594
}

// fn_801FB598
void f_801FB598(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 801FB598
  c->r[3]=0u+0x00000000u; // 801FB59C
  c->r[4]=0u+0x00000006u; // 801FB5A0
  f_801FB5F8(c); return; // 801FB5A4
}

// fn_801FB5A8
void f_801FB5A8(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 801FB5A8
  c->r[3]=0u+0x00000000u; // 801FB5AC
  c->r[4]=0u+0x00000007u; // 801FB5B0
  f_801FB5F8(c); return; // 801FB5B4
}

// fn_801FB5B8
void f_801FB5B8(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801FB5B8
  c->r[4]=0u+0x00000008u; // 801FB5BC
  c->r[5]=0u+0x00000000u; // 801FB5C0
  f_801FB5F8(c); return; // 801FB5C4
}

// fn_801FB5C8
void f_801FB5C8(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801FB5C8
  c->r[4]=0u+0x00000009u; // 801FB5CC
  c->r[5]=0u+0x00000000u; // 801FB5D0
  f_801FB5F8(c); return; // 801FB5D4
}

// fn_801FB5D8
void f_801FB5D8(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801FB5D8
  c->r[4]=0u+0x00000001u; // 801FB5DC
  c->r[5]=0u+0x00000000u; // 801FB5E0
  f_801FB5F8(c); return; // 801FB5E4
}

// fn_801FB5E8
void f_801FB5E8(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801FB5E8
  c->r[4]=0u+0x00000003u; // 801FB5EC
  c->r[5]=0u+0x00000000u; // 801FB5F0
  f_801FB5F8(c); return; // 801FB5F4
}

// fn_801FB5F8
void f_801FB5F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB5F8
  c->r[0]=c->lr; // 801FB5FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FB600
  c->r[11]=c->r[1]+0x00000030u; // 801FB604
  c->lr=0x801FB60Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FB608
  c->r[31]=0u+0x804A0000u; // 801FB60C
  c->r[27]=c->r[3]|c->r[3]; // 801FB610
  c->r[28]=c->r[4]|c->r[4]; // 801FB614
  c->r[29]=c->r[5]|c->r[5]; // 801FB618
  c->r[31]=c->r[31]+0x00004A80u; // 801FB61C
  c->lr=0x801FB624u; f_8015716C(c); // 801FB620
  cmps(c,0,(int32_t)c->r[3],0); // 801FB624
  if (!crb(c,2)) { goto L_801FB634; } // 801FB628
  c->r[3]=0u+0xFFFFFFFFu; // 801FB62C
  goto L_801FB740; // 801FB630
L_801FB634:;
  c->r[0]=R32(c->r[13]+0xFFFFB0D8u); // 801FB634
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801FB638
  if (!crb(c,2)) { goto L_801FB698; } // 801FB63C
  c->lr=0x801FB644u; f_80154410(c); // 801FB640
  c->r[0]=R32(c->r[13]+0xFFFFB0D8u); // 801FB644
  c->r[30]=c->r[3]|c->r[3]; // 801FB648
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801FB64C
  if (!crb(c,2)) { goto L_801FB690; } // 801FB650
  c->r[3]=c->r[31]+0x00000000u; // 801FB654
  c->lr=0x801FB65Cu; f_80155694(c); // 801FB658
  c->r[3]=c->r[31]+0x00000018u; // 801FB65C
  c->lr=0x801FB664u; f_80155694(c); // 801FB660
  c->r[3]=c->r[31]+0x00000040u; // 801FB664
  c->r[4]=0u+0x00000000u; // 801FB668
  c->r[5]=0u+0x00000020u; // 801FB66C
  c->lr=0x801FB674u; f_8000443C(c); // 801FB670
  c->r[3]=c->r[31]+0x00000060u; // 801FB674
  c->r[4]=0u+0x00000000u; // 801FB678
  c->r[5]=0u+0x00000020u; // 801FB67C
  c->lr=0x801FB684u; f_8000443C(c); // 801FB680
  c->r[0]=R32(c->r[13]+0xFFFFB0D8u); // 801FB684
  c->r[0]=c->r[0]|0x00000001u; // 801FB688
  W32(c->r[13]+0xFFFFB0D8u,c->r[0]); // 801FB68C
L_801FB690:;
  c->r[3]=c->r[30]|c->r[30]; // 801FB690
  c->lr=0x801FB698u; f_80154438(c); // 801FB694
L_801FB698:;
  c->r[3]=c->r[31]+0x00000000u; // 801FB698
  c->lr=0x801FB6A0u; f_801556CC(c); // 801FB69C
  c->r[4]=0u+0x802F0000u; // 801FB6A0
  c->r[3]=c->r[27]|c->r[27]; // 801FB6A4
  c->r[4]=c->r[4]+0xFFFF96D0u; // 801FB6A8
  c->r[5]=c->r[1]+0x00000008u; // 801FB6AC
  c->r[6]=0u+0x00000000u; // 801FB6B0
  c->lr=0x801FB6B8u; f_801FBC50(c); // 801FB6B4
  cmps(c,0,(int32_t)c->r[3],0); // 801FB6B8
  c->r[30]=c->r[3]|c->r[3]; // 801FB6BC
  if (crb(c,0)) { goto L_801FB734; } // 801FB6C0
  c->r[4]=R32(c->r[1]+0x00000008u); // 801FB6C4
  c->r[3]=c->r[27]|c->r[27]; // 801FB6C8
  c->r[5]=c->r[28]|c->r[28]; // 801FB6CC
  c->r[8]=c->r[31]+0x00000060u; // 801FB6D0
  c->r[6]=0u+0x00000000u; // 801FB6D4
  c->r[7]=0u+0x00000000u; // 801FB6D8
  c->r[9]=0u+0x00000020u; // 801FB6DC
  c->lr=0x801FB6E4u; f_801FBCFC(c); // 801FB6E0
  cmps(c,0,(int32_t)c->r[3],0); // 801FB6E4
  c->r[30]=c->r[3]|c->r[3]; // 801FB6E8
  if (crb(c,0)) { goto L_801FB71C; } // 801FB6EC
  c->r[30]=R32(c->r[31]+0x00000060u); // 801FB6F0
  cmps(c,0,(int32_t)c->r[30],-2); // 801FB6F4
  if (crb(c,2)) { goto L_801FB704; } // 801FB6F8
  cmps(c,0,(int32_t)c->r[30],-33); // 801FB6FC
  if (!crb(c,2)) { goto L_801FB71C; } // 801FB700
L_801FB704:;
  c->r[0]=0u+0x00000000u; // 801FB704
  cmpu(c,0,c->r[29],c->r[0]); // 801FB708
  if (crb(c,2)) { goto L_801FB71C; } // 801FB70C
  c->r[3]=c->r[31]+0x00000060u; // 801FB710
  c->r[0]=R32(c->r[3]+0x00000004u); // 801FB714
  W32(c->r[29]+0x00000000u,c->r[0]); // 801FB718
L_801FB71C:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 801FB71C
  c->r[3]=c->r[27]|c->r[27]; // 801FB720
  c->lr=0x801FB728u; f_801FBCC8(c); // 801FB724
  cmps(c,0,(int32_t)c->r[3],0); // 801FB728
  if (!crb(c,0)) { goto L_801FB734; } // 801FB72C
  c->r[30]=c->r[3]|c->r[3]; // 801FB730
L_801FB734:;
  c->r[3]=c->r[31]+0x00000000u; // 801FB734
  c->lr=0x801FB73Cu; f_801557A8(c); // 801FB738
  c->r[3]=c->r[30]|c->r[30]; // 801FB73C
L_801FB740:;
  c->r[11]=c->r[1]+0x00000030u; // 801FB740
  c->lr=0x801FB748u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FB744
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FB748
  c->lr=c->r[0]; // 801FB74C
  c->r[1]=c->r[1]+0x00000030u; // 801FB750
  return; // 801FB754
}

// fn_801FB758
void f_801FB758(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB758
  c->r[0]=c->lr; // 801FB75C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FB760
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FB764
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FB768
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FB76C
  c->lr=0x801FB774u; f_801FB7F0(c); // 801FB770
  c->r[30]=c->r[4]|c->r[4]; // 801FB774
  c->r[31]=c->r[3]|c->r[3]; // 801FB778
  c->r[29]=0u+0x00000000u; // 801FB77C
L_801FB780:;
  c->r[0]=c->r[29]+0x00000001u; // 801FB780
  c->r[3]=c->r[31]|c->r[31]; // 801FB784
  c->r[4]=c->r[30]|c->r[30]; // 801FB788
  c->r[5]=addc(c,~c->r[0],0x00000035u,1); // 801FB78C
  c->lr=0x801FB794u; f_80253040(c); // 801FB790
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801FB794
  if (crb(c,2)) { goto L_801FB7B4; } // 801FB798
  c->r[5]=addc(c,~c->r[29],0x0000002Au,1); // 801FB79C
  c->r[4]=0u+0x00000635u; // 801FB7A0
  c->r[3]=0u+0x00000000u; // 801FB7A4
  c->lr=0x801FB7ACu; f_8025301C(c); // 801FB7A8
  c->r[30]=c->r[30]^c->r[4]; // 801FB7AC
  c->r[31]=c->r[31]^c->r[3]; // 801FB7B0
L_801FB7B4:;
  c->r[29]=c->r[29]+0x00000001u; // 801FB7B4
  cmps(c,0,(int32_t)c->r[29],43); // 801FB7B8
  if (crb(c,0)) { IRQCHK(c); goto L_801FB780; } // 801FB7BC
  c->r[0]=c->r[30]|c->r[31]; cr0(c,c->r[0]); // 801FB7C0
  if (crb(c,2)) { goto L_801FB7D0; } // 801FB7C4
  c->r[3]=0u+0xFFFFFFDBu; // 801FB7C8
  goto L_801FB7D4; // 801FB7CC
L_801FB7D0:;
  c->r[3]=0u+0x00000000u; // 801FB7D0
L_801FB7D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FB7D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FB7D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FB7DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FB7E0
  c->lr=c->r[0]; // 801FB7E4
  c->r[1]=c->r[1]+0x00000020u; // 801FB7E8
  return; // 801FB7EC
}

// fn_801FB7F0
void f_801FB7F0(Ctx* __restrict c) {
  c->r[9]=0u+0xFFFFFFFFu; // 801FB7F0
  c->r[7]=0u+0x00200000u; // 801FB7F4
  c->r[6]=0u+0x5E5E0000u; // 801FB7F8
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB7FC
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801FB800
  c->r[8]=c->r[4]&c->r[9]; // 801FB804
  c->r[0]=c->r[6]+0x00005E5Eu; // 801FB808
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FB80C
  c->r[3]=c->r[3]&c->r[7]; // 801FB810
  c->r[5]=0u+0xFFFF0000u; // 801FB814
  c->r[8]=c->r[8]^c->r[0]; // 801FB818
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FB81C
  c->r[8]=c->r[8]&c->r[9]; // 801FB820
  c->r[3]=c->r[3]^0x00005E5Eu; // 801FB824
  c->r[0]=rotl(c->r[8],21)&0x00200000u; // 801FB828
  c->r[6]=0u+0xFFFFFF00u; // 801FB82C
  c->r[3]=c->r[3]&c->r[7]; // 801FB830
  c->r[8]=rotl(c->r[8],31)&0xFFFFFFFFu; // 801FB834
  c->r[3]=c->r[3]|c->r[0]; // 801FB838
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FB83C
  c->r[8]=(rotl(c->r[3],31)&0x80000000u)|(c->r[8]&~0x80000000u); // 801FB840
  c->r[4]=0u+0xFF010000u; // 801FB844
  c->r[7]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801FB848
  c->r[5]=c->r[5]+0x000000FFu; // 801FB84C
  c->r[30]=rotl(c->r[8],24)&0xFFFFFFFFu; // 801FB850
  c->r[29]=rotl(c->r[3],23)&0x000000FFu; // 801FB854
  c->r[12]=c->r[7]&c->r[9]; // 801FB858
  c->r[0]=0u+0x00000000u; // 801FB85C
  c->r[30]=(rotl(c->r[3],23)&0xFF000000u)|(c->r[30]&~0xFF000000u); // 801FB860
  c->r[31]=c->r[8]&c->r[6]; // 801FB864
  c->r[31]=(rotl(c->r[30],0)&0x000000FFu)|(c->r[31]&~0x000000FFu); // 801FB868
  c->r[11]=rotl(c->r[3],31)&0x0000FF00u; // 801FB86C
  c->r[30]=c->r[31]&c->r[5]; // 801FB870
  c->r[12]=c->r[12]&c->r[9]; // 801FB874
  c->r[0]=(rotl(c->r[29],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801FB878
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801FB87C
  c->r[12]=c->r[12]|c->r[0]; // 801FB880
  c->r[11]=c->r[30]|c->r[11]; // 801FB884
  c->r[30]=c->r[11]&c->r[4]; // 801FB888
  c->r[31]=rotl(c->r[8],0)&0x000000FFu; // 801FB88C
  c->r[0]=0u+0x00000000u; // 801FB890
  c->r[11]=rotl(c->r[8],16)&0x00FF0000u; // 801FB894
  c->r[10]=0u+0x01000000u; // 801FB898
  c->r[12]=c->r[12]&c->r[9]; // 801FB89C
  c->r[0]=(rotl(c->r[31],16)&0x0000FFFFu)|(c->r[0]&~0x0000FFFFu); // 801FB8A0
  c->r[30]=c->r[30]|c->r[11]; // 801FB8A4
  c->r[29]=c->r[12]|c->r[0]; // 801FB8A8
  c->r[12]=rotl(c->r[3],31)&0x000000FFu; // 801FB8AC
  c->r[0]=c->r[10]+0xFFFFFFFFu; // 801FB8B0
  c->r[10]=0u+0x00000000u; // 801FB8B4
  c->r[10]=(rotl(c->r[12],24)&0x00FFFFFFu)|(c->r[10]&~0x00FFFFFFu); // 801FB8B8
  c->r[11]=c->r[29]&c->r[9]; // 801FB8BC
  c->r[12]=c->r[30]&c->r[0]; // 801FB8C0
  c->r[3]=rotl(c->r[3],23)&0xFF000000u; // 801FB8C4
  c->r[3]=c->r[12]|c->r[3]; // 801FB8C8
  c->r[12]=c->r[11]|c->r[10]; // 801FB8CC
  c->r[10]=c->r[3]&c->r[9]; // 801FB8D0
  c->r[3]=0u+0x80280000u; // 801FB8D4
  c->r[31]=c->r[10]&c->r[9]; // 801FB8D8
  c->r[30]=rotl(c->r[8],16)&0xFFFFFFFFu; // 801FB8DC
  c->r[11]=rotl(c->r[31],28)&0x0000000Fu; // 801FB8E0
  c->r[3]=c->r[3]+0x00001A08u; // 801FB8E4
  c->r[30]=(rotl(c->r[7],16)&0xFFFF0000u)|(c->r[30]&~0xFFFF0000u); // 801FB8E8
  c->r[10]=rotl(c->r[31],0)&0x0000000Fu; // 801FB8EC
  c->r[29]=c->r[12]&c->r[6]; // 801FB8F0
  c->r[12]=rotl(c->r[8],8)&0xFFFFFFFFu; // 801FB8F4
  c->r[11]=R8(c->r[3]+c->r[11]); // 801FB8F8
  c->r[12]=(rotl(c->r[7],8)&0xFFFFFF00u)|(c->r[12]&~0xFFFFFF00u); // 801FB8FC
  c->r[7]=R8(c->r[3]+c->r[10]); // 801FB900
  c->r[29]=(rotl(c->r[30],0)&0x000000FFu)|(c->r[29]&~0x000000FFu); // 801FB904
  c->r[8]=rotl(c->r[11],4)&0xFFFFFFF0u; // 801FB908
  c->r[10]=rotl(c->r[12],8)&0x0000FF00u; // 801FB90C
  c->r[11]=c->r[29]&c->r[5]; // 801FB910
  c->r[10]=c->r[11]|c->r[10]; // 801FB914
  c->r[7]=c->r[8]|c->r[7]; // 801FB918
  c->r[11]=c->r[31]&c->r[6]; // 801FB91C
  c->r[8]=0u+0x00000000u; // 801FB920
  c->r[11]=(rotl(c->r[7],0)&0x000000FFu)|(c->r[11]&~0x000000FFu); // 801FB924
  c->r[12]=c->r[10]&c->r[9]; // 801FB928
  c->r[10]=rotl(c->r[11],24)&0xFFFFFFFFu; // 801FB92C
  c->r[7]=0u+0x00000000u; // 801FB930
  c->r[10]=(rotl(c->r[12],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 801FB934
  c->r[31]=c->r[11]&c->r[5]; // 801FB938
  c->r[11]=rotl(c->r[10],28)&0x0000000Fu; // 801FB93C
  c->r[12]=c->r[12]&c->r[9]; // 801FB940
  c->r[10]=rotl(c->r[10],0)&0x0000000Fu; // 801FB944
  c->r[11]=R8(c->r[3]+c->r[11]); // 801FB948
  c->r[10]=R8(c->r[3]+c->r[10]); // 801FB94C
  c->r[11]=rotl(c->r[11],4)&0xFFFFFFF0u; // 801FB950
  c->r[10]=c->r[11]|c->r[10]; // 801FB954
  c->r[11]=rotl(c->r[10],0)&0x000000FFu; // 801FB958
  c->r[10]=rotl(c->r[10],8)&0x0000FF00u; // 801FB95C
  c->r[8]=(rotl(c->r[11],8)&0x000000FFu)|(c->r[8]&~0x000000FFu); // 801FB960
  c->r[10]=c->r[31]|c->r[10]; // 801FB964
  c->r[8]=c->r[12]|c->r[8]; // 801FB968
  c->r[12]=rotl(c->r[10],16)&0xFFFFFFFFu; // 801FB96C
  c->r[11]=c->r[10]&c->r[4]; // 801FB970
  c->r[12]=(rotl(c->r[8],16)&0xFFFF0000u)|(c->r[12]&~0xFFFF0000u); // 801FB974
  c->r[10]=c->r[8]&c->r[9]; // 801FB978
  c->r[8]=rotl(c->r[12],28)&0x0000000Fu; // 801FB97C
  c->r[4]=rotl(c->r[12],0)&0x0000000Fu; // 801FB980
  c->r[8]=R8(c->r[3]+c->r[8]); // 801FB984
  c->r[4]=R8(c->r[3]+c->r[4]); // 801FB988
  c->r[8]=rotl(c->r[8],4)&0xFFFFFFF0u; // 801FB98C
  c->r[4]=c->r[8]|c->r[4]; // 801FB990
  c->r[8]=rotl(c->r[4],0)&0x000000FFu; // 801FB994
  c->r[4]=rotl(c->r[4],16)&0x00FF0000u; // 801FB998
  c->r[29]=c->r[11]|c->r[4]; // 801FB99C
  c->r[7]=(rotl(c->r[8],16)&0x0000FFFFu)|(c->r[7]&~0x0000FFFFu); // 801FB9A0
  c->r[11]=c->r[10]|c->r[7]; // 801FB9A4
  c->r[4]=0u+0x00010000u; // 801FB9A8
  c->r[8]=rotl(c->r[29],8)&0xFFFFFFFFu; // 801FB9AC
  c->r[31]=c->r[29]&c->r[0]; // 801FB9B0
  c->r[8]=(rotl(c->r[11],8)&0xFFFFFF00u)|(c->r[8]&~0xFFFFFF00u); // 801FB9B4
  c->r[12]=c->r[11]&c->r[9]; // 801FB9B8
  c->r[10]=rotl(c->r[8],28)&0x0000000Fu; // 801FB9BC
  c->r[0]=c->r[4]+0xFFFFB3B3u; // 801FB9C0
  c->r[11]=R8(c->r[3]+c->r[10]); // 801FB9C4
  c->r[8]=rotl(c->r[8],0)&0x0000000Fu; // 801FB9C8
  c->r[10]=R8(c->r[3]+c->r[8]); // 801FB9CC
  c->r[8]=0u+0x00000000u; // 801FB9D0
  c->r[11]=rotl(c->r[11],4)&0xFFFFFFF0u; // 801FB9D4
  c->r[7]=0u+0xB3B40000u; // 801FB9D8
  c->r[11]=c->r[11]|c->r[10]; // 801FB9DC
  c->r[10]=rotl(c->r[11],0)&0x000000FFu; // 801FB9E0
  c->r[7]=c->r[7]+0xFFFFB3B3u; // 801FB9E4
  c->r[8]=(rotl(c->r[10],24)&0x00FFFFFFu)|(c->r[8]&~0x00FFFFFFu); // 801FB9E8
  c->r[4]=rotl(c->r[11],24)&0xFF000000u; // 801FB9EC
  c->r[10]=c->r[12]|c->r[8]; // 801FB9F0
  c->r[8]=rotl(c->r[10],28)&0x0000000Fu; // 801FB9F4
  c->r[12]=c->r[31]|c->r[4]; // 801FB9F8
  c->r[4]=rotl(c->r[10],0)&0x0000000Fu; // 801FB9FC
  c->r[8]=R8(c->r[3]+c->r[8]); // 801FBA00
  c->r[11]=c->r[10]&c->r[6]; // 801FBA04
  c->r[4]=R8(c->r[3]+c->r[4]); // 801FBA08
  c->r[6]=rotl(c->r[8],4)&0xFFFFFFF0u; // 801FBA0C
  c->r[8]=c->r[12]&c->r[9]; // 801FBA10
  c->r[4]=c->r[6]|c->r[4]; // 801FBA14
  c->r[11]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[11]&~0x000000FFu); // 801FBA18
  c->r[10]=c->r[8]&c->r[9]; // 801FBA1C
  c->r[6]=rotl(c->r[11],20)&0x0000000Fu; // 801FBA20
  c->r[4]=rotl(c->r[11],24)&0x0000000Fu; // 801FBA24
  c->r[6]=R8(c->r[3]+c->r[6]); // 801FBA28
  c->r[3]=R8(c->r[3]+c->r[4]); // 801FBA2C
  c->r[8]=c->r[11]&c->r[5]; // 801FBA30
  c->r[5]=rotl(c->r[6],4)&0xFFFFFFF0u; // 801FBA34
  c->r[4]=c->r[10]&c->r[9]; // 801FBA38
  c->r[3]=c->r[5]|c->r[3]; // 801FBA3C
  c->r[3]=rotl(c->r[3],8)&0x0000FF00u; // 801FBA40
  c->r[3]=c->r[8]|c->r[3]; // 801FBA44
  c->r[5]=rotl(c->r[3],10)&0x001FFC00u; // 801FBA48
  c->r[3]=rotl(c->r[3],21)&0x000003FFu; // 801FBA4C
  c->r[5]=(rotl(c->r[4],10)&0x000003FFu)|(c->r[5]&~0x000003FFu); // 801FBA50
  c->r[3]=(rotl(c->r[4],10)&0xFFFFFC00u)|(c->r[3]&~0xFFFFFC00u); // 801FBA54
  c->r[4]=c->r[3]^c->r[7]; // 801FBA58
  c->r[3]=c->r[5]^c->r[0]; // 801FBA5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FBA60
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FBA64
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FBA68
  c->r[1]=c->r[1]+0x00000020u; // 801FBA6C
  return; // 801FBA70
}

// fn_801FBA74
void f_801FBA74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBA74
  c->r[0]=c->lr; // 801FBA78
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FBA7C
  c->r[11]=c->r[1]+0x00000030u; // 801FBA80
  c->lr=0x801FBA88u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FBA84
  c->r[30]=0u+0x804A0000u; // 801FBA88
  c->r[27]=c->r[3]|c->r[3]; // 801FBA8C
  c->r[28]=c->r[4]|c->r[4]; // 801FBA90
  c->r[30]=c->r[30]+0x00004C00u; // 801FBA94
  c->lr=0x801FBA9Cu; f_8015716C(c); // 801FBA98
  cmps(c,0,(int32_t)c->r[3],0); // 801FBA9C
  if (!crb(c,2)) { goto L_801FBAAC; } // 801FBAA0
  c->r[3]=0u+0xFFFFFFFFu; // 801FBAA4
  goto L_801FBAB0; // 801FBAA8
L_801FBAAC:;
  c->r[3]=0u+0x00000000u; // 801FBAAC
L_801FBAB0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FBAB0
  if (!crb(c,0)) { goto L_801FBABC; } // 801FBAB4
  goto L_801FBBA4; // 801FBAB8
L_801FBABC:;
  c->r[0]=R32(c->r[13]+0xFFFFB0E8u); // 801FBABC
  cmps(c,0,(int32_t)c->r[0],0); // 801FBAC0
  if (!crb(c,2)) { goto L_801FBB14; } // 801FBAC4
  c->lr=0x801FBACCu; f_80154410(c); // 801FBAC8
  c->r[0]=R32(c->r[13]+0xFFFFB0E8u); // 801FBACC
  c->r[31]=c->r[3]|c->r[3]; // 801FBAD0
  cmps(c,0,(int32_t)c->r[0],0); // 801FBAD4
  if (!crb(c,2)) { goto L_801FBB0C; } // 801FBAD8
  c->r[3]=c->r[30]+0x00000080u; // 801FBADC
  c->lr=0x801FBAE4u; f_80155694(c); // 801FBAE0
  c->r[3]=c->r[30]+0x000000A0u; // 801FBAE4
  c->r[4]=0u+0x00000000u; // 801FBAE8
  c->r[5]=0u+0x00000020u; // 801FBAEC
  c->lr=0x801FBAF4u; f_8000443C(c); // 801FBAF0
  c->r[3]=c->r[30]+0x000000C0u; // 801FBAF4
  c->r[4]=0u+0x00000000u; // 801FBAF8
  c->r[5]=0u+0x00000020u; // 801FBAFC
  c->lr=0x801FBB04u; f_8000443C(c); // 801FBB00
  c->r[0]=0u+0x00000001u; // 801FBB04
  W32(c->r[13]+0xFFFFB0E8u,c->r[0]); // 801FBB08
L_801FBB0C:;
  c->r[3]=c->r[31]|c->r[31]; // 801FBB0C
  c->lr=0x801FBB14u; f_80154438(c); // 801FBB10
L_801FBB14:;
  c->r[3]=c->r[30]+0x00000080u; // 801FBB14
  c->lr=0x801FBB1Cu; f_801556CC(c); // 801FBB18
  c->r[31]=0u+0x802F0000u; // 801FBB1C
  c->r[4]=0u+0x802F0000u; // 801FBB20
  c->r[3]=c->r[31]+0xFFFF972Cu; // 801FBB24
  c->r[5]=c->r[1]+0x00000008u; // 801FBB28
  c->r[4]=c->r[4]+0xFFFF9718u; // 801FBB2C
  c->r[6]=0u+0x00000000u; // 801FBB30
  c->lr=0x801FBB38u; f_801FBC50(c); // 801FBB34
  cmps(c,0,(int32_t)c->r[3],0); // 801FBB38
  c->r[29]=c->r[3]|c->r[3]; // 801FBB3C
  if (crb(c,0)) { goto L_801FBB98; } // 801FBB40
  c->r[6]=c->r[30]+0x000000A0u; // 801FBB44
  W32(c->r[30]+0x000000A0u,c->r[27]); // 801FBB48
  c->r[4]=R32(c->r[1]+0x00000008u); // 801FBB4C
  c->r[3]=c->r[31]+0xFFFF972Cu; // 801FBB50
  W32(c->r[6]+0x00000004u,c->r[28]); // 801FBB54
  c->r[8]=c->r[30]+0x000000C0u; // 801FBB58
  c->r[5]=0u+0x00000017u; // 801FBB5C
  c->r[7]=0u+0x00000020u; // 801FBB60
  c->r[9]=0u+0x00000020u; // 801FBB64
  c->lr=0x801FBB6Cu; f_801FBCFC(c); // 801FBB68
  cmps(c,0,(int32_t)c->r[3],0); // 801FBB6C
  c->r[29]=c->r[3]|c->r[3]; // 801FBB70
  if (crb(c,0)) { goto L_801FBB7C; } // 801FBB74
  c->r[29]=R32(c->r[30]+0x000000C0u); // 801FBB78
L_801FBB7C:;
  c->r[3]=0u+0x802F0000u; // 801FBB7C
  c->r[4]=R32(c->r[1]+0x00000008u); // 801FBB80
  c->r[3]=c->r[3]+0xFFFF972Cu; // 801FBB84
  c->lr=0x801FBB8Cu; f_801FBCC8(c); // 801FBB88
  cmps(c,0,(int32_t)c->r[29],0); // 801FBB8C
  if (crb(c,0)) { goto L_801FBB98; } // 801FBB90
  c->r[29]=c->r[3]|c->r[3]; // 801FBB94
L_801FBB98:;
  c->r[3]=c->r[30]+0x00000080u; // 801FBB98
  c->lr=0x801FBBA0u; f_801557A8(c); // 801FBB9C
  c->r[3]=c->r[29]|c->r[29]; // 801FBBA0
L_801FBBA4:;
  c->r[11]=c->r[1]+0x00000030u; // 801FBBA4
  c->lr=0x801FBBACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FBBA8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FBBAC
  c->lr=c->r[0]; // 801FBBB0
  c->r[1]=c->r[1]+0x00000030u; // 801FBBB4
  return; // 801FBBB8
}

// NWC24iSynchronizeRtcCounter
void f_801FBBBC(Ctx* __restrict c) {
  trace_call(0x801FBBBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBBBC
  c->r[0]=c->lr; // 801FBBC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FBBC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FBBC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FBBCC
  c->r[30]=c->r[3]|c->r[3]; // 801FBBD0
L_801FBBD4:;
  c->lr=0x801FBBD8u; f_8018181C(c); // 801FBBD4
  cmpu(c,0,c->r[3],0x00000002u); // 801FBBD8
  if (!crb(c,2)) { goto L_801FBBE8; } // 801FBBDC
  c->r[3]=0u+0xFFFFFFFFu; // 801FBBE0
  goto L_801FBC18; // 801FBBE4
L_801FBBE8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FBBE8
  if (!crb(c,2)) { IRQCHK(c); goto L_801FBBD4; } // 801FBBEC
  c->lr=0x801FBBF4u; f_80183380(c); // 801FBBF0
  c->r[31]=c->r[3]|c->r[3]; // 801FBBF4
  c->lr=0x801FBBFCu; f_8015848C(c); // 801FBBF8
  c->r[6]=0u+0x80000000u; // 801FBBFC
  c->r[5]=0u+0x00000000u; // 801FBC00
  c->r[0]=R32(c->r[6]+0x000000F8u); // 801FBC04
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FBC08
  c->lr=0x801FBC10u; f_80252CF4(c); // 801FBC0C
  c->r[31]=addc(c,~c->r[31],c->r[4],1); // 801FBC10
  c->r[3]=0u+0x00000000u; // 801FBC14
L_801FBC18:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FBC18
  if (crb(c,2)) { goto L_801FBC24; } // 801FBC1C
  goto L_801FBC38; // 801FBC20
L_801FBC24:;
  c->r[0]=0u-c->r[30]; // 801FBC24
  c->r[3]=c->r[31]|c->r[31]; // 801FBC28
  c->r[0]=c->r[0]|c->r[30]; // 801FBC2C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801FBC30
  c->lr=0x801FBC38u; f_801FBA74(c); // 801FBC34
L_801FBC38:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FBC38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FBC3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FBC40
  c->lr=c->r[0]; // 801FBC44
  c->r[1]=c->r[1]+0x00000010u; // 801FBC48
  return; // 801FBC4C
}

// fn_801FBC50
void f_801FBC50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBC50
  c->r[0]=c->lr; // 801FBC54
  cmps(c,0,(int32_t)c->r[5],0); // 801FBC58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FBC5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FBC60
  c->r[31]=c->r[5]|c->r[5]; // 801FBC64
  if (!crb(c,2)) { goto L_801FBC74; } // 801FBC68
  c->r[3]=0u+0xFFFFFFFDu; // 801FBC6C
  goto L_801FBCB4; // 801FBC70
L_801FBC74:;
  c->r[3]=c->r[4]|c->r[4]; // 801FBC74
  c->r[4]=c->r[6]|c->r[6]; // 801FBC78
  c->lr=0x801FBC80u; f_80186284(c); // 801FBC7C
  cmps(c,0,(int32_t)c->r[3],0); // 801FBC80
  W32(c->r[31]+0x00000000u,c->r[3]); // 801FBC84
  if (!crb(c,0)) { goto L_801FBCB0; } // 801FBC88
  cmps(c,0,(int32_t)c->r[3],-6); // 801FBC8C
  if (!crb(c,2)) { goto L_801FBC9C; } // 801FBC90
  c->r[3]=0u+0xFFFFFFE3u; // 801FBC94
  goto L_801FBCB4; // 801FBC98
L_801FBC9C:;
  cmps(c,0,(int32_t)c->r[3],-8); // 801FBC9C
  c->r[3]=0u+0xFFFFFFD6u; // 801FBCA0
  if (!crb(c,2)) { goto L_801FBCB4; } // 801FBCA4
  c->r[3]=0u+0xFFFFFFE6u; // 801FBCA8
  goto L_801FBCB4; // 801FBCAC
L_801FBCB0:;
  c->r[3]=0u+0x00000000u; // 801FBCB0
L_801FBCB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FBCB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FBCB8
  c->lr=c->r[0]; // 801FBCBC
  c->r[1]=c->r[1]+0x00000010u; // 801FBCC0
  return; // 801FBCC4
}

// fn_801FBCC8
void f_801FBCC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBCC8
  c->r[0]=c->lr; // 801FBCCC
  c->r[3]=c->r[4]|c->r[4]; // 801FBCD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FBCD4
  c->lr=0x801FBCDCu; f_80186464(c); // 801FBCD8
  cmps(c,0,(int32_t)c->r[3],0); // 801FBCDC
  c->r[3]=0u+0x00000000u; // 801FBCE0
  if (!crb(c,0)) { goto L_801FBCEC; } // 801FBCE4
  c->r[3]=0u+0xFFFFFFD6u; // 801FBCE8
L_801FBCEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FBCEC
  c->lr=c->r[0]; // 801FBCF0
  c->r[1]=c->r[1]+0x00000010u; // 801FBCF4
  return; // 801FBCF8
}

// fn_801FBCFC
void f_801FBCFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBCFC
  c->r[0]=c->lr; // 801FBD00
  c->r[3]=c->r[4]|c->r[4]; // 801FBD04
  c->r[4]=c->r[5]|c->r[5]; // 801FBD08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FBD0C
  c->r[5]=c->r[6]|c->r[6]; // 801FBD10
  c->r[6]=c->r[7]|c->r[7]; // 801FBD14
  c->r[7]=c->r[8]|c->r[8]; // 801FBD18
  c->r[8]=c->r[9]|c->r[9]; // 801FBD1C
  c->lr=0x801FBD24u; f_80186C1C(c); // 801FBD20
  cmps(c,0,(int32_t)c->r[3],0); // 801FBD24
  c->r[3]=0u+0x00000000u; // 801FBD28
  if (!crb(c,0)) { goto L_801FBD34; } // 801FBD2C
  c->r[3]=0u+0xFFFFFFD6u; // 801FBD30
L_801FBD34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FBD34
  c->lr=c->r[0]; // 801FBD38
  c->r[1]=c->r[1]+0x00000010u; // 801FBD3C
  return; // 801FBD40
}

// fn_801FBD44
void f_801FBD44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBD44
  c->r[0]=c->lr; // 801FBD48
  c->r[3]=c->r[4]|c->r[4]; // 801FBD4C
  c->r[4]=c->r[5]|c->r[5]; // 801FBD50
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FBD54
  c->r[11]=0u+0x80200000u; // 801FBD58
  c->r[5]=c->r[6]|c->r[6]; // 801FBD5C
  c->r[6]=c->r[7]|c->r[7]; // 801FBD60
  c->r[7]=c->r[8]|c->r[8]; // 801FBD64
  c->r[8]=c->r[9]|c->r[9]; // 801FBD68
  c->r[9]=c->r[11]+0xFFFFBDA8u; // 801FBD6C
  c->lr=0x801FBD74u; f_80186AE4(c); // 801FBD70
  cmps(c,0,(int32_t)c->r[3],0); // 801FBD74
  if (!crb(c,0)) { goto L_801FBD84; } // 801FBD78
  c->r[3]=0u+0xFFFFFFD6u; // 801FBD7C
  goto L_801FBD90; // 801FBD80
L_801FBD84:;
  c->r[0]=0u+0x00000001u; // 801FBD84
  c->r[3]=0u+0x00000000u; // 801FBD88
  W32(c->r[13]+0xFFFFB0F0u,c->r[0]); // 801FBD8C
L_801FBD90:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FBD90
  c->lr=c->r[0]; // 801FBD94
  c->r[1]=c->r[1]+0x00000010u; // 801FBD98
  return; // 801FBD9C
}

// fn_801FBDA0
void f_801FBDA0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFB0F0u); // 801FBDA0
  return; // 801FBDA4
}

// fn_801FBDA8
void f_801FBDA8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801FBDA8
  if (crb(c,2)) { goto L_801FBDB4; } // 801FBDAC
  W32(c->r[4]+0x00000000u,c->r[3]); // 801FBDB0
L_801FBDB4:;
  c->r[0]=0u+0x00000000u; // 801FBDB4
  c->r[3]=0u+0x00000000u; // 801FBDB8
  W32(c->r[13]+0xFFFFB0F0u,c->r[0]); // 801FBDBC
  return; // 801FBDC0
}

// NWC24iPrepareShutdown
void f_801FBDC4(Ctx* __restrict c) {
  trace_call(0x801FBDC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBDC4
  c->r[0]=c->lr; // 801FBDC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FBDCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FBDD0
  c->r[31]=0u+0x00000000u; // 801FBDD4
  c->lr=0x801FBDDCu; f_801FAF68(c); // 801FBDD8
  c->r[5]=0u+0x80200000u; // 801FBDDC
  c->r[4]=0u+0x804A0000u; // 801FBDE0
  c->r[5]=c->r[5]+0xFFFFBE84u; // 801FBDE4
  c->r[0]=0u+0x0000006Eu; // 801FBDE8
  c->r[3]=c->r[4]+0x00004CE0u; // 801FBDEC
  W32(c->r[4]+0x00004CE0u,c->r[5]); // 801FBDF0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801FBDF4
  c->lr=0x801FBDFCu; f_80155A40(c); // 801FBDF8
  c->r[0]=R32(c->r[13]+0xFFFF9488u); // 801FBDFC
  cmps(c,0,(int32_t)c->r[0],0); // 801FBE00
  if (!crb(c,0)) { goto L_801FBE28; } // 801FBE04
  c->r[3]=0u+0x802F0000u; // 801FBE08
  c->r[4]=0u+0x802F0000u; // 801FBE0C
  c->r[3]=c->r[3]+0xFFFF9740u; // 801FBE10
  c->r[5]=c->r[13]+0xFFFF9488u; // 801FBE14
  c->r[4]=c->r[4]+0xFFFF9758u; // 801FBE18
  c->r[6]=0u+0x00000001u; // 801FBE1C
  c->lr=0x801FBE24u; f_801FBC50(c); // 801FBE20
  c->r[31]=c->r[3]|c->r[3]; // 801FBE24
L_801FBE28:;
  c->r[0]=0u+0x00000005u; // 801FBE28
  W32(c->r[13]+0xFFFFB0F8u,c->r[0]); // 801FBE2C
L_801FBE30:;
  c->lr=0x801FBE34u; f_8018181C(c); // 801FBE30
  cmpu(c,0,c->r[3],0x00000002u); // 801FBE34
  if (crb(c,2)) { goto L_801FBE54; } // 801FBE38
  cmpu(c,0,c->r[3],0x00000001u); // 801FBE3C
  if (crb(c,2)) { IRQCHK(c); goto L_801FBE30; } // 801FBE40
  c->r[3]=c->r[1]+0x00000008u; // 801FBE44
  c->lr=0x801FBE4Cu; f_801831FC(c); // 801FBE48
  c->r[3]=R8(c->r[1]+0x00000009u); // 801FBE4C
  c->lr=0x801FBE54u; f_80159270(c); // 801FBE50
L_801FBE54:;
  c->lr=0x801FBE58u; f_8014E7A8(c); // 801FBE54
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801FBE58
  cmpu(c,0,c->r[0],0x00000040u); // 801FBE5C
  if (!crb(c,2)) { goto L_801FBE6C; } // 801FBE60
  c->r[3]=0u+0x00000001u; // 801FBE64
  c->lr=0x801FBE6Cu; f_801FB23C(c); // 801FBE68
L_801FBE6C:;
  c->r[3]=c->r[31]|c->r[31]; // 801FBE6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FBE70
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FBE74
  c->lr=c->r[0]; // 801FBE78
  c->r[1]=c->r[1]+0x00000020u; // 801FBE7C
  return; // 801FBE80
}

// fn_801FBE84
void f_801FBE84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBE84
  c->r[0]=c->lr; // 801FBE88
  cmps(c,0,(int32_t)c->r[3],0); // 801FBE8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FBE90
  if (crb(c,2)) { goto L_801FBEA0; } // 801FBE94
  c->r[3]=0u+0x00000001u; // 801FBE98
  goto L_801FBF44; // 801FBE9C
L_801FBEA0:;
  c->r[0]=R32(c->r[13]+0xFFFFB0FCu); // 801FBEA0
  cmps(c,0,(int32_t)c->r[0],0); // 801FBEA4
  if (crb(c,2)) { goto L_801FBEFC; } // 801FBEA8
  c->lr=0x801FBEB0u; f_801FBDA0(c); // 801FBEAC
  cmps(c,0,(int32_t)c->r[3],0); // 801FBEB0
  if (crb(c,2)) { goto L_801FBEC0; } // 801FBEB4
  c->r[3]=0u+0x00000000u; // 801FBEB8
  goto L_801FBF44; // 801FBEBC
L_801FBEC0:;
  c->r[0]=R32(c->r[13]+0xFFFFB100u); // 801FBEC0
  cmps(c,0,(int32_t)c->r[0],0); // 801FBEC4
  if (crb(c,0)) { goto L_801FBED4; } // 801FBEC8
  c->r[3]=0u+0x00000001u; // 801FBECC
  goto L_801FBF44; // 801FBED0
L_801FBED4:;
  c->r[3]=R32(c->r[13]+0xFFFFB0F8u); // 801FBED4
  cmps(c,0,(int32_t)c->r[3],0); // 801FBED8
  if (!crb(c,1)) { goto L_801FBEF4; } // 801FBEDC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801FBEE0
  c->r[3]=0u+0x00000000u; // 801FBEE4
  W32(c->r[13]+0xFFFFB0FCu,c->r[3]); // 801FBEE8
  W32(c->r[13]+0xFFFFB0F8u,c->r[0]); // 801FBEEC
  goto L_801FBF40; // 801FBEF0
L_801FBEF4:;
  c->r[3]=0u+0x00000001u; // 801FBEF4
  goto L_801FBF44; // 801FBEF8
L_801FBEFC:;
  c->r[5]=0u+0x804A0000u; // 801FBEFC
  c->r[3]=0u+0x802F0000u; // 801FBF00
  W32(c->r[5]+0x00004D00u,c->r[4]); // 801FBF04
  c->r[8]=0u+0x804A0000u; // 801FBF08
  c->r[6]=c->r[5]+0x00004D00u; // 801FBF0C
  c->r[4]=R32(c->r[13]+0xFFFF9488u); // 801FBF10
  c->r[3]=c->r[3]+0xFFFF976Cu; // 801FBF14
  c->r[8]=c->r[8]+0x00004D20u; // 801FBF18
  c->r[5]=0u+0x00000028u; // 801FBF1C
  c->r[7]=0u+0x00000020u; // 801FBF20
  c->r[9]=0u+0x00000020u; // 801FBF24
  c->r[10]=c->r[13]+0xFFFFB100u; // 801FBF28
  c->lr=0x801FBF30u; f_801FBD44(c); // 801FBF2C
  cmps(c,0,(int32_t)c->r[3],0); // 801FBF30
  if (crb(c,0)) { goto L_801FBF40; } // 801FBF34
  c->r[0]=0u+0x00000001u; // 801FBF38
  W32(c->r[13]+0xFFFFB0FCu,c->r[0]); // 801FBF3C
L_801FBF40:;
  c->r[3]=0u+0x00000000u; // 801FBF40
L_801FBF44:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FBF44
  c->lr=c->r[0]; // 801FBF48
  c->r[1]=c->r[1]+0x00000010u; // 801FBF4C
  return; // 801FBF50
}

// NETiGetConnectionTypeFromConfigList
void f_801FBF54(Ctx* __restrict c) {
  trace_call(0x801FBF54u);
  cmps(c,0,(int32_t)c->r[3],0); // 801FBF54
  c->r[0]=0u+0x00000063u; // 801FBF58
  if (crb(c,2)) { goto L_801FC030; } // 801FBF5C
  cmps(c,0,(int32_t)c->r[4],0); // 801FBF60
  if (!crb(c,2)) { goto L_801FC1C4; } // 801FBF64
  cmps(c,0,(int32_t)c->r[5],0); // 801FBF68
  if (!crb(c,2)) { goto L_801FC1C4; } // 801FBF6C
  c->r[0]=0u+0x00000004u; // 801FBF70
  c->r[5]=0u+0x00000000u; // 801FBF74
  c->r[4]=0u+0x00000001u; // 801FBF78
  c->ctr=c->r[0]; // 801FBF7C
L_801FBF80:;
  c->r[0]=c->r[3]&c->r[4]; cr0(c,c->r[0]); // 801FBF80
  if (crb(c,2)) { goto L_801FBF8C; } // 801FBF84
  goto L_801FC028; // 801FBF88
L_801FBF8C:;
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801FBF8C
  c->r[5]=c->r[5]+0x00000001u; // 801FBF90
  c->r[0]=c->r[3]&c->r[4]; cr0(c,c->r[0]); // 801FBF94
  if (crb(c,2)) { goto L_801FBFA0; } // 801FBF98
  goto L_801FC028; // 801FBF9C
L_801FBFA0:;
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801FBFA0
  c->r[5]=c->r[5]+0x00000001u; // 801FBFA4
  c->r[0]=c->r[3]&c->r[4]; cr0(c,c->r[0]); // 801FBFA8
  if (crb(c,2)) { goto L_801FBFB4; } // 801FBFAC
  goto L_801FC028; // 801FBFB0
L_801FBFB4:;
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801FBFB4
  c->r[5]=c->r[5]+0x00000001u; // 801FBFB8
  c->r[0]=c->r[3]&c->r[4]; cr0(c,c->r[0]); // 801FBFBC
  if (crb(c,2)) { goto L_801FBFC8; } // 801FBFC0
  goto L_801FC028; // 801FBFC4
L_801FBFC8:;
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801FBFC8
  c->r[5]=c->r[5]+0x00000001u; // 801FBFCC
  c->r[0]=c->r[3]&c->r[4]; cr0(c,c->r[0]); // 801FBFD0
  if (crb(c,2)) { goto L_801FBFDC; } // 801FBFD4
  goto L_801FC028; // 801FBFD8
L_801FBFDC:;
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801FBFDC
  c->r[5]=c->r[5]+0x00000001u; // 801FBFE0
  c->r[0]=c->r[3]&c->r[4]; cr0(c,c->r[0]); // 801FBFE4
  if (crb(c,2)) { goto L_801FBFF0; } // 801FBFE8
  goto L_801FC028; // 801FBFEC
L_801FBFF0:;
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801FBFF0
  c->r[5]=c->r[5]+0x00000001u; // 801FBFF4
  c->r[0]=c->r[3]&c->r[4]; cr0(c,c->r[0]); // 801FBFF8
  if (crb(c,2)) { goto L_801FC004; } // 801FBFFC
  goto L_801FC028; // 801FC000
L_801FC004:;
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801FC004
  c->r[5]=c->r[5]+0x00000001u; // 801FC008
  c->r[0]=c->r[3]&c->r[4]; cr0(c,c->r[0]); // 801FC00C
  if (crb(c,2)) { goto L_801FC018; } // 801FC010
  goto L_801FC028; // 801FC014
L_801FC018:;
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801FC018
  c->r[5]=c->r[5]+0x00000001u; // 801FC01C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FBF80; } // 801FC020
  c->r[5]=0u+0xFFFFFFFFu; // 801FC024
L_801FC028:;
  c->r[0]=c->r[5]+0x00000014u; // 801FC028
  goto L_801FC1C4; // 801FC02C
L_801FC030:;
  cmps(c,0,(int32_t)c->r[4],0); // 801FC030
  if (crb(c,2)) { goto L_801FC100; } // 801FC034
  cmps(c,0,(int32_t)c->r[5],0); // 801FC038
  if (!crb(c,2)) { goto L_801FC1C4; } // 801FC03C
  c->r[0]=0u+0x00000004u; // 801FC040
  c->r[5]=0u+0x00000000u; // 801FC044
  c->r[3]=0u+0x00000001u; // 801FC048
  c->ctr=c->r[0]; // 801FC04C
L_801FC050:;
  c->r[0]=c->r[4]&c->r[3]; cr0(c,c->r[0]); // 801FC050
  if (crb(c,2)) { goto L_801FC05C; } // 801FC054
  goto L_801FC0F8; // 801FC058
L_801FC05C:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC05C
  c->r[5]=c->r[5]+0x00000001u; // 801FC060
  c->r[0]=c->r[4]&c->r[3]; cr0(c,c->r[0]); // 801FC064
  if (crb(c,2)) { goto L_801FC070; } // 801FC068
  goto L_801FC0F8; // 801FC06C
L_801FC070:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC070
  c->r[5]=c->r[5]+0x00000001u; // 801FC074
  c->r[0]=c->r[4]&c->r[3]; cr0(c,c->r[0]); // 801FC078
  if (crb(c,2)) { goto L_801FC084; } // 801FC07C
  goto L_801FC0F8; // 801FC080
L_801FC084:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC084
  c->r[5]=c->r[5]+0x00000001u; // 801FC088
  c->r[0]=c->r[4]&c->r[3]; cr0(c,c->r[0]); // 801FC08C
  if (crb(c,2)) { goto L_801FC098; } // 801FC090
  goto L_801FC0F8; // 801FC094
L_801FC098:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC098
  c->r[5]=c->r[5]+0x00000001u; // 801FC09C
  c->r[0]=c->r[4]&c->r[3]; cr0(c,c->r[0]); // 801FC0A0
  if (crb(c,2)) { goto L_801FC0AC; } // 801FC0A4
  goto L_801FC0F8; // 801FC0A8
L_801FC0AC:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC0AC
  c->r[5]=c->r[5]+0x00000001u; // 801FC0B0
  c->r[0]=c->r[4]&c->r[3]; cr0(c,c->r[0]); // 801FC0B4
  if (crb(c,2)) { goto L_801FC0C0; } // 801FC0B8
  goto L_801FC0F8; // 801FC0BC
L_801FC0C0:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC0C0
  c->r[5]=c->r[5]+0x00000001u; // 801FC0C4
  c->r[0]=c->r[4]&c->r[3]; cr0(c,c->r[0]); // 801FC0C8
  if (crb(c,2)) { goto L_801FC0D4; } // 801FC0CC
  goto L_801FC0F8; // 801FC0D0
L_801FC0D4:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC0D4
  c->r[5]=c->r[5]+0x00000001u; // 801FC0D8
  c->r[0]=c->r[4]&c->r[3]; cr0(c,c->r[0]); // 801FC0DC
  if (crb(c,2)) { goto L_801FC0E8; } // 801FC0E0
  goto L_801FC0F8; // 801FC0E4
L_801FC0E8:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC0E8
  c->r[5]=c->r[5]+0x00000001u; // 801FC0EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC050; } // 801FC0F0
  c->r[5]=0u+0xFFFFFFFFu; // 801FC0F4
L_801FC0F8:;
  c->r[0]=c->r[5]+0x0000001Eu; // 801FC0F8
  goto L_801FC1C4; // 801FC0FC
L_801FC100:;
  cmps(c,0,(int32_t)c->r[5],0); // 801FC100
  if (crb(c,2)) { goto L_801FC1C4; } // 801FC104
  c->r[0]=0u+0x00000004u; // 801FC108
  c->r[4]=0u+0x00000000u; // 801FC10C
  c->r[3]=0u+0x00000001u; // 801FC110
  c->ctr=c->r[0]; // 801FC114
L_801FC118:;
  c->r[0]=c->r[5]&c->r[3]; cr0(c,c->r[0]); // 801FC118
  if (crb(c,2)) { goto L_801FC124; } // 801FC11C
  goto L_801FC1C0; // 801FC120
L_801FC124:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC124
  c->r[4]=c->r[4]+0x00000001u; // 801FC128
  c->r[0]=c->r[5]&c->r[3]; cr0(c,c->r[0]); // 801FC12C
  if (crb(c,2)) { goto L_801FC138; } // 801FC130
  goto L_801FC1C0; // 801FC134
L_801FC138:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC138
  c->r[4]=c->r[4]+0x00000001u; // 801FC13C
  c->r[0]=c->r[5]&c->r[3]; cr0(c,c->r[0]); // 801FC140
  if (crb(c,2)) { goto L_801FC14C; } // 801FC144
  goto L_801FC1C0; // 801FC148
L_801FC14C:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC14C
  c->r[4]=c->r[4]+0x00000001u; // 801FC150
  c->r[0]=c->r[5]&c->r[3]; cr0(c,c->r[0]); // 801FC154
  if (crb(c,2)) { goto L_801FC160; } // 801FC158
  goto L_801FC1C0; // 801FC15C
L_801FC160:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC160
  c->r[4]=c->r[4]+0x00000001u; // 801FC164
  c->r[0]=c->r[5]&c->r[3]; cr0(c,c->r[0]); // 801FC168
  if (crb(c,2)) { goto L_801FC174; } // 801FC16C
  goto L_801FC1C0; // 801FC170
L_801FC174:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC174
  c->r[4]=c->r[4]+0x00000001u; // 801FC178
  c->r[0]=c->r[5]&c->r[3]; cr0(c,c->r[0]); // 801FC17C
  if (crb(c,2)) { goto L_801FC188; } // 801FC180
  goto L_801FC1C0; // 801FC184
L_801FC188:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC188
  c->r[4]=c->r[4]+0x00000001u; // 801FC18C
  c->r[0]=c->r[5]&c->r[3]; cr0(c,c->r[0]); // 801FC190
  if (crb(c,2)) { goto L_801FC19C; } // 801FC194
  goto L_801FC1C0; // 801FC198
L_801FC19C:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC19C
  c->r[4]=c->r[4]+0x00000001u; // 801FC1A0
  c->r[0]=c->r[5]&c->r[3]; cr0(c,c->r[0]); // 801FC1A4
  if (crb(c,2)) { goto L_801FC1B0; } // 801FC1A8
  goto L_801FC1C0; // 801FC1AC
L_801FC1B0:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FC1B0
  c->r[4]=c->r[4]+0x00000001u; // 801FC1B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC118; } // 801FC1B8
  c->r[4]=0u+0xFFFFFFFFu; // 801FC1BC
L_801FC1C0:;
  c->r[0]=c->r[4]+0x00000028u; // 801FC1C0
L_801FC1C4:;
  c->r[3]=c->r[0]|c->r[0]; // 801FC1C4
  return; // 801FC1C8
}

// NETGetStartupErrorCode
void f_801FC1CC(Ctx* __restrict c) {
  trace_call(0x801FC1CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC1CC
  c->r[0]=c->lr; // 801FC1D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FC1D4
  c->r[4]=c->r[1]+0x0000000Cu; // 801FC1D8
  c->r[5]=c->r[1]+0x00000010u; // 801FC1DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FC1E0
  c->r[31]=0u+0x00000063u; // 801FC1E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FC1E8
  c->r[30]=c->r[3]|c->r[3]; // 801FC1EC
  c->r[3]=c->r[1]+0x00000008u; // 801FC1F0
  c->lr=0x801FC1F8u; f_801FA6AC(c); // 801FC1F4
  cmps(c,0,(int32_t)c->r[3],0); // 801FC1F8
  if (crb(c,0)) { goto L_801FC214; } // 801FC1FC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801FC200
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801FC204
  c->r[5]=R32(c->r[1]+0x00000010u); // 801FC208
  c->lr=0x801FC210u; f_801FBF54(c); // 801FC20C
  c->r[31]=c->r[3]|c->r[3]; // 801FC210
L_801FC214:;
  cmps(c,0,(int32_t)c->r[31],0); // 801FC214
  if (!crb(c,0)) { goto L_801FC224; } // 801FC218
  c->r[30]=0u+0x80000000u; // 801FC21C
  c->r[31]=0u+0x00000063u; // 801FC220
L_801FC224:;
  c->r[3]=c->r[30]|c->r[30]; // 801FC224
  c->r[4]=c->r[31]|c->r[31]; // 801FC228
  c->lr=0x801FC230u; f_801FC24C(c); // 801FC22C
  c->r[3]=c->r[3]-c->r[31]; // 801FC230
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FC234
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FC238
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FC23C
  c->lr=c->r[0]; // 801FC240
  c->r[1]=c->r[1]+0x00000020u; // 801FC244
  return; // 801FC248
}

// GetStartupErrorCode
void f_801FC24C(Ctx* __restrict c) {
  trace_call(0x801FC24Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC24C
  c->r[0]=c->lr; // 801FC250
  cmps(c,0,(int32_t)c->r[3],0); // 801FC254
  c->r[5]=c->r[3]|c->r[3]; // 801FC258
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FC25C
  if (crb(c,0)) { goto L_801FC26C; } // 801FC260
  c->r[3]=0u+0x00000000u; // 801FC264
  goto L_801FC3B4; // 801FC268
L_801FC26C:;
  cmps(c,0,(int32_t)c->r[3],-62); // 801FC26C
  if (crb(c,2)) { goto L_801FC318; } // 801FC270
  if (!crb(c,0)) { goto L_801FC2D0; } // 801FC274
  cmps(c,0,(int32_t)c->r[3],-111); // 801FC278
  if (crb(c,2)) { goto L_801FC324; } // 801FC27C
  if (!crb(c,0)) { goto L_801FC2B0; } // 801FC280
  cmps(c,0,(int32_t)c->r[3],-121); // 801FC284
  if (crb(c,2)) { goto L_801FC330; } // 801FC288
  if (!crb(c,0)) { goto L_801FC2A4; } // 801FC28C
  c->r[4]=0u+0x80000000u; // 801FC290
  c->r[0]=c->r[4]+0x00000001u; // 801FC294
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801FC298
  if (!crb(c,0)) { goto L_801FC398; } // 801FC29C
  goto L_801FC38C; // 801FC2A0
L_801FC2A4:;
  cmps(c,0,(int32_t)c->r[3],-112); // 801FC2A4
  if (!crb(c,0)) { goto L_801FC358; } // 801FC2A8
  goto L_801FC398; // 801FC2AC
L_801FC2B0:;
  cmps(c,0,(int32_t)c->r[3],-76); // 801FC2B0
  if (crb(c,2)) { goto L_801FC358; } // 801FC2B4
  if (!crb(c,0)) { goto L_801FC398; } // 801FC2B8
  cmps(c,0,(int32_t)c->r[3],-99); // 801FC2BC
  if (!crb(c,0)) { goto L_801FC398; } // 801FC2C0
  cmps(c,0,(int32_t)c->r[3],-102); // 801FC2C4
  if (!crb(c,0)) { goto L_801FC380; } // 801FC2C8
  goto L_801FC398; // 801FC2CC
L_801FC2D0:;
  cmps(c,0,(int32_t)c->r[3],-39); // 801FC2D0
  if (crb(c,2)) { goto L_801FC358; } // 801FC2D4
  if (!crb(c,0)) { goto L_801FC2F4; } // 801FC2D8
  cmps(c,0,(int32_t)c->r[3],-45); // 801FC2DC
  if (crb(c,2)) { goto L_801FC300; } // 801FC2E0
  if (!crb(c,0)) { goto L_801FC398; } // 801FC2E4
  cmps(c,0,(int32_t)c->r[3],-48); // 801FC2E8
  if (crb(c,2)) { goto L_801FC358; } // 801FC2EC
  goto L_801FC398; // 801FC2F0
L_801FC2F4:;
  cmps(c,0,(int32_t)c->r[3],-28); // 801FC2F4
  if (crb(c,2)) { goto L_801FC30C; } // 801FC2F8
  goto L_801FC398; // 801FC2FC
L_801FC300:;
  c->r[3]=0u+0xFFFF0000u; // 801FC300
  c->r[3]=c->r[3]+0x00003BE8u; // 801FC304
  goto L_801FC3B4; // 801FC308
L_801FC30C:;
  c->r[3]=0u+0xFFFF0000u; // 801FC30C
  c->r[3]=c->r[3]+0x00003B84u; // 801FC310
  goto L_801FC3B4; // 801FC314
L_801FC318:;
  c->r[3]=0u+0xFFFF0000u; // 801FC318
  c->r[3]=c->r[3]+0x00003B20u; // 801FC31C
  goto L_801FC3B4; // 801FC320
L_801FC324:;
  c->r[3]=0u+0xFFFF0000u; // 801FC324
  c->r[3]=c->r[3]+0x00003224u; // 801FC328
  goto L_801FC3B4; // 801FC32C
L_801FC330:;
  cmps(c,0,(int32_t)c->r[4],20); // 801FC330
  if (crb(c,0)) { goto L_801FC34C; } // 801FC334
  cmps(c,0,(int32_t)c->r[4],30); // 801FC338
  if (!crb(c,0)) { goto L_801FC34C; } // 801FC33C
  c->r[3]=0u+0xFFFF0000u; // 801FC340
  c->r[3]=c->r[3]+0x00003738u; // 801FC344
  goto L_801FC3B4; // 801FC348
L_801FC34C:;
  c->r[3]=0u+0xFFFF0000u; // 801FC34C
  c->r[3]=c->r[3]+0x000038C8u; // 801FC350
  goto L_801FC3B4; // 801FC354
L_801FC358:;
  cmps(c,0,(int32_t)c->r[4],20); // 801FC358
  if (crb(c,0)) { goto L_801FC374; } // 801FC35C
  cmps(c,0,(int32_t)c->r[4],30); // 801FC360
  if (!crb(c,0)) { goto L_801FC374; } // 801FC364
  c->r[3]=0u+0xFFFF0000u; // 801FC368
  c->r[3]=c->r[3]+0x00003738u; // 801FC36C
  goto L_801FC3B4; // 801FC370
L_801FC374:;
  c->r[3]=0u+0xFFFF0000u; // 801FC374
  c->r[3]=c->r[3]+0x0000379Cu; // 801FC378
  goto L_801FC3B4; // 801FC37C
L_801FC380:;
  c->r[3]=0u+0xFFFF0000u; // 801FC380
  c->r[3]=c->r[3]+0x000034E0u; // 801FC384
  goto L_801FC3B4; // 801FC388
L_801FC38C:;
  c->r[3]=0u+0xFFFF0000u; // 801FC38C
  c->r[3]=c->r[3]+0x00003C4Cu; // 801FC390
  goto L_801FC3B4; // 801FC394
L_801FC398:;
  c->r[3]=0u+0x802F0000u; // 801FC398
  c->r[4]=c->r[5]|c->r[5]; // 801FC39C
  c->r[3]=c->r[3]+0xFFFF9788u; // 801FC3A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC3A4
  c->lr=0x801FC3ACu; f_801506B4(c); // 801FC3A8
  c->r[3]=0u+0xFFFF0000u; // 801FC3AC
  c->r[3]=c->r[3]+0x00003C4Cu; // 801FC3B0
L_801FC3B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FC3B4
  c->lr=c->r[0]; // 801FC3B8
  c->r[1]=c->r[1]+0x00000010u; // 801FC3BC
  return; // 801FC3C0
}

// get_REX_PPC_REVOEX_string
void f_801FC3C4(Ctx* __restrict c) {
  trace_call(0x801FC3C4u);
  c->r[3]=R32(c->r[13]+0xFFFF9490u); // 801FC3C4
  return; // 801FC3C8
}

// NETGetWirelessMacAddress
void f_801FC3CC(Ctx* __restrict c) {
  trace_call(0x801FC3CCu);
  f_801FA584(c); return; // 801FC3CC
}

// NETMemCpy
void f_801FC3D0(Ctx* __restrict c) {
  trace_call(0x801FC3D0u);
  cmpu(c,0,c->r[3],c->r[4]); // 801FC3D0
  if (crb(c,2)) return; // 801FC3D4
  if (!crb(c,1)) { goto L_801FC424; } // 801FC3D8
  c->r[6]=c->r[4]+c->r[5]; // 801FC3DC
  cmpu(c,0,c->r[3],c->r[6]); // 801FC3E0
  if (!crb(c,0)) { goto L_801FC424; } // 801FC3E4
  c->r[0]=rotl(c->r[5],0)&0x00000003u; cr0(c,c->r[0]); // 801FC3E8
  c->r[7]=c->r[3]+c->r[5]; // 801FC3EC
  c->r[4]=rotl(c->r[5],30)&0x3FFFFFFFu; // 801FC3F0
  if (crb(c,2)) { goto L_801FC408; } // 801FC3F4
  c->ctr=c->r[0]; // 801FC3F8
L_801FC3FC:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 801FC3FC
  {uint32_t ea=c->r[7]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[7]=ea;} // 801FC400
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC3FC; } // 801FC404
L_801FC408:;
  cmps(c,0,(int32_t)c->r[4],0); // 801FC408
  if (crb(c,2)) return; // 801FC40C
  c->ctr=c->r[4]; // 801FC410
L_801FC414:;
  {uint32_t ea=c->r[6]+0xFFFFFFFCu; c->r[0]=R32(ea); c->r[6]=ea;} // 801FC414
  {uint32_t ea=c->r[7]+0xFFFFFFFCu; W32(ea,c->r[0]); c->r[7]=ea;} // 801FC418
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC414; } // 801FC41C
  return; // 801FC420
L_801FC424:;
  c->r[0]=c->r[4]+0xFFFFFFE0u; // 801FC424
  cmpu(c,0,c->r[3],c->r[0]); // 801FC428
  if (!crb(c,1)) { goto L_801FC438; } // 801FC42C
  cmpu(c,0,c->r[3],c->r[4]); // 801FC430
  if (crb(c,0)) { goto L_801FC72C; } // 801FC434
L_801FC438:;
  cmpu(c,0,c->r[5],0x00000040u); // 801FC438
  if (crb(c,0)) { goto L_801FC72C; } // 801FC43C
  c->r[9]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[9]); // 801FC440
  if (crb(c,2)) { goto L_801FC4A4; } // 801FC444
  c->r[9]=addc(c,~c->r[9],0x00000020u,1); // 801FC448
  c->r[7]=c->r[4]|c->r[4]; // 801FC44C
  c->r[0]=rotl(c->r[9],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 801FC450
  c->r[8]=c->r[3]|c->r[3]; // 801FC454
  c->r[6]=rotl(c->r[9],0)&0x00000003u; // 801FC458
  if (crb(c,2)) { goto L_801FC478; } // 801FC45C
  c->ctr=c->r[0]; // 801FC460
L_801FC464:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 801FC464
  c->r[7]=c->r[7]+0x00000004u; // 801FC468
  W32(c->r[8]+0x00000000u,c->r[0]); // 801FC46C
  c->r[8]=c->r[8]+0x00000004u; // 801FC470
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC464; } // 801FC474
L_801FC478:;
  cmps(c,0,(int32_t)c->r[6],0); // 801FC478
  if (crb(c,2)) { goto L_801FC498; } // 801FC47C
  c->ctr=c->r[6]; // 801FC480
L_801FC484:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801FC484
  c->r[7]=c->r[7]+0x00000001u; // 801FC488
  W8(c->r[8]+0x00000000u,c->r[0]); // 801FC48C
  c->r[8]=c->r[8]+0x00000001u; // 801FC490
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC484; } // 801FC494
L_801FC498:;
  c->r[3]=c->r[3]+c->r[9]; // 801FC498
  c->r[4]=c->r[4]+c->r[9]; // 801FC49C
  c->r[5]=c->r[5]-c->r[9]; // 801FC4A0
L_801FC4A4:;
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 801FC4A4
  c->r[7]=c->r[4]|c->r[4]; // 801FC4A8
  cmps(c,0,(int32_t)c->r[0],2); // 801FC4AC
  c->r[6]=c->r[3]|c->r[3]; // 801FC4B0
  c->r[12]=rotl(c->r[5],0)&0xFFFFFFE0u; // 801FC4B4
  c->r[8]=rotl(c->r[5],27)&0x07FFFFFFu; // 801FC4B8
  if (crb(c,2)) { goto L_801FC5DC; } // 801FC4BC
  if (!crb(c,0)) { goto L_801FC4D4; } // 801FC4C0
  cmps(c,0,(int32_t)c->r[0],0); // 801FC4C4
  if (crb(c,2)) { goto L_801FC4E0; } // 801FC4C8
  if (!crb(c,0)) { goto L_801FC538; } // 801FC4CC
  goto L_801FC720; // 801FC4D0
L_801FC4D4:;
  cmps(c,0,(int32_t)c->r[0],4); // 801FC4D4
  if (!crb(c,0)) { goto L_801FC720; } // 801FC4D8
  goto L_801FC680; // 801FC4DC
L_801FC4E0:;
  c->ctr=c->r[8]; // 801FC4E0
L_801FC4E4:;
  dcbz(0u+c->r[6]); // 801FC4E4
  c->r[11]=R32(c->r[7]+0x00000000u); // 801FC4E8
  c->r[10]=R32(c->r[7]+0x00000004u); // 801FC4EC
  W32(c->r[6]+0x00000000u,c->r[11]); // 801FC4F0
  W32(c->r[6]+0x00000004u,c->r[10]); // 801FC4F4
  c->r[11]=R32(c->r[7]+0x00000008u); // 801FC4F8
  c->r[10]=R32(c->r[7]+0x0000000Cu); // 801FC4FC
  W32(c->r[6]+0x00000008u,c->r[11]); // 801FC500
  W32(c->r[6]+0x0000000Cu,c->r[10]); // 801FC504
  c->r[11]=R32(c->r[7]+0x00000010u); // 801FC508
  c->r[10]=R32(c->r[7]+0x00000014u); // 801FC50C
  W32(c->r[6]+0x00000010u,c->r[11]); // 801FC510
  W32(c->r[6]+0x00000014u,c->r[10]); // 801FC514
  c->r[11]=R32(c->r[7]+0x00000018u); // 801FC518
  c->r[10]=R32(c->r[7]+0x0000001Cu); // 801FC51C
  c->r[7]=c->r[7]+0x00000020u; // 801FC520
  W32(c->r[6]+0x00000018u,c->r[11]); // 801FC524
  W32(c->r[6]+0x0000001Cu,c->r[10]); // 801FC528
  c->r[6]=c->r[6]+0x00000020u; // 801FC52C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC4E4; } // 801FC530
  goto L_801FC720; // 801FC534
L_801FC538:;
  c->r[9]=R32(c->r[4]+0xFFFFFFFFu); // 801FC538
  c->ctr=c->r[8]; // 801FC53C
  c->r[7]=c->r[4]+0x00000003u; // 801FC540
  c->r[9]=rotl(c->r[9],8)&0xFFFFFF00u; // 801FC544
L_801FC548:;
  dcbz(0u+c->r[6]); // 801FC548
  c->r[11]=R32(c->r[7]+0x00000000u); // 801FC54C
  c->r[10]=R32(c->r[7]+0x00000004u); // 801FC550
  c->r[9]=(rotl(c->r[11],8)&0x000000FFu)|(c->r[9]&~0x000000FFu); // 801FC554
  c->r[0]=rotl(c->r[11],8)&0xFFFFFF00u; // 801FC558
  W32(c->r[6]+0x00000000u,c->r[9]); // 801FC55C
  c->r[0]=(rotl(c->r[10],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801FC560
  c->r[8]=rotl(c->r[10],8)&0xFFFFFF00u; // 801FC564
  c->r[11]=R32(c->r[7]+0x00000008u); // 801FC568
  W32(c->r[6]+0x00000004u,c->r[0]); // 801FC56C
  c->r[8]=(rotl(c->r[11],8)&0x000000FFu)|(c->r[8]&~0x000000FFu); // 801FC570
  c->r[0]=rotl(c->r[11],8)&0xFFFFFF00u; // 801FC574
  c->r[10]=R32(c->r[7]+0x0000000Cu); // 801FC578
  W32(c->r[6]+0x00000008u,c->r[8]); // 801FC57C
  c->r[0]=(rotl(c->r[10],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801FC580
  c->r[9]=rotl(c->r[10],8)&0xFFFFFF00u; // 801FC584
  c->r[11]=R32(c->r[7]+0x00000010u); // 801FC588
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 801FC58C
  c->r[9]=(rotl(c->r[11],8)&0x000000FFu)|(c->r[9]&~0x000000FFu); // 801FC590
  c->r[0]=rotl(c->r[11],8)&0xFFFFFF00u; // 801FC594
  c->r[10]=R32(c->r[7]+0x00000014u); // 801FC598
  W32(c->r[6]+0x00000010u,c->r[9]); // 801FC59C
  c->r[0]=(rotl(c->r[10],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801FC5A0
  c->r[8]=rotl(c->r[10],8)&0xFFFFFF00u; // 801FC5A4
  c->r[11]=R32(c->r[7]+0x00000018u); // 801FC5A8
  W32(c->r[6]+0x00000014u,c->r[0]); // 801FC5AC
  c->r[8]=(rotl(c->r[11],8)&0x000000FFu)|(c->r[8]&~0x000000FFu); // 801FC5B0
  c->r[0]=rotl(c->r[11],8)&0xFFFFFF00u; // 801FC5B4
  c->r[10]=R32(c->r[7]+0x0000001Cu); // 801FC5B8
  c->r[7]=c->r[7]+0x00000020u; // 801FC5BC
  W32(c->r[6]+0x00000018u,c->r[8]); // 801FC5C0
  c->r[0]=(rotl(c->r[10],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801FC5C4
  c->r[9]=rotl(c->r[10],8)&0xFFFFFF00u; // 801FC5C8
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 801FC5CC
  c->r[6]=c->r[6]+0x00000020u; // 801FC5D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC548; } // 801FC5D4
  goto L_801FC720; // 801FC5D8
L_801FC5DC:;
  c->r[9]=R32(c->r[4]+0xFFFFFFFEu); // 801FC5DC
  c->ctr=c->r[8]; // 801FC5E0
  c->r[7]=c->r[4]+0x00000002u; // 801FC5E4
  c->r[9]=rotl(c->r[9],16)&0xFFFF0000u; // 801FC5E8
L_801FC5EC:;
  dcbz(0u+c->r[6]); // 801FC5EC
  c->r[11]=R32(c->r[7]+0x00000000u); // 801FC5F0
  c->r[10]=R32(c->r[7]+0x00000004u); // 801FC5F4
  c->r[9]=(rotl(c->r[11],16)&0x0000FFFFu)|(c->r[9]&~0x0000FFFFu); // 801FC5F8
  c->r[0]=rotl(c->r[11],16)&0xFFFF0000u; // 801FC5FC
  W32(c->r[6]+0x00000000u,c->r[9]); // 801FC600
  c->r[0]=(rotl(c->r[10],16)&0x0000FFFFu)|(c->r[0]&~0x0000FFFFu); // 801FC604
  c->r[8]=rotl(c->r[10],16)&0xFFFF0000u; // 801FC608
  c->r[11]=R32(c->r[7]+0x00000008u); // 801FC60C
  W32(c->r[6]+0x00000004u,c->r[0]); // 801FC610
  c->r[8]=(rotl(c->r[11],16)&0x0000FFFFu)|(c->r[8]&~0x0000FFFFu); // 801FC614
  c->r[0]=rotl(c->r[11],16)&0xFFFF0000u; // 801FC618
  c->r[10]=R32(c->r[7]+0x0000000Cu); // 801FC61C
  W32(c->r[6]+0x00000008u,c->r[8]); // 801FC620
  c->r[0]=(rotl(c->r[10],16)&0x0000FFFFu)|(c->r[0]&~0x0000FFFFu); // 801FC624
  c->r[9]=rotl(c->r[10],16)&0xFFFF0000u; // 801FC628
  c->r[11]=R32(c->r[7]+0x00000010u); // 801FC62C
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 801FC630
  c->r[9]=(rotl(c->r[11],16)&0x0000FFFFu)|(c->r[9]&~0x0000FFFFu); // 801FC634
  c->r[0]=rotl(c->r[11],16)&0xFFFF0000u; // 801FC638
  c->r[10]=R32(c->r[7]+0x00000014u); // 801FC63C
  W32(c->r[6]+0x00000010u,c->r[9]); // 801FC640
  c->r[0]=(rotl(c->r[10],16)&0x0000FFFFu)|(c->r[0]&~0x0000FFFFu); // 801FC644
  c->r[8]=rotl(c->r[10],16)&0xFFFF0000u; // 801FC648
  c->r[11]=R32(c->r[7]+0x00000018u); // 801FC64C
  W32(c->r[6]+0x00000014u,c->r[0]); // 801FC650
  c->r[8]=(rotl(c->r[11],16)&0x0000FFFFu)|(c->r[8]&~0x0000FFFFu); // 801FC654
  c->r[0]=rotl(c->r[11],16)&0xFFFF0000u; // 801FC658
  c->r[10]=R32(c->r[7]+0x0000001Cu); // 801FC65C
  c->r[7]=c->r[7]+0x00000020u; // 801FC660
  W32(c->r[6]+0x00000018u,c->r[8]); // 801FC664
  c->r[0]=(rotl(c->r[10],16)&0x0000FFFFu)|(c->r[0]&~0x0000FFFFu); // 801FC668
  c->r[9]=rotl(c->r[10],16)&0xFFFF0000u; // 801FC66C
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 801FC670
  c->r[6]=c->r[6]+0x00000020u; // 801FC674
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC5EC; } // 801FC678
  goto L_801FC720; // 801FC67C
L_801FC680:;
  c->r[9]=R32(c->r[4]+0xFFFFFFFDu); // 801FC680
  c->ctr=c->r[8]; // 801FC684
  c->r[7]=c->r[4]+0x00000001u; // 801FC688
  c->r[9]=rotl(c->r[9],24)&0xFF000000u; // 801FC68C
L_801FC690:;
  dcbz(0u+c->r[6]); // 801FC690
  c->r[11]=R32(c->r[7]+0x00000000u); // 801FC694
  c->r[10]=R32(c->r[7]+0x00000004u); // 801FC698
  c->r[9]=(rotl(c->r[11],24)&0x00FFFFFFu)|(c->r[9]&~0x00FFFFFFu); // 801FC69C
  c->r[0]=rotl(c->r[11],24)&0xFF000000u; // 801FC6A0
  W32(c->r[6]+0x00000000u,c->r[9]); // 801FC6A4
  c->r[0]=(rotl(c->r[10],24)&0x00FFFFFFu)|(c->r[0]&~0x00FFFFFFu); // 801FC6A8
  c->r[8]=rotl(c->r[10],24)&0xFF000000u; // 801FC6AC
  c->r[11]=R32(c->r[7]+0x00000008u); // 801FC6B0
  W32(c->r[6]+0x00000004u,c->r[0]); // 801FC6B4
  c->r[8]=(rotl(c->r[11],24)&0x00FFFFFFu)|(c->r[8]&~0x00FFFFFFu); // 801FC6B8
  c->r[0]=rotl(c->r[11],24)&0xFF000000u; // 801FC6BC
  c->r[10]=R32(c->r[7]+0x0000000Cu); // 801FC6C0
  W32(c->r[6]+0x00000008u,c->r[8]); // 801FC6C4
  c->r[0]=(rotl(c->r[10],24)&0x00FFFFFFu)|(c->r[0]&~0x00FFFFFFu); // 801FC6C8
  c->r[9]=rotl(c->r[10],24)&0xFF000000u; // 801FC6CC
  c->r[11]=R32(c->r[7]+0x00000010u); // 801FC6D0
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 801FC6D4
  c->r[9]=(rotl(c->r[11],24)&0x00FFFFFFu)|(c->r[9]&~0x00FFFFFFu); // 801FC6D8
  c->r[0]=rotl(c->r[11],24)&0xFF000000u; // 801FC6DC
  c->r[10]=R32(c->r[7]+0x00000014u); // 801FC6E0
  W32(c->r[6]+0x00000010u,c->r[9]); // 801FC6E4
  c->r[0]=(rotl(c->r[10],24)&0x00FFFFFFu)|(c->r[0]&~0x00FFFFFFu); // 801FC6E8
  c->r[8]=rotl(c->r[10],24)&0xFF000000u; // 801FC6EC
  c->r[11]=R32(c->r[7]+0x00000018u); // 801FC6F0
  W32(c->r[6]+0x00000014u,c->r[0]); // 801FC6F4
  c->r[8]=(rotl(c->r[11],24)&0x00FFFFFFu)|(c->r[8]&~0x00FFFFFFu); // 801FC6F8
  c->r[0]=rotl(c->r[11],24)&0xFF000000u; // 801FC6FC
  c->r[10]=R32(c->r[7]+0x0000001Cu); // 801FC700
  c->r[7]=c->r[7]+0x00000020u; // 801FC704
  W32(c->r[6]+0x00000018u,c->r[8]); // 801FC708
  c->r[0]=(rotl(c->r[10],24)&0x00FFFFFFu)|(c->r[0]&~0x00FFFFFFu); // 801FC70C
  c->r[9]=rotl(c->r[10],24)&0xFF000000u; // 801FC710
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 801FC714
  c->r[6]=c->r[6]+0x00000020u; // 801FC718
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC690; } // 801FC71C
L_801FC720:;
  c->r[3]=c->r[3]+c->r[12]; // 801FC720
  c->r[4]=c->r[4]+c->r[12]; // 801FC724
  c->r[5]=c->r[5]-c->r[12]; // 801FC728
L_801FC72C:;
  c->r[0]=rotl(c->r[5],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 801FC72C
  c->r[6]=c->r[3]|c->r[3]; // 801FC730
  c->r[5]=rotl(c->r[5],0)&0x00000003u; // 801FC734
  if (crb(c,2)) { goto L_801FC754; } // 801FC738
  c->ctr=c->r[0]; // 801FC73C
L_801FC740:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801FC740
  c->r[4]=c->r[4]+0x00000004u; // 801FC744
  W32(c->r[6]+0x00000000u,c->r[0]); // 801FC748
  c->r[6]=c->r[6]+0x00000004u; // 801FC74C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC740; } // 801FC750
L_801FC754:;
  cmps(c,0,(int32_t)c->r[5],0); // 801FC754
  if (crb(c,2)) return; // 801FC758
  c->ctr=c->r[5]; // 801FC75C
L_801FC760:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801FC760
  c->r[4]=c->r[4]+0x00000001u; // 801FC764
  W8(c->r[6]+0x00000000u,c->r[0]); // 801FC768
  c->r[6]=c->r[6]+0x00000001u; // 801FC76C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC760; } // 801FC770
  return; // 801FC774
}

// NETMemSet
void f_801FC778(Ctx* __restrict c) {
  trace_call(0x801FC778u);
  cmps(c,0,(int32_t)c->r[5],0); // 801FC778
  if (crb(c,2)) return; // 801FC77C
  cmpu(c,0,c->r[5],0x00000040u); // 801FC780
  c->r[4]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 801FC784
  c->r[4]=(rotl(c->r[4],16)&0xFFFF0000u)|(c->r[4]&~0xFFFF0000u); // 801FC788
  if (crb(c,0)) { goto L_801FC83C; } // 801FC78C
  c->r[8]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[8]); // 801FC790
  if (crb(c,2)) { goto L_801FC7DC; } // 801FC794
  c->r[8]=addc(c,~c->r[8],0x00000020u,1); // 801FC798
  c->r[7]=c->r[3]|c->r[3]; // 801FC79C
  c->r[6]=rotl(c->r[8],30)&0x3FFFFFFFu; cr0(c,c->r[6]); // 801FC7A0
  c->r[0]=rotl(c->r[8],0)&0x00000003u; // 801FC7A4
  if (crb(c,2)) { goto L_801FC7BC; } // 801FC7A8
  c->ctr=c->r[6]; // 801FC7AC
L_801FC7B0:;
  W32(c->r[7]+0x00000000u,c->r[4]); // 801FC7B0
  c->r[7]=c->r[7]+0x00000004u; // 801FC7B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC7B0; } // 801FC7B8
L_801FC7BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801FC7BC
  if (crb(c,2)) { goto L_801FC7D4; } // 801FC7C0
  c->ctr=c->r[0]; // 801FC7C4
L_801FC7C8:;
  W8(c->r[7]+0x00000000u,c->r[4]); // 801FC7C8
  c->r[7]=c->r[7]+0x00000001u; // 801FC7CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC7C8; } // 801FC7D0
L_801FC7D4:;
  c->r[3]=c->r[3]+c->r[8]; // 801FC7D4
  c->r[5]=c->r[5]-c->r[8]; // 801FC7D8
L_801FC7DC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801FC7DC
  c->r[6]=c->r[3]|c->r[3]; // 801FC7E0
  c->r[7]=rotl(c->r[5],0)&0xFFFFFFE0u; // 801FC7E4
  c->r[0]=rotl(c->r[5],27)&0x07FFFFFFu; // 801FC7E8
  if (!crb(c,2)) { goto L_801FC804; } // 801FC7EC
  c->ctr=c->r[0]; // 801FC7F0
L_801FC7F4:;
  dcbz(0u+c->r[6]); // 801FC7F4
  c->r[6]=c->r[6]+0x00000020u; // 801FC7F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC7F4; } // 801FC7FC
  goto L_801FC834; // 801FC800
L_801FC804:;
  c->ctr=c->r[0]; // 801FC804
L_801FC808:;
  dcbz(0u+c->r[6]); // 801FC808
  W32(c->r[6]+0x00000000u,c->r[4]); // 801FC80C
  W32(c->r[6]+0x00000004u,c->r[4]); // 801FC810
  W32(c->r[6]+0x00000008u,c->r[4]); // 801FC814
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 801FC818
  W32(c->r[6]+0x00000010u,c->r[4]); // 801FC81C
  W32(c->r[6]+0x00000014u,c->r[4]); // 801FC820
  W32(c->r[6]+0x00000018u,c->r[4]); // 801FC824
  W32(c->r[6]+0x0000001Cu,c->r[4]); // 801FC828
  c->r[6]=c->r[6]+0x00000020u; // 801FC82C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC808; } // 801FC830
L_801FC834:;
  c->r[3]=c->r[3]+c->r[7]; // 801FC834
  c->r[5]=c->r[5]-c->r[7]; // 801FC838
L_801FC83C:;
  c->r[6]=rotl(c->r[5],30)&0x3FFFFFFFu; cr0(c,c->r[6]); // 801FC83C
  c->r[7]=c->r[3]|c->r[3]; // 801FC840
  c->r[0]=rotl(c->r[5],0)&0x00000003u; // 801FC844
  if (crb(c,2)) { goto L_801FC85C; } // 801FC848
  c->ctr=c->r[6]; // 801FC84C
L_801FC850:;
  W32(c->r[7]+0x00000000u,c->r[4]); // 801FC850
  c->r[7]=c->r[7]+0x00000004u; // 801FC854
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC850; } // 801FC858
L_801FC85C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801FC85C
  if (crb(c,2)) return; // 801FC860
  c->ctr=c->r[0]; // 801FC864
L_801FC868:;
  W8(c->r[7]+0x00000000u,c->r[4]); // 801FC868
  c->r[7]=c->r[7]+0x00000001u; // 801FC86C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FC868; } // 801FC870
  return; // 801FC874
}

// fn_801FC878
void f_801FC878(Ctx* __restrict c) {
  c->r[7]=0u+0x67450000u; // 801FC878
  c->r[6]=0u+0xEFCE0000u; // 801FC87C
  c->r[0]=0u+0x00000000u; // 801FC880
  c->r[5]=0u+0x98BB0000u; // 801FC884
  c->r[4]=0u+0x10320000u; // 801FC888
  c->r[7]=c->r[7]+0x00002301u; // 801FC88C
  c->r[6]=c->r[6]+0xFFFFAB89u; // 801FC890
  c->r[5]=c->r[5]+0xFFFFDCFEu; // 801FC894
  c->r[4]=c->r[4]+0x00005476u; // 801FC898
  W32(c->r[3]+0x00000000u,c->r[7]); // 801FC89C
  W32(c->r[3]+0x00000004u,c->r[6]); // 801FC8A0
  W32(c->r[3]+0x00000008u,c->r[5]); // 801FC8A4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801FC8A8
  W32(c->r[3]+0x00000014u,c->r[0]); // 801FC8AC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801FC8B0
  return; // 801FC8B4
}

// fn_801FC8B8
void f_801FC8B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC8B8
  c->r[0]=c->lr; // 801FC8BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FC8C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FC8C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FC8C8
  c->r[30]=c->r[4]|c->r[4]; // 801FC8CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FC8D0
  c->r[29]=c->r[5]|c->r[5]; // 801FC8D4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801FC8D8
  c->r[28]=c->r[3]|c->r[3]; // 801FC8DC
  c->r[7]=R32(c->r[3]+0x00000014u); // 801FC8E0
  c->r[0]=R32(c->r[3]+0x00000010u); // 801FC8E4
  c->r[6]=addc(c,c->r[7],c->r[5],0); // 801FC8E8
  c->r[7]=rotl(c->r[7],0)&0x0000003Fu; // 801FC8EC
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 801FC8F0
  W32(c->r[3]+0x00000014u,c->r[6]); // 801FC8F4
  c->r[31]=addc(c,~c->r[7],0x00000040u,1); // 801FC8F8
  cmpu(c,0,c->r[31],c->r[5]); // 801FC8FC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801FC900
  if (!crb(c,1)) { goto L_801FC920; } // 801FC904
  cmps(c,0,(int32_t)c->r[5],0); // 801FC908
  if (crb(c,2)) { goto L_801FC988; } // 801FC90C
  c->r[3]=c->r[3]+c->r[7]; // 801FC910
  c->r[3]=c->r[3]+0x00000018u; // 801FC914
  c->lr=0x801FC91Cu; f_80004338(c); // 801FC918
  goto L_801FC988; // 801FC91C
L_801FC920:;
  c->r[3]=c->r[3]+c->r[7]; // 801FC920
  c->r[5]=c->r[31]|c->r[31]; // 801FC924
  c->r[3]=c->r[3]+0x00000018u; // 801FC928
  c->lr=0x801FC930u; f_80004338(c); // 801FC92C
  c->r[3]=c->r[28]|c->r[28]; // 801FC930
  c->lr=0x801FC938u; f_801FCAD0(c); // 801FC934
  c->r[29]=c->r[29]-c->r[31]; // 801FC938
  c->r[30]=c->r[30]+c->r[31]; // 801FC93C
  c->r[31]=rotl(c->r[29],26)&0x03FFFFFFu; // 801FC940
  goto L_801FC968; // 801FC944
L_801FC948:;
  c->r[4]=c->r[30]|c->r[30]; // 801FC948
  c->r[3]=c->r[28]+0x00000018u; // 801FC94C
  c->r[5]=0u+0x00000040u; // 801FC950
  c->lr=0x801FC958u; f_80004338(c); // 801FC954
  c->r[3]=c->r[28]|c->r[28]; // 801FC958
  c->r[30]=c->r[30]+0x00000040u; // 801FC95C
  c->lr=0x801FC964u; f_801FCAD0(c); // 801FC960
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 801FC964
L_801FC968:;
  cmps(c,0,(int32_t)c->r[31],0); // 801FC968
  if (crb(c,1)) { IRQCHK(c); goto L_801FC948; } // 801FC96C
  c->r[29]=rotl(c->r[29],0)&0x0000003Fu; cr0(c,c->r[29]); // 801FC970
  if (crb(c,2)) { goto L_801FC988; } // 801FC974
  c->r[4]=c->r[30]|c->r[30]; // 801FC978
  c->r[5]=c->r[29]|c->r[29]; // 801FC97C
  c->r[3]=c->r[28]+0x00000018u; // 801FC980
  c->lr=0x801FC988u; f_80004338(c); // 801FC984
L_801FC988:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FC988
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FC98C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FC990
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FC994
  c->r[28]=R32(c->r[1]+0x00000010u); // 801FC998
  c->lr=c->r[0]; // 801FC99C
  c->r[1]=c->r[1]+0x00000020u; // 801FC9A0
  return; // 801FC9A4
}

// fn_801FC9A8
void f_801FC9A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC9A8
  c->r[0]=c->lr; // 801FC9AC
  c->r[5]=0u+0x00000001u; // 801FC9B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FC9B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FC9B8
  c->r[31]=c->r[4]|c->r[4]; // 801FC9BC
  c->r[4]=c->r[13]+0xFFFF9498u; // 801FC9C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FC9C4
  c->r[30]=c->r[3]|c->r[3]; // 801FC9C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FC9CC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801FC9D0
  c->r[0]=R32(c->r[3]+0x00000010u); // 801FC9D4
  c->r[6]=R32(c->r[3]+0x00000014u); // 801FC9D8
  c->r[29]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801FC9DC
  c->r[28]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801FC9E0
  c->r[29]=(rotl(c->r[6],3)&0x00000007u)|(c->r[29]&~0x00000007u); // 801FC9E4
  c->lr=0x801FC9ECu; f_801FC8B8(c); // 801FC9E8
  c->r[0]=R32(c->r[30]+0x00000014u); // 801FC9EC
  c->r[0]=rotl(c->r[0],0)&0x0000003Fu; // 801FC9F0
  c->r[5]=addc(c,~c->r[0],0x00000040u,1); // 801FC9F4
  cmpu(c,0,c->r[5],0x00000008u); // 801FC9F8
  if (!crb(c,0)) { goto L_801FCA20; } // 801FC9FC
  c->r[3]=c->r[30]+c->r[0]; // 801FCA00
  c->r[4]=0u+0x00000000u; // 801FCA04
  c->r[3]=c->r[3]+0x00000018u; // 801FCA08
  c->lr=0x801FCA10u; f_8000443C(c); // 801FCA0C
  c->r[3]=c->r[30]|c->r[30]; // 801FCA10
  c->lr=0x801FCA18u; f_801FCAD0(c); // 801FCA14
  c->r[0]=0u+0x00000000u; // 801FCA18
  c->r[5]=0u+0x00000040u; // 801FCA1C
L_801FCA20:;
  cmpu(c,0,c->r[5],0x00000008u); // 801FCA20
  if (!crb(c,1)) { goto L_801FCA3C; } // 801FCA24
  c->r[3]=c->r[30]+c->r[0]; // 801FCA28
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 801FCA2C
  c->r[3]=c->r[3]+0x00000018u; // 801FCA30
  c->r[4]=0u+0x00000000u; // 801FCA34
  c->lr=0x801FCA3Cu; f_8000443C(c); // 801FCA38
L_801FCA3C:;
  c->r[5]=rotl(c->r[28],8)&0x00FF0000u; // 801FCA3C
  c->r[4]=rotl(c->r[28],24)&0x0000FF00u; // 801FCA40
  c->r[3]=rotl(c->r[29],8)&0x00FF0000u; // 801FCA44
  c->r[0]=rotl(c->r[29],24)&0x0000FF00u; // 801FCA48
  c->r[5]=(rotl(c->r[28],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801FCA4C
  c->r[4]=(rotl(c->r[28],8)&0x000000FFu)|(c->r[4]&~0x000000FFu); // 801FCA50
  c->r[4]=c->r[5]|c->r[4]; // 801FCA54
  c->r[3]=(rotl(c->r[29],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801FCA58
  c->r[0]=(rotl(c->r[29],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801FCA5C
  W32(c->r[30]+0x00000050u,c->r[4]); // 801FCA60
  c->r[0]=c->r[3]|c->r[0]; // 801FCA64
  c->r[3]=c->r[30]|c->r[30]; // 801FCA68
  W32(c->r[30]+0x00000054u,c->r[0]); // 801FCA6C
  c->lr=0x801FCA74u; f_801FCAD0(c); // 801FCA70
  c->r[0]=R32(c->r[30]+0x00000000u); // 801FCA74
  W32(0u+c->r[31],__builtin_bswap32(c->r[0])); // 801FCA78
  c->r[0]=c->r[31]+0x00000004u; // 801FCA7C
  c->r[3]=R32(c->r[30]+0x00000004u); // 801FCA80
  W32(0u+c->r[0],__builtin_bswap32(c->r[3])); // 801FCA84
  c->r[0]=c->r[31]+0x00000008u; // 801FCA88
  c->r[3]=R32(c->r[30]+0x00000008u); // 801FCA8C
  W32(0u+c->r[0],__builtin_bswap32(c->r[3])); // 801FCA90
  c->r[0]=c->r[31]+0x0000000Cu; // 801FCA94
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801FCA98
  W32(0u+c->r[0],__builtin_bswap32(c->r[3])); // 801FCA9C
  c->r[3]=c->r[30]|c->r[30]; // 801FCAA0
  c->r[4]=0u+0x00000000u; // 801FCAA4
  c->r[5]=0u+0x00000058u; // 801FCAA8
  c->lr=0x801FCAB0u; f_8000443C(c); // 801FCAAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FCAB0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FCAB4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FCAB8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FCABC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801FCAC0
  c->lr=c->r[0]; // 801FCAC4
  c->r[1]=c->r[1]+0x00000020u; // 801FCAC8
  return; // 801FCACC
}

// fn_801FCAD0
void f_801FCAD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FCAD0
  c->r[8]=c->r[3]+0x00000018u; // 801FCAD4
  c->r[9]=0u+0x802F0000u; // 801FCAD8
  c->r[10]=0u+0x00000004u; // 801FCADC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FCAE0
  c->r[4]=c->r[8]|c->r[8]; // 801FCAE4
  c->r[9]=c->r[9]+0xFFFF97E8u; // 801FCAE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FCAEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FCAF0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FCAF4
  c->r[5]=R32(c->r[3]+0x00000004u); // 801FCAF8
  c->r[6]=R32(c->r[3]+0x00000008u); // 801FCAFC
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 801FCB00
  c->ctr=c->r[10]; // 801FCB04
L_801FCB08:;
  c->r[12]=R32(c->r[9]+0x00000000u); // 801FCB08
  c->r[30]=__builtin_bswap32(R32(0u+c->r[4])); // 801FCB0C
  c->r[31]=__builtin_bswap32(R32(0u+c->r[4])); // 801FCB10
  c->r[11]=c->r[5]&c->r[6]; // 801FCB14
  c->r[10]=c->r[7]&~c->r[5]; // 801FCB18
  c->r[4]=c->r[4]+0x00000004u; // 801FCB1C
  c->r[11]=c->r[11]|c->r[10]; // 801FCB20
  c->r[11]=c->r[0]+c->r[11]; // 801FCB24
  c->r[10]=c->r[31]+c->r[12]; // 801FCB28
  c->r[0]=c->r[12]+c->r[11]; // 801FCB2C
  c->r[31]=R32(c->r[9]+0x00000004u); // 801FCB30
  c->r[0]=c->r[30]+c->r[0]; // 801FCB34
  c->r[10]=c->r[11]+c->r[10]; // 801FCB38
  c->r[0]=rotl(c->r[0],7)&0x0000007Fu; // 801FCB3C
  c->r[0]=(rotl(c->r[10],7)&0xFFFFFF80u)|(c->r[0]&~0xFFFFFF80u); // 801FCB40
  c->r[0]=c->r[5]+c->r[0]; // 801FCB44
  c->r[30]=__builtin_bswap32(R32(0u+c->r[4])); // 801FCB48
  c->r[12]=__builtin_bswap32(R32(0u+c->r[4])); // 801FCB4C
  c->r[11]=c->r[0]&c->r[5]; // 801FCB50
  c->r[10]=c->r[6]&~c->r[0]; // 801FCB54
  c->r[4]=c->r[4]+0x00000004u; // 801FCB58
  c->r[11]=c->r[11]|c->r[10]; // 801FCB5C
  c->r[11]=c->r[7]+c->r[11]; // 801FCB60
  c->r[10]=c->r[12]+c->r[31]; // 801FCB64
  c->r[7]=c->r[31]+c->r[11]; // 801FCB68
  c->r[12]=R32(c->r[9]+0x00000008u); // 801FCB6C
  c->r[7]=c->r[30]+c->r[7]; // 801FCB70
  c->r[10]=c->r[11]+c->r[10]; // 801FCB74
  c->r[7]=rotl(c->r[7],12)&0x00000FFFu; // 801FCB78
  c->r[7]=(rotl(c->r[10],12)&0xFFFFF000u)|(c->r[7]&~0xFFFFF000u); // 801FCB7C
  c->r[7]=c->r[0]+c->r[7]; // 801FCB80
  c->r[30]=__builtin_bswap32(R32(0u+c->r[4])); // 801FCB84
  c->r[31]=__builtin_bswap32(R32(0u+c->r[4])); // 801FCB88
  c->r[11]=c->r[7]&c->r[0]; // 801FCB8C
  c->r[10]=c->r[5]&~c->r[7]; // 801FCB90
  c->r[4]=c->r[4]+0x00000004u; // 801FCB94
  c->r[11]=c->r[11]|c->r[10]; // 801FCB98
  c->r[11]=c->r[6]+c->r[11]; // 801FCB9C
  c->r[10]=c->r[31]+c->r[12]; // 801FCBA0
  c->r[6]=c->r[12]+c->r[11]; // 801FCBA4
  c->r[31]=R32(c->r[9]+0x0000000Cu); // 801FCBA8
  c->r[6]=c->r[30]+c->r[6]; // 801FCBAC
  c->r[10]=c->r[11]+c->r[10]; // 801FCBB0
  c->r[6]=rotl(c->r[6],17)&0x0001FFFFu; // 801FCBB4
  c->r[6]=(rotl(c->r[10],17)&0xFFFE0000u)|(c->r[6]&~0xFFFE0000u); // 801FCBB8
  c->r[6]=c->r[7]+c->r[6]; // 801FCBBC
  c->r[12]=__builtin_bswap32(R32(0u+c->r[4])); // 801FCBC0
  c->r[30]=__builtin_bswap32(R32(0u+c->r[4])); // 801FCBC4
  c->r[11]=c->r[6]&c->r[7]; // 801FCBC8
  c->r[10]=c->r[0]&~c->r[6]; // 801FCBCC
  c->r[9]=c->r[9]+0x00000010u; // 801FCBD0
  c->r[11]=c->r[11]|c->r[10]; // 801FCBD4
  c->r[4]=c->r[4]+0x00000004u; // 801FCBD8
  c->r[11]=c->r[5]+c->r[11]; // 801FCBDC
  c->r[10]=c->r[30]+c->r[31]; // 801FCBE0
  c->r[5]=c->r[31]+c->r[11]; // 801FCBE4
  c->r[5]=c->r[12]+c->r[5]; // 801FCBE8
  c->r[10]=c->r[11]+c->r[10]; // 801FCBEC
  c->r[5]=rotl(c->r[5],22)&0x003FFFFFu; // 801FCBF0
  c->r[5]=(rotl(c->r[10],22)&0xFFC00000u)|(c->r[5]&~0xFFC00000u); // 801FCBF4
  c->r[5]=c->r[6]+c->r[5]; // 801FCBF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FCB08; } // 801FCBFC
  c->r[4]=0u+0x802F0000u; // 801FCC00
  c->r[10]=0u+0x00000004u; // 801FCC04
  c->r[4]=c->r[4]+0xFFFF98E8u; // 801FCC08
  c->ctr=c->r[10]; // 801FCC0C
L_801FCC10:;
  c->r[10]=R32(c->r[4]+0x00000000u); // 801FCC10
  c->r[31]=R32(c->r[9]+0x00000000u); // 801FCC14
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801FCC18
  c->r[10]=c->r[8]+c->r[10]; // 801FCC1C
  c->r[30]=__builtin_bswap32(R32(0u+c->r[10])); // 801FCC20
  c->r[29]=__builtin_bswap32(R32(0u+c->r[10])); // 801FCC24
  c->r[12]=c->r[5]&c->r[7]; // 801FCC28
  c->r[11]=c->r[6]&~c->r[7]; // 801FCC2C
  c->r[10]=R32(c->r[4]+0x00000004u); // 801FCC30
  c->r[12]=c->r[12]|c->r[11]; // 801FCC34
  c->r[12]=c->r[0]+c->r[12]; // 801FCC38
  c->r[11]=c->r[29]+c->r[31]; // 801FCC3C
  c->r[0]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801FCC40
  c->r[10]=c->r[31]+c->r[12]; // 801FCC44
  c->r[11]=c->r[12]+c->r[11]; // 801FCC48
  c->r[10]=c->r[30]+c->r[10]; // 801FCC4C
  c->r[12]=c->r[8]+c->r[0]; // 801FCC50
  c->r[10]=rotl(c->r[10],5)&0x0000001Fu; // 801FCC54
  c->r[31]=R32(c->r[9]+0x00000004u); // 801FCC58
  c->r[10]=(rotl(c->r[11],5)&0xFFFFFFE0u)|(c->r[10]&~0xFFFFFFE0u); // 801FCC5C
  c->r[0]=c->r[5]+c->r[10]; // 801FCC60
  c->r[29]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCC64
  c->r[30]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCC68
  c->r[12]=c->r[0]&c->r[6]; // 801FCC6C
  c->r[11]=c->r[5]&~c->r[6]; // 801FCC70
  c->r[10]=R32(c->r[4]+0x00000008u); // 801FCC74
  c->r[12]=c->r[12]|c->r[11]; // 801FCC78
  c->r[12]=c->r[7]+c->r[12]; // 801FCC7C
  c->r[11]=c->r[30]+c->r[31]; // 801FCC80
  c->r[7]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801FCC84
  c->r[10]=c->r[31]+c->r[12]; // 801FCC88
  c->r[11]=c->r[12]+c->r[11]; // 801FCC8C
  c->r[10]=c->r[29]+c->r[10]; // 801FCC90
  c->r[12]=c->r[8]+c->r[7]; // 801FCC94
  c->r[10]=rotl(c->r[10],9)&0x000001FFu; // 801FCC98
  c->r[31]=R32(c->r[9]+0x00000008u); // 801FCC9C
  c->r[10]=(rotl(c->r[11],9)&0xFFFFFE00u)|(c->r[10]&~0xFFFFFE00u); // 801FCCA0
  c->r[7]=c->r[0]+c->r[10]; // 801FCCA4
  c->r[29]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCCA8
  c->r[30]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCCAC
  c->r[12]=c->r[7]&c->r[5]; // 801FCCB0
  c->r[11]=c->r[0]&~c->r[5]; // 801FCCB4
  c->r[10]=R32(c->r[4]+0x0000000Cu); // 801FCCB8
  c->r[12]=c->r[12]|c->r[11]; // 801FCCBC
  c->r[12]=c->r[6]+c->r[12]; // 801FCCC0
  c->r[11]=c->r[30]+c->r[31]; // 801FCCC4
  c->r[6]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801FCCC8
  c->r[10]=c->r[31]+c->r[12]; // 801FCCCC
  c->r[11]=c->r[12]+c->r[11]; // 801FCCD0
  c->r[10]=c->r[29]+c->r[10]; // 801FCCD4
  c->r[12]=c->r[8]+c->r[6]; // 801FCCD8
  c->r[10]=rotl(c->r[10],14)&0x00003FFFu; // 801FCCDC
  c->r[31]=R32(c->r[9]+0x0000000Cu); // 801FCCE0
  c->r[10]=(rotl(c->r[11],14)&0xFFFFC000u)|(c->r[10]&~0xFFFFC000u); // 801FCCE4
  c->r[6]=c->r[7]+c->r[10]; // 801FCCE8
  c->r[29]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCCEC
  c->r[12]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCCF0
  c->r[11]=c->r[6]&c->r[0]; // 801FCCF4
  c->r[10]=c->r[7]&~c->r[0]; // 801FCCF8
  c->r[9]=c->r[9]+0x00000010u; // 801FCCFC
  c->r[11]=c->r[11]|c->r[10]; // 801FCD00
  c->r[4]=c->r[4]+0x00000010u; // 801FCD04
  c->r[11]=c->r[5]+c->r[11]; // 801FCD08
  c->r[10]=c->r[12]+c->r[31]; // 801FCD0C
  c->r[5]=c->r[31]+c->r[11]; // 801FCD10
  c->r[5]=c->r[29]+c->r[5]; // 801FCD14
  c->r[10]=c->r[11]+c->r[10]; // 801FCD18
  c->r[5]=rotl(c->r[5],20)&0x000FFFFFu; // 801FCD1C
  c->r[5]=(rotl(c->r[10],20)&0xFFF00000u)|(c->r[5]&~0xFFF00000u); // 801FCD20
  c->r[5]=c->r[6]+c->r[5]; // 801FCD24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FCC10; } // 801FCD28
  c->r[10]=0u+0x00000004u; // 801FCD2C
  c->ctr=c->r[10]; // 801FCD30
L_801FCD34:;
  c->r[10]=R32(c->r[4]+0x00000000u); // 801FCD34
  c->r[31]=R32(c->r[9]+0x00000000u); // 801FCD38
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801FCD3C
  c->r[10]=c->r[8]+c->r[10]; // 801FCD40
  c->r[29]=__builtin_bswap32(R32(0u+c->r[10])); // 801FCD44
  c->r[12]=__builtin_bswap32(R32(0u+c->r[10])); // 801FCD48
  c->r[10]=c->r[7]^c->r[5]; // 801FCD4C
  c->r[11]=c->r[10]^c->r[6]; // 801FCD50
  c->r[10]=R32(c->r[4]+0x00000004u); // 801FCD54
  c->r[30]=c->r[0]+c->r[11]; // 801FCD58
  c->r[12]=c->r[12]+c->r[31]; // 801FCD5C
  c->r[11]=c->r[31]+c->r[30]; // 801FCD60
  c->r[0]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801FCD64
  c->r[10]=c->r[29]+c->r[11]; // 801FCD68
  c->r[31]=R32(c->r[9]+0x00000004u); // 801FCD6C
  c->r[11]=c->r[30]+c->r[12]; // 801FCD70
  c->r[12]=c->r[8]+c->r[0]; // 801FCD74
  c->r[10]=rotl(c->r[10],4)&0x0000000Fu; // 801FCD78
  c->r[10]=(rotl(c->r[11],4)&0xFFFFFFF0u)|(c->r[10]&~0xFFFFFFF0u); // 801FCD7C
  c->r[0]=c->r[5]+c->r[10]; // 801FCD80
  c->r[29]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCD84
  c->r[12]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCD88
  c->r[10]=c->r[6]^c->r[0]; // 801FCD8C
  c->r[11]=c->r[10]^c->r[5]; // 801FCD90
  c->r[10]=R32(c->r[4]+0x00000008u); // 801FCD94
  c->r[30]=c->r[7]+c->r[11]; // 801FCD98
  c->r[12]=c->r[12]+c->r[31]; // 801FCD9C
  c->r[11]=c->r[31]+c->r[30]; // 801FCDA0
  c->r[7]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801FCDA4
  c->r[10]=c->r[29]+c->r[11]; // 801FCDA8
  c->r[31]=R32(c->r[9]+0x00000008u); // 801FCDAC
  c->r[11]=c->r[30]+c->r[12]; // 801FCDB0
  c->r[12]=c->r[8]+c->r[7]; // 801FCDB4
  c->r[10]=rotl(c->r[10],11)&0x000007FFu; // 801FCDB8
  c->r[10]=(rotl(c->r[11],11)&0xFFFFF800u)|(c->r[10]&~0xFFFFF800u); // 801FCDBC
  c->r[7]=c->r[0]+c->r[10]; // 801FCDC0
  c->r[29]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCDC4
  c->r[12]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCDC8
  c->r[10]=c->r[5]^c->r[7]; // 801FCDCC
  c->r[11]=c->r[10]^c->r[0]; // 801FCDD0
  c->r[10]=R32(c->r[4]+0x0000000Cu); // 801FCDD4
  c->r[30]=c->r[6]+c->r[11]; // 801FCDD8
  c->r[12]=c->r[12]+c->r[31]; // 801FCDDC
  c->r[11]=c->r[31]+c->r[30]; // 801FCDE0
  c->r[6]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801FCDE4
  c->r[10]=c->r[29]+c->r[11]; // 801FCDE8
  c->r[11]=c->r[30]+c->r[12]; // 801FCDEC
  c->r[12]=c->r[8]+c->r[6]; // 801FCDF0
  c->r[10]=rotl(c->r[10],16)&0x0000FFFFu; // 801FCDF4
  c->r[10]=(rotl(c->r[11],16)&0xFFFF0000u)|(c->r[10]&~0xFFFF0000u); // 801FCDF8
  c->r[11]=R32(c->r[9]+0x0000000Cu); // 801FCDFC
  c->r[6]=c->r[7]+c->r[10]; // 801FCE00
  c->r[29]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCE04
  c->r[12]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCE08
  c->r[10]=c->r[0]^c->r[6]; // 801FCE0C
  c->r[10]=c->r[10]^c->r[7]; // 801FCE10
  c->r[9]=c->r[9]+0x00000010u; // 801FCE14
  c->r[30]=c->r[5]+c->r[10]; // 801FCE18
  c->r[4]=c->r[4]+0x00000010u; // 801FCE1C
  c->r[10]=c->r[12]+c->r[11]; // 801FCE20
  c->r[5]=c->r[11]+c->r[30]; // 801FCE24
  c->r[5]=c->r[29]+c->r[5]; // 801FCE28
  c->r[10]=c->r[30]+c->r[10]; // 801FCE2C
  c->r[5]=rotl(c->r[5],23)&0x007FFFFFu; // 801FCE30
  c->r[5]=(rotl(c->r[10],23)&0xFF800000u)|(c->r[5]&~0xFF800000u); // 801FCE34
  c->r[5]=c->r[6]+c->r[5]; // 801FCE38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FCD34; } // 801FCE3C
  c->r[10]=0u+0x00000004u; // 801FCE40
  c->ctr=c->r[10]; // 801FCE44
L_801FCE48:;
  c->r[10]=R32(c->r[4]+0x00000000u); // 801FCE48
  c->r[31]=R32(c->r[9]+0x00000000u); // 801FCE4C
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801FCE50
  c->r[10]=c->r[8]+c->r[10]; // 801FCE54
  c->r[29]=__builtin_bswap32(R32(0u+c->r[10])); // 801FCE58
  c->r[12]=__builtin_bswap32(R32(0u+c->r[10])); // 801FCE5C
  c->r[10]=c->r[5]|~c->r[7]; // 801FCE60
  c->r[11]=c->r[6]^c->r[10]; // 801FCE64
  c->r[10]=R32(c->r[4]+0x00000004u); // 801FCE68
  c->r[30]=c->r[0]+c->r[11]; // 801FCE6C
  c->r[12]=c->r[12]+c->r[31]; // 801FCE70
  c->r[11]=c->r[31]+c->r[30]; // 801FCE74
  c->r[0]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801FCE78
  c->r[10]=c->r[29]+c->r[11]; // 801FCE7C
  c->r[31]=R32(c->r[9]+0x00000004u); // 801FCE80
  c->r[11]=c->r[30]+c->r[12]; // 801FCE84
  c->r[12]=c->r[8]+c->r[0]; // 801FCE88
  c->r[10]=rotl(c->r[10],6)&0x0000003Fu; // 801FCE8C
  c->r[10]=(rotl(c->r[11],6)&0xFFFFFFC0u)|(c->r[10]&~0xFFFFFFC0u); // 801FCE90
  c->r[0]=c->r[5]+c->r[10]; // 801FCE94
  c->r[29]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCE98
  c->r[12]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCE9C
  c->r[10]=c->r[0]|~c->r[6]; // 801FCEA0
  c->r[11]=c->r[5]^c->r[10]; // 801FCEA4
  c->r[10]=R32(c->r[4]+0x00000008u); // 801FCEA8
  c->r[30]=c->r[7]+c->r[11]; // 801FCEAC
  c->r[12]=c->r[12]+c->r[31]; // 801FCEB0
  c->r[11]=c->r[31]+c->r[30]; // 801FCEB4
  c->r[7]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801FCEB8
  c->r[10]=c->r[29]+c->r[11]; // 801FCEBC
  c->r[31]=R32(c->r[9]+0x00000008u); // 801FCEC0
  c->r[11]=c->r[30]+c->r[12]; // 801FCEC4
  c->r[12]=c->r[8]+c->r[7]; // 801FCEC8
  c->r[10]=rotl(c->r[10],10)&0x000003FFu; // 801FCECC
  c->r[10]=(rotl(c->r[11],10)&0xFFFFFC00u)|(c->r[10]&~0xFFFFFC00u); // 801FCED0
  c->r[7]=c->r[0]+c->r[10]; // 801FCED4
  c->r[29]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCED8
  c->r[12]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCEDC
  c->r[10]=c->r[7]|~c->r[5]; // 801FCEE0
  c->r[11]=c->r[0]^c->r[10]; // 801FCEE4
  c->r[10]=R32(c->r[4]+0x0000000Cu); // 801FCEE8
  c->r[30]=c->r[6]+c->r[11]; // 801FCEEC
  c->r[12]=c->r[12]+c->r[31]; // 801FCEF0
  c->r[11]=c->r[31]+c->r[30]; // 801FCEF4
  c->r[6]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801FCEF8
  c->r[10]=c->r[29]+c->r[11]; // 801FCEFC
  c->r[11]=c->r[30]+c->r[12]; // 801FCF00
  c->r[12]=c->r[8]+c->r[6]; // 801FCF04
  c->r[10]=rotl(c->r[10],15)&0x00007FFFu; // 801FCF08
  c->r[10]=(rotl(c->r[11],15)&0xFFFF8000u)|(c->r[10]&~0xFFFF8000u); // 801FCF0C
  c->r[11]=R32(c->r[9]+0x0000000Cu); // 801FCF10
  c->r[6]=c->r[7]+c->r[10]; // 801FCF14
  c->r[29]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCF18
  c->r[12]=__builtin_bswap32(R32(0u+c->r[12])); // 801FCF1C
  c->r[10]=c->r[6]|~c->r[0]; // 801FCF20
  c->r[10]=c->r[7]^c->r[10]; // 801FCF24
  c->r[9]=c->r[9]+0x00000010u; // 801FCF28
  c->r[30]=c->r[5]+c->r[10]; // 801FCF2C
  c->r[4]=c->r[4]+0x00000010u; // 801FCF30
  c->r[10]=c->r[12]+c->r[11]; // 801FCF34
  c->r[5]=c->r[11]+c->r[30]; // 801FCF38
  c->r[5]=c->r[29]+c->r[5]; // 801FCF3C
  c->r[10]=c->r[30]+c->r[10]; // 801FCF40
  c->r[5]=rotl(c->r[5],21)&0x001FFFFFu; // 801FCF44
  c->r[5]=(rotl(c->r[10],21)&0xFFE00000u)|(c->r[5]&~0xFFE00000u); // 801FCF48
  c->r[5]=c->r[6]+c->r[5]; // 801FCF4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FCE48; } // 801FCF50
  c->r[9]=R32(c->r[3]+0x00000000u); // 801FCF54
  c->r[8]=R32(c->r[3]+0x00000004u); // 801FCF58
  c->r[9]=c->r[9]+c->r[0]; // 801FCF5C
  c->r[4]=R32(c->r[3]+0x00000008u); // 801FCF60
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801FCF64
  c->r[5]=c->r[8]+c->r[5]; // 801FCF68
  c->r[4]=c->r[4]+c->r[6]; // 801FCF6C
  W32(c->r[3]+0x00000000u,c->r[9]); // 801FCF70
  c->r[0]=c->r[0]+c->r[7]; // 801FCF74
  W32(c->r[3]+0x00000004u,c->r[5]); // 801FCF78
  W32(c->r[3]+0x00000008u,c->r[4]); // 801FCF7C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801FCF80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FCF84
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FCF88
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FCF8C
  c->r[1]=c->r[1]+0x00000020u; // 801FCF90
  return; // 801FCF94
}

// NHTTPi_InitBgnEndInfo
void f_801FCF98(Ctx* __restrict c) {
  trace_call(0x801FCF98u);
  c->r[4]=0u+0x00000000u; // 801FCF98
  c->r[0]=0u+0xFFFFFFFFu; // 801FCF9C
  W32(c->r[3]+0x000007D4u,c->r[4]); // 801FCFA0
  W32(c->r[3]+0x000007D8u,c->r[4]); // 801FCFA4
  W32(c->r[3]+0x000007C4u,c->r[4]); // 801FCFA8
  W32(c->r[3]+0x000007C8u,c->r[4]); // 801FCFAC
  W32(c->r[3]+0x000007CCu,c->r[4]); // 801FCFB0
  W32(c->r[3]+0x000007D0u,c->r[0]); // 801FCFB4
  W32(c->r[3]+0x000007DCu,c->r[4]); // 801FCFB8
  W32(c->r[3]+0x000007E0u,c->r[4]); // 801FCFBC
  W32(c->r[3]+0x000007E4u,c->r[4]); // 801FCFC0
  return; // 801FCFC4
}

// NHTTPi_alloc
void f_801FCFC8(Ctx* __restrict c) {
  trace_call(0x801FCFC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FCFC8
  c->r[0]=c->lr; // 801FCFCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FCFD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FCFD4
  c->r[31]=c->r[4]|c->r[4]; // 801FCFD8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FCFDC
  c->r[30]=c->r[3]|c->r[3]; // 801FCFE0
  c->lr=0x801FCFE8u; f_8020453C(c); // 801FCFE4
  c->r[12]=R32(c->r[3]+0x000007C4u); // 801FCFE8
  cmps(c,0,(int32_t)c->r[12],0); // 801FCFEC
  if (crb(c,2)) { goto L_801FD008; } // 801FCFF0
  c->r[3]=c->r[30]|c->r[30]; // 801FCFF4
  c->r[4]=c->r[31]|c->r[31]; // 801FCFF8
  c->ctr=c->r[12]; // 801FCFFC
  if (true) { c->lr=0x801FD004u; dispatch(c,c->ctr); } // 801FD000
  goto L_801FD00C; // 801FD004
L_801FD008:;
  c->r[3]=0u+0x00000000u; // 801FD008
L_801FD00C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FD00C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FD010
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FD014
  c->lr=c->r[0]; // 801FD018
  c->r[1]=c->r[1]+0x00000010u; // 801FD01C
  return; // 801FD020
}

// NHTTPi_free
void f_801FD024(Ctx* __restrict c) {
  trace_call(0x801FD024u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD024
  c->r[0]=c->lr; // 801FD028
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FD02C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FD030
  c->r[31]=c->r[3]|c->r[3]; // 801FD034
  c->lr=0x801FD03Cu; f_8020453C(c); // 801FD038
  c->r[12]=R32(c->r[3]+0x000007C8u); // 801FD03C
  cmps(c,0,(int32_t)c->r[12],0); // 801FD040
  if (crb(c,2)) { goto L_801FD054; } // 801FD044
  c->r[3]=c->r[31]|c->r[31]; // 801FD048
  c->ctr=c->r[12]; // 801FD04C
  if (true) { c->lr=0x801FD054u; dispatch(c,c->ctr); } // 801FD050
L_801FD054:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FD054
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FD058
  c->lr=c->r[0]; // 801FD05C
  c->r[1]=c->r[1]+0x00000010u; // 801FD060
  return; // 801FD064
}

// NHTTPi_SetError
void f_801FD068(Ctx* __restrict c) {
  trace_call(0x801FD068u);
  W32(c->r[3]+0x000007D8u,c->r[4]); // 801FD068
  return; // 801FD06C
}

// NHTTPi_SetSSLError
void f_801FD070(Ctx* __restrict c) {
  trace_call(0x801FD070u);
  W32(c->r[3]+0x000007D4u,c->r[4]); // 801FD070
  return; // 801FD074
}

// NHTTPi_GetError
void f_801FD078(Ctx* __restrict c) {
  trace_call(0x801FD078u);
  c->r[3]=R32(c->r[3]+0x000007D4u); // 801FD078
  return; // 801FD07C
}

// NHTTPi_Startup
void f_801FD080(Ctx* __restrict c) {
  trace_call(0x801FD080u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD080
  c->r[0]=c->lr; // 801FD084
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FD088
  c->r[11]=c->r[1]+0x00000030u; // 801FD08C
  c->lr=0x801FD094u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FD090
  c->r[30]=0u+0x802F0000u; // 801FD094
  c->r[31]=c->r[3]|c->r[3]; // 801FD098
  c->r[25]=c->r[4]|c->r[4]; // 801FD09C
  c->r[23]=c->r[5]|c->r[5]; // 801FD0A0
  c->r[24]=c->r[6]|c->r[6]; // 801FD0A4
  c->r[30]=c->r[30]+0xFFFF99A8u; // 801FD0A8
  c->lr=0x801FD0B0u; f_802045A4(c); // 801FD0AC
  c->r[29]=c->r[3]|c->r[3]; // 801FD0B0
  c->r[3]=c->r[31]|c->r[31]; // 801FD0B4
  c->lr=0x801FD0BCu; f_802045A8(c); // 801FD0B8
  c->r[28]=c->r[3]|c->r[3]; // 801FD0BC
  c->r[3]=c->r[31]|c->r[31]; // 801FD0C0
  c->lr=0x801FD0C8u; f_802045B0(c); // 801FD0C4
  c->r[27]=c->r[3]|c->r[3]; // 801FD0C8
  c->r[3]=c->r[31]|c->r[31]; // 801FD0CC
  c->lr=0x801FD0D4u; f_802045C0(c); // 801FD0D0
  c->r[26]=c->r[3]|c->r[3]; // 801FD0D4
  c->r[3]=c->r[31]|c->r[31]; // 801FD0D8
  c->lr=0x801FD0E0u; f_802045B8(c); // 801FD0DC
  W32(c->r[29]+0x000007C4u,c->r[25]); // 801FD0E0
  c->r[25]=c->r[3]|c->r[3]; // 801FD0E4
  c->r[31]=0u+0x00000000u; // 801FD0E8
  c->r[3]=c->r[28]|c->r[28]; // 801FD0EC
  W32(c->r[29]+0x000007C8u,c->r[23]); // 801FD0F0
  W32(c->r[29]+0x000007D8u,c->r[31]); // 801FD0F4
  W32(c->r[29]+0x000007D4u,c->r[31]); // 801FD0F8
  W32(c->r[29]+0x000007DCu,c->r[31]); // 801FD0FC
  c->lr=0x801FD104u; f_801FD630(c); // 801FD100
  c->r[3]=c->r[27]|c->r[27]; // 801FD104
  c->lr=0x801FD10Cu; f_801FE140(c); // 801FD108
  c->r[3]=c->r[26]|c->r[26]; // 801FD10C
  c->lr=0x801FD114u; f_801FD88C(c); // 801FD110
  c->lr=0x801FD118u; f_802045F0(c); // 801FD114
  c->r[0]=0u+0xFFFFFFFFu; // 801FD118
  W32(c->r[29]+0x000007D0u,c->r[0]); // 801FD11C
  c->lr=0x801FD124u; f_8020453C(c); // 801FD120
  c->r[12]=R32(c->r[3]+0x000007C4u); // 801FD124
  cmps(c,0,(int32_t)c->r[12],0); // 801FD128
  if (crb(c,2)) { goto L_801FD144; } // 801FD12C
  c->r[3]=0u+0x00002000u; // 801FD130
  c->r[4]=0u+0x00000008u; // 801FD134
  c->ctr=c->r[12]; // 801FD138
  if (true) { c->lr=0x801FD140u; dispatch(c,c->ctr); } // 801FD13C
  c->r[31]=c->r[3]|c->r[3]; // 801FD140
L_801FD144:;
  cmps(c,0,(int32_t)c->r[31],0); // 801FD144
  W32(c->r[29]+0x000007E0u,c->r[31]); // 801FD148
  if (!crb(c,2)) { goto L_801FD164; } // 801FD14C
  c->r[0]=0u+0x00000001u; // 801FD150
  W32(c->r[29]+0x000007D8u,c->r[0]); // 801FD154
  c->lr=0x801FD15Cu; f_801FD8CC(c); // 801FD158
  c->r[3]=0u+0x00000000u; // 801FD15C
  goto L_801FD1F8; // 801FD160
L_801FD164:;
  c->r[3]=c->r[25]|c->r[25]; // 801FD164
  c->r[4]=c->r[24]|c->r[24]; // 801FD168
  c->r[5]=c->r[31]|c->r[31]; // 801FD16C
  c->lr=0x801FD174u; f_801FD8D8(c); // 801FD170
  cmps(c,0,(int32_t)c->r[3],0); // 801FD174
  if (!crb(c,2)) { goto L_801FD1B8; } // 801FD178
  c->r[0]=0u+0x00000009u; // 801FD17C
  W32(c->r[29]+0x000007D8u,c->r[0]); // 801FD180
  c->r[30]=R32(c->r[29]+0x000007E0u); // 801FD184
  c->lr=0x801FD18Cu; f_8020453C(c); // 801FD188
  c->r[12]=R32(c->r[3]+0x000007C8u); // 801FD18C
  cmps(c,0,(int32_t)c->r[12],0); // 801FD190
  if (crb(c,2)) { goto L_801FD1A4; } // 801FD194
  c->r[3]=c->r[30]|c->r[30]; // 801FD198
  c->ctr=c->r[12]; // 801FD19C
  if (true) { c->lr=0x801FD1A4u; dispatch(c,c->ctr); } // 801FD1A0
L_801FD1A4:;
  c->r[0]=0u+0x00000000u; // 801FD1A4
  W32(c->r[29]+0x000007E0u,c->r[0]); // 801FD1A8
  c->lr=0x801FD1B0u; f_801FD8CC(c); // 801FD1AC
  c->r[3]=0u+0x00000000u; // 801FD1B0
  goto L_801FD1F8; // 801FD1B4
L_801FD1B8:;
  c->r[3]=c->r[29]|c->r[29]; // 801FD1B8
  c->lr=0x801FD1C0u; f_801FA328(c); // 801FD1BC
  cmps(c,0,(int32_t)c->r[3],0); // 801FD1C0
  if (!crb(c,0)) { goto L_801FD1EC; } // 801FD1C4
  c->r[4]=c->r[3]|c->r[3]; // 801FD1C8
  c->r[3]=c->r[30]+0x00000000u; // 801FD1CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD1D0
  c->lr=0x801FD1D8u; f_801506B4(c); // 801FD1D4
  c->r[3]=c->r[30]+0x00000020u; // 801FD1D8
  c->r[5]=c->r[30]+0x00000030u; // 801FD1DC
  c->r[4]=0u+0x000000E6u; // 801FD1E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD1E4
  c->lr=0x801FD1ECu; f_80150744(c); // 801FD1E8
L_801FD1EC:;
  c->r[0]=0u+0x00000001u; // 801FD1EC
  c->r[3]=0u+0x00000001u; // 801FD1F0
  W32(c->r[29]+0x000007CCu,c->r[0]); // 801FD1F4
L_801FD1F8:;
  c->r[11]=c->r[1]+0x00000030u; // 801FD1F8
  c->lr=0x801FD200u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FD1FC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FD200
  c->lr=c->r[0]; // 801FD204
  c->r[1]=c->r[1]+0x00000030u; // 801FD208
  return; // 801FD20C
}

// NHTTPi_CleanupAsync
void f_801FD210(Ctx* __restrict c) {
  trace_call(0x801FD210u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD210
  c->r[0]=c->lr; // 801FD214
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FD218
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FD21C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FD220
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FD224
  c->r[29]=c->r[4]|c->r[4]; // 801FD228
  W32(c->r[1]+0x00000010u,c->r[28]); // 801FD22C
  c->r[28]=c->r[3]|c->r[3]; // 801FD230
  c->lr=0x801FD238u; f_802045A4(c); // 801FD234
  c->r[30]=c->r[3]|c->r[3]; // 801FD238
  c->r[3]=c->r[28]|c->r[28]; // 801FD23C
  c->lr=0x801FD244u; f_802045B8(c); // 801FD240
  c->r[31]=c->r[3]|c->r[3]; // 801FD244
  c->r[4]=0u+0x00000001u; // 801FD248
  c->lr=0x801FD250u; f_801FD9E8(c); // 801FD24C
  c->r[3]=c->r[28]|c->r[28]; // 801FD250
  c->lr=0x801FD258u; f_801FEA68(c); // 801FD254
  c->r[3]=c->r[31]|c->r[31]; // 801FD258
  c->r[4]=c->r[30]|c->r[30]; // 801FD25C
  c->lr=0x801FD264u; f_801FD96C(c); // 801FD260
  c->r[31]=R32(c->r[30]+0x000007E0u); // 801FD264
  c->lr=0x801FD26Cu; f_8020453C(c); // 801FD268
  c->r[12]=R32(c->r[3]+0x000007C8u); // 801FD26C
  cmps(c,0,(int32_t)c->r[12],0); // 801FD270
  if (crb(c,2)) { goto L_801FD284; } // 801FD274
  c->r[3]=c->r[31]|c->r[31]; // 801FD278
  c->ctr=c->r[12]; // 801FD27C
  if (true) { c->lr=0x801FD284u; dispatch(c,c->ctr); } // 801FD280
L_801FD284:;
  c->r[31]=0u+0x00000000u; // 801FD284
  W32(c->r[30]+0x000007E0u,c->r[31]); // 801FD288
  c->lr=0x801FD290u; f_801FD8CC(c); // 801FD28C
  cmps(c,0,(int32_t)c->r[29],0); // 801FD290
  W32(c->r[30]+0x000007CCu,c->r[31]); // 801FD294
  if (crb(c,2)) { goto L_801FD2A8; } // 801FD298
  c->r[12]=c->r[29]|c->r[29]; // 801FD29C
  c->ctr=c->r[12]; // 801FD2A0
  if (true) { c->lr=0x801FD2A8u; dispatch(c,c->ctr); } // 801FD2A4
L_801FD2A8:;
  c->lr=0x801FD2ACu; f_802041AC(c); // 801FD2A8
  cmps(c,0,(int32_t)c->r[3],0); // 801FD2AC
  c->r[4]=c->r[3]|c->r[3]; // 801FD2B0
  if (crb(c,2)) { goto L_801FD2C8; } // 801FD2B4
  c->r[3]=0u+0x802F0000u; // 801FD2B8
  c->r[3]=c->r[3]+0xFFFF99F0u; // 801FD2BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD2C0
  c->lr=0x801FD2C8u; f_8025A8A4(c); // 801FD2C4
L_801FD2C8:;
  c->r[3]=R32(c->r[30]+0x000007D0u); // 801FD2C8
  cmps(c,0,(int32_t)c->r[3],0); // 801FD2CC
  if (crb(c,0)) { goto L_801FD2E0; } // 801FD2D0
  c->lr=0x801FD2D8u; f_80207524(c); // 801FD2D4
  c->r[0]=0u+0xFFFFFFFFu; // 801FD2D8
  W32(c->r[30]+0x000007D0u,c->r[0]); // 801FD2DC
L_801FD2E0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FD2E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FD2E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FD2E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FD2EC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801FD2F0
  c->lr=c->r[0]; // 801FD2F4
  c->r[1]=c->r[1]+0x00000020u; // 801FD2F8
  return; // 801FD2FC
}

// addHdrList
void f_801FD300(Ctx* __restrict c) {
  trace_call(0x801FD300u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD300
  c->r[0]=c->lr; // 801FD304
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FD308
  c->r[11]=c->r[1]+0x00000020u; // 801FD30C
  c->lr=0x801FD314u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FD310
  c->r[30]=R32(c->r[3]+0x00000000u); // 801FD314
  c->r[26]=c->r[3]|c->r[3]; // 801FD318
  c->r[27]=c->r[4]|c->r[4]; // 801FD31C
  c->r[28]=c->r[5]|c->r[5]; // 801FD320
  cmps(c,0,(int32_t)c->r[30],0); // 801FD324
  c->r[29]=c->r[6]|c->r[6]; // 801FD328
  c->r[31]=0u+0x00000000u; // 801FD32C
  if (crb(c,2)) { goto L_801FD384; } // 801FD330
  c->r[4]=R32(c->r[30]+0x00000008u); // 801FD334
  c->r[3]=c->r[28]|c->r[28]; // 801FD338
  c->lr=0x801FD340u; f_801FFCB0(c); // 801FD33C
  cmps(c,0,(int32_t)c->r[3],0); // 801FD340
  if (crb(c,2)) { goto L_801FD380; } // 801FD344
  c->r[30]=R32(c->r[30]+0x00000004u); // 801FD348
  goto L_801FD370; // 801FD34C
L_801FD350:;
  c->r[4]=R32(c->r[30]+0x00000008u); // 801FD350
  c->r[3]=c->r[28]|c->r[28]; // 801FD354
  c->lr=0x801FD35Cu; f_801FFCB0(c); // 801FD358
  cmps(c,0,(int32_t)c->r[3],0); // 801FD35C
  if (!crb(c,2)) { goto L_801FD36C; } // 801FD360
  c->r[31]=0u+0x00000001u; // 801FD364
  goto L_801FD384; // 801FD368
L_801FD36C:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 801FD36C
L_801FD370:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 801FD370
  cmpu(c,0,c->r[30],c->r[0]); // 801FD374
  if (!crb(c,2)) { IRQCHK(c); goto L_801FD350; } // 801FD378
  goto L_801FD384; // 801FD37C
L_801FD380:;
  c->r[31]=0u+0x00000001u; // 801FD380
L_801FD384:;
  cmps(c,0,(int32_t)c->r[31],0); // 801FD384
  if (crb(c,2)) { goto L_801FD394; } // 801FD388
  W32(c->r[30]+0x0000000Cu,c->r[29]); // 801FD38C
  goto L_801FD420; // 801FD390
L_801FD394:;
  c->r[3]=0u+0x00000018u; // 801FD394
  c->r[4]=0u+0x00000004u; // 801FD398
  c->lr=0x801FD3A0u; f_801FCFC8(c); // 801FD39C
  cmps(c,0,(int32_t)c->r[3],0); // 801FD3A0
  if (!crb(c,2)) { goto L_801FD3CC; } // 801FD3A4
  c->r[3]=0u+0x802F0000u; // 801FD3A8
  c->r[3]=c->r[3]+0xFFFF9A30u; // 801FD3AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD3B0
  c->lr=0x801FD3B8u; f_8025A8A4(c); // 801FD3B4
  c->r[3]=c->r[27]|c->r[27]; // 801FD3B8
  c->r[4]=0u+0x00000001u; // 801FD3BC
  c->lr=0x801FD3C4u; f_801FD068(c); // 801FD3C0
  c->r[3]=0u+0x00000000u; // 801FD3C4
  goto L_801FD424; // 801FD3C8
L_801FD3CC:;
  W32(c->r[3]+0x00000008u,c->r[28]); // 801FD3CC
  c->r[0]=0u+0x00000000u; // 801FD3D0
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 801FD3D4
  W32(c->r[3]+0x00000010u,c->r[0]); // 801FD3D8
  W32(c->r[3]+0x00000014u,c->r[0]); // 801FD3DC
  c->r[4]=R32(c->r[26]+0x00000000u); // 801FD3E0
  cmps(c,0,(int32_t)c->r[4],0); // 801FD3E4
  if (crb(c,2)) { goto L_801FD414; } // 801FD3E8
  c->r[0]=R32(c->r[4]+0x00000000u); // 801FD3EC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801FD3F0
  c->r[0]=R32(c->r[26]+0x00000000u); // 801FD3F4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801FD3F8
  c->r[4]=R32(c->r[26]+0x00000000u); // 801FD3FC
  c->r[4]=R32(c->r[4]+0x00000000u); // 801FD400
  W32(c->r[4]+0x00000004u,c->r[3]); // 801FD404
  c->r[4]=R32(c->r[26]+0x00000000u); // 801FD408
  W32(c->r[4]+0x00000000u,c->r[3]); // 801FD40C
  goto L_801FD420; // 801FD410
L_801FD414:;
  W32(c->r[3]+0x00000004u,c->r[3]); // 801FD414
  W32(c->r[3]+0x00000000u,c->r[3]); // 801FD418
  W32(c->r[26]+0x00000000u,c->r[3]); // 801FD41C
L_801FD420:;
  c->r[3]=0u+0x00000001u; // 801FD420
L_801FD424:;
  c->r[11]=c->r[1]+0x00000020u; // 801FD424
  c->lr=0x801FD42Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FD428
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FD42C
  c->lr=c->r[0]; // 801FD430
  c->r[1]=c->r[1]+0x00000020u; // 801FD434
  return; // 801FD438
}

// NHTTPi_getHdrFromList
void f_801FD43C(Ctx* __restrict c) {
  trace_call(0x801FD43Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 801FD43C
  cmps(c,0,(int32_t)c->r[5],0); // 801FD440
  if (crb(c,2)) { goto L_801FD47C; } // 801FD444
  c->r[4]=R32(c->r[5]+0x00000000u); // 801FD448
  cmpu(c,0,c->r[5],c->r[4]); // 801FD44C
  if (crb(c,2)) { goto L_801FD474; } // 801FD450
  c->r[0]=R32(c->r[5]+0x00000004u); // 801FD454
  W32(c->r[4]+0x00000004u,c->r[0]); // 801FD458
  c->r[0]=R32(c->r[5]+0x00000000u); // 801FD45C
  c->r[4]=R32(c->r[5]+0x00000004u); // 801FD460
  W32(c->r[4]+0x00000000u,c->r[0]); // 801FD464
  c->r[0]=R32(c->r[5]+0x00000004u); // 801FD468
  W32(c->r[3]+0x00000000u,c->r[0]); // 801FD46C
  goto L_801FD47C; // 801FD470
L_801FD474:;
  c->r[0]=0u+0x00000000u; // 801FD474
  W32(c->r[3]+0x00000000u,c->r[0]); // 801FD478
L_801FD47C:;
  c->r[3]=c->r[5]|c->r[5]; // 801FD47C
  return; // 801FD480
}

// NHTTP_AddHeaderField
void f_801FD484(Ctx* __restrict c) {
  trace_call(0x801FD484u);
  c->r[0]=R32(c->r[3]+0x00000004u); // 801FD484
  cmps(c,0,(int32_t)c->r[0],0); // 801FD488
  if (crb(c,2)) { goto L_801FD498; } // 801FD48C
  c->r[3]=0u+0x00000000u; // 801FD490
  return; // 801FD494
L_801FD498:;
  c->r[3]=c->r[3]+0x00000030u; // 801FD498
  f_801FD300(c); return; // 801FD49C
  return; // 801FD4A0
}

// NHTTP_AddPostDataAscii
void f_801FD4A4(Ctx* __restrict c) {
  trace_call(0x801FD4A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD4A4
  c->r[0]=c->lr; // 801FD4A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801FD4AC
  c->r[11]=c->r[1]+0x00000040u; // 801FD4B0
  c->lr=0x801FD4B8u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FD4B4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801FD4B8
  c->r[27]=c->r[3]|c->r[3]; // 801FD4BC
  c->r[28]=c->r[4]|c->r[4]; // 801FD4C0
  c->r[29]=c->r[5]|c->r[5]; // 801FD4C4
  cmps(c,0,(int32_t)c->r[0],0); // 801FD4C8
  c->r[21]=c->r[6]|c->r[6]; // 801FD4CC
  c->r[31]=0u+0x00000000u; // 801FD4D0
  c->r[30]=0u+0x00000000u; // 801FD4D4
  if (crb(c,2)) { goto L_801FD4E4; } // 801FD4D8
  c->r[3]=0u+0x00000000u; // 801FD4DC
  goto L_801FD618; // 801FD4E0
L_801FD4E4:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 801FD4E4
  cmps(c,0,(int32_t)c->r[0],0); // 801FD4E8
  if (crb(c,2)) { goto L_801FD508; } // 801FD4EC
  c->r[3]=0u+0x802F0000u; // 801FD4F0
  c->r[3]=c->r[3]+0xFFFF9A4Cu; // 801FD4F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD4F8
  c->lr=0x801FD500u; f_8025A8A4(c); // 801FD4FC
  c->r[3]=0u+0x00000000u; // 801FD500
  goto L_801FD618; // 801FD504
L_801FD508:;
  cmps(c,0,(int32_t)c->r[6],0); // 801FD508
  if (crb(c,2)) { goto L_801FD51C; } // 801FD50C
  c->r[3]=c->r[21]|c->r[21]; // 801FD510
  c->lr=0x801FD518u; f_801FF70C(c); // 801FD514
  c->r[30]=c->r[3]|c->r[3]; // 801FD518
L_801FD51C:;
  c->r[3]=c->r[21]|c->r[21]; // 801FD51C
  c->r[4]=c->r[30]|c->r[30]; // 801FD520
  c->r[5]=c->r[27]+0x0000003Au; // 801FD524
  c->r[6]=0u+0x00000012u; // 801FD528
  c->lr=0x801FD530u; f_801FFDF4(c); // 801FD52C
  cmps(c,0,(int32_t)c->r[3],0); // 801FD530
  if (!crb(c,0)) { goto L_801FD540; } // 801FD534
  c->r[0]=0u+0x00000001u; // 801FD538
  goto L_801FD5E0; // 801FD53C
L_801FD540:;
  c->r[3]=0u+0x80280000u; // 801FD540
  c->r[24]=0u+0x00000013u; // 801FD544
  c->r[3]=c->r[3]+0x00001A18u; // 801FD548
  c->r[23]=c->r[3]+0x00000013u; // 801FD54C
L_801FD550:;
  c->r[22]=c->r[27]+c->r[24]; // 801FD550
  c->r[0]=R8(c->r[23]+0x00000000u); // 801FD554
  c->r[25]=R8(c->r[22]+0x00000038u); // 801FD558
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FD55C
L_801FD560:;
  c->r[3]=rotl(c->r[25],0)&0x000000FFu; // 801FD560
  c->r[3]=c->r[3]+0x00000001u; // 801FD564
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801FD568
  cmpu(c,0,c->r[0],0x0000007Bu); // 801FD56C
  if (!crb(c,2)) { goto L_801FD57C; } // 801FD570
  c->r[3]=0u+0x00000030u; // 801FD574
  goto L_801FD598; // 801FD578
L_801FD57C:;
  cmpu(c,0,c->r[0],0x0000005Bu); // 801FD57C
  if (!crb(c,2)) { goto L_801FD58C; } // 801FD580
  c->r[3]=0u+0x00000061u; // 801FD584
  goto L_801FD598; // 801FD588
L_801FD58C:;
  cmpu(c,0,c->r[0],0x0000003Au); // 801FD58C
  if (!crb(c,2)) { goto L_801FD598; } // 801FD590
  c->r[3]=0u+0x00000041u; // 801FD594
L_801FD598:;
  c->r[25]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801FD598
  W8(c->r[22]+0x00000038u,c->r[3]); // 801FD59C
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[26]); // 801FD5A0
  if (crb(c,2)) { goto L_801FD5CC; } // 801FD5A4
  c->r[3]=c->r[21]|c->r[21]; // 801FD5A8
  c->r[4]=c->r[30]|c->r[30]; // 801FD5AC
  c->r[5]=c->r[27]+0x0000003Au; // 801FD5B0
  c->r[6]=0u+0x00000012u; // 801FD5B4
  c->lr=0x801FD5BCu; f_801FFDF4(c); // 801FD5B8
  cmps(c,0,(int32_t)c->r[3],0); // 801FD5BC
  if (!crb(c,0)) { IRQCHK(c); goto L_801FD560; } // 801FD5C0
  c->r[0]=0u+0x00000001u; // 801FD5C4
  goto L_801FD5E0; // 801FD5C8
L_801FD5CC:;
  c->r[24]=c->r[24]+0xFFFFFFFFu; // 801FD5CC
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 801FD5D0
  cmps(c,0,(int32_t)c->r[24],2); // 801FD5D4
  if (!crb(c,0)) { IRQCHK(c); goto L_801FD550; } // 801FD5D8
  c->r[0]=0u+0x00000000u; // 801FD5DC
L_801FD5E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801FD5E0
  if (crb(c,2)) { goto L_801FD614; } // 801FD5E4
  c->r[4]=c->r[28]|c->r[28]; // 801FD5E8
  c->r[5]=c->r[29]|c->r[29]; // 801FD5EC
  c->r[6]=c->r[21]|c->r[21]; // 801FD5F0
  c->r[3]=c->r[27]+0x00000034u; // 801FD5F4
  c->lr=0x801FD5FCu; f_801FD300(c); // 801FD5F8
  cmps(c,0,(int32_t)c->r[3],0); // 801FD5FC
  c->r[31]=c->r[3]|c->r[3]; // 801FD600
  if (crb(c,2)) { goto L_801FD614; } // 801FD604
  c->r[3]=R32(c->r[27]+0x00000034u); // 801FD608
  c->r[3]=R32(c->r[3]+0x00000000u); // 801FD60C
  W32(c->r[3]+0x00000010u,c->r[30]); // 801FD610
L_801FD614:;
  c->r[3]=c->r[31]|c->r[31]; // 801FD614
L_801FD618:;
  c->r[11]=c->r[1]+0x00000040u; // 801FD618
  c->lr=0x801FD620u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FD61C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801FD620
  c->lr=c->r[0]; // 801FD624
  c->r[1]=c->r[1]+0x00000040u; // 801FD628
  return; // 801FD62C
}

// NHTTPi_InitListInfo
void f_801FD630(Ctx* __restrict c) {
  trace_call(0x801FD630u);
  c->r[0]=0u+0x00000000u; // 801FD630
  W32(c->r[3]+0x00000000u,c->r[0]); // 801FD634
  W32(c->r[3]+0x00000004u,c->r[0]); // 801FD638
  return; // 801FD63C
}

// NHTTPi_setReqQueue
void f_801FD640(Ctx* __restrict c) {
  trace_call(0x801FD640u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD640
  c->r[0]=c->lr; // 801FD644
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FD648
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FD64C
  c->r[31]=0u+0xFFFFFFFFu; // 801FD650
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FD654
  c->r[30]=c->r[4]|c->r[4]; // 801FD658
  c->r[4]=0u+0x00000004u; // 801FD65C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FD660
  c->r[29]=c->r[3]|c->r[3]; // 801FD664
  c->r[3]=0u+0x00000014u; // 801FD668
  c->lr=0x801FD670u; f_801FCFC8(c); // 801FD66C
  cmps(c,0,(int32_t)c->r[3],0); // 801FD670
  if (crb(c,2)) { goto L_801FD6EC; } // 801FD674
  c->r[4]=R32(c->r[29]+0x00000000u); // 801FD678
  cmps(c,0,(int32_t)c->r[4],0); // 801FD67C
  if (crb(c,2)) { goto L_801FD6AC; } // 801FD680
  c->r[0]=R32(c->r[4]+0x00000000u); // 801FD684
  W32(c->r[3]+0x00000000u,c->r[0]); // 801FD688
  c->r[0]=R32(c->r[29]+0x00000000u); // 801FD68C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801FD690
  c->r[4]=R32(c->r[29]+0x00000000u); // 801FD694
  c->r[4]=R32(c->r[4]+0x00000000u); // 801FD698
  W32(c->r[4]+0x00000004u,c->r[3]); // 801FD69C
  c->r[4]=R32(c->r[29]+0x00000000u); // 801FD6A0
  W32(c->r[4]+0x00000000u,c->r[3]); // 801FD6A4
  goto L_801FD6B8; // 801FD6A8
L_801FD6AC:;
  W32(c->r[3]+0x00000000u,c->r[3]); // 801FD6AC
  W32(c->r[3]+0x00000004u,c->r[3]); // 801FD6B0
  W32(c->r[29]+0x00000000u,c->r[3]); // 801FD6B4
L_801FD6B8:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 801FD6B8
  c->r[0]=0u+0xFFFFFFFFu; // 801FD6BC
  W32(c->r[3]+0x00000008u,c->r[4]); // 801FD6C0
  c->r[4]=c->r[4]+0x00000001u; // 801FD6C4
  W32(c->r[29]+0x00000004u,c->r[4]); // 801FD6C8
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 801FD6CC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801FD6D0
  c->r[0]=R32(c->r[29]+0x00000004u); // 801FD6D4
  c->r[31]=R32(c->r[3]+0x00000008u); // 801FD6D8
  cmps(c,0,(int32_t)c->r[0],0); // 801FD6DC
  if (!crb(c,0)) { goto L_801FD6EC; } // 801FD6E0
  c->r[0]=0u+0x00000000u; // 801FD6E4
  W32(c->r[29]+0x00000004u,c->r[0]); // 801FD6E8
L_801FD6EC:;
  c->r[3]=c->r[31]|c->r[31]; // 801FD6EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FD6F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FD6F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FD6F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FD6FC
  c->lr=c->r[0]; // 801FD700
  c->r[1]=c->r[1]+0x00000020u; // 801FD704
  return; // 801FD708
}

// NHTTPi_freeReqQueue
void f_801FD70C(Ctx* __restrict c) {
  trace_call(0x801FD70Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD70C
  c->r[0]=c->lr; // 801FD710
  c->r[7]=0u+0x00000000u; // 801FD714
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FD718
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FD71C
  c->r[31]=0u+0x00000000u; // 801FD720
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FD724
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FD728
  c->r[29]=c->r[4]|c->r[4]; // 801FD72C
  c->r[6]=R32(c->r[3]+0x00000000u); // 801FD730
  cmps(c,0,(int32_t)c->r[6],0); // 801FD734
  if (crb(c,2)) { goto L_801FD778; } // 801FD738
  c->r[0]=R32(c->r[6]+0x00000008u); // 801FD73C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801FD740
  if (!crb(c,2)) { goto L_801FD750; } // 801FD744
  c->r[31]=c->r[6]|c->r[6]; // 801FD748
  goto L_801FD778; // 801FD74C
L_801FD750:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 801FD750
  goto L_801FD770; // 801FD754
L_801FD758:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 801FD758
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801FD75C
  if (!crb(c,2)) { goto L_801FD76C; } // 801FD760
  c->r[31]=c->r[4]|c->r[4]; // 801FD764
  goto L_801FD778; // 801FD768
L_801FD76C:;
  c->r[4]=R32(c->r[4]+0x00000004u); // 801FD76C
L_801FD770:;
  cmpu(c,0,c->r[4],c->r[6]); // 801FD770
  if (!crb(c,2)) { IRQCHK(c); goto L_801FD758; } // 801FD774
L_801FD778:;
  cmps(c,0,(int32_t)c->r[31],0); // 801FD778
  if (crb(c,2)) { goto L_801FD808; } // 801FD77C
  c->r[0]=R32(c->r[6]+0x00000000u); // 801FD780
  cmpu(c,0,c->r[6],c->r[0]); // 801FD784
  if (crb(c,2)) { goto L_801FD7BC; } // 801FD788
  c->r[0]=R32(c->r[31]+0x00000004u); // 801FD78C
  c->r[4]=R32(c->r[31]+0x00000000u); // 801FD790
  W32(c->r[4]+0x00000004u,c->r[0]); // 801FD794
  c->r[0]=R32(c->r[31]+0x00000000u); // 801FD798
  c->r[4]=R32(c->r[31]+0x00000004u); // 801FD79C
  W32(c->r[4]+0x00000000u,c->r[0]); // 801FD7A0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FD7A4
  cmpu(c,0,c->r[0],c->r[31]); // 801FD7A8
  if (!crb(c,2)) { goto L_801FD7C4; } // 801FD7AC
  c->r[0]=R32(c->r[31]+0x00000004u); // 801FD7B0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801FD7B4
  goto L_801FD7C4; // 801FD7B8
L_801FD7BC:;
  c->r[0]=0u+0x00000000u; // 801FD7BC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801FD7C0
L_801FD7C4:;
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801FD7C4
  c->r[3]=c->r[29]|c->r[29]; // 801FD7C8
  c->lr=0x801FD7D0u; f_8020410C(c); // 801FD7CC
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801FD7D0
  c->r[30]=c->r[3]|c->r[3]; // 801FD7D4
  c->r[3]=c->r[29]|c->r[29]; // 801FD7D8
  c->lr=0x801FD7E0u; f_801FE80C(c); // 801FD7DC
  c->r[3]=c->r[31]|c->r[31]; // 801FD7E0
  c->lr=0x801FD7E8u; f_801FD024(c); // 801FD7E4
  cmps(c,0,(int32_t)c->r[30],0); // 801FD7E8
  if (crb(c,2)) { goto L_801FD804; } // 801FD7EC
  c->r[0]=0u+0x00000008u; // 801FD7F0
  c->r[3]=c->r[29]|c->r[29]; // 801FD7F4
  W32(c->r[30]+0x00000004u,c->r[0]); // 801FD7F8
  c->r[4]=c->r[30]|c->r[30]; // 801FD7FC
  c->lr=0x801FD804u; f_802044E4(c); // 801FD800
L_801FD804:;
  c->r[7]=0u+0x00000001u; // 801FD804
L_801FD808:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FD808
  c->r[3]=c->r[7]|c->r[7]; // 801FD80C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FD810
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FD814
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FD818
  c->lr=c->r[0]; // 801FD81C
  c->r[1]=c->r[1]+0x00000020u; // 801FD820
  return; // 801FD824
}

// NHTTPi_allFreeReqQueue
void f_801FD828(Ctx* __restrict c) {
  trace_call(0x801FD828u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD828
  c->r[0]=c->lr; // 801FD82C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FD830
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FD834
  c->r[31]=c->r[4]|c->r[4]; // 801FD838
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FD83C
  c->r[30]=c->r[3]|c->r[3]; // 801FD840
  goto L_801FD858; // 801FD844
L_801FD848:;
  c->r[5]=R32(c->r[3]+0x00000008u); // 801FD848
  c->r[3]=c->r[30]|c->r[30]; // 801FD84C
  c->r[4]=c->r[31]|c->r[31]; // 801FD850
  c->lr=0x801FD858u; f_801FD70C(c); // 801FD854
L_801FD858:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FD858
  cmps(c,0,(int32_t)c->r[3],0); // 801FD85C
  if (!crb(c,2)) { IRQCHK(c); goto L_801FD848; } // 801FD860
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FD864
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FD868
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FD86C
  c->lr=c->r[0]; // 801FD870
  c->r[1]=c->r[1]+0x00000010u; // 801FD874
  return; // 801FD878
}

// NHTTPi_getReqFromReqQueue
void f_801FD87C(Ctx* __restrict c) {
  trace_call(0x801FD87Cu);
  f_801FD43C(c); return; // 801FD87C
}

// NHTTPi_InitMutexInfo
void f_801FD880(Ctx* __restrict c) {
  trace_call(0x801FD880u);
  c->r[0]=0u+0x00000000u; // 801FD880
  W32(c->r[3]+0x00000018u,c->r[0]); // 801FD884
  return; // 801FD888
}

// NHTTPi_initLockReqList
void f_801FD88C(Ctx* __restrict c) {
  trace_call(0x801FD88Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD88C
  c->r[0]=c->lr; // 801FD890
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FD894
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FD898
  c->r[31]=c->r[3]|c->r[3]; // 801FD89C
  c->r[0]=R32(c->r[3]+0x00000018u); // 801FD8A0
  cmps(c,0,(int32_t)c->r[0],0); // 801FD8A4
  if (!crb(c,2)) { goto L_801FD8B8; } // 801FD8A8
  c->lr=0x801FD8B0u; f_80155694(c); // 801FD8AC
  c->r[0]=0u+0x00000001u; // 801FD8B0
  W32(c->r[31]+0x00000018u,c->r[0]); // 801FD8B4
L_801FD8B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FD8B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FD8BC
  c->lr=c->r[0]; // 801FD8C0
  c->r[1]=c->r[1]+0x00000010u; // 801FD8C4
  return; // 801FD8C8
}

// NHTTPi_exitLockReqList
void f_801FD8CC(Ctx* __restrict c) {
  trace_call(0x801FD8CCu);
  return; // 801FD8CC
}

// NHTTPi_lockReqList
void f_801FD8D0(Ctx* __restrict c) {
  trace_call(0x801FD8D0u);
  f_801556CC(c); return; // 801FD8D0
}

// NHTTPi_unlockReqList
void f_801FD8D4(Ctx* __restrict c) {
  trace_call(0x801FD8D4u);
  f_801557A8(c); return; // 801FD8D4
}

// NHTTPi_createCommThread
void f_801FD8D8(Ctx* __restrict c) {
  trace_call(0x801FD8D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD8D8
  c->r[0]=c->lr; // 801FD8DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FD8E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FD8E4
  c->r[31]=c->r[5]|c->r[5]; // 801FD8E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FD8EC
  c->r[30]=c->r[4]|c->r[4]; // 801FD8F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FD8F4
  c->r[29]=c->r[3]|c->r[3]; // 801FD8F8
  c->lr=0x801FD900u; f_80200094(c); // 801FD8FC
  cmps(c,0,(int32_t)c->r[3],0); // 801FD900
  if (!crb(c,2)) { goto L_801FD920; } // 801FD904
  c->r[3]=c->r[29]|c->r[29]; // 801FD908
  c->r[4]=c->r[29]+0x00000020u; // 801FD90C
  c->r[5]=0u+0x00000003u; // 801FD910
  c->lr=0x801FD918u; f_80154BAC(c); // 801FD914
  c->r[3]=c->r[29]|c->r[29]; // 801FD918
  c->lr=0x801FD920u; f_80200088(c); // 801FD91C
L_801FD920:;
  c->r[4]=0u+0x80200000u; // 801FD920
  c->r[8]=c->r[30]|c->r[30]; // 801FD924
  c->r[3]=c->r[29]+0x00000030u; // 801FD928
  c->r[6]=c->r[31]+0x00002000u; // 801FD92C
  c->r[4]=c->r[4]+0xFFFFDA80u; // 801FD930
  c->r[5]=0u+0x00000000u; // 801FD934
  c->r[7]=0u+0x00002000u; // 801FD938
  c->r[9]=0u+0x00000000u; // 801FD93C
  c->lr=0x801FD944u; f_80157740(c); // 801FD940
  c->r[3]=c->r[29]+0x00000030u; // 801FD944
  c->lr=0x801FD94Cu; f_80157DA8(c); // 801FD948
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FD94C
  c->r[3]=0u+0x00000001u; // 801FD950
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FD954
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FD958
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FD95C
  c->lr=c->r[0]; // 801FD960
  c->r[1]=c->r[1]+0x00000020u; // 801FD964
  return; // 801FD968
}

// NHTTPi_destroyCommThread
void f_801FD96C(Ctx* __restrict c) {
  trace_call(0x801FD96Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD96C
  c->r[0]=c->lr; // 801FD970
  c->r[5]=0u+0x00000000u; // 801FD974
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FD978
  c->r[0]=0u+0x00000001u; // 801FD97C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FD980
  c->r[31]=c->r[3]|c->r[3]; // 801FD984
  W32(c->r[4]+0x000007DCu,c->r[0]); // 801FD988
  c->r[4]=0u+0x00000000u; // 801FD98C
  c->lr=0x801FD994u; f_80154C0C(c); // 801FD990
  c->r[3]=c->r[31]+0x00000030u; // 801FD994
  c->r[4]=0u+0x00000000u; // 801FD998
  c->lr=0x801FD9A0u; f_80157C68(c); // 801FD99C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FD9A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FD9A4
  c->lr=c->r[0]; // 801FD9A8
  c->r[1]=c->r[1]+0x00000010u; // 801FD9AC
  return; // 801FD9B0
}

// NHTTPi_idleCommThread
void f_801FD9B4(Ctx* __restrict c) {
  trace_call(0x801FD9B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD9B4
  c->r[0]=c->lr; // 801FD9B8
  c->r[5]=0u+0x00000001u; // 801FD9BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FD9C0
  c->r[4]=c->r[1]+0x00000008u; // 801FD9C4
  c->lr=0x801FD9CCu; f_80154CD4(c); // 801FD9C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FD9CC
  c->lr=c->r[0]; // 801FD9D0
  c->r[1]=c->r[1]+0x00000010u; // 801FD9D4
  return; // 801FD9D8
}

// NHTTPi_kickCommThread
void f_801FD9DC(Ctx* __restrict c) {
  trace_call(0x801FD9DCu);
  c->r[4]=0u+0x00000000u; // 801FD9DC
  c->r[5]=0u+0x00000000u; // 801FD9E0
  f_80154C0C(c); return; // 801FD9E4
}

// NHTTPi_CheckCurrentThread
void f_801FD9E8(Ctx* __restrict c) {
  trace_call(0x801FD9E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD9E8
  c->r[0]=c->lr; // 801FD9EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FD9F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FD9F4
  c->r[31]=0u+0x802F0000u; // 801FD9F8
  c->r[31]=c->r[31]+0xFFFF9A88u; // 801FD9FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FDA00
  c->r[30]=c->r[4]|c->r[4]; // 801FDA04
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FDA08
  c->r[29]=c->r[3]|c->r[3]; // 801FDA0C
  c->lr=0x801FDA14u; f_8015716C(c); // 801FDA10
  cmps(c,0,(int32_t)c->r[3],0); // 801FDA14
  c->r[0]=c->r[29]+0x00000030u; // 801FDA18
  if (crb(c,2)) { goto L_801FDA64; } // 801FDA1C
  cmps(c,0,(int32_t)c->r[30],0); // 801FDA20
  if (!crb(c,2)) { goto L_801FDA30; } // 801FDA24
  cmpu(c,0,c->r[3],c->r[0]); // 801FDA28
  if (!crb(c,2)) { goto L_801FDA40; } // 801FDA2C
L_801FDA30:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FDA30
  if (crb(c,2)) { goto L_801FDA64; } // 801FDA34
  cmpu(c,0,c->r[3],c->r[0]); // 801FDA38
  if (!crb(c,2)) { goto L_801FDA64; } // 801FDA3C
L_801FDA40:;
  c->r[3]=c->r[31]+0x0000001Cu; // 801FDA40
  c->r[4]=c->r[31]+0x00000000u; // 801FDA44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDA48
  c->lr=0x801FDA50u; f_801506B4(c); // 801FDA4C
  c->r[3]=c->r[31]+0x00000030u; // 801FDA50
  c->r[4]=0u+0x000000DFu; // 801FDA54
  c->r[5]=c->r[13]+0xFFFF94A0u; // 801FDA58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDA5C
  c->lr=0x801FDA64u; f_80150744(c); // 801FDA60
L_801FDA64:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FDA64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FDA68
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FDA6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FDA70
  c->lr=c->r[0]; // 801FDA74
  c->r[1]=c->r[1]+0x00000020u; // 801FDA78
  return; // 801FDA7C
}

// NHTTPi_CommThreadProc
void f_801FDA80(Ctx* __restrict c) {
  trace_call(0x801FDA80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FDA80
  c->r[0]=c->lr; // 801FDA84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FDA88
  c->lr=0x801FDA90u; f_80202B04(c); // 801FDA8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FDA90
  c->r[3]=0u+0x00000000u; // 801FDA94
  c->lr=c->r[0]; // 801FDA98
  c->r[1]=c->r[1]+0x00000010u; // 801FDA9C
  return; // 801FDAA0
}

// NHTTPi_findNextLineHdrRecvBuf
void f_801FDAA4(Ctx* __restrict c) {
  trace_call(0x801FDAA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FDAA4
  cmps(c,0,(int32_t)c->r[6],0); // 801FDAA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FDAAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FDAB0
  if (crb(c,2)) { goto L_801FDAC0; } // 801FDAB4
  c->r[0]=0u+0xFFFFFFFFu; // 801FDAB8
  W32(c->r[6]+0x00000000u,c->r[0]); // 801FDABC
L_801FDAC0:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801FDAC0
  if (!crb(c,0)) { goto L_801FDC88; } // 801FDAC4
  cmps(c,0,(int32_t)c->r[4],1024); // 801FDAC8
  c->r[10]=0u+0xFFFFFFFFu; // 801FDACC
  c->r[30]=0u+0x00000000u; // 801FDAD0
  if (!crb(c,0)) { goto L_801FDAE4; } // 801FDAD4
  c->r[31]=c->r[4]|c->r[4]; // 801FDAD8
  c->r[12]=0u+0x00000000u; // 801FDADC
  goto L_801FDB40; // 801FDAE0
L_801FDAE4:;
  c->r[0]=c->r[4]+0xFFFFFC00u; // 801FDAE4
  c->r[12]=R32(c->r[3]+0x00000034u); // 801FDAE8
  c->r[8]=sraw(c,c->r[0],9); cr0(c,c->r[8]); // 801FDAEC
  if (crb(c,2)) { goto L_801FDB38; } // 801FDAF0
  c->r[0]=rotl(c->r[8],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801FDAF4
  c->ctr=c->r[0]; // 801FDAF8
  if (crb(c,2)) { goto L_801FDB2C; } // 801FDAFC
L_801FDB00:;
  c->r[12]=R32(c->r[12]+0x00000000u); // 801FDB00
  c->r[12]=R32(c->r[12]+0x00000000u); // 801FDB04
  c->r[12]=R32(c->r[12]+0x00000000u); // 801FDB08
  c->r[12]=R32(c->r[12]+0x00000000u); // 801FDB0C
  c->r[12]=R32(c->r[12]+0x00000000u); // 801FDB10
  c->r[12]=R32(c->r[12]+0x00000000u); // 801FDB14
  c->r[12]=R32(c->r[12]+0x00000000u); // 801FDB18
  c->r[12]=R32(c->r[12]+0x00000000u); // 801FDB1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FDB00; } // 801FDB20
  c->r[8]=c->r[8]&0x00000007u; cr0(c,c->r[8]); // 801FDB24
  if (crb(c,2)) { goto L_801FDB38; } // 801FDB28
L_801FDB2C:;
  c->ctr=c->r[8]; // 801FDB2C
L_801FDB30:;
  c->r[12]=R32(c->r[12]+0x00000000u); // 801FDB30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FDB30; } // 801FDB34
L_801FDB38:;
  c->r[0]=c->r[4]+0xFFFFFC00u; // 801FDB38
  c->r[31]=rotl(c->r[0],0)&0x000001FFu; // 801FDB3C
L_801FDB40:;
  c->r[0]=c->r[5]-c->r[4]; // 801FDB40
  c->r[8]=0u+0x00000001u; // 801FDB44
  c->ctr=c->r[0]; // 801FDB48
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801FDB4C
  if (!crb(c,0)) { goto L_801FDC88; } // 801FDB50
L_801FDB54:;
  cmps(c,0,(int32_t)c->r[12],0); // 801FDB54
  if (!crb(c,2)) { goto L_801FDB84; } // 801FDB58
  cmps(c,0,(int32_t)c->r[31],1024); // 801FDB5C
  if (!crb(c,0)) { goto L_801FDB78; } // 801FDB60
  c->r[9]=c->r[3]+c->r[31]; // 801FDB64
  c->r[31]=c->r[31]+0x00000001u; // 801FDB68
  c->r[0]=R8(c->r[9]+0x00000038u); // 801FDB6C
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FDB70
  goto L_801FDBA0; // 801FDB74
L_801FDB78:;
  c->r[12]=R32(c->r[3]+0x00000034u); // 801FDB78
  c->r[31]=0u+0x00000000u; // 801FDB7C
  goto L_801FDB94; // 801FDB80
L_801FDB84:;
  cmps(c,0,(int32_t)c->r[31],512); // 801FDB84
  if (!crb(c,2)) { goto L_801FDB94; } // 801FDB88
  c->r[31]=0u+0x00000000u; // 801FDB8C
  c->r[12]=R32(c->r[12]+0x00000000u); // 801FDB90
L_801FDB94:;
  c->r[9]=c->r[12]+c->r[31]; // 801FDB94
  c->r[31]=c->r[31]+0x00000001u; // 801FDB98
  c->r[11]=R8(c->r[9]+0x00000004u); // 801FDB9C
L_801FDBA0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 801FDBA0
  cmps(c,0,(int32_t)c->r[0],58); // 801FDBA4
  if (!crb(c,2)) { goto L_801FDBC4; } // 801FDBA8
  cmps(c,0,(int32_t)c->r[6],0); // 801FDBAC
  if (crb(c,2)) { goto L_801FDBC4; } // 801FDBB0
  c->r[0]=R32(c->r[6]+0x00000000u); // 801FDBB4
  cmps(c,0,(int32_t)c->r[0],0); // 801FDBB8
  if (!crb(c,0)) { goto L_801FDBC4; } // 801FDBBC
  W32(c->r[6]+0x00000000u,c->r[4]); // 801FDBC0
L_801FDBC4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FDBC4
  if (crb(c,2)) { goto L_801FDC0C; } // 801FDBC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 801FDBCC
  cmps(c,0,(int32_t)c->r[0],10); // 801FDBD0
  if (!crb(c,2)) { goto L_801FDC04; } // 801FDBD4
  c->r[3]=c->r[5]+0xFFFFFFFFu; // 801FDBD8
  cmps(c,0,(int32_t)c->r[7],0); // 801FDBDC
  c->r[5]=c->r[4]-c->r[3]; // 801FDBE0
  c->r[0]=c->r[4]+0x00000001u; // 801FDBE4
  c->r[3]=c->r[3]-c->r[4]; // 801FDBE8
  c->r[3]=~(c->r[5]|c->r[3]); // 801FDBEC
  c->r[3]=sraw(c,c->r[3],31); // 801FDBF0
  c->r[10]=c->r[0]&~c->r[3]; // 801FDBF4
  if (crb(c,2)) { goto L_801FDC04; } // 801FDBF8
  c->r[0]=0u+0x00000002u; // 801FDBFC
  W32(c->r[7]+0x00000000u,c->r[0]); // 801FDC00
L_801FDC04:;
  c->r[3]=c->r[10]|c->r[10]; // 801FDC04
  goto L_801FDC8C; // 801FDC08
L_801FDC0C:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 801FDC0C
  cmps(c,0,(int32_t)c->r[0],13); // 801FDC10
  if (!crb(c,2)) { goto L_801FDC44; } // 801FDC14
  c->r[9]=c->r[5]+0xFFFFFFFFu; // 801FDC18
  cmps(c,0,(int32_t)c->r[7],0); // 801FDC1C
  c->r[10]=c->r[4]-c->r[9]; // 801FDC20
  c->r[0]=c->r[4]+0x00000001u; // 801FDC24
  c->r[9]=c->r[9]-c->r[4]; // 801FDC28
  c->r[30]=0u+0x00000001u; // 801FDC2C
  c->r[9]=~(c->r[10]|c->r[9]); // 801FDC30
  c->r[9]=sraw(c,c->r[9],31); // 801FDC34
  c->r[10]=c->r[0]&~c->r[9]; // 801FDC38
  if (crb(c,2)) { goto L_801FDC44; } // 801FDC3C
  W32(c->r[7]+0x00000000u,c->r[8]); // 801FDC40
L_801FDC44:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 801FDC44
  cmps(c,0,(int32_t)c->r[0],10); // 801FDC48
  if (!crb(c,2)) { goto L_801FDC80; } // 801FDC4C
  c->r[3]=c->r[5]+0xFFFFFFFFu; // 801FDC50
  cmps(c,0,(int32_t)c->r[7],0); // 801FDC54
  c->r[5]=c->r[4]-c->r[3]; // 801FDC58
  c->r[0]=c->r[4]+0x00000001u; // 801FDC5C
  c->r[3]=c->r[3]-c->r[4]; // 801FDC60
  c->r[3]=~(c->r[5]|c->r[3]); // 801FDC64
  c->r[3]=sraw(c,c->r[3],31); // 801FDC68
  c->r[3]=c->r[0]&~c->r[3]; // 801FDC6C
  if (crb(c,2)) { goto L_801FDC8C; } // 801FDC70
  c->r[0]=0u+0x00000001u; // 801FDC74
  W32(c->r[7]+0x00000000u,c->r[0]); // 801FDC78
  goto L_801FDC8C; // 801FDC7C
L_801FDC80:;
  c->r[4]=c->r[4]+0x00000001u; // 801FDC80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FDB54; } // 801FDC84
L_801FDC88:;
  c->r[3]=0u+0xFFFFFFFFu; // 801FDC88
L_801FDC8C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FDC8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FDC90
  c->r[1]=c->r[1]+0x00000010u; // 801FDC94
  return; // 801FDC98
}

// NHTTPi_skipSpaceHdrRecvBuf
void f_801FDC9C(Ctx* __restrict c) {
  trace_call(0x801FDC9Cu);
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801FDC9C
  if (!crb(c,0)) { goto L_801FDD8C; } // 801FDCA0
  cmps(c,0,(int32_t)c->r[4],1024); // 801FDCA4
  if (!crb(c,0)) { goto L_801FDCB8; } // 801FDCA8
  c->r[6]=c->r[4]|c->r[4]; // 801FDCAC
  c->r[7]=0u+0x00000000u; // 801FDCB0
  goto L_801FDD14; // 801FDCB4
L_801FDCB8:;
  c->r[0]=c->r[4]+0xFFFFFC00u; // 801FDCB8
  c->r[7]=R32(c->r[3]+0x00000034u); // 801FDCBC
  c->r[6]=sraw(c,c->r[0],9); cr0(c,c->r[6]); // 801FDCC0
  if (crb(c,2)) { goto L_801FDD0C; } // 801FDCC4
  c->r[0]=rotl(c->r[6],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801FDCC8
  c->ctr=c->r[0]; // 801FDCCC
  if (crb(c,2)) { goto L_801FDD00; } // 801FDCD0
L_801FDCD4:;
  c->r[7]=R32(c->r[7]+0x00000000u); // 801FDCD4
  c->r[7]=R32(c->r[7]+0x00000000u); // 801FDCD8
  c->r[7]=R32(c->r[7]+0x00000000u); // 801FDCDC
  c->r[7]=R32(c->r[7]+0x00000000u); // 801FDCE0
  c->r[7]=R32(c->r[7]+0x00000000u); // 801FDCE4
  c->r[7]=R32(c->r[7]+0x00000000u); // 801FDCE8
  c->r[7]=R32(c->r[7]+0x00000000u); // 801FDCEC
  c->r[7]=R32(c->r[7]+0x00000000u); // 801FDCF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FDCD4; } // 801FDCF4
  c->r[6]=c->r[6]&0x00000007u; cr0(c,c->r[6]); // 801FDCF8
  if (crb(c,2)) { goto L_801FDD0C; } // 801FDCFC
L_801FDD00:;
  c->ctr=c->r[6]; // 801FDD00
L_801FDD04:;
  c->r[7]=R32(c->r[7]+0x00000000u); // 801FDD04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FDD04; } // 801FDD08
L_801FDD0C:;
  c->r[0]=c->r[4]+0xFFFFFC00u; // 801FDD0C
  c->r[6]=rotl(c->r[0],0)&0x000001FFu; // 801FDD10
L_801FDD14:;
  c->r[0]=c->r[5]-c->r[4]; // 801FDD14
  c->ctr=c->r[0]; // 801FDD18
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801FDD1C
  if (!crb(c,0)) { goto L_801FDD8C; } // 801FDD20
L_801FDD24:;
  cmps(c,0,(int32_t)c->r[7],0); // 801FDD24
  if (!crb(c,2)) { goto L_801FDD54; } // 801FDD28
  cmps(c,0,(int32_t)c->r[6],1024); // 801FDD2C
  if (!crb(c,0)) { goto L_801FDD48; } // 801FDD30
  c->r[5]=c->r[3]+c->r[6]; // 801FDD34
  c->r[6]=c->r[6]+0x00000001u; // 801FDD38
  c->r[0]=R8(c->r[5]+0x00000038u); // 801FDD3C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FDD40
  goto L_801FDD70; // 801FDD44
L_801FDD48:;
  c->r[7]=R32(c->r[3]+0x00000034u); // 801FDD48
  c->r[6]=0u+0x00000000u; // 801FDD4C
  goto L_801FDD64; // 801FDD50
L_801FDD54:;
  cmps(c,0,(int32_t)c->r[6],512); // 801FDD54
  if (!crb(c,2)) { goto L_801FDD64; } // 801FDD58
  c->r[6]=0u+0x00000000u; // 801FDD5C
  c->r[7]=R32(c->r[7]+0x00000000u); // 801FDD60
L_801FDD64:;
  c->r[5]=c->r[7]+c->r[6]; // 801FDD64
  c->r[6]=c->r[6]+0x00000001u; // 801FDD68
  c->r[0]=R8(c->r[5]+0x00000004u); // 801FDD6C
L_801FDD70:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FDD70
  cmps(c,0,(int32_t)c->r[0],32); // 801FDD74
  if (crb(c,2)) { goto L_801FDD84; } // 801FDD78
  c->r[3]=c->r[4]|c->r[4]; // 801FDD7C
  return; // 801FDD80
L_801FDD84:;
  c->r[4]=c->r[4]+0x00000001u; // 801FDD84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FDD24; } // 801FDD88
L_801FDD8C:;
  c->r[3]=0u+0xFFFFFFFFu; // 801FDD8C
  return; // 801FDD90
}

// NHTTPi_compareTokenN_HdrRecvBuf
void f_801FDD94(Ctx* __restrict c) {
  trace_call(0x801FDD94u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FDD94
  c->r[0]=c->lr; // 801FDD98
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FDD9C
  c->r[11]=c->r[1]+0x00000030u; // 801FDDA0
  c->lr=0x801FDDA8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FDDA4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801FDDA8
  if (!crb(c,0)) { goto L_801FDF68; } // 801FDDAC
  cmps(c,0,(int32_t)c->r[4],1024); // 801FDDB0
  if (!crb(c,0)) { goto L_801FDDC4; } // 801FDDB4
  c->r[9]=c->r[4]|c->r[4]; // 801FDDB8
  c->r[8]=0u+0x00000000u; // 801FDDBC
  goto L_801FDE20; // 801FDDC0
L_801FDDC4:;
  c->r[0]=c->r[4]+0xFFFFFC00u; // 801FDDC4
  c->r[8]=R32(c->r[3]+0x00000034u); // 801FDDC8
  c->r[9]=sraw(c,c->r[0],9); cr0(c,c->r[9]); // 801FDDCC
  if (crb(c,2)) { goto L_801FDE18; } // 801FDDD0
  c->r[0]=rotl(c->r[9],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801FDDD4
  c->ctr=c->r[0]; // 801FDDD8
  if (crb(c,2)) { goto L_801FDE0C; } // 801FDDDC
L_801FDDE0:;
  c->r[8]=R32(c->r[8]+0x00000000u); // 801FDDE0
  c->r[8]=R32(c->r[8]+0x00000000u); // 801FDDE4
  c->r[8]=R32(c->r[8]+0x00000000u); // 801FDDE8
  c->r[8]=R32(c->r[8]+0x00000000u); // 801FDDEC
  c->r[8]=R32(c->r[8]+0x00000000u); // 801FDDF0
  c->r[8]=R32(c->r[8]+0x00000000u); // 801FDDF4
  c->r[8]=R32(c->r[8]+0x00000000u); // 801FDDF8
  c->r[8]=R32(c->r[8]+0x00000000u); // 801FDDFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FDDE0; } // 801FDE00
  c->r[9]=c->r[9]&0x00000007u; cr0(c,c->r[9]); // 801FDE04
  if (crb(c,2)) { goto L_801FDE18; } // 801FDE08
L_801FDE0C:;
  c->ctr=c->r[9]; // 801FDE0C
L_801FDE10:;
  c->r[8]=R32(c->r[8]+0x00000000u); // 801FDE10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FDE10; } // 801FDE14
L_801FDE18:;
  c->r[0]=c->r[4]+0xFFFFFC00u; // 801FDE18
  c->r[9]=rotl(c->r[0],0)&0x000001FFu; // 801FDE1C
L_801FDE20:;
  cmps(c,0,(int32_t)c->r[8],0); // 801FDE20
  if (!crb(c,2)) { goto L_801FDE50; } // 801FDE24
  cmps(c,0,(int32_t)c->r[9],1024); // 801FDE28
  if (!crb(c,0)) { goto L_801FDE44; } // 801FDE2C
  c->r[10]=c->r[3]+c->r[9]; // 801FDE30
  c->r[9]=c->r[9]+0x00000001u; // 801FDE34
  c->r[0]=R8(c->r[10]+0x00000038u); // 801FDE38
  c->r[25]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FDE3C
  goto L_801FDE6C; // 801FDE40
L_801FDE44:;
  c->r[8]=R32(c->r[3]+0x00000034u); // 801FDE44
  c->r[9]=0u+0x00000000u; // 801FDE48
  goto L_801FDE60; // 801FDE4C
L_801FDE50:;
  cmps(c,0,(int32_t)c->r[9],512); // 801FDE50
  if (!crb(c,2)) { goto L_801FDE60; } // 801FDE54
  c->r[9]=0u+0x00000000u; // 801FDE58
  c->r[8]=R32(c->r[8]+0x00000000u); // 801FDE5C
L_801FDE60:;
  c->r[10]=c->r[8]+c->r[9]; // 801FDE60
  c->r[9]=c->r[9]+0x00000001u; // 801FDE64
  c->r[25]=R8(c->r[10]+0x00000004u); // 801FDE68
L_801FDE6C:;
  c->r[28]=0u+0x00000041u; // 801FDE6C
  c->r[31]=0u+0x0000005Au; // 801FDE70
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801FDE74
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801FDE78
  c->r[29]=0u+0x00000000u; // 801FDE7C
  goto L_801FDF00; // 801FDE80
L_801FDE84:;
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[5]); // 801FDE84
  if (crb(c,2)) { goto L_801FDEA4; } // 801FDE88
  cmps(c,0,(int32_t)c->r[5],32); // 801FDE8C
  if (crb(c,2)) { goto L_801FDEA4; } // 801FDE90
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[7]); // 801FDE94
  if (crb(c,2)) { goto L_801FDEA4; } // 801FDE98
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801FDE9C
  if (!crb(c,2)) { goto L_801FDEAC; } // 801FDEA0
L_801FDEA4:;
  c->r[3]=0u+0x00000000u; // 801FDEA4
  goto L_801FDF6C; // 801FDEA8
L_801FDEAC:;
  cmps(c,0,(int32_t)c->r[8],0); // 801FDEAC
  if (!crb(c,2)) { goto L_801FDEDC; } // 801FDEB0
  cmps(c,0,(int32_t)c->r[9],1024); // 801FDEB4
  if (!crb(c,0)) { goto L_801FDED0; } // 801FDEB8
  c->r[5]=c->r[3]+c->r[9]; // 801FDEBC
  c->r[9]=c->r[9]+0x00000001u; // 801FDEC0
  c->r[5]=R8(c->r[5]+0x00000038u); // 801FDEC4
  c->r[25]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801FDEC8
  goto L_801FDEF8; // 801FDECC
L_801FDED0:;
  c->r[8]=R32(c->r[3]+0x00000034u); // 801FDED0
  c->r[9]=0u+0x00000000u; // 801FDED4
  goto L_801FDEEC; // 801FDED8
L_801FDEDC:;
  cmps(c,0,(int32_t)c->r[9],512); // 801FDEDC
  if (!crb(c,2)) { goto L_801FDEEC; } // 801FDEE0
  c->r[9]=0u+0x00000000u; // 801FDEE4
  c->r[8]=R32(c->r[8]+0x00000000u); // 801FDEE8
L_801FDEEC:;
  c->r[5]=c->r[8]+c->r[9]; // 801FDEEC
  c->r[9]=c->r[9]+0x00000001u; // 801FDEF0
  c->r[25]=R8(c->r[5]+0x00000004u); // 801FDEF4
L_801FDEF8:;
  c->r[4]=c->r[4]+0x00000001u; // 801FDEF8
  c->r[6]=c->r[6]+0x00000001u; // 801FDEFC
L_801FDF00:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 801FDF00
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801FDF04
  c->r[12]=sraw(c,c->r[30],31); // 801FDF08
  c->r[10]=addc(c,~c->r[28],c->r[30],1); // 801FDF0C
  c->r[11]=rotl(c->r[30],1)&0x00000001u; // 801FDF10
  c->r[27]=addc(c,c->r[12],c->r[29],c->xer_ca); // 801FDF14
  c->r[26]=c->r[30]+0x00000020u; // 801FDF18
  c->r[12]=sraw(c,c->r[31],31); // 801FDF1C
  c->r[10]=addc(c,~c->r[30],c->r[31],1); // 801FDF20
  c->r[10]=addc(c,c->r[12],c->r[11],c->xer_ca); // 801FDF24
  c->r[10]=c->r[27]&c->r[10]; cr0(c,c->r[10]); // 801FDF28
  if (!crb(c,2)) { goto L_801FDF34; } // 801FDF2C
  c->r[26]=c->r[30]|c->r[30]; // 801FDF30
L_801FDF34:;
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[25]; // 801FDF34
  c->r[12]=sraw(c,c->r[27],31); // 801FDF38
  c->r[10]=addc(c,~c->r[28],c->r[27],1); // 801FDF3C
  c->r[11]=rotl(c->r[27],1)&0x00000001u; // 801FDF40
  c->r[30]=addc(c,c->r[12],c->r[29],c->xer_ca); // 801FDF44
  c->r[12]=sraw(c,c->r[31],31); // 801FDF48
  c->r[10]=addc(c,~c->r[27],c->r[31],1); // 801FDF4C
  c->r[10]=addc(c,c->r[12],c->r[11],c->xer_ca); // 801FDF50
  c->r[10]=c->r[30]&c->r[10]; cr0(c,c->r[10]); // 801FDF54
  if (crb(c,2)) { goto L_801FDF60; } // 801FDF58
  c->r[27]=c->r[27]+0x00000020u; // 801FDF5C
L_801FDF60:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[26]); // 801FDF60
  if (crb(c,2)) { IRQCHK(c); goto L_801FDE84; } // 801FDF64
L_801FDF68:;
  c->r[3]=0u+0xFFFFFFFFu; // 801FDF68
L_801FDF6C:;
  c->r[11]=c->r[1]+0x00000030u; // 801FDF6C
  c->lr=0x801FDF74u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FDF70
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FDF74
  c->lr=c->r[0]; // 801FDF78
  c->r[1]=c->r[1]+0x00000030u; // 801FDF7C
  return; // 801FDF80
}

// NHTTPi_loadFromHdrRecvBuf
void f_801FDF84(Ctx* __restrict c) {
  trace_call(0x801FDF84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FDF84
  c->r[0]=c->lr; // 801FDF88
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FDF8C
  c->r[11]=c->r[1]+0x00000020u; // 801FDF90
  c->lr=0x801FDF98u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FDF94
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FDF98
  c->r[7]=c->r[5]+c->r[6]; // 801FDF9C
  c->r[30]=c->r[3]|c->r[3]; // 801FDFA0
  c->r[27]=c->r[4]|c->r[4]; // 801FDFA4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801FDFA8
  c->r[28]=c->r[5]|c->r[5]; // 801FDFAC
  c->r[29]=c->r[6]|c->r[6]; // 801FDFB0
  if (crb(c,1)) { goto L_801FE0AC; } // 801FDFB4
  cmps(c,0,(int32_t)c->r[6],0); // 801FDFB8
  if (crb(c,2)) { goto L_801FE0A4; } // 801FDFBC
  cmps(c,0,(int32_t)c->r[5],1024); // 801FDFC0
  if (!crb(c,0)) { goto L_801FDFFC; } // 801FDFC4
  c->r[0]=addc(c,~c->r[5],0x00000400u,1); // 801FDFC8
  c->r[31]=c->r[29]|c->r[29]; // 801FDFCC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801FDFD0
  if (!crb(c,1)) { goto L_801FDFDC; } // 801FDFD4
  c->r[31]=c->r[0]|c->r[0]; // 801FDFD8
L_801FDFDC:;
  c->r[4]=c->r[30]+c->r[5]; // 801FDFDC
  c->r[3]=c->r[27]|c->r[27]; // 801FDFE0
  c->r[5]=c->r[31]|c->r[31]; // 801FDFE4
  c->r[4]=c->r[4]+0x00000038u; // 801FDFE8
  c->lr=0x801FDFF0u; f_801FF708(c); // 801FDFEC
  c->r[28]=c->r[28]+c->r[31]; // 801FDFF0
  c->r[29]=c->r[29]-c->r[31]; // 801FDFF4
  c->r[27]=c->r[27]+c->r[31]; // 801FDFF8
L_801FDFFC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801FDFFC
  if (crb(c,2)) { goto L_801FE0A4; } // 801FE000
  c->r[28]=c->r[28]+0xFFFFFC00u; // 801FE004
  c->r[30]=R32(c->r[30]+0x00000034u); // 801FE008
  c->r[3]=sraw(c,c->r[28],9); cr0(c,c->r[3]); // 801FE00C
  c->r[28]=rotl(c->r[28],0)&0x000001FFu; // 801FE010
  if (crb(c,2)) { goto L_801FE09C; } // 801FE014
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801FE018
  c->ctr=c->r[0]; // 801FE01C
  if (crb(c,2)) { goto L_801FE050; } // 801FE020
L_801FE024:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 801FE024
  c->r[30]=R32(c->r[30]+0x00000000u); // 801FE028
  c->r[30]=R32(c->r[30]+0x00000000u); // 801FE02C
  c->r[30]=R32(c->r[30]+0x00000000u); // 801FE030
  c->r[30]=R32(c->r[30]+0x00000000u); // 801FE034
  c->r[30]=R32(c->r[30]+0x00000000u); // 801FE038
  c->r[30]=R32(c->r[30]+0x00000000u); // 801FE03C
  c->r[30]=R32(c->r[30]+0x00000000u); // 801FE040
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FE024; } // 801FE044
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 801FE048
  if (crb(c,2)) { goto L_801FE09C; } // 801FE04C
L_801FE050:;
  c->ctr=c->r[3]; // 801FE050
L_801FE054:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 801FE054
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FE054; } // 801FE058
  goto L_801FE09C; // 801FE05C
L_801FE060:;
  c->r[0]=addc(c,~c->r[28],0x00000200u,1); // 801FE060
  c->r[31]=c->r[29]|c->r[29]; // 801FE064
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801FE068
  if (!crb(c,1)) { goto L_801FE074; } // 801FE06C
  c->r[31]=c->r[0]|c->r[0]; // 801FE070
L_801FE074:;
  c->r[4]=c->r[30]+c->r[28]; // 801FE074
  c->r[3]=c->r[27]|c->r[27]; // 801FE078
  c->r[5]=c->r[31]|c->r[31]; // 801FE07C
  c->r[4]=c->r[4]+0x00000004u; // 801FE080
  c->lr=0x801FE088u; f_801FF708(c); // 801FE084
  c->r[28]=c->r[28]+c->r[31]; // 801FE088
  c->r[30]=R32(c->r[30]+0x00000000u); // 801FE08C
  c->r[28]=rotl(c->r[28],0)&0x000001FFu; // 801FE090
  c->r[29]=c->r[29]-c->r[31]; // 801FE094
  c->r[27]=c->r[27]+c->r[31]; // 801FE098
L_801FE09C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801FE09C
  if (!crb(c,2)) { IRQCHK(c); goto L_801FE060; } // 801FE0A0
L_801FE0A4:;
  c->r[3]=0u+0x00000001u; // 801FE0A4
  goto L_801FE0B0; // 801FE0A8
L_801FE0AC:;
  c->r[3]=0u+0x00000000u; // 801FE0AC
L_801FE0B0:;
  c->r[11]=c->r[1]+0x00000020u; // 801FE0B0
  c->lr=0x801FE0B8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FE0B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FE0B8
  c->lr=c->r[0]; // 801FE0BC
  c->r[1]=c->r[1]+0x00000020u; // 801FE0C0
  return; // 801FE0C4
}

// NHTTPi_isRecvBufFull
void f_801FE0C8(Ctx* __restrict c) {
  trace_call(0x801FE0C8u);
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 801FE0C8
  c->r[0]=c->r[4]-c->r[3]; // 801FE0CC
  c->r[3]=c->r[4]|~c->r[3]; // 801FE0D0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801FE0D4
  c->r[0]=c->r[3]-c->r[0]; // 801FE0D8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801FE0DC
  return; // 801FE0E0
}

// NHTTPi_RecvBuf
void f_801FE0E4(Ctx* __restrict c) {
  trace_call(0x801FE0E4u);
  c->r[9]=R32(c->r[4]+0x0000002Cu); // 801FE0E4
  c->r[8]=c->r[7]|c->r[7]; // 801FE0E8
  c->r[10]=c->r[6]|c->r[6]; // 801FE0EC
  c->r[7]=R32(c->r[9]+0x00000028u); // 801FE0F0
  c->r[0]=R32(c->r[9]+0x0000001Cu); // 801FE0F4
  c->r[6]=c->r[7]+c->r[6]; // 801FE0F8
  c->r[7]=c->r[0]-c->r[10]; // 801FE0FC
  f_801FF320(c); return; // 801FE100
}

// NHTTPi_RecvBufN
void f_801FE104(Ctx* __restrict c) {
  trace_call(0x801FE104u);
  c->r[10]=R32(c->r[4]+0x0000002Cu); // 801FE104
  c->r[0]=R32(c->r[10]+0x0000001Cu); // 801FE108
  cmpu(c,0,c->r[0],c->r[6]); // 801FE10C
  if (crb(c,1)) { goto L_801FE11C; } // 801FE110
  c->r[3]=0u+0xFFFFFC15u; // 801FE114
  return; // 801FE118
L_801FE11C:;
  c->r[9]=R32(c->r[10]+0x0000001Cu); // 801FE11C
  c->r[0]=R32(c->r[10]+0x00000028u); // 801FE120
  c->r[9]=c->r[9]-c->r[6]; // 801FE124
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[9]); // 801FE128
  c->r[6]=c->r[0]+c->r[6]; // 801FE12C
  if (!crb(c,1)) { goto L_801FE138; } // 801FE130
  c->r[7]=c->r[9]|c->r[9]; // 801FE134
L_801FE138:;
  f_801FF320(c); return; // 801FE138
  return; // 801FE13C
}

// NHTTPi_InitRequestInfo
void f_801FE140(Ctx* __restrict c) {
  trace_call(0x801FE140u);
  c->r[0]=0u+0x00000000u; // 801FE140
  W32(c->r[3]+0x00000000u,c->r[0]); // 801FE144
  return; // 801FE148
}

// NHTTP_CreateRequest
void f_801FE14C(Ctx* __restrict c) {
  trace_call(0x801FE14Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FE14C
  c->r[0]=c->lr; // 801FE150
  W32(c->r[1]+0x00000144u,c->r[0]); // 801FE154
  c->r[11]=c->r[1]+0x00000140u; // 801FE158
  c->lr=0x801FE160u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FE15C
  cmps(c,0,(int32_t)c->r[5],3); // 801FE160
  c->r[21]=c->r[3]|c->r[3]; // 801FE164
  c->r[28]=c->r[4]|c->r[4]; // 801FE168
  c->r[22]=c->r[5]|c->r[5]; // 801FE16C
  c->r[27]=c->r[6]|c->r[6]; // 801FE170
  c->r[26]=c->r[7]|c->r[7]; // 801FE174
  c->r[23]=c->r[8]|c->r[8]; // 801FE178
  c->r[25]=c->r[9]|c->r[9]; // 801FE17C
  c->r[20]=c->r[10]|c->r[10]; // 801FE180
  c->r[24]=0u+0x00000000u; // 801FE184
  if (!crb(c,0)) { goto L_801FE194; } // 801FE188
  cmps(c,0,(int32_t)c->r[5],0); // 801FE18C
  if (!crb(c,0)) { goto L_801FE1A4; } // 801FE190
L_801FE194:;
  c->r[3]=c->r[21]|c->r[21]; // 801FE194
  c->r[4]=0u+0x0000000Bu; // 801FE198
  c->lr=0x801FE1A0u; f_801FD068(c); // 801FE19C
  goto L_801FE6AC; // 801FE1A0
L_801FE1A4:;
  c->r[3]=0u+0x00000254u; // 801FE1A4
  c->r[4]=0u+0x00000004u; // 801FE1A8
  c->lr=0x801FE1B0u; f_801FCFC8(c); // 801FE1AC
  cmps(c,0,(int32_t)c->r[3],0); // 801FE1B0
  c->r[24]=c->r[3]|c->r[3]; // 801FE1B4
  if (!crb(c,2)) { goto L_801FE1CC; } // 801FE1B8
  c->r[3]=c->r[21]|c->r[21]; // 801FE1BC
  c->r[4]=0u+0x00000001u; // 801FE1C0
  c->lr=0x801FE1C8u; f_801FD068(c); // 801FE1C4
  goto L_801FE6AC; // 801FE1C8
L_801FE1CC:;
  c->r[4]=0u+0x00000254u; // 801FE1CC
  c->lr=0x801FE1D4u; f_801FF714(c); // 801FE1D0
  c->r[3]=0u+0x0000043Cu; // 801FE1D4
  c->r[4]=0u+0x00000004u; // 801FE1D8
  c->lr=0x801FE1E0u; f_801FCFC8(c); // 801FE1DC
  cmps(c,0,(int32_t)c->r[3],0); // 801FE1E0
  W32(c->r[24]+0x0000002Cu,c->r[3]); // 801FE1E4
  if (!crb(c,2)) { goto L_801FE1FC; } // 801FE1E8
  c->r[3]=c->r[21]|c->r[21]; // 801FE1EC
  c->r[4]=0u+0x00000001u; // 801FE1F0
  c->lr=0x801FE1F8u; f_801FD068(c); // 801FE1F4
  goto L_801FE6AC; // 801FE1F8
L_801FE1FC:;
  c->r[4]=0u+0x0000043Cu; // 801FE1FC
  c->lr=0x801FE204u; f_801FF714(c); // 801FE200
  c->r[4]=R32(c->r[24]+0x0000002Cu); // 801FE204
  c->r[3]=c->r[28]|c->r[28]; // 801FE208
  W32(c->r[4]+0x00000028u,c->r[27]); // 801FE20C
  c->r[4]=R32(c->r[24]+0x0000002Cu); // 801FE210
  W32(c->r[4]+0x0000001Cu,c->r[26]); // 801FE214
  c->r[4]=R32(c->r[24]+0x0000002Cu); // 801FE218
  W32(c->r[4]+0x0000002Cu,c->r[25]); // 801FE21C
  c->r[4]=R32(c->r[24]+0x0000002Cu); // 801FE220
  W32(c->r[4]+0x00000030u,c->r[20]); // 801FE224
  c->lr=0x801FE22Cu; f_801FF70C(c); // 801FE228
  cmps(c,0,(int32_t)c->r[3],7); // 801FE22C
  c->r[20]=c->r[3]|c->r[3]; // 801FE230
  if (crb(c,1)) { goto L_801FE248; } // 801FE234
  c->r[3]=c->r[21]|c->r[21]; // 801FE238
  c->r[4]=0u+0x00000004u; // 801FE23C
  c->lr=0x801FE244u; f_801FD068(c); // 801FE240
  goto L_801FE6AC; // 801FE244
L_801FE248:;
  c->r[4]=c->r[20]|c->r[20]; // 801FE248
  c->r[3]=c->r[1]+0x00000008u; // 801FE24C
  c->lr=0x801FE254u; f_801FF714(c); // 801FE250
  c->r[4]=c->r[28]|c->r[28]; // 801FE254
  c->r[5]=c->r[20]|c->r[20]; // 801FE258
  c->r[3]=c->r[1]+0x00000008u; // 801FE25C
  c->lr=0x801FE264u; f_801FF708(c); // 801FE260
  c->r[0]=0u+0x00000050u; // 801FE264
  c->r[3]=c->r[1]+0x00000008u; // 801FE268
  W32(c->r[24]+0x00000020u,c->r[0]); // 801FE26C
  c->r[29]=0u+0x00000007u; // 801FE270
  c->r[4]=c->r[13]+0xFFFF94A8u; // 801FE274
  c->r[5]=0u+0x00000007u; // 801FE278
  c->lr=0x801FE280u; f_801FF720(c); // 801FE27C
  cmps(c,0,(int32_t)c->r[3],0); // 801FE280
  if (crb(c,2)) { goto L_801FE2C8; } // 801FE284
  c->r[4]=0u+0x802F0000u; // 801FE288
  c->r[3]=c->r[1]+0x00000008u; // 801FE28C
  c->r[4]=c->r[4]+0xFFFF9AC8u; // 801FE290
  c->r[5]=0u+0x00000008u; // 801FE294
  c->lr=0x801FE29Cu; f_801FF720(c); // 801FE298
  cmps(c,0,(int32_t)c->r[3],0); // 801FE29C
  if (crb(c,2)) { goto L_801FE2B4; } // 801FE2A0
  c->r[3]=c->r[21]|c->r[21]; // 801FE2A4
  c->r[4]=0u+0x00000004u; // 801FE2A8
  c->lr=0x801FE2B0u; f_801FD068(c); // 801FE2AC
  goto L_801FE6AC; // 801FE2B0
L_801FE2B4:;
  c->r[3]=0u+0x00000001u; // 801FE2B4
  c->r[0]=0u+0x000001BBu; // 801FE2B8
  W32(c->r[24]+0x00000008u,c->r[3]); // 801FE2BC
  c->r[29]=0u+0x00000008u; // 801FE2C0
  W32(c->r[24]+0x00000020u,c->r[0]); // 801FE2C4
L_801FE2C8:;
  c->r[28]=c->r[20]-c->r[29]; cr0(c,c->r[28]); // 801FE2C8
  c->r[25]=c->r[1]+0x00000008u; // 801FE2CC
  c->r[25]=c->r[25]+c->r[29]; // 801FE2D0
  if (crb(c,1)) { goto L_801FE2E8; } // 801FE2D4
  c->r[3]=c->r[21]|c->r[21]; // 801FE2D8
  c->r[4]=0u+0x00000004u; // 801FE2DC
  c->lr=0x801FE2E4u; f_801FD068(c); // 801FE2E0
  goto L_801FE6AC; // 801FE2E4
L_801FE2E8:;
  c->r[20]=c->r[25]|c->r[25]; // 801FE2E8
  c->r[26]=0u+0x00000000u; // 801FE2EC
  c->r[27]=0u+0x00000000u; // 801FE2F0
  c->r[30]=0u+0x00000000u; // 801FE2F4
  goto L_801FE36C; // 801FE2F8
L_801FE2FC:;
  cmps(c,0,(int32_t)c->r[30],2); // 801FE2FC
  if (!crb(c,2)) { goto L_801FE30C; } // 801FE300
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801FE304
  goto L_801FE364; // 801FE308
L_801FE30C:;
  cmps(c,0,(int32_t)c->r[30],1); // 801FE30C
  if (!crb(c,2)) { goto L_801FE350; } // 801FE310
  c->r[3]=c->r[26]+c->r[25]; // 801FE314
  c->r[4]=0u+0x00000002u; // 801FE318
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801FE31C
  c->lr=0x801FE324u; f_801FF970(c); // 801FE320
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801FE324
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801FE328
  if (!crb(c,0)) { goto L_801FE340; } // 801FE32C
  c->r[3]=c->r[21]|c->r[21]; // 801FE330
  c->r[4]=0u+0x00000004u; // 801FE334
  c->lr=0x801FE33Cu; f_801FD068(c); // 801FE338
  goto L_801FE6AC; // 801FE33C
L_801FE340:;
  cmps(c,0,(int32_t)c->r[0],47); // 801FE340
  if (!crb(c,2)) { goto L_801FE364; } // 801FE344
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 801FE348
  goto L_801FE380; // 801FE34C
L_801FE350:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801FE350
  cmps(c,0,(int32_t)c->r[0],37); // 801FE354
  if (!crb(c,2)) { goto L_801FE364; } // 801FE358
  c->r[30]=0u+0x00000002u; // 801FE35C
  c->r[27]=c->r[27]+0x00000001u; // 801FE360
L_801FE364:;
  c->r[26]=c->r[26]+0x00000001u; // 801FE364
  c->r[20]=c->r[20]+0x00000001u; // 801FE368
L_801FE36C:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[28]); // 801FE36C
  if (!crb(c,0)) { goto L_801FE380; } // 801FE370
  c->r[3]=R8(c->r[20]+0x00000000u); // 801FE374
  cmps(c,0,(int32_t)c->r[3],47); // 801FE378
  if (!crb(c,2)) { IRQCHK(c); goto L_801FE2FC; } // 801FE37C
L_801FE380:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FE380
  if (crb(c,2)) { goto L_801FE398; } // 801FE384
  c->r[3]=c->r[21]|c->r[21]; // 801FE388
  c->r[4]=0u+0x00000004u; // 801FE38C
  c->lr=0x801FE394u; f_801FD068(c); // 801FE390
  goto L_801FE6AC; // 801FE394
L_801FE398:;
  c->r[3]=rotl(c->r[27],1)&0xFFFFFFFEu; // 801FE398
  c->r[0]=c->r[29]+c->r[28]; // 801FE39C
  c->r[3]=c->r[0]-c->r[3]; // 801FE3A0
  c->r[4]=0u+0x00000004u; // 801FE3A4
  c->r[20]=c->r[3]+0x00000001u; // 801FE3A8
  c->r[3]=c->r[20]|c->r[20]; // 801FE3AC
  c->lr=0x801FE3B4u; f_801FCFC8(c); // 801FE3B0
  cmps(c,0,(int32_t)c->r[3],0); // 801FE3B4
  W32(c->r[24]+0x00000024u,c->r[3]); // 801FE3B8
  if (!crb(c,2)) { goto L_801FE3D0; } // 801FE3BC
  c->r[3]=c->r[21]|c->r[21]; // 801FE3C0
  c->r[4]=0u+0x00000001u; // 801FE3C4
  c->lr=0x801FE3CCu; f_801FD068(c); // 801FE3C8
  goto L_801FE6AC; // 801FE3CC
L_801FE3D0:;
  c->r[4]=c->r[20]|c->r[20]; // 801FE3D0
  c->lr=0x801FE3D8u; f_801FF714(c); // 801FE3D4
  c->r[3]=R32(c->r[24]+0x00000024u); // 801FE3D8
  c->r[5]=c->r[29]|c->r[29]; // 801FE3DC
  c->r[4]=c->r[1]+0x00000008u; // 801FE3E0
  c->lr=0x801FE3E8u; f_801FF708(c); // 801FE3E4
  c->r[20]=c->r[25]|c->r[25]; // 801FE3E8
  c->r[31]=0u+0x00000000u; // 801FE3EC
  c->r[27]=0u+0x00000000u; // 801FE3F0
  c->r[30]=0u+0x00000000u; // 801FE3F4
  c->r[26]=0u+0x00000000u; // 801FE3F8
  goto L_801FE4A0; // 801FE3FC
L_801FE400:;
  cmps(c,0,(int32_t)c->r[30],2); // 801FE400
  if (!crb(c,2)) { goto L_801FE410; } // 801FE404
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801FE408
  goto L_801FE498; // 801FE40C
L_801FE410:;
  cmps(c,0,(int32_t)c->r[30],1); // 801FE410
  if (!crb(c,2)) { goto L_801FE450; } // 801FE414
  c->r[3]=c->r[31]+c->r[25]; // 801FE418
  c->r[4]=0u+0x00000002u; // 801FE41C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801FE420
  c->lr=0x801FE428u; f_801FF970(c); // 801FE424
  c->r[4]=R32(c->r[24]+0x00000024u); // 801FE428
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801FE42C
  c->r[0]=c->r[27]+c->r[29]; // 801FE430
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801FE434
  c->r[4]=c->r[4]+c->r[0]; // 801FE438
  cmps(c,0,(int32_t)c->r[5],47); // 801FE43C
  W8(c->r[4]+0xFFFFFFFFu,c->r[3]); // 801FE440
  if (!crb(c,2)) { goto L_801FE498; } // 801FE444
  c->r[26]=0u+0x00000001u; // 801FE448
  goto L_801FE498; // 801FE44C
L_801FE450:;
  c->r[5]=R8(c->r[20]+0x00000000u); // 801FE450
  cmps(c,0,(int32_t)c->r[5],47); // 801FE454
  if (!crb(c,2)) { goto L_801FE460; } // 801FE458
  c->r[26]=0u+0x00000001u; // 801FE45C
L_801FE460:;
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801FE460
  c->r[4]=cntlz(c->r[26]); // 801FE464
  c->r[0]=c->r[3]+0xFFFFFFDBu; // 801FE468
  c->r[0]=cntlz(c->r[0]); // 801FE46C
  c->r[3]=rotl(c->r[4],27)&0x07FFFFFFu; // 801FE470
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801FE474
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801FE478
  if (crb(c,2)) { goto L_801FE488; } // 801FE47C
  c->r[30]=0u+0x00000002u; // 801FE480
  goto L_801FE494; // 801FE484
L_801FE488:;
  c->r[3]=R32(c->r[24]+0x00000024u); // 801FE488
  c->r[0]=c->r[27]+c->r[29]; // 801FE48C
  W8(c->r[3]+c->r[0],c->r[5]); // 801FE490
L_801FE494:;
  c->r[27]=c->r[27]+0x00000001u; // 801FE494
L_801FE498:;
  c->r[31]=c->r[31]+0x00000001u; // 801FE498
  c->r[20]=c->r[20]+0x00000001u; // 801FE49C
L_801FE4A0:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[28]); // 801FE4A0
  if (crb(c,0)) { IRQCHK(c); goto L_801FE400; } // 801FE4A4
  c->r[3]=R32(c->r[24]+0x00000024u); // 801FE4A8
  c->r[0]=c->r[29]+c->r[27]; // 801FE4AC
  c->r[4]=0u+0x00000000u; // 801FE4B0
  c->r[5]=0u+0x00000000u; // 801FE4B4
  W8(c->r[3]+c->r[0],c->r[4]); // 801FE4B8
  c->r[0]=R32(c->r[24]+0x00000024u); // 801FE4BC
  c->r[4]=c->r[0]+c->r[29]; // 801FE4C0
  c->r[3]=c->r[4]|c->r[4]; // 801FE4C4
  c->ctr=c->r[27]; // 801FE4C8
  cmps(c,0,(int32_t)c->r[27],0); // 801FE4CC
  if (!crb(c,1)) { goto L_801FE504; } // 801FE4D0
L_801FE4D4:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801FE4D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FE4D8
  cmps(c,0,(int32_t)c->r[0],47); // 801FE4DC
  if (crb(c,2)) { goto L_801FE4EC; } // 801FE4E0
  cmps(c,0,(int32_t)c->r[0],58); // 801FE4E4
  if (!crb(c,2)) { goto L_801FE4F8; } // 801FE4E8
L_801FE4EC:;
  c->r[0]=c->r[5]+c->r[29]; // 801FE4EC
  W32(c->r[24]+0x00000014u,c->r[0]); // 801FE4F0
  goto L_801FE504; // 801FE4F4
L_801FE4F8:;
  c->r[5]=c->r[5]+0x00000001u; // 801FE4F8
  c->r[3]=c->r[3]+0x00000001u; // 801FE4FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FE4D4; } // 801FE500
L_801FE504:;
  cmps(c,1,(int32_t)c->r[5],(int32_t)c->r[27]); // 801FE504
  if (!crb(c,6)) { goto L_801FE51C; } // 801FE508
  c->r[0]=c->r[5]+c->r[29]; // 801FE50C
  W32(c->r[24]+0x00000014u,c->r[0]); // 801FE510
  W32(c->r[24]+0x00000018u,c->r[0]); // 801FE514
  goto L_801FE5DC; // 801FE518
L_801FE51C:;
  c->r[0]=R8(c->r[4]+c->r[5]); // 801FE51C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FE520
  cmps(c,0,(int32_t)c->r[0],47); // 801FE524
  if (!crb(c,2)) { goto L_801FE538; } // 801FE528
  c->r[0]=R32(c->r[24]+0x00000014u); // 801FE52C
  W32(c->r[24]+0x00000018u,c->r[0]); // 801FE530
  goto L_801FE5DC; // 801FE534
L_801FE538:;
  cmps(c,0,(int32_t)c->r[0],58); // 801FE538
  if (!crb(c,2)) { goto L_801FE5DC; } // 801FE53C
  c->r[0]=c->r[27]-c->r[5]; // 801FE540
  c->r[3]=c->r[4]+c->r[5]; // 801FE544
  c->ctr=c->r[0]; // 801FE548
  if (!crb(c,4)) { goto L_801FE574; } // 801FE54C
L_801FE550:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801FE550
  cmps(c,0,(int32_t)c->r[0],47); // 801FE554
  if (!crb(c,2)) { goto L_801FE568; } // 801FE558
  c->r[0]=c->r[5]+c->r[29]; // 801FE55C
  W32(c->r[24]+0x00000018u,c->r[0]); // 801FE560
  goto L_801FE574; // 801FE564
L_801FE568:;
  c->r[5]=c->r[5]+0x00000001u; // 801FE568
  c->r[3]=c->r[3]+0x00000001u; // 801FE56C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FE550; } // 801FE570
L_801FE574:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[27]); // 801FE574
  if (!crb(c,2)) { goto L_801FE588; } // 801FE578
  c->r[0]=c->r[5]+c->r[29]; // 801FE57C
  W32(c->r[24]+0x00000018u,c->r[0]); // 801FE580
  goto L_801FE5DC; // 801FE584
L_801FE588:;
  c->r[4]=R32(c->r[24]+0x00000014u); // 801FE588
  c->r[3]=R32(c->r[24]+0x00000024u); // 801FE58C
  c->r[4]=c->r[4]+0x00000001u; // 801FE590
  c->r[0]=R32(c->r[24]+0x00000018u); // 801FE594
  c->r[3]=c->r[3]+c->r[4]; // 801FE598
  c->r[4]=c->r[0]-c->r[4]; // 801FE59C
  c->lr=0x801FE5A4u; f_801FFD64(c); // 801FE5A0
  cmps(c,0,(int32_t)c->r[3],0); // 801FE5A4
  if (!crb(c,0)) { goto L_801FE5B4; } // 801FE5A8
  c->r[3]=R32(c->r[24]+0x00000020u); // 801FE5AC
  goto L_801FE5D4; // 801FE5B0
L_801FE5B4:;
  c->r[4]=0u+0x00010000u; // 801FE5B4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801FE5B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801FE5BC
  if (!crb(c,1)) { goto L_801FE5D4; } // 801FE5C0
  c->r[3]=c->r[21]|c->r[21]; // 801FE5C4
  c->r[4]=0u+0x00000004u; // 801FE5C8
  c->lr=0x801FE5D0u; f_801FD068(c); // 801FE5CC
  goto L_801FE6AC; // 801FE5D0
L_801FE5D4:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801FE5D4
  W32(c->r[24]+0x00000020u,c->r[0]); // 801FE5D8
L_801FE5DC:;
  c->r[5]=R32(c->r[24]+0x00000008u); // 801FE5DC
  c->r[4]=0u+0x00000004u; // 801FE5E0
  c->r[0]=R32(c->r[24]+0x00000014u); // 801FE5E4
  c->r[3]=0u-c->r[5]; // 801FE5E8
  c->r[3]=c->r[3]|c->r[5]; // 801FE5EC
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 801FE5F0
  c->r[3]=c->r[3]+0x00000007u; // 801FE5F4
  c->r[20]=c->r[0]-c->r[3]; // 801FE5F8
  c->r[3]=c->r[20]+0x00000001u; // 801FE5FC
  c->lr=0x801FE604u; f_801FCFC8(c); // 801FE600
  cmps(c,0,(int32_t)c->r[3],0); // 801FE604
  W32(c->r[24]+0x00000028u,c->r[3]); // 801FE608
  if (!crb(c,2)) { goto L_801FE620; } // 801FE60C
  c->r[3]=c->r[21]|c->r[21]; // 801FE610
  c->r[4]=0u+0x00000001u; // 801FE614
  c->lr=0x801FE61Cu; f_801FD068(c); // 801FE618
  goto L_801FE6AC; // 801FE61C
L_801FE620:;
  c->r[4]=c->r[20]+0x00000001u; // 801FE620
  c->lr=0x801FE628u; f_801FF714(c); // 801FE624
  c->r[4]=R32(c->r[24]+0x00000008u); // 801FE628
  c->r[5]=c->r[20]|c->r[20]; // 801FE62C
  c->r[6]=R32(c->r[24]+0x00000024u); // 801FE630
  c->r[0]=0u-c->r[4]; // 801FE634
  c->r[3]=R32(c->r[24]+0x00000028u); // 801FE638
  c->r[0]=c->r[0]|c->r[4]; // 801FE63C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801FE640
  c->r[0]=c->r[4]+0x00000007u; // 801FE644
  c->r[4]=c->r[6]+c->r[0]; // 801FE648
  c->lr=0x801FE650u; f_801FF708(c); // 801FE64C
  c->r[4]=0u+0x80280000u; // 801FE650
  c->r[3]=c->r[24]+0x00000038u; // 801FE654
  c->r[4]=c->r[4]+0x00001A18u; // 801FE658
  c->r[5]=0u+0x00000014u; // 801FE65C
  c->lr=0x801FE664u; f_801FF708(c); // 801FE660
  W32(c->r[24]+0x0000001Cu,c->r[22]); // 801FE664
  c->r[0]=0u+0x00000000u; // 801FE668
  c->r[3]=c->r[24]|c->r[24]; // 801FE66C
  W32(c->r[24]+0x000000ACu,c->r[0]); // 801FE670
  W32(c->r[24]+0x000000B0u,c->r[0]); // 801FE674
  W32(c->r[24]+0x000000B4u,c->r[0]); // 801FE678
  W32(c->r[24]+0x000000B8u,c->r[0]); // 801FE67C
  W32(c->r[24]+0x000000BCu,c->r[0]); // 801FE680
  W32(c->r[24]+0x000000C0u,c->r[0]); // 801FE684
  W32(c->r[24]+0x000000C4u,c->r[0]); // 801FE688
  W32(c->r[24]+0x000000C8u,c->r[0]); // 801FE68C
  W32(c->r[24]+0x000000CCu,c->r[0]); // 801FE690
  W32(c->r[24]+0x000000D4u,c->r[0]); // 801FE694
  c->r[4]=R32(c->r[24]+0x0000002Cu); // 801FE698
  W32(c->r[4]+0x00000438u,c->r[23]); // 801FE69C
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 801FE6A0
  W32(c->r[24]+0x00000244u,c->r[0]); // 801FE6A4
  goto L_801FE6F0; // 801FE6A8
L_801FE6AC:;
  cmps(c,0,(int32_t)c->r[24],0); // 801FE6AC
  if (crb(c,2)) { goto L_801FE6EC; } // 801FE6B0
  c->r[3]=R32(c->r[24]+0x00000024u); // 801FE6B4
  cmps(c,0,(int32_t)c->r[3],0); // 801FE6B8
  if (crb(c,2)) { goto L_801FE6C4; } // 801FE6BC
  c->lr=0x801FE6C4u; f_801FD024(c); // 801FE6C0
L_801FE6C4:;
  c->r[3]=R32(c->r[24]+0x00000028u); // 801FE6C4
  cmps(c,0,(int32_t)c->r[3],0); // 801FE6C8
  if (crb(c,2)) { goto L_801FE6D4; } // 801FE6CC
  c->lr=0x801FE6D4u; f_801FD024(c); // 801FE6D0
L_801FE6D4:;
  c->r[3]=R32(c->r[24]+0x0000002Cu); // 801FE6D4
  cmps(c,0,(int32_t)c->r[3],0); // 801FE6D8
  if (crb(c,2)) { goto L_801FE6E4; } // 801FE6DC
  c->lr=0x801FE6E4u; f_801FD024(c); // 801FE6E0
L_801FE6E4:;
  c->r[3]=c->r[24]|c->r[24]; // 801FE6E4
  c->lr=0x801FE6ECu; f_801FD024(c); // 801FE6E8
L_801FE6EC:;
  c->r[3]=0u+0x00000000u; // 801FE6EC
L_801FE6F0:;
  c->r[11]=c->r[1]+0x00000140u; // 801FE6F0
  c->lr=0x801FE6F8u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FE6F4
  c->r[0]=R32(c->r[1]+0x00000144u); // 801FE6F8
  c->lr=c->r[0]; // 801FE6FC
  c->r[1]=c->r[1]+0x00000140u; // 801FE700
  return; // 801FE704
}

// NHTTP_DestroyRequest
void f_801FE708(Ctx* __restrict c) {
  trace_call(0x801FE708u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FE708
  c->r[0]=c->lr; // 801FE70C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FE710
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FE714
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FE718
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FE71C
  c->r[29]=c->r[4]|c->r[4]; // 801FE720
  c->lr=0x801FE728u; f_802045C0(c); // 801FE724
  c->r[30]=c->r[3]|c->r[3]; // 801FE728
  c->r[4]=c->r[29]|c->r[29]; // 801FE72C
  c->lr=0x801FE734u; f_8020410C(c); // 801FE730
  cmps(c,0,(int32_t)c->r[3],0); // 801FE734
  if (crb(c,2)) { goto L_801FE744; } // 801FE738
  c->r[0]=0u+0x00000000u; // 801FE73C
  W32(c->r[3]+0x00000014u,c->r[0]); // 801FE740
L_801FE744:;
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 801FE744
  c->lr=0x801FE74Cu; f_801FD024(c); // 801FE748
  c->r[3]=c->r[30]|c->r[30]; // 801FE74C
  c->r[4]=c->r[29]|c->r[29]; // 801FE750
  c->lr=0x801FE758u; f_8020410C(c); // 801FE754
  cmps(c,0,(int32_t)c->r[3],0); // 801FE758
  if (crb(c,2)) { goto L_801FE768; } // 801FE75C
  c->r[0]=0u+0x00000000u; // 801FE760
  W32(c->r[3]+0x00000010u,c->r[0]); // 801FE764
L_801FE768:;
  c->r[31]=R32(c->r[29]+0x00000030u); // 801FE768
  goto L_801FE798; // 801FE76C
L_801FE770:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801FE770
  cmpu(c,0,c->r[31],c->r[3]); // 801FE774
  if (crb(c,2)) { goto L_801FE78C; } // 801FE778
  c->r[30]=R32(c->r[3]+0x00000000u); // 801FE77C
  c->lr=0x801FE784u; f_801FD024(c); // 801FE780
  W32(c->r[31]+0x00000000u,c->r[30]); // 801FE784
  goto L_801FE798; // 801FE788
L_801FE78C:;
  c->r[3]=c->r[31]|c->r[31]; // 801FE78C
  c->lr=0x801FE794u; f_801FD024(c); // 801FE790
  c->r[31]=0u+0x00000000u; // 801FE794
L_801FE798:;
  cmps(c,0,(int32_t)c->r[31],0); // 801FE798
  if (!crb(c,2)) { IRQCHK(c); goto L_801FE770; } // 801FE79C
  c->r[30]=R32(c->r[29]+0x00000034u); // 801FE7A0
  goto L_801FE7D0; // 801FE7A4
L_801FE7A8:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FE7A8
  cmpu(c,0,c->r[30],c->r[3]); // 801FE7AC
  if (crb(c,2)) { goto L_801FE7C4; } // 801FE7B0
  c->r[31]=R32(c->r[3]+0x00000000u); // 801FE7B4
  c->lr=0x801FE7BCu; f_801FD024(c); // 801FE7B8
  W32(c->r[30]+0x00000000u,c->r[31]); // 801FE7BC
  goto L_801FE7D0; // 801FE7C0
L_801FE7C4:;
  c->r[3]=c->r[30]|c->r[30]; // 801FE7C4
  c->lr=0x801FE7CCu; f_801FD024(c); // 801FE7C8
  c->r[30]=0u+0x00000000u; // 801FE7CC
L_801FE7D0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FE7D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801FE7A8; } // 801FE7D4
  c->r[3]=R32(c->r[29]+0x00000024u); // 801FE7D8
  c->lr=0x801FE7E0u; f_801FD024(c); // 801FE7DC
  c->r[3]=R32(c->r[29]+0x00000028u); // 801FE7E0
  c->lr=0x801FE7E8u; f_801FD024(c); // 801FE7E4
  c->r[3]=c->r[29]|c->r[29]; // 801FE7E8
  c->lr=0x801FE7F0u; f_801FD024(c); // 801FE7EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FE7F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FE7F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FE7F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FE7FC
  c->lr=c->r[0]; // 801FE800
  c->r[1]=c->r[1]+0x00000020u; // 801FE804
  return; // 801FE808
}

// NHTTPi_destroyRequestObject
void f_801FE80C(Ctx* __restrict c) {
  trace_call(0x801FE80Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FE80C
  c->r[0]=c->lr; // 801FE810
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FE814
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FE818
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FE81C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FE820
  c->r[29]=c->r[4]|c->r[4]; // 801FE824
  c->lr=0x801FE82Cu; f_8020410C(c); // 801FE828
  cmps(c,0,(int32_t)c->r[3],0); // 801FE82C
  if (crb(c,2)) { goto L_801FE83C; } // 801FE830
  c->r[0]=0u+0x00000000u; // 801FE834
  W32(c->r[3]+0x00000010u,c->r[0]); // 801FE838
L_801FE83C:;
  c->r[31]=R32(c->r[29]+0x00000030u); // 801FE83C
  goto L_801FE86C; // 801FE840
L_801FE844:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801FE844
  cmpu(c,0,c->r[31],c->r[3]); // 801FE848
  if (crb(c,2)) { goto L_801FE860; } // 801FE84C
  c->r[30]=R32(c->r[3]+0x00000000u); // 801FE850
  c->lr=0x801FE858u; f_801FD024(c); // 801FE854
  W32(c->r[31]+0x00000000u,c->r[30]); // 801FE858
  goto L_801FE86C; // 801FE85C
L_801FE860:;
  c->r[3]=c->r[31]|c->r[31]; // 801FE860
  c->lr=0x801FE868u; f_801FD024(c); // 801FE864
  c->r[31]=0u+0x00000000u; // 801FE868
L_801FE86C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801FE86C
  if (!crb(c,2)) { IRQCHK(c); goto L_801FE844; } // 801FE870
  c->r[30]=R32(c->r[29]+0x00000034u); // 801FE874
  goto L_801FE8A4; // 801FE878
L_801FE87C:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FE87C
  cmpu(c,0,c->r[30],c->r[3]); // 801FE880
  if (crb(c,2)) { goto L_801FE898; } // 801FE884
  c->r[31]=R32(c->r[3]+0x00000000u); // 801FE888
  c->lr=0x801FE890u; f_801FD024(c); // 801FE88C
  W32(c->r[30]+0x00000000u,c->r[31]); // 801FE890
  goto L_801FE8A4; // 801FE894
L_801FE898:;
  c->r[3]=c->r[30]|c->r[30]; // 801FE898
  c->lr=0x801FE8A0u; f_801FD024(c); // 801FE89C
  c->r[30]=0u+0x00000000u; // 801FE8A0
L_801FE8A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FE8A4
  if (!crb(c,2)) { IRQCHK(c); goto L_801FE87C; } // 801FE8A8
  c->r[3]=R32(c->r[29]+0x00000024u); // 801FE8AC
  c->lr=0x801FE8B4u; f_801FD024(c); // 801FE8B0
  c->r[3]=R32(c->r[29]+0x00000028u); // 801FE8B4
  c->lr=0x801FE8BCu; f_801FD024(c); // 801FE8B8
  c->r[3]=c->r[29]|c->r[29]; // 801FE8BC
  c->lr=0x801FE8C4u; f_801FD024(c); // 801FE8C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FE8C4
  c->r[3]=0u+0x00000001u; // 801FE8C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FE8CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FE8D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FE8D4
  c->lr=c->r[0]; // 801FE8D8
  c->r[1]=c->r[1]+0x00000020u; // 801FE8DC
  return; // 801FE8E0
}

// NHTTP_SendRequestAsync
void f_801FE8E4(Ctx* __restrict c) {
  trace_call(0x801FE8E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FE8E4
  c->r[0]=c->lr; // 801FE8E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FE8EC
  c->r[11]=c->r[1]+0x00000020u; // 801FE8F0
  c->lr=0x801FE8F8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FE8F4
  c->r[28]=c->r[3]|c->r[3]; // 801FE8F8
  c->r[27]=c->r[4]|c->r[4]; // 801FE8FC
  c->lr=0x801FE904u; f_802045A4(c); // 801FE900
  c->r[31]=c->r[3]|c->r[3]; // 801FE904
  c->r[3]=c->r[28]|c->r[28]; // 801FE908
  c->lr=0x801FE910u; f_802045B8(c); // 801FE90C
  c->r[30]=c->r[3]|c->r[3]; // 801FE910
  c->r[3]=c->r[28]|c->r[28]; // 801FE914
  c->lr=0x801FE91Cu; f_802045C0(c); // 801FE918
  c->r[0]=R32(c->r[27]+0x00000004u); // 801FE91C
  c->r[29]=c->r[3]|c->r[3]; // 801FE920
  cmps(c,0,(int32_t)c->r[0],0); // 801FE924
  if (crb(c,2)) { goto L_801FE940; } // 801FE928
  c->r[3]=c->r[31]|c->r[31]; // 801FE92C
  c->r[4]=0u+0x0000000Bu; // 801FE930
  c->lr=0x801FE938u; f_801FD068(c); // 801FE934
  c->r[3]=0u+0xFFFFFFFFu; // 801FE938
  goto L_801FE98C; // 801FE93C
L_801FE940:;
  c->lr=0x801FE944u; f_801FD8D0(c); // 801FE940
  c->r[3]=c->r[28]|c->r[28]; // 801FE944
  c->lr=0x801FE94Cu; f_802045A8(c); // 801FE948
  c->r[4]=c->r[27]|c->r[27]; // 801FE94C
  c->lr=0x801FE954u; f_801FD640(c); // 801FE950
  cmps(c,0,(int32_t)c->r[3],0); // 801FE954
  c->r[28]=c->r[3]|c->r[3]; // 801FE958
  if (crb(c,0)) { goto L_801FE974; } // 801FE95C
  c->r[0]=0u+0x00000001u; // 801FE960
  c->r[3]=c->r[30]|c->r[30]; // 801FE964
  W32(c->r[27]+0x00000004u,c->r[0]); // 801FE968
  c->lr=0x801FE970u; f_801FD9DC(c); // 801FE96C
  goto L_801FE980; // 801FE970
L_801FE974:;
  c->r[3]=c->r[31]|c->r[31]; // 801FE974
  c->r[4]=0u+0x00000001u; // 801FE978
  c->lr=0x801FE980u; f_801FD068(c); // 801FE97C
L_801FE980:;
  c->r[3]=c->r[29]|c->r[29]; // 801FE980
  c->lr=0x801FE988u; f_801FD8D4(c); // 801FE984
  c->r[3]=c->r[28]|c->r[28]; // 801FE988
L_801FE98C:;
  c->r[11]=c->r[1]+0x00000020u; // 801FE98C
  c->lr=0x801FE994u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FE990
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FE994
  c->lr=c->r[0]; // 801FE998
  c->r[1]=c->r[1]+0x00000020u; // 801FE99C
  return; // 801FE9A0
}

// NHTTP_CancelRequestAsync
void f_801FE9A4(Ctx* __restrict c) {
  trace_call(0x801FE9A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FE9A4
  c->r[0]=c->lr; // 801FE9A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FE9AC
  c->r[11]=c->r[1]+0x00000020u; // 801FE9B0
  c->lr=0x801FE9B8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FE9B4
  c->r[27]=c->r[3]|c->r[3]; // 801FE9B8
  c->r[28]=c->r[4]|c->r[4]; // 801FE9BC
  c->r[30]=0u+0x00000000u; // 801FE9C0
  c->lr=0x801FE9C8u; f_802045B0(c); // 801FE9C4
  c->r[31]=c->r[3]|c->r[3]; // 801FE9C8
  c->r[3]=c->r[27]|c->r[27]; // 801FE9CC
  c->lr=0x801FE9D4u; f_802045C0(c); // 801FE9D0
  c->r[29]=R32(c->r[31]+0x00000000u); // 801FE9D4
  c->r[31]=c->r[3]|c->r[3]; // 801FE9D8
  c->lr=0x801FE9E0u; f_801FD8D0(c); // 801FE9DC
  cmps(c,0,(int32_t)c->r[29],0); // 801FE9E0
  if (crb(c,2)) { goto L_801FEA24; } // 801FE9E4
  c->r[0]=R32(c->r[29]+0x00000008u); // 801FE9E8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 801FE9EC
  if (!crb(c,2)) { goto L_801FEA24; } // 801FE9F0
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801FE9F4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FE9F8
  cmps(c,0,(int32_t)c->r[0],0); // 801FE9FC
  if (!crb(c,2)) { goto L_801FEA24; } // 801FEA00
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801FEA04
  c->r[0]=0u+0x00000001u; // 801FEA08
  c->r[3]=c->r[31]|c->r[31]; // 801FEA0C
  W32(c->r[4]+0x00000000u,c->r[0]); // 801FEA10
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801FEA14
  c->r[5]=R32(c->r[29]+0x00000010u); // 801FEA18
  c->lr=0x801FEA20u; f_801FF640(c); // 801FEA1C
  c->r[30]=0u+0x00000001u; // 801FEA20
L_801FEA24:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FEA24
  if (!crb(c,2)) { goto L_801FEA44; } // 801FEA28
  c->r[3]=c->r[27]|c->r[27]; // 801FEA2C
  c->lr=0x801FEA34u; f_802045A8(c); // 801FEA30
  c->r[4]=c->r[31]|c->r[31]; // 801FEA34
  c->r[5]=c->r[28]|c->r[28]; // 801FEA38
  c->lr=0x801FEA40u; f_801FD70C(c); // 801FEA3C
  c->r[30]=c->r[3]|c->r[3]; // 801FEA40
L_801FEA44:;
  c->r[3]=c->r[31]|c->r[31]; // 801FEA44
  c->lr=0x801FEA4Cu; f_801FD8D4(c); // 801FEA48
  c->r[11]=c->r[1]+0x00000020u; // 801FEA4C
  c->r[3]=c->r[30]|c->r[30]; // 801FEA50
  c->lr=0x801FEA58u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FEA54
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FEA58
  c->lr=c->r[0]; // 801FEA5C
  c->r[1]=c->r[1]+0x00000020u; // 801FEA60
  return; // 801FEA64
}

// NHTTPi_cancelAllRequests
void f_801FEA68(Ctx* __restrict c) {
  trace_call(0x801FEA68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FEA68
  c->r[0]=c->lr; // 801FEA6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FEA70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FEA74
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FEA78
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FEA7C
  c->r[29]=c->r[3]|c->r[3]; // 801FEA80
  c->lr=0x801FEA88u; f_802045B0(c); // 801FEA84
  c->r[31]=c->r[3]|c->r[3]; // 801FEA88
  c->r[3]=c->r[29]|c->r[29]; // 801FEA8C
  c->lr=0x801FEA94u; f_802045A8(c); // 801FEA90
  c->r[30]=c->r[3]|c->r[3]; // 801FEA94
  c->r[3]=c->r[29]|c->r[29]; // 801FEA98
  c->lr=0x801FEAA0u; f_802045C0(c); // 801FEA9C
  c->r[29]=R32(c->r[31]+0x00000000u); // 801FEAA0
  c->r[31]=c->r[3]|c->r[3]; // 801FEAA4
  c->lr=0x801FEAACu; f_801FD8D0(c); // 801FEAA8
  cmps(c,0,(int32_t)c->r[29],0); // 801FEAAC
  if (crb(c,2)) { goto L_801FEAE0; } // 801FEAB0
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801FEAB4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FEAB8
  cmps(c,0,(int32_t)c->r[0],0); // 801FEABC
  if (!crb(c,2)) { goto L_801FEAE0; } // 801FEAC0
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801FEAC4
  c->r[0]=0u+0x00000001u; // 801FEAC8
  c->r[3]=c->r[31]|c->r[31]; // 801FEACC
  W32(c->r[4]+0x00000000u,c->r[0]); // 801FEAD0
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801FEAD4
  c->r[5]=R32(c->r[29]+0x00000010u); // 801FEAD8
  c->lr=0x801FEAE0u; f_801FF640(c); // 801FEADC
L_801FEAE0:;
  c->r[3]=c->r[30]|c->r[30]; // 801FEAE0
  c->r[4]=c->r[31]|c->r[31]; // 801FEAE4
  c->lr=0x801FEAECu; f_801FD828(c); // 801FEAE8
  c->r[3]=c->r[31]|c->r[31]; // 801FEAEC
  c->lr=0x801FEAF4u; f_801FD8D4(c); // 801FEAF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FEAF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FEAF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FEAFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FEB00
  c->lr=c->r[0]; // 801FEB04
  c->r[1]=c->r[1]+0x00000020u; // 801FEB08
  return; // 801FEB0C
}

// NHTTP_DestroyResponse
void f_801FEB10(Ctx* __restrict c) {
  trace_call(0x801FEB10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FEB10
  c->r[0]=c->lr; // 801FEB14
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FEB18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FEB1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FEB20
  c->r[30]=c->r[4]|c->r[4]; // 801FEB24
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FEB28
  c->r[29]=c->r[3]|c->r[3]; // 801FEB2C
  goto L_801FEB40; // 801FEB30
L_801FEB34:;
  c->r[31]=R32(c->r[3]+0x00000000u); // 801FEB34
  c->lr=0x801FEB3Cu; f_801FD024(c); // 801FEB38
  W32(c->r[30]+0x00000034u,c->r[31]); // 801FEB3C
L_801FEB40:;
  c->r[3]=R32(c->r[30]+0x00000034u); // 801FEB40
  cmps(c,0,(int32_t)c->r[3],0); // 801FEB44
  if (!crb(c,2)) { IRQCHK(c); goto L_801FEB34; } // 801FEB48
  c->r[3]=R32(c->r[30]+0x00000020u); // 801FEB4C
  cmps(c,0,(int32_t)c->r[3],0); // 801FEB50
  if (crb(c,2)) { goto L_801FEB5C; } // 801FEB54
  c->lr=0x801FEB5Cu; f_801FD024(c); // 801FEB58
L_801FEB5C:;
  c->r[3]=R32(c->r[30]+0x00000024u); // 801FEB5C
  cmps(c,0,(int32_t)c->r[3],0); // 801FEB60
  if (crb(c,2)) { goto L_801FEB6C; } // 801FEB64
  c->lr=0x801FEB6Cu; f_801FD024(c); // 801FEB68
L_801FEB6C:;
  c->r[12]=R32(c->r[30]+0x00000030u); // 801FEB6C
  cmps(c,0,(int32_t)c->r[12],0); // 801FEB70
  if (crb(c,2)) { goto L_801FEB9C; } // 801FEB74
  c->r[4]=0u+0x80200000u; // 801FEB78
  c->r[3]=R32(c->r[30]+0x00000028u); // 801FEB7C
  c->r[4]=c->r[4]+0xFFFFD024u; // 801FEB80
  c->r[5]=R32(c->r[30]+0x00000438u); // 801FEB84
  c->ctr=c->r[12]; // 801FEB88
  if (true) { c->lr=0x801FEB90u; dispatch(c,c->ctr); } // 801FEB8C
  c->r[0]=0u+0x00000000u; // 801FEB90
  W32(c->r[30]+0x00000028u,c->r[0]); // 801FEB94
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801FEB98
L_801FEB9C:;
  c->r[3]=c->r[29]|c->r[29]; // 801FEB9C
  c->r[4]=c->r[30]|c->r[30]; // 801FEBA0
  c->lr=0x801FEBA8u; f_80204114(c); // 801FEBA4
  cmps(c,0,(int32_t)c->r[3],0); // 801FEBA8
  if (crb(c,2)) { goto L_801FEBB8; } // 801FEBAC
  c->r[0]=0u+0x00000000u; // 801FEBB0
  W32(c->r[3]+0x00000014u,c->r[0]); // 801FEBB4
L_801FEBB8:;
  c->r[3]=c->r[30]|c->r[30]; // 801FEBB8
  c->lr=0x801FEBC0u; f_801FD024(c); // 801FEBBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FEBC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FEBC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FEBC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FEBCC
  c->lr=c->r[0]; // 801FEBD0
  c->r[1]=c->r[1]+0x00000020u; // 801FEBD4
  return; // 801FEBD8
}

// NHTTPi_getHeaderValue
void f_801FEBDC(Ctx* __restrict c) {
  trace_call(0x801FEBDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FEBDC
  c->r[0]=c->lr; // 801FEBE0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FEBE4
  c->r[11]=c->r[1]+0x00000030u; // 801FEBE8
  c->lr=0x801FEBF0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FEBEC
  c->r[0]=0u+0x00000000u; // 801FEBF0
  c->r[29]=c->r[5]|c->r[5]; // 801FEBF4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801FEBF8
  c->r[28]=c->r[4]|c->r[4]; // 801FEBFC
  c->r[5]=R32(c->r[3]+0x00000000u); // 801FEC00
  c->r[27]=c->r[3]|c->r[3]; // 801FEC04
  c->r[6]=c->r[1]+0x0000000Cu; // 801FEC08
  c->r[7]=c->r[1]+0x00000008u; // 801FEC0C
  c->r[4]=0u+0x0000000Cu; // 801FEC10
  c->lr=0x801FEC18u; f_801FDAA4(c); // 801FEC14
  c->r[31]=c->r[3]|c->r[3]; // 801FEC18
  goto L_801FECEC; // 801FEC1C
L_801FEC20:;
  c->r[5]=R32(c->r[27]+0x00000000u); // 801FEC20
  c->r[3]=c->r[27]|c->r[27]; // 801FEC24
  c->r[4]=c->r[31]|c->r[31]; // 801FEC28
  c->r[6]=c->r[1]+0x0000000Cu; // 801FEC2C
  c->r[7]=c->r[1]+0x00000008u; // 801FEC30
  c->lr=0x801FEC38u; f_801FDAA4(c); // 801FEC34
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801FEC38
  c->r[30]=c->r[3]|c->r[3]; // 801FEC3C
  cmps(c,0,(int32_t)c->r[5],0); // 801FEC40
  if (!crb(c,1)) { goto L_801FECE8; } // 801FEC44
  c->r[3]=c->r[27]|c->r[27]; // 801FEC48
  c->r[4]=c->r[31]|c->r[31]; // 801FEC4C
  c->r[6]=c->r[28]|c->r[28]; // 801FEC50
  c->r[7]=0u+0x00000000u; // 801FEC54
  c->lr=0x801FEC5Cu; f_801FDD94(c); // 801FEC58
  cmps(c,0,(int32_t)c->r[3],0); // 801FEC5C
  if (!crb(c,2)) { goto L_801FECE8; } // 801FEC60
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801FEC64
  c->r[0]=R32(c->r[27]+0x00000000u); // 801FEC68
  c->r[4]=c->r[3]+0x00000001u; // 801FEC6C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801FEC70
  if (!crb(c,0)) { goto L_801FECE0; } // 801FEC74
  c->r[5]=R32(c->r[27]+0x00000000u); // 801FEC78
  c->r[3]=c->r[27]|c->r[27]; // 801FEC7C
  c->r[7]=c->r[1]+0x00000008u; // 801FEC80
  c->r[6]=0u+0x00000000u; // 801FEC84
  c->lr=0x801FEC8Cu; f_801FDAA4(c); // 801FEC88
  cmps(c,0,(int32_t)c->r[3],0); // 801FEC8C
  if (crb(c,1)) { goto L_801FEC9C; } // 801FEC90
  c->r[30]=R32(c->r[27]+0x00000000u); // 801FEC94
  goto L_801FECB4; // 801FEC98
L_801FEC9C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801FEC9C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801FECA0
  if (!crb(c,0)) { goto L_801FECB0; } // 801FECA4
  c->r[3]=0u+0xFFFFFFFFu; // 801FECA8
  goto L_801FECF8; // 801FECAC
L_801FECB0:;
  c->r[30]=c->r[3]-c->r[0]; // 801FECB0
L_801FECB4:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801FECB4
  c->r[3]=c->r[27]|c->r[27]; // 801FECB8
  c->r[5]=c->r[30]|c->r[30]; // 801FECBC
  c->r[4]=c->r[4]+0x00000001u; // 801FECC0
  c->lr=0x801FECC8u; f_801FDC9C(c); // 801FECC4
  cmps(c,0,(int32_t)c->r[3],0); // 801FECC8
  if (!crb(c,0)) { goto L_801FECD4; } // 801FECCC
  c->r[3]=c->r[30]|c->r[30]; // 801FECD0
L_801FECD4:;
  W32(c->r[29]+0x00000000u,c->r[3]); // 801FECD4
  c->r[3]=c->r[30]-c->r[3]; // 801FECD8
  goto L_801FECF8; // 801FECDC
L_801FECE0:;
  c->r[3]=0u+0x00000000u; // 801FECE0
  goto L_801FECF8; // 801FECE4
L_801FECE8:;
  c->r[31]=c->r[30]|c->r[30]; // 801FECE8
L_801FECEC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801FECEC
  if (crb(c,1)) { IRQCHK(c); goto L_801FEC20; } // 801FECF0
  c->r[3]=0u+0xFFFFFFFFu; // 801FECF4
L_801FECF8:;
  c->r[11]=c->r[1]+0x00000030u; // 801FECF8
  c->lr=0x801FED00u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FECFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FED00
  c->lr=c->r[0]; // 801FED04
  c->r[1]=c->r[1]+0x00000030u; // 801FED08
  return; // 801FED0C
}

// fn_801FED10
void f_801FED10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FED10
  c->r[0]=c->lr; // 801FED14
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FED18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FED1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FED20
  c->r[30]=c->r[5]|c->r[5]; // 801FED24
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FED28
  c->r[29]=c->r[4]|c->r[4]; // 801FED2C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801FED30
  c->r[28]=c->r[3]|c->r[3]; // 801FED34
  c->r[0]=R32(c->r[3]+0x00000014u); // 801FED38
  cmps(c,0,(int32_t)c->r[0],0); // 801FED3C
  if (!crb(c,2)) { goto L_801FED4C; } // 801FED40
  c->r[3]=0u+0xFFFFFFFFu; // 801FED44
  goto L_801FEE34; // 801FED48
L_801FED4C:;
  c->r[3]=R32(c->r[3]+0x00000024u); // 801FED4C
  cmps(c,0,(int32_t)c->r[3],0); // 801FED50
  if (crb(c,2)) { goto L_801FED64; } // 801FED54
  c->lr=0x801FED5Cu; f_801FD024(c); // 801FED58
  c->r[0]=0u+0x00000000u; // 801FED5C
  W32(c->r[28]+0x00000024u,c->r[0]); // 801FED60
L_801FED64:;
  c->r[3]=c->r[28]|c->r[28]; // 801FED64
  c->r[4]=c->r[29]|c->r[29]; // 801FED68
  c->r[5]=c->r[1]+0x00000008u; // 801FED6C
  c->lr=0x801FED74u; f_801FEBDC(c); // 801FED70
  cmps(c,0,(int32_t)c->r[3],0); // 801FED74
  c->r[31]=c->r[3]|c->r[3]; // 801FED78
  if (crb(c,0)) { goto L_801FEDCC; } // 801FED7C
  c->r[4]=0u+0x00000004u; // 801FED80
  c->r[3]=c->r[3]+0x00000001u; // 801FED84
  c->lr=0x801FED8Cu; f_801FCFC8(c); // 801FED88
  cmps(c,0,(int32_t)c->r[3],0); // 801FED8C
  W32(c->r[28]+0x00000024u,c->r[3]); // 801FED90
  if (!crb(c,2)) { goto L_801FEDA0; } // 801FED94
  c->r[3]=0u+0xFFFFFFFFu; // 801FED98
  goto L_801FEE34; // 801FED9C
L_801FEDA0:;
  c->r[0]=0u+0x00000000u; // 801FEDA0
  c->r[6]=c->r[31]|c->r[31]; // 801FEDA4
  W8(c->r[3]+c->r[31],c->r[0]); // 801FEDA8
  c->r[3]=c->r[28]|c->r[28]; // 801FEDAC
  c->r[4]=R32(c->r[28]+0x00000024u); // 801FEDB0
  c->r[5]=R32(c->r[1]+0x00000008u); // 801FEDB4
  c->lr=0x801FEDBCu; f_801FDF84(c); // 801FEDB8
  c->r[0]=R32(c->r[28]+0x00000024u); // 801FEDBC
  c->r[3]=c->r[31]|c->r[31]; // 801FEDC0
  W32(c->r[30]+0x00000000u,c->r[0]); // 801FEDC4
  goto L_801FEE34; // 801FEDC8
L_801FEDCC:;
  c->r[3]=0u+0x802F0000u; // 801FEDCC
  c->r[4]=c->r[29]|c->r[29]; // 801FEDD0
  c->r[3]=c->r[3]+0xFFFF9AD8u; // 801FEDD4
  c->lr=0x801FEDDCu; f_801FF710(c); // 801FEDD8
  cmps(c,0,(int32_t)c->r[3],0); // 801FEDDC
  if (!crb(c,2)) { goto L_801FEE30; } // 801FEDE0
  c->r[3]=0u+0x00000004u; // 801FEDE4
  c->r[4]=0u+0x00000004u; // 801FEDE8
  c->lr=0x801FEDF0u; f_801FCFC8(c); // 801FEDEC
  cmps(c,0,(int32_t)c->r[3],0); // 801FEDF0
  W32(c->r[28]+0x00000024u,c->r[3]); // 801FEDF4
  if (!crb(c,2)) { goto L_801FEE04; } // 801FEDF8
  c->r[3]=0u+0xFFFFFFFFu; // 801FEDFC
  goto L_801FEE34; // 801FEE00
L_801FEE04:;
  c->r[0]=0u+0x00000000u; // 801FEE04
  c->r[5]=0u+0x00000009u; // 801FEE08
  W8(c->r[3]+0x00000003u,c->r[0]); // 801FEE0C
  c->r[3]=c->r[28]|c->r[28]; // 801FEE10
  c->r[6]=0u+0x00000003u; // 801FEE14
  c->r[4]=R32(c->r[28]+0x00000024u); // 801FEE18
  c->lr=0x801FEE20u; f_801FDF84(c); // 801FEE1C
  c->r[0]=R32(c->r[28]+0x00000024u); // 801FEE20
  c->r[3]=0u+0x00000003u; // 801FEE24
  W32(c->r[30]+0x00000000u,c->r[0]); // 801FEE28
  goto L_801FEE34; // 801FEE2C
L_801FEE30:;
  c->r[3]=0u+0xFFFFFFFFu; // 801FEE30
L_801FEE34:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FEE34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FEE38
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FEE3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FEE40
  c->r[28]=R32(c->r[1]+0x00000010u); // 801FEE44
  c->lr=c->r[0]; // 801FEE48
  c->r[1]=c->r[1]+0x00000020u; // 801FEE4C
  return; // 801FEE50
}

// NHTTPi_checkKeepAlive
void f_801FEE54(Ctx* __restrict c) {
  trace_call(0x801FEE54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FEE54
  c->r[0]=c->lr; // 801FEE58
  cmps(c,0,(int32_t)c->r[3],-1); // 801FEE5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FEE60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FEE64
  c->r[31]=0u+0x00000000u; // 801FEE68
  if (!crb(c,2)) { goto L_801FEE78; } // 801FEE6C
  c->r[31]=0u+0xFFFFFFFFu; // 801FEE70
  goto L_801FEE94; // 801FEE74
L_801FEE78:;
  c->r[4]=c->r[1]+0x00000008u; // 801FEE78
  c->r[5]=0u+0x00000001u; // 801FEE7C
  c->r[6]=0u+0x00000004u; // 801FEE80
  c->lr=0x801FEE88u; f_802078BC(c); // 801FEE84
  cmps(c,0,(int32_t)c->r[3],-6); // 801FEE88
  if (crb(c,2)) { goto L_801FEE94; } // 801FEE8C
  c->r[31]=0u+0xFFFFFFFFu; // 801FEE90
L_801FEE94:;
  c->r[3]=c->r[31]|c->r[31]; // 801FEE94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FEE98
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FEE9C
  c->lr=c->r[0]; // 801FEEA0
  c->r[1]=c->r[1]+0x00000020u; // 801FEEA4
  return; // 801FEEA8
}

// NHTTPi_SocOpen
void f_801FEEAC(Ctx* __restrict c) {
  trace_call(0x801FEEACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FEEAC
  c->r[0]=c->lr; // 801FEEB0
  c->r[4]=0u+0x00000001u; // 801FEEB4
  c->r[5]=0u+0x00000000u; // 801FEEB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FEEBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FEEC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FEEC4
  c->r[30]=c->r[3]|c->r[3]; // 801FEEC8
  c->r[3]=0u+0x00000002u; // 801FEECC
  c->lr=0x801FEED4u; f_80207360(c); // 801FEED0
  c->r[0]=0u+0x00000000u; // 801FEED4
  cmps(c,0,(int32_t)c->r[30],0); // 801FEED8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801FEEDC
  c->r[31]=c->r[3]|c->r[3]; // 801FEEE0
  if (crb(c,2)) { goto L_801FEEF0; } // 801FEEE4
  c->r[0]=R32(c->r[30]+0x00000244u); // 801FEEE8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801FEEEC
L_801FEEF0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FEEF0
  if (crb(c,0)) { goto L_801FEF1C; } // 801FEEF4
  cmps(c,0,(int32_t)c->r[0],0); // 801FEEF8
  if (crb(c,2)) { goto L_801FEF1C; } // 801FEEFC
  c->r[4]=0u+0x00010000u; // 801FEF00
  c->r[3]=c->r[31]|c->r[31]; // 801FEF04
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801FEF08
  c->r[6]=c->r[1]+0x00000008u; // 801FEF0C
  c->r[5]=0u+0x00001002u; // 801FEF10
  c->r[7]=0u+0x00000004u; // 801FEF14
  c->lr=0x801FEF1Cu; f_802087C8(c); // 801FEF18
L_801FEF1C:;
  c->r[3]=c->r[31]|c->r[31]; // 801FEF1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FEF20
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FEF24
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FEF28
  c->lr=c->r[0]; // 801FEF2C
  c->r[1]=c->r[1]+0x00000020u; // 801FEF30
  return; // 801FEF34
}

// NHTTPi_SocClose
void f_801FEF38(Ctx* __restrict c) {
  trace_call(0x801FEF38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FEF38
  c->r[0]=c->lr; // 801FEF3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FEF40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FEF44
  c->r[31]=c->r[5]|c->r[5]; // 801FEF48
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FEF4C
  c->r[30]=c->r[4]|c->r[4]; // 801FEF50
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FEF54
  c->r[29]=c->r[3]|c->r[3]; // 801FEF58
  c->lr=0x801FEF60u; f_801FD8D0(c); // 801FEF5C
  c->r[3]=R32(c->r[30]+0x000000ACu); // 801FEF60
  cmps(c,0,(int32_t)c->r[3],0); // 801FEF64
  if (!crb(c,1)) { goto L_801FEF78; } // 801FEF68
  c->lr=0x801FEF70u; f_80204EAC(c); // 801FEF6C
  c->r[0]=0u+0xFFFFFFFFu; // 801FEF70
  W32(c->r[30]+0x000000ACu,c->r[0]); // 801FEF74
L_801FEF78:;
  c->r[3]=c->r[29]|c->r[29]; // 801FEF78
  c->lr=0x801FEF80u; f_801FD8D4(c); // 801FEF7C
  c->r[3]=c->r[31]|c->r[31]; // 801FEF80
  c->lr=0x801FEF88u; f_80207524(c); // 801FEF84
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FEF88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FEF8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FEF90
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FEF94
  c->lr=c->r[0]; // 801FEF98
  c->r[1]=c->r[1]+0x00000020u; // 801FEF9C
  return; // 801FEFA0
}

// NHTTPi_SocConnect
void f_801FEFA4(Ctx* __restrict c) {
  trace_call(0x801FEFA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FEFA4
  c->r[0]=c->lr; // 801FEFA8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FEFAC
  c->r[11]=c->r[1]+0x00000030u; // 801FEFB0
  c->lr=0x801FEFB8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FEFB4
  c->r[9]=0u+0x00000008u; // 801FEFB8
  c->r[0]=0u+0x00000002u; // 801FEFBC
  W8(c->r[1]+0x00000008u,c->r[9]); // 801FEFC0
  c->r[27]=c->r[3]|c->r[3]; // 801FEFC4
  c->r[28]=c->r[4]|c->r[4]; // 801FEFC8
  c->r[29]=c->r[5]|c->r[5]; // 801FEFCC
  W8(c->r[1]+0x00000009u,c->r[0]); // 801FEFD0
  c->r[30]=c->r[6]|c->r[6]; // 801FEFD4
  c->r[31]=c->r[7]|c->r[7]; // 801FEFD8
  c->r[3]=rotl(c->r[8],0)&0x0000FFFFu; // 801FEFDC
  c->lr=0x801FEFE4u; f_80207DDC(c); // 801FEFE0
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801FEFE4
  c->r[3]=c->r[30]|c->r[30]; // 801FEFE8
  c->r[4]=c->r[1]+0x00000008u; // 801FEFEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FEFF0
  c->lr=0x801FEFF8u; f_802076B0(c); // 801FEFF4
  cmps(c,0,(int32_t)c->r[3],0); // 801FEFF8
  if (!crb(c,0)) { goto L_801FF018; } // 801FEFFC
  c->r[0]=R32(c->r[29]+0x00000000u); // 801FF000
  c->r[3]=0u+0xFFFFFC17u; // 801FF004
  cmps(c,0,(int32_t)c->r[0],0); // 801FF008
  if (crb(c,2)) { goto L_801FF04C; } // 801FF00C
  c->r[3]=0u+0xFFFFFC16u; // 801FF010
  goto L_801FF04C; // 801FF014
L_801FF018:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801FF018
  cmps(c,0,(int32_t)c->r[0],0); // 801FF01C
  if (crb(c,2)) { goto L_801FF048; } // 801FF020
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801FF024
  cmps(c,0,(int32_t)c->r[0],0); // 801FF028
  if (!crb(c,2)) { goto L_801FF048; } // 801FF02C
  c->r[3]=c->r[27]|c->r[27]; // 801FF030
  c->r[4]=c->r[28]|c->r[28]; // 801FF034
  c->r[5]=c->r[29]|c->r[29]; // 801FF038
  c->r[6]=c->r[30]|c->r[30]; // 801FF03C
  c->lr=0x801FF044u; f_801FF064(c); // 801FF040
  goto L_801FF04C; // 801FF044
L_801FF048:;
  c->r[3]=0u+0x00000000u; // 801FF048
L_801FF04C:;
  c->r[11]=c->r[1]+0x00000030u; // 801FF04C
  c->lr=0x801FF054u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FF050
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FF054
  c->lr=c->r[0]; // 801FF058
  c->r[1]=c->r[1]+0x00000030u; // 801FF05C
  return; // 801FF060
}

// NHTTPi_SocSSLConnect
void f_801FF064(Ctx* __restrict c) {
  trace_call(0x801FF064u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF064
  c->r[0]=c->lr; // 801FF068
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FF06C
  c->r[11]=c->r[1]+0x00000020u; // 801FF070
  c->lr=0x801FF078u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FF074
  c->r[26]=c->r[3]|c->r[3]; // 801FF078
  c->r[27]=c->r[4]|c->r[4]; // 801FF07C
  c->r[3]=R32(c->r[5]+0x000000CCu); // 801FF080
  c->r[28]=c->r[5]|c->r[5]; // 801FF084
  c->r[4]=R32(c->r[5]+0x00000028u); // 801FF088
  c->r[29]=c->r[6]|c->r[6]; // 801FF08C
  c->r[30]=0u+0x00000000u; // 801FF090
  c->lr=0x801FF098u; f_80204650(c); // 801FF094
  W32(c->r[28]+0x000000ACu,c->r[3]); // 801FF098
  c->r[12]=R32(c->r[26]+0x000007E4u); // 801FF09C
  cmps(c,0,(int32_t)c->r[12],0); // 801FF0A0
  if (crb(c,2)) { goto L_801FF0BC; } // 801FF0A4
  c->r[4]=R32(c->r[28]+0x000000D4u); // 801FF0A8
  cmps(c,0,(int32_t)c->r[4],0); // 801FF0AC
  if (crb(c,2)) { goto L_801FF0BC; } // 801FF0B0
  c->ctr=c->r[12]; // 801FF0B4
  if (true) { c->lr=0x801FF0BCu; dispatch(c,c->ctr); } // 801FF0B8
L_801FF0BC:;
  c->r[0]=R32(c->r[28]+0x000000C8u); // 801FF0BC
  cmps(c,0,(int32_t)c->r[0],1); // 801FF0C0
  if (!crb(c,2)) { goto L_801FF0E4; } // 801FF0C4
  c->r[3]=R32(c->r[28]+0x000000ACu); // 801FF0C8
  c->r[4]=R32(c->r[28]+0x000000DCu); // 801FF0CC
  c->lr=0x801FF0D4u; f_802052D4(c); // 801FF0D0
  cmps(c,0,(int32_t)c->r[3],0); // 801FF0D4
  if (crb(c,2)) { goto L_801FF11C; } // 801FF0D8
  c->r[3]=0u+0xFFFFFC13u; // 801FF0DC
  goto L_801FF1FC; // 801FF0E0
L_801FF0E4:;
  c->r[4]=R32(c->r[28]+0x000000B0u); // 801FF0E4
  cmps(c,0,(int32_t)c->r[4],0); // 801FF0E8
  if (crb(c,2)) { goto L_801FF11C; } // 801FF0EC
  c->r[6]=R32(c->r[28]+0x000000B8u); // 801FF0F0
  cmps(c,0,(int32_t)c->r[6],0); // 801FF0F4
  if (crb(c,2)) { goto L_801FF11C; } // 801FF0F8
  c->r[3]=R32(c->r[28]+0x000000ACu); // 801FF0FC
  c->r[5]=R32(c->r[28]+0x000000B4u); // 801FF100
  c->r[7]=R32(c->r[28]+0x000000BCu); // 801FF104
  c->lr=0x801FF10Cu; f_80204F58(c); // 801FF108
  cmps(c,0,(int32_t)c->r[3],0); // 801FF10C
  if (crb(c,2)) { goto L_801FF11C; } // 801FF110
  c->r[3]=0u+0xFFFFFC13u; // 801FF114
  goto L_801FF1FC; // 801FF118
L_801FF11C:;
  c->r[4]=R32(c->r[28]+0x000000C0u); // 801FF11C
  cmps(c,0,(int32_t)c->r[4],0); // 801FF120
  if (crb(c,2)) { goto L_801FF144; } // 801FF124
  c->r[3]=R32(c->r[28]+0x000000ACu); // 801FF128
  c->r[5]=R32(c->r[28]+0x000000C4u); // 801FF12C
  c->lr=0x801FF134u; f_802050C4(c); // 801FF130
  cmps(c,0,(int32_t)c->r[3],0); // 801FF134
  if (crb(c,2)) { goto L_801FF160; } // 801FF138
  c->r[3]=0u+0xFFFFFC14u; // 801FF13C
  goto L_801FF1FC; // 801FF140
L_801FF144:;
  c->r[3]=R32(c->r[28]+0x000000ACu); // 801FF144
  c->r[4]=R32(c->r[28]+0x000000D8u); // 801FF148
  c->lr=0x801FF150u; f_8020520C(c); // 801FF14C
  cmps(c,0,(int32_t)c->r[3],0); // 801FF150
  if (crb(c,2)) { goto L_801FF160; } // 801FF154
  c->r[3]=0u+0xFFFFFC14u; // 801FF158
  goto L_801FF1FC; // 801FF15C
L_801FF160:;
  c->r[3]=R32(c->r[28]+0x000000ACu); // 801FF160
  c->r[4]=c->r[29]|c->r[29]; // 801FF164
  c->lr=0x801FF16Cu; f_802047A8(c); // 801FF168
  cmps(c,0,(int32_t)c->r[3],-1); // 801FF16C
  if (!crb(c,0)) { goto L_801FF1F0; } // 801FF170
  c->r[3]=0u+0xFFFFFC17u; // 801FF174
  goto L_801FF1FC; // 801FF178
  goto L_801FF1F0; // 801FF17C
L_801FF180:;
  c->r[3]=c->r[27]|c->r[27]; // 801FF180
  c->r[4]=c->r[28]|c->r[28]; // 801FF184
  c->lr=0x801FF18Cu; f_8020410C(c); // 801FF188
  c->r[31]=c->r[3]|c->r[3]; // 801FF18C
  c->r[3]=R32(c->r[28]+0x000000ACu); // 801FF190
  c->lr=0x801FF198u; f_80204870(c); // 801FF194
  c->r[29]=c->r[3]|c->r[3]; // 801FF198
  c->r[3]=c->r[26]|c->r[26]; // 801FF19C
  c->r[4]=c->r[29]|c->r[29]; // 801FF1A0
  c->lr=0x801FF1A8u; f_801FD070(c); // 801FF1A4
  cmps(c,0,(int32_t)c->r[31],0); // 801FF1A8
  if (crb(c,2)) { goto L_801FF1B4; } // 801FF1AC
  W32(c->r[31]+0x00000008u,c->r[29]); // 801FF1B0
L_801FF1B4:;
  cmps(c,0,(int32_t)c->r[29],-1); // 801FF1B4
  if (crb(c,2)) { goto L_801FF1E8; } // 801FF1B8
  if (!crb(c,0)) { goto L_801FF1D8; } // 801FF1BC
  cmps(c,0,(int32_t)c->r[29],-7); // 801FF1C0
  if (crb(c,2)) { goto L_801FF1F0; } // 801FF1C4
  if (crb(c,0)) { goto L_801FF1E8; } // 801FF1C8
  cmps(c,0,(int32_t)c->r[29],-3); // 801FF1CC
  if (!crb(c,0)) { goto L_801FF1F0; } // 801FF1D0
  goto L_801FF1E8; // 801FF1D4
L_801FF1D8:;
  cmps(c,0,(int32_t)c->r[29],1); // 801FF1D8
  if (!crb(c,0)) { goto L_801FF1E8; } // 801FF1DC
  c->r[30]=0u+0x00000001u; // 801FF1E0
  goto L_801FF1F0; // 801FF1E4
L_801FF1E8:;
  c->r[3]=0u+0xFFFFFC17u; // 801FF1E8
  goto L_801FF1FC; // 801FF1EC
L_801FF1F0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FF1F0
  if (crb(c,2)) { IRQCHK(c); goto L_801FF180; } // 801FF1F4
  c->r[3]=0u+0x00000000u; // 801FF1F8
L_801FF1FC:;
  c->r[11]=c->r[1]+0x00000020u; // 801FF1FC
  c->lr=0x801FF204u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FF200
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FF204
  c->lr=c->r[0]; // 801FF208
  c->r[1]=c->r[1]+0x00000020u; // 801FF20C
  return; // 801FF210
}

// NHTTPi_SocRecv_sub
void f_801FF214(Ctx* __restrict c) {
  trace_call(0x801FF214u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF214
  c->r[0]=c->lr; // 801FF218
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FF21C
  c->r[11]=c->r[1]+0x00000020u; // 801FF220
  c->lr=0x801FF228u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FF224
  cmps(c,0,(int32_t)c->r[6],0); // 801FF228
  c->r[30]=c->r[3]|c->r[3]; // 801FF22C
  c->r[27]=c->r[5]|c->r[5]; // 801FF230
  c->r[31]=c->r[6]|c->r[6]; // 801FF234
  c->r[29]=c->r[3]+0x00000040u; // 801FF238
  c->r[28]=0u+0x00000000u; // 801FF23C
  if (!crb(c,1)) { goto L_801FF304; } // 801FF240
  c->r[3]=c->r[3]+0x00010000u; // 801FF244
  c->r[0]=R32(c->r[3]+0xFFFF8044u); // 801FF248
  cmps(c,0,(int32_t)c->r[0],0); // 801FF24C
  if (!crb(c,2)) { goto L_801FF28C; } // 801FF250
  c->r[5]=0u+0x00010000u; // 801FF254
  c->r[3]=c->r[4]|c->r[4]; // 801FF258
  c->r[4]=c->r[29]|c->r[29]; // 801FF25C
  c->r[6]=c->r[7]|c->r[7]; // 801FF260
  c->r[5]=c->r[5]+0xFFFF8000u; // 801FF264
  c->lr=0x801FF26Cu; f_802078BC(c); // 801FF268
  cmps(c,0,(int32_t)c->r[3],0); // 801FF26C
  if (!crb(c,1)) { goto L_801FF308; } // 801FF270
  c->r[4]=c->r[30]+0x00010000u; // 801FF274
  c->r[0]=0u+0x00000000u; // 801FF278
  W32(c->r[4]+0xFFFF8044u,c->r[3]); // 801FF27C
  W32(c->r[4]+0xFFFF8040u,c->r[0]); // 801FF280
  goto L_801FF28C; // 801FF284
  goto L_801FF308; // 801FF288
L_801FF28C:;
  c->r[3]=c->r[30]+0x00010000u; // 801FF28C
  c->r[0]=R32(c->r[3]+0xFFFF8044u); // 801FF290
  cmps(c,0,(int32_t)c->r[0],0); // 801FF294
  if (crb(c,2)) { goto L_801FF304; } // 801FF298
  cmpu(c,0,c->r[31],c->r[0]); // 801FF29C
  if (!crb(c,1)) { goto L_801FF2A8; } // 801FF2A0
  c->r[31]=c->r[0]|c->r[0]; // 801FF2A4
L_801FF2A8:;
  c->r[3]=c->r[30]+0x00010000u; // 801FF2A8
  c->r[5]=c->r[31]|c->r[31]; // 801FF2AC
  c->r[0]=R32(c->r[3]+0xFFFF8040u); // 801FF2B0
  c->r[3]=c->r[27]|c->r[27]; // 801FF2B4
  c->r[4]=c->r[29]+c->r[0]; // 801FF2B8
  c->lr=0x801FF2C0u; f_801FF708(c); // 801FF2BC
  c->r[3]=c->r[30]+0x00010000u; // 801FF2C0
  c->r[0]=R32(c->r[3]+0xFFFF8044u); // 801FF2C4
  c->r[0]=c->r[0]-c->r[31]; cr0(c,c->r[0]); // 801FF2C8
  W32(c->r[3]+0xFFFF8044u,c->r[0]); // 801FF2CC
  if (!crb(c,2)) { goto L_801FF2F4; } // 801FF2D0
  c->r[4]=0u+0x00010000u; // 801FF2D4
  c->r[3]=c->r[29]|c->r[29]; // 801FF2D8
  c->r[4]=c->r[4]+0xFFFF8000u; // 801FF2DC
  c->lr=0x801FF2E4u; f_801FF714(c); // 801FF2E0
  c->r[3]=c->r[30]+0x00010000u; // 801FF2E4
  c->r[0]=0u+0x00000000u; // 801FF2E8
  W32(c->r[3]+0xFFFF8040u,c->r[0]); // 801FF2EC
  goto L_801FF300; // 801FF2F0
L_801FF2F4:;
  c->r[0]=R32(c->r[3]+0xFFFF8040u); // 801FF2F4
  c->r[0]=c->r[0]+c->r[31]; // 801FF2F8
  W32(c->r[3]+0xFFFF8040u,c->r[0]); // 801FF2FC
L_801FF300:;
  c->r[28]=c->r[31]|c->r[31]; // 801FF300
L_801FF304:;
  c->r[3]=c->r[28]|c->r[28]; // 801FF304
L_801FF308:;
  c->r[11]=c->r[1]+0x00000020u; // 801FF308
  c->lr=0x801FF310u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FF30C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FF310
  c->lr=c->r[0]; // 801FF314
  c->r[1]=c->r[1]+0x00000020u; // 801FF318
  return; // 801FF31C
}

// NHTTPi_SocRecv
void f_801FF320(Ctx* __restrict c) {
  trace_call(0x801FF320u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF320
  c->r[0]=c->lr; // 801FF324
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FF328
  c->r[11]=c->r[1]+0x00000020u; // 801FF32C
  c->lr=0x801FF334u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FF330
  c->r[0]=R32(c->r[4]+0x000000ACu); // 801FF334
  c->r[27]=c->r[4]|c->r[4]; // 801FF338
  c->r[28]=c->r[5]|c->r[5]; // 801FF33C
  c->r[29]=c->r[6]|c->r[6]; // 801FF340
  cmps(c,0,(int32_t)c->r[0],0); // 801FF344
  c->r[30]=c->r[7]|c->r[7]; // 801FF348
  c->r[31]=c->r[8]|c->r[8]; // 801FF34C
  if (!crb(c,1)) { goto L_801FF368; } // 801FF350
  c->r[3]=c->r[0]|c->r[0]; // 801FF354
  c->r[4]=c->r[29]|c->r[29]; // 801FF358
  c->r[5]=c->r[30]|c->r[30]; // 801FF35C
  c->lr=0x801FF364u; f_8020491C(c); // 801FF360
  goto L_801FF394; // 801FF364
L_801FF368:;
  c->lr=0x801FF36Cu; f_8020410C(c); // 801FF368
  cmps(c,0,(int32_t)c->r[3],0); // 801FF36C
  if (crb(c,2)) { goto L_801FF38C; } // 801FF370
  c->r[4]=c->r[28]|c->r[28]; // 801FF374
  c->r[5]=c->r[29]|c->r[29]; // 801FF378
  c->r[6]=c->r[30]|c->r[30]; // 801FF37C
  c->r[7]=c->r[31]|c->r[31]; // 801FF380
  c->lr=0x801FF388u; f_801FF214(c); // 801FF384
  goto L_801FF394; // 801FF388
L_801FF38C:;
  c->r[3]=0u+0xFFFFFC17u; // 801FF38C
  goto L_801FF3E4; // 801FF390
L_801FF394:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FF394
  if (!crb(c,0)) { goto L_801FF3E4; } // 801FF398
  c->r[0]=R32(c->r[27]+0x00000000u); // 801FF39C
  cmps(c,0,(int32_t)c->r[0],0); // 801FF3A0
  if (crb(c,2)) { goto L_801FF3B0; } // 801FF3A4
  c->r[3]=0u+0xFFFFFC16u; // 801FF3A8
  goto L_801FF3E4; // 801FF3AC
L_801FF3B0:;
  c->r[0]=R32(c->r[27]+0x000000ACu); // 801FF3B0
  cmps(c,0,(int32_t)c->r[0],0); // 801FF3B4
  if (!crb(c,1)) { goto L_801FF3D0; } // 801FF3B8
  c->r[0]=c->r[3]+0x00000007u; // 801FF3BC
  cmpu(c,0,c->r[0],0x00000001u); // 801FF3C0
  if (crb(c,1)) { goto L_801FF3E0; } // 801FF3C4
  c->r[3]=0u+0x00000000u; // 801FF3C8
  goto L_801FF3E4; // 801FF3CC
L_801FF3D0:;
  cmps(c,0,(int32_t)c->r[3],-56); // 801FF3D0
  if (!crb(c,2)) { goto L_801FF3E0; } // 801FF3D4
  c->r[3]=0u+0x00000000u; // 801FF3D8
  goto L_801FF3E4; // 801FF3DC
L_801FF3E0:;
  c->r[3]=0u+0xFFFFFC17u; // 801FF3E0
L_801FF3E4:;
  c->r[11]=c->r[1]+0x00000020u; // 801FF3E4
  c->lr=0x801FF3ECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FF3E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FF3EC
  c->lr=c->r[0]; // 801FF3F0
  c->r[1]=c->r[1]+0x00000020u; // 801FF3F4
  return; // 801FF3F8
}

// NHTTPi_SocSend_sub
void f_801FF3FC(Ctx* __restrict c) {
  trace_call(0x801FF3FCu);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FF3FC
  c->r[12]=c->r[1]|c->r[1]; // 801FF400
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 801FF404
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF408
  c->r[0]=c->lr; // 801FF40C
  c->r[11]=c->r[12]|c->r[12]; // 801FF410
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FF414
  c->lr=0x801FF41Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FF418
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801FF41C
  c->r[26]=c->r[3]|c->r[3]; // 801FF420
  c->r[27]=c->r[4]|c->r[4]; // 801FF424
  c->r[28]=c->r[5]|c->r[5]; // 801FF428
  c->r[29]=c->r[6]|c->r[6]; // 801FF42C
  if (crb(c,2)) { goto L_801FF43C; } // 801FF430
  c->r[31]=addc(c,~c->r[0],0x00000020u,1); // 801FF434
  goto L_801FF440; // 801FF438
L_801FF43C:;
  c->r[31]=0u+0x00000000u; // 801FF43C
L_801FF440:;
  c->r[3]=c->r[1]+0x00000020u; // 801FF440
  c->r[30]=0u+0x00000000u; // 801FF444
  c->r[4]=0u+0x00000020u; // 801FF448
  c->lr=0x801FF450u; f_801FF714(c); // 801FF44C
  cmps(c,0,(int32_t)c->r[31],0); // 801FF450
  if (crb(c,2)) { goto L_801FF4B0; } // 801FF454
  cmpu(c,0,c->r[31],c->r[28]); // 801FF458
  if (!crb(c,1)) { goto L_801FF464; } // 801FF45C
  c->r[31]=c->r[28]|c->r[28]; // 801FF460
L_801FF464:;
  c->r[4]=c->r[27]|c->r[27]; // 801FF464
  c->r[5]=c->r[31]|c->r[31]; // 801FF468
  c->r[3]=c->r[1]+0x00000020u; // 801FF46C
  c->lr=0x801FF474u; f_801FF708(c); // 801FF470
  c->r[3]=c->r[26]|c->r[26]; // 801FF474
  c->r[5]=c->r[31]|c->r[31]; // 801FF478
  c->r[6]=c->r[29]|c->r[29]; // 801FF47C
  c->r[4]=c->r[1]+0x00000020u; // 801FF480
  c->lr=0x801FF488u; f_80207908(c); // 801FF484
  cmps(c,0,(int32_t)c->r[3],0); // 801FF488
  if (!crb(c,1)) { goto L_801FF578; } // 801FF48C
  cmpu(c,0,c->r[3],c->r[31]); // 801FF490
  c->r[30]=c->r[3]|c->r[3]; // 801FF494
  if (!crb(c,0)) { goto L_801FF4A0; } // 801FF498
  goto L_801FF578; // 801FF49C
L_801FF4A0:;
  c->r[27]=c->r[27]+c->r[3]; // 801FF4A0
  c->r[28]=c->r[28]-c->r[3]; // 801FF4A4
  goto L_801FF4B0; // 801FF4A8
  goto L_801FF578; // 801FF4AC
L_801FF4B0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801FF4B0
  if (!crb(c,1)) { goto L_801FF510; } // 801FF4B4
  c->r[31]=rotl(c->r[28],0)&0xFFFFFFE0u; cr0(c,c->r[31]); // 801FF4B8
  if (crb(c,2)) { goto L_801FF510; } // 801FF4BC
  c->r[3]=c->r[26]|c->r[26]; // 801FF4C0
  c->r[4]=c->r[27]|c->r[27]; // 801FF4C4
  c->r[5]=c->r[31]|c->r[31]; // 801FF4C8
  c->r[6]=c->r[29]|c->r[29]; // 801FF4CC
  c->lr=0x801FF4D4u; f_80207908(c); // 801FF4D0
  cmps(c,0,(int32_t)c->r[3],0); // 801FF4D4
  if (!crb(c,1)) { goto L_801FF4FC; } // 801FF4D8
  cmpu(c,0,c->r[3],c->r[31]); // 801FF4DC
  c->r[30]=c->r[30]+c->r[3]; // 801FF4E0
  if (!crb(c,0)) { goto L_801FF4F0; } // 801FF4E4
  c->r[3]=c->r[30]|c->r[30]; // 801FF4E8
  goto L_801FF578; // 801FF4EC
L_801FF4F0:;
  c->r[27]=c->r[27]+c->r[3]; // 801FF4F0
  c->r[28]=c->r[28]-c->r[3]; // 801FF4F4
  goto L_801FF510; // 801FF4F8
L_801FF4FC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FF4FC
  if (!crb(c,1)) { goto L_801FF578; } // 801FF500
  c->r[3]=c->r[30]|c->r[30]; // 801FF504
  goto L_801FF578; // 801FF508
  goto L_801FF578; // 801FF50C
L_801FF510:;
  cmps(c,0,(int32_t)c->r[28],0); // 801FF510
  if (!crb(c,1)) { goto L_801FF574; } // 801FF514
  c->r[31]=rotl(c->r[28],0)&0x0000001Fu; cr0(c,c->r[31]); // 801FF518
  if (crb(c,2)) { goto L_801FF574; } // 801FF51C
  c->r[3]=c->r[1]+0x00000020u; // 801FF520
  c->r[4]=0u+0x00000020u; // 801FF524
  c->lr=0x801FF52Cu; f_801FF714(c); // 801FF528
  c->r[4]=c->r[27]|c->r[27]; // 801FF52C
  c->r[5]=c->r[31]|c->r[31]; // 801FF530
  c->r[3]=c->r[1]+0x00000020u; // 801FF534
  c->lr=0x801FF53Cu; f_801FF708(c); // 801FF538
  c->r[3]=c->r[26]|c->r[26]; // 801FF53C
  c->r[5]=c->r[31]|c->r[31]; // 801FF540
  c->r[6]=c->r[29]|c->r[29]; // 801FF544
  c->r[4]=c->r[1]+0x00000020u; // 801FF548
  c->lr=0x801FF550u; f_80207908(c); // 801FF54C
  cmps(c,0,(int32_t)c->r[3],0); // 801FF550
  if (!crb(c,1)) { goto L_801FF560; } // 801FF554
  c->r[30]=c->r[30]+c->r[3]; // 801FF558
  goto L_801FF574; // 801FF55C
L_801FF560:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FF560
  if (!crb(c,1)) { goto L_801FF578; } // 801FF564
  c->r[3]=c->r[30]|c->r[30]; // 801FF568
  goto L_801FF578; // 801FF56C
  goto L_801FF578; // 801FF570
L_801FF574:;
  c->r[3]=c->r[30]|c->r[30]; // 801FF574
L_801FF578:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FF578
  c->r[11]=c->r[10]|c->r[10]; // 801FF57C
  c->lr=0x801FF584u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FF580
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FF584
  c->lr=c->r[0]; // 801FF588
  c->r[1]=c->r[10]|c->r[10]; // 801FF58C
  return; // 801FF590
}

// NHTTPi_SocSend
void f_801FF594(Ctx* __restrict c) {
  trace_call(0x801FF594u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF594
  c->r[0]=c->lr; // 801FF598
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FF59C
  c->r[0]=R32(c->r[3]+0x000000ACu); // 801FF5A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FF5A4
  c->r[31]=c->r[3]|c->r[3]; // 801FF5A8
  cmps(c,0,(int32_t)c->r[0],0); // 801FF5AC
  if (!crb(c,1)) { goto L_801FF5C8; } // 801FF5B0
  c->r[4]=c->r[5]|c->r[5]; // 801FF5B4
  c->r[3]=c->r[0]|c->r[0]; // 801FF5B8
  c->r[5]=c->r[6]|c->r[6]; // 801FF5BC
  c->lr=0x801FF5C4u; f_80204BEC(c); // 801FF5C0
  goto L_801FF5DC; // 801FF5C4
L_801FF5C8:;
  c->r[3]=c->r[4]|c->r[4]; // 801FF5C8
  c->r[4]=c->r[5]|c->r[5]; // 801FF5CC
  c->r[5]=c->r[6]|c->r[6]; // 801FF5D0
  c->r[6]=c->r[7]|c->r[7]; // 801FF5D4
  c->lr=0x801FF5DCu; f_801FF3FC(c); // 801FF5D8
L_801FF5DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FF5DC
  if (!crb(c,0)) { goto L_801FF62C; } // 801FF5E0
  c->r[0]=R32(c->r[31]+0x00000000u); // 801FF5E4
  cmps(c,0,(int32_t)c->r[0],0); // 801FF5E8
  if (crb(c,2)) { goto L_801FF5F8; } // 801FF5EC
  c->r[3]=0u+0xFFFFFC16u; // 801FF5F0
  goto L_801FF62C; // 801FF5F4
L_801FF5F8:;
  c->r[0]=R32(c->r[31]+0x000000ACu); // 801FF5F8
  cmps(c,0,(int32_t)c->r[0],0); // 801FF5FC
  if (!crb(c,1)) { goto L_801FF618; } // 801FF600
  c->r[0]=c->r[3]+0x00000007u; // 801FF604
  cmpu(c,0,c->r[0],0x00000001u); // 801FF608
  if (crb(c,1)) { goto L_801FF628; } // 801FF60C
  c->r[3]=0u+0x00000000u; // 801FF610
  goto L_801FF62C; // 801FF614
L_801FF618:;
  cmps(c,0,(int32_t)c->r[3],-56); // 801FF618
  if (!crb(c,2)) { goto L_801FF628; } // 801FF61C
  c->r[3]=0u+0x00000000u; // 801FF620
  goto L_801FF62C; // 801FF624
L_801FF628:;
  c->r[3]=0u+0xFFFFFC17u; // 801FF628
L_801FF62C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FF62C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FF630
  c->lr=c->r[0]; // 801FF634
  c->r[1]=c->r[1]+0x00000010u; // 801FF638
  return; // 801FF63C
}

// NHTTPi_SocCancel
void f_801FF640(Ctx* __restrict c) {
  trace_call(0x801FF640u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF640
  c->r[0]=c->lr; // 801FF644
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FF648
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FF64C
  c->r[31]=c->r[5]|c->r[5]; // 801FF650
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FF654
  c->r[30]=c->r[3]|c->r[3]; // 801FF658
  c->lr=0x801FF660u; f_801FD8D0(c); // 801FF65C
  cmps(c,0,(int32_t)c->r[31],0); // 801FF660
  if (crb(c,0)) { goto L_801FF674; } // 801FF664
  c->r[3]=c->r[31]|c->r[31]; // 801FF668
  c->r[4]=0u+0x00000002u; // 801FF66C
  c->lr=0x801FF674u; f_80207A5C(c); // 801FF670
L_801FF674:;
  c->r[3]=c->r[30]|c->r[30]; // 801FF674
  c->lr=0x801FF67Cu; f_801FD8D4(c); // 801FF678
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FF67C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FF680
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FF684
  c->lr=c->r[0]; // 801FF688
  c->r[1]=c->r[1]+0x00000010u; // 801FF68C
  return; // 801FF690
}

// NHTTPi_resolveHostname
void f_801FF694(Ctx* __restrict c) {
  trace_call(0x801FF694u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF694
  c->r[0]=c->lr; // 801FF698
  c->r[3]=c->r[4]|c->r[4]; // 801FF69C
  c->r[4]=0u+0x00000000u; // 801FF6A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FF6A4
  c->r[6]=c->r[1]+0x00000008u; // 801FF6A8
  c->r[5]=0u+0x00000000u; // 801FF6AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FF6B0
  c->r[31]=0u+0x00000000u; // 801FF6B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FF6B8
  c->lr=0x801FF6C0u; f_80208480(c); // 801FF6BC
  cmps(c,0,(int32_t)c->r[3],0); // 801FF6C0
  if (!crb(c,2)) { goto L_801FF6EC; } // 801FF6C4
  c->r[4]=R32(c->r[1]+0x00000008u); // 801FF6C8
  c->r[3]=c->r[1]+0x0000000Cu; // 801FF6CC
  c->r[5]=0u+0x00000004u; // 801FF6D0
  c->r[4]=R32(c->r[4]+0x00000018u); // 801FF6D4
  c->r[4]=c->r[4]+0x00000004u; // 801FF6D8
  c->lr=0x801FF6E0u; f_801FF708(c); // 801FF6DC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801FF6E0
  c->lr=0x801FF6E8u; f_80208764(c); // 801FF6E4
  goto L_801FF6F0; // 801FF6E8
L_801FF6EC:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FF6EC
L_801FF6F0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FF6F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FF6F4
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801FF6F8
  c->lr=c->r[0]; // 801FF6FC
  c->r[1]=c->r[1]+0x00000020u; // 801FF700
  return; // 801FF704
}

// NHTTPi_memcpy
void f_801FF708(Ctx* __restrict c) {
  trace_call(0x801FF708u);
  f_80004338(c); return; // 801FF708
}

// NHTTPi_strlen
void f_801FF70C(Ctx* __restrict c) {
  trace_call(0x801FF70Cu);
  f_80252384(c); return; // 801FF70C
}

// NHTTPi_strcmp
void f_801FF710(Ctx* __restrict c) {
  trace_call(0x801FF710u);
  f_8025C5C0(c); return; // 801FF710
}

// NHTTPi_memclr
void f_801FF714(Ctx* __restrict c) {
  trace_call(0x801FF714u);
  c->r[5]=c->r[4]|c->r[4]; // 801FF714
  c->r[4]=0u+0x00000000u; // 801FF718
  f_8000443C(c); return; // 801FF71C
}

// NHTTPi_strnicmp
void f_801FF720(Ctx* __restrict c) {
  trace_call(0x801FF720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF720
  c->r[11]=0u+0x00000041u; // 801FF724
  c->r[9]=0u+0x0000005Au; // 801FF728
  c->r[10]=0u+0x00000000u; // 801FF72C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FF730
  c->ctr=c->r[5]; // 801FF734
  cmps(c,0,(int32_t)c->r[5],0); // 801FF738
  if (!crb(c,1)) { goto L_801FF7DC; } // 801FF73C
L_801FF740:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 801FF740
  c->r[3]=c->r[3]+0x00000001u; // 801FF744
  c->r[0]=R8(c->r[4]+0x00000000u); // 801FF748
  c->r[4]=c->r[4]+0x00000001u; // 801FF74C
  c->r[12]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[12]); // 801FF750
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FF754
  if (crb(c,2)) { goto L_801FF764; } // 801FF758
  cmps(c,0,(int32_t)c->r[31],0); // 801FF75C
  if (!crb(c,2)) { goto L_801FF77C; } // 801FF760
L_801FF764:;
  cmps(c,0,(int32_t)c->r[12],0); // 801FF764
  if (!crb(c,2)) { goto L_801FF77C; } // 801FF768
  cmps(c,0,(int32_t)c->r[31],0); // 801FF76C
  if (!crb(c,2)) { goto L_801FF77C; } // 801FF770
  c->r[5]=0u+0x00000000u; // 801FF774
  goto L_801FF7DC; // 801FF778
L_801FF77C:;
  c->r[7]=sraw(c,c->r[31],31); // 801FF77C
  c->r[6]=rotl(c->r[31],1)&0x00000001u; // 801FF780
  c->r[0]=addc(c,~c->r[11],c->r[31],1); // 801FF784
  c->r[8]=addc(c,c->r[7],c->r[10],c->xer_ca); // 801FF788
  c->r[7]=sraw(c,c->r[9],31); // 801FF78C
  c->r[0]=addc(c,~c->r[31],c->r[9],1); // 801FF790
  c->r[0]=addc(c,c->r[7],c->r[6],c->xer_ca); // 801FF794
  c->r[0]=c->r[8]&c->r[0]; cr0(c,c->r[0]); // 801FF798
  if (crb(c,2)) { goto L_801FF7A4; } // 801FF79C
  c->r[31]=c->r[31]+0x00000020u; // 801FF7A0
L_801FF7A4:;
  c->r[7]=sraw(c,c->r[12],31); // 801FF7A4
  c->r[6]=rotl(c->r[12],1)&0x00000001u; // 801FF7A8
  c->r[0]=addc(c,~c->r[11],c->r[12],1); // 801FF7AC
  c->r[8]=addc(c,c->r[7],c->r[10],c->xer_ca); // 801FF7B0
  c->r[7]=sraw(c,c->r[9],31); // 801FF7B4
  c->r[0]=addc(c,~c->r[12],c->r[9],1); // 801FF7B8
  c->r[0]=addc(c,c->r[7],c->r[6],c->xer_ca); // 801FF7BC
  c->r[0]=c->r[8]&c->r[0]; cr0(c,c->r[0]); // 801FF7C0
  if (crb(c,2)) { goto L_801FF7CC; } // 801FF7C4
  c->r[12]=c->r[12]+0x00000020u; // 801FF7C8
L_801FF7CC:;
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[31]); // 801FF7CC
  if (!crb(c,2)) { goto L_801FF7DC; } // 801FF7D0
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801FF7D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FF740; } // 801FF7D8
L_801FF7DC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FF7DC
  c->r[3]=c->r[5]|c->r[5]; // 801FF7E0
  c->r[1]=c->r[1]+0x00000010u; // 801FF7E4
  return; // 801FF7E8
}

// NHTTPi_getUrlEncodedSize
void f_801FF7EC(Ctx* __restrict c) {
  trace_call(0x801FF7ECu);
  c->r[0]=R8(c->r[3]+0x00000000u); // 801FF7EC
  c->r[4]=c->r[3]+0x00000001u; // 801FF7F0
  c->r[3]=0u+0x00000000u; // 801FF7F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FF7F8
  goto L_801FF850; // 801FF7FC
L_801FF800:;
  cmps(c,0,(int32_t)c->r[0],48); // 801FF800
  if (crb(c,0)) { goto L_801FF810; } // 801FF804
  cmps(c,0,(int32_t)c->r[0],57); // 801FF808
  if (!crb(c,1)) { goto L_801FF838; } // 801FF80C
L_801FF810:;
  cmps(c,0,(int32_t)c->r[0],65); // 801FF810
  if (crb(c,0)) { goto L_801FF820; } // 801FF814
  cmps(c,0,(int32_t)c->r[0],90); // 801FF818
  if (!crb(c,1)) { goto L_801FF838; } // 801FF81C
L_801FF820:;
  cmps(c,0,(int32_t)c->r[0],97); // 801FF820
  if (crb(c,0)) { goto L_801FF830; } // 801FF824
  cmps(c,0,(int32_t)c->r[0],122); // 801FF828
  if (!crb(c,1)) { goto L_801FF838; } // 801FF82C
L_801FF830:;
  cmps(c,0,(int32_t)c->r[0],32); // 801FF830
  if (!crb(c,2)) { goto L_801FF840; } // 801FF834
L_801FF838:;
  c->r[3]=c->r[3]+0x00000001u; // 801FF838
  goto L_801FF844; // 801FF83C
L_801FF840:;
  c->r[3]=c->r[3]+0x00000003u; // 801FF840
L_801FF844:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801FF844
  c->r[4]=c->r[4]+0x00000001u; // 801FF848
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FF84C
L_801FF850:;
  cmps(c,0,(int32_t)c->r[0],0); // 801FF850
  if (!crb(c,2)) { IRQCHK(c); goto L_801FF800; } // 801FF854
  return; // 801FF858
}

// NHTTPi_getUrlEncodedSize2
void f_801FF85C(Ctx* __restrict c) {
  trace_call(0x801FF85Cu);
  c->r[0]=R8(c->r[3]+0x00000000u); // 801FF85C
  c->r[5]=c->r[3]+0x00000001u; // 801FF860
  c->r[3]=0u+0x00000000u; // 801FF864
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FF868
  c->ctr=c->r[4]; // 801FF86C
  cmps(c,0,(int32_t)c->r[4],0); // 801FF870
  if (!crb(c,1)) return; // 801FF874
L_801FF878:;
  cmps(c,0,(int32_t)c->r[0],48); // 801FF878
  if (crb(c,0)) { goto L_801FF888; } // 801FF87C
  cmps(c,0,(int32_t)c->r[0],57); // 801FF880
  if (!crb(c,1)) { goto L_801FF8B0; } // 801FF884
L_801FF888:;
  cmps(c,0,(int32_t)c->r[0],65); // 801FF888
  if (crb(c,0)) { goto L_801FF898; } // 801FF88C
  cmps(c,0,(int32_t)c->r[0],90); // 801FF890
  if (!crb(c,1)) { goto L_801FF8B0; } // 801FF894
L_801FF898:;
  cmps(c,0,(int32_t)c->r[0],97); // 801FF898
  if (crb(c,0)) { goto L_801FF8A8; } // 801FF89C
  cmps(c,0,(int32_t)c->r[0],122); // 801FF8A0
  if (!crb(c,1)) { goto L_801FF8B0; } // 801FF8A4
L_801FF8A8:;
  cmps(c,0,(int32_t)c->r[0],32); // 801FF8A8
  if (!crb(c,2)) { goto L_801FF8B8; } // 801FF8AC
L_801FF8B0:;
  c->r[3]=c->r[3]+0x00000001u; // 801FF8B0
  goto L_801FF8BC; // 801FF8B4
L_801FF8B8:;
  c->r[3]=c->r[3]+0x00000003u; // 801FF8B8
L_801FF8BC:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801FF8BC
  c->r[5]=c->r[5]+0x00000001u; // 801FF8C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FF8C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FF878; } // 801FF8C8
  return; // 801FF8CC
}

// NHTTPi_encodeUrlChar
void f_801FF8D0(Ctx* __restrict c) {
  trace_call(0x801FF8D0u);
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801FF8D0
  cmps(c,0,(int32_t)c->r[0],32); // 801FF8D4
  if (!crb(c,2)) { goto L_801FF8EC; } // 801FF8D8
  c->r[0]=0u+0x0000002Bu; // 801FF8DC
  W8(c->r[3]+0x00000000u,c->r[0]); // 801FF8E0
  c->r[3]=0u+0x00000001u; // 801FF8E4
  return; // 801FF8E8
L_801FF8EC:;
  cmps(c,0,(int32_t)c->r[0],48); // 801FF8EC
  if (crb(c,0)) { goto L_801FF8FC; } // 801FF8F0
  cmps(c,0,(int32_t)c->r[0],57); // 801FF8F4
  if (!crb(c,1)) { goto L_801FF924; } // 801FF8F8
L_801FF8FC:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801FF8FC
  cmps(c,0,(int32_t)c->r[0],65); // 801FF900
  if (crb(c,0)) { goto L_801FF910; } // 801FF904
  cmps(c,0,(int32_t)c->r[0],90); // 801FF908
  if (!crb(c,1)) { goto L_801FF924; } // 801FF90C
L_801FF910:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801FF910
  cmps(c,0,(int32_t)c->r[0],97); // 801FF914
  if (crb(c,0)) { goto L_801FF930; } // 801FF918
  cmps(c,0,(int32_t)c->r[0],122); // 801FF91C
  if (crb(c,1)) { goto L_801FF930; } // 801FF920
L_801FF924:;
  W8(c->r[3]+0x00000000u,c->r[4]); // 801FF924
  c->r[3]=0u+0x00000001u; // 801FF928
  return; // 801FF92C
L_801FF930:;
  c->r[5]=rotl(c->r[4],28)&0x0000000Fu; // 801FF930
  c->r[0]=0u+0x00000025u; // 801FF934
  cmps(c,0,(int32_t)c->r[5],10); // 801FF938
  W8(c->r[3]+0x00000000u,c->r[0]); // 801FF93C
  c->r[4]=rotl(c->r[4],0)&0x0000000Fu; // 801FF940
  c->r[0]=c->r[5]+0x00000037u; // 801FF944
  if (!crb(c,0)) { goto L_801FF950; } // 801FF948
  c->r[0]=c->r[5]+0x00000030u; // 801FF94C
L_801FF950:;
  cmps(c,0,(int32_t)c->r[4],10); // 801FF950
  W8(c->r[3]+0x00000001u,c->r[0]); // 801FF954
  c->r[0]=c->r[4]+0x00000037u; // 801FF958
  if (!crb(c,0)) { goto L_801FF964; } // 801FF95C
  c->r[0]=c->r[4]+0x00000030u; // 801FF960
L_801FF964:;
  W8(c->r[3]+0x00000002u,c->r[0]); // 801FF964
  c->r[3]=0u+0x00000003u; // 801FF968
  return; // 801FF96C
}

// NHTTPi_strToHex
void f_801FF970(Ctx* __restrict c) {
  trace_call(0x801FF970u);
  cmps(c,0,(int32_t)c->r[4],8); // 801FF970
  if (!crb(c,1)) { goto L_801FF980; } // 801FF974
  c->r[3]=0u+0xFFFFFFFFu; // 801FF978
  return; // 801FF97C
L_801FF980:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801FF980
  c->r[5]=c->r[4]+0xFFFFFFF8u; // 801FF984
  c->r[5]=cntlz(c->r[5]); // 801FF988
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FF98C
  c->r[0]=c->r[6]^0x00000037u; // 801FF990
  c->r[7]=rotl(c->r[5],27)&0x07FFFFFFu; // 801FF994
  c->r[5]=sraw(c,c->r[0],1); // 801FF998
  c->r[0]=c->r[0]&c->r[6]; // 801FF99C
  c->r[0]=c->r[5]-c->r[0]; // 801FF9A0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801FF9A4
  c->r[0]=c->r[7]&c->r[0]; cr0(c,c->r[0]); // 801FF9A8
  if (crb(c,2)) { goto L_801FF9B8; } // 801FF9AC
  c->r[3]=0u+0xFFFFFFFFu; // 801FF9B0
  return; // 801FF9B4
L_801FF9B8:;
  c->r[11]=0u+0x00000000u; // 801FF9B8
  c->r[12]=0u+0x00000000u; // 801FF9BC
  c->r[9]=0u+0x00000041u; // 801FF9C0
  c->r[8]=0u+0x00000000u; // 801FF9C4
  c->r[6]=0u+0x0000005Au; // 801FF9C8
  c->ctr=c->r[4]; // 801FF9CC
  cmps(c,0,(int32_t)c->r[4],0); // 801FF9D0
  if (!crb(c,1)) { goto L_801FFA8C; } // 801FF9D4
L_801FF9D8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801FF9D8
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FF9DC
  c->r[5]=sraw(c,c->r[10],31); // 801FF9E0
  c->r[0]=addc(c,~c->r[9],c->r[10],1); // 801FF9E4
  c->r[4]=rotl(c->r[10],1)&0x00000001u; // 801FF9E8
  c->r[7]=addc(c,c->r[5],c->r[8],c->xer_ca); // 801FF9EC
  c->r[5]=sraw(c,c->r[6],31); // 801FF9F0
  c->r[0]=addc(c,~c->r[10],c->r[6],1); // 801FF9F4
  c->r[0]=addc(c,c->r[5],c->r[4],c->xer_ca); // 801FF9F8
  c->r[0]=c->r[7]&c->r[0]; cr0(c,c->r[0]); // 801FF9FC
  if (crb(c,2)) { goto L_801FFA08; } // 801FFA00
  c->r[10]=c->r[10]+0x00000020u; // 801FFA04
L_801FFA08:;
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 801FFA08
  cmps(c,0,(int32_t)c->r[4],48); // 801FFA0C
  if (crb(c,0)) { goto L_801FFA30; } // 801FFA10
  cmps(c,0,(int32_t)c->r[4],57); // 801FFA14
  if (crb(c,1)) { goto L_801FFA30; } // 801FFA18
  c->r[0]=rotl(c->r[11],4)&0xFFFFFFF0u; // 801FFA1C
  c->r[12]=0u+0x00000001u; // 801FFA20
  c->r[4]=c->r[4]+c->r[0]; // 801FFA24
  c->r[11]=c->r[4]+0xFFFFFFD0u; // 801FFA28
  goto L_801FFA84; // 801FFA2C
L_801FFA30:;
  cmps(c,0,(int32_t)c->r[4],97); // 801FFA30
  if (crb(c,0)) { goto L_801FFA54; } // 801FFA34
  cmps(c,0,(int32_t)c->r[4],102); // 801FFA38
  if (crb(c,1)) { goto L_801FFA54; } // 801FFA3C
  c->r[0]=rotl(c->r[11],4)&0xFFFFFFF0u; // 801FFA40
  c->r[12]=0u+0x00000001u; // 801FFA44
  c->r[4]=c->r[4]+c->r[0]; // 801FFA48
  c->r[11]=c->r[4]+0xFFFFFFA9u; // 801FFA4C
  goto L_801FFA84; // 801FFA50
L_801FFA54:;
  cmps(c,0,(int32_t)c->r[12],0); // 801FFA54
  if (crb(c,2)) { goto L_801FFA6C; } // 801FFA58
  cmps(c,0,(int32_t)c->r[4],32); // 801FFA5C
  if (crb(c,2)) { goto L_801FFA8C; } // 801FFA60
  cmps(c,0,(int32_t)c->r[4],0); // 801FFA64
  if (crb(c,2)) { goto L_801FFA8C; } // 801FFA68
L_801FFA6C:;
  cmps(c,0,(int32_t)c->r[12],0); // 801FFA6C
  if (!crb(c,2)) { goto L_801FFA7C; } // 801FFA70
  cmps(c,0,(int32_t)c->r[4],32); // 801FFA74
  if (crb(c,2)) { goto L_801FFA84; } // 801FFA78
L_801FFA7C:;
  c->r[3]=0u+0xFFFFFFFFu; // 801FFA7C
  return; // 801FFA80
L_801FFA84:;
  c->r[3]=c->r[3]+0x00000001u; // 801FFA84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FF9D8; } // 801FFA88
L_801FFA8C:;
  c->r[3]=c->r[11]|c->r[11]; // 801FFA8C
  return; // 801FFA90
}

// NHTTPi_strToInt
void f_801FFA94(Ctx* __restrict c) {
  trace_call(0x801FFA94u);
  cmps(c,0,(int32_t)c->r[4],10); // 801FFA94
  if (!crb(c,1)) { goto L_801FFAA4; } // 801FFA98
  c->r[3]=0u+0xFFFFFFFFu; // 801FFA9C
  return; // 801FFAA0
L_801FFAA4:;
  c->r[5]=0u+0x00000000u; // 801FFAA4
  c->r[6]=0u+0x00000000u; // 801FFAA8
  c->ctr=c->r[4]; // 801FFAAC
  cmps(c,0,(int32_t)c->r[4],0); // 801FFAB0
  if (!crb(c,1)) { goto L_801FFB2C; } // 801FFAB4
L_801FFAB8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801FFAB8
  cmps(c,0,(int32_t)c->r[6],0); // 801FFABC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FFAC0
  if (crb(c,2)) { goto L_801FFAD8; } // 801FFAC4
  cmps(c,0,(int32_t)c->r[4],32); // 801FFAC8
  if (crb(c,2)) { goto L_801FFB2C; } // 801FFACC
  cmps(c,0,(int32_t)c->r[4],0); // 801FFAD0
  if (crb(c,2)) { goto L_801FFB2C; } // 801FFAD4
L_801FFAD8:;
  cmps(c,0,(int32_t)c->r[6],0); // 801FFAD8
  if (!crb(c,2)) { goto L_801FFAE8; } // 801FFADC
  cmps(c,0,(int32_t)c->r[4],32); // 801FFAE0
  if (crb(c,2)) { goto L_801FFB24; } // 801FFAE4
L_801FFAE8:;
  cmps(c,0,(int32_t)c->r[4],48); // 801FFAE8
  if (crb(c,0)) { goto L_801FFAF8; } // 801FFAEC
  cmps(c,0,(int32_t)c->r[4],57); // 801FFAF0
  if (!crb(c,1)) { goto L_801FFB00; } // 801FFAF4
L_801FFAF8:;
  c->r[3]=0u+0xFFFFFFFFu; // 801FFAF8
  return; // 801FFAFC
L_801FFB00:;
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)10); // 801FFB00
  c->r[7]=c->r[5]|c->r[5]; // 801FFB04
  c->r[6]=0u+0x00000001u; // 801FFB08
  c->r[4]=c->r[4]+c->r[0]; // 801FFB0C
  c->r[5]=c->r[4]+0xFFFFFFD0u; // 801FFB10
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[5]); // 801FFB14
  if (!crb(c,1)) { goto L_801FFB24; } // 801FFB18
  c->r[3]=0u+0xFFFFFFFFu; // 801FFB1C
  return; // 801FFB20
L_801FFB24:;
  c->r[3]=c->r[3]+0x00000001u; // 801FFB24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FFAB8; } // 801FFB28
L_801FFB2C:;
  c->r[3]=c->r[5]|c->r[5]; // 801FFB2C
  return; // 801FFB30
}

// NHTTPi_intToStr
void f_801FFB34(Ctx* __restrict c) {
  trace_call(0x801FFB34u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFB34
  c->r[0]=c->lr; // 801FFB38
  W32(c->r[1]+0x00000054u,c->r[0]); // 801FFB3C
  c->r[11]=c->r[1]+0x00000050u; // 801FFB40
  c->lr=0x801FFB48u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FFB44
  c->r[7]=0u+0x80280000u; // 801FFB48
  {uint32_t ea=c->r[7]+0x00001A30u; c->r[29]=R32(ea); c->r[7]=ea;} // 801FFB4C
  c->r[0]=0u+0x00000003u; // 801FFB50
  c->r[5]=c->r[3]|c->r[3]; // 801FFB54
  c->r[30]=R32(c->r[7]+0x00000004u); // 801FFB58
  c->r[28]=c->r[1]+0x00000008u; // 801FFB5C
  c->r[31]=R32(c->r[7]+0x00000008u); // 801FFB60
  c->r[25]=0u+0x00000000u; // 801FFB64
  c->r[12]=R32(c->r[7]+0x0000000Cu); // 801FFB68
  c->r[26]=0u+0x00000000u; // 801FFB6C
  c->r[11]=R32(c->r[7]+0x00000010u); // 801FFB70
  c->r[27]=0u+0x00000000u; // 801FFB74
  c->r[10]=R32(c->r[7]+0x00000014u); // 801FFB78
  c->r[6]=0u+0x00000030u; // 801FFB7C
  c->r[9]=R32(c->r[7]+0x00000018u); // 801FFB80
  c->r[8]=R32(c->r[7]+0x0000001Cu); // 801FFB84
  c->r[7]=R32(c->r[7]+0x00000020u); // 801FFB88
  W32(c->r[1]+0x00000008u,c->r[29]); // 801FFB8C
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 801FFB90
  W32(c->r[1]+0x00000010u,c->r[31]); // 801FFB94
  W32(c->r[1]+0x00000014u,c->r[12]); // 801FFB98
  W32(c->r[1]+0x00000018u,c->r[11]); // 801FFB9C
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 801FFBA0
  W32(c->r[1]+0x00000020u,c->r[9]); // 801FFBA4
  W32(c->r[1]+0x00000024u,c->r[8]); // 801FFBA8
  W32(c->r[1]+0x00000028u,c->r[7]); // 801FFBAC
  c->ctr=c->r[0]; // 801FFBB0
L_801FFBB4:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 801FFBB4
  cmpu(c,0,c->r[4],c->r[0]); // 801FFBB8
  if (crb(c,0)) { goto L_801FFBE4; } // 801FFBBC
  c->r[8]=divwu(c->r[4],c->r[0]); // 801FFBC0
  c->r[26]=0u+0x00000001u; // 801FFBC4
  c->r[25]=c->r[25]+0x00000001u; // 801FFBC8
  c->r[7]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[0]); // 801FFBCC
  c->r[0]=c->r[8]+0x00000030u; // 801FFBD0
  W8(c->r[5]+0x00000000u,c->r[0]); // 801FFBD4
  c->r[5]=c->r[5]+0x00000001u; // 801FFBD8
  c->r[4]=c->r[4]-c->r[7]; // 801FFBDC
  goto L_801FFBF8; // 801FFBE0
L_801FFBE4:;
  cmps(c,0,(int32_t)c->r[26],0); // 801FFBE4
  if (crb(c,2)) { goto L_801FFBF8; } // 801FFBE8
  W8(c->r[5]+0x00000000u,c->r[6]); // 801FFBEC
  c->r[25]=c->r[25]+0x00000001u; // 801FFBF0
  c->r[5]=c->r[5]+0x00000001u; // 801FFBF4
L_801FFBF8:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 801FFBF8
  cmpu(c,0,c->r[4],c->r[0]); // 801FFBFC
  if (crb(c,0)) { goto L_801FFC28; } // 801FFC00
  c->r[8]=divwu(c->r[4],c->r[0]); // 801FFC04
  c->r[26]=0u+0x00000001u; // 801FFC08
  c->r[25]=c->r[25]+0x00000001u; // 801FFC0C
  c->r[7]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[0]); // 801FFC10
  c->r[0]=c->r[8]+0x00000030u; // 801FFC14
  W8(c->r[5]+0x00000000u,c->r[0]); // 801FFC18
  c->r[5]=c->r[5]+0x00000001u; // 801FFC1C
  c->r[4]=c->r[4]-c->r[7]; // 801FFC20
  goto L_801FFC3C; // 801FFC24
L_801FFC28:;
  cmps(c,0,(int32_t)c->r[26],0); // 801FFC28
  if (crb(c,2)) { goto L_801FFC3C; } // 801FFC2C
  W8(c->r[5]+0x00000000u,c->r[6]); // 801FFC30
  c->r[25]=c->r[25]+0x00000001u; // 801FFC34
  c->r[5]=c->r[5]+0x00000001u; // 801FFC38
L_801FFC3C:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 801FFC3C
  cmpu(c,0,c->r[4],c->r[0]); // 801FFC40
  if (crb(c,0)) { goto L_801FFC6C; } // 801FFC44
  c->r[8]=divwu(c->r[4],c->r[0]); // 801FFC48
  c->r[26]=0u+0x00000001u; // 801FFC4C
  c->r[25]=c->r[25]+0x00000001u; // 801FFC50
  c->r[7]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[0]); // 801FFC54
  c->r[0]=c->r[8]+0x00000030u; // 801FFC58
  W8(c->r[5]+0x00000000u,c->r[0]); // 801FFC5C
  c->r[5]=c->r[5]+0x00000001u; // 801FFC60
  c->r[4]=c->r[4]-c->r[7]; // 801FFC64
  goto L_801FFC80; // 801FFC68
L_801FFC6C:;
  cmps(c,0,(int32_t)c->r[26],0); // 801FFC6C
  if (crb(c,2)) { goto L_801FFC80; } // 801FFC70
  W8(c->r[5]+0x00000000u,c->r[6]); // 801FFC74
  c->r[25]=c->r[25]+0x00000001u; // 801FFC78
  c->r[5]=c->r[5]+0x00000001u; // 801FFC7C
L_801FFC80:;
  c->r[28]=c->r[28]+0x0000000Cu; // 801FFC80
  c->r[27]=c->r[27]+0x00000002u; // 801FFC84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FFBB4; } // 801FFC88
  c->r[0]=c->r[4]+0x00000030u; // 801FFC8C
  c->r[11]=c->r[1]+0x00000050u; // 801FFC90
  W8(c->r[3]+c->r[25],c->r[0]); // 801FFC94
  c->r[3]=c->r[25]+0x00000001u; // 801FFC98
  c->lr=0x801FFCA0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FFC9C
  c->r[0]=R32(c->r[1]+0x00000054u); // 801FFCA0
  c->lr=c->r[0]; // 801FFCA4
  c->r[1]=c->r[1]+0x00000050u; // 801FFCA8
  return; // 801FFCAC
}

// NHTTPi_compareToken
void f_801FFCB0(Ctx* __restrict c) {
  trace_call(0x801FFCB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFCB0
  c->r[10]=0u+0x00000041u; // 801FFCB4
  c->r[7]=0u+0x0000005Au; // 801FFCB8
  c->r[9]=0u+0x00000000u; // 801FFCBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FFCC0
  goto L_801FFCE8; // 801FFCC4
L_801FFCC8:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[31]; cr0(c,c->r[0]); // 801FFCC8
  if (crb(c,2)) { goto L_801FFCD8; } // 801FFCCC
  cmps(c,0,(int32_t)c->r[0],32); // 801FFCD0
  if (!crb(c,2)) { goto L_801FFCE0; } // 801FFCD4
L_801FFCD8:;
  c->r[3]=0u+0x00000000u; // 801FFCD8
  goto L_801FFD58; // 801FFCDC
L_801FFCE0:;
  c->r[3]=c->r[3]+0x00000001u; // 801FFCE0
  c->r[4]=c->r[4]+0x00000001u; // 801FFCE4
L_801FFCE8:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801FFCE8
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FFCEC
  c->r[6]=sraw(c,c->r[11],31); // 801FFCF0
  c->r[0]=addc(c,~c->r[10],c->r[11],1); // 801FFCF4
  c->r[5]=rotl(c->r[11],1)&0x00000001u; // 801FFCF8
  c->r[8]=addc(c,c->r[6],c->r[9],c->xer_ca); // 801FFCFC
  c->r[12]=c->r[11]+0x00000020u; // 801FFD00
  c->r[6]=sraw(c,c->r[7],31); // 801FFD04
  c->r[0]=addc(c,~c->r[11],c->r[7],1); // 801FFD08
  c->r[0]=addc(c,c->r[6],c->r[5],c->xer_ca); // 801FFD0C
  c->r[0]=c->r[8]&c->r[0]; cr0(c,c->r[0]); // 801FFD10
  if (!crb(c,2)) { goto L_801FFD1C; } // 801FFD14
  c->r[12]=c->r[11]|c->r[11]; // 801FFD18
L_801FFD1C:;
  c->r[31]=R8(c->r[3]+0x00000000u); // 801FFD1C
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 801FFD20
  c->r[6]=sraw(c,c->r[11],31); // 801FFD24
  c->r[0]=addc(c,~c->r[10],c->r[11],1); // 801FFD28
  c->r[5]=rotl(c->r[11],1)&0x00000001u; // 801FFD2C
  c->r[8]=addc(c,c->r[6],c->r[9],c->xer_ca); // 801FFD30
  c->r[6]=sraw(c,c->r[7],31); // 801FFD34
  c->r[0]=addc(c,~c->r[11],c->r[7],1); // 801FFD38
  c->r[0]=addc(c,c->r[6],c->r[5],c->xer_ca); // 801FFD3C
  c->r[0]=c->r[8]&c->r[0]; cr0(c,c->r[0]); // 801FFD40
  if (crb(c,2)) { goto L_801FFD4C; } // 801FFD44
  c->r[11]=c->r[11]+0x00000020u; // 801FFD48
L_801FFD4C:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[12]); // 801FFD4C
  if (crb(c,2)) { IRQCHK(c); goto L_801FFCC8; } // 801FFD50
  c->r[3]=0u+0xFFFFFFFFu; // 801FFD54
L_801FFD58:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FFD58
  c->r[1]=c->r[1]+0x00000010u; // 801FFD5C
  return; // 801FFD60
}

// NHTTPi_strtonum
void f_801FFD64(Ctx* __restrict c) {
  trace_call(0x801FFD64u);
  c->r[12]=0u+0x00000000u; // 801FFD64
  c->r[11]=0u+0x00000000u; // 801FFD68
  c->r[9]=0u+0x00000030u; // 801FFD6C
  c->r[8]=0u+0x00000000u; // 801FFD70
  c->r[6]=0u+0x00000039u; // 801FFD74
  c->ctr=c->r[4]; // 801FFD78
  cmps(c,0,(int32_t)c->r[4],0); // 801FFD7C
  if (crb(c,2)) { goto L_801FFDE0; } // 801FFD80
L_801FFD84:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801FFD84
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FFD88
  cmps(c,0,(int32_t)c->r[10],32); // 801FFD8C
  if (crb(c,2)) { goto L_801FFDD8; } // 801FFD90
  c->r[5]=sraw(c,c->r[10],31); // 801FFD94
  c->r[4]=rotl(c->r[10],1)&0x00000001u; // 801FFD98
  c->r[0]=addc(c,~c->r[9],c->r[10],1); // 801FFD9C
  c->r[7]=addc(c,c->r[5],c->r[8],c->xer_ca); // 801FFDA0
  c->r[5]=sraw(c,c->r[6],31); // 801FFDA4
  c->r[0]=addc(c,~c->r[10],c->r[6],1); // 801FFDA8
  c->r[0]=addc(c,c->r[5],c->r[4],c->xer_ca); // 801FFDAC
  c->r[0]=c->r[7]&c->r[0]; cr0(c,c->r[0]); // 801FFDB0
  if (crb(c,2)) { goto L_801FFDD8; } // 801FFDB4
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)10); // 801FFDB8
  c->r[12]=c->r[12]+0x00000001u; // 801FFDBC
  cmps(c,0,(int32_t)c->r[12],9); // 801FFDC0
  c->r[4]=c->r[10]+c->r[0]; // 801FFDC4
  c->r[11]=c->r[4]+0xFFFFFFD0u; // 801FFDC8
  if (!crb(c,1)) { goto L_801FFDD8; } // 801FFDCC
  c->r[3]=0u+0xFFFFFFFFu; // 801FFDD0
  return; // 801FFDD4
L_801FFDD8:;
  c->r[3]=c->r[3]+0x00000001u; // 801FFDD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FFD84; } // 801FFDDC
L_801FFDE0:;
  cmps(c,0,(int32_t)c->r[12],0); // 801FFDE0
  c->r[3]=0u+0xFFFFFFFFu; // 801FFDE4
  if (crb(c,2)) return; // 801FFDE8
  c->r[3]=c->r[11]|c->r[11]; // 801FFDEC
  return; // 801FFDF0
}

// NHTTPi_memfind
void f_801FFDF4(Ctx* __restrict c) {
  trace_call(0x801FFDF4u);
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801FFDF4
  if (!crb(c,0)) { goto L_801FFE04; } // 801FFDF8
  c->r[3]=0u+0xFFFFFFFFu; // 801FFDFC
  return; // 801FFE00
L_801FFE04:;
  c->r[7]=c->r[4]-c->r[6]; // 801FFE04
  c->r[4]=c->r[3]|c->r[3]; // 801FFE08
  c->r[10]=c->r[7]+0x00000001u; // 801FFE0C
  c->r[11]=0u+0x00000000u; // 801FFE10
  goto L_801FFE90; // 801FFE14
L_801FFE18:;
  c->r[7]=R8(c->r[5]+0x00000000u); // 801FFE18
  c->r[0]=R8(c->r[4]+0x00000000u); // 801FFE1C
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801FFE20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FFE24
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801FFE28
  if (!crb(c,2)) { goto L_801FFE88; } // 801FFE2C
  c->r[7]=c->r[3]+c->r[11]; // 801FFE30
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801FFE34
  c->r[8]=c->r[7]+0x00000001u; // 801FFE38
  c->r[12]=0u+0x00000001u; // 801FFE3C
  c->r[7]=c->r[5]+0x00000001u; // 801FFE40
  c->ctr=c->r[0]; // 801FFE44
  cmps(c,0,(int32_t)c->r[6],1); // 801FFE48
  if (!crb(c,1)) { goto L_801FFE78; } // 801FFE4C
L_801FFE50:;
  c->r[9]=R8(c->r[8]+0x00000000u); // 801FFE50
  c->r[0]=R8(c->r[7]+0x00000000u); // 801FFE54
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[9]; // 801FFE58
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FFE5C
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 801FFE60
  if (!crb(c,2)) { goto L_801FFE78; } // 801FFE64
  c->r[12]=c->r[12]+0x00000001u; // 801FFE68
  c->r[7]=c->r[7]+0x00000001u; // 801FFE6C
  c->r[8]=c->r[8]+0x00000001u; // 801FFE70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FFE50; } // 801FFE74
L_801FFE78:;
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[6]); // 801FFE78
  if (!crb(c,2)) { goto L_801FFE88; } // 801FFE7C
  c->r[3]=0u+0x00000000u; // 801FFE80
  return; // 801FFE84
L_801FFE88:;
  c->r[11]=c->r[11]+0x00000001u; // 801FFE88
  c->r[4]=c->r[4]+0x00000001u; // 801FFE8C
L_801FFE90:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[10]); // 801FFE90
  if (crb(c,0)) { IRQCHK(c); goto L_801FFE18; } // 801FFE94
  c->r[3]=0u+0xFFFFFFFFu; // 801FFE98
  return; // 801FFE9C
}

// NHTTPi_Base64Encode
void f_801FFEA0(Ctx* __restrict c) {
  trace_call(0x801FFEA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFEA0
  c->r[0]=c->lr; // 801FFEA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FFEA8
  c->r[11]=c->r[1]+0x00000020u; // 801FFEAC
  c->lr=0x801FFEB4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FFEB0
  c->r[28]=c->r[3]|c->r[3]; // 801FFEB4
  c->r[29]=c->r[4]|c->r[4]; // 801FFEB8
  c->r[31]=0u+0x802F0000u; // 801FFEBC
  c->r[30]=c->r[28]|c->r[28]; // 801FFEC0
  c->r[3]=c->r[29]|c->r[29]; // 801FFEC4
  c->r[31]=c->r[31]+0xFFFF9AE8u; // 801FFEC8
  c->lr=0x801FFED0u; f_80252384(c); // 801FFECC
  c->r[4]=c->r[3]+0x00000002u; // 801FFED0
  c->r[0]=0u+0x00000003u; // 801FFED4
  c->r[4]=divwu(c->r[4],c->r[0]); // 801FFED8
  cmps(c,0,(int32_t)c->r[3],0); // 801FFEDC
  c->r[27]=0u+0x00000000u; // 801FFEE0
  if (!crb(c,1)) { goto L_80200024; } // 801FFEE4
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 801FFEE8
  c->r[27]=(uint32_t)((int32_t)c->r[4]*(int32_t)3); // 801FFEEC
  c->ctr=c->r[0]; // 801FFEF0
  if (crb(c,2)) { goto L_801FFFBC; } // 801FFEF4
L_801FFEF8:;
  c->r[12]=R8(c->r[29]+0x00000000u); // 801FFEF8
  c->r[10]=R8(c->r[29]+0x00000001u); // 801FFEFC
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[12]; // 801FFF00
  c->r[9]=rotl(c->r[12],4)&0x00000030u; // 801FFF04
  c->r[11]=sraw(c,c->r[11],2); // 801FFF08
  c->r[7]=R8(c->r[29]+0x00000002u); // 801FFF0C
  c->r[11]=R8(c->r[31]+c->r[11]); // 801FFF10
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 801FFF14
  c->r[8]=rotl(c->r[10],2)&0x0000003Cu; // 801FFF18
  c->r[9]=c->r[31]+c->r[9]; // 801FFF1C
  W8(c->r[30]+0x00000000u,c->r[11]); // 801FFF20
  c->r[10]=sraw(c,c->r[5],4); // 801FFF24
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801FFF28
  c->r[0]=rotl(c->r[7],0)&0x0000003Fu; // 801FFF2C
  c->r[9]=R8(c->r[10]+c->r[9]); // 801FFF30
  c->r[5]=c->r[31]+c->r[8]; // 801FFF34
  c->r[12]=R8(c->r[29]+0x00000003u); // 801FFF38
  c->r[6]=sraw(c,c->r[6],6); // 801FFF3C
  W8(c->r[30]+0x00000001u,c->r[9]); // 801FFF40
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[12]; // 801FFF44
  c->r[10]=R8(c->r[29]+0x00000004u); // 801FFF48
  c->r[5]=R8(c->r[6]+c->r[5]); // 801FFF4C
  c->r[9]=rotl(c->r[12],4)&0x00000030u; // 801FFF50
  c->r[7]=R8(c->r[29]+0x00000005u); // 801FFF54
  c->r[11]=sraw(c,c->r[11],2); // 801FFF58
  W8(c->r[30]+0x00000002u,c->r[5]); // 801FFF5C
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 801FFF60
  c->r[8]=rotl(c->r[10],2)&0x0000003Cu; // 801FFF64
  c->r[9]=c->r[31]+c->r[9]; // 801FFF68
  c->r[0]=R8(c->r[31]+c->r[0]); // 801FFF6C
  c->r[10]=sraw(c,c->r[5],4); // 801FFF70
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801FFF74
  c->r[5]=c->r[31]+c->r[8]; // 801FFF78
  W8(c->r[30]+0x00000003u,c->r[0]); // 801FFF7C
  c->r[6]=sraw(c,c->r[6],6); // 801FFF80
  c->r[0]=rotl(c->r[7],0)&0x0000003Fu; // 801FFF84
  c->r[29]=c->r[29]+0x00000006u; // 801FFF88
  c->r[11]=R8(c->r[31]+c->r[11]); // 801FFF8C
  W8(c->r[30]+0x00000004u,c->r[11]); // 801FFF90
  c->r[9]=R8(c->r[10]+c->r[9]); // 801FFF94
  W8(c->r[30]+0x00000005u,c->r[9]); // 801FFF98
  c->r[5]=R8(c->r[6]+c->r[5]); // 801FFF9C
  W8(c->r[30]+0x00000006u,c->r[5]); // 801FFFA0
  c->r[0]=R8(c->r[31]+c->r[0]); // 801FFFA4
  W8(c->r[30]+0x00000007u,c->r[0]); // 801FFFA8
  c->r[30]=c->r[30]+0x00000008u; // 801FFFAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FFEF8; } // 801FFFB0
  c->r[4]=c->r[4]&0x00000001u; cr0(c,c->r[4]); // 801FFFB4
  if (crb(c,2)) { goto L_80200024; } // 801FFFB8
L_801FFFBC:;
  c->ctr=c->r[4]; // 801FFFBC
L_801FFFC0:;
  c->r[12]=R8(c->r[29]+0x00000000u); // 801FFFC0
  c->r[10]=R8(c->r[29]+0x00000001u); // 801FFFC4
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[12]; // 801FFFC8
  c->r[7]=R8(c->r[29]+0x00000002u); // 801FFFCC
  c->r[11]=sraw(c,c->r[11],2); // 801FFFD0
  c->r[9]=rotl(c->r[12],4)&0x00000030u; // 801FFFD4
  c->r[11]=R8(c->r[31]+c->r[11]); // 801FFFD8
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 801FFFDC
  c->r[8]=rotl(c->r[10],2)&0x0000003Cu; // 801FFFE0
  c->r[9]=c->r[31]+c->r[9]; // 801FFFE4
  W8(c->r[30]+0x00000000u,c->r[11]); // 801FFFE8
  c->r[10]=sraw(c,c->r[5],4); // 801FFFEC
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801FFFF0
  c->r[5]=c->r[31]+c->r[8]; // 801FFFF4
  c->r[9]=R8(c->r[10]+c->r[9]); // 801FFFF8
  c->r[6]=sraw(c,c->r[6],6); // 801FFFFC
  c->r[0]=rotl(c->r[7],0)&0x0000003Fu; // 80200000
  c->r[29]=c->r[29]+0x00000003u; // 80200004
  W8(c->r[30]+0x00000001u,c->r[9]); // 80200008
  c->r[5]=R8(c->r[6]+c->r[5]); // 8020000C
  W8(c->r[30]+0x00000002u,c->r[5]); // 80200010
  c->r[0]=R8(c->r[31]+c->r[0]); // 80200014
  W8(c->r[30]+0x00000003u,c->r[0]); // 80200018
  c->r[30]=c->r[30]+0x00000004u; // 8020001C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FFFC0; } // 80200020
L_80200024:;
  c->r[0]=c->r[3]+0x00000001u; // 80200024
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80200028
  if (!crb(c,2)) { goto L_8020003C; } // 8020002C
  c->r[0]=0u+0x0000003Du; // 80200030
  W8(c->r[30]+0xFFFFFFFFu,c->r[0]); // 80200034
  goto L_80200054; // 80200038
L_8020003C:;
  c->r[0]=c->r[3]+0x00000002u; // 8020003C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80200040
  if (!crb(c,2)) { goto L_80200054; } // 80200044
  c->r[0]=0u+0x0000003Du; // 80200048
  W8(c->r[30]+0xFFFFFFFEu,c->r[0]); // 8020004C
  W8(c->r[30]+0xFFFFFFFFu,c->r[0]); // 80200050
L_80200054:;
  c->r[0]=0u+0x00000000u; // 80200054
  c->r[3]=c->r[28]|c->r[28]; // 80200058
  W8(c->r[30]+0x00000000u,c->r[0]); // 8020005C
  c->lr=0x80200064u; f_80252384(c); // 80200060
  c->r[11]=c->r[1]+0x00000020u; // 80200064
  c->lr=0x8020006Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80200068
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020006C
  c->lr=c->r[0]; // 80200070
  c->r[1]=c->r[1]+0x00000020u; // 80200074
  return; // 80200078
}

// NHTTPi_InitThreadInfo
void f_8020007C(Ctx* __restrict c) {
  trace_call(0x8020007Cu);
  c->r[0]=0u+0x00000000u; // 8020007C
  W32(c->r[3]+0x00000348u,c->r[0]); // 80200080
  return; // 80200084
}

// NHTTPi_IsCreateCommThreadMessageQueueOn
void f_80200088(Ctx* __restrict c) {
  trace_call(0x80200088u);
  c->r[0]=0u+0x00000001u; // 80200088
  W32(c->r[3]+0x00000348u,c->r[0]); // 8020008C
  return; // 80200090
}

// NHTTPi_IsCreateCommThreadMessageQueue
void f_80200094(Ctx* __restrict c) {
  trace_call(0x80200094u);
  c->r[3]=R32(c->r[3]+0x00000348u); // 80200094
  return; // 80200098
}

// fn_8020009C
void f_8020009C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020009C
  c->r[0]=c->lr; // 802000A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802000A4
  c->r[11]=c->r[1]+0x00000020u; // 802000A8
  c->lr=0x802000B0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802000AC
  c->r[27]=c->r[3]|c->r[3]; // 802000B0
  c->r[28]=c->r[4]|c->r[4]; // 802000B4
  c->r[29]=c->r[5]|c->r[5]; // 802000B8
  c->lr=0x802000C0u; f_802045C0(c); // 802000BC
  c->r[31]=c->r[3]|c->r[3]; // 802000C0
  c->r[3]=c->r[27]|c->r[27]; // 802000C4
  c->lr=0x802000CCu; f_802045B0(c); // 802000C8
  c->r[30]=R32(c->r[3]+0x00000000u); // 802000CC
  c->r[0]=0u+0x00000000u; // 802000D0
  c->r[3]=c->r[31]|c->r[31]; // 802000D4
  W32(c->r[28]+0x00000000u,c->r[0]); // 802000D8
  W32(c->r[29]+0x00000000u,c->r[0]); // 802000DC
  c->lr=0x802000E4u; f_801FD8D0(c); // 802000E0
  cmps(c,0,(int32_t)c->r[30],0); // 802000E4
  if (crb(c,2)) { goto L_80200148; } // 802000E8
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 802000EC
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 802000F0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802000F4
  cmps(c,0,(int32_t)c->r[0],0); // 802000F8
  if (crb(c,2)) { goto L_80200140; } // 802000FC
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80200100
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 80200104
  c->r[0]=R32(c->r[3]+0x00000004u); // 80200108
  W32(c->r[28]+0x00000000u,c->r[0]); // 8020010C
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80200110
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 80200114
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80200118
  c->r[0]=c->r[3]+0x00010000u; // 8020011C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80200120
  if (!crb(c,2)) { goto L_80200130; } // 80200124
  c->r[0]=0u+0x00000000u; // 80200128
  goto L_8020013C; // 8020012C
L_80200130:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80200130
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 80200134
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80200138
L_8020013C:;
  W32(c->r[29]+0x00000000u,c->r[0]); // 8020013C
L_80200140:;
  c->r[30]=0u+0x00000001u; // 80200140
  goto L_80200160; // 80200144
L_80200148:;
  c->r[3]=c->r[27]|c->r[27]; // 80200148
  c->lr=0x80200150u; f_802045A8(c); // 8020014C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80200150
  c->r[0]=0u-c->r[3]; // 80200154
  c->r[0]=c->r[0]|c->r[3]; // 80200158
  c->r[30]=rotl(c->r[0],1)&0x00000001u; // 8020015C
L_80200160:;
  c->r[3]=c->r[31]|c->r[31]; // 80200160
  c->lr=0x80200168u; f_801FD8D4(c); // 80200164
  c->r[11]=c->r[1]+0x00000020u; // 80200168
  c->r[3]=c->r[30]|c->r[30]; // 8020016C
  c->lr=0x80200174u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80200170
  c->r[0]=R32(c->r[1]+0x00000024u); // 80200174
  c->lr=c->r[0]; // 80200178
  c->r[1]=c->r[1]+0x00000020u; // 8020017C
  return; // 80200180
}

// NHTTPi_CheckHeaderEnd
void f_80200184(Ctx* __restrict c) {
  trace_call(0x80200184u);
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 80200184
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 80200188
  c->r[5]=R8(c->r[3]+c->r[0]); // 8020018C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80200190
  cmps(c,0,(int32_t)c->r[0],13); // 80200194
  if (!crb(c,2)) { goto L_802001BC; } // 80200198
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8020019C
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 802001A0
  c->r[0]=R8(c->r[3]+c->r[0]); // 802001A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802001A8
  cmps(c,0,(int32_t)c->r[0],13); // 802001AC
  if (!crb(c,2)) { goto L_802001BC; } // 802001B0
  c->r[3]=0u+0x00000001u; // 802001B4
  return; // 802001B8
L_802001BC:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 802001BC
  cmps(c,0,(int32_t)c->r[0],10); // 802001C0
  if (!crb(c,2)) { goto L_802001E8; } // 802001C4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 802001C8
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 802001CC
  c->r[0]=R8(c->r[3]+c->r[0]); // 802001D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802001D4
  cmps(c,0,(int32_t)c->r[0],10); // 802001D8
  if (!crb(c,2)) { goto L_802001E8; } // 802001DC
  c->r[3]=0u+0x00000001u; // 802001E0
  return; // 802001E4
L_802001E8:;
  c->r[0]=c->r[4]+0xFFFFFFFCu; // 802001E8
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 802001EC
  c->r[0]=R8(c->r[3]+c->r[0]); // 802001F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802001F4
  cmps(c,0,(int32_t)c->r[0],13); // 802001F8
  if (!crb(c,2)) { goto L_80200244; } // 802001FC
  c->r[0]=c->r[4]+0xFFFFFFFDu; // 80200200
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 80200204
  c->r[0]=R8(c->r[3]+c->r[0]); // 80200208
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020020C
  cmps(c,0,(int32_t)c->r[0],10); // 80200210
  if (!crb(c,2)) { goto L_80200244; } // 80200214
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80200218
  cmps(c,0,(int32_t)c->r[0],13); // 8020021C
  if (!crb(c,2)) { goto L_80200244; } // 80200220
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80200224
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 80200228
  c->r[0]=R8(c->r[3]+c->r[0]); // 8020022C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80200230
  cmps(c,0,(int32_t)c->r[0],10); // 80200234
  if (!crb(c,2)) { goto L_80200244; } // 80200238
  c->r[3]=0u+0x00000001u; // 8020023C
  return; // 80200240
L_80200244:;
  c->r[3]=0u+0x00000000u; // 80200244
  return; // 80200248
}

// NHTTPi_SaveBuf
void f_8020024C(Ctx* __restrict c) {
  trace_call(0x8020024Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020024C
  c->r[0]=c->lr; // 80200250
  W32(c->r[1]+0x00000034u,c->r[0]); // 80200254
  c->r[11]=c->r[1]+0x00000030u; // 80200258
  c->lr=0x80200260u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020025C
  c->r[29]=c->r[8]|c->r[8]; // 80200260
  c->r[24]=c->r[3]|c->r[3]; // 80200264
  c->r[25]=c->r[4]|c->r[4]; // 80200268
  c->r[26]=c->r[5]|c->r[5]; // 8020026C
  c->r[27]=c->r[6]|c->r[6]; // 80200270
  c->r[28]=c->r[7]|c->r[7]; // 80200274
  c->r[30]=c->r[29]|c->r[29]; // 80200278
  goto L_80200308; // 8020027C
L_80200280:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 80200280
  cmps(c,0,(int32_t)c->r[0],0); // 80200284
  if (crb(c,2)) { goto L_80200294; } // 80200288
  c->r[3]=0u+0xFFFFFFFFu; // 8020028C
  goto L_80200314; // 80200290
L_80200294:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 80200294
  c->r[31]=c->r[30]|c->r[30]; // 80200298
  c->r[3]=addc(c,~c->r[0],0x00000100u,1); // 8020029C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 802002A0
  if (!crb(c,1)) { goto L_802002AC; } // 802002A4
  c->r[31]=c->r[3]|c->r[3]; // 802002A8
L_802002AC:;
  c->r[4]=c->r[28]|c->r[28]; // 802002AC
  c->r[5]=c->r[31]|c->r[31]; // 802002B0
  c->r[3]=c->r[25]+c->r[0]; // 802002B4
  c->lr=0x802002BCu; f_801FF708(c); // 802002B8
  c->r[0]=R32(c->r[27]+0x00000000u); // 802002BC
  c->r[28]=c->r[28]+c->r[31]; // 802002C0
  c->r[30]=c->r[30]-c->r[31]; // 802002C4
  c->r[0]=c->r[0]+c->r[31]; // 802002C8
  cmps(c,0,(int32_t)c->r[0],256); // 802002CC
  W32(c->r[27]+0x00000000u,c->r[0]); // 802002D0
  if (!crb(c,2)) { goto L_80200308; } // 802002D4
  c->r[3]=c->r[24]|c->r[24]; // 802002D8
  c->r[4]=c->r[26]|c->r[26]; // 802002DC
  c->r[5]=c->r[25]|c->r[25]; // 802002E0
  c->r[6]=0u+0x00000100u; // 802002E4
  c->r[7]=0u+0x00000000u; // 802002E8
  c->lr=0x802002F0u; f_801FF594(c); // 802002EC
  cmps(c,0,(int32_t)c->r[3],0); // 802002F0
  if (crb(c,1)) { goto L_802002FC; } // 802002F4
  goto L_80200314; // 802002F8
L_802002FC:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 802002FC
  c->r[0]=c->r[0]-c->r[3]; // 80200300
  W32(c->r[27]+0x00000000u,c->r[0]); // 80200304
L_80200308:;
  cmps(c,0,(int32_t)c->r[30],0); // 80200308
  if (crb(c,1)) { IRQCHK(c); goto L_80200280; } // 8020030C
  c->r[3]=c->r[29]|c->r[29]; // 80200310
L_80200314:;
  c->r[11]=c->r[1]+0x00000030u; // 80200314
  c->lr=0x8020031Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80200318
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020031C
  c->lr=c->r[0]; // 80200320
  c->r[1]=c->r[1]+0x00000030u; // 80200324
  return; // 80200328
}

// NHTTPi_GetPostContentlength
void f_8020032C(Ctx* __restrict c) {
  trace_call(0x8020032Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020032C
  c->r[0]=c->lr; // 80200330
  W32(c->r[1]+0x00000034u,c->r[0]); // 80200334
  c->r[11]=c->r[1]+0x00000030u; // 80200338
  c->lr=0x80200340u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020033C
  c->r[24]=c->r[3]|c->r[3]; // 80200340
  c->r[25]=c->r[4]|c->r[4]; // 80200344
  c->r[26]=c->r[5]|c->r[5]; // 80200348
  c->r[27]=c->r[6]|c->r[6]; // 8020034C
  c->r[28]=c->r[7]|c->r[7]; // 80200350
  c->r[30]=0u+0x00000000u; // 80200354
  c->lr=0x8020035Cu; f_8020410C(c); // 80200358
  cmps(c,0,(int32_t)c->r[3],0); // 8020035C
  c->r[29]=c->r[3]|c->r[3]; // 80200360
  if (!crb(c,2)) { goto L_80200370; } // 80200364
  c->r[3]=0u+0x00000000u; // 80200368
  goto L_80200418; // 8020036C
L_80200370:;
  c->r[31]=0u+0x00000000u; // 80200370
  W32(c->r[3]+0x00000024u,c->r[31]); // 80200374
L_80200378:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 80200378
  cmps(c,0,(int32_t)c->r[0],0); // 8020037C
  if (crb(c,2)) { goto L_8020038C; } // 80200380
  c->r[3]=0u+0x00000000u; // 80200384
  goto L_80200418; // 80200388
L_8020038C:;
  W32(c->r[29]+0x00000028u,c->r[31]); // 8020038C
  c->r[3]=c->r[24]|c->r[24]; // 80200390
  c->r[4]=c->r[29]|c->r[29]; // 80200394
  c->r[5]=c->r[26]|c->r[26]; // 80200398
  c->r[6]=c->r[30]|c->r[30]; // 8020039C
  c->lr=0x802003A4u; f_802041CC(c); // 802003A0
  cmps(c,0,(int32_t)c->r[3],0); // 802003A4
  if (!crb(c,0)) { goto L_802003B4; } // 802003A8
  c->r[3]=0u+0x00000000u; // 802003AC
  goto L_80200418; // 802003B0
L_802003B4:;
  c->r[4]=R32(c->r[29]+0x00000028u); // 802003B4
  c->r[3]=R32(c->r[29]+0x00000024u); // 802003B8
  cmps(c,0,(int32_t)c->r[4],0); // 802003BC
  if (crb(c,2)) { goto L_80200414; } // 802003C0
  cmps(c,0,(int32_t)c->r[3],0); // 802003C4
  if (!crb(c,2)) { goto L_802003D4; } // 802003C8
  c->r[3]=0u+0x00000000u; // 802003CC
  goto L_80200418; // 802003D0
L_802003D4:;
  cmps(c,0,(int32_t)c->r[28],2); // 802003D4
  c->r[30]=c->r[30]+c->r[4]; // 802003D8
  if (crb(c,2)) { goto L_80200400; } // 802003DC
  if (!crb(c,0)) { IRQCHK(c); goto L_80200378; } // 802003E0
  cmps(c,0,(int32_t)c->r[28],0); // 802003E4
  if (!crb(c,0)) { goto L_802003F0; } // 802003E8
  IRQCHK(c); goto L_80200378; // 802003EC
L_802003F0:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 802003F0
  c->r[0]=c->r[0]+c->r[4]; // 802003F4
  W32(c->r[27]+0x00000000u,c->r[0]); // 802003F8
  IRQCHK(c); goto L_80200378; // 802003FC
L_80200400:;
  c->lr=0x80200404u; f_801FF85C(c); // 80200400
  c->r[0]=R32(c->r[27]+0x00000000u); // 80200404
  c->r[0]=c->r[0]+c->r[3]; // 80200408
  W32(c->r[27]+0x00000000u,c->r[0]); // 8020040C
  IRQCHK(c); goto L_80200378; // 80200410
L_80200414:;
  c->r[3]=0u+0x00000001u; // 80200414
L_80200418:;
  c->r[11]=c->r[1]+0x00000030u; // 80200418
  c->lr=0x80200420u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020041C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80200420
  c->lr=c->r[0]; // 80200424
  c->r[1]=c->r[1]+0x00000030u; // 80200428
  return; // 8020042C
}

// NHTTPi_SendPostData
void f_80200430(Ctx* __restrict c) {
  trace_call(0x80200430u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200430
  c->r[0]=c->lr; // 80200434
  W32(c->r[1]+0x00000054u,c->r[0]); // 80200438
  c->r[11]=c->r[1]+0x00000050u; // 8020043C
  c->lr=0x80200444u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80200440
  c->r[19]=c->r[3]|c->r[3]; // 80200444
  c->r[20]=c->r[4]|c->r[4]; // 80200448
  c->r[21]=c->r[5]|c->r[5]; // 8020044C
  c->r[22]=c->r[6]|c->r[6]; // 80200450
  c->r[23]=c->r[7]|c->r[7]; // 80200454
  c->r[24]=c->r[8]|c->r[8]; // 80200458
  c->r[25]=c->r[9]|c->r[9]; // 8020045C
  c->r[29]=0u+0x00000000u; // 80200460
  c->lr=0x80200468u; f_8020410C(c); // 80200464
  cmps(c,0,(int32_t)c->r[3],0); // 80200468
  c->r[26]=c->r[3]|c->r[3]; // 8020046C
  if (!crb(c,2)) { goto L_8020047C; } // 80200470
  c->r[3]=0u+0x00000003u; // 80200474
  goto L_802005A8; // 80200478
L_8020047C:;
  c->r[30]=0u+0x00000000u; // 8020047C
  W32(c->r[3]+0x00000024u,c->r[30]); // 80200480
L_80200484:;
  c->r[0]=R32(c->r[20]+0x00000000u); // 80200484
  cmps(c,0,(int32_t)c->r[0],0); // 80200488
  if (crb(c,2)) { goto L_80200498; } // 8020048C
  c->r[3]=0u+0x00000003u; // 80200490
  goto L_802005A8; // 80200494
L_80200498:;
  W32(c->r[26]+0x00000028u,c->r[30]); // 80200498
  c->r[3]=c->r[19]|c->r[19]; // 8020049C
  c->r[4]=c->r[26]|c->r[26]; // 802004A0
  c->r[5]=c->r[22]|c->r[22]; // 802004A4
  c->r[6]=c->r[29]|c->r[29]; // 802004A8
  c->lr=0x802004B0u; f_802041CC(c); // 802004AC
  cmps(c,0,(int32_t)c->r[3],0); // 802004B0
  if (!crb(c,0)) { goto L_802004C0; } // 802004B4
  c->r[3]=0u+0x00000003u; // 802004B8
  goto L_802005A8; // 802004BC
L_802004C0:;
  c->r[28]=R32(c->r[26]+0x00000028u); // 802004C0
  c->r[7]=R32(c->r[26]+0x00000024u); // 802004C4
  cmps(c,0,(int32_t)c->r[28],0); // 802004C8
  if (crb(c,2)) { goto L_802005A4; } // 802004CC
  cmps(c,0,(int32_t)c->r[7],0); // 802004D0
  if (!crb(c,2)) { goto L_802004E0; } // 802004D4
  c->r[3]=0u+0x00000003u; // 802004D8
  goto L_802005A8; // 802004DC
L_802004E0:;
  cmps(c,0,(int32_t)c->r[25],2); // 802004E0
  c->r[29]=c->r[29]+c->r[28]; // 802004E4
  if (crb(c,2)) { goto L_80200530; } // 802004E8
  if (!crb(c,0)) { IRQCHK(c); goto L_80200484; } // 802004EC
  cmps(c,0,(int32_t)c->r[25],0); // 802004F0
  if (!crb(c,0)) { goto L_802004FC; } // 802004F4
  IRQCHK(c); goto L_80200484; // 802004F8
L_802004FC:;
  c->r[3]=c->r[20]|c->r[20]; // 802004FC
  c->r[4]=c->r[21]|c->r[21]; // 80200500
  c->r[5]=c->r[23]|c->r[23]; // 80200504
  c->r[6]=c->r[24]|c->r[24]; // 80200508
  c->r[8]=c->r[28]|c->r[28]; // 8020050C
  c->lr=0x80200514u; f_8020024C(c); // 80200510
  cmps(c,0,(int32_t)c->r[3],0); // 80200514
  if (!crb(c,0)) { goto L_80200524; } // 80200518
  c->r[3]=0u+0x00000001u; // 8020051C
  goto L_802005A8; // 80200520
L_80200524:;
  if (!crb(c,2)) { IRQCHK(c); goto L_80200484; } // 80200524
  c->r[3]=0u+0x00000002u; // 80200528
  goto L_802005A8; // 8020052C
L_80200530:;
  c->r[31]=c->r[7]|c->r[7]; // 80200530
  c->r[27]=0u+0x00000000u; // 80200534
  goto L_80200598; // 80200538
L_8020053C:;
  c->r[3]=c->r[1]+0x00000008u; // 8020053C
  c->r[4]=0u+0x00000003u; // 80200540
  c->lr=0x80200548u; f_801FF714(c); // 80200544
  c->r[0]=R8(c->r[31]+0x00000000u); // 80200548
  c->r[3]=c->r[1]+0x00000008u; // 8020054C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80200550
  c->lr=0x80200558u; f_801FF8D0(c); // 80200554
  c->r[8]=c->r[3]|c->r[3]; // 80200558
  c->r[3]=c->r[20]|c->r[20]; // 8020055C
  c->r[4]=c->r[21]|c->r[21]; // 80200560
  c->r[5]=c->r[23]|c->r[23]; // 80200564
  c->r[6]=c->r[24]|c->r[24]; // 80200568
  c->r[7]=c->r[1]+0x00000008u; // 8020056C
  c->lr=0x80200574u; f_8020024C(c); // 80200570
  cmps(c,0,(int32_t)c->r[3],0); // 80200574
  if (!crb(c,0)) { goto L_80200584; } // 80200578
  c->r[3]=0u+0x00000001u; // 8020057C
  goto L_802005A8; // 80200580
L_80200584:;
  if (!crb(c,2)) { goto L_80200590; } // 80200584
  c->r[3]=0u+0x00000002u; // 80200588
  goto L_802005A8; // 8020058C
L_80200590:;
  c->r[27]=c->r[27]+0x00000001u; // 80200590
  c->r[31]=c->r[31]+0x00000001u; // 80200594
L_80200598:;
  cmpu(c,0,c->r[27],c->r[28]); // 80200598
  if (crb(c,0)) { IRQCHK(c); goto L_8020053C; } // 8020059C
  IRQCHK(c); goto L_80200484; // 802005A0
L_802005A4:;
  c->r[3]=0u+0x00000000u; // 802005A4
L_802005A8:;
  c->r[11]=c->r[1]+0x00000050u; // 802005A8
  c->lr=0x802005B0u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802005AC
  c->r[0]=R32(c->r[1]+0x00000054u); // 802005B0
  c->lr=c->r[0]; // 802005B4
  c->r[1]=c->r[1]+0x00000050u; // 802005B8
  return; // 802005BC
}

// NHTTPi_BufFull
void f_802005C0(Ctx* __restrict c) {
  trace_call(0x802005C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802005C0
  c->r[0]=c->lr; // 802005C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802005C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802005CC
  c->r[31]=0u+0x00000000u; // 802005D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 802005D4
  c->r[30]=c->r[4]|c->r[4]; // 802005D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802005DC
  c->r[29]=c->r[3]|c->r[3]; // 802005E0
  c->r[3]=c->r[30]|c->r[30]; // 802005E4
  c->r[4]=R32(c->r[4]+0x00000004u); // 802005E8
  c->lr=0x802005F0u; f_801FE0C8(c); // 802005EC
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 802005F0
  cmps(c,0,(int32_t)c->r[0],0); // 802005F4
  if (crb(c,2)) { goto L_80200610; } // 802005F8
  c->r[0]=R32(c->r[30]+0x00000028u); // 802005FC
  cmps(c,0,(int32_t)c->r[0],0); // 80200600
  if (crb(c,2)) { goto L_80200610; } // 80200604
  cmps(c,0,(int32_t)c->r[3],0); // 80200608
  if (crb(c,2)) { goto L_80200664; } // 8020060C
L_80200610:;
  c->r[3]=c->r[29]|c->r[29]; // 80200610
  c->r[4]=c->r[30]|c->r[30]; // 80200614
  c->lr=0x8020061Cu; f_80204114(c); // 80200618
  cmps(c,0,(int32_t)c->r[3],0); // 8020061C
  c->r[4]=c->r[3]|c->r[3]; // 80200620
  if (crb(c,2)) { goto L_8020066C; } // 80200624
  c->r[3]=c->r[29]|c->r[29]; // 80200628
  c->lr=0x80200630u; f_802042B4(c); // 8020062C
  c->r[0]=R32(c->r[30]+0x00000028u); // 80200630
  cmps(c,0,(int32_t)c->r[0],0); // 80200634
  if (crb(c,2)) { goto L_8020066C; } // 80200638
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8020063C
  cmps(c,0,(int32_t)c->r[0],0); // 80200640
  if (crb(c,2)) { goto L_8020066C; } // 80200644
  c->r[4]=R32(c->r[30]+0x00000004u); // 80200648
  c->r[3]=c->r[30]|c->r[30]; // 8020064C
  c->lr=0x80200654u; f_801FE0C8(c); // 80200650
  cmps(c,0,(int32_t)c->r[3],0); // 80200654
  if (!crb(c,2)) { goto L_8020066C; } // 80200658
  c->r[31]=0u+0x00000001u; // 8020065C
  goto L_8020066C; // 80200660
L_80200664:;
  if (!crb(c,2)) { goto L_8020066C; } // 80200664
  c->r[31]=0u+0x00000001u; // 80200668
L_8020066C:;
  c->r[3]=c->r[31]|c->r[31]; // 8020066C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80200670
  c->r[30]=R32(c->r[1]+0x00000018u); // 80200674
  c->r[29]=R32(c->r[1]+0x00000014u); // 80200678
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020067C
  c->lr=c->r[0]; // 80200680
  c->r[1]=c->r[1]+0x00000020u; // 80200684
  return; // 80200688
}

// NHTTPi_SendData
void f_8020068C(Ctx* __restrict c) {
  trace_call(0x8020068Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020068C
  c->r[0]=c->lr; // 80200690
  W32(c->r[1]+0x00000024u,c->r[0]); // 80200694
  c->r[11]=c->r[1]+0x00000020u; // 80200698
  c->lr=0x802006A0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020069C
  c->r[26]=c->r[3]|c->r[3]; // 802006A0
  c->r[27]=c->r[4]|c->r[4]; // 802006A4
  c->r[28]=c->r[5]|c->r[5]; // 802006A8
  c->lr=0x802006B0u; f_8020453C(c); // 802006AC
  c->r[29]=c->r[3]|c->r[3]; // 802006B0
  c->lr=0x802006B8u; f_802045A4(c); // 802006B4
  c->r[30]=c->r[3]|c->r[3]; // 802006B8
  c->r[3]=c->r[29]|c->r[29]; // 802006BC
  c->lr=0x802006C4u; f_802045B8(c); // 802006C0
  c->r[31]=c->r[3]|c->r[3]; // 802006C4
  c->r[3]=c->r[29]|c->r[29]; // 802006C8
  c->lr=0x802006D0u; f_802045B0(c); // 802006CC
  c->r[3]=R32(c->r[3]+0x00000000u); // 802006D0
  cmps(c,0,(int32_t)c->r[28],0); // 802006D4
  c->r[4]=c->r[31]+0x00000360u; // 802006D8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802006DC
  if (!crb(c,2)) { goto L_802006EC; } // 802006E0
  c->r[3]=0u+0x00000000u; // 802006E4
  goto L_80200720; // 802006E8
L_802006EC:;
  c->r[5]=R32(c->r[30]+0x000007D0u); // 802006EC
  c->r[7]=c->r[27]|c->r[27]; // 802006F0
  c->r[8]=c->r[28]|c->r[28]; // 802006F4
  c->r[6]=c->r[26]+0x00000324u; // 802006F8
  c->lr=0x80200700u; f_8020024C(c); // 802006FC
  cmps(c,0,(int32_t)c->r[3],0); // 80200700
  if (!crb(c,0)) { goto L_80200710; } // 80200704
  c->r[3]=0u+0x00000001u; // 80200708
  goto L_80200720; // 8020070C
L_80200710:;
  c->r[0]=cntlz(c->r[3]); // 80200710
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 80200714
  c->r[0]=0u-c->r[0]; // 80200718
  c->r[3]=rotl(c->r[0],0)&0x00000002u; // 8020071C
L_80200720:;
  c->r[11]=c->r[1]+0x00000020u; // 80200720
  c->lr=0x80200728u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80200724
  c->r[0]=R32(c->r[1]+0x00000024u); // 80200728
  c->lr=c->r[0]; // 8020072C
  c->r[1]=c->r[1]+0x00000020u; // 80200730
  return; // 80200734
}

// NHTTPi_SendProxyConnectMethod
void f_80200738(Ctx* __restrict c) {
  trace_call(0x80200738u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200738
  c->r[0]=c->lr; // 8020073C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80200740
  c->r[11]=c->r[1]+0x00000030u; // 80200744
  c->lr=0x8020074Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80200748
  c->r[28]=0u+0x802F0000u; // 8020074C
  c->r[31]=c->r[3]|c->r[3]; // 80200750
  c->r[28]=c->r[28]+0xFFFF9B30u; // 80200754
  c->lr=0x8020075Cu; f_8020453C(c); // 80200758
  c->r[30]=c->r[3]|c->r[3]; // 8020075C
  c->lr=0x80200764u; f_802045B0(c); // 80200760
  c->r[4]=R32(c->r[3]+0x00000000u); // 80200764
  c->r[3]=c->r[30]|c->r[30]; // 80200768
  c->r[27]=R32(c->r[4]+0x0000000Cu); // 8020076C
  c->lr=0x80200774u; f_802045B8(c); // 80200770
  c->r[29]=c->r[3]|c->r[3]; // 80200774
  c->r[3]=c->r[30]|c->r[30]; // 80200778
  c->lr=0x80200780u; f_802045A4(c); // 8020077C
  c->r[4]=R32(c->r[27]+0x00000020u); // 80200780
  c->r[30]=c->r[3]|c->r[3]; // 80200784
  c->r[26]=c->r[29]+0x00000360u; // 80200788
  c->r[3]=c->r[1]+0x00000008u; // 8020078C
  c->lr=0x80200794u; f_801FFB34(c); // 80200790
  c->r[29]=c->r[3]|c->r[3]; // 80200794
  c->r[3]=c->r[31]|c->r[31]; // 80200798
  c->r[4]=c->r[28]+0x00000000u; // 8020079C
  c->r[5]=0u+0x00000008u; // 802007A0
  c->lr=0x802007A8u; f_8020068C(c); // 802007A4
  cmps(c,0,(int32_t)c->r[3],0); // 802007A8
  if (crb(c,2)) { goto L_802007B4; } // 802007AC
  goto L_802009C8; // 802007B0
L_802007B4:;
  c->r[4]=R32(c->r[27]+0x00000024u); // 802007B4
  c->r[3]=c->r[31]|c->r[31]; // 802007B8
  c->r[5]=R32(c->r[27]+0x00000014u); // 802007BC
  c->r[4]=c->r[4]+0x00000008u; // 802007C0
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 802007C4
  c->lr=0x802007CCu; f_8020068C(c); // 802007C8
  cmps(c,0,(int32_t)c->r[3],0); // 802007CC
  if (crb(c,2)) { goto L_802007D8; } // 802007D0
  goto L_802009C8; // 802007D4
L_802007D8:;
  c->r[3]=c->r[31]|c->r[31]; // 802007D8
  c->r[4]=c->r[13]+0xFFFF94B0u; // 802007DC
  c->r[5]=0u+0x00000001u; // 802007E0
  c->lr=0x802007E8u; f_8020068C(c); // 802007E4
  cmps(c,0,(int32_t)c->r[3],0); // 802007E8
  if (crb(c,2)) { goto L_802007F4; } // 802007EC
  goto L_802009C8; // 802007F0
L_802007F4:;
  c->r[3]=c->r[31]|c->r[31]; // 802007F4
  c->r[5]=c->r[29]|c->r[29]; // 802007F8
  c->r[4]=c->r[1]+0x00000008u; // 802007FC
  c->lr=0x80200804u; f_8020068C(c); // 80200800
  cmps(c,0,(int32_t)c->r[3],0); // 80200804
  if (crb(c,2)) { goto L_80200810; } // 80200808
  goto L_802009C8; // 8020080C
L_80200810:;
  c->r[3]=c->r[31]|c->r[31]; // 80200810
  c->r[4]=c->r[28]+0x0000000Cu; // 80200814
  c->r[5]=0u+0x0000000Bu; // 80200818
  c->lr=0x80200820u; f_8020068C(c); // 8020081C
  cmps(c,0,(int32_t)c->r[3],0); // 80200820
  if (crb(c,2)) { goto L_8020082C; } // 80200824
  goto L_802009C8; // 80200828
L_8020082C:;
  c->r[3]=c->r[31]|c->r[31]; // 8020082C
  c->r[4]=c->r[13]+0xFFFF94B4u; // 80200830
  c->r[5]=0u+0x00000006u; // 80200834
  c->lr=0x8020083Cu; f_8020068C(c); // 80200838
  cmps(c,0,(int32_t)c->r[3],0); // 8020083C
  if (crb(c,2)) { goto L_80200848; } // 80200840
  goto L_802009C8; // 80200844
L_80200848:;
  c->r[4]=R32(c->r[27]+0x00000024u); // 80200848
  c->r[3]=c->r[31]|c->r[31]; // 8020084C
  c->r[5]=R32(c->r[27]+0x00000014u); // 80200850
  c->r[4]=c->r[4]+0x00000008u; // 80200854
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 80200858
  c->lr=0x80200860u; f_8020068C(c); // 8020085C
  cmps(c,0,(int32_t)c->r[3],0); // 80200860
  if (crb(c,2)) { goto L_8020086C; } // 80200864
  goto L_802009C8; // 80200868
L_8020086C:;
  c->r[3]=c->r[31]|c->r[31]; // 8020086C
  c->r[4]=c->r[13]+0xFFFF94B0u; // 80200870
  c->r[5]=0u+0x00000001u; // 80200874
  c->lr=0x8020087Cu; f_8020068C(c); // 80200878
  cmps(c,0,(int32_t)c->r[3],0); // 8020087C
  if (crb(c,2)) { goto L_80200888; } // 80200880
  goto L_802009C8; // 80200884
L_80200888:;
  c->r[3]=c->r[31]|c->r[31]; // 80200888
  c->r[5]=c->r[29]|c->r[29]; // 8020088C
  c->r[4]=c->r[1]+0x00000008u; // 80200890
  c->lr=0x80200898u; f_8020068C(c); // 80200894
  cmps(c,0,(int32_t)c->r[3],0); // 80200898
  if (crb(c,2)) { goto L_802008A4; } // 8020089C
  goto L_802009C8; // 802008A0
L_802008A4:;
  c->r[3]=c->r[31]|c->r[31]; // 802008A4
  c->r[4]=c->r[13]+0xFFFF94BCu; // 802008A8
  c->r[5]=0u+0x00000002u; // 802008AC
  c->lr=0x802008B4u; f_8020068C(c); // 802008B0
  cmps(c,0,(int32_t)c->r[3],0); // 802008B4
  if (crb(c,2)) { goto L_802008C0; } // 802008B8
  goto L_802009C8; // 802008BC
L_802008C0:;
  c->r[3]=c->r[31]|c->r[31]; // 802008C0
  c->r[4]=c->r[28]+0x00000018u; // 802008C4
  c->r[5]=0u+0x00000025u; // 802008C8
  c->lr=0x802008D0u; f_8020068C(c); // 802008CC
  cmps(c,0,(int32_t)c->r[3],0); // 802008D0
  if (crb(c,2)) { goto L_802008DC; } // 802008D4
  goto L_802009C8; // 802008D8
L_802008DC:;
  c->lr=0x802008E0u; f_8020453C(c); // 802008DC
  c->lr=0x802008E4u; f_802045B0(c); // 802008E0
  c->r[3]=R32(c->r[3]+0x00000000u); // 802008E4
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 802008E8
  c->r[0]=R32(c->r[29]+0x00000240u); // 802008EC
  cmps(c,0,(int32_t)c->r[0],0); // 802008F0
  if (!crb(c,2)) { goto L_80200900; } // 802008F4
  c->r[3]=0u+0x00000000u; // 802008F8
  goto L_80200958; // 802008FC
L_80200900:;
  c->r[3]=c->r[31]|c->r[31]; // 80200900
  c->r[4]=c->r[28]+0x00000040u; // 80200904
  c->r[5]=0u+0x0000001Bu; // 80200908
  c->lr=0x80200910u; f_8020068C(c); // 8020090C
  cmps(c,0,(int32_t)c->r[3],0); // 80200910
  if (crb(c,2)) { goto L_8020091C; } // 80200914
  goto L_80200958; // 80200918
L_8020091C:;
  c->r[5]=R32(c->r[29]+0x00000240u); // 8020091C
  c->r[3]=c->r[31]|c->r[31]; // 80200920
  c->r[4]=c->r[29]+0x000001E4u; // 80200924
  c->lr=0x8020092Cu; f_8020068C(c); // 80200928
  cmps(c,0,(int32_t)c->r[3],0); // 8020092C
  if (crb(c,2)) { goto L_80200938; } // 80200930
  goto L_80200958; // 80200934
L_80200938:;
  c->r[3]=c->r[31]|c->r[31]; // 80200938
  c->r[4]=c->r[13]+0xFFFF94BCu; // 8020093C
  c->r[5]=0u+0x00000002u; // 80200940
  c->lr=0x80200948u; f_8020068C(c); // 80200944
  c->r[0]=0u-c->r[3]; // 80200948
  c->r[0]=c->r[0]|c->r[3]; // 8020094C
  c->r[0]=sraw(c,c->r[0],31); // 80200950
  c->r[3]=c->r[3]&c->r[0]; // 80200954
L_80200958:;
  cmps(c,0,(int32_t)c->r[3],0); // 80200958
  if (crb(c,2)) { goto L_80200964; } // 8020095C
  goto L_802009C8; // 80200960
L_80200964:;
  c->r[3]=c->r[31]|c->r[31]; // 80200964
  c->r[4]=c->r[13]+0xFFFF94BCu; // 80200968
  c->r[5]=0u+0x00000002u; // 8020096C
  c->lr=0x80200974u; f_8020068C(c); // 80200970
  c->r[6]=R32(c->r[31]+0x00000324u); // 80200974
  cmps(c,0,(int32_t)c->r[6],0); // 80200978
  if (!crb(c,1)) { goto L_802009B0; } // 8020097C
  c->r[4]=R32(c->r[30]+0x000007D0u); // 80200980
  c->r[3]=c->r[27]|c->r[27]; // 80200984
  c->r[5]=c->r[26]|c->r[26]; // 80200988
  c->r[7]=0u+0x00000000u; // 8020098C
  c->lr=0x80200994u; f_801FF594(c); // 80200990
  cmps(c,0,(int32_t)c->r[3],0); // 80200994
  if (!crb(c,0)) { goto L_802009A4; } // 80200998
  c->r[3]=0u+0x00000001u; // 8020099C
  goto L_802009C8; // 802009A0
L_802009A4:;
  if (!crb(c,2)) { goto L_802009B0; } // 802009A4
  c->r[3]=0u+0x00000002u; // 802009A8
  goto L_802009C8; // 802009AC
L_802009B0:;
  c->r[0]=0u+0x00000000u; // 802009B0
  c->r[3]=c->r[26]|c->r[26]; // 802009B4
  W32(c->r[31]+0x00000324u,c->r[0]); // 802009B8
  c->r[4]=0u+0x00000100u; // 802009BC
  c->lr=0x802009C4u; f_801FF714(c); // 802009C0
  c->r[3]=0u+0x00000000u; // 802009C4
L_802009C8:;
  c->r[11]=c->r[1]+0x00000030u; // 802009C8
  c->lr=0x802009D0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802009CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 802009D0
  c->lr=c->r[0]; // 802009D4
  c->r[1]=c->r[1]+0x00000030u; // 802009D8
  return; // 802009DC
}

// NHTTPi_RecvProxyConnectHeader
void f_802009E0(Ctx* __restrict c) {
  trace_call(0x802009E0u);
  {uint32_t ea=c->r[1]+0xFFFFFDD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802009E0
  c->r[0]=c->lr; // 802009E4
  W32(c->r[1]+0x00000234u,c->r[0]); // 802009E8
  c->r[11]=c->r[1]+0x00000230u; // 802009EC
  c->lr=0x802009F4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802009F0
  c->lr=0x802009F8u; f_8020453C(c); // 802009F4
  c->r[26]=c->r[3]|c->r[3]; // 802009F8
  c->lr=0x80200A00u; f_802045B0(c); // 802009FC
  c->r[25]=c->r[3]|c->r[3]; // 80200A00
  c->r[3]=c->r[26]|c->r[26]; // 80200A04
  c->lr=0x80200A0Cu; f_802045B8(c); // 80200A08
  c->r[24]=c->r[3]|c->r[3]; // 80200A0C
  c->r[3]=c->r[26]|c->r[26]; // 80200A10
  c->lr=0x80200A18u; f_802045A4(c); // 80200A14
  c->r[30]=c->r[3]|c->r[3]; // 80200A18
  c->r[3]=c->r[26]|c->r[26]; // 80200A1C
  c->lr=0x80200A24u; f_802045C0(c); // 80200A20
  c->r[4]=R32(c->r[25]+0x00000000u); // 80200A24
  c->r[28]=c->r[24]+0x00000360u; // 80200A28
  c->r[29]=c->r[3]|c->r[3]; // 80200A2C
  c->r[25]=0u+0x00000000u; // 80200A30
  c->r[27]=R32(c->r[4]+0x0000000Cu); // 80200A34
  c->r[24]=0u+0x00000000u; // 80200A38
  c->r[26]=R32(c->r[27]+0x0000002Cu); // 80200A3C
L_80200A40:;
  c->r[6]=c->r[1]+0x00000008u; // 80200A40
  c->r[5]=R32(c->r[30]+0x000007D0u); // 80200A44
  c->r[3]=c->r[29]|c->r[29]; // 80200A48
  c->r[4]=c->r[27]|c->r[27]; // 80200A4C
  c->r[6]=c->r[6]+c->r[24]; // 80200A50
  c->r[7]=addc(c,~c->r[24],0x00000200u,1); // 80200A54
  c->r[8]=0u+0x00000000u; // 80200A58
  c->lr=0x80200A60u; f_801FF320(c); // 80200A5C
  c->r[31]=c->r[3]|c->r[3]; // 80200A60
  c->r[24]=c->r[24]+c->r[3]; // 80200A64
  c->r[3]=c->r[1]+0x00000011u; // 80200A68
  c->r[4]=0u+0x00000003u; // 80200A6C
  c->lr=0x80200A74u; f_801FFA94(c); // 80200A70
  W32(c->r[26]+0x00000018u,c->r[3]); // 80200A74
  c->r[3]=c->r[1]+0x00000008u; // 80200A78
  c->r[4]=c->r[13]+0xFFFF94C0u; // 80200A7C
  c->r[5]=0u+0x00000005u; // 80200A80
  c->lr=0x80200A88u; f_801FF720(c); // 80200A84
  cmps(c,0,(int32_t)c->r[3],0); // 80200A88
  if (!crb(c,2)) { goto L_80200AAC; } // 80200A8C
  c->r[0]=R8(c->r[1]+0x00000010u); // 80200A90
  cmps(c,0,(int32_t)c->r[0],32); // 80200A94
  if (!crb(c,2)) { goto L_80200AAC; } // 80200A98
  c->r[0]=R32(c->r[26]+0x00000018u); // 80200A9C
  cmps(c,0,(int32_t)c->r[0],200); // 80200AA0
  if (!crb(c,2)) { goto L_80200AAC; } // 80200AA4
  c->r[25]=0u+0x00000001u; // 80200AA8
L_80200AAC:;
  c->r[3]=c->r[1]+0x00000008u; // 80200AAC
  c->r[4]=0u+0x00000000u; // 80200AB0
  c->r[5]=0u+0x00000000u; // 80200AB4
  c->ctr=c->r[24]; // 80200AB8
  cmps(c,0,(int32_t)c->r[24],0); // 80200ABC
  if (!crb(c,1)) { goto L_80200B5C; } // 80200AC0
L_80200AC4:;
  cmps(c,0,(int32_t)c->r[4],1); // 80200AC4
  if (!crb(c,1)) { goto L_80200AEC; } // 80200AC8
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 80200ACC
  cmps(c,0,(int32_t)c->r[0],13); // 80200AD0
  if (!crb(c,2)) { goto L_80200AEC; } // 80200AD4
  c->r[0]=R8(c->r[3]+0x00000000u); // 80200AD8
  cmps(c,0,(int32_t)c->r[0],13); // 80200ADC
  if (!crb(c,2)) { goto L_80200AEC; } // 80200AE0
  c->r[5]=0u+0x00000001u; // 80200AE4
  goto L_80200B50; // 80200AE8
L_80200AEC:;
  cmps(c,0,(int32_t)c->r[4],1); // 80200AEC
  if (!crb(c,1)) { goto L_80200B14; } // 80200AF0
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 80200AF4
  cmps(c,0,(int32_t)c->r[0],10); // 80200AF8
  if (!crb(c,2)) { goto L_80200B14; } // 80200AFC
  c->r[0]=R8(c->r[3]+0x00000000u); // 80200B00
  cmps(c,0,(int32_t)c->r[0],10); // 80200B04
  if (!crb(c,2)) { goto L_80200B14; } // 80200B08
  c->r[5]=0u+0x00000001u; // 80200B0C
  goto L_80200B50; // 80200B10
L_80200B14:;
  cmps(c,0,(int32_t)c->r[4],3); // 80200B14
  if (!crb(c,1)) { goto L_80200B50; } // 80200B18
  c->r[0]=R8(c->r[3]+0xFFFFFFFDu); // 80200B1C
  cmps(c,0,(int32_t)c->r[0],13); // 80200B20
  if (!crb(c,2)) { goto L_80200B50; } // 80200B24
  c->r[0]=R8(c->r[3]+0xFFFFFFFEu); // 80200B28
  cmps(c,0,(int32_t)c->r[0],10); // 80200B2C
  if (!crb(c,2)) { goto L_80200B50; } // 80200B30
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 80200B34
  cmps(c,0,(int32_t)c->r[0],13); // 80200B38
  if (!crb(c,2)) { goto L_80200B50; } // 80200B3C
  c->r[0]=R8(c->r[3]+0x00000000u); // 80200B40
  cmps(c,0,(int32_t)c->r[0],10); // 80200B44
  if (!crb(c,2)) { goto L_80200B50; } // 80200B48
  c->r[5]=0u+0x00000001u; // 80200B4C
L_80200B50:;
  c->r[3]=c->r[3]+0x00000001u; // 80200B50
  c->r[4]=c->r[4]+0x00000001u; // 80200B54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80200AC4; } // 80200B58
L_80200B5C:;
  cmps(c,0,(int32_t)c->r[5],0); // 80200B5C
  if (crb(c,2)) { goto L_80200B74; } // 80200B60
  c->r[0]=0u-c->r[25]; // 80200B64
  c->r[0]=c->r[0]|c->r[25]; // 80200B68
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80200B6C
  goto L_80200BC0; // 80200B70
L_80200B74:;
  cmps(c,0,(int32_t)c->r[31],0); // 80200B74
  if (!crb(c,0)) { goto L_80200B84; } // 80200B78
  c->r[3]=0u+0x00000000u; // 80200B7C
  goto L_80200BC0; // 80200B80
L_80200B84:;
  cmps(c,0,(int32_t)c->r[24],512); // 80200B84
  if (crb(c,0)) { IRQCHK(c); goto L_80200A40; } // 80200B88
  c->r[5]=R32(c->r[30]+0x000007D0u); // 80200B8C
  c->r[3]=c->r[29]|c->r[29]; // 80200B90
  c->r[4]=c->r[27]|c->r[27]; // 80200B94
  c->r[6]=c->r[28]|c->r[28]; // 80200B98
  c->r[7]=0u+0x00000001u; // 80200B9C
  c->r[8]=0u+0x00000000u; // 80200BA0
  c->lr=0x80200BA8u; f_801FF320(c); // 80200BA4
  cmps(c,0,(int32_t)c->r[3],0); // 80200BA8
  if (!crb(c,0)) { goto L_80200BB8; } // 80200BAC
  c->r[3]=0u+0x00000000u; // 80200BB0
  goto L_80200BC0; // 80200BB4
L_80200BB8:;
  if (crb(c,2)) { IRQCHK(c); goto L_80200A40; } // 80200BB8
  c->r[3]=0u+0x00000000u; // 80200BBC
L_80200BC0:;
  c->r[11]=c->r[1]+0x00000230u; // 80200BC0
  c->lr=0x80200BC8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80200BC4
  c->r[0]=R32(c->r[1]+0x00000234u); // 80200BC8
  c->lr=c->r[0]; // 80200BCC
  c->r[1]=c->r[1]+0x00000230u; // 80200BD0
  return; // 80200BD4
}

// NHTTPi_SendHeaderList
void f_80200BD8(Ctx* __restrict c) {
  trace_call(0x80200BD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200BD8
  c->r[0]=c->lr; // 80200BDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80200BE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80200BE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80200BE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80200BEC
  c->r[29]=c->r[3]|c->r[3]; // 80200BF0
  c->lr=0x80200BF8u; f_8020453C(c); // 80200BF4
  c->lr=0x80200BFCu; f_802045B0(c); // 80200BF8
  c->r[3]=R32(c->r[3]+0x00000000u); // 80200BFC
  c->r[31]=R32(c->r[3]+0x0000000Cu); // 80200C00
  c->r[3]=c->r[31]+0x00000030u; // 80200C04
  c->lr=0x80200C0Cu; f_801FD43C(c); // 80200C08
  c->r[30]=c->r[3]|c->r[3]; // 80200C0C
  goto L_80200CA8; // 80200C10
L_80200C14:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 80200C14
  c->lr=0x80200C1Cu; f_801FF70C(c); // 80200C18
  c->r[4]=R32(c->r[30]+0x00000008u); // 80200C1C
  c->r[5]=c->r[3]|c->r[3]; // 80200C20
  c->r[3]=c->r[29]|c->r[29]; // 80200C24
  c->lr=0x80200C2Cu; f_8020068C(c); // 80200C28
  cmps(c,0,(int32_t)c->r[3],0); // 80200C2C
  if (crb(c,2)) { goto L_80200C38; } // 80200C30
  goto L_80200CB4; // 80200C34
L_80200C38:;
  c->r[3]=c->r[29]|c->r[29]; // 80200C38
  c->r[4]=c->r[13]+0xFFFF94C8u; // 80200C3C
  c->r[5]=0u+0x00000002u; // 80200C40
  c->lr=0x80200C48u; f_8020068C(c); // 80200C44
  cmps(c,0,(int32_t)c->r[3],0); // 80200C48
  if (crb(c,2)) { goto L_80200C54; } // 80200C4C
  goto L_80200CB4; // 80200C50
L_80200C54:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80200C54
  c->lr=0x80200C5Cu; f_801FF70C(c); // 80200C58
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 80200C5C
  c->r[5]=c->r[3]|c->r[3]; // 80200C60
  c->r[3]=c->r[29]|c->r[29]; // 80200C64
  c->lr=0x80200C6Cu; f_8020068C(c); // 80200C68
  cmps(c,0,(int32_t)c->r[3],0); // 80200C6C
  if (crb(c,2)) { goto L_80200C78; } // 80200C70
  goto L_80200CB4; // 80200C74
L_80200C78:;
  c->r[3]=c->r[29]|c->r[29]; // 80200C78
  c->r[4]=c->r[13]+0xFFFF94BCu; // 80200C7C
  c->r[5]=0u+0x00000002u; // 80200C80
  c->lr=0x80200C88u; f_8020068C(c); // 80200C84
  cmps(c,0,(int32_t)c->r[3],0); // 80200C88
  if (crb(c,2)) { goto L_80200C94; } // 80200C8C
  goto L_80200CB4; // 80200C90
L_80200C94:;
  c->r[3]=c->r[30]|c->r[30]; // 80200C94
  c->lr=0x80200C9Cu; f_801FD024(c); // 80200C98
  c->r[3]=c->r[31]+0x00000030u; // 80200C9C
  c->lr=0x80200CA4u; f_801FD43C(c); // 80200CA0
  c->r[30]=c->r[3]|c->r[3]; // 80200CA4
L_80200CA8:;
  cmps(c,0,(int32_t)c->r[30],0); // 80200CA8
  if (!crb(c,2)) { IRQCHK(c); goto L_80200C14; } // 80200CAC
  c->r[3]=0u+0x00000000u; // 80200CB0
L_80200CB4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80200CB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80200CB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80200CBC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80200CC0
  c->lr=c->r[0]; // 80200CC4
  c->r[1]=c->r[1]+0x00000020u; // 80200CC8
  return; // 80200CCC
}

// NHTTPi_SendProcPostDataRaw
void f_80200CD0(Ctx* __restrict c) {
  trace_call(0x80200CD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200CD0
  c->r[0]=c->lr; // 80200CD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80200CD8
  c->r[11]=c->r[1]+0x00000030u; // 80200CDC
  c->lr=0x80200CE4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80200CE0
  c->r[26]=c->r[3]|c->r[3]; // 80200CE4
  c->lr=0x80200CECu; f_8020453C(c); // 80200CE8
  c->r[31]=c->r[3]|c->r[3]; // 80200CEC
  c->lr=0x80200CF4u; f_802045C0(c); // 80200CF0
  c->r[29]=c->r[3]|c->r[3]; // 80200CF4
  c->r[3]=c->r[31]|c->r[31]; // 80200CF8
  c->lr=0x80200D00u; f_802045B0(c); // 80200CFC
  c->r[4]=R32(c->r[3]+0x00000000u); // 80200D00
  c->r[3]=c->r[31]|c->r[31]; // 80200D04
  c->r[28]=R32(c->r[4]+0x0000000Cu); // 80200D08
  c->lr=0x80200D10u; f_802045B8(c); // 80200D0C
  c->r[30]=c->r[3]|c->r[3]; // 80200D10
  c->r[3]=c->r[31]|c->r[31]; // 80200D14
  c->lr=0x80200D1Cu; f_802045A4(c); // 80200D18
  c->r[0]=0u+0x00000000u; // 80200D1C
  c->r[31]=c->r[3]|c->r[3]; // 80200D20
  W32(c->r[1]+0x00000008u,c->r[0]); // 80200D24
  c->r[30]=c->r[30]+0x00000360u; // 80200D28
  c->r[0]=R32(c->r[28]+0x00000248u); // 80200D2C
  cmps(c,0,(int32_t)c->r[0],0); // 80200D30
  if (!crb(c,2)) { goto L_80200D60; } // 80200D34
  c->r[3]=c->r[29]|c->r[29]; // 80200D38
  c->r[4]=c->r[28]|c->r[28]; // 80200D3C
  c->r[6]=c->r[1]+0x00000008u; // 80200D40
  c->r[5]=0u+0x00000000u; // 80200D44
  c->r[7]=0u+0x00000000u; // 80200D48
  c->lr=0x80200D50u; f_8020032C(c); // 80200D4C
  cmps(c,0,(int32_t)c->r[3],0); // 80200D50
  if (!crb(c,2)) { goto L_80200D68; } // 80200D54
  c->r[3]=0u+0x00000003u; // 80200D58
  goto L_80200E40; // 80200D5C
L_80200D60:;
  c->r[0]=R32(c->r[28]+0x0000024Cu); // 80200D60
  W32(c->r[1]+0x00000008u,c->r[0]); // 80200D64
L_80200D68:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 80200D68
  c->r[3]=c->r[1]+0x0000000Cu; // 80200D6C
  c->lr=0x80200D74u; f_801FFB34(c); // 80200D70
  c->r[4]=0u+0x802F0000u; // 80200D74
  c->r[27]=c->r[3]|c->r[3]; // 80200D78
  c->r[3]=c->r[26]|c->r[26]; // 80200D7C
  c->r[5]=0u+0x00000010u; // 80200D80
  c->r[4]=c->r[4]+0xFFFF9B8Cu; // 80200D84
  c->lr=0x80200D8Cu; f_8020068C(c); // 80200D88
  cmps(c,0,(int32_t)c->r[3],0); // 80200D8C
  if (crb(c,2)) { goto L_80200D98; } // 80200D90
  goto L_80200E40; // 80200D94
L_80200D98:;
  c->r[3]=c->r[26]|c->r[26]; // 80200D98
  c->r[5]=c->r[27]|c->r[27]; // 80200D9C
  c->r[4]=c->r[1]+0x0000000Cu; // 80200DA0
  c->lr=0x80200DA8u; f_8020068C(c); // 80200DA4
  cmps(c,0,(int32_t)c->r[3],0); // 80200DA8
  if (crb(c,2)) { goto L_80200DB4; } // 80200DAC
  goto L_80200E40; // 80200DB0
L_80200DB4:;
  c->r[3]=c->r[26]|c->r[26]; // 80200DB4
  c->r[4]=c->r[13]+0xFFFF94BCu; // 80200DB8
  c->r[5]=0u+0x00000002u; // 80200DBC
  c->lr=0x80200DC4u; f_8020068C(c); // 80200DC0
  cmps(c,0,(int32_t)c->r[3],0); // 80200DC4
  if (crb(c,2)) { goto L_80200DD0; } // 80200DC8
  goto L_80200E40; // 80200DCC
L_80200DD0:;
  c->r[3]=c->r[26]|c->r[26]; // 80200DD0
  c->r[4]=c->r[13]+0xFFFF94BCu; // 80200DD4
  c->r[5]=0u+0x00000002u; // 80200DD8
  c->lr=0x80200DE0u; f_8020068C(c); // 80200DDC
  cmps(c,0,(int32_t)c->r[3],0); // 80200DE0
  if (crb(c,2)) { goto L_80200DEC; } // 80200DE4
  goto L_80200E40; // 80200DE8
L_80200DEC:;
  c->r[4]=R32(c->r[28]+0x00000248u); // 80200DEC
  cmps(c,0,(int32_t)c->r[4],0); // 80200DF0
  if (!crb(c,2)) { goto L_80200E24; } // 80200DF4
  c->r[7]=R32(c->r[31]+0x000007D0u); // 80200DF8
  c->r[3]=c->r[29]|c->r[29]; // 80200DFC
  c->r[4]=c->r[28]|c->r[28]; // 80200E00
  c->r[5]=c->r[30]|c->r[30]; // 80200E04
  c->r[8]=c->r[26]+0x00000324u; // 80200E08
  c->r[6]=0u+0x00000000u; // 80200E0C
  c->r[9]=0u+0x00000000u; // 80200E10
  c->lr=0x80200E18u; f_80200430(c); // 80200E14
  cmps(c,0,(int32_t)c->r[3],0); // 80200E18
  if (crb(c,2)) { goto L_80200E3C; } // 80200E1C
  goto L_80200E40; // 80200E20
L_80200E24:;
  c->r[5]=R32(c->r[28]+0x0000024Cu); // 80200E24
  c->r[3]=c->r[26]|c->r[26]; // 80200E28
  c->lr=0x80200E30u; f_8020068C(c); // 80200E2C
  cmps(c,0,(int32_t)c->r[3],0); // 80200E30
  if (crb(c,2)) { goto L_80200E3C; } // 80200E34
  goto L_80200E40; // 80200E38
L_80200E3C:;
  c->r[3]=0u+0x00000000u; // 80200E3C
L_80200E40:;
  c->r[11]=c->r[1]+0x00000030u; // 80200E40
  c->lr=0x80200E48u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80200E44
  c->r[0]=R32(c->r[1]+0x00000034u); // 80200E48
  c->lr=c->r[0]; // 80200E4C
  c->r[1]=c->r[1]+0x00000030u; // 80200E50
  return; // 80200E54
}

// NHTTPi_SendProcPostDataBinary
void f_80200E58(Ctx* __restrict c) {
  trace_call(0x80200E58u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200E58
  c->r[0]=c->lr; // 80200E5C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80200E60
  c->r[11]=c->r[1]+0x00000040u; // 80200E64
  c->lr=0x80200E6Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80200E68
  c->r[30]=0u+0x80280000u; // 80200E6C
  c->r[26]=c->r[3]|c->r[3]; // 80200E70
  c->r[30]=c->r[30]+0x00001A58u; // 80200E74
  c->lr=0x80200E7Cu; f_8020453C(c); // 80200E78
  c->r[25]=c->r[3]|c->r[3]; // 80200E7C
  c->lr=0x80200E84u; f_802045C0(c); // 80200E80
  c->r[29]=c->r[3]|c->r[3]; // 80200E84
  c->r[3]=c->r[25]|c->r[25]; // 80200E88
  c->lr=0x80200E90u; f_802045B0(c); // 80200E8C
  c->r[4]=R32(c->r[3]+0x00000000u); // 80200E90
  c->r[3]=c->r[25]|c->r[25]; // 80200E94
  c->r[28]=R32(c->r[4]+0x0000000Cu); // 80200E98
  c->lr=0x80200EA0u; f_802045B8(c); // 80200E9C
  c->r[27]=c->r[3]|c->r[3]; // 80200EA0
  c->r[3]=c->r[25]|c->r[25]; // 80200EA4
  c->lr=0x80200EACu; f_802045A4(c); // 80200EA8
  c->r[4]=0u+0x00000000u; // 80200EAC
  c->r[31]=c->r[3]|c->r[3]; // 80200EB0
  W32(c->r[1]+0x00000008u,c->r[4]); // 80200EB4
  c->r[27]=c->r[27]+0x00000360u; // 80200EB8
  c->r[25]=R32(c->r[28]+0x00000034u); // 80200EBC
  goto L_80200F5C; // 80200EC0
L_80200EC4:;
  c->r[4]=c->r[4]+0x00000016u; // 80200EC4
  W32(c->r[1]+0x00000008u,c->r[4]); // 80200EC8
  c->r[3]=R32(c->r[25]+0x00000008u); // 80200ECC
  c->lr=0x80200ED4u; f_801FF70C(c); // 80200ED0
  c->r[0]=R32(c->r[1]+0x00000008u); // 80200ED4
  c->r[3]=c->r[3]+c->r[0]; // 80200ED8
  c->r[4]=c->r[3]+0x00000029u; // 80200EDC
  W32(c->r[1]+0x00000008u,c->r[4]); // 80200EE0
  c->r[0]=R32(c->r[25]+0x00000014u); // 80200EE4
  cmps(c,0,(int32_t)c->r[0],0); // 80200EE8
  if (crb(c,2)) { goto L_80200EF4; } // 80200EEC
  c->r[4]=c->r[4]+0x0000004Bu; // 80200EF0
L_80200EF4:;
  c->r[3]=c->r[4]+0x00000002u; // 80200EF4
  W32(c->r[1]+0x00000008u,c->r[3]); // 80200EF8
  c->r[0]=R32(c->r[25]+0x0000000Cu); // 80200EFC
  cmps(c,0,(int32_t)c->r[0],0); // 80200F00
  if (!crb(c,2)) { goto L_80200F30; } // 80200F04
  c->r[5]=R32(c->r[25]+0x00000008u); // 80200F08
  c->r[3]=c->r[29]|c->r[29]; // 80200F0C
  c->r[4]=c->r[28]|c->r[28]; // 80200F10
  c->r[6]=c->r[1]+0x00000008u; // 80200F14
  c->r[7]=0u+0x00000001u; // 80200F18
  c->lr=0x80200F20u; f_8020032C(c); // 80200F1C
  cmps(c,0,(int32_t)c->r[3],0); // 80200F20
  if (!crb(c,2)) { goto L_80200F3C; } // 80200F24
  c->r[3]=0u+0x00000003u; // 80200F28
  goto L_802011E4; // 80200F2C
L_80200F30:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 80200F30
  c->r[4]=c->r[3]+c->r[0]; // 80200F34
  W32(c->r[1]+0x00000008u,c->r[4]); // 80200F38
L_80200F3C:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80200F3C
  c->r[4]=c->r[3]+0x00000002u; // 80200F40
  W32(c->r[1]+0x00000008u,c->r[4]); // 80200F44
  c->r[3]=R32(c->r[28]+0x00000034u); // 80200F48
  c->r[0]=R32(c->r[3]+0x00000000u); // 80200F4C
  cmpu(c,0,c->r[25],c->r[0]); // 80200F50
  if (crb(c,2)) { goto L_80200F64; } // 80200F54
  c->r[25]=R32(c->r[25]+0x00000004u); // 80200F58
L_80200F5C:;
  cmps(c,0,(int32_t)c->r[25],0); // 80200F5C
  if (!crb(c,2)) { IRQCHK(c); goto L_80200EC4; } // 80200F60
L_80200F64:;
  c->r[4]=c->r[4]+0x00000018u; // 80200F64
  c->r[3]=c->r[1]+0x0000000Cu; // 80200F68
  W32(c->r[1]+0x00000008u,c->r[4]); // 80200F6C
  c->lr=0x80200F74u; f_801FFB34(c); // 80200F70
  c->r[25]=c->r[3]|c->r[3]; // 80200F74
  c->r[3]=c->r[26]|c->r[26]; // 80200F78
  c->r[4]=c->r[30]+0x000000A8u; // 80200F7C
  c->r[5]=0u+0x0000002Cu; // 80200F80
  c->lr=0x80200F88u; f_8020068C(c); // 80200F84
  cmps(c,0,(int32_t)c->r[3],0); // 80200F88
  if (crb(c,2)) { goto L_80200F94; } // 80200F8C
  goto L_802011E4; // 80200F90
L_80200F94:;
  c->r[3]=c->r[26]|c->r[26]; // 80200F94
  c->r[4]=c->r[28]+0x0000003Au; // 80200F98
  c->r[5]=0u+0x00000012u; // 80200F9C
  c->lr=0x80200FA4u; f_8020068C(c); // 80200FA0
  cmps(c,0,(int32_t)c->r[3],0); // 80200FA4
  if (crb(c,2)) { goto L_80200FB0; } // 80200FA8
  goto L_802011E4; // 80200FAC
L_80200FB0:;
  c->r[3]=c->r[26]|c->r[26]; // 80200FB0
  c->r[4]=c->r[13]+0xFFFF94BCu; // 80200FB4
  c->r[5]=0u+0x00000002u; // 80200FB8
  c->lr=0x80200FC0u; f_8020068C(c); // 80200FBC
  cmps(c,0,(int32_t)c->r[3],0); // 80200FC0
  if (crb(c,2)) { goto L_80200FCC; } // 80200FC4
  goto L_802011E4; // 80200FC8
L_80200FCC:;
  c->r[4]=0u+0x802F0000u; // 80200FCC
  c->r[3]=c->r[26]|c->r[26]; // 80200FD0
  c->r[4]=c->r[4]+0xFFFF9B8Cu; // 80200FD4
  c->r[5]=0u+0x00000010u; // 80200FD8
  c->lr=0x80200FE0u; f_8020068C(c); // 80200FDC
  cmps(c,0,(int32_t)c->r[3],0); // 80200FE0
  if (crb(c,2)) { goto L_80200FEC; } // 80200FE4
  goto L_802011E4; // 80200FE8
L_80200FEC:;
  c->r[3]=c->r[26]|c->r[26]; // 80200FEC
  c->r[5]=c->r[25]|c->r[25]; // 80200FF0
  c->r[4]=c->r[1]+0x0000000Cu; // 80200FF4
  c->lr=0x80200FFCu; f_8020068C(c); // 80200FF8
  cmps(c,0,(int32_t)c->r[3],0); // 80200FFC
  if (crb(c,2)) { goto L_80201008; } // 80201000
  goto L_802011E4; // 80201004
L_80201008:;
  c->r[3]=c->r[26]|c->r[26]; // 80201008
  c->r[4]=c->r[13]+0xFFFF94BCu; // 8020100C
  c->r[5]=0u+0x00000002u; // 80201010
  c->lr=0x80201018u; f_8020068C(c); // 80201014
  cmps(c,0,(int32_t)c->r[3],0); // 80201018
  if (crb(c,2)) { goto L_80201024; } // 8020101C
  goto L_802011E4; // 80201020
L_80201024:;
  c->r[3]=c->r[26]|c->r[26]; // 80201024
  c->r[4]=c->r[13]+0xFFFF94BCu; // 80201028
  c->r[5]=0u+0x00000002u; // 8020102C
  c->lr=0x80201034u; f_8020068C(c); // 80201030
  cmps(c,0,(int32_t)c->r[3],0); // 80201034
  if (crb(c,2)) { goto L_80201040; } // 80201038
  goto L_802011E4; // 8020103C
L_80201040:;
  c->r[25]=R32(c->r[28]+0x00000034u); // 80201040
  goto L_802011A0; // 80201044
L_80201048:;
  c->r[3]=c->r[26]|c->r[26]; // 80201048
  c->r[4]=c->r[28]+0x00000038u; // 8020104C
  c->r[5]=0u+0x00000014u; // 80201050
  c->lr=0x80201058u; f_8020068C(c); // 80201054
  cmps(c,0,(int32_t)c->r[3],0); // 80201058
  if (crb(c,2)) { goto L_80201064; } // 8020105C
  goto L_802011E4; // 80201060
L_80201064:;
  c->r[3]=c->r[26]|c->r[26]; // 80201064
  c->r[4]=c->r[13]+0xFFFF94BCu; // 80201068
  c->r[5]=0u+0x00000002u; // 8020106C
  c->lr=0x80201074u; f_8020068C(c); // 80201070
  cmps(c,0,(int32_t)c->r[3],0); // 80201074
  if (crb(c,2)) { goto L_80201080; } // 80201078
  goto L_802011E4; // 8020107C
L_80201080:;
  c->r[3]=c->r[26]|c->r[26]; // 80201080
  c->r[4]=c->r[30]+0x00000000u; // 80201084
  c->r[5]=0u+0x00000026u; // 80201088
  c->lr=0x80201090u; f_8020068C(c); // 8020108C
  cmps(c,0,(int32_t)c->r[3],0); // 80201090
  if (crb(c,2)) { goto L_8020109C; } // 80201094
  goto L_802011E4; // 80201098
L_8020109C:;
  c->r[3]=R32(c->r[25]+0x00000008u); // 8020109C
  c->lr=0x802010A4u; f_801FF70C(c); // 802010A0
  c->r[4]=R32(c->r[25]+0x00000008u); // 802010A4
  c->r[5]=c->r[3]|c->r[3]; // 802010A8
  c->r[3]=c->r[26]|c->r[26]; // 802010AC
  c->lr=0x802010B4u; f_8020068C(c); // 802010B0
  cmps(c,0,(int32_t)c->r[3],0); // 802010B4
  if (crb(c,2)) { goto L_802010C0; } // 802010B8
  goto L_802011E4; // 802010BC
L_802010C0:;
  c->r[3]=c->r[26]|c->r[26]; // 802010C0
  c->r[4]=c->r[13]+0xFFFF94CCu; // 802010C4
  c->r[5]=0u+0x00000003u; // 802010C8
  c->lr=0x802010D0u; f_8020068C(c); // 802010CC
  cmps(c,0,(int32_t)c->r[3],0); // 802010D0
  if (crb(c,2)) { goto L_802010DC; } // 802010D4
  goto L_802011E4; // 802010D8
L_802010DC:;
  c->r[0]=R32(c->r[25]+0x00000014u); // 802010DC
  cmps(c,0,(int32_t)c->r[0],0); // 802010E0
  if (crb(c,2)) { goto L_80201104; } // 802010E4
  c->r[3]=c->r[26]|c->r[26]; // 802010E8
  c->r[4]=c->r[30]+0x00000028u; // 802010EC
  c->r[5]=0u+0x0000004Bu; // 802010F0
  c->lr=0x802010F8u; f_8020068C(c); // 802010F4
  cmps(c,0,(int32_t)c->r[3],0); // 802010F8
  if (crb(c,2)) { goto L_80201104; } // 802010FC
  goto L_802011E4; // 80201100
L_80201104:;
  c->r[3]=c->r[26]|c->r[26]; // 80201104
  c->r[4]=c->r[13]+0xFFFF94BCu; // 80201108
  c->r[5]=0u+0x00000002u; // 8020110C
  c->lr=0x80201114u; f_8020068C(c); // 80201110
  cmps(c,0,(int32_t)c->r[3],0); // 80201114
  if (crb(c,2)) { goto L_80201120; } // 80201118
  goto L_802011E4; // 8020111C
L_80201120:;
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 80201120
  cmps(c,0,(int32_t)c->r[4],0); // 80201124
  if (!crb(c,2)) { goto L_80201158; } // 80201128
  c->r[6]=R32(c->r[25]+0x00000008u); // 8020112C
  c->r[3]=c->r[29]|c->r[29]; // 80201130
  c->r[7]=R32(c->r[31]+0x000007D0u); // 80201134
  c->r[4]=c->r[28]|c->r[28]; // 80201138
  c->r[5]=c->r[27]|c->r[27]; // 8020113C
  c->r[8]=c->r[26]+0x00000324u; // 80201140
  c->r[9]=0u+0x00000001u; // 80201144
  c->lr=0x8020114Cu; f_80200430(c); // 80201148
  cmps(c,0,(int32_t)c->r[3],0); // 8020114C
  if (crb(c,2)) { goto L_80201170; } // 80201150
  goto L_802011E4; // 80201154
L_80201158:;
  c->r[5]=R32(c->r[25]+0x00000010u); // 80201158
  c->r[3]=c->r[26]|c->r[26]; // 8020115C
  c->lr=0x80201164u; f_8020068C(c); // 80201160
  cmps(c,0,(int32_t)c->r[3],0); // 80201164
  if (crb(c,2)) { goto L_80201170; } // 80201168
  goto L_802011E4; // 8020116C
L_80201170:;
  c->r[3]=c->r[26]|c->r[26]; // 80201170
  c->r[4]=c->r[13]+0xFFFF94BCu; // 80201174
  c->r[5]=0u+0x00000002u; // 80201178
  c->lr=0x80201180u; f_8020068C(c); // 8020117C
  cmps(c,0,(int32_t)c->r[3],0); // 80201180
  if (crb(c,2)) { goto L_8020118C; } // 80201184
  goto L_802011E4; // 80201188
L_8020118C:;
  c->r[3]=R32(c->r[28]+0x00000034u); // 8020118C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80201190
  cmpu(c,0,c->r[25],c->r[0]); // 80201194
  if (crb(c,2)) { goto L_802011A8; } // 80201198
  c->r[25]=R32(c->r[25]+0x00000004u); // 8020119C
L_802011A0:;
  cmps(c,0,(int32_t)c->r[25],0); // 802011A0
  if (!crb(c,2)) { IRQCHK(c); goto L_80201048; } // 802011A4
L_802011A8:;
  c->r[3]=c->r[26]|c->r[26]; // 802011A8
  c->r[4]=c->r[28]+0x00000038u; // 802011AC
  c->r[5]=0u+0x00000014u; // 802011B0
  c->lr=0x802011B8u; f_8020068C(c); // 802011B4
  cmps(c,0,(int32_t)c->r[3],0); // 802011B8
  if (crb(c,2)) { goto L_802011C4; } // 802011BC
  goto L_802011E4; // 802011C0
L_802011C4:;
  c->r[3]=c->r[26]|c->r[26]; // 802011C4
  c->r[4]=c->r[13]+0xFFFF94D0u; // 802011C8
  c->r[5]=0u+0x00000004u; // 802011CC
  c->lr=0x802011D4u; f_8020068C(c); // 802011D0
  c->r[0]=0u-c->r[3]; // 802011D4
  c->r[0]=c->r[0]|c->r[3]; // 802011D8
  c->r[0]=sraw(c,c->r[0],31); // 802011DC
  c->r[3]=c->r[3]&c->r[0]; // 802011E0
L_802011E4:;
  c->r[11]=c->r[1]+0x00000040u; // 802011E4
  c->lr=0x802011ECu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802011E8
  c->r[0]=R32(c->r[1]+0x00000044u); // 802011EC
  c->lr=c->r[0]; // 802011F0
  c->r[1]=c->r[1]+0x00000040u; // 802011F4
  return; // 802011F8
}

// NHTTPi_SendProcPostDataAscii
void f_802011FC(Ctx* __restrict c) {
  trace_call(0x802011FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802011FC
  c->r[0]=c->lr; // 80201200
  W32(c->r[1]+0x00000044u,c->r[0]); // 80201204
  c->r[11]=c->r[1]+0x00000040u; // 80201208
  c->lr=0x80201210u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020120C
  c->r[27]=c->r[3]|c->r[3]; // 80201210
  c->lr=0x80201218u; f_8020453C(c); // 80201214
  c->r[25]=c->r[3]|c->r[3]; // 80201218
  c->lr=0x80201220u; f_802045C0(c); // 8020121C
  c->r[30]=c->r[3]|c->r[3]; // 80201220
  c->r[3]=c->r[25]|c->r[25]; // 80201224
  c->lr=0x8020122Cu; f_802045B0(c); // 80201228
  c->r[4]=R32(c->r[3]+0x00000000u); // 8020122C
  c->r[3]=c->r[25]|c->r[25]; // 80201230
  c->r[29]=R32(c->r[4]+0x0000000Cu); // 80201234
  c->lr=0x8020123Cu; f_802045B8(c); // 80201238
  c->r[28]=c->r[3]|c->r[3]; // 8020123C
  c->r[3]=c->r[25]|c->r[25]; // 80201240
  c->lr=0x80201248u; f_802045A4(c); // 80201244
  c->r[0]=0u+0x00000000u; // 80201248
  c->r[31]=c->r[3]|c->r[3]; // 8020124C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80201250
  c->r[28]=c->r[28]+0x00000360u; // 80201254
  c->r[25]=R32(c->r[29]+0x00000034u); // 80201258
  goto L_802012DC; // 8020125C
L_80201260:;
  c->r[3]=R32(c->r[25]+0x00000008u); // 80201260
  c->lr=0x80201268u; f_801FF7EC(c); // 80201264
  c->r[0]=R32(c->r[1]+0x00000008u); // 80201268
  c->r[3]=c->r[0]+c->r[3]; // 8020126C
  c->r[0]=c->r[3]+0x00000001u; // 80201270
  W32(c->r[1]+0x00000008u,c->r[0]); // 80201274
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 80201278
  cmps(c,0,(int32_t)c->r[3],0); // 8020127C
  if (!crb(c,2)) { goto L_802012AC; } // 80201280
  c->r[5]=R32(c->r[25]+0x00000008u); // 80201284
  c->r[3]=c->r[30]|c->r[30]; // 80201288
  c->r[4]=c->r[29]|c->r[29]; // 8020128C
  c->r[6]=c->r[1]+0x00000008u; // 80201290
  c->r[7]=0u+0x00000002u; // 80201294
  c->lr=0x8020129Cu; f_8020032C(c); // 80201298
  cmps(c,0,(int32_t)c->r[3],0); // 8020129C
  if (!crb(c,2)) { goto L_802012BC; } // 802012A0
  c->r[3]=0u+0x00000003u; // 802012A4
  goto L_802014A8; // 802012A8
L_802012AC:;
  c->lr=0x802012B0u; f_801FF7EC(c); // 802012AC
  c->r[0]=R32(c->r[1]+0x00000008u); // 802012B0
  c->r[0]=c->r[0]+c->r[3]; // 802012B4
  W32(c->r[1]+0x00000008u,c->r[0]); // 802012B8
L_802012BC:;
  c->r[3]=R32(c->r[29]+0x00000034u); // 802012BC
  c->r[0]=R32(c->r[3]+0x00000000u); // 802012C0
  cmpu(c,0,c->r[25],c->r[0]); // 802012C4
  if (crb(c,2)) { goto L_802012E4; } // 802012C8
  c->r[3]=R32(c->r[1]+0x00000008u); // 802012CC
  c->r[0]=c->r[3]+0x00000001u; // 802012D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 802012D4
  c->r[25]=R32(c->r[25]+0x00000004u); // 802012D8
L_802012DC:;
  cmps(c,0,(int32_t)c->r[25],0); // 802012DC
  if (!crb(c,2)) { IRQCHK(c); goto L_80201260; } // 802012E0
L_802012E4:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 802012E4
  c->r[3]=c->r[1]+0x0000000Cu; // 802012E8
  c->lr=0x802012F0u; f_801FFB34(c); // 802012EC
  c->r[4]=0u+0x80280000u; // 802012F0
  c->r[25]=c->r[3]|c->r[3]; // 802012F4
  c->r[3]=c->r[27]|c->r[27]; // 802012F8
  c->r[5]=0u+0x00000031u; // 802012FC
  c->r[4]=c->r[4]+0x00001ACCu; // 80201300
  c->lr=0x80201308u; f_8020068C(c); // 80201304
  cmps(c,0,(int32_t)c->r[3],0); // 80201308
  if (crb(c,2)) { goto L_80201314; } // 8020130C
  goto L_802014A8; // 80201310
L_80201314:;
  c->r[4]=0u+0x802F0000u; // 80201314
  c->r[3]=c->r[27]|c->r[27]; // 80201318
  c->r[4]=c->r[4]+0xFFFF9B8Cu; // 8020131C
  c->r[5]=0u+0x00000010u; // 80201320
  c->lr=0x80201328u; f_8020068C(c); // 80201324
  cmps(c,0,(int32_t)c->r[3],0); // 80201328
  if (crb(c,2)) { goto L_80201334; } // 8020132C
  goto L_802014A8; // 80201330
L_80201334:;
  c->r[3]=c->r[27]|c->r[27]; // 80201334
  c->r[5]=c->r[25]|c->r[25]; // 80201338
  c->r[4]=c->r[1]+0x0000000Cu; // 8020133C
  c->lr=0x80201344u; f_8020068C(c); // 80201340
  cmps(c,0,(int32_t)c->r[3],0); // 80201344
  if (crb(c,2)) { goto L_80201350; } // 80201348
  goto L_802014A8; // 8020134C
L_80201350:;
  c->r[3]=c->r[27]|c->r[27]; // 80201350
  c->r[4]=c->r[13]+0xFFFF94BCu; // 80201354
  c->r[5]=0u+0x00000002u; // 80201358
  c->lr=0x80201360u; f_8020068C(c); // 8020135C
  cmps(c,0,(int32_t)c->r[3],0); // 80201360
  if (crb(c,2)) { goto L_8020136C; } // 80201364
  goto L_802014A8; // 80201368
L_8020136C:;
  c->r[3]=c->r[27]|c->r[27]; // 8020136C
  c->r[4]=c->r[13]+0xFFFF94BCu; // 80201370
  c->r[5]=0u+0x00000002u; // 80201374
  c->lr=0x8020137Cu; f_8020068C(c); // 80201378
  cmps(c,0,(int32_t)c->r[3],0); // 8020137C
  if (crb(c,2)) { goto L_80201388; } // 80201380
  goto L_802014A8; // 80201384
L_80201388:;
  c->r[26]=R32(c->r[29]+0x00000034u); // 80201388
  goto L_8020149C; // 8020138C
L_80201390:;
  c->r[25]=0u+0x00000000u; // 80201390
  goto L_802013C4; // 80201394
L_80201398:;
  c->r[3]=c->r[1]+0x0000000Cu; // 80201398
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8020139C
  c->lr=0x802013A4u; f_801FF8D0(c); // 802013A0
  c->r[5]=c->r[3]|c->r[3]; // 802013A4
  c->r[3]=c->r[27]|c->r[27]; // 802013A8
  c->r[4]=c->r[1]+0x0000000Cu; // 802013AC
  c->lr=0x802013B4u; f_8020068C(c); // 802013B0
  cmps(c,0,(int32_t)c->r[3],0); // 802013B4
  if (crb(c,2)) { goto L_802013C0; } // 802013B8
  goto L_802014A8; // 802013BC
L_802013C0:;
  c->r[25]=c->r[25]+0x00000001u; // 802013C0
L_802013C4:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 802013C4
  c->r[4]=R8(c->r[3]+c->r[25]); // 802013C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 802013CC
  if (!crb(c,2)) { IRQCHK(c); goto L_80201398; } // 802013D0
  c->r[3]=c->r[27]|c->r[27]; // 802013D4
  c->r[4]=c->r[13]+0xFFFF94D8u; // 802013D8
  c->r[5]=0u+0x00000001u; // 802013DC
  c->lr=0x802013E4u; f_8020068C(c); // 802013E0
  cmps(c,0,(int32_t)c->r[3],0); // 802013E4
  if (crb(c,2)) { goto L_802013F0; } // 802013E8
  goto L_802014A8; // 802013EC
L_802013F0:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 802013F0
  cmps(c,0,(int32_t)c->r[0],0); // 802013F4
  if (!crb(c,2)) { goto L_80201428; } // 802013F8
  c->r[6]=R32(c->r[26]+0x00000008u); // 802013FC
  c->r[3]=c->r[30]|c->r[30]; // 80201400
  c->r[7]=R32(c->r[31]+0x000007D0u); // 80201404
  c->r[4]=c->r[29]|c->r[29]; // 80201408
  c->r[5]=c->r[28]|c->r[28]; // 8020140C
  c->r[8]=c->r[27]+0x00000324u; // 80201410
  c->r[9]=0u+0x00000002u; // 80201414
  c->lr=0x8020141Cu; f_80200430(c); // 80201418
  cmps(c,0,(int32_t)c->r[3],0); // 8020141C
  if (crb(c,2)) { goto L_8020146C; } // 80201420
  goto L_802014A8; // 80201424
L_80201428:;
  c->r[25]=0u+0x00000000u; // 80201428
  goto L_8020145C; // 8020142C
L_80201430:;
  c->r[3]=c->r[1]+0x0000000Cu; // 80201430
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80201434
  c->lr=0x8020143Cu; f_801FF8D0(c); // 80201438
  c->r[5]=c->r[3]|c->r[3]; // 8020143C
  c->r[3]=c->r[27]|c->r[27]; // 80201440
  c->r[4]=c->r[1]+0x0000000Cu; // 80201444
  c->lr=0x8020144Cu; f_8020068C(c); // 80201448
  cmps(c,0,(int32_t)c->r[3],0); // 8020144C
  if (crb(c,2)) { goto L_80201458; } // 80201450
  goto L_802014A8; // 80201454
L_80201458:;
  c->r[25]=c->r[25]+0x00000001u; // 80201458
L_8020145C:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 8020145C
  c->r[4]=R8(c->r[3]+c->r[25]); // 80201460
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 80201464
  if (!crb(c,2)) { IRQCHK(c); goto L_80201430; } // 80201468
L_8020146C:;
  c->r[3]=R32(c->r[29]+0x00000034u); // 8020146C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80201470
  cmpu(c,0,c->r[26],c->r[0]); // 80201474
  if (crb(c,2)) { goto L_802014A4; } // 80201478
  c->r[3]=c->r[27]|c->r[27]; // 8020147C
  c->r[4]=c->r[13]+0xFFFF94DCu; // 80201480
  c->r[5]=0u+0x00000001u; // 80201484
  c->lr=0x8020148Cu; f_8020068C(c); // 80201488
  cmps(c,0,(int32_t)c->r[3],0); // 8020148C
  if (crb(c,2)) { goto L_80201498; } // 80201490
  goto L_802014A8; // 80201494
L_80201498:;
  c->r[26]=R32(c->r[26]+0x00000004u); // 80201498
L_8020149C:;
  cmps(c,0,(int32_t)c->r[26],0); // 8020149C
  if (!crb(c,2)) { IRQCHK(c); goto L_80201390; } // 802014A0
L_802014A4:;
  c->r[3]=0u+0x00000000u; // 802014A4
L_802014A8:;
  c->r[11]=c->r[1]+0x00000040u; // 802014A8
  c->lr=0x802014B0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802014AC
  c->r[0]=R32(c->r[1]+0x00000044u); // 802014B0
  c->lr=c->r[0]; // 802014B4
  c->r[1]=c->r[1]+0x00000040u; // 802014B8
  return; // 802014BC
}

// NHTTPi_ThreadReqEnd
void f_802014C0(Ctx* __restrict c) {
  trace_call(0x802014C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802014C0
  c->r[0]=c->lr; // 802014C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802014C8
  c->r[11]=c->r[1]+0x00000030u; // 802014CC
  c->lr=0x802014D4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802014D0
  c->r[26]=c->r[3]|c->r[3]; // 802014D4
  c->lr=0x802014DCu; f_8020453C(c); // 802014D8
  c->r[25]=c->r[3]|c->r[3]; // 802014DC
  c->lr=0x802014E4u; f_802045A4(c); // 802014E0
  c->r[24]=c->r[3]|c->r[3]; // 802014E4
  c->r[3]=c->r[25]|c->r[25]; // 802014E8
  c->lr=0x802014F0u; f_802045B0(c); // 802014EC
  c->r[31]=c->r[3]|c->r[3]; // 802014F0
  c->r[3]=c->r[25]|c->r[25]; // 802014F4
  c->lr=0x802014FCu; f_802045C0(c); // 802014F8
  c->r[4]=R32(c->r[31]+0x00000000u); // 802014FC
  c->r[30]=c->r[3]|c->r[3]; // 80201500
  c->r[29]=R32(c->r[4]+0x0000000Cu); // 80201504
  c->r[28]=R32(c->r[29]+0x0000002Cu); // 80201508
  c->r[4]=c->r[29]|c->r[29]; // 8020150C
  c->lr=0x80201514u; f_8020410C(c); // 80201510
  c->r[0]=R32(c->r[29]+0x00000000u); // 80201514
  c->r[27]=c->r[3]|c->r[3]; // 80201518
  cmps(c,0,(int32_t)c->r[0],0); // 8020151C
  if (crb(c,2)) { goto L_80201534; } // 80201520
  c->r[3]=0u+0x00000008u; // 80201524
  c->r[0]=0u+0x00000000u; // 80201528
  W32(c->r[26]+0x00000330u,c->r[3]); // 8020152C
  W32(c->r[26]+0x00000338u,c->r[0]); // 80201530
L_80201534:;
  c->r[0]=R32(c->r[26]+0x00000338u); // 80201534
  cmps(c,0,(int32_t)c->r[0],0); // 80201538
  if (!crb(c,2)) { goto L_80201570; } // 8020153C
  c->r[5]=R32(c->r[24]+0x000007D0u); // 80201540
  cmps(c,0,(int32_t)c->r[5],0); // 80201544
  if (crb(c,0)) { goto L_80201570; } // 80201548
  c->r[3]=c->r[30]|c->r[30]; // 8020154C
  c->r[4]=c->r[29]|c->r[29]; // 80201550
  c->lr=0x80201558u; f_801FEF38(c); // 80201554
  cmps(c,0,(int32_t)c->r[3],0); // 80201558
  if (!crb(c,0)) { goto L_80201568; } // 8020155C
  c->r[0]=0u+0x0000000Au; // 80201560
  W32(c->r[26]+0x00000330u,c->r[0]); // 80201564
L_80201568:;
  c->r[0]=0u+0xFFFFFFFFu; // 80201568
  W32(c->r[24]+0x000007D0u,c->r[0]); // 8020156C
L_80201570:;
  c->r[0]=R32(c->r[26]+0x00000330u); // 80201570
  cmps(c,0,(int32_t)c->r[0],0); // 80201574
  if (!crb(c,2)) { goto L_80201588; } // 80201578
  c->r[0]=0u+0x00000001u; // 8020157C
  W32(c->r[28]+0x00000010u,c->r[0]); // 80201580
  goto L_802015B4; // 80201584
L_80201588:;
  c->r[25]=0u+0x00000000u; // 80201588
  c->r[3]=c->r[24]|c->r[24]; // 8020158C
  W32(c->r[28]+0x00000010u,c->r[25]); // 80201590
  c->r[4]=R32(c->r[26]+0x00000330u); // 80201594
  c->lr=0x8020159Cu; f_801FD068(c); // 80201598
  c->r[3]=R32(c->r[28]+0x00000028u); // 8020159C
  c->r[0]=c->r[26]+0x00000104u; // 802015A0
  cmpu(c,0,c->r[3],c->r[0]); // 802015A4
  if (!crb(c,2)) { goto L_802015B4; } // 802015A8
  W32(c->r[28]+0x00000028u,c->r[25]); // 802015AC
  W32(c->r[28]+0x0000001Cu,c->r[25]); // 802015B0
L_802015B4:;
  cmps(c,0,(int32_t)c->r[27],0); // 802015B4
  if (crb(c,2)) { goto L_802015C4; } // 802015B8
  c->r[0]=R32(c->r[26]+0x00000330u); // 802015BC
  W32(c->r[27]+0x00000004u,c->r[0]); // 802015C0
L_802015C4:;
  c->r[3]=c->r[30]|c->r[30]; // 802015C4
  c->lr=0x802015CCu; f_801FD8D0(c); // 802015C8
  c->r[3]=R32(c->r[31]+0x00000000u); // 802015CC
  c->lr=0x802015D4u; f_801FD024(c); // 802015D0
  c->r[0]=0u+0x00000000u; // 802015D4
  c->r[3]=c->r[30]|c->r[30]; // 802015D8
  W32(c->r[31]+0x00000000u,c->r[0]); // 802015DC
  c->lr=0x802015E4u; f_801FD8D4(c); // 802015E0
  c->r[3]=c->r[30]|c->r[30]; // 802015E4
  c->r[4]=c->r[29]|c->r[29]; // 802015E8
  c->lr=0x802015F0u; f_801FE80C(c); // 802015EC
  cmps(c,0,(int32_t)c->r[27],0); // 802015F0
  if (crb(c,2)) { goto L_8020160C; } // 802015F4
  c->r[0]=R32(c->r[28]+0x00000010u); // 802015F8
  cmps(c,0,(int32_t)c->r[0],0); // 802015FC
  if (crb(c,2)) { goto L_8020160C; } // 80201600
  c->r[0]=0u+0x00000005u; // 80201604
  W32(c->r[27]+0x00000000u,c->r[0]); // 80201608
L_8020160C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020160C
  c->r[4]=c->r[27]|c->r[27]; // 80201610
  c->lr=0x80201618u; f_802044E4(c); // 80201614
  cmps(c,0,(int32_t)c->r[27],0); // 80201618
  if (crb(c,2)) { goto L_80201628; } // 8020161C
  c->r[3]=c->r[27]|c->r[27]; // 80201620
  c->lr=0x80201628u; f_80203EB0(c); // 80201624
L_80201628:;
  c->r[11]=c->r[1]+0x00000030u; // 80201628
  c->lr=0x80201630u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020162C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80201630
  c->lr=c->r[0]; // 80201634
  c->r[1]=c->r[1]+0x00000030u; // 80201638
  return; // 8020163C
}

// NHTTPi_ThreadExecReqQueue
void f_80201640(Ctx* __restrict c) {
  trace_call(0x80201640u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201640
  c->r[0]=c->lr; // 80201644
  W32(c->r[1]+0x00000024u,c->r[0]); // 80201648
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020164C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80201650
  W32(c->r[1]+0x00000014u,c->r[29]); // 80201654
  W32(c->r[1]+0x00000010u,c->r[28]); // 80201658
  c->r[28]=c->r[3]|c->r[3]; // 8020165C
  c->lr=0x80201664u; f_8020453C(c); // 80201660
  c->r[30]=c->r[3]|c->r[3]; // 80201664
  c->lr=0x8020166Cu; f_802045C0(c); // 80201668
  c->r[29]=c->r[3]|c->r[3]; // 8020166C
  c->lr=0x80201674u; f_801FD8D0(c); // 80201670
  c->r[3]=c->r[30]|c->r[30]; // 80201674
  c->lr=0x8020167Cu; f_802045A8(c); // 80201678
  c->lr=0x80201680u; f_801FD87C(c); // 8020167C
  cmps(c,0,(int32_t)c->r[3],0); // 80201680
  c->r[31]=c->r[3]|c->r[3]; // 80201684
  if (crb(c,2)) { goto L_802016A4; } // 80201688
  c->r[3]=c->r[30]|c->r[30]; // 8020168C
  c->lr=0x80201694u; f_802045B0(c); // 80201690
  c->r[0]=R32(c->r[31]+0x00000008u); // 80201694
  W32(c->r[28]+0x00000000u,c->r[0]); // 80201698
  W32(c->r[3]+0x00000000u,c->r[31]); // 8020169C
  goto L_802016AC; // 802016A0
L_802016A4:;
  c->r[0]=0u+0xFFFFFFFFu; // 802016A4
  W32(c->r[28]+0x00000000u,c->r[0]); // 802016A8
L_802016AC:;
  c->r[3]=c->r[29]|c->r[29]; // 802016AC
  c->lr=0x802016B4u; f_801FD8D4(c); // 802016B0
  c->r[0]=R32(c->r[28]+0x00000000u); // 802016B4
  cmps(c,0,(int32_t)c->r[0],0); // 802016B8
  if (!crb(c,0)) { goto L_802016D4; } // 802016BC
  c->r[3]=c->r[30]|c->r[30]; // 802016C0
  c->lr=0x802016C8u; f_802045B8(c); // 802016C4
  c->lr=0x802016CCu; f_801FD9B4(c); // 802016C8
  c->r[3]=0u+0x00000000u; // 802016CC
  goto L_802016D8; // 802016D0
L_802016D4:;
  c->r[3]=0u+0x00000001u; // 802016D4
L_802016D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802016D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802016DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802016E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802016E4
  c->r[28]=R32(c->r[1]+0x00000010u); // 802016E8
  c->lr=c->r[0]; // 802016EC
  c->r[1]=c->r[1]+0x00000020u; // 802016F0
  return; // 802016F4
}

// NHTTPi_ThreadHostAddrProc
void f_802016F8(Ctx* __restrict c) {
  trace_call(0x802016F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802016F8
  c->r[0]=c->lr; // 802016FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80201700
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80201704
  c->r[31]=c->r[3]|c->r[3]; // 80201708
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020170C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80201710
  c->lr=0x80201718u; f_8020453C(c); // 80201714
  c->lr=0x8020171Cu; f_802045B0(c); // 80201718
  c->r[3]=R32(c->r[3]+0x00000000u); // 8020171C
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 80201720
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80201724
  c->r[29]=R32(c->r[30]+0x00000028u); // 80201728
  cmps(c,0,(int32_t)c->r[0],0); // 8020172C
  if (crb(c,2)) { goto L_80201738; } // 80201730
  c->r[29]=c->r[30]+0x000000E0u; // 80201734
L_80201738:;
  c->r[3]=c->r[29]|c->r[29]; // 80201738
  c->lr=0x80201740u; f_801FF70C(c); // 8020173C
  cmps(c,0,(int32_t)c->r[3],0); // 80201740
  if (crb(c,2)) { goto L_8020175C; } // 80201744
  c->r[3]=c->r[29]|c->r[29]; // 80201748
  c->r[4]=c->r[31]+0x00000004u; // 8020174C
  c->lr=0x80201754u; f_801FF710(c); // 80201750
  cmps(c,0,(int32_t)c->r[3],0); // 80201754
  if (crb(c,2)) { goto L_802017A0; } // 80201758
L_8020175C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020175C
  c->r[4]=c->r[29]|c->r[29]; // 80201760
  c->lr=0x80201768u; f_801FF694(c); // 80201764
  cmps(c,0,(int32_t)c->r[3],0); // 80201768
  W32(c->r[31]+0x00000314u,c->r[3]); // 8020176C
  if (!crb(c,2)) { goto L_802017A8; } // 80201770
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80201774
  cmps(c,0,(int32_t)c->r[0],0); // 80201778
  if (crb(c,2)) { goto L_80201790; } // 8020177C
  c->r[0]=0u+0x0000000Cu; // 80201780
  c->r[3]=0u+0x00000000u; // 80201784
  W32(c->r[31]+0x00000330u,c->r[0]); // 80201788
  goto L_80201830; // 8020178C
L_80201790:;
  c->r[0]=0u+0x00000004u; // 80201790
  c->r[3]=0u+0x00000000u; // 80201794
  W32(c->r[31]+0x00000330u,c->r[0]); // 80201798
  goto L_80201830; // 8020179C
L_802017A0:;
  c->r[0]=R32(c->r[31]+0x00000318u); // 802017A0
  W32(c->r[31]+0x00000314u,c->r[0]); // 802017A4
L_802017A8:;
  c->r[3]=c->r[31]+0x00000004u; // 802017A8
  c->r[4]=0u+0x00000100u; // 802017AC
  c->lr=0x802017B4u; f_801FF714(c); // 802017B0
  c->r[3]=c->r[29]|c->r[29]; // 802017B4
  c->lr=0x802017BCu; f_801FF70C(c); // 802017B8
  c->r[5]=c->r[3]|c->r[3]; // 802017BC
  c->r[4]=c->r[29]|c->r[29]; // 802017C0
  c->r[3]=c->r[31]+0x00000004u; // 802017C4
  c->lr=0x802017CCu; f_801FF708(c); // 802017C8
  c->r[0]=R32(c->r[30]+0x00000020u); // 802017CC
  W32(c->r[31]+0x0000031Cu,c->r[0]); // 802017D0
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 802017D4
  cmps(c,0,(int32_t)c->r[0],0); // 802017D8
  if (crb(c,2)) { goto L_802017E8; } // 802017DC
  c->r[0]=R32(c->r[30]+0x000001E0u); // 802017E0
  W32(c->r[31]+0x0000031Cu,c->r[0]); // 802017E4
L_802017E8:;
  c->r[3]=R32(c->r[31]+0x00000314u); // 802017E8
  c->r[0]=R32(c->r[31]+0x00000318u); // 802017EC
  cmpu(c,0,c->r[3],c->r[0]); // 802017F0
  if (!crb(c,2)) { goto L_80201814; } // 802017F4
  c->r[3]=R32(c->r[31]+0x0000031Cu); // 802017F8
  c->r[0]=R32(c->r[31]+0x00000320u); // 802017FC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80201800
  if (!crb(c,2)) { goto L_80201814; } // 80201804
  c->r[0]=R32(c->r[30]+0x00000008u); // 80201808
  cmps(c,0,(int32_t)c->r[0],1); // 8020180C
  if (!crb(c,2)) { goto L_8020181C; } // 80201810
L_80201814:;
  c->r[0]=0u+0x00000000u; // 80201814
  W32(c->r[31]+0x00000338u,c->r[0]); // 80201818
L_8020181C:;
  c->r[4]=R32(c->r[31]+0x00000314u); // 8020181C
  c->r[3]=0u+0x00000001u; // 80201820
  c->r[0]=R32(c->r[31]+0x0000031Cu); // 80201824
  W32(c->r[31]+0x00000318u,c->r[4]); // 80201828
  W32(c->r[31]+0x00000320u,c->r[0]); // 8020182C
L_80201830:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80201830
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80201834
  c->r[30]=R32(c->r[1]+0x00000018u); // 80201838
  c->r[29]=R32(c->r[1]+0x00000014u); // 8020183C
  c->lr=c->r[0]; // 80201840
  c->r[1]=c->r[1]+0x00000020u; // 80201844
  return; // 80201848
}

// NHTTPi_ThreadConnectProc
void f_8020184C(Ctx* __restrict c) {
  trace_call(0x8020184Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020184C
  c->r[0]=c->lr; // 80201850
  W32(c->r[1]+0x00000024u,c->r[0]); // 80201854
  c->r[11]=c->r[1]+0x00000020u; // 80201858
  c->lr=0x80201860u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020185C
  c->r[31]=c->r[3]|c->r[3]; // 80201860
  c->lr=0x80201868u; f_8020453C(c); // 80201864
  c->r[29]=c->r[3]|c->r[3]; // 80201868
  c->lr=0x80201870u; f_802045A4(c); // 8020186C
  c->r[28]=c->r[3]|c->r[3]; // 80201870
  c->r[3]=c->r[29]|c->r[29]; // 80201874
  c->lr=0x8020187Cu; f_802045B0(c); // 80201878
  c->r[4]=R32(c->r[3]+0x00000000u); // 8020187C
  c->r[30]=c->r[3]|c->r[3]; // 80201880
  c->r[3]=c->r[29]|c->r[29]; // 80201884
  c->r[29]=R32(c->r[4]+0x0000000Cu); // 80201888
  c->lr=0x80201890u; f_802045C0(c); // 8020188C
  c->r[0]=R32(c->r[31]+0x00000338u); // 80201890
  c->r[27]=c->r[3]|c->r[3]; // 80201894
  c->r[26]=0u+0x00000000u; // 80201898
  cmps(c,0,(int32_t)c->r[0],1); // 8020189C
  if (!crb(c,2)) { goto L_802018C0; } // 802018A0
  c->r[3]=R32(c->r[28]+0x000007D0u); // 802018A4
  c->lr=0x802018ACu; f_801FEE54(c); // 802018A8
  cmps(c,0,(int32_t)c->r[3],-1); // 802018AC
  if (!crb(c,2)) { goto L_802018C0; } // 802018B0
  c->r[0]=0u+0x00000000u; // 802018B4
  c->r[26]=0u+0x00000001u; // 802018B8
  W32(c->r[31]+0x00000338u,c->r[0]); // 802018BC
L_802018C0:;
  c->r[0]=R32(c->r[31]+0x00000338u); // 802018C0
  cmps(c,0,(int32_t)c->r[0],0); // 802018C4
  if (!crb(c,2)) { goto L_802019D0; } // 802018C8
  c->r[5]=R32(c->r[28]+0x000007D0u); // 802018CC
  cmps(c,0,(int32_t)c->r[5],0); // 802018D0
  if (crb(c,0)) { goto L_8020190C; } // 802018D4
  c->r[3]=c->r[27]|c->r[27]; // 802018D8
  c->r[4]=c->r[29]|c->r[29]; // 802018DC
  c->lr=0x802018E4u; f_801FEF38(c); // 802018E0
  cmps(c,0,(int32_t)c->r[3],0); // 802018E4
  if (!crb(c,0)) { goto L_8020190C; } // 802018E8
  cmps(c,0,(int32_t)c->r[26],0); // 802018EC
  if (!crb(c,2)) { goto L_8020190C; } // 802018F0
  c->r[3]=0u+0xFFFFFFFFu; // 802018F4
  c->r[0]=0u+0x0000000Au; // 802018F8
  W32(c->r[28]+0x000007D0u,c->r[3]); // 802018FC
  c->r[3]=0u+0x00000000u; // 80201900
  W32(c->r[31]+0x00000330u,c->r[0]); // 80201904
  goto L_802019F0; // 80201908
L_8020190C:;
  c->r[3]=c->r[29]|c->r[29]; // 8020190C
  c->lr=0x80201914u; f_801FEEAC(c); // 80201910
  cmps(c,0,(int32_t)c->r[3],0); // 80201914
  W32(c->r[28]+0x000007D0u,c->r[3]); // 80201918
  if (!crb(c,0)) { goto L_80201930; } // 8020191C
  c->r[0]=0u+0x00000003u; // 80201920
  c->r[3]=0u+0x00000000u; // 80201924
  W32(c->r[31]+0x00000330u,c->r[0]); // 80201928
  goto L_802019F0; // 8020192C
L_80201930:;
  c->r[3]=c->r[27]|c->r[27]; // 80201930
  c->lr=0x80201938u; f_801FD8D0(c); // 80201934
  c->r[0]=R32(c->r[28]+0x000007D0u); // 80201938
  c->r[3]=c->r[27]|c->r[27]; // 8020193C
  c->r[4]=R32(c->r[30]+0x00000000u); // 80201940
  W32(c->r[4]+0x00000010u,c->r[0]); // 80201944
  c->lr=0x8020194Cu; f_801FD8D4(c); // 80201948
  c->r[0]=R32(c->r[29]+0x00000000u); // 8020194C
  cmps(c,0,(int32_t)c->r[0],0); // 80201950
  if (crb(c,2)) { goto L_80201960; } // 80201954
  c->r[3]=0u+0x00000000u; // 80201958
  goto L_802019F0; // 8020195C
L_80201960:;
  c->r[6]=R32(c->r[28]+0x000007D0u); // 80201960
  c->r[3]=c->r[28]|c->r[28]; // 80201964
  c->r[7]=R32(c->r[31]+0x00000314u); // 80201968
  c->r[4]=c->r[27]|c->r[27]; // 8020196C
  c->r[8]=R32(c->r[31]+0x0000031Cu); // 80201970
  c->r[5]=c->r[29]|c->r[29]; // 80201974
  c->lr=0x8020197Cu; f_801FEFA4(c); // 80201978
  cmps(c,0,(int32_t)c->r[3],0); // 8020197C
  if (!crb(c,0)) { goto L_802019EC; } // 80201980
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80201984
  cmps(c,0,(int32_t)c->r[0],0); // 80201988
  if (crb(c,2)) { goto L_802019A0; } // 8020198C
  c->r[0]=0u+0x0000000Du; // 80201990
  c->r[3]=0u+0x00000000u; // 80201994
  W32(c->r[31]+0x00000330u,c->r[0]); // 80201998
  goto L_802019F0; // 8020199C
L_802019A0:;
  c->r[3]=c->r[28]|c->r[28]; // 802019A0
  c->lr=0x802019A8u; f_801FD078(c); // 802019A4
  cmps(c,0,(int32_t)c->r[3],0); // 802019A8
  if (crb(c,2)) { goto L_802019C0; } // 802019AC
  c->r[0]=0u+0x0000000Eu; // 802019B0
  c->r[3]=0u+0x00000000u; // 802019B4
  W32(c->r[31]+0x00000330u,c->r[0]); // 802019B8
  goto L_802019F0; // 802019BC
L_802019C0:;
  c->r[0]=0u+0x00000005u; // 802019C0
  c->r[3]=0u+0x00000000u; // 802019C4
  W32(c->r[31]+0x00000330u,c->r[0]); // 802019C8
  goto L_802019F0; // 802019CC
L_802019D0:;
  c->r[3]=c->r[27]|c->r[27]; // 802019D0
  c->lr=0x802019D8u; f_801FD8D0(c); // 802019D4
  c->r[0]=R32(c->r[28]+0x000007D0u); // 802019D8
  c->r[3]=c->r[27]|c->r[27]; // 802019DC
  c->r[4]=R32(c->r[30]+0x00000000u); // 802019E0
  W32(c->r[4]+0x00000010u,c->r[0]); // 802019E4
  c->lr=0x802019ECu; f_801FD8D4(c); // 802019E8
L_802019EC:;
  c->r[3]=0u+0x00000001u; // 802019EC
L_802019F0:;
  c->r[11]=c->r[1]+0x00000020u; // 802019F0
  c->lr=0x802019F8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802019F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802019F8
  c->lr=c->r[0]; // 802019FC
  c->r[1]=c->r[1]+0x00000020u; // 80201A00
  return; // 80201A04
}

// NHTTPi_ThreadProxyProc
void f_80201A08(Ctx* __restrict c) {
  trace_call(0x80201A08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201A08
  c->r[0]=c->lr; // 80201A0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80201A10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80201A14
  W32(c->r[1]+0x00000018u,c->r[30]); // 80201A18
  W32(c->r[1]+0x00000014u,c->r[29]); // 80201A1C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80201A20
  c->r[28]=c->r[3]|c->r[3]; // 80201A24
  c->lr=0x80201A2Cu; f_8020453C(c); // 80201A28
  c->r[30]=c->r[3]|c->r[3]; // 80201A2C
  c->lr=0x80201A34u; f_802045A4(c); // 80201A30
  c->r[29]=c->r[3]|c->r[3]; // 80201A34
  c->r[3]=c->r[30]|c->r[30]; // 80201A38
  c->lr=0x80201A40u; f_802045B0(c); // 80201A3C
  c->r[31]=c->r[3]|c->r[3]; // 80201A40
  c->r[3]=c->r[30]|c->r[30]; // 80201A44
  c->lr=0x80201A4Cu; f_802045C0(c); // 80201A48
  c->r[5]=R32(c->r[31]+0x00000000u); // 80201A4C
  c->r[4]=0u+0x0000000Au; // 80201A50
  c->r[0]=0u+0x00000000u; // 80201A54
  c->r[30]=c->r[3]|c->r[3]; // 80201A58
  c->r[31]=R32(c->r[5]+0x0000000Cu); // 80201A5C
  W32(c->r[28]+0x00000330u,c->r[4]); // 80201A60
  W32(c->r[28]+0x00000324u,c->r[0]); // 80201A64
  c->r[0]=R32(c->r[31]+0x00000008u); // 80201A68
  cmps(c,0,(int32_t)c->r[0],0); // 80201A6C
  if (crb(c,2)) { goto L_80201B38; } // 80201A70
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80201A74
  cmps(c,0,(int32_t)c->r[0],0); // 80201A78
  if (crb(c,2)) { goto L_80201B38; } // 80201A7C
  c->r[3]=c->r[28]|c->r[28]; // 80201A80
  c->lr=0x80201A88u; f_80200738(c); // 80201A84
  cmps(c,0,(int32_t)c->r[3],0); // 80201A88
  if (crb(c,2)) { goto L_80201A94; } // 80201A8C
  goto L_80201B3C; // 80201A90
L_80201A94:;
  c->r[3]=c->r[28]|c->r[28]; // 80201A94
  c->lr=0x80201A9Cu; f_802009E0(c); // 80201A98
  cmps(c,0,(int32_t)c->r[3],0); // 80201A9C
  if (!crb(c,2)) { goto L_80201AAC; } // 80201AA0
  c->r[3]=0u+0x00000001u; // 80201AA4
  goto L_80201B3C; // 80201AA8
L_80201AAC:;
  c->r[6]=R32(c->r[29]+0x000007D0u); // 80201AAC
  c->r[3]=c->r[29]|c->r[29]; // 80201AB0
  c->r[4]=c->r[30]|c->r[30]; // 80201AB4
  c->r[5]=c->r[31]|c->r[31]; // 80201AB8
  c->lr=0x80201AC0u; f_801FF064(c); // 80201ABC
  cmps(c,0,(int32_t)c->r[3],0); // 80201AC0
  if (crb(c,2)) { goto L_80201B38; } // 80201AC4
  cmps(c,0,(int32_t)c->r[3],-1004); // 80201AC8
  if (!crb(c,2)) { goto L_80201AF0; } // 80201ACC
  c->r[3]=c->r[29]|c->r[29]; // 80201AD0
  c->lr=0x80201AD8u; f_801FD078(c); // 80201AD4
  cmps(c,0,(int32_t)c->r[3],0); // 80201AD8
  if (crb(c,2)) { goto L_80201AE8; } // 80201ADC
  c->r[0]=0u+0x00000010u; // 80201AE0
  W32(c->r[28]+0x00000330u,c->r[0]); // 80201AE4
L_80201AE8:;
  c->r[3]=0u+0x00000001u; // 80201AE8
  goto L_80201B3C; // 80201AEC
L_80201AF0:;
  cmps(c,0,(int32_t)c->r[3],-1005); // 80201AF0
  if (!crb(c,2)) { goto L_80201B18; } // 80201AF4
  c->r[3]=c->r[29]|c->r[29]; // 80201AF8
  c->lr=0x80201B00u; f_801FD078(c); // 80201AFC
  cmps(c,0,(int32_t)c->r[3],0); // 80201B00
  if (crb(c,2)) { goto L_80201B10; } // 80201B04
  c->r[0]=0u+0x00000011u; // 80201B08
  W32(c->r[28]+0x00000330u,c->r[0]); // 80201B0C
L_80201B10:;
  c->r[3]=0u+0x00000001u; // 80201B10
  goto L_80201B3C; // 80201B14
L_80201B18:;
  c->r[3]=c->r[29]|c->r[29]; // 80201B18
  c->lr=0x80201B20u; f_801FD078(c); // 80201B1C
  cmps(c,0,(int32_t)c->r[3],0); // 80201B20
  if (crb(c,2)) { goto L_80201B30; } // 80201B24
  c->r[0]=0u+0x0000000Eu; // 80201B28
  W32(c->r[28]+0x00000330u,c->r[0]); // 80201B2C
L_80201B30:;
  c->r[3]=0u+0x00000001u; // 80201B30
  goto L_80201B3C; // 80201B34
L_80201B38:;
  c->r[3]=0u+0x00000000u; // 80201B38
L_80201B3C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80201B3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80201B40
  c->r[30]=R32(c->r[1]+0x00000018u); // 80201B44
  c->r[29]=R32(c->r[1]+0x00000014u); // 80201B48
  c->r[28]=R32(c->r[1]+0x00000010u); // 80201B4C
  c->lr=c->r[0]; // 80201B50
  c->r[1]=c->r[1]+0x00000020u; // 80201B54
  return; // 80201B58
}

// NHTTPi_ThreadSendProc
void f_80201B5C(Ctx* __restrict c) {
  trace_call(0x80201B5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201B5C
  c->r[0]=c->lr; // 80201B60
  W32(c->r[1]+0x00000034u,c->r[0]); // 80201B64
  c->r[11]=c->r[1]+0x00000030u; // 80201B68
  c->lr=0x80201B70u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80201B6C
  c->r[30]=0u+0x802F0000u; // 80201B70
  c->r[27]=c->r[3]|c->r[3]; // 80201B74
  c->r[30]=c->r[30]+0xFFFF9B30u; // 80201B78
  c->lr=0x80201B80u; f_8020453C(c); // 80201B7C
  c->r[28]=c->r[3]|c->r[3]; // 80201B80
  c->lr=0x80201B88u; f_802045B0(c); // 80201B84
  c->r[4]=R32(c->r[3]+0x00000000u); // 80201B88
  c->r[3]=c->r[28]|c->r[28]; // 80201B8C
  c->r[29]=R32(c->r[4]+0x0000000Cu); // 80201B90
  c->lr=0x80201B98u; f_802045C0(c); // 80201B94
  c->r[26]=c->r[3]|c->r[3]; // 80201B98
  c->r[3]=c->r[28]|c->r[28]; // 80201B9C
  c->lr=0x80201BA4u; f_802045A4(c); // 80201BA0
  c->r[31]=c->r[3]|c->r[3]; // 80201BA4
  c->r[3]=c->r[26]|c->r[26]; // 80201BA8
  c->r[4]=c->r[29]|c->r[29]; // 80201BAC
  c->lr=0x80201BB4u; f_8020410C(c); // 80201BB0
  c->r[26]=c->r[3]|c->r[3]; // 80201BB4
  c->r[3]=c->r[28]|c->r[28]; // 80201BB8
  c->lr=0x80201BC0u; f_802045B8(c); // 80201BBC
  c->r[28]=c->r[3]+0x00000360u; // 80201BC0
  c->r[3]=R32(c->r[29]+0x00000024u); // 80201BC4
  c->lr=0x80201BCCu; f_801FF70C(c); // 80201BC8
  c->r[0]=0u+0x0000000Au; // 80201BCC
  cmps(c,0,(int32_t)c->r[26],0); // 80201BD0
  W32(c->r[27]+0x00000330u,c->r[0]); // 80201BD4
  c->r[25]=c->r[3]|c->r[3]; // 80201BD8
  c->r[3]=0u+0x00000000u; // 80201BDC
  if (crb(c,2)) { goto L_80201BEC; } // 80201BE0
  c->r[0]=0u+0x00000002u; // 80201BE4
  W32(c->r[26]+0x00000000u,c->r[0]); // 80201BE8
L_80201BEC:;
  c->r[0]=0u+0x00000000u; // 80201BEC
  W32(c->r[27]+0x00000324u,c->r[0]); // 80201BF0
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 80201BF4
  cmps(c,0,(int32_t)c->r[0],1); // 80201BF8
  if (crb(c,2)) { goto L_80201C30; } // 80201BFC
  if (!crb(c,0)) { goto L_80201C10; } // 80201C00
  cmps(c,0,(int32_t)c->r[0],0); // 80201C04
  if (!crb(c,0)) { goto L_80201C1C; } // 80201C08
  goto L_80201C54; // 80201C0C
L_80201C10:;
  cmps(c,0,(int32_t)c->r[0],3); // 80201C10
  if (!crb(c,0)) { goto L_80201C54; } // 80201C14
  goto L_80201C44; // 80201C18
L_80201C1C:;
  c->r[3]=c->r[27]|c->r[27]; // 80201C1C
  c->r[4]=c->r[13]+0xFFFF94E0u; // 80201C20
  c->r[5]=0u+0x00000004u; // 80201C24
  c->lr=0x80201C2Cu; f_8020068C(c); // 80201C28
  goto L_80201C54; // 80201C2C
L_80201C30:;
  c->r[3]=c->r[27]|c->r[27]; // 80201C30
  c->r[4]=c->r[13]+0xFFFF94E8u; // 80201C34
  c->r[5]=0u+0x00000005u; // 80201C38
  c->lr=0x80201C40u; f_8020068C(c); // 80201C3C
  goto L_80201C54; // 80201C40
L_80201C44:;
  c->r[3]=c->r[27]|c->r[27]; // 80201C44
  c->r[4]=c->r[13]+0xFFFF94F0u; // 80201C48
  c->r[5]=0u+0x00000005u; // 80201C4C
  c->lr=0x80201C54u; f_8020068C(c); // 80201C50
L_80201C54:;
  cmps(c,0,(int32_t)c->r[3],0); // 80201C54
  if (crb(c,2)) { goto L_80201C60; } // 80201C58
  goto L_80201FE0; // 80201C5C
L_80201C60:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80201C60
  cmps(c,0,(int32_t)c->r[0],0); // 80201C64
  if (crb(c,2)) { goto L_80201C94; } // 80201C68
  c->r[0]=R32(c->r[29]+0x00000008u); // 80201C6C
  cmps(c,0,(int32_t)c->r[0],0); // 80201C70
  if (!crb(c,2)) { goto L_80201C94; } // 80201C74
  c->r[4]=R32(c->r[29]+0x00000024u); // 80201C78
  c->r[3]=c->r[27]|c->r[27]; // 80201C7C
  c->r[5]=c->r[25]|c->r[25]; // 80201C80
  c->lr=0x80201C88u; f_8020068C(c); // 80201C84
  cmps(c,0,(int32_t)c->r[3],0); // 80201C88
  if (crb(c,2)) { goto L_80201CDC; } // 80201C8C
  goto L_80201FE0; // 80201C90
L_80201C94:;
  c->r[4]=R32(c->r[29]+0x00000018u); // 80201C94
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[4]); // 80201C98
  if (!crb(c,1)) { goto L_80201CC0; } // 80201C9C
  c->r[0]=R32(c->r[29]+0x00000024u); // 80201CA0
  c->r[5]=c->r[25]-c->r[4]; // 80201CA4
  c->r[3]=c->r[27]|c->r[27]; // 80201CA8
  c->r[4]=c->r[0]+c->r[4]; // 80201CAC
  c->lr=0x80201CB4u; f_8020068C(c); // 80201CB0
  cmps(c,0,(int32_t)c->r[3],0); // 80201CB4
  if (crb(c,2)) { goto L_80201CDC; } // 80201CB8
  goto L_80201FE0; // 80201CBC
L_80201CC0:;
  c->r[3]=c->r[27]|c->r[27]; // 80201CC0
  c->r[4]=c->r[13]+0xFFFF94F8u; // 80201CC4
  c->r[5]=0u+0x00000001u; // 80201CC8
  c->lr=0x80201CD0u; f_8020068C(c); // 80201CCC
  cmps(c,0,(int32_t)c->r[3],0); // 80201CD0
  if (crb(c,2)) { goto L_80201CDC; } // 80201CD4
  goto L_80201FE0; // 80201CD8
L_80201CDC:;
  c->r[3]=c->r[27]|c->r[27]; // 80201CDC
  c->r[4]=c->r[30]+0x0000000Cu; // 80201CE0
  c->r[5]=0u+0x0000000Bu; // 80201CE4
  c->lr=0x80201CECu; f_8020068C(c); // 80201CE8
  cmps(c,0,(int32_t)c->r[3],0); // 80201CEC
  if (crb(c,2)) { goto L_80201CF8; } // 80201CF0
  goto L_80201FE0; // 80201CF4
L_80201CF8:;
  c->r[6]=R32(c->r[29]+0x00000008u); // 80201CF8
  c->r[3]=c->r[27]|c->r[27]; // 80201CFC
  c->r[4]=c->r[13]+0xFFFF94B4u; // 80201D00
  c->r[5]=0u+0x00000006u; // 80201D04
  c->r[0]=0u-c->r[6]; // 80201D08
  c->r[0]=c->r[0]|c->r[6]; // 80201D0C
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 80201D10
  c->r[26]=c->r[6]+0x00000007u; // 80201D14
  c->lr=0x80201D1Cu; f_8020068C(c); // 80201D18
  cmps(c,0,(int32_t)c->r[3],0); // 80201D1C
  if (crb(c,2)) { goto L_80201D28; } // 80201D20
  goto L_80201FE0; // 80201D24
L_80201D28:;
  c->r[4]=R32(c->r[29]+0x00000024u); // 80201D28
  c->r[3]=c->r[27]|c->r[27]; // 80201D2C
  c->r[0]=R32(c->r[29]+0x00000014u); // 80201D30
  c->r[4]=c->r[4]+c->r[26]; // 80201D34
  c->r[5]=c->r[0]-c->r[26]; // 80201D38
  c->lr=0x80201D40u; f_8020068C(c); // 80201D3C
  cmps(c,0,(int32_t)c->r[3],0); // 80201D40
  if (crb(c,2)) { goto L_80201D4C; } // 80201D44
  goto L_80201FE0; // 80201D48
L_80201D4C:;
  c->r[3]=c->r[27]|c->r[27]; // 80201D4C
  c->r[4]=c->r[13]+0xFFFF94BCu; // 80201D50
  c->r[5]=0u+0x00000002u; // 80201D54
  c->lr=0x80201D5Cu; f_8020068C(c); // 80201D58
  cmps(c,0,(int32_t)c->r[3],0); // 80201D5C
  if (crb(c,2)) { goto L_80201D68; } // 80201D60
  goto L_80201FE0; // 80201D64
L_80201D68:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80201D68
  cmps(c,0,(int32_t)c->r[0],0); // 80201D6C
  if (crb(c,2)) { goto L_80201E08; } // 80201D70
  c->r[0]=R32(c->r[29]+0x00000008u); // 80201D74
  cmps(c,0,(int32_t)c->r[0],0); // 80201D78
  if (!crb(c,2)) { goto L_80201E08; } // 80201D7C
  c->lr=0x80201D84u; f_8020453C(c); // 80201D80
  c->lr=0x80201D88u; f_802045B0(c); // 80201D84
  c->r[3]=R32(c->r[3]+0x00000000u); // 80201D88
  c->r[26]=R32(c->r[3]+0x0000000Cu); // 80201D8C
  c->r[0]=R32(c->r[26]+0x00000240u); // 80201D90
  cmps(c,0,(int32_t)c->r[0],0); // 80201D94
  if (!crb(c,2)) { goto L_80201DA4; } // 80201D98
  c->r[3]=0u+0x00000000u; // 80201D9C
  goto L_80201DFC; // 80201DA0
L_80201DA4:;
  c->r[3]=c->r[27]|c->r[27]; // 80201DA4
  c->r[4]=c->r[30]+0x00000040u; // 80201DA8
  c->r[5]=0u+0x0000001Bu; // 80201DAC
  c->lr=0x80201DB4u; f_8020068C(c); // 80201DB0
  cmps(c,0,(int32_t)c->r[3],0); // 80201DB4
  if (crb(c,2)) { goto L_80201DC0; } // 80201DB8
  goto L_80201DFC; // 80201DBC
L_80201DC0:;
  c->r[5]=R32(c->r[26]+0x00000240u); // 80201DC0
  c->r[3]=c->r[27]|c->r[27]; // 80201DC4
  c->r[4]=c->r[26]+0x000001E4u; // 80201DC8
  c->lr=0x80201DD0u; f_8020068C(c); // 80201DCC
  cmps(c,0,(int32_t)c->r[3],0); // 80201DD0
  if (crb(c,2)) { goto L_80201DDC; } // 80201DD4
  goto L_80201DFC; // 80201DD8
L_80201DDC:;
  c->r[3]=c->r[27]|c->r[27]; // 80201DDC
  c->r[4]=c->r[13]+0xFFFF94BCu; // 80201DE0
  c->r[5]=0u+0x00000002u; // 80201DE4
  c->lr=0x80201DECu; f_8020068C(c); // 80201DE8
  c->r[0]=0u-c->r[3]; // 80201DEC
  c->r[0]=c->r[0]|c->r[3]; // 80201DF0
  c->r[0]=sraw(c,c->r[0],31); // 80201DF4
  c->r[3]=c->r[3]&c->r[0]; // 80201DF8
L_80201DFC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80201DFC
  if (crb(c,2)) { goto L_80201E08; } // 80201E00
  goto L_80201FE0; // 80201E04
L_80201E08:;
  c->lr=0x80201E0Cu; f_8020453C(c); // 80201E08
  c->lr=0x80201E10u; f_802045B0(c); // 80201E0C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80201E10
  c->r[26]=R32(c->r[3]+0x0000000Cu); // 80201E14
  c->r[0]=R32(c->r[26]+0x000000A8u); // 80201E18
  cmps(c,0,(int32_t)c->r[0],0); // 80201E1C
  if (!crb(c,2)) { goto L_80201E2C; } // 80201E20
  c->r[3]=0u+0x00000000u; // 80201E24
  goto L_80201E84; // 80201E28
L_80201E2C:;
  c->r[3]=c->r[27]|c->r[27]; // 80201E2C
  c->r[4]=c->r[30]+0x00000070u; // 80201E30
  c->r[5]=0u+0x00000015u; // 80201E34
  c->lr=0x80201E3Cu; f_8020068C(c); // 80201E38
  cmps(c,0,(int32_t)c->r[3],0); // 80201E3C
  if (crb(c,2)) { goto L_80201E48; } // 80201E40
  goto L_80201E84; // 80201E44
L_80201E48:;
  c->r[5]=R32(c->r[26]+0x000000A8u); // 80201E48
  c->r[3]=c->r[27]|c->r[27]; // 80201E4C
  c->r[4]=c->r[26]+0x0000004Cu; // 80201E50
  c->lr=0x80201E58u; f_8020068C(c); // 80201E54
  cmps(c,0,(int32_t)c->r[3],0); // 80201E58
  if (crb(c,2)) { goto L_80201E64; } // 80201E5C
  goto L_80201E84; // 80201E60
L_80201E64:;
  c->r[3]=c->r[27]|c->r[27]; // 80201E64
  c->r[4]=c->r[13]+0xFFFF94BCu; // 80201E68
  c->r[5]=0u+0x00000002u; // 80201E6C
  c->lr=0x80201E74u; f_8020068C(c); // 80201E70
  c->r[0]=0u-c->r[3]; // 80201E74
  c->r[0]=c->r[0]|c->r[3]; // 80201E78
  c->r[0]=sraw(c,c->r[0],31); // 80201E7C
  c->r[3]=c->r[3]&c->r[0]; // 80201E80
L_80201E84:;
  cmps(c,0,(int32_t)c->r[3],0); // 80201E84
  if (crb(c,2)) { goto L_80201E90; } // 80201E88
  goto L_80201FE0; // 80201E8C
L_80201E90:;
  c->r[3]=c->r[27]|c->r[27]; // 80201E90
  c->lr=0x80201E98u; f_80200BD8(c); // 80201E94
  cmps(c,0,(int32_t)c->r[3],0); // 80201E98
  if (crb(c,2)) { goto L_80201EA4; } // 80201E9C
  goto L_80201FE0; // 80201EA0
L_80201EA4:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 80201EA4
  cmps(c,0,(int32_t)c->r[0],1); // 80201EA8
  if (!crb(c,2)) { goto L_80201F58; } // 80201EAC
  c->r[0]=R32(c->r[29]+0x00000010u); // 80201EB0
  cmps(c,0,(int32_t)c->r[0],0); // 80201EB4
  if (crb(c,2)) { goto L_80201EC8; } // 80201EB8
  c->r[3]=c->r[27]|c->r[27]; // 80201EBC
  c->lr=0x80201EC4u; f_80200CD0(c); // 80201EC0
  goto L_80201F3C; // 80201EC4
L_80201EC8:;
  c->r[3]=R32(c->r[29]+0x000000D0u); // 80201EC8
  cmps(c,0,(int32_t)c->r[3],0); // 80201ECC
  if (!crb(c,2)) { goto L_80201F14; } // 80201ED0
  c->r[3]=R32(c->r[29]+0x00000034u); // 80201ED4
  c->r[4]=0u+0x00000000u; // 80201ED8
  c->r[5]=c->r[3]|c->r[3]; // 80201EDC
  goto L_80201F08; // 80201EE0
L_80201EE4:;
  c->r[0]=R32(c->r[5]+0x00000014u); // 80201EE4
  cmps(c,0,(int32_t)c->r[0],0); // 80201EE8
  if (crb(c,2)) { goto L_80201EF8; } // 80201EEC
  c->r[4]=0u+0x00000001u; // 80201EF0
  goto L_80201F20; // 80201EF4
L_80201EF8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80201EF8
  cmpu(c,0,c->r[5],c->r[0]); // 80201EFC
  if (crb(c,2)) { goto L_80201F20; } // 80201F00
  c->r[5]=R32(c->r[5]+0x00000004u); // 80201F04
L_80201F08:;
  cmps(c,0,(int32_t)c->r[5],0); // 80201F08
  if (!crb(c,2)) { IRQCHK(c); goto L_80201EE4; } // 80201F0C
  goto L_80201F20; // 80201F10
L_80201F14:;
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80201F14
  c->r[0]=cntlz(c->r[0]); // 80201F18
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 80201F1C
L_80201F20:;
  cmps(c,0,(int32_t)c->r[4],0); // 80201F20
  if (crb(c,2)) { goto L_80201F34; } // 80201F24
  c->r[3]=c->r[27]|c->r[27]; // 80201F28
  c->lr=0x80201F30u; f_80200E58(c); // 80201F2C
  goto L_80201F3C; // 80201F30
L_80201F34:;
  c->r[3]=c->r[27]|c->r[27]; // 80201F34
  c->lr=0x80201F3Cu; f_802011FC(c); // 80201F38
L_80201F3C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80201F3C
  if (crb(c,2)) { goto L_80201F74; } // 80201F40
  cmps(c,0,(int32_t)c->r[3],3); // 80201F44
  if (!crb(c,2)) { goto L_80201FE0; } // 80201F48
  c->r[0]=0u+0x00000003u; // 80201F4C
  W32(c->r[27]+0x00000330u,c->r[0]); // 80201F50
  goto L_80201FE0; // 80201F54
L_80201F58:;
  c->r[3]=c->r[27]|c->r[27]; // 80201F58
  c->r[4]=c->r[13]+0xFFFF94BCu; // 80201F5C
  c->r[5]=0u+0x00000002u; // 80201F60
  c->lr=0x80201F68u; f_8020068C(c); // 80201F64
  cmps(c,0,(int32_t)c->r[3],0); // 80201F68
  if (crb(c,2)) { goto L_80201F74; } // 80201F6C
  goto L_80201FE0; // 80201F70
L_80201F74:;
  c->r[6]=R32(c->r[27]+0x00000324u); // 80201F74
  c->r[26]=0u+0x00000000u; // 80201F78
  cmps(c,0,(int32_t)c->r[6],0); // 80201F7C
  if (!crb(c,1)) { goto L_80201FC8; } // 80201F80
  c->r[4]=R32(c->r[31]+0x000007D0u); // 80201F84
  c->r[3]=c->r[29]|c->r[29]; // 80201F88
  c->r[5]=c->r[28]|c->r[28]; // 80201F8C
  c->r[7]=0u+0x00000000u; // 80201F90
  c->lr=0x80201F98u; f_801FF594(c); // 80201F94
  c->r[0]=0u+0x00000000u; // 80201F98
  c->r[29]=c->r[3]|c->r[3]; // 80201F9C
  W32(c->r[27]+0x00000324u,c->r[0]); // 80201FA0
  c->r[3]=c->r[28]|c->r[28]; // 80201FA4
  c->r[4]=0u+0x00000100u; // 80201FA8
  c->lr=0x80201FB0u; f_801FF714(c); // 80201FAC
  cmps(c,0,(int32_t)c->r[29],0); // 80201FB0
  if (!crb(c,0)) { goto L_80201FBC; } // 80201FB4
  c->r[26]=0u+0x00000001u; // 80201FB8
L_80201FBC:;
  cmps(c,0,(int32_t)c->r[29],0); // 80201FBC
  if (!crb(c,2)) { goto L_80201FC8; } // 80201FC0
  c->r[26]=0u+0x00000002u; // 80201FC4
L_80201FC8:;
  c->r[0]=0u+0x00000000u; // 80201FC8
  c->r[3]=c->r[28]|c->r[28]; // 80201FCC
  W32(c->r[27]+0x00000324u,c->r[0]); // 80201FD0
  c->r[4]=0u+0x00000100u; // 80201FD4
  c->lr=0x80201FDCu; f_801FF714(c); // 80201FD8
  c->r[3]=c->r[26]|c->r[26]; // 80201FDC
L_80201FE0:;
  c->r[11]=c->r[1]+0x00000030u; // 80201FE0
  c->lr=0x80201FE8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201FE4
  c->r[0]=R32(c->r[1]+0x00000034u); // 80201FE8
  c->lr=c->r[0]; // 80201FEC
  c->r[1]=c->r[1]+0x00000030u; // 80201FF0
  return; // 80201FF4
}

// NHTTPi_ThreadRecvHeaderProc
void f_80201FF8(Ctx* __restrict c) {
  trace_call(0x80201FF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201FF8
  c->r[0]=c->lr; // 80201FFC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80202000
  c->r[11]=c->r[1]+0x00000040u; // 80202004
  c->lr=0x8020200Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80202008
  c->r[25]=c->r[3]|c->r[3]; // 8020200C
  c->lr=0x80202014u; f_8020453C(c); // 80202010
  c->r[23]=c->r[3]|c->r[3]; // 80202014
  c->lr=0x8020201Cu; f_802045B0(c); // 80202018
  c->r[4]=R32(c->r[3]+0x00000000u); // 8020201C
  c->r[3]=c->r[23]|c->r[23]; // 80202020
  c->r[29]=R32(c->r[4]+0x0000000Cu); // 80202024
  c->r[28]=R32(c->r[29]+0x0000002Cu); // 80202028
  c->lr=0x80202030u; f_802045C0(c); // 8020202C
  c->r[27]=c->r[3]|c->r[3]; // 80202030
  c->r[4]=c->r[29]|c->r[29]; // 80202034
  c->lr=0x8020203Cu; f_8020410C(c); // 80202038
  c->r[24]=c->r[3]|c->r[3]; // 8020203C
  c->r[3]=c->r[23]|c->r[23]; // 80202040
  c->lr=0x80202048u; f_802045A4(c); // 80202044
  c->r[0]=0u+0x00000000u; // 80202048
  cmps(c,0,(int32_t)c->r[24],0); // 8020204C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80202050
  c->r[30]=c->r[3]|c->r[3]; // 80202054
  if (crb(c,2)) { goto L_80202064; } // 80202058
  c->r[0]=0u+0x00000003u; // 8020205C
  W32(c->r[24]+0x00000000u,c->r[0]); // 80202060
L_80202064:;
  c->r[31]=0u+0x00000000u; // 80202064
  c->r[3]=c->r[25]+0x00000304u; // 80202068
  W32(c->r[28]+0x00000000u,c->r[31]); // 8020206C
  c->r[4]=0u+0x0000000Eu; // 80202070
  c->lr=0x80202078u; f_801FF714(c); // 80202074
  c->r[26]=R32(c->r[28]+0x00000034u); // 80202078
  c->r[24]=c->r[1]+0x00000008u; // 8020207C
  W32(c->r[25]+0x00000328u,c->r[31]); // 80202080
L_80202084:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80202084
  cmps(c,0,(int32_t)c->r[0],0); // 80202088
  if (crb(c,2)) { goto L_80202098; } // 8020208C
  c->r[3]=0u+0x00000000u; // 80202090
  goto L_802021CC; // 80202094
L_80202098:;
  c->r[0]=R32(c->r[25]+0x00000328u); // 80202098
  cmps(c,0,(int32_t)c->r[0],1024); // 8020209C
  if (!crb(c,0)) { goto L_802020E0; } // 802020A0
  c->r[6]=c->r[28]+c->r[0]; // 802020A4
  c->r[5]=R32(c->r[30]+0x000007D0u); // 802020A8
  c->r[3]=c->r[27]|c->r[27]; // 802020AC
  c->r[4]=c->r[29]|c->r[29]; // 802020B0
  c->r[6]=c->r[6]+0x00000038u; // 802020B4
  c->r[7]=0u+0x00000001u; // 802020B8
  c->r[8]=0u+0x00000000u; // 802020BC
  c->lr=0x802020C4u; f_801FF320(c); // 802020C0
  c->r[0]=R32(c->r[25]+0x00000328u); // 802020C4
  c->r[4]=c->r[3]|c->r[3]; // 802020C8
  c->r[3]=c->r[28]+c->r[0]; // 802020CC
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 802020D0
  c->r[3]=R8(c->r[3]+0x00000038u); // 802020D4
  W8(c->r[24]+c->r[0],c->r[3]); // 802020D8
  goto L_80202170; // 802020DC
L_802020E0:;
  c->r[23]=rotl(c->r[0],0)&0x000001FFu; cr0(c,c->r[23]); // 802020E0
  if (!crb(c,2)) { goto L_80202138; } // 802020E4
  cmps(c,0,(int32_t)c->r[26],0); // 802020E8
  if (crb(c,2)) { goto L_80202108; } // 802020EC
  c->r[3]=0u+0x00000204u; // 802020F0
  c->r[4]=0u+0x00000004u; // 802020F4
  c->lr=0x802020FCu; f_801FCFC8(c); // 802020F8
  W32(c->r[26]+0x00000000u,c->r[3]); // 802020FC
  c->r[26]=c->r[3]|c->r[3]; // 80202100
  goto L_8020211C; // 80202104
L_80202108:;
  c->r[3]=0u+0x00000204u; // 80202108
  c->r[4]=0u+0x00000004u; // 8020210C
  c->lr=0x80202114u; f_801FCFC8(c); // 80202110
  c->r[26]=c->r[3]|c->r[3]; // 80202114
  W32(c->r[28]+0x00000034u,c->r[3]); // 80202118
L_8020211C:;
  cmps(c,0,(int32_t)c->r[26],0); // 8020211C
  if (!crb(c,2)) { goto L_80202134; } // 80202120
  c->r[0]=0u+0x00000001u; // 80202124
  c->r[3]=0u+0x00000000u; // 80202128
  W32(c->r[25]+0x00000330u,c->r[0]); // 8020212C
  goto L_802021CC; // 80202130
L_80202134:;
  W32(c->r[26]+0x00000000u,c->r[31]); // 80202134
L_80202138:;
  c->r[3]=c->r[26]+c->r[23]; // 80202138
  c->r[5]=R32(c->r[30]+0x000007D0u); // 8020213C
  c->r[23]=c->r[3]+0x00000004u; // 80202140
  c->r[4]=c->r[29]|c->r[29]; // 80202144
  c->r[3]=c->r[27]|c->r[27]; // 80202148
  c->r[7]=0u+0x00000001u; // 8020214C
  c->r[6]=c->r[23]|c->r[23]; // 80202150
  c->r[8]=0u+0x00000000u; // 80202154
  c->lr=0x8020215Cu; f_801FF320(c); // 80202158
  c->r[0]=R32(c->r[25]+0x00000328u); // 8020215C
  c->r[4]=c->r[3]|c->r[3]; // 80202160
  c->r[3]=R8(c->r[23]+0x00000000u); // 80202164
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 80202168
  W8(c->r[24]+c->r[0],c->r[3]); // 8020216C
L_80202170:;
  cmps(c,0,(int32_t)c->r[4],0); // 80202170
  if (crb(c,1)) { goto L_80202188; } // 80202174
  c->r[0]=0u+0x0000000Au; // 80202178
  c->r[3]=0u+0x00000000u; // 8020217C
  W32(c->r[25]+0x00000330u,c->r[0]); // 80202180
  goto L_802021CC; // 80202184
L_80202188:;
  c->r[0]=R32(c->r[25]+0x00000328u); // 80202188
  c->r[3]=c->r[1]+0x00000008u; // 8020218C
  c->r[4]=c->r[0]+c->r[4]; // 80202190
  W32(c->r[25]+0x00000328u,c->r[4]); // 80202194
  c->lr=0x8020219Cu; f_80200184(c); // 80202198
  cmps(c,0,(int32_t)c->r[3],0); // 8020219C
  if (crb(c,2)) { IRQCHK(c); goto L_80202084; } // 802021A0
  c->r[0]=R32(c->r[25]+0x00000328u); // 802021A4
  W32(c->r[28]+0x00000000u,c->r[0]); // 802021A8
  c->r[0]=R32(c->r[28]+0x00000000u); // 802021AC
  cmps(c,0,(int32_t)c->r[0],0); // 802021B0
  if (!crb(c,2)) { goto L_802021C8; } // 802021B4
  c->r[0]=0u+0x00000007u; // 802021B8
  c->r[3]=0u+0x00000000u; // 802021BC
  W32(c->r[25]+0x00000330u,c->r[0]); // 802021C0
  goto L_802021CC; // 802021C4
L_802021C8:;
  c->r[3]=0u+0x00000001u; // 802021C8
L_802021CC:;
  c->r[11]=c->r[1]+0x00000040u; // 802021CC
  c->lr=0x802021D4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802021D0
  c->r[0]=R32(c->r[1]+0x00000044u); // 802021D4
  c->lr=c->r[0]; // 802021D8
  c->r[1]=c->r[1]+0x00000040u; // 802021DC
  return; // 802021E0
}

// NHTTPi_ThreadParseHeaderProc
void f_802021E4(Ctx* __restrict c) {
  trace_call(0x802021E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802021E4
  c->r[0]=c->lr; // 802021E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802021EC
  c->r[11]=c->r[1]+0x00000030u; // 802021F0
  c->lr=0x802021F8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802021F4
  c->r[27]=0u+0x802F0000u; // 802021F8
  c->r[30]=c->r[3]|c->r[3]; // 802021FC
  c->r[27]=c->r[27]+0xFFFF9B30u; // 80202200
  c->lr=0x80202208u; f_8020453C(c); // 80202204
  c->r[28]=c->r[3]|c->r[3]; // 80202208
  c->lr=0x80202210u; f_802045B0(c); // 8020220C
  c->r[4]=R32(c->r[3]+0x00000000u); // 80202210
  c->r[3]=c->r[28]|c->r[28]; // 80202214
  c->r[28]=R32(c->r[4]+0x0000000Cu); // 80202218
  c->r[31]=R32(c->r[28]+0x0000002Cu); // 8020221C
  c->lr=0x80202224u; f_802045B8(c); // 80202220
  c->r[29]=c->r[3]+0x00000360u; // 80202224
  c->r[3]=c->r[31]|c->r[31]; // 80202228
  c->r[4]=c->r[30]+0x00000304u; // 8020222C
  c->r[5]=0u+0x00000000u; // 80202230
  c->r[6]=0u+0x0000000Eu; // 80202234
  c->lr=0x8020223Cu; f_801FDF84(c); // 80202238
  cmps(c,0,(int32_t)c->r[3],0); // 8020223C
  if (!crb(c,2)) { goto L_80202254; } // 80202240
  c->r[0]=0u+0x00000007u; // 80202244
  c->r[3]=0u+0x00000000u; // 80202248
  W32(c->r[30]+0x00000330u,c->r[0]); // 8020224C
  goto L_802024FC; // 80202250
L_80202254:;
  c->r[3]=c->r[30]+0x00000304u; // 80202254
  c->r[4]=c->r[13]+0xFFFF94C0u; // 80202258
  c->r[5]=0u+0x00000005u; // 8020225C
  c->lr=0x80202264u; f_801FF720(c); // 80202260
  cmps(c,0,(int32_t)c->r[3],0); // 80202264
  if (crb(c,2)) { goto L_8020227C; } // 80202268
  c->r[0]=0u+0x00000007u; // 8020226C
  c->r[3]=0u+0x00000000u; // 80202270
  W32(c->r[30]+0x00000330u,c->r[0]); // 80202274
  goto L_802024FC; // 80202278
L_8020227C:;
  c->r[0]=R8(c->r[30]+0x0000030Cu); // 8020227C
  cmps(c,0,(int32_t)c->r[0],32); // 80202280
  if (crb(c,2)) { goto L_80202298; } // 80202284
  c->r[0]=0u+0x00000007u; // 80202288
  c->r[3]=0u+0x00000000u; // 8020228C
  W32(c->r[30]+0x00000330u,c->r[0]); // 80202290
  goto L_802024FC; // 80202294
L_80202298:;
  c->r[3]=c->r[30]+0x0000030Du; // 80202298
  c->r[4]=0u+0x00000003u; // 8020229C
  c->lr=0x802022A4u; f_801FFA94(c); // 802022A0
  cmps(c,0,(int32_t)c->r[3],0); // 802022A4
  W32(c->r[31]+0x00000018u,c->r[3]); // 802022A8
  if (!crb(c,0)) { goto L_802022C0; } // 802022AC
  c->r[0]=0u+0x00000007u; // 802022B0
  c->r[3]=0u+0x00000000u; // 802022B4
  W32(c->r[30]+0x00000330u,c->r[0]); // 802022B8
  goto L_802024FC; // 802022BC
L_802022C0:;
  c->r[5]=R32(c->r[31]+0x00000000u); // 802022C0
  c->r[3]=c->r[31]|c->r[31]; // 802022C4
  c->r[6]=c->r[1]+0x0000000Cu; // 802022C8
  c->r[4]=0u+0x0000000Cu; // 802022CC
  c->r[7]=0u+0x00000000u; // 802022D0
  c->lr=0x802022D8u; f_801FDAA4(c); // 802022D4
  cmps(c,0,(int32_t)c->r[3],0); // 802022D8
  if (!crb(c,0)) { goto L_802022F0; } // 802022DC
  c->r[0]=0u+0x00000007u; // 802022E0
  c->r[3]=0u+0x00000000u; // 802022E4
  W32(c->r[30]+0x00000330u,c->r[0]); // 802022E8
  goto L_802024FC; // 802022EC
L_802022F0:;
  c->r[3]=c->r[31]|c->r[31]; // 802022F0
  c->r[4]=c->r[27]+0x00000088u; // 802022F4
  c->r[5]=c->r[1]+0x00000008u; // 802022F8
  c->lr=0x80202300u; f_801FEBDC(c); // 802022FC
  cmps(c,1,(int32_t)c->r[3],0); // 80202300
  W32(c->r[30]+0x0000032Cu,c->r[3]); // 80202304
  c->r[6]=c->r[3]|c->r[3]; // 80202308
  if (!crb(c,6)) { goto L_80202320; } // 8020230C
  c->r[0]=0u+0x00000000u; // 80202310
  c->r[3]=0u+0x00000000u; // 80202314
  W32(c->r[30]+0x00000330u,c->r[0]); // 80202318
  goto L_802024FC; // 8020231C
L_80202320:;
  cmps(c,0,(int32_t)c->r[3],256); // 80202320
  if (!crb(c,1)) { goto L_80202338; } // 80202324
  c->r[0]=0u+0x00000007u; // 80202328
  c->r[3]=0u+0x00000000u; // 8020232C
  W32(c->r[30]+0x00000330u,c->r[0]); // 80202330
  goto L_802024FC; // 80202334
L_80202338:;
  if (!crb(c,5)) { goto L_80202394; } // 80202338
  c->r[5]=R32(c->r[1]+0x00000008u); // 8020233C
  c->r[3]=c->r[31]|c->r[31]; // 80202340
  c->r[4]=c->r[29]|c->r[29]; // 80202344
  c->lr=0x8020234Cu; f_801FDF84(c); // 80202348
  cmps(c,0,(int32_t)c->r[3],0); // 8020234C
  if (!crb(c,2)) { goto L_80202364; } // 80202350
  c->r[0]=0u+0x00000007u; // 80202354
  c->r[3]=0u+0x00000000u; // 80202358
  W32(c->r[30]+0x00000330u,c->r[0]); // 8020235C
  goto L_802024FC; // 80202360
L_80202364:;
  c->r[4]=R32(c->r[30]+0x0000032Cu); // 80202364
  c->r[3]=c->r[29]|c->r[29]; // 80202368
  c->lr=0x80202370u; f_801FFA94(c); // 8020236C
  cmps(c,0,(int32_t)c->r[3],0); // 80202370
  W32(c->r[30]+0x0000032Cu,c->r[3]); // 80202374
  if (!crb(c,0)) { goto L_8020238C; } // 80202378
  c->r[0]=0u+0x00000007u; // 8020237C
  c->r[3]=0u+0x00000000u; // 80202380
  W32(c->r[30]+0x00000330u,c->r[0]); // 80202384
  goto L_802024FC; // 80202388
L_8020238C:;
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 8020238C
  goto L_8020239C; // 80202390
L_80202394:;
  c->r[0]=0u+0xFFFFFFFFu; // 80202394
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80202398
L_8020239C:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 8020239C
  cmps(c,0,(int32_t)c->r[0],0); // 802023A0
  if (crb(c,2)) { goto L_802023B4; } // 802023A4
  c->r[0]=0u+0x00000000u; // 802023A8
  W32(c->r[30]+0x00000338u,c->r[0]); // 802023AC
  goto L_80202474; // 802023B0
L_802023B4:;
  c->r[3]=c->r[31]|c->r[31]; // 802023B4
  c->r[4]=c->r[27]+0x00000098u; // 802023B8
  c->r[5]=c->r[1]+0x00000008u; // 802023BC
  c->lr=0x802023C4u; f_801FEBDC(c); // 802023C0
  cmps(c,0,(int32_t)c->r[3],0); // 802023C4
  c->r[28]=c->r[3]|c->r[3]; // 802023C8
  if (!crb(c,2)) { goto L_802023E8; } // 802023CC
  c->r[3]=0u+0x00000007u; // 802023D0
  c->r[0]=0u+0x00000000u; // 802023D4
  W32(c->r[30]+0x00000330u,c->r[3]); // 802023D8
  c->r[3]=0u+0x00000000u; // 802023DC
  W32(c->r[30]+0x00000338u,c->r[0]); // 802023E0
  goto L_802024FC; // 802023E4
L_802023E8:;
  c->r[3]=c->r[30]+0x00000304u; // 802023E8
  c->r[4]=c->r[27]+0x000000A4u; // 802023EC
  c->r[5]=0u+0x00000008u; // 802023F0
  c->lr=0x802023F8u; f_801FF720(c); // 802023F4
  cmps(c,0,(int32_t)c->r[3],0); // 802023F8
  if (!crb(c,2)) { goto L_8020240C; } // 802023FC
  c->r[0]=0u+0x00000001u; // 80202400
  W32(c->r[30]+0x00000338u,c->r[0]); // 80202404
  goto L_80202414; // 80202408
L_8020240C:;
  c->r[0]=0u+0x00000000u; // 8020240C
  W32(c->r[30]+0x00000338u,c->r[0]); // 80202410
L_80202414:;
  cmps(c,0,(int32_t)c->r[28],256); // 80202414
  if (crb(c,1)) { goto L_80202474; } // 80202418
  cmps(c,0,(int32_t)c->r[28],0); // 8020241C
  if (!crb(c,1)) { goto L_80202474; } // 80202420
  c->r[4]=R32(c->r[1]+0x00000008u); // 80202424
  c->r[3]=c->r[31]|c->r[31]; // 80202428
  c->r[6]=c->r[27]+0x000000B0u; // 8020242C
  c->r[7]=0u+0x00000000u; // 80202430
  c->r[5]=c->r[4]+c->r[28]; // 80202434
  c->lr=0x8020243Cu; f_801FDD94(c); // 80202438
  cmps(c,0,(int32_t)c->r[3],0); // 8020243C
  if (!crb(c,2)) { goto L_8020244C; } // 80202440
  c->r[0]=0u+0x00000001u; // 80202444
  W32(c->r[30]+0x00000338u,c->r[0]); // 80202448
L_8020244C:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 8020244C
  c->r[3]=c->r[31]|c->r[31]; // 80202450
  c->r[6]=c->r[13]+0xFFFF94FCu; // 80202454
  c->r[29]=0u+0x00000000u; // 80202458
  c->r[5]=c->r[4]+c->r[28]; // 8020245C
  c->r[7]=0u+0x00000000u; // 80202460
  c->lr=0x80202468u; f_801FDD94(c); // 80202464
  cmps(c,0,(int32_t)c->r[3],0); // 80202468
  if (!crb(c,2)) { goto L_80202474; } // 8020246C
  W32(c->r[30]+0x00000338u,c->r[29]); // 80202470
L_80202474:;
  c->r[3]=c->r[31]|c->r[31]; // 80202474
  c->r[4]=c->r[27]+0x000000BCu; // 80202478
  c->r[5]=c->r[1]+0x00000008u; // 8020247C
  c->lr=0x80202484u; f_801FEBDC(c); // 80202480
  cmps(c,1,(int32_t)c->r[3],0); // 80202484
  W32(c->r[30]+0x0000033Cu,c->r[3]); // 80202488
  c->r[0]=c->r[3]|c->r[3]; // 8020248C
  if (!crb(c,6)) { goto L_802024A4; } // 80202490
  c->r[0]=0u+0x00000007u; // 80202494
  c->r[3]=0u+0x00000000u; // 80202498
  W32(c->r[30]+0x00000330u,c->r[0]); // 8020249C
  goto L_802024FC; // 802024A0
L_802024A4:;
  cmps(c,0,(int32_t)c->r[3],256); // 802024A4
  if (!crb(c,1)) { goto L_802024B8; } // 802024A8
  c->r[0]=0u+0x00000000u; // 802024AC
  W32(c->r[30]+0x0000033Cu,c->r[0]); // 802024B0
  goto L_802024E8; // 802024B4
L_802024B8:;
  if (!crb(c,5)) { goto L_802024E0; } // 802024B8
  c->r[4]=R32(c->r[1]+0x00000008u); // 802024BC
  c->r[3]=c->r[31]|c->r[31]; // 802024C0
  c->r[6]=c->r[13]+0xFFFF9508u; // 802024C4
  c->r[7]=0u+0x0000003Bu; // 802024C8
  c->r[5]=c->r[4]+c->r[0]; // 802024CC
  c->lr=0x802024D4u; f_801FDD94(c); // 802024D0
  c->r[0]=cntlz(c->r[3]); // 802024D4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802024D8
  goto L_802024E4; // 802024DC
L_802024E0:;
  c->r[0]=0u+0x00000000u; // 802024E0
L_802024E4:;
  W32(c->r[30]+0x0000033Cu,c->r[0]); // 802024E4
L_802024E8:;
  c->r[3]=0u+0x00000000u; // 802024E8
  c->r[0]=0u+0x00000001u; // 802024EC
  W32(c->r[30]+0x00000330u,c->r[3]); // 802024F0
  c->r[3]=0u+0x00000001u; // 802024F4
  W32(c->r[31]+0x00000014u,c->r[0]); // 802024F8
L_802024FC:;
  c->r[11]=c->r[1]+0x00000030u; // 802024FC
  c->lr=0x80202504u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80202500
  c->r[0]=R32(c->r[1]+0x00000034u); // 80202504
  c->lr=c->r[0]; // 80202508
  c->r[1]=c->r[1]+0x00000030u; // 8020250C
  return; // 80202510
}

// NHTTPi_ThreadRecvBodyProc
void f_80202514(Ctx* __restrict c) {
  trace_call(0x80202514u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202514
  c->r[0]=c->lr; // 80202518
  W32(c->r[1]+0x00000064u,c->r[0]); // 8020251C
  c->r[11]=c->r[1]+0x00000060u; // 80202520
  c->lr=0x80202528u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80202524
  c->r[16]=c->r[3]|c->r[3]; // 80202528
  c->lr=0x80202530u; f_8020453C(c); // 8020252C
  c->r[17]=c->r[3]|c->r[3]; // 80202530
  c->lr=0x80202538u; f_802045B0(c); // 80202534
  c->r[4]=R32(c->r[3]+0x00000000u); // 80202538
  c->r[3]=c->r[17]|c->r[17]; // 8020253C
  c->r[22]=R32(c->r[4]+0x0000000Cu); // 80202540
  c->r[21]=R32(c->r[22]+0x0000002Cu); // 80202544
  c->lr=0x8020254Cu; f_802045A4(c); // 80202548
  c->r[27]=c->r[3]|c->r[3]; // 8020254C
  c->r[3]=c->r[17]|c->r[17]; // 80202550
  c->lr=0x80202558u; f_802045C0(c); // 80202554
  c->r[20]=c->r[3]|c->r[3]; // 80202558
  c->r[4]=c->r[22]|c->r[22]; // 8020255C
  c->lr=0x80202564u; f_8020410C(c); // 80202560
  c->r[19]=c->r[3]|c->r[3]; // 80202564
  c->r[3]=c->r[17]|c->r[17]; // 80202568
  c->lr=0x80202570u; f_802045B8(c); // 8020256C
  c->r[0]=R32(c->r[22]+0x0000001Cu); // 80202570
  c->r[18]=c->r[3]+0x00000360u; // 80202574
  cmps(c,0,(int32_t)c->r[0],2); // 80202578
  if (crb(c,2)) { goto L_802025A4; } // 8020257C
  c->r[0]=R32(c->r[21]+0x00000018u); // 80202580
  cmps(c,0,(int32_t)c->r[0],204); // 80202584
  if (crb(c,2)) { goto L_802025A4; } // 80202588
  cmps(c,0,(int32_t)c->r[0],304); // 8020258C
  if (crb(c,2)) { goto L_802025A4; } // 80202590
  cmps(c,0,(int32_t)c->r[0],100); // 80202594
  if (crb(c,0)) { goto L_802025AC; } // 80202598
  cmps(c,0,(int32_t)c->r[0],200); // 8020259C
  if (!crb(c,0)) { goto L_802025AC; } // 802025A0
L_802025A4:;
  c->r[3]=0u+0x00000001u; // 802025A4
  goto L_80202AEC; // 802025A8
L_802025AC:;
  c->r[3]=c->r[19]|c->r[19]; // 802025AC
  c->r[4]=0u+0x00000000u; // 802025B0
  c->lr=0x802025B8u; f_802045C8(c); // 802025B4
  cmps(c,0,(int32_t)c->r[19],0); // 802025B8
  if (crb(c,2)) { goto L_802025C8; } // 802025BC
  c->r[0]=0u+0x00000004u; // 802025C0
  W32(c->r[19]+0x00000000u,c->r[0]); // 802025C4
L_802025C8:;
  c->r[4]=R32(c->r[16]+0x0000032Cu); // 802025C8
  cmps(c,0,(int32_t)c->r[4],0); // 802025CC
  if (crb(c,0)) { goto L_802026F8; } // 802025D0
  c->r[3]=c->r[19]|c->r[19]; // 802025D4
  c->lr=0x802025DCu; f_802045C8(c); // 802025D8
  c->r[18]=0u+0x00000006u; // 802025DC
  c->r[17]=0u+0x00000200u; // 802025E0
  goto L_802026A4; // 802025E4
L_802025E8:;
  c->r[0]=R32(c->r[16]+0x00000330u); // 802025E8
  cmps(c,0,(int32_t)c->r[0],6); // 802025EC
  if (crb(c,2)) { goto L_80202618; } // 802025F0
  c->r[3]=c->r[20]|c->r[20]; // 802025F4
  c->r[4]=c->r[21]|c->r[21]; // 802025F8
  c->lr=0x80202600u; f_802005C0(c); // 802025FC
  cmps(c,0,(int32_t)c->r[3],0); // 80202600
  if (!crb(c,2)) { goto L_80202618; } // 80202604
  W32(c->r[16]+0x00000330u,c->r[18]); // 80202608
  c->r[0]=c->r[16]+0x00000104u; // 8020260C
  W32(c->r[21]+0x00000028u,c->r[0]); // 80202610
  W32(c->r[21]+0x0000001Cu,c->r[17]); // 80202614
L_80202618:;
  c->r[0]=R32(c->r[16]+0x00000330u); // 80202618
  cmps(c,0,(int32_t)c->r[0],6); // 8020261C
  if (!crb(c,2)) { goto L_80202644; } // 80202620
  c->r[5]=R32(c->r[27]+0x000007D0u); // 80202624
  c->r[3]=c->r[20]|c->r[20]; // 80202628
  c->r[7]=R32(c->r[16]+0x0000032Cu); // 8020262C
  c->r[4]=c->r[22]|c->r[22]; // 80202630
  c->r[6]=0u+0x00000000u; // 80202634
  c->r[8]=0u+0x00000000u; // 80202638
  c->lr=0x80202640u; f_801FE104(c); // 8020263C
  goto L_80202660; // 80202640
L_80202644:;
  c->r[5]=R32(c->r[27]+0x000007D0u); // 80202644
  c->r[3]=c->r[20]|c->r[20]; // 80202648
  c->r[6]=R32(c->r[21]+0x00000004u); // 8020264C
  c->r[4]=c->r[22]|c->r[22]; // 80202650
  c->r[7]=R32(c->r[16]+0x0000032Cu); // 80202654
  c->r[8]=0u+0x00000000u; // 80202658
  c->lr=0x80202660u; f_801FE104(c); // 8020265C
L_80202660:;
  cmps(c,0,(int32_t)c->r[3],0); // 80202660
  if (!crb(c,0)) { goto L_80202670; } // 80202664
  c->r[3]=0u+0x00000000u; // 80202668
  goto L_80202AEC; // 8020266C
L_80202670:;
  if (crb(c,2)) { goto L_802026B0; } // 80202670
  c->r[0]=R32(c->r[16]+0x00000330u); // 80202674
  cmps(c,0,(int32_t)c->r[0],6); // 80202678
  if (crb(c,2)) { goto L_80202698; } // 8020267C
  c->r[0]=R32(c->r[21]+0x00000004u); // 80202680
  c->r[0]=c->r[0]+c->r[3]; // 80202684
  W32(c->r[21]+0x00000004u,c->r[0]); // 80202688
  c->r[0]=R32(c->r[21]+0x00000008u); // 8020268C
  c->r[0]=c->r[0]+c->r[3]; // 80202690
  W32(c->r[21]+0x00000008u,c->r[0]); // 80202694
L_80202698:;
  c->r[0]=R32(c->r[16]+0x0000032Cu); // 80202698
  c->r[0]=c->r[0]-c->r[3]; // 8020269C
  W32(c->r[16]+0x0000032Cu,c->r[0]); // 802026A0
L_802026A4:;
  c->r[0]=R32(c->r[16]+0x0000032Cu); // 802026A4
  cmps(c,0,(int32_t)c->r[0],0); // 802026A8
  if (crb(c,1)) { IRQCHK(c); goto L_802025E8; } // 802026AC
L_802026B0:;
  c->r[0]=R32(c->r[16]+0x00000330u); // 802026B0
  cmps(c,0,(int32_t)c->r[0],6); // 802026B4
  if (crb(c,2)) { goto L_80202ABC; } // 802026B8
  c->r[0]=R32(c->r[16]+0x0000032Cu); // 802026BC
  cmps(c,0,(int32_t)c->r[0],0); // 802026C0
  if (crb(c,2)) { goto L_802026EC; } // 802026C4
  c->r[4]=R32(c->r[21]+0x00000004u); // 802026C8
  c->r[3]=c->r[21]|c->r[21]; // 802026CC
  c->lr=0x802026D4u; f_801FE0C8(c); // 802026D0
  cmps(c,0,(int32_t)c->r[3],0); // 802026D4
  c->r[0]=0u+0x0000000Au; // 802026D8
  if (crb(c,2)) { goto L_802026E4; } // 802026DC
  c->r[0]=0u+0x00000006u; // 802026E0
L_802026E4:;
  W32(c->r[16]+0x00000330u,c->r[0]); // 802026E4
  goto L_80202ABC; // 802026E8
L_802026EC:;
  c->r[0]=0u+0x00000000u; // 802026EC
  W32(c->r[16]+0x00000330u,c->r[0]); // 802026F0
  goto L_80202ABC; // 802026F4
L_802026F8:;
  c->r[0]=R32(c->r[16]+0x0000033Cu); // 802026F8
  c->r[3]=0u+0x0000000Au; // 802026FC
  W32(c->r[16]+0x00000330u,c->r[3]); // 80202700
  cmps(c,0,(int32_t)c->r[0],0); // 80202704
  if (crb(c,2)) { goto L_80202A08; } // 80202708
  c->r[29]=c->r[1]+0x0000000Cu; // 8020270C
  c->r[23]=c->r[1]+0x00000010u; // 80202710
  c->r[24]=0u+0xFFFFFFFFu; // 80202714
  c->r[30]=0u+0x00000006u; // 80202718
  c->r[31]=0u+0x00000200u; // 8020271C
  c->r[28]=0u+0x00000000u; // 80202720
L_80202724:;
  W8(c->r[1]+0x00000010u,c->r[28]); // 80202724
  W8(c->r[1]+0x00000011u,c->r[28]); // 80202728
  W32(c->r[16]+0x00000328u,c->r[28]); // 8020272C
  goto L_80202870; // 80202730
L_80202734:;
  c->r[5]=R32(c->r[27]+0x000007D0u); // 80202734
  c->r[3]=c->r[20]|c->r[20]; // 80202738
  c->r[4]=c->r[22]|c->r[22]; // 8020273C
  c->r[6]=c->r[18]+c->r[0]; // 80202740
  c->r[7]=0u+0x00000001u; // 80202744
  c->r[8]=0u+0x00000000u; // 80202748
  c->lr=0x80202750u; f_801FF320(c); // 8020274C
  cmps(c,0,(int32_t)c->r[3],0); // 80202750
  if (!crb(c,0)) { goto L_80202760; } // 80202754
  c->r[3]=0u+0x00000000u; // 80202758
  goto L_80202AEC; // 8020275C
L_80202760:;
  c->r[17]=R32(c->r[16]+0x00000328u); // 80202760
  c->r[3]=R8(c->r[18]+c->r[17]); // 80202764
  c->r[4]=rotl(c->r[17],0)&0x00000001u; // 80202768
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8020276C
  W8(c->r[23]+c->r[4],c->r[3]); // 80202770
  cmps(c,0,(int32_t)c->r[0],59); // 80202774
  if (crb(c,2)) { goto L_8020279C; } // 80202778
  cmps(c,0,(int32_t)c->r[0],10); // 8020277C
  if (!crb(c,2)) { goto L_80202864; } // 80202780
  c->r[0]=c->r[17]+0xFFFFFFFFu; // 80202784
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80202788
  c->r[0]=R8(c->r[23]+c->r[0]); // 8020278C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80202790
  cmps(c,0,(int32_t)c->r[0],13); // 80202794
  if (!crb(c,2)) { goto L_80202864; } // 80202798
L_8020279C:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8020279C
  cmps(c,0,(int32_t)c->r[0],10); // 802027A0
  if (!crb(c,2)) { goto L_802027B0; } // 802027A4
  c->r[17]=c->r[17]+0xFFFFFFFFu; // 802027A8
  goto L_80202834; // 802027AC
L_802027B0:;
  c->r[26]=R32(c->r[27]+0x000007D0u); // 802027B0
  c->r[25]=0u+0x00000000u; // 802027B4
  c->r[24]=0u+0x00000000u; // 802027B8
  W8(c->r[1]+0x0000000Cu,c->r[25]); // 802027BC
  W8(c->r[1]+0x0000000Du,c->r[25]); // 802027C0
  goto L_802027F4; // 802027C4
L_802027C8:;
  c->r[3]=c->r[20]|c->r[20]; // 802027C8
  c->r[4]=c->r[22]|c->r[22]; // 802027CC
  c->r[5]=c->r[26]|c->r[26]; // 802027D0
  c->r[7]=0u+0x00000001u; // 802027D4
  c->r[8]=0u+0x00000000u; // 802027D8
  c->lr=0x802027E0u; f_801FF320(c); // 802027DC
  cmps(c,0,(int32_t)c->r[3],0); // 802027E0
  if (crb(c,1)) { goto L_802027EC; } // 802027E4
  goto L_80202824; // 802027E8
L_802027EC:;
  c->r[25]=c->r[25]+c->r[3]; // 802027EC
  c->r[24]=c->r[24]+0x00000001u; // 802027F0
L_802027F4:;
  c->r[0]=rotl(c->r[24],0)&0x00000001u; // 802027F4
  c->r[6]=c->r[1]+0x0000000Cu; // 802027F8
  {uint32_t ea=c->r[6]+c->r[0]; c->r[0]=R8(ea); c->r[6]=ea;} // 802027FC
  cmps(c,0,(int32_t)c->r[0],13); // 80202800
  if (!crb(c,2)) { IRQCHK(c); goto L_802027C8; } // 80202804
  c->r[0]=c->r[24]+0xFFFFFFFFu; // 80202808
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8020280C
  c->r[0]=R8(c->r[29]+c->r[0]); // 80202810
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80202814
  cmps(c,0,(int32_t)c->r[0],10); // 80202818
  if (!crb(c,2)) { IRQCHK(c); goto L_802027C8; } // 8020281C
  c->r[3]=c->r[25]|c->r[25]; // 80202820
L_80202824:;
  cmps(c,0,(int32_t)c->r[3],0); // 80202824
  if (crb(c,1)) { goto L_80202834; } // 80202828
  c->r[3]=0u+0x00000000u; // 8020282C
  goto L_80202AEC; // 80202830
L_80202834:;
  cmps(c,0,(int32_t)c->r[17],0); // 80202834
  if (!crb(c,2)) { goto L_80202844; } // 80202838
  c->r[3]=0u+0x00000000u; // 8020283C
  goto L_80202AEC; // 80202840
L_80202844:;
  c->r[3]=c->r[18]|c->r[18]; // 80202844
  c->r[4]=c->r[17]|c->r[17]; // 80202848
  c->lr=0x80202850u; f_801FF970(c); // 8020284C
  cmps(c,0,(int32_t)c->r[3],0); // 80202850
  c->r[24]=c->r[3]|c->r[3]; // 80202854
  if (!crb(c,0)) { goto L_8020287C; } // 80202858
  c->r[3]=0u+0x00000000u; // 8020285C
  goto L_80202AEC; // 80202860
L_80202864:;
  c->r[3]=R32(c->r[16]+0x00000328u); // 80202864
  c->r[0]=c->r[3]+0x00000001u; // 80202868
  W32(c->r[16]+0x00000328u,c->r[0]); // 8020286C
L_80202870:;
  c->r[0]=R32(c->r[16]+0x00000328u); // 80202870
  cmps(c,0,(int32_t)c->r[0],256); // 80202874
  if (crb(c,0)) { IRQCHK(c); goto L_80202734; } // 80202878
L_8020287C:;
  c->r[0]=R32(c->r[16]+0x00000328u); // 8020287C
  cmps(c,0,(int32_t)c->r[0],256); // 80202880
  if (!crb(c,2)) { goto L_80202898; } // 80202884
  c->r[0]=0u+0x00000007u; // 80202888
  c->r[3]=0u+0x00000000u; // 8020288C
  W32(c->r[16]+0x00000330u,c->r[0]); // 80202890
  goto L_80202AEC; // 80202894
L_80202898:;
  cmps(c,0,(int32_t)c->r[24],0); // 80202898
  if (!crb(c,1)) { goto L_80202990; } // 8020289C
  c->r[3]=c->r[19]|c->r[19]; // 802028A0
  c->r[4]=c->r[24]|c->r[24]; // 802028A4
  c->lr=0x802028ACu; f_802045C8(c); // 802028A8
  goto L_80202984; // 802028AC
L_802028B0:;
  c->r[0]=R32(c->r[16]+0x00000330u); // 802028B0
  cmps(c,0,(int32_t)c->r[0],6); // 802028B4
  if (crb(c,2)) { goto L_802028E0; } // 802028B8
  c->r[3]=c->r[20]|c->r[20]; // 802028BC
  c->r[4]=c->r[21]|c->r[21]; // 802028C0
  c->lr=0x802028C8u; f_802005C0(c); // 802028C4
  cmps(c,0,(int32_t)c->r[3],0); // 802028C8
  if (!crb(c,2)) { goto L_802028E0; } // 802028CC
  W32(c->r[16]+0x00000330u,c->r[30]); // 802028D0
  c->r[0]=c->r[16]+0x00000104u; // 802028D4
  W32(c->r[21]+0x00000028u,c->r[0]); // 802028D8
  W32(c->r[21]+0x0000001Cu,c->r[31]); // 802028DC
L_802028E0:;
  c->r[0]=R32(c->r[16]+0x00000330u); // 802028E0
  cmps(c,0,(int32_t)c->r[0],6); // 802028E4
  if (!crb(c,2)) { goto L_8020290C; } // 802028E8
  c->r[5]=R32(c->r[27]+0x000007D0u); // 802028EC
  c->r[3]=c->r[20]|c->r[20]; // 802028F0
  c->r[4]=c->r[22]|c->r[22]; // 802028F4
  c->r[7]=c->r[24]|c->r[24]; // 802028F8
  c->r[6]=0u+0x00000000u; // 802028FC
  c->r[8]=0u+0x00000000u; // 80202900
  c->lr=0x80202908u; f_801FE104(c); // 80202904
  goto L_80202928; // 80202908
L_8020290C:;
  c->r[5]=R32(c->r[27]+0x000007D0u); // 8020290C
  c->r[3]=c->r[20]|c->r[20]; // 80202910
  c->r[6]=R32(c->r[21]+0x00000004u); // 80202914
  c->r[4]=c->r[22]|c->r[22]; // 80202918
  c->r[7]=c->r[24]|c->r[24]; // 8020291C
  c->r[8]=0u+0x00000000u; // 80202920
  c->lr=0x80202928u; f_801FE104(c); // 80202924
L_80202928:;
  cmps(c,0,(int32_t)c->r[3],0); // 80202928
  if (crb(c,1)) { goto L_80202938; } // 8020292C
  c->r[3]=0u+0x00000000u; // 80202930
  goto L_80202AEC; // 80202934
L_80202938:;
  c->r[0]=R32(c->r[21]+0x00000004u); // 80202938
  c->r[24]=c->r[24]-c->r[3]; cr0(c,c->r[24]); // 8020293C
  c->r[0]=c->r[0]+c->r[3]; // 80202940
  W32(c->r[21]+0x00000004u,c->r[0]); // 80202944
  c->r[0]=R32(c->r[21]+0x00000008u); // 80202948
  c->r[0]=c->r[0]+c->r[3]; // 8020294C
  W32(c->r[21]+0x00000008u,c->r[0]); // 80202950
  if (!crb(c,2)) { goto L_80202984; } // 80202954
  c->r[5]=R32(c->r[27]+0x000007D0u); // 80202958
  c->r[3]=c->r[20]|c->r[20]; // 8020295C
  c->r[4]=c->r[22]|c->r[22]; // 80202960
  c->r[6]=c->r[18]|c->r[18]; // 80202964
  c->r[7]=0u+0x00000002u; // 80202968
  c->r[8]=0u+0x00000000u; // 8020296C
  c->lr=0x80202974u; f_801FF320(c); // 80202970
  cmps(c,0,(int32_t)c->r[3],0); // 80202974
  if (crb(c,1)) { goto L_80202984; } // 80202978
  c->r[3]=0u+0x00000000u; // 8020297C
  goto L_80202AEC; // 80202980
L_80202984:;
  cmps(c,0,(int32_t)c->r[24],0); // 80202984
  if (crb(c,1)) { IRQCHK(c); goto L_802028B0; } // 80202988
  IRQCHK(c); goto L_80202724; // 8020298C
L_80202990:;
  c->r[18]=R32(c->r[27]+0x000007D0u); // 80202990
  c->r[0]=0u+0x00000000u; // 80202994
  c->r[17]=c->r[1]+0x00000008u; // 80202998
  c->r[19]=0u+0x00000000u; // 8020299C
  W8(c->r[1]+0x00000008u,c->r[0]); // 802029A0
  W8(c->r[1]+0x00000009u,c->r[0]); // 802029A4
  goto L_802029D0; // 802029A8
L_802029AC:;
  c->r[3]=c->r[20]|c->r[20]; // 802029AC
  c->r[4]=c->r[22]|c->r[22]; // 802029B0
  c->r[5]=c->r[18]|c->r[18]; // 802029B4
  c->r[7]=0u+0x00000001u; // 802029B8
  c->r[8]=0u+0x00000000u; // 802029BC
  c->lr=0x802029C4u; f_801FF320(c); // 802029C0
  cmps(c,0,(int32_t)c->r[3],0); // 802029C4
  if (!crb(c,1)) { goto L_802029FC; } // 802029C8
  c->r[19]=c->r[19]+0x00000001u; // 802029CC
L_802029D0:;
  c->r[0]=rotl(c->r[19],0)&0x00000001u; // 802029D0
  c->r[6]=c->r[1]+0x00000008u; // 802029D4
  {uint32_t ea=c->r[6]+c->r[0]; c->r[0]=R8(ea); c->r[6]=ea;} // 802029D8
  cmps(c,0,(int32_t)c->r[0],13); // 802029DC
  if (!crb(c,2)) { IRQCHK(c); goto L_802029AC; } // 802029E0
  c->r[0]=c->r[19]+0xFFFFFFFFu; // 802029E4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 802029E8
  c->r[0]=R8(c->r[17]+c->r[0]); // 802029EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802029F0
  cmps(c,0,(int32_t)c->r[0],10); // 802029F4
  if (!crb(c,2)) { IRQCHK(c); goto L_802029AC; } // 802029F8
L_802029FC:;
  c->r[0]=0u+0x00000000u; // 802029FC
  W32(c->r[16]+0x00000330u,c->r[0]); // 80202A00
  goto L_80202ABC; // 80202A04
L_80202A08:;
  c->r[18]=0u+0x00000006u; // 80202A08
  c->r[17]=0u+0x00000200u; // 80202A0C
L_80202A10:;
  c->r[3]=c->r[20]|c->r[20]; // 80202A10
  c->r[4]=c->r[21]|c->r[21]; // 80202A14
  c->lr=0x80202A1Cu; f_802005C0(c); // 80202A18
  cmps(c,0,(int32_t)c->r[3],0); // 80202A1C
  if (!crb(c,2)) { goto L_80202A34; } // 80202A20
  W32(c->r[16]+0x00000330u,c->r[18]); // 80202A24
  c->r[0]=c->r[16]+0x00000104u; // 80202A28
  W32(c->r[21]+0x00000028u,c->r[0]); // 80202A2C
  W32(c->r[21]+0x0000001Cu,c->r[17]); // 80202A30
L_80202A34:;
  c->r[0]=R32(c->r[16]+0x00000330u); // 80202A34
  cmps(c,0,(int32_t)c->r[0],6); // 80202A38
  if (!crb(c,2)) { goto L_80202A5C; } // 80202A3C
  c->r[5]=R32(c->r[27]+0x000007D0u); // 80202A40
  c->r[3]=c->r[20]|c->r[20]; // 80202A44
  c->r[4]=c->r[22]|c->r[22]; // 80202A48
  c->r[6]=0u+0x00000000u; // 80202A4C
  c->r[7]=0u+0x00000000u; // 80202A50
  c->lr=0x80202A58u; f_801FE0E4(c); // 80202A54
  goto L_80202A74; // 80202A58
L_80202A5C:;
  c->r[5]=R32(c->r[27]+0x000007D0u); // 80202A5C
  c->r[3]=c->r[20]|c->r[20]; // 80202A60
  c->r[6]=R32(c->r[21]+0x00000004u); // 80202A64
  c->r[4]=c->r[22]|c->r[22]; // 80202A68
  c->r[7]=0u+0x00000000u; // 80202A6C
  c->lr=0x80202A74u; f_801FE0E4(c); // 80202A70
L_80202A74:;
  cmps(c,0,(int32_t)c->r[3],0); // 80202A74
  if (!crb(c,0)) { goto L_80202A84; } // 80202A78
  c->r[3]=0u+0x00000000u; // 80202A7C
  goto L_80202AEC; // 80202A80
L_80202A84:;
  if (!crb(c,2)) { goto L_80202AA0; } // 80202A84
  c->r[0]=R32(c->r[16]+0x00000330u); // 80202A88
  cmps(c,0,(int32_t)c->r[0],6); // 80202A8C
  if (crb(c,2)) { goto L_80202ABC; } // 80202A90
  c->r[0]=0u+0x00000000u; // 80202A94
  W32(c->r[16]+0x00000330u,c->r[0]); // 80202A98
  goto L_80202ABC; // 80202A9C
L_80202AA0:;
  c->r[0]=R32(c->r[21]+0x00000004u); // 80202AA0
  c->r[0]=c->r[0]+c->r[3]; // 80202AA4
  W32(c->r[21]+0x00000004u,c->r[0]); // 80202AA8
  c->r[0]=R32(c->r[21]+0x00000008u); // 80202AAC
  c->r[0]=c->r[0]+c->r[3]; // 80202AB0
  W32(c->r[21]+0x00000008u,c->r[0]); // 80202AB4
  IRQCHK(c); goto L_80202A10; // 80202AB8
L_80202ABC:;
  c->r[3]=c->r[20]|c->r[20]; // 80202ABC
  c->r[4]=c->r[21]|c->r[21]; // 80202AC0
  c->lr=0x80202AC8u; f_80204114(c); // 80202AC4
  c->r[0]=R32(c->r[16]+0x00000330u); // 80202AC8
  c->r[4]=c->r[3]|c->r[3]; // 80202ACC
  cmps(c,0,(int32_t)c->r[0],0); // 80202AD0
  if (!crb(c,2)) { goto L_80202AE8; } // 80202AD4
  cmps(c,0,(int32_t)c->r[3],0); // 80202AD8
  if (crb(c,2)) { goto L_80202AE8; } // 80202ADC
  c->r[3]=c->r[20]|c->r[20]; // 80202AE0
  c->lr=0x80202AE8u; f_802043CC(c); // 80202AE4
L_80202AE8:;
  c->r[3]=0u+0x00000001u; // 80202AE8
L_80202AEC:;
  c->r[11]=c->r[1]+0x00000060u; // 80202AEC
  c->lr=0x80202AF4u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80202AF0
  c->r[0]=R32(c->r[1]+0x00000064u); // 80202AF4
  c->lr=c->r[0]; // 80202AF8
  c->r[1]=c->r[1]+0x00000060u; // 80202AFC
  return; // 80202B00
}

// NHTTPi_CommThreadProcMain
void f_80202B04(Ctx* __restrict c) {
  trace_call(0x80202B04u);
  {uint32_t ea=c->r[1]+0xFFFFFCA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202B04
  c->r[0]=c->lr; // 80202B08
  W32(c->r[1]+0x00000364u,c->r[0]); // 80202B0C
  c->r[11]=c->r[1]+0x00000360u; // 80202B10
  c->lr=0x80202B18u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80202B14
  c->lr=0x80202B1Cu; f_8020453C(c); // 80202B18
  c->r[28]=c->r[3]|c->r[3]; // 80202B1C
  c->lr=0x80202B24u; f_802045A4(c); // 80202B20
  c->r[27]=c->r[3]|c->r[3]; // 80202B24
  c->r[3]=c->r[28]|c->r[28]; // 80202B28
  c->lr=0x80202B30u; f_802045B0(c); // 80202B2C
  c->r[29]=0u+0xFFFFFFFFu; // 80202B30
  c->r[28]=c->r[3]|c->r[3]; // 80202B34
  W32(c->r[1]+0x00000008u,c->r[29]); // 80202B38
  c->r[3]=c->r[1]+0x0000000Cu; // 80202B3C
  c->r[4]=0u+0x00000100u; // 80202B40
  c->lr=0x80202B48u; f_801FF714(c); // 80202B44
  c->r[3]=c->r[1]+0x0000010Cu; // 80202B48
  c->r[4]=0u+0x00000200u; // 80202B4C
  c->lr=0x80202B54u; f_801FF714(c); // 80202B50
  c->r[30]=0u+0x00000000u; // 80202B54
  W32(c->r[1]+0x0000031Cu,c->r[29]); // 80202B58
  c->r[31]=0u+0x00000001u; // 80202B5C
  W32(c->r[1]+0x00000320u,c->r[29]); // 80202B60
  W32(c->r[1]+0x0000032Cu,c->r[30]); // 80202B64
  W32(c->r[1]+0x00000340u,c->r[30]); // 80202B68
  W32(c->r[1]+0x00000344u,c->r[30]); // 80202B6C
  W32(c->r[1]+0x0000033Cu,c->r[30]); // 80202B70
  W32(c->r[1]+0x00000334u,c->r[30]); // 80202B74
  W32(c->r[1]+0x00000338u,c->r[30]); // 80202B78
  goto L_80202CE4; // 80202B7C
L_80202B80:;
  c->r[0]=R32(c->r[1]+0x0000033Cu); // 80202B80
  cmps(c,0,(int32_t)c->r[0],0); // 80202B84
  if (!crb(c,2)) { goto L_80202BD8; } // 80202B88
  c->r[3]=c->r[1]+0x00000008u; // 80202B8C
  c->lr=0x80202B94u; f_80201640(c); // 80202B90
  cmps(c,0,(int32_t)c->r[3],0); // 80202B94
  if (crb(c,2)) { goto L_80202CE4; } // 80202B98
  c->r[3]=R32(c->r[28]+0x00000000u); // 80202B9C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80202BA0
  c->r[0]=R32(c->r[3]+0x00000000u); // 80202BA4
  cmps(c,0,(int32_t)c->r[0],0); // 80202BA8
  if (crb(c,2)) { goto L_80202BBC; } // 80202BAC
  c->r[3]=c->r[1]+0x00000008u; // 80202BB0
  c->lr=0x80202BB8u; f_802014C0(c); // 80202BB4
  goto L_80202CE4; // 80202BB8
L_80202BBC:;
  c->r[3]=c->r[1]+0x00000008u; // 80202BBC
  c->lr=0x80202BC4u; f_802016F8(c); // 80202BC0
  cmps(c,0,(int32_t)c->r[3],0); // 80202BC4
  if (!crb(c,2)) { goto L_80202BD8; } // 80202BC8
  c->r[3]=c->r[1]+0x00000008u; // 80202BCC
  c->lr=0x80202BD4u; f_802014C0(c); // 80202BD0
  goto L_80202CE4; // 80202BD4
L_80202BD8:;
  c->r[0]=R32(c->r[1]+0x0000033Cu); // 80202BD8
  cmps(c,0,(int32_t)c->r[0],1); // 80202BDC
  if (!crb(c,2)) { goto L_80202BE8; } // 80202BE0
  W32(c->r[1]+0x0000033Cu,c->r[30]); // 80202BE4
L_80202BE8:;
  c->r[3]=c->r[1]+0x00000008u; // 80202BE8
  c->lr=0x80202BF0u; f_8020184C(c); // 80202BEC
  cmps(c,0,(int32_t)c->r[3],0); // 80202BF0
  if (!crb(c,2)) { goto L_80202C04; } // 80202BF4
  c->r[3]=c->r[1]+0x00000008u; // 80202BF8
  c->lr=0x80202C00u; f_802014C0(c); // 80202BFC
  goto L_80202CE4; // 80202C00
L_80202C04:;
  c->r[3]=c->r[1]+0x00000008u; // 80202C04
  c->lr=0x80202C0Cu; f_80201A08(c); // 80202C08
  cmps(c,0,(int32_t)c->r[3],1); // 80202C0C
  if (crb(c,2)) { goto L_80202C2C; } // 80202C10
  if (!crb(c,0)) { goto L_80202C1C; } // 80202C14
  goto L_80202C38; // 80202C18
L_80202C1C:;
  cmps(c,0,(int32_t)c->r[3],3); // 80202C1C
  if (!crb(c,0)) { goto L_80202C38; } // 80202C20
  W32(c->r[1]+0x0000033Cu,c->r[31]); // 80202C24
  goto L_80202CE4; // 80202C28
L_80202C2C:;
  c->r[3]=c->r[1]+0x00000008u; // 80202C2C
  c->lr=0x80202C34u; f_802014C0(c); // 80202C30
  goto L_80202CE4; // 80202C34
L_80202C38:;
  c->r[3]=c->r[1]+0x00000008u; // 80202C38
  c->lr=0x80202C40u; f_80201B5C(c); // 80202C3C
  cmps(c,0,(int32_t)c->r[3],2); // 80202C40
  if (crb(c,2)) { goto L_80202C68; } // 80202C44
  if (!crb(c,0)) { goto L_80202C5C; } // 80202C48
  cmps(c,0,(int32_t)c->r[3],0); // 80202C4C
  if (crb(c,2)) { goto L_80202C7C; } // 80202C50
  if (!crb(c,0)) { goto L_80202C70; } // 80202C54
  goto L_80202C7C; // 80202C58
L_80202C5C:;
  cmps(c,0,(int32_t)c->r[3],4); // 80202C5C
  if (!crb(c,0)) { goto L_80202C7C; } // 80202C60
  goto L_80202C70; // 80202C64
L_80202C68:;
  W32(c->r[1]+0x0000033Cu,c->r[31]); // 80202C68
  goto L_80202CE4; // 80202C6C
L_80202C70:;
  c->r[3]=c->r[1]+0x00000008u; // 80202C70
  c->lr=0x80202C78u; f_802014C0(c); // 80202C74
  goto L_80202CE4; // 80202C78
L_80202C7C:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 80202C7C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80202C80
  c->r[0]=R32(c->r[3]+0x00000000u); // 80202C84
  cmps(c,0,(int32_t)c->r[0],0); // 80202C88
  if (crb(c,2)) { goto L_80202C9C; } // 80202C8C
  c->r[3]=c->r[1]+0x00000008u; // 80202C90
  c->lr=0x80202C98u; f_802014C0(c); // 80202C94
  goto L_80202CE4; // 80202C98
L_80202C9C:;
  c->r[3]=c->r[1]+0x00000008u; // 80202C9C
  c->lr=0x80202CA4u; f_80201FF8(c); // 80202CA0
  cmps(c,0,(int32_t)c->r[3],0); // 80202CA4
  if (!crb(c,2)) { goto L_80202CB8; } // 80202CA8
  c->r[3]=c->r[1]+0x00000008u; // 80202CAC
  c->lr=0x80202CB4u; f_802014C0(c); // 80202CB0
  goto L_80202CE4; // 80202CB4
L_80202CB8:;
  c->r[3]=c->r[1]+0x00000008u; // 80202CB8
  c->lr=0x80202CC0u; f_802021E4(c); // 80202CBC
  cmps(c,0,(int32_t)c->r[3],0); // 80202CC0
  if (!crb(c,2)) { goto L_80202CD4; } // 80202CC4
  c->r[3]=c->r[1]+0x00000008u; // 80202CC8
  c->lr=0x80202CD0u; f_802014C0(c); // 80202CCC
  goto L_80202CE4; // 80202CD0
L_80202CD4:;
  c->r[3]=c->r[1]+0x00000008u; // 80202CD4
  c->lr=0x80202CDCu; f_80202514(c); // 80202CD8
  c->r[3]=c->r[1]+0x00000008u; // 80202CDC
  c->lr=0x80202CE4u; f_802014C0(c); // 80202CE0
L_80202CE4:;
  c->r[0]=R32(c->r[27]+0x000007DCu); // 80202CE4
  cmps(c,0,(int32_t)c->r[0],0); // 80202CE8
  if (crb(c,2)) { IRQCHK(c); goto L_80202B80; } // 80202CEC
  c->r[11]=c->r[1]+0x00000360u; // 80202CF0
  c->lr=0x80202CF8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80202CF4
  c->r[0]=R32(c->r[1]+0x00000364u); // 80202CF8
  c->lr=c->r[0]; // 80202CFC
  c->r[1]=c->r[1]+0x00000360u; // 80202D00
  return; // 80202D04
}

// __NHTTPCreateConnection
void f_80202D08(Ctx* __restrict c) {
  trace_call(0x80202D08u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202D08
  c->r[0]=c->lr; // 80202D0C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80202D10
  c->r[11]=c->r[1]+0x00000030u; // 80202D14
  c->lr=0x80202D1Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80202D18
  c->r[22]=c->r[3]|c->r[3]; // 80202D1C
  c->r[23]=c->r[4]|c->r[4]; // 80202D20
  c->r[24]=c->r[5]|c->r[5]; // 80202D24
  c->r[25]=c->r[6]|c->r[6]; // 80202D28
  c->r[26]=c->r[7]|c->r[7]; // 80202D2C
  c->r[27]=c->r[8]|c->r[8]; // 80202D30
  c->lr=0x80202D38u; f_8020453C(c); // 80202D34
  c->r[29]=c->r[3]|c->r[3]; // 80202D38
  c->lr=0x80202D40u; f_802045A4(c); // 80202D3C
  c->r[31]=c->r[3]|c->r[3]; // 80202D40
  c->r[3]=c->r[29]|c->r[29]; // 80202D44
  c->lr=0x80202D4Cu; f_802045C0(c); // 80202D48
  c->r[30]=0u+0x00010000u; // 80202D4C
  c->r[28]=c->r[3]|c->r[3]; // 80202D50
  c->r[3]=c->r[30]+0xFFFF8060u; // 80202D54
  c->r[4]=0u+0x00000020u; // 80202D58
  c->lr=0x80202D60u; f_801FCFC8(c); // 80202D5C
  cmps(c,0,(int32_t)c->r[3],0); // 80202D60
  c->r[29]=c->r[3]|c->r[3]; // 80202D64
  if (!crb(c,2)) { goto L_80202D80; } // 80202D68
  c->r[3]=c->r[31]|c->r[31]; // 80202D6C
  c->r[4]=0u+0x00000001u; // 80202D70
  c->lr=0x80202D78u; f_801FD068(c); // 80202D74
  c->r[3]=0u+0x00000000u; // 80202D78
  goto L_80202E38; // 80202D7C
L_80202D80:;
  c->r[4]=c->r[30]+0xFFFF8060u; // 80202D80
  c->lr=0x80202D88u; f_801FF714(c); // 80202D84
  c->r[3]=c->r[31]|c->r[31]; // 80202D88
  c->r[4]=c->r[22]|c->r[22]; // 80202D8C
  c->r[5]=c->r[23]|c->r[23]; // 80202D90
  c->r[6]=c->r[24]|c->r[24]; // 80202D94
  c->r[7]=c->r[25]|c->r[25]; // 80202D98
  c->r[8]=c->r[27]|c->r[27]; // 80202D9C
  c->r[9]=0u+0x00000000u; // 80202DA0
  c->r[10]=0u+0x00000000u; // 80202DA4
  c->lr=0x80202DACu; f_801FE14C(c); // 80202DA8
  cmps(c,0,(int32_t)c->r[3],0); // 80202DAC
  W32(c->r[29]+0x00000010u,c->r[3]); // 80202DB0
  if (!crb(c,2)) { goto L_80202DC8; } // 80202DB4
  c->r[3]=c->r[29]|c->r[29]; // 80202DB8
  c->lr=0x80202DC0u; f_801FD024(c); // 80202DBC
  c->r[3]=0u+0x00000000u; // 80202DC0
  goto L_80202E38; // 80202DC4
L_80202DC8:;
  c->r[4]=R32(c->r[3]+0x0000002Cu); // 80202DC8
  c->r[31]=0u+0x00000000u; // 80202DCC
  c->r[0]=0u+0xFFFFFFFFu; // 80202DD0
  c->r[3]=c->r[28]|c->r[28]; // 80202DD4
  W32(c->r[29]+0x00000014u,c->r[4]); // 80202DD8
  c->r[4]=c->r[29]|c->r[29]; // 80202DDC
  W32(c->r[29]+0x00000000u,c->r[31]); // 80202DE0
  W32(c->r[29]+0x0000001Cu,c->r[26]); // 80202DE4
  W32(c->r[29]+0x00000024u,c->r[31]); // 80202DE8
  W32(c->r[29]+0x00000028u,c->r[31]); // 80202DEC
  W32(c->r[29]+0x00000018u,c->r[0]); // 80202DF0
  c->lr=0x80202DF8u; f_8020403C(c); // 80202DF4
  c->r[3]=0u+0x0000000Fu; // 80202DF8
  c->r[0]=0u+0x00000001u; // 80202DFC
  W32(c->r[29]+0x00000004u,c->r[3]); // 80202E00
  c->r[3]=c->r[29]|c->r[29]; // 80202E04
  c->r[4]=0u+0x00000000u; // 80202E08
  W32(c->r[29]+0x00000008u,c->r[31]); // 80202E0C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80202E10
  c->lr=0x80202E18u; f_802045C8(c); // 80202E14
  W32(c->r[29]+0x00000030u,c->r[31]); // 80202E18
  c->r[5]=c->r[29]+0x00010000u; // 80202E1C
  c->r[3]=c->r[29]+0x00000040u; // 80202E20
  c->r[4]=c->r[30]+0xFFFF8000u; // 80202E24
  W32(c->r[5]+0xFFFF8040u,c->r[31]); // 80202E28
  W32(c->r[5]+0xFFFF8044u,c->r[31]); // 80202E2C
  c->lr=0x80202E34u; f_801FF714(c); // 80202E30
  c->r[3]=c->r[29]|c->r[29]; // 80202E34
L_80202E38:;
  c->r[11]=c->r[1]+0x00000030u; // 80202E38
  c->lr=0x80202E40u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80202E3C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80202E40
  c->lr=c->r[0]; // 80202E44
  c->r[1]=c->r[1]+0x00000030u; // 80202E48
  return; // 80202E4C
}

// fn_80202E50
void f_80202E50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202E50
  c->r[0]=c->lr; // 80202E54
  W32(c->r[1]+0x00000024u,c->r[0]); // 80202E58
  c->r[11]=c->r[1]+0x00000020u; // 80202E5C
  c->lr=0x80202E64u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80202E60
  c->r[27]=c->r[3]|c->r[3]; // 80202E64
  c->lr=0x80202E6Cu; f_8020453C(c); // 80202E68
  c->r[29]=c->r[3]|c->r[3]; // 80202E6C
  c->lr=0x80202E74u; f_802045C0(c); // 80202E70
  c->r[28]=c->r[3]|c->r[3]; // 80202E74
  c->r[3]=c->r[29]|c->r[29]; // 80202E78
  c->lr=0x80202E80u; f_802045B8(c); // 80202E7C
  c->r[30]=c->r[3]|c->r[3]; // 80202E80
  c->r[3]=c->r[28]|c->r[28]; // 80202E84
  c->r[4]=c->r[27]|c->r[27]; // 80202E88
  c->lr=0x80202E90u; f_8020411C(c); // 80202E8C
  cmps(c,0,(int32_t)c->r[3],0); // 80202E90
  c->r[27]=c->r[3]|c->r[3]; // 80202E94
  if (!crb(c,2)) { goto L_80202EA4; } // 80202E98
  c->r[3]=0u+0xFFFFFFFFu; // 80202E9C
  goto L_80202FD4; // 80202EA0
L_80202EA4:;
  c->r[3]=c->r[30]|c->r[30]; // 80202EA4
  c->r[4]=0u+0x00000001u; // 80202EA8
  c->lr=0x80202EB0u; f_801FD9E8(c); // 80202EAC
  c->r[4]=R32(c->r[27]+0x00000018u); // 80202EB0
  cmps(c,0,(int32_t)c->r[4],0); // 80202EB4
  if (crb(c,0)) { goto L_80202ECC; } // 80202EB8
  c->r[3]=c->r[29]|c->r[29]; // 80202EBC
  c->lr=0x80202EC4u; f_801FE9A4(c); // 80202EC0
  c->r[0]=0u+0xFFFFFFFFu; // 80202EC4
  W32(c->r[27]+0x00000018u,c->r[0]); // 80202EC8
L_80202ECC:;
  c->r[4]=R32(c->r[27]+0x00000010u); // 80202ECC
  cmps(c,0,(int32_t)c->r[4],0); // 80202ED0
  if (crb(c,2)) { goto L_80202EEC; } // 80202ED4
  c->r[0]=R32(c->r[4]+0x00000004u); // 80202ED8
  cmps(c,0,(int32_t)c->r[0],0); // 80202EDC
  if (!crb(c,2)) { goto L_80202EEC; } // 80202EE0
  c->r[3]=c->r[29]|c->r[29]; // 80202EE4
  c->lr=0x80202EECu; f_801FE708(c); // 80202EE8
L_80202EEC:;
  c->r[4]=R32(c->r[27]+0x00000014u); // 80202EEC
  cmps(c,0,(int32_t)c->r[4],0); // 80202EF0
  if (crb(c,2)) { goto L_80202FBC; } // 80202EF4
  c->r[0]=R32(c->r[27]+0x00000010u); // 80202EF8
  cmps(c,0,(int32_t)c->r[0],0); // 80202EFC
  if (!crb(c,2)) { goto L_80202F10; } // 80202F00
  c->r[3]=c->r[28]|c->r[28]; // 80202F04
  c->lr=0x80202F0Cu; f_801FEB10(c); // 80202F08
  goto L_80202FBC; // 80202F0C
L_80202F10:;
  c->lr=0x80202F14u; f_8020453C(c); // 80202F10
  c->r[30]=c->r[3]|c->r[3]; // 80202F14
  c->lr=0x80202F1Cu; f_802045B8(c); // 80202F18
  c->r[29]=c->r[3]|c->r[3]; // 80202F1C
  c->r[3]=c->r[30]|c->r[30]; // 80202F20
  c->lr=0x80202F28u; f_802045C0(c); // 80202F24
  c->r[4]=c->r[27]|c->r[27]; // 80202F28
  c->lr=0x80202F30u; f_8020411C(c); // 80202F2C
  cmps(c,0,(int32_t)c->r[3],0); // 80202F30
  c->r[30]=c->r[3]|c->r[3]; // 80202F34
  if (crb(c,2)) { goto L_80202FB0; } // 80202F38
  c->lr=0x80202F40u; f_8020453C(c); // 80202F3C
  c->lr=0x80202F44u; f_802045C0(c); // 80202F40
  c->r[4]=c->r[27]|c->r[27]; // 80202F44
  c->lr=0x80202F4Cu; f_8020411C(c); // 80202F48
  cmps(c,0,(int32_t)c->r[3],0); // 80202F4C
  if (!crb(c,2)) { goto L_80202F5C; } // 80202F50
  c->r[31]=0u+0xFFFFFFFFu; // 80202F54
  goto L_80202F60; // 80202F58
L_80202F5C:;
  c->r[31]=R32(c->r[3]+0x00000000u); // 80202F5C
L_80202F60:;
  c->r[3]=c->r[29]|c->r[29]; // 80202F60
  c->r[4]=0u+0x00000001u; // 80202F64
  c->lr=0x80202F6Cu; f_801FD9E8(c); // 80202F68
  cmps(c,0,(int32_t)c->r[31],-1); // 80202F6C
  if (crb(c,2)) { goto L_80202FB0; } // 80202F70
  cmps(c,0,(int32_t)c->r[31],0); // 80202F74
  if (crb(c,2)) { goto L_80202FB0; } // 80202F78
  c->lr=0x80202F80u; f_8020453C(c); // 80202F7C
  c->lr=0x80202F84u; f_802045C0(c); // 80202F80
  c->r[4]=c->r[27]|c->r[27]; // 80202F84
  c->lr=0x80202F8Cu; f_8020411C(c); // 80202F88
  cmps(c,0,(int32_t)c->r[3],0); // 80202F8C
  if (crb(c,2)) { goto L_80202F9C; } // 80202F90
  c->r[0]=R32(c->r[3]+0x00000004u); // 80202F94
  goto L_80202FA0; // 80202F98
L_80202F9C:;
  c->r[0]=0u+0xFFFFFFFFu; // 80202F9C
L_80202FA0:;
  cmps(c,0,(int32_t)c->r[0],15); // 80202FA0
  if (!crb(c,2)) { goto L_80202FB0; } // 80202FA4
  c->r[3]=c->r[30]|c->r[30]; // 80202FA8
  c->lr=0x80202FB0u; f_80203E28(c); // 80202FAC
L_80202FB0:;
  c->r[4]=R32(c->r[27]+0x00000014u); // 80202FB0
  c->r[3]=c->r[28]|c->r[28]; // 80202FB4
  c->lr=0x80202FBCu; f_801FEB10(c); // 80202FB8
L_80202FBC:;
  c->r[3]=c->r[28]|c->r[28]; // 80202FBC
  c->r[4]=c->r[27]|c->r[27]; // 80202FC0
  c->lr=0x80202FC8u; f_8020406C(c); // 80202FC4
  c->r[3]=c->r[27]|c->r[27]; // 80202FC8
  c->lr=0x80202FD0u; f_801FD024(c); // 80202FCC
  c->r[3]=0u+0x00000000u; // 80202FD0
L_80202FD4:;
  c->r[11]=c->r[1]+0x00000020u; // 80202FD4
  c->lr=0x80202FDCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80202FD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80202FDC
  c->lr=c->r[0]; // 80202FE0
  c->r[1]=c->r[1]+0x00000020u; // 80202FE4
  return; // 80202FE8
}

// fn_80202FEC
void f_80202FEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202FEC
  c->r[0]=c->lr; // 80202FF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80202FF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80202FF8
  c->r[31]=c->r[3]|c->r[3]; // 80202FFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80203000
  c->lr=0x80203008u; f_8020453C(c); // 80203004
  c->r[30]=c->r[3]|c->r[3]; // 80203008
  c->lr=0x80203010u; f_802045C0(c); // 8020300C
  c->r[4]=c->r[31]|c->r[31]; // 80203010
  c->lr=0x80203018u; f_8020411C(c); // 80203014
  cmps(c,0,(int32_t)c->r[3],0); // 80203018
  c->r[31]=c->r[3]|c->r[3]; // 8020301C
  if (!crb(c,2)) { goto L_8020302C; } // 80203020
  c->r[3]=0u+0xFFFFFFFFu; // 80203024
  goto L_80203060; // 80203028
L_8020302C:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 8020302C
  cmps(c,0,(int32_t)c->r[4],0); // 80203030
  if (!crb(c,2)) { goto L_80203040; } // 80203034
  c->r[3]=0u+0xFFFFFFFFu; // 80203038
  goto L_80203060; // 8020303C
L_80203040:;
  c->r[3]=c->r[30]|c->r[30]; // 80203040
  c->lr=0x80203048u; f_801FE8E4(c); // 80203044
  cmps(c,0,(int32_t)c->r[3],0); // 80203048
  W32(c->r[31]+0x00000018u,c->r[3]); // 8020304C
  if (crb(c,0)) { goto L_8020305C; } // 80203050
  c->r[0]=0u+0x00000001u; // 80203054
  W32(c->r[31]+0x00000000u,c->r[0]); // 80203058
L_8020305C:;
  c->r[3]=0u+0x00000000u; // 8020305C
L_80203060:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203060
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203064
  c->r[30]=R32(c->r[1]+0x00000008u); // 80203068
  c->lr=c->r[0]; // 8020306C
  c->r[1]=c->r[1]+0x00000010u; // 80203070
  return; // 80203074
}

// fn_80203078
void f_80203078(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203078
  c->r[0]=c->lr; // 8020307C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203080
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80203084
  W32(c->r[1]+0x00000008u,c->r[30]); // 80203088
  c->r[30]=c->r[3]|c->r[3]; // 8020308C
  c->lr=0x80203094u; f_8020453C(c); // 80203090
  c->r[31]=c->r[3]|c->r[3]; // 80203094
  c->lr=0x8020309Cu; f_802045C0(c); // 80203098
  c->r[4]=c->r[30]|c->r[30]; // 8020309C
  c->lr=0x802030A4u; f_8020411C(c); // 802030A0
  cmps(c,0,(int32_t)c->r[3],0); // 802030A4
  if (!crb(c,2)) { goto L_802030B4; } // 802030A8
  c->r[3]=0u+0xFFFFFFFFu; // 802030AC
  goto L_802030D4; // 802030B0
L_802030B4:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 802030B4
  cmps(c,0,(int32_t)c->r[4],0); // 802030B8
  if (crb(c,0)) { goto L_802030D0; } // 802030BC
  c->r[3]=c->r[31]|c->r[31]; // 802030C0
  c->lr=0x802030C8u; f_801FE9A4(c); // 802030C4
  c->r[3]=0u+0x00000000u; // 802030C8
  goto L_802030D4; // 802030CC
L_802030D0:;
  c->r[3]=0u+0xFFFFFFFFu; // 802030D0
L_802030D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802030D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802030D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 802030DC
  c->lr=c->r[0]; // 802030E0
  c->r[1]=c->r[1]+0x00000010u; // 802030E4
  return; // 802030E8
}

// fn_802030EC
void f_802030EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802030EC
  c->r[0]=c->lr; // 802030F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802030F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802030F8
  c->r[31]=c->r[3]|c->r[3]; // 802030FC
  c->lr=0x80203104u; f_8020453C(c); // 80203100
  c->lr=0x80203108u; f_802045C0(c); // 80203104
  c->r[4]=c->r[31]|c->r[31]; // 80203108
  c->lr=0x80203110u; f_8020411C(c); // 8020310C
  cmps(c,0,(int32_t)c->r[3],0); // 80203110
  if (!crb(c,2)) { goto L_80203120; } // 80203114
  c->r[3]=0u+0xFFFFFFFFu; // 80203118
  goto L_80203124; // 8020311C
L_80203120:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80203120
L_80203124:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203124
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203128
  c->lr=c->r[0]; // 8020312C
  c->r[1]=c->r[1]+0x00000010u; // 80203130
  return; // 80203134
}

// fn_80203138
void f_80203138(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203138
  c->r[0]=c->lr; // 8020313C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80203140
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80203144
  W32(c->r[1]+0x00000018u,c->r[30]); // 80203148
  c->r[30]=c->r[5]|c->r[5]; // 8020314C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80203150
  c->r[29]=c->r[4]|c->r[4]; // 80203154
  W32(c->r[1]+0x00000010u,c->r[28]); // 80203158
  c->r[28]=c->r[3]|c->r[3]; // 8020315C
  c->lr=0x80203164u; f_8020453C(c); // 80203160
  c->lr=0x80203168u; f_802045C0(c); // 80203164
  c->r[31]=c->r[3]|c->r[3]; // 80203168
  c->r[4]=c->r[28]|c->r[28]; // 8020316C
  c->lr=0x80203174u; f_8020411C(c); // 80203170
  cmps(c,0,(int32_t)c->r[3],0); // 80203174
  c->r[4]=c->r[3]|c->r[3]; // 80203178
  if (crb(c,2)) { goto L_802031B0; } // 8020317C
  c->r[3]=c->r[31]|c->r[31]; // 80203180
  c->lr=0x80203188u; f_802040D4(c); // 80203184
  cmps(c,0,(int32_t)c->r[3],0); // 80203188
  if (crb(c,2)) { goto L_802031A8; } // 8020318C
  c->r[0]=R32(c->r[3]+0x00000028u); // 80203190
  W32(c->r[29]+0x00000000u,c->r[0]); // 80203194
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80203198
  W32(c->r[30]+0x00000000u,c->r[0]); // 8020319C
  c->r[3]=R32(c->r[3]+0x00000004u); // 802031A0
  goto L_802031B4; // 802031A4
L_802031A8:;
  c->r[3]=0u+0xFFFFFFFFu; // 802031A8
  goto L_802031B4; // 802031AC
L_802031B0:;
  c->r[3]=0u+0xFFFFFFFFu; // 802031B0
L_802031B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802031B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802031B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 802031BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 802031C0
  c->r[28]=R32(c->r[1]+0x00000010u); // 802031C4
  c->lr=c->r[0]; // 802031C8
  c->r[1]=c->r[1]+0x00000020u; // 802031CC
  return; // 802031D0
}

// fn_802031D4
void f_802031D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802031D4
  c->r[0]=c->lr; // 802031D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802031DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802031E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802031E4
  c->r[30]=c->r[3]|c->r[3]; // 802031E8
  c->lr=0x802031F0u; f_8020453C(c); // 802031EC
  c->lr=0x802031F4u; f_802045C0(c); // 802031F0
  c->r[31]=c->r[3]|c->r[3]; // 802031F4
  c->r[4]=c->r[30]|c->r[30]; // 802031F8
  c->lr=0x80203200u; f_8020411C(c); // 802031FC
  cmps(c,0,(int32_t)c->r[3],0); // 80203200
  c->r[4]=c->r[3]|c->r[3]; // 80203204
  if (crb(c,2)) { goto L_8020322C; } // 80203208
  c->r[3]=c->r[31]|c->r[31]; // 8020320C
  c->lr=0x80203214u; f_802040D4(c); // 80203210
  cmps(c,0,(int32_t)c->r[3],0); // 80203214
  if (crb(c,2)) { goto L_80203224; } // 80203218
  c->r[3]=R32(c->r[3]+0x00000438u); // 8020321C
  goto L_80203230; // 80203220
L_80203224:;
  c->r[3]=0u+0x00000000u; // 80203224
  goto L_80203230; // 80203228
L_8020322C:;
  c->r[3]=0u+0x00000000u; // 8020322C
L_80203230:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203230
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203234
  c->r[30]=R32(c->r[1]+0x00000008u); // 80203238
  c->lr=c->r[0]; // 8020323C
  c->r[1]=c->r[1]+0x00000010u; // 80203240
  return; // 80203244
}

// fn_80203248
void f_80203248(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203248
  c->r[0]=c->lr; // 8020324C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203250
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80203254
  c->r[31]=c->r[3]|c->r[3]; // 80203258
  c->lr=0x80203260u; f_8020453C(c); // 8020325C
  c->lr=0x80203264u; f_802045C0(c); // 80203260
  c->r[4]=c->r[31]|c->r[31]; // 80203264
  c->lr=0x8020326Cu; f_8020411C(c); // 80203268
  cmps(c,0,(int32_t)c->r[3],0); // 8020326C
  if (crb(c,2)) { goto L_8020327C; } // 80203270
  c->r[3]=R32(c->r[3]+0x00000004u); // 80203274
  goto L_80203280; // 80203278
L_8020327C:;
  c->r[3]=0u+0xFFFFFFFFu; // 8020327C
L_80203280:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203280
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203284
  c->lr=c->r[0]; // 80203288
  c->r[1]=c->r[1]+0x00000010u; // 8020328C
  return; // 80203290
}

// NHTTPStartup
void f_80203294(Ctx* __restrict c) {
  trace_call(0x80203294u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203294
  c->r[0]=c->lr; // 80203298
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020329C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802032A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 802032A4
  c->r[30]=c->r[5]|c->r[5]; // 802032A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802032AC
  c->r[29]=c->r[4]|c->r[4]; // 802032B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 802032B4
  c->r[28]=c->r[3]|c->r[3]; // 802032B8
  c->lr=0x802032C0u; f_8020453C(c); // 802032BC
  c->r[0]=R32(c->r[13]+0xFFFFB108u); // 802032C0
  c->r[31]=c->r[3]|c->r[3]; // 802032C4
  cmps(c,0,(int32_t)c->r[0],0); // 802032C8
  if (!crb(c,2)) { goto L_802032E0; } // 802032CC
  c->r[3]=R32(c->r[13]+0xFFFF9510u); // 802032D0
  c->lr=0x802032D8u; f_8014E714(c); // 802032D4
  c->r[0]=0u+0x00000001u; // 802032D8
  W32(c->r[13]+0xFFFFB108u,c->r[0]); // 802032DC
L_802032E0:;
  c->r[3]=c->r[31]|c->r[31]; // 802032E0
  c->r[4]=c->r[28]|c->r[28]; // 802032E4
  c->r[5]=c->r[29]|c->r[29]; // 802032E8
  c->r[6]=c->r[30]|c->r[30]; // 802032EC
  c->lr=0x802032F4u; f_801FD080(c); // 802032F0
  c->r[0]=cntlz(c->r[3]); // 802032F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802032F8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802032FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80203300
  c->r[29]=R32(c->r[1]+0x00000014u); // 80203304
  c->r[3]=0u-c->r[0]; // 80203308
  c->r[28]=R32(c->r[1]+0x00000010u); // 8020330C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80203310
  c->lr=c->r[0]; // 80203314
  c->r[1]=c->r[1]+0x00000020u; // 80203318
  return; // 8020331C
}

// fn_80203320
void f_80203320(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203320
  c->r[0]=c->lr; // 80203324
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203328
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020332C
  c->r[31]=c->r[3]|c->r[3]; // 80203330
  c->lr=0x80203338u; f_8020453C(c); // 80203334
  c->r[4]=c->r[31]|c->r[31]; // 80203338
  c->lr=0x80203340u; f_801FD210(c); // 8020333C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203340
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203344
  c->lr=c->r[0]; // 80203348
  c->r[1]=c->r[1]+0x00000010u; // 8020334C
  return; // 80203350
}

// fn_80203354
void f_80203354(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203354
  c->r[0]=c->lr; // 80203358
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020335C
  c->lr=0x80203364u; f_8020453C(c); // 80203360
  c->lr=0x80203368u; f_801FD078(c); // 80203364
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203368
  c->lr=c->r[0]; // 8020336C
  c->r[1]=c->r[1]+0x00000010u; // 80203370
  return; // 80203374
}

// fn_80203378
void f_80203378(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203378
  c->r[0]=c->lr; // 8020337C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80203380
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80203384
  c->r[31]=c->r[4]|c->r[4]; // 80203388
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020338C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80203390
  c->r[29]=c->r[5]|c->r[5]; // 80203394
  W32(c->r[1]+0x00000010u,c->r[28]); // 80203398
  c->r[28]=c->r[3]|c->r[3]; // 8020339C
  c->lr=0x802033A4u; f_8020453C(c); // 802033A0
  c->lr=0x802033A8u; f_802045C0(c); // 802033A4
  c->r[30]=c->r[3]|c->r[3]; // 802033A8
  c->r[4]=c->r[28]|c->r[28]; // 802033AC
  c->lr=0x802033B4u; f_8020411C(c); // 802033B0
  cmps(c,0,(int32_t)c->r[31],3); // 802033B4
  c->r[28]=c->r[3]|c->r[3]; // 802033B8
  c->r[0]=0u+0x00000000u; // 802033BC
  if (crb(c,2)) { goto L_80203538; } // 802033C0
  if (!crb(c,0)) { goto L_802033D8; } // 802033C4
  cmps(c,0,(int32_t)c->r[31],1); // 802033C8
  if (crb(c,2)) { goto L_802033E4; } // 802033CC
  if (!crb(c,0)) { goto L_80203444; } // 802033D0
  goto L_80203538; // 802033D4
L_802033D8:;
  cmps(c,0,(int32_t)c->r[31],5); // 802033D8
  if (!crb(c,0)) { goto L_80203538; } // 802033DC
  goto L_802034DC; // 802033E0
L_802033E4:;
  cmps(c,0,(int32_t)c->r[3],0); // 802033E4
  if (crb(c,2)) { goto L_80203438; } // 802033E8
  c->r[3]=c->r[30]|c->r[30]; // 802033EC
  c->r[4]=c->r[28]|c->r[28]; // 802033F0
  c->lr=0x802033F8u; f_8020409C(c); // 802033F4
  cmps(c,0,(int32_t)c->r[3],0); // 802033F8
  if (crb(c,2)) { goto L_80203438; } // 802033FC
  c->r[31]=R32(c->r[3]+0x00000250u); // 80203400
  cmps(c,0,(int32_t)c->r[31],0); // 80203404
  if (crb(c,2)) { goto L_80203438; } // 80203408
  c->r[3]=c->r[28]|c->r[28]; // 8020340C
  c->lr=0x80203414u; f_802031D4(c); // 80203410
  c->r[12]=c->r[31]|c->r[31]; // 80203414
  c->r[7]=c->r[3]|c->r[3]; // 80203418
  c->r[4]=c->r[29]+0x00000004u; // 8020341C
  c->r[5]=c->r[29]+0x00000008u; // 80203420
  c->r[3]=R32(c->r[29]+0x00000000u); // 80203424
  c->r[6]=R32(c->r[29]+0x0000000Cu); // 80203428
  c->ctr=c->r[12]; // 8020342C
  if (true) { c->lr=0x80203434u; dispatch(c,c->ctr); } // 80203430
  goto L_8020343C; // 80203434
L_80203438:;
  c->r[3]=0u+0xFFFFFFFFu; // 80203438
L_8020343C:;
  c->r[0]=c->r[3]|c->r[3]; // 8020343C
  goto L_80203538; // 80203440
L_80203444:;
  cmps(c,0,(int32_t)c->r[3],0); // 80203444
  if (crb(c,2)) { goto L_802034D4; } // 80203448
  c->r[3]=c->r[30]|c->r[30]; // 8020344C
  c->r[4]=c->r[28]|c->r[28]; // 80203450
  c->lr=0x80203458u; f_802040D4(c); // 80203454
  cmps(c,0,(int32_t)c->r[3],0); // 80203458
  if (crb(c,2)) { goto L_802034D4; } // 8020345C
  c->r[30]=R32(c->r[3]+0x0000002Cu); // 80203460
  cmps(c,0,(int32_t)c->r[30],0); // 80203464
  if (crb(c,2)) { goto L_802034D4; } // 80203468
  c->r[0]=R32(c->r[29]+0x00000000u); // 8020346C
  c->r[3]=c->r[28]|c->r[28]; // 80203470
  W32(c->r[1]+0x00000008u,c->r[0]); // 80203474
  c->lr=0x8020347Cu; f_802045D8(c); // 80203478
  c->r[31]=c->r[3]|c->r[3]; // 8020347C
  c->r[3]=c->r[28]|c->r[28]; // 80203480
  c->lr=0x80203488u; f_802031D4(c); // 80203484
  c->r[6]=0u+0x80200000u; // 80203488
  c->r[7]=0u+0x80200000u; // 8020348C
  c->r[8]=c->r[3]|c->r[3]; // 80203490
  c->r[12]=c->r[30]|c->r[30]; // 80203494
  c->r[5]=c->r[31]|c->r[31]; // 80203498
  c->r[3]=c->r[1]+0x00000008u; // 8020349C
  c->r[4]=c->r[29]+0x00000004u; // 802034A0
  c->r[6]=c->r[6]+0xFFFFCFC8u; // 802034A4
  c->r[7]=c->r[7]+0xFFFFD024u; // 802034A8
  c->ctr=c->r[12]; // 802034AC
  if (true) { c->lr=0x802034B4u; dispatch(c,c->ctr); } // 802034B0
  cmps(c,0,(int32_t)c->r[3],0); // 802034B4
  W32(c->r[29]+0x00000000u,c->r[3]); // 802034B8
  if (crb(c,2)) { goto L_802034D4; } // 802034BC
  c->r[0]=R32(c->r[1]+0x00000008u); // 802034C0
  cmps(c,0,(int32_t)c->r[0],0); // 802034C4
  if (crb(c,2)) { goto L_802034D4; } // 802034C8
  c->r[0]=0u+0x00000000u; // 802034CC
  W32(c->r[29]+0x00000008u,c->r[0]); // 802034D0
L_802034D4:;
  c->r[0]=0u+0x00000000u; // 802034D4
  goto L_80203538; // 802034D8
L_802034DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 802034DC
  if (crb(c,2)) { goto L_80203534; } // 802034E0
  c->r[29]=R32(c->r[3]+0x00000030u); // 802034E4
  cmps(c,0,(int32_t)c->r[29],0); // 802034E8
  if (crb(c,2)) { goto L_80203534; } // 802034EC
  c->r[3]=c->r[30]|c->r[30]; // 802034F0
  c->r[4]=c->r[28]|c->r[28]; // 802034F4
  c->lr=0x802034FCu; f_802040D4(c); // 802034F8
  cmps(c,0,(int32_t)c->r[3],0); // 802034FC
  c->r[31]=c->r[3]|c->r[3]; // 80203500
  if (crb(c,2)) { goto L_80203534; } // 80203504
  c->r[3]=c->r[28]|c->r[28]; // 80203508
  c->lr=0x80203510u; f_80203248(c); // 8020350C
  c->r[30]=c->r[3]|c->r[3]; // 80203510
  c->r[3]=c->r[28]|c->r[28]; // 80203514
  c->lr=0x8020351Cu; f_802031D4(c); // 80203518
  c->r[12]=c->r[29]|c->r[29]; // 8020351C
  c->r[5]=c->r[3]|c->r[3]; // 80203520
  c->r[3]=c->r[30]|c->r[30]; // 80203524
  c->r[4]=c->r[31]|c->r[31]; // 80203528
  c->ctr=c->r[12]; // 8020352C
  if (true) { c->lr=0x80203534u; dispatch(c,c->ctr); } // 80203530
L_80203534:;
  c->r[0]=0u+0x00000000u; // 80203534
L_80203538:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80203538
  c->r[3]=c->r[0]|c->r[0]; // 8020353C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80203540
  c->r[29]=R32(c->r[1]+0x00000014u); // 80203544
  c->r[28]=R32(c->r[1]+0x00000010u); // 80203548
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020354C
  c->lr=c->r[0]; // 80203550
  c->r[1]=c->r[1]+0x00000020u; // 80203554
  return; // 80203558
}

// NHTTPCreateRequest
void f_8020355C(Ctx* __restrict c) {
  trace_call(0x8020355Cu);
  c->r[9]=0u+0x00000000u; // 8020355C
  c->r[10]=0u+0x00000000u; // 80203560
  f_80203568(c); return; // 80203564
}

// fn_80203568
void f_80203568(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203568
  c->r[0]=c->lr; // 8020356C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80203570
  c->r[11]=c->r[1]+0x00000020u; // 80203574
  c->lr=0x8020357Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80203578
  c->r[11]=0u+0x80200000u; // 8020357C
  c->r[26]=c->r[7]|c->r[7]; // 80203580
  c->r[27]=c->r[9]|c->r[9]; // 80203584
  c->r[28]=c->r[10]|c->r[10]; // 80203588
  c->r[7]=c->r[11]+0x00003378u; // 8020358C
  c->lr=0x80203594u; f_80202D08(c); // 80203590
  cmps(c,0,(int32_t)c->r[3],0); // 80203594
  c->r[31]=c->r[3]|c->r[3]; // 80203598
  c->r[4]=0u+0x00000000u; // 8020359C
  if (crb(c,2)) { goto L_8020361C; } // 802035A0
  c->lr=0x802035A8u; f_8020453C(c); // 802035A4
  c->r[30]=c->r[3]|c->r[3]; // 802035A8
  c->lr=0x802035B0u; f_802045C0(c); // 802035AC
  c->r[29]=c->r[3]|c->r[3]; // 802035B0
  c->r[4]=c->r[31]|c->r[31]; // 802035B4
  c->lr=0x802035BCu; f_8020411C(c); // 802035B8
  c->r[31]=c->r[3]|c->r[3]; // 802035BC
  c->r[3]=c->r[29]|c->r[29]; // 802035C0
  c->r[4]=c->r[31]|c->r[31]; // 802035C4
  c->lr=0x802035CCu; f_8020409C(c); // 802035C8
  cmps(c,0,(int32_t)c->r[3],0); // 802035CC
  c->r[4]=c->r[3]|c->r[3]; // 802035D0
  if (crb(c,2)) { goto L_8020361C; } // 802035D4
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 802035D8
  cmps(c,0,(int32_t)c->r[0],0); // 802035DC
  if (crb(c,2)) { goto L_802035FC; } // 802035E0
  W32(c->r[31]+0x00000030u,c->r[26]); // 802035E4
  c->r[4]=R32(c->r[3]+0x0000002Cu); // 802035E8
  W32(c->r[4]+0x0000002Cu,c->r[27]); // 802035EC
  c->r[4]=R32(c->r[3]+0x0000002Cu); // 802035F0
  W32(c->r[4]+0x00000030u,c->r[28]); // 802035F4
  goto L_80203620; // 802035F8
L_802035FC:;
  c->r[3]=c->r[30]|c->r[30]; // 802035FC
  c->lr=0x80203604u; f_801FE708(c); // 80203600
  c->r[3]=c->r[29]|c->r[29]; // 80203604
  c->r[4]=c->r[31]|c->r[31]; // 80203608
  c->lr=0x80203610u; f_8020406C(c); // 8020360C
  c->r[3]=c->r[31]|c->r[31]; // 80203610
  c->lr=0x80203618u; f_801FD024(c); // 80203614
  c->r[4]=0u+0x00000000u; // 80203618
L_8020361C:;
  c->r[3]=c->r[4]|c->r[4]; // 8020361C
L_80203620:;
  c->r[11]=c->r[1]+0x00000020u; // 80203620
  c->lr=0x80203628u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80203624
  c->r[0]=R32(c->r[1]+0x00000024u); // 80203628
  c->lr=c->r[0]; // 8020362C
  c->r[1]=c->r[1]+0x00000020u; // 80203630
  return; // 80203634
}

// fn_80203638
void f_80203638(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203638
  c->r[0]=c->lr; // 8020363C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80203640
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80203644
  W32(c->r[1]+0x00000018u,c->r[30]); // 80203648
  c->r[30]=c->r[3]|c->r[3]; // 8020364C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80203650
  c->r[29]=c->r[5]|c->r[5]; // 80203654
  W32(c->r[1]+0x00000010u,c->r[28]); // 80203658
  c->r[28]=c->r[4]|c->r[4]; // 8020365C
  c->lr=0x80203664u; f_8020453C(c); // 80203660
  c->r[31]=c->r[3]|c->r[3]; // 80203664
  c->lr=0x8020366Cu; f_802045C0(c); // 80203668
  c->r[4]=c->r[30]|c->r[30]; // 8020366C
  c->lr=0x80203674u; f_80204124(c); // 80203670
  c->r[30]=c->r[3]|c->r[3]; // 80203674
  c->r[3]=c->r[31]|c->r[31]; // 80203678
  c->lr=0x80203680u; f_802045A4(c); // 8020367C
  cmps(c,0,(int32_t)c->r[30],0); // 80203680
  c->r[4]=c->r[3]|c->r[3]; // 80203684
  if (!crb(c,2)) { goto L_80203694; } // 80203688
  c->r[3]=0u+0xFFFFFFFFu; // 8020368C
  goto L_802036DC; // 80203690
L_80203694:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80203694
  cmps(c,0,(int32_t)c->r[0],0); // 80203698
  if (crb(c,2)) { goto L_802036C0; } // 8020369C
  c->r[3]=0u+0x802F0000u; // 802036A0
  c->r[4]=0u+0x802F0000u; // 802036A4
  c->r[3]=c->r[3]+0xFFFF9CB8u; // 802036A8
  c->r[4]=c->r[4]+0xFFFF9CA4u; // 802036AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802036B0
  c->lr=0x802036B8u; f_8025A8A4(c); // 802036B4
  c->r[3]=0u+0xFFFFFFFFu; // 802036B8
  goto L_802036DC; // 802036BC
L_802036C0:;
  c->r[3]=c->r[30]|c->r[30]; // 802036C0
  c->r[5]=c->r[28]|c->r[28]; // 802036C4
  c->r[6]=c->r[29]|c->r[29]; // 802036C8
  c->lr=0x802036D0u; f_801FD484(c); // 802036CC
  c->r[0]=cntlz(c->r[3]); // 802036D0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802036D4
  c->r[3]=0u-c->r[0]; // 802036D8
L_802036DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802036DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802036E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 802036E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 802036E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 802036EC
  c->lr=c->r[0]; // 802036F0
  c->r[1]=c->r[1]+0x00000020u; // 802036F4
  return; // 802036F8
}

// fn_802036FC
void f_802036FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802036FC
  c->r[0]=c->lr; // 80203700
  W32(c->r[1]+0x00000024u,c->r[0]); // 80203704
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80203708
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020370C
  c->r[30]=c->r[3]|c->r[3]; // 80203710
  W32(c->r[1]+0x00000014u,c->r[29]); // 80203714
  c->r[29]=c->r[5]|c->r[5]; // 80203718
  W32(c->r[1]+0x00000010u,c->r[28]); // 8020371C
  c->r[28]=c->r[4]|c->r[4]; // 80203720
  c->lr=0x80203728u; f_8020453C(c); // 80203724
  c->r[31]=c->r[3]|c->r[3]; // 80203728
  c->lr=0x80203730u; f_802045C0(c); // 8020372C
  c->r[4]=c->r[30]|c->r[30]; // 80203730
  c->lr=0x80203738u; f_80204124(c); // 80203734
  c->r[30]=c->r[3]|c->r[3]; // 80203738
  c->r[3]=c->r[31]|c->r[31]; // 8020373C
  c->lr=0x80203744u; f_802045A4(c); // 80203740
  cmps(c,0,(int32_t)c->r[30],0); // 80203744
  c->r[4]=c->r[3]|c->r[3]; // 80203748
  if (!crb(c,2)) { goto L_80203758; } // 8020374C
  c->r[3]=0u+0xFFFFFFFFu; // 80203750
  goto L_802037A0; // 80203754
L_80203758:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80203758
  cmps(c,0,(int32_t)c->r[0],0); // 8020375C
  if (crb(c,2)) { goto L_80203784; } // 80203760
  c->r[3]=0u+0x802F0000u; // 80203764
  c->r[4]=0u+0x802F0000u; // 80203768
  c->r[3]=c->r[3]+0xFFFF9CB8u; // 8020376C
  c->r[4]=c->r[4]+0xFFFF9CE8u; // 80203770
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203774
  c->lr=0x8020377Cu; f_8025A8A4(c); // 80203778
  c->r[3]=0u+0xFFFFFFFFu; // 8020377C
  goto L_802037A0; // 80203780
L_80203784:;
  c->r[3]=c->r[30]|c->r[30]; // 80203784
  c->r[5]=c->r[28]|c->r[28]; // 80203788
  c->r[6]=c->r[29]|c->r[29]; // 8020378C
  c->lr=0x80203794u; f_801FD4A4(c); // 80203790
  c->r[0]=cntlz(c->r[3]); // 80203794
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80203798
  c->r[3]=0u-c->r[0]; // 8020379C
L_802037A0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802037A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802037A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802037A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802037AC
  c->r[28]=R32(c->r[1]+0x00000010u); // 802037B0
  c->lr=c->r[0]; // 802037B4
  c->r[1]=c->r[1]+0x00000020u; // 802037B8
  return; // 802037BC
}

// NHTTPSendRequestAsync
void f_802037C0(Ctx* __restrict c) {
  trace_call(0x802037C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802037C0
  c->r[0]=c->lr; // 802037C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802037C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802037CC
  c->r[31]=c->r[3]|c->r[3]; // 802037D0
  c->lr=0x802037D8u; f_8020453C(c); // 802037D4
  c->lr=0x802037DCu; f_802045C0(c); // 802037D8
  c->r[4]=c->r[31]|c->r[31]; // 802037DC
  c->lr=0x802037E4u; f_8020410C(c); // 802037E0
  cmps(c,0,(int32_t)c->r[3],0); // 802037E4
  c->r[31]=c->r[3]|c->r[3]; // 802037E8
  if (crb(c,2)) { goto L_80203804; } // 802037EC
  c->lr=0x802037F4u; f_80202FEC(c); // 802037F0
  cmps(c,0,(int32_t)c->r[3],0); // 802037F4
  if (!crb(c,2)) { goto L_80203804; } // 802037F8
  c->r[3]=R32(c->r[31]+0x00000018u); // 802037FC
  goto L_80203808; // 80203800
L_80203804:;
  c->r[3]=0u+0xFFFFFFFFu; // 80203804
L_80203808:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203808
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020380C
  c->lr=c->r[0]; // 80203810
  c->r[1]=c->r[1]+0x00000010u; // 80203814
  return; // 80203818
}

// fn_8020381C
void f_8020381C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020381C
  c->r[0]=c->lr; // 80203820
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203824
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80203828
  c->r[31]=c->r[3]|c->r[3]; // 8020382C
  c->lr=0x80203834u; f_8020453C(c); // 80203830
  c->r[4]=c->r[31]|c->r[31]; // 80203834
  c->lr=0x8020383Cu; f_801FE9A4(c); // 80203838
  c->r[0]=cntlz(c->r[3]); // 8020383C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203840
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80203844
  c->r[3]=0u-c->r[0]; // 80203848
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020384C
  c->lr=c->r[0]; // 80203850
  c->r[1]=c->r[1]+0x00000010u; // 80203854
  return; // 80203858
}

// fn_8020385C
void f_8020385C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020385C
  c->r[0]=c->lr; // 80203860
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203864
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80203868
  c->r[31]=c->r[4]|c->r[4]; // 8020386C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80203870
  c->r[30]=c->r[3]|c->r[3]; // 80203874
  c->lr=0x8020387Cu; f_8020453C(c); // 80203878
  c->r[4]=c->r[30]|c->r[30]; // 8020387C
  c->r[5]=c->r[31]|c->r[31]; // 80203880
  c->lr=0x80203888u; f_8020009C(c); // 80203884
  c->r[0]=cntlz(c->r[3]); // 80203888
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020388C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80203890
  c->r[30]=R32(c->r[1]+0x00000008u); // 80203894
  c->r[3]=0u-c->r[0]; // 80203898
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020389C
  c->lr=c->r[0]; // 802038A0
  c->r[1]=c->r[1]+0x00000010u; // 802038A4
  return; // 802038A8
}

// NHTTPDestroyResponse
void f_802038AC(Ctx* __restrict c) {
  trace_call(0x802038ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802038AC
  c->r[0]=c->lr; // 802038B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802038B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802038B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 802038BC
  c->r[30]=c->r[3]|c->r[3]; // 802038C0
  c->lr=0x802038C8u; f_8020453C(c); // 802038C4
  c->lr=0x802038CCu; f_802045C0(c); // 802038C8
  c->r[31]=c->r[3]|c->r[3]; // 802038CC
  c->r[4]=c->r[30]|c->r[30]; // 802038D0
  c->lr=0x802038D8u; f_80204114(c); // 802038D4
  cmps(c,0,(int32_t)c->r[3],0); // 802038D8
  c->r[30]=c->r[3]|c->r[3]; // 802038DC
  if (crb(c,2)) { goto L_80203918; } // 802038E0
  c->r[3]=c->r[31]|c->r[31]; // 802038E4
  c->r[4]=c->r[30]|c->r[30]; // 802038E8
  c->lr=0x802038F0u; f_802040D4(c); // 802038EC
  cmps(c,0,(int32_t)c->r[3],0); // 802038F0
  if (crb(c,2)) { goto L_80203904; } // 802038F4
  c->r[4]=R32(c->r[30]+0x00000014u); // 802038F8
  c->r[3]=c->r[31]|c->r[31]; // 802038FC
  c->lr=0x80203904u; f_801FEB10(c); // 80203900
L_80203904:;
  c->r[3]=c->r[31]|c->r[31]; // 80203904
  c->r[4]=c->r[30]|c->r[30]; // 80203908
  c->lr=0x80203910u; f_8020406C(c); // 8020390C
  c->r[3]=c->r[30]|c->r[30]; // 80203910
  c->lr=0x80203918u; f_801FD024(c); // 80203914
L_80203918:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203918
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020391C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80203920
  c->lr=c->r[0]; // 80203924
  c->r[1]=c->r[1]+0x00000010u; // 80203928
  return; // 8020392C
}

// fn_80203930
void f_80203930(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203930
  c->r[0]=c->lr; // 80203934
  W32(c->r[1]+0x00000024u,c->r[0]); // 80203938
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020393C
  c->r[31]=c->r[5]|c->r[5]; // 80203940
  W32(c->r[1]+0x00000018u,c->r[30]); // 80203944
  c->r[30]=c->r[4]|c->r[4]; // 80203948
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020394C
  c->r[29]=c->r[3]|c->r[3]; // 80203950
  c->lr=0x80203958u; f_8020453C(c); // 80203954
  c->lr=0x8020395Cu; f_802045C0(c); // 80203958
  c->r[4]=c->r[29]|c->r[29]; // 8020395C
  c->lr=0x80203964u; f_80204168(c); // 80203960
  cmps(c,0,(int32_t)c->r[3],0); // 80203964
  if (!crb(c,2)) { goto L_80203974; } // 80203968
  c->r[3]=0u+0xFFFFFFFFu; // 8020396C
  goto L_80203980; // 80203970
L_80203974:;
  c->r[4]=c->r[30]|c->r[30]; // 80203974
  c->r[5]=c->r[31]|c->r[31]; // 80203978
  c->lr=0x80203980u; f_801FED10(c); // 8020397C
L_80203980:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80203980
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80203984
  c->r[30]=R32(c->r[1]+0x00000018u); // 80203988
  c->r[29]=R32(c->r[1]+0x00000014u); // 8020398C
  c->lr=c->r[0]; // 80203990
  c->r[1]=c->r[1]+0x00000020u; // 80203994
  return; // 80203998
}

// NHTTPGetBodyAll
void f_8020399C(Ctx* __restrict c) {
  trace_call(0x8020399Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020399C
  c->r[0]=c->lr; // 802039A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802039A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802039A8
  c->r[31]=c->r[4]|c->r[4]; // 802039AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802039B0
  c->r[30]=c->r[3]|c->r[3]; // 802039B4
  c->lr=0x802039BCu; f_8020453C(c); // 802039B8
  c->lr=0x802039C0u; f_802045C0(c); // 802039BC
  c->r[4]=c->r[30]|c->r[30]; // 802039C0
  c->lr=0x802039C8u; f_80204114(c); // 802039C4
  cmps(c,0,(int32_t)c->r[3],0); // 802039C8
  if (crb(c,2)) { goto L_802039E8; } // 802039CC
  c->r[0]=0u+0x00000000u; // 802039D0
  c->r[4]=c->r[31]|c->r[31]; // 802039D4
  W32(c->r[1]+0x00000008u,c->r[0]); // 802039D8
  c->r[5]=c->r[1]+0x00000008u; // 802039DC
  c->lr=0x802039E4u; f_80203138(c); // 802039E0
  goto L_802039EC; // 802039E4
L_802039E8:;
  c->r[3]=0u+0xFFFFFFFFu; // 802039E8
L_802039EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802039EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802039F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 802039F4
  c->lr=c->r[0]; // 802039F8
  c->r[1]=c->r[1]+0x00000020u; // 802039FC
  return; // 80203A00
}

// NHTTPGetResultCode
void f_80203A04(Ctx* __restrict c) {
  trace_call(0x80203A04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203A04
  c->r[0]=c->lr; // 80203A08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203A0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80203A10
  c->r[31]=c->r[3]|c->r[3]; // 80203A14
  c->lr=0x80203A1Cu; f_8020453C(c); // 80203A18
  c->lr=0x80203A20u; f_802045C0(c); // 80203A1C
  c->r[4]=c->r[31]|c->r[31]; // 80203A20
  c->lr=0x80203A28u; f_80204168(c); // 80203A24
  cmps(c,0,(int32_t)c->r[3],0); // 80203A28
  if (!crb(c,2)) { goto L_80203A38; } // 80203A2C
  c->r[3]=0u+0xFFFFFFFFu; // 80203A30
  goto L_80203A50; // 80203A34
L_80203A38:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 80203A38
  cmps(c,0,(int32_t)c->r[0],0); // 80203A3C
  if (crb(c,2)) { goto L_80203A4C; } // 80203A40
  c->r[3]=R32(c->r[3]+0x00000018u); // 80203A44
  goto L_80203A50; // 80203A48
L_80203A4C:;
  c->r[3]=0u+0xFFFFFFFFu; // 80203A4C
L_80203A50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203A50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203A54
  c->lr=c->r[0]; // 80203A58
  c->r[1]=c->r[1]+0x00000010u; // 80203A5C
  return; // 80203A60
}

// fn_80203A64
void f_80203A64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203A64
  c->r[0]=c->lr; // 80203A68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203A6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80203A70
  c->r[31]=c->r[4]|c->r[4]; // 80203A74
  W32(c->r[1]+0x00000008u,c->r[30]); // 80203A78
  c->r[30]=c->r[3]|c->r[3]; // 80203A7C
  c->lr=0x80203A84u; f_8020453C(c); // 80203A80
  c->lr=0x80203A88u; f_802045C0(c); // 80203A84
  c->r[4]=c->r[30]|c->r[30]; // 80203A88
  c->lr=0x80203A90u; f_80204124(c); // 80203A8C
  cmps(c,0,(int32_t)c->r[3],0); // 80203A90
  if (!crb(c,2)) { goto L_80203AA0; } // 80203A94
  c->r[3]=0u+0xFFFFFFFFu; // 80203A98
  goto L_80203AA8; // 80203A9C
L_80203AA0:;
  W32(c->r[3]+0x000000CCu,c->r[31]); // 80203AA0
  c->r[3]=0u+0x00000000u; // 80203AA4
L_80203AA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203AA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203AAC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80203AB0
  c->lr=c->r[0]; // 80203AB4
  c->r[1]=c->r[1]+0x00000010u; // 80203AB8
  return; // 80203ABC
}

// NHTTPSetProxy
void f_80203AC0(Ctx* __restrict c) {
  trace_call(0x80203AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203AC0
  c->r[0]=c->lr; // 80203AC4
  W32(c->r[1]+0x00000074u,c->r[0]); // 80203AC8
  c->r[11]=c->r[1]+0x00000070u; // 80203ACC
  c->lr=0x80203AD4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80203AD0
  c->r[30]=0u+0x802F0000u; // 80203AD4
  c->r[31]=c->r[3]|c->r[3]; // 80203AD8
  c->r[29]=c->r[4]|c->r[4]; // 80203ADC
  c->r[28]=c->r[5]|c->r[5]; // 80203AE0
  c->r[26]=c->r[6]|c->r[6]; // 80203AE4
  c->r[27]=c->r[7]|c->r[7]; // 80203AE8
  c->r[30]=c->r[30]+0xFFFF9C00u; // 80203AEC
  c->lr=0x80203AF4u; f_8020453C(c); // 80203AF0
  c->lr=0x80203AF8u; f_802045C0(c); // 80203AF4
  c->r[4]=c->r[31]|c->r[31]; // 80203AF8
  c->lr=0x80203B00u; f_80204124(c); // 80203AFC
  cmps(c,0,(int32_t)c->r[3],0); // 80203B00
  c->r[31]=c->r[3]|c->r[3]; // 80203B04
  if (crb(c,2)) { goto L_80203B14; } // 80203B08
  cmps(c,0,(int32_t)c->r[29],0); // 80203B0C
  if (!crb(c,2)) { goto L_80203B1C; } // 80203B10
L_80203B14:;
  c->r[3]=0u+0xFFFFFFFFu; // 80203B14
  goto L_80203C18; // 80203B18
L_80203B1C:;
  c->r[3]=c->r[29]|c->r[29]; // 80203B1C
  c->lr=0x80203B24u; f_801FF70C(c); // 80203B20
  cmps(c,0,(int32_t)c->r[3],256); // 80203B24
  if (!crb(c,1)) { goto L_80203B40; } // 80203B28
  c->r[3]=c->r[30]+0x000001A0u; // 80203B2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203B30
  c->lr=0x80203B38u; f_8025A8A4(c); // 80203B34
  c->r[3]=0u+0xFFFFFFFFu; // 80203B38
  goto L_80203C18; // 80203B3C
L_80203B40:;
  c->r[5]=c->r[3]|c->r[3]; // 80203B40
  c->r[4]=c->r[29]|c->r[29]; // 80203B44
  c->r[3]=c->r[31]+0x000000E0u; // 80203B48
  c->lr=0x80203B50u; f_801FF708(c); // 80203B4C
  cmps(c,0,(int32_t)c->r[26],0); // 80203B50
  W32(c->r[31]+0x000001E0u,c->r[28]); // 80203B54
  if (crb(c,2)) { goto L_80203C0C; } // 80203B58
  cmps(c,0,(int32_t)c->r[27],0); // 80203B5C
  if (crb(c,2)) { goto L_80203C0C; } // 80203B60
  c->r[3]=c->r[26]|c->r[26]; // 80203B64
  c->lr=0x80203B6Cu; f_801FF70C(c); // 80203B68
  c->r[29]=c->r[3]|c->r[3]; // 80203B6C
  c->r[3]=c->r[27]|c->r[27]; // 80203B70
  c->lr=0x80203B78u; f_801FF70C(c); // 80203B74
  cmps(c,0,(int32_t)c->r[29],32); // 80203B78
  c->r[28]=c->r[3]|c->r[3]; // 80203B7C
  if (!crb(c,1)) { goto L_80203B98; } // 80203B80
  c->r[3]=c->r[30]+0x000001C8u; // 80203B84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203B88
  c->lr=0x80203B90u; f_8025A8A4(c); // 80203B8C
  c->r[3]=0u+0xFFFFFFFFu; // 80203B90
  goto L_80203C18; // 80203B94
L_80203B98:;
  cmps(c,0,(int32_t)c->r[3],32); // 80203B98
  if (!crb(c,1)) { goto L_80203BB4; } // 80203B9C
  c->r[3]=c->r[30]+0x000001ECu; // 80203BA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203BA4
  c->lr=0x80203BACu; f_8025A8A4(c); // 80203BA8
  c->r[3]=0u+0xFFFFFFFFu; // 80203BAC
  goto L_80203C18; // 80203BB0
L_80203BB4:;
  c->r[3]=c->r[1]+0x00000008u; // 80203BB4
  c->r[4]=0u+0x00000041u; // 80203BB8
  c->lr=0x80203BC0u; f_801FF714(c); // 80203BBC
  c->r[4]=c->r[26]|c->r[26]; // 80203BC0
  c->r[5]=c->r[29]|c->r[29]; // 80203BC4
  c->r[3]=c->r[1]+0x00000008u; // 80203BC8
  c->lr=0x80203BD0u; f_801FF708(c); // 80203BCC
  c->r[3]=c->r[1]+0x00000008u; // 80203BD0
  c->r[4]=c->r[13]+0xFFFF9514u; // 80203BD4
  c->r[3]=c->r[3]+c->r[29]; // 80203BD8
  c->r[5]=0u+0x00000001u; // 80203BDC
  c->lr=0x80203BE4u; f_801FF708(c); // 80203BE0
  c->r[3]=c->r[1]+0x00000008u; // 80203BE4
  c->r[4]=c->r[27]|c->r[27]; // 80203BE8
  c->r[3]=c->r[29]+c->r[3]; // 80203BEC
  c->r[5]=c->r[28]|c->r[28]; // 80203BF0
  c->r[3]=c->r[3]+0x00000001u; // 80203BF4
  c->lr=0x80203BFCu; f_801FF708(c); // 80203BF8
  c->r[3]=c->r[31]+0x000001E4u; // 80203BFC
  c->r[4]=c->r[1]+0x00000008u; // 80203C00
  c->lr=0x80203C08u; f_801FFEA0(c); // 80203C04
  W32(c->r[31]+0x00000240u,c->r[3]); // 80203C08
L_80203C0C:;
  c->r[0]=0u+0x00000001u; // 80203C0C
  c->r[3]=0u+0x00000000u; // 80203C10
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80203C14
L_80203C18:;
  c->r[11]=c->r[1]+0x00000070u; // 80203C18
  c->lr=0x80203C20u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80203C1C
  c->r[0]=R32(c->r[1]+0x00000074u); // 80203C20
  c->lr=c->r[0]; // 80203C24
  c->r[1]=c->r[1]+0x00000070u; // 80203C28
  return; // 80203C2C
}

// NHTTPSetProxyDefault
void f_80203C30(Ctx* __restrict c) {
  trace_call(0x80203C30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203C30
  c->r[0]=c->lr; // 80203C34
  W32(c->r[1]+0x00000024u,c->r[0]); // 80203C38
  c->r[11]=c->r[1]+0x00000020u; // 80203C3C
  c->lr=0x80203C44u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80203C40
  c->r[31]=0u+0x802F0000u; // 80203C44
  c->r[27]=c->r[3]|c->r[3]; // 80203C48
  c->r[31]=c->r[31]+0xFFFF9C00u; // 80203C4C
  c->lr=0x80203C54u; f_8020453C(c); // 80203C50
  c->r[30]=c->r[3]|c->r[3]; // 80203C54
  c->lr=0x80203C5Cu; f_802045C0(c); // 80203C58
  c->r[4]=c->r[27]|c->r[27]; // 80203C5C
  c->lr=0x80203C64u; f_80204124(c); // 80203C60
  c->r[29]=c->r[3]|c->r[3]; // 80203C64
  c->r[3]=c->r[30]|c->r[30]; // 80203C68
  c->lr=0x80203C70u; f_802045A4(c); // 80203C6C
  c->r[0]=R32(c->r[29]+0x00000008u); // 80203C70
  cmps(c,0,(int32_t)c->r[0],0); // 80203C74
  if (crb(c,2)) { goto L_80203C84; } // 80203C78
  c->r[30]=c->r[3]+0x00000170u; // 80203C7C
  goto L_80203C88; // 80203C80
L_80203C84:;
  c->r[30]=c->r[3]+0x00000028u; // 80203C84
L_80203C88:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 80203C88
  cmpu(c,0,c->r[0],0x00000001u); // 80203C8C
  if (!crb(c,2)) { goto L_80203D3C; } // 80203C90
  c->r[0]=R8(c->r[30]+0x00000001u); // 80203C94
  c->r[28]=0u+0x00000000u; // 80203C98
  c->r[27]=0u+0x00000000u; // 80203C9C
  cmpu(c,0,c->r[0],0x00000001u); // 80203CA0
  if (!crb(c,2)) { goto L_80203CB0; } // 80203CA4
  c->r[28]=c->r[30]+0x00000106u; // 80203CA8
  c->r[27]=c->r[30]+0x00000127u; // 80203CAC
L_80203CB0:;
  cmps(c,0,(int32_t)c->r[27],0); // 80203CB0
  if (crb(c,2)) { goto L_80203CC0; } // 80203CB4
  c->r[7]=c->r[27]|c->r[27]; // 80203CB8
  goto L_80203CC4; // 80203CBC
L_80203CC0:;
  c->r[7]=c->r[31]+0x00000210u; // 80203CC0
L_80203CC4:;
  cmps(c,0,(int32_t)c->r[28],0); // 80203CC4
  c->r[5]=R16(c->r[30]+0x00000104u); // 80203CC8
  c->r[3]=c->r[31]+0x0000021Cu; // 80203CCC
  c->r[4]=c->r[30]+0x00000004u; // 80203CD0
  if (crb(c,2)) { goto L_80203CE0; } // 80203CD4
  c->r[6]=c->r[28]|c->r[28]; // 80203CD8
  goto L_80203CE4; // 80203CDC
L_80203CE0:;
  c->r[6]=c->r[31]+0x00000210u; // 80203CE0
L_80203CE4:;
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203CE4
  c->lr=0x80203CECu; f_801506B4(c); // 80203CE8
  c->r[5]=R16(c->r[30]+0x00000104u); // 80203CEC
  c->r[3]=c->r[29]|c->r[29]; // 80203CF0
  c->r[6]=c->r[28]|c->r[28]; // 80203CF4
  c->r[7]=c->r[27]|c->r[27]; // 80203CF8
  c->r[4]=c->r[30]+0x00000004u; // 80203CFC
  c->lr=0x80203D04u; f_80203AC0(c); // 80203D00
  cmps(c,0,(int32_t)c->r[3],0); // 80203D04
  if (!crb(c,0)) { goto L_80203D34; } // 80203D08
  c->r[4]=c->r[3]|c->r[3]; // 80203D0C
  c->r[3]=c->r[31]+0x00000240u; // 80203D10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203D14
  c->lr=0x80203D1Cu; f_801506B4(c); // 80203D18
  c->r[3]=c->r[31]+0x0000025Cu; // 80203D1C
  c->r[5]=c->r[31]+0x00000268u; // 80203D20
  c->r[4]=0u+0x0000037Du; // 80203D24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203D28
  c->lr=0x80203D30u; f_80150744(c); // 80203D2C
  goto L_80203D3C; // 80203D30
L_80203D34:;
  c->r[3]=0u+0x00000000u; // 80203D34
  goto L_80203D40; // 80203D38
L_80203D3C:;
  c->r[3]=0u+0xFFFFFFFFu; // 80203D3C
L_80203D40:;
  c->r[11]=c->r[1]+0x00000020u; // 80203D40
  c->lr=0x80203D48u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80203D44
  c->r[0]=R32(c->r[1]+0x00000024u); // 80203D48
  c->lr=c->r[0]; // 80203D4C
  c->r[1]=c->r[1]+0x00000020u; // 80203D50
  return; // 80203D54
}

// NHTTPSetRootCADefault
void f_80203D58(Ctx* __restrict c) {
  trace_call(0x80203D58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203D58
  c->r[0]=c->lr; // 80203D5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203D60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80203D64
  c->r[31]=c->r[3]|c->r[3]; // 80203D68
  c->lr=0x80203D70u; f_8020453C(c); // 80203D6C
  c->lr=0x80203D74u; f_802045C0(c); // 80203D70
  c->r[4]=c->r[31]|c->r[31]; // 80203D74
  c->lr=0x80203D7Cu; f_80204124(c); // 80203D78
  cmps(c,0,(int32_t)c->r[3],0); // 80203D7C
  if (!crb(c,2)) { goto L_80203D8C; } // 80203D80
  c->r[4]=0u+0xFFFFFFFFu; // 80203D84
  goto L_80203DA0; // 80203D88
L_80203D8C:;
  c->r[0]=0u+0x00000000u; // 80203D8C
  c->r[4]=0u+0x00000000u; // 80203D90
  W32(c->r[3]+0x000000D8u,c->r[0]); // 80203D94
  W32(c->r[3]+0x000000C0u,c->r[0]); // 80203D98
  W32(c->r[3]+0x000000C4u,c->r[0]); // 80203D9C
L_80203DA0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203DA0
  c->r[3]=c->r[4]|c->r[4]; // 80203DA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203DA8
  c->lr=c->r[0]; // 80203DAC
  c->r[1]=c->r[1]+0x00000010u; // 80203DB0
  return; // 80203DB4
}

// NHTTPSetClientCertDefault
void f_80203DB8(Ctx* __restrict c) {
  trace_call(0x80203DB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203DB8
  c->r[0]=c->lr; // 80203DBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203DC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80203DC4
  c->r[31]=c->r[3]|c->r[3]; // 80203DC8
  c->lr=0x80203DD0u; f_8020453C(c); // 80203DCC
  c->lr=0x80203DD4u; f_802045C0(c); // 80203DD0
  c->r[4]=c->r[31]|c->r[31]; // 80203DD4
  c->lr=0x80203DDCu; f_80204124(c); // 80203DD8
  cmps(c,0,(int32_t)c->r[3],0); // 80203DDC
  if (!crb(c,2)) { goto L_80203DEC; } // 80203DE0
  c->r[5]=0u+0xFFFFFFFFu; // 80203DE4
  goto L_80203E10; // 80203DE8
L_80203DEC:;
  c->r[4]=0u+0x00000000u; // 80203DEC
  c->r[0]=0u+0x00000001u; // 80203DF0
  W32(c->r[3]+0x000000DCu,c->r[4]); // 80203DF4
  c->r[5]=0u+0x00000000u; // 80203DF8
  W32(c->r[3]+0x000000C8u,c->r[0]); // 80203DFC
  W32(c->r[3]+0x000000B0u,c->r[4]); // 80203E00
  W32(c->r[3]+0x000000B4u,c->r[4]); // 80203E04
  W32(c->r[3]+0x000000B8u,c->r[4]); // 80203E08
  W32(c->r[3]+0x000000BCu,c->r[4]); // 80203E0C
L_80203E10:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203E10
  c->r[3]=c->r[5]|c->r[5]; // 80203E14
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203E18
  c->lr=c->r[0]; // 80203E1C
  c->r[1]=c->r[1]+0x00000010u; // 80203E20
  return; // 80203E24
}

// fn_80203E28
void f_80203E28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203E28
  c->r[0]=c->lr; // 80203E2C
  c->r[4]=0u+0x804A0000u; // 80203E30
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203E34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80203E38
  c->r[31]=c->r[4]+0x00004D40u; // 80203E3C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80203E40
  c->r[30]=c->r[3]|c->r[3]; // 80203E44
  c->r[0]=R32(c->r[4]+0x00004D40u); // 80203E48
  cmps(c,0,(int32_t)c->r[0],0); // 80203E4C
  if (!crb(c,2)) { goto L_80203E6C; } // 80203E50
  c->r[3]=c->r[31]+0x00000004u; // 80203E54
  c->lr=0x80203E5Cu; f_80155694(c); // 80203E58
  c->r[3]=c->r[31]+0x0000001Cu; // 80203E5C
  c->lr=0x80203E64u; f_801558DC(c); // 80203E60
  c->r[0]=0u+0x00000001u; // 80203E64
  W32(c->r[31]+0x00000000u,c->r[0]); // 80203E68
L_80203E6C:;
  c->r[3]=c->r[31]+0x00000004u; // 80203E6C
  c->lr=0x80203E74u; f_801556CC(c); // 80203E70
  goto L_80203E84; // 80203E74
L_80203E78:;
  c->r[3]=c->r[31]+0x0000001Cu; // 80203E78
  c->r[4]=c->r[31]+0x00000004u; // 80203E7C
  c->lr=0x80203E84u; f_801558E0(c); // 80203E80
L_80203E84:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80203E84
  cmps(c,0,(int32_t)c->r[0],0); // 80203E88
  if (!crb(c,2)) { IRQCHK(c); goto L_80203E78; } // 80203E8C
  c->r[3]=c->r[31]+0x00000004u; // 80203E90
  c->lr=0x80203E98u; f_801557A8(c); // 80203E94
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203E98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203E9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80203EA0
  c->lr=c->r[0]; // 80203EA4
  c->r[1]=c->r[1]+0x00000010u; // 80203EA8
  return; // 80203EAC
}

// NHTTPi_NotifyCompletion
void f_80203EB0(Ctx* __restrict c) {
  trace_call(0x80203EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203EB0
  c->r[0]=c->lr; // 80203EB4
  c->r[4]=0u+0x804A0000u; // 80203EB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203EBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80203EC0
  c->r[31]=c->r[4]+0x00004D40u; // 80203EC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80203EC8
  c->r[30]=c->r[3]|c->r[3]; // 80203ECC
  c->r[0]=R32(c->r[4]+0x00004D40u); // 80203ED0
  cmps(c,0,(int32_t)c->r[0],0); // 80203ED4
  if (!crb(c,2)) { goto L_80203EF4; } // 80203ED8
  c->r[3]=c->r[31]+0x00000004u; // 80203EDC
  c->lr=0x80203EE4u; f_80155694(c); // 80203EE0
  c->r[3]=c->r[31]+0x0000001Cu; // 80203EE4
  c->lr=0x80203EECu; f_801558DC(c); // 80203EE8
  c->r[0]=0u+0x00000001u; // 80203EEC
  W32(c->r[31]+0x00000000u,c->r[0]); // 80203EF0
L_80203EF4:;
  c->r[3]=c->r[31]+0x00000004u; // 80203EF4
  c->lr=0x80203EFCu; f_801556CC(c); // 80203EF8
  c->r[0]=0u+0x00000000u; // 80203EFC
  c->r[3]=c->r[31]+0x0000001Cu; // 80203F00
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80203F04
  c->lr=0x80203F0Cu; f_801559BC(c); // 80203F08
  c->r[3]=c->r[31]+0x00000004u; // 80203F0C
  c->lr=0x80203F14u; f_801557A8(c); // 80203F10
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203F14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203F18
  c->r[30]=R32(c->r[1]+0x00000008u); // 80203F1C
  c->lr=c->r[0]; // 80203F20
  c->r[1]=c->r[1]+0x00000010u; // 80203F24
  return; // 80203F28
}

// NHTTPi_ControlConnectionList
void f_80203F2C(Ctx* __restrict c) {
  trace_call(0x80203F2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203F2C
  c->r[0]=c->lr; // 80203F30
  W32(c->r[1]+0x00000024u,c->r[0]); // 80203F34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80203F38
  c->r[31]=0u+0x00000000u; // 80203F3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80203F40
  c->r[30]=c->r[5]|c->r[5]; // 80203F44
  W32(c->r[1]+0x00000014u,c->r[29]); // 80203F48
  c->r[29]=c->r[4]|c->r[4]; // 80203F4C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80203F50
  c->r[28]=c->r[3]|c->r[3]; // 80203F54
  c->lr=0x80203F5Cu; f_801FD8D0(c); // 80203F58
  cmpu(c,0,c->r[30],0x00000003u); // 80203F5C
  if (!crb(c,2)) { goto L_80203F78; } // 80203F60
  c->r[0]=R32(c->r[13]+0xFFFFB110u); // 80203F64
  c->r[31]=c->r[29]|c->r[29]; // 80203F68
  W32(c->r[29]+0x00000020u,c->r[0]); // 80203F6C
  W32(c->r[13]+0xFFFFB110u,c->r[29]); // 80203F70
  goto L_80204010; // 80203F74
L_80203F78:;
  c->r[4]=c->r[13]+0xFFFFB110u; // 80203F78
  goto L_80204004; // 80203F7C
L_80203F80:;
  cmps(c,0,(int32_t)c->r[30],2); // 80203F80
  if (crb(c,2)) { goto L_80203FCC; } // 80203F84
  if (!crb(c,0)) { goto L_80203F9C; } // 80203F88
  cmps(c,0,(int32_t)c->r[30],0); // 80203F8C
  if (crb(c,2)) { goto L_80203FA8; } // 80203F90
  if (!crb(c,0)) { goto L_80203FB8; } // 80203F94
  goto L_80203FF4; // 80203F98
L_80203F9C:;
  cmps(c,0,(int32_t)c->r[30],4); // 80203F9C
  if (crb(c,2)) { goto L_80203FE0; } // 80203FA0
  goto L_80203FF4; // 80203FA4
L_80203FA8:;
  cmpu(c,0,c->r[3],c->r[29]); // 80203FA8
  if (!crb(c,2)) { goto L_80203FF4; } // 80203FAC
  c->r[31]=c->r[3]|c->r[3]; // 80203FB0
  goto L_80203FF4; // 80203FB4
L_80203FB8:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80203FB8
  cmpu(c,0,c->r[0],c->r[29]); // 80203FBC
  if (!crb(c,2)) { goto L_80203FF4; } // 80203FC0
  c->r[31]=c->r[3]|c->r[3]; // 80203FC4
  goto L_80203FF4; // 80203FC8
L_80203FCC:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 80203FCC
  cmpu(c,0,c->r[0],c->r[29]); // 80203FD0
  if (!crb(c,2)) { goto L_80203FF4; } // 80203FD4
  c->r[31]=c->r[3]|c->r[3]; // 80203FD8
  goto L_80203FF4; // 80203FDC
L_80203FE0:;
  cmpu(c,0,c->r[3],c->r[29]); // 80203FE0
  if (!crb(c,2)) { goto L_80203FF4; } // 80203FE4
  c->r[0]=R32(c->r[3]+0x00000020u); // 80203FE8
  c->r[31]=c->r[3]|c->r[3]; // 80203FEC
  W32(c->r[4]+0x00000000u,c->r[0]); // 80203FF0
L_80203FF4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80203FF4
  if (!crb(c,2)) { goto L_80204010; } // 80203FF8
  c->r[3]=R32(c->r[4]+0x00000000u); // 80203FFC
  c->r[4]=c->r[3]+0x00000020u; // 80204000
L_80204004:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 80204004
  cmps(c,0,(int32_t)c->r[3],0); // 80204008
  if (!crb(c,2)) { IRQCHK(c); goto L_80203F80; } // 8020400C
L_80204010:;
  c->r[3]=c->r[28]|c->r[28]; // 80204010
  c->lr=0x80204018u; f_801FD8D4(c); // 80204014
  c->r[3]=c->r[31]|c->r[31]; // 80204018
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020401C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80204020
  c->r[29]=R32(c->r[1]+0x00000014u); // 80204024
  c->r[28]=R32(c->r[1]+0x00000010u); // 80204028
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020402C
  c->lr=c->r[0]; // 80204030
  c->r[1]=c->r[1]+0x00000020u; // 80204034
  return; // 80204038
}

// NHTTPi_CommitConnectionList
void f_8020403C(Ctx* __restrict c) {
  trace_call(0x8020403Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020403C
  c->r[0]=c->lr; // 80204040
  c->r[5]=0u+0x00000003u; // 80204044
  W32(c->r[1]+0x00000014u,c->r[0]); // 80204048
  c->lr=0x80204050u; f_80203F2C(c); // 8020404C
  c->r[0]=0u-c->r[3]; // 80204050
  c->r[0]=~(c->r[3]|c->r[0]); // 80204054
  c->r[3]=sraw(c,c->r[0],31); // 80204058
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020405C
  c->lr=c->r[0]; // 80204060
  c->r[1]=c->r[1]+0x00000010u; // 80204064
  return; // 80204068
}

// NHTTPi_OmitConnectionList
void f_8020406C(Ctx* __restrict c) {
  trace_call(0x8020406Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020406C
  c->r[0]=c->lr; // 80204070
  c->r[5]=0u+0x00000004u; // 80204074
  W32(c->r[1]+0x00000014u,c->r[0]); // 80204078
  c->lr=0x80204080u; f_80203F2C(c); // 8020407C
  c->r[0]=0u-c->r[3]; // 80204080
  c->r[0]=~(c->r[3]|c->r[0]); // 80204084
  c->r[3]=sraw(c,c->r[0],31); // 80204088
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020408C
  c->lr=c->r[0]; // 80204090
  c->r[1]=c->r[1]+0x00000010u; // 80204094
  return; // 80204098
}

// NHTTPi_Connection2Request
void f_8020409C(Ctx* __restrict c) {
  trace_call(0x8020409Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020409C
  c->r[0]=c->lr; // 802040A0
  c->r[5]=0u+0x00000000u; // 802040A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802040A8
  c->lr=0x802040B0u; f_80203F2C(c); // 802040AC
  cmps(c,0,(int32_t)c->r[3],0); // 802040B0
  if (crb(c,2)) { goto L_802040C0; } // 802040B4
  c->r[3]=R32(c->r[3]+0x00000010u); // 802040B8
  goto L_802040C4; // 802040BC
L_802040C0:;
  c->r[3]=0u+0x00000000u; // 802040C0
L_802040C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802040C4
  c->lr=c->r[0]; // 802040C8
  c->r[1]=c->r[1]+0x00000010u; // 802040CC
  return; // 802040D0
}

// NHTTPi_Connection2Response
void f_802040D4(Ctx* __restrict c) {
  trace_call(0x802040D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802040D4
  c->r[0]=c->lr; // 802040D8
  c->r[5]=0u+0x00000000u; // 802040DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802040E0
  c->lr=0x802040E8u; f_80203F2C(c); // 802040E4
  cmps(c,0,(int32_t)c->r[3],0); // 802040E8
  if (crb(c,2)) { goto L_802040F8; } // 802040EC
  c->r[3]=R32(c->r[3]+0x00000014u); // 802040F0
  goto L_802040FC; // 802040F4
L_802040F8:;
  c->r[3]=0u+0x00000000u; // 802040F8
L_802040FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802040FC
  c->lr=c->r[0]; // 80204100
  c->r[1]=c->r[1]+0x00000010u; // 80204104
  return; // 80204108
}

// NHTTPi_Request2Connection
void f_8020410C(Ctx* __restrict c) {
  trace_call(0x8020410Cu);
  c->r[5]=0u+0x00000001u; // 8020410C
  f_80203F2C(c); return; // 80204110
}

// NHTTPi_Response2Connection
void f_80204114(Ctx* __restrict c) {
  trace_call(0x80204114u);
  c->r[5]=0u+0x00000002u; // 80204114
  f_80203F2C(c); return; // 80204118
}

// NHTTPi_GetConnection
void f_8020411C(Ctx* __restrict c) {
  trace_call(0x8020411Cu);
  c->r[5]=0u+0x00000000u; // 8020411C
  f_80203F2C(c); return; // 80204120
}

// NHTTPi_GetRequest
void f_80204124(Ctx* __restrict c) {
  trace_call(0x80204124u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204124
  c->r[0]=c->lr; // 80204128
  c->r[5]=0u+0x00000000u; // 8020412C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80204130
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80204134
  c->r[31]=c->r[4]|c->r[4]; // 80204138
  c->lr=0x80204140u; f_80203F2C(c); // 8020413C
  cmps(c,0,(int32_t)c->r[3],0); // 80204140
  if (crb(c,2)) { goto L_80204150; } // 80204144
  c->r[3]=R32(c->r[3]+0x00000010u); // 80204148
  goto L_80204154; // 8020414C
L_80204150:;
  c->r[3]=c->r[31]|c->r[31]; // 80204150
L_80204154:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80204154
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80204158
  c->lr=c->r[0]; // 8020415C
  c->r[1]=c->r[1]+0x00000010u; // 80204160
  return; // 80204164
}

// NHTTPi_GetResponse
void f_80204168(Ctx* __restrict c) {
  trace_call(0x80204168u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204168
  c->r[0]=c->lr; // 8020416C
  c->r[5]=0u+0x00000000u; // 80204170
  W32(c->r[1]+0x00000014u,c->r[0]); // 80204174
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80204178
  c->r[31]=c->r[4]|c->r[4]; // 8020417C
  c->lr=0x80204184u; f_80203F2C(c); // 80204180
  cmps(c,0,(int32_t)c->r[3],0); // 80204184
  if (crb(c,2)) { goto L_80204194; } // 80204188
  c->r[3]=R32(c->r[3]+0x00000014u); // 8020418C
  goto L_80204198; // 80204190
L_80204194:;
  c->r[3]=c->r[31]|c->r[31]; // 80204194
L_80204198:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80204198
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020419C
  c->lr=c->r[0]; // 802041A0
  c->r[1]=c->r[1]+0x00000010u; // 802041A4
  return; // 802041A8
}

// NHTTPi_GetConnectionListLength
void f_802041AC(Ctx* __restrict c) {
  trace_call(0x802041ACu);
  c->r[4]=R32(c->r[13]+0xFFFFB110u); // 802041AC
  c->r[3]=0u+0x00000000u; // 802041B0
  goto L_802041C0; // 802041B4
L_802041B8:;
  c->r[4]=R32(c->r[4]+0x00000020u); // 802041B8
  c->r[3]=c->r[3]+0x00000001u; // 802041BC
L_802041C0:;
  cmps(c,0,(int32_t)c->r[4],0); // 802041C0
  if (!crb(c,2)) { IRQCHK(c); goto L_802041B8; } // 802041C4
  return; // 802041C8
}

// NHTTPi_PostSendCallback
void f_802041CC(Ctx* __restrict c) {
  trace_call(0x802041CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802041CC
  c->r[0]=c->lr; // 802041D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 802041D4
  c->r[11]=c->r[1]+0x00000030u; // 802041D8
  c->lr=0x802041E0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802041DC
  c->r[31]=c->r[5]|c->r[5]; // 802041E0
  c->r[27]=c->r[3]|c->r[3]; // 802041E4
  c->r[28]=c->r[4]|c->r[4]; // 802041E8
  c->r[30]=c->r[6]|c->r[6]; // 802041EC
  c->r[29]=0u+0xFFFFFFFFu; // 802041F0
  c->r[5]=0u+0x00000000u; // 802041F4
  c->lr=0x802041FCu; f_80203F2C(c); // 802041F8
  cmps(c,0,(int32_t)c->r[3],0); // 802041FC
  if (crb(c,2)) { goto L_80204298; } // 80204200
  c->r[3]=c->r[27]|c->r[27]; // 80204204
  c->r[4]=c->r[28]|c->r[28]; // 80204208
  c->r[5]=0u+0x00000000u; // 8020420C
  c->lr=0x80204214u; f_80203F2C(c); // 80204210
  cmps(c,0,(int32_t)c->r[3],0); // 80204214
  if (crb(c,2)) { goto L_80204224; } // 80204218
  c->r[0]=R32(c->r[3]+0x00000014u); // 8020421C
  goto L_80204228; // 80204220
L_80204224:;
  c->r[0]=0u+0x00000000u; // 80204224
L_80204228:;
  cmps(c,0,(int32_t)c->r[0],0); // 80204228
  if (crb(c,2)) { goto L_80204298; } // 8020422C
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 80204230
  cmps(c,0,(int32_t)c->r[0],0); // 80204234
  if (crb(c,2)) { goto L_80204298; } // 80204238
  W32(c->r[1]+0x00000008u,c->r[31]); // 8020423C
  c->r[3]=c->r[28]|c->r[28]; // 80204240
  c->r[5]=c->r[1]+0x00000008u; // 80204244
  c->r[4]=0u+0x00000001u; // 80204248
  c->r[0]=R32(c->r[28]+0x00000024u); // 8020424C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80204250
  c->r[0]=R32(c->r[28]+0x00000028u); // 80204254
  W32(c->r[1]+0x00000010u,c->r[0]); // 80204258
  W32(c->r[1]+0x00000014u,c->r[30]); // 8020425C
  c->r[12]=R32(c->r[28]+0x0000001Cu); // 80204260
  c->ctr=c->r[12]; // 80204264
  if (true) { c->lr=0x8020426Cu; dispatch(c,c->ctr); } // 80204268
  c->r[30]=R32(c->r[1]+0x00000010u); // 8020426C
  c->r[29]=c->r[3]|c->r[3]; // 80204270
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80204274
  c->r[3]=c->r[27]|c->r[27]; // 80204278
  c->r[4]=c->r[28]|c->r[28]; // 8020427C
  c->r[5]=0u+0x00000000u; // 80204280
  c->lr=0x80204288u; f_80203F2C(c); // 80204284
  cmps(c,0,(int32_t)c->r[3],0); // 80204288
  if (crb(c,2)) { goto L_80204298; } // 8020428C
  W32(c->r[3]+0x00000024u,c->r[31]); // 80204290
  W32(c->r[3]+0x00000028u,c->r[30]); // 80204294
L_80204298:;
  c->r[11]=c->r[1]+0x00000030u; // 80204298
  c->r[3]=c->r[29]|c->r[29]; // 8020429C
  c->lr=0x802042A4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802042A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 802042A4
  c->lr=c->r[0]; // 802042A8
  c->r[1]=c->r[1]+0x00000030u; // 802042AC
  return; // 802042B0
}

// NHTTPi_BufferFullCallback
void f_802042B4(Ctx* __restrict c) {
  trace_call(0x802042B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802042B4
  c->r[0]=c->lr; // 802042B8
  c->r[5]=0u+0x00000000u; // 802042BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 802042C0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802042C4
  c->r[31]=c->r[4]|c->r[4]; // 802042C8
  W32(c->r[1]+0x00000028u,c->r[30]); // 802042CC
  W32(c->r[1]+0x00000024u,c->r[29]); // 802042D0
  W32(c->r[1]+0x00000020u,c->r[28]); // 802042D4
  c->r[28]=c->r[3]|c->r[3]; // 802042D8
  c->lr=0x802042E0u; f_80203F2C(c); // 802042DC
  cmps(c,0,(int32_t)c->r[3],0); // 802042E0
  if (crb(c,2)) { goto L_802043AC; } // 802042E4
  c->r[3]=c->r[28]|c->r[28]; // 802042E8
  c->r[4]=c->r[31]|c->r[31]; // 802042EC
  c->r[5]=0u+0x00000000u; // 802042F0
  c->lr=0x802042F8u; f_80203F2C(c); // 802042F4
  cmps(c,0,(int32_t)c->r[3],0); // 802042F8
  if (crb(c,2)) { goto L_80204308; } // 802042FC
  c->r[6]=R32(c->r[3]+0x00000014u); // 80204300
  goto L_8020430C; // 80204304
L_80204308:;
  c->r[6]=0u+0x00000000u; // 80204308
L_8020430C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8020430C
  if (crb(c,2)) { goto L_802043AC; } // 80204310
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80204314
  cmps(c,0,(int32_t)c->r[0],0); // 80204318
  if (crb(c,2)) { goto L_802043AC; } // 8020431C
  c->r[0]=R32(c->r[6]+0x00000028u); // 80204320
  c->r[3]=c->r[31]|c->r[31]; // 80204324
  c->r[5]=c->r[1]+0x00000008u; // 80204328
  c->r[4]=0u+0x00000002u; // 8020432C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80204330
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 80204334
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80204338
  c->r[0]=R32(c->r[6]+0x00000004u); // 8020433C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80204340
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80204344
  c->ctr=c->r[12]; // 80204348
  if (true) { c->lr=0x80204350u; dispatch(c,c->ctr); } // 8020434C
  c->r[4]=c->r[31]|c->r[31]; // 80204350
  c->r[29]=R32(c->r[1]+0x00000010u); // 80204354
  c->r[30]=R32(c->r[1]+0x0000000Cu); // 80204358
  c->r[3]=c->r[28]|c->r[28]; // 8020435C
  c->r[31]=R32(c->r[1]+0x00000008u); // 80204360
  c->r[5]=0u+0x00000000u; // 80204364
  c->lr=0x8020436Cu; f_80203F2C(c); // 80204368
  cmps(c,0,(int32_t)c->r[3],0); // 8020436C
  c->r[4]=c->r[3]|c->r[3]; // 80204370
  if (crb(c,2)) { goto L_802043AC; } // 80204374
  c->r[3]=c->r[28]|c->r[28]; // 80204378
  c->r[5]=0u+0x00000000u; // 8020437C
  c->lr=0x80204384u; f_80203F2C(c); // 80204380
  cmps(c,0,(int32_t)c->r[3],0); // 80204384
  if (crb(c,2)) { goto L_80204394; } // 80204388
  c->r[3]=R32(c->r[3]+0x00000014u); // 8020438C
  goto L_80204398; // 80204390
L_80204394:;
  c->r[3]=0u+0x00000000u; // 80204394
L_80204398:;
  cmps(c,0,(int32_t)c->r[3],0); // 80204398
  if (crb(c,2)) { goto L_802043AC; } // 8020439C
  W32(c->r[3]+0x00000028u,c->r[31]); // 802043A0
  W32(c->r[3]+0x0000001Cu,c->r[30]); // 802043A4
  W32(c->r[3]+0x00000004u,c->r[29]); // 802043A8
L_802043AC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 802043AC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802043B0
  c->r[30]=R32(c->r[1]+0x00000028u); // 802043B4
  c->r[29]=R32(c->r[1]+0x00000024u); // 802043B8
  c->r[28]=R32(c->r[1]+0x00000020u); // 802043BC
  c->lr=c->r[0]; // 802043C0
  c->r[1]=c->r[1]+0x00000030u; // 802043C4
  return; // 802043C8
}

// NHTTPi_ReceivedCallback
void f_802043CC(Ctx* __restrict c) {
  trace_call(0x802043CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802043CC
  c->r[0]=c->lr; // 802043D0
  c->r[5]=0u+0x00000000u; // 802043D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802043D8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802043DC
  c->r[31]=c->r[4]|c->r[4]; // 802043E0
  W32(c->r[1]+0x00000028u,c->r[30]); // 802043E4
  W32(c->r[1]+0x00000024u,c->r[29]); // 802043E8
  W32(c->r[1]+0x00000020u,c->r[28]); // 802043EC
  c->r[28]=c->r[3]|c->r[3]; // 802043F0
  c->lr=0x802043F8u; f_80203F2C(c); // 802043F4
  cmps(c,0,(int32_t)c->r[3],0); // 802043F8
  if (crb(c,2)) { goto L_802044C4; } // 802043FC
  c->r[3]=c->r[28]|c->r[28]; // 80204400
  c->r[4]=c->r[31]|c->r[31]; // 80204404
  c->r[5]=0u+0x00000000u; // 80204408
  c->lr=0x80204410u; f_80203F2C(c); // 8020440C
  cmps(c,0,(int32_t)c->r[3],0); // 80204410
  if (crb(c,2)) { goto L_80204420; } // 80204414
  c->r[6]=R32(c->r[3]+0x00000014u); // 80204418
  goto L_80204424; // 8020441C
L_80204420:;
  c->r[6]=0u+0x00000000u; // 80204420
L_80204424:;
  cmps(c,0,(int32_t)c->r[6],0); // 80204424
  if (crb(c,2)) { goto L_802044C4; } // 80204428
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8020442C
  cmps(c,0,(int32_t)c->r[0],0); // 80204430
  if (crb(c,2)) { goto L_802044C4; } // 80204434
  c->r[0]=R32(c->r[6]+0x00000028u); // 80204438
  c->r[3]=c->r[31]|c->r[31]; // 8020443C
  c->r[5]=c->r[1]+0x00000008u; // 80204440
  c->r[4]=0u+0x00000003u; // 80204444
  W32(c->r[1]+0x00000008u,c->r[0]); // 80204448
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 8020444C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80204450
  c->r[0]=R32(c->r[6]+0x00000004u); // 80204454
  W32(c->r[1]+0x00000010u,c->r[0]); // 80204458
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 8020445C
  c->ctr=c->r[12]; // 80204460
  if (true) { c->lr=0x80204468u; dispatch(c,c->ctr); } // 80204464
  c->r[4]=c->r[31]|c->r[31]; // 80204468
  c->r[29]=R32(c->r[1]+0x00000010u); // 8020446C
  c->r[30]=R32(c->r[1]+0x0000000Cu); // 80204470
  c->r[3]=c->r[28]|c->r[28]; // 80204474
  c->r[31]=R32(c->r[1]+0x00000008u); // 80204478
  c->r[5]=0u+0x00000000u; // 8020447C
  c->lr=0x80204484u; f_80203F2C(c); // 80204480
  cmps(c,0,(int32_t)c->r[3],0); // 80204484
  c->r[4]=c->r[3]|c->r[3]; // 80204488
  if (crb(c,2)) { goto L_802044C4; } // 8020448C
  c->r[3]=c->r[28]|c->r[28]; // 80204490
  c->r[5]=0u+0x00000000u; // 80204494
  c->lr=0x8020449Cu; f_80203F2C(c); // 80204498
  cmps(c,0,(int32_t)c->r[3],0); // 8020449C
  if (crb(c,2)) { goto L_802044AC; } // 802044A0
  c->r[3]=R32(c->r[3]+0x00000014u); // 802044A4
  goto L_802044B0; // 802044A8
L_802044AC:;
  c->r[3]=0u+0x00000000u; // 802044AC
L_802044B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802044B0
  if (crb(c,2)) { goto L_802044C4; } // 802044B4
  W32(c->r[3]+0x00000028u,c->r[31]); // 802044B8
  W32(c->r[3]+0x0000001Cu,c->r[30]); // 802044BC
  W32(c->r[3]+0x00000004u,c->r[29]); // 802044C0
L_802044C4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 802044C4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802044C8
  c->r[30]=R32(c->r[1]+0x00000028u); // 802044CC
  c->r[29]=R32(c->r[1]+0x00000024u); // 802044D0
  c->r[28]=R32(c->r[1]+0x00000020u); // 802044D4
  c->lr=c->r[0]; // 802044D8
  c->r[1]=c->r[1]+0x00000030u; // 802044DC
  return; // 802044E0
}

// NHTTPi_CompleteCallback
void f_802044E4(Ctx* __restrict c) {
  trace_call(0x802044E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802044E4
  c->r[0]=c->lr; // 802044E8
  c->r[5]=0u+0x00000000u; // 802044EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802044F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802044F4
  c->r[31]=c->r[4]|c->r[4]; // 802044F8
  c->lr=0x80204500u; f_80203F2C(c); // 802044FC
  cmps(c,0,(int32_t)c->r[3],0); // 80204500
  if (crb(c,2)) { goto L_80204528; } // 80204504
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 80204508
  cmps(c,0,(int32_t)c->r[12],0); // 8020450C
  if (crb(c,2)) { goto L_80204528; } // 80204510
  c->r[3]=c->r[31]|c->r[31]; // 80204514
  c->r[4]=0u+0x00000004u; // 80204518
  c->r[5]=0u+0x00000000u; // 8020451C
  c->ctr=c->r[12]; // 80204520
  if (true) { c->lr=0x80204528u; dispatch(c,c->ctr); } // 80204524
L_80204528:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80204528
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020452C
  c->lr=c->r[0]; // 80204530
  c->r[1]=c->r[1]+0x00000010u; // 80204534
  return; // 80204538
}

// NHTTPi_GetSystemInfoP
void f_8020453C(Ctx* __restrict c) {
  trace_call(0x8020453Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020453C
  c->r[0]=c->lr; // 80204540
  W32(c->r[1]+0x00000014u,c->r[0]); // 80204544
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80204548
  c->r[0]=R32(c->r[13]+0xFFFFB114u); // 8020454C
  cmps(c,0,(int32_t)c->r[0],0); // 80204550
  if (!crb(c,2)) { goto L_8020458C; } // 80204554
  c->r[31]=0u+0x804A0000u; // 80204558
  c->r[31]=c->r[31]+0x00004D80u; // 8020455C
  W32(c->r[13]+0xFFFFB114u,c->r[31]); // 80204560
  c->r[3]=c->r[31]|c->r[31]; // 80204564
  c->lr=0x8020456Cu; f_801FCF98(c); // 80204568
  c->r[3]=c->r[31]+0x00000800u; // 8020456C
  c->lr=0x80204574u; f_801FD630(c); // 80204570
  c->r[3]=c->r[31]+0x00000808u; // 80204574
  c->lr=0x8020457Cu; f_801FE140(c); // 80204578
  c->r[3]=c->r[31]+0x0000080Cu; // 8020457C
  c->lr=0x80204584u; f_801FD880(c); // 80204580
  c->r[3]=c->r[31]+0x00000840u; // 80204584
  c->lr=0x8020458Cu; f_8020007C(c); // 80204588
L_8020458C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020458C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80204590
  c->r[3]=R32(c->r[13]+0xFFFFB114u); // 80204594
  c->lr=c->r[0]; // 80204598
  c->r[1]=c->r[1]+0x00000010u; // 8020459C
  return; // 802045A0
}

// NHTTPi_GetBgnEndInfoP
void f_802045A4(Ctx* __restrict c) {
  trace_call(0x802045A4u);
  return; // 802045A4
}

// NHTTPi_GetListInfoP
void f_802045A8(Ctx* __restrict c) {
  trace_call(0x802045A8u);
  c->r[3]=c->r[3]+0x00000800u; // 802045A8
  return; // 802045AC
}

// NHTTPi_GetReqInfoP
void f_802045B0(Ctx* __restrict c) {
  trace_call(0x802045B0u);
  c->r[3]=c->r[3]+0x00000808u; // 802045B0
  return; // 802045B4
}

// NHTTPi_GetThreadInfoP
void f_802045B8(Ctx* __restrict c) {
  trace_call(0x802045B8u);
  c->r[3]=c->r[3]+0x00000840u; // 802045B8
  return; // 802045BC
}

// NHTTPi_GetMutexInfoP
void f_802045C0(Ctx* __restrict c) {
  trace_call(0x802045C0u);
  c->r[3]=c->r[3]+0x0000080Cu; // 802045C0
  return; // 802045C4
}

// NHTTPi_SetVirtualContentLength
void f_802045C8(Ctx* __restrict c) {
  trace_call(0x802045C8u);
  cmps(c,0,(int32_t)c->r[3],0); // 802045C8
  if (crb(c,2)) return; // 802045CC
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 802045D0
  return; // 802045D4
}

// NHTTPi_GetVirtualContentLength
void f_802045D8(Ctx* __restrict c) {
  trace_call(0x802045D8u);
  cmps(c,0,(int32_t)c->r[3],0); // 802045D8
  if (crb(c,2)) { goto L_802045E8; } // 802045DC
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 802045E0
  return; // 802045E4
L_802045E8:;
  c->r[3]=0u+0x00000000u; // 802045E8
  return; // 802045EC
}

// NHTTPi_InitConnectionList
void f_802045F0(Ctx* __restrict c) {
  trace_call(0x802045F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802045F0
  c->r[0]=c->lr; // 802045F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802045F8
  c->r[3]=R32(c->r[13]+0xFFFFB110u); // 802045FC
  cmps(c,0,(int32_t)c->r[3],0); // 80204600
  if (crb(c,2)) { goto L_80204638; } // 80204604
  c->r[4]=0u+0x00000000u; // 80204608
  goto L_80204618; // 8020460C
L_80204610:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 80204610
  c->r[4]=c->r[4]+0x00000001u; // 80204614
L_80204618:;
  cmps(c,0,(int32_t)c->r[3],0); // 80204618
  if (!crb(c,2)) { IRQCHK(c); goto L_80204610; } // 8020461C
  cmps(c,0,(int32_t)c->r[4],0); // 80204620
  if (crb(c,2)) { goto L_80204638; } // 80204624
  c->r[3]=0u+0x802F0000u; // 80204628
  c->r[3]=c->r[3]+0xFFFF9EA0u; // 8020462C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80204630
  c->lr=0x80204638u; f_8025A8A4(c); // 80204634
L_80204638:;
  c->r[0]=0u+0x00000000u; // 80204638
  W32(c->r[13]+0xFFFFB110u,c->r[0]); // 8020463C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80204640
  c->lr=c->r[0]; // 80204644
  c->r[1]=c->r[1]+0x00000010u; // 80204648
  return; // 8020464C
}

// SSLNew
void f_80204650(Ctx* __restrict c) {
  trace_call(0x80204650u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80204650
  c->r[12]=c->r[1]|c->r[1]; // 80204654
  c->r[11]=addc(c,~c->r[11],0xFFFFFE60u,1); // 80204658
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8020465C
  c->r[0]=c->lr; // 80204660
  c->r[5]=0u+0x802F0000u; // 80204664
  W32(c->r[12]+0x00000004u,c->r[0]); // 80204668
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8020466C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80204670
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 80204674
  c->r[29]=c->r[4]|c->r[4]; // 80204678
  c->r[4]=0u+0x00000000u; // 8020467C
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 80204680
  c->r[28]=c->r[3]|c->r[3]; // 80204684
  c->r[3]=c->r[5]+0xFFFF9F28u; // 80204688
  c->lr=0x80204690u; f_80186284(c); // 8020468C
  c->r[0]=R32(c->r[13]+0xFFFFB118u); // 80204690
  c->r[31]=c->r[3]|c->r[3]; // 80204694
  cmps(c,0,(int32_t)c->r[0],0); // 80204698
  if (!crb(c,2)) { goto L_802046B0; } // 8020469C
  c->r[3]=R32(c->r[13]+0xFFFF9518u); // 802046A0
  c->lr=0x802046A8u; f_8014E714(c); // 802046A4
  c->r[0]=0u+0x00000001u; // 802046A8
  W32(c->r[13]+0xFFFFB118u,c->r[0]); // 802046AC
L_802046B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 802046B0
  if (!crb(c,0)) { goto L_802046C0; } // 802046B4
  c->r[3]=0u+0xFFFFFFFFu; // 802046B8
  goto L_80204784; // 802046BC
L_802046C0:;
  c->r[3]=c->r[29]|c->r[29]; // 802046C0
  c->r[4]=0u+0x00000000u; // 802046C4
  goto L_802046D4; // 802046C8
L_802046CC:;
  c->r[4]=c->r[4]+0x00000001u; // 802046CC
  c->r[3]=c->r[3]+0x00000001u; // 802046D0
L_802046D4:;
  cmpu(c,0,c->r[4],0x00000100u); // 802046D4
  if (!crb(c,0)) { goto L_802046E8; } // 802046D8
  c->r[0]=R8(c->r[3]+0x00000000u); // 802046DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802046E0
  if (!crb(c,2)) { IRQCHK(c); goto L_802046CC; } // 802046E4
L_802046E8:;
  c->r[30]=c->r[3]-c->r[29]; cr0(c,c->r[30]); // 802046E8
  if (!crb(c,2)) { goto L_802046F8; } // 802046EC
  c->r[3]=0u+0xFFFFFFFFu; // 802046F0
  goto L_80204784; // 802046F4
L_802046F8:;
  c->r[3]=c->r[1]+0x00000080u; // 802046F8
  c->r[4]=0u+0x00000000u; // 802046FC
  c->r[5]=0u+0x00000100u; // 80204700
  c->lr=0x80204708u; f_8000443C(c); // 80204704
  cmpu(c,0,c->r[30],0x00000100u); // 80204708
  if (!crb(c,1)) { goto L_80204714; } // 8020470C
  c->r[30]=0u+0x00000100u; // 80204710
L_80204714:;
  c->r[4]=c->r[29]|c->r[29]; // 80204714
  c->r[5]=c->r[30]|c->r[30]; // 80204718
  c->r[3]=c->r[1]+0x00000080u; // 8020471C
  c->lr=0x80204724u; f_80004338(c); // 80204720
  c->r[10]=0u+0x00000020u; // 80204724
  c->r[11]=c->r[1]+0x00000040u; // 80204728
  c->r[9]=c->r[1]+0x00000020u; // 8020472C
  c->r[8]=c->r[1]+0x00000080u; // 80204730
  c->r[3]=0u+0xFFFFFFFFu; // 80204734
  c->r[0]=0u+0x00000100u; // 80204738
  W32(c->r[1]+0x00000040u,c->r[3]); // 8020473C
  c->r[3]=c->r[31]|c->r[31]; // 80204740
  c->r[7]=c->r[1]+0x00000060u; // 80204744
  c->r[4]=0u+0x00000001u; // 80204748
  W32(c->r[1]+0x00000020u,c->r[28]); // 8020474C
  c->r[5]=0u+0x00000001u; // 80204750
  c->r[6]=0u+0x00000002u; // 80204754
  W32(c->r[1]+0x00000060u,c->r[11]); // 80204758
  W32(c->r[1]+0x00000064u,c->r[10]); // 8020475C
  W32(c->r[1]+0x00000068u,c->r[9]); // 80204760
  W32(c->r[1]+0x0000006Cu,c->r[10]); // 80204764
  W32(c->r[1]+0x00000070u,c->r[8]); // 80204768
  W32(c->r[1]+0x00000074u,c->r[0]); // 8020476C
  c->lr=0x80204774u; f_80186F6C(c); // 80204770
  c->r[3]=c->r[31]|c->r[31]; // 80204774
  c->lr=0x8020477Cu; f_80186464(c); // 80204778
  c->r[3]=R32(c->r[1]+0x00000060u); // 8020477C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80204780
L_80204784:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80204784
  c->r[0]=R32(c->r[10]+0x00000004u); // 80204788
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8020478C
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80204790
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 80204794
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 80204798
  c->lr=c->r[0]; // 8020479C
  c->r[1]=c->r[10]|c->r[10]; // 802047A0
  return; // 802047A4
}

// SSLConnect
void f_802047A8(Ctx* __restrict c) {
  trace_call(0x802047A8u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 802047A8
  c->r[12]=c->r[1]|c->r[1]; // 802047AC
  c->r[11]=addc(c,~c->r[11],0xFFFFFF40u,1); // 802047B0
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 802047B4
  c->r[0]=c->lr; // 802047B8
  c->r[5]=0u+0x802F0000u; // 802047BC
  W32(c->r[12]+0x00000004u,c->r[0]); // 802047C0
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 802047C4
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 802047C8
  c->r[30]=c->r[4]|c->r[4]; // 802047CC
  c->r[4]=0u+0x00000000u; // 802047D0
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 802047D4
  c->r[29]=c->r[3]|c->r[3]; // 802047D8
  c->r[3]=c->r[5]+0xFFFF9F28u; // 802047DC
  c->lr=0x802047E4u; f_80186284(c); // 802047E0
  cmps(c,0,(int32_t)c->r[3],0); // 802047E4
  c->r[31]=c->r[3]|c->r[3]; // 802047E8
  if (!crb(c,0)) { goto L_802047F8; } // 802047EC
  c->r[3]=0u+0xFFFFFFFFu; // 802047F0
  goto L_80204850; // 802047F4
L_802047F8:;
  c->r[9]=0u+0x00000020u; // 802047F8
  c->r[10]=c->r[1]+0x00000020u; // 802047FC
  c->r[8]=c->r[1]+0x00000060u; // 80204800
  c->r[0]=c->r[1]+0x00000040u; // 80204804
  c->r[11]=0u+0xFFFFFFFFu; // 80204808
  W32(c->r[1]+0x00000060u,c->r[29]); // 8020480C
  c->r[7]=c->r[1]+0x00000080u; // 80204810
  c->r[4]=0u+0x00000002u; // 80204814
  W32(c->r[1]+0x00000040u,c->r[30]); // 80204818
  c->r[5]=0u+0x00000001u; // 8020481C
  c->r[6]=0u+0x00000002u; // 80204820
  W32(c->r[1]+0x00000020u,c->r[11]); // 80204824
  W32(c->r[1]+0x00000080u,c->r[10]); // 80204828
  W32(c->r[1]+0x00000084u,c->r[9]); // 8020482C
  W32(c->r[1]+0x00000088u,c->r[8]); // 80204830
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 80204834
  W32(c->r[1]+0x00000090u,c->r[0]); // 80204838
  W32(c->r[1]+0x00000094u,c->r[9]); // 8020483C
  c->lr=0x80204844u; f_80186F6C(c); // 80204840
  c->r[3]=c->r[31]|c->r[31]; // 80204844
  c->lr=0x8020484Cu; f_80186464(c); // 80204848
  c->r[3]=R32(c->r[1]+0x00000020u); // 8020484C
L_80204850:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80204850
  c->r[0]=R32(c->r[10]+0x00000004u); // 80204854
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80204858
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8020485C
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 80204860
  c->lr=c->r[0]; // 80204864
  c->r[1]=c->r[10]|c->r[10]; // 80204868
  return; // 8020486C
}

// SSLDoHandshake
void f_80204870(Ctx* __restrict c) {
  trace_call(0x80204870u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80204870
  c->r[12]=c->r[1]|c->r[1]; // 80204874
  c->r[11]=addc(c,~c->r[11],0xFFFFFF60u,1); // 80204878
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8020487C
  c->r[0]=c->lr; // 80204880
  c->r[4]=0u+0x802F0000u; // 80204884
  W32(c->r[12]+0x00000004u,c->r[0]); // 80204888
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8020488C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80204890
  c->r[30]=c->r[3]|c->r[3]; // 80204894
  c->r[3]=c->r[4]+0xFFFF9F28u; // 80204898
  c->r[4]=0u+0x00000000u; // 8020489C
  c->lr=0x802048A4u; f_80186284(c); // 802048A0
  cmps(c,0,(int32_t)c->r[3],0); // 802048A4
  c->r[31]=c->r[3]|c->r[3]; // 802048A8
  if (!crb(c,0)) { goto L_802048B8; } // 802048AC
  c->r[3]=0u+0xFFFFFFFFu; // 802048B0
  goto L_80204900; // 802048B4
L_802048B8:;
  c->r[8]=0u+0x00000020u; // 802048B8
  c->r[9]=c->r[1]+0x00000020u; // 802048BC
  c->r[0]=c->r[1]+0x00000040u; // 802048C0
  c->r[6]=0u+0xFFFFFFFFu; // 802048C4
  W32(c->r[1]+0x00000020u,c->r[6]); // 802048C8
  c->r[7]=c->r[1]+0x00000060u; // 802048CC
  c->r[4]=0u+0x00000003u; // 802048D0
  c->r[5]=0u+0x00000001u; // 802048D4
  W32(c->r[1]+0x00000040u,c->r[30]); // 802048D8
  c->r[6]=0u+0x00000001u; // 802048DC
  W32(c->r[1]+0x00000060u,c->r[9]); // 802048E0
  W32(c->r[1]+0x00000064u,c->r[8]); // 802048E4
  W32(c->r[1]+0x00000068u,c->r[0]); // 802048E8
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 802048EC
  c->lr=0x802048F4u; f_80186F6C(c); // 802048F0
  c->r[3]=c->r[31]|c->r[31]; // 802048F4
  c->lr=0x802048FCu; f_80186464(c); // 802048F8
  c->r[3]=R32(c->r[1]+0x00000020u); // 802048FC
L_80204900:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80204900
  c->r[0]=R32(c->r[10]+0x00000004u); // 80204904
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80204908
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8020490C
  c->lr=c->r[0]; // 80204910
  c->r[1]=c->r[10]|c->r[10]; // 80204914
  return; // 80204918
}

// SSLRead
void f_8020491C(Ctx* __restrict c) {
  trace_call(0x8020491Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8020491C
  c->r[12]=c->r[1]|c->r[1]; // 80204920
  c->r[11]=addc(c,~c->r[11],0xFFFFFE80u,1); // 80204924
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80204928
  c->r[0]=c->lr; // 8020492C
  c->r[11]=c->r[12]|c->r[12]; // 80204930
  W32(c->r[12]+0x00000004u,c->r[0]); // 80204934
  c->lr=0x8020493Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80204938
  c->r[6]=0u+0x802F0000u; // 8020493C
  c->r[28]=c->r[3]|c->r[3]; // 80204940
  c->r[29]=c->r[4]|c->r[4]; // 80204944
  c->r[30]=c->r[5]|c->r[5]; // 80204948
  c->r[3]=c->r[6]+0xFFFF9F28u; // 8020494C
  c->r[4]=0u+0x00000000u; // 80204950
  c->lr=0x80204958u; f_80186284(c); // 80204954
  cmps(c,0,(int32_t)c->r[3],0); // 80204958
  c->r[31]=c->r[3]|c->r[3]; // 8020495C
  c->r[26]=0u+0xFFFFFFFFu; // 80204960
  if (!crb(c,0)) { goto L_80204970; } // 80204964
  c->r[3]=0u+0xFFFFFFFFu; // 80204968
  goto L_80204BD0; // 8020496C
L_80204970:;
  cmpu(c,0,c->r[30],0x00008000u); // 80204970
  if (!crb(c,1)) { goto L_80204980; } // 80204974
  c->r[3]=0u+0x00010000u; // 80204978
  c->r[30]=c->r[3]+0xFFFF8000u; // 8020497C
L_80204980:;
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; cr0(c,c->r[0]); // 80204980
  if (crb(c,2)) { goto L_80204990; } // 80204984
  c->r[25]=addc(c,~c->r[0],0x00000020u,1); // 80204988
  goto L_80204994; // 8020498C
L_80204990:;
  c->r[25]=0u+0x00000000u; // 80204990
L_80204994:;
  c->r[3]=c->r[1]+0x00000140u; // 80204994
  c->r[24]=0u+0x00000000u; // 80204998
  c->r[4]=0u+0x00000000u; // 8020499C
  c->r[5]=0u+0x00000020u; // 802049A0
  c->lr=0x802049A8u; f_8000443C(c); // 802049A4
  cmps(c,0,(int32_t)c->r[25],0); // 802049A8
  if (crb(c,2)) { goto L_80204A5C; } // 802049AC
  cmpu(c,0,c->r[25],c->r[30]); // 802049B0
  if (!crb(c,1)) { goto L_802049BC; } // 802049B4
  c->r[25]=c->r[30]|c->r[30]; // 802049B8
L_802049BC:;
  c->r[8]=0u+0x00000020u; // 802049BC
  c->r[9]=c->r[1]+0x00000120u; // 802049C0
  c->r[27]=c->r[1]+0x00000140u; // 802049C4
  c->r[0]=c->r[1]+0x00000100u; // 802049C8
  c->r[4]=0u+0xFFFFFFFFu; // 802049CC
  W32(c->r[1]+0x00000100u,c->r[28]); // 802049D0
  c->r[3]=c->r[31]|c->r[31]; // 802049D4
  c->r[7]=c->r[1]+0x000000E0u; // 802049D8
  W32(c->r[1]+0x00000120u,c->r[4]); // 802049DC
  c->r[4]=0u+0x00000004u; // 802049E0
  c->r[5]=0u+0x00000002u; // 802049E4
  c->r[6]=0u+0x00000001u; // 802049E8
  W32(c->r[1]+0x000000E0u,c->r[9]); // 802049EC
  W32(c->r[1]+0x000000E4u,c->r[8]); // 802049F0
  W32(c->r[1]+0x000000E8u,c->r[27]); // 802049F4
  W32(c->r[1]+0x000000ECu,c->r[25]); // 802049F8
  W32(c->r[1]+0x000000F0u,c->r[0]); // 802049FC
  W32(c->r[1]+0x000000F4u,c->r[8]); // 80204A00
  c->lr=0x80204A08u; f_80186F6C(c); // 80204A04
  c->r[26]=R32(c->r[1]+0x00000120u); // 80204A08
  cmps(c,0,(int32_t)c->r[26],0); // 80204A0C
  if (!crb(c,1)) { goto L_80204A4C; } // 80204A10
  c->r[24]=c->r[26]|c->r[26]; // 80204A14
  c->r[3]=c->r[29]|c->r[29]; // 80204A18
  c->r[4]=c->r[27]|c->r[27]; // 80204A1C
  c->r[5]=c->r[26]|c->r[26]; // 80204A20
  c->lr=0x80204A28u; f_80004338(c); // 80204A24
  cmpu(c,0,c->r[26],c->r[25]); // 80204A28
  if (!crb(c,0)) { goto L_80204A40; } // 80204A2C
  c->r[3]=c->r[31]|c->r[31]; // 80204A30
  c->lr=0x80204A38u; f_80186464(c); // 80204A34
  c->r[3]=c->r[24]|c->r[24]; // 80204A38
  goto L_80204BD0; // 80204A3C
L_80204A40:;
  c->r[29]=c->r[29]+c->r[26]; // 80204A40
  c->r[30]=c->r[30]-c->r[26]; // 80204A44
  goto L_80204A5C; // 80204A48
L_80204A4C:;
  c->r[3]=c->r[31]|c->r[31]; // 80204A4C
  c->lr=0x80204A54u; f_80186464(c); // 80204A50
  c->r[3]=c->r[26]|c->r[26]; // 80204A54
  goto L_80204BD0; // 80204A58
L_80204A5C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80204A5C
  if (crb(c,2)) { goto L_80204B08; } // 80204A60
  c->r[25]=rotl(c->r[30],0)&0xFFFFFFE0u; cr0(c,c->r[25]); // 80204A64
  if (crb(c,2)) { goto L_80204B08; } // 80204A68
  c->r[8]=0u+0x00000020u; // 80204A6C
  c->r[9]=c->r[1]+0x000000C0u; // 80204A70
  c->r[0]=c->r[1]+0x000000A0u; // 80204A74
  c->r[5]=0u+0xFFFFFFFFu; // 80204A78
  W32(c->r[1]+0x000000C0u,c->r[5]); // 80204A7C
  c->r[3]=c->r[31]|c->r[31]; // 80204A80
  c->r[7]=c->r[1]+0x00000080u; // 80204A84
  c->r[4]=0u+0x00000004u; // 80204A88
  W32(c->r[1]+0x000000A0u,c->r[28]); // 80204A8C
  c->r[5]=0u+0x00000002u; // 80204A90
  c->r[6]=0u+0x00000001u; // 80204A94
  W32(c->r[1]+0x00000080u,c->r[9]); // 80204A98
  W32(c->r[1]+0x00000084u,c->r[8]); // 80204A9C
  W32(c->r[1]+0x00000088u,c->r[29]); // 80204AA0
  W32(c->r[1]+0x0000008Cu,c->r[25]); // 80204AA4
  W32(c->r[1]+0x00000090u,c->r[0]); // 80204AA8
  W32(c->r[1]+0x00000094u,c->r[8]); // 80204AAC
  c->lr=0x80204AB4u; f_80186F6C(c); // 80204AB0
  c->r[26]=R32(c->r[1]+0x000000C0u); // 80204AB4
  cmps(c,0,(int32_t)c->r[26],0); // 80204AB8
  if (!crb(c,1)) { goto L_80204AE8; } // 80204ABC
  cmpu(c,0,c->r[26],c->r[25]); // 80204AC0
  c->r[24]=c->r[24]+c->r[26]; // 80204AC4
  if (!crb(c,0)) { goto L_80204ADC; } // 80204AC8
  c->r[3]=c->r[31]|c->r[31]; // 80204ACC
  c->lr=0x80204AD4u; f_80186464(c); // 80204AD0
  c->r[3]=c->r[24]|c->r[24]; // 80204AD4
  goto L_80204BD0; // 80204AD8
L_80204ADC:;
  c->r[29]=c->r[29]+c->r[26]; // 80204ADC
  c->r[30]=c->r[30]-c->r[26]; // 80204AE0
  goto L_80204B08; // 80204AE4
L_80204AE8:;
  c->r[3]=c->r[31]|c->r[31]; // 80204AE8
  c->lr=0x80204AF0u; f_80186464(c); // 80204AEC
  cmps(c,0,(int32_t)c->r[24],0); // 80204AF0
  if (!crb(c,1)) { goto L_80204B00; } // 80204AF4
  c->r[3]=c->r[24]|c->r[24]; // 80204AF8
  goto L_80204BD0; // 80204AFC
L_80204B00:;
  c->r[3]=c->r[26]|c->r[26]; // 80204B00
  goto L_80204BD0; // 80204B04
L_80204B08:;
  cmps(c,0,(int32_t)c->r[30],0); // 80204B08
  if (crb(c,2)) { goto L_80204BB8; } // 80204B0C
  c->r[25]=rotl(c->r[30],0)&0x0000001Fu; cr0(c,c->r[25]); // 80204B10
  if (crb(c,2)) { goto L_80204BB8; } // 80204B14
  c->r[3]=c->r[1]+0x00000140u; // 80204B18
  c->r[4]=0u+0x00000000u; // 80204B1C
  c->r[5]=0u+0x00000020u; // 80204B20
  c->lr=0x80204B28u; f_8000443C(c); // 80204B24
  c->r[8]=0u+0x00000020u; // 80204B28
  c->r[9]=c->r[1]+0x00000060u; // 80204B2C
  c->r[30]=c->r[1]+0x00000140u; // 80204B30
  c->r[0]=c->r[1]+0x00000040u; // 80204B34
  c->r[4]=0u+0xFFFFFFFFu; // 80204B38
  W32(c->r[1]+0x00000040u,c->r[28]); // 80204B3C
  c->r[3]=c->r[31]|c->r[31]; // 80204B40
  c->r[7]=c->r[1]+0x00000020u; // 80204B44
  W32(c->r[1]+0x00000060u,c->r[4]); // 80204B48
  c->r[4]=0u+0x00000004u; // 80204B4C
  c->r[5]=0u+0x00000002u; // 80204B50
  c->r[6]=0u+0x00000001u; // 80204B54
  W32(c->r[1]+0x00000020u,c->r[9]); // 80204B58
  W32(c->r[1]+0x00000024u,c->r[8]); // 80204B5C
  W32(c->r[1]+0x00000028u,c->r[30]); // 80204B60
  W32(c->r[1]+0x0000002Cu,c->r[25]); // 80204B64
  W32(c->r[1]+0x00000030u,c->r[0]); // 80204B68
  W32(c->r[1]+0x00000034u,c->r[8]); // 80204B6C
  c->lr=0x80204B74u; f_80186F6C(c); // 80204B70
  c->r[26]=R32(c->r[1]+0x00000060u); // 80204B74
  cmps(c,0,(int32_t)c->r[26],0); // 80204B78
  if (!crb(c,1)) { goto L_80204B98; } // 80204B7C
  c->r[3]=c->r[29]|c->r[29]; // 80204B80
  c->r[4]=c->r[30]|c->r[30]; // 80204B84
  c->r[5]=c->r[26]|c->r[26]; // 80204B88
  c->r[24]=c->r[24]+c->r[26]; // 80204B8C
  c->lr=0x80204B94u; f_80004338(c); // 80204B90
  goto L_80204BB8; // 80204B94
L_80204B98:;
  c->r[3]=c->r[31]|c->r[31]; // 80204B98
  c->lr=0x80204BA0u; f_80186464(c); // 80204B9C
  cmps(c,0,(int32_t)c->r[24],0); // 80204BA0
  if (!crb(c,1)) { goto L_80204BB0; } // 80204BA4
  c->r[3]=c->r[24]|c->r[24]; // 80204BA8
  goto L_80204BD0; // 80204BAC
L_80204BB0:;
  c->r[3]=c->r[26]|c->r[26]; // 80204BB0
  goto L_80204BD0; // 80204BB4
L_80204BB8:;
  cmps(c,0,(int32_t)c->r[24],0); // 80204BB8
  if (!crb(c,1)) { goto L_80204BC4; } // 80204BBC
  c->r[26]=c->r[24]|c->r[24]; // 80204BC0
L_80204BC4:;
  c->r[3]=c->r[31]|c->r[31]; // 80204BC4
  c->lr=0x80204BCCu; f_80186464(c); // 80204BC8
  c->r[3]=c->r[26]|c->r[26]; // 80204BCC
L_80204BD0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80204BD0
  c->r[11]=c->r[10]|c->r[10]; // 80204BD4
  c->lr=0x80204BDCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80204BD8
  c->r[0]=R32(c->r[10]+0x00000004u); // 80204BDC
  c->lr=c->r[0]; // 80204BE0
  c->r[1]=c->r[10]|c->r[10]; // 80204BE4
  return; // 80204BE8
}

// SSLWrite
void f_80204BEC(Ctx* __restrict c) {
  trace_call(0x80204BECu);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80204BEC
  c->r[12]=c->r[1]|c->r[1]; // 80204BF0
  c->r[11]=addc(c,~c->r[11],0xFFFFFE80u,1); // 80204BF4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80204BF8
  c->r[0]=c->lr; // 80204BFC
  c->r[11]=c->r[12]|c->r[12]; // 80204C00
  W32(c->r[12]+0x00000004u,c->r[0]); // 80204C04
  c->lr=0x80204C0Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80204C08
  c->r[6]=0u+0x802F0000u; // 80204C0C
  c->r[28]=c->r[3]|c->r[3]; // 80204C10
  c->r[29]=c->r[4]|c->r[4]; // 80204C14
  c->r[30]=c->r[5]|c->r[5]; // 80204C18
  c->r[3]=c->r[6]+0xFFFF9F28u; // 80204C1C
  c->r[4]=0u+0x00000000u; // 80204C20
  c->lr=0x80204C28u; f_80186284(c); // 80204C24
  cmps(c,0,(int32_t)c->r[3],0); // 80204C28
  c->r[31]=c->r[3]|c->r[3]; // 80204C2C
  c->r[27]=0u+0xFFFFFFFFu; // 80204C30
  if (!crb(c,0)) { goto L_80204C40; } // 80204C34
  c->r[3]=0u+0xFFFFFFFFu; // 80204C38
  goto L_80204E90; // 80204C3C
L_80204C40:;
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; cr0(c,c->r[0]); // 80204C40
  if (crb(c,2)) { goto L_80204C50; } // 80204C44
  c->r[26]=addc(c,~c->r[0],0x00000020u,1); // 80204C48
  goto L_80204C54; // 80204C4C
L_80204C50:;
  c->r[26]=0u+0x00000000u; // 80204C50
L_80204C54:;
  c->r[3]=c->r[1]+0x00000140u; // 80204C54
  c->r[25]=0u+0x00000000u; // 80204C58
  c->r[4]=0u+0x00000000u; // 80204C5C
  c->r[5]=0u+0x00000020u; // 80204C60
  c->lr=0x80204C68u; f_8000443C(c); // 80204C64
  cmps(c,0,(int32_t)c->r[26],0); // 80204C68
  if (crb(c,2)) { goto L_80204D1C; } // 80204C6C
  cmpu(c,0,c->r[26],c->r[30]); // 80204C70
  if (!crb(c,1)) { goto L_80204C7C; } // 80204C74
  c->r[26]=c->r[30]|c->r[30]; // 80204C78
L_80204C7C:;
  c->r[4]=c->r[29]|c->r[29]; // 80204C7C
  c->r[5]=c->r[26]|c->r[26]; // 80204C80
  c->r[3]=c->r[1]+0x00000140u; // 80204C84
  c->lr=0x80204C8Cu; f_80004338(c); // 80204C88
  c->r[9]=0u+0x00000020u; // 80204C8C
  c->r[10]=c->r[1]+0x00000120u; // 80204C90
  c->r[8]=c->r[1]+0x00000100u; // 80204C94
  c->r[0]=c->r[1]+0x00000140u; // 80204C98
  c->r[4]=0u+0xFFFFFFFFu; // 80204C9C
  W32(c->r[1]+0x00000100u,c->r[28]); // 80204CA0
  c->r[3]=c->r[31]|c->r[31]; // 80204CA4
  c->r[7]=c->r[1]+0x000000E0u; // 80204CA8
  W32(c->r[1]+0x00000120u,c->r[4]); // 80204CAC
  c->r[4]=0u+0x00000005u; // 80204CB0
  c->r[5]=0u+0x00000001u; // 80204CB4
  c->r[6]=0u+0x00000002u; // 80204CB8
  W32(c->r[1]+0x000000E0u,c->r[10]); // 80204CBC
  W32(c->r[1]+0x000000E4u,c->r[9]); // 80204CC0
  W32(c->r[1]+0x000000E8u,c->r[8]); // 80204CC4
  W32(c->r[1]+0x000000ECu,c->r[9]); // 80204CC8
  W32(c->r[1]+0x000000F0u,c->r[0]); // 80204CCC
  W32(c->r[1]+0x000000F4u,c->r[26]); // 80204CD0
  c->lr=0x80204CD8u; f_80186F6C(c); // 80204CD4
  c->r[27]=R32(c->r[1]+0x00000120u); // 80204CD8
  cmps(c,0,(int32_t)c->r[27],0); // 80204CDC
  if (!crb(c,1)) { goto L_80204D0C; } // 80204CE0
  cmpu(c,0,c->r[27],c->r[26]); // 80204CE4
  c->r[25]=c->r[27]|c->r[27]; // 80204CE8
  if (!crb(c,0)) { goto L_80204D00; } // 80204CEC
  c->r[3]=c->r[31]|c->r[31]; // 80204CF0
  c->lr=0x80204CF8u; f_80186464(c); // 80204CF4
  c->r[3]=c->r[27]|c->r[27]; // 80204CF8
  goto L_80204E90; // 80204CFC
L_80204D00:;
  c->r[29]=c->r[29]+c->r[27]; // 80204D00
  c->r[30]=c->r[30]-c->r[27]; // 80204D04
  goto L_80204D1C; // 80204D08
L_80204D0C:;
  c->r[3]=c->r[31]|c->r[31]; // 80204D0C
  c->lr=0x80204D14u; f_80186464(c); // 80204D10
  c->r[3]=c->r[27]|c->r[27]; // 80204D14
  goto L_80204E90; // 80204D18
L_80204D1C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80204D1C
  if (crb(c,2)) { goto L_80204DC8; } // 80204D20
  c->r[26]=rotl(c->r[30],0)&0xFFFFFFE0u; cr0(c,c->r[26]); // 80204D24
  if (crb(c,2)) { goto L_80204DC8; } // 80204D28
  c->r[8]=0u+0x00000020u; // 80204D2C
  c->r[9]=c->r[1]+0x000000C0u; // 80204D30
  c->r[0]=c->r[1]+0x000000A0u; // 80204D34
  c->r[5]=0u+0xFFFFFFFFu; // 80204D38
  W32(c->r[1]+0x000000C0u,c->r[5]); // 80204D3C
  c->r[3]=c->r[31]|c->r[31]; // 80204D40
  c->r[7]=c->r[1]+0x00000080u; // 80204D44
  c->r[4]=0u+0x00000005u; // 80204D48
  W32(c->r[1]+0x000000A0u,c->r[28]); // 80204D4C
  c->r[5]=0u+0x00000001u; // 80204D50
  c->r[6]=0u+0x00000002u; // 80204D54
  W32(c->r[1]+0x00000080u,c->r[9]); // 80204D58
  W32(c->r[1]+0x00000084u,c->r[8]); // 80204D5C
  W32(c->r[1]+0x00000088u,c->r[0]); // 80204D60
  W32(c->r[1]+0x0000008Cu,c->r[8]); // 80204D64
  W32(c->r[1]+0x00000090u,c->r[29]); // 80204D68
  W32(c->r[1]+0x00000094u,c->r[26]); // 80204D6C
  c->lr=0x80204D74u; f_80186F6C(c); // 80204D70
  c->r[27]=R32(c->r[1]+0x000000C0u); // 80204D74
  cmps(c,0,(int32_t)c->r[27],0); // 80204D78
  if (!crb(c,1)) { goto L_80204DA8; } // 80204D7C
  cmpu(c,0,c->r[27],c->r[26]); // 80204D80
  c->r[25]=c->r[25]+c->r[27]; // 80204D84
  if (!crb(c,0)) { goto L_80204D9C; } // 80204D88
  c->r[3]=c->r[31]|c->r[31]; // 80204D8C
  c->lr=0x80204D94u; f_80186464(c); // 80204D90
  c->r[3]=c->r[25]|c->r[25]; // 80204D94
  goto L_80204E90; // 80204D98
L_80204D9C:;
  c->r[29]=c->r[29]+c->r[27]; // 80204D9C
  c->r[30]=c->r[30]-c->r[27]; // 80204DA0
  goto L_80204DC8; // 80204DA4
L_80204DA8:;
  c->r[3]=c->r[31]|c->r[31]; // 80204DA8
  c->lr=0x80204DB0u; f_80186464(c); // 80204DAC
  cmps(c,0,(int32_t)c->r[25],0); // 80204DB0
  if (!crb(c,1)) { goto L_80204DC0; } // 80204DB4
  c->r[3]=c->r[25]|c->r[25]; // 80204DB8
  goto L_80204E90; // 80204DBC
L_80204DC0:;
  c->r[3]=c->r[27]|c->r[27]; // 80204DC0
  goto L_80204E90; // 80204DC4
L_80204DC8:;
  cmps(c,0,(int32_t)c->r[30],0); // 80204DC8
  if (crb(c,2)) { goto L_80204E78; } // 80204DCC
  c->r[26]=rotl(c->r[30],0)&0x0000001Fu; cr0(c,c->r[26]); // 80204DD0
  if (crb(c,2)) { goto L_80204E78; } // 80204DD4
  c->r[3]=c->r[1]+0x00000140u; // 80204DD8
  c->r[4]=0u+0x00000000u; // 80204DDC
  c->r[5]=0u+0x00000020u; // 80204DE0
  c->lr=0x80204DE8u; f_8000443C(c); // 80204DE4
  c->r[4]=c->r[29]|c->r[29]; // 80204DE8
  c->r[5]=c->r[26]|c->r[26]; // 80204DEC
  c->r[3]=c->r[1]+0x00000140u; // 80204DF0
  c->lr=0x80204DF8u; f_80004338(c); // 80204DF4
  c->r[9]=0u+0x00000020u; // 80204DF8
  c->r[10]=c->r[1]+0x00000060u; // 80204DFC
  c->r[8]=c->r[1]+0x00000040u; // 80204E00
  c->r[0]=c->r[1]+0x00000140u; // 80204E04
  c->r[4]=0u+0xFFFFFFFFu; // 80204E08
  W32(c->r[1]+0x00000040u,c->r[28]); // 80204E0C
  c->r[3]=c->r[31]|c->r[31]; // 80204E10
  c->r[7]=c->r[1]+0x00000020u; // 80204E14
  W32(c->r[1]+0x00000060u,c->r[4]); // 80204E18
  c->r[4]=0u+0x00000005u; // 80204E1C
  c->r[5]=0u+0x00000001u; // 80204E20
  c->r[6]=0u+0x00000002u; // 80204E24
  W32(c->r[1]+0x00000020u,c->r[10]); // 80204E28
  W32(c->r[1]+0x00000024u,c->r[9]); // 80204E2C
  W32(c->r[1]+0x00000028u,c->r[8]); // 80204E30
  W32(c->r[1]+0x0000002Cu,c->r[9]); // 80204E34
  W32(c->r[1]+0x00000030u,c->r[0]); // 80204E38
  W32(c->r[1]+0x00000034u,c->r[26]); // 80204E3C
  c->lr=0x80204E44u; f_80186F6C(c); // 80204E40
  c->r[27]=R32(c->r[1]+0x00000060u); // 80204E44
  cmps(c,0,(int32_t)c->r[27],0); // 80204E48
  if (!crb(c,1)) { goto L_80204E58; } // 80204E4C
  c->r[25]=c->r[25]+c->r[27]; // 80204E50
  goto L_80204E78; // 80204E54
L_80204E58:;
  c->r[3]=c->r[31]|c->r[31]; // 80204E58
  c->lr=0x80204E60u; f_80186464(c); // 80204E5C
  cmps(c,0,(int32_t)c->r[25],0); // 80204E60
  if (!crb(c,1)) { goto L_80204E70; } // 80204E64
  c->r[3]=c->r[25]|c->r[25]; // 80204E68
  goto L_80204E90; // 80204E6C
L_80204E70:;
  c->r[3]=c->r[27]|c->r[27]; // 80204E70
  goto L_80204E90; // 80204E74
L_80204E78:;
  cmps(c,0,(int32_t)c->r[25],0); // 80204E78
  if (!crb(c,1)) { goto L_80204E84; } // 80204E7C
  c->r[27]=c->r[25]|c->r[25]; // 80204E80
L_80204E84:;
  c->r[3]=c->r[31]|c->r[31]; // 80204E84
  c->lr=0x80204E8Cu; f_80186464(c); // 80204E88
  c->r[3]=c->r[27]|c->r[27]; // 80204E8C
L_80204E90:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80204E90
  c->r[11]=c->r[10]|c->r[10]; // 80204E94
  c->lr=0x80204E9Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80204E98
  c->r[0]=R32(c->r[10]+0x00000004u); // 80204E9C
  c->lr=c->r[0]; // 80204EA0
  c->r[1]=c->r[10]|c->r[10]; // 80204EA4
  return; // 80204EA8
}

// SSLShutdown
void f_80204EAC(Ctx* __restrict c) {
  trace_call(0x80204EACu);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80204EAC
  c->r[12]=c->r[1]|c->r[1]; // 80204EB0
  c->r[11]=addc(c,~c->r[11],0xFFFFFF60u,1); // 80204EB4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80204EB8
  c->r[0]=c->lr; // 80204EBC
  c->r[4]=0u+0x802F0000u; // 80204EC0
  W32(c->r[12]+0x00000004u,c->r[0]); // 80204EC4
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80204EC8
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80204ECC
  c->r[30]=c->r[3]|c->r[3]; // 80204ED0
  c->r[3]=c->r[4]+0xFFFF9F28u; // 80204ED4
  c->r[4]=0u+0x00000000u; // 80204ED8
  c->lr=0x80204EE0u; f_80186284(c); // 80204EDC
  cmps(c,0,(int32_t)c->r[3],0); // 80204EE0
  c->r[31]=c->r[3]|c->r[3]; // 80204EE4
  if (!crb(c,0)) { goto L_80204EF4; } // 80204EE8
  c->r[3]=0u+0xFFFFFFFFu; // 80204EEC
  goto L_80204F3C; // 80204EF0
L_80204EF4:;
  c->r[8]=0u+0x00000020u; // 80204EF4
  c->r[9]=c->r[1]+0x00000020u; // 80204EF8
  c->r[0]=c->r[1]+0x00000040u; // 80204EFC
  c->r[6]=0u+0xFFFFFFFFu; // 80204F00
  W32(c->r[1]+0x00000020u,c->r[6]); // 80204F04
  c->r[7]=c->r[1]+0x00000060u; // 80204F08
  c->r[4]=0u+0x00000006u; // 80204F0C
  c->r[5]=0u+0x00000001u; // 80204F10
  W32(c->r[1]+0x00000040u,c->r[30]); // 80204F14
  c->r[6]=0u+0x00000001u; // 80204F18
  W32(c->r[1]+0x00000060u,c->r[9]); // 80204F1C
  W32(c->r[1]+0x00000064u,c->r[8]); // 80204F20
  W32(c->r[1]+0x00000068u,c->r[0]); // 80204F24
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 80204F28
  c->lr=0x80204F30u; f_80186F6C(c); // 80204F2C
  c->r[3]=c->r[31]|c->r[31]; // 80204F30
  c->lr=0x80204F38u; f_80186464(c); // 80204F34
  c->r[3]=R32(c->r[1]+0x00000020u); // 80204F38
L_80204F3C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80204F3C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80204F40
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80204F44
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80204F48
  c->lr=c->r[0]; // 80204F4C
  c->r[1]=c->r[10]|c->r[10]; // 80204F50
  return; // 80204F54
}

// SSLSetClientCert
void f_80204F58(Ctx* __restrict c) {
  trace_call(0x80204F58u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80204F58
  c->r[12]=c->r[1]|c->r[1]; // 80204F5C
  c->r[11]=addc(c,~c->r[11],0xFFFFFF60u,1); // 80204F60
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80204F64
  c->r[0]=c->lr; // 80204F68
  c->r[11]=c->r[12]|c->r[12]; // 80204F6C
  W32(c->r[12]+0x00000004u,c->r[0]); // 80204F70
  c->lr=0x80204F78u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80204F74
  c->r[31]=0u+0x804A0000u; // 80204F78
  c->r[8]=0u+0x802F0000u; // 80204F7C
  c->r[24]=c->r[3]|c->r[3]; // 80204F80
  c->r[25]=c->r[4]|c->r[4]; // 80204F84
  c->r[26]=c->r[5]|c->r[5]; // 80204F88
  c->r[27]=c->r[6]|c->r[6]; // 80204F8C
  c->r[28]=c->r[7]|c->r[7]; // 80204F90
  c->r[31]=c->r[31]+0x00005A20u; // 80204F94
  c->r[3]=c->r[8]+0xFFFF9F28u; // 80204F98
  c->r[4]=0u+0x00000000u; // 80204F9C
  c->lr=0x80204FA4u; f_80186284(c); // 80204FA0
  cmps(c,0,(int32_t)c->r[3],0); // 80204FA4
  c->r[29]=c->r[3]|c->r[3]; // 80204FA8
  if (!crb(c,0)) { goto L_80204FB8; } // 80204FAC
  c->r[3]=0u+0xFFFFFFFFu; // 80204FB0
  goto L_802050A8; // 80204FB4
L_80204FB8:;
  c->lr=0x80204FBCu; f_80154410(c); // 80204FB8
  c->r[0]=R32(c->r[13]+0xFFFFB11Cu); // 80204FBC
  c->r[30]=c->r[3]|c->r[3]; // 80204FC0
  cmps(c,0,(int32_t)c->r[0],0); // 80204FC4
  if (!crb(c,2)) { goto L_8020500C; } // 80204FC8
  c->r[3]=c->r[31]+0x00000000u; // 80204FCC
  c->lr=0x80204FD4u; f_8020539C(c); // 80204FD0
  c->r[3]=c->r[31]+0x00000020u; // 80204FD4
  c->r[4]=0u+0x00000000u; // 80204FD8
  c->r[5]=0u+0x00001000u; // 80204FDC
  c->lr=0x80204FE4u; f_8000443C(c); // 80204FE0
  c->r[3]=c->r[31]+0x00001020u; // 80204FE4
  c->r[4]=0u+0x00000000u; // 80204FE8
  c->r[5]=0u+0x00001000u; // 80204FEC
  c->lr=0x80204FF4u; f_8000443C(c); // 80204FF0
  c->r[3]=c->r[31]+0x00002020u; // 80204FF4
  c->r[4]=0u+0x00000000u; // 80204FF8
  c->r[5]=0u+0x00001000u; // 80204FFC
  c->lr=0x80205004u; f_8000443C(c); // 80205000
  c->r[0]=0u+0x00000001u; // 80205004
  W32(c->r[13]+0xFFFFB11Cu,c->r[0]); // 80205008
L_8020500C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020500C
  c->lr=0x80205014u; f_80154438(c); // 80205010
  c->r[3]=c->r[31]+0x00000000u; // 80205014
  c->lr=0x8020501Cu; f_802053A0(c); // 80205018
  c->r[4]=c->r[25]|c->r[25]; // 8020501C
  c->r[5]=c->r[26]|c->r[26]; // 80205020
  c->r[3]=c->r[31]+0x00000020u; // 80205024
  c->lr=0x8020502Cu; f_80004338(c); // 80205028
  c->r[4]=c->r[27]|c->r[27]; // 8020502C
  c->r[5]=c->r[28]|c->r[28]; // 80205030
  c->r[3]=c->r[31]+0x00001020u; // 80205034
  c->lr=0x8020503Cu; f_80004338(c); // 80205038
  c->r[10]=0u+0x00000020u; // 8020503C
  c->r[11]=c->r[1]+0x00000040u; // 80205040
  c->r[9]=c->r[1]+0x00000020u; // 80205044
  c->r[8]=c->r[31]+0x00000020u; // 80205048
  c->r[0]=c->r[31]+0x00001020u; // 8020504C
  c->r[3]=0u+0xFFFFFFFFu; // 80205050
  W32(c->r[1]+0x00000040u,c->r[3]); // 80205054
  c->r[3]=c->r[29]|c->r[29]; // 80205058
  c->r[7]=c->r[1]+0x00000060u; // 8020505C
  c->r[4]=0u+0x00000007u; // 80205060
  W32(c->r[1]+0x00000020u,c->r[24]); // 80205064
  c->r[5]=0u+0x00000001u; // 80205068
  c->r[6]=0u+0x00000003u; // 8020506C
  W32(c->r[1]+0x00000060u,c->r[11]); // 80205070
  W32(c->r[1]+0x00000064u,c->r[10]); // 80205074
  W32(c->r[1]+0x00000068u,c->r[9]); // 80205078
  W32(c->r[1]+0x0000006Cu,c->r[10]); // 8020507C
  W32(c->r[1]+0x00000070u,c->r[8]); // 80205080
  W32(c->r[1]+0x00000074u,c->r[26]); // 80205084
  W32(c->r[1]+0x00000078u,c->r[0]); // 80205088
  W32(c->r[1]+0x0000007Cu,c->r[28]); // 8020508C
  c->lr=0x80205094u; f_80186F6C(c); // 80205090
  c->r[3]=c->r[31]+0x00000000u; // 80205094
  c->lr=0x8020509Cu; f_802053A4(c); // 80205098
  c->r[3]=c->r[29]|c->r[29]; // 8020509C
  c->lr=0x802050A4u; f_80186464(c); // 802050A0
  c->r[3]=R32(c->r[1]+0x00000040u); // 802050A4
L_802050A8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 802050A8
  c->r[11]=c->r[10]|c->r[10]; // 802050AC
  c->lr=0x802050B4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802050B0
  c->r[0]=R32(c->r[10]+0x00000004u); // 802050B4
  c->lr=c->r[0]; // 802050B8
  c->r[1]=c->r[10]|c->r[10]; // 802050BC
  return; // 802050C0
}

// SSLSetRootCA
void f_802050C4(Ctx* __restrict c) {
  trace_call(0x802050C4u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 802050C4
  c->r[12]=c->r[1]|c->r[1]; // 802050C8
  c->r[11]=addc(c,~c->r[11],0xFFFFFF60u,1); // 802050CC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 802050D0
  c->r[0]=c->lr; // 802050D4
  c->r[11]=c->r[12]|c->r[12]; // 802050D8
  W32(c->r[12]+0x00000004u,c->r[0]); // 802050DC
  c->lr=0x802050E4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802050E0
  c->r[31]=0u+0x804A0000u; // 802050E4
  c->r[6]=0u+0x802F0000u; // 802050E8
  c->r[26]=c->r[3]|c->r[3]; // 802050EC
  c->r[27]=c->r[4]|c->r[4]; // 802050F0
  c->r[28]=c->r[5]|c->r[5]; // 802050F4
  c->r[31]=c->r[31]+0x00005A20u; // 802050F8
  c->r[3]=c->r[6]+0xFFFF9F28u; // 802050FC
  c->r[4]=0u+0x00000000u; // 80205100
  c->lr=0x80205108u; f_80186284(c); // 80205104
  cmps(c,0,(int32_t)c->r[3],0); // 80205108
  c->r[29]=c->r[3]|c->r[3]; // 8020510C
  if (!crb(c,0)) { goto L_8020511C; } // 80205110
  c->r[3]=0u+0xFFFFFFFFu; // 80205114
  goto L_802051F0; // 80205118
L_8020511C:;
  c->lr=0x80205120u; f_80154410(c); // 8020511C
  c->r[0]=R32(c->r[13]+0xFFFFB11Cu); // 80205120
  c->r[30]=c->r[3]|c->r[3]; // 80205124
  cmps(c,0,(int32_t)c->r[0],0); // 80205128
  if (!crb(c,2)) { goto L_80205170; } // 8020512C
  c->r[3]=c->r[31]+0x00000000u; // 80205130
  c->lr=0x80205138u; f_8020539C(c); // 80205134
  c->r[3]=c->r[31]+0x00000020u; // 80205138
  c->r[4]=0u+0x00000000u; // 8020513C
  c->r[5]=0u+0x00001000u; // 80205140
  c->lr=0x80205148u; f_8000443C(c); // 80205144
  c->r[3]=c->r[31]+0x00001020u; // 80205148
  c->r[4]=0u+0x00000000u; // 8020514C
  c->r[5]=0u+0x00001000u; // 80205150
  c->lr=0x80205158u; f_8000443C(c); // 80205154
  c->r[3]=c->r[31]+0x00002020u; // 80205158
  c->r[4]=0u+0x00000000u; // 8020515C
  c->r[5]=0u+0x00001000u; // 80205160
  c->lr=0x80205168u; f_8000443C(c); // 80205164
  c->r[0]=0u+0x00000001u; // 80205168
  W32(c->r[13]+0xFFFFB11Cu,c->r[0]); // 8020516C
L_80205170:;
  c->r[3]=c->r[30]|c->r[30]; // 80205170
  c->lr=0x80205178u; f_80154438(c); // 80205174
  c->r[3]=c->r[31]+0x00000000u; // 80205178
  c->lr=0x80205180u; f_802053A0(c); // 8020517C
  c->r[4]=c->r[27]|c->r[27]; // 80205180
  c->r[5]=c->r[28]|c->r[28]; // 80205184
  c->r[3]=c->r[31]+0x00002020u; // 80205188
  c->lr=0x80205190u; f_80004338(c); // 8020518C
  c->r[9]=0u+0x00000020u; // 80205190
  c->r[10]=c->r[1]+0x00000040u; // 80205194
  c->r[8]=c->r[1]+0x00000020u; // 80205198
  c->r[0]=c->r[31]+0x00002020u; // 8020519C
  c->r[4]=0u+0xFFFFFFFFu; // 802051A0
  W32(c->r[1]+0x00000020u,c->r[26]); // 802051A4
  c->r[3]=c->r[29]|c->r[29]; // 802051A8
  c->r[7]=c->r[1]+0x00000060u; // 802051AC
  W32(c->r[1]+0x00000040u,c->r[4]); // 802051B0
  c->r[4]=0u+0x0000000Au; // 802051B4
  c->r[5]=0u+0x00000001u; // 802051B8
  c->r[6]=0u+0x00000002u; // 802051BC
  W32(c->r[1]+0x00000060u,c->r[10]); // 802051C0
  W32(c->r[1]+0x00000064u,c->r[9]); // 802051C4
  W32(c->r[1]+0x00000068u,c->r[8]); // 802051C8
  W32(c->r[1]+0x0000006Cu,c->r[9]); // 802051CC
  W32(c->r[1]+0x00000070u,c->r[0]); // 802051D0
  W32(c->r[1]+0x00000074u,c->r[28]); // 802051D4
  c->lr=0x802051DCu; f_80186F6C(c); // 802051D8
  c->r[3]=c->r[31]+0x00000000u; // 802051DC
  c->lr=0x802051E4u; f_802053A4(c); // 802051E0
  c->r[3]=c->r[29]|c->r[29]; // 802051E4
  c->lr=0x802051ECu; f_80186464(c); // 802051E8
  c->r[3]=R32(c->r[1]+0x00000040u); // 802051EC
L_802051F0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 802051F0
  c->r[11]=c->r[10]|c->r[10]; // 802051F4
  c->lr=0x802051FCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802051F8
  c->r[0]=R32(c->r[10]+0x00000004u); // 802051FC
  c->lr=c->r[0]; // 80205200
  c->r[1]=c->r[10]|c->r[10]; // 80205204
  return; // 80205208
}

// SSLSetBuiltinRootCA
void f_8020520C(Ctx* __restrict c) {
  trace_call(0x8020520Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8020520C
  c->r[12]=c->r[1]|c->r[1]; // 80205210
  c->r[11]=addc(c,~c->r[11],0xFFFFFF40u,1); // 80205214
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80205218
  c->r[0]=c->lr; // 8020521C
  c->r[5]=0u+0x802F0000u; // 80205220
  W32(c->r[12]+0x00000004u,c->r[0]); // 80205224
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80205228
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8020522C
  c->r[30]=c->r[4]|c->r[4]; // 80205230
  c->r[4]=0u+0x00000000u; // 80205234
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 80205238
  c->r[29]=c->r[3]|c->r[3]; // 8020523C
  c->r[3]=c->r[5]+0xFFFF9F28u; // 80205240
  c->lr=0x80205248u; f_80186284(c); // 80205244
  cmps(c,0,(int32_t)c->r[3],0); // 80205248
  c->r[31]=c->r[3]|c->r[3]; // 8020524C
  if (!crb(c,0)) { goto L_8020525C; } // 80205250
  c->r[3]=0u+0xFFFFFFFFu; // 80205254
  goto L_802052B4; // 80205258
L_8020525C:;
  c->r[9]=0u+0x00000020u; // 8020525C
  c->r[10]=c->r[1]+0x00000060u; // 80205260
  c->r[8]=c->r[1]+0x00000040u; // 80205264
  c->r[0]=c->r[1]+0x00000020u; // 80205268
  c->r[5]=0u+0xFFFFFFFFu; // 8020526C
  W32(c->r[1]+0x00000040u,c->r[29]); // 80205270
  c->r[7]=c->r[1]+0x00000080u; // 80205274
  c->r[4]=0u+0x0000000Du; // 80205278
  W32(c->r[1]+0x00000060u,c->r[5]); // 8020527C
  c->r[5]=0u+0x00000001u; // 80205280
  c->r[6]=0u+0x00000002u; // 80205284
  W32(c->r[1]+0x00000020u,c->r[30]); // 80205288
  W32(c->r[1]+0x00000080u,c->r[10]); // 8020528C
  W32(c->r[1]+0x00000084u,c->r[9]); // 80205290
  W32(c->r[1]+0x00000088u,c->r[8]); // 80205294
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 80205298
  W32(c->r[1]+0x00000090u,c->r[0]); // 8020529C
  W32(c->r[1]+0x00000094u,c->r[9]); // 802052A0
  c->lr=0x802052A8u; f_80186F6C(c); // 802052A4
  c->r[3]=c->r[31]|c->r[31]; // 802052A8
  c->lr=0x802052B0u; f_80186464(c); // 802052AC
  c->r[3]=R32(c->r[1]+0x00000060u); // 802052B0
L_802052B4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 802052B4
  c->r[0]=R32(c->r[10]+0x00000004u); // 802052B8
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 802052BC
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 802052C0
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 802052C4
  c->lr=c->r[0]; // 802052C8
  c->r[1]=c->r[10]|c->r[10]; // 802052CC
  return; // 802052D0
}

// SSLSetBuiltinClientCert
void f_802052D4(Ctx* __restrict c) {
  trace_call(0x802052D4u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 802052D4
  c->r[12]=c->r[1]|c->r[1]; // 802052D8
  c->r[11]=addc(c,~c->r[11],0xFFFFFF40u,1); // 802052DC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 802052E0
  c->r[0]=c->lr; // 802052E4
  c->r[5]=0u+0x802F0000u; // 802052E8
  W32(c->r[12]+0x00000004u,c->r[0]); // 802052EC
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 802052F0
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 802052F4
  c->r[30]=c->r[4]|c->r[4]; // 802052F8
  c->r[4]=0u+0x00000000u; // 802052FC
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 80205300
  c->r[29]=c->r[3]|c->r[3]; // 80205304
  c->r[3]=c->r[5]+0xFFFF9F28u; // 80205308
  c->lr=0x80205310u; f_80186284(c); // 8020530C
  cmps(c,0,(int32_t)c->r[3],0); // 80205310
  c->r[31]=c->r[3]|c->r[3]; // 80205314
  if (!crb(c,0)) { goto L_80205324; } // 80205318
  c->r[3]=0u+0xFFFFFFFFu; // 8020531C
  goto L_8020537C; // 80205320
L_80205324:;
  c->r[9]=0u+0x00000020u; // 80205324
  c->r[10]=c->r[1]+0x00000060u; // 80205328
  c->r[8]=c->r[1]+0x00000040u; // 8020532C
  c->r[0]=c->r[1]+0x00000020u; // 80205330
  c->r[5]=0u+0xFFFFFFFFu; // 80205334
  W32(c->r[1]+0x00000040u,c->r[29]); // 80205338
  c->r[7]=c->r[1]+0x00000080u; // 8020533C
  c->r[4]=0u+0x0000000Eu; // 80205340
  W32(c->r[1]+0x00000060u,c->r[5]); // 80205344
  c->r[5]=0u+0x00000001u; // 80205348
  c->r[6]=0u+0x00000002u; // 8020534C
  W32(c->r[1]+0x00000020u,c->r[30]); // 80205350
  W32(c->r[1]+0x00000080u,c->r[10]); // 80205354
  W32(c->r[1]+0x00000084u,c->r[9]); // 80205358
  W32(c->r[1]+0x00000088u,c->r[8]); // 8020535C
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 80205360
  W32(c->r[1]+0x00000090u,c->r[0]); // 80205364
  W32(c->r[1]+0x00000094u,c->r[9]); // 80205368
  c->lr=0x80205370u; f_80186F6C(c); // 8020536C
  c->r[3]=c->r[31]|c->r[31]; // 80205370
  c->lr=0x80205378u; f_80186464(c); // 80205374
  c->r[3]=R32(c->r[1]+0x00000060u); // 80205378
L_8020537C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8020537C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80205380
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80205384
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80205388
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 8020538C
  c->lr=c->r[0]; // 80205390
  c->r[1]=c->r[10]|c->r[10]; // 80205394
  return; // 80205398
}

// fn_8020539C
void f_8020539C(Ctx* __restrict c) {
  f_80155694(c); return; // 8020539C
}

// fn_802053A0
void f_802053A0(Ctx* __restrict c) {
  f_801556CC(c); return; // 802053A0
}

// fn_802053A4
void f_802053A4(Ctx* __restrict c) {
  f_801557A8(c); return; // 802053A4
}

// fn_802053A8
void f_802053A8(Ctx* __restrict c) {
  c->r[9]=c->r[3]|c->r[3]; // 802053A8
  goto L_802053BC; // 802053AC
L_802053B0:;
  W8(c->r[9]+0x00000000u,c->r[4]); // 802053B0
  c->r[9]=c->r[9]+0x00000001u; // 802053B4
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 802053B8
L_802053BC:;
  c->r[0]=rotl(c->r[9],0)&0x00000003u; cr0(c,c->r[0]); // 802053BC
  if (crb(c,2)) { goto L_802053CC; } // 802053C0
  cmps(c,0,(int32_t)c->r[5],0); // 802053C4
  if (!crb(c,2)) { IRQCHK(c); goto L_802053B0; } // 802053C8
L_802053CC:;
  c->r[7]=rotl(c->r[4],8)&0xFFFFFF00u; // 802053CC
  cmpu(c,0,c->r[5],0x00000003u); // 802053D0
  c->r[8]=c->r[4]|c->r[7]; // 802053D4
  c->r[6]=rotl(c->r[4],24)&0xFF000000u; // 802053D8
  c->r[0]=rotl(c->r[4],16)&0xFFFF0000u; // 802053DC
  c->r[7]=rotl(c->r[5],30)&0x3FFFFFFFu; // 802053E0
  c->r[0]=c->r[6]|c->r[0]; // 802053E4
  c->r[8]=c->r[8]|c->r[0]; // 802053E8
  if (!crb(c,1)) { goto L_80205448; } // 802053EC
  c->r[6]=rotl(c->r[7],29)&0x1FFFFFFFu; cr0(c,c->r[6]); // 802053F0
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 802053F4
  c->r[0]=0u-c->r[0]; // 802053F8
  c->ctr=c->r[6]; // 802053FC
  if (crb(c,2)) { goto L_80205434; } // 80205400
L_80205404:;
  W32(c->r[9]+0x00000000u,c->r[8]); // 80205404
  W32(c->r[9]+0x00000004u,c->r[8]); // 80205408
  W32(c->r[9]+0x00000008u,c->r[8]); // 8020540C
  W32(c->r[9]+0x0000000Cu,c->r[8]); // 80205410
  W32(c->r[9]+0x00000010u,c->r[8]); // 80205414
  W32(c->r[9]+0x00000014u,c->r[8]); // 80205418
  W32(c->r[9]+0x00000018u,c->r[8]); // 8020541C
  W32(c->r[9]+0x0000001Cu,c->r[8]); // 80205420
  c->r[9]=c->r[9]+0x00000020u; // 80205424
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80205404; } // 80205428
  c->r[7]=c->r[7]&0x00000007u; cr0(c,c->r[7]); // 8020542C
  if (crb(c,2)) { goto L_80205444; } // 80205430
L_80205434:;
  c->ctr=c->r[7]; // 80205434
L_80205438:;
  W32(c->r[9]+0x00000000u,c->r[8]); // 80205438
  c->r[9]=c->r[9]+0x00000004u; // 8020543C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80205438; } // 80205440
L_80205444:;
  c->r[5]=c->r[5]+c->r[0]; // 80205444
L_80205448:;
  cmps(c,0,(int32_t)c->r[5],0); // 80205448
  if (crb(c,2)) return; // 8020544C
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 80205450
  c->ctr=c->r[0]; // 80205454
  if (crb(c,2)) { goto L_8020548C; } // 80205458
L_8020545C:;
  W8(c->r[9]+0x00000000u,c->r[4]); // 8020545C
  W8(c->r[9]+0x00000001u,c->r[4]); // 80205460
  W8(c->r[9]+0x00000002u,c->r[4]); // 80205464
  W8(c->r[9]+0x00000003u,c->r[4]); // 80205468
  W8(c->r[9]+0x00000004u,c->r[4]); // 8020546C
  W8(c->r[9]+0x00000005u,c->r[4]); // 80205470
  W8(c->r[9]+0x00000006u,c->r[4]); // 80205474
  W8(c->r[9]+0x00000007u,c->r[4]); // 80205478
  c->r[9]=c->r[9]+0x00000008u; // 8020547C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020545C; } // 80205480
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 80205484
  if (crb(c,2)) return; // 80205488
L_8020548C:;
  c->ctr=c->r[5]; // 8020548C
L_80205490:;
  W8(c->r[9]+0x00000000u,c->r[4]); // 80205490
  c->r[9]=c->r[9]+0x00000001u; // 80205494
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80205490; } // 80205498
  return; // 8020549C
}

// fn_802054A0
void f_802054A0(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],16)&0xFFFF0000u; // 802054A0
  c->r[3]=c->r[0]+c->r[4]; // 802054A4
  return; // 802054A8
}

// fn_802054AC
void f_802054AC(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],16)&0x0000FFFFu; // 802054AC
  W16(c->r[4]+0x00000000u,c->r[0]); // 802054B0
  W16(c->r[5]+0x00000000u,c->r[3]); // 802054B4
  return; // 802054B8
}

// fn_802054BC
void f_802054BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802054BC
  c->r[0]=c->lr; // 802054C0
  c->r[4]=0u+0x00000000u; // 802054C4
  c->r[5]=0u+0x00000BCCu; // 802054C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802054CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802054D0
  c->r[31]=0u+0x804B0000u; // 802054D4
  c->r[3]=c->r[31]+0xFFFF8A40u; // 802054D8
  c->lr=0x802054E0u; f_802053A8(c); // 802054DC
  c->r[7]=c->r[31]+0xFFFF8A40u; // 802054E0
  c->r[6]=0u+0x00000000u; // 802054E4
  W32(c->r[7]+0x000001B8u,c->r[6]); // 802054E8
  c->r[0]=0u+0x00000018u; // 802054EC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 802054F0
  W32(c->r[7]+0x000001F0u,c->r[6]); // 802054F4
  W32(c->r[7]+0x00000228u,c->r[6]); // 802054F8
  c->r[5]=c->r[7]+c->r[3]; // 802054FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)44); // 80205500
  c->r[3]=0u+0x00000000u; // 80205504
  W32(c->r[7]+0x00000260u,c->r[6]); // 80205508
  W32(c->r[7]+0x00000298u,c->r[6]); // 8020550C
  c->r[4]=c->r[7]+c->r[0]; // 80205510
  W32(c->r[7]+0x000002D0u,c->r[6]); // 80205514
  W32(c->r[7]+0x00000308u,c->r[6]); // 80205518
  W32(c->r[7]+0x00000340u,c->r[6]); // 8020551C
  W32(c->r[7]+0x00000378u,c->r[6]); // 80205520
  W32(c->r[7]+0x000003B0u,c->r[6]); // 80205524
  W32(c->r[7]+0x000003E8u,c->r[6]); // 80205528
  W32(c->r[7]+0x00000420u,c->r[6]); // 8020552C
  W32(c->r[7]+0x00000458u,c->r[6]); // 80205530
  W32(c->r[7]+0x00000490u,c->r[6]); // 80205534
  W32(c->r[7]+0x000004C8u,c->r[6]); // 80205538
  W32(c->r[7]+0x00000500u,c->r[6]); // 8020553C
  W32(c->r[7]+0x00000538u,c->r[6]); // 80205540
  W32(c->r[7]+0x00000570u,c->r[6]); // 80205544
  W32(c->r[7]+0x000005A8u,c->r[6]); // 80205548
  W32(c->r[7]+0x000005E0u,c->r[6]); // 8020554C
  W32(c->r[7]+0x00000618u,c->r[6]); // 80205550
  W32(c->r[7]+0x00000650u,c->r[6]); // 80205554
  W32(c->r[7]+0x00000688u,c->r[6]); // 80205558
  W32(c->r[7]+0x000006C0u,c->r[6]); // 8020555C
  W32(c->r[5]+0x000001B8u,c->r[6]); // 80205560
  W32(c->r[5]+0x000001F0u,c->r[6]); // 80205564
  W32(c->r[7]+0x00000764u,c->r[6]); // 80205568
  W32(c->r[7]+0x00000790u,c->r[6]); // 8020556C
  W32(c->r[7]+0x000007BCu,c->r[6]); // 80205570
  W32(c->r[7]+0x000007E8u,c->r[6]); // 80205574
  W32(c->r[7]+0x00000814u,c->r[6]); // 80205578
  W32(c->r[7]+0x00000840u,c->r[6]); // 8020557C
  W32(c->r[7]+0x0000086Cu,c->r[6]); // 80205580
  W32(c->r[7]+0x00000898u,c->r[6]); // 80205584
  W32(c->r[7]+0x000008C4u,c->r[6]); // 80205588
  W32(c->r[7]+0x000008F0u,c->r[6]); // 8020558C
  W32(c->r[7]+0x0000091Cu,c->r[6]); // 80205590
  W32(c->r[7]+0x00000948u,c->r[6]); // 80205594
  W32(c->r[7]+0x00000974u,c->r[6]); // 80205598
  W32(c->r[7]+0x000009A0u,c->r[6]); // 8020559C
  W32(c->r[7]+0x000009CCu,c->r[6]); // 802055A0
  W32(c->r[7]+0x000009F8u,c->r[6]); // 802055A4
  W32(c->r[7]+0x00000A24u,c->r[6]); // 802055A8
  W32(c->r[7]+0x00000A50u,c->r[6]); // 802055AC
  W32(c->r[7]+0x00000A7Cu,c->r[6]); // 802055B0
  W32(c->r[7]+0x00000AA8u,c->r[6]); // 802055B4
  W32(c->r[7]+0x00000AD4u,c->r[6]); // 802055B8
  W32(c->r[7]+0x00000B00u,c->r[6]); // 802055BC
  W32(c->r[7]+0x00000B2Cu,c->r[6]); // 802055C0
  W32(c->r[7]+0x00000B58u,c->r[6]); // 802055C4
  W32(c->r[4]+0x00000764u,c->r[6]); // 802055C8
  W32(c->r[4]+0x00000790u,c->r[6]); // 802055CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802055D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802055D4
  c->lr=c->r[0]; // 802055D8
  c->r[1]=c->r[1]+0x00000010u; // 802055DC
  return; // 802055E0
}

// fn_802055E4
void f_802055E4(Ctx* __restrict c) {
  f_802055E8(c); return; // 802055E4
}

// fn_802055E8
void f_802055E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802055E8
  c->r[0]=c->lr; // 802055EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802055F0
  c->r[0]=rotl(c->r[3],0)&0xFFFCFFFFu; cr0(c,c->r[0]); // 802055F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802055F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 802055FC
  if (crb(c,2)) { goto L_8020561C; } // 80205600
  c->r[4]=0u+0x804B0000u; // 80205604
  c->r[0]=0u+0x0000000Au; // 80205608
  c->r[4]=c->r[4]+0xFFFF9610u; // 8020560C
  c->r[3]=0u+0x0000000Au; // 80205610
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80205614
  goto L_8020575C; // 80205618
L_8020561C:;
  c->r[5]=rotl(c->r[3],0)&0x00030000u; // 8020561C
  c->r[0]=c->r[5]+0xFFFD0000u; // 80205620
  cmpu(c,0,c->r[0],0x00000000u); // 80205624
  if (!crb(c,2)) { goto L_80205644; } // 80205628
  c->r[4]=0u+0x804B0000u; // 8020562C
  c->r[0]=0u+0x0000000Au; // 80205630
  c->r[4]=c->r[4]+0xFFFF9610u; // 80205634
  c->r[3]=0u+0x0000000Au; // 80205638
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8020563C
  goto L_8020575C; // 80205640
L_80205644:;
  c->r[5]=rotl(c->r[3],0)&0x00010000u; cr0(c,c->r[5]); // 80205644
  if (crb(c,2)) { goto L_80205664; } // 80205648
  c->r[3]=0u+0x804B0000u; // 8020564C
  c->r[3]=c->r[3]+0xFFFF9610u; // 80205650
  c->r[0]=R32(c->r[3]+0x00000014u); // 80205654
  c->r[0]=c->r[0]|0x00010000u; // 80205658
  W32(c->r[3]+0x00000014u,c->r[0]); // 8020565C
  goto L_80205678; // 80205660
L_80205664:;
  c->r[3]=0u+0x804B0000u; // 80205664
  c->r[3]=c->r[3]+0xFFFF9610u; // 80205668
  c->r[0]=R32(c->r[3]+0x00000014u); // 8020566C
  c->r[0]=rotl(c->r[0],0)&0xFFFEFFFFu; // 80205670
  W32(c->r[3]+0x00000014u,c->r[0]); // 80205674
L_80205678:;
  c->r[7]=0u+0x804B0000u; // 80205678
  cmps(c,0,(int32_t)c->r[5],0); // 8020567C
  c->r[3]=R32(c->r[7]+0xFFFF9610u); // 80205680
  c->r[6]=c->r[7]+0xFFFF9610u; // 80205684
  c->r[0]=0u+0x00000000u; // 80205688
  c->r[5]=c->r[6]+0x00000048u; // 8020568C
  c->r[3]=c->r[3]|0x00000001u; // 80205690
  W32(c->r[6]+0x00000008u,c->r[5]); // 80205694
  W32(c->r[7]+0xFFFF9610u,c->r[3]); // 80205698
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 8020569C
  W32(c->r[6]+0x00000010u,c->r[0]); // 802056A0
  if (crb(c,2)) { goto L_802056B8; } // 802056A4
  c->r[0]=R32(c->r[6]+0x00000014u); // 802056A8
  c->r[0]=c->r[0]|0x00010000u; // 802056AC
  W32(c->r[6]+0x00000014u,c->r[0]); // 802056B0
  goto L_802056C4; // 802056B4
L_802056B8:;
  c->r[0]=R32(c->r[6]+0x00000014u); // 802056B8
  c->r[0]=rotl(c->r[0],0)&0xFFFEFFFFu; // 802056BC
  W32(c->r[6]+0x00000014u,c->r[0]); // 802056C0
L_802056C4:;
  c->r[11]=0u+0x804B0000u; // 802056C4
  c->r[9]=0u+0x80200000u; // 802056C8
  c->r[11]=c->r[11]+0xFFFF9610u; // 802056CC
  c->r[10]=0u+0x00000000u; // 802056D0
  c->r[8]=0u+0x80200000u; // 802056D4
  c->r[7]=0u+0x80200000u; // 802056D8
  c->r[6]=0u+0x80200000u; // 802056DC
  c->r[5]=0u+0x80200000u; // 802056E0
  c->r[3]=0u+0x80200000u; // 802056E4
  c->r[9]=c->r[9]+0x00005774u; // 802056E8
  c->r[8]=c->r[8]+0x00005930u; // 802056EC
  c->r[7]=c->r[7]+0x00005B98u; // 802056F0
  c->r[6]=c->r[6]+0x00005BCCu; // 802056F4
  c->r[5]=c->r[5]+0x00005C48u; // 802056F8
  c->r[3]=c->r[3]+0x00005C50u; // 802056FC
  c->r[0]=0u+0x00000001u; // 80205700
  W32(c->r[11]+0x00000018u,c->r[4]); // 80205704
  c->r[31]=c->r[11]+0x00000048u; // 80205708
  c->r[30]=0u+0x00000000u; // 8020570C
  W32(c->r[11]+0x0000001Cu,c->r[10]); // 80205710
  W32(c->r[11]+0x00000020u,c->r[10]); // 80205714
  W32(c->r[11]+0x0000003Cu,c->r[0]); // 80205718
  W32(c->r[11]+0x00000024u,c->r[9]); // 8020571C
  W32(c->r[11]+0x00000028u,c->r[8]); // 80205720
  W32(c->r[11]+0x0000002Cu,c->r[7]); // 80205724
  W32(c->r[11]+0x00000030u,c->r[6]); // 80205728
  W32(c->r[11]+0x00000034u,c->r[5]); // 8020572C
  W32(c->r[11]+0x00000038u,c->r[3]); // 80205730
L_80205734:;
  c->r[3]=c->r[31]|c->r[31]; // 80205734
  c->r[4]=0u+0x00000000u; // 80205738
  c->r[5]=0u+0x00001880u; // 8020573C
  c->lr=0x80205744u; f_802053A8(c); // 80205740
  c->r[30]=c->r[30]+0x00000001u; // 80205744
  c->r[31]=c->r[31]+0x00001880u; // 80205748
  cmps(c,0,(int32_t)c->r[30],26); // 8020574C
  if (crb(c,0)) { IRQCHK(c); goto L_80205734; } // 80205750
  c->lr=0x80205758u; f_80205CA8(c); // 80205754
  c->r[3]=0u+0x00000000u; // 80205758
L_8020575C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020575C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80205760
  c->r[30]=R32(c->r[1]+0x00000008u); // 80205764
  c->lr=c->r[0]; // 80205768
  c->r[1]=c->r[1]+0x00000010u; // 8020576C
  return; // 80205770
}

// VFiPFCODE_CP932_OEM2Unicode
void f_80205774(Ctx* __restrict c) {
  trace_call(0x80205774u);
  c->r[5]=R8(c->r[3]+0x00000000u); // 80205774
  c->r[3]=R8(c->r[3]+0x00000001u); // 80205778
  cmpu(c,0,c->r[5],0x00000080u); // 8020577C
  if (!crb(c,0)) { goto L_80205794; } // 80205780
  W16(c->r[4]+0x00000000u,c->r[5]); // 80205784
  c->r[3]=0u+0x00000001u; // 80205788
  c->r[4]=0u+0x00000002u; // 8020578C
  f_802054A0(c); return; // 80205790
L_80205794:;
  cmpu(c,0,c->r[5],0x000000A1u); // 80205794
  if (crb(c,0)) { goto L_802057BC; } // 80205798
  cmpu(c,0,c->r[5],0x000000DFu); // 8020579C
  if (crb(c,1)) { goto L_802057BC; } // 802057A0
  c->r[3]=c->r[5]+0x00010000u; // 802057A4
  c->r[0]=c->r[3]+0xFFFFFEC0u; // 802057A8
  W16(c->r[4]+0x00000000u,c->r[0]); // 802057AC
  c->r[3]=0u+0x00000001u; // 802057B0
  c->r[4]=0u+0x00000002u; // 802057B4
  f_802054A0(c); return; // 802057B8
L_802057BC:;
  cmpu(c,0,c->r[5],0x00000080u); // 802057BC
  if (crb(c,2)) { goto L_8020580C; } // 802057C0
  cmpu(c,0,c->r[5],0x00000085u); // 802057C4
  if (crb(c,2)) { goto L_8020580C; } // 802057C8
  cmpu(c,0,c->r[5],0x00000086u); // 802057CC
  if (crb(c,2)) { goto L_8020580C; } // 802057D0
  cmpu(c,0,c->r[5],0x000000A0u); // 802057D4
  if (crb(c,2)) { goto L_8020580C; } // 802057D8
  cmpu(c,0,c->r[5],0x000000EBu); // 802057DC
  if (crb(c,2)) { goto L_8020580C; } // 802057E0
  cmpu(c,0,c->r[5],0x000000ECu); // 802057E4
  if (crb(c,2)) { goto L_8020580C; } // 802057E8
  cmpu(c,0,c->r[5],0x000000EFu); // 802057EC
  if (crb(c,0)) { goto L_802057FC; } // 802057F0
  cmpu(c,0,c->r[5],0x000000F9u); // 802057F4
  if (!crb(c,1)) { goto L_8020580C; } // 802057F8
L_802057FC:;
  cmpu(c,0,c->r[5],0x000000FDu); // 802057FC
  if (crb(c,0)) { goto L_80205820; } // 80205800
  cmpu(c,0,c->r[5],0x000000FFu); // 80205804
  if (!crb(c,2)) { goto L_80205820; } // 80205808
L_8020580C:;
  c->r[0]=0u+0x0000005Fu; // 8020580C
  c->r[3]=0u+0x00000001u; // 80205810
  W16(c->r[4]+0x00000000u,c->r[0]); // 80205814
  c->r[4]=0u+0x00000002u; // 80205818
  f_802054A0(c); return; // 8020581C
L_80205820:;
  cmpu(c,0,c->r[3],0x000000FDu); // 80205820
  if (crb(c,0)) { goto L_8020583C; } // 80205824
  c->r[0]=0u+0x0000005Fu; // 80205828
  c->r[3]=0u+0x00000001u; // 8020582C
  W16(c->r[4]+0x00000000u,c->r[0]); // 80205830
  c->r[4]=0u+0x00000002u; // 80205834
  f_802054A0(c); return; // 80205838
L_8020583C:;
  cmpu(c,0,c->r[5],0x00000081u); // 8020583C
  if (crb(c,0)) { goto L_80205854; } // 80205840
  cmpu(c,0,c->r[5],0x00000084u); // 80205844
  if (crb(c,1)) { goto L_80205854; } // 80205848
  c->r[0]=c->r[5]+0xFFFFFF7Fu; // 8020584C
  goto L_802058C8; // 80205850
L_80205854:;
  cmpu(c,0,c->r[5],0x00000087u); // 80205854
  if (crb(c,0)) { goto L_8020586C; } // 80205858
  cmpu(c,0,c->r[5],0x0000009Fu); // 8020585C
  if (crb(c,1)) { goto L_8020586C; } // 80205860
  c->r[0]=c->r[5]+0xFFFFFF7Du; // 80205864
  goto L_802058C8; // 80205868
L_8020586C:;
  cmpu(c,0,c->r[5],0x000000E0u); // 8020586C
  if (crb(c,0)) { goto L_80205884; } // 80205870
  cmpu(c,0,c->r[5],0x000000EAu); // 80205874
  if (crb(c,1)) { goto L_80205884; } // 80205878
  c->r[0]=c->r[5]+0xFFFFFF3Du; // 8020587C
  goto L_802058C8; // 80205880
L_80205884:;
  cmpu(c,0,c->r[5],0x000000EDu); // 80205884
  if (crb(c,0)) { goto L_8020589C; } // 80205888
  cmpu(c,0,c->r[5],0x000000EEu); // 8020588C
  if (crb(c,1)) { goto L_8020589C; } // 80205890
  c->r[0]=c->r[5]+0xFFFFFF3Bu; // 80205894
  goto L_802058C8; // 80205898
L_8020589C:;
  cmpu(c,0,c->r[5],0x000000FAu); // 8020589C
  if (crb(c,0)) { goto L_802058B4; } // 802058A0
  cmpu(c,0,c->r[5],0x000000FCu); // 802058A4
  if (crb(c,1)) { goto L_802058B4; } // 802058A8
  c->r[0]=c->r[5]+0xFFFFFF30u; // 802058AC
  goto L_802058C8; // 802058B0
L_802058B4:;
  c->r[0]=0u+0x0000005Fu; // 802058B4
  c->r[3]=0u+0x00000001u; // 802058B8
  W16(c->r[4]+0x00000000u,c->r[0]); // 802058BC
  c->r[4]=0u+0x00000002u; // 802058C0
  f_802054A0(c); return; // 802058C4
L_802058C8:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFC0u,0); cr0(c,c->r[3]); // 802058C8
  if (crb(c,0)) { goto L_802058D8; } // 802058CC
  cmps(c,0,(int32_t)c->r[3],189); // 802058D0
  if (crb(c,0)) { goto L_802058EC; } // 802058D4
L_802058D8:;
  c->r[0]=0u+0x0000005Fu; // 802058D8
  c->r[3]=0u+0x00000001u; // 802058DC
  W16(c->r[4]+0x00000000u,c->r[0]); // 802058E0
  c->r[4]=0u+0x00000002u; // 802058E4
  f_802054A0(c); return; // 802058E8
L_802058EC:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)378); // 802058EC
  c->r[5]=0u+0x80280000u; // 802058F0
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 802058F4
  c->r[5]=c->r[5]+0x00001B30u; // 802058F8
  c->r[0]=c->r[5]+c->r[0]; // 802058FC
  c->r[0]=R16(c->r[3]+c->r[0]); // 80205900
  cmps(c,0,(int32_t)c->r[0],0); // 80205904
  W16(c->r[4]+0x00000000u,c->r[0]); // 80205908
  if (!crb(c,2)) { goto L_80205924; } // 8020590C
  c->r[0]=0u+0x0000005Fu; // 80205910
  c->r[3]=0u+0x00000001u; // 80205914
  W16(c->r[4]+0x00000000u,c->r[0]); // 80205918
  c->r[4]=0u+0x00000002u; // 8020591C
  f_802054A0(c); return; // 80205920
L_80205924:;
  c->r[3]=0u+0x00000002u; // 80205924
  c->r[4]=0u+0x00000002u; // 80205928
  f_802054A0(c); return; // 8020592C
}

// VFiPFCODE_CP932_Unicode2OEM
void f_80205930(Ctx* __restrict c) {
  trace_call(0x80205930u);
  c->r[0]=R16(c->r[3]+0x00000000u); // 80205930
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 80205934
  c->r[3]=sraw(c,c->r[0],8); // 80205938
  cmpu(c,0,c->r[5],0x00000080u); // 8020593C
  if (!crb(c,0)) { goto L_80205964; } // 80205940
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80205944
  if (!crb(c,2)) { goto L_80205964; } // 80205948
  c->r[0]=0u+0x00000000u; // 8020594C
  W8(c->r[4]+0x00000000u,c->r[5]); // 80205950
  c->r[3]=0u+0x00000001u; // 80205954
  W8(c->r[4]+0x00000001u,c->r[0]); // 80205958
  c->r[4]=0u+0x00000002u; // 8020595C
  f_802054A0(c); return; // 80205960
L_80205964:;
  c->r[0]=rotl(c->r[3],8)&0x0000FF00u; // 80205964
  c->r[0]=c->r[0]+c->r[5]; // 80205968
  c->r[9]=rotl(c->r[0],0)&0x0000FFFFu; // 8020596C
  cmpu(c,0,c->r[9],0x0000FF61u); // 80205970
  if (crb(c,0)) { goto L_802059A0; } // 80205974
  cmpu(c,0,c->r[9],0x0000FF9Fu); // 80205978
  if (crb(c,1)) { goto L_802059A0; } // 8020597C
  c->r[3]=c->r[9]+0xFFFF0000u; // 80205980
  c->r[0]=0u+0x00000000u; // 80205984
  c->r[3]=c->r[3]+0x00000140u; // 80205988
  W8(c->r[4]+0x00000001u,c->r[0]); // 8020598C
  W8(c->r[4]+0x00000000u,c->r[3]); // 80205990
  c->r[3]=0u+0x00000001u; // 80205994
  c->r[4]=0u+0x00000002u; // 80205998
  f_802054A0(c); return; // 8020599C
L_802059A0:;
  cmpu(c,0,c->r[9],0x0000005Fu); // 802059A0
  if (!crb(c,2)) { goto L_802059BC; } // 802059A4
  c->r[0]=0u+0x0000005Fu; // 802059A8
  c->r[3]=0u+0x00000001u; // 802059AC
  W8(c->r[4]+0x00000000u,c->r[0]); // 802059B0
  c->r[4]=0u+0x00000002u; // 802059B4
  f_802054A0(c); return; // 802059B8
L_802059BC:;
  c->r[5]=0u+0x80280000u; // 802059BC
  c->r[6]=0u+0x00000000u; // 802059C0
  c->r[5]=c->r[5]+0x00001B30u; // 802059C4
  c->r[0]=0u+0x00000015u; // 802059C8
L_802059CC:;
  c->r[8]=c->r[5]|c->r[5]; // 802059CC
  c->r[7]=0u+0x00000000u; // 802059D0
  c->ctr=c->r[0]; // 802059D4
L_802059D8:;
  c->r[3]=R16(c->r[8]+0x00000000u); // 802059D8
  cmpu(c,0,c->r[3],c->r[9]); // 802059DC
  if (crb(c,2)) { goto L_80205A70; } // 802059E0
  c->r[3]=R16(c->r[8]+0x00000002u); // 802059E4
  c->r[7]=c->r[7]+0x00000001u; // 802059E8
  cmpu(c,0,c->r[3],c->r[9]); // 802059EC
  if (crb(c,2)) { goto L_80205A70; } // 802059F0
  c->r[3]=R16(c->r[8]+0x00000004u); // 802059F4
  c->r[7]=c->r[7]+0x00000001u; // 802059F8
  cmpu(c,0,c->r[3],c->r[9]); // 802059FC
  if (crb(c,2)) { goto L_80205A70; } // 80205A00
  c->r[3]=R16(c->r[8]+0x00000006u); // 80205A04
  c->r[7]=c->r[7]+0x00000001u; // 80205A08
  cmpu(c,0,c->r[3],c->r[9]); // 80205A0C
  if (crb(c,2)) { goto L_80205A70; } // 80205A10
  c->r[3]=R16(c->r[8]+0x00000008u); // 80205A14
  c->r[7]=c->r[7]+0x00000001u; // 80205A18
  cmpu(c,0,c->r[3],c->r[9]); // 80205A1C
  if (crb(c,2)) { goto L_80205A70; } // 80205A20
  c->r[3]=R16(c->r[8]+0x0000000Au); // 80205A24
  c->r[7]=c->r[7]+0x00000001u; // 80205A28
  cmpu(c,0,c->r[3],c->r[9]); // 80205A2C
  if (crb(c,2)) { goto L_80205A70; } // 80205A30
  c->r[3]=R16(c->r[8]+0x0000000Cu); // 80205A34
  c->r[7]=c->r[7]+0x00000001u; // 80205A38
  cmpu(c,0,c->r[3],c->r[9]); // 80205A3C
  if (crb(c,2)) { goto L_80205A70; } // 80205A40
  c->r[3]=R16(c->r[8]+0x0000000Eu); // 80205A44
  c->r[7]=c->r[7]+0x00000001u; // 80205A48
  cmpu(c,0,c->r[3],c->r[9]); // 80205A4C
  if (crb(c,2)) { goto L_80205A70; } // 80205A50
  c->r[3]=R16(c->r[8]+0x00000010u); // 80205A54
  c->r[7]=c->r[7]+0x00000001u; // 80205A58
  cmpu(c,0,c->r[3],c->r[9]); // 80205A5C
  if (crb(c,2)) { goto L_80205A70; } // 80205A60
  c->r[7]=c->r[7]+0x00000001u; // 80205A64
  c->r[8]=c->r[8]+0x00000012u; // 80205A68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802059D8; } // 80205A6C
L_80205A70:;
  cmps(c,0,(int32_t)c->r[7],189); // 80205A70
  if (crb(c,0)) { goto L_80205A88; } // 80205A74
  c->r[6]=c->r[6]+0x00000001u; // 80205A78
  c->r[5]=c->r[5]+0x0000017Au; // 80205A7C
  cmps(c,0,(int32_t)c->r[6],45); // 80205A80
  if (crb(c,0)) { IRQCHK(c); goto L_802059CC; } // 80205A84
L_80205A88:;
  cmps(c,0,(int32_t)c->r[7],189); // 80205A88
  if (!crb(c,2)) { goto L_80205AA4; } // 80205A8C
  c->r[0]=0u+0x0000005Fu; // 80205A90
  c->r[3]=0u+0x00000001u; // 80205A94
  W8(c->r[4]+0x00000000u,c->r[0]); // 80205A98
  c->r[4]=0u+0x00000002u; // 80205A9C
  f_802054A0(c); return; // 80205AA0
L_80205AA4:;
  cmps(c,0,(int32_t)c->r[6],0); // 80205AA4
  if (crb(c,0)) { goto L_80205ACC; } // 80205AA8
  cmps(c,0,(int32_t)c->r[6],3); // 80205AAC
  if (crb(c,1)) { goto L_80205ACC; } // 80205AB0
  c->r[3]=c->r[6]+0x00000081u; // 80205AB4
  c->r[0]=c->r[7]+0x00000040u; // 80205AB8
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 80205ABC
  c->r[0]=c->r[3]|c->r[0]; // 80205AC0
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80205AC4
  goto L_80205B80; // 80205AC8
L_80205ACC:;
  cmps(c,0,(int32_t)c->r[6],4); // 80205ACC
  if (crb(c,0)) { goto L_80205AF4; } // 80205AD0
  cmps(c,0,(int32_t)c->r[6],28); // 80205AD4
  if (crb(c,1)) { goto L_80205AF4; } // 80205AD8
  c->r[3]=c->r[6]+0x00000083u; // 80205ADC
  c->r[0]=c->r[7]+0x00000040u; // 80205AE0
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 80205AE4
  c->r[0]=c->r[3]|c->r[0]; // 80205AE8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80205AEC
  goto L_80205B80; // 80205AF0
L_80205AF4:;
  cmps(c,0,(int32_t)c->r[6],29); // 80205AF4
  if (crb(c,0)) { goto L_80205B1C; } // 80205AF8
  cmps(c,0,(int32_t)c->r[6],39); // 80205AFC
  if (crb(c,1)) { goto L_80205B1C; } // 80205B00
  c->r[3]=c->r[6]+0x000000C3u; // 80205B04
  c->r[0]=c->r[7]+0x00000040u; // 80205B08
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 80205B0C
  c->r[0]=c->r[3]|c->r[0]; // 80205B10
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80205B14
  goto L_80205B80; // 80205B18
L_80205B1C:;
  cmps(c,0,(int32_t)c->r[6],40); // 80205B1C
  if (crb(c,0)) { goto L_80205B44; } // 80205B20
  cmps(c,0,(int32_t)c->r[6],41); // 80205B24
  if (crb(c,1)) { goto L_80205B44; } // 80205B28
  c->r[3]=c->r[6]+0x000000C5u; // 80205B2C
  c->r[0]=c->r[7]+0x00000040u; // 80205B30
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 80205B34
  c->r[0]=c->r[3]|c->r[0]; // 80205B38
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80205B3C
  goto L_80205B80; // 80205B40
L_80205B44:;
  cmps(c,0,(int32_t)c->r[6],42); // 80205B44
  if (crb(c,0)) { goto L_80205B6C; } // 80205B48
  cmps(c,0,(int32_t)c->r[6],44); // 80205B4C
  if (crb(c,1)) { goto L_80205B6C; } // 80205B50
  c->r[3]=c->r[6]+0x000000D0u; // 80205B54
  c->r[0]=c->r[7]+0x00000040u; // 80205B58
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 80205B5C
  c->r[0]=c->r[3]|c->r[0]; // 80205B60
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80205B64
  goto L_80205B80; // 80205B68
L_80205B6C:;
  c->r[0]=0u+0x0000005Fu; // 80205B6C
  c->r[3]=0u+0x00000001u; // 80205B70
  W8(c->r[4]+0x00000000u,c->r[0]); // 80205B74
  c->r[4]=0u+0x00000002u; // 80205B78
  f_802054A0(c); return; // 80205B7C
L_80205B80:;
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; // 80205B80
  W8(c->r[4]+0x00000001u,c->r[3]); // 80205B84
  c->r[3]=0u+0x00000002u; // 80205B88
  W8(c->r[4]+0x00000000u,c->r[0]); // 80205B8C
  c->r[4]=0u+0x00000002u; // 80205B90
  f_802054A0(c); return; // 80205B94
}

// fn_80205B98
void f_80205B98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80205B98
  c->r[0]=c->lr; // 80205B9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80205BA0
  c->r[4]=c->r[1]+0x0000000Cu; // 80205BA4
  c->lr=0x80205BACu; f_80205774(c); // 80205BA8
  c->r[4]=c->r[1]+0x0000000Au; // 80205BAC
  c->r[5]=c->r[1]+0x00000008u; // 80205BB0
  c->lr=0x80205BB8u; f_802054AC(c); // 80205BB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80205BB8
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Au); // 80205BBC
  c->lr=c->r[0]; // 80205BC0
  c->r[1]=c->r[1]+0x00000010u; // 80205BC4
  return; // 80205BC8
}

// VFiPFCODE_CP932_isOEMMBchar
void f_80205BCC(Ctx* __restrict c) {
  trace_call(0x80205BCCu);
  cmps(c,0,(int32_t)c->r[4],2); // 80205BCC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80205BD0
  if (crb(c,2)) { goto L_80205C14; } // 80205BD4
  if (!crb(c,0)) { goto L_80205C40; } // 80205BD8
  cmps(c,0,(int32_t)c->r[4],1); // 80205BDC
  if (!crb(c,0)) { goto L_80205BE8; } // 80205BE0
  goto L_80205C40; // 80205BE4
L_80205BE8:;
  cmpu(c,0,c->r[0],0x00000081u); // 80205BE8
  c->r[3]=0u+0x00000000u; // 80205BEC
  if (crb(c,0)) { goto L_80205BFC; } // 80205BF0
  cmpu(c,0,c->r[0],0x0000009Fu); // 80205BF4
  if (!crb(c,1)) { goto L_80205C0C; } // 80205BF8
L_80205BFC:;
  cmpu(c,0,c->r[0],0x000000E0u); // 80205BFC
  if (crb(c,0)) return; // 80205C00
  cmpu(c,0,c->r[0],0x000000FCu); // 80205C04
  if (crb(c,1)) return; // 80205C08
L_80205C0C:;
  c->r[3]=0u+0x00000001u; // 80205C0C
  return; // 80205C10
L_80205C14:;
  cmpu(c,0,c->r[0],0x00000040u); // 80205C14
  c->r[3]=0u+0x00000000u; // 80205C18
  if (crb(c,0)) { goto L_80205C28; } // 80205C1C
  cmpu(c,0,c->r[0],0x0000007Eu); // 80205C20
  if (!crb(c,1)) { goto L_80205C38; } // 80205C24
L_80205C28:;
  cmpu(c,0,c->r[0],0x00000080u); // 80205C28
  if (crb(c,0)) return; // 80205C2C
  cmpu(c,0,c->r[0],0x000000FCu); // 80205C30
  if (crb(c,1)) return; // 80205C34
L_80205C38:;
  c->r[3]=0u+0x00000001u; // 80205C38
  return; // 80205C3C
L_80205C40:;
  c->r[3]=0u+0x00000000u; // 80205C40
  return; // 80205C44
}

// fn_80205C48
void f_80205C48(Ctx* __restrict c) {
  c->r[3]=0u+0x00000002u; // 80205C48
  return; // 80205C4C
}

// fn_80205C50
void f_80205C50(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80205C50
  return; // 80205C54
}

// fn_80205C58
void f_80205C58(Ctx* __restrict c) {
  c->r[0]=0u-c->r[3]; // 80205C58
  c->r[0]=c->r[0]|c->r[3]; // 80205C5C
  c->r[3]=sraw(c,c->r[0],31); // 80205C60
  return; // 80205C64
}

// fn_80205C68
void f_80205C68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80205C68
  c->r[0]=c->lr; // 80205C6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80205C70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80205C74
  c->lr=0x80205C7Cu; f_802055E4(c); // 80205C78
  cmps(c,0,(int32_t)c->r[3],0); // 80205C7C
  c->r[31]=c->r[3]|c->r[3]; // 80205C80
  if (!crb(c,2)) { goto L_80205C8C; } // 80205C84
  c->lr=0x80205C8Cu; f_80205CB4(c); // 80205C88
L_80205C8C:;
  c->r[3]=c->r[31]|c->r[31]; // 80205C8C
  c->lr=0x80205C94u; f_80205C58(c); // 80205C90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80205C94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80205C98
  c->lr=c->r[0]; // 80205C9C
  c->r[1]=c->r[1]+0x00000010u; // 80205CA0
  return; // 80205CA4
}

// fn_80205CA8
void f_80205CA8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80205CA8
  W32(c->r[13]+0xFFFFB120u,c->r[0]); // 80205CAC
  return; // 80205CB0
}

// fn_80205CB4
void f_80205CB4(Ctx* __restrict c) {
  return; // 80205CB4
}

// fn_80205CB8
void f_80205CB8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFB128u); // 80205CB8
  c->r[0]=0u-c->r[3]; // 80205CBC
  c->r[0]=c->r[0]|c->r[3]; // 80205CC0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80205CC4
  return; // 80205CC8
}

// fn_80205CCC
void f_80205CCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80205CCC
  c->r[0]=c->lr; // 80205CD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80205CD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80205CD8
  c->r[31]=c->r[4]|c->r[4]; // 80205CDC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80205CE0
  c->r[30]=c->r[3]|c->r[3]; // 80205CE4
  c->r[0]=R32(c->r[13]+0xFFFFB12Cu); // 80205CE8
  cmps(c,0,(int32_t)c->r[0],0); // 80205CEC
  if (!crb(c,2)) { goto L_80205D08; } // 80205CF0
  c->r[3]=0u+0x804D0000u; // 80205CF4
  c->r[3]=c->r[3]+0x00001360u; // 80205CF8
  c->lr=0x80205D00u; f_80155694(c); // 80205CFC
  c->r[0]=0u+0x00000001u; // 80205D00
  W32(c->r[13]+0xFFFFB12Cu,c->r[0]); // 80205D04
L_80205D08:;
  c->r[0]=R32(c->r[13]+0xFFFFB12Cu); // 80205D08
  cmps(c,0,(int32_t)c->r[0],0); // 80205D0C
  if (crb(c,2)) { goto L_80205D20; } // 80205D10
  c->r[3]=0u+0x804D0000u; // 80205D14
  c->r[3]=c->r[3]+0x00001360u; // 80205D18
  c->lr=0x80205D20u; f_801556CC(c); // 80205D1C
L_80205D20:;
  c->r[0]=R32(c->r[13]+0xFFFFB128u); // 80205D20
  cmps(c,0,(int32_t)c->r[0],0); // 80205D24
  if (!crb(c,2)) { goto L_80205D64; } // 80205D28
  c->r[0]=0u+0x00000001u; // 80205D2C
  c->r[3]=c->r[30]|c->r[30]; // 80205D30
  W32(c->r[13]+0xFFFFB128u,c->r[0]); // 80205D34
  c->r[4]=c->r[31]|c->r[31]; // 80205D38
  c->lr=0x80205D40u; f_80205DF8(c); // 80205D3C
  c->r[3]=0u+0x00000000u; // 80205D40
  c->r[4]=0u+0x00000000u; // 80205D44
  c->lr=0x80205D4Cu; f_802054BC(c); // 80205D48
  c->r[3]=0u+0x00000000u; // 80205D4C
  c->r[4]=0u+0x00000000u; // 80205D50
  c->lr=0x80205D58u; f_80205C68(c); // 80205D54
  c->lr=0x80205D5Cu; f_80206118(c); // 80205D58
  c->r[3]=0u+0x00000000u; // 80205D5C
  c->lr=0x80205D64u; f_80206108(c); // 80205D60
L_80205D64:;
  c->r[0]=R32(c->r[13]+0xFFFFB12Cu); // 80205D64
  cmps(c,0,(int32_t)c->r[0],0); // 80205D68
  if (crb(c,2)) { goto L_80205D7C; } // 80205D6C
  c->r[3]=0u+0x804D0000u; // 80205D70
  c->r[3]=c->r[3]+0x00001360u; // 80205D74
  c->lr=0x80205D7Cu; f_801557A8(c); // 80205D78
L_80205D7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80205D7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80205D80
  c->r[30]=R32(c->r[1]+0x00000008u); // 80205D84
  c->lr=c->r[0]; // 80205D88
  c->r[1]=c->r[1]+0x00000010u; // 80205D8C
  return; // 80205D90
}

// fn_80205D94
void f_80205D94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80205D94
  c->r[0]=c->lr; // 80205D98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80205D9C
  c->r[0]=R32(c->r[13]+0xFFFFB12Cu); // 80205DA0
  cmps(c,0,(int32_t)c->r[0],0); // 80205DA4
  if (crb(c,2)) { goto L_80205DB8; } // 80205DA8
  c->r[3]=0u+0x804D0000u; // 80205DAC
  c->r[3]=c->r[3]+0x00001360u; // 80205DB0
  c->lr=0x80205DB8u; f_801556CC(c); // 80205DB4
L_80205DB8:;
  c->r[0]=R32(c->r[13]+0xFFFFB128u); // 80205DB8
  cmps(c,0,(int32_t)c->r[0],0); // 80205DBC
  if (crb(c,2)) { goto L_80205DD0; } // 80205DC0
  c->lr=0x80205DC8u; f_80205F7C(c); // 80205DC4
  c->r[0]=0u+0x00000000u; // 80205DC8
  W32(c->r[13]+0xFFFFB128u,c->r[0]); // 80205DCC
L_80205DD0:;
  c->r[0]=R32(c->r[13]+0xFFFFB12Cu); // 80205DD0
  cmps(c,0,(int32_t)c->r[0],0); // 80205DD4
  if (crb(c,2)) { goto L_80205DE8; } // 80205DD8
  c->r[3]=0u+0x804D0000u; // 80205DDC
  c->r[3]=c->r[3]+0x00001360u; // 80205DE0
  c->lr=0x80205DE8u; f_801557A8(c); // 80205DE4
L_80205DE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80205DE8
  c->lr=c->r[0]; // 80205DEC
  c->r[1]=c->r[1]+0x00000010u; // 80205DF0
  return; // 80205DF4
}

// fn_80205DF8
void f_80205DF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80205DF8
  c->r[0]=c->lr; // 80205DFC
  cmps(c,0,(int32_t)c->r[3],0); // 80205E00
  W32(c->r[1]+0x00000024u,c->r[0]); // 80205E04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80205E08
  W32(c->r[1]+0x00000018u,c->r[30]); // 80205E0C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80205E10
  c->r[29]=rotl(c->r[4],18)&0x0003FFFFu; // 80205E14
  if (crb(c,2)) { goto L_80205E3C; } // 80205E18
  cmps(c,0,(int32_t)c->r[4],0); // 80205E1C
  if (crb(c,2)) { goto L_80205E3C; } // 80205E20
  c->r[0]=R32(c->r[13]+0xFFFFB138u); // 80205E24
  cmps(c,0,(int32_t)c->r[0],0); // 80205E28
  if (!crb(c,2)) { goto L_80205E3C; } // 80205E2C
  c->r[5]=0u+0x00000000u; // 80205E30
  c->lr=0x80205E38u; f_8017BAA4(c); // 80205E34
  W32(c->r[13]+0xFFFFB138u,c->r[3]); // 80205E38
L_80205E3C:;
  cmpu(c,0,c->r[29],0x0000001Au); // 80205E3C
  c->r[4]=0u+0x0000001Au; // 80205E40
  if (crb(c,1)) { goto L_80205E4C; } // 80205E44
  c->r[4]=c->r[29]|c->r[29]; // 80205E48
L_80205E4C:;
  c->r[0]=R32(c->r[13]+0xFFFFB140u); // 80205E4C
  W32(c->r[13]+0xFFFFB130u,c->r[4]); // 80205E50
  cmps(c,0,(int32_t)c->r[0],0); // 80205E54
  if (!crb(c,2)) { goto L_80205E80; } // 80205E58
  c->r[3]=R32(c->r[13]+0xFFFFB138u); // 80205E5C
  cmps(c,0,(int32_t)c->r[3],0); // 80205E60
  if (!crb(c,2)) { goto L_80205E70; } // 80205E64
  c->r[3]=0u+0x00000000u; // 80205E68
  goto L_80205E7C; // 80205E6C
L_80205E70:;
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)320); // 80205E70
  c->r[5]=0u+0x00000020u; // 80205E74
  c->lr=0x80205E7Cu; f_8017BB84(c); // 80205E78
L_80205E7C:;
  W32(c->r[13]+0xFFFFB140u,c->r[3]); // 80205E7C
L_80205E80:;
  c->r[0]=R32(c->r[13]+0xFFFFB130u); // 80205E80
  cmps(c,0,(int32_t)c->r[0],0); // 80205E84
  if (crb(c,2)) { goto L_80205E9C; } // 80205E88
  c->r[29]=R32(c->r[13]+0xFFFFB140u); // 80205E8C
  cmps(c,0,(int32_t)c->r[29],0); // 80205E90
  if (crb(c,2)) { goto L_80205E9C; } // 80205E94
  goto L_80205EA0; // 80205E98
L_80205E9C:;
  c->r[29]=0u+0x00000000u; // 80205E9C
L_80205EA0:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 80205EA0
  c->r[31]=0u+0x00000000u; // 80205EA4
  c->r[30]=c->r[29]+c->r[0]; // 80205EA8
  goto L_80205EDC; // 80205EAC
L_80205EB0:;
  c->r[3]=c->r[29]|c->r[29]; // 80205EB0
  c->r[4]=0u+0x00000000u; // 80205EB4
  c->r[5]=0u+0x00000140u; // 80205EB8
  c->lr=0x80205EC0u; f_802053A8(c); // 80205EBC
  c->r[0]=addc(c,c->r[29],0x0000001Cu,0); cr0(c,c->r[0]); // 80205EC0
  if (crb(c,2)) { goto L_80205ED8; } // 80205EC4
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 80205EC8
  W32(c->r[29]+0x00000020u,c->r[31]); // 80205ECC
  W32(c->r[29]+0x00000024u,c->r[31]); // 80205ED0
  W32(c->r[29]+0x00000028u,c->r[31]); // 80205ED4
L_80205ED8:;
  c->r[29]=c->r[29]+0x00000140u; // 80205ED8
L_80205EDC:;
  cmpu(c,0,c->r[29],c->r[30]); // 80205EDC
  if (!crb(c,2)) { IRQCHK(c); goto L_80205EB0; } // 80205EE0
  c->r[0]=R32(c->r[13]+0xFFFFB13Cu); // 80205EE4
  c->r[30]=R32(c->r[13]+0xFFFFB130u); // 80205EE8
  cmps(c,0,(int32_t)c->r[0],0); // 80205EEC
  if (!crb(c,2)) { goto L_80205F40; } // 80205EF0
  c->r[29]=0u+0x804D0000u; // 80205EF4
  c->r[31]=0u+0x00000000u; // 80205EF8
  c->r[29]=c->r[29]+0x00001378u; // 80205EFC
  goto L_80205F30; // 80205F00
L_80205F04:;
  c->r[3]=R32(c->r[13]+0xFFFFB138u); // 80205F04
  cmps(c,0,(int32_t)c->r[3],0); // 80205F08
  if (!crb(c,2)) { goto L_80205F18; } // 80205F0C
  c->r[3]=0u+0x00000000u; // 80205F10
  goto L_80205F24; // 80205F14
L_80205F18:;
  c->r[4]=0u+0x000000A0u; // 80205F18
  c->r[5]=0u+0x00000020u; // 80205F1C
  c->lr=0x80205F24u; f_8017BB84(c); // 80205F20
L_80205F24:;
  W32(c->r[29]+0x00000000u,c->r[3]); // 80205F24
  c->r[29]=c->r[29]+0x00000004u; // 80205F28
  c->r[31]=c->r[31]+0x00000001u; // 80205F2C
L_80205F30:;
  cmpu(c,0,c->r[31],c->r[30]); // 80205F30
  if (crb(c,0)) { IRQCHK(c); goto L_80205F04; } // 80205F34
  c->r[0]=0u+0x00000001u; // 80205F38
  W32(c->r[13]+0xFFFFB13Cu,c->r[0]); // 80205F3C
L_80205F40:;
  c->lr=0x80205F44u; f_8020621C(c); // 80205F40
  c->r[4]=0u+0x00000000u; // 80205F44
  c->r[3]=0u+0x00000002u; // 80205F48
  c->r[0]=0u+0x00000008u; // 80205F4C
  W32(c->r[13]+0xFFFFB134u,c->r[4]); // 80205F50
  W32(c->r[13]+0xFFFFB14Cu,c->r[3]); // 80205F54
  W32(c->r[13]+0xFFFFB148u,c->r[0]); // 80205F58
  c->lr=0x80205F60u; f_80206308(c); // 80205F5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80205F60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80205F64
  c->r[30]=R32(c->r[1]+0x00000018u); // 80205F68
  c->r[29]=R32(c->r[1]+0x00000014u); // 80205F6C
  c->lr=c->r[0]; // 80205F70
  c->r[1]=c->r[1]+0x00000020u; // 80205F74
  return; // 80205F78
}

// fn_80205F7C
void f_80205F7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80205F7C
  c->r[0]=c->lr; // 80205F80
  W32(c->r[1]+0x00000024u,c->r[0]); // 80205F84
  c->r[11]=c->r[1]+0x00000020u; // 80205F88
  c->lr=0x80205F90u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80205F8C
  c->r[27]=R32(c->r[13]+0xFFFFB140u); // 80205F90
  cmps(c,1,(int32_t)c->r[27],0); // 80205F94
  if (crb(c,6)) { goto L_80206074; } // 80205F98
  c->r[0]=R32(c->r[13]+0xFFFFB130u); // 80205F9C
  cmps(c,0,(int32_t)c->r[0],0); // 80205FA0
  if (crb(c,2)) { goto L_80205FB0; } // 80205FA4
  if (crb(c,6)) { goto L_80205FB0; } // 80205FA8
  goto L_80205FB4; // 80205FAC
L_80205FB0:;
  c->r[27]=0u+0x00000000u; // 80205FB0
L_80205FB4:;
  cmps(c,0,(int32_t)c->r[27],0); // 80205FB4
  if (crb(c,2)) { goto L_80206058; } // 80205FB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 80205FBC
  c->r[31]=0u+0x00000000u; // 80205FC0
  c->r[30]=c->r[27]+c->r[0]; // 80205FC4
  goto L_80206050; // 80205FC8
L_80205FCC:;
  cmps(c,0,(int32_t)c->r[27],0); // 80205FCC
  if (crb(c,2)) { goto L_8020604C; } // 80205FD0
  c->r[29]=addc(c,c->r[27],0x0000001Cu,0); cr0(c,c->r[29]); // 80205FD4
  c->r[28]=R32(c->r[29]+0x00000000u); // 80205FD8
  if (crb(c,2)) { goto L_80206030; } // 80205FDC
  c->r[4]=R32(c->r[29]+0x00000008u); // 80205FE0
  cmps(c,0,(int32_t)c->r[4],0); // 80205FE4
  if (crb(c,2)) { goto L_80205FFC; } // 80205FE8
  cmps(c,0,(int32_t)c->r[28],0); // 80205FEC
  if (crb(c,2)) { goto L_80205FFC; } // 80205FF0
  c->r[3]=c->r[28]|c->r[28]; // 80205FF4
  c->lr=0x80205FFCu; f_8017BC34(c); // 80205FF8
L_80205FFC:;
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 80205FFC
  cmps(c,0,(int32_t)c->r[4],0); // 80206000
  if (crb(c,2)) { goto L_80206018; } // 80206004
  c->r[3]=R32(c->r[29]+0x00000000u); // 80206008
  cmps(c,0,(int32_t)c->r[3],0); // 8020600C
  if (crb(c,2)) { goto L_80206018; } // 80206010
  c->lr=0x80206018u; f_8017BC34(c); // 80206014
L_80206018:;
  cmps(c,0,(int32_t)c->r[29],0); // 80206018
  if (crb(c,2)) { goto L_80206030; } // 8020601C
  W32(c->r[29]+0x00000000u,c->r[31]); // 80206020
  W32(c->r[29]+0x00000004u,c->r[31]); // 80206024
  W32(c->r[29]+0x00000008u,c->r[31]); // 80206028
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 8020602C
L_80206030:;
  c->r[0]=R32(c->r[13]+0xFFFFB138u); // 80206030
  cmpu(c,0,c->r[28],c->r[0]); // 80206034
  if (crb(c,2)) { goto L_8020604C; } // 80206038
  cmps(c,0,(int32_t)c->r[28],0); // 8020603C
  if (crb(c,2)) { goto L_8020604C; } // 80206040
  c->r[3]=c->r[28]|c->r[28]; // 80206044
  c->lr=0x8020604Cu; f_8017BB54(c); // 80206048
L_8020604C:;
  c->r[27]=c->r[27]+0x00000140u; // 8020604C
L_80206050:;
  cmpu(c,0,c->r[27],c->r[30]); // 80206050
  if (!crb(c,2)) { IRQCHK(c); goto L_80205FCC; } // 80206054
L_80206058:;
  c->r[3]=R32(c->r[13]+0xFFFFB138u); // 80206058
  c->r[4]=R32(c->r[13]+0xFFFFB140u); // 8020605C
  cmps(c,0,(int32_t)c->r[3],0); // 80206060
  if (crb(c,2)) { goto L_8020606C; } // 80206064
  c->lr=0x8020606Cu; f_8017BC34(c); // 80206068
L_8020606C:;
  c->r[0]=0u+0x00000000u; // 8020606C
  W32(c->r[13]+0xFFFFB140u,c->r[0]); // 80206070
L_80206074:;
  c->r[0]=R32(c->r[13]+0xFFFFB13Cu); // 80206074
  c->r[29]=R32(c->r[13]+0xFFFFB130u); // 80206078
  cmps(c,0,(int32_t)c->r[0],0); // 8020607C
  if (crb(c,2)) { goto L_802060D0; } // 80206080
  c->r[28]=0u+0x804D0000u; // 80206084
  c->r[30]=0u+0x00000000u; // 80206088
  c->r[28]=c->r[28]+0x00001378u; // 8020608C
  c->r[31]=0u+0x00000000u; // 80206090
  goto L_802060C0; // 80206094
L_80206098:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 80206098
  cmps(c,0,(int32_t)c->r[4],0); // 8020609C
  if (crb(c,2)) { goto L_802060B8; } // 802060A0
  c->r[3]=R32(c->r[13]+0xFFFFB138u); // 802060A4
  cmps(c,0,(int32_t)c->r[3],0); // 802060A8
  if (crb(c,2)) { goto L_802060B4; } // 802060AC
  c->lr=0x802060B4u; f_8017BC34(c); // 802060B0
L_802060B4:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 802060B4
L_802060B8:;
  c->r[28]=c->r[28]+0x00000004u; // 802060B8
  c->r[30]=c->r[30]+0x00000001u; // 802060BC
L_802060C0:;
  cmpu(c,0,c->r[30],c->r[29]); // 802060C0
  if (crb(c,0)) { IRQCHK(c); goto L_80206098; } // 802060C4
  c->r[0]=0u+0x00000000u; // 802060C8
  W32(c->r[13]+0xFFFFB13Cu,c->r[0]); // 802060CC
L_802060D0:;
  c->r[3]=R32(c->r[13]+0xFFFFB138u); // 802060D0
  cmps(c,0,(int32_t)c->r[3],0); // 802060D4
  if (crb(c,2)) { goto L_802060E8; } // 802060D8
  c->lr=0x802060E0u; f_8017BB54(c); // 802060DC
  c->r[0]=0u+0x00000000u; // 802060E0
  W32(c->r[13]+0xFFFFB138u,c->r[0]); // 802060E4
L_802060E8:;
  c->r[0]=0u+0x00000000u; // 802060E8
  c->r[11]=c->r[1]+0x00000020u; // 802060EC
  W32(c->r[13]+0xFFFFB130u,c->r[0]); // 802060F0
  c->lr=0x802060F8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802060F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802060F8
  c->lr=c->r[0]; // 802060FC
  c->r[1]=c->r[1]+0x00000020u; // 80206100
  return; // 80206104
}

// fn_80206108
void f_80206108(Ctx* __restrict c) {
  c->r[0]=c->r[3]|c->r[3]; // 80206108
  c->r[3]=R32(c->r[13]+0xFFFFB144u); // 8020610C
  W32(c->r[13]+0xFFFFB144u,c->r[0]); // 80206110
  return; // 80206114
}

// fn_80206118
void f_80206118(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80206118
  c->r[3]=0u+0x804D0000u; // 8020611C
  {uint32_t ea=c->r[3]+0x000013E0u; W16(ea,c->r[0]); c->r[3]=ea;} // 80206120
  W8(c->r[3]+0x00000010u,c->r[0]); // 80206124
  W16(c->r[3]+0x00000012u,c->r[0]); // 80206128
  W8(c->r[3]+0x00000022u,c->r[0]); // 8020612C
  W16(c->r[3]+0x00000024u,c->r[0]); // 80206130
  W8(c->r[3]+0x00000034u,c->r[0]); // 80206134
  W16(c->r[3]+0x00000036u,c->r[0]); // 80206138
  W8(c->r[3]+0x00000046u,c->r[0]); // 8020613C
  W16(c->r[3]+0x00000048u,c->r[0]); // 80206140
  W8(c->r[3]+0x00000058u,c->r[0]); // 80206144
  W16(c->r[3]+0x0000005Au,c->r[0]); // 80206148
  W8(c->r[3]+0x0000006Au,c->r[0]); // 8020614C
  W16(c->r[3]+0x0000006Cu,c->r[0]); // 80206150
  W8(c->r[3]+0x0000007Cu,c->r[0]); // 80206154
  W16(c->r[3]+0x0000007Eu,c->r[0]); // 80206158
  W8(c->r[3]+0x0000008Eu,c->r[0]); // 8020615C
  W16(c->r[3]+0x00000090u,c->r[0]); // 80206160
  W8(c->r[3]+0x000000A0u,c->r[0]); // 80206164
  W16(c->r[3]+0x000000A2u,c->r[0]); // 80206168
  W8(c->r[3]+0x000000B2u,c->r[0]); // 8020616C
  W16(c->r[3]+0x000000B4u,c->r[0]); // 80206170
  W8(c->r[3]+0x000000C4u,c->r[0]); // 80206174
  W16(c->r[3]+0x000000C6u,c->r[0]); // 80206178
  W8(c->r[3]+0x000000D6u,c->r[0]); // 8020617C
  W16(c->r[3]+0x000000D8u,c->r[0]); // 80206180
  W8(c->r[3]+0x000000E8u,c->r[0]); // 80206184
  W16(c->r[3]+0x000000EAu,c->r[0]); // 80206188
  W8(c->r[3]+0x000000FAu,c->r[0]); // 8020618C
  W16(c->r[3]+0x000000FCu,c->r[0]); // 80206190
  W8(c->r[3]+0x0000010Cu,c->r[0]); // 80206194
  W16(c->r[3]+0x0000010Eu,c->r[0]); // 80206198
  W8(c->r[3]+0x0000011Eu,c->r[0]); // 8020619C
  W16(c->r[3]+0x00000120u,c->r[0]); // 802061A0
  W8(c->r[3]+0x00000130u,c->r[0]); // 802061A4
  W16(c->r[3]+0x00000132u,c->r[0]); // 802061A8
  W8(c->r[3]+0x00000142u,c->r[0]); // 802061AC
  W16(c->r[3]+0x00000144u,c->r[0]); // 802061B0
  W8(c->r[3]+0x00000154u,c->r[0]); // 802061B4
  W16(c->r[3]+0x00000156u,c->r[0]); // 802061B8
  W8(c->r[3]+0x00000166u,c->r[0]); // 802061BC
  W16(c->r[3]+0x00000168u,c->r[0]); // 802061C0
  W8(c->r[3]+0x00000178u,c->r[0]); // 802061C4
  W16(c->r[3]+0x0000017Au,c->r[0]); // 802061C8
  W8(c->r[3]+0x0000018Au,c->r[0]); // 802061CC
  W16(c->r[3]+0x0000018Cu,c->r[0]); // 802061D0
  W8(c->r[3]+0x0000019Cu,c->r[0]); // 802061D4
  W16(c->r[3]+0x0000019Eu,c->r[0]); // 802061D8
  W8(c->r[3]+0x000001AEu,c->r[0]); // 802061DC
  W16(c->r[3]+0x000001B0u,c->r[0]); // 802061E0
  W8(c->r[3]+0x000001C0u,c->r[0]); // 802061E4
  W16(c->r[3]+0x000001C2u,c->r[0]); // 802061E8
  W8(c->r[3]+0x000001D2u,c->r[0]); // 802061EC
  W16(c->r[3]+0x000001D4u,c->r[0]); // 802061F0
  W8(c->r[3]+0x000001E4u,c->r[0]); // 802061F4
  W16(c->r[3]+0x000001E6u,c->r[0]); // 802061F8
  W8(c->r[3]+0x000001F6u,c->r[0]); // 802061FC
  W16(c->r[3]+0x000001F8u,c->r[0]); // 80206200
  W8(c->r[3]+0x00000208u,c->r[0]); // 80206204
  W16(c->r[3]+0x0000020Au,c->r[0]); // 80206208
  W8(c->r[3]+0x0000021Au,c->r[0]); // 8020620C
  W16(c->r[3]+0x0000021Cu,c->r[0]); // 80206210
  W8(c->r[3]+0x0000022Cu,c->r[0]); // 80206214
  return; // 80206218
}

// fn_8020621C
void f_8020621C(Ctx* __restrict c) {
  c->r[4]=0u+0x804D0000u; // 8020621C
  c->r[0]=0u+0x00000003u; // 80206220
  c->r[4]=c->r[4]+0x00001610u; // 80206224
  c->r[3]=0u+0x00000000u; // 80206228
  c->ctr=c->r[0]; // 8020622C
L_80206230:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 80206230
  W32(c->r[4]+0x00000004u,c->r[3]); // 80206234
  W32(c->r[4]+0x00000008u,c->r[3]); // 80206238
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 8020623C
  W32(c->r[4]+0x00000010u,c->r[3]); // 80206240
  W32(c->r[4]+0x00000014u,c->r[3]); // 80206244
  W32(c->r[4]+0x00000018u,c->r[3]); // 80206248
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 8020624C
  W32(c->r[4]+0x00000020u,c->r[3]); // 80206250
  W32(c->r[4]+0x00000024u,c->r[3]); // 80206254
  W32(c->r[4]+0x00000028u,c->r[3]); // 80206258
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8020625C
  W32(c->r[4]+0x00000030u,c->r[3]); // 80206260
  W32(c->r[4]+0x00000034u,c->r[3]); // 80206264
  W32(c->r[4]+0x00000038u,c->r[3]); // 80206268
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 8020626C
  W32(c->r[4]+0x00000040u,c->r[3]); // 80206270
  W32(c->r[4]+0x00000044u,c->r[3]); // 80206274
  W32(c->r[4]+0x00000048u,c->r[3]); // 80206278
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 8020627C
  W32(c->r[4]+0x00000050u,c->r[3]); // 80206280
  W32(c->r[4]+0x00000054u,c->r[3]); // 80206284
  W32(c->r[4]+0x00000058u,c->r[3]); // 80206288
  W32(c->r[4]+0x0000005Cu,c->r[3]); // 8020628C
  W32(c->r[4]+0x00000060u,c->r[3]); // 80206290
  W32(c->r[4]+0x00000064u,c->r[3]); // 80206294
  W32(c->r[4]+0x00000068u,c->r[3]); // 80206298
  W32(c->r[4]+0x0000006Cu,c->r[3]); // 8020629C
  W32(c->r[4]+0x00000070u,c->r[3]); // 802062A0
  W32(c->r[4]+0x00000074u,c->r[3]); // 802062A4
  W32(c->r[4]+0x00000078u,c->r[3]); // 802062A8
  W32(c->r[4]+0x0000007Cu,c->r[3]); // 802062AC
  W32(c->r[4]+0x00000080u,c->r[3]); // 802062B0
  W32(c->r[4]+0x00000084u,c->r[3]); // 802062B4
  W32(c->r[4]+0x00000088u,c->r[3]); // 802062B8
  W32(c->r[4]+0x0000008Cu,c->r[3]); // 802062BC
  W32(c->r[4]+0x00000090u,c->r[3]); // 802062C0
  W32(c->r[4]+0x00000094u,c->r[3]); // 802062C4
  W32(c->r[4]+0x00000098u,c->r[3]); // 802062C8
  W32(c->r[4]+0x0000009Cu,c->r[3]); // 802062CC
  c->r[4]=c->r[4]+0x000000A0u; // 802062D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80206230; } // 802062D4
  c->r[0]=0u+0x00000000u; // 802062D8
  W32(c->r[4]+0x00000000u,c->r[0]); // 802062DC
  W32(c->r[4]+0x00000004u,c->r[0]); // 802062E0
  W32(c->r[4]+0x00000008u,c->r[0]); // 802062E4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802062E8
  W32(c->r[4]+0x00000010u,c->r[0]); // 802062EC
  W32(c->r[4]+0x00000014u,c->r[0]); // 802062F0
  W32(c->r[4]+0x00000018u,c->r[0]); // 802062F4
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 802062F8
  W32(c->r[4]+0x00000020u,c->r[0]); // 802062FC
  W32(c->r[4]+0x00000024u,c->r[0]); // 80206300
  return; // 80206304
}

// fn_80206308
void f_80206308(Ctx* __restrict c) {
  return; // 80206308
}

// SOInit
void f_8020630C(Ctx* __restrict c) {
  trace_call(0x8020630Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020630C
  c->r[0]=c->lr; // 80206310
  W32(c->r[1]+0x00000024u,c->r[0]); // 80206314
  c->r[11]=c->r[1]+0x00000020u; // 80206318
  c->lr=0x80206320u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020631C
  c->r[27]=c->r[3]|c->r[3]; // 80206320
  c->r[31]=0u+0x00000000u; // 80206324
  c->lr=0x8020632Cu; f_80154410(c); // 80206328
  c->r[0]=R32(c->r[13]+0xFFFFB158u); // 8020632C
  c->r[30]=c->r[3]|c->r[3]; // 80206330
  cmps(c,0,(int32_t)c->r[0],0); // 80206334
  if (!crb(c,2)) { goto L_8020634C; } // 80206338
  c->r[3]=R32(c->r[13]+0xFFFF9520u); // 8020633C
  c->lr=0x80206344u; f_8014E714(c); // 80206340
  c->r[0]=0u+0x00000001u; // 80206344
  W32(c->r[13]+0xFFFFB158u,c->r[0]); // 80206348
L_8020634C:;
  c->r[0]=R8(c->r[13]+0xFFFFB150u); // 8020634C
  cmps(c,0,(int32_t)c->r[0],0); // 80206350
  if (crb(c,2)) { goto L_8020636C; } // 80206354
  if (crb(c,0)) { goto L_8020636C; } // 80206358
  cmps(c,0,(int32_t)c->r[0],3); // 8020635C
  if (!crb(c,0)) { goto L_8020636C; } // 80206360
  c->r[31]=0u+0xFFFFFFF9u; // 80206364
  goto L_80206498; // 80206368
L_8020636C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8020636C
  if (crb(c,2)) { goto L_8020638C; } // 80206370
  c->r[0]=R32(c->r[27]+0x00000000u); // 80206374
  cmps(c,0,(int32_t)c->r[0],0); // 80206378
  if (crb(c,2)) { goto L_8020638C; } // 8020637C
  c->r[0]=R32(c->r[27]+0x00000004u); // 80206380
  cmps(c,0,(int32_t)c->r[0],0); // 80206384
  if (!crb(c,2)) { goto L_80206394; } // 80206388
L_8020638C:;
  c->r[31]=0u+0xFFFFFFE4u; // 8020638C
  goto L_80206498; // 80206390
L_80206394:;
  c->r[28]=0u+0x804D0000u; // 80206394
  c->r[4]=0u+0x00000000u; // 80206398
  c->r[3]=c->r[28]+0x00001818u; // 8020639C
  c->r[5]=0u+0x00000018u; // 802063A0
  c->lr=0x802063A8u; f_801FC778(c); // 802063A4
  c->r[12]=R32(c->r[27]+0x00000000u); // 802063A8
  c->r[29]=c->r[28]+0x00001818u; // 802063AC
  c->r[4]=0u+0x00000000u; // 802063B0
  c->r[3]=0u+0xFFFFFFFEu; // 802063B4
  W32(c->r[28]+0x00001818u,c->r[12]); // 802063B8
  cmps(c,0,(int32_t)c->r[12],0); // 802063BC
  c->r[0]=0u+0xFFFFFFFFu; // 802063C0
  c->r[5]=R32(c->r[27]+0x00000004u); // 802063C4
  W32(c->r[29]+0x00000004u,c->r[5]); // 802063C8
  W32(c->r[29]+0x00000014u,c->r[4]); // 802063CC
  W32(c->r[29]+0x00000008u,c->r[3]); // 802063D0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 802063D4
  if (crb(c,2)) { goto L_8020646C; } // 802063D8
  c->r[3]=0u+0x0000000Bu; // 802063DC
  c->r[4]=0u+0x00000460u; // 802063E0
  c->ctr=c->r[12]; // 802063E4
  if (true) { c->lr=0x802063ECu; dispatch(c,c->ctr); } // 802063E8
  cmps(c,0,(int32_t)c->r[3],0); // 802063EC
  if (crb(c,2)) { goto L_80206470; } // 802063F0
  c->r[4]=R32(c->r[29]+0x00000014u); // 802063F4
  c->r[0]=R32(c->r[13]+0xFFFF9524u); // 802063F8
  c->r[4]=c->r[4]+0x00000001u; // 802063FC
  cmps(c,0,(int32_t)c->r[0],0); // 80206400
  W32(c->r[29]+0x00000014u,c->r[4]); // 80206404
  if (crb(c,2)) { goto L_80206470; } // 80206408
  c->r[4]=rotl(c->r[3],0)&0x1FFFFFFFu; // 8020640C
  c->r[0]=0u+0x10000000u; // 80206410
  cmpu(c,0,c->r[4],c->r[0]); // 80206414
  if (crb(c,0)) { goto L_80206428; } // 80206418
  c->r[0]=0u+0x18000000u; // 8020641C
  cmpu(c,0,c->r[4],c->r[0]); // 80206420
  if (crb(c,0)) { goto L_80206470; } // 80206424
L_80206428:;
  cmps(c,0,(int32_t)c->r[3],0); // 80206428
  if (crb(c,2)) { goto L_80206464; } // 8020642C
  c->r[6]=0u+0x804D0000u; // 80206430
  c->r[6]=c->r[6]+0x00001818u; // 80206434
  c->r[12]=R32(c->r[6]+0x00000004u); // 80206438
  cmps(c,0,(int32_t)c->r[12],0); // 8020643C
  if (crb(c,2)) { goto L_80206464; } // 80206440
  c->r[5]=R32(c->r[6]+0x00000014u); // 80206444
  c->r[4]=c->r[3]|c->r[3]; // 80206448
  c->r[3]=0u+0x0000000Bu; // 8020644C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80206450
  c->r[5]=0u+0x00000460u; // 80206454
  W32(c->r[6]+0x00000014u,c->r[0]); // 80206458
  c->ctr=c->r[12]; // 8020645C
  if (true) { c->lr=0x80206464u; dispatch(c,c->ctr); } // 80206460
L_80206464:;
  c->r[3]=0u+0x00000000u; // 80206464
  goto L_80206470; // 80206468
L_8020646C:;
  c->r[3]=0u+0x00000000u; // 8020646C
L_80206470:;
  c->r[4]=0u+0x804D0000u; // 80206470
  cmps(c,0,(int32_t)c->r[3],0); // 80206474
  c->r[4]=c->r[4]+0x00001818u; // 80206478
  W32(c->r[4]+0x00000010u,c->r[3]); // 8020647C
  if (!crb(c,2)) { goto L_80206488; } // 80206480
  c->r[31]=0u+0xFFFFFFCFu; // 80206484
L_80206488:;
  cmps(c,0,(int32_t)c->r[3],0); // 80206488
  if (crb(c,2)) { goto L_80206498; } // 8020648C
  c->r[0]=0u+0x00000001u; // 80206490
  W8(c->r[13]+0xFFFFB150u,c->r[0]); // 80206494
L_80206498:;
  c->lr=0x8020649Cu; f_8015716C(c); // 80206498
  cmps(c,0,(int32_t)c->r[3],0); // 8020649C
  if (crb(c,2)) { goto L_802064AC; } // 802064A0
  W32(c->r[3]+0x0000030Cu,c->r[31]); // 802064A4
  goto L_802064B0; // 802064A8
L_802064AC:;
  W32(c->r[13]+0xFFFFB154u,c->r[31]); // 802064AC
L_802064B0:;
  c->r[3]=c->r[30]|c->r[30]; // 802064B0
  c->lr=0x802064B8u; f_80154438(c); // 802064B4
  c->r[11]=c->r[1]+0x00000020u; // 802064B8
  c->r[3]=c->r[31]|c->r[31]; // 802064BC
  c->lr=0x802064C4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802064C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802064C4
  c->lr=c->r[0]; // 802064C8
  c->r[1]=c->r[1]+0x00000020u; // 802064CC
  return; // 802064D0
}

// SOFinish
void f_802064D4(Ctx* __restrict c) {
  trace_call(0x802064D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802064D4
  c->r[0]=c->lr; // 802064D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802064DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802064E0
  c->r[31]=0u+0x00000000u; // 802064E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 802064E8
  c->lr=0x802064F0u; f_80154410(c); // 802064EC
  c->r[0]=R8(c->r[13]+0xFFFFB150u); // 802064F0
  c->r[30]=c->r[3]|c->r[3]; // 802064F4
  cmps(c,0,(int32_t)c->r[0],1); // 802064F8
  if (crb(c,2)) { goto L_80206524; } // 802064FC
  if (!crb(c,0)) { goto L_80206510; } // 80206500
  cmps(c,0,(int32_t)c->r[0],0); // 80206504
  if (!crb(c,0)) { goto L_8020651C; } // 80206508
  goto L_80206594; // 8020650C
L_80206510:;
  cmps(c,0,(int32_t)c->r[0],3); // 80206510
  if (!crb(c,0)) { goto L_80206594; } // 80206514
  goto L_80206590; // 80206518
L_8020651C:;
  c->r[31]=0u+0xFFFFFFF9u; // 8020651C
  goto L_80206594; // 80206520
L_80206524:;
  c->r[5]=0u+0x804D0000u; // 80206524
  c->r[5]=c->r[5]+0x00001818u; // 80206528
  c->r[0]=R32(c->r[5]+0x00000008u); // 8020652C
  cmps(c,0,(int32_t)c->r[0],-2); // 80206530
  if (!crb(c,1)) { goto L_80206540; } // 80206534
  c->r[31]=0u+0xFFFFFFF6u; // 80206538
  goto L_80206594; // 8020653C
L_80206540:;
  c->r[3]=R32(c->r[5]+0x00000014u); // 80206540
  cmps(c,0,(int32_t)c->r[3],1); // 80206544
  if (!crb(c,1)) { goto L_80206554; } // 80206548
  c->r[31]=0u+0xFFFFFFFAu; // 8020654C
  goto L_80206594; // 80206550
L_80206554:;
  c->r[4]=R32(c->r[5]+0x00000010u); // 80206554
  c->r[0]=0u+0x00000000u; // 80206558
  W8(c->r[13]+0xFFFFB150u,c->r[0]); // 8020655C
  cmps(c,0,(int32_t)c->r[4],0); // 80206560
  if (crb(c,2)) { goto L_80206594; } // 80206564
  c->r[12]=R32(c->r[5]+0x00000004u); // 80206568
  cmps(c,0,(int32_t)c->r[12],0); // 8020656C
  if (crb(c,2)) { goto L_80206594; } // 80206570
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80206574
  c->r[3]=0u+0x0000000Bu; // 80206578
  W32(c->r[5]+0x00000014u,c->r[0]); // 8020657C
  c->r[5]=0u+0x00000460u; // 80206580
  c->ctr=c->r[12]; // 80206584
  if (true) { c->lr=0x8020658Cu; dispatch(c,c->ctr); } // 80206588
  goto L_80206594; // 8020658C
L_80206590:;
  c->r[31]=0u+0xFFFFFFE6u; // 80206590
L_80206594:;
  c->lr=0x80206598u; f_8015716C(c); // 80206594
  cmps(c,0,(int32_t)c->r[3],0); // 80206598
  if (crb(c,2)) { goto L_802065A8; } // 8020659C
  W32(c->r[3]+0x0000030Cu,c->r[31]); // 802065A0
  goto L_802065AC; // 802065A4
L_802065A8:;
  W32(c->r[13]+0xFFFFB154u,c->r[31]); // 802065A8
L_802065AC:;
  c->r[3]=c->r[30]|c->r[30]; // 802065AC
  c->lr=0x802065B4u; f_80154438(c); // 802065B0
  c->r[3]=c->r[31]|c->r[31]; // 802065B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802065B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 802065BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802065C0
  c->lr=c->r[0]; // 802065C4
  c->r[1]=c->r[1]+0x00000010u; // 802065C8
  return; // 802065CC
}

// SOStartupEx
void f_802065D0(Ctx* __restrict c) {
  trace_call(0x802065D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802065D0
  c->r[0]=c->lr; // 802065D4
  W32(c->r[1]+0x00000064u,c->r[0]); // 802065D8
  c->r[11]=c->r[1]+0x00000060u; // 802065DC
  c->lr=0x802065E4u; f_80252B70(c); // 802065E0
  cmps(c,0,(int32_t)c->r[3],0); // 802065E4
  c->r[14]=c->r[3]|c->r[3]; // 802065E8
  c->r[16]=0u+0x00000000u; // 802065EC
  c->r[17]=0u+0x00000000u; // 802065F0
  if (crb(c,2)) { goto L_80206628; } // 802065F4
  c->lr=0x802065FCu; f_801584AC(c); // 802065F8
  c->r[6]=0u+0x80000000u; // 802065FC
  c->r[5]=0u+0x10620000u; // 80206600
  c->r[6]=R32(c->r[6]+0x000000F8u); // 80206604
  c->r[7]=c->r[5]+0x00004DD3u; // 80206608
  c->r[0]=0u+0x00000000u; // 8020660C
  c->r[5]=rotl(c->r[6],30)&0x3FFFFFFFu; // 80206610
  c->r[5]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 80206614
  c->r[5]=rotl(c->r[5],26)&0x03FFFFFFu; // 80206618
  c->r[5]=(uint32_t)((int32_t)c->r[14]*(int32_t)c->r[5]); // 8020661C
  c->r[16]=addc(c,c->r[5],c->r[4],0); // 80206620
  c->r[17]=addc(c,c->r[0],c->r[3],c->xer_ca); // 80206624
L_80206628:;
  c->r[3]=0u+0x804D0000u; // 80206628
  c->r[15]=0u+0x00000004u; // 8020662C
  c->r[20]=0u+0x80000000u; // 80206630
  c->r[21]=0u+0x10620000u; // 80206634
  c->r[25]=c->r[3]+0x00001818u; // 80206638
  c->r[22]=0u+0x00000000u; // 8020663C
  c->r[23]=0u+0x00000064u; // 80206640
  c->r[24]=0u+0x802F0000u; // 80206644
  c->r[19]=0u+0xFFFFFFFFu; // 80206648
  c->r[31]=0u+0x802F0000u; // 8020664C
  c->r[14]=0u+0x00000002u; // 80206650
L_80206654:;
  c->lr=0x80206658u; f_80154410(c); // 80206654
  c->r[0]=R8(c->r[13]+0xFFFFB150u); // 80206658
  c->r[26]=c->r[3]|c->r[3]; // 8020665C
  cmps(c,0,(int32_t)c->r[0],1); // 80206660
  if (crb(c,2)) { goto L_8020668C; } // 80206664
  if (!crb(c,0)) { goto L_80206670; } // 80206668
  goto L_8020667C; // 8020666C
L_80206670:;
  cmps(c,0,(int32_t)c->r[0],3); // 80206670
  if (!crb(c,0)) { goto L_8020667C; } // 80206674
  goto L_80206684; // 80206678
L_8020667C:;
  c->r[18]=0u+0xFFFFFFD9u; // 8020667C
  goto L_8020690C; // 80206680
L_80206684:;
  c->r[18]=0u+0xFFFFFFF9u; // 80206684
  goto L_8020690C; // 80206688
L_8020668C:;
  c->r[0]=R32(c->r[25]+0x00000008u); // 8020668C
  cmps(c,0,(int32_t)c->r[0],-2); // 80206690
  if (!crb(c,1)) { goto L_802066A0; } // 80206694
  c->r[18]=0u+0xFFFFFFF6u; // 80206698
  goto L_8020690C; // 8020669C
L_802066A0:;
  c->lr=0x802066A4u; f_8015716C(c); // 802066A0
  cmps(c,0,(int32_t)c->r[3],0); // 802066A4
  if (!crb(c,2)) { goto L_802066B4; } // 802066A8
  c->r[18]=0u+0x80000000u; // 802066AC
  goto L_8020690C; // 802066B0
L_802066B4:;
  W32(c->r[25]+0x00000008u,c->r[19]); // 802066B4
  c->r[3]=c->r[26]|c->r[26]; // 802066B8
  c->lr=0x802066C0u; f_80154438(c); // 802066BC
  c->r[26]=(uint32_t)((int32_t)c->r[22]*(int32_t)c->r[23]); // 802066C0
  c->r[27]=c->r[21]+0x00004DD3u; // 802066C4
  c->r[18]=c->r[16]|c->r[17]; // 802066C8
  c->r[29]=c->r[17]^0x80000000u; // 802066CC
L_802066D0:;
  c->lr=0x802066D4u; f_801FA480(c); // 802066D0
  cmps(c,0,(int32_t)c->r[3],-8); // 802066D4
  c->r[28]=c->r[3]|c->r[3]; // 802066D8
  if (crb(c,2)) { goto L_802066E8; } // 802066DC
  cmps(c,0,(int32_t)c->r[3],1); // 802066E0
  if (!crb(c,2)) { goto L_80206744; } // 802066E4
L_802066E8:;
  c->r[0]=R32(c->r[20]+0x000000F8u); // 802066E8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802066EC
  c->r[0]=(uint32_t)(((uint64_t)c->r[27]*(uint64_t)c->r[0])>>32); // 802066F0
  c->r[3]=rotl(c->r[0],26)&0x03FFFFFFu; // 802066F4
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[23])>>32); // 802066F8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 802066FC
  c->r[3]=c->r[0]+c->r[26]; // 80206700
  c->lr=0x80206708u; f_801583D8(c); // 80206704
  cmps(c,0,(int32_t)c->r[18],0); // 80206708
  if (crb(c,2)) { IRQCHK(c); goto L_802066D0; } // 8020670C
  c->lr=0x80206714u; f_801584AC(c); // 80206710
  c->r[3]=c->r[3]^0x80000000u; // 80206714
  c->r[0]=addc(c,~c->r[4],c->r[16],1); // 80206718
  c->r[3]=addc(c,~c->r[3],c->r[29],c->xer_ca); // 8020671C
  c->r[3]=addc(c,~c->r[29],c->r[29],c->xer_ca); // 80206720
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80206724
  if (crb(c,2)) { IRQCHK(c); goto L_802066D0; } // 80206728
  cmps(c,0,(int32_t)c->r[28],1); // 8020672C
  if (!crb(c,2)) { goto L_8020673C; } // 80206730
  c->r[18]=0u+0xFFFFFF87u; // 80206734
  goto L_802068D4; // 80206738
L_8020673C:;
  c->r[18]=0u+0x80000000u; // 8020673C
  goto L_802068D4; // 80206740
L_80206744:;
  cmps(c,0,(int32_t)c->r[3],0); // 80206744
  if (!crb(c,0)) { goto L_80206754; } // 80206748
  c->r[18]=0u+0x80000000u; // 8020674C
  goto L_802068D4; // 80206750
L_80206754:;
  cmps(c,0,(int32_t)c->r[3],2); // 80206754
  if (!crb(c,2)) { goto L_80206764; } // 80206758
  c->r[18]=0u+0xFFFFFFD3u; // 8020675C
  goto L_802068D4; // 80206760
L_80206764:;
  c->r[26]=(uint32_t)((int32_t)c->r[22]*(int32_t)c->r[23]); // 80206764
  c->r[27]=c->r[21]+0x00004DD3u; // 80206768
  c->r[18]=c->r[16]|c->r[17]; // 8020676C
  c->r[28]=c->r[17]^0x80000000u; // 80206770
L_80206774:;
  c->r[3]=c->r[24]+0xFFFF9F80u; // 80206774
  c->r[4]=0u+0x00000000u; // 80206778
  c->lr=0x80206780u; f_80186284(c); // 8020677C
  cmps(c,0,(int32_t)c->r[3],-6); // 80206780
  W32(c->r[25]+0x0000000Cu,c->r[3]); // 80206784
  if (!crb(c,2)) { goto L_802067D8; } // 80206788
  c->r[0]=R32(c->r[20]+0x000000F8u); // 8020678C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80206790
  c->r[0]=(uint32_t)(((uint64_t)c->r[27]*(uint64_t)c->r[0])>>32); // 80206794
  c->r[3]=rotl(c->r[0],26)&0x03FFFFFFu; // 80206798
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[23])>>32); // 8020679C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 802067A0
  c->r[3]=c->r[0]+c->r[26]; // 802067A4
  c->lr=0x802067ACu; f_801583D8(c); // 802067A8
  cmps(c,0,(int32_t)c->r[18],0); // 802067AC
  if (crb(c,2)) { IRQCHK(c); goto L_80206774; } // 802067B0
  c->lr=0x802067B8u; f_801584AC(c); // 802067B4
  c->r[3]=c->r[3]^0x80000000u; // 802067B8
  c->r[0]=addc(c,~c->r[4],c->r[16],1); // 802067BC
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 802067C0
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 802067C4
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 802067C8
  if (crb(c,2)) { IRQCHK(c); goto L_80206774; } // 802067CC
  c->r[18]=0u+0x80000000u; // 802067D0
  goto L_802068D4; // 802067D4
L_802067D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802067D8
  if (!crb(c,0)) { goto L_802067E8; } // 802067DC
  c->r[18]=0u+0x80000000u; // 802067E0
  goto L_802068D4; // 802067E4
L_802067E8:;
  c->r[28]=(uint32_t)((int32_t)c->r[22]*(int32_t)c->r[23]); // 802067E8
  c->r[18]=0u+0x00000000u; // 802067EC
  W32(c->r[1]+0x00000008u,c->r[18]); // 802067F0
  c->r[27]=c->r[21]+0x00004DD3u; // 802067F4
  c->r[29]=c->r[16]|c->r[17]; // 802067F8
  c->r[30]=c->r[17]^0x80000000u; // 802067FC
L_80206800:;
  c->r[3]=c->r[1]+0x00000008u; // 80206800
  c->lr=0x80206808u; f_801FB598(c); // 80206804
  cmps(c,0,(int32_t)c->r[3],-29); // 80206808
  c->r[26]=c->r[3]|c->r[3]; // 8020680C
  if (!crb(c,2)) { goto L_8020685C; } // 80206810
  c->r[0]=R32(c->r[20]+0x000000F8u); // 80206814
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80206818
  c->r[0]=(uint32_t)(((uint64_t)c->r[27]*(uint64_t)c->r[0])>>32); // 8020681C
  c->r[3]=rotl(c->r[0],26)&0x03FFFFFFu; // 80206820
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[23])>>32); // 80206824
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 80206828
  c->r[3]=c->r[0]+c->r[28]; // 8020682C
  c->lr=0x80206834u; f_801583D8(c); // 80206830
  cmps(c,0,(int32_t)c->r[29],0); // 80206834
  if (crb(c,2)) { IRQCHK(c); goto L_80206800; } // 80206838
  c->lr=0x80206840u; f_801584AC(c); // 8020683C
  c->r[3]=c->r[3]^0x80000000u; // 80206840
  c->r[0]=addc(c,~c->r[4],c->r[16],1); // 80206844
  c->r[3]=addc(c,~c->r[3],c->r[30],c->xer_ca); // 80206848
  c->r[3]=addc(c,~c->r[30],c->r[30],c->xer_ca); // 8020684C
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80206850
  if (crb(c,2)) { IRQCHK(c); goto L_80206800; } // 80206854
  c->r[18]=0u+0x80000000u; // 80206858
L_8020685C:;
  cmps(c,0,(int32_t)c->r[18],0); // 8020685C
  if (!crb(c,2)) { goto L_802068B0; } // 80206860
  c->r[0]=c->r[26]+0x00000021u; // 80206864
  c->r[4]=R32(c->r[1]+0x00000008u); // 80206868
  cmpu(c,0,c->r[0],0x00000021u); // 8020686C
  c->r[18]=0u+0xFFFFFFE4u; // 80206870
  if (crb(c,1)) { goto L_802068B0; } // 80206874
  c->r[3]=c->r[31]+0xFFFF9F90u; // 80206878
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8020687C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80206880
  c->ctr=c->r[3]; // 80206884
  if (true) { switch (c->ctr) { case 0x8020688Cu: goto L_8020688C; case 0x80206894u: goto L_80206894; case 0x8020689Cu: goto L_8020689C; case 0x802068A4u: goto L_802068A4; case 0x802068ACu: goto L_802068AC; case 0x802068B0u: goto L_802068B0; default: break; } dispatch(c,c->ctr); return; } // 80206888
L_8020688C:;
  c->r[18]=0u+0x00000000u; // 8020688C
  goto L_802068B0; // 80206890
L_80206894:;
  c->r[18]=0u+0xFFFFFFD0u; // 80206894
  goto L_802068B0; // 80206898
L_8020689C:;
  c->r[18]=c->r[4]|c->r[4]; // 8020689C
  goto L_802068B0; // 802068A0
L_802068A4:;
  c->r[18]=0u+0x80000000u; // 802068A4
  goto L_802068B0; // 802068A8
L_802068AC:;
  c->r[18]=0u+0xFFFFFFE6u; // 802068AC
L_802068B0:;
  cmps(c,0,(int32_t)c->r[18],0); // 802068B0
  if (crb(c,2)) { goto L_802068D4; } // 802068B4
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 802068B8
  c->lr=0x802068C0u; f_80186464(c); // 802068BC
  cmps(c,0,(int32_t)c->r[3],0); // 802068C0
  if (!crb(c,0)) { goto L_802068D0; } // 802068C4
  c->r[18]=0u+0x80000000u; // 802068C8
  goto L_802068D4; // 802068CC
L_802068D0:;
  W32(c->r[25]+0x0000000Cu,c->r[19]); // 802068D0
L_802068D4:;
  c->lr=0x802068D8u; f_80154410(c); // 802068D4
  cmps(c,0,(int32_t)c->r[18],0); // 802068D8
  c->r[26]=c->r[3]|c->r[3]; // 802068DC
  if (!crb(c,2)) { goto L_802068F0; } // 802068E0
  W8(c->r[13]+0xFFFFB150u,c->r[14]); // 802068E4
  W32(c->r[25]+0x00000008u,c->r[22]); // 802068E8
  goto L_8020690C; // 802068EC
L_802068F0:;
  c->r[3]=c->r[18]+0x80000000u; // 802068F0
  c->r[0]=0u+0x00000001u; // 802068F4
  cmpu(c,0,c->r[3],0x00000000u); // 802068F8
  W8(c->r[13]+0xFFFFB150u,c->r[0]); // 802068FC
  if (crb(c,2)) { goto L_8020690C; } // 80206900
  c->r[0]=0u+0xFFFFFFFEu; // 80206904
  W32(c->r[25]+0x00000008u,c->r[0]); // 80206908
L_8020690C:;
  c->lr=0x80206910u; f_8015716C(c); // 8020690C
  cmps(c,0,(int32_t)c->r[3],0); // 80206910
  if (crb(c,2)) { goto L_80206920; } // 80206914
  W32(c->r[3]+0x0000030Cu,c->r[18]); // 80206918
  goto L_80206924; // 8020691C
L_80206920:;
  W32(c->r[13]+0xFFFFB154u,c->r[18]); // 80206920
L_80206924:;
  c->r[3]=c->r[26]|c->r[26]; // 80206924
  c->lr=0x8020692Cu; f_80154438(c); // 80206928
  cmps(c,0,(int32_t)c->r[18],0); // 8020692C
  if (!crb(c,2)) { goto L_802069B4; } // 80206930
  c->r[0]=c->r[16]|c->r[17]; cr0(c,c->r[0]); // 80206934
  if (crb(c,2)) { goto L_8020694C; } // 80206938
  c->lr=0x80206940u; f_801584AC(c); // 8020693C
  c->r[4]=addc(c,~c->r[4],c->r[16],1); // 80206940
  c->r[3]=addc(c,~c->r[3],c->r[17],c->xer_ca); // 80206944
  goto L_80206954; // 80206948
L_8020694C:;
  c->r[4]=0u+0x00000000u; // 8020694C
  c->r[3]=c->r[4]|c->r[4]; // 80206950
L_80206954:;
  c->r[0]=c->r[16]|c->r[17]; cr0(c,c->r[0]); // 80206954
  if (crb(c,2)) { goto L_80206980; } // 80206958
  c->r[0]=c->r[22]^0x80000000u; // 8020695C
  c->r[6]=c->r[3]^0x80000000u; // 80206960
  c->r[5]=addc(c,~c->r[4],c->r[22],1); // 80206964
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 80206968
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8020696C
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 80206970
  if (!crb(c,2)) { goto L_80206980; } // 80206974
  c->r[18]=0u+0xFFFFFFB4u; // 80206978
  goto L_802069A8; // 8020697C
L_80206980:;
  c->r[0]=R32(c->r[20]+0x000000F8u); // 80206980
  c->r[6]=c->r[21]+0x00004DD3u; // 80206984
  c->r[5]=0u+0x00000000u; // 80206988
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8020698C
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[0])>>32); // 80206990
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 80206994
  c->lr=0x8020699Cu; f_80252CF4(c); // 80206998
  c->r[3]=c->r[4]|c->r[4]; // 8020699C
  c->lr=0x802069A4u; f_80207228(c); // 802069A0
  c->r[18]=c->r[3]|c->r[3]; // 802069A4
L_802069A8:;
  cmps(c,0,(int32_t)c->r[18],0); // 802069A8
  if (crb(c,2)) { goto L_802069B4; } // 802069AC
  c->lr=0x802069B4u; f_802069F8(c); // 802069B0
L_802069B4:;
  c->lr=0x802069B8u; f_8015716C(c); // 802069B4
  cmps(c,0,(int32_t)c->r[3],0); // 802069B8
  if (crb(c,2)) { goto L_802069C8; } // 802069BC
  W32(c->r[3]+0x0000030Cu,c->r[18]); // 802069C0
  goto L_802069CC; // 802069C4
L_802069C8:;
  W32(c->r[13]+0xFFFFB154u,c->r[18]); // 802069C8
L_802069CC:;
  cmps(c,0,(int32_t)c->r[18],-112); // 802069CC
  if (!crb(c,2)) { goto L_802069DC; } // 802069D0
  c->r[15]=addc(c,c->r[15],0xFFFFFFFFu,0); cr0(c,c->r[15]); // 802069D4
  if (!crb(c,0)) { IRQCHK(c); goto L_80206654; } // 802069D8
L_802069DC:;
  c->r[11]=c->r[1]+0x00000060u; // 802069DC
  c->r[3]=c->r[18]|c->r[18]; // 802069E0
  c->lr=0x802069E8u; f_80252BBC(c); // 802069E4
  c->r[0]=R32(c->r[1]+0x00000064u); // 802069E8
  c->lr=c->r[0]; // 802069EC
  c->r[1]=c->r[1]+0x00000060u; // 802069F0
  return; // 802069F4
}

// SOCleanup
void f_802069F8(Ctx* __restrict c) {
  trace_call(0x802069F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802069F8
  c->r[0]=c->lr; // 802069FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80206A00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80206A04
  W32(c->r[1]+0x00000018u,c->r[30]); // 80206A08
  W32(c->r[1]+0x00000014u,c->r[29]); // 80206A0C
  c->lr=0x80206A14u; f_80154410(c); // 80206A10
  c->r[0]=R8(c->r[13]+0xFFFFB150u); // 80206A14
  c->r[4]=0u+0x00000000u; // 80206A18
  W32(c->r[1]+0x00000008u,c->r[4]); // 80206A1C
  c->r[29]=c->r[3]|c->r[3]; // 80206A20
  cmps(c,0,(int32_t)c->r[0],1); // 80206A24
  if (crb(c,2)) { goto L_80206A48; } // 80206A28
  if (!crb(c,0)) { goto L_80206A34; } // 80206A2C
  goto L_80206A40; // 80206A30
L_80206A34:;
  cmps(c,0,(int32_t)c->r[0],3); // 80206A34
  if (!crb(c,0)) { goto L_80206A40; } // 80206A38
  goto L_80206A50; // 80206A3C
L_80206A40:;
  c->r[30]=0u+0xFFFFFFD9u; // 80206A40
  goto L_80206B68; // 80206A44
L_80206A48:;
  c->r[30]=0u+0xFFFFFFF9u; // 80206A48
  goto L_80206B68; // 80206A4C
L_80206A50:;
  c->r[31]=0u+0x804D0000u; // 80206A50
  c->r[31]=c->r[31]+0x00001818u; // 80206A54
  c->r[0]=R32(c->r[31]+0x00000008u); // 80206A58
  cmps(c,0,(int32_t)c->r[0],0); // 80206A5C
  if (!crb(c,0)) { goto L_80206A6C; } // 80206A60
  c->r[30]=0u+0xFFFFFFF6u; // 80206A64
  goto L_80206B68; // 80206A68
L_80206A6C:;
  c->lr=0x80206A70u; f_8015716C(c); // 80206A6C
  cmps(c,0,(int32_t)c->r[3],0); // 80206A70
  if (!crb(c,2)) { goto L_80206A80; } // 80206A74
  c->r[30]=0u+0x80000000u; // 80206A78
  goto L_80206B68; // 80206A7C
L_80206A80:;
  c->r[0]=0u+0xFFFFFFFFu; // 80206A80
  c->r[3]=c->r[29]|c->r[29]; // 80206A84
  W32(c->r[31]+0x00000008u,c->r[0]); // 80206A88
  c->lr=0x80206A90u; f_80154438(c); // 80206A8C
  c->r[3]=c->r[1]+0x00000008u; // 80206A90
  c->lr=0x80206A98u; f_801FB5A8(c); // 80206A94
  c->r[0]=c->r[3]+0x00000021u; // 80206A98
  c->r[4]=R32(c->r[1]+0x00000008u); // 80206A9C
  cmpu(c,0,c->r[0],0x00000021u); // 80206AA0
  c->r[30]=0u+0xFFFFFFE4u; // 80206AA4
  if (crb(c,1)) { goto L_80206AE8; } // 80206AA8
  c->r[3]=0u+0x802F0000u; // 80206AAC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80206AB0
  c->r[3]=c->r[3]+0xFFFFA018u; // 80206AB4
  c->r[3]=R32(c->r[3]+c->r[0]); // 80206AB8
  c->ctr=c->r[3]; // 80206ABC
  if (true) { switch (c->ctr) { case 0x80206AC4u: goto L_80206AC4; case 0x80206ACCu: goto L_80206ACC; case 0x80206AD4u: goto L_80206AD4; case 0x80206ADCu: goto L_80206ADC; case 0x80206AE4u: goto L_80206AE4; case 0x80206AE8u: goto L_80206AE8; default: break; } dispatch(c,c->ctr); return; } // 80206AC0
L_80206AC4:;
  c->r[30]=0u+0x00000000u; // 80206AC4
  goto L_80206AE8; // 80206AC8
L_80206ACC:;
  c->r[30]=0u+0xFFFFFFD0u; // 80206ACC
  goto L_80206AE8; // 80206AD0
L_80206AD4:;
  c->r[30]=c->r[4]|c->r[4]; // 80206AD4
  goto L_80206AE8; // 80206AD8
L_80206ADC:;
  c->r[30]=0u+0x80000000u; // 80206ADC
  goto L_80206AE8; // 80206AE0
L_80206AE4:;
  c->r[30]=0u+0xFFFFFFE6u; // 80206AE4
L_80206AE8:;
  cmps(c,0,(int32_t)c->r[30],0); // 80206AE8
  if (!crb(c,2)) { goto L_80206B18; } // 80206AEC
  c->r[31]=0u+0x804D0000u; // 80206AF0
  c->r[31]=c->r[31]+0x00001818u; // 80206AF4
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80206AF8
  c->lr=0x80206B00u; f_80186464(c); // 80206AFC
  cmps(c,0,(int32_t)c->r[3],0); // 80206B00
  if (!crb(c,0)) { goto L_80206B10; } // 80206B04
  c->r[30]=0u+0x80000000u; // 80206B08
  goto L_80206B18; // 80206B0C
L_80206B10:;
  c->r[0]=0u+0xFFFFFFFFu; // 80206B10
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80206B14
L_80206B18:;
  c->lr=0x80206B1Cu; f_80154410(c); // 80206B18
  cmps(c,0,(int32_t)c->r[30],0); // 80206B1C
  c->r[29]=c->r[3]|c->r[3]; // 80206B20
  if (!crb(c,2)) { goto L_80206B44; } // 80206B24
  c->r[3]=0u+0x804D0000u; // 80206B28
  c->r[4]=0u+0x00000001u; // 80206B2C
  c->r[3]=c->r[3]+0x00001818u; // 80206B30
  c->r[0]=0u+0xFFFFFFFEu; // 80206B34
  W8(c->r[13]+0xFFFFB150u,c->r[4]); // 80206B38
  W32(c->r[3]+0x00000008u,c->r[0]); // 80206B3C
  goto L_80206B68; // 80206B40
L_80206B44:;
  c->r[0]=c->r[30]+0x80000000u; // 80206B44
  cmpu(c,0,c->r[0],0x00000000u); // 80206B48
  if (crb(c,2)) { goto L_80206B68; } // 80206B4C
  c->r[3]=0u+0x804D0000u; // 80206B50
  c->r[4]=0u+0x00000002u; // 80206B54
  c->r[3]=c->r[3]+0x00001818u; // 80206B58
  c->r[0]=0u+0x00000000u; // 80206B5C
  W8(c->r[13]+0xFFFFB150u,c->r[4]); // 80206B60
  W32(c->r[3]+0x00000008u,c->r[0]); // 80206B64
L_80206B68:;
  c->lr=0x80206B6Cu; f_8015716C(c); // 80206B68
  cmps(c,0,(int32_t)c->r[3],0); // 80206B6C
  if (crb(c,2)) { goto L_80206B7C; } // 80206B70
  W32(c->r[3]+0x0000030Cu,c->r[30]); // 80206B74
  goto L_80206B80; // 80206B78
L_80206B7C:;
  W32(c->r[13]+0xFFFFB154u,c->r[30]); // 80206B7C
L_80206B80:;
  c->r[3]=c->r[29]|c->r[29]; // 80206B80
  c->lr=0x80206B88u; f_80154438(c); // 80206B84
  c->r[3]=c->r[30]|c->r[30]; // 80206B88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80206B8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80206B90
  c->r[29]=R32(c->r[1]+0x00000014u); // 80206B94
  c->r[0]=R32(c->r[1]+0x00000024u); // 80206B98
  c->lr=c->r[0]; // 80206B9C
  c->r[1]=c->r[1]+0x00000020u; // 80206BA0
  return; // 80206BA4
}

// SOiGetSysWork
void f_80206BA8(Ctx* __restrict c) {
  trace_call(0x80206BA8u);
  c->r[3]=0u+0x804D0000u; // 80206BA8
  c->r[3]=c->r[3]+0x00001818u; // 80206BAC
  return; // 80206BB0
}

// SOiIsBufferAddrCheck
void f_80206BB4(Ctx* __restrict c) {
  trace_call(0x80206BB4u);
  c->r[3]=R32(c->r[13]+0xFFFF9524u); // 80206BB4
  return; // 80206BB8
}

// SOiIsInitialized
void f_80206BBC(Ctx* __restrict c) {
  trace_call(0x80206BBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206BBC
  c->r[0]=c->lr; // 80206BC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206BC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206BC8
  c->r[31]=0u+0x00000000u; // 80206BCC
  c->lr=0x80206BD4u; f_80154410(c); // 80206BD0
  c->r[0]=R8(c->r[13]+0xFFFFB150u); // 80206BD4
  cmps(c,0,(int32_t)c->r[0],3); // 80206BD8
  if (!crb(c,0)) { goto L_80206BF0; } // 80206BDC
  cmps(c,0,(int32_t)c->r[0],1); // 80206BE0
  if (!crb(c,0)) { goto L_80206BEC; } // 80206BE4
  goto L_80206BF0; // 80206BE8
L_80206BEC:;
  c->r[31]=0u+0x00000001u; // 80206BEC
L_80206BF0:;
  c->lr=0x80206BF4u; f_80154438(c); // 80206BF0
  c->r[3]=c->r[31]|c->r[31]; // 80206BF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206BF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206BFC
  c->lr=c->r[0]; // 80206C00
  c->r[1]=c->r[1]+0x00000010u; // 80206C04
  return; // 80206C08
}

// SOiAlloc
void f_80206C0C(Ctx* __restrict c) {
  trace_call(0x80206C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206C0C
  c->r[0]=c->lr; // 80206C10
  cmps(c,0,(int32_t)c->r[4],0); // 80206C14
  W32(c->r[1]+0x00000024u,c->r[0]); // 80206C18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80206C1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80206C20
  c->r[30]=c->r[4]|c->r[4]; // 80206C24
  W32(c->r[1]+0x00000014u,c->r[29]); // 80206C28
  c->r[29]=c->r[3]|c->r[3]; // 80206C2C
  if (!crb(c,1)) { goto L_80206CD4; } // 80206C30
  c->r[31]=0u+0x804D0000u; // 80206C34
  c->r[12]=R32(c->r[31]+0x00001818u); // 80206C38
  cmps(c,0,(int32_t)c->r[12],0); // 80206C3C
  if (crb(c,2)) { goto L_80206CD4; } // 80206C40
  c->ctr=c->r[12]; // 80206C44
  if (true) { c->lr=0x80206C4Cu; dispatch(c,c->ctr); } // 80206C48
  cmps(c,0,(int32_t)c->r[3],0); // 80206C4C
  c->r[4]=c->r[3]|c->r[3]; // 80206C50
  if (crb(c,2)) { goto L_80206CCC; } // 80206C54
  c->r[6]=c->r[31]+0x00001818u; // 80206C58
  c->r[0]=R32(c->r[13]+0xFFFF9524u); // 80206C5C
  c->r[5]=R32(c->r[6]+0x00000014u); // 80206C60
  cmps(c,0,(int32_t)c->r[0],0); // 80206C64
  c->r[0]=c->r[5]+0x00000001u; // 80206C68
  W32(c->r[6]+0x00000014u,c->r[0]); // 80206C6C
  if (crb(c,2)) { goto L_80206CCC; } // 80206C70
  c->r[5]=rotl(c->r[3],0)&0x1FFFFFFFu; // 80206C74
  c->r[0]=0u+0x10000000u; // 80206C78
  cmpu(c,0,c->r[5],c->r[0]); // 80206C7C
  if (crb(c,0)) { goto L_80206C90; } // 80206C80
  c->r[0]=0u+0x18000000u; // 80206C84
  cmpu(c,0,c->r[5],c->r[0]); // 80206C88
  if (crb(c,0)) { goto L_80206CCC; } // 80206C8C
L_80206C90:;
  cmps(c,0,(int32_t)c->r[3],0); // 80206C90
  if (crb(c,2)) { goto L_80206CC8; } // 80206C94
  c->r[6]=0u+0x804D0000u; // 80206C98
  c->r[6]=c->r[6]+0x00001818u; // 80206C9C
  c->r[12]=R32(c->r[6]+0x00000004u); // 80206CA0
  cmps(c,0,(int32_t)c->r[12],0); // 80206CA4
  if (crb(c,2)) { goto L_80206CC8; } // 80206CA8
  c->r[5]=R32(c->r[6]+0x00000014u); // 80206CAC
  c->r[3]=c->r[29]|c->r[29]; // 80206CB0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80206CB4
  c->r[5]=c->r[30]|c->r[30]; // 80206CB8
  W32(c->r[6]+0x00000014u,c->r[0]); // 80206CBC
  c->ctr=c->r[12]; // 80206CC0
  if (true) { c->lr=0x80206CC8u; dispatch(c,c->ctr); } // 80206CC4
L_80206CC8:;
  c->r[4]=0u+0x00000000u; // 80206CC8
L_80206CCC:;
  c->r[3]=c->r[4]|c->r[4]; // 80206CCC
  goto L_80206CD8; // 80206CD0
L_80206CD4:;
  c->r[3]=0u+0x00000000u; // 80206CD4
L_80206CD8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80206CD8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80206CDC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80206CE0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80206CE4
  c->lr=c->r[0]; // 80206CE8
  c->r[1]=c->r[1]+0x00000020u; // 80206CEC
  return; // 80206CF0
}

// SOiFree
void f_80206CF4(Ctx* __restrict c) {
  trace_call(0x80206CF4u);
  cmps(c,0,(int32_t)c->r[4],0); // 80206CF4
  if (crb(c,2)) return; // 80206CF8
  c->r[7]=0u+0x804D0000u; // 80206CFC
  c->r[7]=c->r[7]+0x00001818u; // 80206D00
  c->r[12]=R32(c->r[7]+0x00000004u); // 80206D04
  cmps(c,0,(int32_t)c->r[12],0); // 80206D08
  if (crb(c,2)) return; // 80206D0C
  c->r[6]=R32(c->r[7]+0x00000014u); // 80206D10
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 80206D14
  W32(c->r[7]+0x00000014u,c->r[0]); // 80206D18
  c->ctr=c->r[12]; // 80206D1C
  if (true) { dispatch(c,c->ctr); return; } // 80206D20
  return; // 80206D24
}

// SOiPrepare
void f_80206D28(Ctx* __restrict c) {
  trace_call(0x80206D28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206D28
  c->r[0]=c->lr; // 80206D2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80206D30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80206D34
  W32(c->r[1]+0x00000018u,c->r[30]); // 80206D38
  c->r[30]=0u+0x00000000u; // 80206D3C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80206D40
  W32(c->r[1]+0x00000010u,c->r[28]); // 80206D44
  c->r[28]=c->r[4]|c->r[4]; // 80206D48
  c->lr=0x80206D50u; f_80154410(c); // 80206D4C
  c->r[0]=R8(c->r[13]+0xFFFFB150u); // 80206D50
  c->r[29]=c->r[3]|c->r[3]; // 80206D54
  cmps(c,0,(int32_t)c->r[0],1); // 80206D58
  if (crb(c,2)) { goto L_80206D84; } // 80206D5C
  if (!crb(c,0)) { goto L_80206D70; } // 80206D60
  cmps(c,0,(int32_t)c->r[0],0); // 80206D64
  if (!crb(c,0)) { goto L_80206D7C; } // 80206D68
  goto L_80206D84; // 80206D6C
L_80206D70:;
  cmps(c,0,(int32_t)c->r[0],3); // 80206D70
  if (!crb(c,0)) { goto L_80206D84; } // 80206D74
  goto L_80206D8C; // 80206D78
L_80206D7C:;
  c->r[30]=0u+0xFFFFFFD9u; // 80206D7C
  goto L_80206DC4; // 80206D80
L_80206D84:;
  c->r[30]=0u+0xFFFFFFE4u; // 80206D84
  goto L_80206DC4; // 80206D88
L_80206D8C:;
  c->r[31]=0u+0x804D0000u; // 80206D8C
  c->r[31]=c->r[31]+0x00001818u; // 80206D90
  c->r[0]=R32(c->r[31]+0x00000008u); // 80206D94
  cmps(c,0,(int32_t)c->r[0],0); // 80206D98
  if (!crb(c,0)) { goto L_80206DA8; } // 80206D9C
  c->r[30]=0u+0xFFFFFFF6u; // 80206DA0
  goto L_80206DC4; // 80206DA4
L_80206DA8:;
  c->lr=0x80206DACu; f_8015716C(c); // 80206DA8
  cmps(c,0,(int32_t)c->r[3],0); // 80206DAC
  if (!crb(c,2)) { goto L_80206DBC; } // 80206DB0
  c->r[30]=0u+0x80000000u; // 80206DB4
  goto L_80206DC4; // 80206DB8
L_80206DBC:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80206DBC
  W32(c->r[28]+0x00000000u,c->r[0]); // 80206DC0
L_80206DC4:;
  cmps(c,0,(int32_t)c->r[30],0); // 80206DC4
  if (crb(c,2)) { goto L_80206DE4; } // 80206DC8
  c->lr=0x80206DD0u; f_8015716C(c); // 80206DCC
  cmps(c,0,(int32_t)c->r[3],0); // 80206DD0
  if (crb(c,2)) { goto L_80206DE0; } // 80206DD4
  W32(c->r[3]+0x0000030Cu,c->r[30]); // 80206DD8
  goto L_80206DE4; // 80206DDC
L_80206DE0:;
  W32(c->r[13]+0xFFFFB154u,c->r[30]); // 80206DE0
L_80206DE4:;
  c->r[3]=c->r[29]|c->r[29]; // 80206DE4
  c->lr=0x80206DECu; f_80154438(c); // 80206DE8
  c->r[3]=c->r[30]|c->r[30]; // 80206DEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80206DF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80206DF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80206DF8
  c->r[28]=R32(c->r[1]+0x00000010u); // 80206DFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80206E00
  c->lr=c->r[0]; // 80206E04
  c->r[1]=c->r[1]+0x00000020u; // 80206E08
  return; // 80206E0C
}

// SOiConclude
void f_80206E10(Ctx* __restrict c) {
  trace_call(0x80206E10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206E10
  c->r[0]=c->lr; // 80206E14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206E18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206E1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80206E20
  c->r[30]=c->r[4]|c->r[4]; // 80206E24
  c->lr=0x80206E2Cu; f_80154410(c); // 80206E28
  c->r[31]=c->r[3]|c->r[3]; // 80206E2C
  c->lr=0x80206E34u; f_8015716C(c); // 80206E30
  cmps(c,0,(int32_t)c->r[3],0); // 80206E34
  if (crb(c,2)) { goto L_80206E44; } // 80206E38
  W32(c->r[3]+0x0000030Cu,c->r[30]); // 80206E3C
  goto L_80206E48; // 80206E40
L_80206E44:;
  W32(c->r[13]+0xFFFFB154u,c->r[30]); // 80206E44
L_80206E48:;
  c->r[3]=c->r[31]|c->r[31]; // 80206E48
  c->lr=0x80206E50u; f_80154438(c); // 80206E4C
  c->r[3]=c->r[30]|c->r[30]; // 80206E50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206E54
  c->r[30]=R32(c->r[1]+0x00000008u); // 80206E58
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206E5C
  c->lr=c->r[0]; // 80206E60
  c->r[1]=c->r[1]+0x00000010u; // 80206E64
  return; // 80206E68
}

// SOiPrepareTempRm
void f_80206E6C(Ctx* __restrict c) {
  trace_call(0x80206E6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206E6C
  c->r[0]=c->lr; // 80206E70
  W32(c->r[1]+0x00000024u,c->r[0]); // 80206E74
  c->r[11]=c->r[1]+0x00000020u; // 80206E78
  c->lr=0x80206E80u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80206E7C
  c->r[26]=c->r[3]|c->r[3]; // 80206E80
  c->r[27]=c->r[4]|c->r[4]; // 80206E84
  c->r[28]=c->r[5]|c->r[5]; // 80206E88
  c->r[30]=0u+0x00000000u; // 80206E8C
  c->lr=0x80206E94u; f_80154410(c); // 80206E90
  c->r[0]=R8(c->r[13]+0xFFFFB150u); // 80206E94
  c->r[29]=c->r[3]|c->r[3]; // 80206E98
  cmps(c,0,(int32_t)c->r[0],1); // 80206E9C
  if (crb(c,2)) { goto L_80206EC8; } // 80206EA0
  if (!crb(c,0)) { goto L_80206EB4; } // 80206EA4
  cmps(c,0,(int32_t)c->r[0],0); // 80206EA8
  if (!crb(c,0)) { goto L_80206EC0; } // 80206EAC
  goto L_80206EC8; // 80206EB0
L_80206EB4:;
  cmps(c,0,(int32_t)c->r[0],3); // 80206EB4
  if (!crb(c,0)) { goto L_80206EC8; } // 80206EB8
  goto L_802070C0; // 80206EBC
L_80206EC0:;
  c->r[30]=0u+0xFFFFFFD9u; // 80206EC0
  goto L_80207100; // 80206EC4
L_80206EC8:;
  c->r[31]=0u+0x804D0000u; // 80206EC8
  c->r[31]=c->r[31]+0x00001818u; // 80206ECC
  c->r[0]=R32(c->r[31]+0x00000008u); // 80206ED0
  cmps(c,0,(int32_t)c->r[0],-2); // 80206ED4
  if (!crb(c,1)) { goto L_80206EE4; } // 80206ED8
  c->r[30]=0u+0xFFFFFFF6u; // 80206EDC
  goto L_80207100; // 80206EE0
L_80206EE4:;
  c->lr=0x80206EE8u; f_8015716C(c); // 80206EE4
  cmps(c,0,(int32_t)c->r[3],0); // 80206EE8
  if (!crb(c,2)) { goto L_80206EF8; } // 80206EEC
  c->r[30]=0u+0x80000000u; // 80206EF0
  goto L_80207100; // 80206EF4
L_80206EF8:;
  c->r[0]=0u+0xFFFFFFFFu; // 80206EF8
  c->r[3]=c->r[29]|c->r[29]; // 80206EFC
  W32(c->r[31]+0x00000008u,c->r[0]); // 80206F00
  c->lr=0x80206F08u; f_80154438(c); // 80206F04
  c->r[3]=0u+0x802F0000u; // 80206F08
  c->r[4]=0u+0x00000000u; // 80206F0C
  c->r[3]=c->r[3]+0xFFFF9F80u; // 80206F10
  c->lr=0x80206F18u; f_80186284(c); // 80206F14
  cmps(c,0,(int32_t)c->r[3],0); // 80206F18
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 80206F1C
  if (!crb(c,0)) { goto L_80206F50; } // 80206F20
  c->lr=0x80206F28u; f_80154410(c); // 80206F24
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80206F28
  c->r[29]=c->r[3]|c->r[3]; // 80206F2C
  cmps(c,0,(int32_t)c->r[0],-6); // 80206F30
  if (!crb(c,2)) { goto L_80206F48; } // 80206F34
  c->r[0]=0u+0xFFFFFFFEu; // 80206F38
  c->r[30]=0u+0xFFFFFFE6u; // 80206F3C
  W32(c->r[31]+0x00000008u,c->r[0]); // 80206F40
  goto L_80207100; // 80206F44
L_80206F48:;
  c->r[30]=0u+0x80000000u; // 80206F48
  goto L_80207100; // 80206F4C
L_80206F50:;
  W32(c->r[27]+0x00000000u,c->r[3]); // 80206F50
  c->lr=0x80206F58u; f_801FB5B8(c); // 80206F54
  cmps(c,0,(int32_t)c->r[3],0); // 80206F58
  if (!crb(c,2)) { goto L_80207034; } // 80206F5C
  c->lr=0x80206F64u; f_801FA480(c); // 80206F60
  cmps(c,0,(int32_t)c->r[3],0); // 80206F64
  if (!crb(c,0)) { goto L_80206F84; } // 80206F68
  cmps(c,0,(int32_t)c->r[3],-8); // 80206F6C
  if (crb(c,2)) { goto L_80206FE4; } // 80206F70
  if (crb(c,0)) { goto L_80207014; } // 80206F74
  cmps(c,0,(int32_t)c->r[3],-2); // 80206F78
  if (!crb(c,0)) { goto L_80206FFC; } // 80206F7C
  goto L_80207014; // 80206F80
L_80206F84:;
  cmps(c,0,(int32_t)c->r[3],6); // 80206F84
  if (!crb(c,0)) { goto L_80207014; } // 80206F88
  cmps(c,0,(int32_t)c->r[3],3); // 80206F8C
  if (!crb(c,0)) { goto L_80206F98; } // 80206F90
  goto L_80207014; // 80206F94
L_80206F98:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80206F98
  c->r[4]=0u+0x0000001Fu; // 80206F9C
  c->r[5]=0u+0x00000000u; // 80206FA0
  c->r[6]=0u+0x00000000u; // 80206FA4
  c->r[7]=0u+0x00000000u; // 80206FA8
  c->r[8]=0u+0x00000000u; // 80206FAC
  c->lr=0x80206FB4u; f_80186C1C(c); // 80206FB0
  cmps(c,0,(int32_t)c->r[3],0); // 80206FB4
  c->r[30]=c->r[3]|c->r[3]; // 80206FB8
  if (!crb(c,2)) { goto L_80206FCC; } // 80206FBC
  c->r[0]=0u+0x00000001u; // 80206FC0
  W32(c->r[28]+0x00000000u,c->r[0]); // 80206FC4
  goto L_80207028; // 80206FC8
L_80206FCC:;
  c->r[3]=c->r[26]|c->r[26]; // 80206FCC
  c->r[4]=c->r[30]|c->r[30]; // 80206FD0
  c->r[5]=0u+0x00000001u; // 80206FD4
  c->lr=0x80206FDCu; f_80207144(c); // 80206FD8
  c->r[30]=c->r[3]|c->r[3]; // 80206FDC
  goto L_80207028; // 80206FE0
L_80206FE4:;
  c->r[3]=c->r[26]|c->r[26]; // 80206FE4
  c->r[4]=0u+0xFFFFFFE6u; // 80206FE8
  c->r[5]=0u+0x00000001u; // 80206FEC
  c->lr=0x80206FF4u; f_80207144(c); // 80206FF0
  c->r[30]=c->r[3]|c->r[3]; // 80206FF4
  goto L_80207028; // 80206FF8
L_80206FFC:;
  c->r[3]=c->r[26]|c->r[26]; // 80206FFC
  c->r[4]=0u+0x80000000u; // 80207000
  c->r[5]=0u+0x00000001u; // 80207004
  c->lr=0x8020700Cu; f_80207144(c); // 80207008
  c->r[30]=c->r[3]|c->r[3]; // 8020700C
  goto L_80207028; // 80207010
L_80207014:;
  c->r[3]=c->r[26]|c->r[26]; // 80207014
  c->r[4]=0u+0xFFFFFFD0u; // 80207018
  c->r[5]=0u+0x00000001u; // 8020701C
  c->lr=0x80207024u; f_80207144(c); // 80207020
  c->r[30]=c->r[3]|c->r[3]; // 80207024
L_80207028:;
  c->lr=0x8020702Cu; f_80154410(c); // 80207028
  c->r[29]=c->r[3]|c->r[3]; // 8020702C
  goto L_80207100; // 80207030
L_80207034:;
  c->r[0]=c->r[3]+0x0000001Du; // 80207034
  cmpu(c,0,c->r[0],0x0000001Cu); // 80207038
  if (crb(c,1)) { goto L_80207070; } // 8020703C
  c->r[3]=0u+0x802F0000u; // 80207040
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80207044
  c->r[3]=c->r[3]+0xFFFFA0A0u; // 80207048
  c->r[3]=R32(c->r[3]+c->r[0]); // 8020704C
  c->ctr=c->r[3]; // 80207050
  if (true) { switch (c->ctr) { case 0x80207058u: goto L_80207058; case 0x80207060u: goto L_80207060; case 0x80207068u: goto L_80207068; case 0x80207070u: goto L_80207070; default: break; } dispatch(c,c->ctr); return; } // 80207054
L_80207058:;
  c->r[30]=0u+0xFFFFFFE6u; // 80207058
  goto L_80207074; // 8020705C
L_80207060:;
  c->r[30]=0u+0xFFFFFFD9u; // 80207060
  goto L_80207074; // 80207064
L_80207068:;
  c->r[30]=0u+0xFFFFFFD0u; // 80207068
  goto L_80207074; // 8020706C
L_80207070:;
  c->r[30]=0u+0x80000000u; // 80207070
L_80207074:;
  c->r[3]=0u+0x804D0000u; // 80207074
  c->r[3]=c->r[3]+0x00001818u; // 80207078
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8020707C
  c->lr=0x80207084u; f_80186464(c); // 80207080
  cmps(c,0,(int32_t)c->r[3],0); // 80207084
  if (!crb(c,0)) { goto L_80207090; } // 80207088
  c->r[30]=0u+0x80000000u; // 8020708C
L_80207090:;
  c->lr=0x80207094u; f_80154410(c); // 80207090
  c->r[0]=c->r[30]+0x80000000u; // 80207094
  c->r[29]=c->r[3]|c->r[3]; // 80207098
  cmpu(c,0,c->r[0],0x00000000u); // 8020709C
  if (crb(c,2)) { goto L_80207100; } // 802070A0
  c->r[3]=0u+0x804D0000u; // 802070A4
  c->r[4]=0u+0xFFFFFFFFu; // 802070A8
  c->r[3]=c->r[3]+0x00001818u; // 802070AC
  c->r[0]=0u+0xFFFFFFFEu; // 802070B0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 802070B4
  W32(c->r[3]+0x00000008u,c->r[0]); // 802070B8
  goto L_80207100; // 802070BC
L_802070C0:;
  c->r[31]=0u+0x804D0000u; // 802070C0
  c->r[31]=c->r[31]+0x00001818u; // 802070C4
  c->r[0]=R32(c->r[31]+0x00000008u); // 802070C8
  cmps(c,0,(int32_t)c->r[0],0); // 802070CC
  if (!crb(c,0)) { goto L_802070DC; } // 802070D0
  c->r[30]=0u+0xFFFFFFF6u; // 802070D4
  goto L_80207100; // 802070D8
L_802070DC:;
  c->lr=0x802070E0u; f_8015716C(c); // 802070DC
  cmps(c,0,(int32_t)c->r[3],0); // 802070E0
  if (!crb(c,2)) { goto L_802070F0; } // 802070E4
  c->r[30]=0u+0x80000000u; // 802070E8
  goto L_80207100; // 802070EC
L_802070F0:;
  c->r[0]=0u+0x00000000u; // 802070F0
  W32(c->r[28]+0x00000000u,c->r[0]); // 802070F4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 802070F8
  W32(c->r[27]+0x00000000u,c->r[0]); // 802070FC
L_80207100:;
  cmps(c,0,(int32_t)c->r[30],0); // 80207100
  if (crb(c,2)) { goto L_80207120; } // 80207104
  c->lr=0x8020710Cu; f_8015716C(c); // 80207108
  cmps(c,0,(int32_t)c->r[3],0); // 8020710C
  if (crb(c,2)) { goto L_8020711C; } // 80207110
  W32(c->r[3]+0x0000030Cu,c->r[30]); // 80207114
  goto L_80207120; // 80207118
L_8020711C:;
  W32(c->r[13]+0xFFFFB154u,c->r[30]); // 8020711C
L_80207120:;
  c->r[3]=c->r[29]|c->r[29]; // 80207120
  c->lr=0x80207128u; f_80154438(c); // 80207124
  c->r[11]=c->r[1]+0x00000020u; // 80207128
  c->r[3]=c->r[30]|c->r[30]; // 8020712C
  c->lr=0x80207134u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80207130
  c->r[0]=R32(c->r[1]+0x00000024u); // 80207134
  c->lr=c->r[0]; // 80207138
  c->r[1]=c->r[1]+0x00000020u; // 8020713C
  return; // 80207140
}

// SOiConcludeTempRm
void f_80207144(Ctx* __restrict c) {
  trace_call(0x80207144u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207144
  c->r[0]=c->lr; // 80207148
  cmps(c,0,(int32_t)c->r[5],1); // 8020714C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207150
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80207154
  W32(c->r[1]+0x00000008u,c->r[30]); // 80207158
  c->r[30]=c->r[4]|c->r[4]; // 8020715C
  if (!crb(c,2)) { goto L_802071E4; } // 80207160
  c->lr=0x80207168u; f_801FB5C8(c); // 80207164
  cmps(c,0,(int32_t)c->r[3],-1); // 80207168
  if (crb(c,2)) { goto L_80207194; } // 8020716C
  if (!crb(c,0)) { goto L_80207180; } // 80207170
  cmps(c,0,(int32_t)c->r[3],-29); // 80207174
  if (crb(c,2)) { goto L_8020718C; } // 80207178
  goto L_80207194; // 8020717C
L_80207180:;
  cmps(c,0,(int32_t)c->r[3],1); // 80207180
  if (!crb(c,0)) { goto L_80207194; } // 80207184
  goto L_80207198; // 80207188
L_8020718C:;
  c->r[30]=0u+0xFFFFFFE6u; // 8020718C
  goto L_80207198; // 80207190
L_80207194:;
  c->r[30]=0u+0x80000000u; // 80207194
L_80207198:;
  c->r[3]=0u+0x804D0000u; // 80207198
  c->r[3]=c->r[3]+0x00001818u; // 8020719C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802071A0
  c->lr=0x802071A8u; f_80186464(c); // 802071A4
  cmps(c,0,(int32_t)c->r[3],0); // 802071A8
  if (!crb(c,0)) { goto L_802071B4; } // 802071AC
  c->r[30]=0u+0x80000000u; // 802071B0
L_802071B4:;
  c->lr=0x802071B8u; f_80154410(c); // 802071B4
  c->r[0]=c->r[30]+0x80000000u; // 802071B8
  c->r[31]=c->r[3]|c->r[3]; // 802071BC
  cmpu(c,0,c->r[0],0x00000000u); // 802071C0
  if (crb(c,2)) { goto L_802071EC; } // 802071C4
  c->r[3]=0u+0x804D0000u; // 802071C8
  c->r[4]=0u+0xFFFFFFFFu; // 802071CC
  c->r[3]=c->r[3]+0x00001818u; // 802071D0
  c->r[0]=0u+0xFFFFFFFEu; // 802071D4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 802071D8
  W32(c->r[3]+0x00000008u,c->r[0]); // 802071DC
  goto L_802071EC; // 802071E0
L_802071E4:;
  c->lr=0x802071E8u; f_80154410(c); // 802071E4
  c->r[31]=c->r[3]|c->r[3]; // 802071E8
L_802071EC:;
  c->lr=0x802071F0u; f_8015716C(c); // 802071EC
  cmps(c,0,(int32_t)c->r[3],0); // 802071F0
  if (crb(c,2)) { goto L_80207200; } // 802071F4
  W32(c->r[3]+0x0000030Cu,c->r[30]); // 802071F8
  goto L_80207204; // 802071FC
L_80207200:;
  W32(c->r[13]+0xFFFFB154u,c->r[30]); // 80207200
L_80207204:;
  c->r[3]=c->r[31]|c->r[31]; // 80207204
  c->lr=0x8020720Cu; f_80154438(c); // 80207208
  c->r[3]=c->r[30]|c->r[30]; // 8020720C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80207210
  c->r[30]=R32(c->r[1]+0x00000008u); // 80207214
  c->r[0]=R32(c->r[1]+0x00000014u); // 80207218
  c->lr=c->r[0]; // 8020721C
  c->r[1]=c->r[1]+0x00000010u; // 80207220
  return; // 80207224
}

// SOiWaitForDHCPEx
void f_80207228(Ctx* __restrict c) {
  trace_call(0x80207228u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207228
  c->r[0]=c->lr; // 8020722C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80207230
  c->r[11]=c->r[1]+0x00000040u; // 80207234
  c->lr=0x8020723Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80207238
  cmps(c,0,(int32_t)c->r[3],0); // 8020723C
  c->r[22]=c->r[3]|c->r[3]; // 80207240
  c->r[31]=0u+0x00000000u; // 80207244
  c->r[29]=0u+0x00000000u; // 80207248
  c->r[30]=0u+0x00000000u; // 8020724C
  if (crb(c,2)) { goto L_80207284; } // 80207250
  c->lr=0x80207258u; f_801584AC(c); // 80207254
  c->r[6]=0u+0x80000000u; // 80207258
  c->r[5]=0u+0x10620000u; // 8020725C
  c->r[6]=R32(c->r[6]+0x000000F8u); // 80207260
  c->r[7]=c->r[5]+0x00004DD3u; // 80207264
  c->r[0]=0u+0x00000000u; // 80207268
  c->r[5]=rotl(c->r[6],30)&0x3FFFFFFFu; // 8020726C
  c->r[5]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 80207270
  c->r[5]=rotl(c->r[5],26)&0x03FFFFFFu; // 80207274
  c->r[5]=(uint32_t)((int32_t)c->r[22]*(int32_t)c->r[5]); // 80207278
  c->r[29]=addc(c,c->r[5],c->r[4],0); // 8020727C
  c->r[30]=addc(c,c->r[0],c->r[3],c->xer_ca); // 80207280
L_80207284:;
  c->r[0]=0u+0x00000000u; // 80207284
  c->r[24]=0u+0x0000000Au; // 80207288
  c->r[25]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[24]); // 8020728C
  c->r[3]=0u+0x10620000u; // 80207290
  c->r[28]=c->r[29]|c->r[30]; // 80207294
  c->r[22]=c->r[3]+0x00004DD3u; // 80207298
  c->r[26]=0u+0x00000004u; // 8020729C
  c->r[27]=0u+0x00010000u; // 802072A0
  c->r[23]=0u+0x80000000u; // 802072A4
L_802072A8:;
  c->r[0]=R32(c->r[23]+0x000000F8u); // 802072A8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802072AC
  c->r[0]=(uint32_t)(((uint64_t)c->r[22]*(uint64_t)c->r[0])>>32); // 802072B0
  c->r[3]=rotl(c->r[0],26)&0x03FFFFFFu; // 802072B4
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[24])>>32); // 802072B8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)10); // 802072BC
  c->r[3]=c->r[0]+c->r[25]; // 802072C0
  c->lr=0x802072C8u; f_801583D8(c); // 802072C4
  W32(c->r[1]+0x00000008u,c->r[26]); // 802072C8
  c->r[4]=c->r[27]+0xFFFFFFFEu; // 802072CC
  c->r[6]=c->r[1]+0x0000000Cu; // 802072D0
  c->r[7]=c->r[1]+0x00000008u; // 802072D4
  c->r[3]=0u+0x00000000u; // 802072D8
  c->r[5]=0u+0x00001003u; // 802072DC
  c->lr=0x802072E4u; f_802088CC(c); // 802072E0
  cmps(c,0,(int32_t)c->r[3],0); // 802072E4
  if (crb(c,2)) { goto L_802072F4; } // 802072E8
  c->r[31]=c->r[3]|c->r[3]; // 802072EC
  goto L_80207344; // 802072F0
L_802072F4:;
  if (!crb(c,2)) { goto L_8020730C; } // 802072F4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802072F8
  cmps(c,0,(int32_t)c->r[0],0); // 802072FC
  if (crb(c,2)) { goto L_8020730C; } // 80207300
  c->r[31]=c->r[0]|c->r[0]; // 80207304
  goto L_80207344; // 80207308
L_8020730C:;
  c->lr=0x80207310u; f_802082C8(c); // 8020730C
  cmps(c,0,(int32_t)c->r[3],0); // 80207310
  if (!crb(c,2)) { goto L_80207344; } // 80207314
  cmps(c,0,(int32_t)c->r[28],0); // 80207318
  if (crb(c,2)) { IRQCHK(c); goto L_802072A8; } // 8020731C
  c->lr=0x80207324u; f_801584AC(c); // 80207320
  c->r[5]=c->r[3]^0x80000000u; // 80207324
  c->r[0]=c->r[30]^0x80000000u; // 80207328
  c->r[3]=addc(c,~c->r[4],c->r[29],1); // 8020732C
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80207330
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80207334
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 80207338
  if (crb(c,2)) { IRQCHK(c); goto L_802072A8; } // 8020733C
  c->r[31]=0u+0xFFFFFFB4u; // 80207340
L_80207344:;
  c->r[11]=c->r[1]+0x00000040u; // 80207344
  c->r[3]=c->r[31]|c->r[31]; // 80207348
  c->lr=0x80207350u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020734C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80207350
  c->lr=c->r[0]; // 80207354
  c->r[1]=c->r[1]+0x00000040u; // 80207358
  return; // 8020735C
}

// SOSocket2
void f_80207360(Ctx* __restrict c) {
  trace_call(0x80207360u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207360
  c->r[0]=c->lr; // 80207364
  W32(c->r[1]+0x00000024u,c->r[0]); // 80207368
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020736C
  c->r[31]=c->r[5]|c->r[5]; // 80207370
  W32(c->r[1]+0x00000018u,c->r[30]); // 80207374
  W32(c->r[1]+0x00000014u,c->r[29]); // 80207378
  c->r[29]=c->r[4]|c->r[4]; // 8020737C
  c->r[4]=c->r[1]+0x00000008u; // 80207380
  W32(c->r[1]+0x00000010u,c->r[28]); // 80207384
  c->r[28]=c->r[3]|c->r[3]; // 80207388
  c->r[3]=0u+0x00000000u; // 8020738C
  c->lr=0x80207394u; f_80206D28(c); // 80207390
  cmps(c,0,(int32_t)c->r[3],0); // 80207394
  if (!crb(c,2)) { goto L_80207414; } // 80207398
  cmps(c,0,(int32_t)c->r[28],23); // 8020739C
  if (!crb(c,2)) { goto L_802073AC; } // 802073A0
  c->r[31]=0u+0xFFFFFFFBu; // 802073A4
  goto L_80207408; // 802073A8
L_802073AC:;
  c->r[3]=0u+0x0000000Cu; // 802073AC
  c->r[4]=0u+0x00000020u; // 802073B0
  c->lr=0x802073B8u; f_80206C0C(c); // 802073B4
  cmps(c,0,(int32_t)c->r[3],0); // 802073B8
  c->r[30]=c->r[3]|c->r[3]; // 802073BC
  if (!crb(c,2)) { goto L_802073CC; } // 802073C0
  c->r[31]=0u+0xFFFFFFCFu; // 802073C4
  goto L_80207408; // 802073C8
L_802073CC:;
  W32(c->r[3]+0x00000000u,c->r[28]); // 802073CC
  c->r[5]=c->r[30]|c->r[30]; // 802073D0
  c->r[4]=0u+0x0000000Fu; // 802073D4
  c->r[6]=0u+0x0000000Cu; // 802073D8
  W32(c->r[3]+0x00000004u,c->r[29]); // 802073DC
  c->r[7]=0u+0x00000000u; // 802073E0
  c->r[8]=0u+0x00000000u; // 802073E4
  W32(c->r[3]+0x00000008u,c->r[31]); // 802073E8
  c->r[3]=R32(c->r[1]+0x00000008u); // 802073EC
  c->lr=0x802073F4u; f_80186C1C(c); // 802073F0
  c->r[31]=c->r[3]|c->r[3]; // 802073F4
  c->r[4]=c->r[30]|c->r[30]; // 802073F8
  c->r[3]=0u+0x0000000Cu; // 802073FC
  c->r[5]=0u+0x00000020u; // 80207400
  c->lr=0x80207408u; f_80206CF4(c); // 80207404
L_80207408:;
  c->r[4]=c->r[31]|c->r[31]; // 80207408
  c->r[3]=0u+0x00000000u; // 8020740C
  c->lr=0x80207414u; f_80206E10(c); // 80207410
L_80207414:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80207414
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80207418
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020741C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80207420
  c->r[28]=R32(c->r[1]+0x00000010u); // 80207424
  c->lr=c->r[0]; // 80207428
  c->r[1]=c->r[1]+0x00000020u; // 8020742C
  return; // 80207430
}

// SOSocket
void f_80207434(Ctx* __restrict c) {
  trace_call(0x80207434u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207434
  c->r[0]=c->lr; // 80207438
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020743C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80207440
  W32(c->r[1]+0x00000018u,c->r[30]); // 80207444
  c->r[30]=c->r[5]|c->r[5]; // 80207448
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020744C
  c->r[29]=c->r[4]|c->r[4]; // 80207450
  W32(c->r[1]+0x00000010u,c->r[28]); // 80207454
  c->r[28]=c->r[3]|c->r[3]; // 80207458
  c->r[0]=R32(c->r[13]+0xFFFFB160u); // 8020745C
  cmps(c,0,(int32_t)c->r[0],0); // 80207460
  if (!crb(c,2)) { goto L_80207478; } // 80207464
  c->r[3]=R32(c->r[13]+0xFFFF9528u); // 80207468
  c->lr=0x80207470u; f_8014E714(c); // 8020746C
  c->r[0]=0u+0x00000001u; // 80207470
  W32(c->r[13]+0xFFFFB160u,c->r[0]); // 80207474
L_80207478:;
  c->r[4]=c->r[1]+0x00000008u; // 80207478
  c->r[3]=0u+0x00000000u; // 8020747C
  c->lr=0x80207484u; f_80206D28(c); // 80207480
  cmps(c,0,(int32_t)c->r[3],0); // 80207484
  if (!crb(c,2)) { goto L_80207504; } // 80207488
  cmps(c,0,(int32_t)c->r[28],23); // 8020748C
  if (!crb(c,2)) { goto L_8020749C; } // 80207490
  c->r[30]=0u+0xFFFFFFFBu; // 80207494
  goto L_802074F8; // 80207498
L_8020749C:;
  c->r[3]=0u+0x0000000Cu; // 8020749C
  c->r[4]=0u+0x00000020u; // 802074A0
  c->lr=0x802074A8u; f_80206C0C(c); // 802074A4
  cmps(c,0,(int32_t)c->r[3],0); // 802074A8
  c->r[31]=c->r[3]|c->r[3]; // 802074AC
  if (!crb(c,2)) { goto L_802074BC; } // 802074B0
  c->r[30]=0u+0xFFFFFFCFu; // 802074B4
  goto L_802074F8; // 802074B8
L_802074BC:;
  W32(c->r[3]+0x00000000u,c->r[28]); // 802074BC
  c->r[5]=c->r[31]|c->r[31]; // 802074C0
  c->r[4]=0u+0x0000000Fu; // 802074C4
  c->r[6]=0u+0x0000000Cu; // 802074C8
  W32(c->r[3]+0x00000004u,c->r[29]); // 802074CC
  c->r[7]=0u+0x00000000u; // 802074D0
  c->r[8]=0u+0x00000000u; // 802074D4
  W32(c->r[3]+0x00000008u,c->r[30]); // 802074D8
  c->r[3]=R32(c->r[1]+0x00000008u); // 802074DC
  c->lr=0x802074E4u; f_80186C1C(c); // 802074E0
  c->r[30]=c->r[3]|c->r[3]; // 802074E4
  c->r[4]=c->r[31]|c->r[31]; // 802074E8
  c->r[3]=0u+0x0000000Cu; // 802074EC
  c->r[5]=0u+0x00000020u; // 802074F0
  c->lr=0x802074F8u; f_80206CF4(c); // 802074F4
L_802074F8:;
  c->r[4]=c->r[30]|c->r[30]; // 802074F8
  c->r[3]=0u+0x00000000u; // 802074FC
  c->lr=0x80207504u; f_80206E10(c); // 80207500
L_80207504:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80207504
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80207508
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020750C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80207510
  c->r[28]=R32(c->r[1]+0x00000010u); // 80207514
  c->lr=c->r[0]; // 80207518
  c->r[1]=c->r[1]+0x00000020u; // 8020751C
  return; // 80207520
}

// SOClose
void f_80207524(Ctx* __restrict c) {
  trace_call(0x80207524u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207524
  c->r[0]=c->lr; // 80207528
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020752C
  c->r[4]=c->r[1]+0x00000008u; // 80207530
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80207534
  c->r[31]=c->r[3]|c->r[3]; // 80207538
  c->r[3]=0u+0x00000000u; // 8020753C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80207540
  c->lr=0x80207548u; f_80206D28(c); // 80207544
  cmps(c,0,(int32_t)c->r[3],0); // 80207548
  if (!crb(c,2)) { goto L_802075B0; } // 8020754C
  c->r[3]=0u+0x0000000Cu; // 80207550
  c->r[4]=0u+0x00000020u; // 80207554
  c->lr=0x8020755Cu; f_80206C0C(c); // 80207558
  cmps(c,0,(int32_t)c->r[3],0); // 8020755C
  c->r[30]=c->r[3]|c->r[3]; // 80207560
  if (!crb(c,2)) { goto L_80207570; } // 80207564
  c->r[31]=0u+0xFFFFFFCFu; // 80207568
  goto L_802075A4; // 8020756C
L_80207570:;
  W32(c->r[3]+0x00000000u,c->r[31]); // 80207570
  c->r[5]=c->r[30]|c->r[30]; // 80207574
  c->r[4]=0u+0x00000003u; // 80207578
  c->r[6]=0u+0x00000004u; // 8020757C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80207580
  c->r[7]=0u+0x00000000u; // 80207584
  c->r[8]=0u+0x00000000u; // 80207588
  c->lr=0x80207590u; f_80186C1C(c); // 8020758C
  c->r[31]=c->r[3]|c->r[3]; // 80207590
  c->r[4]=c->r[30]|c->r[30]; // 80207594
  c->r[3]=0u+0x0000000Cu; // 80207598
  c->r[5]=0u+0x00000020u; // 8020759C
  c->lr=0x802075A4u; f_80206CF4(c); // 802075A0
L_802075A4:;
  c->r[4]=c->r[31]|c->r[31]; // 802075A4
  c->r[3]=0u+0x00000000u; // 802075A8
  c->lr=0x802075B0u; f_80206E10(c); // 802075AC
L_802075B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802075B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802075B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802075B8
  c->lr=c->r[0]; // 802075BC
  c->r[1]=c->r[1]+0x00000020u; // 802075C0
  return; // 802075C4
}

// SOBind
void f_802075C8(Ctx* __restrict c) {
  trace_call(0x802075C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802075C8
  c->r[0]=c->lr; // 802075CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802075D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802075D4
  c->r[31]=c->r[4]|c->r[4]; // 802075D8
  c->r[4]=c->r[1]+0x00000008u; // 802075DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802075E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802075E4
  c->r[29]=c->r[3]|c->r[3]; // 802075E8
  c->r[3]=0u+0x00000000u; // 802075EC
  c->lr=0x802075F4u; f_80206D28(c); // 802075F0
  cmps(c,0,(int32_t)c->r[3],0); // 802075F4
  if (!crb(c,2)) { goto L_80207694; } // 802075F8
  cmps(c,0,(int32_t)c->r[31],0); // 802075FC
  if (crb(c,2)) { goto L_80207614; } // 80207600
  c->r[0]=R8(c->r[31]+0x00000000u); // 80207604
  cmpu(c,0,c->r[0],0x00000008u); // 80207608
  if (crb(c,1)) { goto L_80207614; } // 8020760C
  if (!crb(c,0)) { goto L_8020761C; } // 80207610
L_80207614:;
  c->r[31]=0u+0xFFFFFFE4u; // 80207614
  goto L_80207688; // 80207618
L_8020761C:;
  c->r[3]=0u+0x0000000Cu; // 8020761C
  c->r[4]=0u+0x00000040u; // 80207620
  c->lr=0x80207628u; f_80206C0C(c); // 80207624
  cmps(c,0,(int32_t)c->r[3],0); // 80207628
  c->r[30]=c->r[3]|c->r[3]; // 8020762C
  if (!crb(c,2)) { goto L_8020763C; } // 80207630
  c->r[31]=0u+0xFFFFFFCFu; // 80207634
  goto L_80207688; // 80207638
L_8020763C:;
  W32(c->r[3]+0x00000000u,c->r[29]); // 8020763C
  c->r[0]=0u+0x00000001u; // 80207640
  c->r[4]=c->r[31]|c->r[31]; // 80207644
  W32(c->r[3]+0x00000004u,c->r[0]); // 80207648
  c->r[3]=c->r[3]+0x00000008u; // 8020764C
  c->r[5]=R8(c->r[31]+0x00000000u); // 80207650
  c->lr=0x80207658u; f_801FC3D0(c); // 80207654
  c->r[3]=R32(c->r[1]+0x00000008u); // 80207658
  c->r[5]=c->r[30]|c->r[30]; // 8020765C
  c->r[4]=0u+0x00000002u; // 80207660
  c->r[6]=0u+0x00000024u; // 80207664
  c->r[7]=0u+0x00000000u; // 80207668
  c->r[8]=0u+0x00000000u; // 8020766C
  c->lr=0x80207674u; f_80186C1C(c); // 80207670
  c->r[31]=c->r[3]|c->r[3]; // 80207674
  c->r[4]=c->r[30]|c->r[30]; // 80207678
  c->r[3]=0u+0x0000000Cu; // 8020767C
  c->r[5]=0u+0x00000040u; // 80207680
  c->lr=0x80207688u; f_80206CF4(c); // 80207684
L_80207688:;
  c->r[4]=c->r[31]|c->r[31]; // 80207688
  c->r[3]=0u+0x00000000u; // 8020768C
  c->lr=0x80207694u; f_80206E10(c); // 80207690
L_80207694:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80207694
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80207698
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020769C
  c->r[29]=R32(c->r[1]+0x00000014u); // 802076A0
  c->lr=c->r[0]; // 802076A4
  c->r[1]=c->r[1]+0x00000020u; // 802076A8
  return; // 802076AC
}

// SOConnect
void f_802076B0(Ctx* __restrict c) {
  trace_call(0x802076B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802076B0
  c->r[0]=c->lr; // 802076B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802076B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802076BC
  c->r[31]=c->r[4]|c->r[4]; // 802076C0
  c->r[4]=c->r[1]+0x00000008u; // 802076C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802076C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802076CC
  c->r[29]=c->r[3]|c->r[3]; // 802076D0
  c->r[3]=0u+0x00000000u; // 802076D4
  c->lr=0x802076DCu; f_80206D28(c); // 802076D8
  cmps(c,0,(int32_t)c->r[3],0); // 802076DC
  if (!crb(c,2)) { goto L_8020777C; } // 802076E0
  cmps(c,0,(int32_t)c->r[31],0); // 802076E4
  if (crb(c,2)) { goto L_802076FC; } // 802076E8
  c->r[0]=R8(c->r[31]+0x00000000u); // 802076EC
  cmpu(c,0,c->r[0],0x00000008u); // 802076F0
  if (crb(c,1)) { goto L_802076FC; } // 802076F4
  if (!crb(c,0)) { goto L_80207704; } // 802076F8
L_802076FC:;
  c->r[31]=0u+0xFFFFFFE4u; // 802076FC
  goto L_80207770; // 80207700
L_80207704:;
  c->r[3]=0u+0x0000000Cu; // 80207704
  c->r[4]=0u+0x00000040u; // 80207708
  c->lr=0x80207710u; f_80206C0C(c); // 8020770C
  cmps(c,0,(int32_t)c->r[3],0); // 80207710
  c->r[30]=c->r[3]|c->r[3]; // 80207714
  if (!crb(c,2)) { goto L_80207724; } // 80207718
  c->r[31]=0u+0xFFFFFFCFu; // 8020771C
  goto L_80207770; // 80207720
L_80207724:;
  W32(c->r[3]+0x00000000u,c->r[29]); // 80207724
  c->r[0]=0u+0x00000001u; // 80207728
  c->r[4]=c->r[31]|c->r[31]; // 8020772C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80207730
  c->r[3]=c->r[3]+0x00000008u; // 80207734
  c->r[5]=R8(c->r[31]+0x00000000u); // 80207738
  c->lr=0x80207740u; f_801FC3D0(c); // 8020773C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80207740
  c->r[5]=c->r[30]|c->r[30]; // 80207744
  c->r[4]=0u+0x00000004u; // 80207748
  c->r[6]=0u+0x00000024u; // 8020774C
  c->r[7]=0u+0x00000000u; // 80207750
  c->r[8]=0u+0x00000000u; // 80207754
  c->lr=0x8020775Cu; f_80186C1C(c); // 80207758
  c->r[31]=c->r[3]|c->r[3]; // 8020775C
  c->r[4]=c->r[30]|c->r[30]; // 80207760
  c->r[3]=0u+0x0000000Cu; // 80207764
  c->r[5]=0u+0x00000040u; // 80207768
  c->lr=0x80207770u; f_80206CF4(c); // 8020776C
L_80207770:;
  c->r[4]=c->r[31]|c->r[31]; // 80207770
  c->r[3]=0u+0x00000000u; // 80207774
  c->lr=0x8020777Cu; f_80206E10(c); // 80207778
L_8020777C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020777C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80207780
  c->r[30]=R32(c->r[1]+0x00000018u); // 80207784
  c->r[29]=R32(c->r[1]+0x00000014u); // 80207788
  c->lr=c->r[0]; // 8020778C
  c->r[1]=c->r[1]+0x00000020u; // 80207790
  return; // 80207794
}

// SOGetSockName
void f_80207798(Ctx* __restrict c) {
  trace_call(0x80207798u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207798
  c->r[0]=c->lr; // 8020779C
  W32(c->r[1]+0x00000034u,c->r[0]); // 802077A0
  c->r[11]=c->r[1]+0x00000030u; // 802077A4
  c->lr=0x802077ACu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802077A8
  c->r[28]=c->r[3]|c->r[3]; // 802077AC
  c->r[27]=c->r[4]|c->r[4]; // 802077B0
  c->r[4]=c->r[1]+0x00000008u; // 802077B4
  c->r[3]=0u+0x00000000u; // 802077B8
  c->lr=0x802077C0u; f_80206D28(c); // 802077BC
  cmps(c,0,(int32_t)c->r[3],0); // 802077C0
  if (!crb(c,2)) { goto L_8020787C; } // 802077C4
  cmps(c,0,(int32_t)c->r[27],0); // 802077C8
  if (crb(c,2)) { goto L_802077E0; } // 802077CC
  c->r[3]=R8(c->r[27]+0x00000000u); // 802077D0
  cmpu(c,0,c->r[3],0x00000008u); // 802077D4
  if (crb(c,1)) { goto L_802077E0; } // 802077D8
  if (!crb(c,0)) { goto L_802077E8; } // 802077DC
L_802077E0:;
  c->r[30]=0u+0xFFFFFFE4u; // 802077E0
  goto L_80207870; // 802077E4
L_802077E8:;
  c->r[0]=c->r[3]+0x0000003Fu; // 802077E8
  c->r[3]=0u+0x0000000Cu; // 802077EC
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802077F0
  c->r[4]=c->r[31]|c->r[31]; // 802077F4
  c->lr=0x802077FCu; f_80206C0C(c); // 802077F8
  cmps(c,0,(int32_t)c->r[3],0); // 802077FC
  c->r[29]=c->r[3]|c->r[3]; // 80207800
  if (!crb(c,2)) { goto L_80207810; } // 80207804
  c->r[30]=0u+0xFFFFFFCFu; // 80207808
  goto L_80207870; // 8020780C
L_80207810:;
  W32(c->r[3]+0x00000000u,c->r[28]); // 80207810
  c->r[28]=c->r[3]+0x00000020u; // 80207814
  c->r[4]=c->r[27]|c->r[27]; // 80207818
  c->r[5]=R8(c->r[27]+0x00000000u); // 8020781C
  c->r[3]=c->r[28]|c->r[28]; // 80207820
  c->lr=0x80207828u; f_801FC3D0(c); // 80207824
  c->r[3]=R32(c->r[1]+0x00000008u); // 80207828
  c->r[5]=c->r[29]|c->r[29]; // 8020782C
  c->r[8]=R8(c->r[27]+0x00000000u); // 80207830
  c->r[7]=c->r[28]|c->r[28]; // 80207834
  c->r[4]=0u+0x00000007u; // 80207838
  c->r[6]=0u+0x00000004u; // 8020783C
  c->lr=0x80207844u; f_80186C1C(c); // 80207840
  cmps(c,0,(int32_t)c->r[3],0); // 80207844
  c->r[30]=c->r[3]|c->r[3]; // 80207848
  if (crb(c,0)) { goto L_80207860; } // 8020784C
  c->r[5]=R8(c->r[28]+0x00000000u); // 80207850
  c->r[3]=c->r[27]|c->r[27]; // 80207854
  c->r[4]=c->r[28]|c->r[28]; // 80207858
  c->lr=0x80207860u; f_801FC3D0(c); // 8020785C
L_80207860:;
  c->r[4]=c->r[29]|c->r[29]; // 80207860
  c->r[5]=c->r[31]|c->r[31]; // 80207864
  c->r[3]=0u+0x0000000Cu; // 80207868
  c->lr=0x80207870u; f_80206CF4(c); // 8020786C
L_80207870:;
  c->r[4]=c->r[30]|c->r[30]; // 80207870
  c->r[3]=0u+0x00000000u; // 80207874
  c->lr=0x8020787Cu; f_80206E10(c); // 80207878
L_8020787C:;
  c->r[11]=c->r[1]+0x00000030u; // 8020787C
  c->lr=0x80207884u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80207880
  c->r[0]=R32(c->r[1]+0x00000034u); // 80207884
  c->lr=c->r[0]; // 80207888
  c->r[1]=c->r[1]+0x00000030u; // 8020788C
  return; // 80207890
}

// SORecvFrom
void f_80207894(Ctx* __restrict c) {
  trace_call(0x80207894u);
  c->r[10]=c->r[4]|c->r[4]; // 80207894
  c->r[9]=c->r[5]|c->r[5]; // 80207898
  c->r[0]=c->r[6]|c->r[6]; // 8020789C
  c->r[8]=c->r[7]|c->r[7]; // 802078A0
  c->r[4]=c->r[3]|c->r[3]; // 802078A4
  c->r[5]=c->r[10]|c->r[10]; // 802078A8
  c->r[6]=c->r[9]|c->r[9]; // 802078AC
  c->r[7]=c->r[0]|c->r[0]; // 802078B0
  c->r[3]=0u+0x00000000u; // 802078B4
  f_80207DE4(c); return; // 802078B8
}

// SORecv
void f_802078BC(Ctx* __restrict c) {
  trace_call(0x802078BCu);
  c->r[8]=c->r[4]|c->r[4]; // 802078BC
  c->r[0]=c->r[5]|c->r[5]; // 802078C0
  c->r[7]=c->r[6]|c->r[6]; // 802078C4
  c->r[4]=c->r[3]|c->r[3]; // 802078C8
  c->r[5]=c->r[8]|c->r[8]; // 802078CC
  c->r[6]=c->r[0]|c->r[0]; // 802078D0
  c->r[3]=0u+0x00000000u; // 802078D4
  c->r[8]=0u+0x00000000u; // 802078D8
  f_80207DE4(c); return; // 802078DC
}

// SOSendTo
void f_802078E0(Ctx* __restrict c) {
  trace_call(0x802078E0u);
  c->r[10]=c->r[4]|c->r[4]; // 802078E0
  c->r[9]=c->r[5]|c->r[5]; // 802078E4
  c->r[0]=c->r[6]|c->r[6]; // 802078E8
  c->r[8]=c->r[7]|c->r[7]; // 802078EC
  c->r[4]=c->r[3]|c->r[3]; // 802078F0
  c->r[5]=c->r[10]|c->r[10]; // 802078F4
  c->r[6]=c->r[9]|c->r[9]; // 802078F8
  c->r[7]=c->r[0]|c->r[0]; // 802078FC
  c->r[3]=0u+0x00000000u; // 80207900
  f_8020809C(c); return; // 80207904
}

// SOSend
void f_80207908(Ctx* __restrict c) {
  trace_call(0x80207908u);
  c->r[8]=c->r[4]|c->r[4]; // 80207908
  c->r[0]=c->r[5]|c->r[5]; // 8020790C
  c->r[7]=c->r[6]|c->r[6]; // 80207910
  c->r[4]=c->r[3]|c->r[3]; // 80207914
  c->r[5]=c->r[8]|c->r[8]; // 80207918
  c->r[6]=c->r[0]|c->r[0]; // 8020791C
  c->r[3]=0u+0x00000000u; // 80207920
  c->r[8]=0u+0x00000000u; // 80207924
  f_8020809C(c); return; // 80207928
}

// SOFcntl
void f_8020792C(Ctx* __restrict c) {
  trace_call(0x8020792Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020792C
  c->r[0]=c->lr; // 80207930
  W32(c->r[1]+0x00000094u,c->r[0]); // 80207934
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 80207938
  W32(c->r[1]+0x00000088u,c->r[30]); // 8020793C
  W32(c->r[1]+0x00000084u,c->r[29]); // 80207940
  c->r[29]=c->r[4]|c->r[4]; // 80207944
  W32(c->r[1]+0x00000080u,c->r[28]); // 80207948
  c->r[28]=c->r[3]|c->r[3]; // 8020794C
  if (!crb(c,6)) { goto L_80207974; } // 80207950
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 80207954
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 80207958
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 8020795C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 80207960
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 80207964
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 80207968
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 8020796C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 80207970
L_80207974:;
  c->r[11]=c->r[1]+0x00000098u; // 80207974
  c->r[0]=c->r[1]+0x00000008u; // 80207978
  c->r[12]=0u+0x02000000u; // 8020797C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80207980
  c->r[31]=c->r[1]+0x0000006Cu; // 80207984
  c->r[4]=0u+0x00000001u; // 80207988
  W32(c->r[1]+0x00000008u,c->r[3]); // 8020798C
  c->r[3]=c->r[31]|c->r[31]; // 80207990
  W32(c->r[1]+0x00000010u,c->r[5]); // 80207994
  W32(c->r[1]+0x00000014u,c->r[6]); // 80207998
  W32(c->r[1]+0x00000018u,c->r[7]); // 8020799C
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 802079A0
  W32(c->r[1]+0x00000020u,c->r[9]); // 802079A4
  W32(c->r[1]+0x00000024u,c->r[10]); // 802079A8
  W32(c->r[1]+0x0000006Cu,c->r[12]); // 802079AC
  W32(c->r[1]+0x00000070u,c->r[11]); // 802079B0
  W32(c->r[1]+0x00000074u,c->r[0]); // 802079B4
  c->lr=0x802079BCu; f_802523A0(c); // 802079B8
  c->r[31]=R32(c->r[3]+0x00000000u); // 802079BC
  c->r[4]=c->r[1]+0x00000068u; // 802079C0
  c->r[3]=0u+0x00000000u; // 802079C4
  c->lr=0x802079CCu; f_80206D28(c); // 802079C8
  cmps(c,0,(int32_t)c->r[3],0); // 802079CC
  if (!crb(c,2)) { goto L_80207A3C; } // 802079D0
  c->r[3]=0u+0x0000000Cu; // 802079D4
  c->r[4]=0u+0x00000020u; // 802079D8
  c->lr=0x802079E0u; f_80206C0C(c); // 802079DC
  cmps(c,0,(int32_t)c->r[3],0); // 802079E0
  c->r[30]=c->r[3]|c->r[3]; // 802079E4
  if (!crb(c,2)) { goto L_802079F4; } // 802079E8
  c->r[31]=0u+0xFFFFFFCFu; // 802079EC
  goto L_80207A30; // 802079F0
L_802079F4:;
  W32(c->r[3]+0x00000000u,c->r[28]); // 802079F4
  c->r[5]=c->r[30]|c->r[30]; // 802079F8
  c->r[4]=0u+0x00000005u; // 802079FC
  c->r[6]=0u+0x0000000Cu; // 80207A00
  W32(c->r[3]+0x00000004u,c->r[29]); // 80207A04
  c->r[7]=0u+0x00000000u; // 80207A08
  c->r[8]=0u+0x00000000u; // 80207A0C
  W32(c->r[3]+0x00000008u,c->r[31]); // 80207A10
  c->r[3]=R32(c->r[1]+0x00000068u); // 80207A14
  c->lr=0x80207A1Cu; f_80186C1C(c); // 80207A18
  c->r[31]=c->r[3]|c->r[3]; // 80207A1C
  c->r[4]=c->r[30]|c->r[30]; // 80207A20
  c->r[3]=0u+0x0000000Cu; // 80207A24
  c->r[5]=0u+0x00000020u; // 80207A28
  c->lr=0x80207A30u; f_80206CF4(c); // 80207A2C
L_80207A30:;
  c->r[4]=c->r[31]|c->r[31]; // 80207A30
  c->r[3]=0u+0x00000000u; // 80207A34
  c->lr=0x80207A3Cu; f_80206E10(c); // 80207A38
L_80207A3C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 80207A3C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80207A40
  c->r[30]=R32(c->r[1]+0x00000088u); // 80207A44
  c->r[29]=R32(c->r[1]+0x00000084u); // 80207A48
  c->r[28]=R32(c->r[1]+0x00000080u); // 80207A4C
  c->lr=c->r[0]; // 80207A50
  c->r[1]=c->r[1]+0x00000090u; // 80207A54
  return; // 80207A58
}

// SOShutdown
void f_80207A5C(Ctx* __restrict c) {
  trace_call(0x80207A5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207A5C
  c->r[0]=c->lr; // 80207A60
  W32(c->r[1]+0x00000024u,c->r[0]); // 80207A64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80207A68
  c->r[31]=c->r[4]|c->r[4]; // 80207A6C
  c->r[4]=c->r[1]+0x00000008u; // 80207A70
  W32(c->r[1]+0x00000018u,c->r[30]); // 80207A74
  W32(c->r[1]+0x00000014u,c->r[29]); // 80207A78
  c->r[29]=c->r[3]|c->r[3]; // 80207A7C
  c->r[3]=0u+0x00000000u; // 80207A80
  c->lr=0x80207A88u; f_80206D28(c); // 80207A84
  cmps(c,0,(int32_t)c->r[3],0); // 80207A88
  if (!crb(c,2)) { goto L_80207AF4; } // 80207A8C
  c->r[3]=0u+0x0000000Cu; // 80207A90
  c->r[4]=0u+0x00000020u; // 80207A94
  c->lr=0x80207A9Cu; f_80206C0C(c); // 80207A98
  cmps(c,0,(int32_t)c->r[3],0); // 80207A9C
  c->r[30]=c->r[3]|c->r[3]; // 80207AA0
  if (!crb(c,2)) { goto L_80207AB0; } // 80207AA4
  c->r[31]=0u+0xFFFFFFCFu; // 80207AA8
  goto L_80207AE8; // 80207AAC
L_80207AB0:;
  W32(c->r[3]+0x00000000u,c->r[29]); // 80207AB0
  c->r[5]=c->r[30]|c->r[30]; // 80207AB4
  c->r[4]=0u+0x0000000Eu; // 80207AB8
  c->r[6]=0u+0x00000008u; // 80207ABC
  W32(c->r[3]+0x00000004u,c->r[31]); // 80207AC0
  c->r[7]=0u+0x00000000u; // 80207AC4
  c->r[8]=0u+0x00000000u; // 80207AC8
  c->r[3]=R32(c->r[1]+0x00000008u); // 80207ACC
  c->lr=0x80207AD4u; f_80186C1C(c); // 80207AD0
  c->r[31]=c->r[3]|c->r[3]; // 80207AD4
  c->r[4]=c->r[30]|c->r[30]; // 80207AD8
  c->r[3]=0u+0x0000000Cu; // 80207ADC
  c->r[5]=0u+0x00000020u; // 80207AE0
  c->lr=0x80207AE8u; f_80206CF4(c); // 80207AE4
L_80207AE8:;
  c->r[4]=c->r[31]|c->r[31]; // 80207AE8
  c->r[3]=0u+0x00000000u; // 80207AEC
  c->lr=0x80207AF4u; f_80206E10(c); // 80207AF0
L_80207AF4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80207AF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80207AF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80207AFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80207B00
  c->lr=c->r[0]; // 80207B04
  c->r[1]=c->r[1]+0x00000020u; // 80207B08
  return; // 80207B0C
}

// SOPoll
void f_80207B10(Ctx* __restrict c) {
  trace_call(0x80207B10u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207B10
  c->r[0]=c->lr; // 80207B14
  W32(c->r[1]+0x00000034u,c->r[0]); // 80207B18
  c->r[11]=c->r[1]+0x00000030u; // 80207B1C
  c->lr=0x80207B24u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80207B20
  W32(c->r[1]+0x00000008u,c->r[5]); // 80207B24
  c->r[31]=c->r[3]|c->r[3]; // 80207B28
  c->r[26]=c->r[4]|c->r[4]; // 80207B2C
  c->r[4]=c->r[1]+0x00000010u; // 80207B30
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80207B34
  c->r[3]=0u+0x00000000u; // 80207B38
  c->lr=0x80207B40u; f_80206D28(c); // 80207B3C
  cmps(c,0,(int32_t)c->r[3],0); // 80207B40
  if (!crb(c,2)) { goto L_80207C54; } // 80207B44
  cmps(c,0,(int32_t)c->r[31],0); // 80207B48
  if (!crb(c,2)) { goto L_80207B58; } // 80207B4C
  c->r[28]=0u+0xFFFFFFE4u; // 80207B50
  goto L_80207C48; // 80207B54
L_80207B58:;
  c->r[29]=(uint32_t)((int32_t)c->r[26]*(int32_t)12); // 80207B58
  c->r[3]=0u+0x0000000Cu; // 80207B5C
  c->r[0]=c->r[29]+0x0000003Fu; // 80207B60
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80207B64
  c->r[4]=c->r[30]|c->r[30]; // 80207B68
  c->lr=0x80207B70u; f_80206C0C(c); // 80207B6C
  cmps(c,0,(int32_t)c->r[3],0); // 80207B70
  c->r[27]=c->r[3]|c->r[3]; // 80207B74
  if (!crb(c,2)) { goto L_80207B84; } // 80207B78
  c->r[28]=0u+0xFFFFFFCFu; // 80207B7C
  goto L_80207C48; // 80207B80
L_80207B84:;
  c->r[7]=R32(c->r[1]+0x00000008u); // 80207B84
  c->r[5]=0u+0xFFFFFFFFu; // 80207B88
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80207B8C
  c->r[0]=c->r[5]^0x80000000u; // 80207B90
  c->r[6]=c->r[7]^0x80000000u; // 80207B94
  c->r[26]=c->r[3]+0x00000020u; // 80207B98
  c->r[5]=addc(c,~c->r[4],c->r[5],1); // 80207B9C
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 80207BA0
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80207BA4
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 80207BA8
  if (!crb(c,2)) { goto L_80207BC0; } // 80207BAC
  c->r[4]=c->r[1]+0x00000008u; // 80207BB0
  c->r[5]=0u+0x00000008u; // 80207BB4
  c->lr=0x80207BBCu; f_801FC3D0(c); // 80207BB8
  goto L_80207BF0; // 80207BBC
L_80207BC0:;
  c->r[5]=0u+0x80000000u; // 80207BC0
  c->r[3]=0u+0x10620000u; // 80207BC4
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80207BC8
  c->r[6]=c->r[3]+0x00004DD3u; // 80207BCC
  c->r[3]=c->r[7]|c->r[7]; // 80207BD0
  c->r[5]=0u+0x00000000u; // 80207BD4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80207BD8
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[0])>>32); // 80207BDC
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 80207BE0
  c->lr=0x80207BE8u; f_80252CF4(c); // 80207BE4
  W32(c->r[27]+0x00000004u,c->r[4]); // 80207BE8
  W32(c->r[27]+0x00000000u,c->r[3]); // 80207BEC
L_80207BF0:;
  c->r[3]=c->r[26]|c->r[26]; // 80207BF0
  c->r[4]=c->r[31]|c->r[31]; // 80207BF4
  c->r[5]=c->r[29]|c->r[29]; // 80207BF8
  c->lr=0x80207C00u; f_801FC3D0(c); // 80207BFC
  c->r[3]=R32(c->r[1]+0x00000010u); // 80207C00
  c->r[5]=c->r[27]|c->r[27]; // 80207C04
  c->r[7]=c->r[26]|c->r[26]; // 80207C08
  c->r[8]=c->r[29]|c->r[29]; // 80207C0C
  c->r[4]=0u+0x0000000Bu; // 80207C10
  c->r[6]=0u+0x00000008u; // 80207C14
  c->lr=0x80207C1Cu; f_80186C1C(c); // 80207C18
  cmps(c,0,(int32_t)c->r[3],0); // 80207C1C
  c->r[28]=c->r[3]|c->r[3]; // 80207C20
  if (crb(c,0)) { goto L_80207C38; } // 80207C24
  c->r[3]=c->r[31]|c->r[31]; // 80207C28
  c->r[4]=c->r[26]|c->r[26]; // 80207C2C
  c->r[5]=c->r[29]|c->r[29]; // 80207C30
  c->lr=0x80207C38u; f_801FC3D0(c); // 80207C34
L_80207C38:;
  c->r[4]=c->r[27]|c->r[27]; // 80207C38
  c->r[5]=c->r[30]|c->r[30]; // 80207C3C
  c->r[3]=0u+0x0000000Cu; // 80207C40
  c->lr=0x80207C48u; f_80206CF4(c); // 80207C44
L_80207C48:;
  c->r[4]=c->r[28]|c->r[28]; // 80207C48
  c->r[3]=0u+0x00000000u; // 80207C4C
  c->lr=0x80207C54u; f_80206E10(c); // 80207C50
L_80207C54:;
  c->r[11]=c->r[1]+0x00000030u; // 80207C54
  c->lr=0x80207C5Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80207C58
  c->r[0]=R32(c->r[1]+0x00000034u); // 80207C5C
  c->lr=c->r[0]; // 80207C60
  c->r[1]=c->r[1]+0x00000030u; // 80207C64
  return; // 80207C68
}

// SOInetAtoN
void f_80207C6C(Ctx* __restrict c) {
  trace_call(0x80207C6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207C6C
  c->r[0]=c->lr; // 80207C70
  W32(c->r[1]+0x00000034u,c->r[0]); // 80207C74
  c->r[11]=c->r[1]+0x00000030u; // 80207C78
  c->lr=0x80207C80u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80207C7C
  c->r[27]=c->r[3]|c->r[3]; // 80207C80
  c->r[28]=c->r[4]|c->r[4]; // 80207C84
  c->r[4]=c->r[1]+0x0000000Cu; // 80207C88
  c->r[5]=c->r[1]+0x00000008u; // 80207C8C
  c->r[3]=0u+0x00000000u; // 80207C90
  c->lr=0x80207C98u; f_80206E6C(c); // 80207C94
  cmps(c,0,(int32_t)c->r[3],0); // 80207C98
  if (!crb(c,2)) { goto L_80207D60; } // 80207C9C
  cmps(c,0,(int32_t)c->r[27],0); // 80207CA0
  if (!crb(c,2)) { goto L_80207CB0; } // 80207CA4
  c->r[30]=0u+0xFFFFFFE4u; // 80207CA8
  goto L_80207D50; // 80207CAC
L_80207CB0:;
  c->r[3]=c->r[27]|c->r[27]; // 80207CB0
  c->lr=0x80207CB8u; f_80252384(c); // 80207CB4
  c->r[0]=c->r[3]+0x00000040u; // 80207CB8
  c->r[3]=0u+0x0000000Cu; // 80207CBC
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80207CC0
  c->r[4]=c->r[31]|c->r[31]; // 80207CC4
  c->lr=0x80207CCCu; f_80206C0C(c); // 80207CC8
  cmps(c,0,(int32_t)c->r[3],0); // 80207CCC
  c->r[29]=c->r[3]|c->r[3]; // 80207CD0
  if (!crb(c,2)) { goto L_80207CE0; } // 80207CD4
  c->r[30]=0u+0xFFFFFFCFu; // 80207CD8
  goto L_80207D50; // 80207CDC
L_80207CE0:;
  cmps(c,0,(int32_t)c->r[27],0); // 80207CE0
  c->r[30]=c->r[3]+0x00000020u; // 80207CE4
  if (crb(c,2)) { goto L_80207CF8; } // 80207CE8
  c->r[3]=c->r[30]|c->r[30]; // 80207CEC
  c->r[4]=c->r[27]|c->r[27]; // 80207CF0
  c->lr=0x80207CF8u; f_8025C444(c); // 80207CF4
L_80207CF8:;
  c->r[3]=c->r[27]|c->r[27]; // 80207CF8
  c->lr=0x80207D00u; f_80252384(c); // 80207CFC
  c->r[6]=c->r[3]|c->r[3]; // 80207D00
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80207D04
  c->r[5]=c->r[30]|c->r[30]; // 80207D08
  c->r[7]=c->r[29]|c->r[29]; // 80207D0C
  c->r[4]=0u+0x00000015u; // 80207D10
  c->r[8]=0u+0x00000004u; // 80207D14
  c->lr=0x80207D1Cu; f_80186C1C(c); // 80207D18
  cmps(c,0,(int32_t)c->r[3],0); // 80207D1C
  c->r[30]=c->r[3]|c->r[3]; // 80207D20
  if (crb(c,0)) { goto L_80207D40; } // 80207D24
  cmps(c,0,(int32_t)c->r[28],0); // 80207D28
  if (crb(c,2)) { goto L_80207D40; } // 80207D2C
  c->r[3]=c->r[28]|c->r[28]; // 80207D30
  c->r[4]=c->r[29]|c->r[29]; // 80207D34
  c->r[5]=0u+0x00000004u; // 80207D38
  c->lr=0x80207D40u; f_801FC3D0(c); // 80207D3C
L_80207D40:;
  c->r[4]=c->r[29]|c->r[29]; // 80207D40
  c->r[5]=c->r[31]|c->r[31]; // 80207D44
  c->r[3]=0u+0x0000000Cu; // 80207D48
  c->lr=0x80207D50u; f_80206CF4(c); // 80207D4C
L_80207D50:;
  c->r[5]=R32(c->r[1]+0x00000008u); // 80207D50
  c->r[4]=c->r[30]|c->r[30]; // 80207D54
  c->r[3]=0u+0x00000000u; // 80207D58
  c->lr=0x80207D60u; f_80207144(c); // 80207D5C
L_80207D60:;
  c->r[11]=c->r[1]+0x00000030u; // 80207D60
  c->lr=0x80207D68u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80207D64
  c->r[0]=R32(c->r[1]+0x00000034u); // 80207D68
  c->lr=c->r[0]; // 80207D6C
  c->r[1]=c->r[1]+0x00000030u; // 80207D70
  return; // 80207D74
}

// SOInetNtoA
void f_80207D78(Ctx* __restrict c) {
  trace_call(0x80207D78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207D78
  c->r[0]=c->lr; // 80207D7C
  c->r[8]=c->r[3]|c->r[3]; // 80207D80
  c->r[4]=0u+0x802F0000u; // 80207D84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207D88
  c->r[4]=c->r[4]+0xFFFFA164u; // 80207D8C
  c->r[7]=R8(c->r[8]+0x00000002u); // 80207D90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80207D94
  c->r[31]=0u+0x804D0000u; // 80207D98
  c->r[5]=R8(c->r[3]+0x00000000u); // 80207D9C
  c->r[6]=R8(c->r[3]+0x00000001u); // 80207DA0
  c->r[3]=c->r[31]+0x00001830u; // 80207DA4
  c->r[8]=R8(c->r[8]+0x00000003u); // 80207DA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207DAC
  c->lr=0x80207DB4u; f_8025ABC0(c); // 80207DB0
  c->r[3]=c->r[31]+0x00001830u; // 80207DB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80207DB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80207DBC
  c->lr=c->r[0]; // 80207DC0
  c->r[1]=c->r[1]+0x00000010u; // 80207DC4
  return; // 80207DC8
}

// SONtoHl
void f_80207DCC(Ctx* __restrict c) {
  trace_call(0x80207DCCu);
  return; // 80207DCC
}

// SONtoHs
void f_80207DD0(Ctx* __restrict c) {
  trace_call(0x80207DD0u);
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 80207DD0
  return; // 80207DD4
}

// SOHtoNl
void f_80207DD8(Ctx* __restrict c) {
  trace_call(0x80207DD8u);
  return; // 80207DD8
}

// SOHtoNs
void f_80207DDC(Ctx* __restrict c) {
  trace_call(0x80207DDCu);
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 80207DDC
  return; // 80207DE0
}

// SORecvFrom_80207DE4
void f_80207DE4(Ctx* __restrict c) {
  trace_call(0x80207DE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207DE4
  c->r[0]=c->lr; // 80207DE8
  W32(c->r[1]+0x00000044u,c->r[0]); // 80207DEC
  c->r[11]=c->r[1]+0x00000040u; // 80207DF0
  c->lr=0x80207DF8u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80207DF4
  c->r[9]=0u+0x00010000u; // 80207DF8
  c->r[25]=c->r[3]|c->r[3]; // 80207DFC
  c->r[0]=c->r[9]+0xFFFF8000u; // 80207E00
  c->r[26]=c->r[4]|c->r[4]; // 80207E04
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80207E08
  c->r[27]=c->r[5]|c->r[5]; // 80207E0C
  c->r[28]=c->r[6]|c->r[6]; // 80207E10
  c->r[29]=c->r[7]|c->r[7]; // 80207E14
  c->r[30]=c->r[8]|c->r[8]; // 80207E18
  if (!crb(c,1)) { goto L_80207E24; } // 80207E1C
  c->r[28]=c->r[0]|c->r[0]; // 80207E20
L_80207E24:;
  c->r[3]=c->r[25]|c->r[25]; // 80207E24
  c->r[4]=c->r[1]+0x00000008u; // 80207E28
  c->lr=0x80207E30u; f_80206D28(c); // 80207E2C
  cmps(c,0,(int32_t)c->r[3],0); // 80207E30
  if (!crb(c,2)) { goto L_80208084; } // 80207E34
  cmps(c,0,(int32_t)c->r[30],0); // 80207E38
  if (crb(c,2)) { goto L_80207E58; } // 80207E3C
  c->r[0]=R8(c->r[30]+0x00000000u); // 80207E40
  cmpu(c,0,c->r[0],0x00000008u); // 80207E44
  if (crb(c,1)) { goto L_80207E50; } // 80207E48
  if (!crb(c,0)) { goto L_80207E58; } // 80207E4C
L_80207E50:;
  c->r[26]=0u+0xFFFFFFE4u; // 80207E50
  goto L_80208078; // 80207E54
L_80207E58:;
  cmps(c,0,(int32_t)c->r[28],0); // 80207E58
  if (crb(c,0)) { goto L_80207E6C; } // 80207E5C
  if (!crb(c,1)) { goto L_80207E74; } // 80207E60
  cmps(c,0,(int32_t)c->r[27],0); // 80207E64
  if (!crb(c,2)) { goto L_80207E74; } // 80207E68
L_80207E6C:;
  c->r[26]=0u+0xFFFFFFE4u; // 80207E6C
  goto L_80208078; // 80207E70
L_80207E74:;
  cmps(c,0,(int32_t)c->r[28],0); // 80207E74
  c->r[31]=0u+0x00000001u; // 80207E78
  if (crb(c,2)) { goto L_80207F0C; } // 80207E7C
  c->r[0]=rotl(c->r[27],0)&0x0000001Fu; cr0(c,c->r[0]); // 80207E80
  c->r[24]=0u+0x00000000u; // 80207E84
  c->r[4]=0u+0x00000000u; // 80207E88
  if (!crb(c,2)) { goto L_80207EAC; } // 80207E8C
  c->r[0]=rotl(c->r[28],27)&0xF8000000u; // 80207E90
  c->r[3]=rotl(c->r[28],1)&0x00000001u; // 80207E94
  c->r[0]=c->r[0]-c->r[3]; // 80207E98
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFFFu; // 80207E9C
  c->r[0]=c->r[0]+c->r[3]; cr0(c,c->r[0]); // 80207EA0
  if (!crb(c,2)) { goto L_80207EAC; } // 80207EA4
  c->r[4]=0u+0x00000001u; // 80207EA8
L_80207EAC:;
  cmps(c,0,(int32_t)c->r[4],0); // 80207EAC
  if (crb(c,2)) { goto L_80207F00; } // 80207EB0
  c->r[23]=0u+0x00000001u; // 80207EB4
  c->lr=0x80207EBCu; f_80206BB4(c); // 80207EB8
  cmps(c,0,(int32_t)c->r[3],0); // 80207EBC
  if (crb(c,2)) { goto L_80207EF4; } // 80207EC0
  c->r[4]=rotl(c->r[27],0)&0x1FFFFFFFu; // 80207EC4
  c->r[0]=0u+0x10000000u; // 80207EC8
  cmpu(c,0,c->r[4],c->r[0]); // 80207ECC
  c->r[3]=0u+0x00000000u; // 80207ED0
  if (crb(c,0)) { goto L_80207EE8; } // 80207ED4
  c->r[0]=0u+0x18000000u; // 80207ED8
  cmpu(c,0,c->r[4],c->r[0]); // 80207EDC
  if (!crb(c,0)) { goto L_80207EE8; } // 80207EE0
  c->r[3]=0u+0x00000001u; // 80207EE4
L_80207EE8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80207EE8
  if (!crb(c,2)) { goto L_80207EF4; } // 80207EEC
  c->r[23]=0u+0x00000000u; // 80207EF0
L_80207EF4:;
  cmps(c,0,(int32_t)c->r[23],0); // 80207EF4
  if (crb(c,2)) { goto L_80207F00; } // 80207EF8
  c->r[24]=0u+0x00000001u; // 80207EFC
L_80207F00:;
  cmps(c,0,(int32_t)c->r[24],0); // 80207F00
  if (!crb(c,2)) { goto L_80207F0C; } // 80207F04
  c->r[31]=0u+0x00000000u; // 80207F08
L_80207F0C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80207F0C
  if (!crb(c,2)) { goto L_80207F1C; } // 80207F10
  c->r[3]=0u+0x00000000u; // 80207F14
  goto L_80207F20; // 80207F18
L_80207F1C:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 80207F1C
L_80207F20:;
  c->r[0]=c->r[3]+0x0000005Fu; // 80207F20
  c->r[3]=0u+0x0000000Cu; // 80207F24
  c->r[24]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80207F28
  c->r[4]=c->r[24]|c->r[24]; // 80207F2C
  c->lr=0x80207F34u; f_80206C0C(c); // 80207F30
  cmps(c,0,(int32_t)c->r[31],0); // 80207F34
  c->r[22]=c->r[3]|c->r[3]; // 80207F38
  if (!crb(c,2)) { goto L_80207F54; } // 80207F3C
  c->r[0]=c->r[28]+0x0000001Fu; // 80207F40
  c->r[3]=0u+0x0000000Du; // 80207F44
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80207F48
  c->lr=0x80207F50u; f_80206C0C(c); // 80207F4C
  goto L_80207F58; // 80207F50
L_80207F54:;
  c->r[3]=c->r[27]|c->r[27]; // 80207F54
L_80207F58:;
  cmps(c,0,(int32_t)c->r[22],0); // 80207F58
  c->r[23]=c->r[3]|c->r[3]; // 80207F5C
  if (crb(c,2)) { goto L_80207F6C; } // 80207F60
  cmps(c,0,(int32_t)c->r[3],0); // 80207F64
  if (!crb(c,2)) { goto L_80207F74; } // 80207F68
L_80207F6C:;
  c->r[26]=0u+0xFFFFFFCFu; // 80207F6C
  goto L_8020804C; // 80207F70
L_80207F74:;
  W32(c->r[22]+0x00000020u,c->r[26]); // 80207F74
  c->r[4]=c->r[22]+0x00000020u; // 80207F78
  c->r[0]=0u+0x00000008u; // 80207F7C
  cmps(c,0,(int32_t)c->r[30],0); // 80207F80
  W32(c->r[22]+0x00000024u,c->r[29]); // 80207F84
  c->r[21]=c->r[4]+0x00000020u; // 80207F88
  W32(c->r[22]+0x00000000u,c->r[4]); // 80207F8C
  W32(c->r[22]+0x00000004u,c->r[0]); // 80207F90
  W32(c->r[22]+0x00000008u,c->r[3]); // 80207F94
  W32(c->r[22]+0x0000000Cu,c->r[28]); // 80207F98
  if (!crb(c,2)) { goto L_80207FCC; } // 80207F9C
  c->r[0]=0u+0x00000000u; // 80207FA0
  c->r[7]=c->r[22]|c->r[22]; // 80207FA4
  W32(c->r[22]+0x00000010u,c->r[0]); // 80207FA8
  c->r[4]=0u+0x0000000Cu; // 80207FAC
  c->r[5]=0u+0x00000001u; // 80207FB0
  c->r[6]=0u+0x00000002u; // 80207FB4
  W32(c->r[22]+0x00000014u,c->r[0]); // 80207FB8
  c->r[3]=R32(c->r[1]+0x00000008u); // 80207FBC
  c->lr=0x80207FC4u; f_80186F6C(c); // 80207FC0
  c->r[26]=c->r[3]|c->r[3]; // 80207FC4
  goto L_8020802C; // 80207FC8
L_80207FCC:;
  c->r[5]=R8(c->r[30]+0x00000000u); // 80207FCC
  c->r[3]=c->r[21]|c->r[21]; // 80207FD0
  c->r[4]=c->r[30]|c->r[30]; // 80207FD4
  c->lr=0x80207FDCu; f_801FC3D0(c); // 80207FD8
  W32(c->r[22]+0x00000010u,c->r[21]); // 80207FDC
  c->r[7]=c->r[22]|c->r[22]; // 80207FE0
  c->r[4]=0u+0x0000000Cu; // 80207FE4
  c->r[5]=0u+0x00000001u; // 80207FE8
  c->r[0]=R8(c->r[30]+0x00000000u); // 80207FEC
  c->r[6]=0u+0x00000002u; // 80207FF0
  W32(c->r[22]+0x00000014u,c->r[0]); // 80207FF4
  c->r[3]=R32(c->r[1]+0x00000008u); // 80207FF8
  c->lr=0x80208000u; f_80186F6C(c); // 80207FFC
  cmps(c,0,(int32_t)c->r[3],0); // 80208000
  c->r[26]=c->r[3]|c->r[3]; // 80208004
  if (crb(c,0)) { goto L_8020802C; } // 80208008
  c->r[5]=R8(c->r[30]+0x00000000u); // 8020800C
  c->r[3]=c->r[30]|c->r[30]; // 80208010
  c->r[0]=R8(c->r[21]+0x00000000u); // 80208014
  c->r[4]=c->r[21]|c->r[21]; // 80208018
  cmpu(c,0,c->r[5],c->r[0]); // 8020801C
  if (!crb(c,1)) { goto L_80208028; } // 80208020
  c->r[5]=c->r[0]|c->r[0]; // 80208024
L_80208028:;
  c->lr=0x8020802Cu; f_801FC3D0(c); // 80208028
L_8020802C:;
  cmps(c,0,(int32_t)c->r[26],0); // 8020802C
  if (crb(c,0)) { goto L_8020804C; } // 80208030
  cmps(c,0,(int32_t)c->r[31],0); // 80208034
  if (!crb(c,2)) { goto L_8020804C; } // 80208038
  c->r[3]=c->r[27]|c->r[27]; // 8020803C
  c->r[4]=c->r[23]|c->r[23]; // 80208040
  c->r[5]=c->r[28]|c->r[28]; // 80208044
  c->lr=0x8020804Cu; f_801FC3D0(c); // 80208048
L_8020804C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020804C
  if (!crb(c,2)) { goto L_80208068; } // 80208050
  c->r[0]=c->r[28]+0x0000001Fu; // 80208054
  c->r[4]=c->r[23]|c->r[23]; // 80208058
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8020805C
  c->r[3]=0u+0x0000000Du; // 80208060
  c->lr=0x80208068u; f_80206CF4(c); // 80208064
L_80208068:;
  c->r[4]=c->r[22]|c->r[22]; // 80208068
  c->r[5]=c->r[24]|c->r[24]; // 8020806C
  c->r[3]=0u+0x0000000Cu; // 80208070
  c->lr=0x80208078u; f_80206CF4(c); // 80208074
L_80208078:;
  c->r[3]=c->r[25]|c->r[25]; // 80208078
  c->r[4]=c->r[26]|c->r[26]; // 8020807C
  c->lr=0x80208084u; f_80206E10(c); // 80208080
L_80208084:;
  c->r[11]=c->r[1]+0x00000040u; // 80208084
  c->lr=0x8020808Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80208088
  c->r[0]=R32(c->r[1]+0x00000044u); // 8020808C
  c->lr=c->r[0]; // 80208090
  c->r[1]=c->r[1]+0x00000040u; // 80208094
  return; // 80208098
}

// fn_8020809C
void f_8020809C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020809C
  c->r[0]=c->lr; // 802080A0
  W32(c->r[1]+0x00000044u,c->r[0]); // 802080A4
  c->r[11]=c->r[1]+0x00000040u; // 802080A8
  c->lr=0x802080B0u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802080AC
  c->r[26]=c->r[4]|c->r[4]; // 802080B0
  c->r[25]=c->r[3]|c->r[3]; // 802080B4
  c->r[27]=c->r[5]|c->r[5]; // 802080B8
  c->r[28]=c->r[6]|c->r[6]; // 802080BC
  c->r[29]=c->r[7]|c->r[7]; // 802080C0
  c->r[30]=c->r[8]|c->r[8]; // 802080C4
  c->r[4]=c->r[1]+0x00000008u; // 802080C8
  c->lr=0x802080D0u; f_80206D28(c); // 802080CC
  cmps(c,0,(int32_t)c->r[3],0); // 802080D0
  if (!crb(c,2)) { goto L_802082B0; } // 802080D4
  cmps(c,0,(int32_t)c->r[30],0); // 802080D8
  if (crb(c,2)) { goto L_802080F8; } // 802080DC
  c->r[0]=R8(c->r[30]+0x00000000u); // 802080E0
  cmpu(c,0,c->r[0],0x00000008u); // 802080E4
  if (crb(c,1)) { goto L_802080F0; } // 802080E8
  if (!crb(c,0)) { goto L_802080F8; } // 802080EC
L_802080F0:;
  c->r[24]=0u+0xFFFFFFE4u; // 802080F0
  goto L_802082A4; // 802080F4
L_802080F8:;
  cmps(c,0,(int32_t)c->r[28],0); // 802080F8
  if (crb(c,0)) { goto L_8020810C; } // 802080FC
  if (!crb(c,1)) { goto L_80208114; } // 80208100
  cmps(c,0,(int32_t)c->r[27],0); // 80208104
  if (!crb(c,2)) { goto L_80208114; } // 80208108
L_8020810C:;
  c->r[24]=0u+0xFFFFFFE4u; // 8020810C
  goto L_802082A4; // 80208110
L_80208114:;
  cmps(c,0,(int32_t)c->r[28],0); // 80208114
  c->r[31]=0u+0x00000001u; // 80208118
  if (crb(c,2)) { goto L_802081AC; } // 8020811C
  c->r[0]=rotl(c->r[27],0)&0x0000001Fu; cr0(c,c->r[0]); // 80208120
  c->r[24]=0u+0x00000000u; // 80208124
  c->r[4]=0u+0x00000000u; // 80208128
  if (!crb(c,2)) { goto L_8020814C; } // 8020812C
  c->r[0]=rotl(c->r[28],27)&0xF8000000u; // 80208130
  c->r[3]=rotl(c->r[28],1)&0x00000001u; // 80208134
  c->r[0]=c->r[0]-c->r[3]; // 80208138
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFFFu; // 8020813C
  c->r[0]=c->r[0]+c->r[3]; cr0(c,c->r[0]); // 80208140
  if (!crb(c,2)) { goto L_8020814C; } // 80208144
  c->r[4]=0u+0x00000001u; // 80208148
L_8020814C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8020814C
  if (crb(c,2)) { goto L_802081A0; } // 80208150
  c->r[23]=0u+0x00000001u; // 80208154
  c->lr=0x8020815Cu; f_80206BB4(c); // 80208158
  cmps(c,0,(int32_t)c->r[3],0); // 8020815C
  if (crb(c,2)) { goto L_80208194; } // 80208160
  c->r[4]=rotl(c->r[27],0)&0x1FFFFFFFu; // 80208164
  c->r[0]=0u+0x10000000u; // 80208168
  cmpu(c,0,c->r[4],c->r[0]); // 8020816C
  c->r[3]=0u+0x00000000u; // 80208170
  if (crb(c,0)) { goto L_80208188; } // 80208174
  c->r[0]=0u+0x18000000u; // 80208178
  cmpu(c,0,c->r[4],c->r[0]); // 8020817C
  if (!crb(c,0)) { goto L_80208188; } // 80208180
  c->r[3]=0u+0x00000001u; // 80208184
L_80208188:;
  cmps(c,0,(int32_t)c->r[3],0); // 80208188
  if (!crb(c,2)) { goto L_80208194; } // 8020818C
  c->r[23]=0u+0x00000000u; // 80208190
L_80208194:;
  cmps(c,0,(int32_t)c->r[23],0); // 80208194
  if (crb(c,2)) { goto L_802081A0; } // 80208198
  c->r[24]=0u+0x00000001u; // 8020819C
L_802081A0:;
  cmps(c,0,(int32_t)c->r[24],0); // 802081A0
  if (!crb(c,2)) { goto L_802081AC; } // 802081A4
  c->r[31]=0u+0x00000000u; // 802081A8
L_802081AC:;
  c->r[3]=0u+0x0000000Cu; // 802081AC
  c->r[4]=0u+0x00000060u; // 802081B0
  c->lr=0x802081B8u; f_80206C0C(c); // 802081B4
  cmps(c,0,(int32_t)c->r[31],0); // 802081B8
  c->r[22]=c->r[3]|c->r[3]; // 802081BC
  if (!crb(c,2)) { goto L_802081DC; } // 802081C0
  c->r[0]=c->r[28]+0x0000001Fu; // 802081C4
  c->r[3]=0u+0x0000000Eu; // 802081C8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802081CC
  c->lr=0x802081D4u; f_80206C0C(c); // 802081D0
  c->r[23]=c->r[3]|c->r[3]; // 802081D4
  goto L_802081E0; // 802081D8
L_802081DC:;
  c->r[23]=c->r[27]|c->r[27]; // 802081DC
L_802081E0:;
  cmps(c,0,(int32_t)c->r[22],0); // 802081E0
  if (crb(c,2)) { goto L_802081F0; } // 802081E4
  cmps(c,0,(int32_t)c->r[23],0); // 802081E8
  if (!crb(c,2)) { goto L_802081F8; } // 802081EC
L_802081F0:;
  c->r[24]=0u+0xFFFFFFCFu; // 802081F0
  goto L_80208278; // 802081F4
L_802081F8:;
  W32(c->r[22]+0x00000020u,c->r[26]); // 802081F8
  cmps(c,0,(int32_t)c->r[30],0); // 802081FC
  c->r[24]=c->r[22]+0x00000020u; // 80208200
  W32(c->r[22]+0x00000024u,c->r[29]); // 80208204
  if (!crb(c,2)) { goto L_80208218; } // 80208208
  c->r[0]=0u+0x00000000u; // 8020820C
  W32(c->r[24]+0x00000008u,c->r[0]); // 80208210
  goto L_80208230; // 80208214
L_80208218:;
  c->r[0]=0u+0x00000001u; // 80208218
  c->r[4]=c->r[30]|c->r[30]; // 8020821C
  W32(c->r[24]+0x00000008u,c->r[0]); // 80208220
  c->r[3]=c->r[24]+0x0000000Cu; // 80208224
  c->r[5]=R8(c->r[30]+0x00000000u); // 80208228
  c->lr=0x80208230u; f_801FC3D0(c); // 8020822C
L_80208230:;
  cmps(c,0,(int32_t)c->r[31],0); // 80208230
  if (!crb(c,2)) { goto L_80208248; } // 80208234
  c->r[3]=c->r[23]|c->r[23]; // 80208238
  c->r[4]=c->r[27]|c->r[27]; // 8020823C
  c->r[5]=c->r[28]|c->r[28]; // 80208240
  c->lr=0x80208248u; f_801FC3D0(c); // 80208244
L_80208248:;
  W32(c->r[22]+0x00000000u,c->r[23]); // 80208248
  c->r[0]=0u+0x00000028u; // 8020824C
  c->r[7]=c->r[22]|c->r[22]; // 80208250
  c->r[4]=0u+0x0000000Du; // 80208254
  W32(c->r[22]+0x00000004u,c->r[28]); // 80208258
  c->r[5]=0u+0x00000002u; // 8020825C
  c->r[6]=0u+0x00000000u; // 80208260
  W32(c->r[22]+0x00000008u,c->r[24]); // 80208264
  W32(c->r[22]+0x0000000Cu,c->r[0]); // 80208268
  c->r[3]=R32(c->r[1]+0x00000008u); // 8020826C
  c->lr=0x80208274u; f_80186F6C(c); // 80208270
  c->r[24]=c->r[3]|c->r[3]; // 80208274
L_80208278:;
  cmps(c,0,(int32_t)c->r[31],0); // 80208278
  if (!crb(c,2)) { goto L_80208294; } // 8020827C
  c->r[0]=c->r[28]+0x0000001Fu; // 80208280
  c->r[4]=c->r[23]|c->r[23]; // 80208284
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80208288
  c->r[3]=0u+0x0000000Eu; // 8020828C
  c->lr=0x80208294u; f_80206CF4(c); // 80208290
L_80208294:;
  c->r[4]=c->r[22]|c->r[22]; // 80208294
  c->r[3]=0u+0x0000000Cu; // 80208298
  c->r[5]=0u+0x00000060u; // 8020829C
  c->lr=0x802082A4u; f_80206CF4(c); // 802082A0
L_802082A4:;
  c->r[3]=c->r[25]|c->r[25]; // 802082A4
  c->r[4]=c->r[24]|c->r[24]; // 802082A8
  c->lr=0x802082B0u; f_80206E10(c); // 802082AC
L_802082B0:;
  c->r[11]=c->r[1]+0x00000040u; // 802082B0
  c->lr=0x802082B8u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802082B4
  c->r[0]=R32(c->r[1]+0x00000044u); // 802082B8
  c->lr=c->r[0]; // 802082BC
  c->r[1]=c->r[1]+0x00000040u; // 802082C0
  return; // 802082C4
}

// SOGetHostID
void f_802082C8(Ctx* __restrict c) {
  trace_call(0x802082C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802082C8
  c->r[0]=c->lr; // 802082CC
  c->r[3]=0u+0x00000000u; // 802082D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802082D4
  c->r[4]=c->r[1]+0x00000008u; // 802082D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802082DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802082E0
  c->r[30]=0u+0x00000000u; // 802082E4
  c->lr=0x802082ECu; f_80206D28(c); // 802082E8
  cmps(c,0,(int32_t)c->r[3],0); // 802082EC
  c->r[31]=c->r[3]|c->r[3]; // 802082F0
  if (!crb(c,2)) { goto L_80208324; } // 802082F4
  c->r[3]=R32(c->r[1]+0x00000008u); // 802082F8
  c->r[4]=0u+0x00000010u; // 802082FC
  c->r[5]=0u+0x00000000u; // 80208300
  c->r[6]=0u+0x00000000u; // 80208304
  c->r[7]=0u+0x00000000u; // 80208308
  c->r[8]=0u+0x00000000u; // 8020830C
  c->lr=0x80208314u; f_80186C1C(c); // 80208310
  c->r[30]=c->r[3]|c->r[3]; // 80208314
  c->r[4]=c->r[31]|c->r[31]; // 80208318
  c->r[3]=0u+0x00000000u; // 8020831C
  c->lr=0x80208324u; f_80206E10(c); // 80208320
L_80208324:;
  c->r[3]=c->r[30]|c->r[30]; // 80208324
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80208328
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020832C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80208330
  c->lr=c->r[0]; // 80208334
  c->r[1]=c->r[1]+0x00000020u; // 80208338
  return; // 8020833C
}

// SOGetHostByName
void f_80208340(Ctx* __restrict c) {
  trace_call(0x80208340u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80208340
  c->r[0]=c->lr; // 80208344
  W32(c->r[1]+0x00000034u,c->r[0]); // 80208348
  c->r[11]=c->r[1]+0x00000030u; // 8020834C
  c->lr=0x80208354u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80208350
  c->r[26]=c->r[3]|c->r[3]; // 80208354
  c->r[4]=c->r[1]+0x00000008u; // 80208358
  c->r[27]=0u+0x00000000u; // 8020835C
  c->r[3]=0u+0x00000000u; // 80208360
  c->lr=0x80208368u; f_80206D28(c); // 80208364
  cmps(c,0,(int32_t)c->r[3],0); // 80208368
  if (!crb(c,2)) { goto L_80208464; } // 8020836C
  cmps(c,0,(int32_t)c->r[26],0); // 80208370
  if (!crb(c,2)) { goto L_80208380; } // 80208374
  c->r[29]=0u+0xFFFFFFE4u; // 80208378
  goto L_80208458; // 8020837C
L_80208380:;
  c->r[3]=c->r[26]|c->r[26]; // 80208380
  c->lr=0x80208388u; f_80252384(c); // 80208384
  c->r[0]=c->r[3]+0x00000020u; // 80208388
  c->r[29]=c->r[3]|c->r[3]; // 8020838C
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80208390
  c->r[3]=0u+0x0000000Cu; // 80208394
  c->r[4]=c->r[28]|c->r[28]; // 80208398
  c->lr=0x802083A0u; f_80206C0C(c); // 8020839C
  c->r[31]=c->r[3]|c->r[3]; // 802083A0
  c->lr=0x802083A8u; f_80206BA8(c); // 802083A4
  cmps(c,0,(int32_t)c->r[31],0); // 802083A8
  c->r[30]=R32(c->r[3]+0x00000010u); // 802083AC
  if (!crb(c,2)) { goto L_802083BC; } // 802083B0
  c->r[29]=0u+0xFFFFFFCFu; // 802083B4
  goto L_80208458; // 802083B8
L_802083BC:;
  c->r[3]=c->r[31]|c->r[31]; // 802083BC
  c->r[4]=c->r[26]|c->r[26]; // 802083C0
  c->lr=0x802083C8u; f_8025C444(c); // 802083C4
  c->r[3]=R32(c->r[1]+0x00000008u); // 802083C8
  c->r[5]=c->r[31]|c->r[31]; // 802083CC
  c->r[7]=c->r[30]|c->r[30]; // 802083D0
  c->r[6]=c->r[29]+0x00000001u; // 802083D4
  c->r[4]=0u+0x00000011u; // 802083D8
  c->r[8]=0u+0x00000460u; // 802083DC
  c->lr=0x802083E4u; f_80186C1C(c); // 802083E0
  cmps(c,0,(int32_t)c->r[3],0); // 802083E4
  c->r[29]=c->r[3]|c->r[3]; // 802083E8
  if (crb(c,0)) { goto L_80208448; } // 802083EC
  c->r[3]=R32(c->r[30]+0x00000000u); // 802083F0
  c->r[0]=c->r[30]+0x00000010u; // 802083F4
  c->r[4]=c->r[30]+0x00000340u; // 802083F8
  c->r[3]=c->r[0]-c->r[3]; // 802083FC
  goto L_80208414; // 80208400
L_80208404:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80208404
  c->r[0]=c->r[0]+c->r[3]; // 80208408
  W32(c->r[4]+0x00000000u,c->r[0]); // 8020840C
  c->r[4]=c->r[4]+0x00000004u; // 80208410
L_80208414:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80208414
  cmps(c,0,(int32_t)c->r[0],0); // 80208418
  if (!crb(c,2)) { IRQCHK(c); goto L_80208404; } // 8020841C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80208420
  c->r[27]=c->r[30]|c->r[30]; // 80208424
  c->r[0]=c->r[0]+c->r[3]; // 80208428
  W32(c->r[30]+0x00000004u,c->r[0]); // 8020842C
  c->r[0]=R32(c->r[30]+0x00000000u); // 80208430
  c->r[0]=c->r[0]+c->r[3]; // 80208434
  W32(c->r[30]+0x00000000u,c->r[0]); // 80208438
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8020843C
  c->r[0]=c->r[0]+c->r[3]; // 80208440
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80208444
L_80208448:;
  c->r[4]=c->r[31]|c->r[31]; // 80208448
  c->r[5]=c->r[28]|c->r[28]; // 8020844C
  c->r[3]=0u+0x0000000Cu; // 80208450
  c->lr=0x80208458u; f_80206CF4(c); // 80208454
L_80208458:;
  c->r[4]=c->r[29]|c->r[29]; // 80208458
  c->r[3]=0u+0x00000000u; // 8020845C
  c->lr=0x80208464u; f_80206E10(c); // 80208460
L_80208464:;
  c->r[11]=c->r[1]+0x00000030u; // 80208464
  c->r[3]=c->r[27]|c->r[27]; // 80208468
  c->lr=0x80208470u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020846C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80208470
  c->lr=c->r[0]; // 80208474
  c->r[1]=c->r[1]+0x00000030u; // 80208478
  return; // 8020847C
}

// SOGetAddrInfo
void f_80208480(Ctx* __restrict c) {
  trace_call(0x80208480u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80208480
  c->r[0]=c->lr; // 80208484
  W32(c->r[1]+0x00000044u,c->r[0]); // 80208488
  c->r[11]=c->r[1]+0x00000040u; // 8020848C
  c->lr=0x80208494u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80208490
  c->r[25]=c->r[3]|c->r[3]; // 80208494
  c->r[26]=c->r[4]|c->r[4]; // 80208498
  c->r[27]=c->r[5]|c->r[5]; // 8020849C
  c->r[28]=c->r[6]|c->r[6]; // 802084A0
  c->r[4]=c->r[1]+0x00000008u; // 802084A4
  c->r[3]=0u+0x00000000u; // 802084A8
  c->lr=0x802084B0u; f_80206D28(c); // 802084AC
  cmps(c,0,(int32_t)c->r[3],0); // 802084B0
  if (!crb(c,2)) { goto L_8020874C; } // 802084B4
  cmps(c,0,(int32_t)c->r[26],0); // 802084B8
  if (!crb(c,2)) { goto L_802084C8; } // 802084BC
  c->r[29]=0u+0x00000000u; // 802084C0
  goto L_802084D4; // 802084C4
L_802084C8:;
  c->r[3]=c->r[25]|c->r[25]; // 802084C8
  c->lr=0x802084D0u; f_80252384(c); // 802084CC
  c->r[29]=c->r[3]+0x00000001u; // 802084D0
L_802084D4:;
  cmps(c,0,(int32_t)c->r[25],0); // 802084D4
  if (!crb(c,2)) { goto L_802084E4; } // 802084D8
  c->r[3]=0u+0x00000000u; // 802084DC
  goto L_802084F0; // 802084E0
L_802084E4:;
  c->r[3]=c->r[25]|c->r[25]; // 802084E4
  c->lr=0x802084ECu; f_80252384(c); // 802084E8
  c->r[3]=c->r[3]+0x00000001u; // 802084EC
L_802084F0:;
  c->r[3]=c->r[3]+0x0000001Fu; // 802084F0
  c->r[0]=c->r[29]+0x0000001Fu; // 802084F4
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFE0u; // 802084F8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802084FC
  c->r[3]=0u+0x0000000Cu; // 80208500
  c->r[4]=c->r[4]+c->r[0]; // 80208504
  c->r[0]=c->r[4]+0x0000005Fu; // 80208508
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8020850C
  c->r[4]=c->r[31]|c->r[31]; // 80208510
  c->lr=0x80208518u; f_80206C0C(c); // 80208514
  cmps(c,0,(int32_t)c->r[3],0); // 80208518
  c->r[29]=c->r[3]|c->r[3]; // 8020851C
  if (!crb(c,2)) { goto L_8020852C; } // 80208520
  c->r[25]=0u+0xFFFFFFCFu; // 80208524
  goto L_80208740; // 80208528
L_8020852C:;
  c->r[3]=0u+0x0000000Au; // 8020852C
  c->r[4]=0u+0x00000840u; // 80208530
  c->lr=0x80208538u; f_80206C0C(c); // 80208534
  cmps(c,0,(int32_t)c->r[3],0); // 80208538
  c->r[30]=c->r[3]|c->r[3]; // 8020853C
  if (!crb(c,2)) { goto L_8020855C; } // 80208540
  c->r[4]=c->r[29]|c->r[29]; // 80208544
  c->r[5]=c->r[31]|c->r[31]; // 80208548
  c->r[3]=0u+0x0000000Cu; // 8020854C
  c->lr=0x80208554u; f_80206CF4(c); // 80208550
  c->r[25]=0u+0xFFFFFFCFu; // 80208554
  goto L_80208740; // 80208558
L_8020855C:;
  cmps(c,0,(int32_t)c->r[25],0); // 8020855C
  c->r[24]=c->r[29]+0x00000020u; // 80208560
  if (!crb(c,2)) { goto L_80208570; } // 80208564
  c->r[3]=0u+0x00000000u; // 80208568
  goto L_8020857C; // 8020856C
L_80208570:;
  c->r[3]=c->r[25]|c->r[25]; // 80208570
  c->lr=0x80208578u; f_80252384(c); // 80208574
  c->r[3]=c->r[3]+0x00000001u; // 80208578
L_8020857C:;
  c->r[0]=c->r[3]+0x0000001Fu; // 8020857C
  cmps(c,0,(int32_t)c->r[26],0); // 80208580
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80208584
  c->r[23]=c->r[24]+c->r[0]; // 80208588
  if (!crb(c,2)) { goto L_80208598; } // 8020858C
  c->r[3]=0u+0x00000000u; // 80208590
  goto L_802085A4; // 80208594
L_80208598:;
  c->r[3]=c->r[25]|c->r[25]; // 80208598
  c->lr=0x802085A0u; f_80252384(c); // 8020859C
  c->r[3]=c->r[3]+0x00000001u; // 802085A0
L_802085A4:;
  c->r[0]=c->r[3]+0x0000001Fu; // 802085A4
  cmps(c,0,(int32_t)c->r[25],0); // 802085A8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802085AC
  c->r[22]=c->r[23]+c->r[0]; // 802085B0
  if (crb(c,2)) { goto L_802085C4; } // 802085B4
  c->r[3]=c->r[24]|c->r[24]; // 802085B8
  c->r[4]=c->r[25]|c->r[25]; // 802085BC
  c->lr=0x802085C4u; f_8025C444(c); // 802085C0
L_802085C4:;
  cmps(c,0,(int32_t)c->r[25],0); // 802085C4
  if (crb(c,2)) { goto L_802085D0; } // 802085C8
  goto L_802085D4; // 802085CC
L_802085D0:;
  c->r[24]=0u+0x00000000u; // 802085D0
L_802085D4:;
  cmps(c,0,(int32_t)c->r[25],0); // 802085D4
  W32(c->r[29]+0x00000000u,c->r[24]); // 802085D8
  if (!crb(c,2)) { goto L_802085E8; } // 802085DC
  c->r[3]=0u+0x00000000u; // 802085E0
  goto L_802085F0; // 802085E4
L_802085E8:;
  c->r[3]=c->r[25]|c->r[25]; // 802085E8
  c->lr=0x802085F0u; f_80252384(c); // 802085EC
L_802085F0:;
  cmps(c,0,(int32_t)c->r[26],0); // 802085F0
  W32(c->r[29]+0x00000004u,c->r[3]); // 802085F4
  if (crb(c,2)) { goto L_80208608; } // 802085F8
  c->r[3]=c->r[23]|c->r[23]; // 802085FC
  c->r[4]=c->r[26]|c->r[26]; // 80208600
  c->lr=0x80208608u; f_8025C444(c); // 80208604
L_80208608:;
  cmps(c,0,(int32_t)c->r[26],0); // 80208608
  if (crb(c,2)) { goto L_80208614; } // 8020860C
  goto L_80208618; // 80208610
L_80208614:;
  c->r[23]=0u+0x00000000u; // 80208614
L_80208618:;
  cmps(c,0,(int32_t)c->r[26],0); // 80208618
  W32(c->r[29]+0x00000008u,c->r[23]); // 8020861C
  if (!crb(c,2)) { goto L_8020862C; } // 80208620
  c->r[3]=0u+0x00000000u; // 80208624
  goto L_80208634; // 80208628
L_8020862C:;
  c->r[3]=c->r[26]|c->r[26]; // 8020862C
  c->lr=0x80208634u; f_80252384(c); // 80208630
L_80208634:;
  cmps(c,0,(int32_t)c->r[27],0); // 80208634
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 80208638
  if (crb(c,2)) { goto L_80208654; } // 8020863C
  c->r[3]=c->r[22]|c->r[22]; // 80208640
  c->r[4]=c->r[27]|c->r[27]; // 80208644
  c->r[5]=0u+0x00000020u; // 80208648
  c->lr=0x80208650u; f_801FC3D0(c); // 8020864C
  goto L_80208664; // 80208650
L_80208654:;
  c->r[3]=c->r[22]|c->r[22]; // 80208654
  c->r[4]=0u+0x00000000u; // 80208658
  c->r[5]=0u+0x00000020u; // 8020865C
  c->lr=0x80208664u; f_801FC778(c); // 80208660
L_80208664:;
  c->r[0]=R32(c->r[22]+0x00000004u); // 80208664
  cmps(c,0,(int32_t)c->r[0],0); // 80208668
  if (!crb(c,2)) { goto L_80208678; } // 8020866C
  c->r[0]=0u+0x00000002u; // 80208670
  W32(c->r[22]+0x00000004u,c->r[0]); // 80208674
L_80208678:;
  c->r[0]=R32(c->r[22]+0x00000004u); // 80208678
  cmps(c,0,(int32_t)c->r[0],23); // 8020867C
  if (!crb(c,2)) { goto L_802086A4; } // 80208680
  c->r[0]=0u+0x00000000u; // 80208684
  c->r[4]=c->r[30]|c->r[30]; // 80208688
  W32(c->r[28]+0x00000000u,c->r[0]); // 8020868C
  c->r[25]=0u+0xFFFFFFBCu; // 80208690
  c->r[3]=0u+0x0000000Au; // 80208694
  c->r[5]=0u+0x00000840u; // 80208698
  c->lr=0x802086A0u; f_80206CF4(c); // 8020869C
  goto L_80208730; // 802086A0
L_802086A4:;
  W32(c->r[29]+0x00000010u,c->r[22]); // 802086A4
  c->r[3]=0u+0x00000020u; // 802086A8
  c->r[0]=0u+0x00000834u; // 802086AC
  c->r[7]=c->r[29]|c->r[29]; // 802086B0
  W32(c->r[29]+0x00000014u,c->r[3]); // 802086B4
  c->r[4]=0u+0x00000018u; // 802086B8
  c->r[5]=0u+0x00000003u; // 802086BC
  c->r[6]=0u+0x00000001u; // 802086C0
  W32(c->r[29]+0x00000018u,c->r[30]); // 802086C4
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 802086C8
  c->r[3]=R32(c->r[1]+0x00000008u); // 802086CC
  c->lr=0x802086D4u; f_80186F6C(c); // 802086D0
  cmps(c,0,(int32_t)c->r[3],0); // 802086D4
  c->r[25]=c->r[3]|c->r[3]; // 802086D8
  if (crb(c,0)) { goto L_80208718; } // 802086DC
  W32(c->r[28]+0x00000000u,c->r[30]); // 802086E0
  c->r[3]=c->r[30]+0x00000460u; // 802086E4
  goto L_8020870C; // 802086E8
L_802086EC:;
  W32(c->r[30]+0x00000018u,c->r[3]); // 802086EC
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 802086F0
  cmps(c,0,(int32_t)c->r[0],0); // 802086F4
  if (crb(c,2)) { goto L_80208704; } // 802086F8
  c->r[0]=c->r[30]+0x00000020u; // 802086FC
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80208700
L_80208704:;
  c->r[30]=R32(c->r[30]+0x0000001Cu); // 80208704
  c->r[3]=c->r[3]+0x0000001Cu; // 80208708
L_8020870C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8020870C
  if (!crb(c,2)) { IRQCHK(c); goto L_802086EC; } // 80208710
  goto L_80208730; // 80208714
L_80208718:;
  c->r[0]=0u+0x00000000u; // 80208718
  c->r[4]=c->r[30]|c->r[30]; // 8020871C
  W32(c->r[28]+0x00000000u,c->r[0]); // 80208720
  c->r[3]=0u+0x0000000Au; // 80208724
  c->r[5]=0u+0x00000840u; // 80208728
  c->lr=0x80208730u; f_80206CF4(c); // 8020872C
L_80208730:;
  c->r[4]=c->r[29]|c->r[29]; // 80208730
  c->r[5]=c->r[31]|c->r[31]; // 80208734
  c->r[3]=0u+0x0000000Cu; // 80208738
  c->lr=0x80208740u; f_80206CF4(c); // 8020873C
L_80208740:;
  c->r[4]=c->r[25]|c->r[25]; // 80208740
  c->r[3]=0u+0x00000000u; // 80208744
  c->lr=0x8020874Cu; f_80206E10(c); // 80208748
L_8020874C:;
  c->r[11]=c->r[1]+0x00000040u; // 8020874C
  c->lr=0x80208754u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80208750
  c->r[0]=R32(c->r[1]+0x00000044u); // 80208754
  c->lr=c->r[0]; // 80208758
  c->r[1]=c->r[1]+0x00000040u; // 8020875C
  return; // 80208760
}

// fn_80208764
void f_80208764(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80208764
  c->r[0]=c->lr; // 80208768
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020876C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80208770
  W32(c->r[1]+0x00000008u,c->r[30]); // 80208774
  c->r[30]=c->r[3]|c->r[3]; // 80208778
  c->lr=0x80208780u; f_80154410(c); // 8020877C
  c->r[31]=c->r[3]|c->r[3]; // 80208780
  c->lr=0x80208788u; f_80206BBC(c); // 80208784
  cmps(c,0,(int32_t)c->r[3],1); // 80208788
  if (!crb(c,2)) { goto L_802087A8; } // 8020878C
  cmps(c,0,(int32_t)c->r[30],0); // 80208790
  if (crb(c,2)) { goto L_802087A8; } // 80208794
  c->r[4]=c->r[30]|c->r[30]; // 80208798
  c->r[3]=0u+0x0000000Au; // 8020879C
  c->r[5]=0u+0x00000840u; // 802087A0
  c->lr=0x802087A8u; f_80206CF4(c); // 802087A4
L_802087A8:;
  c->r[3]=c->r[31]|c->r[31]; // 802087A8
  c->lr=0x802087B0u; f_80154438(c); // 802087AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802087B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802087B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 802087B8
  c->lr=c->r[0]; // 802087BC
  c->r[1]=c->r[1]+0x00000010u; // 802087C0
  return; // 802087C4
}

// SOSetSockOpt
void f_802087C8(Ctx* __restrict c) {
  trace_call(0x802087C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802087C8
  c->r[0]=c->lr; // 802087CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 802087D0
  c->r[11]=c->r[1]+0x00000030u; // 802087D4
  c->lr=0x802087DCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802087D8
  c->r[26]=c->r[3]|c->r[3]; // 802087DC
  c->r[27]=c->r[4]|c->r[4]; // 802087E0
  c->r[28]=c->r[5]|c->r[5]; // 802087E4
  c->r[29]=c->r[6]|c->r[6]; // 802087E8
  c->r[31]=c->r[7]|c->r[7]; // 802087EC
  c->r[4]=c->r[1]+0x00000008u; // 802087F0
  c->r[3]=0u+0x00000000u; // 802087F4
  c->lr=0x802087FCu; f_80206D28(c); // 802087F8
  cmps(c,0,(int32_t)c->r[3],0); // 802087FC
  if (!crb(c,2)) { goto L_802088B4; } // 80208800
  cmps(c,0,(int32_t)c->r[31],0); // 80208804
  if (crb(c,0)) { goto L_80208814; } // 80208808
  cmps(c,0,(int32_t)c->r[31],20); // 8020880C
  if (!crb(c,1)) { goto L_8020881C; } // 80208810
L_80208814:;
  c->r[31]=0u+0xFFFFFFE4u; // 80208814
  goto L_802088A8; // 80208818
L_8020881C:;
  c->r[3]=0u+0x0000000Cu; // 8020881C
  c->r[4]=0u+0x00000040u; // 80208820
  c->lr=0x80208828u; f_80206C0C(c); // 80208824
  cmps(c,0,(int32_t)c->r[3],0); // 80208828
  c->r[30]=c->r[3]|c->r[3]; // 8020882C
  if (!crb(c,2)) { goto L_8020883C; } // 80208830
  c->r[31]=0u+0xFFFFFFCFu; // 80208834
  goto L_802088A8; // 80208838
L_8020883C:;
  W32(c->r[3]+0x00000000u,c->r[26]); // 8020883C
  cmps(c,0,(int32_t)c->r[29],0); // 80208840
  W32(c->r[3]+0x00000004u,c->r[27]); // 80208844
  W32(c->r[3]+0x00000008u,c->r[28]); // 80208848
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 8020884C
  if (crb(c,2)) { goto L_80208868; } // 80208850
  c->r[4]=c->r[29]|c->r[29]; // 80208854
  c->r[5]=c->r[31]|c->r[31]; // 80208858
  c->r[3]=c->r[3]+0x00000010u; // 8020885C
  c->lr=0x80208864u; f_801FC3D0(c); // 80208860
  goto L_80208878; // 80208864
L_80208868:;
  c->r[5]=c->r[31]|c->r[31]; // 80208868
  c->r[4]=0u+0x00000000u; // 8020886C
  c->r[3]=c->r[3]+0x00000010u; // 80208870
  c->lr=0x80208878u; f_801FC778(c); // 80208874
L_80208878:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80208878
  c->r[5]=c->r[30]|c->r[30]; // 8020887C
  c->r[4]=0u+0x00000009u; // 80208880
  c->r[6]=0u+0x00000024u; // 80208884
  c->r[7]=0u+0x00000000u; // 80208888
  c->r[8]=0u+0x00000000u; // 8020888C
  c->lr=0x80208894u; f_80186C1C(c); // 80208890
  c->r[31]=c->r[3]|c->r[3]; // 80208894
  c->r[4]=c->r[30]|c->r[30]; // 80208898
  c->r[3]=0u+0x0000000Cu; // 8020889C
  c->r[5]=0u+0x00000040u; // 802088A0
  c->lr=0x802088A8u; f_80206CF4(c); // 802088A4
L_802088A8:;
  c->r[4]=c->r[31]|c->r[31]; // 802088A8
  c->r[3]=0u+0x00000000u; // 802088AC
  c->lr=0x802088B4u; f_80206E10(c); // 802088B0
L_802088B4:;
  c->r[11]=c->r[1]+0x00000030u; // 802088B4
  c->lr=0x802088BCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802088B8
  c->r[0]=R32(c->r[1]+0x00000034u); // 802088BC
  c->lr=c->r[0]; // 802088C0
  c->r[1]=c->r[1]+0x00000030u; // 802088C4
  return; // 802088C8
}

// SOGetInterfaceOpt
void f_802088CC(Ctx* __restrict c) {
  trace_call(0x802088CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802088CC
  c->r[0]=c->lr; // 802088D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 802088D4
  c->r[11]=c->r[1]+0x00000030u; // 802088D8
  c->lr=0x802088E0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802088DC
  c->r[26]=c->r[4]|c->r[4]; // 802088E0
  c->r[25]=c->r[5]|c->r[5]; // 802088E4
  c->r[30]=c->r[6]|c->r[6]; // 802088E8
  c->r[31]=c->r[7]|c->r[7]; // 802088EC
  c->r[4]=c->r[1]+0x0000000Cu; // 802088F0
  c->r[5]=c->r[1]+0x00000008u; // 802088F4
  c->r[3]=0u+0x00000000u; // 802088F8
  c->lr=0x80208900u; f_80206E6C(c); // 802088FC
  cmps(c,0,(int32_t)c->r[3],0); // 80208900
  if (!crb(c,2)) { goto L_80208A90; } // 80208904
  c->r[0]=c->r[25]+0xFFFFEFFFu; // 80208908
  cmpu(c,0,c->r[0],0x00000001u); // 8020890C
  if (crb(c,1)) { goto L_8020891C; } // 80208910
  c->r[28]=0u+0xFFFFFFE4u; // 80208914
  goto L_80208A80; // 80208918
L_8020891C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020891C
  c->r[3]=0u+0x00000000u; // 80208920
  if (crb(c,2)) { goto L_80208934; } // 80208924
  c->r[0]=R32(c->r[31]+0x00000000u); // 80208928
  cmps(c,0,(int32_t)c->r[0],0); // 8020892C
  if (!crb(c,0)) { goto L_80208938; } // 80208930
L_80208934:;
  c->r[3]=0u+0x00000001u; // 80208934
L_80208938:;
  cmps(c,0,(int32_t)c->r[3],0); // 80208938
  if (crb(c,2)) { goto L_80208948; } // 8020893C
  c->r[3]=0u+0x00000000u; // 80208940
  goto L_8020894C; // 80208944
L_80208948:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 80208948
L_8020894C:;
  c->r[0]=c->r[3]+0x0000007Fu; // 8020894C
  c->r[3]=0u+0x0000000Cu; // 80208950
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80208954
  c->r[4]=c->r[29]|c->r[29]; // 80208958
  c->lr=0x80208960u; f_80206C0C(c); // 8020895C
  cmps(c,0,(int32_t)c->r[3],0); // 80208960
  c->r[27]=c->r[3]|c->r[3]; // 80208964
  if (!crb(c,2)) { goto L_80208974; } // 80208968
  c->r[28]=0u+0xFFFFFFCFu; // 8020896C
  goto L_80208A80; // 80208970
L_80208974:;
  W32(c->r[3]+0x00000020u,c->r[26]); // 80208974
  c->r[5]=c->r[3]+0x00000020u; // 80208978
  cmps(c,0,(int32_t)c->r[31],0); // 8020897C
  c->r[4]=0u+0x00000000u; // 80208980
  c->r[26]=c->r[5]+0x00000020u; // 80208984
  W32(c->r[3]+0x00000024u,c->r[25]); // 80208988
  c->r[25]=c->r[26]+0x00000020u; // 8020898C
  if (crb(c,2)) { goto L_802089A0; } // 80208990
  c->r[0]=R32(c->r[31]+0x00000000u); // 80208994
  cmps(c,0,(int32_t)c->r[0],0); // 80208998
  if (!crb(c,0)) { goto L_802089A4; } // 8020899C
L_802089A0:;
  c->r[4]=0u+0x00000001u; // 802089A0
L_802089A4:;
  cmps(c,0,(int32_t)c->r[4],0); // 802089A4
  if (crb(c,2)) { goto L_802089B4; } // 802089A8
  c->r[0]=0u+0x00000000u; // 802089AC
  goto L_802089B8; // 802089B0
L_802089B4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802089B4
L_802089B8:;
  W32(c->r[26]+0x00000000u,c->r[0]); // 802089B8
  c->r[0]=0u+0x00000008u; // 802089BC
  cmps(c,0,(int32_t)c->r[31],0); // 802089C0
  c->r[4]=0u+0x00000000u; // 802089C4
  W32(c->r[3]+0x00000000u,c->r[5]); // 802089C8
  W32(c->r[3]+0x00000004u,c->r[0]); // 802089CC
  W32(c->r[3]+0x00000008u,c->r[25]); // 802089D0
  if (crb(c,2)) { goto L_802089E4; } // 802089D4
  c->r[0]=R32(c->r[31]+0x00000000u); // 802089D8
  cmps(c,0,(int32_t)c->r[0],0); // 802089DC
  if (!crb(c,0)) { goto L_802089E8; } // 802089E0
L_802089E4:;
  c->r[4]=0u+0x00000001u; // 802089E4
L_802089E8:;
  cmps(c,0,(int32_t)c->r[4],0); // 802089E8
  if (crb(c,2)) { goto L_802089F8; } // 802089EC
  c->r[0]=0u+0x00000000u; // 802089F0
  goto L_802089FC; // 802089F4
L_802089F8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802089F8
L_802089FC:;
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802089FC
  c->r[0]=0u+0x00000004u; // 80208A00
  c->r[7]=c->r[27]|c->r[27]; // 80208A04
  c->r[4]=0u+0x0000001Cu; // 80208A08
  W32(c->r[3]+0x00000010u,c->r[26]); // 80208A0C
  c->r[5]=0u+0x00000001u; // 80208A10
  c->r[6]=0u+0x00000002u; // 80208A14
  W32(c->r[3]+0x00000014u,c->r[0]); // 80208A18
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80208A1C
  c->lr=0x80208A24u; f_80186F6C(c); // 80208A20
  cmps(c,0,(int32_t)c->r[3],0); // 80208A24
  c->r[28]=c->r[3]|c->r[3]; // 80208A28
  if (crb(c,0)) { goto L_80208A70; } // 80208A2C
  cmps(c,0,(int32_t)c->r[31],0); // 80208A30
  if (crb(c,2)) { goto L_80208A70; } // 80208A34
  c->r[5]=R32(c->r[26]+0x00000000u); // 80208A38
  c->r[0]=R32(c->r[31]+0x00000000u); // 80208A3C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 80208A40
  if (crb(c,0)) { goto L_80208A68; } // 80208A44
  cmps(c,0,(int32_t)c->r[30],0); // 80208A48
  if (crb(c,2)) { goto L_80208A5C; } // 80208A4C
  c->r[3]=c->r[30]|c->r[30]; // 80208A50
  c->r[4]=c->r[25]|c->r[25]; // 80208A54
  c->lr=0x80208A5Cu; f_801FC3D0(c); // 80208A58
L_80208A5C:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 80208A5C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80208A60
  goto L_80208A70; // 80208A64
L_80208A68:;
  W32(c->r[31]+0x00000000u,c->r[5]); // 80208A68
  c->r[28]=0u+0xFFFFFFE4u; // 80208A6C
L_80208A70:;
  c->r[4]=c->r[27]|c->r[27]; // 80208A70
  c->r[5]=c->r[29]|c->r[29]; // 80208A74
  c->r[3]=0u+0x0000000Cu; // 80208A78
  c->lr=0x80208A80u; f_80206CF4(c); // 80208A7C
L_80208A80:;
  c->r[5]=R32(c->r[1]+0x00000008u); // 80208A80
  c->r[4]=c->r[28]|c->r[28]; // 80208A84
  c->r[3]=0u+0x00000000u; // 80208A88
  c->lr=0x80208A90u; f_80207144(c); // 80208A8C
L_80208A90:;
  c->r[11]=c->r[1]+0x00000030u; // 80208A90
  c->lr=0x80208A98u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80208A94
  c->r[0]=R32(c->r[1]+0x00000034u); // 80208A98
  c->lr=c->r[0]; // 80208A9C
  c->r[1]=c->r[1]+0x00000030u; // 80208AA0
  return; // 80208AA4
}

// fn_80208AA8
void f_80208AA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80208AA8
  c->r[0]=c->lr; // 80208AAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80208AB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80208AB4
  c->r[4]=R32(c->r[13]+0xFFFFB168u); // 80208AB8
  goto L_80208AD8; // 80208ABC
L_80208AC0:;
  c->r[31]=R32(c->r[4]+0x00000018u); // 80208AC0
  c->r[3]=0u+0x0000000Bu; // 80208AC4
  c->r[5]=0u+0x00000000u; // 80208AC8
  c->lr=0x80208AD0u; f_802110A8(c); // 80208ACC
  W32(c->r[13]+0xFFFFB168u,c->r[31]); // 80208AD0
  c->r[4]=c->r[31]|c->r[31]; // 80208AD4
L_80208AD8:;
  cmps(c,0,(int32_t)c->r[4],0); // 80208AD8
  if (!crb(c,2)) { IRQCHK(c); goto L_80208AC0; } // 80208ADC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80208AE0
  c->r[3]=0u+0x00000000u; // 80208AE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80208AE8
  c->lr=c->r[0]; // 80208AEC
  c->r[1]=c->r[1]+0x00000010u; // 80208AF0
  return; // 80208AF4
}

// fn_80208AF8
void f_80208AF8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80208AF8
  c->r[4]=R32(c->r[3]+0x00000004u); // 80208AFC
  c->r[3]=rotl(c->r[0],0)&0x000007FFu; // 80208B00
  return; // 80208B04
}

// fn_80208B08
void f_80208B08(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 80208B08
  return; // 80208B0C
}

// fn_80208B10
void f_80208B10(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[5],0)&0xFFFFF800u; cr0(c,c->r[0]); // 80208B10
  if (!crb(c,2)) { goto L_80208B28; } // 80208B14
  c->r[0]=R32(c->r[3]+0x00000000u); // 80208B18
  c->r[0]=rotl(c->r[0],0)&0xFFFFF800u; // 80208B1C
  c->r[0]=c->r[0]|c->r[5]; // 80208B20
  W32(c->r[3]+0x00000000u,c->r[0]); // 80208B24
L_80208B28:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 80208B28
  return; // 80208B2C
}

// fn_80208B30
void f_80208B30(Ctx* __restrict c) {
  W32(c->r[3]+0x00000008u,c->r[4]); // 80208B30
  return; // 80208B34
}

// fn_80208B38
void f_80208B38(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 80208B38
  c->r[0]=rotl(c->r[3],21)&0x00000003u; // 80208B3C
  c->r[3]=rotl(c->r[3],21)&0x001FFFFFu; // 80208B40
  cmpu(c,0,c->r[0],0x00000003u); // 80208B44
  if (!crb(c,2)) { goto L_80208B54; } // 80208B48
  c->r[3]=rotl(c->r[3],30)&0x00000001u; // 80208B4C
  return; // 80208B50
L_80208B54:;
  c->r[3]=0u+0x00000000u; // 80208B54
  return; // 80208B58
}

// fn_80208B5C
void f_80208B5C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80208B5C
  c->r[3]=rotl(c->r[0],21)&0x00000003u; // 80208B60
  return; // 80208B64
}

// fn_80208B68
void f_80208B68(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000000u); // 80208B68
  c->r[0]=rotl(c->r[4],21)&0x00000003u; // 80208B6C
  c->r[4]=rotl(c->r[4],21)&0x001FFFFFu; // 80208B70
  cmpu(c,0,c->r[0],0x00000003u); // 80208B74
  if (!crb(c,2)) return; // 80208B78
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFFBu; // 80208B7C
  c->r[5]=c->r[0]|0x00000004u; // 80208B80
  c->r[0]=rotl(c->r[5],0)&0xFFE00000u; cr0(c,c->r[0]); // 80208B84
  if (!crb(c,2)) return; // 80208B88
  c->r[4]=R32(c->r[3]+0x00000000u); // 80208B8C
  c->r[0]=rotl(c->r[5],11)&0xFFFFF800u; // 80208B90
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 80208B94
  W32(c->r[3]+0x00000000u,c->r[0]); // 80208B98
  return; // 80208B9C
}

// fn_80208BA0
void f_80208BA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80208BA0
  c->r[0]=c->lr; // 80208BA4
  cmps(c,0,(int32_t)c->r[6],0); // 80208BA8
  c->r[7]=R32(c->r[3]+0x00000024u); // 80208BAC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80208BB0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80208BB4
  c->r[31]=c->r[5]|c->r[5]; // 80208BB8
  W32(c->r[1]+0x00000028u,c->r[30]); // 80208BBC
  c->r[30]=c->r[6]|c->r[6]; // 80208BC0
  if (crb(c,1)) { goto L_80208BD0; } // 80208BC4
  c->r[3]=0u+0x00000000u; // 80208BC8
  goto L_80208C34; // 80208BCC
L_80208BD0:;
  c->r[5]=rotl(c->r[6],24)&0x00FF0000u; // 80208BD0
  c->r[4]=rotl(c->r[6],8)&0xFF000000u; // 80208BD4
  c->r[3]=rotl(c->r[7],24)&0x00FF0000u; // 80208BD8
  c->r[0]=rotl(c->r[7],8)&0xFF000000u; // 80208BDC
  c->r[5]=(rotl(c->r[6],24)&0x000000FFu)|(c->r[5]&~0x000000FFu); // 80208BE0
  c->r[4]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 80208BE4
  c->r[4]=c->r[5]|c->r[4]; // 80208BE8
  c->r[3]=(rotl(c->r[7],24)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80208BEC
  c->r[0]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80208BF0
  c->r[5]=0u+0x00000008u; // 80208BF4
  c->r[0]=c->r[3]|c->r[0]; // 80208BF8
  c->r[3]=rotl(c->r[4],16)&0xFFFFFFFFu; // 80208BFC
  c->r[0]=rotl(c->r[0],16)&0xFFFFFFFFu; // 80208C00
  W32(c->r[1]+0x00000008u,c->r[3]); // 80208C04
  c->r[3]=c->r[1]+0x00000010u; // 80208C08
  c->r[4]=c->r[1]+0x00000008u; // 80208C0C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80208C10
  c->lr=0x80208C18u; f_80226D00(c); // 80208C14
  c->r[0]=R8(c->r[1]+0x00000010u); // 80208C18
  c->r[3]=c->r[30]^c->r[30]; // 80208C1C
  c->r[0]=sraw(c,c->r[0],1); // 80208C20
  c->r[0]=c->r[31]^c->r[0]; // 80208C24
  c->r[0]=c->r[3]|c->r[0]; // 80208C28
  c->r[0]=cntlz(c->r[0]); // 80208C2C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80208C30
L_80208C34:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80208C34
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80208C38
  c->r[30]=R32(c->r[1]+0x00000028u); // 80208C3C
  c->lr=c->r[0]; // 80208C40
  c->r[1]=c->r[1]+0x00000030u; // 80208C44
  return; // 80208C48
}

// fn_80208C4C
void f_80208C4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80208C4C
  c->r[0]=c->lr; // 80208C50
  W32(c->r[1]+0x00000064u,c->r[0]); // 80208C54
  c->r[11]=c->r[1]+0x00000060u; // 80208C58
  c->lr=0x80208C60u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80208C5C
  c->r[7]=R32(c->r[3]+0x00000000u); // 80208C60
  c->r[27]=0u+0x00000000u; // 80208C64
  c->r[0]=R32(c->r[3]+0x00000004u); // 80208C68
  c->r[6]=0u+0x802F0000u; // 80208C6C
  c->r[6]=c->r[6]+0xFFFFA170u; // 80208C70
  c->r[12]=rotl(c->r[7],0)&0x000007FFu; // 80208C74
  c->r[10]=rotl(c->r[0],27)&0xFFFFFFFFu; // 80208C78
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 80208C7C
  c->r[10]=(rotl(c->r[7],27)&0xF8000000u)|(c->r[10]&~0xF8000000u); // 80208C80
  c->r[11]=R8(c->r[6]+c->r[0]); // 80208C84
  c->r[8]=rotl(c->r[10],27)&0xFFFFFFFFu; // 80208C88
  W8(c->r[1]+0x00000031u,c->r[27]); // 80208C8C
  c->r[8]=(rotl(c->r[7],22)&0xF8000000u)|(c->r[8]&~0xF8000000u); // 80208C90
  c->r[10]=rotl(c->r[10],0)&0x0000001Fu; // 80208C94
  c->r[0]=rotl(c->r[8],27)&0xFFFFFFFFu; // 80208C98
  c->r[9]=R8(c->r[6]+c->r[10]); // 80208C9C
  c->r[0]=(rotl(c->r[12],17)&0xF8000000u)|(c->r[0]&~0xF8000000u); // 80208CA0
  c->r[8]=rotl(c->r[8],0)&0x0000001Fu; // 80208CA4
  c->r[10]=rotl(c->r[0],27)&0xFFFFFFFFu; // 80208CA8
  c->r[7]=R8(c->r[6]+c->r[8]); // 80208CAC
  c->r[10]=(rotl(c->r[12],12)&0xF8000000u)|(c->r[10]&~0xF8000000u); // 80208CB0
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 80208CB4
  c->r[8]=rotl(c->r[10],27)&0xFFFFFFFFu; // 80208CB8
  W8(c->r[1]+0x00000030u,c->r[11]); // 80208CBC
  c->r[11]=R8(c->r[6]+c->r[0]); // 80208CC0
  c->r[8]=(rotl(c->r[12],7)&0xF8000000u)|(c->r[8]&~0xF8000000u); // 80208CC4
  c->r[0]=rotl(c->r[8],27)&0xFFFFFFFFu; // 80208CC8
  c->r[10]=rotl(c->r[10],0)&0x0000001Fu; // 80208CCC
  c->r[0]=(rotl(c->r[12],2)&0xF8000000u)|(c->r[0]&~0xF8000000u); // 80208CD0
  W8(c->r[1]+0x0000002Fu,c->r[9]); // 80208CD4
  c->r[9]=R8(c->r[6]+c->r[10]); // 80208CD8
  c->r[10]=rotl(c->r[0],27)&0xFFFFFFFFu; // 80208CDC
  c->r[12]=rotl(c->r[12],2)&0x00000003u; // 80208CE0
  c->r[8]=rotl(c->r[8],0)&0x0000001Fu; // 80208CE4
  W8(c->r[1]+0x0000002Eu,c->r[7]); // 80208CE8
  c->r[10]=(rotl(c->r[12],27)&0xF8000000u)|(c->r[10]&~0xF8000000u); // 80208CEC
  c->r[7]=R8(c->r[6]+c->r[8]); // 80208CF0
  c->r[8]=rotl(c->r[10],27)&0xFFFFFFFFu; // 80208CF4
  c->r[8]=(rotl(c->r[12],22)&0xF8000000u)|(c->r[8]&~0xF8000000u); // 80208CF8
  c->r[12]=c->r[5]|c->r[5]; // 80208CFC
  W8(c->r[1]+0x0000002Bu,c->r[7]); // 80208D00
  c->r[5]=0u+0x802F0000u; // 80208D04
  c->r[7]=R8(c->r[6]+c->r[8]); // 80208D08
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 80208D0C
  W8(c->r[1]+0x0000002Du,c->r[11]); // 80208D10
  c->r[10]=rotl(c->r[10],0)&0x0000001Fu; // 80208D14
  c->r[11]=R8(c->r[6]+c->r[0]); // 80208D18
  c->r[5]=c->r[5]+0xFFFFA194u; // 80208D1C
  W8(c->r[1]+0x0000002Cu,c->r[9]); // 80208D20
  c->r[9]=R8(c->r[6]+c->r[10]); // 80208D24
  W8(c->r[1]+0x00000028u,c->r[7]); // 80208D28
  c->r[7]=R32(c->r[3]+0x00000008u); // 80208D2C
  W8(c->r[1]+0x0000002Au,c->r[11]); // 80208D30
  c->r[11]=rotl(c->r[7],0)&0x0000001Fu; // 80208D34
  c->r[0]=rotl(c->r[7],27)&0x0000001Fu; // 80208D38
  c->r[29]=R8(c->r[6]+c->r[0]); // 80208D3C
  c->r[10]=rotl(c->r[7],22)&0x0000001Fu; // 80208D40
  W8(c->r[1]+0x00000029u,c->r[9]); // 80208D44
  c->r[9]=rotl(c->r[7],17)&0x0000001Fu; // 80208D48
  c->r[30]=R8(c->r[6]+c->r[9]); // 80208D4C
  c->r[3]=rotl(c->r[7],12)&0x0000001Fu; // 80208D50
  c->r[31]=R8(c->r[6]+c->r[3]); // 80208D54
  c->r[8]=rotl(c->r[7],7)&0x0000001Fu; // 80208D58
  c->r[28]=R8(c->r[6]+c->r[11]); // 80208D5C
  c->r[7]=rotl(c->r[7],2)&0x00000003u; // 80208D60
  c->r[11]=R8(c->r[6]+c->r[7]); // 80208D64
  c->r[3]=c->r[12]|c->r[12]; // 80208D68
  c->r[12]=R8(c->r[6]+c->r[8]); // 80208D6C
  c->r[0]=c->r[1]+0x00000010u; // 80208D70
  c->r[10]=R8(c->r[6]+c->r[10]); // 80208D74
  c->r[6]=c->r[1]+0x00000028u; // 80208D78
  W8(c->r[1]+0x00000016u,c->r[28]); // 80208D7C
  c->r[7]=rotl(c->r[4],8)&0x000000FFu; // 80208D80
  c->r[8]=rotl(c->r[4],16)&0x000000FFu; // 80208D84
  c->r[9]=rotl(c->r[4],24)&0x000000FFu; // 80208D88
  W8(c->r[1]+0x00000014u,c->r[10]); // 80208D8C
  c->r[10]=rotl(c->r[4],0)&0x000000FFu; // 80208D90
  c->r[4]=0u+0x00000015u; // 80208D94
  W8(c->r[1]+0x00000015u,c->r[29]); // 80208D98
  W8(c->r[1]+0x00000013u,c->r[30]); // 80208D9C
  W8(c->r[1]+0x00000012u,c->r[31]); // 80208DA0
  W8(c->r[1]+0x00000011u,c->r[12]); // 80208DA4
  W8(c->r[1]+0x00000010u,c->r[11]); // 80208DA8
  W8(c->r[1]+0x00000017u,c->r[27]); // 80208DAC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80208DB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80208DB4
  c->lr=0x80208DBCu; f_8025AAE8(c); // 80208DB8
  c->r[11]=c->r[1]+0x00000060u; // 80208DBC
  c->lr=0x80208DC4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80208DC0
  c->r[0]=R32(c->r[1]+0x00000064u); // 80208DC4
  c->lr=c->r[0]; // 80208DC8
  c->r[1]=c->r[1]+0x00000060u; // 80208DCC
  return; // 80208DD0
}

// fn_80208DD4
void f_80208DD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFBA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80208DD4
  c->r[0]=c->lr; // 80208DD8
  c->r[5]=0u+0x00000040u; // 80208DDC
  W32(c->r[1]+0x00000464u,c->r[0]); // 80208DE0
  W32(c->r[1]+0x0000045Cu,c->r[31]); // 80208DE4
  W32(c->r[1]+0x00000458u,c->r[30]); // 80208DE8
  c->r[30]=c->r[3]|c->r[3]; // 80208DEC
  W32(c->r[1]+0x00000454u,c->r[29]); // 80208DF0
  c->r[29]=c->r[4]|c->r[4]; // 80208DF4
  c->r[4]=0u+0x00000000u; // 80208DF8
  c->lr=0x80208E00u; f_8000443C(c); // 80208DFC
  c->r[3]=0u+0x00000040u; // 80208E00
  c->r[0]=0u+0x00000000u; // 80208E04
  W32(c->r[30]+0x00000000u,c->r[3]); // 80208E08
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80208E0C
  W32(c->r[30]+0x00000024u,c->r[29]); // 80208E10
  c->lr=0x80208E18u; f_8015848C(c); // 80208E14
  c->r[31]=c->r[4]|c->r[4]; // 80208E18
  c->r[29]=0u+0x00000000u; // 80208E1C
  c->lr=0x80208E24u; f_8020A774(c); // 80208E20
  c->r[0]=rotl(c->r[3],0)&0xFFFFF800u; cr0(c,c->r[0]); // 80208E24
  if (!crb(c,2)) { goto L_80208E3C; } // 80208E28
  c->r[0]=R32(c->r[30]+0x00000004u); // 80208E2C
  c->r[0]=rotl(c->r[0],0)&0xFFFFF800u; // 80208E30
  c->r[0]=c->r[0]|c->r[3]; // 80208E34
  W32(c->r[30]+0x00000004u,c->r[0]); // 80208E38
L_80208E3C:;
  c->r[5]=0u+0x6C080000u; // 80208E3C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80208E40
  c->r[8]=c->r[5]+0xFFFF8965u; // 80208E44
  c->r[3]=0u+0x5D590000u; // 80208E48
  c->r[5]=(uint32_t)(((uint64_t)c->r[31]*(uint64_t)c->r[8])>>32); // 80208E4C
  c->r[0]=rotl(c->r[0],21)&0x001FFFFCu; // 80208E50
  c->r[7]=c->r[3]+0xFFFF8B65u; // 80208E54
  W32(c->r[30]+0x00000008u,c->r[4]); // 80208E58
  c->r[9]=c->r[0]|0x00000001u; // 80208E5C
  c->r[3]=0u+0x00270000u; // 80208E60
  c->r[6]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[8]); // 80208E64
  c->r[0]=rotl(c->r[9],0)&0xFFE00000u; cr0(c,c->r[0]); // 80208E68
  c->r[4]=c->r[3]+0xFFFF9EC3u; // 80208E6C
  c->r[3]=0u+0x00000000u; // 80208E70
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[8]); // 80208E74
  c->r[6]=c->r[5]+c->r[6]; // 80208E78
  c->r[5]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[7]); // 80208E7C
  c->r[0]=addc(c,c->r[0],c->r[4],0); // 80208E80
  c->r[0]=c->r[6]+c->r[5]; // 80208E84
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 80208E88
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80208E8C
  if (!crb(c,2)) { goto L_80208EA4; } // 80208E90
  c->r[3]=R32(c->r[30]+0x00000004u); // 80208E94
  c->r[0]=rotl(c->r[9],11)&0xFFFFF800u; // 80208E98
  c->r[0]=(rotl(c->r[3],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 80208E9C
  W32(c->r[30]+0x00000004u,c->r[0]); // 80208EA0
L_80208EA4:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 80208EA4
  c->r[4]=rotl(c->r[0],21)&0x001FFFFCu; // 80208EA8
  c->r[0]=rotl(c->r[4],0)&0xFFE00000u; cr0(c,c->r[0]); // 80208EAC
  if (!crb(c,2)) { goto L_80208EC4; } // 80208EB0
  c->r[3]=R32(c->r[30]+0x00000010u); // 80208EB4
  c->r[0]=rotl(c->r[4],11)&0xFFFFF800u; // 80208EB8
  c->r[0]=(rotl(c->r[3],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 80208EBC
  W32(c->r[30]+0x00000010u,c->r[0]); // 80208EC0
L_80208EC4:;
  c->r[4]=0u+0xEDB90000u; // 80208EC4
  c->r[3]=c->r[1]+0x00000048u; // 80208EC8
  c->r[4]=c->r[4]+0xFFFF8320u; // 80208ECC
  c->lr=0x80208ED4u; f_801FAB4C(c); // 80208ED0
  c->r[0]=0u+0x00000002u; // 80208ED4
  c->r[5]=c->r[30]|c->r[30]; // 80208ED8
  c->r[6]=c->r[1]+0x00000008u; // 80208EDC
  c->ctr=c->r[0]; // 80208EE0
L_80208EE4:;
  c->r[4]=R32(c->r[5]+0x00000000u); // 80208EE4
  c->r[3]=rotl(c->r[4],24)&0x00FF0000u; // 80208EE8
  c->r[0]=rotl(c->r[4],8)&0xFF000000u; // 80208EEC
  c->r[3]=(rotl(c->r[4],24)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80208EF0
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80208EF4
  c->r[0]=c->r[3]|c->r[0]; // 80208EF8
  c->r[0]=rotl(c->r[0],16)&0xFFFFFFFFu; // 80208EFC
  W32(c->r[6]+0x00000000u,c->r[0]); // 80208F00
  c->r[4]=R32(c->r[5]+0x00000004u); // 80208F04
  c->r[3]=rotl(c->r[4],24)&0x00FF0000u; // 80208F08
  c->r[0]=rotl(c->r[4],8)&0xFF000000u; // 80208F0C
  c->r[3]=(rotl(c->r[4],24)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80208F10
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80208F14
  c->r[0]=c->r[3]|c->r[0]; // 80208F18
  c->r[0]=rotl(c->r[0],16)&0xFFFFFFFFu; // 80208F1C
  W32(c->r[6]+0x00000004u,c->r[0]); // 80208F20
  c->r[4]=R32(c->r[5]+0x00000008u); // 80208F24
  c->r[3]=rotl(c->r[4],24)&0x00FF0000u; // 80208F28
  c->r[0]=rotl(c->r[4],8)&0xFF000000u; // 80208F2C
  c->r[3]=(rotl(c->r[4],24)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80208F30
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80208F34
  c->r[0]=c->r[3]|c->r[0]; // 80208F38
  c->r[0]=rotl(c->r[0],16)&0xFFFFFFFFu; // 80208F3C
  W32(c->r[6]+0x00000008u,c->r[0]); // 80208F40
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 80208F44
  c->r[3]=rotl(c->r[4],24)&0x00FF0000u; // 80208F48
  c->r[0]=rotl(c->r[4],8)&0xFF000000u; // 80208F4C
  c->r[3]=(rotl(c->r[4],24)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80208F50
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80208F54
  c->r[0]=c->r[3]|c->r[0]; // 80208F58
  c->r[0]=rotl(c->r[0],16)&0xFFFFFFFFu; // 80208F5C
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 80208F60
  c->r[4]=R32(c->r[5]+0x00000010u); // 80208F64
  c->r[3]=rotl(c->r[4],24)&0x00FF0000u; // 80208F68
  c->r[0]=rotl(c->r[4],8)&0xFF000000u; // 80208F6C
  c->r[3]=(rotl(c->r[4],24)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80208F70
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80208F74
  c->r[0]=c->r[3]|c->r[0]; // 80208F78
  c->r[0]=rotl(c->r[0],16)&0xFFFFFFFFu; // 80208F7C
  W32(c->r[6]+0x00000010u,c->r[0]); // 80208F80
  c->r[4]=R32(c->r[5]+0x00000014u); // 80208F84
  c->r[3]=rotl(c->r[4],24)&0x00FF0000u; // 80208F88
  c->r[0]=rotl(c->r[4],8)&0xFF000000u; // 80208F8C
  c->r[3]=(rotl(c->r[4],24)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80208F90
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80208F94
  c->r[0]=c->r[3]|c->r[0]; // 80208F98
  c->r[0]=rotl(c->r[0],16)&0xFFFFFFFFu; // 80208F9C
  W32(c->r[6]+0x00000014u,c->r[0]); // 80208FA0
  c->r[4]=R32(c->r[5]+0x00000018u); // 80208FA4
  c->r[3]=rotl(c->r[4],24)&0x00FF0000u; // 80208FA8
  c->r[0]=rotl(c->r[4],8)&0xFF000000u; // 80208FAC
  c->r[3]=(rotl(c->r[4],24)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80208FB0
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80208FB4
  c->r[0]=c->r[3]|c->r[0]; // 80208FB8
  c->r[0]=rotl(c->r[0],16)&0xFFFFFFFFu; // 80208FBC
  W32(c->r[6]+0x00000018u,c->r[0]); // 80208FC0
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 80208FC4
  c->r[5]=c->r[5]+0x00000020u; // 80208FC8
  c->r[3]=rotl(c->r[4],24)&0x00FF0000u; // 80208FCC
  c->r[0]=rotl(c->r[4],8)&0xFF000000u; // 80208FD0
  c->r[3]=(rotl(c->r[4],24)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80208FD4
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80208FD8
  c->r[0]=c->r[3]|c->r[0]; // 80208FDC
  c->r[0]=rotl(c->r[0],16)&0xFFFFFFFFu; // 80208FE0
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 80208FE4
  c->r[6]=c->r[6]+0x00000020u; // 80208FE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80208EE4; } // 80208FEC
  c->r[3]=c->r[1]+0x00000048u; // 80208FF0
  c->r[4]=c->r[1]+0x00000008u; // 80208FF4
  c->r[5]=0u+0x0000003Cu; // 80208FF8
  c->lr=0x80209000u; f_801FACBC(c); // 80208FFC
  c->r[0]=R32(c->r[30]+0x00000020u); // 80209000
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 80209004
  c->r[0]=c->r[0]|0x00000001u; // 80209008
  W32(c->r[30]+0x00000020u,c->r[0]); // 8020900C
  c->r[31]=R32(c->r[1]+0x0000045Cu); // 80209010
  c->r[30]=R32(c->r[1]+0x00000458u); // 80209014
  c->r[29]=R32(c->r[1]+0x00000454u); // 80209018
  c->r[0]=R32(c->r[1]+0x00000464u); // 8020901C
  c->lr=c->r[0]; // 80209020
  c->r[1]=c->r[1]+0x00000460u; // 80209024
  return; // 80209028
}

// fn_8020902C
void f_8020902C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020902C
  c->r[0]=c->lr; // 80209030
  W32(c->r[1]+0x00000024u,c->r[0]); // 80209034
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80209038
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020903C
  c->r[30]=c->r[3]|c->r[3]; // 80209040
  W32(c->r[1]+0x00000014u,c->r[29]); // 80209044
  c->lr=0x8020904Cu; f_8015848C(c); // 80209048
  c->r[31]=c->r[4]|c->r[4]; // 8020904C
  c->r[29]=0u+0x00000000u; // 80209050
  c->lr=0x80209058u; f_8020A774(c); // 80209054
  c->r[0]=rotl(c->r[3],0)&0xFFFFF800u; cr0(c,c->r[0]); // 80209058
  if (!crb(c,2)) { goto L_80209070; } // 8020905C
  c->r[0]=R32(c->r[30]+0x00000000u); // 80209060
  c->r[0]=rotl(c->r[0],0)&0xFFFFF800u; // 80209064
  c->r[0]=c->r[0]|c->r[3]; // 80209068
  W32(c->r[30]+0x00000000u,c->r[0]); // 8020906C
L_80209070:;
  c->r[5]=0u+0x6C080000u; // 80209070
  c->r[0]=R32(c->r[30]+0x00000000u); // 80209074
  c->r[8]=c->r[5]+0xFFFF8965u; // 80209078
  c->r[3]=0u+0x5D590000u; // 8020907C
  c->r[5]=(uint32_t)(((uint64_t)c->r[31]*(uint64_t)c->r[8])>>32); // 80209080
  c->r[0]=rotl(c->r[0],21)&0x001FFFFCu; // 80209084
  c->r[7]=c->r[3]+0xFFFF8B65u; // 80209088
  W32(c->r[30]+0x00000004u,c->r[4]); // 8020908C
  c->r[9]=c->r[0]|0x00000001u; // 80209090
  c->r[3]=0u+0x00270000u; // 80209094
  c->r[6]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[8]); // 80209098
  c->r[0]=rotl(c->r[9],0)&0xFFE00000u; cr0(c,c->r[0]); // 8020909C
  c->r[4]=c->r[3]+0xFFFF9EC3u; // 802090A0
  c->r[3]=0u+0x00000000u; // 802090A4
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[8]); // 802090A8
  c->r[6]=c->r[5]+c->r[6]; // 802090AC
  c->r[5]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[7]); // 802090B0
  c->r[0]=addc(c,c->r[0],c->r[4],0); // 802090B4
  c->r[0]=c->r[6]+c->r[5]; // 802090B8
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 802090BC
  W32(c->r[30]+0x00000008u,c->r[0]); // 802090C0
  if (!crb(c,2)) { goto L_802090D8; } // 802090C4
  c->r[3]=R32(c->r[30]+0x00000000u); // 802090C8
  c->r[0]=rotl(c->r[9],11)&0xFFFFF800u; // 802090CC
  c->r[0]=(rotl(c->r[3],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 802090D0
  W32(c->r[30]+0x00000000u,c->r[0]); // 802090D4
L_802090D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802090D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802090DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802090E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802090E4
  c->lr=c->r[0]; // 802090E8
  c->r[1]=c->r[1]+0x00000020u; // 802090EC
  return; // 802090F0
}

// fn_802090F4
void f_802090F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802090F4
  c->r[0]=c->lr; // 802090F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802090FC
  c->r[0]=R32(c->r[3]+0x00000000u); // 80209100
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80209104
  c->r[31]=R32(c->r[3]+0x00000004u); // 80209108
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020910C
  c->r[30]=rotl(c->r[0],0)&0x000007FFu; // 80209110
  c->lr=0x80209118u; f_8020A774(c); // 80209114
  c->r[4]=c->r[31]^c->r[4]; // 80209118
  c->r[0]=c->r[30]^c->r[3]; // 8020911C
  c->r[0]=c->r[4]|c->r[0]; // 80209120
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80209124
  c->r[0]=cntlz(c->r[0]); // 80209128
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020912C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80209130
  c->r[0]=R32(c->r[1]+0x00000014u); // 80209134
  c->lr=c->r[0]; // 80209138
  c->r[1]=c->r[1]+0x00000010u; // 8020913C
  return; // 80209140
}

// fn_80209144
void f_80209144(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80209144
  c->r[3]=rotl(c->r[0],21)&0x00000003u; // 80209148
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8020914C
  c->r[0]=cntlz(c->r[0]); // 80209150
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80209154
  return; // 80209158
}

// fn_8020915C
void f_8020915C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000010u); // 8020915C
  c->r[3]=rotl(c->r[0],21)&0x00000003u; // 80209160
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80209164
  c->r[0]=cntlz(c->r[0]); // 80209168
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8020916C
  return; // 80209170
}

// fn_80209174
void f_80209174(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80209174
  c->r[3]=rotl(c->r[0],21)&0x00000003u; // 80209178
  c->r[0]=0u-c->r[3]; // 8020917C
  c->r[0]=c->r[0]|c->r[3]; // 80209180
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80209184
  return; // 80209188
}

// fn_8020918C
void f_8020918C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020918C
  c->r[3]=rotl(c->r[0],21)&0x00000003u; // 80209190
  c->r[0]=0u-c->r[3]; // 80209194
  c->r[0]=c->r[0]|c->r[3]; // 80209198
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8020919C
  return; // 802091A0
}

// DWC_CreateUserData
void f_802091A4(Ctx* __restrict c) {
  trace_call(0x802091A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802091A4
  c->r[0]=c->lr; // 802091A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802091AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802091B0
  c->r[31]=c->r[3]|c->r[3]; // 802091B4
  c->lr=0x802091BCu; f_80210FD4(c); // 802091B8
  c->r[4]=c->r[3]|c->r[3]; // 802091BC
  c->r[3]=c->r[31]|c->r[31]; // 802091C0
  c->lr=0x802091C8u; f_80208DD4(c); // 802091C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802091C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802091CC
  c->lr=c->r[0]; // 802091D0
  c->r[1]=c->r[1]+0x00000010u; // 802091D4
  return; // 802091D8
}

// fn_802091DC
void f_802091DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFB80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802091DC
  c->r[0]=c->lr; // 802091E0
  W32(c->r[1]+0x00000484u,c->r[0]); // 802091E4
  c->r[11]=c->r[1]+0x00000480u; // 802091E8
  c->lr=0x802091F0u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802091EC
  c->r[4]=0u+0xEDB90000u; // 802091F0
  c->r[31]=c->r[3]|c->r[3]; // 802091F4
  c->r[3]=c->r[1]+0x00000048u; // 802091F8
  c->r[4]=c->r[4]+0xFFFF8320u; // 802091FC
  c->lr=0x80209204u; f_801FAB4C(c); // 80209200
  c->r[0]=0u+0x00000002u; // 80209204
  c->r[28]=c->r[31]|c->r[31]; // 80209208
  c->r[27]=c->r[1]+0x00000008u; // 8020920C
  c->ctr=c->r[0]; // 80209210
L_80209214:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 80209214
  c->r[21]=R32(c->r[28]+0x00000008u); // 80209218
  c->r[4]=rotl(c->r[3],24)&0x00FF0000u; // 8020921C
  c->r[0]=rotl(c->r[3],8)&0xFF000000u; // 80209220
  c->r[5]=R32(c->r[28]+0x00000004u); // 80209224
  c->r[4]=(rotl(c->r[3],24)&0x000000FFu)|(c->r[4]&~0x000000FFu); // 80209228
  c->r[0]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 8020922C
  c->r[22]=R32(c->r[28]+0x0000000Cu); // 80209230
  c->r[4]=c->r[4]|c->r[0]; // 80209234
  c->r[3]=rotl(c->r[5],24)&0x00FF0000u; // 80209238
  c->r[0]=rotl(c->r[5],8)&0xFF000000u; // 8020923C
  c->r[30]=rotl(c->r[21],24)&0x00FF0000u; // 80209240
  c->r[29]=rotl(c->r[4],16)&0xFFFFFFFFu; // 80209244
  c->r[12]=rotl(c->r[21],8)&0xFF000000u; // 80209248
  c->r[23]=R32(c->r[28]+0x00000010u); // 8020924C
  c->r[11]=rotl(c->r[22],24)&0x00FF0000u; // 80209250
  c->r[10]=rotl(c->r[22],8)&0xFF000000u; // 80209254
  c->r[3]=(rotl(c->r[5],24)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80209258
  c->r[24]=R32(c->r[28]+0x00000014u); // 8020925C
  c->r[0]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80209260
  c->r[9]=rotl(c->r[23],24)&0x00FF0000u; // 80209264
  c->r[8]=rotl(c->r[23],8)&0xFF000000u; // 80209268
  c->r[25]=R32(c->r[28]+0x00000018u); // 8020926C
  c->r[7]=rotl(c->r[24],24)&0x00FF0000u; // 80209270
  c->r[6]=rotl(c->r[24],8)&0xFF000000u; // 80209274
  c->r[0]=c->r[3]|c->r[0]; // 80209278
  c->r[26]=R32(c->r[28]+0x0000001Cu); // 8020927C
  c->r[5]=rotl(c->r[25],24)&0x00FF0000u; // 80209280
  W32(c->r[27]+0x00000000u,c->r[29]); // 80209284
  c->r[29]=rotl(c->r[0],16)&0xFFFFFFFFu; // 80209288
  c->r[4]=rotl(c->r[25],8)&0xFF000000u; // 8020928C
  c->r[3]=rotl(c->r[26],24)&0x00FF0000u; // 80209290
  c->r[0]=rotl(c->r[26],8)&0xFF000000u; // 80209294
  c->r[30]=(rotl(c->r[21],24)&0x000000FFu)|(c->r[30]&~0x000000FFu); // 80209298
  c->r[12]=(rotl(c->r[21],8)&0x0000FF00u)|(c->r[12]&~0x0000FF00u); // 8020929C
  W32(c->r[27]+0x00000004u,c->r[29]); // 802092A0
  c->r[12]=c->r[30]|c->r[12]; // 802092A4
  c->r[11]=(rotl(c->r[22],24)&0x000000FFu)|(c->r[11]&~0x000000FFu); // 802092A8
  c->r[12]=rotl(c->r[12],16)&0xFFFFFFFFu; // 802092AC
  c->r[10]=(rotl(c->r[22],8)&0x0000FF00u)|(c->r[10]&~0x0000FF00u); // 802092B0
  c->r[10]=c->r[11]|c->r[10]; // 802092B4
  W32(c->r[27]+0x00000008u,c->r[12]); // 802092B8
  c->r[10]=rotl(c->r[10],16)&0xFFFFFFFFu; // 802092BC
  c->r[9]=(rotl(c->r[23],24)&0x000000FFu)|(c->r[9]&~0x000000FFu); // 802092C0
  c->r[8]=(rotl(c->r[23],8)&0x0000FF00u)|(c->r[8]&~0x0000FF00u); // 802092C4
  W32(c->r[27]+0x0000000Cu,c->r[10]); // 802092C8
  c->r[8]=c->r[9]|c->r[8]; // 802092CC
  c->r[7]=(rotl(c->r[24],24)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 802092D0
  c->r[8]=rotl(c->r[8],16)&0xFFFFFFFFu; // 802092D4
  c->r[6]=(rotl(c->r[24],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 802092D8
  c->r[6]=c->r[7]|c->r[6]; // 802092DC
  W32(c->r[27]+0x00000010u,c->r[8]); // 802092E0
  c->r[6]=rotl(c->r[6],16)&0xFFFFFFFFu; // 802092E4
  c->r[5]=(rotl(c->r[25],24)&0x000000FFu)|(c->r[5]&~0x000000FFu); // 802092E8
  c->r[4]=(rotl(c->r[25],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 802092EC
  W32(c->r[27]+0x00000014u,c->r[6]); // 802092F0
  c->r[4]=c->r[5]|c->r[4]; // 802092F4
  c->r[3]=(rotl(c->r[26],24)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 802092F8
  c->r[4]=rotl(c->r[4],16)&0xFFFFFFFFu; // 802092FC
  c->r[0]=(rotl(c->r[26],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80209300
  c->r[0]=c->r[3]|c->r[0]; // 80209304
  W32(c->r[27]+0x00000018u,c->r[4]); // 80209308
  c->r[0]=rotl(c->r[0],16)&0xFFFFFFFFu; // 8020930C
  c->r[28]=c->r[28]+0x00000020u; // 80209310
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 80209314
  c->r[27]=c->r[27]+0x00000020u; // 80209318
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80209214; } // 8020931C
  c->r[3]=c->r[1]+0x00000048u; // 80209320
  c->r[4]=c->r[1]+0x00000008u; // 80209324
  c->r[5]=0u+0x0000003Cu; // 80209328
  c->lr=0x80209330u; f_801FACBC(c); // 8020932C
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 80209330
  c->r[11]=c->r[1]+0x00000480u; // 80209334
  c->r[0]=c->r[0]-c->r[3]; // 80209338
  c->r[0]=cntlz(c->r[0]); // 8020933C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80209340
  c->lr=0x80209348u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80209344
  c->r[0]=R32(c->r[1]+0x00000484u); // 80209348
  c->lr=c->r[0]; // 8020934C
  c->r[1]=c->r[1]+0x00000480u; // 80209350
  return; // 80209354
}

