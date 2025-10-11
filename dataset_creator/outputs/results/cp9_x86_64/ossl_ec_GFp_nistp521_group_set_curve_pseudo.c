
undefined4
ossl_ec_GFp_nistp521_group_set_curve
          (long param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  int iVar1;
  undefined4 uVar2;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *ret_01;
  BN_CTX *c;
  
  c = (BN_CTX *)0x0;
  if ((param_5 == (BN_CTX *)0x0) && (c = BN_CTX_new(), param_5 = c, c == (BN_CTX *)0x0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  ret = BN_CTX_get(param_5);
  ret_00 = BN_CTX_get(param_5);
  ret_01 = BN_CTX_get(param_5);
  uVar2 = 0;
  if (ret_01 != (BIGNUM *)0x0) {
    BN_bin2bn(&nistp521_curve_params,0x42,ret);
    BN_bin2bn(&DAT_007f68e2,0x42,ret_00);
    BN_bin2bn("",0x42,ret_01);
    iVar1 = BN_cmp(ret,param_2);
    if (((iVar1 == 0) && (iVar1 = BN_cmp(ret_00,param_3), iVar1 == 0)) &&
       (iVar1 = BN_cmp(ret_01,param_4), iVar1 == 0)) {
      *(code **)(param_1 + 0x88) = BN_nist_mod_521;
      uVar2 = ossl_ec_GFp_simple_group_set_curve(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/ec/ecp_nistp521.c",0x720,"ossl_ec_GFp_nistp521_group_set_curve");
      ERR_set_error(0x10,0x91,0);
      uVar2 = 0;
    }
  }
  BN_CTX_end(param_5);
  BN_CTX_free(c);
  return uVar2;
}

