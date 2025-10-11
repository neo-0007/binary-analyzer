
void drbg_hash_uninstantiate_wrapper(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  OPENSSL_cleanse((void *)(lVar1 + 0x28),0x6f);
  OPENSSL_cleanse((void *)(lVar1 + 0x97),0x6f);
  OPENSSL_cleanse((void *)(lVar1 + 0x106),0x6f);
  ossl_prov_drbg_uninstantiate(param_1);
  return;
}

