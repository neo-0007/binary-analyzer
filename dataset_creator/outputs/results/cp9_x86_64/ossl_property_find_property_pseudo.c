
undefined8 ossl_property_find_property(undefined4 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (undefined4 *)0x0) && (param_3 != 0)) {
    local_14 = ossl_property_name(param_2,param_3,0);
    if (local_14 != 0) {
      uVar1 = ossl_bsearch(&local_14,param_1 + 2,*param_1,0x18,property_idx_cmp,0);
      goto LAB_0042e102;
    }
  }
  uVar1 = 0;
LAB_0042e102:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

