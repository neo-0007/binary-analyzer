
int BIO_get_retry_reason(BIO *bio)

{
  return *(int *)((long)&bio->ptr + 4);
}

