
bool FUN_005c9880(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    return true;
  }
  lVar1 = FUN_00545610(FUN_005c9510,FUN_005c94a0);
  *(long *)(param_1 + 0x10) = lVar1;
  return lVar1 != 0;
}

