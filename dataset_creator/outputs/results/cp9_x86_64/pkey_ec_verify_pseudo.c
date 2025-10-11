
void pkey_ec_verify(long param_1,uchar *param_2,int param_3,uchar *param_4,int param_5)

{
  long lVar1;
  EC_KEY *eckey;
  int type;
  
  lVar1 = *(long *)(param_1 + 0x98);
  eckey = (EC_KEY *)EVP_PKEY_get0_EC_KEY(*(undefined8 *)(param_1 + 0x88));
  lVar1 = *(long *)(lVar1 + 8);
  type = 0x40;
  if (lVar1 != 0) {
    type = EVP_MD_get_type(lVar1);
  }
  ECDSA_verify(type,param_4,param_5,param_2,param_3,eckey);
  return;
}

