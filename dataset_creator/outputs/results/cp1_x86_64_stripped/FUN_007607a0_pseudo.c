
ulong FUN_007607a0(void)

{
  ulong uVar1;
  long in_FS_OFFSET;
  
  if (DAT_0093ae18 != (code *)0x0) {
    uVar1 = (*DAT_0093ae18)();
    if (uVar1 < 0xfffffffffffff001) {
      return uVar1;
    }
    if (uVar1 != 0xffffffffffffffda) {
      *(int *)(in_FS_OFFSET + -0x58) = -(int)uVar1;
      return 0xffffffffffffffff;
    }
  }
  syscall();
  return 0xc9;
}

