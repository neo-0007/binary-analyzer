
long OSSL_LIB_CTX_new_from_dispatch(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = OSSL_LIB_CTX_new();
  lVar3 = lVar2;
  if (lVar2 != 0) {
    iVar1 = ossl_bio_init_core(lVar2,param_2);
    if (iVar1 == 0) {
      lVar3 = 0;
      OSSL_LIB_CTX_free(lVar2);
    }
  }
  return lVar3;
}

