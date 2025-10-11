
undefined8 aes_gcm_cleanup(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  if (lVar1 != 0) {
    OPENSSL_cleanse((void *)(lVar1 + 0x100),0x1b8);
    uVar2 = 1;
    if (*(void **)(lVar1 + 0x2b8) != (void *)(param_1 + 0x28)) {
      CRYPTO_free(*(void **)(lVar1 + 0x2b8));
    }
  }
  return uVar2;
}

