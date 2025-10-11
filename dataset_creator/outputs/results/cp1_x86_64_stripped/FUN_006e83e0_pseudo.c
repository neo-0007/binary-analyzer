
undefined8 FUN_006e83e0(int param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  
  if ((param_1 - 1U < 0x40) && (1 < param_1 - 0x20U)) {
    uVar1 = FUN_006e8440();
    return uVar1;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  return 0xffffffff;
}

