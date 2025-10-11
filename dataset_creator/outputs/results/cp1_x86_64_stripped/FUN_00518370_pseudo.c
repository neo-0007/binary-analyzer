
undefined8 FUN_00518370(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar1 = FUN_00518090();
    uVar1 = FUN_00420b60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00518399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x50))(uVar1);
    return uVar1;
  }
  return 0;
}

