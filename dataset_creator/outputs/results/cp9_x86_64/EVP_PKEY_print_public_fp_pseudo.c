
int EVP_PKEY_print_public_fp(FILE *param_1,EVP_PKEY *param_2,int param_3,ASN1_PCTX *param_4)

{
  int iVar1;
  BIO *out;
  
  iVar1 = 0;
  out = BIO_new_fp(param_1,0);
  if (out != (BIO *)0x0) {
    iVar1 = EVP_PKEY_print_public(out,param_2,param_3,param_4);
    BIO_free(out);
  }
  return iVar1;
}

