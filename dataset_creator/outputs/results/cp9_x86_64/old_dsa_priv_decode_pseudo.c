
undefined8 old_dsa_priv_decode(EVP_PKEY *param_1,uchar **param_2,int param_3)

{
  DSA *key;
  
  key = d2i_DSAPrivateKey((DSA **)0x0,param_2,(long)param_3);
  if (key != (DSA *)0x0) {
    key[1].priv_key = (BIGNUM *)((long)&(key[1].priv_key)->d + 1);
    EVP_PKEY_assign(param_1,0x74,key);
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/dsa/dsa_ameth.c",0x167,"old_dsa_priv_decode");
  ERR_set_error(10,0x8000a,0);
  return 0;
}

