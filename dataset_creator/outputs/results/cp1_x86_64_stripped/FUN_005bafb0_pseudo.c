
void FUN_005bafb0(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_005babf0();
  if (iVar1 != 1) {
    return;
  }
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0x100 | 2;
  return;
}

