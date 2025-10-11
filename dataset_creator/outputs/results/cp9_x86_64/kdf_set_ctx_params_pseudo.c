
void kdf_set_ctx_params(long param_1)

{
  EVP_KDF_CTX_set_params(*(undefined8 *)(param_1 + 8));
  return;
}

