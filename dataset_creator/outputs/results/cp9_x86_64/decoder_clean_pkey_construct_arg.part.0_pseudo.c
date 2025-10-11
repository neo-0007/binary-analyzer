
void decoder_clean_pkey_construct_arg_part_0(void *param_1)

{
  OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 0x18),EVP_KEYMGMT_free);
  CRYPTO_free(*(void **)((long)param_1 + 8));
  CRYPTO_free(*(void **)((long)param_1 + 0x20));
  CRYPTO_free(param_1);
  return;
}

