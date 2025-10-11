
bool FUN_00544d50(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar1 = FUN_00405f40();
    *(long *)(param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      return false;
    }
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar1 = FUN_00405f40();
    *(long *)(param_1 + 0x18) = lVar1;
    if (lVar1 == 0) {
      return false;
    }
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    lVar1 = FUN_00405f40();
    *(long *)(param_1 + 8) = lVar1;
  }
  return lVar1 != 0;
}

