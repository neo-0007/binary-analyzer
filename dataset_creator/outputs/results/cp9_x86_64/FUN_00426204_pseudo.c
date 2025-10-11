
/* WARNING: Removing unreachable block (ram,0x0042627e) */
/* WARNING: Removing unreachable block (ram,0x0042624e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426204(undefined1 (*param_1) [16],ulong *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  
  auVar8 = pshufb(*param_1,_DAT_004271c0);
  auVar15._0_8_ = auVar8._8_8_;
  auVar15._8_4_ = auVar8._0_4_;
  auVar15._12_4_ = auVar8._4_4_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auVar8._0_8_;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_2;
  auVar9 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar2 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar9 = auVar9 ^ auVar16 << uVar1;
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = auVar15._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[1];
  auVar2 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar4 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar2 = auVar2 ^ auVar5 << uVar1;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = SUB168(auVar15 ^ auVar8,0);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[4];
  auVar16 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar3 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar16 = auVar16 ^ auVar8 << uVar1;
    }
  }
  auVar16 = auVar16 ^ auVar9 ^ auVar2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auVar16._0_8_;
  auVar9 = auVar9 ^ auVar6 << 0x40;
  auVar10._0_8_ = auVar9._0_8_ << 5;
  auVar10._8_8_ = auVar9._8_8_ << 5;
  auVar11._0_8_ = auVar9._0_8_ << 6;
  auVar11._8_8_ = auVar9._8_8_ << 6;
  auVar11 = auVar11 ^ auVar9 ^ auVar10;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = auVar11._0_8_ << 0x39;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auVar11._8_8_ << 0x39;
  auVar9 = auVar7 << 0x40 ^ auVar9;
  auVar12._0_8_ = auVar9._0_8_ >> 1;
  auVar12._8_8_ = auVar9._8_8_ >> 1;
  auVar13._0_8_ = auVar9._0_8_ >> 6;
  auVar13._8_8_ = auVar9._8_8_ >> 6;
  auVar13 = auVar13 ^ auVar9 ^ auVar12;
  auVar14._0_8_ = auVar13._0_8_ >> 1;
  auVar14._8_8_ = auVar13._8_8_ >> 1;
  auVar9 = pshufb(auVar14 ^ auVar2 ^ auVar16 >> 0x40 ^ auVar17 ^ auVar9,_DAT_004271c0);
  *param_1 = auVar9;
  return;
}

