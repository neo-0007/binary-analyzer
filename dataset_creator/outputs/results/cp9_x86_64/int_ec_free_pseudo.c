
void int_ec_free(long param_1)

{
  EC_KEY_free(*(EC_KEY **)(param_1 + 0x20));
  return;
}

