
int DSA_set_ex_data(DSA *d,int idx,void *arg)

{
  int iVar1;
  
  iVar1 = CRYPTO_set_ex_data((CRYPTO_EX_DATA *)&d[1].version,idx,arg);
  return iVar1;
}

