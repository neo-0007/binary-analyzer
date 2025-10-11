
int FUN_005116c0(long param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
    return (uint)(iVar1 != 0x40b) * 8 + 0x1c0;
  }
  return 0xfd;
}

