
undefined8 EVP_KEM_settable_ctx_params(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar1 = EVP_KEM_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x005299c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x80))(0,uVar1);
    return uVar1;
  }
  return 0;
}

