
bool ossl_lib_ctx_is_default(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (param_1 == (undefined1 *)0x0) {
    return true;
  }
  iVar1 = CRYPTO_THREAD_run_once(&default_context_init,default_context_do_init_ossl_);
  if ((iVar1 != 0) && (default_context_do_init_ossl_ret_ != 0)) {
    puVar2 = (undefined1 *)CRYPTO_THREAD_get_local(&default_context_thread_local);
    if (puVar2 != (undefined1 *)0x0) {
      return param_1 == puVar2;
    }
  }
  return param_1 == default_context_int;
}

