
ulong ec_GF2m_simple_points_mul
                (EC_GROUP *param_1,EC_POINT *param_2,long param_3,ulong param_4,undefined8 *param_5,
                long *param_6,BN_CTX *param_7)

{
  int iVar1;
  ulong uVar2;
  EC_POINT *a;
  undefined8 uVar3;
  uint uVar4;
  
  if (1 < param_4) {
LAB_005c37a4:
    uVar2 = ossl_ec_wNAF_mul(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 != 0) goto LAB_005c37a4;
  iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 != 0) goto LAB_005c37a4;
  if (param_3 != 0) {
    if ((param_4 & 1) == 0) {
      uVar3 = 0;
      goto LAB_005c3878;
    }
    if (param_3 != 0) goto LAB_005c37f8;
  }
  if ((param_4 & 1) == 0) {
LAB_005c37f8:
    a = EC_POINT_new(param_1);
    uVar4 = 0;
    if (a == (EC_POINT *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec2_smpl.c",0x38c,"ec_GF2m_simple_points_mul");
      ERR_set_error(0x10,0xc0100,0);
    }
    else {
      iVar1 = ossl_ec_scalar_mul_ladder(param_1,a,param_3,0,param_7);
      if (iVar1 != 0) {
        iVar1 = ossl_ec_scalar_mul_ladder(param_1,param_2,*param_6,*param_5,param_7);
        if (iVar1 != 0) {
          iVar1 = EC_POINT_add(param_1,param_2,a,param_2,param_7);
          uVar4 = (uint)(iVar1 != 0);
        }
      }
      EC_POINT_free(a);
    }
    return (ulong)uVar4;
  }
  uVar3 = *param_5;
  param_3 = *param_6;
LAB_005c3878:
  uVar2 = ossl_ec_scalar_mul_ladder(param_1,param_2,param_3,uVar3,param_7);
  return uVar2;
}

