
undefined8
evp_set_parsed_default_properties
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  void *ptr;
  undefined8 uVar5;
  
  lVar2 = ossl_lib_ctx_get_data(param_1,0,evp_method_store_method);
  puVar3 = (undefined8 *)ossl_ctx_global_properties(param_1,param_3);
  if ((puVar3 == (undefined8 *)0x0) || (lVar2 == 0)) {
    ERR_new();
    uVar5 = 0x1f0;
  }
  else {
    if (param_4 == 0) {
      ossl_global_properties_stop_mirroring();
    }
    else {
      iVar1 = ossl_global_properties_no_mirrored(param_1);
      if (iVar1 != 0) {
        return 0;
      }
    }
    lVar4 = ossl_property_list_to_string(param_1,param_2,0,0);
    if ((lVar4 == 0) ||
       (ptr = CRYPTO_malloc((int)lVar4,"../crypto/evp/evp_fetch.c",0x1dd), ptr == (void *)0x0)) {
      ERR_new();
      uVar5 = 0x1df;
    }
    else {
      lVar4 = ossl_property_list_to_string(param_1,param_2,ptr,lVar4);
      if (lVar4 != 0) {
        ossl_provider_default_props_update(param_1,ptr);
        CRYPTO_free(ptr);
        ossl_property_free(*puVar3);
        *puVar3 = param_2;
        uVar5 = ossl_method_store_cache_flush_all(lVar2);
        return uVar5;
      }
      CRYPTO_free(ptr);
      ERR_new();
      uVar5 = 0x1e5;
    }
  }
  ERR_set_debug("../crypto/evp/evp_fetch.c",uVar5,"evp_set_parsed_default_properties");
  ERR_set_error(6,0xc0103,0);
  return 0;
}

