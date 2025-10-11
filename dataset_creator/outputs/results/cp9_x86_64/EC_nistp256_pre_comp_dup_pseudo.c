
long EC_nistp256_pre_comp_dup(long param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0xc00) = *(int *)(param_1 + 0xc00) + 1;
    UNLOCK();
  }
  return param_1;
}

