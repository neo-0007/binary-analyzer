
int X509_REQ_verify(X509_REQ *a,EVP_PKEY *r)

{
  int iVar1;
  
  iVar1 = X509_REQ_verify_ex(a,r,0,0);
  return iVar1;
}

