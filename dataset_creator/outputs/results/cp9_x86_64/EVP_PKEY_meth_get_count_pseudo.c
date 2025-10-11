
long EVP_PKEY_meth_get_count(void)

{
  int iVar1;
  
  if (app_pkey_methods != 0) {
    iVar1 = OPENSSL_sk_num();
    return (long)iVar1 + 10;
  }
  return 10;
}

