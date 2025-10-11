
undefined8 ossl_rand_pool_add_end(long param_1,ulong param_2,long param_3)

{
  if ((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 8)) < param_2) {
    ERR_new();
    ERR_set_debug("../crypto/rand/rand_pool.c",0x192,"ossl_rand_pool_add_end");
    ERR_set_error(0x24,0x7d,0);
    return 0;
  }
  if (param_2 != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + param_3;
    *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + param_2;
    return 1;
  }
  return 1;
}

