
undefined8 OSSL_ENCODER_get_params(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0x48) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0050ac45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x48))(param_2);
    return uVar1;
  }
  return 0;
}

