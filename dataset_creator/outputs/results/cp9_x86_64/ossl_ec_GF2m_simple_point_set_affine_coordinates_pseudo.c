
undefined8
ossl_ec_GF2m_simple_point_set_affine_coordinates
          (undefined8 param_1,long param_2,BIGNUM *param_3,BIGNUM *param_4)

{
  BIGNUM *pBVar1;
  
  if ((param_3 != (BIGNUM *)0x0) && (param_4 != (BIGNUM *)0x0)) {
    pBVar1 = BN_copy(*(BIGNUM **)(param_2 + 0x10),param_3);
    if (pBVar1 != (BIGNUM *)0x0) {
      BN_set_negative(*(BIGNUM **)(param_2 + 0x10),0);
      pBVar1 = BN_copy(*(BIGNUM **)(param_2 + 0x18),param_4);
      if (pBVar1 != (BIGNUM *)0x0) {
        BN_set_negative(*(BIGNUM **)(param_2 + 0x18),0);
        pBVar1 = BN_value_one();
        pBVar1 = BN_copy(*(BIGNUM **)(param_2 + 0x20),pBVar1);
        if (pBVar1 != (BIGNUM *)0x0) {
          BN_set_negative(*(BIGNUM **)(param_2 + 0x20),0);
          *(undefined4 *)(param_2 + 0x28) = 1;
          return 1;
        }
      }
    }
    return 0;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec2_smpl.c",0x128,"ossl_ec_GF2m_simple_point_set_affine_coordinates");
  ERR_set_error(0x10,0xc0102,0);
  return 0;
}

