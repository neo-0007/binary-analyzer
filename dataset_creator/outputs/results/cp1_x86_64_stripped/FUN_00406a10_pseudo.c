
undefined8 FUN_00406a10(long param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    return 1;
  }
  LOCK();
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  UNLOCK();
  return 1;
}

