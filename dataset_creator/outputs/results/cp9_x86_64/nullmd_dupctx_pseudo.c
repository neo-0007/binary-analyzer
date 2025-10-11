
undefined1 * nullmd_dupctx(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined1 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)CRYPTO_malloc(1,"../providers/implementations/digests/null_prov.c",0x32);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = *param_1;
    }
  }
  return puVar2;
}

