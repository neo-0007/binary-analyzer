
void BIO_set_callback(BIO *b,callback *callback)

{
  b->cb_arg = (char *)callback;
  return;
}

