
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aesni_cbc_sha256_enc_avx2
               (long param_1,long param_2,long param_3,undefined1 (*param_4) [16],
               undefined1 (*param_5) [16],int *param_6,long param_7)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 (*pauVar7) [32];
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [32];
  undefined1 (*pauVar17) [32];
  undefined1 (*pauVar18) [32];
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined1 (*pauVar25) [16];
  long lVar26;
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [64];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [64];
  undefined1 auVar43 [16];
  long lVar44;
  undefined1 auVar45 [64];
  undefined1 auStack_270 [576];
  
  uVar15 = (ulong)auStack_270 & 0xfffffffffffffc00;
  pauVar16 = (undefined1 (*) [32])(uVar15 + 0x1c0);
  param_7 = param_7 - param_1;
  uVar13 = param_3 * 0x40 + param_1;
  *(ulong *)(uVar15 + 0x210) = uVar13;
  *(undefined1 (**) [16])(uVar15 + 0x220) = param_5;
  *(int **)(uVar15 + 0x228) = param_6;
  *(long *)(uVar15 + 0x230) = param_7;
  *(BADSPACEBASE **)(uVar15 + 0x238) = register0x00000020;
  auVar5 = vpinsrq_avx(ZEXT816(0),param_2 - param_1,1);
  auVar45 = ZEXT1664(auVar5);
  pauVar1 = param_4 + 8;
  auVar38 = ZEXT1664(*param_5);
  lVar26 = (ulong)*(uint *)param_4[0xf] - 9;
  auVar5 = *(undefined1 (*) [16])(&DAT_0048e8a0 + lVar26 * 8);
  auVar2 = *(undefined1 (*) [16])(&DAT_0048e8b0 + lVar26 * 8);
  auVar3 = *(undefined1 (*) [16])(&DAT_0048e8c0 + lVar26 * 8);
  uVar24 = param_1 + 0x40;
  iVar9 = *param_6;
  uVar14 = param_6[1];
  uVar11 = param_6[2];
  pauVar18 = (undefined1 (*) [32])(param_7 + uVar24);
  if (uVar24 == uVar13) {
    pauVar18 = (undefined1 (*) [32])(uVar15 + 0x1c0);
  }
  uVar12 = param_6[3];
  uVar20 = param_6[4];
  uVar21 = param_6[5];
  uVar22 = param_6[6];
  uVar23 = param_6[7];
  auVar42 = ZEXT1664(*param_4);
  do {
    auVar27._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])*pauVar18 +
         ZEXT116(1) * *(undefined1 (*) [16])(param_7 + -0x40 + uVar24);
    auVar27._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])*pauVar18;
    auVar37._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(*pauVar18 + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(param_7 + -0x30 + uVar24);
    auVar37._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(*pauVar18 + 0x10);
    auVar31 = vpshufb_avx2(auVar27,_DAT_0048e880);
    auVar28._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])pauVar18[1] +
         ZEXT116(1) * *(undefined1 (*) [16])(param_7 + -0x20 + uVar24);
    auVar28._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar18[1];
    auVar33 = vpshufb_avx2(auVar37,_DAT_0048e880);
    auVar29._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(pauVar18[1] + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(param_7 + -0x10 + uVar24);
    auVar29._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar18[1] + 0x10);
    auVar34 = vpshufb_avx2(auVar28,_DAT_0048e880);
    pauVar25 = (undefined1 (*) [16])(uVar24 - 0x40);
    auVar27 = vpaddd_avx2(auVar31,_K256);
    auVar35 = vpshufb_avx2(auVar29,_DAT_0048e880);
    auVar37 = vpaddd_avx2(auVar33,_DAT_0048e6a0);
    auVar28 = vpaddd_avx2(auVar34,_DAT_0048e6c0);
    auVar29 = vpaddd_avx2(auVar35,_DAT_0048e6e0);
    *pauVar16 = auVar27;
    uVar8 = 0;
    pauVar16[1] = auVar37;
    *(undefined8 *)(pauVar16[-3] + 0x18) = *(undefined8 *)(pauVar16[3] + 0x18);
    pauVar16[-2] = auVar28;
    uVar19 = uVar14 ^ uVar11;
    pauVar16[-1] = auVar29;
    pauVar16 = pauVar16 + -2;
    pauVar18 = (undefined1 (*) [32])&DAT_0048e700;
    do {
      pauVar17 = pauVar16;
      auVar39 = *pauVar25;
      auVar6 = vpinsrq_avx(auVar45._0_16_,pauVar25,0);
      auVar45 = ZEXT1664(auVar6);
      *(undefined8 *)(pauVar17[-3] + 0x18) = *(undefined8 *)(pauVar17[-1] + 0x18);
      auVar37 = vpalignr_avx2(auVar33,auVar31,4);
      auVar27 = vpalignr_avx2(auVar35,auVar34,4);
      uVar8 = iVar9 + uVar8;
      auVar30 = vpsrld_avx2(auVar37,7);
      auVar27 = vpaddd_avx2(auVar31,auVar27);
      auVar36 = vpsrld_avx2(auVar37,3);
      iVar9 = uVar23 + *(int *)pauVar17[2] + (uVar21 & uVar20) + (~uVar20 & uVar22) +
              ((uVar20 >> 0x19 | uVar20 << 7) ^ (uVar20 >> 0xb | uVar20 << 0x15) ^
              (uVar20 >> 6 | uVar20 << 0x1a));
      auVar28 = vpslld_avx2(auVar37,0xe);
      uVar12 = uVar12 + iVar9;
      auVar37 = vpshufd_avx2(auVar35,0xfa);
      auVar31 = vpsrld_avx2(auVar30,0xb);
      uVar23 = iVar9 + (uVar19 & (uVar8 ^ uVar14) ^ uVar14) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      auVar29 = vpslld_avx2(auVar28,0xb);
      auVar32 = vpsrld_avx2(auVar37,10);
      iVar9 = uVar22 + *(int *)(pauVar17[2] + 4) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
              ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 6 | uVar12 * 0x4000000));
      uVar11 = uVar11 + iVar9;
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      auVar27 = vpaddd_avx2(auVar27,auVar36 ^ auVar30 ^ auVar28 ^ auVar31 ^ auVar29);
      auVar28 = vpsrlq_avx2(auVar37,2);
      uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar23 ^ uVar8) ^ uVar8) +
               ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
               (uVar23 >> 2 | uVar23 * 0x40000000));
      auVar37 = vpshufd_avx2(auVar32 ^ auVar37 ^ auVar28,0x84);
      auVar37 = vpsrldq_avx2(auVar37,8);
      iVar9 = uVar21 + *(int *)(pauVar17[2] + 8) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
              ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
              (uVar11 >> 6 | uVar11 * 0x4000000));
      auVar27 = vpaddd_avx2(auVar27,auVar37);
      uVar14 = uVar14 + iVar9;
      auVar37 = vpshufd_avx2(auVar27,0x50);
      auVar39 = aesenc(auVar39 ^ auVar42._0_16_ ^ auVar38._0_16_,param_4[1]);
      auVar28 = vpsrld_avx2(auVar37,10);
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      uVar21 = iVar9 + ((uVar23 ^ uVar8) & (uVar22 ^ uVar23) ^ uVar23) +
               ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
               (uVar22 >> 2 | uVar22 * 0x40000000));
      auVar29 = vpsrlq_avx2(auVar37,2);
      auVar37 = vpshufd_avx2(auVar28 ^ auVar37 ^ auVar29,0xe8);
      iVar9 = uVar20 + *(int *)(pauVar17[2] + 0xc) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
              ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
              (uVar14 >> 6 | uVar14 * 0x4000000));
      auVar37 = vpslldq_avx2(auVar37,8);
      uVar8 = uVar8 + iVar9;
      auVar31 = vpaddd_avx2(auVar27,auVar37);
      auVar40 = aesenc(auVar39,param_4[2]);
      auVar39 = param_4[3];
      auVar27 = vpaddd_avx2(auVar31,*pauVar18);
      pauVar17[-2] = auVar27;
      auVar37 = vpalignr_avx2(auVar34,auVar33,4);
      auVar27 = vpalignr_avx2(auVar31,auVar35,4);
      uVar20 = iVar9 + ((uVar22 ^ uVar23) & (uVar21 ^ uVar22) ^ uVar22) +
               ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
               (uVar21 >> 2 | uVar21 * 0x40000000));
      auVar30 = vpsrld_avx2(auVar37,7);
      auVar27 = vpaddd_avx2(auVar33,auVar27);
      auVar36 = vpsrld_avx2(auVar37,3);
      iVar9 = uVar12 + *(int *)pauVar17[3] + (uVar14 & uVar8) + (~uVar8 & uVar11) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      auVar28 = vpslld_avx2(auVar37,0xe);
      uVar23 = uVar23 + iVar9;
      auVar39 = aesenc(auVar40,auVar39);
      auVar37 = vpshufd_avx2(auVar31,0xfa);
      auVar33 = vpsrld_avx2(auVar30,0xb);
      uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
               ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
               (uVar20 >> 2 | uVar20 * 0x40000000));
      auVar29 = vpslld_avx2(auVar28,0xb);
      auVar32 = vpsrld_avx2(auVar37,10);
      iVar9 = uVar11 + *(int *)(pauVar17[3] + 4) + (uVar8 & uVar23) + (~uVar23 & uVar14) +
              ((uVar23 >> 0x19 | uVar23 * 0x80) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
              (uVar23 >> 6 | uVar23 * 0x4000000));
      uVar22 = uVar22 + iVar9;
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      auVar39 = aesenc(auVar39,param_4[4]);
      auVar27 = vpaddd_avx2(auVar27,auVar36 ^ auVar30 ^ auVar28 ^ auVar33 ^ auVar29);
      auVar28 = vpsrlq_avx2(auVar37,2);
      uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
               ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
               (uVar12 >> 2 | uVar12 * 0x40000000));
      auVar37 = vpshufd_avx2(auVar32 ^ auVar37 ^ auVar28,0x84);
      auVar37 = vpsrldq_avx2(auVar37,8);
      iVar9 = uVar14 + *(int *)(pauVar17[3] + 8) + (uVar23 & uVar22) + (~uVar22 & uVar8) +
              ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
              (uVar22 >> 6 | uVar22 * 0x4000000));
      auVar27 = vpaddd_avx2(auVar27,auVar37);
      uVar21 = uVar21 + iVar9;
      auVar37 = vpshufd_avx2(auVar27,0x50);
      auVar39 = aesenc(auVar39,param_4[5]);
      auVar28 = vpsrld_avx2(auVar37,10);
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
               (uVar11 >> 2 | uVar11 * 0x40000000));
      auVar29 = vpsrlq_avx2(auVar37,2);
      auVar37 = vpshufd_avx2(auVar28 ^ auVar37 ^ auVar29,0xe8);
      iVar9 = uVar8 + *(int *)(pauVar17[3] + 0xc) + (uVar22 & uVar21) + (~uVar21 & uVar23) +
              ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
              (uVar21 >> 6 | uVar21 * 0x4000000));
      auVar37 = vpslldq_avx2(auVar37,8);
      uVar20 = uVar20 + iVar9;
      auVar33 = vpaddd_avx2(auVar27,auVar37);
      auVar40 = aesenc(auVar39,param_4[6]);
      auVar39 = param_4[7];
      auVar27 = vpaddd_avx2(auVar33,pauVar18[1]);
      pauVar17[-1] = auVar27;
      pauVar16 = pauVar17 + -4;
      *(undefined8 *)(pauVar17[-5] + 0x18) = *(undefined8 *)(pauVar17[-3] + 0x18);
      auVar37 = vpalignr_avx2(auVar35,auVar34,4);
      auVar27 = vpalignr_avx2(auVar33,auVar31,4);
      uVar8 = iVar9 + ((uVar11 ^ uVar12) & (uVar14 ^ uVar11) ^ uVar11) +
              ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
              (uVar14 >> 2 | uVar14 * 0x40000000));
      auVar30 = vpsrld_avx2(auVar37,7);
      auVar27 = vpaddd_avx2(auVar34,auVar27);
      auVar36 = vpsrld_avx2(auVar37,3);
      iVar9 = uVar23 + *(int *)*pauVar17 + (uVar21 & uVar20) + (~uVar20 & uVar22) +
              ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
              (uVar20 >> 6 | uVar20 * 0x4000000));
      auVar28 = vpslld_avx2(auVar37,0xe);
      uVar12 = uVar12 + iVar9;
      auVar39 = aesenc(auVar40,auVar39);
      auVar37 = vpshufd_avx2(auVar33,0xfa);
      auVar34 = vpsrld_avx2(auVar30,0xb);
      uVar23 = iVar9 + ((uVar14 ^ uVar11) & (uVar8 ^ uVar14) ^ uVar14) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      auVar29 = vpslld_avx2(auVar28,0xb);
      auVar32 = vpsrld_avx2(auVar37,10);
      iVar9 = uVar22 + *(int *)(*pauVar17 + 4) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
              ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 6 | uVar12 * 0x4000000));
      uVar11 = uVar11 + iVar9;
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      auVar39 = aesenc(auVar39,*pauVar1);
      auVar27 = vpaddd_avx2(auVar27,auVar36 ^ auVar30 ^ auVar28 ^ auVar34 ^ auVar29);
      auVar28 = vpsrlq_avx2(auVar37,2);
      uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar23 ^ uVar8) ^ uVar8) +
               ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
               (uVar23 >> 2 | uVar23 * 0x40000000));
      auVar37 = vpshufd_avx2(auVar32 ^ auVar37 ^ auVar28,0x84);
      auVar37 = vpsrldq_avx2(auVar37,8);
      iVar9 = uVar21 + *(int *)(*pauVar17 + 8) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
              ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
              (uVar11 >> 6 | uVar11 * 0x4000000));
      auVar27 = vpaddd_avx2(auVar27,auVar37);
      uVar14 = uVar14 + iVar9;
      auVar37 = vpshufd_avx2(auVar27,0x50);
      auVar39 = aesenc(auVar39,param_4[9]);
      auVar28 = vpsrld_avx2(auVar37,10);
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      uVar21 = iVar9 + ((uVar23 ^ uVar8) & (uVar22 ^ uVar23) ^ uVar23) +
               ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
               (uVar22 >> 2 | uVar22 * 0x40000000));
      auVar29 = vpsrlq_avx2(auVar37,2);
      auVar37 = vpshufd_avx2(auVar28 ^ auVar37 ^ auVar29,0xe8);
      iVar9 = uVar20 + *(int *)(*pauVar17 + 0xc) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
              ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
              (uVar14 >> 6 | uVar14 * 0x4000000));
      auVar37 = vpslldq_avx2(auVar37,8);
      uVar8 = uVar8 + iVar9;
      auVar34 = vpaddd_avx2(auVar27,auVar37);
      auVar40 = aesenclast(auVar39,param_4[10]);
      auVar41 = aesenc(auVar39,param_4[10]);
      auVar39 = param_4[0xb];
      auVar27 = vpaddd_avx2(auVar34,pauVar18[2]);
      *pauVar16 = auVar27;
      auVar37 = vpalignr_avx2(auVar31,auVar35,4);
      auVar27 = vpalignr_avx2(auVar34,auVar33,4);
      uVar20 = iVar9 + ((uVar22 ^ uVar23) & (uVar21 ^ uVar22) ^ uVar22) +
               ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
               (uVar21 >> 2 | uVar21 * 0x40000000));
      auVar30 = vpsrld_avx2(auVar37,7);
      auVar27 = vpaddd_avx2(auVar35,auVar27);
      auVar36 = vpsrld_avx2(auVar37,3);
      iVar9 = uVar12 + *(int *)pauVar17[1] + (uVar14 & uVar8) + (~uVar8 & uVar11) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      auVar28 = vpslld_avx2(auVar37,0xe);
      uVar23 = uVar23 + iVar9;
      auVar40 = vpand_avx(auVar40,auVar3);
      auVar39 = aesenc(auVar41,auVar39);
      auVar37 = vpshufd_avx2(auVar34,0xfa);
      auVar35 = vpsrld_avx2(auVar30,0xb);
      uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
               ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
               (uVar20 >> 2 | uVar20 * 0x40000000));
      auVar29 = vpslld_avx2(auVar28,0xb);
      auVar32 = vpsrld_avx2(auVar37,10);
      iVar9 = uVar11 + *(int *)(pauVar17[1] + 4) + (uVar8 & uVar23) + (~uVar23 & uVar14) +
              ((uVar23 >> 0x19 | uVar23 * 0x80) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
              (uVar23 >> 6 | uVar23 * 0x4000000));
      uVar22 = uVar22 + iVar9;
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      auVar43 = aesenclast(auVar39,param_4[0xc]);
      auVar41 = aesenc(auVar39,param_4[0xc]);
      auVar27 = vpaddd_avx2(auVar27,auVar36 ^ auVar30 ^ auVar28 ^ auVar35 ^ auVar29);
      auVar28 = vpsrlq_avx2(auVar37,2);
      uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
               ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
               (uVar12 >> 2 | uVar12 * 0x40000000));
      auVar37 = vpshufd_avx2(auVar32 ^ auVar37 ^ auVar28,0x84);
      auVar37 = vpsrldq_avx2(auVar37,8);
      iVar9 = uVar14 + *(int *)(pauVar17[1] + 8) + (uVar23 & uVar22) + (~uVar22 & uVar8) +
              ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
              (uVar22 >> 6 | uVar22 * 0x4000000));
      auVar27 = vpaddd_avx2(auVar27,auVar37);
      uVar21 = uVar21 + iVar9;
      auVar37 = vpshufd_avx2(auVar27,0x50);
      auVar39 = vpand_avx(auVar43,auVar2);
      auVar43 = aesenc(auVar41,param_4[0xd]);
      auVar28 = vpsrld_avx2(auVar37,10);
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
               (uVar11 >> 2 | uVar11 * 0x40000000));
      auVar29 = vpsrlq_avx2(auVar37,2);
      auVar37 = vpshufd_avx2(auVar28 ^ auVar37 ^ auVar29,0xe8);
      iVar9 = uVar8 + *(int *)(pauVar17[1] + 0xc) + (uVar22 & uVar21) + (~uVar21 & uVar23) +
              ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
              (uVar21 >> 6 | uVar21 * 0x4000000));
      uVar19 = uVar14 ^ uVar11;
      auVar37 = vpslldq_avx2(auVar37,8);
      uVar20 = uVar20 + iVar9;
      auVar35 = vpaddd_avx2(auVar27,auVar37);
      auVar41 = vpor_avx(auVar40,auVar39);
      auVar40 = aesenclast(auVar43,param_4[0xe]);
      auVar39 = *param_4;
      auVar42 = ZEXT1664(auVar39);
      auVar27 = vpaddd_avx2(auVar35,pauVar18[3]);
      uVar8 = (uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
              (uVar14 >> 2 | uVar14 * 0x40000000);
      iVar9 = iVar9 + ((uVar11 ^ uVar12) & uVar19 ^ uVar11);
      pauVar17[-3] = auVar27;
      lVar26 = vpextrq_avx(auVar6,1);
      auVar40 = vpand_avx(auVar40,auVar5);
      auVar40 = vpor_avx(auVar41,auVar40);
      auVar38 = ZEXT1664(auVar40);
      *(undefined1 (*) [16])(lVar26 + auVar6._0_8_) = auVar40;
      pauVar25 = (undefined1 (*) [16])(auVar6._0_8_ + 0x10);
      pauVar7 = pauVar18 + 4;
      pauVar18 = pauVar18 + 4;
    } while ((*pauVar7)[3] != '\0');
    auVar6 = vpinsrq_avx(auVar6,pauVar25,0);
    auVar45 = ZEXT1664(auVar6);
    uVar8 = iVar9 + uVar8;
    iVar9 = uVar23 + *(int *)pauVar17[-2] + (uVar21 & uVar20) + (~uVar20 & uVar22) +
            ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
            (uVar20 >> 6 | uVar20 * 0x4000000));
    uVar12 = uVar12 + iVar9;
    uVar23 = iVar9 + (uVar19 & (uVar8 ^ uVar14) ^ uVar14) +
             ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
             (uVar8 >> 2 | uVar8 * 0x40000000));
    iVar9 = uVar22 + *(int *)(pauVar17[-2] + 4) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
            ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
            (uVar12 >> 6 | uVar12 * 0x4000000));
    uVar11 = uVar11 + iVar9;
    uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar23 ^ uVar8) ^ uVar8) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
             (uVar23 >> 2 | uVar23 * 0x40000000));
    iVar9 = uVar21 + *(int *)(pauVar17[-2] + 8) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
            ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
            (uVar11 >> 6 | uVar11 * 0x4000000));
    uVar14 = uVar14 + iVar9;
    auVar39 = aesenc(*pauVar25 ^ auVar39 ^ auVar40,param_4[1]);
    uVar21 = iVar9 + ((uVar23 ^ uVar8) & (uVar22 ^ uVar23) ^ uVar23) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
             (uVar22 >> 2 | uVar22 * 0x40000000));
    iVar9 = uVar20 + *(int *)(pauVar17[-2] + 0xc) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
            ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
            (uVar14 >> 6 | uVar14 * 0x4000000));
    uVar8 = uVar8 + iVar9;
    auVar39 = aesenc(auVar39,param_4[2]);
    uVar20 = iVar9 + ((uVar22 ^ uVar23) & (uVar21 ^ uVar22) ^ uVar22) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
             (uVar21 >> 2 | uVar21 * 0x40000000));
    iVar9 = uVar12 + *(int *)pauVar17[-1] + (uVar14 & uVar8) + (~uVar8 & uVar11) +
            ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
            (uVar8 >> 6 | uVar8 * 0x4000000));
    uVar23 = uVar23 + iVar9;
    auVar39 = aesenc(auVar39,param_4[3]);
    uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
             (uVar20 >> 2 | uVar20 * 0x40000000));
    iVar9 = uVar11 + *(int *)(pauVar17[-1] + 4) + (uVar8 & uVar23) + (~uVar23 & uVar14) +
            ((uVar23 >> 0x19 | uVar23 * 0x80) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
            (uVar23 >> 6 | uVar23 * 0x4000000));
    uVar22 = uVar22 + iVar9;
    auVar39 = aesenc(auVar39,param_4[4]);
    uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
             ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
             (uVar12 >> 2 | uVar12 * 0x40000000));
    iVar9 = uVar14 + *(int *)(pauVar17[-1] + 8) + (uVar23 & uVar22) + (~uVar22 & uVar8) +
            ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
            (uVar22 >> 6 | uVar22 * 0x4000000));
    uVar21 = uVar21 + iVar9;
    auVar39 = aesenc(auVar39,param_4[5]);
    uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
             ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
             (uVar11 >> 2 | uVar11 * 0x40000000));
    iVar9 = uVar8 + *(int *)(pauVar17[-1] + 0xc) + (uVar22 & uVar21) + (~uVar21 & uVar23) +
            ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
            (uVar21 >> 6 | uVar21 * 0x4000000));
    uVar20 = uVar20 + iVar9;
    auVar39 = aesenc(auVar39,param_4[6]);
    uVar8 = iVar9 + ((uVar11 ^ uVar12) & (uVar14 ^ uVar11) ^ uVar11) +
            ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
            (uVar14 >> 2 | uVar14 * 0x40000000));
    iVar9 = uVar23 + *(int *)*pauVar16 + (uVar21 & uVar20) + (~uVar20 & uVar22) +
            ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
            (uVar20 >> 6 | uVar20 * 0x4000000));
    uVar12 = uVar12 + iVar9;
    auVar39 = aesenc(auVar39,param_4[7]);
    uVar23 = iVar9 + ((uVar14 ^ uVar11) & (uVar8 ^ uVar14) ^ uVar14) +
             ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
             (uVar8 >> 2 | uVar8 * 0x40000000));
    iVar9 = uVar22 + *(int *)(pauVar17[-4] + 4) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
            ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
            (uVar12 >> 6 | uVar12 * 0x4000000));
    uVar11 = uVar11 + iVar9;
    auVar39 = aesenc(auVar39,*pauVar1);
    uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar23 ^ uVar8) ^ uVar8) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
             (uVar23 >> 2 | uVar23 * 0x40000000));
    iVar9 = uVar21 + *(int *)(pauVar17[-4] + 8) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
            ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
            (uVar11 >> 6 | uVar11 * 0x4000000));
    uVar14 = uVar14 + iVar9;
    auVar39 = aesenc(auVar39,param_4[9]);
    uVar21 = iVar9 + ((uVar23 ^ uVar8) & (uVar22 ^ uVar23) ^ uVar23) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
             (uVar22 >> 2 | uVar22 * 0x40000000));
    iVar9 = uVar20 + *(int *)(pauVar17[-4] + 0xc) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
            ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
            (uVar14 >> 6 | uVar14 * 0x4000000));
    uVar8 = uVar8 + iVar9;
    auVar41 = aesenclast(auVar39,param_4[10]);
    auVar40 = aesenc(auVar39,param_4[10]);
    uVar20 = iVar9 + ((uVar22 ^ uVar23) & (uVar21 ^ uVar22) ^ uVar22) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
             (uVar21 >> 2 | uVar21 * 0x40000000));
    iVar9 = uVar12 + *(int *)pauVar17[-3] + (uVar14 & uVar8) + (~uVar8 & uVar11) +
            ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
            (uVar8 >> 6 | uVar8 * 0x4000000));
    uVar23 = uVar23 + iVar9;
    auVar39 = vpand_avx(auVar41,auVar3);
    auVar40 = aesenc(auVar40,param_4[0xb]);
    uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
             (uVar20 >> 2 | uVar20 * 0x40000000));
    iVar9 = uVar11 + *(int *)(pauVar17[-3] + 4) + (uVar8 & uVar23) + (~uVar23 & uVar14) +
            ((uVar23 >> 0x19 | uVar23 * 0x80) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
            (uVar23 >> 6 | uVar23 * 0x4000000));
    uVar22 = uVar22 + iVar9;
    auVar43 = aesenclast(auVar40,param_4[0xc]);
    auVar41 = aesenc(auVar40,param_4[0xc]);
    uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
             ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
             (uVar12 >> 2 | uVar12 * 0x40000000));
    iVar9 = uVar14 + *(int *)(pauVar17[-3] + 8) + (uVar23 & uVar22) + (~uVar22 & uVar8) +
            ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
            (uVar22 >> 6 | uVar22 * 0x4000000));
    uVar21 = uVar21 + iVar9;
    auVar40 = vpand_avx(auVar43,auVar2);
    auVar41 = aesenc(auVar41,param_4[0xd]);
    uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
             ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
             (uVar11 >> 2 | uVar11 * 0x40000000));
    iVar9 = uVar8 + *(int *)(pauVar17[-3] + 0xc) + (uVar22 & uVar21) + (~uVar21 & uVar23) +
            ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
            (uVar21 >> 6 | uVar21 * 0x4000000));
    auVar40 = vpor_avx(auVar39,auVar40);
    auVar39 = aesenclast(auVar41,param_4[0xe]);
    auVar42 = ZEXT1664(*param_4);
    lVar26 = vpextrq_avx(auVar6,1);
    piVar4 = *(int **)(pauVar17[0xd] + 8);
    pauVar18 = pauVar17 + 10;
    auVar39 = vpand_avx(auVar39,auVar5);
    auVar39 = vpor_avx(auVar40,auVar39);
    auVar38 = ZEXT1664(auVar39);
    *(undefined1 (*) [16])(lVar26 + auVar6._0_8_) = auVar39;
    pauVar25 = (undefined1 (*) [16])(auVar6._0_8_ + 0x10);
    iVar10 = iVar9 + ((uVar11 ^ uVar12) & (uVar14 ^ uVar11) ^ uVar11) +
             ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
             (uVar14 >> 2 | uVar14 * 0x40000000)) + *piVar4;
    uVar14 = uVar14 + piVar4[1];
    uVar11 = uVar11 + piVar4[2];
    uVar12 = uVar12 + piVar4[3];
    uVar20 = uVar20 + iVar9 + piVar4[4];
    uVar21 = uVar21 + piVar4[5];
    uVar22 = uVar22 + piVar4[6];
    uVar23 = uVar23 + piVar4[7];
    *piVar4 = iVar10;
    piVar4[1] = uVar14;
    piVar4[2] = uVar11;
    piVar4[3] = uVar12;
    piVar4[4] = uVar20;
    piVar4[5] = uVar21;
    piVar4[6] = uVar22;
    piVar4[7] = uVar23;
    if (pauVar25 == *(undefined1 (**) [16])(pauVar17[0xc] + 0x10)) break;
    uVar8 = 0;
    uVar19 = uVar14 ^ uVar11;
    do {
      auVar6 = vpinsrq_avx(auVar45._0_16_,pauVar25,0);
      auVar45 = ZEXT1664(auVar6);
      uVar8 = iVar10 + uVar8;
      iVar9 = uVar23 + *(int *)(*pauVar18 + 0x10) + (uVar21 & uVar20) + (~uVar20 & uVar22) +
              ((uVar20 >> 0x19 | uVar20 << 7) ^ (uVar20 >> 0xb | uVar20 << 0x15) ^
              (uVar20 >> 6 | uVar20 << 0x1a));
      uVar12 = uVar12 + iVar9;
      uVar23 = iVar9 + (uVar19 & (uVar8 ^ uVar14) ^ uVar14) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      iVar9 = uVar22 + *(int *)(*pauVar18 + 0x14) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
              ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 6 | uVar12 * 0x4000000));
      uVar11 = uVar11 + iVar9;
      uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar23 ^ uVar8) ^ uVar8) +
               ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
               (uVar23 >> 2 | uVar23 * 0x40000000));
      iVar9 = uVar21 + *(int *)(*pauVar18 + 0x18) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
              ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
              (uVar11 >> 6 | uVar11 * 0x4000000));
      uVar14 = uVar14 + iVar9;
      auVar39 = aesenc(*pauVar25 ^ auVar42._0_16_ ^ auVar38._0_16_,param_4[1]);
      uVar21 = iVar9 + ((uVar23 ^ uVar8) & (uVar22 ^ uVar23) ^ uVar23) +
               ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
               (uVar22 >> 2 | uVar22 * 0x40000000));
      iVar9 = uVar20 + *(int *)(*pauVar18 + 0x1c) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
              ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
              (uVar14 >> 6 | uVar14 * 0x4000000));
      uVar8 = uVar8 + iVar9;
      auVar39 = aesenc(auVar39,param_4[2]);
      uVar20 = iVar9 + ((uVar22 ^ uVar23) & (uVar21 ^ uVar22) ^ uVar22) +
               ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
               (uVar21 >> 2 | uVar21 * 0x40000000));
      iVar9 = uVar12 + *(int *)(pauVar18[1] + 0x10) + (uVar14 & uVar8) + (~uVar8 & uVar11) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      uVar23 = uVar23 + iVar9;
      auVar39 = aesenc(auVar39,param_4[3]);
      uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
               ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
               (uVar20 >> 2 | uVar20 * 0x40000000));
      iVar9 = uVar11 + *(int *)(pauVar18[1] + 0x14) + (uVar8 & uVar23) + (~uVar23 & uVar14) +
              ((uVar23 >> 0x19 | uVar23 * 0x80) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
              (uVar23 >> 6 | uVar23 * 0x4000000));
      uVar22 = uVar22 + iVar9;
      auVar39 = aesenc(auVar39,param_4[4]);
      uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
               ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
               (uVar12 >> 2 | uVar12 * 0x40000000));
      iVar9 = uVar14 + *(int *)(pauVar18[1] + 0x18) + (uVar23 & uVar22) + (~uVar22 & uVar8) +
              ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
              (uVar22 >> 6 | uVar22 * 0x4000000));
      uVar21 = uVar21 + iVar9;
      auVar39 = aesenc(auVar39,param_4[5]);
      uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
               (uVar11 >> 2 | uVar11 * 0x40000000));
      iVar9 = uVar8 + *(int *)(pauVar18[1] + 0x1c) + (uVar22 & uVar21) + (~uVar21 & uVar23) +
              ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
              (uVar21 >> 6 | uVar21 * 0x4000000));
      uVar20 = uVar20 + iVar9;
      auVar39 = aesenc(auVar39,param_4[6]);
      uVar8 = iVar9 + ((uVar11 ^ uVar12) & (uVar14 ^ uVar11) ^ uVar11) +
              ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
              (uVar14 >> 2 | uVar14 * 0x40000000));
      iVar9 = uVar23 + *(int *)(pauVar18[-2] + 0x10) + (uVar21 & uVar20) + (~uVar20 & uVar22) +
              ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
              (uVar20 >> 6 | uVar20 * 0x4000000));
      uVar12 = uVar12 + iVar9;
      auVar39 = aesenc(auVar39,param_4[7]);
      uVar23 = iVar9 + ((uVar14 ^ uVar11) & (uVar8 ^ uVar14) ^ uVar14) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      iVar9 = uVar22 + *(int *)(pauVar18[-2] + 0x14) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
              ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 6 | uVar12 * 0x4000000));
      uVar11 = uVar11 + iVar9;
      auVar39 = aesenc(auVar39,*pauVar1);
      uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar23 ^ uVar8) ^ uVar8) +
               ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
               (uVar23 >> 2 | uVar23 * 0x40000000));
      iVar9 = uVar21 + *(int *)(pauVar18[-2] + 0x18) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
              ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
              (uVar11 >> 6 | uVar11 * 0x4000000));
      uVar14 = uVar14 + iVar9;
      auVar39 = aesenc(auVar39,param_4[9]);
      uVar21 = iVar9 + ((uVar23 ^ uVar8) & (uVar22 ^ uVar23) ^ uVar23) +
               ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
               (uVar22 >> 2 | uVar22 * 0x40000000));
      iVar9 = uVar20 + *(int *)(pauVar18[-2] + 0x1c) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
              ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
              (uVar14 >> 6 | uVar14 * 0x4000000));
      uVar8 = uVar8 + iVar9;
      auVar41 = aesenclast(auVar39,param_4[10]);
      auVar40 = aesenc(auVar39,param_4[10]);
      uVar20 = iVar9 + ((uVar22 ^ uVar23) & (uVar21 ^ uVar22) ^ uVar22) +
               ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
               (uVar21 >> 2 | uVar21 * 0x40000000));
      iVar9 = uVar12 + *(int *)(pauVar18[-1] + 0x10) + (uVar14 & uVar8) + (~uVar8 & uVar11) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      uVar23 = uVar23 + iVar9;
      auVar39 = vpand_avx(auVar41,auVar3);
      auVar40 = aesenc(auVar40,param_4[0xb]);
      uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
               ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
               (uVar20 >> 2 | uVar20 * 0x40000000));
      iVar9 = uVar11 + *(int *)(pauVar18[-1] + 0x14) + (uVar8 & uVar23) + (~uVar23 & uVar14) +
              ((uVar23 >> 0x19 | uVar23 * 0x80) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
              (uVar23 >> 6 | uVar23 * 0x4000000));
      uVar22 = uVar22 + iVar9;
      auVar43 = aesenclast(auVar40,param_4[0xc]);
      auVar41 = aesenc(auVar40,param_4[0xc]);
      uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
               ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
               (uVar12 >> 2 | uVar12 * 0x40000000));
      iVar9 = uVar14 + *(int *)(pauVar18[-1] + 0x18) + (uVar23 & uVar22) + (~uVar22 & uVar8) +
              ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
              (uVar22 >> 6 | uVar22 * 0x4000000));
      uVar21 = uVar21 + iVar9;
      auVar40 = vpand_avx(auVar43,auVar2);
      auVar41 = aesenc(auVar41,param_4[0xd]);
      uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
               (uVar11 >> 2 | uVar11 * 0x40000000));
      iVar10 = uVar8 + *(int *)(pauVar18[-1] + 0x1c) + (uVar22 & uVar21) + (~uVar21 & uVar23) +
               ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
               (uVar21 >> 6 | uVar21 * 0x4000000));
      uVar19 = uVar14 ^ uVar11;
      uVar20 = uVar20 + iVar10;
      auVar40 = vpor_avx(auVar39,auVar40);
      auVar39 = aesenclast(auVar41,param_4[0xe]);
      auVar42 = ZEXT1664(*param_4);
      uVar8 = (uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
              (uVar14 >> 2 | uVar14 * 0x40000000);
      iVar10 = iVar10 + ((uVar11 ^ uVar12) & uVar19 ^ uVar11);
      lVar44 = auVar6._0_8_;
      lVar26 = vpextrq_avx(auVar6,1);
      auVar39 = vpand_avx(auVar39,auVar5);
      auVar39 = vpor_avx(auVar40,auVar39);
      auVar38 = ZEXT1664(auVar39);
      pauVar18 = pauVar18 + -4;
      *(undefined1 (*) [16])(lVar26 + lVar44) = auVar39;
      pauVar25 = (undefined1 (*) [16])(lVar44 + 0x10);
    } while (pauVar16 <= pauVar18);
    piVar4 = *(int **)(pauVar17[0xd] + 8);
    uVar24 = lVar44 + 0x50;
    param_7 = *(long *)(pauVar17[0xd] + 0x10);
    pauVar16 = pauVar17 + 10;
    iVar9 = iVar10 + uVar8 + *piVar4;
    uVar14 = uVar14 + piVar4[1];
    uVar11 = uVar11 + piVar4[2];
    uVar12 = uVar12 + piVar4[3];
    uVar20 = uVar20 + piVar4[4];
    uVar21 = uVar21 + piVar4[5];
    uVar22 = uVar22 + piVar4[6];
    uVar23 = uVar23 + piVar4[7];
    uVar13 = *(ulong *)(pauVar17[0xc] + 0x10);
    *piVar4 = iVar9;
    pauVar18 = (undefined1 (*) [32])(param_7 + uVar24);
    if (uVar24 == uVar13) {
      pauVar18 = pauVar16;
    }
    piVar4[1] = uVar14;
    piVar4[2] = uVar11;
    piVar4[3] = uVar12;
    piVar4[4] = uVar20;
    piVar4[5] = uVar21;
    piVar4[6] = uVar22;
    piVar4[7] = uVar23;
  } while (uVar24 <= uVar13);
  **(undefined1 (**) [16])pauVar17[0xd] = auVar39;
  return;
}

