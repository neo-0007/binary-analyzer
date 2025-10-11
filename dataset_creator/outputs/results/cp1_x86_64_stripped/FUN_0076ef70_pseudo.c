
void FUN_0076ef70(uint param_1)

{
  long in_FS_OFFSET;
  ulong local_28;
  long lStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (ulong)param_1 / 1000000;
  lStack_20 = (ulong)(param_1 + (int)local_28 * -1000000) * 1000;
  FUN_007ab6f0(&local_28,0);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

