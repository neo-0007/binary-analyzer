
undefined8
FUN_005bd9e0(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,long param_6)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = FUN_004b7700();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  lVar1 = FUN_004b84d0(param_2,param_3,lVar1);
  if (lVar1 == 0) {
    if (*param_1 != 0) {
      if ((*(byte *)(param_6 + 0x28) & 1) == 0) {
        FUN_004b7fa0();
      }
      else {
        FUN_004b7f20();
      }
      *param_1 = 0;
    }
    return 0;
  }
  FUN_004b7e70(*param_1,4);
  return 1;
}

