
long aria_128_cfb1_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1d8,"../providers/implementations/ciphers/cipher_aria.c",0x4a);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aria_cfb1(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}

