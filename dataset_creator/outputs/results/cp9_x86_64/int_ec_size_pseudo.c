
void int_ec_size(long param_1)

{
  ECDSA_size(*(EC_KEY **)(param_1 + 0x20));
  return;
}

