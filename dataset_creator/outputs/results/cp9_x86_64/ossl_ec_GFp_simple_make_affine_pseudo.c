
undefined4 ossl_ec_GFp_simple_make_affine(EC_GROUP *param_1,EC_POINT *param_2,BN_CTX *param_3)

{
  int iVar1;
  BIGNUM *pBVar2;
  BIGNUM *pBVar3;
  undefined4 uVar4;
  BN_CTX *c;
  
  if ((*(int *)(param_2 + 0x28) == 0) &&
     (iVar1 = EC_POINT_is_at_infinity(param_1,param_2), iVar1 == 0)) {
    uVar4 = 0;
    c = (BN_CTX *)0x0;
    if ((param_3 != (BN_CTX *)0x0) ||
       (param_3 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8)), c = param_3,
       param_3 != (BN_CTX *)0x0)) {
      BN_CTX_start(param_3);
      pBVar2 = BN_CTX_get(param_3);
      pBVar3 = BN_CTX_get(param_3);
      if (((pBVar3 != (BIGNUM *)0x0) &&
          (iVar1 = EC_POINT_get_affine_coordinates(param_1,param_2,pBVar2,pBVar3,param_3),
          iVar1 != 0)) &&
         (iVar1 = EC_POINT_set_affine_coordinates(param_1,param_2,pBVar2,pBVar3,param_3), iVar1 != 0
         )) {
        if (*(int *)(param_2 + 0x28) == 0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ecp_smpl.c",0x4aa,"ossl_ec_GFp_simple_make_affine");
          ERR_set_error(0x10,0xc0103,0);
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      BN_CTX_end(param_3);
      BN_CTX_free(c);
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

