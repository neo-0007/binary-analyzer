
undefined8 provider_free_intern(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    ossl_provider_free();
    return 1;
  }
  uVar1 = ossl_provider_deactivate(param_1,1);
  return uVar1;
}

