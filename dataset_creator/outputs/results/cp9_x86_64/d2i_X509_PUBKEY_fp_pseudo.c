
void d2i_X509_PUBKEY_fp(FILE *param_1,void **param_2)

{
  ASN1_d2i_fp(X509_PUBKEY_new,d2i_X509_PUBKEY,param_1,param_2);
  return;
}

