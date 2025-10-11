
undefined8 crl_inf_cb(int param_1,long *param_2)

{
  long lVar1;
  
  if (((*param_2 != 0) && (lVar1 = *(long *)(*param_2 + 0x30), param_1 == 5)) && (lVar1 != 0)) {
    OPENSSL_sk_set_cmp_func(lVar1,X509_REVOKED_cmp);
    return 1;
  }
  return 1;
}

