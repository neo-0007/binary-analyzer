
undefined8 aria_gcm_cleanup(long param_1)

{
  long lVar1;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(void **)(lVar1 + 0x2d8) != (void *)(param_1 + 0x28)) {
    CRYPTO_free(*(void **)(lVar1 + 0x2d8));
  }
  return 1;
}

