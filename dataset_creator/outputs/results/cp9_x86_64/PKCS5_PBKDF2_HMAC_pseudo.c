
int PKCS5_PBKDF2_HMAC(char *pass,int passlen,uchar *salt,int saltlen,int iter,EVP_MD *digest,
                     int keylen,uchar *out)

{
  int iVar1;
  
  iVar1 = ossl_pkcs5_pbkdf2_hmac_ex();
  return iVar1;
}

