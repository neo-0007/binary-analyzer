
void ossl_init_engine_padlock_ossl_(void)

{
  engine_load_padlock_int();
  ossl_init_engine_padlock_ossl_ret_ = 1;
  return;
}

