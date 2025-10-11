
BIO * BIO_next(BIO *b)

{
  if (b != (BIO *)0x0) {
    return *(BIO **)&b->references;
  }
  return (BIO *)0x0;
}

