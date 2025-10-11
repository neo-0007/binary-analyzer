
bool FUN_00505970(long param_1)

{
  if (*(int *)(param_1 + 0x98) != 3) {
    return false;
  }
  return *(long *)(param_1 + 0xa0) != 0;
}

