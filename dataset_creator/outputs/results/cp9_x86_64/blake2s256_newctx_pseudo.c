
undefined8 blake2s256_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0x80,"../providers/implementations/digests/blake2_prov.c",0x20);
    return uVar2;
  }
  return 0;
}

