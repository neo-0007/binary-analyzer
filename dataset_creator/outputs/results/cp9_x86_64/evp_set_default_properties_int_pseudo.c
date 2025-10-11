
undefined4
evp_set_default_properties_int
          (undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_2 != 0) && (param_2 = ossl_parse_query(param_1,param_2,1), param_2 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/evp_fetch.c",0x1fa,"evp_set_default_properties_int");
    ERR_set_error(6,0xd2,0);
    return 0;
  }
  iVar1 = evp_set_parsed_default_properties(param_1,param_2,param_3,param_4);
  if (iVar1 != 0) {
    return 1;
  }
  ossl_property_free(param_2);
  return 0;
}

