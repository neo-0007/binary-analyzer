
char rsa_cb(int param_1,long *param_2)

{
  int iVar1;
  RSA *pRVar2;
  
  if (param_1 == 0) {
    pRVar2 = RSA_new();
    *param_2 = (long)pRVar2;
    return (pRVar2 != (RSA *)0x0) * '\x02';
  }
  if (param_1 != 2) {
    if ((param_1 == 5) && (*(int *)(*param_2 + 0x10) == 1)) {
      iVar1 = ossl_rsa_multip_calc_product();
      return (iVar1 == 1) * '\x02';
    }
    return '\x01';
  }
  RSA_free((RSA *)*param_2);
  *param_2 = 0;
  return '\x02';
}

