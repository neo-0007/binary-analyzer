
void FUN_004b7c90(long param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  iVar1 = FUN_004b7ba0();
  *(uint *)(param_1 + 0x10) = (uint)(iVar1 == 0);
  return;
}

