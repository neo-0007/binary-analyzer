
void X509_STORE_free(X509_STORE *v)

{
  X509_STORE *pXVar1;
  stack_st_X509_LOOKUP *psVar2;
  int iVar3;
  X509_LOOKUP *ctx;
  int iVar4;
  
  if (v == (X509_STORE *)0x0) {
    return;
  }
  LOCK();
  pXVar1 = v + 1;
  iVar4 = pXVar1->cache;
  pXVar1->cache = pXVar1->cache + -1;
  UNLOCK();
  if ((iVar4 != 1) && (0 < iVar4 + -1)) {
    return;
  }
  psVar2 = v->get_cert_methods;
  iVar4 = 0;
  while( true ) {
    iVar3 = OPENSSL_sk_num(psVar2);
    if (iVar3 <= iVar4) break;
    ctx = (X509_LOOKUP *)OPENSSL_sk_value(psVar2,iVar4);
    X509_LOOKUP_shutdown(ctx);
    X509_LOOKUP_free(ctx);
    iVar4 = iVar4 + 1;
  }
  OPENSSL_sk_free(psVar2);
  OPENSSL_sk_pop_free(v->objs,X509_OBJECT_free);
  CRYPTO_free_ex_data(4,v,(CRYPTO_EX_DATA *)&(v->ex_data).dummy);
  X509_VERIFY_PARAM_free(v->param);
  CRYPTO_THREAD_lock_free(v[1].objs);
  CRYPTO_free(v);
  return;
}

