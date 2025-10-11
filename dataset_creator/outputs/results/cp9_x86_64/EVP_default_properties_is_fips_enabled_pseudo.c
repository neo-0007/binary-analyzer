
bool EVP_default_properties_is_fips_enabled(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  puVar2 = (undefined8 *)ossl_ctx_global_properties(param_1,1);
  bVar3 = false;
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = ossl_property_is_enabled(param_1,&DAT_007c470b,*puVar2);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

