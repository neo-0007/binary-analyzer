
char * evp_get_global_properties_str(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  
  puVar1 = (undefined8 *)ossl_ctx_global_properties();
  if (puVar1 == (undefined8 *)0x0) {
    pcVar3 = CRYPTO_strdup("","../crypto/evp/evp_fetch.c",0x245);
    return pcVar3;
  }
  lVar2 = ossl_property_list_to_string(param_1,*puVar1,0,0);
  if (lVar2 != 0) {
    pcVar3 = (char *)CRYPTO_malloc((int)lVar2,"../crypto/evp/evp_fetch.c",0x24d);
    if (pcVar3 == (char *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/evp_fetch.c",0x24f,"evp_get_global_properties_str");
      ERR_set_error(6,0xc0100,0);
    }
    else {
      lVar2 = ossl_property_list_to_string(param_1,*puVar1,pcVar3,lVar2);
      if (lVar2 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/evp/evp_fetch.c",0x253,"evp_get_global_properties_str");
        ERR_set_error(6,0xc0103,0);
        CRYPTO_free(pcVar3);
        pcVar3 = (char *)0x0;
      }
    }
    return pcVar3;
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/evp_fetch.c",0x249,"evp_get_global_properties_str");
  ERR_set_error(6,0xc0103,0);
  return (char *)0x0;
}

