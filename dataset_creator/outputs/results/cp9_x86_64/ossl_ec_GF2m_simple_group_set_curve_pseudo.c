
undefined8
ossl_ec_GF2m_simple_group_set_curve
          (long param_1,BIGNUM *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  BIGNUM *pBVar4;
  long lVar5;
  long lVar6;
  
  pBVar4 = BN_copy(*(BIGNUM **)(param_1 + 0x40),param_2);
  if (pBVar4 != (BIGNUM *)0x0) {
    lVar6 = param_1 + 0x48;
    uVar1 = BN_GF2m_poly2arr(*(undefined8 *)(param_1 + 0x40),lVar6,6);
    if ((uVar1 & 0xfffffffd) == 4) {
      iVar2 = BN_GF2m_mod_arr(*(undefined8 *)(param_1 + 0x60),param_3,lVar6);
      if (iVar2 != 0) {
        iVar3 = *(int *)(param_1 + 0x48) + 0x3f;
        iVar2 = *(int *)(param_1 + 0x48) + 0x7e;
        if (-1 < iVar3) {
          iVar2 = iVar3;
        }
        lVar5 = bn_wexpand(*(undefined8 *)(param_1 + 0x60),iVar2 >> 6);
        if (lVar5 != 0) {
          bn_set_all_zero(*(undefined8 *)(param_1 + 0x60));
          iVar2 = BN_GF2m_mod_arr(*(undefined8 *)(param_1 + 0x68),param_4,lVar6);
          if (iVar2 != 0) {
            iVar3 = *(int *)(param_1 + 0x48) + 0x3f;
            iVar2 = *(int *)(param_1 + 0x48) + 0x7e;
            if (-1 < iVar3) {
              iVar2 = iVar3;
            }
            lVar6 = bn_wexpand(*(undefined8 *)(param_1 + 0x68),iVar2 >> 6);
            if (lVar6 != 0) {
              bn_set_all_zero(*(undefined8 *)(param_1 + 0x68));
              return 1;
            }
          }
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec2_smpl.c",0x70,"ossl_ec_GF2m_simple_group_set_curve");
      ERR_set_error(0x10,0x83,0);
    }
  }
  return 0;
}

