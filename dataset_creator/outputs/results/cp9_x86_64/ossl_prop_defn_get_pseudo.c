
undefined8 ossl_prop_defn_get(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = ossl_lib_ctx_get_data(param_1,2,property_defns_method);
  if (lVar2 != 0) {
    iVar1 = ossl_lib_ctx_read_lock(param_1);
    if (iVar1 != 0) {
      local_38[0] = param_2;
      lVar2 = OPENSSL_LH_retrieve(lVar2,local_38);
      ossl_lib_ctx_unlock(param_1);
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 8);
        goto LAB_0054f3ab;
      }
    }
  }
  uVar3 = 0;
LAB_0054f3ab:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

