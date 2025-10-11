
undefined8 blake2b512_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0xf0,"../providers/implementations/digests/blake2_prov.c",0x26);
    return uVar2;
  }
  return 0;
}

