
void ossl_crypto_cleanup_all_ex_data_int(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_ex_data_global();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1 + 1;
    do {
      puVar3 = puVar2 + 1;
      OPENSSL_sk_pop_free(*puVar2,cleanup_cb);
      *puVar2 = 0;
      puVar2 = puVar3;
    } while (puVar3 != puVar1 + 0x13);
    CRYPTO_THREAD_lock_free(*puVar1);
    *puVar1 = 0;
  }
  return;
}

