
undefined8 * siphash_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             CRYPTO_zalloc(0x50,"../providers/implementations/macs/siphash_prov.c",0x3d);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
  }
  return puVar2;
}

