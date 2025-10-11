
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha512_block_data_order_avx2(long *param_1,long param_2,long param_3)

{
  undefined1 (*pauVar1) [32];
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 (*pauVar17) [32];
  ulong uVar18;
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
  undefined1 auVar33 [32];
  undefined1 auStack_550 [1312];
  
  uVar8 = (ulong)auStack_550 & 0xfffffffffffff800;
  pauVar1 = (undefined1 (*) [32])(param_2 + param_3 * 0x80);
  pauVar9 = (undefined1 (*) [32])(uVar8 + 0x480);
  *(long **)(uVar8 + 0x500) = param_1;
  *(long *)(uVar8 + 0x508) = param_2;
  *(undefined1 (**) [32])(uVar8 + 0x510) = pauVar1;
  *(BADSPACEBASE **)(uVar8 + 0x518) = register0x00000020;
  pauVar11 = (undefined1 (*) [32])(param_2 + 0x80);
  lVar4 = *param_1;
  uVar7 = param_1[1];
  uVar5 = param_1[2];
  pauVar17 = pauVar11;
  if (pauVar11 == pauVar1) {
    pauVar17 = (undefined1 (*) [32])(uVar8 + 0x480);
  }
  uVar6 = param_1[3];
  uVar13 = param_1[4];
  uVar14 = param_1[5];
  uVar15 = param_1[6];
  uVar16 = param_1[7];
  do {
    auVar19._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])*pauVar17 +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar11[-4];
    auVar19._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])*pauVar17;
    auVar20._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(*pauVar17 + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar11[-4] + 0x10);
    auVar20._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(*pauVar17 + 0x10);
    auVar23 = vpshufb_avx2(auVar19,_DAT_005fda40);
    auVar21._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])pauVar17[1] +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar11[-3];
    auVar21._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar17[1];
    auVar25 = vpshufb_avx2(auVar20,_DAT_005fda40);
    auVar22._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(pauVar17[1] + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar11[-3] + 0x10);
    auVar22._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar17[1] + 0x10);
    auVar26 = vpshufb_avx2(auVar21,_DAT_005fda40);
    auVar28._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])pauVar17[2] +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar11[-2];
    auVar28._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar17[2];
    auVar27 = vpshufb_avx2(auVar22,_DAT_005fda40);
    auVar29._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(pauVar17[2] + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar11[-2] + 0x10);
    auVar29._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar17[2] + 0x10);
    auVar28 = vpshufb_avx2(auVar28,_DAT_005fda40);
    auVar30._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])pauVar17[3] +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar11[-1];
    auVar30._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar17[3];
    auVar29 = vpshufb_avx2(auVar29,_DAT_005fda40);
    auVar31._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(pauVar17[3] + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar11[-1] + 0x10);
    auVar31._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar17[3] + 0x10);
    auVar19 = vpaddq_avx2(auVar23,_K512);
    auVar30 = vpshufb_avx2(auVar30,_DAT_005fda40);
    auVar20 = vpaddq_avx2(auVar25,_DAT_005fd560);
    auVar31 = vpshufb_avx2(auVar31,_DAT_005fda40);
    auVar21 = vpaddq_avx2(auVar26,_DAT_005fd580);
    auVar22 = vpaddq_avx2(auVar27,_DAT_005fd5a0);
    *pauVar9 = auVar19;
    auVar19 = vpaddq_avx2(auVar28,_DAT_005fd5c0);
    pauVar9[1] = auVar20;
    auVar20 = vpaddq_avx2(auVar29,_DAT_005fd5e0);
    pauVar9[2] = auVar21;
    auVar21 = vpaddq_avx2(auVar30,_DAT_005fd600);
    pauVar9[3] = auVar22;
    *(undefined8 *)(pauVar9[-5] + 0x18) = *(undefined8 *)(pauVar9[4] + 0x18);
    auVar22 = vpaddq_avx2(auVar31,_DAT_005fd620);
    pauVar9[-4] = auVar19;
    uVar18 = 0;
    pauVar9[-3] = auVar20;
    pauVar9[-2] = auVar21;
    uVar12 = uVar7 ^ uVar5;
    pauVar9[-1] = auVar22;
    pauVar1 = pauVar9 + -4;
    pauVar9 = (undefined1 (*) [32])&DAT_005fd6c0;
    do {
      pauVar10 = pauVar1;
      *(undefined8 *)(pauVar10[-5] + 0x18) = *(undefined8 *)(pauVar10[-1] + 0x18);
      auVar20 = vpalignr_avx2(auVar25,auVar23,8);
      auVar19 = vpalignr_avx2(auVar29,auVar28,8);
      uVar18 = lVar4 + uVar18;
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar23,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar16 + *(long *)pauVar10[4] + (uVar14 & uVar13) + (~uVar13 & uVar15) +
              ((uVar13 >> 0x29 | uVar13 << 0x17) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
              (uVar13 >> 0xe | uVar13 << 0x32));
      auVar23 = vpsrlq_avx2(auVar22,7);
      uVar6 = uVar6 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar31,6);
      auVar24 = vpsllq_avx2(auVar31,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar23 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar31,0x13);
      uVar16 = lVar4 + (uVar12 & (uVar18 ^ uVar7) ^ uVar7) +
               ((uVar18 >> 0x22 | uVar18 * 0x40000000) ^ (uVar18 >> 0x27 | uVar18 * 0x2000000) ^
               (uVar18 >> 0x1c | uVar18 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar15 + *(long *)(pauVar10[4] + 8) + (uVar13 & uVar6) + (~uVar6 & uVar14) +
              ((uVar6 >> 0x29 | uVar6 * 0x800000) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^
              (uVar6 >> 0xe | uVar6 << 0x32));
      auVar23 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar5 = uVar5 + lVar4;
      auVar19 = vpaddq_avx2(auVar23,pauVar9[-4]);
      pauVar10[-4] = auVar19;
      auVar20 = vpalignr_avx2(auVar26,auVar25,8);
      auVar19 = vpalignr_avx2(auVar30,auVar29,8);
      uVar15 = lVar4 + ((uVar18 ^ uVar7) & (uVar16 ^ uVar18) ^ uVar18) +
               ((uVar16 >> 0x22 | uVar16 * 0x40000000) ^ (uVar16 >> 0x27 | uVar16 * 0x2000000) ^
               (uVar16 >> 0x1c | uVar16 << 0x24));
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar25,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar14 + *(long *)pauVar10[5] + (uVar6 & uVar5) + (~uVar5 & uVar13) +
              ((uVar5 >> 0x29 | uVar5 * 0x800000) ^ (uVar5 >> 0x12 | uVar5 << 0x2e) ^
              (uVar5 >> 0xe | uVar5 << 0x32));
      auVar25 = vpsrlq_avx2(auVar22,7);
      uVar7 = uVar7 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar23,6);
      auVar24 = vpsllq_avx2(auVar23,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar25 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar23,0x13);
      uVar14 = lVar4 + ((uVar16 ^ uVar18) & (uVar15 ^ uVar16) ^ uVar16) +
               ((uVar15 >> 0x22 | uVar15 * 0x40000000) ^ (uVar15 >> 0x27 | uVar15 * 0x2000000) ^
               (uVar15 >> 0x1c | uVar15 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar13 + *(long *)(pauVar10[5] + 8) + (uVar5 & uVar7) + (~uVar7 & uVar6) +
              ((uVar7 >> 0x29 | uVar7 * 0x800000) ^ (uVar7 >> 0x12 | uVar7 << 0x2e) ^
              (uVar7 >> 0xe | uVar7 << 0x32));
      auVar25 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar18 = uVar18 + lVar4;
      auVar19 = vpaddq_avx2(auVar25,pauVar9[-3]);
      pauVar10[-3] = auVar19;
      auVar20 = vpalignr_avx2(auVar27,auVar26,8);
      auVar19 = vpalignr_avx2(auVar31,auVar30,8);
      uVar13 = lVar4 + ((uVar15 ^ uVar16) & (uVar14 ^ uVar15) ^ uVar15) +
               ((uVar14 >> 0x22 | uVar14 * 0x40000000) ^ (uVar14 >> 0x27 | uVar14 * 0x2000000) ^
               (uVar14 >> 0x1c | uVar14 << 0x24));
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar26,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar6 + *(long *)pauVar10[6] + (uVar7 & uVar18) + (~uVar18 & uVar5) +
              ((uVar18 >> 0x29 | uVar18 * 0x800000) ^ (uVar18 >> 0x12 | uVar18 << 0x2e) ^
              (uVar18 >> 0xe | uVar18 << 0x32));
      auVar26 = vpsrlq_avx2(auVar22,7);
      uVar16 = uVar16 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar25,6);
      auVar24 = vpsllq_avx2(auVar25,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar26 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar25,0x13);
      uVar6 = lVar4 + ((uVar14 ^ uVar15) & (uVar13 ^ uVar14) ^ uVar14) +
              ((uVar13 >> 0x22 | uVar13 * 0x40000000) ^ (uVar13 >> 0x27 | uVar13 * 0x2000000) ^
              (uVar13 >> 0x1c | uVar13 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar5 + *(long *)(pauVar10[6] + 8) + (uVar18 & uVar16) + (~uVar16 & uVar7) +
              ((uVar16 >> 0x29 | uVar16 * 0x800000) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
              (uVar16 >> 0xe | uVar16 << 0x32));
      auVar26 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar15 = uVar15 + lVar4;
      auVar19 = vpaddq_avx2(auVar26,pauVar9[-2]);
      pauVar10[-2] = auVar19;
      auVar20 = vpalignr_avx2(auVar28,auVar27,8);
      auVar19 = vpalignr_avx2(auVar23,auVar31,8);
      uVar5 = lVar4 + ((uVar13 ^ uVar14) & (uVar6 ^ uVar13) ^ uVar13) +
              ((uVar6 >> 0x22 | uVar6 * 0x40000000) ^ (uVar6 >> 0x27 | uVar6 * 0x2000000) ^
              (uVar6 >> 0x1c | uVar6 << 0x24));
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar27,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar7 + *(long *)pauVar10[7] + (uVar16 & uVar15) + (~uVar15 & uVar18) +
              ((uVar15 >> 0x29 | uVar15 * 0x800000) ^ (uVar15 >> 0x12 | uVar15 << 0x2e) ^
              (uVar15 >> 0xe | uVar15 << 0x32));
      auVar27 = vpsrlq_avx2(auVar22,7);
      uVar14 = uVar14 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar26,6);
      auVar24 = vpsllq_avx2(auVar26,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar27 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar26,0x13);
      uVar7 = lVar4 + ((uVar6 ^ uVar13) & (uVar5 ^ uVar6) ^ uVar6) +
              ((uVar5 >> 0x22 | uVar5 * 0x40000000) ^ (uVar5 >> 0x27 | uVar5 * 0x2000000) ^
              (uVar5 >> 0x1c | uVar5 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar18 + *(long *)(pauVar10[7] + 8) + (uVar15 & uVar14) + (~uVar14 & uVar16) +
              ((uVar14 >> 0x29 | uVar14 * 0x800000) ^ (uVar14 >> 0x12 | uVar14 << 0x2e) ^
              (uVar14 >> 0xe | uVar14 << 0x32));
      auVar27 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar13 = uVar13 + lVar4;
      auVar19 = vpaddq_avx2(auVar27,pauVar9[-1]);
      pauVar10[-1] = auVar19;
      pauVar1 = pauVar10 + -8;
      *(undefined8 *)(pauVar10[-9] + 0x18) = *(undefined8 *)(pauVar10[-5] + 0x18);
      auVar20 = vpalignr_avx2(auVar29,auVar28,8);
      auVar19 = vpalignr_avx2(auVar25,auVar23,8);
      uVar18 = lVar4 + ((uVar5 ^ uVar6) & (uVar7 ^ uVar5) ^ uVar5) +
               ((uVar7 >> 0x22 | uVar7 * 0x40000000) ^ (uVar7 >> 0x27 | uVar7 * 0x2000000) ^
               (uVar7 >> 0x1c | uVar7 << 0x24));
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar28,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar16 + *(long *)*pauVar10 + (uVar14 & uVar13) + (~uVar13 & uVar15) +
              ((uVar13 >> 0x29 | uVar13 * 0x800000) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
              (uVar13 >> 0xe | uVar13 << 0x32));
      auVar28 = vpsrlq_avx2(auVar22,7);
      uVar6 = uVar6 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar27,6);
      auVar24 = vpsllq_avx2(auVar27,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar28 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar27,0x13);
      uVar16 = lVar4 + ((uVar7 ^ uVar5) & (uVar18 ^ uVar7) ^ uVar7) +
               ((uVar18 >> 0x22 | uVar18 * 0x40000000) ^ (uVar18 >> 0x27 | uVar18 * 0x2000000) ^
               (uVar18 >> 0x1c | uVar18 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar15 + *(long *)(*pauVar10 + 8) + (uVar13 & uVar6) + (~uVar6 & uVar14) +
              ((uVar6 >> 0x29 | uVar6 * 0x800000) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^
              (uVar6 >> 0xe | uVar6 << 0x32));
      auVar28 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar5 = uVar5 + lVar4;
      auVar19 = vpaddq_avx2(auVar28,*pauVar9);
      *pauVar1 = auVar19;
      auVar20 = vpalignr_avx2(auVar30,auVar29,8);
      auVar19 = vpalignr_avx2(auVar26,auVar25,8);
      uVar15 = lVar4 + ((uVar18 ^ uVar7) & (uVar16 ^ uVar18) ^ uVar18) +
               ((uVar16 >> 0x22 | uVar16 * 0x40000000) ^ (uVar16 >> 0x27 | uVar16 * 0x2000000) ^
               (uVar16 >> 0x1c | uVar16 << 0x24));
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar29,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar14 + *(long *)pauVar10[1] + (uVar6 & uVar5) + (~uVar5 & uVar13) +
              ((uVar5 >> 0x29 | uVar5 * 0x800000) ^ (uVar5 >> 0x12 | uVar5 << 0x2e) ^
              (uVar5 >> 0xe | uVar5 << 0x32));
      auVar29 = vpsrlq_avx2(auVar22,7);
      uVar7 = uVar7 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar28,6);
      auVar24 = vpsllq_avx2(auVar28,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar29 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar28,0x13);
      uVar14 = lVar4 + ((uVar16 ^ uVar18) & (uVar15 ^ uVar16) ^ uVar16) +
               ((uVar15 >> 0x22 | uVar15 * 0x40000000) ^ (uVar15 >> 0x27 | uVar15 * 0x2000000) ^
               (uVar15 >> 0x1c | uVar15 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar13 + *(long *)(pauVar10[1] + 8) + (uVar5 & uVar7) + (~uVar7 & uVar6) +
              ((uVar7 >> 0x29 | uVar7 * 0x800000) ^ (uVar7 >> 0x12 | uVar7 << 0x2e) ^
              (uVar7 >> 0xe | uVar7 << 0x32));
      auVar29 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar18 = uVar18 + lVar4;
      auVar19 = vpaddq_avx2(auVar29,pauVar9[1]);
      pauVar10[-7] = auVar19;
      auVar20 = vpalignr_avx2(auVar31,auVar30,8);
      auVar19 = vpalignr_avx2(auVar27,auVar26,8);
      uVar13 = lVar4 + ((uVar15 ^ uVar16) & (uVar14 ^ uVar15) ^ uVar15) +
               ((uVar14 >> 0x22 | uVar14 * 0x40000000) ^ (uVar14 >> 0x27 | uVar14 * 0x2000000) ^
               (uVar14 >> 0x1c | uVar14 << 0x24));
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar30,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar6 + *(long *)pauVar10[2] + (uVar7 & uVar18) + (~uVar18 & uVar5) +
              ((uVar18 >> 0x29 | uVar18 * 0x800000) ^ (uVar18 >> 0x12 | uVar18 << 0x2e) ^
              (uVar18 >> 0xe | uVar18 << 0x32));
      auVar30 = vpsrlq_avx2(auVar22,7);
      uVar16 = uVar16 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar29,6);
      auVar24 = vpsllq_avx2(auVar29,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar30 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar29,0x13);
      uVar6 = lVar4 + ((uVar14 ^ uVar15) & (uVar13 ^ uVar14) ^ uVar14) +
              ((uVar13 >> 0x22 | uVar13 * 0x40000000) ^ (uVar13 >> 0x27 | uVar13 * 0x2000000) ^
              (uVar13 >> 0x1c | uVar13 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar5 + *(long *)(pauVar10[2] + 8) + (uVar18 & uVar16) + (~uVar16 & uVar7) +
              ((uVar16 >> 0x29 | uVar16 * 0x800000) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
              (uVar16 >> 0xe | uVar16 << 0x32));
      auVar30 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar15 = uVar15 + lVar4;
      auVar19 = vpaddq_avx2(auVar30,pauVar9[2]);
      pauVar10[-6] = auVar19;
      auVar20 = vpalignr_avx2(auVar23,auVar31,8);
      auVar19 = vpalignr_avx2(auVar28,auVar27,8);
      uVar5 = lVar4 + ((uVar13 ^ uVar14) & (uVar6 ^ uVar13) ^ uVar13) +
              ((uVar6 >> 0x22 | uVar6 * 0x40000000) ^ (uVar6 >> 0x27 | uVar6 * 0x2000000) ^
              (uVar6 >> 0x1c | uVar6 << 0x24));
      auVar22 = vpsrlq_avx2(auVar20,1);
      auVar19 = vpaddq_avx2(auVar31,auVar19);
      auVar32 = vpsrlq_avx2(auVar20,7);
      auVar20 = vpsllq_avx2(auVar20,0x38);
      lVar4 = uVar7 + *(long *)pauVar10[3] + (uVar16 & uVar15) + (~uVar15 & uVar18) +
              ((uVar15 >> 0x29 | uVar15 * 0x800000) ^ (uVar15 >> 0x12 | uVar15 << 0x2e) ^
              (uVar15 >> 0xe | uVar15 << 0x32));
      auVar31 = vpsrlq_avx2(auVar22,7);
      uVar14 = uVar14 + lVar4;
      auVar21 = vpsllq_avx2(auVar20,7);
      auVar33 = vpsrlq_avx2(auVar30,6);
      auVar24 = vpsllq_avx2(auVar30,3);
      auVar19 = vpaddq_avx2(auVar19,auVar32 ^ auVar22 ^ auVar20 ^ auVar31 ^ auVar21);
      auVar20 = vpsrlq_avx2(auVar30,0x13);
      uVar7 = lVar4 + ((uVar6 ^ uVar13) & (uVar5 ^ uVar6) ^ uVar6) +
              ((uVar5 >> 0x22 | uVar5 * 0x40000000) ^ (uVar5 >> 0x27 | uVar5 * 0x2000000) ^
              (uVar5 >> 0x1c | uVar5 << 0x24));
      auVar22 = vpsllq_avx2(auVar24,0x2a);
      auVar21 = vpsrlq_avx2(auVar20,0x2a);
      lVar4 = uVar18 + *(long *)(pauVar10[3] + 8) + (uVar15 & uVar14) + (~uVar14 & uVar16) +
              ((uVar14 >> 0x29 | uVar14 * 0x800000) ^ (uVar14 >> 0x12 | uVar14 << 0x2e) ^
              (uVar14 >> 0xe | uVar14 << 0x32));
      uVar12 = uVar7 ^ uVar5;
      auVar31 = vpaddq_avx2(auVar19,auVar33 ^ auVar24 ^ auVar20 ^ auVar22 ^ auVar21);
      uVar13 = uVar13 + lVar4;
      auVar19 = vpaddq_avx2(auVar31,pauVar9[3]);
      uVar18 = (uVar7 >> 0x22 | uVar7 * 0x40000000) ^ (uVar7 >> 0x27 | uVar7 * 0x2000000) ^
               (uVar7 >> 0x1c | uVar7 << 0x24);
      lVar4 = lVar4 + ((uVar5 ^ uVar6) & uVar12 ^ uVar5);
      pauVar10[-5] = auVar19;
      pauVar17 = pauVar9 + 4;
      pauVar9 = pauVar9 + 8;
    } while (*(char *)((long)*pauVar17 + 7) != '\0');
    uVar18 = lVar4 + uVar18;
    lVar4 = uVar16 + *(long *)pauVar10[-4] + (uVar14 & uVar13) + (~uVar13 & uVar15) +
            ((uVar13 >> 0x29 | uVar13 * 0x800000) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
            (uVar13 >> 0xe | uVar13 << 0x32));
    uVar6 = uVar6 + lVar4;
    uVar16 = lVar4 + (uVar12 & (uVar18 ^ uVar7) ^ uVar7) +
             ((uVar18 >> 0x22 | uVar18 * 0x40000000) ^ (uVar18 >> 0x27 | uVar18 * 0x2000000) ^
             (uVar18 >> 0x1c | uVar18 << 0x24));
    lVar4 = uVar15 + *(long *)(pauVar10[-4] + 8) + (uVar13 & uVar6) + (~uVar6 & uVar14) +
            ((uVar6 >> 0x29 | uVar6 * 0x800000) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^
            (uVar6 >> 0xe | uVar6 << 0x32));
    uVar5 = uVar5 + lVar4;
    uVar15 = lVar4 + ((uVar18 ^ uVar7) & (uVar16 ^ uVar18) ^ uVar18) +
             ((uVar16 >> 0x22 | uVar16 * 0x40000000) ^ (uVar16 >> 0x27 | uVar16 * 0x2000000) ^
             (uVar16 >> 0x1c | uVar16 << 0x24));
    lVar4 = uVar14 + *(long *)pauVar10[-3] + (uVar6 & uVar5) + (~uVar5 & uVar13) +
            ((uVar5 >> 0x29 | uVar5 * 0x800000) ^ (uVar5 >> 0x12 | uVar5 << 0x2e) ^
            (uVar5 >> 0xe | uVar5 << 0x32));
    uVar7 = uVar7 + lVar4;
    uVar14 = lVar4 + ((uVar16 ^ uVar18) & (uVar15 ^ uVar16) ^ uVar16) +
             ((uVar15 >> 0x22 | uVar15 * 0x40000000) ^ (uVar15 >> 0x27 | uVar15 * 0x2000000) ^
             (uVar15 >> 0x1c | uVar15 << 0x24));
    lVar4 = uVar13 + *(long *)(pauVar10[-3] + 8) + (uVar5 & uVar7) + (~uVar7 & uVar6) +
            ((uVar7 >> 0x29 | uVar7 * 0x800000) ^ (uVar7 >> 0x12 | uVar7 << 0x2e) ^
            (uVar7 >> 0xe | uVar7 << 0x32));
    uVar18 = uVar18 + lVar4;
    uVar13 = lVar4 + ((uVar15 ^ uVar16) & (uVar14 ^ uVar15) ^ uVar15) +
             ((uVar14 >> 0x22 | uVar14 * 0x40000000) ^ (uVar14 >> 0x27 | uVar14 * 0x2000000) ^
             (uVar14 >> 0x1c | uVar14 << 0x24));
    lVar4 = uVar6 + *(long *)pauVar10[-2] + (uVar7 & uVar18) + (~uVar18 & uVar5) +
            ((uVar18 >> 0x29 | uVar18 * 0x800000) ^ (uVar18 >> 0x12 | uVar18 << 0x2e) ^
            (uVar18 >> 0xe | uVar18 << 0x32));
    uVar16 = uVar16 + lVar4;
    uVar6 = lVar4 + ((uVar14 ^ uVar15) & (uVar13 ^ uVar14) ^ uVar14) +
            ((uVar13 >> 0x22 | uVar13 * 0x40000000) ^ (uVar13 >> 0x27 | uVar13 * 0x2000000) ^
            (uVar13 >> 0x1c | uVar13 << 0x24));
    lVar4 = uVar5 + *(long *)(pauVar10[-2] + 8) + (uVar18 & uVar16) + (~uVar16 & uVar7) +
            ((uVar16 >> 0x29 | uVar16 * 0x800000) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
            (uVar16 >> 0xe | uVar16 << 0x32));
    uVar15 = uVar15 + lVar4;
    uVar5 = lVar4 + ((uVar13 ^ uVar14) & (uVar6 ^ uVar13) ^ uVar13) +
            ((uVar6 >> 0x22 | uVar6 * 0x40000000) ^ (uVar6 >> 0x27 | uVar6 * 0x2000000) ^
            (uVar6 >> 0x1c | uVar6 << 0x24));
    lVar4 = uVar7 + *(long *)pauVar10[-1] + (uVar16 & uVar15) + (~uVar15 & uVar18) +
            ((uVar15 >> 0x29 | uVar15 * 0x800000) ^ (uVar15 >> 0x12 | uVar15 << 0x2e) ^
            (uVar15 >> 0xe | uVar15 << 0x32));
    uVar14 = uVar14 + lVar4;
    uVar7 = lVar4 + ((uVar6 ^ uVar13) & (uVar5 ^ uVar6) ^ uVar6) +
            ((uVar5 >> 0x22 | uVar5 * 0x40000000) ^ (uVar5 >> 0x27 | uVar5 * 0x2000000) ^
            (uVar5 >> 0x1c | uVar5 << 0x24));
    lVar4 = uVar18 + *(long *)(pauVar10[-1] + 8) + (uVar15 & uVar14) + (~uVar14 & uVar16) +
            ((uVar14 >> 0x29 | uVar14 * 0x800000) ^ (uVar14 >> 0x12 | uVar14 << 0x2e) ^
            (uVar14 >> 0xe | uVar14 << 0x32));
    uVar13 = uVar13 + lVar4;
    uVar18 = lVar4 + ((uVar5 ^ uVar6) & (uVar7 ^ uVar5) ^ uVar5) +
             ((uVar7 >> 0x22 | uVar7 * 0x40000000) ^ (uVar7 >> 0x27 | uVar7 * 0x2000000) ^
             (uVar7 >> 0x1c | uVar7 << 0x24));
    lVar4 = uVar16 + *(long *)*pauVar1 + (uVar14 & uVar13) + (~uVar13 & uVar15) +
            ((uVar13 >> 0x29 | uVar13 * 0x800000) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
            (uVar13 >> 0xe | uVar13 << 0x32));
    uVar6 = uVar6 + lVar4;
    uVar16 = lVar4 + ((uVar7 ^ uVar5) & (uVar18 ^ uVar7) ^ uVar7) +
             ((uVar18 >> 0x22 | uVar18 * 0x40000000) ^ (uVar18 >> 0x27 | uVar18 * 0x2000000) ^
             (uVar18 >> 0x1c | uVar18 << 0x24));
    lVar4 = uVar15 + *(long *)(pauVar10[-8] + 8) + (uVar13 & uVar6) + (~uVar6 & uVar14) +
            ((uVar6 >> 0x29 | uVar6 * 0x800000) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^
            (uVar6 >> 0xe | uVar6 << 0x32));
    uVar5 = uVar5 + lVar4;
    uVar15 = lVar4 + ((uVar18 ^ uVar7) & (uVar16 ^ uVar18) ^ uVar18) +
             ((uVar16 >> 0x22 | uVar16 * 0x40000000) ^ (uVar16 >> 0x27 | uVar16 * 0x2000000) ^
             (uVar16 >> 0x1c | uVar16 << 0x24));
    lVar4 = uVar14 + *(long *)pauVar10[-7] + (uVar6 & uVar5) + (~uVar5 & uVar13) +
            ((uVar5 >> 0x29 | uVar5 * 0x800000) ^ (uVar5 >> 0x12 | uVar5 << 0x2e) ^
            (uVar5 >> 0xe | uVar5 << 0x32));
    uVar7 = uVar7 + lVar4;
    uVar14 = lVar4 + ((uVar16 ^ uVar18) & (uVar15 ^ uVar16) ^ uVar16) +
             ((uVar15 >> 0x22 | uVar15 * 0x40000000) ^ (uVar15 >> 0x27 | uVar15 * 0x2000000) ^
             (uVar15 >> 0x1c | uVar15 << 0x24));
    lVar4 = uVar13 + *(long *)(pauVar10[-7] + 8) + (uVar5 & uVar7) + (~uVar7 & uVar6) +
            ((uVar7 >> 0x29 | uVar7 * 0x800000) ^ (uVar7 >> 0x12 | uVar7 << 0x2e) ^
            (uVar7 >> 0xe | uVar7 << 0x32));
    uVar18 = uVar18 + lVar4;
    uVar13 = lVar4 + ((uVar15 ^ uVar16) & (uVar14 ^ uVar15) ^ uVar15) +
             ((uVar14 >> 0x22 | uVar14 * 0x40000000) ^ (uVar14 >> 0x27 | uVar14 * 0x2000000) ^
             (uVar14 >> 0x1c | uVar14 << 0x24));
    lVar4 = uVar6 + *(long *)pauVar10[-6] + (uVar7 & uVar18) + (~uVar18 & uVar5) +
            ((uVar18 >> 0x29 | uVar18 * 0x800000) ^ (uVar18 >> 0x12 | uVar18 << 0x2e) ^
            (uVar18 >> 0xe | uVar18 << 0x32));
    uVar16 = uVar16 + lVar4;
    uVar6 = lVar4 + ((uVar14 ^ uVar15) & (uVar13 ^ uVar14) ^ uVar14) +
            ((uVar13 >> 0x22 | uVar13 * 0x40000000) ^ (uVar13 >> 0x27 | uVar13 * 0x2000000) ^
            (uVar13 >> 0x1c | uVar13 << 0x24));
    lVar4 = uVar5 + *(long *)(pauVar10[-6] + 8) + (uVar18 & uVar16) + (~uVar16 & uVar7) +
            ((uVar16 >> 0x29 | uVar16 * 0x800000) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
            (uVar16 >> 0xe | uVar16 << 0x32));
    uVar15 = uVar15 + lVar4;
    uVar5 = lVar4 + ((uVar13 ^ uVar14) & (uVar6 ^ uVar13) ^ uVar13) +
            ((uVar6 >> 0x22 | uVar6 * 0x40000000) ^ (uVar6 >> 0x27 | uVar6 * 0x2000000) ^
            (uVar6 >> 0x1c | uVar6 << 0x24));
    lVar4 = uVar7 + *(long *)pauVar10[-5] + (uVar16 & uVar15) + (~uVar15 & uVar18) +
            ((uVar15 >> 0x29 | uVar15 * 0x800000) ^ (uVar15 >> 0x12 | uVar15 << 0x2e) ^
            (uVar15 >> 0xe | uVar15 << 0x32));
    uVar14 = uVar14 + lVar4;
    uVar7 = lVar4 + ((uVar6 ^ uVar13) & (uVar5 ^ uVar6) ^ uVar6) +
            ((uVar5 >> 0x22 | uVar5 * 0x40000000) ^ (uVar5 >> 0x27 | uVar5 * 0x2000000) ^
            (uVar5 >> 0x1c | uVar5 << 0x24));
    lVar4 = uVar18 + *(long *)(pauVar10[-5] + 8) + (uVar15 & uVar14) + (~uVar14 & uVar16) +
            ((uVar14 >> 0x29 | uVar14 * 0x800000) ^ (uVar14 >> 0x12 | uVar14 << 0x2e) ^
            (uVar14 >> 0xe | uVar14 << 0x32));
    plVar2 = *(long **)pauVar10[0x20];
    pauVar9 = pauVar10 + 0x1c;
    lVar3 = lVar4 + ((uVar5 ^ uVar6) & (uVar7 ^ uVar5) ^ uVar5) +
            ((uVar7 >> 0x22 | uVar7 * 0x40000000) ^ (uVar7 >> 0x27 | uVar7 * 0x2000000) ^
            (uVar7 >> 0x1c | uVar7 << 0x24)) + *plVar2;
    uVar7 = uVar7 + plVar2[1];
    uVar5 = uVar5 + plVar2[2];
    uVar6 = uVar6 + plVar2[3];
    uVar13 = uVar13 + lVar4 + plVar2[4];
    uVar14 = uVar14 + plVar2[5];
    uVar15 = uVar15 + plVar2[6];
    uVar16 = uVar16 + plVar2[7];
    *plVar2 = lVar3;
    plVar2[1] = uVar7;
    plVar2[2] = uVar5;
    plVar2[3] = uVar6;
    plVar2[4] = uVar13;
    plVar2[5] = uVar14;
    plVar2[6] = uVar15;
    plVar2[7] = uVar16;
    if (pauVar11 == *(undefined1 (**) [32])(pauVar10[0x20] + 0x10)) {
      return;
    }
    uVar18 = 0;
    uVar12 = uVar7 ^ uVar5;
    do {
      uVar18 = lVar3 + uVar18;
      lVar4 = uVar16 + *(long *)(*pauVar9 + 0x10) + (uVar14 & uVar13) + (~uVar13 & uVar15) +
              ((uVar13 >> 0x29 | uVar13 << 0x17) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
              (uVar13 >> 0xe | uVar13 << 0x32));
      uVar6 = uVar6 + lVar4;
      uVar16 = lVar4 + (uVar12 & (uVar18 ^ uVar7) ^ uVar7) +
               ((uVar18 >> 0x22 | uVar18 * 0x40000000) ^ (uVar18 >> 0x27 | uVar18 * 0x2000000) ^
               (uVar18 >> 0x1c | uVar18 << 0x24));
      lVar4 = uVar15 + *(long *)(*pauVar9 + 0x18) + (uVar13 & uVar6) + (~uVar6 & uVar14) +
              ((uVar6 >> 0x29 | uVar6 * 0x800000) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^
              (uVar6 >> 0xe | uVar6 << 0x32));
      uVar5 = uVar5 + lVar4;
      uVar15 = lVar4 + ((uVar18 ^ uVar7) & (uVar16 ^ uVar18) ^ uVar18) +
               ((uVar16 >> 0x22 | uVar16 * 0x40000000) ^ (uVar16 >> 0x27 | uVar16 * 0x2000000) ^
               (uVar16 >> 0x1c | uVar16 << 0x24));
      lVar4 = uVar14 + *(long *)(pauVar9[1] + 0x10) + (uVar6 & uVar5) + (~uVar5 & uVar13) +
              ((uVar5 >> 0x29 | uVar5 * 0x800000) ^ (uVar5 >> 0x12 | uVar5 << 0x2e) ^
              (uVar5 >> 0xe | uVar5 << 0x32));
      uVar7 = uVar7 + lVar4;
      uVar14 = lVar4 + ((uVar16 ^ uVar18) & (uVar15 ^ uVar16) ^ uVar16) +
               ((uVar15 >> 0x22 | uVar15 * 0x40000000) ^ (uVar15 >> 0x27 | uVar15 * 0x2000000) ^
               (uVar15 >> 0x1c | uVar15 << 0x24));
      lVar4 = uVar13 + *(long *)(pauVar9[1] + 0x18) + (uVar5 & uVar7) + (~uVar7 & uVar6) +
              ((uVar7 >> 0x29 | uVar7 * 0x800000) ^ (uVar7 >> 0x12 | uVar7 << 0x2e) ^
              (uVar7 >> 0xe | uVar7 << 0x32));
      uVar18 = uVar18 + lVar4;
      uVar13 = lVar4 + ((uVar15 ^ uVar16) & (uVar14 ^ uVar15) ^ uVar15) +
               ((uVar14 >> 0x22 | uVar14 * 0x40000000) ^ (uVar14 >> 0x27 | uVar14 * 0x2000000) ^
               (uVar14 >> 0x1c | uVar14 << 0x24));
      lVar4 = uVar6 + *(long *)(pauVar9[2] + 0x10) + (uVar7 & uVar18) + (~uVar18 & uVar5) +
              ((uVar18 >> 0x29 | uVar18 * 0x800000) ^ (uVar18 >> 0x12 | uVar18 << 0x2e) ^
              (uVar18 >> 0xe | uVar18 << 0x32));
      uVar16 = uVar16 + lVar4;
      uVar6 = lVar4 + ((uVar14 ^ uVar15) & (uVar13 ^ uVar14) ^ uVar14) +
              ((uVar13 >> 0x22 | uVar13 * 0x40000000) ^ (uVar13 >> 0x27 | uVar13 * 0x2000000) ^
              (uVar13 >> 0x1c | uVar13 << 0x24));
      lVar4 = uVar5 + *(long *)(pauVar9[2] + 0x18) + (uVar18 & uVar16) + (~uVar16 & uVar7) +
              ((uVar16 >> 0x29 | uVar16 * 0x800000) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
              (uVar16 >> 0xe | uVar16 << 0x32));
      uVar15 = uVar15 + lVar4;
      uVar5 = lVar4 + ((uVar13 ^ uVar14) & (uVar6 ^ uVar13) ^ uVar13) +
              ((uVar6 >> 0x22 | uVar6 * 0x40000000) ^ (uVar6 >> 0x27 | uVar6 * 0x2000000) ^
              (uVar6 >> 0x1c | uVar6 << 0x24));
      lVar4 = uVar7 + *(long *)(pauVar9[3] + 0x10) + (uVar16 & uVar15) + (~uVar15 & uVar18) +
              ((uVar15 >> 0x29 | uVar15 * 0x800000) ^ (uVar15 >> 0x12 | uVar15 << 0x2e) ^
              (uVar15 >> 0xe | uVar15 << 0x32));
      uVar14 = uVar14 + lVar4;
      uVar7 = lVar4 + ((uVar6 ^ uVar13) & (uVar5 ^ uVar6) ^ uVar6) +
              ((uVar5 >> 0x22 | uVar5 * 0x40000000) ^ (uVar5 >> 0x27 | uVar5 * 0x2000000) ^
              (uVar5 >> 0x1c | uVar5 << 0x24));
      lVar3 = uVar18 + *(long *)(pauVar9[3] + 0x18) + (uVar15 & uVar14) + (~uVar14 & uVar16) +
              ((uVar14 >> 0x29 | uVar14 * 0x800000) ^ (uVar14 >> 0x12 | uVar14 << 0x2e) ^
              (uVar14 >> 0xe | uVar14 << 0x32));
      uVar12 = uVar7 ^ uVar5;
      uVar13 = uVar13 + lVar3;
      uVar18 = (uVar7 >> 0x22 | uVar7 * 0x40000000) ^ (uVar7 >> 0x27 | uVar7 * 0x2000000) ^
               (uVar7 >> 0x1c | uVar7 << 0x24);
      lVar3 = lVar3 + ((uVar5 ^ uVar6) & uVar12 ^ uVar5);
      pauVar9 = pauVar9 + -4;
    } while (pauVar1 <= pauVar9);
    plVar2 = *(long **)pauVar10[0x20];
    pauVar9 = pauVar10 + 0x1c;
    lVar4 = lVar3 + uVar18 + *plVar2;
    uVar7 = uVar7 + plVar2[1];
    uVar5 = uVar5 + plVar2[2];
    uVar6 = uVar6 + plVar2[3];
    uVar13 = uVar13 + plVar2[4];
    uVar14 = uVar14 + plVar2[5];
    pauVar11 = pauVar11 + 8;
    uVar15 = uVar15 + plVar2[6];
    uVar16 = uVar16 + plVar2[7];
    pauVar1 = *(undefined1 (**) [32])(pauVar10[0x20] + 0x10);
    *plVar2 = lVar4;
    pauVar17 = pauVar11;
    if (pauVar11 == pauVar1) {
      pauVar17 = pauVar9;
    }
    plVar2[1] = uVar7;
    plVar2[2] = uVar5;
    plVar2[3] = uVar6;
    plVar2[4] = uVar13;
    plVar2[5] = uVar14;
    plVar2[6] = uVar15;
    plVar2[7] = uVar16;
  } while (pauVar11 <= pauVar1);
  return;
}

