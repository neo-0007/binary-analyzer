
undefined8 ossl_x509_add_cert_new(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*param_1 == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      ERR_new(0,param_2,param_3);
      ERR_set_debug("../crypto/x509/x509_cmp.c",0xbb,"ossl_x509_add_cert_new");
      ERR_set_error(0xb,0xc0100,0);
      return 0;
    }
  }
  uVar1 = X509_add_cert();
  return uVar1;
}

