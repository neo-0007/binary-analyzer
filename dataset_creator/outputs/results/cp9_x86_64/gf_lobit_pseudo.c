
long gf_lobit(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  gf_strong_reduce(&local_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -(ulong)((uint)local_58 & 1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

