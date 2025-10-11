
bool old_ec_priv_decode(EVP_PKEY *param_1,uchar **param_2,int param_3)

{
  EC_KEY *key;
  
  key = d2i_ECPrivateKey((EC_KEY **)0x0,param_2,(long)param_3);
  if (key != (EC_KEY *)0x0) {
    EVP_PKEY_assign(param_1,0x198,key);
  }
  return key != (EC_KEY *)0x0;
}

