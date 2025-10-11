
undefined8 * ossl_property_str(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 *local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)ossl_lib_ctx_get_data(param_2,3,property_string_data_method);
  if (puVar2 != (undefined8 *)0x0) {
    local_38 = (undefined8 *)0x0;
    local_30 = param_3;
    iVar1 = CRYPTO_THREAD_read_lock(*puVar2);
    if (iVar1 == 0) {
      ERR_new();
      puVar2 = (undefined8 *)0x0;
      ERR_set_debug("../crypto/property/property_string.c",199,"ossl_property_str");
      ERR_set_error(0xf,0xc010f,0);
    }
    else {
      uVar3 = puVar2[2];
      if (param_1 != 0) {
        uVar3 = puVar2[1];
      }
      OPENSSL_LH_doall_arg(uVar3,find_str_fn,&local_38);
      CRYPTO_THREAD_unlock(*puVar2);
      puVar2 = local_38;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

