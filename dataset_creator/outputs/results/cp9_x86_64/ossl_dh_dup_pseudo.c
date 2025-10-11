
DH * ossl_dh_dup(long param_1,ulong param_2)

{
  int iVar1;
  DH *dh;
  BIGNUM *pBVar2;
  
  iVar1 = ossl_dh_is_foreign();
  if (iVar1 != 0) {
    return (DH *)0x0;
  }
  dh = (DH *)ossl_dh_new_ex(*(undefined8 *)(param_1 + 0xb0));
  if (dh == (DH *)0x0) {
    return (DH *)0x0;
  }
  iVar1 = DH_get_length(param_1);
  dh->references = iVar1;
  if ((param_2 & 4) == 0) {
    *(undefined4 *)&dh->meth = *(undefined4 *)(param_1 + 0x80);
    if ((param_2 & 3) != 0) goto LAB_004c6f4d;
  }
  else {
    iVar1 = ossl_ffc_params_copy(&dh->p,param_1 + 8);
    if (iVar1 == 0) goto LAB_004c6f4d;
    *(undefined4 *)&dh->meth = *(undefined4 *)(param_1 + 0x80);
    if (((param_2 & 2) != 0) && (*(BIGNUM **)(param_1 + 0x70) != (BIGNUM *)0x0)) {
      pBVar2 = BN_dup(*(BIGNUM **)(param_1 + 0x70));
      (dh->ex_data).sk = (stack_st_void *)pBVar2;
      if (pBVar2 == (BIGNUM *)0x0) goto LAB_004c6f4d;
    }
    if (((param_2 & 1) != 0) && (*(BIGNUM **)(param_1 + 0x78) != (BIGNUM *)0x0)) {
      pBVar2 = BN_dup(*(BIGNUM **)(param_1 + 0x78));
      *(BIGNUM **)&(dh->ex_data).dummy = pBVar2;
      if (pBVar2 == (BIGNUM *)0x0) goto LAB_004c6f4d;
    }
  }
  iVar1 = CRYPTO_dup_ex_data(6,(CRYPTO_EX_DATA *)&dh[1].p,(CRYPTO_EX_DATA *)(param_1 + 0x98));
  if (iVar1 != 0) {
    return dh;
  }
LAB_004c6f4d:
  DH_free(dh);
  return (DH *)0x0;
}

