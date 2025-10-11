
void FUN_005133e0(long *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  uVar8 = SUB168(ZEXT816(0x1db42) * auVar1,0);
  uVar6 = SUB168(ZEXT816(0x1db42) * auVar1,8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2[1];
  uVar9 = SUB168(ZEXT816(0x1db42) * auVar2,0);
  uVar5 = SUB168(ZEXT816(0x1db42) * auVar2,8);
  uVar10 = uVar9 + uVar6;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[2];
  uVar11 = SUB168(ZEXT816(0x1db42) * auVar3,0);
  uVar7 = SUB168(ZEXT816(0x1db42) * auVar3,8);
  uVar6 = (ulong)CARRY8(uVar9,uVar6);
  uVar9 = uVar11 + uVar5;
  uVar12 = uVar9 + uVar6;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[3];
  uVar13 = SUB168(ZEXT816(0x1db42) * auVar4,0);
  uVar6 = (ulong)(CARRY8(uVar11,uVar5) || CARRY8(uVar9,uVar6));
  uVar9 = uVar13 + uVar7;
  uVar11 = uVar9 + uVar6;
  uVar7 = (SUB168(ZEXT816(0x1db42) * auVar4,8) +
          (ulong)(CARRY8(uVar13,uVar7) || CARRY8(uVar9,uVar6))) * 0x26;
  uVar6 = (ulong)CARRY8(uVar8,uVar7);
  uVar9 = (ulong)CARRY8(uVar10,uVar6);
  uVar5 = (ulong)CARRY8(uVar12,uVar9);
  param_1[1] = uVar10 + uVar6;
  param_1[2] = uVar12 + uVar9;
  param_1[3] = uVar11 + uVar5;
  *param_1 = uVar8 + uVar7 + (-(ulong)CARRY8(uVar11,uVar5) & 0x26);
  return;
}

