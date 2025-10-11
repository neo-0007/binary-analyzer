
BIO * BIO_new_connect(char *host_port)

{
  BIO_METHOD *type;
  BIO *bp;
  long lVar1;
  
  type = BIO_s_connect();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    lVar1 = BIO_ctrl(bp,100,0,host_port);
    if (lVar1 == 0) {
      BIO_free(bp);
      return (BIO *)0x0;
    }
  }
  return bp;
}

