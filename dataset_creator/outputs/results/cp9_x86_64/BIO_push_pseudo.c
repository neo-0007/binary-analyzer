
BIO * BIO_push(BIO *b,BIO *append)

{
  BIO *pBVar1;
  BIO *parg;
  
  pBVar1 = b;
  if (b == (BIO *)0x0) {
    return append;
  }
  do {
    parg = pBVar1;
    pBVar1 = *(BIO **)&parg->references;
  } while (*(BIO **)&parg->references != (BIO *)0x0);
  *(BIO **)&parg->references = append;
  if (append != (BIO *)0x0) {
    append->num_read = (ulong)parg;
  }
  BIO_ctrl(b,6,0,parg);
  return b;
}

