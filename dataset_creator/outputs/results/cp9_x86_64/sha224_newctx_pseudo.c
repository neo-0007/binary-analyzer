
undefined8 sha224_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0x70,"../providers/implementations/digests/sha2_prov.c",0x43);
    return uVar2;
  }
  return 0;
}

