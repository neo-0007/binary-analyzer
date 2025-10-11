
long gf_hibit(undefined8 param_1)

{
  long in_FS_OFFSET;
  uint local_58 [18];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  gf_add(local_58,param_1,param_1);
  gf_strong_reduce(local_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -(ulong)(local_58[0] & 1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

