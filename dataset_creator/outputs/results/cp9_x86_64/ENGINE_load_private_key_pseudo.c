
EVP_PKEY * ENGINE_load_private_key(ENGINE *e,char *key_id,UI_METHOD *ui_method,void *callback_data)

{
  int iVar1;
  EVP_PKEY *pEVar2;
  
  if (e == (ENGINE *)0x0) {
    ERR_new();
    pEVar2 = (EVP_PKEY *)0x0;
    ERR_set_debug("../crypto/engine/eng_pkey.c",0x3e,"ENGINE_load_private_key");
    ERR_set_error(0x26,0xc0102,0);
  }
  else {
    iVar1 = CRYPTO_THREAD_write_lock(global_engine_lock);
    if (iVar1 == 0) {
      return (EVP_PKEY *)0x0;
    }
    if (*(int *)(e + 0xa0) == 0) {
      CRYPTO_THREAD_unlock(global_engine_lock);
      ERR_new();
      ERR_set_debug("../crypto/engine/eng_pkey.c",0x45,"ENGINE_load_private_key");
      ERR_set_error(0x26,0x75,0);
      return (EVP_PKEY *)0x0;
    }
    CRYPTO_THREAD_unlock(global_engine_lock);
    if (*(code **)(e + 0x78) == (code *)0x0) {
      ERR_new();
      pEVar2 = (EVP_PKEY *)0x0;
      ERR_set_debug("../crypto/engine/eng_pkey.c",0x4a,"ENGINE_load_private_key");
      ERR_set_error(0x26,0x7d,0);
    }
    else {
      pEVar2 = (EVP_PKEY *)(**(code **)(e + 0x78))(e,key_id,ui_method,callback_data);
      if (pEVar2 == (EVP_PKEY *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/engine/eng_pkey.c",0x4f,"ENGINE_load_private_key");
        ERR_set_error(0x26,0x80,0);
      }
    }
  }
  return pEVar2;
}

