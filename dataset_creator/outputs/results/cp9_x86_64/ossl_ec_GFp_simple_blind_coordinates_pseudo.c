
int ossl_ec_GFp_simple_blind_coordinates(long *param_1,long param_2,BN_CTX *param_3)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  long lVar5;
  
  BN_CTX_start(param_3);
  pBVar3 = BN_CTX_get(param_3);
  pBVar4 = BN_CTX_get(param_3);
  if (pBVar4 == (BIGNUM *)0x0) {
    ERR_new();
    iVar2 = 0;
    ERR_set_debug("../crypto/ec/ecp_smpl.c",0x5a1,"ossl_ec_GFp_simple_blind_coordinates");
    ERR_set_error(0x10,0xc0100,0);
  }
  else {
    do {
      ERR_set_mark();
      iVar2 = BN_priv_rand_range_ex(pBVar3,param_1[8],0,param_3);
      ERR_pop_to_mark();
      if (iVar2 == 0) {
        iVar2 = 1;
        goto LAB_00502a9d;
      }
      iVar1 = BN_is_zero(pBVar3);
    } while (iVar1 != 0);
    lVar5 = *param_1;
    if (*(code **)(lVar5 + 0x118) != (code *)0x0) {
      iVar1 = (**(code **)(lVar5 + 0x118))(param_1,pBVar3,pBVar3,param_3);
      if (iVar1 == 0) goto LAB_00502a9d;
      lVar5 = *param_1;
    }
    iVar1 = (**(code **)(lVar5 + 0xf8))
                      (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),
                       pBVar3,param_3);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x100))(param_1,pBVar4,pBVar3,param_3);
      if (iVar1 != 0) {
        iVar1 = (**(code **)(*param_1 + 0xf8))
                          (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),
                           pBVar4,param_3);
        if (iVar1 != 0) {
          iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,pBVar4,pBVar4,pBVar3,param_3);
          if (iVar1 != 0) {
            iVar1 = (**(code **)(*param_1 + 0xf8))
                              (param_1,*(undefined8 *)(param_2 + 0x18),
                               *(undefined8 *)(param_2 + 0x18),pBVar4,param_3);
            if (iVar1 != 0) {
              *(undefined4 *)(param_2 + 0x28) = 0;
              iVar2 = 1;
            }
          }
        }
      }
    }
  }
LAB_00502a9d:
  BN_CTX_end(param_3);
  return iVar2;
}

