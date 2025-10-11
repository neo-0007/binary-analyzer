
undefined4
ossl_ec_GFp_simple_points_make_affine(long *param_1,long param_2,long *param_3,BN_CTX *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  BIGNUM *b;
  BIGNUM *pBVar4;
  undefined8 *ptr;
  BIGNUM *pBVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 uVar10;
  bool bVar11;
  BN_CTX *local_70;
  
  if (param_2 == 0) {
    return 1;
  }
  local_70 = (BN_CTX *)0x0;
  if ((param_4 == (BN_CTX *)0x0) &&
     (param_4 = (BN_CTX *)BN_CTX_new_ex(param_1[0x15]), local_70 = param_4, param_4 == (BN_CTX *)0x0
     )) {
    return 0;
  }
  BN_CTX_start(param_4);
  b = BN_CTX_get(param_4);
  pBVar4 = BN_CTX_get(param_4);
  if (pBVar4 == (BIGNUM *)0x0) {
LAB_005036d0:
    BN_CTX_end(param_4);
    BN_CTX_free(local_70);
    return 0;
  }
  ptr = (undefined8 *)CRYPTO_malloc((int)param_2 * 8,"../crypto/ec/ecp_smpl.c",0x4ce);
  lVar9 = 0;
  if (ptr == (undefined8 *)0x0) goto LAB_005036d0;
  do {
    lVar7 = lVar9;
    pBVar5 = BN_new();
    ptr[lVar7] = pBVar5;
    if (pBVar5 == (BIGNUM *)0x0) goto LAB_00503670;
    lVar9 = lVar7 + 1;
  } while (param_2 != lVar9);
  iVar3 = BN_is_zero(*(undefined8 *)(*param_3 + 0x20));
  if (iVar3 == 0) {
    pBVar5 = BN_copy((BIGNUM *)*ptr,*(BIGNUM **)(*param_3 + 0x20));
    if (pBVar5 != (BIGNUM *)0x0) goto LAB_005035d7;
  }
  else {
    if (*(code **)(*param_1 + 0x128) == (code *)0x0) {
      iVar3 = BN_set_word((BIGNUM *)*ptr,1);
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x128))(param_1,(BIGNUM *)*ptr,param_4);
    }
    if (iVar3 != 0) {
LAB_005035d7:
      plVar6 = param_3 + 1;
      puVar2 = ptr;
      if (lVar9 != 1) {
        do {
          puVar8 = puVar2 + 1;
          iVar3 = BN_is_zero(*(undefined8 *)(*plVar6 + 0x20));
          if (iVar3 == 0) {
            iVar3 = (**(code **)(*param_1 + 0xf8))
                              (param_1,*puVar8,*puVar2,*(undefined8 *)(*plVar6 + 0x20),param_4);
            if (iVar3 == 0) goto LAB_00503670;
          }
          else {
            pBVar5 = BN_copy((BIGNUM *)*puVar8,(BIGNUM *)*puVar2);
            if (pBVar5 == (BIGNUM *)0x0) goto LAB_00503670;
          }
          plVar6 = plVar6 + 1;
          puVar2 = puVar8;
        } while (plVar6 != param_3 + param_2);
      }
      iVar3 = (**(code **)(*param_1 + 0x110))(param_1,b,ptr[param_2 + -1],param_4);
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ecp_smpl.c",0x4fb,"ossl_ec_GFp_simple_points_make_affine");
        ERR_set_error(0x10,0x80003,0);
        uVar10 = 0;
        goto LAB_00503673;
      }
      lVar9 = lVar7;
      if ((*(code **)(*param_1 + 0x118) == (code *)0x0) ||
         ((iVar3 = (**(code **)(*param_1 + 0x118))(param_1,b,b,param_4), iVar3 != 0 &&
          (iVar3 = (**(code **)(*param_1 + 0x118))(param_1,b,b,param_4), iVar3 != 0)))) {
        for (; lVar9 != 0; lVar9 = lVar9 + -1) {
          iVar3 = BN_is_zero(*(undefined8 *)(param_3[lVar9] + 0x20));
          if ((iVar3 == 0) &&
             (((iVar3 = (**(code **)(*param_1 + 0xf8))(param_1,pBVar4,ptr[lVar9 + -1],b,param_4),
               iVar3 == 0 ||
               (iVar3 = (**(code **)(*param_1 + 0xf8))
                                  (param_1,b,b,*(undefined8 *)(param_3[lVar9] + 0x20),param_4),
               iVar3 == 0)) ||
              (pBVar5 = BN_copy(*(BIGNUM **)(param_3[lVar9] + 0x20),pBVar4), pBVar5 == (BIGNUM *)0x0
              )))) goto LAB_00503670;
        }
        iVar3 = BN_is_zero(*(undefined8 *)(*param_3 + 0x20));
        if ((iVar3 != 0) ||
           (pBVar4 = BN_copy(*(BIGNUM **)(*param_3 + 0x20),b), pBVar4 != (BIGNUM *)0x0)) {
          lVar9 = 0;
          do {
            lVar1 = param_3[lVar9];
            iVar3 = BN_is_zero(*(undefined8 *)(lVar1 + 0x20));
            if (iVar3 == 0) {
              iVar3 = (**(code **)(*param_1 + 0x100))
                                (param_1,b,*(undefined8 *)(lVar1 + 0x20),param_4);
              if (((iVar3 == 0) ||
                  (iVar3 = (**(code **)(*param_1 + 0xf8))
                                     (param_1,*(undefined8 *)(lVar1 + 0x10),
                                      *(undefined8 *)(lVar1 + 0x10),b,param_4), iVar3 == 0)) ||
                 ((iVar3 = (**(code **)(*param_1 + 0xf8))
                                     (param_1,b,b,*(undefined8 *)(lVar1 + 0x20),param_4), iVar3 == 0
                  || (iVar3 = (**(code **)(*param_1 + 0xf8))
                                        (param_1,*(undefined8 *)(lVar1 + 0x18),
                                         *(undefined8 *)(lVar1 + 0x18),b,param_4), iVar3 == 0))))
              goto LAB_00503670;
              if (*(code **)(*param_1 + 0x128) == (code *)0x0) {
                iVar3 = BN_set_word(*(BIGNUM **)(lVar1 + 0x20),1);
              }
              else {
                iVar3 = (**(code **)(*param_1 + 0x128))(param_1,*(BIGNUM **)(lVar1 + 0x20),param_4);
              }
              if (iVar3 == 0) goto LAB_00503670;
              *(undefined4 *)(lVar1 + 0x28) = 1;
            }
            bVar11 = lVar7 != lVar9;
            lVar9 = lVar9 + 1;
          } while (bVar11);
          uVar10 = 1;
          goto LAB_00503673;
        }
      }
    }
  }
LAB_00503670:
  uVar10 = 0;
LAB_00503673:
  lVar9 = 0;
  BN_CTX_end(param_4);
  BN_CTX_free(local_70);
  do {
    if ((BIGNUM *)ptr[lVar9] == (BIGNUM *)0x0) break;
    BN_clear_free((BIGNUM *)ptr[lVar9]);
    lVar9 = lVar9 + 1;
  } while (param_2 != lVar9);
  CRYPTO_free(ptr);
  return uVar10;
}

