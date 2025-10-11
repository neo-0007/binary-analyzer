
void rsakem_freectx(void *param_1)

{
  RSA_free(*(RSA **)((long)param_1 + 8));
  CRYPTO_free(param_1);
  return;
}

