
void EVP_KDF_CTX_free(long *param_1)

{
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x40))(param_1[1]);
    param_1[1] = 0;
    EVP_KDF_free(*param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

