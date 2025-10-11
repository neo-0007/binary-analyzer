
DH * DHparams_dup(DH *param_1)

{
  BIGNUM *pBVar1;
  int iVar2;
  DH *dh;
  
  dh = DH_new();
  if (dh != (DH *)0x0) {
    pBVar1 = param_1->g;
    iVar2 = ossl_ffc_params_copy(&dh->p,&param_1->p);
    if (iVar2 == 0) {
      DH_free(dh);
      return (DH *)0x0;
    }
    if (pBVar1 == (BIGNUM *)0x0) {
      dh->references = param_1->references;
    }
    dh[1].method_mont_p = (BN_MONT_CTX *)((long)&(dh[1].method_mont_p)->ri + 1);
  }
  return dh;
}

