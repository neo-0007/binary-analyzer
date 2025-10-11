
bool gmac_set_ctx_params(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  EVP_CIPHER_CTX *ctx;
  int iVar2;
  undefined8 uVar3;
  ENGINE *impl;
  EVP_CIPHER *cipher;
  long lVar4;
  
  ctx = (EVP_CIPHER_CTX *)param_1[1];
  uVar3 = ossl_prov_ctx_get0_libctx(*param_1);
  if (param_2 == 0) {
    return true;
  }
  if (ctx != (EVP_CIPHER_CTX *)0x0) {
    puVar1 = param_1 + 2;
    iVar2 = ossl_prov_cipher_load_from_params(puVar1,param_2,uVar3);
    if (iVar2 != 0) {
      uVar3 = ossl_prov_cipher_cipher(puVar1);
      iVar2 = EVP_CIPHER_get_mode(uVar3);
      if (iVar2 == 6) {
        impl = (ENGINE *)ossl_prov_cipher_engine(puVar1);
        cipher = (EVP_CIPHER *)ossl_prov_cipher_cipher(puVar1);
        iVar2 = EVP_EncryptInit_ex(ctx,cipher,impl,(uchar *)0x0,(uchar *)0x0);
        if ((iVar2 != 0) &&
           ((lVar4 = OSSL_PARAM_locate_const(param_2,"key"), lVar4 == 0 ||
            ((*(int *)(lVar4 + 8) == 5 &&
             (iVar2 = gmac_setkey(param_1,*(undefined8 *)(lVar4 + 0x10),
                                  *(undefined8 *)(lVar4 + 0x18)), iVar2 != 0)))))) {
          lVar4 = OSSL_PARAM_locate_const(param_2,"iv");
          if (lVar4 == 0) {
            return true;
          }
          if ((*(int *)(lVar4 + 8) == 5) &&
             (iVar2 = EVP_CIPHER_CTX_ctrl(ctx,9,*(int *)(lVar4 + 0x18),(void *)0x0), iVar2 != 0)) {
            iVar2 = EVP_EncryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,
                                       *(uchar **)(lVar4 + 0x10));
            return iVar2 != 0;
          }
        }
      }
      else {
        ERR_new();
        ERR_set_debug("../providers/implementations/macs/gmac_prov.c",0xda,"gmac_set_ctx_params");
        ERR_set_error(0x39,0x7d,0);
      }
    }
  }
  return false;
}

