
undefined8 evp_keymgmt_newdata(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = EVP_KEYMGMT_get0_provider();
  uVar1 = ossl_provider_ctx(uVar1);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0052aff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x30))(uVar1);
    return uVar1;
  }
  return 0;
}

