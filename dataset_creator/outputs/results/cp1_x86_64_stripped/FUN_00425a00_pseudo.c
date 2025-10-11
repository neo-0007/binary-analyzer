
int FUN_00425a00(undefined8 *param_1,int param_2,long param_3,long *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long local_60;
  long *local_58;
  long local_50;
  int local_40;
  
  lVar8 = 0;
  if (param_4 != (long *)0x0) {
    lVar8 = *param_4;
  }
  iVar1 = FUN_00419fe0(0x40,0);
  if ((((iVar1 == 0) || (param_2 < 1 || param_5 == (long *)0x0)) || (param_1 == (undefined8 *)0x0))
     || (iVar1 = FUN_004222a0(param_1[2]), iVar1 == 0)) {
    return 0;
  }
  lVar4 = FUN_0054a470(param_1[1],(long)param_2);
  if (lVar4 == 0) {
    FUN_004222e0(param_1[2]);
    return 0;
  }
  if (param_3 == 0) {
    plVar6 = (long *)FUN_00425350(*param_1,0);
    if (plVar6 != (long *)0x0) {
      local_60 = 0;
      local_50 = *plVar6;
      if (*plVar6 != 0) goto LAB_00425b0d;
    }
LAB_00425bc5:
    for (iVar1 = 0; iVar2 = FUN_00436480(*(undefined8 *)(lVar4 + 8)), iVar1 < iVar2;
        iVar1 = iVar1 + 1) {
      local_58 = (long *)FUN_004364a0(*(undefined8 *)(lVar4 + 8),iVar1);
      if ((local_58 != (long *)0x0) && ((lVar8 == 0 || (*local_58 == lVar8)))) {
        local_60 = 0;
        goto LAB_00425c55;
      }
    }
LAB_00425c07:
    local_60 = 0;
    iVar1 = 0;
  }
  else {
    lVar5 = FUN_00426fd0(*param_1,param_3,0);
    plVar6 = (long *)FUN_00425350(*param_1,0);
    local_60 = lVar5;
    if ((plVar6 == (long *)0x0) || (*plVar6 == 0)) {
      local_50 = lVar5;
      if (lVar5 == 0) goto LAB_00425bc5;
    }
    else {
      local_50 = *plVar6;
      if (lVar5 != 0) {
        local_60 = FUN_00427410(lVar5);
        FUN_004273f0(lVar5);
        local_50 = local_60;
        if (local_60 == 0) goto LAB_00425c07;
      }
    }
LAB_00425b0d:
    iVar1 = 0;
    iVar2 = FUN_00427ba0(local_50);
    local_40 = -1;
    local_58 = (long *)0x0;
    for (iVar7 = 0; iVar3 = FUN_00436480(*(undefined8 *)(lVar4 + 8)), iVar7 < iVar3;
        iVar7 = iVar7 + 1) {
      plVar6 = (long *)FUN_004364a0(*(undefined8 *)(lVar4 + 8),iVar7);
      if ((plVar6 != (long *)0x0) &&
         (((lVar8 == 0 || (*plVar6 == lVar8)) &&
          (iVar3 = FUN_004272d0(local_50,plVar6[1]), local_40 < iVar3)))) {
        local_58 = plVar6;
        if (iVar2 == 0) goto LAB_00425c55;
        iVar1 = 1;
        local_40 = iVar3;
      }
    }
    if (iVar1 != 0) {
LAB_00425c55:
      iVar1 = (*(code *)local_58[3])(local_58[2]);
      if (iVar1 != 0) {
        iVar1 = 1;
        *param_5 = local_58[2];
        if (param_4 != (long *)0x0) {
          *param_4 = *local_58;
        }
      }
    }
  }
  FUN_004222e0(param_1[2]);
  FUN_004273f0(local_60);
  return iVar1;
}

