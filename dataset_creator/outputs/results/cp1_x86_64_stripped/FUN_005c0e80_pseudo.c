
ulong FUN_005c0e80(undefined8 *param_1,ulong *param_2,uint param_3,ulong param_4)

{
  undefined1 auVar1 [16];
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong uVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  
  uVar22 = 0;
  if (0 < (int)param_3) {
    puVar23 = param_2;
    puVar24 = param_1;
    if ((param_3 & 0xfffffffc) != 0) {
      do {
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar22;
        param_3 = param_3 - 4;
        param_2 = puVar23 + 4;
        param_1 = puVar24 + 4;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = param_4;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *puVar23;
        auVar15 = auVar1 * auVar8 + auVar15;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = auVar15._8_8_;
        *puVar24 = auVar15._0_8_;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = param_4;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = puVar23[1];
        auVar16 = auVar2 * auVar9 + auVar16;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = auVar16._8_8_;
        puVar24[1] = auVar16._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = param_4;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = puVar23[2];
        auVar17 = auVar3 * auVar10 + auVar17;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = auVar17._8_8_;
        puVar24[2] = auVar17._0_8_;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_4;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = puVar23[3];
        auVar18 = auVar4 * auVar11 + auVar18;
        uVar22 = auVar18._8_8_;
        puVar24[3] = auVar18._0_8_;
        puVar23 = param_2;
        puVar24 = param_1;
      } while ((param_3 & 0xfffffffc) != 0);
      if (param_3 == 0) {
        return uVar22;
      }
    }
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar22;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_4;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *param_2;
    auVar19 = auVar5 * auVar12 + auVar19;
    uVar22 = auVar19._8_8_;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar22;
    *param_1 = auVar19._0_8_;
    if (param_3 != 1) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_4;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = param_2[1];
      auVar20 = auVar6 * auVar13 + auVar20;
      uVar22 = auVar20._8_8_;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar22;
      param_1[1] = auVar20._0_8_;
      if (param_3 != 2) {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = param_4;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = param_2[2];
        auVar21 = auVar7 * auVar14 + auVar21;
        param_1[2] = auVar21._0_8_;
        return auVar21._8_8_;
      }
    }
  }
  return uVar22;
}

