
bool ossl_cipher_capable_aes_cbc_hmac_sha256(void)

{
  int iVar1;
  
  if ((DAT_0093e59c._3_1_ & 2) == 0) {
    return false;
  }
  iVar1 = aesni_cbc_sha256_enc(0,0,0,0,0,0,0);
  return iVar1 != 0;
}

