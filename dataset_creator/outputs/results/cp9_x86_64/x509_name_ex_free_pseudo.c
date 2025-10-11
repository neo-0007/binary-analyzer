
void x509_name_ex_free(undefined8 *param_1)

{
  undefined8 *ptr;
  
  if (param_1 != (undefined8 *)0x0) {
    ptr = (undefined8 *)*param_1;
    if (ptr != (undefined8 *)0x0) {
      BUF_MEM_free((BUF_MEM *)ptr[2]);
      OPENSSL_sk_pop_free(*ptr,X509_NAME_ENTRY_free);
      CRYPTO_free((void *)ptr[3]);
      CRYPTO_free(ptr);
      *param_1 = 0;
    }
    return;
  }
  return;
}

