
undefined8 X509_add_certs(long param_1)

{
  undefined8 uVar1;
  long local_10 [2];
  
  local_10[0] = param_1;
  if (param_1 != 0) {
    uVar1 = ossl_x509_add_certs_new(local_10);
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/x509_cmp.c",0xe7,"X509_add_certs");
  ERR_set_error(0xb,0xc0102,0);
  return 0;
}

