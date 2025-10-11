
void int_dh_free(long param_1)

{
  DH_free(*(DH **)(param_1 + 0x20));
  return;
}

