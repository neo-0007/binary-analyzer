
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_256_ecb(void)

{
  return (EVP_CIPHER *)camellia_256_ecb;
}

