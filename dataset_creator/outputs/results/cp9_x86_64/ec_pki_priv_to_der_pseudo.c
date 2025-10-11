
int ec_pki_priv_to_der(EC_KEY *param_1,uchar **param_2)

{
  uint flags;
  int iVar1;
  
  flags = EC_KEY_get_enc_flags(param_1);
  EC_KEY_set_enc_flags(param_1,flags | 1);
  iVar1 = i2d_ECPrivateKey(param_1,param_2);
  EC_KEY_set_enc_flags(param_1,flags);
  return iVar1;
}

