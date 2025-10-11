
undefined8 evp_keymgmt_load(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = evp_keymgmt_has_load();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0052b19b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1 + 0x90))(param_2,param_3);
    return uVar2;
  }
  return 0;
}

