
int ossl_rsa_sp800_56b_generate_key
              (long param_1,undefined4 param_2,BIGNUM *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  BN_CTX *c;
  BIGNUM *a;
  
  iVar1 = ossl_rsa_sp800_56b_validate_strength(param_2,0xffffffff);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = RAND_get0_private(*(undefined8 *)(param_1 + 8));
  if (lVar2 == 0) {
    return 0;
  }
  c = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 8));
  if (c == (BN_CTX *)0x0) {
    return 0;
  }
  a = param_3;
  if (param_3 == (BIGNUM *)0x0) {
    a = BN_new();
    if (a == (BIGNUM *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = BN_set_word(a,0x10001);
      if (iVar1 != 0) goto LAB_0055e216;
    }
  }
  else {
LAB_0055e216:
    do {
      iVar1 = ossl_rsa_fips186_4_gen_prob_primes(param_1,0,param_2,a,c,param_4);
      if (iVar1 == 0) {
LAB_0055e22f:
        iVar1 = 0;
        goto LAB_0055e231;
      }
      iVar1 = ossl_rsa_sp800_56b_derive_params_from_pq(param_1,param_2,a,c);
      if (iVar1 < 0) goto LAB_0055e22f;
    } while (iVar1 == 0);
    iVar1 = ossl_rsa_sp800_56b_pairwise_test(param_1,c);
LAB_0055e231:
    if (param_3 != (BIGNUM *)0x0) goto LAB_0055e236;
  }
  BN_free(a);
LAB_0055e236:
  BN_CTX_free(c);
  return iVar1;
}

