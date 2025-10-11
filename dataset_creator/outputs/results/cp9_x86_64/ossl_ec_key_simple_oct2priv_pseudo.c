
bool ossl_ec_key_simple_oct2priv(long param_1,uchar *param_2,int param_3)

{
  BIGNUM *pBVar1;
  
  pBVar1 = *(BIGNUM **)(param_1 + 0x28);
  if (pBVar1 == (BIGNUM *)0x0) {
    pBVar1 = (BIGNUM *)BN_secure_new();
    *(BIGNUM **)(param_1 + 0x28) = pBVar1;
    if (pBVar1 == (BIGNUM *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_key.c",0x3b3,"ossl_ec_key_simple_oct2priv");
      ERR_set_error(0x10,0xc0100,0);
      return false;
    }
  }
  pBVar1 = BN_bin2bn(param_2,param_3,pBVar1);
  *(BIGNUM **)(param_1 + 0x28) = pBVar1;
  if (pBVar1 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_key.c",0x3b8,"ossl_ec_key_simple_oct2priv");
    ERR_set_error(0x10,0x80003,0);
  }
  else {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  }
  return pBVar1 != (BIGNUM *)0x0;
}

