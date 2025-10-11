
undefined8 FUN_00790ae0(void)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  
  uVar1 = FUN_007a2cd0();
  if ((int)uVar1 != 0) {
    *(int *)(in_FS_OFFSET + -0x58) = (int)uVar1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

