
void dynamic_data_ctx_free_func(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    DSO_free((DSO *)*param_2);
    CRYPTO_free((void *)param_2[3]);
    CRYPTO_free((void *)param_2[5]);
    OPENSSL_sk_pop_free(param_2[10],int_free_str);
    CRYPTO_free(param_2);
    return;
  }
  return;
}

