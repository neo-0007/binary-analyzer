
bool EVP_PKEY_meth_remove(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = OPENSSL_sk_delete_ptr(app_pkey_methods,param_1);
  return lVar1 != 0;
}

