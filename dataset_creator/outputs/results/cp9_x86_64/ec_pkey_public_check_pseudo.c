
void ec_pkey_public_check(long param_1)

{
  EC_KEY_check_key(*(EC_KEY **)(param_1 + 0x20));
  return;
}

