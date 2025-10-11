
int ecx_pkey_copy(EVP_PKEY *param_1,int *param_2)

{
  int iVar1;
  void *key;
  
  key = *(void **)(param_2 + 8);
  if (key != (void *)0x0) {
    key = (void *)ossl_ecx_key_dup(key,0x87);
    if (key == (void *)0x0) {
      return 0;
    }
  }
  iVar1 = EVP_PKEY_assign(param_1,*param_2,key);
  if (iVar1 != 0) {
    return iVar1;
  }
  ossl_ecx_key_free(key);
  return 0;
}

