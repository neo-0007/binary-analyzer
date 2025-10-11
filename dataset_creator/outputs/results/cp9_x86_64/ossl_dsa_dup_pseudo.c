
DSA * ossl_dsa_dup(long param_1,ulong param_2)

{
  int iVar1;
  DSA *r;
  BIGNUM *pBVar2;
  
  iVar1 = ossl_dsa_is_foreign();
  if (iVar1 != 0) {
    return (DSA *)0x0;
  }
  r = (DSA *)ossl_dsa_new(*(undefined8 *)(param_1 + 0xb8));
  if (r == (DSA *)0x0) {
    return (DSA *)0x0;
  }
  if ((param_2 & 4) == 0) {
    *(undefined4 *)&r->meth = *(undefined4 *)(param_1 + 0x78);
    if ((param_2 & 3) != 0) goto LAB_004cb5aa;
  }
  else {
    iVar1 = ossl_ffc_params_copy(&r->version,param_1 + 8);
    if (iVar1 == 0) goto LAB_004cb5aa;
    *(undefined4 *)&r->meth = *(undefined4 *)(param_1 + 0x78);
    if (((param_2 & 2) != 0) && (*(BIGNUM **)(param_1 + 0x68) != (BIGNUM *)0x0)) {
      pBVar2 = BN_dup(*(BIGNUM **)(param_1 + 0x68));
      (r->ex_data).sk = (stack_st_void *)pBVar2;
      if (pBVar2 == (BIGNUM *)0x0) goto LAB_004cb5aa;
    }
    if (((param_2 & 1) != 0) && (*(BIGNUM **)(param_1 + 0x70) != (BIGNUM *)0x0)) {
      pBVar2 = BN_dup(*(BIGNUM **)(param_1 + 0x70));
      *(BIGNUM **)&(r->ex_data).dummy = pBVar2;
      if (pBVar2 == (BIGNUM *)0x0) goto LAB_004cb5aa;
    }
  }
  iVar1 = CRYPTO_dup_ex_data(7,(CRYPTO_EX_DATA *)&r[1].version,(CRYPTO_EX_DATA *)(param_1 + 0x90));
  if (iVar1 != 0) {
    return r;
  }
LAB_004cb5aa:
  DSA_free(r);
  return (DSA *)0x0;
}

