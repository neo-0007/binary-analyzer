
bool pkey_ecx_keygen(long param_1,EVP_PKEY *param_2)

{
  void *key;
  
  key = (void *)ossl_ecx_key_op(0,0,0,**(undefined4 **)(param_1 + 0x78),0,0,0);
  if (key != (void *)0x0) {
    EVP_PKEY_assign(param_2,**(int **)(param_1 + 0x78),key);
  }
  return key != (void *)0x0;
}

