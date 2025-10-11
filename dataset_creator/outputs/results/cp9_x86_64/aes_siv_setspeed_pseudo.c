
void aes_siv_setspeed(long param_1)

{
  ossl_siv128_speed(param_1 + 0x18);
  return;
}

