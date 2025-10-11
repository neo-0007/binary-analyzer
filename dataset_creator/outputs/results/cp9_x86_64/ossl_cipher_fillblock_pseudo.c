
ulong ossl_cipher_fillblock(long param_1,long *param_2,long param_3,long *param_4,ulong *param_5)

{
  ulong __n;
  
  __n = param_3 - *param_2;
  if (*param_5 < (ulong)(param_3 - *param_2)) {
    __n = *param_5;
  }
  memcpy((void *)(param_1 + *param_2),(void *)*param_4,__n);
  *param_4 = *param_4 + __n;
  *param_5 = *param_5 - __n;
  *param_2 = *param_2 + __n;
  return -param_3 & *param_5;
}

