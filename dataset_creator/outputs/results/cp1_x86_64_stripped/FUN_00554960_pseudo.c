
long FUN_00554960(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_005591a0(param_1,0);
  if (lVar1 != 0) {
    lVar2 = FUN_005410a0(lVar1);
    FUN_0040f4f0(lVar1);
    if (lVar2 != 0) {
      if (param_2 != (long *)0x0) {
        FUN_004ed620(*param_2);
        *param_2 = lVar2;
      }
      return lVar2;
    }
  }
  return 0;
}

