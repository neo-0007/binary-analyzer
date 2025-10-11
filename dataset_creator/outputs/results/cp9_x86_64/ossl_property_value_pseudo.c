
undefined8 ossl_property_value(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_data(param_1,3,property_string_data_method);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)puVar1 + 0x1c;
    if (param_3 == 0) {
      lVar3 = 0;
    }
    uVar2 = ossl_property_string(*puVar1,puVar1[2],lVar3,param_2);
    return uVar2;
  }
  return 0;
}

