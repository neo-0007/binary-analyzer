
void OSSL_ENCODER_CTX_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 0x18),ossl_encoder_instance_free);
    CRYPTO_free(*(void **)((long)param_1 + 0x30));
    ossl_pw_clear_passphrase_data((long)param_1 + 0x38);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

