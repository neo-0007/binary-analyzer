
int ossl_bn_miller_rabin_is_prime
              (BIGNUM *param_1,int param_2,BN_CTX *param_3,BN_GENCB *param_4,int param_5,
              undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  BIGNUM *r;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *r_00;
  BIGNUM *r_01;
  BIGNUM *a_02;
  BIGNUM *pBVar3;
  BN_MONT_CTX *mont;
  int n;
  int iVar4;
  int local_64;
  
  iVar1 = BN_is_odd();
  if (iVar1 == 0) {
    return 0;
  }
  BN_CTX_start(param_3);
  r = BN_CTX_get(param_3);
  a = BN_CTX_get(param_3);
  a_00 = BN_CTX_get(param_3);
  a_01 = BN_CTX_get(param_3);
  r_00 = BN_CTX_get(param_3);
  r_01 = BN_CTX_get(param_3);
  a_02 = BN_CTX_get(param_3);
  if (((((a_02 != (BIGNUM *)0x0) && (pBVar3 = BN_copy(a,param_1), pBVar3 != (BIGNUM *)0x0)) &&
       (iVar1 = BN_sub_word(a,1), iVar1 != 0)) &&
      ((pBVar3 = BN_copy(a_00,param_1), pBVar3 != (BIGNUM *)0x0 &&
       (iVar1 = BN_sub_word(a_00,3), iVar1 != 0)))) && (iVar1 = BN_is_zero(a_00), iVar1 == 0)) {
    n = 1;
    iVar1 = BN_is_negative(a_00);
    if (iVar1 == 0) {
      while (iVar1 = BN_is_bit_set(a,n), iVar1 == 0) {
        n = n + 1;
      }
      iVar1 = BN_rshift(r_00,a,n);
      if ((iVar1 != 0) && (mont = BN_MONT_CTX_new(), mont != (BN_MONT_CTX *)0x0)) {
        iVar1 = BN_MONT_CTX_set(mont,param_1,param_3);
        if (iVar1 == 0) goto LAB_005b5d08;
        local_64 = 0;
        if (param_2 == 0) {
          iVar1 = BN_num_bits(param_1);
          param_2 = 0x40;
          if (0x800 < iVar1) {
            param_2 = 0x80;
          }
LAB_005b5e48:
          do {
            iVar1 = BN_priv_rand_range_ex(a_02,a_00,0,param_3);
            if ((iVar1 == 0) || (iVar1 = BN_add_word(a_02,2), iVar1 == 0)) goto LAB_005b5d08;
            if (param_5 != 0) {
              iVar1 = BN_gcd(r,a_02,param_1,param_3);
              if (iVar1 == 0) goto LAB_005b5d08;
              iVar1 = BN_is_one(r);
              if (iVar1 == 0) {
                iVar1 = 1;
                *param_6 = 1;
                goto LAB_005b5d08;
              }
            }
            iVar1 = BN_mod_exp_mont(r_01,a_02,r_00,param_1,param_3,mont);
            if (iVar1 == 0) goto LAB_005b5d08;
            iVar1 = BN_is_one(r_01);
            if ((iVar1 == 0) && (iVar1 = BN_cmp(r_01,a), iVar1 != 0)) {
              iVar1 = 0;
              if (n == 1) {
LAB_005b605a:
                pBVar3 = BN_copy(a_01,r_01);
                if ((pBVar3 == (BIGNUM *)0x0) ||
                   (iVar1 = BN_mod_mul(r_01,a_01,a_01,param_1,param_3), iVar1 == 0))
                goto LAB_005b5d08;
                iVar1 = BN_is_one(r_01);
                if (iVar1 == 0) {
                  pBVar3 = BN_copy(a_01,r_01);
                  iVar1 = 0;
                  if (pBVar3 == (BIGNUM *)0x0) goto LAB_005b5d08;
                }
LAB_005b60d5:
                if (param_5 == 0) {
                  iVar1 = 1;
                  *param_6 = 0;
                }
                else {
                  iVar1 = BN_sub_word(a_01,1);
                  if ((iVar1 != 0) && (iVar1 = BN_gcd(r,a_01,param_1,param_3), iVar1 != 0)) {
                    iVar1 = BN_is_one(r);
                    if (iVar1 == 0) {
                      *param_6 = 1;
                      iVar1 = 1;
                    }
                    else {
                      *param_6 = 2;
                      iVar1 = 1;
                    }
                  }
                }
                goto LAB_005b5d08;
              }
              iVar4 = 1;
              while( true ) {
                pBVar3 = BN_copy(a_01,r_01);
                if (pBVar3 == (BIGNUM *)0x0) goto LAB_005b5d08;
                iVar2 = BN_mod_mul(r_01,a_01,a_01,param_1,param_3);
                if (iVar2 == 0) {
                  iVar1 = 0;
                  goto LAB_005b5d08;
                }
                iVar2 = BN_cmp(r_01,a);
                if (iVar2 == 0) break;
                iVar2 = BN_is_one(r_01);
                if (iVar2 != 0) goto LAB_005b60d5;
                iVar4 = iVar4 + 1;
                if (n == iVar4) goto LAB_005b605a;
              }
            }
            iVar1 = BN_GENCB_call(param_4,1,local_64);
            if (iVar1 == 0) goto LAB_005b5d08;
            local_64 = local_64 + 1;
          } while (local_64 < param_2);
        }
        else if (0 < param_2) goto LAB_005b5e48;
        iVar1 = 1;
        *param_6 = 3;
        goto LAB_005b5d08;
      }
    }
  }
  mont = (BN_MONT_CTX *)0x0;
  iVar1 = 0;
LAB_005b5d08:
  BN_clear(r);
  BN_clear(a);
  BN_clear(a_00);
  BN_clear(a_01);
  BN_clear(r_00);
  BN_clear(r_01);
  BN_clear(a_02);
  BN_CTX_end(param_3);
  BN_MONT_CTX_free(mont);
  return iVar1;
}

