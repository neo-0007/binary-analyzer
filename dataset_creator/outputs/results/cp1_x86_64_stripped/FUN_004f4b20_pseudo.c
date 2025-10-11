
bool FUN_004f4b20(long param_1)

{
  if (*(int *)(param_1 + 0x98) != 5) {
    return false;
  }
  return *(long *)(param_1 + 0xa0) != 0;
}

