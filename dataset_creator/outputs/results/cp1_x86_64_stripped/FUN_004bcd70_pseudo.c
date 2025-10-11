
undefined8 FUN_004bcd70(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((int)param_1[1] == 0) {
    return 1;
  }
  if (param_2 == 0) {
    FUN_004b7b50();
  }
  else {
    lVar1 = FUN_005c0e80(*param_1,*param_1,(int)param_1[1],param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_004b8240(param_1,(int)param_1[1] + 1);
      if (lVar2 != 0) {
        lVar2 = param_1[1];
        *(int *)(param_1 + 1) = (int)lVar2 + 1;
        *(long *)(*param_1 + (long)(int)lVar2 * 8) = lVar1;
        return 1;
      }
      return 0;
    }
  }
  return 1;
}

