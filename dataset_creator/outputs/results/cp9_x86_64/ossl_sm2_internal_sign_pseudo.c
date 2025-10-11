
undefined8
ossl_sm2_internal_sign(uchar *param_1,int param_2,uchar *param_3,int *param_4,undefined8 param_5)

{
  int iVar1;
  BIGNUM *a;
  ECDSA_SIG *sig;
  undefined8 uVar2;
  undefined8 uVar3;
  uchar *local_30 [2];
  
  local_30[0] = param_3;
  a = BN_bin2bn(param_1,param_2,(BIGNUM *)0x0);
  if (a == (BIGNUM *)0x0) {
    ERR_new();
    sig = (ECDSA_SIG *)0x0;
    uVar3 = 0xffffffff;
    ERR_set_debug("../crypto/sm2/sm2_sign.c",0x1bf,"ossl_sm2_internal_sign");
    ERR_set_error(0x35,0x80003,0);
  }
  else {
    sig = (ECDSA_SIG *)sm2_sig_gen(param_5,a);
    if (sig == (ECDSA_SIG *)0x0) {
      ERR_new();
      uVar2 = 0x1c5;
    }
    else {
      iVar1 = i2d_ECDSA_SIG(sig,local_30);
      if (-1 < iVar1) {
        *param_4 = iVar1;
        uVar3 = 1;
        goto LAB_0057d80c;
      }
      ERR_new();
      uVar2 = 0x1cb;
    }
    uVar3 = 0xffffffff;
    ERR_set_debug("../crypto/sm2/sm2_sign.c",uVar2,"ossl_sm2_internal_sign");
    ERR_set_error(0x35,0xc0103,0);
  }
LAB_0057d80c:
  ECDSA_SIG_free(sig);
  BN_free(a);
  return uVar3;
}

