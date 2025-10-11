
undefined8 EVP_SIGNATURE_settable_ctx_params(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    uVar1 = EVP_SIGNATURE_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x004154d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xd0))(0,uVar1);
    return uVar1;
  }
  return 0;
}

