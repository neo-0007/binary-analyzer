
undefined8
ossl_bn_rsa_fips186_4_derive_prime
          (BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BIGNUM *param_5,
          int param_6,BIGNUM *param_7,BN_CTX *param_8,BN_GENCB *param_9)

{
  int iVar1;
  int iVar2;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *ret;
  BIGNUM *r_01;
  BIGNUM *r_02;
  BIGNUM *a;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  undefined8 uVar5;
  
  param_6 = param_6 >> 1;
  BN_CTX_start(param_8);
  r = BN_CTX_get(param_8);
  r_00 = BN_CTX_get(param_8);
  ret = BN_CTX_get(param_8);
  r_01 = BN_CTX_get(param_8);
  r_02 = BN_CTX_get(param_8);
  a = BN_CTX_get(param_8);
  pBVar3 = BN_CTX_get(param_8);
  if (pBVar3 != (BIGNUM *)0x0) {
    if (param_3 == (BIGNUM *)0x0) {
      iVar1 = BN_num_bits((BIGNUM *)ossl_bn_inv_sqrt_2);
      if (iVar1 <= param_6) {
        iVar1 = BN_num_bits((BIGNUM *)ossl_bn_inv_sqrt_2);
        iVar1 = BN_lshift(r,(BIGNUM *)ossl_bn_inv_sqrt_2,param_6 - iVar1);
        if (iVar1 != 0) {
          pBVar4 = BN_value_one();
          iVar1 = BN_lshift(r_00,pBVar4,param_6);
          if ((iVar1 != 0) && (iVar1 = BN_sub(r_00,r_00,r), iVar1 != 0)) goto LAB_005b7600;
        }
      }
    }
    else {
      pBVar4 = BN_copy(param_2,param_3);
      if (pBVar4 != (BIGNUM *)0x0) {
LAB_005b7600:
        iVar1 = BN_lshift1(pBVar3,param_4);
        if (((((((iVar1 != 0) && (iVar1 = BN_gcd(r_01,pBVar3,param_5,param_8), iVar1 != 0)) &&
               (iVar1 = BN_is_one(r_01), iVar1 != 0)) &&
              ((pBVar4 = BN_mod_inverse(ret,param_5,pBVar3,param_8), pBVar4 != (BIGNUM *)0x0 &&
               (iVar1 = BN_mul(ret,ret,param_5,param_8), iVar1 != 0)))) &&
             ((pBVar4 = BN_mod_inverse(r_01,pBVar3,param_5,param_8), pBVar4 != (BIGNUM *)0x0 &&
              ((iVar1 = BN_mul(r_01,r_01,pBVar3,param_8), iVar1 != 0 &&
               (iVar1 = BN_sub(ret,ret,r_01), iVar1 != 0)))))) &&
            (iVar1 = BN_mul(r_02,pBVar3,param_5,param_8), iVar1 != 0)) &&
           ((iVar1 = BN_is_negative(ret), iVar1 == 0 || (iVar1 = BN_add(ret,ret,r_02), iVar1 != 0)))
           ) {
          if (param_3 == (BIGNUM *)0x0) goto LAB_005b78d7;
          do {
            iVar1 = BN_mod_sub(param_1,ret,param_2,r_02,param_8);
            if ((iVar1 == 0) || (iVar1 = BN_add(param_1,param_1,param_2), iVar1 == 0))
            goto LAB_005b7630;
            iVar1 = 0;
            while (iVar2 = BN_num_bits(param_1), iVar2 <= param_6) {
              BN_GENCB_call(param_9,0,2);
              pBVar3 = BN_copy(a,param_1);
              if ((pBVar3 == (BIGNUM *)0x0) ||
                 ((iVar2 = BN_sub_word(a,1), iVar2 == 0 ||
                  (iVar2 = BN_gcd(r_01,a,param_7,param_8), iVar2 == 0)))) goto LAB_005b7630;
              iVar2 = BN_is_one(r_01);
              if (iVar2 != 0) {
                iVar2 = BN_check_prime(param_1,param_8,param_9);
                if (0 < iVar2) goto LAB_005b790a;
                if (iVar2 != 0) goto LAB_005b7630;
              }
              iVar1 = iVar1 + 1;
              if ((param_6 * 5 <= iVar1) || (iVar2 = BN_add(param_1,param_1,r_02), iVar2 == 0))
              goto LAB_005b7630;
            }
            if (param_3 != (BIGNUM *)0x0) goto LAB_005b7630;
LAB_005b78d7:
            iVar1 = BN_priv_rand_range_ex(param_2,r_00,0,param_8);
          } while ((iVar1 != 0) && (iVar1 = BN_add(param_2,param_2,r), iVar1 != 0));
LAB_005b790a:
          uVar5 = 1;
          BN_GENCB_call(param_9,3,0);
          goto LAB_005b7633;
        }
      }
    }
  }
LAB_005b7630:
  uVar5 = 0;
LAB_005b7633:
  BN_clear(a);
  BN_CTX_end(param_8);
  return uVar5;
}

