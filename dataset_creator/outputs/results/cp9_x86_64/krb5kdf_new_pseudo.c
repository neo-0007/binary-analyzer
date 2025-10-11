
undefined8 * krb5kdf_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x40,"../providers/implementations/kdfs/krb5kdf.c",0x42);
    if (puVar2 == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/krb5kdf.c",0x43,__func___0);
      ERR_set_error(0x39,0xc0100,0);
    }
    else {
      *puVar2 = param_1;
    }
  }
  return puVar2;
}

