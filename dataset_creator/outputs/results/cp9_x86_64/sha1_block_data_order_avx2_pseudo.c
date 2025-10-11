
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha1_block_data_order_avx2(uint *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 local_300 [32];
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  undefined1 local_2a0 [32];
  undefined1 local_280 [32];
  undefined1 local_260 [32];
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  
  pauVar15 = param_2 + param_3 * 4;
  uVar6 = *param_1;
  pauVar16 = param_2 + 4;
  if (pauVar15 <= param_2 + 4) {
    pauVar16 = param_2;
  }
  uVar5 = param_1[1];
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  uVar12 = param_1[4];
  pauVar14 = param_2 + 4;
  auVar20._0_16_ = ZEXT116(0) * *pauVar16 + ZEXT116(1) * *param_2;
  auVar20._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * *pauVar16;
  auVar24._0_16_ = ZEXT116(0) * pauVar16[1] + ZEXT116(1) * param_2[1];
  auVar24._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * pauVar16[1];
  auVar17 = vpshufb_avx2(auVar20,_DAT_0056ccc0);
  auVar25._0_16_ = ZEXT116(0) * pauVar16[2] + ZEXT116(1) * param_2[2];
  auVar25._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * pauVar16[2];
  auVar19 = vpshufb_avx2(auVar24,_DAT_0056ccc0);
  auVar23._0_16_ = ZEXT116(0) * pauVar16[3] + ZEXT116(1) * param_2[3];
  auVar23._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * pauVar16[3];
  auVar24 = vpshufb_avx2(auVar25,_DAT_0056ccc0);
  auVar25 = vpshufb_avx2(auVar23,_DAT_0056ccc0);
  local_300 = vpaddd_avx2(auVar17,_K_XX_XX);
  local_2e0 = vpaddd_avx2(auVar19,_K_XX_XX);
  local_2c0 = vpaddd_avx2(auVar24,_K_XX_XX);
  local_2a0 = vpaddd_avx2(auVar25,_K_XX_XX);
  auVar20 = vpalignr_avx2(auVar19,auVar17,8);
  auVar23 = vpsrldq_avx2(auVar25,4);
  auVar20 = auVar20 ^ auVar17 ^ auVar23 ^ auVar24;
  auVar23 = vpsrld_avx2(auVar20,0x1f);
  auVar29 = vpslldq_avx2(auVar20,0xc);
  auVar20 = vpaddd_avx2(auVar20,auVar20);
  auVar27 = vpsrld_avx2(auVar29,0x1e);
  auVar20 = vpor_avx2(auVar20,auVar23);
  auVar30 = vpslld_avx2(auVar29,2);
  auVar30 = auVar20 ^ auVar27 ^ auVar30;
  local_280 = vpaddd_avx2(auVar30,_K_XX_XX);
  auVar20 = vpalignr_avx2(auVar24,auVar19,8);
  auVar23 = vpsrldq_avx2(auVar30,4);
  auVar20 = auVar20 ^ auVar19 ^ auVar23 ^ auVar25;
  auVar23 = vpsrld_avx2(auVar20,0x1f);
  auVar29 = vpslldq_avx2(auVar20,0xc);
  auVar20 = vpaddd_avx2(auVar20,auVar20);
  auVar27 = vpsrld_avx2(auVar29,0x1e);
  auVar20 = vpor_avx2(auVar20,auVar23);
  auVar29 = vpslld_avx2(auVar29,2);
  auVar29 = auVar20 ^ auVar27 ^ auVar29;
  local_260 = vpaddd_avx2(auVar29,_DAT_0056cc60);
  auVar20 = vpalignr_avx2(auVar25,auVar24,8);
  auVar23 = vpsrldq_avx2(auVar29,4);
  auVar20 = auVar20 ^ auVar24 ^ auVar23 ^ auVar30;
  auVar23 = vpsrld_avx2(auVar20,0x1f);
  auVar27 = vpslldq_avx2(auVar20,0xc);
  auVar20 = vpaddd_avx2(auVar20,auVar20);
  auVar28 = vpsrld_avx2(auVar27,0x1e);
  auVar20 = vpor_avx2(auVar20,auVar23);
  auVar27 = vpslld_avx2(auVar27,2);
  auVar27 = auVar20 ^ auVar28 ^ auVar27;
  local_240 = vpaddd_avx2(auVar27,_DAT_0056cc60);
  auVar20 = vpalignr_avx2(auVar30,auVar25,8);
  auVar23 = vpsrldq_avx2(auVar27,4);
  auVar20 = auVar20 ^ auVar25 ^ auVar23 ^ auVar29;
  auVar23 = vpsrld_avx2(auVar20,0x1f);
  auVar31 = vpslldq_avx2(auVar20,0xc);
  auVar20 = vpaddd_avx2(auVar20,auVar20);
  auVar28 = vpsrld_avx2(auVar31,0x1e);
  auVar20 = vpor_avx2(auVar20,auVar23);
  auVar23 = vpslld_avx2(auVar31,2);
  auVar23 = auVar20 ^ auVar28 ^ auVar23;
  local_220 = vpaddd_avx2(auVar23,_DAT_0056cc60);
  auVar20 = _DAT_0056cc60;
  do {
    uVar9 = uVar5 >> 2 | uVar5 << 0x1e;
    auVar28 = vpalignr_avx2(auVar23,auVar27,8);
    uVar10 = uVar6 >> 2 | uVar6 << 0x1e;
    auVar28 = auVar17 ^ auVar30 ^ auVar19 ^ auVar28;
    uVar12 = uVar12 + local_300._0_4_ + (uVar5 & uVar7 ^ ~uVar5 & uVar8) +
             (uVar6 >> 0x1b | uVar6 << 5);
    auVar31 = vpsrld_avx2(auVar28,0x1e);
    auVar17 = vpslld_avx2(auVar28,2);
    uVar5 = uVar12 >> 2 | uVar12 * 0x40000000;
    auVar26 = vpor_avx2(auVar17,auVar31);
    uVar8 = uVar8 + local_300._4_4_ + (uVar6 & uVar9 ^ ~uVar6 & uVar7) +
            (uVar12 >> 0x1b | uVar12 * 0x20);
    auVar28 = vpaddd_avx2(auVar26,auVar20);
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + local_300._8_4_ + (uVar12 & uVar10 ^ ~uVar12 & uVar9) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + local_300._12_4_ + (uVar8 & uVar5 ^ ~uVar8 & uVar10) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = uVar10 + local_2e0._0_4_ + (uVar6 & uVar13 ^ ~uVar6 & uVar5) +
             (uVar8 >> 0x1b | uVar8 * 0x20);
    auVar17 = vpalignr_avx2(auVar26,auVar23,8);
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    auVar17 = auVar19 ^ auVar29 ^ auVar24 ^ auVar17;
    uVar6 = uVar5 + local_2e0._4_4_ + (uVar8 & uVar12 ^ ~uVar8 & uVar13) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    auVar31 = vpsrld_avx2(auVar17,0x1e);
    auVar19 = vpslld_avx2(auVar17,2);
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    auVar19 = vpor_avx2(auVar19,auVar31);
    uVar10 = uVar13 + local_2e0._8_4_ + (uVar10 & uVar7 ^ ~uVar10 & uVar12) +
             (uVar6 >> 0x1b | uVar6 * 0x20);
    auVar31 = vpaddd_avx2(auVar19,auVar20);
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + local_2e0._12_4_ + (uVar6 & uVar9 ^ ~uVar6 & uVar7) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + local_2c0._0_4_ + (uVar10 & uVar11 ^ ~uVar10 & uVar9) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + local_2c0._4_4_ + (uVar8 & uVar5 ^ ~uVar8 & uVar11) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    auVar20 = vpalignr_avx2(auVar19,auVar26,8);
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    auVar20 = auVar24 ^ auVar27 ^ auVar25 ^ auVar20;
    uVar10 = uVar11 + local_2c0._8_4_ + (uVar6 & uVar13 ^ ~uVar6 & uVar5) +
             (uVar8 >> 0x1b | uVar8 * 0x20);
    auVar24 = vpsrld_avx2(auVar20,0x1e);
    auVar20 = vpslld_avx2(auVar20,2);
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    auVar24 = vpor_avx2(auVar20,auVar24);
    uVar6 = uVar5 + local_2c0._12_4_ + (uVar8 & uVar12 ^ ~uVar8 & uVar13) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    auVar32 = vpaddd_avx2(auVar24,_DAT_0056cc80);
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + local_2a0._0_4_ + (uVar10 & uVar7 ^ ~uVar10 & uVar12) +
             (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + local_2a0._4_4_ + (uVar6 & uVar9 ^ ~uVar6 & uVar7) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + local_2a0._8_4_ + (uVar10 & uVar11 ^ ~uVar10 & uVar9) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
    auVar20 = vpalignr_avx2(auVar24,auVar19,8);
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    auVar20 = auVar25 ^ auVar23 ^ auVar30 ^ auVar20;
    uVar8 = uVar9 + local_2a0._12_4_ + (uVar8 & uVar5 ^ ~uVar8 & uVar11) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    auVar17 = vpsrld_avx2(auVar20,0x1e);
    auVar20 = vpslld_avx2(auVar20,2);
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    auVar17 = vpor_avx2(auVar20,auVar17);
    uVar10 = uVar11 + local_280._0_4_ + (uVar6 & uVar13 ^ ~uVar6 & uVar5) +
             (uVar8 >> 0x1b | uVar8 * 0x20);
    auVar1 = vpaddd_avx2(auVar17,_DAT_0056cc80);
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + local_280._4_4_ + (uVar8 & uVar12 ^ ~uVar8 & uVar13) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + local_280._8_4_ + (uVar10 & uVar7 ^ ~uVar10 & uVar12) +
             (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + local_280._12_4_ + (uVar6 & uVar9 ^ ~uVar6 & uVar7) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    auVar20 = vpalignr_avx2(auVar17,auVar24,8);
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    auVar20 = auVar30 ^ auVar26 ^ auVar29 ^ auVar20;
    uVar6 = uVar7 + local_260._0_4_ + (uVar10 ^ uVar11 ^ uVar9) + (uVar8 >> 0x1b | uVar8 * 0x20);
    auVar25 = vpsrld_avx2(auVar20,0x1e);
    auVar20 = vpslld_avx2(auVar20,2);
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + local_260._4_4_ + (uVar8 ^ uVar5 ^ uVar11) + (uVar6 >> 0x1b | uVar6 * 0x20);
    auVar25 = vpor_avx2(auVar20,auVar25);
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    auVar30 = vpaddd_avx2(auVar25,_DAT_0056cc80);
    uVar10 = (uVar6 ^ uVar13 ^ uVar5) + uVar11 + local_260._8_4_ + (uVar8 >> 0x1b | uVar8 * 0x20);
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + local_260._12_4_ + (uVar8 ^ uVar12 ^ uVar13) + (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + local_240._0_4_ + (uVar10 ^ uVar7 ^ uVar12) + (uVar6 >> 0x1b | uVar6 * 0x20);
    auVar20 = vpalignr_avx2(auVar25,auVar17,8);
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    auVar20 = auVar29 ^ auVar19 ^ auVar27 ^ auVar20;
    uVar8 = uVar12 + local_240._4_4_ + (uVar6 ^ uVar9 ^ uVar7) + (uVar10 >> 0x1b | uVar10 * 0x20);
    auVar29 = vpsrld_avx2(auVar20,0x1e);
    auVar20 = vpslld_avx2(auVar20,2);
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + local_240._8_4_ + (uVar10 ^ uVar11 ^ uVar9) + (uVar8 >> 0x1b | uVar8 * 0x20);
    auVar2 = vpor_avx2(auVar20,auVar29);
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    auVar29 = vpaddd_avx2(auVar2,_DAT_0056cc80);
    uVar8 = uVar9 + local_240._12_4_ + (uVar8 ^ uVar5 ^ uVar11) + (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = (uVar6 ^ uVar13 ^ uVar5) + uVar11 + local_220._0_4_ + (uVar8 >> 0x1b | uVar8 * 0x20);
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + local_220._4_4_ + (uVar8 ^ uVar12 ^ uVar13) + (uVar10 >> 0x1b | uVar10 * 0x20);
    auVar20 = vpalignr_avx2(auVar2,auVar25,8);
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    auVar20 = auVar27 ^ auVar24 ^ auVar23 ^ auVar20;
    uVar10 = uVar13 + local_220._8_4_ + (uVar10 ^ uVar7 ^ uVar12) + (uVar6 >> 0x1b | uVar6 * 0x20);
    auVar27 = vpsrld_avx2(auVar20,0x1e);
    auVar20 = vpslld_avx2(auVar20,2);
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + local_220._12_4_ + (uVar6 ^ uVar9 ^ uVar7) + (uVar10 >> 0x1b | uVar10 * 0x20);
    auVar3 = vpor_avx2(auVar20,auVar27);
    local_200 = auVar28._0_4_;
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    auVar27 = vpaddd_avx2(auVar3,_DAT_0056cc80);
    uVar6 = uVar7 + local_200 + (uVar10 ^ uVar11 ^ uVar9) + (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_1fc = auVar28._4_4_;
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + iStack_1fc + (uVar8 ^ uVar5 ^ uVar11) + (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_1f8 = auVar28._8_4_;
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = (uVar6 ^ uVar13 ^ uVar5) + uVar11 + iStack_1f8 + (uVar8 >> 0x1b | uVar8 * 0x20);
    auVar20 = vpalignr_avx2(auVar3,auVar2,8);
    iStack_1f4 = auVar28._12_4_;
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    auVar20 = auVar23 ^ auVar17 ^ auVar26 ^ auVar20;
    uVar6 = uVar5 + iStack_1f4 + (uVar8 ^ uVar12 ^ uVar13) + (uVar10 >> 0x1b | uVar10 * 0x20);
    local_1e0 = auVar31._0_4_;
    auVar23 = vpsrld_avx2(auVar20,0x1e);
    auVar20 = vpslld_avx2(auVar20,2);
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + local_1e0 + (uVar10 ^ uVar7 ^ uVar12) + (uVar6 >> 0x1b | uVar6 * 0x20);
    auVar4 = vpor_avx2(auVar20,auVar23);
    iStack_1dc = auVar31._4_4_;
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    auVar23 = vpaddd_avx2(auVar4,_DAT_0056cca0);
    uVar8 = uVar12 + iStack_1dc + (uVar6 ^ uVar9 ^ uVar7) + (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_1d8 = auVar31._8_4_;
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + iStack_1d8 + (uVar10 ^ uVar11 ^ uVar9) + (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_1d4 = auVar31._12_4_;
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + iStack_1d4 + (uVar8 ^ uVar5 ^ uVar11) + (uVar6 >> 0x1b | uVar6 * 0x20);
    auVar20 = vpalignr_avx2(auVar4,auVar3,8);
    local_1c0 = auVar32._0_4_;
    auVar20 = auVar26 ^ auVar25 ^ auVar19 ^ auVar20;
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    auVar26 = vpsrld_avx2(auVar20,0x1e);
    auVar20 = vpslld_avx2(auVar20,2);
    uVar10 = ((uVar6 ^ uVar13) & (uVar13 ^ uVar5) ^ uVar13) + uVar11 + local_1c0 +
             (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_1bc = auVar32._4_4_;
    auVar18 = vpor_avx2(auVar20,auVar26);
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    auVar26 = vpaddd_avx2(auVar18,_DAT_0056cca0);
    uVar6 = uVar5 + iStack_1bc + ((uVar8 ^ uVar12) & (uVar12 ^ uVar13) ^ uVar12) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_1b8 = auVar32._8_4_;
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + iStack_1b8 + ((uVar10 ^ uVar7) & (uVar7 ^ uVar12) ^ uVar7) +
             (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_1b4 = auVar32._12_4_;
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + iStack_1b4 + ((uVar6 ^ uVar9) & (uVar9 ^ uVar7) ^ uVar9) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    local_1a0 = auVar1._0_4_;
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + local_1a0 + ((uVar10 ^ uVar11) & (uVar11 ^ uVar9) ^ uVar11) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
    auVar20 = vpalignr_avx2(auVar18,auVar4,8);
    iStack_19c = auVar1._4_4_;
    auVar20 = auVar19 ^ auVar2 ^ auVar24 ^ auVar20;
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    auVar19 = vpsrld_avx2(auVar20,0x1e);
    auVar20 = vpslld_avx2(auVar20,2);
    uVar8 = uVar9 + iStack_19c + ((uVar8 ^ uVar5) & (uVar5 ^ uVar11) ^ uVar5) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_198 = auVar1._8_4_;
    auVar19 = vpor_avx2(auVar20,auVar19);
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    auVar2 = vpaddd_avx2(auVar19,_DAT_0056cca0);
    uVar10 = ((uVar6 ^ uVar13) & (uVar13 ^ uVar5) ^ uVar13) + uVar11 + iStack_198 +
             (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_194 = auVar1._12_4_;
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + iStack_194 + ((uVar8 ^ uVar12) & (uVar12 ^ uVar13) ^ uVar12) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    local_180 = auVar30._0_4_;
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + local_180 + ((uVar10 ^ uVar7) & (uVar7 ^ uVar12) ^ uVar7) +
             (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_17c = auVar30._4_4_;
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + iStack_17c + ((uVar6 ^ uVar9) & (uVar9 ^ uVar7) ^ uVar9) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    auVar20 = vpalignr_avx2(auVar19,auVar18,8);
    iStack_178 = auVar30._8_4_;
    auVar20 = auVar24 ^ auVar3 ^ auVar17 ^ auVar20;
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    auVar24 = vpsrld_avx2(auVar20,0x1e);
    auVar20 = vpslld_avx2(auVar20,2);
    uVar6 = uVar7 + iStack_178 + ((uVar10 ^ uVar11) & (uVar11 ^ uVar9) ^ uVar11) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_174 = auVar30._12_4_;
    auVar21 = vpor_avx2(auVar20,auVar24);
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    auVar3 = vpaddd_avx2(auVar21,_DAT_0056cca0);
    uVar8 = uVar9 + iStack_174 + ((uVar8 ^ uVar5) & (uVar5 ^ uVar11) ^ uVar5) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    local_160 = auVar29._0_4_;
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = ((uVar6 ^ uVar13) & (uVar13 ^ uVar5) ^ uVar13) + uVar11 + local_160 +
             (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_15c = auVar29._4_4_;
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + iStack_15c + ((uVar8 ^ uVar12) & (uVar12 ^ uVar13) ^ uVar12) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_158 = auVar29._8_4_;
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + iStack_158 + ((uVar10 ^ uVar7) & (uVar7 ^ uVar12) ^ uVar7) +
             (uVar6 >> 0x1b | uVar6 * 0x20);
    auVar20 = vpalignr_avx2(auVar21,auVar19,8);
    iStack_154 = auVar29._12_4_;
    auVar20 = auVar17 ^ auVar4 ^ auVar25 ^ auVar20;
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    auVar24 = vpsrld_avx2(auVar20,0x1e);
    auVar20 = vpslld_avx2(auVar20,2);
    uVar8 = uVar12 + iStack_154 + ((uVar6 ^ uVar9) & (uVar9 ^ uVar7) ^ uVar9) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    local_140 = auVar27._0_4_;
    auVar22 = vpor_avx2(auVar20,auVar24);
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    auVar4 = vpaddd_avx2(auVar22,_DAT_0056cca0);
    uVar6 = uVar7 + local_140 + ((uVar10 ^ uVar11) & (uVar11 ^ uVar9) ^ uVar11) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_13c = auVar27._4_4_;
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + iStack_13c + ((uVar8 ^ uVar5) & (uVar5 ^ uVar11) ^ uVar5) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_138 = auVar27._8_4_;
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = ((uVar6 ^ uVar13) & (uVar13 ^ uVar5) ^ uVar13) + uVar11 + iStack_138 +
             (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_134 = auVar27._12_4_;
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + iStack_134 + ((uVar8 ^ uVar12) & (uVar12 ^ uVar13) ^ uVar12) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    local_120 = auVar23._0_4_;
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + local_120 + (uVar10 ^ uVar7 ^ uVar12) + (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_11c = auVar23._4_4_;
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + iStack_11c + (uVar6 ^ uVar9 ^ uVar7) + (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_118 = auVar23._8_4_;
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + iStack_118 + (uVar10 ^ uVar11 ^ uVar9) + (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_114 = auVar23._12_4_;
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + iStack_114 + (uVar8 ^ uVar5 ^ uVar11) + (uVar6 >> 0x1b | uVar6 * 0x20);
    local_100 = auVar26._0_4_;
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = (uVar6 ^ uVar13 ^ uVar5) + uVar11 + local_100 + (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_fc = auVar26._4_4_;
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + iStack_fc + (uVar8 ^ uVar12 ^ uVar13) + (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_f8 = auVar26._8_4_;
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + iStack_f8 + (uVar10 ^ uVar7 ^ uVar12) + (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_f4 = auVar26._12_4_;
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + iStack_f4 + (uVar6 ^ uVar9 ^ uVar7) + (uVar10 >> 0x1b | uVar10 * 0x20);
    local_e0 = auVar2._0_4_;
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + local_e0 + (uVar10 ^ uVar11 ^ uVar9) + (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_dc = auVar2._4_4_;
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + iStack_dc + (uVar8 ^ uVar5 ^ uVar11) + (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_d8 = auVar2._8_4_;
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = (uVar6 ^ uVar13 ^ uVar5) + uVar11 + iStack_d8 + (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_d4 = auVar2._12_4_;
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + iStack_d4 + (uVar8 ^ uVar12 ^ uVar13) + (uVar10 >> 0x1b | uVar10 * 0x20);
    local_c0 = auVar3._0_4_;
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + local_c0 + (uVar10 ^ uVar7 ^ uVar12) + (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_bc = auVar3._4_4_;
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + iStack_bc + (uVar6 ^ uVar9 ^ uVar7) + (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_b8 = auVar3._8_4_;
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + iStack_b8 + (uVar10 ^ uVar11 ^ uVar9) + (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_b4 = auVar3._12_4_;
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + iStack_b4 + (uVar8 ^ uVar5 ^ uVar11) + (uVar6 >> 0x1b | uVar6 * 0x20);
    local_a0 = auVar4._0_4_;
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = (uVar6 ^ uVar13 ^ uVar5) + uVar11 + local_a0 + (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_9c = auVar4._4_4_;
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + iStack_9c + (uVar8 ^ uVar12 ^ uVar13) + (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_98 = auVar4._8_4_;
    uVar5 = uVar13 + iStack_98 + (uVar10 ^ uVar7 ^ uVar12) + (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_94 = auVar4._12_4_;
    pauVar16 = pauVar14 + 8;
    if (pauVar15 <= pauVar14 + 8) {
      pauVar16 = pauVar14;
    }
    uVar8 = uVar12 + iStack_94 + (uVar6 ^ uVar9 ^ uVar7) + (uVar5 >> 0x1b | uVar5 * 0x20) + *param_1
    ;
    uVar5 = uVar5 + param_1[1];
    uVar12 = (uVar6 >> 2 | uVar6 * 0x40000000) + param_1[2];
    *param_1 = uVar8;
    uVar9 = uVar9 + param_1[3];
    param_1[1] = uVar5;
    uVar6 = param_1[4];
    param_1[2] = uVar12;
    param_1[3] = uVar9;
    param_1[4] = uVar7 + uVar6;
    auVar20 = _DAT_0056cc60;
    if (pauVar14 == pauVar15) {
      return;
    }
    if (pauVar14 + 8 <= pauVar15) {
      auVar18._0_16_ = ZEXT116(0) * *pauVar16 + ZEXT116(1) * pauVar14[4];
      auVar18._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * *pauVar16;
      auVar19._0_16_ = ZEXT116(0) * pauVar16[1] + ZEXT116(1) * pauVar14[5];
      auVar19._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * pauVar16[1];
      auVar21._0_16_ = ZEXT116(0) * pauVar16[2] + ZEXT116(1) * pauVar14[6];
      auVar21._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * pauVar16[2];
      auVar22._0_16_ = ZEXT116(0) * pauVar16[3] + ZEXT116(1) * pauVar14[7];
      auVar22._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * pauVar16[3];
    }
    uVar10 = uVar5 >> 2 | uVar5 * 0x40000000;
    pauVar14 = pauVar14 + 8;
    uVar11 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar5 = uVar7 + uVar6 + local_300._16_4_ + (uVar5 & uVar12 ^ ~uVar5 & uVar9) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
    uVar6 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar7 = uVar9 + local_300._20_4_ + (uVar8 & uVar10 ^ ~uVar8 & uVar12) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar13 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar5 = uVar12 + local_300._24_4_ + (uVar5 & uVar11 ^ ~uVar5 & uVar10) +
            (uVar7 >> 0x1b | uVar7 * 0x20);
    uVar8 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar12 = uVar10 + local_300._28_4_ + (uVar7 & uVar6 ^ ~uVar7 & uVar11) +
             (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar7 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar5 = uVar11 + local_2e0._16_4_ + (uVar5 & uVar13 ^ ~uVar5 & uVar6) +
            (uVar12 >> 0x1b | uVar12 * 0x20);
    uVar9 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar6 = uVar6 + local_2e0._20_4_ + (uVar12 & uVar8 ^ ~uVar12 & uVar13) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar10 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar12 = uVar13 + local_2e0._24_4_ + (uVar5 & uVar7 ^ ~uVar5 & uVar8) +
             (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar5 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar8 = uVar8 + local_2e0._28_4_ + (uVar6 & uVar9 ^ ~uVar6 & uVar7) +
            (uVar12 >> 0x1b | uVar12 * 0x20);
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + local_2c0._16_4_ + (uVar12 & uVar10 ^ ~uVar12 & uVar9) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + local_2c0._20_4_ + (uVar8 & uVar5 ^ ~uVar8 & uVar10) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = uVar10 + local_2c0._24_4_ + (uVar6 & uVar13 ^ ~uVar6 & uVar5) +
             (uVar8 >> 0x1b | uVar8 * 0x20);
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + local_2c0._28_4_ + (uVar8 & uVar12 ^ ~uVar8 & uVar13) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + local_2a0._16_4_ + (uVar10 & uVar7 ^ ~uVar10 & uVar12) +
             (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + local_2a0._20_4_ + (uVar6 & uVar9 ^ ~uVar6 & uVar7) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + local_2a0._24_4_ + (uVar10 & uVar11 ^ ~uVar10 & uVar9) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + local_2a0._28_4_ + (uVar8 & uVar5 ^ ~uVar8 & uVar11) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = uVar11 + local_280._16_4_ + (uVar6 & uVar13 ^ ~uVar6 & uVar5) +
             (uVar8 >> 0x1b | uVar8 * 0x20);
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + local_280._20_4_ + (uVar8 & uVar12 ^ ~uVar8 & uVar13) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + local_280._24_4_ + (uVar10 & uVar7 ^ ~uVar10 & uVar12) +
             (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + local_280._28_4_ + (uVar6 & uVar9 ^ ~uVar6 & uVar7) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + local_260._16_4_ + (uVar10 ^ uVar11 ^ uVar9) + (uVar8 >> 0x1b | uVar8 * 0x20);
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + local_260._20_4_ + (uVar8 ^ uVar5 ^ uVar11) + (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = (uVar6 ^ uVar13 ^ uVar5) + uVar11 + local_260._24_4_ + (uVar8 >> 0x1b | uVar8 * 0x20);
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + local_260._28_4_ + (uVar8 ^ uVar12 ^ uVar13) + (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + local_240._16_4_ + (uVar10 ^ uVar7 ^ uVar12) + (uVar6 >> 0x1b | uVar6 * 0x20);
    auVar17 = vpshufb_avx2(auVar18,_DAT_0056ccc0);
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + local_240._20_4_ + (uVar6 ^ uVar9 ^ uVar7) + (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + local_240._24_4_ + (uVar10 ^ uVar11 ^ uVar9) + (uVar8 >> 0x1b | uVar8 * 0x20);
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + local_240._28_4_ + (uVar8 ^ uVar5 ^ uVar11) + (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = (uVar6 ^ uVar13 ^ uVar5) + uVar11 + local_220._16_4_ + (uVar8 >> 0x1b | uVar8 * 0x20);
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + local_220._20_4_ + (uVar8 ^ uVar12 ^ uVar13) + (uVar10 >> 0x1b | uVar10 * 0x20);
    auVar19 = vpshufb_avx2(auVar19,_DAT_0056ccc0);
    local_300 = vpaddd_avx2(auVar17,_K_XX_XX);
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + local_220._24_4_ + (uVar10 ^ uVar7 ^ uVar12) + (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + local_220._28_4_ + (uVar6 ^ uVar9 ^ uVar7) + (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_1f0 = auVar28._16_4_;
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + iStack_1f0 + (uVar10 ^ uVar11 ^ uVar9) + (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_1ec = auVar28._20_4_;
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + iStack_1ec + (uVar8 ^ uVar5 ^ uVar11) + (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_1e8 = auVar28._24_4_;
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = (uVar6 ^ uVar13 ^ uVar5) + uVar11 + iStack_1e8 + (uVar8 >> 0x1b | uVar8 * 0x20);
    auVar24 = vpshufb_avx2(auVar21,_DAT_0056ccc0);
    local_2e0 = vpaddd_avx2(auVar19,_K_XX_XX);
    iStack_1e4 = auVar28._28_4_;
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + iStack_1e4 + (uVar8 ^ uVar12 ^ uVar13) + (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_1d0 = auVar31._16_4_;
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + iStack_1d0 + (uVar10 ^ uVar7 ^ uVar12) + (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_1cc = auVar31._20_4_;
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + iStack_1cc + (uVar6 ^ uVar9 ^ uVar7) + (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_1c8 = auVar31._24_4_;
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + iStack_1c8 + (uVar10 ^ uVar11 ^ uVar9) + (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_1c4 = auVar31._28_4_;
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + iStack_1c4 + (uVar8 ^ uVar5 ^ uVar11) + (uVar6 >> 0x1b | uVar6 * 0x20);
    auVar25 = vpshufb_avx2(auVar22,_DAT_0056ccc0);
    local_2c0 = vpaddd_avx2(auVar24,_K_XX_XX);
    iStack_1b0 = auVar32._16_4_;
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = ((uVar6 ^ uVar13) & (uVar13 ^ uVar5) ^ uVar13) + uVar11 + iStack_1b0 +
             (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_1ac = auVar32._20_4_;
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + iStack_1ac + ((uVar8 ^ uVar12) & (uVar12 ^ uVar13) ^ uVar12) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_1a8 = auVar32._24_4_;
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + iStack_1a8 + ((uVar10 ^ uVar7) & (uVar7 ^ uVar12) ^ uVar7) +
             (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_1a4 = auVar32._28_4_;
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + iStack_1a4 + ((uVar6 ^ uVar9) & (uVar9 ^ uVar7) ^ uVar9) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_190 = auVar1._16_4_;
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + iStack_190 + ((uVar10 ^ uVar11) & (uVar11 ^ uVar9) ^ uVar11) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
    local_2a0 = vpaddd_avx2(auVar25,_K_XX_XX);
    iStack_18c = auVar1._20_4_;
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + iStack_18c + ((uVar8 ^ uVar5) & (uVar5 ^ uVar11) ^ uVar5) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_188 = auVar1._24_4_;
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = ((uVar6 ^ uVar13) & (uVar13 ^ uVar5) ^ uVar13) + uVar11 + iStack_188 +
             (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_184 = auVar1._28_4_;
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + iStack_184 + ((uVar8 ^ uVar12) & (uVar12 ^ uVar13) ^ uVar12) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_170 = auVar30._16_4_;
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + iStack_170 + ((uVar10 ^ uVar7) & (uVar7 ^ uVar12) ^ uVar7) +
             (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_16c = auVar30._20_4_;
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + iStack_16c + ((uVar6 ^ uVar9) & (uVar9 ^ uVar7) ^ uVar9) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_168 = auVar30._24_4_;
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + iStack_168 + ((uVar10 ^ uVar11) & (uVar11 ^ uVar9) ^ uVar11) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_164 = auVar30._28_4_;
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + iStack_164 + ((uVar8 ^ uVar5) & (uVar5 ^ uVar11) ^ uVar5) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_150 = auVar29._16_4_;
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = ((uVar6 ^ uVar13) & (uVar13 ^ uVar5) ^ uVar13) + uVar11 + iStack_150 +
             (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_14c = auVar29._20_4_;
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + iStack_14c + ((uVar8 ^ uVar12) & (uVar12 ^ uVar13) ^ uVar12) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_148 = auVar29._24_4_;
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + iStack_148 + ((uVar10 ^ uVar7) & (uVar7 ^ uVar12) ^ uVar7) +
             (uVar6 >> 0x1b | uVar6 * 0x20);
    auVar30 = vpalignr_avx2(auVar19,auVar17,8);
    iStack_144 = auVar29._28_4_;
    auVar29 = vpsrldq_avx2(auVar25,4);
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + iStack_144 + ((uVar6 ^ uVar9) & (uVar9 ^ uVar7) ^ uVar9) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    auVar29 = auVar30 ^ auVar17 ^ auVar29 ^ auVar24;
    iStack_130 = auVar27._16_4_;
    auVar30 = vpsrld_avx2(auVar29,0x1f);
    auVar31 = vpslldq_avx2(auVar29,0xc);
    auVar29 = vpaddd_avx2(auVar29,auVar29);
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    auVar28 = vpsrld_avx2(auVar31,0x1e);
    auVar29 = vpor_avx2(auVar29,auVar30);
    uVar6 = uVar7 + iStack_130 + ((uVar10 ^ uVar11) & (uVar11 ^ uVar9) ^ uVar11) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
    auVar30 = vpslld_avx2(auVar31,2);
    iStack_12c = auVar27._20_4_;
    auVar30 = auVar29 ^ auVar28 ^ auVar30;
    local_280 = vpaddd_avx2(auVar30,_K_XX_XX);
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + iStack_12c + ((uVar8 ^ uVar5) & (uVar5 ^ uVar11) ^ uVar5) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_128 = auVar27._24_4_;
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = ((uVar6 ^ uVar13) & (uVar13 ^ uVar5) ^ uVar13) + uVar11 + iStack_128 +
             (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_124 = auVar27._28_4_;
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar5 + iStack_124 + ((uVar8 ^ uVar12) & (uVar12 ^ uVar13) ^ uVar12) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    auVar27 = vpalignr_avx2(auVar24,auVar19,8);
    iStack_110 = auVar23._16_4_;
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    auVar29 = vpsrldq_avx2(auVar30,4);
    uVar10 = uVar13 + iStack_110 + (uVar10 ^ uVar7 ^ uVar12) + (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_10c = auVar23._20_4_;
    auVar27 = auVar27 ^ auVar19 ^ auVar29 ^ auVar25;
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar8 = uVar12 + iStack_10c + (uVar6 ^ uVar9 ^ uVar7) + (uVar10 >> 0x1b | uVar10 * 0x20);
    auVar29 = vpsrld_avx2(auVar27,0x1f);
    iStack_108 = auVar23._24_4_;
    auVar31 = vpslldq_avx2(auVar27,0xc);
    auVar27 = vpaddd_avx2(auVar27,auVar27);
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    auVar28 = vpsrld_avx2(auVar31,0x1e);
    auVar27 = vpor_avx2(auVar27,auVar29);
    uVar6 = uVar7 + iStack_108 + (uVar10 ^ uVar11 ^ uVar9) + (uVar8 >> 0x1b | uVar8 * 0x20);
    auVar29 = vpslld_avx2(auVar31,2);
    iStack_104 = auVar23._28_4_;
    auVar29 = auVar27 ^ auVar28 ^ auVar29;
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    local_260 = vpaddd_avx2(auVar29,_DAT_0056cc60);
    uVar8 = uVar9 + iStack_104 + (uVar8 ^ uVar5 ^ uVar11) + (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_f0 = auVar26._16_4_;
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar10 = (uVar6 ^ uVar13 ^ uVar5) + uVar11 + iStack_f0 + (uVar8 >> 0x1b | uVar8 * 0x20);
    auVar23 = vpalignr_avx2(auVar25,auVar24,8);
    iStack_ec = auVar26._20_4_;
    uVar9 = uVar10 >> 2 | uVar10 * 0x40000000;
    auVar27 = vpsrldq_avx2(auVar29,4);
    uVar6 = uVar5 + iStack_ec + (uVar8 ^ uVar12 ^ uVar13) + (uVar10 >> 0x1b | uVar10 * 0x20);
    iStack_e8 = auVar26._24_4_;
    auVar23 = auVar23 ^ auVar24 ^ auVar27 ^ auVar30;
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = uVar13 + iStack_e8 + (uVar10 ^ uVar7 ^ uVar12) + (uVar6 >> 0x1b | uVar6 * 0x20);
    auVar27 = vpsrld_avx2(auVar23,0x1f);
    iStack_e4 = auVar26._28_4_;
    auVar31 = vpslldq_avx2(auVar23,0xc);
    auVar23 = vpaddd_avx2(auVar23,auVar23);
    uVar5 = uVar10 >> 2 | uVar10 * 0x40000000;
    auVar28 = vpsrld_avx2(auVar31,0x1e);
    auVar23 = vpor_avx2(auVar23,auVar27);
    uVar8 = uVar12 + iStack_e4 + (uVar6 ^ uVar9 ^ uVar7) + (uVar10 >> 0x1b | uVar10 * 0x20);
    auVar27 = vpslld_avx2(auVar31,2);
    iStack_d0 = auVar2._16_4_;
    auVar27 = auVar23 ^ auVar28 ^ auVar27;
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    local_240 = vpaddd_avx2(auVar27,_DAT_0056cc60);
    uVar6 = uVar7 + iStack_d0 + (uVar10 ^ uVar11 ^ uVar9) + (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_cc = auVar2._20_4_;
    uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar8 = uVar9 + iStack_cc + (uVar8 ^ uVar5 ^ uVar11) + (uVar6 >> 0x1b | uVar6 * 0x20);
    auVar23 = vpalignr_avx2(auVar30,auVar25,8);
    iStack_c8 = auVar2._24_4_;
    uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
    auVar28 = vpsrldq_avx2(auVar27,4);
    uVar9 = (uVar6 ^ uVar13 ^ uVar5) + uVar11 + iStack_c8 + (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_c4 = auVar2._28_4_;
    auVar23 = auVar23 ^ auVar25 ^ auVar28 ^ auVar29;
    uVar10 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar6 = uVar5 + iStack_c4 + (uVar8 ^ uVar12 ^ uVar13) + (uVar9 >> 0x1b | uVar9 * 0x20);
    auVar28 = vpsrld_avx2(auVar23,0x1f);
    iStack_b0 = auVar3._16_4_;
    auVar32 = vpslldq_avx2(auVar23,0xc);
    auVar23 = vpaddd_avx2(auVar23,auVar23);
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    auVar31 = vpsrld_avx2(auVar32,0x1e);
    auVar28 = vpor_avx2(auVar23,auVar28);
    uVar9 = uVar13 + iStack_b0 + (uVar9 ^ uVar7 ^ uVar12) + (uVar6 >> 0x1b | uVar6 * 0x20);
    auVar23 = vpslld_avx2(auVar32,2);
    iStack_ac = auVar3._20_4_;
    auVar23 = auVar28 ^ auVar31 ^ auVar23;
    uVar5 = uVar9 >> 2 | uVar9 * 0x40000000;
    local_220 = vpaddd_avx2(auVar23,_DAT_0056cc60);
    uVar8 = uVar12 + iStack_ac + (uVar6 ^ uVar10 ^ uVar7) + (uVar9 >> 0x1b | uVar9 * 0x20);
    iStack_a8 = auVar3._24_4_;
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar6 = uVar7 + iStack_a8 + (uVar9 ^ uVar11 ^ uVar10) + (uVar8 >> 0x1b | uVar8 * 0x20);
    iStack_a4 = auVar3._28_4_;
    uVar9 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar7 = uVar10 + iStack_a4 + (uVar8 ^ uVar5 ^ uVar11) + (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_90 = auVar4._16_4_;
    uVar12 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar6 = (uVar6 ^ uVar13 ^ uVar5) + uVar11 + iStack_90 + (uVar7 >> 0x1b | uVar7 * 0x20);
    iStack_8c = auVar4._20_4_;
    uVar8 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar7 = uVar5 + iStack_8c + (uVar7 ^ uVar9 ^ uVar13) + (uVar6 >> 0x1b | uVar6 * 0x20);
    iStack_88 = auVar4._24_4_;
    uVar5 = uVar13 + iStack_88 + (uVar6 ^ uVar12 ^ uVar9) + (uVar7 >> 0x1b | uVar7 * 0x20);
    iStack_84 = auVar4._28_4_;
    uVar6 = uVar9 + iStack_84 + (uVar7 ^ uVar8 ^ uVar12) + (uVar5 >> 0x1b | uVar5 * 0x20) + *param_1
    ;
    uVar5 = uVar5 + param_1[1];
    uVar7 = (uVar7 >> 2 | uVar7 * 0x40000000) + param_1[2];
    *param_1 = uVar6;
    uVar8 = uVar8 + param_1[3];
    param_1[1] = uVar5;
    uVar12 = uVar12 + param_1[4];
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    param_1[4] = uVar12;
  } while (pauVar14 <= pauVar15);
  return;
}

