
long ossl_rand_pool_entropy_needed(long param_1)

{
  long lVar1;
  
  lVar1 = *(ulong *)(param_1 + 0x38) - *(ulong *)(param_1 + 0x30);
  if (*(ulong *)(param_1 + 0x38) <= *(ulong *)(param_1 + 0x30)) {
    lVar1 = 0;
  }
  return lVar1;
}

