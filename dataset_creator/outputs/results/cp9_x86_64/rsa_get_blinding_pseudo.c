
BIGNUM * rsa_get_blinding(RSA *param_1,undefined4 *param_2,BN_CTX *param_3)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  iVar1 = CRYPTO_THREAD_write_lock(param_1[1].e);
  if (iVar1 == 0) {
    return (BIGNUM *)0x0;
  }
  pBVar2 = (BIGNUM *)param_1[1].engine;
  if (pBVar2 == (BIGNUM *)0x0) {
    pBVar2 = (BIGNUM *)RSA_setup_blinding(param_1,param_3);
    param_1[1].engine = (ENGINE *)pBVar2;
    if (pBVar2 == (BIGNUM *)0x0) goto LAB_0055a25e;
  }
  iVar1 = BN_BLINDING_is_current_thread(pBVar2);
  if (iVar1 == 0) {
    pBVar2 = param_1[1].n;
    *param_2 = 0;
    if (pBVar2 == (BIGNUM *)0x0) {
      pBVar2 = (BIGNUM *)RSA_setup_blinding(param_1,param_3);
      param_1[1].n = pBVar2;
    }
  }
  else {
    *param_2 = 1;
  }
LAB_0055a25e:
  CRYPTO_THREAD_unlock(param_1[1].e);
  return pBVar2;
}

