
long evp_pkey_get1_ECX_KEY(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = EVP_PKEY_get_base_id();
  if (param_2 != iVar1) {
    ERR_new();
    ERR_set_debug("../crypto/evp/p_lib.c",0x368,"evp_pkey_get0_ECX_KEY");
    ERR_set_error(6,0xdb,0);
    return 0;
  }
  lVar2 = evp_pkey_get_legacy(param_1);
  if (lVar2 != 0) {
    iVar1 = ossl_ecx_key_up_ref(lVar2);
    if (iVar1 != 0) {
      return lVar2;
    }
  }
  return 0;
}

