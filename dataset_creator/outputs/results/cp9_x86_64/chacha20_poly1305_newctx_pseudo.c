
long chacha20_poly1305_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x358,"../providers/implementations/ciphers/cipher_chacha20_poly1305.c",
                          0x2e);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_chacha20_poly1305(0x100);
      ossl_cipher_generic_initkey(lVar2,0x100,8,0x60,0,3,uVar3,0);
      *(undefined8 *)(lVar2 + 0x340) = 0xc;
      *(undefined8 *)(lVar2 + 0x348) = 0xffffffffffffffff;
      ossl_chacha20_initctx(lVar2 + 0xc0);
    }
  }
  return lVar2;
}

