
bool FUN_004d36e0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    return true;
  }
  lVar1 = FUN_004d5b60();
  lVar2 = FUN_004d5340();
  return lVar1 != lVar2;
}

