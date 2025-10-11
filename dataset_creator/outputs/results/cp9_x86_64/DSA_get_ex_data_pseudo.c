
void * DSA_get_ex_data(DSA *d,int idx)

{
  void *pvVar1;
  
  pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)&d[1].version,idx);
  return pvVar1;
}

