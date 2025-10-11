
undefined8 ossl_rsa_sp800_56b_pairwise_test(long param_1,BN_CTX *param_2)

{
  int iVar1;
  BIGNUM *r;
  BIGNUM *a;
  undefined8 uVar2;
  
  uVar2 = 0;
  BN_CTX_start(param_2);
  r = BN_CTX_get(param_2);
  a = BN_CTX_get(param_2);
  if (a != (BIGNUM *)0x0) {
    BN_set_flags(a,4);
    iVar1 = BN_set_word(a,2);
    if (iVar1 != 0) {
      iVar1 = BN_mod_exp(r,a,*(BIGNUM **)(param_1 + 0x30),*(BIGNUM **)(param_1 + 0x28),param_2);
      if (iVar1 != 0) {
        iVar1 = BN_mod_exp(r,r,*(BIGNUM **)(param_1 + 0x38),*(BIGNUM **)(param_1 + 0x28),param_2);
        if (iVar1 != 0) {
          iVar1 = BN_cmp(a,r);
          if (iVar1 == 0) {
            uVar2 = 1;
            goto LAB_0055e129;
          }
        }
      }
    }
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("../crypto/rsa/rsa_sp800_56b_gen.c",0x1b4,"ossl_rsa_sp800_56b_pairwise_test");
    ERR_set_error(4,0xb1,0);
  }
LAB_0055e129:
  BN_CTX_end(param_2);
  return uVar2;
}

