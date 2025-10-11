
undefined8 aes_ocb_cleanup(void)

{
  long lVar1;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  CRYPTO_ocb128_cleanup(lVar1 + 0x1f8);
  return 1;
}

