
char * BIO_method_name(BIO *b)

{
  return *(char **)(b->callback + 8);
}

