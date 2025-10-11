
bool FUN_004e7290(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = FUN_004ee2d0();
    return lVar1 == 0;
  }
  return true;
}

