
ulong ossl_ec_GFp_simple_is_on_curve(EC_GROUP *param_1,EC_POINT *param_2,BN_CTX *param_3)

{
  code *pcVar1;
  code *pcVar2;
  BIGNUM *m;
  int iVar3;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  ulong uVar6;
  BN_CTX *c;
  
  iVar3 = EC_POINT_is_at_infinity(param_1,param_2);
  if (iVar3 != 0) {
    return 1;
  }
  pcVar1 = *(code **)(*(long *)param_1 + 0xf8);
  pcVar2 = *(code **)(*(long *)param_1 + 0x100);
  m = *(BIGNUM **)(param_1 + 0x40);
  c = (BN_CTX *)0x0;
  if ((param_3 == (BN_CTX *)0x0) &&
     (param_3 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8)), c = param_3,
     param_3 == (BN_CTX *)0x0)) {
    return 0xffffffff;
  }
  BN_CTX_start(param_3);
  r = BN_CTX_get(param_3);
  r_00 = BN_CTX_get(param_3);
  pBVar4 = BN_CTX_get(param_3);
  pBVar5 = BN_CTX_get(param_3);
  if ((pBVar5 != (BIGNUM *)0x0) &&
     (iVar3 = (*pcVar2)(param_1,r,*(undefined8 *)(param_2 + 0x10),param_3), iVar3 != 0)) {
    if (*(int *)(param_2 + 0x28) == 0) {
      iVar3 = (*pcVar2)(param_1,r_00,*(undefined8 *)(param_2 + 0x20),param_3);
      if (((iVar3 != 0) && (iVar3 = (*pcVar2)(param_1,pBVar4,r_00,param_3), iVar3 != 0)) &&
         (iVar3 = (*pcVar1)(param_1,pBVar5,pBVar4,r_00,param_3), iVar3 != 0)) {
        if (*(int *)(param_1 + 0x70) == 0) {
          iVar3 = (*pcVar1)(param_1,r_00,pBVar4,*(undefined8 *)(param_1 + 0x60),param_3);
          if (iVar3 != 0) {
            iVar3 = BN_mod_add_quick(r,r,r_00,m);
joined_r0x00503358:
            if (((iVar3 != 0) &&
                (iVar3 = (*pcVar1)(param_1,r,r,*(undefined8 *)(param_2 + 0x10),param_3), iVar3 != 0)
                ) && (iVar3 = (*pcVar1)(param_1,r_00,*(undefined8 *)(param_1 + 0x68),pBVar5,param_3)
                     , pBVar4 = r_00, iVar3 != 0)) goto LAB_00503238;
          }
        }
        else {
          iVar3 = BN_mod_lshift1_quick(r_00,pBVar4,m);
          if ((iVar3 != 0) && (iVar3 = BN_mod_add_quick(r_00,r_00,pBVar4,m), iVar3 != 0)) {
            iVar3 = BN_mod_sub_quick(r,r,r_00,m);
            goto joined_r0x00503358;
          }
        }
      }
    }
    else {
      iVar3 = BN_mod_add_quick(r,r,*(BIGNUM **)(param_1 + 0x60),m);
      if ((iVar3 != 0) &&
         (iVar3 = (*pcVar1)(param_1,r,r,*(undefined8 *)(param_2 + 0x10),param_3), iVar3 != 0)) {
        pBVar4 = *(BIGNUM **)(param_1 + 0x68);
LAB_00503238:
        iVar3 = BN_mod_add_quick(r,r,pBVar4,m);
        if ((iVar3 != 0) &&
           (iVar3 = (*pcVar2)(param_1,r_00,*(undefined8 *)(param_2 + 0x18),param_3), iVar3 != 0)) {
          iVar3 = BN_ucmp(r_00,r);
          uVar6 = (ulong)(iVar3 == 0);
          goto LAB_005032b6;
        }
      }
    }
  }
  uVar6 = 0xffffffff;
LAB_005032b6:
  BN_CTX_end(param_3);
  BN_CTX_free(c);
  return uVar6;
}

