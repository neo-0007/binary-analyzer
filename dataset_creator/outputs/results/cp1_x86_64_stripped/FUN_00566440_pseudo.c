
void FUN_00566440(uint *param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  long in_FS_OFFSET;
  ulong local_28;
  ulong local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (ulong)*param_1;
  local_20 = (ulong)param_1[1];
  if (param_4 == 0) {
    FUN_00565e10(&local_28,param_3);
  }
  else {
    FUN_00565ce0();
  }
  *param_2 = (undefined4)local_28;
  param_2[1] = (undefined4)local_20;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

