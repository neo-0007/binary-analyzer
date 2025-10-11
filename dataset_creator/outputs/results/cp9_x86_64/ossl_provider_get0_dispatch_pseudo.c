
undefined8 ossl_provider_get0_dispatch(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
  }
  return uVar1;
}

