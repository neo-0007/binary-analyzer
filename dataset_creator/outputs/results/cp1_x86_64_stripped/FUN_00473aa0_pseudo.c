
undefined8 FUN_00473aa0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043b840();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return 1;
}

