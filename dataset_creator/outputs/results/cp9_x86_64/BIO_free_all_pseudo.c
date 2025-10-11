
void BIO_free_all(BIO *a)

{
  BIO *pBVar1;
  ulong uVar2;
  
  if (a == (BIO *)0x0) {
    return;
  }
  do {
    uVar2 = a->num_write;
    pBVar1 = *(BIO **)&a->references;
    BIO_free(a);
    if (1 < (int)uVar2) {
      return;
    }
    a = pBVar1;
  } while (pBVar1 != (BIO *)0x0);
  return;
}

