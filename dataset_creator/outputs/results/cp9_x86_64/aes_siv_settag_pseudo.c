
void aes_siv_settag(long param_1)

{
  ossl_siv128_set_tag(param_1 + 0x18);
  return;
}

