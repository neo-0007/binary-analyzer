
undefined4 rand_pool_grow(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  void *__dest;
  ulong uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  uVar3 = param_1[5];
  lVar1 = param_1[1];
  if (uVar3 - lVar1 < param_2) {
    uVar2 = param_1[4];
    if ((*(int *)(param_1 + 2) != 0) || (uVar2 - lVar1 < param_2)) {
      ERR_new();
      ERR_set_debug("../crypto/rand/rand_pool.c",0xd5,"rand_pool_grow");
      ERR_set_error(0x24,0xc0103,0);
      return 0;
    }
    do {
      uVar4 = uVar2;
      if (uVar2 >> 1 <= uVar3) break;
      uVar3 = uVar3 * 2;
      uVar4 = uVar3;
    } while (uVar3 - lVar1 < param_2);
    if (*(int *)((long)param_1 + 0x14) == 0) {
      __dest = (void *)CRYPTO_zalloc(uVar4,"../crypto/rand/rand_pool.c",0xe0);
    }
    else {
      __dest = (void *)CRYPTO_secure_zalloc(uVar4,"../crypto/rand/rand_pool.c",0xde);
    }
    if (__dest == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/rand/rand_pool.c",0xe2,"rand_pool_grow");
      ERR_set_error(0x24,0xc0100,0);
      uVar5 = 0;
    }
    else {
      memcpy(__dest,(void *)*param_1,param_1[1]);
      if (*(int *)((long)param_1 + 0x14) == 0) {
        CRYPTO_clear_free(*param_1,param_1[5],"../crypto/rand/rand_pool.c",0xe9);
      }
      else {
        CRYPTO_secure_clear_free(*param_1,param_1[5],"../crypto/rand/rand_pool.c",0xe7);
      }
      *param_1 = __dest;
      uVar5 = 1;
      param_1[5] = uVar4;
    }
  }
  return uVar5;
}

