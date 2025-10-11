
bool FUN_004ef7a0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = FUN_004b8260(param_2);
    if (lVar2 != 0) {
      iVar1 = FUN_004b7ba0(param_2);
      return iVar1 == 0;
    }
  }
  return false;
}

