
undefined8
ossl_ec_GFp_simple_ladder_pre
          (long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  BIGNUM *r;
  BIGNUM *a;
  BIGNUM *r_00;
  BIGNUM *r_01;
  BIGNUM *r_02;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  r = *(BIGNUM **)(param_3 + 0x20);
  a = *(BIGNUM **)(param_3 + 0x10);
  r_00 = *(BIGNUM **)(param_2 + 0x20);
  r_01 = *(BIGNUM **)(param_2 + 0x10);
  r_02 = *(BIGNUM **)(param_3 + 0x18);
  if ((((((*(int *)(param_4 + 0x28) != 0) &&
         (iVar1 = (**(code **)(*param_1 + 0x100))(param_1,a,*(undefined8 *)(param_4 + 0x10),param_5)
         , iVar1 != 0)) &&
        (iVar1 = BN_mod_sub_quick(r_01,a,(BIGNUM *)param_1[0xc],(BIGNUM *)param_1[8]), iVar1 != 0))
       && (((iVar1 = (**(code **)(*param_1 + 0x100))(param_1,r_01,r_01,param_5), iVar1 != 0 &&
            (iVar1 = (**(code **)(*param_1 + 0xf8))
                               (param_1,r_02,*(undefined8 *)(param_4 + 0x10),param_1[0xd],param_5),
            iVar1 != 0)) &&
           ((iVar1 = BN_mod_lshift_quick(r_02,r_02,3,(BIGNUM *)param_1[8]), iVar1 != 0 &&
            ((iVar1 = BN_mod_sub_quick(*(BIGNUM **)(param_2 + 0x10),r_01,r_02,(BIGNUM *)param_1[8]),
             iVar1 != 0 &&
             (iVar1 = BN_mod_add_quick(r,a,(BIGNUM *)param_1[0xc],(BIGNUM *)param_1[8]), iVar1 != 0)
             ))))))) &&
      (iVar1 = (**(code **)(*param_1 + 0xf8))
                         (param_1,r_00,*(undefined8 *)(param_4 + 0x10),r,param_5), iVar1 != 0)) &&
     ((iVar1 = BN_mod_add_quick(r_00,(BIGNUM *)param_1[0xd],r_00,(BIGNUM *)param_1[8]), iVar1 != 0
      && (iVar1 = BN_mod_lshift_quick(*(BIGNUM **)(param_2 + 0x20),r_00,2,(BIGNUM *)param_1[8]),
         iVar1 != 0)))) {
    do {
      iVar1 = BN_priv_rand_range_ex(*(undefined8 *)(param_2 + 0x18),param_1[8],0,param_5);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = BN_is_zero(*(undefined8 *)(param_2 + 0x18));
    } while (iVar1 != 0);
    do {
      iVar1 = BN_priv_rand_range_ex(*(undefined8 *)(param_3 + 0x20),param_1[8],0,param_5);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = BN_is_zero(*(undefined8 *)(param_3 + 0x20));
    } while (iVar1 != 0);
    lVar2 = *param_1;
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    if (*(code **)(lVar2 + 0x118) != (code *)0x0) {
      iVar1 = (**(code **)(lVar2 + 0x118))(param_1,uVar3,uVar3,param_5);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = (**(code **)(*param_1 + 0x118))
                        (param_1,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x20),
                         param_5);
      if (iVar1 == 0) {
        return 0;
      }
      lVar2 = *param_1;
      uVar3 = *(undefined8 *)(param_2 + 0x18);
    }
    iVar1 = (**(code **)(lVar2 + 0xf8))
                      (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),uVar3
                       ,param_5);
    if (((iVar1 != 0) &&
        (iVar1 = (**(code **)(*param_1 + 0xf8))
                           (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),
                            *(undefined8 *)(param_2 + 0x18),param_5), iVar1 != 0)) &&
       (iVar1 = (**(code **)(*param_1 + 0xf8))
                          (param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10),
                           *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0)) {
      *(undefined4 *)(param_2 + 0x28) = 0;
      *(undefined4 *)(param_3 + 0x28) = 0;
      return 1;
    }
  }
  return 0;
}

