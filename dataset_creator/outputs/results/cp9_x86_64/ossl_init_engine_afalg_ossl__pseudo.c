
void ossl_init_engine_afalg_ossl_(void)

{
  engine_load_afalg_int();
  ossl_init_engine_afalg_ossl_ret_ = 1;
  return;
}

