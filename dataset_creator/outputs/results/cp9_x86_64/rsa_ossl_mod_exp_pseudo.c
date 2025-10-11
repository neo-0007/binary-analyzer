
int rsa_ossl_mod_exp(BIGNUM *param_1,BIGNUM *param_2,long param_3,BN_CTX *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BIGNUM *rem;
  BIGNUM *r;
  BIGNUM *b;
  BIGNUM *r_00;
  BN_MONT_CTX *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  BN_CTX_start(param_4);
  rem = BN_CTX_get(param_4);
  r = BN_CTX_get(param_4);
  b = BN_CTX_get(param_4);
  r_00 = BN_CTX_get(param_4);
  if ((r_00 != (BIGNUM *)0x0) &&
     ((iVar3 = 0, *(int *)(param_3 + 0x10) != 1 ||
      (iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_3 + 0x88)), iVar3 - 1U < 3)))) {
    uVar1 = *(uint *)(param_3 + 0xa4);
    if ((uVar1 & 4) != 0) {
      pBVar6 = BN_new();
      if (pBVar6 == (BIGNUM *)0x0) goto LAB_005598ac;
      BN_with_flags(pBVar6,*(undefined8 *)(param_3 + 0x40),4);
      pBVar5 = BN_MONT_CTX_set_locked
                         ((BN_MONT_CTX **)(param_3 + 0xb0),(int)*(undefined8 *)(param_3 + 0xd0),
                          pBVar6,param_4);
      if (pBVar5 != (BN_MONT_CTX *)0x0) {
        BN_with_flags(pBVar6,*(undefined8 *)(param_3 + 0x48),4);
        pBVar5 = BN_MONT_CTX_set_locked
                           ((BN_MONT_CTX **)(param_3 + 0xb8),(int)*(undefined8 *)(param_3 + 0xd0),
                            pBVar6,param_4);
        if (pBVar5 != (BN_MONT_CTX *)0x0) {
          if (iVar3 != 0) {
            iVar2 = 0;
            do {
              puVar9 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_3 + 0x88),iVar2);
              BN_with_flags(pBVar6,*puVar9,4);
              pBVar5 = BN_MONT_CTX_set_locked
                                 ((BN_MONT_CTX **)(puVar9 + 4),(int)*(undefined8 *)(param_3 + 0xd0),
                                  pBVar6,param_4);
              if (pBVar5 == (BN_MONT_CTX *)0x0) goto LAB_00559df2;
              iVar2 = iVar2 + 1;
            } while (iVar3 != iVar2);
            BN_free(pBVar6);
            uVar1 = *(uint *)(param_3 + 0xa4);
            goto LAB_00559889;
          }
          BN_free(pBVar6);
          if (*(code **)(*(long *)(param_3 + 0x18) + 0x30) != BN_mod_exp_mont) {
LAB_00559eb5:
            uVar1 = *(uint *)(param_3 + 0xa4);
            goto LAB_00559889;
          }
          iVar2 = BN_num_bits(*(BIGNUM **)(param_3 + 0x48));
          iVar4 = BN_num_bits(*(BIGNUM **)(param_3 + 0x40));
          if (iVar2 != iVar4) goto LAB_00559eb5;
          if ((((((((*(byte *)(param_3 + 0xa4) & 2) != 0) &&
                  (pBVar5 = BN_MONT_CTX_set_locked
                                      ((BN_MONT_CTX **)(param_3 + 0xa8),
                                       (int)*(undefined8 *)(param_3 + 0xd0),
                                       *(BIGNUM **)(param_3 + 0x28),param_4),
                  pBVar5 == (BN_MONT_CTX *)0x0)) ||
                 (iVar3 = bn_from_mont_fixed_top(b,param_2,*(undefined8 *)(param_3 + 0xb8),param_4),
                 iVar3 == 0)) ||
                ((iVar3 = bn_to_mont_fixed_top(b,b,*(undefined8 *)(param_3 + 0xb8),param_4),
                 iVar3 == 0 ||
                 (iVar3 = bn_from_mont_fixed_top
                                    (rem,param_2,*(undefined8 *)(param_3 + 0xb0),param_4),
                 iVar3 == 0)))) ||
               ((iVar3 = bn_to_mont_fixed_top(rem,rem,*(undefined8 *)(param_3 + 0xb0),param_4),
                iVar3 == 0 ||
                ((iVar3 = BN_mod_exp_mont_consttime_x2
                                    (b,b,*(undefined8 *)(param_3 + 0x58),
                                     *(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0xb8)
                                     ,rem,rem,*(undefined8 *)(param_3 + 0x50),
                                     *(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0xb0)
                                     ,param_4), iVar3 == 0 ||
                 (iVar3 = bn_mod_sub_fixed_top(rem,rem,b,*(undefined8 *)(param_3 + 0x40)),
                 iVar3 == 0)))))) ||
              (iVar3 = bn_to_mont_fixed_top(rem,rem,*(undefined8 *)(param_3 + 0xb0),param_4),
              iVar3 == 0)) ||
             (((iVar3 = bn_mul_mont_fixed_top
                                  (rem,rem,*(undefined8 *)(param_3 + 0x60),
                                   *(undefined8 *)(param_3 + 0xb0),param_4), iVar3 == 0 ||
               (iVar3 = bn_mul_fixed_top(param_1,rem,*(undefined8 *)(param_3 + 0x48),param_4),
               iVar3 == 0)) ||
              (iVar3 = bn_mod_add_fixed_top(param_1,param_1,b,*(undefined8 *)(param_3 + 0x28)),
              iVar3 == 0)))) goto LAB_005598ac;
          goto LAB_00559c17;
        }
      }
LAB_00559df2:
      BN_free(pBVar6);
      iVar2 = 0;
      goto LAB_005598ae;
    }
LAB_00559889:
    if ((((uVar1 & 2) == 0) ||
        (pBVar5 = BN_MONT_CTX_set_locked
                            ((BN_MONT_CTX **)(param_3 + 0xa8),(int)*(undefined8 *)(param_3 + 0xd0),
                             *(BIGNUM **)(param_3 + 0x28),param_4), pBVar5 != (BN_MONT_CTX *)0x0))
       && (pBVar6 = BN_new(), pBVar6 != (BIGNUM *)0x0)) {
      BN_with_flags(pBVar6,param_2,4);
      iVar2 = BN_div((BIGNUM *)0x0,rem,pBVar6,*(BIGNUM **)(param_3 + 0x48),param_4);
      if (iVar2 == 0) goto LAB_00559e08;
      pBVar7 = BN_new();
      if (pBVar7 == (BIGNUM *)0x0) goto LAB_00559df2;
      BN_with_flags(pBVar7,*(undefined8 *)(param_3 + 0x58),4);
      iVar2 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                        (b,rem,pBVar7,*(undefined8 *)(param_3 + 0x48),param_4,
                         *(undefined8 *)(param_3 + 0xb8));
      if (iVar2 == 0) {
        BN_free(pBVar6);
        BN_free(pBVar7);
        iVar2 = 0;
        goto LAB_005598ae;
      }
      BN_free(pBVar7);
      iVar2 = BN_div((BIGNUM *)0x0,rem,pBVar6,*(BIGNUM **)(param_3 + 0x40),param_4);
      if (iVar2 == 0) {
LAB_00559e08:
        BN_free(pBVar6);
        goto LAB_005598ae;
      }
      BN_free(pBVar6);
      pBVar6 = BN_new();
      if (pBVar6 != (BIGNUM *)0x0) {
        BN_with_flags(pBVar6,*(undefined8 *)(param_3 + 0x50),4);
        iVar2 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                          (param_1,rem,pBVar6,*(undefined8 *)(param_3 + 0x40),param_4,
                           *(undefined8 *)(param_3 + 0xb0));
        if (iVar2 == 0) goto LAB_00559e08;
        BN_free(pBVar6);
        if (iVar3 != 0) {
          pBVar6 = BN_new();
          pBVar7 = BN_new();
          if ((pBVar7 == (BIGNUM *)0x0) || (uVar10 = 0, pBVar6 == (BIGNUM *)0x0)) {
LAB_00559ec0:
            BN_free(pBVar7);
            BN_free(pBVar6);
            goto LAB_005598ac;
          }
          do {
            pBVar8 = BN_CTX_get(param_4);
            local_58[uVar10] = (long)pBVar8;
            if (pBVar8 == (BIGNUM *)0x0) goto LAB_00559ec0;
            puVar9 = (undefined8 *)
                     OPENSSL_sk_value(*(undefined8 *)(param_3 + 0x88),uVar10 & 0xffffffff);
            BN_with_flags(pBVar7,param_2,4);
            BN_with_flags(pBVar6,puVar9[1],4);
            iVar2 = BN_div((BIGNUM *)0x0,rem,pBVar7,(BIGNUM *)*puVar9,param_4);
            if ((iVar2 == 0) ||
               (iVar2 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                                  (pBVar8,rem,pBVar6,*puVar9,param_4,puVar9[4]), iVar2 == 0)) {
              BN_free(pBVar7);
              BN_free(pBVar6);
              goto LAB_005598ae;
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < iVar3);
          BN_free(pBVar7);
          BN_free(pBVar6);
        }
        iVar2 = BN_sub(param_1,param_1,b);
        if (((iVar2 != 0) &&
            (((iVar2 = BN_is_negative(param_1), iVar2 == 0 ||
              (iVar2 = BN_add(param_1,param_1,*(BIGNUM **)(param_3 + 0x40)), iVar2 != 0)) &&
             (iVar2 = BN_mul(rem,param_1,*(BIGNUM **)(param_3 + 0x60),param_4), iVar2 != 0)))) &&
           (pBVar6 = BN_new(), pBVar6 != (BIGNUM *)0x0)) {
          BN_with_flags(pBVar6,rem,4);
          iVar2 = BN_div((BIGNUM *)0x0,param_1,pBVar6,*(BIGNUM **)(param_3 + 0x40),param_4);
          if (iVar2 == 0) goto LAB_00559e08;
          BN_free(pBVar6);
          iVar2 = BN_is_negative(param_1);
          if (((iVar2 == 0) ||
              (iVar2 = BN_add(param_1,param_1,*(BIGNUM **)(param_3 + 0x40)), iVar2 != 0)) &&
             ((iVar2 = BN_mul(rem,param_1,*(BIGNUM **)(param_3 + 0x48),param_4), iVar2 != 0 &&
              (iVar2 = BN_add(param_1,rem,b), iVar2 != 0)))) {
            if (iVar3 != 0) {
              pBVar6 = BN_new();
              if (pBVar6 == (BIGNUM *)0x0) goto LAB_005598ac;
              uVar10 = 0;
              do {
                puVar9 = (undefined8 *)
                         OPENSSL_sk_value(*(undefined8 *)(param_3 + 0x88),uVar10 & 0xffffffff);
                iVar2 = BN_sub(rem,(BIGNUM *)local_58[uVar10],param_1);
                if ((iVar2 == 0) || (iVar2 = BN_mul(r,rem,(BIGNUM *)puVar9[2],param_4), iVar2 == 0))
                goto LAB_00559e08;
                BN_with_flags(pBVar6,r,4);
                iVar2 = BN_div((BIGNUM *)0x0,rem,pBVar6,(BIGNUM *)*puVar9,param_4);
                if ((iVar2 == 0) ||
                   ((((iVar2 = BN_is_negative(rem), iVar2 != 0 &&
                      (iVar2 = BN_add(rem,rem,(BIGNUM *)*puVar9), iVar2 == 0)) ||
                     (iVar2 = BN_mul(rem,rem,(BIGNUM *)puVar9[3],param_4), iVar2 == 0)) ||
                    (iVar2 = BN_add(param_1,param_1,rem), iVar2 == 0)))) goto LAB_00559e08;
                uVar10 = uVar10 + 1;
              } while ((int)uVar10 < iVar3);
              BN_free(pBVar6);
            }
LAB_00559c17:
            if ((*(BIGNUM **)(param_3 + 0x30) != (BIGNUM *)0x0) &&
               (*(BIGNUM **)(param_3 + 0x28) != (BIGNUM *)0x0)) {
              if (*(code **)(*(long *)(param_3 + 0x18) + 0x30) == BN_mod_exp_mont) {
                iVar3 = BN_mod_exp_mont(r_00,param_1,*(BIGNUM **)(param_3 + 0x30),
                                        *(BIGNUM **)(param_3 + 0x28),param_4,
                                        *(BN_MONT_CTX **)(param_3 + 0xa8));
              }
              else {
                bn_correct_top(param_1);
                iVar3 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                                  (r_00,param_1,*(undefined8 *)(param_3 + 0x30),
                                   *(undefined8 *)(param_3 + 0x28),param_4,
                                   *(undefined8 *)(param_3 + 0xa8));
              }
              if ((iVar3 == 0) || (iVar3 = BN_sub(r_00,r_00,param_2), iVar3 == 0))
              goto LAB_005598ac;
              iVar3 = BN_is_zero();
              if (iVar3 == 0) {
                iVar3 = BN_div((BIGNUM *)0x0,r_00,r_00,*(BIGNUM **)(param_3 + 0x28),param_4);
                if ((iVar3 == 0) ||
                   ((iVar3 = BN_is_negative(r_00), iVar3 != 0 &&
                    (iVar3 = BN_add(r_00,r_00,*(BIGNUM **)(param_3 + 0x28)), iVar3 == 0))))
                goto LAB_005598ac;
                iVar3 = BN_is_zero(r_00);
                if (iVar3 == 0) {
                  pBVar6 = BN_new();
                  if (pBVar6 == (BIGNUM *)0x0) goto LAB_005598ac;
                  BN_with_flags(pBVar6,*(undefined8 *)(param_3 + 0x38),4);
                  iVar2 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                                    (param_1,param_2,pBVar6,*(undefined8 *)(param_3 + 0x28),param_4,
                                     *(undefined8 *)(param_3 + 0xa8));
                  if (iVar2 == 0) goto LAB_00559e08;
                  BN_free(pBVar6);
                }
              }
            }
            bn_correct_top(param_1);
            iVar2 = 1;
            goto LAB_005598ae;
          }
        }
      }
    }
  }
LAB_005598ac:
  iVar2 = 0;
LAB_005598ae:
  BN_CTX_end(param_4);
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

