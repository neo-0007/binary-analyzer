
void krb5kdf_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    krb5kdf_reset();
    CRYPTO_free(param_1);
    return;
  }
  return;
}

