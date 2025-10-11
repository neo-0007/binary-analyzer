
ulong BN_mod_exp_mont_consttime_x2
                (BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,
                BN_MONT_CTX *param_5,BIGNUM *param_6,BIGNUM *param_7,BIGNUM *param_8,BIGNUM *param_9
                ,BN_MONT_CTX *param_10,BN_CTX *param_11)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  BN_MONT_CTX *mont;
  BN_MONT_CTX *mont_00;
  
  iVar1 = ossl_rsaz_avx512ifma_eligible();
  if (((((iVar1 == 0) || (param_2->top != 0x10)) || (param_3->top != 0x10)) ||
      ((iVar1 = BN_num_bits(param_4), iVar1 != 0x400 || (param_7->top != 0x10)))) ||
     ((param_8->top != 0x10 || (iVar1 = BN_num_bits(param_9), iVar1 != 0x400)))) {
    uVar2 = BN_mod_exp_mont_consttime(param_1,param_2,param_3,param_4,param_11,param_5);
    uVar3 = BN_mod_exp_mont_consttime(param_6,param_7,param_8,param_9,param_11,param_10);
    mont = (BN_MONT_CTX *)0x0;
    mont_00 = (BN_MONT_CTX *)0x0;
    uVar5 = (ulong)(uVar3 & uVar2);
LAB_005b239f:
    uVar2 = (uint)uVar5;
    if (param_10 == (BN_MONT_CTX *)0x0) goto LAB_005b2520;
  }
  else {
    lVar4 = bn_wexpand(param_1,0x10);
    if ((lVar4 == 0) || (uVar5 = bn_wexpand(param_6,0x10), uVar5 == 0)) {
      mont = (BN_MONT_CTX *)0x0;
      mont_00 = (BN_MONT_CTX *)0x0;
      uVar5 = 0;
      goto LAB_005b239f;
    }
    mont_00 = param_5;
    if (param_5 == (BN_MONT_CTX *)0x0) {
      mont_00 = BN_MONT_CTX_new();
      if (mont_00 != (BN_MONT_CTX *)0x0) {
        uVar2 = BN_MONT_CTX_set(mont_00,param_4,param_11);
        uVar5 = (ulong)uVar2;
        if (uVar2 != 0) goto LAB_005b2467;
      }
      if (param_10 != (BN_MONT_CTX *)0x0) {
        uVar2 = 0;
        goto LAB_005b2543;
      }
      mont = (BN_MONT_CTX *)0x0;
LAB_005b2518:
      uVar5 = 0;
    }
    else {
LAB_005b2467:
      mont = param_10;
      if (param_10 != (BN_MONT_CTX *)0x0) {
LAB_005b2475:
        uVar2 = ossl_rsaz_mod_exp_avx512_x2
                          (param_1->d,param_2->d,param_3->d,param_4->d,(mont_00->RR).d,
                           mont_00->n0[0],param_6->d,param_7->d,param_8->d,param_9->d,(mont->RR).d,
                           mont->n0[0],0x400,uVar5);
        param_1->top = 0x10;
        param_1->neg = 0;
        bn_correct_top(param_1);
        param_6->top = 0x10;
        param_6->neg = 0;
        bn_correct_top(param_6);
        uVar5 = (ulong)uVar2;
        goto LAB_005b239f;
      }
      mont = BN_MONT_CTX_new();
      if (mont == (BN_MONT_CTX *)0x0) goto LAB_005b2518;
      uVar2 = BN_MONT_CTX_set(mont,param_9,param_11);
      uVar5 = (ulong)uVar2;
      if (uVar2 != 0) goto LAB_005b2475;
    }
LAB_005b2520:
    uVar2 = (uint)uVar5;
    BN_MONT_CTX_free(mont);
  }
  if (param_5 != (BN_MONT_CTX *)0x0) {
    return uVar5;
  }
LAB_005b2543:
  BN_MONT_CTX_free(mont_00);
  return (ulong)uVar2;
}

