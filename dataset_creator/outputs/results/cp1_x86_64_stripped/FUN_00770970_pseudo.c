
/* WARNING: Removing unreachable block (ram,0x007709e8) */

undefined8 FUN_00770970(void)

{
  long in_FS_OFFSET;
  
  syscall();
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return 0x19;
}

