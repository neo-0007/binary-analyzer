
int dsa_pkey_copy(EVP_PKEY *param_1,long param_2)

{
  int iVar1;
  DSA *r;
  
  r = *(DSA **)(param_2 + 0x20);
  if (r != (DSA *)0x0) {
    r = (DSA *)ossl_dsa_dup(r,0x87);
    if (r == (DSA *)0x0) {
      return 0;
    }
  }
  iVar1 = EVP_PKEY_assign(param_1,0x74,r);
  if (iVar1 != 0) {
    return iVar1;
  }
  DSA_free(r);
  return 0;
}

