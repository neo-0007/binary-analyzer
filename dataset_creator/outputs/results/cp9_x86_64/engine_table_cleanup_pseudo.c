
void engine_table_cleanup(long *param_1)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_write_lock(global_engine_lock);
  if (iVar1 != 0) {
    if (*param_1 != 0) {
      OPENSSL_LH_doall(*param_1,int_cleanup_cb_doall);
      OPENSSL_LH_free(*param_1);
      *param_1 = 0;
    }
    CRYPTO_THREAD_unlock(global_engine_lock);
    return;
  }
  return;
}

