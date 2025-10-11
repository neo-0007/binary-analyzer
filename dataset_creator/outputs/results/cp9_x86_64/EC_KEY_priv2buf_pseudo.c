
long EC_KEY_priv2buf(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  void *ptr;
  
  lVar1 = EC_KEY_priv2oct(param_1,0,0);
  if (lVar1 != 0) {
    ptr = CRYPTO_malloc((int)lVar1,"../crypto/ec/ec_key.c",0x3c7);
    if (ptr == (void *)0x0) {
      ERR_new();
      lVar1 = 0;
      ERR_set_debug("../crypto/ec/ec_key.c",0x3c8,"EC_KEY_priv2buf");
      ERR_set_error(0x10,0xc0100,0);
    }
    else {
      lVar1 = EC_KEY_priv2oct(param_1,ptr,lVar1);
      if (lVar1 != 0) {
        *param_2 = ptr;
        return lVar1;
      }
      CRYPTO_free(ptr);
      lVar1 = 0;
    }
  }
  return lVar1;
}

