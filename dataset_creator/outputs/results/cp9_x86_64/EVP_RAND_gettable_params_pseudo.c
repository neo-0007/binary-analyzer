
undefined8 EVP_RAND_gettable_params(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x88);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    uVar1 = EVP_RAND_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00526c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1);
    return uVar1;
  }
  return 0;
}

