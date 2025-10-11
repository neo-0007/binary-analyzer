
int cmac_init(long param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  ENGINE *impl;
  EVP_CIPHER *cipher;
  
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) && (iVar2 = cmac_set_ctx_params(param_1,param_4), iVar2 != 0)) {
    if (param_2 == (void *)0x0) {
      return 1;
    }
    lVar1 = param_1 + 0x10;
    impl = (ENGINE *)ossl_prov_cipher_engine(lVar1);
    cipher = (EVP_CIPHER *)ossl_prov_cipher_cipher(lVar1);
    iVar2 = CMAC_Init(*(CMAC_CTX **)(param_1 + 8),param_2,param_3,cipher,impl);
    ossl_prov_cipher_reset(lVar1);
    return iVar2;
  }
  return 0;
}

