
ECDSA_SIG * d2i_ECDSA_SIG(ECDSA_SIG **sig,uchar **pp,long len)

{
  long lVar1;
  BIGNUM *pBVar2;
  ECDSA_SIG *sig_00;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  
  if (len < 0) {
    return (ECDSA_SIG *)0x0;
  }
  if ((sig == (ECDSA_SIG **)0x0) || (sig_00 = *sig, sig_00 == (ECDSA_SIG *)0x0)) {
    sig_00 = ECDSA_SIG_new();
    if (sig_00 == (ECDSA_SIG *)0x0) {
      return (ECDSA_SIG *)0x0;
    }
    pBVar2 = sig_00->r;
  }
  else {
    pBVar2 = sig_00->r;
  }
  if (pBVar2 == (BIGNUM *)0x0) {
    pBVar3 = BN_new();
    pBVar2 = sig_00->s;
    sig_00->r = pBVar3;
    pBVar4 = pBVar3;
    if (pBVar2 == (BIGNUM *)0x0) goto LAB_004de560;
joined_r0x004de5d1:
    if (pBVar4 == (BIGNUM *)0x0) goto LAB_004de57b;
  }
  else {
    pBVar2 = sig_00->s;
    if (pBVar2 == (BIGNUM *)0x0) {
LAB_004de560:
      pBVar2 = BN_new();
      pBVar3 = sig_00->r;
      sig_00->s = pBVar2;
      pBVar4 = pBVar2;
      if (pBVar3 == (BIGNUM *)0x0) goto LAB_004de57b;
      goto joined_r0x004de5d1;
    }
    pBVar3 = sig_00->r;
  }
  lVar1 = ossl_decode_der_dsa_sig(pBVar3,pBVar2,pp,len);
  if (lVar1 != 0) {
    if ((sig != (ECDSA_SIG **)0x0) && (*sig == (ECDSA_SIG *)0x0)) {
      *sig = sig_00;
      return sig_00;
    }
    return sig_00;
  }
LAB_004de57b:
  if ((sig == (ECDSA_SIG **)0x0) || (*sig == (ECDSA_SIG *)0x0)) {
    ECDSA_SIG_free(sig_00);
  }
  return (ECDSA_SIG *)0x0;
}

