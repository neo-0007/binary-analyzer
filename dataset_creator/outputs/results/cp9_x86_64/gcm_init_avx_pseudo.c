
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gcm_init_avx(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulong uVar19;
  
  auVar15 = vpshufd_avx(*param_2,0x4e);
  auVar13 = vpshufd_avx(auVar15,0xff);
  auVar12 = vpsrlq_avx(auVar15,0x3f);
  auVar11 = vpsllq_avx(auVar15,1);
  auVar15 = vpcmpgtd_avx((undefined1  [16])0x0,auVar13);
  auVar13 = vpslldq_avx(auVar12,8);
  auVar13 = vpor_avx(auVar11,auVar13);
  auVar15 = vpand_avx(auVar15,_DAT_004271d0);
  auVar13 = auVar13 ^ auVar15;
  auVar15 = vpunpckhqdq_avx(auVar13,auVar13);
  uVar9 = auVar13._0_8_;
  uVar19 = auVar15._0_8_ ^ uVar9;
  lVar10 = 4;
  auVar15 = auVar13;
  while( true ) {
    auVar11 = vpunpckhqdq_avx(auVar15,auVar15);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = auVar15._8_8_;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = auVar13._8_8_;
    auVar12 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar14 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar12 = auVar12 ^ auVar17 << uVar1;
      }
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar15._0_8_;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar9;
    auVar14 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar16 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar14 = auVar14 ^ auVar18 << uVar1;
      }
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = SUB168(auVar11 ^ auVar15,0);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar19;
    auVar11 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar4 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar11 = auVar11 ^ auVar7 << uVar1;
      }
    }
    auVar11 = auVar11 ^ auVar12 ^ auVar14;
    auVar17 = vpslldq_avx(auVar11,8);
    auVar16 = vpsrldq_avx(auVar11,8);
    auVar14 = auVar14 ^ auVar17;
    auVar17 = vpsllq_avx(auVar14,0x39);
    auVar18 = vpsllq_avx(auVar14,0x3e);
    auVar11 = vpsllq_avx(auVar14,0x3f);
    auVar11 = auVar18 ^ auVar17 ^ auVar11;
    auVar17 = vpslldq_avx(auVar11,8);
    auVar11 = vpsrldq_avx(auVar11,8);
    auVar14 = auVar14 ^ auVar17;
    auVar17 = vpsrlq_avx(auVar14,1);
    auVar18 = vpsrlq_avx(auVar17,5);
    auVar17 = vpsrlq_avx(auVar14 ^ auVar17 ^ auVar18,1);
    auVar17 = auVar17 ^ auVar12 ^ auVar16 ^ auVar11 ^ auVar14;
    auVar11 = vpshufd_avx(auVar15,0x4e);
    auVar12 = vpshufd_avx(auVar17,0x4e);
    *param_1 = auVar15;
    param_1[1] = auVar17;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) break;
    auVar15 = vpalignr_avx(auVar12 ^ auVar17,auVar11 ^ auVar15,8);
    param_1[2] = auVar15;
    auVar15 = vpunpckhqdq_avx(auVar17,auVar17);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = auVar17._8_8_;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auVar13._8_8_;
    auVar11 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar12 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar11 = auVar11 ^ auVar8 << uVar1;
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar17._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar9;
    auVar12 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar2 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar12 = auVar12 ^ auVar5 << uVar1;
      }
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = SUB168(auVar15 ^ auVar17,0);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar19;
    auVar15 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar3 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar15 = auVar15 ^ auVar6 << uVar1;
      }
    }
    auVar15 = auVar15 ^ auVar11 ^ auVar12;
    auVar17 = vpslldq_avx(auVar15,8);
    auVar14 = vpsrldq_avx(auVar15,8);
    auVar12 = auVar12 ^ auVar17;
    auVar17 = vpsllq_avx(auVar12,0x39);
    auVar16 = vpsllq_avx(auVar12,0x3e);
    auVar15 = vpsllq_avx(auVar12,0x3f);
    auVar15 = auVar16 ^ auVar17 ^ auVar15;
    auVar17 = vpslldq_avx(auVar15,8);
    auVar16 = vpsrldq_avx(auVar15,8);
    auVar12 = auVar12 ^ auVar17;
    auVar15 = vpsrlq_avx(auVar12,1);
    auVar17 = vpsrlq_avx(auVar15,5);
    auVar15 = vpsrlq_avx(auVar12 ^ auVar15 ^ auVar17,1);
    auVar15 = auVar15 ^ auVar11 ^ auVar14 ^ auVar16 ^ auVar12;
    param_1 = param_1 + 3;
  }
  auVar15 = vpalignr_avx(auVar11 ^ auVar15,auVar12 ^ auVar17,8);
  param_1[2] = auVar15;
  return;
}

