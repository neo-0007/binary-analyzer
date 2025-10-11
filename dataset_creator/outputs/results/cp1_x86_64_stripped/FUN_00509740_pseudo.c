
long FUN_00509740(long param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0xd80) = *(int *)(param_1 + 0xd80) + 1;
    UNLOCK();
  }
  return param_1;
}

