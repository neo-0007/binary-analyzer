
undefined1  [16]
FUN_006a4d80(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,int *param_6,
            int param_7,int param_8,ulong param_9,long param_10,uint *param_11)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  long *local_58;
  
  uVar7 = param_3 & 0xffffffff;
  uVar6 = 10;
  plVar5 = (long *)FUN_006a4ba0(param_10 + 0xd0);
  if ((param_9 != 2) && (uVar6 = 1000, param_9 != 4)) {
    uVar6 = 1;
  }
  uVar12 = 0;
  iVar11 = 0;
  local_58 = param_4;
  while( true ) {
    bVar13 = (int)uVar7 == -1;
    bVar8 = param_2 != (long *)0x0 && bVar13;
    bVar9 = bVar13;
    if (bVar8) {
      if ((int *)param_2[2] < (int *)param_2[3]) {
        iVar3 = *(int *)param_2[2];
      }
      else {
        iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      if (iVar3 == -1) {
        param_2 = (long *)0x0;
      }
      bVar9 = iVar3 == -1 && bVar8;
    }
    bVar8 = local_58 != (long *)0x0 && param_5 == -1;
    if (bVar8) break;
    if (bVar9 == (param_5 == -1)) goto LAB_006a4f30;
LAB_006a4e42:
    if (param_9 <= uVar12) goto LAB_006a4f30;
    uVar10 = uVar7;
    if ((param_2 != (long *)0x0) && (bVar13)) {
      if ((uint *)param_2[2] < (uint *)param_2[3]) {
        uVar4 = *(uint *)param_2[2];
      }
      else {
        uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      uVar10 = (ulong)uVar4;
      if (uVar4 == 0xffffffff) {
        param_2 = (long *)0x0;
      }
    }
    cVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,uVar10,0x2a);
    if (9 < (byte)(cVar2 - 0x30U)) goto LAB_006a4f9f;
    iVar11 = (int)(char)(cVar2 - 0x30U) + iVar11 * 10;
    if ((param_8 < (int)(uVar6 * iVar11)) || ((int)(uVar6 * iVar11 + uVar6) <= param_7))
    goto LAB_006a4f9f;
    uVar6 = uVar6 / 10;
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
      param_2[2] = param_2[2] + 4;
    }
    else {
      (**(code **)(*param_2 + 0x50))(param_2);
    }
    uVar12 = uVar12 + 1;
    uVar7 = 0xffffffff;
  }
  if ((int *)local_58[2] < (int *)local_58[3]) {
    iVar3 = *(int *)local_58[2];
  }
  else {
    iVar3 = (**(code **)(*local_58 + 0x48))();
  }
  plVar1 = (long *)0x0;
  if (iVar3 != -1) {
    plVar1 = local_58;
  }
  local_58 = plVar1;
  if (bVar9 != (iVar3 == -1 && bVar8)) goto LAB_006a4e42;
LAB_006a4f30:
  if (uVar12 == param_9) {
    *param_6 = iVar11;
    goto LAB_006a4fb8;
  }
LAB_006a4f9f:
  if ((param_9 == 4) && (uVar12 == 2)) {
    *param_6 = iVar11 + -100;
  }
  else {
    *param_11 = *param_11 | 4;
  }
LAB_006a4fb8:
  auVar14._8_8_ = param_3 & 0xffffffff00000000 | uVar7;
  auVar14._0_8_ = param_2;
  return auVar14;
}

