
undefined8 sha384_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0xd8,"../providers/implementations/digests/sha2_prov.c",0x4d);
    return uVar2;
  }
  return 0;
}

