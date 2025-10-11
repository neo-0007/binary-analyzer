
long aes_256_xts_newctx(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = CRYPTO_zalloc(0x2d8,"../providers/implementations/ciphers/cipher_aes_xts.c",0x72);
  if (lVar1 != 0) {
    uVar2 = ossl_prov_cipher_hw_aes_xts(0x200);
    ossl_cipher_generic_initkey(lVar1,0x200,8,0x80,0x10001,2,uVar2,0);
  }
  return lVar1;
}

