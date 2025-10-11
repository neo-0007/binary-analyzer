
undefined4
ossl_rsa_sp800_56b_check_keypair(long param_1,BIGNUM *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *pBVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((((*(long *)(param_1 + 0x40) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
      (*(long *)(param_1 + 0x30) == 0)) ||
     ((*(long *)(param_1 + 0x38) == 0 || (*(long *)(param_1 + 0x28) == 0)))) {
    ERR_new();
    uVar3 = 0x182;
LAB_0055d841:
    ERR_set_debug("../crypto/rsa/rsa_sp800_56b_check.c",uVar3,"ossl_rsa_sp800_56b_check_keypair");
    ERR_set_error(4,0xaf,0);
    return 0;
  }
  iVar1 = ossl_rsa_sp800_56b_validate_strength(param_4,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  pBVar2 = *(BIGNUM **)(param_1 + 0x30);
  if (param_2 != (BIGNUM *)0x0) {
    iVar1 = BN_cmp(param_2,pBVar2);
    if (iVar1 != 0) {
      ERR_new();
      uVar3 = 0x18d;
      goto LAB_0055d841;
    }
    pBVar2 = *(BIGNUM **)(param_1 + 0x30);
  }
  iVar1 = ossl_rsa_check_public_exponent(pBVar2);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_sp800_56b_check.c",0x194,"ossl_rsa_sp800_56b_check_keypair");
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x28));
  if (iVar1 != param_4) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_sp800_56b_check.c",0x199,"ossl_rsa_sp800_56b_check_keypair");
    ERR_set_error(4,0xab,0);
    return 0;
  }
  ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 8));
  if (ctx == (BN_CTX *)0x0) {
    return 0;
  }
  BN_CTX_start(ctx);
  pBVar2 = BN_CTX_get(ctx);
  if ((pBVar2 != (BIGNUM *)0x0) &&
     (iVar1 = BN_mul(pBVar2,*(BIGNUM **)(param_1 + 0x40),*(BIGNUM **)(param_1 + 0x48),ctx),
     iVar1 != 0)) {
    iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x28),pBVar2);
    if (iVar1 == 0) {
      iVar1 = ossl_rsa_check_prime_factor
                        (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),param_4,ctx
                        );
      if ((((iVar1 == 0) ||
           (iVar1 = ossl_rsa_check_prime_factor
                              (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x30),
                               param_4,ctx), iVar1 == 0)) ||
          (iVar1 = ossl_rsa_check_pminusq_diff
                             (pBVar2,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48)
                              ,param_4), iVar1 < 1)) ||
         ((iVar1 = ossl_rsa_check_private_exponent(param_1,param_4,ctx), iVar1 == 0 ||
          (iVar1 = ossl_rsa_check_crt_components(param_1,ctx), iVar1 == 0)))) {
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_sp800_56b_check.c",0x1b4,"ossl_rsa_sp800_56b_check_keypair"
                     );
        ERR_set_error(4,0xab,0);
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      goto LAB_0055d969;
    }
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_sp800_56b_check.c",0x1a7,"ossl_rsa_sp800_56b_check_keypair");
    ERR_set_error(4,0xaf,0);
  }
  uVar4 = 0;
LAB_0055d969:
  BN_clear(pBVar2);
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  return uVar4;
}

