
void DH_set_flags(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | param_2;
  return;
}

