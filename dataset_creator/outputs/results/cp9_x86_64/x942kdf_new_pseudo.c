
undefined8 * x942kdf_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0xa0,"../providers/implementations/kdfs/x942kdf.c",0x151);
    if (puVar2 == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/x942kdf.c",0x152,__func___0);
      ERR_set_error(0x39,0xc0100,0);
    }
    *puVar2 = param_1;
    *(undefined4 *)(puVar2 + 0x13) = 1;
  }
  return puVar2;
}

