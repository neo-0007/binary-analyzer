
undefined8 * sskdf_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x60,"../providers/implementations/kdfs/sskdf.c",0x124);
    if (puVar2 == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/sskdf.c",0x125,__func___1);
      ERR_set_error(0x39,0xc0100,0);
    }
    *puVar2 = param_1;
  }
  return puVar2;
}

