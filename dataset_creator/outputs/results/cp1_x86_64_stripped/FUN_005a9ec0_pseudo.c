
long FUN_005a9ec0(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 == (long *)0x0) || (lVar2 = *param_1, lVar2 == 0)) {
    lVar2 = FUN_005acdd0();
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_005a9d60(lVar2,param_2);
    if ((iVar1 != 0) && (iVar1 = FUN_005a9de0(lVar2,param_3,param_4,param_5), iVar1 != 0)) {
      if (param_1 == (long *)0x0) {
        return lVar2;
      }
      goto LAB_005a9f34;
    }
    if ((param_1 != (long *)0x0) && (*param_1 == lVar2)) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_005a9d60(lVar2);
    if ((iVar1 != 0) && (iVar1 = FUN_005a9de0(lVar2,param_3,param_4,param_5), iVar1 != 0)) {
LAB_005a9f34:
      if (*param_1 == 0) {
        *param_1 = lVar2;
        return lVar2;
      }
      return lVar2;
    }
    if (*param_1 == lVar2) {
      return 0;
    }
  }
  FUN_005acaf0(lVar2);
  return 0;
}

