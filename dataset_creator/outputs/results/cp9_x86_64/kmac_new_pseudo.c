
undefined8 * kmac_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x298,"../providers/implementations/macs/kmac_prov.c",0xa9);
    if (ptr != (undefined8 *)0x0) {
      lVar2 = EVP_MD_CTX_new();
      ptr[1] = lVar2;
      if (lVar2 != 0) {
        *ptr = param_1;
        return ptr;
      }
      EVP_MD_CTX_free(0);
      ossl_prov_digest_reset(ptr + 2);
      OPENSSL_cleanse((void *)((long)ptr + 0x44),ptr[6]);
      OPENSSL_cleanse((void *)((long)ptr + 0x194),ptr[7]);
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}

