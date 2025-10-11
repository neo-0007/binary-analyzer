
ulong ossl_dh_params_fromdata(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    lVar2 = ossl_dh_get0_params();
    if (lVar2 != 0) {
      iVar1 = ossl_ffc_params_fromdata(lVar2,param_2);
      if (iVar1 != 0) {
        ossl_dh_cache_named_group(param_1);
        lVar2 = OSSL_PARAM_locate_const(param_2,"priv_len");
        uVar3 = 1;
        if (lVar2 != 0) {
          uVar3 = OSSL_PARAM_get_long(lVar2,&local_28);
          if ((int)uVar3 != 0) {
            iVar1 = DH_set_length(param_1,local_28);
            uVar3 = (ulong)(iVar1 != 0);
          }
        }
        goto LAB_004c6bf1;
      }
    }
  }
  uVar3 = 0;
LAB_004c6bf1:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

