
void FUN_005f63a0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  bool bVar12;
  
  uVar4 = *param_2 - *param_3;
  uVar10 = (ulong)(*param_2 < *param_3);
  uVar2 = param_2[1] - param_3[1];
  uVar5 = uVar2 - uVar10;
  uVar10 = (ulong)(param_2[1] < param_3[1] || uVar2 < uVar10);
  uVar2 = param_2[2] - param_3[2];
  uVar7 = uVar2 - uVar10;
  uVar10 = (ulong)(param_2[2] < param_3[2] || uVar2 < uVar10);
  bVar11 = param_3[3] <= param_2[3];
  uVar9 = param_2[3] - param_3[3];
  bVar3 = uVar10 <= uVar9;
  uVar9 = uVar9 - uVar10;
  uVar10 = (ulong)(CARRY8(uVar5,DAT_005f6008) ||
                  CARRY8(uVar5 + DAT_005f6008,(ulong)CARRY8(uVar4,DAT_005f6000)));
  bVar12 = CARRY8(uVar7,DAT_005f6010);
  uVar2 = uVar7 + DAT_005f6010;
  lVar1 = uVar9 + DAT_005f6018;
  uVar6 = uVar5 + DAT_005f6008 + (ulong)CARRY8(uVar4,DAT_005f6000);
  uVar8 = uVar4 + DAT_005f6000;
  if (bVar11 && bVar3) {
    uVar6 = uVar5;
    uVar8 = uVar4;
  }
  *param_1 = uVar8;
  uVar8 = uVar2 + uVar10;
  if (bVar11 && bVar3) {
    uVar8 = uVar7;
  }
  param_1[1] = uVar6;
  uVar10 = lVar1 + (ulong)(bVar12 || CARRY8(uVar2,uVar10));
  if (bVar11 && bVar3) {
    uVar10 = uVar9;
  }
  param_1[2] = uVar8;
  param_1[3] = uVar10;
  return;
}

