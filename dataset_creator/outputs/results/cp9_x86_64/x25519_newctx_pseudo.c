
undefined8 * x25519_newctx(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             CRYPTO_zalloc(0x18,"../providers/implementations/exchange/ecx_exch.c",0x33);
    if (puVar2 == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/exchange/ecx_exch.c",0x35,__func___0);
      ERR_set_error(0x39,0xc0100,0);
    }
    else {
      *puVar2 = 0x20;
    }
  }
  return puVar2;
}

