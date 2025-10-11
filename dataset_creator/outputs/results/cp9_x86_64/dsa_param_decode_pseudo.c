
bool dsa_param_decode(EVP_PKEY *param_1,uchar **param_2,int param_3)

{
  DSA *key;
  
  key = d2i_DSAparams((DSA **)0x0,param_2,(long)param_3);
  if (key != (DSA *)0x0) {
    key[1].priv_key = (BIGNUM *)((long)&(key[1].priv_key)->d + 1);
    EVP_PKEY_assign(param_1,0x74,key);
  }
  return key != (DSA *)0x0;
}

