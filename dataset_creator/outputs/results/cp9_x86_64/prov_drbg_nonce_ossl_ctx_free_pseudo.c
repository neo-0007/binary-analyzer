
void prov_drbg_nonce_ossl_ctx_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_THREAD_lock_free(*param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

