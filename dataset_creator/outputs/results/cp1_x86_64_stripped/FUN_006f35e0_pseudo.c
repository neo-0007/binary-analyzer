
undefined8 FUN_006f35e0(undefined8 *param_1,ulong *param_2,ulong param_3,ulong param_4)

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
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_4;
  auVar1 = auVar1 * auVar6;
  uVar17 = auVar1._8_8_;
  uVar18 = (uint)param_3 & 3;
  if ((param_3 & 3) == 0) {
    param_2 = param_2 + param_3;
    param_1 = param_1 + (param_3 - 2);
    lVar19 = -param_3;
    goto LAB_006f36a2;
  }
  if (uVar18 != 2) {
    if (uVar18 < 3) {
      lVar19 = param_3 - 1;
      if (lVar19 == 0) {
        *param_1 = auVar1._0_8_;
      }
      else {
        param_2 = param_2 + param_3;
        param_1 = param_1 + (param_3 - 2);
        lVar20 = -lVar19;
        uVar16 = param_2[-lVar19];
        while( true ) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = auVar1._8_8_;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar16;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = param_4;
          param_1[lVar20 + 1] = auVar1._0_8_;
          auVar1 = auVar2 * auVar7 + auVar11;
          lVar19 = lVar20;
LAB_006f36a2:
          auVar12._8_8_ = 0;
          auVar12._0_8_ = auVar1._8_8_;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = param_2[lVar19 + 1];
          auVar8._8_8_ = 0;
          auVar8._0_8_ = param_4;
          param_1[lVar19 + 2] = auVar1._0_8_;
          auVar1 = auVar3 * auVar8 + auVar12;
LAB_006f36b5:
          auVar14._8_8_ = 0;
          auVar14._0_8_ = auVar1._8_8_;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = param_2[lVar19 + 2];
          auVar9._8_8_ = 0;
          auVar9._0_8_ = param_4;
          param_1[lVar19 + 3] = auVar1._0_8_;
          auVar1 = auVar4 * auVar9 + auVar14;
          uVar16 = param_2[lVar19 + 3];
LAB_006f36d9:
          auVar15._8_8_ = 0;
          auVar15._0_8_ = auVar1._8_8_;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = auVar1._8_8_;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar16;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = param_4;
          lVar20 = lVar19 + 4;
          if (-1 < lVar20) break;
          param_1[lVar20] = auVar1._0_8_;
          auVar1 = auVar5 * auVar10 + auVar13;
          uVar16 = param_2[lVar20];
        }
        param_1[lVar20] = auVar1._0_8_;
        auVar15 = auVar5 * auVar10 + auVar15;
        uVar17 = auVar15._8_8_;
        param_1[lVar19 + 5] = auVar15._0_8_;
      }
      return uVar17;
    }
    param_2 = param_2 + (param_3 - 1);
    param_1 = param_1 + (param_3 - 3);
    lVar19 = -param_3;
    goto LAB_006f36b5;
  }
  param_2 = param_2 + (param_3 - 2);
  param_1 = param_1 + (param_3 - 4);
  lVar19 = -param_3;
  uVar16 = param_2[3 - param_3];
  goto LAB_006f36d9;
}

