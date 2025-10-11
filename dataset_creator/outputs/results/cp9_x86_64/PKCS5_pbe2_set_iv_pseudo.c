
X509_ALGOR *
PKCS5_pbe2_set_iv(EVP_CIPHER *cipher,int iter,uchar *salt,int saltlen,uchar *aiv,int prf_nid)

{
  X509_ALGOR *pXVar1;
  
  pXVar1 = (X509_ALGOR *)PKCS5_pbe2_set_iv_ex();
  return pXVar1;
}

