
undefined8 EVP_CIPHER_gettable_params(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xe8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    uVar1 = EVP_CIPHER_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0040b14a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1);
    return uVar1;
  }
  return 0;
}

