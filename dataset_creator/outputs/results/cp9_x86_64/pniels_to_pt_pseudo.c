
void pniels_to_pt(long param_1,long param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 auStack_78 [72];
  long local_30;
  
  lVar1 = param_1 + 0x40;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  gf_add(auStack_78,param_2 + 0x40,param_2);
  gf_sub(lVar1,param_2 + 0x40,param_2);
  param_2 = param_2 + 0xc0;
  gf_mul(param_1 + 0xc0,lVar1,auStack_78);
  gf_mul(param_1,param_2,lVar1);
  gf_mul(lVar1,param_2,auStack_78);
  gf_sqr(param_1 + 0x80,param_2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

