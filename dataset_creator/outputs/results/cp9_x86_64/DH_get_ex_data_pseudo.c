
void * DH_get_ex_data(DH *d,int idx)

{
  void *pvVar1;
  
  pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)&d[1].p,idx);
  return pvVar1;
}

