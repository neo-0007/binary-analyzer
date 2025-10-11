
undefined8 evp_default_properties_enable_fips_int(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  pcVar6 = "-fips";
  if (param_2 != 0) {
    pcVar6 = "fips=yes";
  }
  plVar2 = (long *)ossl_ctx_global_properties(param_1,param_3);
  if ((plVar2 != (long *)0x0) && (*plVar2 != 0)) {
    lVar3 = ossl_parse_query(param_1,pcVar6,1);
    if (lVar3 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/evp_fetch.c",0x214,"evp_default_properties_merge");
      ERR_set_error(6,0xd2,0);
      uVar5 = 0;
    }
    else {
      lVar4 = ossl_property_merge(lVar3,*plVar2);
      ossl_property_free(lVar3);
      if (lVar4 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/evp/evp_fetch.c",0x21a,"evp_default_properties_merge");
        ERR_set_error(6,0xc0100,0);
        uVar5 = 0;
      }
      else {
        iVar1 = evp_set_parsed_default_properties(param_1,lVar4,0,0);
        if (iVar1 == 0) {
          ossl_property_free(lVar4);
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
      }
    }
    return uVar5;
  }
  uVar5 = evp_set_default_properties_int(param_1,pcVar6,0,0);
  return uVar5;
}

