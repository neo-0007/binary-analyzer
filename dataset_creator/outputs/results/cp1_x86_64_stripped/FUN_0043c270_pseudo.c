
undefined8
FUN_0043c270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = DAT_00940eb8;
  if (DAT_00940eb8 != (code *)0x0) {
    uVar1 = FUN_004852b0();
                    /* WARNING: Could not recover jumptable at 0x0043c2c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_3,param_4,param_5,param_6);
    return uVar1;
  }
  return 0;
}

