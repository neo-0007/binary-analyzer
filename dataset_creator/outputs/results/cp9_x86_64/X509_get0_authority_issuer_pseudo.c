
long X509_get0_authority_issuer(X509 *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = X509_check_purpose(param_1,-1,0);
  lVar2 = 0;
  if ((iVar1 == 1) && (lVar2 = param_1[1].ex_pathlen, lVar2 != 0)) {
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2;
}

