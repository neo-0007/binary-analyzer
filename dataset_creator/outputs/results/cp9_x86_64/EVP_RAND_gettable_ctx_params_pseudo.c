
undefined8 EVP_RAND_gettable_ctx_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar1 = EVP_RAND_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00526c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x90))(0,uVar1);
    return uVar1;
  }
  return 0;
}

