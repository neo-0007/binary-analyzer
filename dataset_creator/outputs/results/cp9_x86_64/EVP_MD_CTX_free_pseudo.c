
void EVP_MD_CTX_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    EVP_MD_CTX_reset();
    CRYPTO_free(param_1);
    return;
  }
  return;
}

