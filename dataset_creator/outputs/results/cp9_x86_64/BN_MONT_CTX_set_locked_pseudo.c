
BN_MONT_CTX * BN_MONT_CTX_set_locked(BN_MONT_CTX **pmont,int lock,BIGNUM *mod,BN_CTX *ctx)

{
  int iVar1;
  BN_MONT_CTX *pBVar2;
  undefined4 in_register_00000034;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(in_register_00000034,lock);
  iVar1 = CRYPTO_THREAD_read_lock(uVar3);
  if (iVar1 != 0) {
    pBVar2 = *pmont;
    CRYPTO_THREAD_unlock(uVar3);
    if (pBVar2 != (BN_MONT_CTX *)0x0) {
      return pBVar2;
    }
    pBVar2 = BN_MONT_CTX_new();
    if (pBVar2 != (BN_MONT_CTX *)0x0) {
      iVar1 = BN_MONT_CTX_set(pBVar2,mod,ctx);
      if ((iVar1 != 0) && (iVar1 = CRYPTO_THREAD_write_lock(uVar3), iVar1 != 0)) {
        if (*pmont == (BN_MONT_CTX *)0x0) {
          *pmont = pBVar2;
        }
        else {
          BN_MONT_CTX_free(pBVar2);
          pBVar2 = *pmont;
        }
        CRYPTO_THREAD_unlock(uVar3);
        return pBVar2;
      }
      BN_MONT_CTX_free(pBVar2);
      return (BN_MONT_CTX *)0x0;
    }
  }
  return (BN_MONT_CTX *)0x0;
}

