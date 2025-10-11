
bool OPENSSL_atexit(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)CRYPTO_malloc(0x10,"../crypto/init.c",0x2c0);
  if (puVar2 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/init.c",0x2c1,"OPENSSL_atexit");
    ERR_set_error(0xf,0xc0100,0);
  }
  else {
    *puVar2 = param_1;
    puVar1 = puVar2;
    puVar2[1] = stop_handlers;
    stop_handlers = puVar1;
  }
  return puVar2 != (undefined8 *)0x0;
}

