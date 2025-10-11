
void ge_p3_tobytes(long param_1,long param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_e8 [48];
  undefined1 local_b8 [48];
  undefined1 local_88 [48];
  char local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fe_invert(auStack_e8,param_2 + 0x50);
  fe_mul(local_b8,param_2,auStack_e8);
  fe_mul(local_88,param_2 + 0x28,auStack_e8);
  fe_tobytes(param_1,local_88);
  fe_tobytes(local_58,local_b8);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_58[0] << 7;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

