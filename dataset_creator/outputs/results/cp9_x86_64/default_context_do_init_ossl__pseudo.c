
void default_context_do_init_ossl_(void)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_init_local(&default_context_thread_local,0);
  if (iVar1 != 0) {
    default_context_int._0_8_ = CRYPTO_THREAD_lock_new();
    if (default_context_int._0_8_ != 0) {
      iVar1 = context_init_part_0(default_context_int);
      default_context_do_init_ossl_ret_ = (uint)(iVar1 != 0);
      return;
    }
  }
  default_context_do_init_ossl_ret_ = 0;
  return;
}

