
DH * DSA_dup_DH(DSA *r)

{
  int iVar1;
  DH *dh;
  undefined8 uVar2;
  BIGNUM *a;
  BIGNUM *pBVar3;
  
  if ((r == (DSA *)0x0) || (dh = DH_new(), dh == (DH *)0x0)) {
    pBVar3 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    dh = (DH *)0x0;
  }
  else {
    uVar2 = ossl_dh_get0_params(dh);
    iVar1 = ossl_ffc_params_copy(uVar2,&r->version);
    if (iVar1 == 0) {
      pBVar3 = (BIGNUM *)0x0;
      a = (BIGNUM *)0x0;
    }
    else {
      pBVar3 = (BIGNUM *)(r->ex_data).sk;
      if (pBVar3 == (BIGNUM *)0x0) {
        a = (BIGNUM *)0x0;
        if (*(long *)&(r->ex_data).dummy == 0) {
          return dh;
        }
      }
      else {
        a = BN_dup(pBVar3);
        if (a != (BIGNUM *)0x0) {
          pBVar3 = *(BIGNUM **)&(r->ex_data).dummy;
          if (((pBVar3 == (BIGNUM *)0x0) || (pBVar3 = BN_dup(pBVar3), pBVar3 != (BIGNUM *)0x0)) &&
             (iVar1 = DH_set0_key(dh,a,pBVar3), iVar1 != 0)) {
            return dh;
          }
          goto LAB_004cc02a;
        }
      }
      pBVar3 = (BIGNUM *)0x0;
    }
  }
LAB_004cc02a:
  BN_free(a);
  BN_free(pBVar3);
  DH_free(dh);
  return (DH *)0x0;
}

