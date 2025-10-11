
int i2d_PKCS8PrivateKeyInfo_fp(FILE *fp,EVP_PKEY *key)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *p8inf;
  
  iVar1 = 0;
  p8inf = EVP_PKEY2PKCS8(key);
  if (p8inf != (PKCS8_PRIV_KEY_INFO *)0x0) {
    iVar1 = i2d_PKCS8_PRIV_KEY_INFO_fp(fp,p8inf);
    PKCS8_PRIV_KEY_INFO_free(p8inf);
  }
  return iVar1;
}

