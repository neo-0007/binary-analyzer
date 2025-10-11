
void err_load_strings_isra_0(long *param_1)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_write_lock(err_string_lock);
  if (iVar1 == 0) {
    return;
  }
  for (; *param_1 != 0; param_1 = param_1 + 2) {
    OPENSSL_LH_insert(int_error_hash,param_1);
  }
  CRYPTO_THREAD_unlock(err_string_lock);
  return;
}

