
void ecp_nistz256_add(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar6 = *param_2 + *param_3;
  uVar10 = (ulong)CARRY8(*param_2,*param_3);
  uVar8 = param_2[1] + param_3[1];
  uVar7 = uVar8 + uVar10;
  uVar10 = (ulong)(CARRY8(param_2[1],param_3[1]) || CARRY8(uVar8,uVar10));
  uVar8 = param_2[2] + param_3[2];
  uVar9 = uVar8 + uVar10;
  uVar10 = (ulong)(CARRY8(param_2[2],param_3[2]) || CARRY8(uVar8,uVar10));
  uVar8 = param_2[3] + param_3[3];
  uVar11 = uVar8 + uVar10;
  uVar1 = (ulong)(uVar7 < DAT_005eb008 || uVar7 - DAT_005eb008 < (ulong)(uVar6 < DAT_005eb000));
  uVar3 = uVar9 - DAT_005eb010;
  uVar2 = (ulong)(uVar9 < DAT_005eb010 || uVar3 < uVar1);
  uVar4 = uVar11 - DAT_005eb018;
  bVar5 = (CARRY8(param_2[3],param_3[3]) || CARRY8(uVar8,uVar10)) <
          (uVar11 < DAT_005eb018 || uVar4 < uVar2);
  uVar8 = (uVar7 - DAT_005eb008) - (ulong)(uVar6 < DAT_005eb000);
  uVar10 = uVar6 - DAT_005eb000;
  if (bVar5) {
    uVar8 = uVar7;
    uVar10 = uVar6;
  }
  *param_1 = uVar10;
  uVar10 = uVar3 - uVar1;
  if (bVar5) {
    uVar10 = uVar9;
  }
  param_1[1] = uVar8;
  uVar8 = uVar4 - uVar2;
  if (bVar5) {
    uVar8 = uVar11;
  }
  param_1[2] = uVar10;
  param_1[3] = uVar8;
  return;
}

