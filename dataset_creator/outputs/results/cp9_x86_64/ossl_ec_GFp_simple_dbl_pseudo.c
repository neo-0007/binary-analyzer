
bool ossl_ec_GFp_simple_dbl(EC_GROUP *param_1,long param_2,EC_POINT *param_3,BN_CTX *param_4)

{
  code *pcVar1;
  code *pcVar2;
  BIGNUM *m;
  undefined8 uVar3;
  int iVar4;
  BIGNUM *a;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *r_01;
  BIGNUM *pBVar5;
  BN_CTX *c;
  bool bVar6;
  
  iVar4 = EC_POINT_is_at_infinity(param_1,param_3);
  if (iVar4 != 0) {
    BN_zero_ex(*(undefined8 *)(param_2 + 0x20));
    *(undefined4 *)(param_2 + 0x28) = 0;
    return true;
  }
  bVar6 = false;
  pcVar1 = *(code **)(*(long *)param_1 + 0xf8);
  pcVar2 = *(code **)(*(long *)param_1 + 0x100);
  m = *(BIGNUM **)(param_1 + 0x40);
  c = (BN_CTX *)0x0;
  if ((param_4 == (BN_CTX *)0x0) &&
     (param_4 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8)), c = param_4,
     param_4 == (BN_CTX *)0x0)) {
    return false;
  }
  BN_CTX_start(param_4);
  a = BN_CTX_get(param_4);
  r = BN_CTX_get(param_4);
  r_00 = BN_CTX_get(param_4);
  r_01 = BN_CTX_get(param_4);
  if (r_01 != (BIGNUM *)0x0) {
    if (*(int *)(param_3 + 0x28) == 0) {
      if (*(int *)(param_1 + 0x70) == 0) {
        iVar4 = (*pcVar2)(param_1,a,*(undefined8 *)(param_3 + 0x10),param_4);
        if ((((iVar4 == 0) || (iVar4 = BN_mod_lshift1_quick(r,a,m), iVar4 == 0)) ||
            (iVar4 = BN_mod_add_quick(a,a,r,m), iVar4 == 0)) ||
           (((iVar4 = (*pcVar2)(param_1,r,*(undefined8 *)(param_3 + 0x20),param_4), iVar4 == 0 ||
             (iVar4 = (*pcVar2)(param_1,r,r,param_4), iVar4 == 0)) ||
            (iVar4 = (*pcVar1)(param_1,r,r,*(undefined8 *)(param_1 + 0x60),param_4), iVar4 == 0))))
        goto LAB_00501cd6;
        iVar4 = BN_mod_add_quick(r,r,a,m);
      }
      else {
        iVar4 = (*pcVar2)(param_1,r,*(undefined8 *)(param_3 + 0x20),param_4);
        if (((iVar4 == 0) ||
            (iVar4 = BN_mod_add_quick(a,*(BIGNUM **)(param_3 + 0x10),r,m), iVar4 == 0)) ||
           ((iVar4 = BN_mod_sub_quick(r_00,*(BIGNUM **)(param_3 + 0x10),r,m), iVar4 == 0 ||
            ((iVar4 = (*pcVar1)(param_1,r,a,r_00,param_4), iVar4 == 0 ||
             (iVar4 = BN_mod_lshift1_quick(a,r,m), iVar4 == 0)))))) goto LAB_00501cd6;
        iVar4 = BN_mod_add_quick(r,a,r,m);
      }
    }
    else {
      iVar4 = (*pcVar2)(param_1,a,*(undefined8 *)(param_3 + 0x10),param_4);
      if (((iVar4 == 0) || (iVar4 = BN_mod_lshift1_quick(r,a,m), iVar4 == 0)) ||
         (iVar4 = BN_mod_add_quick(a,a,r,m), iVar4 == 0)) goto LAB_00501cd6;
      iVar4 = BN_mod_add_quick(r,a,*(BIGNUM **)(param_1 + 0x60),m);
    }
    if (iVar4 != 0) {
      if (*(int *)(param_3 + 0x28) == 0) {
        iVar4 = (*pcVar1)(param_1,a,*(BIGNUM **)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20),
                          param_4);
        if (iVar4 == 0) goto LAB_00501cd6;
      }
      else {
        pBVar5 = BN_copy(a,*(BIGNUM **)(param_3 + 0x18));
        if (pBVar5 == (BIGNUM *)0x0) goto LAB_00501cd6;
      }
      iVar4 = BN_mod_lshift1_quick(*(BIGNUM **)(param_2 + 0x20),a,m);
      if (iVar4 != 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x18);
        *(undefined4 *)(param_2 + 0x28) = 0;
        iVar4 = (*pcVar2)(param_1,r_01,uVar3,param_4);
        if (((iVar4 != 0) &&
            (iVar4 = (*pcVar1)(param_1,r_00,*(undefined8 *)(param_3 + 0x10),r_01,param_4),
            iVar4 != 0)) &&
           ((((iVar4 = BN_mod_lshift_quick(r_00,r_00,2,m), iVar4 != 0 &&
              ((iVar4 = BN_mod_lshift1_quick(a,r_00,m), iVar4 != 0 &&
               (iVar4 = (*pcVar2)(param_1,*(undefined8 *)(param_2 + 0x10),r,param_4), iVar4 != 0))))
             && (iVar4 = BN_mod_sub_quick(*(BIGNUM **)(param_2 + 0x10),*(BIGNUM **)(param_2 + 0x10),
                                          a,m), iVar4 != 0)) &&
            ((((iVar4 = (*pcVar2)(param_1,a,r_01,param_4), iVar4 != 0 &&
               (iVar4 = BN_mod_lshift_quick(r_01,a,3,m), iVar4 != 0)) &&
              (iVar4 = BN_mod_sub_quick(a,r_00,*(BIGNUM **)(param_2 + 0x10),m), iVar4 != 0)) &&
             (iVar4 = (*pcVar1)(param_1,a,r,a,param_4), iVar4 != 0)))))) {
          iVar4 = BN_mod_sub_quick(*(BIGNUM **)(param_2 + 0x18),a,r_01,m);
          bVar6 = iVar4 != 0;
        }
      }
    }
  }
LAB_00501cd6:
  BN_CTX_end(param_4);
  BN_CTX_free(c);
  return bVar6;
}

