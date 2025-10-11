
undefined8 enc_new(undefined8 param_1)

{
  void *ptr;
  EVP_CIPHER_CTX *pEVar1;
  
  ptr = (void *)CRYPTO_zalloc(0x1150,"../crypto/evp/bio_enc.c",0x44);
  if (ptr == (void *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/bio_enc.c",0x45,"enc_new");
    ERR_set_error(6,0xc0100,0);
    return 0;
  }
  pEVar1 = EVP_CIPHER_CTX_new();
  *(EVP_CIPHER_CTX **)((long)ptr + 0x18) = pEVar1;
  if (pEVar1 != (EVP_CIPHER_CTX *)0x0) {
    *(undefined4 *)((long)ptr + 8) = 1;
    *(long *)((long)ptr + 0x20) = (long)ptr + 0x150;
    *(long *)((long)ptr + 0x28) = (long)ptr + 0x150;
    *(undefined4 *)((long)ptr + 0x10) = 1;
    BIO_set_data(param_1,ptr);
    BIO_set_init(param_1,1);
    return 1;
  }
  CRYPTO_free(ptr);
  return 0;
}

