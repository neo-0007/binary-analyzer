
void int_dsa_free(long param_1)

{
  DSA_free(*(DSA **)(param_1 + 0x20));
  return;
}

