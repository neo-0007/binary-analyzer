
undefined8 EVP_PKEY_get0_DSA(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0x74) {
    uVar1 = evp_pkey_get_legacy();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/p_lib.c",0x348,"evp_pkey_get0_DSA_int");
  ERR_set_error(6,0x81,0);
  return 0;
}

