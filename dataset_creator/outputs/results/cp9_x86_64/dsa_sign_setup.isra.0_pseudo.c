
undefined4
dsa_sign_setup_isra_0
          (long param_1,BN_CTX *param_2,undefined8 *param_3,BIGNUM *param_4,long param_5,int param_6
          )

{
  code *pcVar1;
  BIGNUM *a;
  int iVar2;
  int iVar3;
  int iVar4;
  BIGNUM *a_00;
  BIGNUM *r;
  long lVar5;
  BN_MONT_CTX *pBVar6;
  BIGNUM *a_01;
  BIGNUM *r_00;
  undefined4 uVar7;
  BN_CTX *local_50;
  
  if (((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/dsa/dsa_ossl.c",0xd0,"dsa_sign_setup");
    ERR_set_error(10,0x65,0);
    return 0;
  }
  iVar2 = BN_is_zero();
  if (((iVar2 != 0) || (iVar2 = BN_is_zero(*(undefined8 *)(param_1 + 0x10)), iVar2 != 0)) ||
     (iVar2 = BN_is_zero(*(undefined8 *)(param_1 + 0x18)), iVar2 != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/dsa/dsa_ossl.c",0xd8,"dsa_sign_setup");
    ERR_set_error(10,0x70,0);
    return 0;
  }
  uVar7 = 0;
  if (*(long *)(param_1 + 0x70) == 0) {
    ERR_new();
    ERR_set_debug("../crypto/dsa/dsa_ossl.c",0xdc,"dsa_sign_setup");
    ERR_set_error(10,0x6f,0);
    return 0;
  }
  a_00 = BN_new();
  r = BN_new();
  if (((a_00 == (BIGNUM *)0x0) || (r == (BIGNUM *)0x0)) ||
     ((local_50 = param_2, param_2 == (BN_CTX *)0x0 &&
      (local_50 = (BN_CTX *)BN_CTX_new_ex(0), local_50 == (BN_CTX *)0x0)))) {
    local_50 = (BN_CTX *)0x0;
  }
  else {
    iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
    iVar3 = bn_get_top(*(undefined8 *)(param_1 + 0x10));
    iVar3 = iVar3 + 2;
    lVar5 = bn_wexpand(a_00,iVar3);
    if ((lVar5 != 0) && (lVar5 = bn_wexpand(r,iVar3), lVar5 != 0)) {
      do {
        if (param_5 == 0) {
          iVar4 = BN_priv_rand_range_ex(a_00,*(undefined8 *)(param_1 + 0x10),0,local_50);
        }
        else {
          iVar4 = BN_generate_dsa_nonce
                            (a_00,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x70),
                             param_5,(long)param_6,local_50);
        }
        if (iVar4 == 0) goto LAB_004ccd10;
        iVar4 = BN_is_zero(a_00);
      } while (iVar4 != 0);
      BN_set_flags(a_00,4);
      BN_set_flags(r,4);
      if (((((*(byte *)(param_1 + 0x78) & 1) == 0) ||
           (pBVar6 = BN_MONT_CTX_set_locked
                               ((BN_MONT_CTX **)(param_1 + 0x80),
                                (int)*(undefined8 *)(param_1 + 0xb0),*(BIGNUM **)(param_1 + 8),
                                local_50), pBVar6 != (BN_MONT_CTX *)0x0)) &&
          (iVar4 = BN_add(r,a_00,*(BIGNUM **)(param_1 + 0x10)), iVar4 != 0)) &&
         (iVar4 = BN_add(a_00,r,*(BIGNUM **)(param_1 + 0x10)), iVar4 != 0)) {
        iVar2 = BN_is_bit_set(r,iVar2);
        BN_consttime_swap((long)iVar2,a_00,r,iVar3);
        pcVar1 = *(code **)(*(long *)(param_1 + 0xa0) + 0x28);
        if (pcVar1 == (code *)0x0) {
          iVar2 = BN_mod_exp_mont(param_4,*(BIGNUM **)(param_1 + 0x18),a_00,
                                  *(BIGNUM **)(param_1 + 8),local_50,
                                  *(BN_MONT_CTX **)(param_1 + 0x80));
        }
        else {
          iVar2 = (*pcVar1)(param_1,param_4,*(undefined8 *)(param_1 + 0x18),a_00,
                            *(undefined8 *)(param_1 + 8),local_50,*(undefined8 *)(param_1 + 0x80));
        }
        if ((iVar2 != 0) &&
           (iVar2 = BN_div((BIGNUM *)0x0,param_4,param_4,*(BIGNUM **)(param_1 + 0x10),local_50),
           iVar2 != 0)) {
          a = *(BIGNUM **)(param_1 + 0x10);
          a_01 = BN_new();
          if (a_01 != (BIGNUM *)0x0) {
            BN_CTX_start(local_50);
            r_00 = BN_CTX_get(local_50);
            if (((r_00 != (BIGNUM *)0x0) && (iVar2 = BN_set_word(a_01,2), iVar2 != 0)) &&
               ((iVar2 = BN_sub(r_00,a,a_01), iVar2 != 0 &&
                (iVar2 = BN_mod_exp_mont(a_01,a_00,r_00,a,local_50,(BN_MONT_CTX *)0x0), iVar2 != 0))
               )) {
              uVar7 = 1;
              BN_CTX_end(local_50);
              BN_clear_free((BIGNUM *)*param_3);
              *param_3 = a_01;
              goto LAB_004ccd40;
            }
            BN_free(a_01);
            BN_CTX_end(local_50);
          }
        }
      }
    }
  }
LAB_004ccd10:
  ERR_new();
  ERR_set_debug("../crypto/dsa/dsa_ossl.c",0x136,"dsa_sign_setup");
  ERR_set_error(10,0x80003,0);
LAB_004ccd40:
  if (param_2 != local_50) {
    BN_CTX_free(local_50);
  }
  BN_clear_free(a_00);
  BN_clear_free(r);
  return uVar7;
}

