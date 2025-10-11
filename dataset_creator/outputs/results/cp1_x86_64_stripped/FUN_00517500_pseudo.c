
undefined8 FUN_00517500(long param_1)

{
  LOCK();
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  UNLOCK();
  return 1;
}

