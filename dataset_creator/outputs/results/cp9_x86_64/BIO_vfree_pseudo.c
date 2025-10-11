
int BIO_vfree(BIO *a)

{
  int iVar1;
  
  iVar1 = BIO_free(a);
  return iVar1;
}

