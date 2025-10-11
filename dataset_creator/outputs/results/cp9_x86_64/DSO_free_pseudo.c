
int DSO_free(DSO *dso)

{
  int *piVar1;
  int iVar2;
  DSO_METHOD *pDVar3;
  
  if (dso != (DSO *)0x0) {
    LOCK();
    piVar1 = &dso->references;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) || (iVar2 + -1 < 1)) {
      pDVar3 = dso->meth;
      if (((dso->flags & 4) == 0) && (pDVar3->dso_unload != (_func_3875 *)0x0)) {
        iVar2 = (*pDVar3->dso_unload)(dso);
        if (iVar2 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/dso/dso_lib.c",0x45,"DSO_free");
          ERR_set_error(0x25,0x6b,0);
          return 0;
        }
        pDVar3 = dso->meth;
      }
      if ((pDVar3->init != (_func_3879 *)0x0) && (iVar2 = (*pDVar3->init)(dso), iVar2 == 0)) {
        ERR_new();
        ERR_set_debug("../crypto/dso/dso_lib.c",0x4b,"DSO_free");
        ERR_set_error(0x25,0x66,0);
        return 0;
      }
      OPENSSL_sk_free(dso->meth_data);
      CRYPTO_free(dso->filename);
      CRYPTO_free(dso->loaded_filename);
      CRYPTO_THREAD_lock_free(dso[1].meth);
      CRYPTO_free(dso);
    }
  }
  return 1;
}

