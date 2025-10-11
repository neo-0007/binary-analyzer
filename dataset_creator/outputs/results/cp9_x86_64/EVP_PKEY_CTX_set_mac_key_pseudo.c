
void EVP_PKEY_CTX_set_mac_key(long param_1,undefined8 param_2,undefined8 param_3)

{
  evp_pkey_ctx_set1_octet_string
            (param_1,*(long *)(param_1 + 0x28) == 0,&DAT_007c4ad5,4,6,param_2,param_3);
  return;
}

