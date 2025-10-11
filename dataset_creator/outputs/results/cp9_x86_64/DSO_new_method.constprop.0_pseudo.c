
DSO * DSO_new_method_constprop_0(void)

{
  DSO_MERGER_FUNC pDVar1;
  DSO *dso;
  stack_st_void *psVar2;
  DSO_METHOD *pDVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  
  pcVar4 = "../crypto/dso/dso_lib.c";
  dso = (DSO *)CRYPTO_zalloc(0x50,"../crypto/dso/dso_lib.c",0x11);
  if (dso == (DSO *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/dso/dso_lib.c",0x13,"DSO_new_method");
    ERR_set_error(0x25,0xc0100,0);
  }
  else {
    psVar2 = (stack_st_void *)OPENSSL_sk_new_null();
    dso->meth_data = psVar2;
    if (psVar2 == (stack_st_void *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/dso/dso_lib.c",0x19,"DSO_new_method");
      ERR_set_error(0x25,0xc0100,0);
      CRYPTO_free(dso);
      dso = (DSO *)0x0;
    }
    else {
      pDVar3 = DSO_METHOD_openssl();
      dso->meth = pDVar3;
      LOCK();
      dso->references = 1;
      UNLOCK();
      auVar5 = CRYPTO_THREAD_lock_new();
      dso[1].meth = auVar5._0_8_;
      if (auVar5._0_8_ == (DSO_METHOD *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/dso/dso_lib.c",0x21,"DSO_new_method");
        ERR_set_error(0x25,0xc0100,0);
        OPENSSL_sk_free(dso->meth_data);
        CRYPTO_free(dso);
        dso = (DSO *)0x0;
      }
      else {
        pDVar1 = dso->meth->dso_merger;
        if (pDVar1 != (DSO_MERGER_FUNC)0x0) {
          pcVar4 = (*pDVar1)(dso,pcVar4,auVar5._8_8_);
          if ((int)pcVar4 == 0) {
            DSO_free(dso);
            dso = (DSO *)0x0;
          }
        }
      }
    }
  }
  return dso;
}

