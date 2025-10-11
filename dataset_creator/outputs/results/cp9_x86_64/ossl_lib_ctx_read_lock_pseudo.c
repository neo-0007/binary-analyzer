
void ossl_lib_ctx_read_lock(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_concrete();
  CRYPTO_THREAD_read_lock(*puVar1);
  return;
}

