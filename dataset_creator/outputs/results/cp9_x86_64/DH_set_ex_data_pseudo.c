
int DH_set_ex_data(DH *d,int idx,void *arg)

{
  int iVar1;
  
  iVar1 = CRYPTO_set_ex_data((CRYPTO_EX_DATA *)&d[1].p,idx,arg);
  return iVar1;
}

