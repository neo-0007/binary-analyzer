
void ossl_init_async_ossl_(void)

{
  ossl_init_async_ossl_ret_ = async_init();
  if (ossl_init_async_ossl_ret_ != 0) {
    async_inited = 1;
    ossl_init_async_ossl_ret_ = 1;
  }
  return;
}

