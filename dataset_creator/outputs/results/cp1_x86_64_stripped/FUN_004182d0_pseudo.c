
bool FUN_004182d0(long param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (param_1 != 0) {
    bVar1 = *(int *)(param_1 + 0x18) == 0;
  }
  return bVar1;
}

