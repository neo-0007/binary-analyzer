
int X509_CRL_add1_ext_i2d(X509_CRL *x,int nid,void *value,int crit,ulong flags)

{
  int iVar1;
  
  iVar1 = X509V3_add1_i2d((stack_st_X509_EXTENSION **)&x->crl_number,nid,value,crit,flags);
  return iVar1;
}

