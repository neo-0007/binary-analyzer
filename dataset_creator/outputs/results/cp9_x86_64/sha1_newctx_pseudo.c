
undefined8 sha1_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0x60,"../providers/implementations/digests/sha2_prov.c",0x3d);
    return uVar2;
  }
  return 0;
}

