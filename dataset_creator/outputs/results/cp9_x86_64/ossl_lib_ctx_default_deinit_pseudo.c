
void ossl_lib_ctx_default_deinit(void)

{
  context_deinit_part_0(default_context_int);
  CRYPTO_THREAD_cleanup_local(&default_context_thread_local);
  return;
}

