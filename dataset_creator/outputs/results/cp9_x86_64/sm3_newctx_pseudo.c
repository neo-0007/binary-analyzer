
undefined8 sm3_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0x6c,"../providers/implementations/digests/sm3_prov.c",0x10);
    return uVar2;
  }
  return 0;
}

