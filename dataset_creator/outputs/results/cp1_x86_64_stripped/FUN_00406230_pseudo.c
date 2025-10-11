
undefined8 FUN_00406230(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xd8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    uVar1 = FUN_0040aae0();
    uVar1 = FUN_00420b60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0040625a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1);
    return uVar1;
  }
  return 0;
}

