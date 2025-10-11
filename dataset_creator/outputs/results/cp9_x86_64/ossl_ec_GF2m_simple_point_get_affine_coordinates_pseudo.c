
bool ossl_ec_GF2m_simple_point_get_affine_coordinates
               (EC_GROUP *param_1,EC_POINT *param_2,BIGNUM *param_3,BIGNUM *param_4)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  iVar1 = EC_POINT_is_at_infinity(param_1,param_2);
  if (iVar1 != 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec2_smpl.c",0x148,"ossl_ec_GF2m_simple_point_get_affine_coordinates"
                 );
    ERR_set_error(0x10,0x6a,0);
    return false;
  }
  pBVar2 = BN_value_one();
  iVar1 = BN_cmp(*(BIGNUM **)(param_2 + 0x20),pBVar2);
  if (iVar1 != 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec2_smpl.c",0x14d,"ossl_ec_GF2m_simple_point_get_affine_coordinates"
                 );
    ERR_set_error(0x10,0xc0101,0);
    return false;
  }
  if (param_3 != (BIGNUM *)0x0) {
    pBVar2 = BN_copy(param_3,*(BIGNUM **)(param_2 + 0x10));
    if (pBVar2 == (BIGNUM *)0x0) {
      return false;
    }
    BN_set_negative(param_3,0);
  }
  if (param_4 != (BIGNUM *)0x0) {
    pBVar2 = BN_copy(param_4,*(BIGNUM **)(param_2 + 0x18));
    if (pBVar2 != (BIGNUM *)0x0) {
      BN_set_negative(param_4,0);
    }
    return pBVar2 != (BIGNUM *)0x0;
  }
  return true;
}

