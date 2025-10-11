
void EVP_PKEY_CTX_add1_hkdf_info(long param_1,undefined8 param_2,undefined8 param_3)

{
  evp_pkey_ctx_set1_octet_string
            (param_1,*(long *)(param_1 + 0x30) == 0,"info",0x800,0x1006,param_2,param_3);
  return;
}

