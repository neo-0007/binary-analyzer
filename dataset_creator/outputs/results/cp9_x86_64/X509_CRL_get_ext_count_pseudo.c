
int X509_CRL_get_ext_count(X509_CRL *x)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_count((stack_st_X509_EXTENSION *)x->crl_number);
  return iVar1;
}

