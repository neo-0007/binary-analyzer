
void drbg_hmac_free(long param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(undefined8 **)(param_1 + 0xf8), puVar1 != (undefined8 *)0x0)) {
    EVP_MAC_CTX_free(*puVar1);
    ossl_prov_digest_reset(puVar1 + 1);
    CRYPTO_secure_clear_free(puVar1,0xa8,"../providers/implementations/rands/drbg_hmac.c",0x138);
  }
  ossl_rand_drbg_free(param_1);
  return;
}

