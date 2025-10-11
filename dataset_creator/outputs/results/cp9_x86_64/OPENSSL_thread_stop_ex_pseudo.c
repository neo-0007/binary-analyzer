
void OPENSSL_thread_stop_ex(void)

{
  undefined8 uVar1;
  
  uVar1 = ossl_lib_ctx_get_concrete();
  ossl_ctx_thread_stop(uVar1);
  return;
}

