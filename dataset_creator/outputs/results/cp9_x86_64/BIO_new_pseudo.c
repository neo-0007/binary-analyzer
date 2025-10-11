
BIO * BIO_new(BIO_METHOD *type)

{
  BIO *pBVar1;
  
  pBVar1 = (BIO *)BIO_new_ex(0,type);
  return pBVar1;
}

