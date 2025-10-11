
long FUN_004df2b0(undefined8 param_1)

{
  long in_FS_OFFSET;
  uint local_58 [18];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004df1e0(local_58,param_1,param_1);
  FUN_004dee90(local_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -(ulong)(local_58[0] & 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

