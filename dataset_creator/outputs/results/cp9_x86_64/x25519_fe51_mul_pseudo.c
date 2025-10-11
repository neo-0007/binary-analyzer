
void x25519_fe51_mul(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  uVar1 = *param_3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_3[1];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[1];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3[4] * 0x13;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[2];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_3[4] * 0x13;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[2];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_3[3] * 0x13;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[3];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_3[3] * 0x13;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[3];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_3[2] * 0x13;
  auVar2 = auVar4 * auVar15 + auVar2 * auVar13 + auVar6 * auVar17 + auVar8 * auVar19;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[4];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_3[2] * 0x13;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[4];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_3[1] * 0x13;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[1];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar1;
  auVar3 = auVar3 * auVar14 + auVar5 * auVar16 + auVar7 * auVar18 + auVar9 * auVar20 +
           auVar11 * auVar22;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[4];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar1;
  FUN_00506740(param_1,param_2,SUB168(auVar12 * auVar23,8),
               auVar2._8_8_ + SUB168(auVar10 * auVar21,8) +
               (ulong)CARRY8(auVar2._0_8_,SUB168(auVar10 * auVar21,0)),auVar3._0_8_,auVar3._8_8_);
  return;
}

