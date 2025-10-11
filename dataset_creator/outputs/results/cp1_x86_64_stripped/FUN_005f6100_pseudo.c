
void FUN_005f6100(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar9 = *param_2;
  uVar11 = param_2[1];
  uVar5 = uVar9 * 2;
  uVar1 = param_2[2];
  uVar6 = uVar11 * 2 + (ulong)CARRY8(uVar9,uVar9);
  uVar7 = param_2[3];
  uVar9 = (ulong)(CARRY8(uVar11,uVar11) || CARRY8(uVar11 * 2,(ulong)CARRY8(uVar9,uVar9)));
  uVar8 = uVar1 * 2 + uVar9;
  uVar9 = (ulong)(CARRY8(uVar1,uVar1) || CARRY8(uVar1 * 2,uVar9));
  uVar10 = uVar7 * 2 + uVar9;
  uVar11 = (ulong)(uVar6 < DAT_005f6008 || uVar6 - DAT_005f6008 < (ulong)(uVar5 < DAT_005f6000));
  uVar2 = uVar8 - DAT_005f6010;
  uVar1 = (ulong)(uVar8 < DAT_005f6010 || uVar2 < uVar11);
  uVar3 = uVar10 - DAT_005f6018;
  bVar4 = (CARRY8(uVar7,uVar7) || CARRY8(uVar7 * 2,uVar9)) <
          (uVar10 < DAT_005f6018 || uVar3 < uVar1);
  uVar7 = (uVar6 - DAT_005f6008) - (ulong)(uVar5 < DAT_005f6000);
  uVar9 = uVar5 - DAT_005f6000;
  if (bVar4) {
    uVar7 = uVar6;
    uVar9 = uVar5;
  }
  *param_1 = uVar9;
  uVar9 = uVar2 - uVar11;
  if (bVar4) {
    uVar9 = uVar8;
  }
  param_1[1] = uVar7;
  uVar11 = uVar3 - uVar1;
  if (bVar4) {
    uVar11 = uVar10;
  }
  param_1[2] = uVar9;
  param_1[3] = uVar11;
  return;
}

