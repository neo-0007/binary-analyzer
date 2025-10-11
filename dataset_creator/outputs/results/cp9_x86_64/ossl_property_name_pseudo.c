
undefined8 ossl_property_name(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_data(param_1,3,property_string_data_method);
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1 + 3;
    if (param_3 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    uVar2 = ossl_property_string(*puVar1,puVar1[1],puVar3,param_2);
    return uVar2;
  }
  return 0;
}

