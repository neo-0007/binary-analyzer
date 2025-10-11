
void FUN_007a2880(void)

{
  long in_FS_OFFSET;
  undefined1 local_14 [4];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0078d220(8,local_14,FUN_007a2850);
  FUN_0078d220(0xd,local_14,FUN_007a2810);
  FUN_0078d220(0x19,local_14,FUN_007a2820);
  FUN_0078d220(7,local_14,FUN_007a2830);
  FUN_0078d220(0x15,local_14,FUN_007a2840);
  if (DAT_00946970 == 0) {
    DAT_0093f0b8 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

