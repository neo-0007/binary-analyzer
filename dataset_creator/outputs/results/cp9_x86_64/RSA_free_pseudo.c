
void RSA_free(RSA *r)

{
  BN_BLINDING **ppBVar1;
  int iVar2;
  code *pcVar3;
  
  if (r == (RSA *)0x0) {
    return;
  }
  LOCK();
  ppBVar1 = &r->mt_blinding;
  iVar2 = *(int *)ppBVar1;
  *(int *)ppBVar1 = *(int *)ppBVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  if ((r->engine != (ENGINE *)0x0) && (pcVar3 = *(code **)(r->engine + 0x40), pcVar3 != (code *)0x0)
     ) {
    (*pcVar3)(r);
  }
  ENGINE_finish((ENGINE *)r->n);
  CRYPTO_free_ex_data(9,r,(CRYPTO_EX_DATA *)&r->bignum_data);
  CRYPTO_THREAD_lock_free(r[1].e);
  BN_free(r->e);
  BN_free(r->d);
  BN_clear_free(r->p);
  BN_clear_free(r->q);
  BN_clear_free(r->dmp1);
  BN_clear_free(r->dmq1);
  BN_clear_free(r->iqmp);
  BN_clear_free((BIGNUM *)(r->ex_data).sk);
  RSA_PSS_PARAMS_free((RSA_PSS_PARAMS *)r->_method_mod_p);
  OPENSSL_sk_pop_free(r->_method_mod_q,ossl_rsa_multip_info_free);
  BN_BLINDING_free((BN_BLINDING *)r[1].engine);
  BN_BLINDING_free((BN_BLINDING *)r[1].n);
  CRYPTO_free(r);
  return;
}

