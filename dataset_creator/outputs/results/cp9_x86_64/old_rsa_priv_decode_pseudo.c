
bool old_rsa_priv_decode(EVP_PKEY *param_1,uchar **param_2,int param_3)

{
  RSA *key;
  
  key = d2i_RSAPrivateKey((RSA **)0x0,param_2,(long)param_3);
  if (key != (RSA *)0x0) {
    EVP_PKEY_assign(param_1,**(int **)&param_1->references,key);
  }
  return key != (RSA *)0x0;
}

