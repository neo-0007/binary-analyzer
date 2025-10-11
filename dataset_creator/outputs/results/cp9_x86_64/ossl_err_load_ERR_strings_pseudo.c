
ulong ossl_err_load_ERR_strings(void)

{
  ulong uVar1;
  
  uVar1 = CRYPTO_THREAD_run_once(&err_string_init,do_err_strings_init_ossl_);
  if (((int)uVar1 != 0) &&
     (uVar1 = (ulong)do_err_strings_init_ossl_ret_, do_err_strings_init_ossl_ret_ != 0)) {
    err_load_strings_isra_0(ERR_str_libraries);
    err_load_strings_isra_0(ERR_str_reasons);
    return 1;
  }
  return uVar1;
}

