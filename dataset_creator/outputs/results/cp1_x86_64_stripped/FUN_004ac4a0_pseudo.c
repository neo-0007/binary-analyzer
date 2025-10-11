
void FUN_004ac4a0(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  do {
    iVar1 = *(int *)(param_1 + 0x58);
    param_1 = *(long *)(param_1 + 0x48);
    FUN_004ab560();
    if (1 < iVar1) {
      return;
    }
  } while (param_1 != 0);
  return;
}

