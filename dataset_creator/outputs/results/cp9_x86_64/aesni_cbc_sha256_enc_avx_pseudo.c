
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aesni_cbc_sha256_enc_avx
               (undefined1 (*param_1) [16],long param_2,long param_3,undefined1 (*param_4) [16],
               undefined1 (*param_5) [16],uint *param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  int iVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
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
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  
  param_2 = param_2 - (long)param_1;
  param_7 = param_7 - (long)param_1;
  pauVar9 = param_1 + param_3 * 4;
  auVar33 = *param_5;
  lVar21 = (ulong)*(uint *)param_4[0xf] - 9;
  uVar6 = *param_6;
  uVar10 = param_6[1];
  uVar7 = param_6[2];
  uVar8 = param_6[3];
  uVar20 = param_6[4];
  uVar19 = param_6[5];
  uVar18 = param_6[6];
  uVar17 = param_6[7];
  auVar1 = *(undefined1 (*) [16])(&DAT_0048e8a0 + lVar21 * 8);
  auVar2 = *(undefined1 (*) [16])(&DAT_0048e8b0 + lVar21 * 8);
  auVar3 = *(undefined1 (*) [16])(&DAT_0048e8c0 + lVar21 * 8);
  auVar32 = *param_4;
  do {
    auVar29 = vpshufb_avx(*(undefined1 (*) [16])(param_7 + (long)param_1),_DAT_0048e880);
    auVar24 = vpshufb_avx(*(undefined1 (*) [16])(param_7 + 0x10 + (long)param_1),_DAT_0048e880);
    auVar25 = vpshufb_avx(*(undefined1 (*) [16])(param_7 + 0x20 + (long)param_1),_DAT_0048e880);
    local_c0 = vpaddd_avx(auVar29,_K256);
    auVar4 = vpshufb_avx(*(undefined1 (*) [16])(param_7 + 0x30 + (long)param_1),_DAT_0048e880);
    local_b0 = vpaddd_avx(auVar24,_DAT_0048e6a0);
    local_a0 = vpaddd_avx(auVar25,_DAT_0048e6c0);
    local_90 = vpaddd_avx(auVar4,_DAT_0048e6e0);
    uVar12 = uVar10 ^ uVar7;
    pauVar11 = (undefined1 (*) [16])&K256;
    do {
      pauVar14 = param_1;
      auVar31 = vpalignr_avx(auVar24,auVar29,4);
      auVar22 = vpalignr_avx(auVar4,auVar25,4);
      uVar15 = (uVar20 >> 0xe | uVar20 << 0x12) ^ uVar20;
      auVar26 = vpsrld_avx(auVar31,7);
      uVar16 = (uVar6 >> 9 | uVar6 << 0x17) ^ uVar6;
      auVar29 = vpaddd_avx(auVar29,auVar22);
      uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar20;
      auVar30 = vpsrld_avx(auVar31,3);
      auVar22 = vpslld_avx(auVar31,0xe);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar6;
      iVar13 = uVar17 + local_c0._0_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
               (uVar15 >> 6 | uVar15 << 0x1a);
      auVar31 = vpshufd_avx(auVar4,0xfa);
      uVar8 = uVar8 + iVar13;
      auVar27 = vpsrld_avx(auVar26,0xb);
      uVar17 = (uVar16 >> 2 | uVar16 << 0x1e) + iVar13 + (uVar12 & (uVar6 ^ uVar10) ^ uVar10);
      uVar12 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
      auVar23 = vpslld_avx(auVar22,0xb);
      uVar15 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar8;
      auVar28 = vpsrld_avx(auVar31,10);
      auVar31 = vpsrlq_avx(auVar31,0x11);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar17;
      auVar29 = vpaddd_avx(auVar29,auVar30 ^ auVar26 ^ auVar22 ^ auVar27 ^ auVar23);
      iVar13 = uVar18 + local_c0._4_4_ + ((uVar20 ^ uVar19) & uVar8 ^ uVar19) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      uVar7 = uVar7 + iVar13;
      auVar22 = vpsrlq_avx(auVar31,2);
      uVar18 = (uVar15 >> 2 | uVar15 << 0x1e) +
               iVar13 + ((uVar6 ^ uVar10) & (uVar17 ^ uVar6) ^ uVar6);
      uVar12 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
      auVar31 = vpshufd_avx(auVar28 ^ auVar31 ^ auVar22,0x84);
      uVar15 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      auVar31 = vpsrldq_avx(auVar31,8);
      auVar22 = aesenc(*pauVar14 ^ auVar32 ^ auVar33,param_4[1]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar7;
      auVar33 = vpaddd_avx(auVar29,auVar31);
      auVar32 = vpshufd_avx(auVar33,0x50);
      auVar29 = vpsrld_avx(auVar32,10);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar18;
      iVar13 = uVar19 + local_c0._8_4_ + ((uVar8 ^ uVar20) & uVar7 ^ uVar20) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar10 = uVar10 + iVar13;
      uVar19 = (uVar15 >> 2 | uVar15 << 0x1e) +
               iVar13 + ((uVar17 ^ uVar6) & (uVar18 ^ uVar17) ^ uVar17);
      auVar31 = vpsrlq_avx(auVar32,2);
      uVar12 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
      auVar32 = vpshufd_avx(auVar29 ^ auVar32 ^ auVar31,0xe8);
      uVar15 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      auVar32 = vpslldq_avx(auVar32,8);
      auVar31 = aesenc(auVar22,param_4[2]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar10;
      iVar13 = uVar20 + local_c0._12_4_;
      auVar29 = vpaddd_avx(auVar33,auVar32);
      local_c0 = vpaddd_avx(auVar29,pauVar11[8]);
      uVar20 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar19;
      iVar13 = iVar13 + ((uVar7 ^ uVar8) & uVar10 ^ uVar8) + (uVar12 >> 6 | uVar12 << 0x1a);
      uVar6 = uVar6 + iVar13;
      uVar20 = (uVar20 >> 2 | uVar20 << 0x1e) +
               iVar13 + ((uVar18 ^ uVar17) & (uVar19 ^ uVar18) ^ uVar18);
      auVar32 = vpalignr_avx(auVar25,auVar24,4);
      auVar33 = vpalignr_avx(auVar29,auVar4,4);
      uVar12 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      auVar22 = vpsrld_avx(auVar32,7);
      uVar15 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
      auVar33 = vpaddd_avx(auVar24,auVar33);
      auVar26 = aesenc(auVar31,param_4[3]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar6;
      auVar27 = vpsrld_avx(auVar32,3);
      auVar24 = vpslld_avx(auVar32,0xe);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar20;
      iVar13 = uVar8 + local_b0._0_4_ + ((uVar10 ^ uVar7) & uVar6 ^ uVar7) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar32 = vpshufd_avx(auVar29,0xfa);
      uVar17 = uVar17 + iVar13;
      auVar23 = vpsrld_avx(auVar22,0xb);
      uVar8 = (uVar15 >> 2 | uVar15 << 0x1e) +
              iVar13 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
      uVar12 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
      auVar31 = vpslld_avx(auVar24,0xb);
      uVar15 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
      auVar28 = aesenc(auVar26,param_4[4]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar17;
      auVar26 = vpsrld_avx(auVar32,10);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar8;
      auVar33 = vpaddd_avx(auVar33,auVar27 ^ auVar22 ^ auVar24 ^ auVar23 ^ auVar31);
      iVar13 = uVar7 + local_b0._4_4_ + ((uVar6 ^ uVar10) & uVar17 ^ uVar10) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      uVar18 = uVar18 + iVar13;
      auVar24 = vpsrlq_avx(auVar32,2);
      uVar7 = (uVar15 >> 2 | uVar15 << 0x1e) +
              iVar13 + ((uVar20 ^ uVar19) & (uVar8 ^ uVar20) ^ uVar20);
      uVar12 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      auVar32 = vpshufd_avx(auVar26 ^ auVar32 ^ auVar24,0x84);
      uVar15 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
      auVar32 = vpsrldq_avx(auVar32,8);
      auVar22 = aesenc(auVar28,param_4[5]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar18;
      auVar33 = vpaddd_avx(auVar33,auVar32);
      auVar32 = vpshufd_avx(auVar33,0x50);
      auVar24 = vpsrld_avx(auVar32,10);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar7;
      iVar13 = uVar10 + local_b0._8_4_ + ((uVar17 ^ uVar6) & uVar18 ^ uVar6) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar19 = uVar19 + iVar13;
      uVar10 = (uVar15 >> 2 | uVar15 << 0x1e) +
               iVar13 + ((uVar8 ^ uVar20) & (uVar7 ^ uVar8) ^ uVar8);
      auVar31 = vpsrlq_avx(auVar32,2);
      uVar12 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
      auVar32 = vpshufd_avx(auVar24 ^ auVar32 ^ auVar31,0xe8);
      uVar15 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
      auVar32 = vpslldq_avx(auVar32,8);
      auVar31 = aesenc(auVar22,param_4[6]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar19;
      iVar13 = uVar6 + local_b0._12_4_;
      auVar24 = vpaddd_avx(auVar33,auVar32);
      local_b0 = vpaddd_avx(auVar24,pauVar11[10]);
      uVar6 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar10;
      iVar13 = iVar13 + ((uVar18 ^ uVar17) & uVar19 ^ uVar17) + (uVar12 >> 6 | uVar12 << 0x1a);
      uVar20 = uVar20 + iVar13;
      uVar6 = (uVar6 >> 2 | uVar6 << 0x1e) + iVar13 + ((uVar7 ^ uVar8) & (uVar10 ^ uVar7) ^ uVar7);
      auVar32 = vpalignr_avx(auVar4,auVar25,4);
      auVar33 = vpalignr_avx(auVar24,auVar29,4);
      uVar12 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
      auVar22 = vpsrld_avx(auVar32,7);
      uVar15 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      auVar33 = vpaddd_avx(auVar25,auVar33);
      auVar26 = aesenc(auVar31,param_4[7]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar20;
      auVar27 = vpsrld_avx(auVar32,3);
      auVar25 = vpslld_avx(auVar32,0xe);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar6;
      iVar13 = uVar17 + local_a0._0_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar32 = vpshufd_avx(auVar24,0xfa);
      uVar8 = uVar8 + iVar13;
      auVar23 = vpsrld_avx(auVar22,0xb);
      uVar17 = (uVar15 >> 2 | uVar15 << 0x1e) +
               iVar13 + ((uVar10 ^ uVar7) & (uVar6 ^ uVar10) ^ uVar10);
      uVar12 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
      auVar31 = vpslld_avx(auVar25,0xb);
      uVar15 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
      auVar28 = aesenc(auVar26,param_4[8]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar8;
      auVar26 = vpsrld_avx(auVar32,10);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar17;
      auVar33 = vpaddd_avx(auVar33,auVar27 ^ auVar22 ^ auVar25 ^ auVar23 ^ auVar31);
      iVar13 = uVar18 + local_a0._4_4_ + ((uVar20 ^ uVar19) & uVar8 ^ uVar19) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      uVar7 = uVar7 + iVar13;
      auVar25 = vpsrlq_avx(auVar32,2);
      uVar18 = (uVar15 >> 2 | uVar15 << 0x1e) +
               iVar13 + ((uVar6 ^ uVar10) & (uVar17 ^ uVar6) ^ uVar6);
      uVar12 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
      auVar32 = vpshufd_avx(auVar26 ^ auVar32 ^ auVar25,0x84);
      uVar15 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      auVar32 = vpsrldq_avx(auVar32,8);
      auVar22 = aesenc(auVar28,param_4[9]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar7;
      auVar33 = vpaddd_avx(auVar33,auVar32);
      auVar32 = vpshufd_avx(auVar33,0x50);
      auVar25 = vpsrld_avx(auVar32,10);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar18;
      iVar13 = uVar19 + local_a0._8_4_ + ((uVar8 ^ uVar20) & uVar7 ^ uVar20) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar10 = uVar10 + iVar13;
      uVar19 = (uVar15 >> 2 | uVar15 << 0x1e) +
               iVar13 + ((uVar17 ^ uVar6) & (uVar18 ^ uVar17) ^ uVar17);
      auVar31 = vpsrlq_avx(auVar32,2);
      uVar12 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
      auVar32 = vpshufd_avx(auVar25 ^ auVar32 ^ auVar31,0xe8);
      uVar15 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      auVar32 = vpslldq_avx(auVar32,8);
      auVar26 = aesenclast(auVar22,param_4[10]);
      auVar31 = aesenc(auVar22,param_4[10]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar10;
      iVar13 = uVar20 + local_a0._12_4_;
      auVar25 = vpaddd_avx(auVar33,auVar32);
      local_a0 = vpaddd_avx(auVar25,pauVar11[0xc]);
      uVar20 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar19;
      iVar13 = iVar13 + ((uVar7 ^ uVar8) & uVar10 ^ uVar8) + (uVar12 >> 6 | uVar12 << 0x1a);
      uVar6 = uVar6 + iVar13;
      uVar20 = (uVar20 >> 2 | uVar20 << 0x1e) +
               iVar13 + ((uVar18 ^ uVar17) & (uVar19 ^ uVar18) ^ uVar18);
      auVar32 = vpalignr_avx(auVar29,auVar4,4);
      auVar33 = vpalignr_avx(auVar25,auVar24,4);
      uVar12 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      auVar23 = vpsrld_avx(auVar32,7);
      uVar15 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
      auVar33 = vpaddd_avx(auVar4,auVar33);
      auVar4 = vpand_avx(auVar26,auVar3);
      auVar27 = aesenc(auVar31,param_4[0xb]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar6;
      auVar28 = vpsrld_avx(auVar32,3);
      auVar31 = vpslld_avx(auVar32,0xe);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar20;
      iVar13 = uVar8 + local_90._0_4_ + ((uVar10 ^ uVar7) & uVar6 ^ uVar7) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar32 = vpshufd_avx(auVar25,0xfa);
      uVar17 = uVar17 + iVar13;
      auVar26 = vpsrld_avx(auVar23,0xb);
      uVar8 = (uVar15 >> 2 | uVar15 << 0x1e) +
              iVar13 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
      uVar12 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
      auVar22 = vpslld_avx(auVar31,0xb);
      uVar15 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
      auVar34 = aesenclast(auVar27,param_4[0xc]);
      auVar30 = aesenc(auVar27,param_4[0xc]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar17;
      auVar27 = vpsrld_avx(auVar32,10);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar8;
      auVar33 = vpaddd_avx(auVar33,auVar28 ^ auVar23 ^ auVar31 ^ auVar26 ^ auVar22);
      iVar13 = uVar7 + local_90._4_4_ + ((uVar6 ^ uVar10) & uVar17 ^ uVar10) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      uVar18 = uVar18 + iVar13;
      auVar31 = vpsrlq_avx(auVar32,2);
      uVar7 = (uVar15 >> 2 | uVar15 << 0x1e) +
              iVar13 + ((uVar20 ^ uVar19) & (uVar8 ^ uVar20) ^ uVar20);
      uVar12 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      auVar32 = vpshufd_avx(auVar27 ^ auVar32 ^ auVar31,0x84);
      uVar15 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
      auVar31 = vpsrldq_avx(auVar32,8);
      auVar32 = vpand_avx(auVar34,auVar2);
      auVar26 = aesenc(auVar30,param_4[0xd]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar18;
      auVar33 = vpaddd_avx(auVar33,auVar31);
      auVar31 = vpshufd_avx(auVar33,0x50);
      auVar22 = vpsrld_avx(auVar31,10);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar7;
      iVar13 = uVar10 + local_90._8_4_ + ((uVar17 ^ uVar6) & uVar18 ^ uVar6) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar31 = vpsrlq_avx(auVar31,0x11);
      uVar19 = uVar19 + iVar13;
      uVar10 = (uVar15 >> 2 | uVar15 << 0x1e) +
               iVar13 + ((uVar8 ^ uVar20) & (uVar7 ^ uVar8) ^ uVar8);
      auVar23 = vpsrlq_avx(auVar31,2);
      uVar12 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
      auVar31 = vpshufd_avx(auVar22 ^ auVar31 ^ auVar23,0xe8);
      uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
      auVar22 = vpslldq_avx(auVar31,8);
      auVar31 = vpor_avx(auVar4,auVar32);
      auVar23 = aesenclast(auVar26,param_4[0xe]);
      auVar32 = *param_4;
      uVar15 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar19;
      iVar13 = uVar6 + local_90._12_4_;
      auVar4 = vpaddd_avx(auVar33,auVar22);
      uVar12 = uVar10 ^ uVar7;
      local_90 = vpaddd_avx(auVar4,pauVar11[0xe]);
      uVar6 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
      iVar13 = iVar13 + ((uVar18 ^ uVar17) & uVar19 ^ uVar17) + (uVar15 >> 6 | uVar15 << 0x1a);
      uVar20 = uVar20 + iVar13;
      uVar6 = (uVar6 >> 2 | uVar6 << 0x1e) + iVar13 + ((uVar7 ^ uVar8) & uVar12 ^ uVar7);
      auVar33 = vpand_avx(auVar23,auVar1);
      auVar33 = vpor_avx(auVar31,auVar33);
      *(undefined1 (*) [16])(param_2 + (long)pauVar14) = auVar33;
      param_1 = pauVar14 + 1;
      pauVar5 = pauVar11 + 0x10;
      pauVar11 = pauVar11 + 8;
    } while ((*pauVar5)[3] != '\0');
    uVar15 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
    uVar16 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar20;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar6;
    iVar13 = uVar17 + local_c0._0_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
             (uVar15 >> 6 | uVar15 << 0x1a);
    uVar8 = uVar8 + iVar13;
    uVar17 = (uVar16 >> 2 | uVar16 << 0x1e) + iVar13 + (uVar12 & (uVar6 ^ uVar10) ^ uVar10);
    uVar12 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
    uVar15 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar8;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar17;
    iVar13 = uVar18 + local_c0._4_4_ + ((uVar20 ^ uVar19) & uVar8 ^ uVar19) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar7 = uVar7 + iVar13;
    uVar18 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar13 + ((uVar6 ^ uVar10) & (uVar17 ^ uVar6) ^ uVar6)
    ;
    uVar12 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar15 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    auVar33 = aesenc(*param_1 ^ auVar32 ^ auVar33,param_4[1]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar7;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar18;
    iVar13 = uVar19 + local_c0._8_4_ + ((uVar8 ^ uVar20) & uVar7 ^ uVar20) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar10 = uVar10 + iVar13;
    uVar19 = (uVar15 >> 2 | uVar15 << 0x1e) +
             iVar13 + ((uVar17 ^ uVar6) & (uVar18 ^ uVar17) ^ uVar17);
    uVar12 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar15 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    auVar33 = aesenc(auVar33,param_4[2]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar10;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar19;
    iVar13 = uVar20 + local_c0._12_4_ + ((uVar7 ^ uVar8) & uVar10 ^ uVar8) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar6 = uVar6 + iVar13;
    uVar20 = (uVar15 >> 2 | uVar15 << 0x1e) +
             iVar13 + ((uVar18 ^ uVar17) & (uVar19 ^ uVar18) ^ uVar18);
    uVar12 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar15 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
    auVar33 = aesenc(auVar33,param_4[3]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar6;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar20;
    iVar13 = uVar8 + local_b0._0_4_ + ((uVar10 ^ uVar7) & uVar6 ^ uVar7) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar17 = uVar17 + iVar13;
    uVar8 = (uVar15 >> 2 | uVar15 << 0x1e) +
            iVar13 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
    uVar12 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
    uVar15 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    auVar33 = aesenc(auVar33,param_4[4]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar17;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar8;
    iVar13 = uVar7 + local_b0._4_4_ + ((uVar6 ^ uVar10) & uVar17 ^ uVar10) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar18 = uVar18 + iVar13;
    uVar7 = (uVar15 >> 2 | uVar15 << 0x1e) +
            iVar13 + ((uVar20 ^ uVar19) & (uVar8 ^ uVar20) ^ uVar20);
    uVar12 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar15 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    auVar33 = aesenc(auVar33,param_4[5]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar18;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar7;
    iVar13 = uVar10 + local_b0._8_4_ + ((uVar17 ^ uVar6) & uVar18 ^ uVar6) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar19 = uVar19 + iVar13;
    uVar10 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar13 + ((uVar8 ^ uVar20) & (uVar7 ^ uVar8) ^ uVar8);
    uVar12 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar15 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    auVar33 = aesenc(auVar33,param_4[6]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar19;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar10;
    iVar13 = uVar6 + local_b0._12_4_ + ((uVar18 ^ uVar17) & uVar19 ^ uVar17) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar20 = uVar20 + iVar13;
    uVar6 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar13 + ((uVar7 ^ uVar8) & (uVar10 ^ uVar7) ^ uVar7);
    uVar12 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
    uVar15 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    auVar33 = aesenc(auVar33,param_4[7]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar20;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar6;
    iVar13 = uVar17 + local_a0._0_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar8 = uVar8 + iVar13;
    uVar17 = (uVar15 >> 2 | uVar15 << 0x1e) +
             iVar13 + ((uVar10 ^ uVar7) & (uVar6 ^ uVar10) ^ uVar10);
    uVar12 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
    uVar15 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
    auVar33 = aesenc(auVar33,param_4[8]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar8;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar17;
    iVar13 = uVar18 + local_a0._4_4_ + ((uVar20 ^ uVar19) & uVar8 ^ uVar19) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar7 = uVar7 + iVar13;
    uVar18 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar13 + ((uVar6 ^ uVar10) & (uVar17 ^ uVar6) ^ uVar6)
    ;
    uVar12 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar15 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    auVar33 = aesenc(auVar33,param_4[9]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar7;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar18;
    iVar13 = uVar19 + local_a0._8_4_ + ((uVar8 ^ uVar20) & uVar7 ^ uVar20) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar10 = uVar10 + iVar13;
    uVar19 = (uVar15 >> 2 | uVar15 << 0x1e) +
             iVar13 + ((uVar17 ^ uVar6) & (uVar18 ^ uVar17) ^ uVar17);
    uVar12 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar15 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    auVar29 = aesenclast(auVar33,param_4[10]);
    auVar32 = aesenc(auVar33,param_4[10]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar10;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar19;
    iVar13 = uVar20 + local_a0._12_4_ + ((uVar7 ^ uVar8) & uVar10 ^ uVar8) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar6 = uVar6 + iVar13;
    uVar12 = (uVar15 >> 2 | uVar15 << 0x1e) +
             iVar13 + ((uVar18 ^ uVar17) & (uVar19 ^ uVar18) ^ uVar18);
    uVar20 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar15 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    auVar33 = vpand_avx(auVar29,auVar3);
    auVar32 = aesenc(auVar32,param_4[0xb]);
    uVar20 = (uVar20 >> 5 | uVar20 << 0x1b) ^ uVar6;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar12;
    iVar13 = uVar8 + local_90._0_4_ + ((uVar10 ^ uVar7) & uVar6 ^ uVar7) +
             (uVar20 >> 6 | uVar20 << 0x1a);
    uVar17 = uVar17 + iVar13;
    uVar8 = (uVar15 >> 2 | uVar15 << 0x1e) +
            iVar13 + ((uVar19 ^ uVar18) & (uVar12 ^ uVar19) ^ uVar19);
    uVar20 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
    uVar15 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    auVar24 = aesenclast(auVar32,param_4[0xc]);
    auVar29 = aesenc(auVar32,param_4[0xc]);
    uVar20 = (uVar20 >> 5 | uVar20 << 0x1b) ^ uVar17;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar8;
    iVar13 = uVar7 + local_90._4_4_ + ((uVar6 ^ uVar10) & uVar17 ^ uVar10) +
             (uVar20 >> 6 | uVar20 << 0x1a);
    uVar18 = uVar18 + iVar13;
    uVar7 = (uVar15 >> 2 | uVar15 << 0x1e) +
            iVar13 + ((uVar12 ^ uVar19) & (uVar8 ^ uVar12) ^ uVar12);
    uVar20 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar15 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    auVar32 = vpand_avx(auVar24,auVar2);
    auVar24 = aesenc(auVar29,param_4[0xd]);
    uVar20 = (uVar20 >> 5 | uVar20 << 0x1b) ^ uVar18;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar7;
    iVar13 = uVar10 + local_90._8_4_ + ((uVar17 ^ uVar6) & uVar18 ^ uVar6) +
             (uVar20 >> 6 | uVar20 << 0x1a);
    uVar19 = uVar19 + iVar13;
    uVar10 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar13 + ((uVar8 ^ uVar12) & (uVar7 ^ uVar8) ^ uVar8);
    uVar20 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar15 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    auVar29 = vpor_avx(auVar33,auVar32);
    auVar33 = aesenclast(auVar24,param_4[0xe]);
    auVar32 = *param_4;
    uVar20 = (uVar20 >> 5 | uVar20 << 0x1b) ^ uVar19;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar10;
    iVar13 = uVar6 + local_90._12_4_ + ((uVar18 ^ uVar17) & uVar19 ^ uVar17) +
             (uVar20 >> 6 | uVar20 << 0x1a);
    auVar33 = vpand_avx(auVar33,auVar1);
    auVar33 = vpor_avx(auVar29,auVar33);
    *(undefined1 (*) [16])((long)param_1 + param_2) = auVar33;
    param_1 = pauVar14 + 2;
    uVar6 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar13 + ((uVar7 ^ uVar8) & (uVar10 ^ uVar7) ^ uVar7) +
            *param_6;
    uVar10 = uVar10 + param_6[1];
    uVar7 = uVar7 + param_6[2];
    uVar8 = uVar8 + param_6[3];
    uVar20 = uVar12 + iVar13 + param_6[4];
    uVar19 = uVar19 + param_6[5];
    uVar18 = uVar18 + param_6[6];
    uVar17 = uVar17 + param_6[7];
    *param_6 = uVar6;
    param_6[1] = uVar10;
    param_6[2] = uVar7;
    param_6[3] = uVar8;
    param_6[4] = uVar20;
    param_6[5] = uVar19;
    param_6[6] = uVar18;
    param_6[7] = uVar17;
  } while (param_1 < pauVar9);
  *param_5 = auVar33;
  return;
}

