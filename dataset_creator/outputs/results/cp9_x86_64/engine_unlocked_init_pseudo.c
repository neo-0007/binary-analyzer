
undefined8 engine_unlocked_init(long param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0xa0) == 0) && (*(code **)(param_1 + 0x60) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1 + 0x60))();
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  else {
    uVar1 = 1;
  }
  LOCK();
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  UNLOCK();
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  return uVar1;
}

