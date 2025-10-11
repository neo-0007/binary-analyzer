
long FUN_004a1240(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_004a2560(param_2,param_1,0);
  if (lVar1 == 0) {
    return 0;
  }
  if (param_3 == (long *)0x0) {
    lVar2 = FUN_004a7f10();
    if (lVar2 == 0) {
LAB_004a12b5:
      thunk_FUN_004a2270(lVar1);
      return 0;
    }
  }
  else {
    lVar2 = *param_3;
    if (lVar2 == 0) {
      lVar2 = FUN_004a7f10();
      if (lVar2 == 0) goto LAB_004a12b5;
      *param_3 = lVar2;
    }
  }
  FUN_004a10c0(lVar2,0x10,lVar1);
  return lVar2;
}

