
undefined8 FUN_0060e7e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0xffffffff;
  }
  if (param_2 == (undefined8 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_00424ba0(*param_1,*param_2);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_004a11e0(param_1[1],param_2[1]);
      return uVar1;
    }
  }
  return uVar1;
}

