
undefined8 FUN_005379a0(long param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    return 1;
  }
  LOCK();
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  UNLOCK();
  return 1;
}

