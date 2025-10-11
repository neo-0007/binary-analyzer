
undefined8 FUN_0050ab70(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_004ef780();
  if ((lVar2 != 0) && (iVar1 = FUN_0050aa70(lVar2), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x98) == 4) && (*(long *)(param_1 + 0xa0) != 0)) {
    return 1;
  }
  return 0;
}

