
undefined8 ossl_ffc_validate_private_key(BIGNUM *param_1,BIGNUM *param_2,uint *param_3)

{
  int iVar1;
  BIGNUM *b;
  undefined8 uVar2;
  
  *param_3 = 0;
  if ((param_2 == (BIGNUM *)0x0) || (param_1 == (BIGNUM *)0x0)) {
    *param_3 = 0x40;
    uVar2 = 0;
  }
  else {
    b = BN_value_one();
    iVar1 = BN_cmp(param_2,b);
    if (iVar1 < 0) {
      *param_3 = *param_3 | 0x10;
      return 0;
    }
    iVar1 = BN_cmp(param_2,param_1);
    uVar2 = 1;
    if (-1 < iVar1) {
      *param_3 = *param_3 | 0x20;
      return 0;
    }
  }
  return uVar2;
}

