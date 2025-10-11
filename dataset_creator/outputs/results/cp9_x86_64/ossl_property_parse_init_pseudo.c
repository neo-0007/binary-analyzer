
bool ossl_property_parse_init(undefined8 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  
  pcVar3 = "provider";
  puVar2 = predefined_names_0;
  while( true ) {
    iVar1 = ossl_property_name(param_1,pcVar3,1);
    if (iVar1 == 0) {
      return false;
    }
    puVar2 = (undefined1 *)((long)puVar2 + 8);
    if (puVar2 == property_string_data_method) break;
    pcVar3 = *(char **)puVar2;
  }
  iVar1 = ossl_property_value(param_1,"yes",1);
  if (iVar1 != 1) {
    return false;
  }
  iVar1 = ossl_property_value(param_1,"no",1);
  return iVar1 == 2;
}

