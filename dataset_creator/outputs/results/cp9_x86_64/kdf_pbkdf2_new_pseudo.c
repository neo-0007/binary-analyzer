
undefined8 * kdf_pbkdf2_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x50,"../providers/implementations/kdfs/pbkdf2.c",0x49);
    if (puVar2 == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/pbkdf2.c",0x4b,__func___0);
      ERR_set_error(0x39,0xc0100,0);
    }
    else {
      *puVar2 = param_1;
      kdf_pbkdf2_init(puVar2);
    }
  }
  return puVar2;
}

