
DSA_SIG * d2i_DSA_SIG(DSA_SIG **v,uchar **pp,long length)

{
  long lVar1;
  BIGNUM *pBVar2;
  DSA_SIG *a;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  
  if (length < 0) {
    return (DSA_SIG *)0x0;
  }
  if ((v == (DSA_SIG **)0x0) || (a = *v, a == (DSA_SIG *)0x0)) {
    a = DSA_SIG_new();
    if (a == (DSA_SIG *)0x0) {
      return (DSA_SIG *)0x0;
    }
    pBVar2 = a->r;
  }
  else {
    pBVar2 = a->r;
  }
  if (pBVar2 == (BIGNUM *)0x0) {
    pBVar3 = BN_new();
    pBVar2 = a->s;
    a->r = pBVar3;
    pBVar4 = pBVar3;
    if (pBVar2 == (BIGNUM *)0x0) goto LAB_004cdd50;
joined_r0x004cddc1:
    if (pBVar4 == (BIGNUM *)0x0) goto LAB_004cdd6b;
  }
  else {
    pBVar2 = a->s;
    if (pBVar2 == (BIGNUM *)0x0) {
LAB_004cdd50:
      pBVar2 = BN_new();
      pBVar3 = a->r;
      a->s = pBVar2;
      pBVar4 = pBVar2;
      if (pBVar3 == (BIGNUM *)0x0) goto LAB_004cdd6b;
      goto joined_r0x004cddc1;
    }
    pBVar3 = a->r;
  }
  lVar1 = ossl_decode_der_dsa_sig(pBVar3,pBVar2,pp,length);
  if (lVar1 != 0) {
    if ((v != (DSA_SIG **)0x0) && (*v == (DSA_SIG *)0x0)) {
      *v = a;
      return a;
    }
    return a;
  }
LAB_004cdd6b:
  if ((v == (DSA_SIG **)0x0) || (*v == (DSA_SIG *)0x0)) {
    DSA_SIG_free(a);
  }
  return (DSA_SIG *)0x0;
}

