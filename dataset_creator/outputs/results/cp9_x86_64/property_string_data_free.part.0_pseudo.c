
void property_string_data_free_part_0(undefined8 *param_1)

{
  long lVar1;
  
  CRYPTO_THREAD_lock_free(*param_1);
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    OPENSSL_LH_doall(lVar1,property_free);
    OPENSSL_LH_free(lVar1);
    param_1[1] = 0;
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    OPENSSL_LH_doall(lVar1,property_free);
    OPENSSL_LH_free(lVar1);
    param_1[2] = 0;
  }
  param_1[3] = 0;
  CRYPTO_free(param_1);
  return;
}

