
long aria_gcm_newctx(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x3d8,"../providers/implementations/ciphers/cipher_aria_gcm.c",0x17);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_aria_hw_gcm(param_2);
      ossl_gcm_initctx(param_1,lVar2,param_2,uVar3);
    }
  }
  return lVar2;
}

