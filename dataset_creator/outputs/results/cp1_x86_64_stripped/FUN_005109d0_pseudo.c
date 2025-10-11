
uint FUN_005109d0(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(*param_1 + 0x120) == 0) {
    if (((param_3 != 0) &&
        (lVar3 = FUN_004b8260(param_3,*(undefined8 *)(param_2 + 0x10)), lVar3 == 0)) ||
       ((param_4 != 0 && (lVar3 = FUN_004b8260(param_4,*(undefined8 *)(param_2 + 0x18)), lVar3 == 0)
        ))) {
      uVar1 = 0;
      lVar3 = 0;
      goto LAB_00510a9e;
    }
    if (param_5 != 0) {
      lVar3 = FUN_004b8260(param_5,*(undefined8 *)(param_2 + 0x20));
      uVar1 = (uint)(lVar3 != 0);
      lVar3 = 0;
      goto LAB_00510a9e;
    }
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if ((param_6 == 0) && (lVar3 = FUN_004b2a70(param_1[0x15]), param_6 = lVar3, lVar3 == 0)) {
      return 0;
    }
    if (((param_3 != 0) &&
        (uVar1 = (**(code **)(*param_1 + 0x120))
                           (param_1,param_3,*(undefined8 *)(param_2 + 0x10),param_6), uVar1 == 0))
       || ((param_4 != 0 &&
           (uVar1 = (**(code **)(*param_1 + 0x120))
                              (param_1,param_4,*(undefined8 *)(param_2 + 0x18),param_6), uVar1 == 0)
           ))) goto LAB_00510a9e;
    if (param_5 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x120))
                        (param_1,param_5,*(undefined8 *)(param_2 + 0x20),param_6);
      uVar1 = (uint)(iVar2 != 0);
      goto LAB_00510a9e;
    }
  }
  uVar1 = 1;
LAB_00510a9e:
  FUN_004b2b50(lVar3);
  return uVar1;
}

