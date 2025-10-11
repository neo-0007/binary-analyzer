
void x509_pubkey_ex_free(undefined8 *param_1)

{
  undefined8 *ptr;
  
  if (param_1 != (undefined8 *)0x0) {
    ptr = (undefined8 *)*param_1;
    if (ptr != (undefined8 *)0x0) {
      X509_ALGOR_free((X509_ALGOR *)*ptr);
      ASN1_BIT_STRING_free((ASN1_STRING *)ptr[1]);
      EVP_PKEY_free((EVP_PKEY *)ptr[2]);
      CRYPTO_free((void *)ptr[4]);
      CRYPTO_free(ptr);
      *param_1 = 0;
    }
    return;
  }
  return;
}

