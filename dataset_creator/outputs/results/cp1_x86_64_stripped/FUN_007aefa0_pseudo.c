
uint FUN_007aefa0(void)

{
  long in_FS_OFFSET;
  uint local_28 [2];
  uint local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00767f90(1,local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (local_28[0] ^ local_20 ^ (local_28[0] ^ local_20) >> 8) & 0xffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

