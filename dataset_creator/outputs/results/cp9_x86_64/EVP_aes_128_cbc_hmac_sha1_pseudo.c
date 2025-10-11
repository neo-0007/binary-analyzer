
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_128_cbc_hmac_sha1(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_128_cbc_hmac_sha1_cipher;
  if ((DAT_0093e59c._3_1_ & 2) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return (EVP_CIPHER *)puVar1;
}

