
bool FUN_004447b0(long param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
    iVar1 = FUN_00551e20();
    return iVar1 != 0;
  }
  iVar1 = FUN_00552070(param_1 + 0x2b0);
  return iVar1 != 0;
}

