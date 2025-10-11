
undefined8 md5_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0x5c,"../providers/implementations/digests/md5_prov.c",0x16);
    return uVar2;
  }
  return 0;
}

