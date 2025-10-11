
void ecp_nistz256_neg(ulong *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
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
  
  uVar8 = -*param_2;
  uVar10 = -param_2[1];
  uVar5 = uVar10 - (*param_2 != 0);
  uVar10 = (ulong)(param_2[1] != 0 || uVar10 < (*param_2 != 0));
  uVar1 = -param_2[2];
  uVar7 = uVar1 - uVar10;
  uVar10 = (ulong)(param_2[2] != 0 || uVar1 < uVar10);
  bVar11 = param_2[3] == 0;
  uVar9 = -param_2[3];
  bVar3 = uVar10 <= uVar9;
  uVar9 = uVar9 - uVar10;
  uVar10 = (ulong)(CARRY8(uVar5,DAT_005eb008) ||
                  CARRY8(uVar5 + DAT_005eb008,(ulong)CARRY8(uVar8,DAT_005eb000)));
  bVar12 = CARRY8(uVar7,DAT_005eb010);
  uVar1 = uVar7 + DAT_005eb010;
  lVar2 = uVar9 + DAT_005eb018;
  uVar6 = uVar5 + DAT_005eb008 + (ulong)CARRY8(uVar8,DAT_005eb000);
  uVar4 = uVar8 + DAT_005eb000;
  if (bVar11 && bVar3) {
    uVar6 = uVar5;
    uVar4 = uVar8;
  }
  *param_1 = uVar4;
  uVar8 = uVar1 + uVar10;
  if (bVar11 && bVar3) {
    uVar8 = uVar7;
  }
  param_1[1] = uVar6;
  uVar10 = lVar2 + (ulong)(bVar12 || CARRY8(uVar1,uVar10));
  if (bVar11 && bVar3) {
    uVar10 = uVar9;
  }
  param_1[2] = uVar8;
  param_1[3] = uVar10;
  return;
}

