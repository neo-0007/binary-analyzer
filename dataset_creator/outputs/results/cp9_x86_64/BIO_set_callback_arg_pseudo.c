
void BIO_set_callback_arg(BIO *b,char *arg)

{
  *(char **)&b->flags = arg;
  return;
}

