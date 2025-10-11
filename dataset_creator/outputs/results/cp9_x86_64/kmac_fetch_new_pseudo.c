
void * kmac_fetch_new(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  void *ptr;
  undefined8 uVar3;
  
  ptr = (void *)kmac_new();
  if (ptr != (void *)0x0) {
    lVar1 = (long)ptr + 0x10;
    uVar3 = ossl_prov_ctx_get0_libctx(param_1);
    iVar2 = ossl_prov_digest_load_from_params(lVar1,param_2,uVar3);
    if (iVar2 == 0) {
      EVP_MD_CTX_free(*(undefined8 *)((long)ptr + 8));
      ossl_prov_digest_reset(lVar1);
      OPENSSL_cleanse((void *)((long)ptr + 0x44),*(size_t *)((long)ptr + 0x30));
      OPENSSL_cleanse((void *)((long)ptr + 0x194),*(size_t *)((long)ptr + 0x38));
      CRYPTO_free(ptr);
      return (void *)0x0;
    }
    uVar3 = ossl_prov_digest_md(lVar1);
    iVar2 = EVP_MD_get_size(uVar3);
    *(long *)((long)ptr + 0x28) = (long)iVar2;
  }
  return ptr;
}

