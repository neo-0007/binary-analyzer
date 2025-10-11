
undefined8 * kdf_tls1_prf_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x430,"../providers/implementations/kdfs/tls1_prf.c",0x69);
    if (puVar2 == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/tls1_prf.c",0x6a,"kdf_tls1_prf_new");
      ERR_set_error(0x39,0xc0100,0);
    }
    *puVar2 = param_1;
  }
  return puVar2;
}

