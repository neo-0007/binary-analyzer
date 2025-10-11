
void X509_VERIFY_PARAM_free(X509_VERIFY_PARAM *param)

{
  if (param != (X509_VERIFY_PARAM *)0x0) {
    OPENSSL_sk_pop_free(param->policies,ASN1_OBJECT_free);
    OPENSSL_sk_pop_free(param[1].name,str_free);
    CRYPTO_free((void *)param[1].inh_flags);
    CRYPTO_free((void *)param[1].flags);
    CRYPTO_free(*(void **)&param[1].depth);
    CRYPTO_free(param);
    return;
  }
  return;
}

