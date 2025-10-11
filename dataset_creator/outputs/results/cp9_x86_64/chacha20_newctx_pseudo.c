
long chacha20_newctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x138,"../providers/implementations/ciphers/cipher_chacha20.c",0x33);
    if (lVar2 != 0) {
      ossl_chacha20_initctx(lVar2);
    }
  }
  return lVar2;
}

