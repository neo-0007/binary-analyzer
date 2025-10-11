
void ossl_ctx_thread_stop(undefined8 param_1)

{
  long lVar1;
  
  if (destructor_key == -1) {
    return;
  }
  lVar1 = CRYPTO_THREAD_get_local(&destructor_key);
  if (lVar1 != 0) {
    init_thread_stop_part_0(param_1,lVar1);
    return;
  }
  return;
}

