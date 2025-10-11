
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChaCha20_16x(undefined1 (*param_1) [64],undefined1 (*param_2) [64],ulong param_3,
                 undefined1 (*param_4) [16],undefined1 (*param_5) [16])

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 (*pauVar5) [64];
  long lVar6;
  long lVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
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
  undefined1 local_80 [2] [64];
  
  auVar3._4_4_ = s_expand_32_byte_k_004bafc0._4_4_;
  auVar3._0_4_ = s_expand_32_byte_k_004bafc0._0_4_;
  auVar3._8_4_ = s_expand_32_byte_k_004bafc0._8_4_;
  auVar3._12_4_ = s_expand_32_byte_k_004bafc0._12_4_;
  auVar8 = vbroadcasti32x4_avx512f(auVar3);
  auVar9 = vbroadcasti32x4_avx512f(*param_4);
  auVar10 = vbroadcasti32x4_avx512f(*(undefined1 (*) [16])(*param_4 + 4));
  auVar11 = vbroadcasti32x4_avx512f(*param_5);
  auVar12 = vpshufd_avx512f(auVar8,0);
  auVar13 = vpshufd_avx512f(auVar8,0x55);
  auVar14 = vpshufd_avx512f(auVar8,0xaa);
  auVar8 = vpshufd_avx512f(auVar8,0xff);
  auVar15 = vmovdqa64_avx512f(auVar12);
  auVar16 = vmovdqa64_avx512f(auVar13);
  auVar17 = vmovdqa64_avx512f(auVar14);
  auVar18 = vmovdqa64_avx512f(auVar8);
  auVar19 = vpshufd_avx512f(auVar9,0);
  auVar20 = vpshufd_avx512f(auVar9,0x55);
  auVar21 = vpshufd_avx512f(auVar9,0xaa);
  auVar9 = vpshufd_avx512f(auVar9,0xff);
  auVar22 = vmovdqa64_avx512f(auVar19);
  auVar23 = vmovdqa64_avx512f(auVar20);
  auVar24 = vmovdqa64_avx512f(auVar21);
  auVar25 = vmovdqa64_avx512f(auVar9);
  auVar26 = vpshufd_avx512f(auVar10,0);
  auVar27 = vpshufd_avx512f(auVar10,0x55);
  auVar28 = vpshufd_avx512f(auVar10,0xaa);
  auVar10 = vpshufd_avx512f(auVar10,0xff);
  auVar29 = vmovdqa64_avx512f(auVar26);
  auVar30 = vmovdqa64_avx512f(auVar27);
  auVar31 = vmovdqa64_avx512f(auVar28);
  auVar32 = vmovdqa64_avx512f(auVar10);
  auVar33 = vpshufd_avx512f(auVar11,0);
  auVar34 = vpshufd_avx512f(auVar11,0x55);
  auVar35 = vpshufd_avx512f(auVar11,0xaa);
  auVar11 = vpshufd_avx512f(auVar11,0xff);
  auVar33 = vpaddd_avx512f(auVar33,_DAT_004baf40);
  auVar36 = vmovdqa64_avx512f(auVar33);
  auVar37 = vmovdqa64_avx512f(auVar34);
  auVar38 = vmovdqa64_avx512f(auVar35);
  auVar39 = vmovdqa64_avx512f(auVar11);
  iVar4 = 10;
  while( true ) {
    do {
      auVar12 = vpaddd_avx512f(auVar12,auVar19);
      auVar13 = vpaddd_avx512f(auVar13,auVar20);
      auVar14 = vpaddd_avx512f(auVar14,auVar21);
      auVar8 = vpaddd_avx512f(auVar8,auVar9);
      auVar33 = vpxord_avx512f(auVar33,auVar12);
      auVar34 = vpxord_avx512f(auVar34,auVar13);
      auVar35 = vpxord_avx512f(auVar35,auVar14);
      auVar11 = vpxord_avx512f(auVar11,auVar8);
      auVar33 = vprold_avx512f(auVar33,0x10);
      auVar34 = vprold_avx512f(auVar34,0x10);
      auVar35 = vprold_avx512f(auVar35,0x10);
      auVar11 = vprold_avx512f(auVar11,0x10);
      auVar26 = vpaddd_avx512f(auVar26,auVar33);
      auVar27 = vpaddd_avx512f(auVar27,auVar34);
      auVar28 = vpaddd_avx512f(auVar28,auVar35);
      auVar10 = vpaddd_avx512f(auVar10,auVar11);
      auVar19 = vpxord_avx512f(auVar19,auVar26);
      auVar20 = vpxord_avx512f(auVar20,auVar27);
      auVar21 = vpxord_avx512f(auVar21,auVar28);
      auVar9 = vpxord_avx512f(auVar9,auVar10);
      auVar19 = vprold_avx512f(auVar19,0xc);
      auVar20 = vprold_avx512f(auVar20,0xc);
      auVar21 = vprold_avx512f(auVar21,0xc);
      auVar9 = vprold_avx512f(auVar9,0xc);
      auVar12 = vpaddd_avx512f(auVar12,auVar19);
      auVar13 = vpaddd_avx512f(auVar13,auVar20);
      auVar14 = vpaddd_avx512f(auVar14,auVar21);
      auVar8 = vpaddd_avx512f(auVar8,auVar9);
      auVar33 = vpxord_avx512f(auVar33,auVar12);
      auVar34 = vpxord_avx512f(auVar34,auVar13);
      auVar35 = vpxord_avx512f(auVar35,auVar14);
      auVar11 = vpxord_avx512f(auVar11,auVar8);
      auVar33 = vprold_avx512f(auVar33,8);
      auVar34 = vprold_avx512f(auVar34,8);
      auVar35 = vprold_avx512f(auVar35,8);
      auVar11 = vprold_avx512f(auVar11,8);
      auVar26 = vpaddd_avx512f(auVar26,auVar33);
      auVar27 = vpaddd_avx512f(auVar27,auVar34);
      auVar28 = vpaddd_avx512f(auVar28,auVar35);
      auVar10 = vpaddd_avx512f(auVar10,auVar11);
      auVar19 = vpxord_avx512f(auVar19,auVar26);
      auVar20 = vpxord_avx512f(auVar20,auVar27);
      auVar21 = vpxord_avx512f(auVar21,auVar28);
      auVar9 = vpxord_avx512f(auVar9,auVar10);
      auVar19 = vprold_avx512f(auVar19,7);
      auVar20 = vprold_avx512f(auVar20,7);
      auVar21 = vprold_avx512f(auVar21,7);
      auVar9 = vprold_avx512f(auVar9,7);
      auVar12 = vpaddd_avx512f(auVar12,auVar20);
      auVar13 = vpaddd_avx512f(auVar13,auVar21);
      auVar14 = vpaddd_avx512f(auVar14,auVar9);
      auVar8 = vpaddd_avx512f(auVar8,auVar19);
      auVar11 = vpxord_avx512f(auVar11,auVar12);
      auVar33 = vpxord_avx512f(auVar33,auVar13);
      auVar34 = vpxord_avx512f(auVar34,auVar14);
      auVar35 = vpxord_avx512f(auVar35,auVar8);
      auVar11 = vprold_avx512f(auVar11,0x10);
      auVar33 = vprold_avx512f(auVar33,0x10);
      auVar34 = vprold_avx512f(auVar34,0x10);
      auVar35 = vprold_avx512f(auVar35,0x10);
      auVar28 = vpaddd_avx512f(auVar28,auVar11);
      auVar10 = vpaddd_avx512f(auVar10,auVar33);
      auVar26 = vpaddd_avx512f(auVar26,auVar34);
      auVar27 = vpaddd_avx512f(auVar27,auVar35);
      auVar20 = vpxord_avx512f(auVar20,auVar28);
      auVar21 = vpxord_avx512f(auVar21,auVar10);
      auVar9 = vpxord_avx512f(auVar9,auVar26);
      auVar19 = vpxord_avx512f(auVar19,auVar27);
      auVar20 = vprold_avx512f(auVar20,0xc);
      auVar21 = vprold_avx512f(auVar21,0xc);
      auVar9 = vprold_avx512f(auVar9,0xc);
      auVar19 = vprold_avx512f(auVar19,0xc);
      auVar12 = vpaddd_avx512f(auVar12,auVar20);
      auVar13 = vpaddd_avx512f(auVar13,auVar21);
      auVar14 = vpaddd_avx512f(auVar14,auVar9);
      auVar8 = vpaddd_avx512f(auVar8,auVar19);
      auVar11 = vpxord_avx512f(auVar11,auVar12);
      auVar33 = vpxord_avx512f(auVar33,auVar13);
      auVar34 = vpxord_avx512f(auVar34,auVar14);
      auVar35 = vpxord_avx512f(auVar35,auVar8);
      auVar11 = vprold_avx512f(auVar11,8);
      auVar33 = vprold_avx512f(auVar33,8);
      auVar34 = vprold_avx512f(auVar34,8);
      auVar35 = vprold_avx512f(auVar35,8);
      auVar28 = vpaddd_avx512f(auVar28,auVar11);
      auVar10 = vpaddd_avx512f(auVar10,auVar33);
      auVar26 = vpaddd_avx512f(auVar26,auVar34);
      auVar27 = vpaddd_avx512f(auVar27,auVar35);
      auVar20 = vpxord_avx512f(auVar20,auVar28);
      auVar21 = vpxord_avx512f(auVar21,auVar10);
      auVar9 = vpxord_avx512f(auVar9,auVar26);
      auVar19 = vpxord_avx512f(auVar19,auVar27);
      auVar20 = vprold_avx512f(auVar20,7);
      auVar21 = vprold_avx512f(auVar21,7);
      auVar9 = vprold_avx512f(auVar9,7);
      auVar19 = vprold_avx512f(auVar19,7);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    auVar12 = vpaddd_avx512f(auVar12,auVar15);
    auVar13 = vpaddd_avx512f(auVar13,auVar16);
    auVar14 = vpaddd_avx512f(auVar14,auVar17);
    auVar8 = vpaddd_avx512f(auVar8,auVar18);
    auVar15 = vpunpckldq_avx512f(auVar12,auVar13);
    auVar16 = vpunpckldq_avx512f(auVar14,auVar8);
    auVar12 = vpunpckhdq_avx512f(auVar12,auVar13);
    auVar8 = vpunpckhdq_avx512f(auVar14,auVar8);
    auVar13 = vpunpcklqdq_avx512f(auVar15,auVar16);
    auVar14 = vpunpckhqdq_avx512f(auVar15,auVar16);
    auVar15 = vpunpcklqdq_avx512f(auVar12,auVar8);
    auVar8 = vpunpckhqdq_avx512f(auVar12,auVar8);
    auVar12 = vpaddd_avx512f(auVar19,auVar22);
    auVar16 = vpaddd_avx512f(auVar20,auVar23);
    auVar17 = vpaddd_avx512f(auVar21,auVar24);
    auVar9 = vpaddd_avx512f(auVar9,auVar25);
    auVar18 = vpunpckldq_avx512f(auVar12,auVar16);
    auVar19 = vpunpckldq_avx512f(auVar17,auVar9);
    auVar12 = vpunpckhdq_avx512f(auVar12,auVar16);
    auVar9 = vpunpckhdq_avx512f(auVar17,auVar9);
    auVar16 = vpunpcklqdq_avx512f(auVar18,auVar19);
    auVar17 = vpunpckhqdq_avx512f(auVar18,auVar19);
    auVar18 = vpunpcklqdq_avx512f(auVar12,auVar9);
    auVar9 = vpunpckhqdq_avx512f(auVar12,auVar9);
    auVar12 = vshufi32x4_avx512f(auVar13,auVar16,0x44);
    auVar13 = vshufi32x4_avx512f(auVar13,auVar16,0xee);
    auVar16 = vshufi32x4_avx512f(auVar14,auVar17,0x44);
    auVar14 = vshufi32x4_avx512f(auVar14,auVar17,0xee);
    auVar17 = vshufi32x4_avx512f(auVar15,auVar18,0x44);
    auVar15 = vshufi32x4_avx512f(auVar15,auVar18,0xee);
    auVar18 = vshufi32x4_avx512f(auVar8,auVar9,0x44);
    auVar8 = vshufi32x4_avx512f(auVar8,auVar9,0xee);
    auVar9 = vpaddd_avx512f(auVar26,auVar29);
    auVar19 = vpaddd_avx512f(auVar27,auVar30);
    auVar20 = vpaddd_avx512f(auVar28,auVar31);
    auVar10 = vpaddd_avx512f(auVar10,auVar32);
    auVar21 = vpunpckldq_avx512f(auVar9,auVar19);
    auVar26 = vpunpckldq_avx512f(auVar20,auVar10);
    auVar9 = vpunpckhdq_avx512f(auVar9,auVar19);
    auVar10 = vpunpckhdq_avx512f(auVar20,auVar10);
    auVar19 = vpunpcklqdq_avx512f(auVar21,auVar26);
    auVar20 = vpunpckhqdq_avx512f(auVar21,auVar26);
    auVar21 = vpunpcklqdq_avx512f(auVar9,auVar10);
    auVar9 = vpunpckhqdq_avx512f(auVar9,auVar10);
    auVar10 = vpaddd_avx512f(auVar33,auVar36);
    auVar26 = vpaddd_avx512f(auVar34,auVar37);
    auVar27 = vpaddd_avx512f(auVar35,auVar38);
    auVar11 = vpaddd_avx512f(auVar11,auVar39);
    auVar28 = vpunpckldq_avx512f(auVar10,auVar26);
    auVar33 = vpunpckldq_avx512f(auVar27,auVar11);
    auVar10 = vpunpckhdq_avx512f(auVar10,auVar26);
    auVar11 = vpunpckhdq_avx512f(auVar27,auVar11);
    auVar26 = vpunpcklqdq_avx512f(auVar28,auVar33);
    auVar27 = vpunpckhqdq_avx512f(auVar28,auVar33);
    auVar28 = vpunpcklqdq_avx512f(auVar10,auVar11);
    auVar10 = vpunpckhqdq_avx512f(auVar10,auVar11);
    auVar11 = vshufi32x4_avx512f(auVar19,auVar26,0x44);
    auVar19 = vshufi32x4_avx512f(auVar19,auVar26,0xee);
    auVar26 = vshufi32x4_avx512f(auVar20,auVar27,0x44);
    auVar20 = vshufi32x4_avx512f(auVar20,auVar27,0xee);
    auVar27 = vshufi32x4_avx512f(auVar21,auVar28,0x44);
    auVar21 = vshufi32x4_avx512f(auVar21,auVar28,0xee);
    auVar28 = vshufi32x4_avx512f(auVar9,auVar10,0x44);
    auVar9 = vshufi32x4_avx512f(auVar9,auVar10,0xee);
    auVar10 = vshufi32x4_avx512f(auVar12,auVar11,0x88);
    auVar11 = vshufi32x4_avx512f(auVar12,auVar11,0xdd);
    auVar12 = vshufi32x4_avx512f(auVar13,auVar19,0x88);
    auVar13 = vshufi32x4_avx512f(auVar13,auVar19,0xdd);
    auVar19 = vshufi32x4_avx512f(auVar16,auVar26,0x88);
    auVar16 = vshufi32x4_avx512f(auVar16,auVar26,0xdd);
    auVar26 = vshufi32x4_avx512f(auVar14,auVar20,0x88);
    auVar14 = vshufi32x4_avx512f(auVar14,auVar20,0xdd);
    auVar20 = vshufi32x4_avx512f(auVar17,auVar27,0x88);
    auVar17 = vshufi32x4_avx512f(auVar17,auVar27,0xdd);
    auVar27 = vshufi32x4_avx512f(auVar15,auVar21,0x88);
    auVar15 = vshufi32x4_avx512f(auVar15,auVar21,0xdd);
    auVar21 = vshufi32x4_avx512f(auVar18,auVar28,0x88);
    auVar18 = vshufi32x4_avx512f(auVar18,auVar28,0xdd);
    auVar28 = vshufi32x4_avx512f(auVar8,auVar9,0x88);
    auVar8 = vshufi32x4_avx512f(auVar8,auVar9,0xdd);
    if (param_3 < 0x400) break;
    auVar9 = vpxord_avx512f(auVar10,*param_2);
    auVar10 = vpxord_avx512f(auVar19,param_2[1]);
    auVar19 = vpxord_avx512f(auVar20,param_2[2]);
    auVar20 = vpxord_avx512f(auVar21,param_2[3]);
    auVar9 = vmovdqu32_avx512f(auVar9);
    *param_1 = auVar9;
    auVar9 = vmovdqu32_avx512f(auVar10);
    param_1[1] = auVar9;
    auVar9 = vmovdqu32_avx512f(auVar19);
    param_1[2] = auVar9;
    auVar9 = vmovdqu32_avx512f(auVar20);
    param_1[3] = auVar9;
    auVar9 = vpxord_avx512f(auVar11,param_2[4]);
    auVar10 = vpxord_avx512f(auVar16,param_2[5]);
    auVar11 = vpxord_avx512f(auVar17,param_2[6]);
    auVar16 = vpxord_avx512f(auVar18,param_2[7]);
    auVar9 = vmovdqu32_avx512f(auVar9);
    param_1[4] = auVar9;
    auVar9 = vmovdqu32_avx512f(auVar10);
    param_1[5] = auVar9;
    auVar9 = vmovdqu32_avx512f(auVar11);
    param_1[6] = auVar9;
    auVar9 = vmovdqu32_avx512f(auVar16);
    param_1[7] = auVar9;
    auVar9 = vpxord_avx512f(auVar12,param_2[8]);
    auVar10 = vpxord_avx512f(auVar26,param_2[9]);
    auVar11 = vpxord_avx512f(auVar27,param_2[10]);
    auVar12 = vpxord_avx512f(auVar28,param_2[0xb]);
    auVar9 = vmovdqu32_avx512f(auVar9);
    param_1[8] = auVar9;
    auVar9 = vmovdqu32_avx512f(auVar10);
    param_1[9] = auVar9;
    auVar9 = vmovdqu32_avx512f(auVar11);
    param_1[10] = auVar9;
    auVar9 = vmovdqu32_avx512f(auVar12);
    param_1[0xb] = auVar9;
    auVar9 = vpxord_avx512f(auVar13,param_2[0xc]);
    auVar10 = vpxord_avx512f(auVar14,param_2[0xd]);
    auVar11 = vpxord_avx512f(auVar15,param_2[0xe]);
    auVar12 = vpxord_avx512f(auVar8,param_2[0xf]);
    param_2 = param_2 + 0x10;
    auVar8 = vmovdqu32_avx512f(auVar9);
    param_1[0xc] = auVar8;
    auVar8 = vmovdqu32_avx512f(auVar10);
    param_1[0xd] = auVar8;
    auVar8 = vmovdqu32_avx512f(auVar11);
    param_1[0xe] = auVar8;
    auVar8 = vmovdqu32_avx512f(auVar12);
    param_1[0xf] = auVar8;
    param_1 = param_1 + 0x10;
    param_3 = param_3 - 0x400;
    if (param_3 == 0) {
      return;
    }
    auVar12 = vpbroadcastd_avx512f(ZEXT416((uint)s_expand_32_byte_k_004bafc0._0_4_));
    auVar13 = vpbroadcastd_avx512f(ZEXT416((uint)s_expand_32_byte_k_004bafc0._4_4_));
    auVar14 = vpbroadcastd_avx512f(ZEXT416((uint)s_expand_32_byte_k_004bafc0._8_4_));
    auVar8 = vpbroadcastd_avx512f(ZEXT416((uint)s_expand_32_byte_k_004bafc0._12_4_));
    auVar36 = vpaddd_avx512f(auVar36,_DAT_004baf80);
    auVar19 = vmovdqa64_avx512f(auVar22);
    auVar20 = vmovdqa64_avx512f(auVar23);
    auVar21 = vmovdqa64_avx512f(auVar24);
    auVar9 = vmovdqa64_avx512f(auVar25);
    auVar26 = vmovdqa64_avx512f(auVar29);
    auVar27 = vmovdqa64_avx512f(auVar30);
    auVar28 = vmovdqa64_avx512f(auVar31);
    auVar10 = vmovdqa64_avx512f(auVar32);
    auVar33 = vmovdqa64_avx512f(auVar36);
    auVar34 = vmovdqa64_avx512f(auVar37);
    auVar35 = vmovdqa64_avx512f(auVar38);
    auVar11 = vmovdqa64_avx512f(auVar39);
    auVar15 = vmovdqa64_avx512f(auVar12);
    auVar16 = vmovdqa64_avx512f(auVar13);
    auVar17 = vmovdqa64_avx512f(auVar14);
    auVar18 = vmovdqa64_avx512f(auVar8);
    iVar4 = 10;
  }
  lVar7 = 0;
  lVar6 = (long)param_1 - (long)param_2;
  pauVar5 = param_2;
  if (0x3f < param_3) {
    auVar9 = vpxord_avx512f(auVar10,*param_2);
    auVar9 = vmovdqu32_avx512f(auVar9);
    *(undefined1 (*) [64])(lVar6 + (long)param_2) = auVar9;
    if (param_3 == 0x40) {
      return;
    }
    auVar10 = vmovdqa32_avx512f(auVar19);
    pauVar5 = param_2 + 1;
    if (0x7f < param_3) {
      auVar9 = vpxord_avx512f(auVar19,*pauVar5);
      auVar9 = vmovdqu32_avx512f(auVar9);
      *(undefined1 (*) [64])(lVar6 + (long)pauVar5) = auVar9;
      if (param_3 == 0x80) {
        return;
      }
      auVar10 = vmovdqa32_avx512f(auVar20);
      pauVar5 = param_2 + 2;
      if (0xbf < param_3) {
        auVar9 = vpxord_avx512f(auVar20,*pauVar5);
        auVar9 = vmovdqu32_avx512f(auVar9);
        *(undefined1 (*) [64])(lVar6 + (long)pauVar5) = auVar9;
        if (param_3 == 0xc0) {
          return;
        }
        auVar10 = vmovdqa32_avx512f(auVar21);
        pauVar5 = param_2 + 3;
        if (0xff < param_3) {
          auVar9 = vpxord_avx512f(auVar21,*pauVar5);
          auVar9 = vmovdqu32_avx512f(auVar9);
          *(undefined1 (*) [64])(lVar6 + (long)pauVar5) = auVar9;
          if (param_3 == 0x100) {
            return;
          }
          auVar10 = vmovdqa32_avx512f(auVar11);
          pauVar5 = param_2 + 4;
          if (0x13f < param_3) {
            auVar9 = vpxord_avx512f(auVar11,*pauVar5);
            auVar9 = vmovdqu32_avx512f(auVar9);
            *(undefined1 (*) [64])(lVar6 + (long)pauVar5) = auVar9;
            if (param_3 == 0x140) {
              return;
            }
            auVar10 = vmovdqa32_avx512f(auVar16);
            pauVar5 = param_2 + 5;
            if (0x17f < param_3) {
              auVar9 = vpxord_avx512f(auVar16,*pauVar5);
              auVar9 = vmovdqu32_avx512f(auVar9);
              *(undefined1 (*) [64])(lVar6 + (long)pauVar5) = auVar9;
              if (param_3 == 0x180) {
                return;
              }
              auVar10 = vmovdqa32_avx512f(auVar17);
              pauVar5 = param_2 + 6;
              if (0x1bf < param_3) {
                auVar9 = vpxord_avx512f(auVar17,*pauVar5);
                auVar9 = vmovdqu32_avx512f(auVar9);
                *(undefined1 (*) [64])(lVar6 + (long)pauVar5) = auVar9;
                if (param_3 == 0x1c0) {
                  return;
                }
                auVar10 = vmovdqa32_avx512f(auVar18);
                pauVar5 = param_2 + 7;
                if (0x1ff < param_3) {
                  auVar9 = vpxord_avx512f(auVar18,*pauVar5);
                  auVar9 = vmovdqu32_avx512f(auVar9);
                  *(undefined1 (*) [64])(lVar6 + (long)pauVar5) = auVar9;
                  if (param_3 == 0x200) {
                    return;
                  }
                  auVar10 = vmovdqa32_avx512f(auVar12);
                  pauVar5 = param_2 + 8;
                  if (0x23f < param_3) {
                    auVar9 = vpxord_avx512f(auVar12,*pauVar5);
                    auVar9 = vmovdqu32_avx512f(auVar9);
                    *(undefined1 (*) [64])(lVar6 + (long)pauVar5) = auVar9;
                    if (param_3 == 0x240) {
                      return;
                    }
                    auVar10 = vmovdqa32_avx512f(auVar26);
                    pauVar5 = param_2 + 9;
                    if (0x27f < param_3) {
                      auVar9 = vpxord_avx512f(auVar26,*pauVar5);
                      auVar9 = vmovdqu32_avx512f(auVar9);
                      *(undefined1 (*) [64])(lVar6 + (long)pauVar5) = auVar9;
                      if (param_3 == 0x280) {
                        return;
                      }
                      auVar10 = vmovdqa32_avx512f(auVar27);
                      pauVar5 = param_2 + 10;
                      if (0x2bf < param_3) {
                        auVar9 = vpxord_avx512f(auVar27,*pauVar5);
                        auVar9 = vmovdqu32_avx512f(auVar9);
                        *(undefined1 (*) [64])(lVar6 + (long)pauVar5) = auVar9;
                        if (param_3 == 0x2c0) {
                          return;
                        }
                        auVar10 = vmovdqa32_avx512f(auVar28);
                        pauVar5 = param_2 + 0xb;
                        if (0x2ff < param_3) {
                          auVar9 = vpxord_avx512f(auVar28,*pauVar5);
                          auVar9 = vmovdqu32_avx512f(auVar9);
                          *(undefined1 (*) [64])(lVar6 + (long)pauVar5) = auVar9;
                          if (param_3 == 0x300) {
                            return;
                          }
                          auVar10 = vmovdqa32_avx512f(auVar13);
                          pauVar5 = param_2 + 0xc;
                          if (0x33f < param_3) {
                            auVar9 = vpxord_avx512f(auVar13,*pauVar5);
                            auVar9 = vmovdqu32_avx512f(auVar9);
                            *(undefined1 (*) [64])(lVar6 + (long)pauVar5) = auVar9;
                            if (param_3 == 0x340) {
                              return;
                            }
                            auVar10 = vmovdqa32_avx512f(auVar14);
                            pauVar5 = param_2 + 0xd;
                            if (0x37f < param_3) {
                              auVar9 = vpxord_avx512f(auVar14,*pauVar5);
                              auVar9 = vmovdqu32_avx512f(auVar9);
                              *(undefined1 (*) [64])(lVar6 + (long)pauVar5) = auVar9;
                              if (param_3 == 0x380) {
                                return;
                              }
                              auVar10 = vmovdqa32_avx512f(auVar15);
                              pauVar5 = param_2 + 0xe;
                              if (0x3bf < param_3) {
                                auVar9 = vpxord_avx512f(auVar15,*pauVar5);
                                auVar9 = vmovdqu32_avx512f(auVar9);
                                *(undefined1 (*) [64])(lVar6 + (long)pauVar5) = auVar9;
                                if (param_3 == 0x3c0) {
                                  return;
                                }
                                auVar10 = vmovdqa32_avx512f(auVar8);
                                pauVar5 = param_2 + 0xf;
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
  local_80[0] = vmovdqa32_avx512f(auVar10);
  param_3 = param_3 & 0x3f;
  do {
    pbVar1 = *pauVar5 + lVar7;
    pbVar2 = local_80[0] + lVar7;
    lVar7 = lVar7 + 1;
    *(byte *)((long)pauVar5 + lVar7 + lVar6 + -1) = *pbVar1 ^ *pbVar2;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  auVar8 = vpxord_avx512f(auVar10,auVar10);
  vmovdqa32_avx512f(auVar8);
  return;
}

