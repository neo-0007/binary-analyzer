
undefined4 ossl_rsa_sp800_56b_check_public(long param_1)

{
  int iVar1;
  int iVar2;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *b;
  undefined8 uVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  if ((*(BIGNUM **)(param_1 + 0x28) == (BIGNUM *)0x0) || (*(long *)(param_1 + 0x30) == 0))
  goto LAB_0055d5c0;
  iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x28));
  if (0x4000 < iVar1) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_sp800_56b_check.c",0x125,"ossl_rsa_sp800_56b_check_public");
    ERR_set_error(4,0x69,0);
    uVar4 = 0;
    goto LAB_0055d5c0;
  }
  iVar2 = BN_is_odd(*(undefined8 *)(param_1 + 0x28));
  if (iVar2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_sp800_56b_check.c",0x134,"ossl_rsa_sp800_56b_check_public");
    ERR_set_error(4,0xae,0);
    uVar4 = 0;
    goto LAB_0055d5c0;
  }
  iVar2 = ossl_rsa_check_public_exponent(*(undefined8 *)(param_1 + 0x30));
  if (iVar2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_sp800_56b_check.c",0x139,"ossl_rsa_sp800_56b_check_public");
    ERR_set_error(4,0xb2,0);
    uVar4 = 0;
    goto LAB_0055d5c0;
  }
  ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 8));
  r = BN_new();
  if ((ctx == (BN_CTX *)0x0) || (r == (BIGNUM *)0x0)) {
    uVar4 = 0;
  }
  else {
    b = (BIGNUM *)ossl_bn_get0_small_factors();
    iVar2 = BN_gcd(r,*(BIGNUM **)(param_1 + 0x28),b,ctx);
    if (iVar2 == 0) {
LAB_0055d57a:
      ERR_new();
      uVar3 = 0x148;
    }
    else {
      iVar2 = BN_is_one(r);
      if (iVar2 == 0) goto LAB_0055d57a;
      iVar2 = ossl_bn_miller_rabin_is_prime(*(undefined8 *)(param_1 + 0x28),5,ctx,0,1,&local_34);
      if ((iVar2 == 1) && ((uVar4 = 1, local_34 == 2 || ((local_34 == 1 && (iVar1 < 0x200))))))
      goto LAB_0055d5ad;
      ERR_new();
      uVar3 = 0x155;
    }
    uVar4 = 0;
    ERR_set_debug("../crypto/rsa/rsa_sp800_56b_check.c",uVar3,"ossl_rsa_sp800_56b_check_public");
    ERR_set_error(4,0xae,0);
  }
LAB_0055d5ad:
  BN_free(r);
  BN_CTX_free(ctx);
LAB_0055d5c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

