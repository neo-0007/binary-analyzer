
void BIO_set_flags(BIO *b,int flags)

{
  *(uint *)&b->ptr = *(uint *)&b->ptr | flags;
  return;
}

