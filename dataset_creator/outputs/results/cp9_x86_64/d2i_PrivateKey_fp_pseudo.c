
EVP_PKEY * d2i_PrivateKey_fp(FILE *fp,EVP_PKEY **a)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)ASN1_d2i_fp(EVP_PKEY_new,d2i_AutoPrivateKey,fp,a);
  return pEVar1;
}

