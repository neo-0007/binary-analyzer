
void evp_app_cleanup_int(void)

{
  if (app_pkey_methods != 0) {
    OPENSSL_sk_pop_free(app_pkey_methods,EVP_PKEY_meth_free);
    return;
  }
  return;
}

