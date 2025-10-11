
long FUN_004b9bc0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_004222a0(param_2);
  if (iVar1 != 0) {
    lVar2 = *param_1;
    FUN_004222e0(param_2);
    if (lVar2 != 0) {
      return lVar2;
    }
    lVar2 = FUN_004b9790();
    if (lVar2 != 0) {
      iVar1 = FUN_004b9860(lVar2,param_3,param_4);
      if ((iVar1 != 0) && (iVar1 = FUN_004222c0(param_2), iVar1 != 0)) {
        if (*param_1 == 0) {
          *param_1 = lVar2;
        }
        else {
          FUN_004b9810(lVar2);
          lVar2 = *param_1;
        }
        FUN_004222e0(param_2);
        return lVar2;
      }
      FUN_004b9810(lVar2);
      return 0;
    }
  }
  return 0;
}

