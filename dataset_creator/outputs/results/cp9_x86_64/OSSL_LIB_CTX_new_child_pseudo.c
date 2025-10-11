
long OSSL_LIB_CTX_new_child(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = OSSL_LIB_CTX_new_from_dispatch();
  lVar3 = lVar2;
  if (lVar2 != 0) {
    iVar1 = ossl_provider_init_as_child(lVar2,param_1,param_2);
    if (iVar1 == 0) {
      lVar3 = 0;
      OSSL_LIB_CTX_free(lVar2);
    }
    else {
      *(byte *)(lVar2 + 0x1c0) = *(byte *)(lVar2 + 0x1c0) | 1;
    }
  }
  return lVar3;
}

