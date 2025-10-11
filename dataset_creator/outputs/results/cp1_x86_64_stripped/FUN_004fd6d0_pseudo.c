
bool FUN_004fd6d0(long param_1)

{
  if (*(int *)(param_1 + 0x98) != 2) {
    return false;
  }
  return *(long *)(param_1 + 0xa0) != 0;
}

