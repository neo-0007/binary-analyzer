
undefined8 FUN_005a1990(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar2 = *param_1;
  if (param_2 != 0) {
    if (lVar2 == 0) {
      lVar2 = FUN_004a7700();
      *param_1 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    uVar1 = thunk_FUN_0049f880(lVar2,param_2);
    return uVar1;
  }
  thunk_FUN_004a2270();
  *param_1 = 0;
  return 1;
}

