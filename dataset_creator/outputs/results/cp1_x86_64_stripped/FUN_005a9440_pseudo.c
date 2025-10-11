
void FUN_005a9440(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 | 1;
  FUN_005a8ff0();
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}

