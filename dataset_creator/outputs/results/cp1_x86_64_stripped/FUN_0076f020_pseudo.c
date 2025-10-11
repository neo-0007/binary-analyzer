
/* WARNING: Removing unreachable block (ram,0x0076f060) */

undefined8 FUN_0076f020(void)

{
  uint in_R9D;
  long in_FS_OFFSET;
  
  if ((in_R9D & 0xfff) == 0) {
    syscall();
    return 9;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  return 0xffffffffffffffff;
}

