
long x509_ext_d2i_SCT_LIST(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar2 = d2i_SCT_LIST();
  if (lVar2 != 0) {
    for (; iVar1 = OPENSSL_sk_num(lVar2), iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = OPENSSL_sk_value(lVar2,iVar4);
      iVar1 = SCT_set_source(uVar3,2);
      if (iVar1 != 1) {
        SCT_LIST_free(lVar2);
        *param_1 = 0;
        return 0;
      }
    }
  }
  return lVar2;
}

