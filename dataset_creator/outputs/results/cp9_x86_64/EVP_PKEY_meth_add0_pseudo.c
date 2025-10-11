
int EVP_PKEY_meth_add0(EVP_PKEY_METHOD *pmeth)

{
  int iVar1;
  
  if ((app_pkey_methods == 0) &&
     (app_pkey_methods = OPENSSL_sk_new(pmeth_cmp), app_pkey_methods == 0)) {
    ERR_new(0);
    ERR_set_debug("../crypto/evp/pmeth_lib.c",0x26a,"EVP_PKEY_meth_add0");
    ERR_set_error(6,0xc0100,0);
    return 0;
  }
  iVar1 = OPENSSL_sk_push(app_pkey_methods,pmeth);
  if (iVar1 != 0) {
    OPENSSL_sk_sort(app_pkey_methods);
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/pmeth_lib.c",0x26f,"EVP_PKEY_meth_add0");
  ERR_set_error(6,0xc0100,0);
  return 0;
}

