
void bio_free_ex_data(void *param_1)

{
  CRYPTO_free_ex_data(0xc,param_1,(CRYPTO_EX_DATA *)((long)param_1 + 0x70));
  return;
}

