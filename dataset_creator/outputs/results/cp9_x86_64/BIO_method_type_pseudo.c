
int BIO_method_type(BIO *b)

{
  return *(int *)b->callback;
}

