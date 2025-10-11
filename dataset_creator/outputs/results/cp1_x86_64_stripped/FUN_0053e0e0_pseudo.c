
undefined8 FUN_0053e0e0(long param_1)

{
  LOCK();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  UNLOCK();
  return 1;
}

