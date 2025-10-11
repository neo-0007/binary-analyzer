
long ossl_rand_pool_bytes_remaining(long param_1)

{
  return *(long *)(param_1 + 0x20) - *(long *)(param_1 + 8);
}

