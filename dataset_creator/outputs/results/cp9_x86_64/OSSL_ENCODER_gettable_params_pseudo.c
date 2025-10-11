
undefined8 OSSL_ENCODER_gettable_params(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar1 = OSSL_ENCODER_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0050ac19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x50))(uVar1);
    return uVar1;
  }
  return 0;
}

