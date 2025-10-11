
void FUN_007b1260(long param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = 0;
  UNLOCK();
  if (iVar1 < 2) {
    return;
  }
  FUN_00709660(param_1 + 8);
  return;
}

