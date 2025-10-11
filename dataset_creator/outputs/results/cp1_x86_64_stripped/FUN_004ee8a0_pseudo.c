
void FUN_004ee8a0(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | param_2;
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  return;
}

