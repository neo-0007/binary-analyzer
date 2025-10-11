
byte ossl_global_properties_no_mirrored(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = ossl_lib_ctx_get_data(param_1,0xe,ossl_ctx_global_properties_method);
  bVar2 = 0;
  if (lVar1 != 0) {
    bVar2 = *(byte *)(lVar1 + 8) & 1;
  }
  return bVar2;
}

