
bool ossl_ec_GFp_simple_point_get_affine_coordinates
               (EC_GROUP *param_1,EC_POINT *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  code *pcVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BIGNUM *a;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *pBVar4;
  BN_CTX *c;
  bool bVar5;
  
  iVar2 = EC_POINT_is_at_infinity(param_1,param_2);
  if (iVar2 != 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecp_smpl.c",0x200,"ossl_ec_GFp_simple_point_get_affine_coordinates")
    ;
    ERR_set_error(0x10,0x6a,0);
    return false;
  }
  bVar5 = false;
  c = (BN_CTX *)0x0;
  if ((param_5 == (BN_CTX *)0x0) &&
     (param_5 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8)), c = param_5,
     param_5 == (BN_CTX *)0x0)) {
    return false;
  }
  BN_CTX_start(param_5);
  pBVar3 = BN_CTX_get(param_5);
  a = BN_CTX_get(param_5);
  r = BN_CTX_get(param_5);
  r_00 = BN_CTX_get(param_5);
  if (r_00 != (BIGNUM *)0x0) {
    pBVar4 = *(BIGNUM **)(param_2 + 0x20);
    if ((*(code **)(*(long *)param_1 + 0x120) == (code *)0x0) ||
       (iVar2 = (**(code **)(*(long *)param_1 + 0x120))(param_1,pBVar3,pBVar4,param_5),
       pBVar4 = pBVar3, iVar2 != 0)) {
      iVar2 = BN_is_one(pBVar4);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*(long *)param_1 + 0x110))(param_1,a,pBVar4,param_5);
        if (iVar2 == 0) {
          ERR_new();
          bVar5 = false;
          ERR_set_debug("../crypto/ec/ecp_smpl.c",0x232,
                        "ossl_ec_GFp_simple_point_get_affine_coordinates");
          ERR_set_error(0x10,0x80003,0);
          goto LAB_00501320;
        }
        if (*(long *)(*(long *)param_1 + 0x118) == 0) {
          iVar2 = (**(code **)(*(long *)param_1 + 0x100))(param_1,r,a,param_5);
        }
        else {
          iVar2 = BN_mod_sqr(r,a,*(BIGNUM **)(param_1 + 0x40),param_5);
        }
        if ((iVar2 == 0) ||
           ((param_3 != (BIGNUM *)0x0 &&
            (iVar2 = (**(code **)(*(long *)param_1 + 0xf8))
                               (param_1,param_3,*(undefined8 *)(param_2 + 0x10),r,param_5),
            iVar2 == 0)))) goto LAB_00501320;
        if (param_4 != (BIGNUM *)0x0) {
          if (*(long *)(*(long *)param_1 + 0x118) == 0) {
            iVar2 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,r_00,r,a,param_5);
          }
          else {
            iVar2 = BN_mod_mul(r_00,r,a,*(BIGNUM **)(param_1 + 0x40),param_5);
          }
          if (iVar2 != 0) {
            iVar2 = (**(code **)(*(long *)param_1 + 0xf8))
                              (param_1,param_4,*(undefined8 *)(param_2 + 0x18),r_00,param_5);
            bVar5 = iVar2 != 0;
          }
          goto LAB_00501320;
        }
      }
      else {
        pcVar1 = *(code **)(*(long *)param_1 + 0x120);
        if (pcVar1 == (code *)0x0) {
          if ((param_3 != (BIGNUM *)0x0) &&
             (pBVar3 = BN_copy(param_3,*(BIGNUM **)(param_2 + 0x10)), pBVar3 == (BIGNUM *)0x0))
          goto LAB_00501320;
          if (param_4 != (BIGNUM *)0x0) {
            pBVar3 = BN_copy(param_4,*(BIGNUM **)(param_2 + 0x18));
            bVar5 = pBVar3 != (BIGNUM *)0x0;
            goto LAB_00501320;
          }
        }
        else {
          if ((param_3 != (BIGNUM *)0x0) &&
             (iVar2 = (*pcVar1)(param_1,param_3,*(undefined8 *)(param_2 + 0x10),param_5), iVar2 == 0
             )) goto LAB_00501320;
          if (param_4 != (BIGNUM *)0x0) {
            iVar2 = (**(code **)(*(long *)param_1 + 0x120))
                              (param_1,param_4,*(undefined8 *)(param_2 + 0x18),param_5);
            bVar5 = iVar2 != 0;
            goto LAB_00501320;
          }
        }
      }
      bVar5 = true;
    }
  }
LAB_00501320:
  BN_CTX_end(param_5);
  BN_CTX_free(c);
  return bVar5;
}

