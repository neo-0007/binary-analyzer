
undefined8 EVP_PKEY_get_bn_param(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = EVP_PKEY_get_bn_param_part_0();
    return uVar1;
  }
  return 0;
}

