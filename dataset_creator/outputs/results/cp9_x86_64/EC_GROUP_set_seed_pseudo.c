
size_t EC_GROUP_set_seed(EC_GROUP *param_1,uchar *param_2,size_t len)

{
  void *__dest;
  size_t sVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((len == 0) || (param_2 == (uchar *)0x0)) {
    sVar1 = 1;
  }
  else {
    __dest = CRYPTO_malloc((int)len,"../crypto/ec/ec_lib.c",0x218);
    *(void **)(param_1 + 0x30) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,len);
      *(size_t *)(param_1 + 0x38) = len;
      return len;
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x219,"EC_GROUP_set_seed");
    ERR_set_error(0x10,0xc0100,0);
    sVar1 = 0;
  }
  return sVar1;
}

