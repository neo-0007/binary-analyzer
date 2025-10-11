
undefined8 nullmd_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(1,"../providers/implementations/digests/null_prov.c",0x32);
    return uVar2;
  }
  return 0;
}

