
void ossl_lib_ctx_unlock(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_concrete();
  CRYPTO_THREAD_unlock(*puVar1);
  return;
}

