
int BIO_test_flags(BIO *b,int flags)

{
  return *(uint *)&b->ptr & flags;
}

