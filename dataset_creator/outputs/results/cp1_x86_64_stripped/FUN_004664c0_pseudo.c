
undefined8 FUN_004664c0(long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043b840();
  if ((int)uVar1 != 0) {
    if (param_2 != 0) {
      uVar1 = FUN_0053bea0(*(undefined8 *)(param_1 + 8),param_2,param_4,0);
      return uVar1;
    }
    uVar1 = FUN_0053bdb0(*(undefined8 *)(param_1 + 8));
    *param_3 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

