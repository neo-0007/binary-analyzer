
ASN1_BIT_STRING * X509_get_pathlen(X509 *param_1)

{
  int iVar1;
  
  iVar1 = X509_check_purpose(param_1,-1,0);
  if ((iVar1 == 1) && (((ulong)param_1[1].name & 1) != 0)) {
    return param_1[1].signature;
  }
  return (ASN1_BIT_STRING *)0xffffffffffffffff;
}

