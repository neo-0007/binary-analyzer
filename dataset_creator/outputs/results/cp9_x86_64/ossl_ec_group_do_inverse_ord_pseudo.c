
ulong ossl_ec_group_do_inverse_ord
                (long *param_1,undefined8 param_2,undefined8 param_3,BN_CTX *param_4)

{
  int iVar1;
  ulong uVar2;
  BIGNUM *a;
  BN_CTX *c;
  
  if (*(code **)(*param_1 + 400) == (code *)0x0) {
    if ((param_1[0x12] == 0) ||
       ((c = (BN_CTX *)0x0, param_4 == (BN_CTX *)0x0 &&
        (c = (BN_CTX *)BN_CTX_secure_new(), param_4 = c, c == (BN_CTX *)0x0)))) {
      uVar2 = 0;
    }
    else {
      BN_CTX_start(param_4);
      a = BN_CTX_get(param_4);
      if (((a == (BIGNUM *)0x0) || (iVar1 = BN_set_word(a,2), iVar1 == 0)) ||
         (iVar1 = BN_sub(a,(BIGNUM *)param_1[2],a), iVar1 == 0)) {
        uVar2 = 0;
      }
      else {
        iVar1 = bn_mod_exp_mont_fixed_top(param_2,param_3,a,param_1[2],param_4,param_1[0x12]);
        uVar2 = (ulong)(iVar1 != 0);
      }
      BN_CTX_end(param_4);
      BN_CTX_free(c);
    }
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x004e519b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 400))();
  return uVar2;
}

