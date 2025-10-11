
long X509_STORE_CTX_get_obj_by_subject(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = X509_OBJECT_new();
  lVar3 = lVar2;
  if (lVar2 != 0) {
    iVar1 = X509_STORE_CTX_get_by_subject(param_1,param_2,param_3,lVar2);
    if (iVar1 == 0) {
      lVar3 = 0;
      X509_OBJECT_free(lVar2);
    }
  }
  return lVar3;
}

