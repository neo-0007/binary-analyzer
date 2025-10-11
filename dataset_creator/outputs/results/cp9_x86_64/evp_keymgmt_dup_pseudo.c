
undefined8 evp_keymgmt_dup(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0xd8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0052b3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xd8))(param_2,param_3);
    return uVar1;
  }
  return 0;
}

