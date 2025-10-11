
bool FUN_0040ae60(long param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x4c) == 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x4c) = param_2;
  }
  return bVar1;
}

