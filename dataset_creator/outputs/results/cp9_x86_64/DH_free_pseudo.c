
void DH_free(DH *dh)

{
  DH *pDVar1;
  int iVar2;
  code *pcVar3;
  
  if (dh == (DH *)0x0) {
    return;
  }
  LOCK();
  pDVar1 = dh + 1;
  iVar2 = pDVar1->pad;
  pDVar1->pad = pDVar1->pad + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  if ((dh[1].priv_key != (BIGNUM *)0x0) &&
     (pcVar3 = *(code **)&dh[1].priv_key[1].neg, pcVar3 != (code *)0x0)) {
    (*pcVar3)(dh);
  }
  ENGINE_finish((ENGINE *)dh[1].length);
  CRYPTO_free_ex_data(6,dh,(CRYPTO_EX_DATA *)&dh[1].p);
  CRYPTO_THREAD_lock_free(*(undefined8 *)&dh[1].flags);
  ossl_ffc_params_cleanup(&dh->p);
  BN_clear_free((BIGNUM *)(dh->ex_data).sk);
  BN_clear_free(*(BIGNUM **)&(dh->ex_data).dummy);
  CRYPTO_free(dh);
  return;
}

