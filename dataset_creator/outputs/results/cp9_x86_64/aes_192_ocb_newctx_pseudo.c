
long aes_192_ocb_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x3b0,"../providers/implementations/ciphers/cipher_aes_ocb.c",0x13a);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aes_ocb(0xc0);
      ossl_cipher_generic_initkey(lVar2,0xc0,0x80,0x60,0x10003,3,uVar3,0);
      *(undefined8 *)(lVar2 + 0x368) = 0x10;
    }
  }
  return lVar2;
}

