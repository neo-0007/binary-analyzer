
void rsa_gen_cleanup(void *param_1)

{
  if (param_1 != (void *)0x0) {
    BN_clear_free(*(BIGNUM **)((long)param_1 + 0x20));
    CRYPTO_free(param_1);
    return;
  }
  return;
}

