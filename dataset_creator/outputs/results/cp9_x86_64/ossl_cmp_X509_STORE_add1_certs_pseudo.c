
undefined4 ossl_cmp_X509_STORE_add1_certs(X509_STORE *param_1,long param_2,int param_3)

{
  int iVar1;
  X509 *x;
  int iVar2;
  
  if (param_1 == (X509_STORE *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/cmp/cmp_util.c",0xd0,"ossl_cmp_X509_STORE_add1_certs");
    ERR_set_error(0x3a,0x67,0);
    return 0;
  }
  iVar2 = 0;
  if (param_2 != 0) {
    for (; iVar1 = OPENSSL_sk_num(param_2), iVar2 < iVar1; iVar2 = iVar2 + 1) {
      x = (X509 *)OPENSSL_sk_value(param_2,iVar2);
      if (((param_3 == 0) || (iVar1 = X509_self_signed(x,0), iVar1 == 1)) &&
         (iVar1 = X509_STORE_add_cert(param_1,x), iVar1 == 0)) {
        return 0;
      }
    }
  }
  return 1;
}

