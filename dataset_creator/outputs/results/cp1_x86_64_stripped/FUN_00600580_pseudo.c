
bool FUN_00600580(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(int *)(param_1 + 0xa0) != 0;
  }
  return bVar1;
}

