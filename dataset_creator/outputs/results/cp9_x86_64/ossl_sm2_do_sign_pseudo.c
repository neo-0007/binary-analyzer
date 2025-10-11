
undefined8 ossl_sm2_do_sign(undefined8 param_1,undefined8 param_2)

{
  BIGNUM *a;
  undefined8 uVar1;
  
  a = (BIGNUM *)sm2_compute_msg_hash(param_2,param_1);
  if (a == (BIGNUM *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sm2_sig_gen(param_1,a);
  }
  BN_free(a);
  return uVar1;
}

