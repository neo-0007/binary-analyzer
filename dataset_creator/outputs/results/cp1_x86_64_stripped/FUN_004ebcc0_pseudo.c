
bool FUN_004ebcc0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    return true;
  }
  lVar1 = FUN_004eedf0();
  lVar2 = FUN_004eedb0();
  return lVar1 != lVar2;
}

