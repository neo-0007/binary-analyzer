
long * OSSL_STORE_LOADER_new(long param_1,long param_2)

{
  long *plVar1;
  
  if (param_2 == 0) {
    ERR_new();
    plVar1 = (long *)0x0;
    ERR_set_debug("../crypto/store/store_register.c",0x2a,"OSSL_STORE_LOADER_new");
    ERR_set_error(0x2c,0x6a,0);
  }
  else {
    plVar1 = (long *)CRYPTO_zalloc(0xd0,"../crypto/store/store_register.c",0x2e);
    if (plVar1 == (long *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/store/store_register.c",0x2f,"OSSL_STORE_LOADER_new");
      ERR_set_error(0x2c,0xc0100,0);
    }
    else {
      plVar1[1] = param_1;
      *plVar1 = param_2;
    }
  }
  return plVar1;
}

