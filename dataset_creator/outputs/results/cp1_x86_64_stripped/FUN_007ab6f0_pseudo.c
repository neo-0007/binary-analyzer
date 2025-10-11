
undefined8 FUN_007ab6f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  
  uVar1 = FUN_007c0440(0,0,param_1,param_2);
  if ((int)uVar1 != 0) {
    *(int *)(in_FS_OFFSET + -0x58) = (int)uVar1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

