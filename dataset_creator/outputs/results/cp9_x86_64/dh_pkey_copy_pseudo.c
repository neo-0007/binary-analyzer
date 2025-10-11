
int dh_pkey_copy(EVP_PKEY *param_1,int *param_2)

{
  int iVar1;
  DH *dh;
  
  dh = *(DH **)(param_2 + 8);
  if (dh != (DH *)0x0) {
    dh = (DH *)ossl_dh_dup(dh,0x87);
    if (dh == (DH *)0x0) {
      return 0;
    }
  }
  iVar1 = EVP_PKEY_assign(param_1,*param_2,dh);
  if (iVar1 != 0) {
    return iVar1;
  }
  DH_free(dh);
  return 0;
}

