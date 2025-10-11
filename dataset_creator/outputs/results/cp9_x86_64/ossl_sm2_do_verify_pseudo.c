
undefined4
ossl_sm2_do_verify(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  BIGNUM *a;
  
  uVar1 = 0;
  a = (BIGNUM *)sm2_compute_msg_hash(param_2,param_1,param_4,param_5,param_6,param_7);
  if (a != (BIGNUM *)0x0) {
    uVar1 = sm2_sig_verify(param_1,param_3,a);
  }
  BN_free(a);
  return uVar1;
}

