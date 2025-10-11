
X509_SIG *
PKCS8_encrypt(int pbe_nid,EVP_CIPHER *cipher,char *pass,int passlen,uchar *salt,int saltlen,int iter
             ,PKCS8_PRIV_KEY_INFO *p8)

{
  X509_SIG *pXVar1;
  
  pXVar1 = (X509_SIG *)PKCS8_encrypt_ex();
  return pXVar1;
}

