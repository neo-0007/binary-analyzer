
X509_EXTENSION * X509v3_delete_ext(stack_st_X509_EXTENSION *x,int loc)

{
  int iVar1;
  X509_EXTENSION *pXVar2;
  
  if (x == (stack_st_X509_EXTENSION *)0x0) {
    return (X509_EXTENSION *)0x0;
  }
  iVar1 = OPENSSL_sk_num();
  if ((loc < iVar1) && (-1 < loc)) {
    pXVar2 = (X509_EXTENSION *)OPENSSL_sk_delete(x,loc);
    return pXVar2;
  }
  return (X509_EXTENSION *)0x0;
}

