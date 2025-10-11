
void FUN_007a2c70(void)

{
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0078d220(0x1f,auStack_18,FUN_007a2c50);
  FUN_0078d220(0x12,auStack_18,FUN_007a2c60);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

