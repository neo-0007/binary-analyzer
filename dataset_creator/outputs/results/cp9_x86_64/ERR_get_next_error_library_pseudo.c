
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ERR_get_next_error_library(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&err_string_init,do_err_strings_init_ossl_);
  if ((iVar1 != 0) && (do_err_strings_init_ossl_ret_ != 0)) {
    iVar2 = CRYPTO_THREAD_write_lock(err_string_lock);
    iVar1 = int_err_library_number;
    if (iVar2 != 0) {
      int_err_library_number = int_err_library_number + 1;
      CRYPTO_THREAD_unlock(err_string_lock);
      return iVar1;
    }
  }
  return 0;
}

