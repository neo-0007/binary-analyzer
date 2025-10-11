
int i2b_PrivateKey_bio(BIO *out,EVP_PKEY *pk)

{
  int iVar1;
  
  iVar1 = do_i2b_bio(out,pk,0);
  return iVar1;
}

