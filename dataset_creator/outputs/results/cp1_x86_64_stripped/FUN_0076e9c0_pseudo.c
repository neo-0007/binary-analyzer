
/* WARNING: Removing unreachable block (ram,0x0076e9fd) */
/* WARNING: Removing unreachable block (ram,0x0076ea80) */

undefined8 FUN_0076e9c0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined1 local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  syscall();
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60(param_1,0x5401,local_38);
  }
  return 0x10;
}

