
int DSA_generate_key(DSA *a)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  BN_CTX *c;
  BIGNUM *a_00;
  BIGNUM *a_01;
  
  UNRECOVERED_JUMPTABLE = *(code **)&a[1].p[3].neg;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004cbe39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    return iVar1;
  }
  c = (BN_CTX *)BN_CTX_new_ex(a[1].pub_key);
  if ((c == (BN_CTX *)0x0) ||
     ((a_00 = *(BIGNUM **)&(a->ex_data).dummy, a_00 == (BIGNUM *)0x0 &&
      (a_00 = (BIGNUM *)BN_secure_new(), a_00 == (BIGNUM *)0x0)))) {
    a_00 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
  }
  else {
    a_01 = (BIGNUM *)0x0;
    iVar1 = ossl_ffc_params_simple_validate(a[1].pub_key,&a->version,0,0);
    if (iVar1 != 0) {
      iVar1 = BN_num_bits(*(BIGNUM **)&a->write_params);
      iVar1 = ossl_ffc_generate_private_key(c,&a->version,iVar1,0x50,a_00);
      if ((iVar1 != 0) &&
         (((a_01 = (BIGNUM *)(a->ex_data).sk, a_01 != (BIGNUM *)0x0 ||
           (a_01 = BN_new(), a_01 != (BIGNUM *)0x0)) &&
          (iVar1 = ossl_dsa_generate_public_key(c,a,a_00,a_01), iVar1 != 0)))) {
        (a->ex_data).sk = (stack_st_void *)a_01;
        iVar1 = 1;
        a[1].priv_key = (BIGNUM *)((long)&(a[1].priv_key)->d + 1);
        *(BIGNUM **)&(a->ex_data).dummy = a_00;
        goto LAB_004cbea5;
      }
    }
  }
  if ((BIGNUM *)(a->ex_data).sk != a_01) {
    BN_free(a_01);
  }
  iVar1 = 0;
  if (*(BIGNUM **)&(a->ex_data).dummy != a_00) {
    BN_free(a_00);
    iVar1 = 0;
  }
LAB_004cbea5:
  BN_CTX_free(c);
  return iVar1;
}

