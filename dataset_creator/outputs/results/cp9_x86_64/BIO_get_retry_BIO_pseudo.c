
BIO * BIO_get_retry_BIO(BIO *bio,int *reason)

{
  int iVar1;
  BIO *b;
  BIO *pBVar2;
  
  pBVar2 = bio;
  do {
    b = bio;
    iVar1 = BIO_test_flags(b,8);
    if (iVar1 == 0) break;
    bio = *(BIO **)&b->references;
    pBVar2 = b;
  } while (*(BIO **)&b->references != (BIO *)0x0);
  if (reason != (int *)0x0) {
    *reason = *(int *)((long)&pBVar2->ptr + 4);
  }
  return pBVar2;
}

