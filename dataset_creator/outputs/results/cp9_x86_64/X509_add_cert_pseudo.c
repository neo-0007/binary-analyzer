
bool X509_add_cert(long param_1,X509 *param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  X509 *a;
  bool bVar3;
  
  if (param_1 == 0) {
    ERR_new();
    bVar3 = false;
    ERR_set_debug("../crypto/x509/x509_cmp.c",0xc4,"X509_add_cert");
    ERR_set_error(0xb,0xc0102,0);
  }
  else {
    if ((param_3 & 4) != 0) {
      for (iVar2 = 0; iVar1 = OPENSSL_sk_num(param_1), iVar2 < iVar1; iVar2 = iVar2 + 1) {
        a = (X509 *)OPENSSL_sk_value(param_1,iVar2);
        iVar1 = X509_cmp(a,param_2);
        if (iVar1 == 0) goto LAB_0058b764;
      }
    }
    if (((param_3 & 8) != 0) && (iVar2 = X509_self_signed(param_2,0), iVar2 != 0)) {
      return 0 < iVar2;
    }
    iVar2 = OPENSSL_sk_insert(param_1,param_2,-(uint)((param_3 & 2) == 0));
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/x509_cmp.c",0xdb,"X509_add_cert");
      ERR_set_error(0xb,0xc0100,0);
      return false;
    }
    if ((param_3 & 1) != 0) {
      X509_up_ref(param_2);
      return (bool)(param_3 & 1);
    }
LAB_0058b764:
    bVar3 = true;
  }
  return bVar3;
}

