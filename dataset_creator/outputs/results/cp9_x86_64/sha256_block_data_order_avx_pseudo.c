
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_block_data_order_avx(uint *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  
  auVar8 = _DAT_005768c0;
  auVar7 = _DAT_005768a0;
  pauVar1 = param_2 + param_3 * 4;
  uVar9 = *param_1;
  uVar12 = param_1[1];
  uVar10 = param_1[2];
  uVar11 = param_1[3];
  uVar21 = param_1[4];
  uVar20 = param_1[5];
  uVar19 = param_1[6];
  uVar18 = param_1[7];
  do {
    auVar2 = vpshufb_avx(*param_2,_DAT_00576880);
    auVar3 = vpshufb_avx(param_2[1],_DAT_00576880);
    auVar4 = vpshufb_avx(param_2[2],_DAT_00576880);
    local_c0 = vpaddd_avx(auVar2,_K256);
    auVar5 = vpshufb_avx(param_2[3],_DAT_00576880);
    local_b0 = vpaddd_avx(auVar3,_DAT_005766a0);
    local_a0 = vpaddd_avx(auVar4,_DAT_005766c0);
    local_90 = vpaddd_avx(auVar5,_DAT_005766e0);
    uVar14 = uVar12 ^ uVar10;
    pauVar13 = (undefined1 (*) [16])&K256;
    do {
      auVar28 = vpalignr_avx(auVar3,auVar2,4);
      auVar22 = vpalignr_avx(auVar5,auVar4,4);
      uVar16 = (uVar21 >> 0xe | uVar21 << 0x12) ^ uVar21;
      auVar24 = vpsrld_avx(auVar28,7);
      uVar17 = (uVar9 >> 9 | uVar9 << 0x17) ^ uVar9;
      auVar2 = vpaddd_avx(auVar2,auVar22);
      uVar16 = (uVar16 >> 5 | uVar16 << 0x1b) ^ uVar21;
      auVar27 = vpsrld_avx(auVar28,3);
      auVar22 = vpslld_avx(auVar28,0xe);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar9;
      iVar15 = uVar18 + local_c0._0_4_ + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
               (uVar16 >> 6 | uVar16 << 0x1a);
      auVar28 = vpshufd_avx(auVar5,0xfa);
      uVar11 = uVar11 + iVar15;
      auVar25 = vpsrld_avx(auVar24,0xb);
      uVar18 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + (uVar14 & (uVar9 ^ uVar12) ^ uVar12);
      auVar23 = vpslld_avx(auVar22,0xb);
      uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
      uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
      auVar26 = vpsrld_avx(auVar28,10);
      auVar28 = vpsrlq_avx(auVar28,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
      auVar2 = vpaddd_avx(auVar2,auVar27 ^ auVar24 ^ auVar22 ^ auVar25 ^ auVar23);
      iVar15 = uVar19 + local_c0._4_4_ + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar10 = uVar10 + iVar15;
      auVar22 = vpsrlq_avx(auVar28,2);
      uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9);
      uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
      auVar28 = vpshufb_avx(auVar26 ^ auVar28 ^ auVar22,auVar7);
      uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      auVar2 = vpaddd_avx(auVar2,auVar28);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
      auVar28 = vpshufd_avx(auVar2,0x50);
      auVar22 = vpsrld_avx(auVar28,10);
      auVar28 = vpsrlq_avx(auVar28,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
      iVar15 = uVar20 + local_c0._8_4_ + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar12 = uVar12 + iVar15;
      auVar23 = vpsrlq_avx(auVar28,2);
      uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
      auVar28 = vpshufb_avx(auVar22 ^ auVar28 ^ auVar23,auVar8);
      uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      auVar2 = vpaddd_avx(auVar2,auVar28);
      uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
      auVar28 = vpaddd_avx(auVar2,pauVar13[8]);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
      iVar15 = uVar21 + local_c0._12_4_ + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar9 = uVar9 + iVar15;
      uVar21 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
      auVar22 = vpalignr_avx(auVar4,auVar3,4);
      auVar23 = vpalignr_avx(auVar2,auVar5,4);
      uVar14 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
      auVar25 = vpsrld_avx(auVar22,7);
      uVar16 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
      auVar3 = vpaddd_avx(auVar3,auVar23);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar9;
      auVar29 = vpsrld_avx(auVar22,3);
      auVar23 = vpslld_avx(auVar22,0xe);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar21;
      iVar15 = uVar11 + local_b0._0_4_ + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      auVar22 = vpshufd_avx(auVar2,0xfa);
      uVar18 = uVar18 + iVar15;
      auVar26 = vpsrld_avx(auVar25,0xb);
      uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
      auVar24 = vpslld_avx(auVar23,0xb);
      uVar14 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar18;
      auVar27 = vpsrld_avx(auVar22,10);
      auVar22 = vpsrlq_avx(auVar22,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
      auVar3 = vpaddd_avx(auVar3,auVar29 ^ auVar25 ^ auVar23 ^ auVar26 ^ auVar24);
      iVar15 = uVar10 + local_b0._4_4_ + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar19 = uVar19 + iVar15;
      auVar23 = vpsrlq_avx(auVar22,2);
      uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar21 ^ uVar20) & (uVar11 ^ uVar21) ^ uVar21);
      uVar14 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
      auVar22 = vpshufb_avx(auVar27 ^ auVar22 ^ auVar23,auVar7);
      uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
      auVar3 = vpaddd_avx(auVar3,auVar22);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar19;
      auVar22 = vpshufd_avx(auVar3,0x50);
      auVar23 = vpsrld_avx(auVar22,10);
      auVar22 = vpsrlq_avx(auVar22,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
      iVar15 = uVar12 + local_b0._8_4_ + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar20 = uVar20 + iVar15;
      auVar24 = vpsrlq_avx(auVar22,2);
      uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar11 ^ uVar21) & (uVar10 ^ uVar11) ^ uVar11);
      auVar22 = vpshufb_avx(auVar23 ^ auVar22 ^ auVar24,auVar8);
      uVar14 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
      auVar3 = vpaddd_avx(auVar3,auVar22);
      uVar16 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      auVar22 = vpaddd_avx(auVar3,pauVar13[10]);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar20;
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar12;
      iVar15 = uVar9 + local_b0._12_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar21 = uVar21 + iVar15;
      uVar9 = (uVar16 >> 2 | uVar16 << 0x1e) +
              iVar15 + ((uVar10 ^ uVar11) & (uVar12 ^ uVar10) ^ uVar10);
      auVar23 = vpalignr_avx(auVar5,auVar4,4);
      auVar24 = vpalignr_avx(auVar3,auVar2,4);
      uVar14 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
      auVar26 = vpsrld_avx(auVar23,7);
      uVar16 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
      auVar4 = vpaddd_avx(auVar4,auVar24);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar21;
      auVar30 = vpsrld_avx(auVar23,3);
      auVar24 = vpslld_avx(auVar23,0xe);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar9;
      iVar15 = uVar18 + local_a0._0_4_ + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      auVar23 = vpshufd_avx(auVar3,0xfa);
      uVar11 = uVar11 + iVar15;
      auVar27 = vpsrld_avx(auVar26,0xb);
      uVar18 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar12 ^ uVar10) & (uVar9 ^ uVar12) ^ uVar12);
      auVar25 = vpslld_avx(auVar24,0xb);
      uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
      uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
      auVar29 = vpsrld_avx(auVar23,10);
      auVar23 = vpsrlq_avx(auVar23,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
      auVar4 = vpaddd_avx(auVar4,auVar30 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      iVar15 = uVar19 + local_a0._4_4_ + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar10 = uVar10 + iVar15;
      auVar24 = vpsrlq_avx(auVar23,2);
      uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9);
      uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
      auVar23 = vpshufb_avx(auVar29 ^ auVar23 ^ auVar24,auVar7);
      uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      auVar4 = vpaddd_avx(auVar4,auVar23);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
      auVar23 = vpshufd_avx(auVar4,0x50);
      auVar24 = vpsrld_avx(auVar23,10);
      auVar23 = vpsrlq_avx(auVar23,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
      iVar15 = uVar20 + local_a0._8_4_ + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar12 = uVar12 + iVar15;
      auVar25 = vpsrlq_avx(auVar23,2);
      uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
      auVar23 = vpshufb_avx(auVar24 ^ auVar23 ^ auVar25,auVar8);
      uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      auVar4 = vpaddd_avx(auVar4,auVar23);
      uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
      auVar23 = vpaddd_avx(auVar4,pauVar13[0xc]);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
      iVar15 = uVar21 + local_a0._12_4_ + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar9 = uVar9 + iVar15;
      uVar21 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
      auVar24 = vpalignr_avx(auVar2,auVar5,4);
      auVar25 = vpalignr_avx(auVar4,auVar3,4);
      uVar14 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
      auVar27 = vpsrld_avx(auVar24,7);
      uVar16 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
      auVar5 = vpaddd_avx(auVar5,auVar25);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar9;
      auVar31 = vpsrld_avx(auVar24,3);
      auVar25 = vpslld_avx(auVar24,0xe);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar21;
      iVar15 = uVar11 + local_90._0_4_ + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      auVar24 = vpshufd_avx(auVar4,0xfa);
      uVar18 = uVar18 + iVar15;
      auVar29 = vpsrld_avx(auVar27,0xb);
      uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
      auVar26 = vpslld_avx(auVar25,0xb);
      uVar14 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar18;
      auVar30 = vpsrld_avx(auVar24,10);
      auVar24 = vpsrlq_avx(auVar24,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
      auVar5 = vpaddd_avx(auVar5,auVar31 ^ auVar27 ^ auVar25 ^ auVar29 ^ auVar26);
      iVar15 = uVar10 + local_90._4_4_ + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar19 = uVar19 + iVar15;
      auVar25 = vpsrlq_avx(auVar24,2);
      uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar21 ^ uVar20) & (uVar11 ^ uVar21) ^ uVar21);
      uVar14 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
      auVar24 = vpshufb_avx(auVar30 ^ auVar24 ^ auVar25,auVar7);
      uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
      auVar5 = vpaddd_avx(auVar5,auVar24);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar19;
      auVar24 = vpshufd_avx(auVar5,0x50);
      auVar25 = vpsrld_avx(auVar24,10);
      auVar24 = vpsrlq_avx(auVar24,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
      iVar15 = uVar12 + local_90._8_4_ + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar20 = uVar20 + iVar15;
      auVar26 = vpsrlq_avx(auVar24,2);
      uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar11 ^ uVar21) & (uVar10 ^ uVar11) ^ uVar11);
      auVar24 = vpshufb_avx(auVar25 ^ auVar24 ^ auVar26,auVar8);
      uVar14 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
      auVar5 = vpaddd_avx(auVar5,auVar24);
      uVar17 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      auVar24 = vpaddd_avx(auVar5,pauVar13[0xe]);
      uVar16 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar20;
      uVar14 = uVar12 ^ uVar10;
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar12;
      iVar15 = uVar9 + local_90._12_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
               (uVar16 >> 6 | uVar16 << 0x1a);
      uVar21 = uVar21 + iVar15;
      uVar9 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + ((uVar10 ^ uVar11) & uVar14 ^ uVar10);
      pauVar6 = pauVar13 + 0x10;
      pauVar13 = pauVar13 + 8;
      local_c0 = auVar28;
      local_b0 = auVar22;
      local_a0 = auVar23;
      local_90 = auVar24;
    } while (*(char *)((long)*pauVar6 + 3) != '\0');
    uVar16 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
    uVar17 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar16 = (uVar16 >> 5 | uVar16 << 0x1b) ^ uVar21;
    local_c0._0_4_ = auVar28._0_4_;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar9;
    iVar15 = uVar18 + local_c0._0_4_ + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
             (uVar16 >> 6 | uVar16 << 0x1a);
    uVar11 = uVar11 + iVar15;
    uVar18 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + (uVar14 & (uVar9 ^ uVar12) ^ uVar12);
    uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
    uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
    local_c0._4_4_ = auVar28._4_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
    iVar15 = uVar19 + local_c0._4_4_ + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar10 = uVar10 + iVar15;
    uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) + iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9)
    ;
    uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
    local_c0._8_4_ = auVar28._8_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
    iVar15 = uVar20 + local_c0._8_4_ + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar12 = uVar12 + iVar15;
    uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
    uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
    local_c0._12_4_ = auVar28._12_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
    iVar15 = uVar21 + local_c0._12_4_ + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar9 = uVar9 + iVar15;
    uVar21 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
    uVar14 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar16 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar9;
    local_b0._0_4_ = auVar22._0_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar21;
    iVar15 = uVar11 + local_b0._0_4_ + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar18 = uVar18 + iVar15;
    uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
    uVar14 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar18;
    local_b0._4_4_ = auVar22._4_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
    iVar15 = uVar10 + local_b0._4_4_ + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar19 = uVar19 + iVar15;
    uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar21 ^ uVar20) & (uVar11 ^ uVar21) ^ uVar21);
    uVar14 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar19;
    local_b0._8_4_ = auVar22._8_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
    iVar15 = uVar12 + local_b0._8_4_ + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar20 = uVar20 + iVar15;
    uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar11 ^ uVar21) & (uVar10 ^ uVar11) ^ uVar11);
    uVar14 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
    uVar16 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar20;
    local_b0._12_4_ = auVar22._12_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar12;
    iVar15 = uVar9 + local_b0._12_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar21 = uVar21 + iVar15;
    uVar9 = (uVar16 >> 2 | uVar16 << 0x1e) +
            iVar15 + ((uVar10 ^ uVar11) & (uVar12 ^ uVar10) ^ uVar10);
    uVar14 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
    uVar16 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar21;
    local_a0._0_4_ = auVar23._0_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar9;
    iVar15 = uVar18 + local_a0._0_4_ + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar11 = uVar11 + iVar15;
    uVar18 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar12 ^ uVar10) & (uVar9 ^ uVar12) ^ uVar12);
    uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
    uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
    local_a0._4_4_ = auVar23._4_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
    iVar15 = uVar19 + local_a0._4_4_ + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar10 = uVar10 + iVar15;
    uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) + iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9)
    ;
    uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
    local_a0._8_4_ = auVar23._8_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
    iVar15 = uVar20 + local_a0._8_4_ + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar12 = uVar12 + iVar15;
    uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
    uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
    local_a0._12_4_ = auVar23._12_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
    iVar15 = uVar21 + local_a0._12_4_ + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar9 = uVar9 + iVar15;
    uVar14 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
    uVar21 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar16 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar9;
    local_90._0_4_ = auVar24._0_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar14;
    iVar15 = uVar11 + local_90._0_4_ + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar18 = uVar18 + iVar15;
    uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar20 ^ uVar19) & (uVar14 ^ uVar20) ^ uVar20);
    uVar21 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar18;
    local_90._4_4_ = auVar24._4_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
    iVar15 = uVar10 + local_90._4_4_ + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar19 = uVar19 + iVar15;
    uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar14 ^ uVar20) & (uVar11 ^ uVar14) ^ uVar14);
    uVar21 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar19;
    local_90._8_4_ = auVar24._8_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
    iVar15 = uVar12 + local_90._8_4_ + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar20 = uVar20 + iVar15;
    uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar11 ^ uVar14) & (uVar10 ^ uVar11) ^ uVar11);
    uVar21 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
    uVar16 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar20;
    local_90._12_4_ = auVar24._12_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar12;
    iVar15 = uVar9 + local_90._12_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar9 = (uVar16 >> 2 | uVar16 << 0x1e) +
            iVar15 + ((uVar10 ^ uVar11) & (uVar12 ^ uVar10) ^ uVar10) + *param_1;
    param_2 = param_2 + 4;
    uVar12 = uVar12 + param_1[1];
    uVar10 = uVar10 + param_1[2];
    uVar11 = uVar11 + param_1[3];
    uVar21 = uVar14 + iVar15 + param_1[4];
    uVar20 = uVar20 + param_1[5];
    uVar19 = uVar19 + param_1[6];
    uVar18 = uVar18 + param_1[7];
    *param_1 = uVar9;
    param_1[1] = uVar12;
    param_1[2] = uVar10;
    param_1[3] = uVar11;
    param_1[4] = uVar21;
    param_1[5] = uVar20;
    param_1[6] = uVar19;
    param_1[7] = uVar18;
  } while (param_2 < pauVar1);
  return;
}

