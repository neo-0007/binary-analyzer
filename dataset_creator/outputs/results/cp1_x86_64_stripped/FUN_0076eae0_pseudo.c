
undefined8 FUN_0076eae0(ulong param_1)

{
  long in_FS_OFFSET;
  
  syscall();
  DAT_0094ab88 = 0xc;
  if (param_1 < 0xd) {
    return 0;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
  return 0xffffffff;
}

