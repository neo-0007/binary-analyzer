
void i2d_X509_PUBKEY_bio(BIO *param_1,uchar *param_2)

{
  ASN1_i2d_bio(i2d_X509_PUBKEY,param_1,param_2);
  return;
}

