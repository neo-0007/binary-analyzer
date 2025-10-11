
bool FUN_0059fd80(long param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x90);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 0 < iVar2;
}

