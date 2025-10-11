
int i2b_PublicKey_bio(BIO *out,EVP_PKEY *pk)

{
  int iVar1;
  
  iVar1 = do_i2b_bio(out,pk,1);
  return iVar1;
}

