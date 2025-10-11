
undefined8 EVP_CIPHER_get_params(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0xd0) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0040b0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xd0))(param_2);
    return uVar1;
  }
  return 0;
}

