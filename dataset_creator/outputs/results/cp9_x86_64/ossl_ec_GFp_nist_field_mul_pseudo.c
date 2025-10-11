
uint ossl_ec_GFp_nist_field_mul
               (long param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  uint uVar1;
  int iVar2;
  BN_CTX *c;
  BN_CTX *pBVar3;
  
  if ((((param_1 == 0) || (param_2 == (BIGNUM *)0x0)) || (param_3 == (BIGNUM *)0x0)) ||
     (param_4 == (BIGNUM *)0x0)) {
    ERR_new();
    c = (BN_CTX *)0x0;
    uVar1 = 0;
    ERR_set_debug("../crypto/ec/ecp_nist.c",0x87,"ossl_ec_GFp_nist_field_mul");
    ERR_set_error(0x10,0xc0102,0);
  }
  else {
    c = (BN_CTX *)0x0;
    pBVar3 = c;
    if ((param_5 == (BN_CTX *)0x0) &&
       (param_5 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8)), pBVar3 = param_5,
       param_5 == (BN_CTX *)0x0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = BN_mul(param_2,param_3,param_4,param_5);
      c = pBVar3;
      if (uVar1 != 0) {
        iVar2 = (**(code **)(param_1 + 0x88))
                          (param_2,param_2,*(undefined8 *)(param_1 + 0x40),param_5);
        uVar1 = (uint)(iVar2 != 0);
      }
    }
  }
  BN_CTX_free(c);
  return uVar1;
}

