
undefined8 EVP_PKEY_set_bn_param(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (((param_3 != 0 && param_1 != 0) && (param_2 != 0)) &&
     ((*(long *)(param_1 + 0x20) != 0 || (*(long *)(param_1 + 0x68) != 0)))) {
    uVar1 = EVP_PKEY_set_bn_param_part_0();
    return uVar1;
  }
  return 0;
}

