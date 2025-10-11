
undefined8 OSSL_PROVIDER_unload(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_provider_deactivate(param_1,1);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  ossl_provider_free(param_1);
  return 1;
}

