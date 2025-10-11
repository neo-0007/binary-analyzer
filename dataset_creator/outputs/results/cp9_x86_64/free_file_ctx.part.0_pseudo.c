
void free_file_ctx_part_0(void *param_1)

{
  CRYPTO_free(*(void **)((long)param_1 + 8));
  if (*(int *)((long)param_1 + 0x10) != 1) {
    OSSL_DECODER_CTX_free(*(undefined8 *)((long)param_1 + 0x20));
    CRYPTO_free(*(void **)((long)param_1 + 0x30));
    CRYPTO_free(*(void **)((long)param_1 + 0x28));
  }
  CRYPTO_free(param_1);
  return;
}

