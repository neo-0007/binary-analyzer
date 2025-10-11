
void ossl_curve448_point_eq(long param_1,long param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_b8 [64];
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  gf_mul(auStack_b8,param_1 + 0x40,param_2);
  gf_mul(local_78,param_2 + 0x40,param_1);
  gf_eq(auStack_b8,local_78);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

