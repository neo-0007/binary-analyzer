
void ERR_unload_strings(int lib,ERR_STRING_DATA *str)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_run_once(&err_string_init,do_err_strings_init_ossl_);
  if (((iVar1 != 0) && (do_err_strings_init_ossl_ret_ != 0)) &&
     (iVar1 = CRYPTO_THREAD_write_lock(err_string_lock), iVar1 != 0)) {
    for (; str->error != 0; str = str + 1) {
      OPENSSL_LH_delete(int_error_hash,str);
    }
    CRYPTO_THREAD_unlock(err_string_lock);
    return;
  }
  return;
}

