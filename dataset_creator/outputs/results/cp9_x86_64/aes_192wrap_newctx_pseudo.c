
long aes_192wrap_newctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c0,"../providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar2 != 0) {
      ossl_cipher_generic_initkey(lVar2,0xc0,0x40,0x40,0x10002,2,0,0);
      *(byte *)(lVar2 + 0x3c) = *(byte *)(lVar2 + 0x3c) & 0xfe | *(long *)(lVar2 + 0x20) == 4;
    }
  }
  return lVar2;
}

