
long aes_192_cfb1_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c0,"../providers/implementations/ciphers/cipher_aes.c",0x4f);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aes_cfb1(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}

