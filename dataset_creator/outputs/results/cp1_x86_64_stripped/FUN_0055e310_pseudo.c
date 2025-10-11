
undefined4 FUN_0055e310(long *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  iVar2 = 0;
  lVar6 = *param_1;
  if (lVar6 == 0) {
    lVar6 = FUN_00436410();
    *param_1 = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
  }
  else {
    for (; iVar1 = FUN_00436480(lVar6), iVar2 < iVar1; iVar2 = iVar2 + 1) {
      uVar4 = FUN_004364a0(*param_1,iVar2);
      uVar5 = FUN_004384a0(uVar4);
      iVar1 = FUN_00423da0(uVar5);
      if (iVar1 == param_2) {
        FUN_00438680(uVar4);
        lVar6 = FUN_004386c0(param_2,param_3,param_4);
        if (lVar6 == 0) {
          return 0;
        }
        lVar7 = FUN_004364d0(*param_1,iVar2,lVar6);
        if (lVar7 == 0) {
          FUN_00438680(lVar6);
          return 0;
        }
        goto LAB_0055e396;
      }
      lVar6 = *param_1;
    }
  }
  lVar6 = FUN_004386c0(param_2,param_3,param_4);
  if (lVar6 == 0) {
    return 0;
  }
  iVar2 = FUN_00435f80(*param_1,lVar6);
  if (iVar2 == 0) {
    FUN_00438680(lVar6);
    uVar3 = 0;
  }
  else {
LAB_0055e396:
    uVar3 = 1;
  }
  return uVar3;
}

