
int X509_REVOKED_get_ext_by_critical(X509_REVOKED *x,int crit,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_critical(*(stack_st_X509_EXTENSION **)&x->reason,crit,lastpos);
  return iVar1;
}

