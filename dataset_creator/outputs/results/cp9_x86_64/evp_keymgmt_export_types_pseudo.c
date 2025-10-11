
undefined8 evp_keymgmt_export_types(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0xd0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0052b395. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xd0))(param_2);
    return uVar1;
  }
  return 0;
}

