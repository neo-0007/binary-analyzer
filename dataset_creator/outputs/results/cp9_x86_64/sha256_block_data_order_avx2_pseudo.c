
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_block_data_order_avx2(int *param_1,long param_2,long param_3)

{
  undefined1 (*pauVar1) [32];
  int *piVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [32];
  undefined1 (*pauVar13) [32];
  undefined1 (*pauVar14) [32];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 (*pauVar20) [32];
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
  undefined1 auStack_250 [544];
  
  uVar11 = (ulong)auStack_250 & 0xfffffffffffffc00;
  pauVar1 = (undefined1 (*) [32])(param_2 + param_3 * 0x40);
  pauVar12 = (undefined1 (*) [32])(uVar11 + 0x1c0);
  *(int **)(uVar11 + 0x200) = param_1;
  *(long *)(uVar11 + 0x208) = param_2;
  *(undefined1 (**) [32])(uVar11 + 0x210) = pauVar1;
  *(BADSPACEBASE **)(uVar11 + 0x218) = register0x00000020;
  auVar4 = _DAT_005768c0;
  auVar3 = _DAT_005768a0;
  pauVar14 = (undefined1 (*) [32])(param_2 + 0x40);
  iVar6 = *param_1;
  uVar10 = param_1[1];
  uVar8 = param_1[2];
  pauVar20 = pauVar14;
  if (pauVar14 == pauVar1) {
    pauVar20 = (undefined1 (*) [32])(uVar11 + 0x1c0);
  }
  uVar9 = param_1[3];
  uVar16 = param_1[4];
  uVar17 = param_1[5];
  uVar18 = param_1[6];
  uVar19 = param_1[7];
  do {
    auVar21._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])*pauVar20 +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar14[-2];
    auVar21._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])*pauVar20;
    auVar31._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(*pauVar20 + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar14[-2] + 0x10);
    auVar31._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(*pauVar20 + 0x10);
    auVar25 = vpshufb_avx2(auVar21,_DAT_00576880);
    auVar22._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])pauVar20[1] +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar14[-1];
    auVar22._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar20[1];
    auVar27 = vpshufb_avx2(auVar31,_DAT_00576880);
    auVar23._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(pauVar20[1] + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar14[-1] + 0x10);
    auVar23._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar20[1] + 0x10);
    auVar28 = vpshufb_avx2(auVar22,_DAT_00576880);
    auVar21 = vpaddd_avx2(auVar25,_K256);
    auVar29 = vpshufb_avx2(auVar23,_DAT_00576880);
    auVar31 = vpaddd_avx2(auVar27,_DAT_005766a0);
    auVar22 = vpaddd_avx2(auVar28,_DAT_005766c0);
    auVar23 = vpaddd_avx2(auVar29,_DAT_005766e0);
    *pauVar12 = auVar21;
    uVar5 = 0;
    pauVar12[1] = auVar31;
    *(undefined8 *)(pauVar12[-3] + 0x18) = *(undefined8 *)(pauVar12[2] + 0x18);
    pauVar12[-2] = auVar22;
    uVar15 = uVar10 ^ uVar8;
    pauVar12[-1] = auVar23;
    pauVar1 = pauVar12 + -2;
    pauVar12 = (undefined1 (*) [32])&DAT_00576700;
    do {
      pauVar13 = pauVar1;
      *(undefined8 *)(pauVar13[-3] + 0x18) = *(undefined8 *)(pauVar13[-1] + 0x18);
      auVar31 = vpalignr_avx2(auVar27,auVar25,4);
      auVar21 = vpalignr_avx2(auVar29,auVar28,4);
      uVar5 = iVar6 + uVar5;
      auVar24 = vpsrld_avx2(auVar31,7);
      auVar21 = vpaddd_avx2(auVar25,auVar21);
      auVar30 = vpsrld_avx2(auVar31,3);
      iVar6 = uVar19 + *(int *)pauVar13[2] + (uVar17 & uVar16) + (~uVar16 & uVar18) +
              ((uVar16 >> 0x19 | uVar16 << 7) ^ (uVar16 >> 0xb | uVar16 << 0x15) ^
              (uVar16 >> 6 | uVar16 << 0x1a));
      auVar22 = vpslld_avx2(auVar31,0xe);
      uVar9 = uVar9 + iVar6;
      auVar31 = vpshufd_avx2(auVar29,0xfa);
      auVar25 = vpsrld_avx2(auVar24,0xb);
      uVar19 = iVar6 + (uVar15 & (uVar5 ^ uVar10) ^ uVar10) +
               ((uVar5 >> 0xd | uVar5 * 0x80000) ^ (uVar5 >> 0x16 | uVar5 * 0x400) ^
               (uVar5 >> 2 | uVar5 * 0x40000000));
      auVar23 = vpslld_avx2(auVar22,0xb);
      auVar26 = vpsrld_avx2(auVar31,10);
      iVar6 = uVar18 + *(int *)(pauVar13[2] + 4) + (uVar16 & uVar9) + (~uVar9 & uVar17) +
              ((uVar9 >> 0x19 | uVar9 * 0x80) ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^
              (uVar9 >> 6 | uVar9 * 0x4000000));
      uVar8 = uVar8 + iVar6;
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar21 = vpaddd_avx2(auVar21,auVar30 ^ auVar24 ^ auVar22 ^ auVar25 ^ auVar23);
      auVar22 = vpsrlq_avx2(auVar31,2);
      uVar18 = iVar6 + ((uVar5 ^ uVar10) & (uVar19 ^ uVar5) ^ uVar5) +
               ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 0x16 | uVar19 * 0x400) ^
               (uVar19 >> 2 | uVar19 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar26 ^ auVar31 ^ auVar22,auVar3);
      auVar21 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar17 + *(int *)(pauVar13[2] + 8) + (uVar9 & uVar8) + (~uVar8 & uVar16) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      auVar31 = vpshufd_avx2(auVar21,0x50);
      uVar10 = uVar10 + iVar6;
      auVar22 = vpsrld_avx2(auVar31,10);
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar23 = vpsrlq_avx2(auVar31,2);
      uVar17 = iVar6 + ((uVar19 ^ uVar5) & (uVar18 ^ uVar19) ^ uVar19) +
               ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
               (uVar18 >> 2 | uVar18 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar22 ^ auVar31 ^ auVar23,auVar4);
      auVar25 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar16 + *(int *)(pauVar13[2] + 0xc) + (uVar8 & uVar10) + (~uVar10 & uVar9) +
              ((uVar10 >> 0x19 | uVar10 * 0x80) ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^
              (uVar10 >> 6 | uVar10 * 0x4000000));
      auVar21 = vpaddd_avx2(auVar25,*pauVar12);
      uVar5 = uVar5 + iVar6;
      pauVar13[-2] = auVar21;
      auVar31 = vpalignr_avx2(auVar28,auVar27,4);
      auVar21 = vpalignr_avx2(auVar25,auVar29,4);
      uVar16 = iVar6 + ((uVar18 ^ uVar19) & (uVar17 ^ uVar18) ^ uVar18) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
               (uVar17 >> 2 | uVar17 * 0x40000000));
      auVar24 = vpsrld_avx2(auVar31,7);
      auVar21 = vpaddd_avx2(auVar27,auVar21);
      auVar30 = vpsrld_avx2(auVar31,3);
      iVar6 = uVar9 + *(int *)pauVar13[3] + (uVar10 & uVar5) + (~uVar5 & uVar8) +
              ((uVar5 >> 0x19 | uVar5 * 0x80) ^ (uVar5 >> 0xb | uVar5 * 0x200000) ^
              (uVar5 >> 6 | uVar5 * 0x4000000));
      auVar22 = vpslld_avx2(auVar31,0xe);
      uVar19 = uVar19 + iVar6;
      auVar31 = vpshufd_avx2(auVar25,0xfa);
      auVar27 = vpsrld_avx2(auVar24,0xb);
      uVar9 = iVar6 + ((uVar17 ^ uVar18) & (uVar16 ^ uVar17) ^ uVar17) +
              ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
              (uVar16 >> 2 | uVar16 * 0x40000000));
      auVar23 = vpslld_avx2(auVar22,0xb);
      auVar26 = vpsrld_avx2(auVar31,10);
      iVar6 = uVar8 + *(int *)(pauVar13[3] + 4) + (uVar5 & uVar19) + (~uVar19 & uVar10) +
              ((uVar19 >> 0x19 | uVar19 * 0x80) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
              (uVar19 >> 6 | uVar19 * 0x4000000));
      uVar18 = uVar18 + iVar6;
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar21 = vpaddd_avx2(auVar21,auVar30 ^ auVar24 ^ auVar22 ^ auVar27 ^ auVar23);
      auVar22 = vpsrlq_avx2(auVar31,2);
      uVar8 = iVar6 + ((uVar16 ^ uVar17) & (uVar9 ^ uVar16) ^ uVar16) +
              ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 0x16 | uVar9 * 0x400) ^
              (uVar9 >> 2 | uVar9 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar26 ^ auVar31 ^ auVar22,auVar3);
      auVar21 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar10 + *(int *)(pauVar13[3] + 8) + (uVar19 & uVar18) + (~uVar18 & uVar5) +
              ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
              (uVar18 >> 6 | uVar18 * 0x4000000));
      auVar31 = vpshufd_avx2(auVar21,0x50);
      uVar17 = uVar17 + iVar6;
      auVar22 = vpsrld_avx2(auVar31,10);
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar23 = vpsrlq_avx2(auVar31,2);
      uVar10 = iVar6 + ((uVar9 ^ uVar16) & (uVar8 ^ uVar9) ^ uVar9) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar22 ^ auVar31 ^ auVar23,auVar4);
      auVar27 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar5 + *(int *)(pauVar13[3] + 0xc) + (uVar18 & uVar17) + (~uVar17 & uVar19) +
              ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
              (uVar17 >> 6 | uVar17 * 0x4000000));
      auVar21 = vpaddd_avx2(auVar27,pauVar12[1]);
      uVar16 = uVar16 + iVar6;
      pauVar13[-1] = auVar21;
      pauVar1 = pauVar13 + -4;
      *(undefined8 *)(pauVar13[-5] + 0x18) = *(undefined8 *)(pauVar13[-3] + 0x18);
      auVar31 = vpalignr_avx2(auVar29,auVar28,4);
      auVar21 = vpalignr_avx2(auVar27,auVar25,4);
      uVar5 = iVar6 + ((uVar8 ^ uVar9) & (uVar10 ^ uVar8) ^ uVar8) +
              ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 0x16 | uVar10 * 0x400) ^
              (uVar10 >> 2 | uVar10 * 0x40000000));
      auVar24 = vpsrld_avx2(auVar31,7);
      auVar21 = vpaddd_avx2(auVar28,auVar21);
      auVar30 = vpsrld_avx2(auVar31,3);
      iVar6 = uVar19 + *(int *)*pauVar13 + (uVar17 & uVar16) + (~uVar16 & uVar18) +
              ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
              (uVar16 >> 6 | uVar16 * 0x4000000));
      auVar22 = vpslld_avx2(auVar31,0xe);
      uVar9 = uVar9 + iVar6;
      auVar31 = vpshufd_avx2(auVar27,0xfa);
      auVar28 = vpsrld_avx2(auVar24,0xb);
      uVar19 = iVar6 + ((uVar10 ^ uVar8) & (uVar5 ^ uVar10) ^ uVar10) +
               ((uVar5 >> 0xd | uVar5 * 0x80000) ^ (uVar5 >> 0x16 | uVar5 * 0x400) ^
               (uVar5 >> 2 | uVar5 * 0x40000000));
      auVar23 = vpslld_avx2(auVar22,0xb);
      auVar26 = vpsrld_avx2(auVar31,10);
      iVar6 = uVar18 + *(int *)(*pauVar13 + 4) + (uVar16 & uVar9) + (~uVar9 & uVar17) +
              ((uVar9 >> 0x19 | uVar9 * 0x80) ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^
              (uVar9 >> 6 | uVar9 * 0x4000000));
      uVar8 = uVar8 + iVar6;
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar21 = vpaddd_avx2(auVar21,auVar30 ^ auVar24 ^ auVar22 ^ auVar28 ^ auVar23);
      auVar22 = vpsrlq_avx2(auVar31,2);
      uVar18 = iVar6 + ((uVar5 ^ uVar10) & (uVar19 ^ uVar5) ^ uVar5) +
               ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 0x16 | uVar19 * 0x400) ^
               (uVar19 >> 2 | uVar19 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar26 ^ auVar31 ^ auVar22,auVar3);
      auVar21 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar17 + *(int *)(*pauVar13 + 8) + (uVar9 & uVar8) + (~uVar8 & uVar16) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      auVar31 = vpshufd_avx2(auVar21,0x50);
      uVar10 = uVar10 + iVar6;
      auVar22 = vpsrld_avx2(auVar31,10);
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar23 = vpsrlq_avx2(auVar31,2);
      uVar17 = iVar6 + ((uVar19 ^ uVar5) & (uVar18 ^ uVar19) ^ uVar19) +
               ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
               (uVar18 >> 2 | uVar18 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar22 ^ auVar31 ^ auVar23,auVar4);
      auVar28 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar16 + *(int *)(*pauVar13 + 0xc) + (uVar8 & uVar10) + (~uVar10 & uVar9) +
              ((uVar10 >> 0x19 | uVar10 * 0x80) ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^
              (uVar10 >> 6 | uVar10 * 0x4000000));
      auVar21 = vpaddd_avx2(auVar28,pauVar12[2]);
      uVar5 = uVar5 + iVar6;
      *pauVar1 = auVar21;
      auVar31 = vpalignr_avx2(auVar25,auVar29,4);
      auVar21 = vpalignr_avx2(auVar28,auVar27,4);
      uVar16 = iVar6 + ((uVar18 ^ uVar19) & (uVar17 ^ uVar18) ^ uVar18) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
               (uVar17 >> 2 | uVar17 * 0x40000000));
      auVar24 = vpsrld_avx2(auVar31,7);
      auVar21 = vpaddd_avx2(auVar29,auVar21);
      auVar30 = vpsrld_avx2(auVar31,3);
      iVar6 = uVar9 + *(int *)pauVar13[1] + (uVar10 & uVar5) + (~uVar5 & uVar8) +
              ((uVar5 >> 0x19 | uVar5 * 0x80) ^ (uVar5 >> 0xb | uVar5 * 0x200000) ^
              (uVar5 >> 6 | uVar5 * 0x4000000));
      auVar22 = vpslld_avx2(auVar31,0xe);
      uVar19 = uVar19 + iVar6;
      auVar31 = vpshufd_avx2(auVar28,0xfa);
      auVar29 = vpsrld_avx2(auVar24,0xb);
      uVar9 = iVar6 + ((uVar17 ^ uVar18) & (uVar16 ^ uVar17) ^ uVar17) +
              ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
              (uVar16 >> 2 | uVar16 * 0x40000000));
      auVar23 = vpslld_avx2(auVar22,0xb);
      auVar26 = vpsrld_avx2(auVar31,10);
      iVar6 = uVar8 + *(int *)(pauVar13[1] + 4) + (uVar5 & uVar19) + (~uVar19 & uVar10) +
              ((uVar19 >> 0x19 | uVar19 * 0x80) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
              (uVar19 >> 6 | uVar19 * 0x4000000));
      uVar18 = uVar18 + iVar6;
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar21 = vpaddd_avx2(auVar21,auVar30 ^ auVar24 ^ auVar22 ^ auVar29 ^ auVar23);
      auVar22 = vpsrlq_avx2(auVar31,2);
      uVar8 = iVar6 + ((uVar16 ^ uVar17) & (uVar9 ^ uVar16) ^ uVar16) +
              ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 0x16 | uVar9 * 0x400) ^
              (uVar9 >> 2 | uVar9 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar26 ^ auVar31 ^ auVar22,auVar3);
      auVar21 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar10 + *(int *)(pauVar13[1] + 8) + (uVar19 & uVar18) + (~uVar18 & uVar5) +
              ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
              (uVar18 >> 6 | uVar18 * 0x4000000));
      auVar31 = vpshufd_avx2(auVar21,0x50);
      uVar17 = uVar17 + iVar6;
      auVar22 = vpsrld_avx2(auVar31,10);
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar23 = vpsrlq_avx2(auVar31,2);
      uVar10 = iVar6 + ((uVar9 ^ uVar16) & (uVar8 ^ uVar9) ^ uVar9) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar22 ^ auVar31 ^ auVar23,auVar4);
      auVar29 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar5 + *(int *)(pauVar13[1] + 0xc) + (uVar18 & uVar17) + (~uVar17 & uVar19) +
              ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
              (uVar17 >> 6 | uVar17 * 0x4000000));
      uVar15 = uVar10 ^ uVar8;
      auVar21 = vpaddd_avx2(auVar29,pauVar12[3]);
      uVar16 = uVar16 + iVar6;
      uVar5 = (uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 0x16 | uVar10 * 0x400) ^
              (uVar10 >> 2 | uVar10 * 0x40000000);
      iVar6 = iVar6 + ((uVar8 ^ uVar9) & uVar15 ^ uVar8);
      pauVar13[-3] = auVar21;
      pauVar20 = pauVar12 + 4;
      pauVar12 = pauVar12 + 4;
    } while (*(char *)((long)*pauVar20 + 3) != '\0');
    uVar5 = iVar6 + uVar5;
    iVar6 = uVar19 + *(int *)pauVar13[-2] + (uVar17 & uVar16) + (~uVar16 & uVar18) +
            ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
            (uVar16 >> 6 | uVar16 * 0x4000000));
    uVar9 = uVar9 + iVar6;
    uVar19 = iVar6 + (uVar15 & (uVar5 ^ uVar10) ^ uVar10) +
             ((uVar5 >> 0xd | uVar5 * 0x80000) ^ (uVar5 >> 0x16 | uVar5 * 0x400) ^
             (uVar5 >> 2 | uVar5 * 0x40000000));
    iVar6 = uVar18 + *(int *)(pauVar13[-2] + 4) + (uVar16 & uVar9) + (~uVar9 & uVar17) +
            ((uVar9 >> 0x19 | uVar9 * 0x80) ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^
            (uVar9 >> 6 | uVar9 * 0x4000000));
    uVar8 = uVar8 + iVar6;
    uVar18 = iVar6 + ((uVar5 ^ uVar10) & (uVar19 ^ uVar5) ^ uVar5) +
             ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 0x16 | uVar19 * 0x400) ^
             (uVar19 >> 2 | uVar19 * 0x40000000));
    iVar6 = uVar17 + *(int *)(pauVar13[-2] + 8) + (uVar9 & uVar8) + (~uVar8 & uVar16) +
            ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
            (uVar8 >> 6 | uVar8 * 0x4000000));
    uVar10 = uVar10 + iVar6;
    uVar17 = iVar6 + ((uVar19 ^ uVar5) & (uVar18 ^ uVar19) ^ uVar19) +
             ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
             (uVar18 >> 2 | uVar18 * 0x40000000));
    iVar6 = uVar16 + *(int *)(pauVar13[-2] + 0xc) + (uVar8 & uVar10) + (~uVar10 & uVar9) +
            ((uVar10 >> 0x19 | uVar10 * 0x80) ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^
            (uVar10 >> 6 | uVar10 * 0x4000000));
    uVar5 = uVar5 + iVar6;
    uVar16 = iVar6 + ((uVar18 ^ uVar19) & (uVar17 ^ uVar18) ^ uVar18) +
             ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
             (uVar17 >> 2 | uVar17 * 0x40000000));
    iVar6 = uVar9 + *(int *)pauVar13[-1] + (uVar10 & uVar5) + (~uVar5 & uVar8) +
            ((uVar5 >> 0x19 | uVar5 * 0x80) ^ (uVar5 >> 0xb | uVar5 * 0x200000) ^
            (uVar5 >> 6 | uVar5 * 0x4000000));
    uVar19 = uVar19 + iVar6;
    uVar9 = iVar6 + ((uVar17 ^ uVar18) & (uVar16 ^ uVar17) ^ uVar17) +
            ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
            (uVar16 >> 2 | uVar16 * 0x40000000));
    iVar6 = uVar8 + *(int *)(pauVar13[-1] + 4) + (uVar5 & uVar19) + (~uVar19 & uVar10) +
            ((uVar19 >> 0x19 | uVar19 * 0x80) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
            (uVar19 >> 6 | uVar19 * 0x4000000));
    uVar18 = uVar18 + iVar6;
    uVar8 = iVar6 + ((uVar16 ^ uVar17) & (uVar9 ^ uVar16) ^ uVar16) +
            ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 0x16 | uVar9 * 0x400) ^
            (uVar9 >> 2 | uVar9 * 0x40000000));
    iVar6 = uVar10 + *(int *)(pauVar13[-1] + 8) + (uVar19 & uVar18) + (~uVar18 & uVar5) +
            ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
            (uVar18 >> 6 | uVar18 * 0x4000000));
    uVar17 = uVar17 + iVar6;
    uVar10 = iVar6 + ((uVar9 ^ uVar16) & (uVar8 ^ uVar9) ^ uVar9) +
             ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
             (uVar8 >> 2 | uVar8 * 0x40000000));
    iVar6 = uVar5 + *(int *)(pauVar13[-1] + 0xc) + (uVar18 & uVar17) + (~uVar17 & uVar19) +
            ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
            (uVar17 >> 6 | uVar17 * 0x4000000));
    uVar16 = uVar16 + iVar6;
    uVar5 = iVar6 + ((uVar8 ^ uVar9) & (uVar10 ^ uVar8) ^ uVar8) +
            ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 0x16 | uVar10 * 0x400) ^
            (uVar10 >> 2 | uVar10 * 0x40000000));
    iVar6 = uVar19 + *(int *)*pauVar1 + (uVar17 & uVar16) + (~uVar16 & uVar18) +
            ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
            (uVar16 >> 6 | uVar16 * 0x4000000));
    uVar9 = uVar9 + iVar6;
    uVar19 = iVar6 + ((uVar10 ^ uVar8) & (uVar5 ^ uVar10) ^ uVar10) +
             ((uVar5 >> 0xd | uVar5 * 0x80000) ^ (uVar5 >> 0x16 | uVar5 * 0x400) ^
             (uVar5 >> 2 | uVar5 * 0x40000000));
    iVar6 = uVar18 + *(int *)(pauVar13[-4] + 4) + (uVar16 & uVar9) + (~uVar9 & uVar17) +
            ((uVar9 >> 0x19 | uVar9 * 0x80) ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^
            (uVar9 >> 6 | uVar9 * 0x4000000));
    uVar8 = uVar8 + iVar6;
    uVar18 = iVar6 + ((uVar5 ^ uVar10) & (uVar19 ^ uVar5) ^ uVar5) +
             ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 0x16 | uVar19 * 0x400) ^
             (uVar19 >> 2 | uVar19 * 0x40000000));
    iVar6 = uVar17 + *(int *)(pauVar13[-4] + 8) + (uVar9 & uVar8) + (~uVar8 & uVar16) +
            ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
            (uVar8 >> 6 | uVar8 * 0x4000000));
    uVar10 = uVar10 + iVar6;
    uVar17 = iVar6 + ((uVar19 ^ uVar5) & (uVar18 ^ uVar19) ^ uVar19) +
             ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
             (uVar18 >> 2 | uVar18 * 0x40000000));
    iVar6 = uVar16 + *(int *)(pauVar13[-4] + 0xc) + (uVar8 & uVar10) + (~uVar10 & uVar9) +
            ((uVar10 >> 0x19 | uVar10 * 0x80) ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^
            (uVar10 >> 6 | uVar10 * 0x4000000));
    uVar5 = uVar5 + iVar6;
    uVar16 = iVar6 + ((uVar18 ^ uVar19) & (uVar17 ^ uVar18) ^ uVar18) +
             ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
             (uVar17 >> 2 | uVar17 * 0x40000000));
    iVar6 = uVar9 + *(int *)pauVar13[-3] + (uVar10 & uVar5) + (~uVar5 & uVar8) +
            ((uVar5 >> 0x19 | uVar5 * 0x80) ^ (uVar5 >> 0xb | uVar5 * 0x200000) ^
            (uVar5 >> 6 | uVar5 * 0x4000000));
    uVar19 = uVar19 + iVar6;
    uVar9 = iVar6 + ((uVar17 ^ uVar18) & (uVar16 ^ uVar17) ^ uVar17) +
            ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
            (uVar16 >> 2 | uVar16 * 0x40000000));
    iVar6 = uVar8 + *(int *)(pauVar13[-3] + 4) + (uVar5 & uVar19) + (~uVar19 & uVar10) +
            ((uVar19 >> 0x19 | uVar19 * 0x80) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
            (uVar19 >> 6 | uVar19 * 0x4000000));
    uVar18 = uVar18 + iVar6;
    uVar8 = iVar6 + ((uVar16 ^ uVar17) & (uVar9 ^ uVar16) ^ uVar16) +
            ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 0x16 | uVar9 * 0x400) ^
            (uVar9 >> 2 | uVar9 * 0x40000000));
    iVar6 = uVar10 + *(int *)(pauVar13[-3] + 8) + (uVar19 & uVar18) + (~uVar18 & uVar5) +
            ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
            (uVar18 >> 6 | uVar18 * 0x4000000));
    uVar17 = uVar17 + iVar6;
    uVar10 = iVar6 + ((uVar9 ^ uVar16) & (uVar8 ^ uVar9) ^ uVar9) +
             ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
             (uVar8 >> 2 | uVar8 * 0x40000000));
    iVar6 = uVar5 + *(int *)(pauVar13[-3] + 0xc) + (uVar18 & uVar17) + (~uVar17 & uVar19) +
            ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
            (uVar17 >> 6 | uVar17 * 0x4000000));
    piVar2 = *(int **)pauVar13[0xc];
    pauVar12 = pauVar13 + 10;
    iVar7 = iVar6 + ((uVar8 ^ uVar9) & (uVar10 ^ uVar8) ^ uVar8) +
            ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 0x16 | uVar10 * 0x400) ^
            (uVar10 >> 2 | uVar10 * 0x40000000)) + *piVar2;
    uVar10 = uVar10 + piVar2[1];
    uVar8 = uVar8 + piVar2[2];
    uVar9 = uVar9 + piVar2[3];
    uVar16 = uVar16 + iVar6 + piVar2[4];
    uVar17 = uVar17 + piVar2[5];
    uVar18 = uVar18 + piVar2[6];
    uVar19 = uVar19 + piVar2[7];
    *piVar2 = iVar7;
    piVar2[1] = uVar10;
    piVar2[2] = uVar8;
    piVar2[3] = uVar9;
    piVar2[4] = uVar16;
    piVar2[5] = uVar17;
    piVar2[6] = uVar18;
    piVar2[7] = uVar19;
    if (pauVar14 == *(undefined1 (**) [32])(pauVar13[0xc] + 0x10)) {
      return;
    }
    uVar5 = 0;
    uVar15 = uVar10 ^ uVar8;
    do {
      uVar5 = iVar7 + uVar5;
      iVar6 = uVar19 + *(int *)(*pauVar12 + 0x10) + (uVar17 & uVar16) + (~uVar16 & uVar18) +
              ((uVar16 >> 0x19 | uVar16 << 7) ^ (uVar16 >> 0xb | uVar16 << 0x15) ^
              (uVar16 >> 6 | uVar16 << 0x1a));
      uVar9 = uVar9 + iVar6;
      uVar19 = iVar6 + (uVar15 & (uVar5 ^ uVar10) ^ uVar10) +
               ((uVar5 >> 0xd | uVar5 * 0x80000) ^ (uVar5 >> 0x16 | uVar5 * 0x400) ^
               (uVar5 >> 2 | uVar5 * 0x40000000));
      iVar6 = uVar18 + *(int *)(*pauVar12 + 0x14) + (uVar16 & uVar9) + (~uVar9 & uVar17) +
              ((uVar9 >> 0x19 | uVar9 * 0x80) ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^
              (uVar9 >> 6 | uVar9 * 0x4000000));
      uVar8 = uVar8 + iVar6;
      uVar18 = iVar6 + ((uVar5 ^ uVar10) & (uVar19 ^ uVar5) ^ uVar5) +
               ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 0x16 | uVar19 * 0x400) ^
               (uVar19 >> 2 | uVar19 * 0x40000000));
      iVar6 = uVar17 + *(int *)(*pauVar12 + 0x18) + (uVar9 & uVar8) + (~uVar8 & uVar16) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      uVar10 = uVar10 + iVar6;
      uVar17 = iVar6 + ((uVar19 ^ uVar5) & (uVar18 ^ uVar19) ^ uVar19) +
               ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
               (uVar18 >> 2 | uVar18 * 0x40000000));
      iVar6 = uVar16 + *(int *)(*pauVar12 + 0x1c) + (uVar8 & uVar10) + (~uVar10 & uVar9) +
              ((uVar10 >> 0x19 | uVar10 * 0x80) ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^
              (uVar10 >> 6 | uVar10 * 0x4000000));
      uVar5 = uVar5 + iVar6;
      uVar16 = iVar6 + ((uVar18 ^ uVar19) & (uVar17 ^ uVar18) ^ uVar18) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
               (uVar17 >> 2 | uVar17 * 0x40000000));
      iVar6 = uVar9 + *(int *)(pauVar12[1] + 0x10) + (uVar10 & uVar5) + (~uVar5 & uVar8) +
              ((uVar5 >> 0x19 | uVar5 * 0x80) ^ (uVar5 >> 0xb | uVar5 * 0x200000) ^
              (uVar5 >> 6 | uVar5 * 0x4000000));
      uVar19 = uVar19 + iVar6;
      uVar9 = iVar6 + ((uVar17 ^ uVar18) & (uVar16 ^ uVar17) ^ uVar17) +
              ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
              (uVar16 >> 2 | uVar16 * 0x40000000));
      iVar6 = uVar8 + *(int *)(pauVar12[1] + 0x14) + (uVar5 & uVar19) + (~uVar19 & uVar10) +
              ((uVar19 >> 0x19 | uVar19 * 0x80) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
              (uVar19 >> 6 | uVar19 * 0x4000000));
      uVar18 = uVar18 + iVar6;
      uVar8 = iVar6 + ((uVar16 ^ uVar17) & (uVar9 ^ uVar16) ^ uVar16) +
              ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 0x16 | uVar9 * 0x400) ^
              (uVar9 >> 2 | uVar9 * 0x40000000));
      iVar6 = uVar10 + *(int *)(pauVar12[1] + 0x18) + (uVar19 & uVar18) + (~uVar18 & uVar5) +
              ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
              (uVar18 >> 6 | uVar18 * 0x4000000));
      uVar17 = uVar17 + iVar6;
      uVar10 = iVar6 + ((uVar9 ^ uVar16) & (uVar8 ^ uVar9) ^ uVar9) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      iVar7 = uVar5 + *(int *)(pauVar12[1] + 0x1c) + (uVar18 & uVar17) + (~uVar17 & uVar19) +
              ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
              (uVar17 >> 6 | uVar17 * 0x4000000));
      uVar15 = uVar10 ^ uVar8;
      uVar16 = uVar16 + iVar7;
      uVar5 = (uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 0x16 | uVar10 * 0x400) ^
              (uVar10 >> 2 | uVar10 * 0x40000000);
      iVar7 = iVar7 + ((uVar8 ^ uVar9) & uVar15 ^ uVar8);
      pauVar12 = pauVar12 + -2;
    } while (pauVar1 <= pauVar12);
    piVar2 = *(int **)pauVar13[0xc];
    pauVar12 = pauVar13 + 10;
    iVar6 = iVar7 + uVar5 + *piVar2;
    uVar10 = uVar10 + piVar2[1];
    uVar8 = uVar8 + piVar2[2];
    uVar9 = uVar9 + piVar2[3];
    uVar16 = uVar16 + piVar2[4];
    uVar17 = uVar17 + piVar2[5];
    pauVar14 = pauVar14 + 4;
    uVar18 = uVar18 + piVar2[6];
    uVar19 = uVar19 + piVar2[7];
    pauVar1 = *(undefined1 (**) [32])(pauVar13[0xc] + 0x10);
    *piVar2 = iVar6;
    pauVar20 = pauVar14;
    if (pauVar14 == pauVar1) {
      pauVar20 = pauVar12;
    }
    piVar2[1] = uVar10;
    piVar2[2] = uVar8;
    piVar2[3] = uVar9;
    piVar2[4] = uVar16;
    piVar2[5] = uVar17;
    piVar2[6] = uVar18;
    piVar2[7] = uVar19;
  } while (pauVar14 <= pauVar1);
  return;
}

