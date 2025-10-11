
int ENGINE_load_ssl_client_cert
              (ENGINE *e,SSL *s,stack_st_X509_NAME *ca_dn,X509 **pcert,EVP_PKEY **ppkey,
              stack_st_X509 **pother,UI_METHOD *ui_method,void *callback_data)

{
  int iVar1;
  
  if (e == (ENGINE *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_pkey.c",0x79,"ENGINE_load_ssl_client_cert");
    ERR_set_error(0x26,0xc0102,0);
  }
  else {
    iVar1 = CRYPTO_THREAD_write_lock(global_engine_lock);
    if (iVar1 != 0) {
      if (*(int *)(e + 0xa0) == 0) {
        CRYPTO_THREAD_unlock(global_engine_lock);
        ERR_new();
        ERR_set_debug("../crypto/engine/eng_pkey.c",0x80,"ENGINE_load_ssl_client_cert");
        ERR_set_error(0x26,0x75,0);
      }
      else {
        CRYPTO_THREAD_unlock(global_engine_lock);
        if (*(code **)(e + 0x88) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050e2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar1 = (**(code **)(e + 0x88))(e,s,ca_dn,pcert,ppkey,pother);
          return iVar1;
        }
        ERR_new();
        ERR_set_debug("../crypto/engine/eng_pkey.c",0x85,"ENGINE_load_ssl_client_cert");
        ERR_set_error(0x26,0x7d,0);
      }
    }
  }
  return 0;
}

