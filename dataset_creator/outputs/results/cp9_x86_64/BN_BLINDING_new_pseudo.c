
BN_BLINDING * BN_BLINDING_new(BIGNUM *A,BIGNUM *Ai,BIGNUM *mod)

{
  int iVar1;
  BN_BLINDING *b;
  long lVar2;
  BIGNUM *pBVar3;
  
  b = (BN_BLINDING *)CRYPTO_zalloc(0x50,"../crypto/bn/bn_blind.c",0x24);
  if (b == (BN_BLINDING *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/bn/bn_blind.c",0x25,"BN_BLINDING_new");
    ERR_set_error(3,0xc0100,0);
  }
  else {
    lVar2 = CRYPTO_THREAD_lock_new();
    *(long *)(b + 0x48) = lVar2;
    if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/bn/bn_blind.c",0x2b,"BN_BLINDING_new");
      ERR_set_error(3,0xc0100,0);
      CRYPTO_free(b);
      return (BN_BLINDING *)0x0;
    }
    BN_BLINDING_set_current_thread(b);
    if (A != (BIGNUM *)0x0) {
      pBVar3 = BN_dup(A);
      *(BIGNUM **)b = pBVar3;
      if (pBVar3 == (BIGNUM *)0x0) goto LAB_005aed98;
    }
    if (Ai != (BIGNUM *)0x0) {
      pBVar3 = BN_dup(Ai);
      *(BIGNUM **)(b + 8) = pBVar3;
      if (pBVar3 == (BIGNUM *)0x0) goto LAB_005aed98;
    }
    pBVar3 = BN_dup(mod);
    *(BIGNUM **)(b + 0x18) = pBVar3;
    if (pBVar3 == (BIGNUM *)0x0) {
LAB_005aed98:
      BN_BLINDING_free(b);
      return (BN_BLINDING *)0x0;
    }
    iVar1 = BN_get_flags(mod,4);
    if (iVar1 != 0) {
      BN_set_flags(*(undefined8 *)(b + 0x18),4);
    }
    *(undefined4 *)(b + 0x28) = 0xffffffff;
  }
  return b;
}

