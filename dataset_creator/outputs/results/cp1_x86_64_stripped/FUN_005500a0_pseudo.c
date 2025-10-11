
/* WARNING: Removing unreachable block (ram,0x0055029a) */
/* WARNING: Removing unreachable block (ram,0x0055026a) */
/* WARNING: Removing unreachable block (ram,0x00550201) */
/* WARNING: Removing unreachable block (ram,0x005501d1) */
/* WARNING: Removing unreachable block (ram,0x00550146) */
/* WARNING: Removing unreachable block (ram,0x00550116) */
/* WARNING: Removing unreachable block (ram,0x005500c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005500a0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong uVar21;
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int iVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  ulong uVar58;
  ulong uVar59;
  
  auVar28 = *param_2;
  iVar46 = auVar28._4_4_;
  auVar45._0_8_ = auVar28._8_8_;
  auVar45._8_4_ = auVar28._0_4_;
  auVar45._12_4_ = iVar46;
  auVar44._0_8_ = auVar45._0_8_ << 1;
  auVar44._8_8_ = auVar45._8_8_ << 1;
  auVar57._0_4_ = -(uint)(iVar46 < 0);
  auVar57._4_4_ = -(uint)(iVar46 < 0);
  auVar57._8_4_ = -(uint)(iVar46 < 0);
  auVar57._12_4_ = -(uint)(iVar46 < 0);
  auVar45 = (auVar44 | (auVar28 >> 0x7f) << 0x40) ^ auVar57 & _DAT_005512d0;
  uVar58 = auVar45._8_8_;
  uVar21 = auVar45._0_8_;
  uVar59 = uVar58 ^ uVar21;
  auVar47._8_4_ = auVar45._0_4_;
  auVar47._0_8_ = uVar58;
  auVar47._12_4_ = auVar45._4_4_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar21;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar21;
  auVar28 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar4 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar28 = auVar28 ^ auVar48 << uVar3;
    }
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar58;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar58;
  auVar4 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar15 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar4 = auVar4 ^ auVar18 << uVar3;
    }
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = SUB168(auVar47 ^ auVar45,0);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar59;
  auVar48 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar5 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar48 = auVar48 ^ auVar10 << uVar3;
    }
  }
  auVar48 = auVar48 ^ auVar28 ^ auVar4;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = auVar48._0_8_;
  auVar28 = auVar28 ^ auVar22 << 0x40;
  auVar29._0_8_ = auVar28._0_8_ << 5;
  auVar29._8_8_ = auVar28._8_8_ << 5;
  auVar30._0_8_ = auVar28._0_8_ << 6;
  auVar30._8_8_ = auVar28._8_8_ << 6;
  auVar30 = auVar30 ^ auVar28 ^ auVar29;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = auVar30._0_8_ << 0x39;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = auVar30._8_8_ << 0x39;
  auVar28 = auVar23 << 0x40 ^ auVar28;
  auVar31._0_8_ = auVar28._0_8_ >> 1;
  auVar31._8_8_ = auVar28._8_8_ >> 1;
  auVar32._0_8_ = auVar28._0_8_ >> 6;
  auVar32._8_8_ = auVar28._8_8_ >> 6;
  auVar32 = auVar32 ^ auVar28 ^ auVar31;
  auVar33._0_8_ = auVar32._0_8_ >> 1;
  auVar33._8_8_ = auVar32._8_8_ >> 1;
  auVar33 = auVar33 ^ auVar4 ^ auVar48 >> 0x40 ^ auVar49 ^ auVar28;
  auVar28._8_4_ = auVar45._0_4_;
  auVar28._0_8_ = uVar58;
  auVar28._12_4_ = auVar45._4_4_;
  auVar55._0_8_ = auVar33._8_8_;
  auVar55._8_4_ = auVar33._0_4_;
  auVar55._12_4_ = auVar33._4_4_;
  *param_1 = auVar45;
  param_1[1] = auVar33;
  auVar1._16_16_ = auVar55 ^ auVar33;
  auVar1._0_16_ = auVar28 ^ auVar45;
  param_1[2] = auVar1._8_16_;
  auVar50._8_4_ = auVar33._0_4_;
  auVar50._0_8_ = auVar55._0_8_;
  auVar50._12_4_ = auVar33._4_4_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auVar33._0_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar21;
  auVar28 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar6 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar28 = auVar28 ^ auVar11 << uVar3;
    }
  }
  auVar16._8_8_ = 0;
  auVar16._0_8_ = auVar55._0_8_;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar58;
  auVar4 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar16 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar4 = auVar4 ^ auVar19 << uVar3;
    }
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = SUB168(auVar50 ^ auVar33,0);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar59;
  auVar48 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar7 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar48 = auVar48 ^ auVar12 << uVar3;
    }
  }
  auVar48 = auVar48 ^ auVar28 ^ auVar4;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = auVar48._0_8_;
  auVar28 = auVar28 ^ auVar24 << 0x40;
  auVar34._0_8_ = auVar28._0_8_ << 5;
  auVar34._8_8_ = auVar28._8_8_ << 5;
  auVar35._0_8_ = auVar28._0_8_ << 6;
  auVar35._8_8_ = auVar28._8_8_ << 6;
  auVar35 = auVar35 ^ auVar28 ^ auVar34;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = auVar35._0_8_ << 0x39;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = auVar35._8_8_ << 0x39;
  auVar28 = auVar25 << 0x40 ^ auVar28;
  auVar36._0_8_ = auVar28._0_8_ >> 1;
  auVar36._8_8_ = auVar28._8_8_ >> 1;
  auVar37._0_8_ = auVar28._0_8_ >> 6;
  auVar37._8_8_ = auVar28._8_8_ >> 6;
  auVar37 = auVar37 ^ auVar28 ^ auVar36;
  auVar38._0_8_ = auVar37._0_8_ >> 1;
  auVar38._8_8_ = auVar37._8_8_ >> 1;
  auVar38 = auVar38 ^ auVar4 ^ auVar48 >> 0x40 ^ auVar51 ^ auVar28;
  auVar52._0_8_ = auVar38._8_8_;
  auVar52._8_4_ = auVar38._0_4_;
  auVar52._12_4_ = auVar38._4_4_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = auVar38._0_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar21;
  auVar28 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar8 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar28 = auVar28 ^ auVar13 << uVar3;
    }
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auVar52._0_8_;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar58;
  auVar4 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar17 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar4 = auVar4 ^ auVar20 << uVar3;
    }
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = SUB168(auVar52 ^ auVar38,0);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar59;
  auVar48 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar9 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar48 = auVar48 ^ auVar14 << uVar3;
    }
  }
  auVar48 = auVar48 ^ auVar28 ^ auVar4;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = auVar48._0_8_;
  auVar28 = auVar28 ^ auVar26 << 0x40;
  auVar39._0_8_ = auVar28._0_8_ << 5;
  auVar39._8_8_ = auVar28._8_8_ << 5;
  auVar40._0_8_ = auVar28._0_8_ << 6;
  auVar40._8_8_ = auVar28._8_8_ << 6;
  auVar40 = auVar40 ^ auVar28 ^ auVar39;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = auVar40._0_8_ << 0x39;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = auVar40._8_8_ << 0x39;
  auVar28 = auVar27 << 0x40 ^ auVar28;
  auVar41._0_8_ = auVar28._0_8_ >> 1;
  auVar41._8_8_ = auVar28._8_8_ >> 1;
  auVar42._0_8_ = auVar28._0_8_ >> 6;
  auVar42._8_8_ = auVar28._8_8_ >> 6;
  auVar42 = auVar42 ^ auVar28 ^ auVar41;
  auVar43._0_8_ = auVar42._0_8_ >> 1;
  auVar43._8_8_ = auVar42._8_8_ >> 1;
  auVar43 = auVar43 ^ auVar4 ^ auVar48 >> 0x40 ^ auVar53 ^ auVar28;
  auVar54._8_4_ = auVar38._0_4_;
  auVar54._0_8_ = auVar52._0_8_;
  auVar54._12_4_ = auVar38._4_4_;
  auVar56._0_8_ = auVar43._8_8_;
  auVar56._8_4_ = auVar43._0_4_;
  auVar56._12_4_ = auVar43._4_4_;
  param_1[3] = auVar38;
  param_1[4] = auVar43;
  auVar2._16_16_ = auVar56 ^ auVar43;
  auVar2._0_16_ = auVar54 ^ auVar38;
  param_1[5] = auVar2._8_16_;
  return;
}

