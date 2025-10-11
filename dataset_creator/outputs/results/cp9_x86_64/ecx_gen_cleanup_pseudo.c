
void ecx_gen_cleanup(void *param_1)

{
  CRYPTO_free(*(void **)((long)param_1 + 8));
  CRYPTO_free(param_1);
  return;
}

