
undefined8 FUN_00552f20(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0x10) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return 1;
}

