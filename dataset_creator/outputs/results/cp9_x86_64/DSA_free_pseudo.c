
void DSA_free(DSA *r)

{
  DSA *pDVar1;
  int iVar2;
  code *pcVar3;
  
  if (r == (DSA *)0x0) {
    return;
  }
  LOCK();
  pDVar1 = r + 1;
  iVar2 = pDVar1->pad;
  pDVar1->pad = pDVar1->pad + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  if ((r[1].p != (BIGNUM *)0x0) && (pcVar3 = *(code **)&r[1].p[2].top, pcVar3 != (code *)0x0)) {
    (*pcVar3)(r);
  }
  ENGINE_finish((ENGINE *)r[1].q);
  CRYPTO_free_ex_data(7,r,(CRYPTO_EX_DATA *)&r[1].version);
  CRYPTO_THREAD_lock_free(r[1].g);
  ossl_ffc_params_cleanup(&r->version);
  BN_clear_free((BIGNUM *)(r->ex_data).sk);
  BN_clear_free(*(BIGNUM **)&(r->ex_data).dummy);
  CRYPTO_free(r);
  return;
}

