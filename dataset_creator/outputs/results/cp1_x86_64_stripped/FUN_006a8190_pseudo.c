
void FUN_006a8190(long param_1,undefined4 param_2,int *param_3,int *param_4,long param_5,
                 long param_6)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  
  param_5 = param_5 - param_6;
  uVar1 = *(uint *)(param_1 + 0x18) & 0xb0;
  if (uVar1 == 0x20) {
    if (param_6 != 0) {
      FUN_00771ea0(param_3,param_4,param_6,0x3fffffffffffffff);
    }
    if (param_5 == 0) {
      return;
    }
    FUN_00771ff0(param_3 + param_6,param_2,param_5,0x3fffffffffffffff);
    return;
  }
  if (uVar1 == 0x10) {
    plVar3 = (long *)FUN_006a4ba0(param_1 + 0xd0);
    iVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,0x2d);
    if ((*param_4 == iVar2) ||
       (iVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,0x2b), *param_4 == iVar2)) {
      *param_3 = iVar2;
      piVar6 = param_4 + 1;
      piVar4 = param_3 + 1;
      lVar5 = 1;
      goto LAB_006a81d8;
    }
    iVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,0x30);
    if ((*param_4 != iVar2) || (param_6 < 2)) goto LAB_006a81d5;
    iVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,0x78);
    if ((param_4[1] == iVar2) ||
       (iVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,0x58), param_4[1] == iVar2)) {
      piVar4 = param_3 + 2;
      piVar6 = param_4 + 2;
      lVar5 = 2;
      *param_3 = *param_4;
      param_3[1] = param_4[1];
      goto LAB_006a81d8;
    }
    lVar5 = 0;
    if (param_5 == 0) goto LAB_006a82ef;
LAB_006a82c0:
    FUN_00771ff0(param_3,param_2,param_5,0x3fffffffffffffff);
    piVar4 = param_3;
  }
  else {
LAB_006a81d5:
    lVar5 = 0;
    piVar4 = param_3;
    piVar6 = param_4;
LAB_006a81d8:
    param_3 = piVar4;
    param_4 = piVar6;
    if (param_5 != 0) goto LAB_006a82c0;
  }
  param_6 = param_6 - lVar5;
  if (param_6 == 0) {
    return;
  }
  param_3 = piVar4 + param_5;
LAB_006a82ef:
  FUN_00771ea0(param_3,param_4,param_6,0x3fffffffffffffff);
  return;
}

