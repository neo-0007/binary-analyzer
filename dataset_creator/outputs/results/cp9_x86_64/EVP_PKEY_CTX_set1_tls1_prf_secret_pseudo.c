
void EVP_PKEY_CTX_set1_tls1_prf_secret(long param_1,undefined8 param_2,undefined8 param_3)

{
  evp_pkey_ctx_set1_octet_string
            (param_1,*(long *)(param_1 + 0x30) == 0,"secret",0x800,0x1001,param_2,param_3);
  return;
}

