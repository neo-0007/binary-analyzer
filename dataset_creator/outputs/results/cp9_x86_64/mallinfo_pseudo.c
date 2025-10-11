
undefined4 * mallinfo(undefined4 *param_1)

{
  long in_FS_OFFSET;
  undefined4 local_68 [2];
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  mallinfo2(local_68);
  *param_1 = local_68[0];
  param_1[1] = uStack_60;
  param_1[2] = local_58;
  param_1[3] = uStack_50;
  param_1[4] = local_48;
  param_1[5] = uStack_40;
  param_1[6] = local_38;
  param_1[7] = uStack_30;
  *(ulong *)(param_1 + 8) = CONCAT44(local_20,local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

