
int pkey_dh_keygen(long param_1,EVP_PKEY *param_2)

{
  int iVar1;
  DH *pDVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x98) + 0x20);
  if (*(long *)(param_1 + 0x88) == 0) {
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_pmeth.c",0x17e,"pkey_dh_keygen");
      ERR_set_error(5,0x6b,0);
      return 0;
    }
  }
  else if (iVar1 == 0) {
    pDVar2 = DH_new();
    goto joined_r0x004ca0c7;
  }
  pDVar2 = (DH *)DH_new_by_nid();
joined_r0x004ca0c7:
  if (pDVar2 != (DH *)0x0) {
    EVP_PKEY_assign(param_2,**(int **)(param_1 + 0x78),pDVar2);
    if ((*(EVP_PKEY **)(param_1 + 0x88) == (EVP_PKEY *)0x0) ||
       (iVar1 = EVP_PKEY_copy_parameters(param_2,*(EVP_PKEY **)(param_1 + 0x88)), iVar1 != 0)) {
      pDVar2 = (DH *)EVP_PKEY_get0_DH(param_2);
      iVar1 = DH_generate_key(pDVar2);
      return iVar1;
    }
  }
  return 0;
}

