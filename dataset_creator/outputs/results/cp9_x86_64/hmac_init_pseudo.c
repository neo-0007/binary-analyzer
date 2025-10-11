
bool hmac_init(long param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  int iVar1;
  void *__dest;
  EVP_MD *md;
  ENGINE *impl;
  size_t sVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (iVar1 = hmac_set_ctx_params(param_1,param_4), iVar1 != 0)) {
    if (param_2 == (void *)0x0) {
      return true;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      CRYPTO_secure_clear_free
                (*(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x30),
                 "../providers/implementations/macs/hmac_prov.c",0x9c);
    }
    sVar2 = 1;
    if (param_3 != 0) {
      sVar2 = param_3;
    }
    __dest = (void *)CRYPTO_secure_malloc
                               (sVar2,"../providers/implementations/macs/hmac_prov.c",0x9e);
    *(void **)(param_1 + 0x28) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,param_3);
      *(size_t *)(param_1 + 0x30) = param_3;
      md = (EVP_MD *)ossl_prov_digest_md(param_1 + 0x10);
      impl = (ENGINE *)ossl_prov_digest_engine(param_1 + 0x10);
      iVar1 = HMAC_Init_ex(*(HMAC_CTX **)(param_1 + 8),param_2,(int)param_3,md,impl);
      return iVar1 != 0;
    }
  }
  return false;
}

