
int ossl_ec_GFp_mont_group_set_curve
              (long param_1,BIGNUM *param_2,undefined8 param_3,undefined8 param_4,BN_CTX *param_5)

{
  int iVar1;
  BN_MONT_CTX *mont;
  BIGNUM *a;
  BIGNUM *pBVar2;
  BN_CTX *c;
  
  c = (BN_CTX *)0x0;
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_free(*(BIGNUM **)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (param_5 == (BN_CTX *)0x0) {
    c = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8));
    if (c == (BN_CTX *)0x0) {
      return 0;
    }
    mont = BN_MONT_CTX_new();
    param_5 = c;
  }
  else {
    mont = BN_MONT_CTX_new();
  }
  if (mont == (BN_MONT_CTX *)0x0) {
    a = (BIGNUM *)0x0;
    iVar1 = 0;
  }
  else {
    iVar1 = BN_MONT_CTX_set(mont,param_2,param_5);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ecp_mont.c",0xa6,"ossl_ec_GFp_mont_group_set_curve");
      ERR_set_error(0x10,0x80003,0);
      a = (BIGNUM *)0x0;
      iVar1 = 0;
    }
    else {
      a = BN_new();
      iVar1 = 0;
      if (a != (BIGNUM *)0x0) {
        pBVar2 = BN_value_one();
        iVar1 = BN_to_montgomery(a,pBVar2,mont,param_5);
        if (iVar1 != 0) {
          *(BN_MONT_CTX **)(param_1 + 0x78) = mont;
          *(BIGNUM **)(param_1 + 0x80) = a;
          mont = (BN_MONT_CTX *)0x0;
          iVar1 = ossl_ec_GFp_simple_group_set_curve(param_1,param_2,param_3,param_4,param_5);
          a = (BIGNUM *)0x0;
          if (iVar1 == 0) {
            BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x78));
            *(undefined8 *)(param_1 + 0x78) = 0;
            BN_free(*(BIGNUM **)(param_1 + 0x80));
            a = (BIGNUM *)0x0;
            *(undefined8 *)(param_1 + 0x80) = 0;
          }
        }
      }
    }
  }
  BN_free(a);
  BN_CTX_free(c);
  BN_MONT_CTX_free(mont);
  return iVar1;
}

