
void FUN_005f6240(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar8 = *param_2;
  uVar11 = param_2[1];
  uVar3 = uVar8 * 2;
  uVar1 = param_2[2];
  uVar7 = uVar11 * 2 + (ulong)CARRY8(uVar8,uVar8);
  uVar2 = param_2[3];
  uVar8 = (ulong)(CARRY8(uVar11,uVar11) || CARRY8(uVar11 * 2,(ulong)CARRY8(uVar8,uVar8)));
  uVar9 = uVar1 * 2 + uVar8;
  uVar8 = (ulong)(CARRY8(uVar1,uVar1) || CARRY8(uVar1 * 2,uVar8));
  uVar12 = uVar2 * 2 + uVar8;
  uVar11 = (ulong)(uVar7 < DAT_005f6008 ||
                  uVar7 - DAT_005f6008 < (ulong)(uVar3 != 0xffffffffffffffff));
  uVar1 = (ulong)(uVar9 < uVar11);
  uVar13 = (uVar12 - DAT_005f6018) - uVar1;
  uVar10 = (uVar7 - DAT_005f6008) - (ulong)(uVar3 != 0xffffffffffffffff);
  uVar14 = uVar3 + 1;
  uVar11 = uVar9 - uVar11;
  if ((CARRY8(uVar2,uVar2) || CARRY8(uVar2 * 2,uVar8)) <
      (uVar12 < DAT_005f6018 || uVar12 - DAT_005f6018 < uVar1)) {
    uVar13 = uVar12;
    uVar10 = uVar7;
    uVar14 = uVar3;
    uVar11 = uVar9;
  }
  lVar6 = uVar14 + *param_2;
  uVar8 = uVar10 + param_2[1];
  uVar7 = uVar8 + CARRY8(uVar14,*param_2);
  uVar8 = (ulong)(CARRY8(uVar10,param_2[1]) || CARRY8(uVar8,(ulong)CARRY8(uVar14,*param_2)));
  uVar1 = uVar11 + param_2[2];
  uVar10 = uVar1 + uVar8;
  uVar8 = (ulong)(CARRY8(uVar11,param_2[2]) || CARRY8(uVar1,uVar8));
  uVar11 = uVar13 + param_2[3];
  uVar14 = uVar11 + uVar8;
  uVar1 = (ulong)(uVar7 < DAT_005f6008 || uVar7 - DAT_005f6008 < (ulong)(lVar6 != -1));
  uVar2 = (ulong)(uVar10 < uVar1);
  uVar3 = uVar14 - DAT_005f6018;
  bVar4 = (CARRY8(uVar13,param_2[3]) || CARRY8(uVar11,uVar8)) <
          (uVar14 < DAT_005f6018 || uVar3 < uVar2);
  uVar8 = (uVar7 - DAT_005f6008) - (ulong)(lVar6 != -1);
  lVar5 = lVar6 + 1;
  if (bVar4) {
    uVar8 = uVar7;
    lVar5 = lVar6;
  }
  *param_1 = lVar5;
  uVar11 = uVar10 - uVar1;
  if (bVar4) {
    uVar11 = uVar10;
  }
  param_1[1] = uVar8;
  uVar8 = uVar3 - uVar2;
  if (bVar4) {
    uVar8 = uVar14;
  }
  param_1[2] = uVar11;
  param_1[3] = uVar8;
  return;
}

