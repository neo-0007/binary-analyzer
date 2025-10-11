
undefined8 evp_keymgmt_gen_set_template(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0052b066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x68))(param_2,param_3);
    return uVar1;
  }
  return 1;
}

