
long aria192ccm_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1b0,"../providers/implementations/ciphers/cipher_aria_ccm.c",0x19);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_aria_hw_ccm(0xc0);
      ossl_ccm_initctx(lVar2,0xc0,uVar3);
    }
  }
  return lVar2;
}

