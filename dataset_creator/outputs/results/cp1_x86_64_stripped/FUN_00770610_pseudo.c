
/* WARNING: Removing unreachable block (ram,0x0077064c) */

undefined8 FUN_00770610(void)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_1018 [4104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  syscall();
  uVar1 = FUN_007ab770(0xcc,auStack_1018,auStack_1018);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar1;
}

