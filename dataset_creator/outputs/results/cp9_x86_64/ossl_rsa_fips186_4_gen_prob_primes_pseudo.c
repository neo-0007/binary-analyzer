
undefined4
ossl_rsa_fips186_4_gen_prob_primes
          (long param_1,undefined8 param_2,int param_3,undefined8 param_4,BN_CTX *param_5,
          undefined8 param_6)

{
  int iVar1;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  if (param_3 < 0x800) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_sp800_56b_gen.c",0x5c,"ossl_rsa_fips186_4_gen_prob_primes");
    ERR_set_error(4,0x78,0);
    return 0;
  }
  iVar1 = ossl_rsa_check_public_exponent(param_4);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_sp800_56b_gen.c",0x61,"ossl_rsa_fips186_4_gen_prob_primes");
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  BN_CTX_start(param_5);
  a = BN_CTX_get(param_5);
  a_00 = BN_CTX_get(param_5);
  a_01 = BN_CTX_get(param_5);
  if (a == (BIGNUM *)0x0) {
    if (a_00 != (BIGNUM *)0x0) goto LAB_0055dc32;
  }
  else if (a_00 != (BIGNUM *)0x0) {
    if (a_01 == (BIGNUM *)0x0) {
LAB_0055dc32:
      uVar4 = 0;
    }
    else {
      BN_set_flags(a_00,4);
      BN_set_flags(a_01,4);
      if (*(long *)(param_1 + 0x40) == 0) {
        lVar2 = BN_secure_new();
        *(long *)(param_1 + 0x40) = lVar2;
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_0055dcb0;
        if (lVar2 != 0) goto LAB_0055daf8;
        goto LAB_0055dc32;
      }
      if (*(long *)(param_1 + 0x48) == 0) {
LAB_0055dcb0:
        lVar3 = BN_secure_new();
        lVar2 = *(long *)(param_1 + 0x40);
        *(long *)(param_1 + 0x48) = lVar3;
        if ((lVar2 == 0) || (lVar3 == 0)) goto LAB_0055dc32;
      }
      else {
        lVar2 = *(long *)(param_1 + 0x40);
      }
LAB_0055daf8:
      BN_set_flags(lVar2,4);
      BN_set_flags(*(undefined8 *)(param_1 + 0x48),4);
      iVar1 = ossl_bn_rsa_fips186_4_gen_prob_primes
                        (*(undefined8 *)(param_1 + 0x40),a_00,0,0,0,0,0,param_3,param_4,param_5,
                         param_6);
      if (iVar1 == 0) goto LAB_0055dc32;
      do {
        do {
          iVar1 = ossl_bn_rsa_fips186_4_gen_prob_primes
                            (*(undefined8 *)(param_1 + 0x48),a_01,0,0,0,0,0,param_3,param_4,param_5,
                             param_6);
          if (iVar1 == 0) goto LAB_0055dc32;
          iVar1 = ossl_rsa_check_pminusq_diff(a,a_00,a_01);
          if (iVar1 < 0) goto LAB_0055dc32;
        } while (iVar1 == 0);
        iVar1 = ossl_rsa_check_pminusq_diff
                          (a,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
        if (iVar1 < 0) goto LAB_0055dc32;
      } while (iVar1 == 0);
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
      uVar4 = 1;
    }
    BN_clear(a_00);
    goto LAB_0055dc3f;
  }
  uVar4 = 0;
LAB_0055dc3f:
  if (a_01 != (BIGNUM *)0x0) {
    BN_clear(a_01);
  }
  BN_clear(a);
  BN_CTX_end(param_5);
  return uVar4;
}

