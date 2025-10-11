
int X509_check_ca(X509 *x)

{
  int iVar1;
  
  iVar1 = ossl_x509v3_cache_extensions();
  if (iVar1 != 0) {
    iVar1 = check_ca(x);
    return iVar1;
  }
  return 0;
}

