
void ossl_init_no_config_ossl_(void)

{
  ossl_no_config_int();
  ossl_init_config_ossl_ret_ = 1;
  return;
}

