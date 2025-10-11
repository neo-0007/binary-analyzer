
void ossl_release_default_drbg_ctx(void)

{
  undefined4 idx;
  void *pvVar1;
  
  idx = default_context_int._196_4_;
  if (default_context_int._196_4_ == -1) {
    return;
  }
  pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)(default_context_int + 8),
                              default_context_int._196_4_);
  ossl_rand_ctx_free(pvVar1);
  CRYPTO_set_ex_data((CRYPTO_EX_DATA *)(default_context_int + 8),idx,(void *)0x0);
  return;
}

