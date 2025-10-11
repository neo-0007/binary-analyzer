
long * ossl_rand_pool_new(int param_1,int param_2,ulong param_3,ulong param_4)

{
  long *ptr;
  long lVar1;
  ulong uVar2;
  
  ptr = (long *)CRYPTO_zalloc(0x40,"../crypto/rand/rand_pool.c",0x19);
  if (param_2 == 0) {
    if (ptr == (long *)0x0) goto LAB_00430380;
    ptr[3] = param_3;
    if (0x3000 < param_4) {
      param_4 = 0x3000;
    }
    uVar2 = 0x30;
    if (0x2f < param_3) {
      uVar2 = param_3;
    }
    ptr[4] = param_4;
    if (param_4 < uVar2) {
      uVar2 = param_4;
    }
    ptr[5] = uVar2;
    lVar1 = CRYPTO_zalloc(uVar2,"../crypto/rand/rand_pool.c",0x2b);
  }
  else {
    if (ptr == (long *)0x0) {
LAB_00430380:
      ERR_new();
      ERR_set_debug("../crypto/rand/rand_pool.c",0x1d,"ossl_rand_pool_new");
      ERR_set_error(0x24,0xc0100,0);
      return (long *)0x0;
    }
    ptr[3] = param_3;
    if (0x3000 < param_4) {
      param_4 = 0x3000;
    }
    uVar2 = 0x10;
    if (0xf < param_3) {
      uVar2 = param_3;
    }
    ptr[4] = param_4;
    if (param_4 < uVar2) {
      uVar2 = param_4;
    }
    ptr[5] = uVar2;
    lVar1 = CRYPTO_secure_zalloc(uVar2,"../crypto/rand/rand_pool.c",0x29);
  }
  *ptr = lVar1;
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/rand/rand_pool.c",0x2e,"ossl_rand_pool_new");
    ERR_set_error(0x24,0xc0100,0);
    CRYPTO_free(ptr);
    ptr = (long *)0x0;
  }
  else {
    ptr[7] = (long)param_1;
    *(int *)((long)ptr + 0x14) = param_2;
  }
  return ptr;
}

