
undefined8 ossl_property_get_string_value(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 4) == 0)) {
    uVar1 = ossl_property_value_str(param_1,*(undefined4 *)(param_2 + 0x10));
    return uVar1;
  }
  return 0;
}

