
void EVP_PKEY_CTX_set1_hkdf_key(long param_1,undefined8 param_2,undefined8 param_3)

{
  evp_pkey_ctx_set1_octet_string
            (param_1,*(long *)(param_1 + 0x30) == 0,"key",0x800,0x1005,param_2,param_3);
  return;
}

