
void drbg_ctr_free(long param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(undefined8 **)(param_1 + 0xf8), puVar1 != (undefined8 *)0x0)) {
    EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)*puVar1);
    EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)puVar1[1]);
    EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)puVar1[2]);
    EVP_CIPHER_free(puVar1[3]);
    EVP_CIPHER_free(puVar1[4]);
    CRYPTO_secure_clear_free(puVar1,0xb0,"../providers/implementations/rands/drbg_ctr.c",0x26e);
  }
  ossl_rand_drbg_free(param_1);
  return;
}

