
/* WARNING: Removing unreachable block (ram,0x0076ec18) */

undefined8 FUN_0076ebb0(void)

{
  long in_FS_OFFSET;
  
  syscall();
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return 0x10;
}

