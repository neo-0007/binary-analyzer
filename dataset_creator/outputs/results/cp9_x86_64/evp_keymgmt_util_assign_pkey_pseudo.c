
undefined8 evp_keymgmt_util_assign_pkey(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  if ((param_2 != 0 && param_3 != 0) && (param_1 != 0)) {
    iVar1 = EVP_PKEY_set_type_by_keymgmt();
    if (iVar1 != 0) {
      *(long *)(param_1 + 0x68) = param_3;
      evp_keymgmt_util_cache_keyinfo(param_1);
      return 1;
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/keymgmt_lib.c",0x41,"evp_keymgmt_util_assign_pkey");
  ERR_set_error(6,0xc0103,0);
  return 0;
}

