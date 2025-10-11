
undefined8 null_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0x18,"../providers/implementations/ciphers/cipher_null.c",0x1e);
    return uVar2;
  }
  return 0;
}

