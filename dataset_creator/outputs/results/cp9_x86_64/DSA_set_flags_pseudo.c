
void DSA_set_flags(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | param_2;
  return;
}

