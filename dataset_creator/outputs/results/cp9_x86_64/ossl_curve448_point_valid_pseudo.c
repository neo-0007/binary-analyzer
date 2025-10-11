
ulong ossl_curve448_point_valid(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  lVar1 = param_1 + 0x80;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  gf_mul(local_108,param_1,param_1 + 0x40);
  gf_mul(local_c8,lVar1,param_1 + 0xc0);
  uVar2 = gf_eq(local_108,local_c8);
  gf_sqr(local_108,param_1);
  gf_sqr(local_c8,param_1 + 0x40);
  gf_sub(local_108,local_c8,local_108);
  gf_sqr(local_c8,param_1 + 0xc0);
  gf_mulw_unsigned(local_88,local_c8,0x98aa);
  gf_sub(local_88,ZERO,local_88);
  gf_sqr(local_c8,lVar1);
  gf_add(local_c8,local_c8,local_88);
  uVar3 = gf_eq(local_108,local_c8);
  uVar4 = gf_eq(lVar1,ZERO);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ~uVar4 & uVar2 & uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

