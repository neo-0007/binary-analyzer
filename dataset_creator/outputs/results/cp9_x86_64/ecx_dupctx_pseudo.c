
undefined8 * ecx_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  
  ptr = (undefined8 *)0x0;
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x18,"../providers/implementations/exchange/ecx_exch.c",0xca);
    if (ptr == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/exchange/ecx_exch.c",0xcc,__func___4);
      ERR_set_error(0x39,0xc0100,0);
    }
    else {
      uVar1 = param_1[1];
      *ptr = *param_1;
      ptr[1] = uVar1;
      ptr[2] = param_1[2];
      if ((ptr[1] != 0) && (iVar2 = ossl_ecx_key_up_ref(), iVar2 == 0)) {
        ERR_new();
        ERR_set_debug("../providers/implementations/exchange/ecx_exch.c",0xd2,__func___4);
        ERR_set_error(0x39,0xc0103,0);
        CRYPTO_free(ptr);
        return (undefined8 *)0x0;
      }
      if ((ptr[2] != 0) && (iVar2 = ossl_ecx_key_up_ref(), iVar2 == 0)) {
        ERR_new();
        ERR_set_debug("../providers/implementations/exchange/ecx_exch.c",0xd8,__func___4);
        ERR_set_error(0x39,0xc0103,0);
        ossl_ecx_key_free(ptr[1]);
        CRYPTO_free(ptr);
        ptr = (undefined8 *)0x0;
      }
    }
  }
  return ptr;
}

