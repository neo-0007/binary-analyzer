
undefined8 EVP_KDF_get_params(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00528703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x70))(param_2);
    return uVar1;
  }
  return 1;
}

