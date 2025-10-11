
void FUN_0066f6e0(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0xe8) == 0) {
    param_2 = param_2 | 1;
  }
  *(uint *)(param_1 + 0x20) = param_2;
  if ((param_2 & *(uint *)(param_1 + 0x1c)) == 0) {
    return;
  }
  FUN_004042e0();
  FUN_0066f6e0();
  return;
}

