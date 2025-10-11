
undefined8 md5_sha1_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0xbc,"../providers/implementations/digests/md5_sha1_prov.c",0x3a);
    return uVar2;
  }
  return 0;
}

