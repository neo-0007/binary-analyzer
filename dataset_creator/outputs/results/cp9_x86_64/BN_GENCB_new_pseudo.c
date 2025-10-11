
void * BN_GENCB_new(void)

{
  void *pvVar1;
  
  pvVar1 = CRYPTO_malloc(0x18,"../crypto/bn/bn_lib.c",0x3c9);
  if (pvVar1 == (void *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/bn/bn_lib.c",0x3ca,"BN_GENCB_new");
    ERR_set_error(3,0xc0100,0);
  }
  return pvVar1;
}

