
X509_ALGOR * PKCS5_pbkdf2_set(int iter,uchar *salt,int saltlen,int prf_nid,int keylen)

{
  X509_ALGOR *pXVar1;
  
  pXVar1 = (X509_ALGOR *)PKCS5_pbkdf2_set_ex();
  return pXVar1;
}

