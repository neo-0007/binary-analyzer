
int FUN_004d5f10(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    iVar1 = FUN_004b7bb0();
    iVar2 = iVar1 + 7;
    if (iVar1 + 7 < 0) {
      iVar2 = iVar1 + 0xe;
    }
    return iVar2 >> 3;
  }
  return -1;
}

