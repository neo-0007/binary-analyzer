
int rsa_pkey_copy(EVP_PKEY *param_1,int *param_2)

{
  int iVar1;
  RSA *r;
  
  r = *(RSA **)(param_2 + 8);
  if (r != (RSA *)0x0) {
    r = (RSA *)ossl_rsa_dup(r,0x87);
    if (r == (RSA *)0x0) {
      return 0;
    }
  }
  iVar1 = EVP_PKEY_assign(param_1,*param_2,r);
  if (iVar1 != 0) {
    return iVar1;
  }
  RSA_free(r);
  return 0;
}

