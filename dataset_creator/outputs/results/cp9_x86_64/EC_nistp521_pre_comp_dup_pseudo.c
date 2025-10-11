
long EC_nistp521_pre_comp_dup(long param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0xd80) = *(int *)(param_1 + 0xd80) + 1;
    UNLOCK();
  }
  return param_1;
}

