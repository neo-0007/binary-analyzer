
int cmac_set_ctx_params(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  size_t keylen;
  void *key;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ENGINE *impl;
  EVP_CIPHER *cipher;
  
  uVar3 = ossl_prov_ctx_get0_libctx(*param_1);
  if (param_2 == 0) {
    return 1;
  }
  puVar1 = param_1 + 2;
  iVar2 = ossl_prov_cipher_load_from_params(puVar1,param_2,uVar3);
  if (iVar2 != 0) {
    lVar4 = OSSL_PARAM_locate_const(param_2,"key");
    if (lVar4 == 0) {
      return 1;
    }
    if (*(int *)(lVar4 + 8) == 5) {
      keylen = *(size_t *)(lVar4 + 0x18);
      key = *(void **)(lVar4 + 0x10);
      impl = (ENGINE *)ossl_prov_cipher_engine(puVar1);
      cipher = (EVP_CIPHER *)ossl_prov_cipher_cipher(puVar1);
      iVar2 = CMAC_Init((CMAC_CTX *)param_1[1],key,keylen,cipher,impl);
      ossl_prov_cipher_reset(puVar1);
      return iVar2;
    }
  }
  return 0;
}

