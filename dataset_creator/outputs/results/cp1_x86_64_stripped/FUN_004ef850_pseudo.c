
void FUN_004ef850(long param_1,int param_2)

{
  *(int *)(param_1 + 0x20) = param_2;
  *(uint *)(param_1 + 0x24) = (uint)(param_2 != 0);
  return;
}

