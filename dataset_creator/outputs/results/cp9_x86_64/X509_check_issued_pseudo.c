
int X509_check_issued(X509 *issuer,X509 *subject)

{
  int iVar1;
  
  iVar1 = ossl_x509_likely_issued();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = ossl_x509_signing_allowed(issuer,subject);
  return iVar1;
}

