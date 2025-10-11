
undefined8 ossl_rand_pool_add(long *param_1,void *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  if (param_1[4] - uVar1 < param_3) {
    ERR_new();
    ERR_set_debug("../crypto/rand/rand_pool.c",0x135,"ossl_rand_pool_add");
    ERR_set_error(0x24,0x6a,0);
    return 0;
  }
  if (*param_1 != 0) {
    uVar2 = 1;
    if (param_3 != 0) {
      if ((uVar1 < (ulong)param_1[5]) && (param_2 == (void *)(*param_1 + uVar1))) {
        ERR_new();
        uVar2 = 0x148;
        goto LAB_004307f1;
      }
      uVar2 = rand_pool_grow(param_1,param_3);
      if ((int)uVar2 != 0) {
        memcpy((void *)(param_1[1] + *param_1),param_2,param_3);
        param_1[1] = param_1[1] + param_3;
        param_1[6] = param_1[6] + param_4;
        return 1;
      }
    }
    return uVar2;
  }
  ERR_new();
  uVar2 = 0x13a;
LAB_004307f1:
  ERR_set_debug("../crypto/rand/rand_pool.c",uVar2,"ossl_rand_pool_add");
  ERR_set_error(0x24,0xc0103,0);
  return 0;
}

