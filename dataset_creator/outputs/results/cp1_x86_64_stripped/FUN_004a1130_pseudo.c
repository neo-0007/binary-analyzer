
undefined8 FUN_004a1130(undefined8 param_1,int param_2,long param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && (param_2 != 1)) {
    if (param_2 == 6) {
      lVar1 = FUN_00424a40();
      if (lVar1 != 0) {
        FUN_004a10c0(param_1,6,lVar1);
        return 1;
      }
    }
    else {
      lVar1 = FUN_004a22a0();
      if (lVar1 != 0) {
        FUN_004a10c0(param_1,param_2,lVar1);
        return 1;
      }
    }
    return 0;
  }
  FUN_004a10c0(param_1,param_2,param_3);
  return 1;
}

