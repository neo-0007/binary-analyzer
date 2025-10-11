
undefined8 FUN_006e83a0(undefined4 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  
  uVar1 = FUN_0070b640();
  uVar1 = FUN_00709a80(uVar1,param_1);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *(int *)(in_FS_OFFSET + -0x58) = (int)uVar1;
  return 0xffffffff;
}

