
undefined1 * OSSL_LIB_CTX_set0_default(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&default_context_init,default_context_do_init_ossl_);
  if ((iVar1 != 0) && (default_context_do_init_ossl_ret_ != 0)) {
    puVar2 = (undefined1 *)CRYPTO_THREAD_get_local(&default_context_thread_local);
    if (puVar2 != (undefined1 *)0x0) goto LAB_00415e13;
  }
  puVar2 = default_context_int;
LAB_00415e13:
  if (param_1 != (undefined1 *)0x0) {
    if (param_1 == default_context_int) {
      param_1 = (undefined1 *)0x0;
    }
    CRYPTO_THREAD_set_local(&default_context_thread_local,param_1);
  }
  return puVar2;
}

