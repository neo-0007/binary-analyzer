
undefined8
ossl_ecdsa_sign(undefined8 param_1,uchar *param_2,int param_3,uchar *param_4,int *param_5,
               BIGNUM *param_6,BIGNUM *param_7,EC_KEY *param_8)

{
  int iVar1;
  ECDSA_SIG *sig;
  uchar *local_20 [2];
  
  local_20[0] = param_4;
  sig = ECDSA_do_sign_ex(param_2,param_3,param_6,param_7,param_8);
  if (sig != (ECDSA_SIG *)0x0) {
    iVar1 = i2d_ECDSA_SIG(sig,local_20);
    *param_5 = iVar1;
    ECDSA_SIG_free(sig);
    return 1;
  }
  *param_5 = 0;
  return 0;
}

