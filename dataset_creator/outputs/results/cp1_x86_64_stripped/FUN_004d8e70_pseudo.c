
undefined8 FUN_004d8e70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_004d8e60();
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_00541530(lVar1,param_2);
      if ((int)uVar2 != 0) {
        *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
      }
    }
    return uVar2;
  }
  return 0;
}

