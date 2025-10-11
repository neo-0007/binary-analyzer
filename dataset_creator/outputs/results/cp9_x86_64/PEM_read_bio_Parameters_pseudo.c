
EVP_PKEY * PEM_read_bio_Parameters(BIO *bp,EVP_PKEY **x)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)PEM_read_bio_Parameters_ex(bp,x,0,0);
  return pEVar1;
}

