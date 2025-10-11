
undefined1 * OSSL_LIB_CTX_get0_global_default(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&default_context_init,default_context_do_init_ossl_);
  if (iVar1 != 0) {
    puVar2 = default_context_int;
    if (default_context_do_init_ossl_ret_ == 0) {
      puVar2 = (undefined1 *)0x0;
    }
    return puVar2;
  }
  return (undefined1 *)0x0;
}

