
undefined4 add_attribute(long *param_1,int param_2,int param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ASN1_OBJECT *o;
  X509_ATTRIBUTE *pXVar4;
  long lVar5;
  
  iVar2 = 0;
  lVar5 = *param_1;
  if (lVar5 == 0) {
    lVar5 = OPENSSL_sk_new_null();
    *param_1 = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
  }
  else {
    for (; iVar1 = OPENSSL_sk_num(lVar5), iVar2 < iVar1; iVar2 = iVar2 + 1) {
      pXVar4 = (X509_ATTRIBUTE *)OPENSSL_sk_value(*param_1,iVar2);
      o = X509_ATTRIBUTE_get0_object(pXVar4);
      iVar1 = OBJ_obj2nid(o);
      if (iVar1 == param_2) {
        X509_ATTRIBUTE_free(pXVar4);
        pXVar4 = X509_ATTRIBUTE_create(param_2,param_3,param_4);
        if (pXVar4 == (X509_ATTRIBUTE *)0x0) {
          return 0;
        }
        lVar5 = OPENSSL_sk_set(*param_1,iVar2,pXVar4);
        if (lVar5 == 0) {
          X509_ATTRIBUTE_free(pXVar4);
          return 0;
        }
        goto LAB_00547ca6;
      }
      lVar5 = *param_1;
    }
  }
  pXVar4 = X509_ATTRIBUTE_create(param_2,param_3,param_4);
  if (pXVar4 == (X509_ATTRIBUTE *)0x0) {
    return 0;
  }
  iVar2 = OPENSSL_sk_push(*param_1,pXVar4);
  if (iVar2 == 0) {
    X509_ATTRIBUTE_free(pXVar4);
    uVar3 = 0;
  }
  else {
LAB_00547ca6:
    uVar3 = 1;
  }
  return uVar3;
}

