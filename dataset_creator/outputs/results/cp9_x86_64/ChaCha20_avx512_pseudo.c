
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChaCha20_avx512(undefined1 (*param_1) [64],undefined1 (*param_2) [64],ulong param_3,
                    undefined1 (*param_4) [16],undefined1 (*param_5) [16])

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  int iVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [64];
  undefined1 (*pauVar10) [64];
  long lVar11;
  long lVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auStack_80 [56];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  if (0x200 < param_3) {
    auVar14._4_4_ = s_expand_32_byte_k_004bafc0._4_4_;
    auVar14._0_4_ = s_expand_32_byte_k_004bafc0._0_4_;
    auVar14._8_4_ = s_expand_32_byte_k_004bafc0._8_4_;
    auVar14._12_4_ = s_expand_32_byte_k_004bafc0._12_4_;
    auVar15 = vbroadcasti32x4_avx512f(auVar14);
    auVar16 = vbroadcasti32x4_avx512f(*param_4);
    auVar17 = vbroadcasti32x4_avx512f(*(undefined1 (*) [16])(*param_4 + 4));
    auVar18 = vbroadcasti32x4_avx512f(*param_5);
    auVar19 = vpshufd_avx512f(auVar15,0);
    auVar20 = vpshufd_avx512f(auVar15,0x55);
    auVar21 = vpshufd_avx512f(auVar15,0xaa);
    auVar15 = vpshufd_avx512f(auVar15,0xff);
    auVar22 = vmovdqa64_avx512f(auVar19);
    auVar23 = vmovdqa64_avx512f(auVar20);
    auVar24 = vmovdqa64_avx512f(auVar21);
    auVar25 = vmovdqa64_avx512f(auVar15);
    auVar26 = vpshufd_avx512f(auVar16,0);
    auVar27 = vpshufd_avx512f(auVar16,0x55);
    auVar28 = vpshufd_avx512f(auVar16,0xaa);
    auVar16 = vpshufd_avx512f(auVar16,0xff);
    auVar29 = vmovdqa64_avx512f(auVar26);
    auVar30 = vmovdqa64_avx512f(auVar27);
    auVar31 = vmovdqa64_avx512f(auVar28);
    auVar32 = vmovdqa64_avx512f(auVar16);
    auVar33 = vpshufd_avx512f(auVar17,0);
    auVar34 = vpshufd_avx512f(auVar17,0x55);
    auVar35 = vpshufd_avx512f(auVar17,0xaa);
    auVar17 = vpshufd_avx512f(auVar17,0xff);
    auVar36 = vmovdqa64_avx512f(auVar33);
    auVar37 = vmovdqa64_avx512f(auVar34);
    auVar38 = vmovdqa64_avx512f(auVar35);
    auVar39 = vmovdqa64_avx512f(auVar17);
    auVar40 = vpshufd_avx512f(auVar18,0);
    auVar41 = vpshufd_avx512f(auVar18,0x55);
    auVar42 = vpshufd_avx512f(auVar18,0xaa);
    auVar18 = vpshufd_avx512f(auVar18,0xff);
    auVar40 = vpaddd_avx512f(auVar40,_DAT_004baf40);
    auVar43 = vmovdqa64_avx512f(auVar40);
    auVar44 = vmovdqa64_avx512f(auVar41);
    auVar45 = vmovdqa64_avx512f(auVar42);
    auVar46 = vmovdqa64_avx512f(auVar18);
    iVar7 = 10;
    while( true ) {
      do {
        auVar19 = vpaddd_avx512f(auVar19,auVar26);
        auVar20 = vpaddd_avx512f(auVar20,auVar27);
        auVar21 = vpaddd_avx512f(auVar21,auVar28);
        auVar15 = vpaddd_avx512f(auVar15,auVar16);
        auVar40 = vpxord_avx512f(auVar40,auVar19);
        auVar41 = vpxord_avx512f(auVar41,auVar20);
        auVar42 = vpxord_avx512f(auVar42,auVar21);
        auVar18 = vpxord_avx512f(auVar18,auVar15);
        auVar40 = vprold_avx512f(auVar40,0x10);
        auVar41 = vprold_avx512f(auVar41,0x10);
        auVar42 = vprold_avx512f(auVar42,0x10);
        auVar18 = vprold_avx512f(auVar18,0x10);
        auVar33 = vpaddd_avx512f(auVar33,auVar40);
        auVar34 = vpaddd_avx512f(auVar34,auVar41);
        auVar35 = vpaddd_avx512f(auVar35,auVar42);
        auVar17 = vpaddd_avx512f(auVar17,auVar18);
        auVar26 = vpxord_avx512f(auVar26,auVar33);
        auVar27 = vpxord_avx512f(auVar27,auVar34);
        auVar28 = vpxord_avx512f(auVar28,auVar35);
        auVar16 = vpxord_avx512f(auVar16,auVar17);
        auVar26 = vprold_avx512f(auVar26,0xc);
        auVar27 = vprold_avx512f(auVar27,0xc);
        auVar28 = vprold_avx512f(auVar28,0xc);
        auVar16 = vprold_avx512f(auVar16,0xc);
        auVar19 = vpaddd_avx512f(auVar19,auVar26);
        auVar20 = vpaddd_avx512f(auVar20,auVar27);
        auVar21 = vpaddd_avx512f(auVar21,auVar28);
        auVar15 = vpaddd_avx512f(auVar15,auVar16);
        auVar40 = vpxord_avx512f(auVar40,auVar19);
        auVar41 = vpxord_avx512f(auVar41,auVar20);
        auVar42 = vpxord_avx512f(auVar42,auVar21);
        auVar18 = vpxord_avx512f(auVar18,auVar15);
        auVar40 = vprold_avx512f(auVar40,8);
        auVar41 = vprold_avx512f(auVar41,8);
        auVar42 = vprold_avx512f(auVar42,8);
        auVar18 = vprold_avx512f(auVar18,8);
        auVar33 = vpaddd_avx512f(auVar33,auVar40);
        auVar34 = vpaddd_avx512f(auVar34,auVar41);
        auVar35 = vpaddd_avx512f(auVar35,auVar42);
        auVar17 = vpaddd_avx512f(auVar17,auVar18);
        auVar26 = vpxord_avx512f(auVar26,auVar33);
        auVar27 = vpxord_avx512f(auVar27,auVar34);
        auVar28 = vpxord_avx512f(auVar28,auVar35);
        auVar16 = vpxord_avx512f(auVar16,auVar17);
        auVar26 = vprold_avx512f(auVar26,7);
        auVar27 = vprold_avx512f(auVar27,7);
        auVar28 = vprold_avx512f(auVar28,7);
        auVar16 = vprold_avx512f(auVar16,7);
        auVar19 = vpaddd_avx512f(auVar19,auVar27);
        auVar20 = vpaddd_avx512f(auVar20,auVar28);
        auVar21 = vpaddd_avx512f(auVar21,auVar16);
        auVar15 = vpaddd_avx512f(auVar15,auVar26);
        auVar18 = vpxord_avx512f(auVar18,auVar19);
        auVar40 = vpxord_avx512f(auVar40,auVar20);
        auVar41 = vpxord_avx512f(auVar41,auVar21);
        auVar42 = vpxord_avx512f(auVar42,auVar15);
        auVar18 = vprold_avx512f(auVar18,0x10);
        auVar40 = vprold_avx512f(auVar40,0x10);
        auVar41 = vprold_avx512f(auVar41,0x10);
        auVar42 = vprold_avx512f(auVar42,0x10);
        auVar35 = vpaddd_avx512f(auVar35,auVar18);
        auVar17 = vpaddd_avx512f(auVar17,auVar40);
        auVar33 = vpaddd_avx512f(auVar33,auVar41);
        auVar34 = vpaddd_avx512f(auVar34,auVar42);
        auVar27 = vpxord_avx512f(auVar27,auVar35);
        auVar28 = vpxord_avx512f(auVar28,auVar17);
        auVar16 = vpxord_avx512f(auVar16,auVar33);
        auVar26 = vpxord_avx512f(auVar26,auVar34);
        auVar27 = vprold_avx512f(auVar27,0xc);
        auVar28 = vprold_avx512f(auVar28,0xc);
        auVar16 = vprold_avx512f(auVar16,0xc);
        auVar26 = vprold_avx512f(auVar26,0xc);
        auVar19 = vpaddd_avx512f(auVar19,auVar27);
        auVar20 = vpaddd_avx512f(auVar20,auVar28);
        auVar21 = vpaddd_avx512f(auVar21,auVar16);
        auVar15 = vpaddd_avx512f(auVar15,auVar26);
        auVar18 = vpxord_avx512f(auVar18,auVar19);
        auVar40 = vpxord_avx512f(auVar40,auVar20);
        auVar41 = vpxord_avx512f(auVar41,auVar21);
        auVar42 = vpxord_avx512f(auVar42,auVar15);
        auVar18 = vprold_avx512f(auVar18,8);
        auVar40 = vprold_avx512f(auVar40,8);
        auVar41 = vprold_avx512f(auVar41,8);
        auVar42 = vprold_avx512f(auVar42,8);
        auVar35 = vpaddd_avx512f(auVar35,auVar18);
        auVar17 = vpaddd_avx512f(auVar17,auVar40);
        auVar33 = vpaddd_avx512f(auVar33,auVar41);
        auVar34 = vpaddd_avx512f(auVar34,auVar42);
        auVar27 = vpxord_avx512f(auVar27,auVar35);
        auVar28 = vpxord_avx512f(auVar28,auVar17);
        auVar16 = vpxord_avx512f(auVar16,auVar33);
        auVar26 = vpxord_avx512f(auVar26,auVar34);
        auVar27 = vprold_avx512f(auVar27,7);
        auVar28 = vprold_avx512f(auVar28,7);
        auVar16 = vprold_avx512f(auVar16,7);
        auVar26 = vprold_avx512f(auVar26,7);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      auVar19 = vpaddd_avx512f(auVar19,auVar22);
      auVar20 = vpaddd_avx512f(auVar20,auVar23);
      auVar21 = vpaddd_avx512f(auVar21,auVar24);
      auVar15 = vpaddd_avx512f(auVar15,auVar25);
      auVar22 = vpunpckldq_avx512f(auVar19,auVar20);
      auVar23 = vpunpckldq_avx512f(auVar21,auVar15);
      auVar19 = vpunpckhdq_avx512f(auVar19,auVar20);
      auVar15 = vpunpckhdq_avx512f(auVar21,auVar15);
      auVar20 = vpunpcklqdq_avx512f(auVar22,auVar23);
      auVar21 = vpunpckhqdq_avx512f(auVar22,auVar23);
      auVar22 = vpunpcklqdq_avx512f(auVar19,auVar15);
      auVar15 = vpunpckhqdq_avx512f(auVar19,auVar15);
      auVar19 = vpaddd_avx512f(auVar26,auVar29);
      auVar23 = vpaddd_avx512f(auVar27,auVar30);
      auVar24 = vpaddd_avx512f(auVar28,auVar31);
      auVar16 = vpaddd_avx512f(auVar16,auVar32);
      auVar25 = vpunpckldq_avx512f(auVar19,auVar23);
      auVar26 = vpunpckldq_avx512f(auVar24,auVar16);
      auVar19 = vpunpckhdq_avx512f(auVar19,auVar23);
      auVar16 = vpunpckhdq_avx512f(auVar24,auVar16);
      auVar23 = vpunpcklqdq_avx512f(auVar25,auVar26);
      auVar24 = vpunpckhqdq_avx512f(auVar25,auVar26);
      auVar25 = vpunpcklqdq_avx512f(auVar19,auVar16);
      auVar16 = vpunpckhqdq_avx512f(auVar19,auVar16);
      auVar19 = vshufi32x4_avx512f(auVar20,auVar23,0x44);
      auVar20 = vshufi32x4_avx512f(auVar20,auVar23,0xee);
      auVar23 = vshufi32x4_avx512f(auVar21,auVar24,0x44);
      auVar21 = vshufi32x4_avx512f(auVar21,auVar24,0xee);
      auVar24 = vshufi32x4_avx512f(auVar22,auVar25,0x44);
      auVar22 = vshufi32x4_avx512f(auVar22,auVar25,0xee);
      auVar25 = vshufi32x4_avx512f(auVar15,auVar16,0x44);
      auVar15 = vshufi32x4_avx512f(auVar15,auVar16,0xee);
      auVar16 = vpaddd_avx512f(auVar33,auVar36);
      auVar26 = vpaddd_avx512f(auVar34,auVar37);
      auVar27 = vpaddd_avx512f(auVar35,auVar38);
      auVar17 = vpaddd_avx512f(auVar17,auVar39);
      auVar28 = vpunpckldq_avx512f(auVar16,auVar26);
      auVar33 = vpunpckldq_avx512f(auVar27,auVar17);
      auVar16 = vpunpckhdq_avx512f(auVar16,auVar26);
      auVar17 = vpunpckhdq_avx512f(auVar27,auVar17);
      auVar26 = vpunpcklqdq_avx512f(auVar28,auVar33);
      auVar27 = vpunpckhqdq_avx512f(auVar28,auVar33);
      auVar28 = vpunpcklqdq_avx512f(auVar16,auVar17);
      auVar16 = vpunpckhqdq_avx512f(auVar16,auVar17);
      auVar17 = vpaddd_avx512f(auVar40,auVar43);
      auVar33 = vpaddd_avx512f(auVar41,auVar44);
      auVar34 = vpaddd_avx512f(auVar42,auVar45);
      auVar18 = vpaddd_avx512f(auVar18,auVar46);
      auVar35 = vpunpckldq_avx512f(auVar17,auVar33);
      auVar40 = vpunpckldq_avx512f(auVar34,auVar18);
      auVar17 = vpunpckhdq_avx512f(auVar17,auVar33);
      auVar18 = vpunpckhdq_avx512f(auVar34,auVar18);
      auVar33 = vpunpcklqdq_avx512f(auVar35,auVar40);
      auVar34 = vpunpckhqdq_avx512f(auVar35,auVar40);
      auVar35 = vpunpcklqdq_avx512f(auVar17,auVar18);
      auVar17 = vpunpckhqdq_avx512f(auVar17,auVar18);
      auVar18 = vshufi32x4_avx512f(auVar26,auVar33,0x44);
      auVar26 = vshufi32x4_avx512f(auVar26,auVar33,0xee);
      auVar33 = vshufi32x4_avx512f(auVar27,auVar34,0x44);
      auVar27 = vshufi32x4_avx512f(auVar27,auVar34,0xee);
      auVar34 = vshufi32x4_avx512f(auVar28,auVar35,0x44);
      auVar28 = vshufi32x4_avx512f(auVar28,auVar35,0xee);
      auVar35 = vshufi32x4_avx512f(auVar16,auVar17,0x44);
      auVar16 = vshufi32x4_avx512f(auVar16,auVar17,0xee);
      auVar17 = vshufi32x4_avx512f(auVar19,auVar18,0x88);
      auVar18 = vshufi32x4_avx512f(auVar19,auVar18,0xdd);
      auVar19 = vshufi32x4_avx512f(auVar20,auVar26,0x88);
      auVar20 = vshufi32x4_avx512f(auVar20,auVar26,0xdd);
      auVar26 = vshufi32x4_avx512f(auVar23,auVar33,0x88);
      auVar23 = vshufi32x4_avx512f(auVar23,auVar33,0xdd);
      auVar33 = vshufi32x4_avx512f(auVar21,auVar27,0x88);
      auVar21 = vshufi32x4_avx512f(auVar21,auVar27,0xdd);
      auVar27 = vshufi32x4_avx512f(auVar24,auVar34,0x88);
      auVar24 = vshufi32x4_avx512f(auVar24,auVar34,0xdd);
      auVar34 = vshufi32x4_avx512f(auVar22,auVar28,0x88);
      auVar22 = vshufi32x4_avx512f(auVar22,auVar28,0xdd);
      auVar28 = vshufi32x4_avx512f(auVar25,auVar35,0x88);
      auVar25 = vshufi32x4_avx512f(auVar25,auVar35,0xdd);
      auVar35 = vshufi32x4_avx512f(auVar15,auVar16,0x88);
      auVar15 = vshufi32x4_avx512f(auVar15,auVar16,0xdd);
      if (param_3 < 0x400) break;
      auVar16 = vpxord_avx512f(auVar17,*param_2);
      auVar17 = vpxord_avx512f(auVar26,param_2[1]);
      auVar26 = vpxord_avx512f(auVar27,param_2[2]);
      auVar27 = vpxord_avx512f(auVar28,param_2[3]);
      auVar16 = vmovdqu32_avx512f(auVar16);
      *param_1 = auVar16;
      auVar16 = vmovdqu32_avx512f(auVar17);
      param_1[1] = auVar16;
      auVar16 = vmovdqu32_avx512f(auVar26);
      param_1[2] = auVar16;
      auVar16 = vmovdqu32_avx512f(auVar27);
      param_1[3] = auVar16;
      auVar16 = vpxord_avx512f(auVar18,param_2[4]);
      auVar17 = vpxord_avx512f(auVar23,param_2[5]);
      auVar18 = vpxord_avx512f(auVar24,param_2[6]);
      auVar23 = vpxord_avx512f(auVar25,param_2[7]);
      auVar16 = vmovdqu32_avx512f(auVar16);
      param_1[4] = auVar16;
      auVar16 = vmovdqu32_avx512f(auVar17);
      param_1[5] = auVar16;
      auVar16 = vmovdqu32_avx512f(auVar18);
      param_1[6] = auVar16;
      auVar16 = vmovdqu32_avx512f(auVar23);
      param_1[7] = auVar16;
      auVar16 = vpxord_avx512f(auVar19,param_2[8]);
      auVar17 = vpxord_avx512f(auVar33,param_2[9]);
      auVar18 = vpxord_avx512f(auVar34,param_2[10]);
      auVar19 = vpxord_avx512f(auVar35,param_2[0xb]);
      auVar16 = vmovdqu32_avx512f(auVar16);
      param_1[8] = auVar16;
      auVar16 = vmovdqu32_avx512f(auVar17);
      param_1[9] = auVar16;
      auVar16 = vmovdqu32_avx512f(auVar18);
      param_1[10] = auVar16;
      auVar16 = vmovdqu32_avx512f(auVar19);
      param_1[0xb] = auVar16;
      auVar16 = vpxord_avx512f(auVar20,param_2[0xc]);
      auVar17 = vpxord_avx512f(auVar21,param_2[0xd]);
      auVar18 = vpxord_avx512f(auVar22,param_2[0xe]);
      auVar19 = vpxord_avx512f(auVar15,param_2[0xf]);
      param_2 = param_2 + 0x10;
      auVar15 = vmovdqu32_avx512f(auVar16);
      param_1[0xc] = auVar15;
      auVar15 = vmovdqu32_avx512f(auVar17);
      param_1[0xd] = auVar15;
      auVar15 = vmovdqu32_avx512f(auVar18);
      param_1[0xe] = auVar15;
      auVar15 = vmovdqu32_avx512f(auVar19);
      param_1[0xf] = auVar15;
      param_1 = param_1 + 0x10;
      param_3 = param_3 - 0x400;
      if (param_3 == 0) {
        return;
      }
      auVar19 = vpbroadcastd_avx512f(ZEXT416((uint)s_expand_32_byte_k_004bafc0._0_4_));
      auVar20 = vpbroadcastd_avx512f(ZEXT416((uint)s_expand_32_byte_k_004bafc0._4_4_));
      auVar21 = vpbroadcastd_avx512f(ZEXT416((uint)s_expand_32_byte_k_004bafc0._8_4_));
      auVar15 = vpbroadcastd_avx512f(ZEXT416((uint)s_expand_32_byte_k_004bafc0._12_4_));
      auVar43 = vpaddd_avx512f(auVar43,_DAT_004baf80);
      auVar26 = vmovdqa64_avx512f(auVar29);
      auVar27 = vmovdqa64_avx512f(auVar30);
      auVar28 = vmovdqa64_avx512f(auVar31);
      auVar16 = vmovdqa64_avx512f(auVar32);
      auVar33 = vmovdqa64_avx512f(auVar36);
      auVar34 = vmovdqa64_avx512f(auVar37);
      auVar35 = vmovdqa64_avx512f(auVar38);
      auVar17 = vmovdqa64_avx512f(auVar39);
      auVar40 = vmovdqa64_avx512f(auVar43);
      auVar41 = vmovdqa64_avx512f(auVar44);
      auVar42 = vmovdqa64_avx512f(auVar45);
      auVar18 = vmovdqa64_avx512f(auVar46);
      auVar22 = vmovdqa64_avx512f(auVar19);
      auVar23 = vmovdqa64_avx512f(auVar20);
      auVar24 = vmovdqa64_avx512f(auVar21);
      auVar25 = vmovdqa64_avx512f(auVar15);
      iVar7 = 10;
    }
    lVar12 = 0;
    lVar11 = (long)param_1 - (long)param_2;
    pauVar9 = param_2;
    if (0x3f < param_3) {
      auVar16 = vpxord_avx512f(auVar17,*param_2);
      auVar16 = vmovdqu32_avx512f(auVar16);
      *(undefined1 (*) [64])(lVar11 + (long)param_2) = auVar16;
      if (param_3 == 0x40) {
        return;
      }
      auVar17 = vmovdqa32_avx512f(auVar26);
      pauVar9 = param_2 + 1;
      if (0x7f < param_3) {
        auVar16 = vpxord_avx512f(auVar26,*pauVar9);
        auVar16 = vmovdqu32_avx512f(auVar16);
        *(undefined1 (*) [64])(lVar11 + (long)pauVar9) = auVar16;
        if (param_3 == 0x80) {
          return;
        }
        auVar17 = vmovdqa32_avx512f(auVar27);
        pauVar9 = param_2 + 2;
        if (0xbf < param_3) {
          auVar16 = vpxord_avx512f(auVar27,*pauVar9);
          auVar16 = vmovdqu32_avx512f(auVar16);
          *(undefined1 (*) [64])(lVar11 + (long)pauVar9) = auVar16;
          if (param_3 == 0xc0) {
            return;
          }
          auVar17 = vmovdqa32_avx512f(auVar28);
          pauVar9 = param_2 + 3;
          if (0xff < param_3) {
            auVar16 = vpxord_avx512f(auVar28,*pauVar9);
            auVar16 = vmovdqu32_avx512f(auVar16);
            *(undefined1 (*) [64])(lVar11 + (long)pauVar9) = auVar16;
            if (param_3 == 0x100) {
              return;
            }
            auVar17 = vmovdqa32_avx512f(auVar18);
            pauVar9 = param_2 + 4;
            if (0x13f < param_3) {
              auVar16 = vpxord_avx512f(auVar18,*pauVar9);
              auVar16 = vmovdqu32_avx512f(auVar16);
              *(undefined1 (*) [64])(lVar11 + (long)pauVar9) = auVar16;
              if (param_3 == 0x140) {
                return;
              }
              auVar17 = vmovdqa32_avx512f(auVar23);
              pauVar9 = param_2 + 5;
              if (0x17f < param_3) {
                auVar16 = vpxord_avx512f(auVar23,*pauVar9);
                auVar16 = vmovdqu32_avx512f(auVar16);
                *(undefined1 (*) [64])(lVar11 + (long)pauVar9) = auVar16;
                if (param_3 == 0x180) {
                  return;
                }
                auVar17 = vmovdqa32_avx512f(auVar24);
                pauVar9 = param_2 + 6;
                if (0x1bf < param_3) {
                  auVar16 = vpxord_avx512f(auVar24,*pauVar9);
                  auVar16 = vmovdqu32_avx512f(auVar16);
                  *(undefined1 (*) [64])(lVar11 + (long)pauVar9) = auVar16;
                  if (param_3 == 0x1c0) {
                    return;
                  }
                  auVar17 = vmovdqa32_avx512f(auVar25);
                  pauVar9 = param_2 + 7;
                  if (0x1ff < param_3) {
                    auVar16 = vpxord_avx512f(auVar25,*pauVar9);
                    auVar16 = vmovdqu32_avx512f(auVar16);
                    *(undefined1 (*) [64])(lVar11 + (long)pauVar9) = auVar16;
                    if (param_3 == 0x200) {
                      return;
                    }
                    auVar17 = vmovdqa32_avx512f(auVar19);
                    pauVar9 = param_2 + 8;
                    if (0x23f < param_3) {
                      auVar16 = vpxord_avx512f(auVar19,*pauVar9);
                      auVar16 = vmovdqu32_avx512f(auVar16);
                      *(undefined1 (*) [64])(lVar11 + (long)pauVar9) = auVar16;
                      if (param_3 == 0x240) {
                        return;
                      }
                      auVar17 = vmovdqa32_avx512f(auVar33);
                      pauVar9 = param_2 + 9;
                      if (0x27f < param_3) {
                        auVar16 = vpxord_avx512f(auVar33,*pauVar9);
                        auVar16 = vmovdqu32_avx512f(auVar16);
                        *(undefined1 (*) [64])(lVar11 + (long)pauVar9) = auVar16;
                        if (param_3 == 0x280) {
                          return;
                        }
                        auVar17 = vmovdqa32_avx512f(auVar34);
                        pauVar9 = param_2 + 10;
                        if (0x2bf < param_3) {
                          auVar16 = vpxord_avx512f(auVar34,*pauVar9);
                          auVar16 = vmovdqu32_avx512f(auVar16);
                          *(undefined1 (*) [64])(lVar11 + (long)pauVar9) = auVar16;
                          if (param_3 == 0x2c0) {
                            return;
                          }
                          auVar17 = vmovdqa32_avx512f(auVar35);
                          pauVar9 = param_2 + 0xb;
                          if (0x2ff < param_3) {
                            auVar16 = vpxord_avx512f(auVar35,*pauVar9);
                            auVar16 = vmovdqu32_avx512f(auVar16);
                            *(undefined1 (*) [64])(lVar11 + (long)pauVar9) = auVar16;
                            if (param_3 == 0x300) {
                              return;
                            }
                            auVar17 = vmovdqa32_avx512f(auVar20);
                            pauVar9 = param_2 + 0xc;
                            if (0x33f < param_3) {
                              auVar16 = vpxord_avx512f(auVar20,*pauVar9);
                              auVar16 = vmovdqu32_avx512f(auVar16);
                              *(undefined1 (*) [64])(lVar11 + (long)pauVar9) = auVar16;
                              if (param_3 == 0x340) {
                                return;
                              }
                              auVar17 = vmovdqa32_avx512f(auVar21);
                              pauVar9 = param_2 + 0xd;
                              if (0x37f < param_3) {
                                auVar16 = vpxord_avx512f(auVar21,*pauVar9);
                                auVar16 = vmovdqu32_avx512f(auVar16);
                                *(undefined1 (*) [64])(lVar11 + (long)pauVar9) = auVar16;
                                if (param_3 == 0x380) {
                                  return;
                                }
                                auVar17 = vmovdqa32_avx512f(auVar22);
                                pauVar9 = param_2 + 0xe;
                                if (0x3bf < param_3) {
                                  auVar16 = vpxord_avx512f(auVar22,*pauVar9);
                                  auVar16 = vmovdqu32_avx512f(auVar16);
                                  *(undefined1 (*) [64])(lVar11 + (long)pauVar9) = auVar16;
                                  if (param_3 == 0x3c0) {
                                    return;
                                  }
                                  auVar17 = vmovdqa32_avx512f(auVar15);
                                  pauVar9 = param_2 + 0xf;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    auVar15 = vmovdqa32_avx512f(auVar17);
    auStack_80 = auVar15._0_56_;
    local_48 = auVar15._56_8_;
    param_3 = param_3 & 0x3f;
    do {
      pbVar1 = *pauVar9 + lVar12;
      pbVar2 = auStack_80 + lVar12;
      lVar12 = lVar12 + 1;
      *(byte *)((long)pauVar9 + lVar12 + lVar11 + -1) = *pbVar1 ^ *pbVar2;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    auVar15 = vpxord_avx512f(auVar17,auVar17);
    vmovdqa32_avx512f(auVar15);
    return;
  }
  auVar3._4_4_ = s_expand_32_byte_k_004bafc0._4_4_;
  auVar3._0_4_ = s_expand_32_byte_k_004bafc0._0_4_;
  auVar3._8_4_ = s_expand_32_byte_k_004bafc0._8_4_;
  auVar3._12_4_ = s_expand_32_byte_k_004bafc0._12_4_;
  auVar15 = vbroadcasti32x4_avx512f(auVar3);
  auVar16 = vbroadcasti32x4_avx512f(*param_4);
  auVar17 = vbroadcasti32x4_avx512f(*(undefined1 (*) [16])(*param_4 + 4));
  auVar18 = vbroadcasti32x4_avx512f(*param_5);
  auVar19 = vmovdqa32_avx512f(auVar15);
  auVar20 = vmovdqa32_avx512f(auVar16);
  auVar21 = vmovdqa32_avx512f(auVar17);
  auVar18 = vpaddd_avx512f(auVar18,_DAT_004baec0);
  auVar22 = vmovdqa32_avx512f(_DAT_004baf00);
  lVar12 = 10;
  auVar23 = vmovdqa32_avx512f(auVar18);
  do {
    do {
      auVar15 = vpaddd_avx512f(auVar15,auVar16);
      auVar18 = vpxord_avx512f(auVar18,auVar15);
      auVar18 = vprold_avx512f(auVar18,0x10);
      auVar17 = vpaddd_avx512f(auVar17,auVar18);
      auVar16 = vpxord_avx512f(auVar16,auVar17);
      auVar16 = vprold_avx512f(auVar16,0xc);
      auVar15 = vpaddd_avx512f(auVar15,auVar16);
      auVar18 = vpxord_avx512f(auVar18,auVar15);
      auVar18 = vprold_avx512f(auVar18,8);
      auVar17 = vpaddd_avx512f(auVar17,auVar18);
      auVar16 = vpxord_avx512f(auVar16,auVar17);
      auVar16 = vprold_avx512f(auVar16,7);
      auVar17 = vpshufd_avx512f(auVar17,0x4e);
      auVar16 = vpshufd_avx512f(auVar16,0x39);
      auVar18 = vpshufd_avx512f(auVar18,0x93);
      auVar15 = vpaddd_avx512f(auVar15,auVar16);
      auVar18 = vpxord_avx512f(auVar18,auVar15);
      auVar18 = vprold_avx512f(auVar18,0x10);
      auVar17 = vpaddd_avx512f(auVar17,auVar18);
      auVar16 = vpxord_avx512f(auVar16,auVar17);
      auVar16 = vprold_avx512f(auVar16,0xc);
      auVar15 = vpaddd_avx512f(auVar15,auVar16);
      auVar18 = vpxord_avx512f(auVar18,auVar15);
      auVar18 = vprold_avx512f(auVar18,8);
      auVar17 = vpaddd_avx512f(auVar17,auVar18);
      auVar16 = vpxord_avx512f(auVar16,auVar17);
      auVar16 = vprold_avx512f(auVar16,7);
      auVar17 = vpshufd_avx512f(auVar17,0x4e);
      auVar16 = vpshufd_avx512f(auVar16,0x93);
      auVar18 = vpshufd_avx512f(auVar18,0x39);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    auVar15 = vpaddd_avx512f(auVar15,auVar19);
    auVar16 = vpaddd_avx512f(auVar16,auVar20);
    auVar17 = vpaddd_avx512f(auVar17,auVar21);
    auVar18 = vpaddd_avx512f(auVar18,auVar23);
    lVar12 = 0;
    if (param_3 < 0x40) {
      local_48 = auVar15._0_8_;
      uStack_40 = auVar15._8_8_;
      auStack_38 = auVar16._0_16_;
      auStack_28 = auVar17._0_16_;
      auStack_18 = auVar18._0_16_;
LAB_004bd90b:
      do {
        (*param_1)[lVar12] = (*param_2)[lVar12] ^ *(byte *)((long)&local_48 + lVar12);
        param_3 = param_3 - 1;
        lVar12 = lVar12 + 1;
      } while (param_3 != 0);
      vmovdqu32_avx512f(auVar19);
      return;
    }
    auVar14 = *(undefined1 (*) [16])(*param_2 + 0x10);
    auVar3 = *(undefined1 (*) [16])(*param_2 + 0x20);
    auVar4 = *(undefined1 (*) [16])(*param_2 + 0x30);
    pauVar9 = param_2 + 1;
    *(undefined1 (*) [16])*param_1 = auVar15._0_16_ ^ *(undefined1 (*) [16])*param_2;
    *(undefined1 (*) [16])(*param_1 + 0x10) = auVar16._0_16_ ^ auVar14;
    *(undefined1 (*) [16])(*param_1 + 0x20) = auVar17._0_16_ ^ auVar3;
    *(undefined1 (*) [16])(*param_1 + 0x30) = auVar18._0_16_ ^ auVar4;
    pauVar10 = param_1 + 1;
    if (param_3 == 0x40) {
      return;
    }
    auVar14 = vextracti32x4_avx512f(auVar15,1);
    auStack_38 = vextracti32x4_avx512f(auVar16,1);
    auStack_28 = vextracti32x4_avx512f(auVar17,1);
    auStack_18 = vextracti32x4_avx512f(auVar18,1);
    uVar8 = param_3 - 0x80;
    if (param_3 - 0x40 < 0x40) {
LAB_004bd8f0:
      local_48 = auVar14._0_8_;
      uStack_40 = auVar14._8_8_;
      param_3 = uVar8 + 0x40;
      param_2 = pauVar9;
      param_1 = pauVar10;
      goto LAB_004bd90b;
    }
    puVar6 = *pauVar9;
    auVar3 = *(undefined1 (*) [16])(param_2[1] + 0x10);
    auVar4 = *(undefined1 (*) [16])(param_2[1] + 0x20);
    auVar5 = *(undefined1 (*) [16])(param_2[1] + 0x30);
    pauVar9 = param_2 + 2;
    *(undefined1 (*) [16])*pauVar10 = auVar14 ^ *(undefined1 (*) [16])puVar6;
    *(undefined1 (*) [16])(param_1[1] + 0x10) = auStack_38 ^ auVar3;
    *(undefined1 (*) [16])(param_1[1] + 0x20) = auStack_28 ^ auVar4;
    *(undefined1 (*) [16])(param_1[1] + 0x30) = auStack_18 ^ auVar5;
    pauVar10 = param_1 + 2;
    if (uVar8 == 0) {
      return;
    }
    auVar14 = vextracti32x4_avx512f(auVar15,2);
    auStack_38 = vextracti32x4_avx512f(auVar16,2);
    auStack_28 = vextracti32x4_avx512f(auVar17,2);
    auStack_18 = vextracti32x4_avx512f(auVar18,2);
    bVar13 = uVar8 < 0x40;
    uVar8 = param_3 - 0xc0;
    if (bVar13) goto LAB_004bd8f0;
    puVar6 = *pauVar9;
    auVar3 = *(undefined1 (*) [16])(param_2[2] + 0x10);
    auVar4 = *(undefined1 (*) [16])(param_2[2] + 0x20);
    auVar5 = *(undefined1 (*) [16])(param_2[2] + 0x30);
    pauVar9 = param_2 + 3;
    *(undefined1 (*) [16])*pauVar10 = auVar14 ^ *(undefined1 (*) [16])puVar6;
    *(undefined1 (*) [16])(param_1[2] + 0x10) = auStack_38 ^ auVar3;
    *(undefined1 (*) [16])(param_1[2] + 0x20) = auStack_28 ^ auVar4;
    *(undefined1 (*) [16])(param_1[2] + 0x30) = auStack_18 ^ auVar5;
    pauVar10 = param_1 + 3;
    if (uVar8 == 0) {
      return;
    }
    auVar14 = vextracti32x4_avx512f(auVar15,3);
    auStack_38 = vextracti32x4_avx512f(auVar16,3);
    auStack_28 = vextracti32x4_avx512f(auVar17,3);
    auStack_18 = vextracti32x4_avx512f(auVar18,3);
    bVar13 = uVar8 < 0x40;
    uVar8 = param_3 - 0x100;
    if (bVar13) goto LAB_004bd8f0;
    auVar3 = *(undefined1 (*) [16])(param_2[3] + 0x10);
    auVar4 = *(undefined1 (*) [16])(param_2[3] + 0x20);
    auVar5 = *(undefined1 (*) [16])(param_2[3] + 0x30);
    param_2 = param_2 + 4;
    *(undefined1 (*) [16])*pauVar10 = auVar14 ^ *(undefined1 (*) [16])*pauVar9;
    *(undefined1 (*) [16])(param_1[3] + 0x10) = auStack_38 ^ auVar3;
    *(undefined1 (*) [16])(param_1[3] + 0x20) = auStack_28 ^ auVar4;
    *(undefined1 (*) [16])(param_1[3] + 0x30) = auStack_18 ^ auVar5;
    param_1 = param_1 + 4;
    if (uVar8 == 0) {
      return;
    }
    auVar15 = vmovdqa32_avx512f(auVar19);
    auVar16 = vmovdqa32_avx512f(auVar20);
    auVar17 = vmovdqa32_avx512f(auVar21);
    auVar18 = vpaddd_avx512f(auVar23,auVar22);
    lVar12 = 10;
    auVar23 = vmovdqa32_avx512f(auVar18);
    param_3 = uVar8;
  } while( true );
}

