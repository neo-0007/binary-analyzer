
long * OPENSSL_LH_new(code *param_1,long param_2)

{
  long *ptr;
  long lVar1;
  
  ptr = (long *)CRYPTO_zalloc(0xb0,"../crypto/lhash/lhash.c",0x43);
  if (ptr != (long *)0x0) {
    lVar1 = CRYPTO_zalloc(0x80,"../crypto/lhash/lhash.c",0x4b);
    *ptr = lVar1;
    if (lVar1 == 0) {
      CRYPTO_free((void *)0x0);
      CRYPTO_free(ptr);
      ptr = (long *)0x0;
    }
    else {
      if (param_2 == 0) {
        ptr[1] = (long)PTR_strcmp_0092e100;
      }
      else {
        ptr[1] = param_2;
      }
      if (param_1 == (code *)0x0) {
        param_1 = OPENSSL_LH_strhash;
      }
      ptr[2] = (long)param_1;
      ptr[3] = 0x1000000008;
      *(undefined4 *)((long)ptr + 0x24) = 8;
      ptr[5] = 0x200;
      ptr[6] = 0x100;
    }
  }
  return ptr;
}

