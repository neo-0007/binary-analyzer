
undefined8 ossl_DER_w_bn(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = BN_is_negative(param_3);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = BN_is_zero(param_3);
  if (iVar1 == 0) {
    uVar2 = int_der_w_integer(param_1,param_2,int_put_bytes_bn,param_3);
    return uVar2;
  }
  uVar2 = ossl_DER_w_ulong(param_1,param_2,0);
  return uVar2;
}

