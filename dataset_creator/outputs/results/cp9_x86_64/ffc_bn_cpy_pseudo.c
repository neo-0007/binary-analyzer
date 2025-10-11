
undefined8 ffc_bn_cpy(undefined8 *param_1,BIGNUM *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == (BIGNUM *)0x0) ||
     (((iVar1 = BN_get_flags(param_2,2), iVar1 != 0 && (iVar1 = BN_get_flags(param_2,1), iVar1 == 0)
       ) || (param_2 = BN_dup(param_2), param_2 != (BIGNUM *)0x0)))) {
    BN_clear_free((BIGNUM *)*param_1);
    *param_1 = param_2;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

