
undefined8 * kbkdf_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x60,"../providers/implementations/kdfs/kbkdf.c",0x72);
    if (puVar2 == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/kbkdf.c",0x74,__func___0);
      ERR_set_error(0x39,0xc0100,0);
    }
    else {
      *puVar2 = param_1;
      puVar2[0xb] = 0x100000001;
    }
  }
  return puVar2;
}

