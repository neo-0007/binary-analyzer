
long EC_ec_pre_comp_dup(long param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    UNLOCK();
  }
  return param_1;
}

