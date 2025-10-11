
undefined8
ossl_dsa_sign_int(undefined8 param_1,uchar *param_2,int param_3,uchar *param_4,int *param_5,
                 DSA *param_6)

{
  DSA_METHOD *pDVar1;
  int iVar2;
  DSA_METHOD *pDVar3;
  DSA_SIG *a;
  uchar *local_30;
  
  local_30 = param_4;
  if (param_6[1].pub_key != (BIGNUM *)0x0) {
    pDVar1 = (DSA_METHOD *)param_6[1].p;
    pDVar3 = DSA_get_default_method();
    if (pDVar1 == pDVar3) {
      a = (DSA_SIG *)ossl_dsa_do_sign_int(param_2,param_3,param_6);
      goto LAB_004ce08d;
    }
  }
  a = DSA_do_sign(param_2,param_3,param_6);
LAB_004ce08d:
  if (a != (DSA_SIG *)0x0) {
    iVar2 = i2d_DSA_SIG(a,&local_30);
    *param_5 = iVar2;
    DSA_SIG_free(a);
    return 1;
  }
  *param_5 = 0;
  return 0;
}

