
long ossl_rand_pool_add_begin(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if (param_2 <= (ulong)(param_1[4] - param_1[1])) {
      if (*param_1 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/rand/rand_pool.c",0x173,"ossl_rand_pool_add_begin");
        ERR_set_error(0x24,0xc0103,0);
        lVar2 = 0;
      }
      else {
        iVar1 = rand_pool_grow();
        if (iVar1 == 0) {
          return 0;
        }
        lVar2 = param_1[1] + *param_1;
      }
      return lVar2;
    }
    ERR_new();
    ERR_set_debug("../crypto/rand/rand_pool.c",0x16e,"ossl_rand_pool_add_begin");
    ERR_set_error(0x24,0x7d,0);
  }
  return 0;
}

