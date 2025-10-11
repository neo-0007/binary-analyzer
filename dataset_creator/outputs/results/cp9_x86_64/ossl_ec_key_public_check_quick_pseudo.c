
undefined4 ossl_ec_key_public_check_quick(long param_1,BN_CTX *param_2)

{
  int iVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  
  if (((param_1 == 0) || (*(EC_GROUP **)(param_1 + 0x18) == (EC_GROUP *)0x0)) ||
     (*(EC_POINT **)(param_1 + 0x20) == (EC_POINT *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_key.c",0x1bc,"ossl_ec_key_public_check_quick");
    ERR_set_error(0x10,0xc0102,0);
    return 0;
  }
  iVar1 = EC_POINT_is_at_infinity(*(EC_GROUP **)(param_1 + 0x18),*(EC_POINT **)(param_1 + 0x20));
  if (iVar1 != 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_key.c",0x1c2,"ossl_ec_key_public_check_quick");
    ERR_set_error(0x10,0x6a,0);
    return 0;
  }
  BN_CTX_start(param_2);
  a = BN_CTX_get(param_2);
  a_00 = BN_CTX_get(param_2);
  if ((a_00 != (BIGNUM *)0x0) &&
     (iVar1 = EC_POINT_get_affine_coordinates
                        (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),a,a_00,
                         param_2), iVar1 != 0)) {
    iVar1 = EC_GROUP_get_field_type(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 0x196) {
      iVar1 = BN_is_negative(a);
      if (((iVar1 == 0) &&
          (iVar1 = BN_cmp(a,*(BIGNUM **)(*(long *)(param_1 + 0x18) + 0x40)), iVar1 < 0)) &&
         ((iVar1 = BN_is_negative(a_00), iVar1 == 0 &&
          (iVar1 = BN_cmp(a_00,*(BIGNUM **)(*(long *)(param_1 + 0x18) + 0x40)), iVar1 < 0))))
      goto LAB_004e155e;
    }
    else {
      iVar1 = EC_GROUP_get_degree(*(EC_GROUP **)(param_1 + 0x18));
      iVar2 = BN_num_bits(a);
      if ((iVar2 <= iVar1) && (iVar2 = BN_num_bits(a_00), iVar2 <= iVar1)) {
LAB_004e155e:
        BN_CTX_end(param_2);
        iVar1 = EC_POINT_is_on_curve
                          (*(EC_GROUP **)(param_1 + 0x18),*(EC_POINT **)(param_1 + 0x20),param_2);
        if (0 < iVar1) {
          return 1;
        }
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_key.c",0x1ce,"ossl_ec_key_public_check_quick");
        ERR_set_error(0x10,0x6b,0);
        return 0;
      }
    }
  }
  BN_CTX_end(param_2);
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_key.c",0x1c8,"ossl_ec_key_public_check_quick");
  ERR_set_error(0x10,0x92,0);
  return 0;
}

