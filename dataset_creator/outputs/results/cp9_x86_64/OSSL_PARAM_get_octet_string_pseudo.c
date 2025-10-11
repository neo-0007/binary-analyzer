
undefined8 OSSL_PARAM_get_octet_string(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 local_10 [2];
  
  if (((param_2 != 0 || param_4 != 0) && (param_1 != 0)) && (*(int *)(param_1 + 8) == 5)) {
    local_10[0] = param_3;
    uVar1 = get_string_internal_part_0(param_1,param_2,local_10,param_4,5);
    return uVar1;
  }
  return 0;
}

