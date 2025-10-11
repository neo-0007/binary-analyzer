
undefined8 ossl_x509_add_certs_new(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar2 = OPENSSL_sk_num(param_2);
  iVar4 = 1;
  if (0 < iVar2) {
    do {
      iVar1 = iVar4 + -1;
      if ((param_3 & 2) != 0) {
        iVar1 = iVar2 - iVar4;
      }
      uVar3 = OPENSSL_sk_value(param_2,iVar1);
      uVar3 = ossl_x509_add_cert_new(param_1,uVar3,param_3);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      bVar5 = iVar4 != iVar2;
      iVar4 = iVar4 + 1;
    } while (bVar5);
  }
  return 1;
}

