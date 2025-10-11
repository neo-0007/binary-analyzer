
void rand_delete_thread_state(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ossl_lib_ctx_get_data(param_1,5,rand_drbg_ossl_ctx_method);
  if (lVar1 != 0) {
    uVar2 = CRYPTO_THREAD_get_local(lVar1 + 0x18);
    CRYPTO_THREAD_set_local(lVar1 + 0x18,0);
    EVP_RAND_CTX_free(uVar2);
    uVar2 = CRYPTO_THREAD_get_local(lVar1 + 0x1c);
    CRYPTO_THREAD_set_local(lVar1 + 0x1c,0);
    EVP_RAND_CTX_free(uVar2);
    return;
  }
  return;
}

