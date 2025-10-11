
void RSA_set_flags(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | param_2;
  return;
}

