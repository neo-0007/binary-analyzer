
bool FUN_004d7d50(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    return true;
  }
  lVar1 = FUN_004d8950();
  lVar2 = FUN_004d9840();
  return lVar1 != lVar2;
}

